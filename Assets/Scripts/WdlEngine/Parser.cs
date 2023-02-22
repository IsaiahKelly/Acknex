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
            var peek = Peek();

            Debug.LogError($"Unknown construct {peek.Type}, {peek.Value}");
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
