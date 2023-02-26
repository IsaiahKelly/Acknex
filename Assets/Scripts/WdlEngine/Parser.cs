using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace WdlEngine
{
    internal sealed class Parser : TokenConsumerBase
    {
        public static void Parse(IEnumerable<Token> tokens)
        {
            var parser = new Parser(tokens);
            parser.Parse();
        }

        private Parser(IEnumerable<Token> tokens) 
            : base(tokens.GetEnumerator())
        {
        }

        private void Parse()
        {
            while (!Matches(TokenType.EndOfInput)) ParseSingle();
        }

        private void ParseSingle()
        {
            var peek = Consume();
            if (peek.Type == TokenType.Identifier)
            {
                var text = peek.ValueString;
                switch (text)
                {
                case "LIGHT_ANGLE":
                {
                    var value = ParseNumber();
                    Expect(TokenType.Semicolon);
                    // TODO: Handle
                    return;
                }
                case "NEXUS":
                {
                    var value = Expect(TokenType.Integer);
                    Expect(TokenType.Semicolon);
                    // TODO: Handle
                    return;
                }
                case "PATH":
                {
                    var path = Expect(TokenType.String);
                    Expect(TokenType.Semicolon);
                    // TODO: Do we even want to handle this?
                    // It's just an additional search path, we might not want to call out, but add it here?
                    // Will scripts use the info or the engine in some way?
                    return;
                }
                case "SKILL":
                {
                    var name = Expect(TokenType.Identifier);
                    Expect(TokenType.OpenBrace);
                    while (!Matches(TokenType.CloseBrace))
                    {
                        var property = Expect(TokenType.Identifier);
                        var value = Consume();
                        Expect(TokenType.Semicolon);
                        // TODO: handle property
                    }
                    // TODO: handle skill
                    return;
                }
                case "STRING":
                {
                    var name = Expect(TokenType.Identifier);
                    Expect(TokenType.Comma);
                    var value = Expect(TokenType.String);
                    Expect(TokenType.Semicolon);
                    // TODO: Again, where to handle this?
                    return;
                }
                case "VIDEO":
                {
                    var type = Expect(TokenType.Identifier);
                    Expect(TokenType.Semicolon);
                    // TODO: Again, where to handle this?
                    return;
                }
                }
            }

            Debug.LogError($"Unknown construct {peek.Type}, {peek.Value}");
            SkipStructure();
        }

        private float ParseNumber()
        {
            if (Matches(TokenType.Integer, out var integer)) return (int)integer.Value;
            if (Matches(TokenType.Real, out var real)) return (float)real.Value;
            throw new InvalidOperationException($"expected number, but got {Peek().Type}");
        }

        private void SkipStructure()
        {
            var depth = 0;
            while (true)
            {
                var consumed = Consume();
                if (consumed.Type == TokenType.OpenBrace) ++depth;
                if (consumed.Type == TokenType.EndOfInput) break;
                if (consumed.Type == TokenType.CloseBrace)
                {
                    --depth;
                    if (depth == 0) break;
                }
                if (consumed.Type == TokenType.Semicolon && depth == 0) break;
            }
        }
    }
}
