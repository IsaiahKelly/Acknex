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
                    var name = Expect(TokenType.Identifier).StringValue;
                    var objType = Utils.StringToObjectType(statementName);
                    var obj = _world.CreateObjectTemplate(objType, name);
                    Expect(TokenType.OpenBrace);
                    while (!Matches(TokenType.CloseBrace))
                    {
                        var (prop, value) = ParseProperty();
                        if (prop == "SCALE_XY")
                        {
                            // Just sugar
                            var (a, b) = (value as (float, float)?).Value;
                            obj["SCALE_X"] = a;
                            obj["SCALE_Y"] = b;
                        }
                        else
                        {
                            obj[prop] = value;
                        }
                    }
                    _world.PostSetupObjectTemplate(objType, obj);
                    return;
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
                {
                    var name = Expect(TokenType.String).StringValue;
                    _mapFileNames.Add(name);
                    Expect(TokenType.Semicolon);
                    return;
                }
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
                name == "FLAGS" || name == "BMAPS" ? ParseNameList() :
                name == "SCYCLES" || name == "DELAY" || name == "MIRROR" ? ParseIntList() :
                name == "SCALE_XY" ? ParseRealPair() :
                Consume().Value;
            Expect(TokenType.Semicolon);
            return (name, value);
        }

        private object ParseRealPair()
        {
            var first = Consume();
            Expect(TokenType.Comma);
            var second = Consume();
            return (first.NumericValue, second.NumericValue);
        }

        private List<string> ParseNameList() => ParseListOf(() => Expect(TokenType.Identifier).StringValue);
        private List<int> ParseIntList() => ParseListOf(() => Expect(TokenType.Integer).IntValue);

        private List<T> ParseListOf<T>(Func<T> elementParser)
        {
            var result = new List<T>();
            var first = elementParser();
            result.Add(first);
            while (Matches(TokenType.Comma))
            {
                var next = elementParser();
                result.Add(next);
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
