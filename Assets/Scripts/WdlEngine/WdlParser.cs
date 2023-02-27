using Acknex.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace WdlEngine
{
    internal sealed class WdlParser : TokenConsumerBase
    {
        public static WdlParseResult Parse(IAcknexWorld world, IEnumerable<Token> tokens)
        {
            var parser = new WdlParser(world, tokens);
            parser.Parse();
            return new WdlParseResult(parser._mapFileNames);
        }

        private readonly IAcknexWorld _world;
        private readonly List<string> _mapFileNames = new List<string>();

        private WdlParser(IAcknexWorld world, IEnumerable<Token> tokens) 
            : base(tokens.GetEnumerator())
        {
            _world = world;
        }

        private void Parse()
        {
            while (!Matches(TokenType.EndOfInput)) ParseStatement();
        }

        private void ParseStatement()
        {
            var statement = Consume();
            if (statement.Type == TokenType.Identifier)
            {
                var statementName = statement.StringValue;
                switch (statementName)
                {
                case "THING":
                case "ACTOR":
                case "OVERLAY":
                case "SYNONYM":
                case "SKILL":
                case "REGION":
                case "WALL":
                case "TEXTURE":
                {
                    // TODO
                    break;
                }

                case "BMAP":
                case "OVLY":
                {
                    // TODO
                    break;
                }

                case "ACTION":
                    // TODO: Actions will need special treatment
                    break;

                case "VIDEO":
                    // TODO: No interface
                    break;
                case "AMBIENT":
                    // TODO: No interface
                    break;
                case "LIGHT_ANGLE":
                    // TODO: No interface
                    break;
                case "PATH":
                    // TODO: No interface
                    break;
                case "MAPFILE":
                    // TODO: No interface
                    break;
                case "STRING":
                    // TODO: No interface
                    break;
                }
            }

            Debug.LogError($"Unknown construct {statement.Type}, {statement.Value}");
            SkipStructure();
        }

        private (string Name, object Value) ParseProperty()
        {
            var property = Expect(TokenType.Identifier);
            var name = property.StringValue;
            var value =
                name == "FLAGS" ? ParseFlagList() :
                name == "SCALE_XY" ? ParseValuePair() :
                Consume().Value;
            Expect(TokenType.Semicolon);
            return (property.StringValue, value);
        }

        private object ParseValuePair()
        {
            var first = Consume();
            Expect(TokenType.Comma);
            var second = Consume();
            return (first.Value, second.Value);
        }

        private List<string> ParseFlagList()
        {
            var result = new List<string>();
            var first = Expect(TokenType.Identifier);
            result.Add(first.StringValue);
            while (Matches(TokenType.Comma))
            {
                var next = Expect(TokenType.Identifier);
                result.Add(next.StringValue);
            }
            return result;
        }

        private float ParseNumber()
        {
            if (Matches(TokenType.Integer, out var integer)) return integer.IntValue;
            if (Matches(TokenType.Real, out var real)) return real.RealValue;
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
