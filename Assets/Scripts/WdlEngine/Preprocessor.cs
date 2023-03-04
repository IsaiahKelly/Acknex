using PlasticPipe.PlasticProtocol.Messages;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WdlEngine
{
    internal sealed class Preprocessor : TokenConsumerBase
    {
        public static IEnumerable<Token> Process(string rootPath, IEnumerable<Token> tokens)
        {
            var preprocessor = new Preprocessor(rootPath, tokens);
            while (true)
            {
                var token = preprocessor.Next();
                yield return token;
                if (token.Type == TokenType.EndOfInput) break;
            }
        }

        private enum ConditionState
        {
            True,
            False,
            FalseBelow,
        }

        private readonly Dictionary<string, Token> _defines = new Dictionary<string, Token>();
        private readonly Stack<ConditionState> _conditionStack = new Stack<ConditionState>();
        private readonly string _rootPath;

        private bool ConditionIsTrue => _conditionStack.Count == 0 || _conditionStack.Peek() == ConditionState.True;

        private Preprocessor(string rootPath, IEnumerable<Token> tokens)
            : base(tokens.GetEnumerator())
        {
            _rootPath = rootPath;
        }

        private Token Next()
        {
        start:
            var token = Consume();
            if (token.Type == TokenType.Identifier)
            {
                var text = token.StringValue;
                switch (text)
                {
                case "INCLUDE" when ConditionIsTrue:
                {
                    // We implement include by eating every part of the include directive
                    // And then we append the included tokens to the start of the peek buffer
                    var filename = Expect(TokenType.String);
                    Expect(TokenType.Semicolon);
                    var filePath = Path.Combine(_rootPath, filename.StringValue);
                    using (var streamReader = new StreamReader(File.OpenRead(filePath)))
                    {
                        var tokens = Lexer.Lex(streamReader).ToList();
                        // Chop off end of input
                        if (tokens[tokens.Count - 1].Type == TokenType.EndOfInput) tokens.RemoveAt(tokens.Count - 1);
                        // Prepend
                        PeekBuffer.InsertRange(0, tokens);
                    }
                    goto start;
                }

                case "DEFINE" when ConditionIsTrue:
                {
                    var name = Expect(TokenType.Identifier);
                    var value = default(Token);
                    // Optionally, there's a value after the comma
                    if (Matches(TokenType.Comma)) value = Expect(TokenType.Identifier);
                    Expect(TokenType.Semicolon);
                    // Define it
                    _defines[name.StringValue] = value;
                    goto start;
                }
                case "UNDEF" when ConditionIsTrue:
                {
                    var name = Expect(TokenType.Identifier);
                    Expect(TokenType.Semicolon);
                    // Remove define
                    _defines.Remove(name.StringValue);
                    goto start;
                }

                case "IFDEF":
                case "IFNDEF":
                {
                    if (ConditionIsTrue)
                    {
                        // We observe the condition
                        var name = Expect(TokenType.Identifier);
                        Expect(TokenType.Semicolon);
                        var condition = _defines.ContainsKey(name.StringValue);
                        if (text == "IFNDEF") condition = !condition;
                        _conditionStack.Push(condition ? ConditionState.True : ConditionState.False);
                    }
                    else
                    {
                        // The condition is false, this condition can NOT become true, even at the else state
                        // we push on a marker value to keep balance
                        _conditionStack.Push(ConditionState.FalseBelow);
                    }
                    goto start;
                }
                case "IFELSE":
                {
                    Expect(TokenType.Semicolon);
                    var condition = _conditionStack.Peek();
                    if (condition == ConditionState.True)
                    {
                        // Becomes false
                        _conditionStack.Pop();
                        _conditionStack.Push(ConditionState.False);
                    }
                    else if (condition == ConditionState.False)
                    {
                        // Becomes true
                        _conditionStack.Pop();
                        _conditionStack.Push(ConditionState.True);
                    }
                    else
                    {
                        // False below, it stays that way
                    }
                    goto start;
                }
                case "ENDIF":
                {
                    Expect(TokenType.Semicolon);
                    // Just pop off condition
                    _conditionStack.Pop();
                    goto start;
                }
                }

                // Our token was an identifier, but not for preprocessing
                // There is a chance it's a DEFINEd value, try look it up
                if (_defines.TryGetValue(token.StringValue, out var definedValue))
                {
                    // Yes it is, swap out token
                    token = definedValue;
                }
            }

            // Here we have a token that does not relate to preprocessing
            // If currently the condition is not true, we just drop the token
            if (!ConditionIsTrue) goto start;

            // Otherwise we are free to return it
            return token;
        }
    }
}
