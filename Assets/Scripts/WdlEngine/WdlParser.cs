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
        public static void Parse(IAcknexWorld world, IEnumerable<Token> tokens)
        {
            var parser = new WdlParser(world, tokens);
            parser.Parse();
        }

        private readonly IAcknexWorld _world;

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
                var statementName = statement.ValueString;
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
                    var name = Expect(TokenType.Identifier).ValueString;
                    var objType = Utils.StringToObjectType(statementName);
                    var obj = _world.CreateObject(objType, name, true);
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
                    return;
                }

                case "BMAP":
                case "OVLY":
                {
                    var name = Expect(TokenType.Identifier).ValueString;
                    var objType = Utils.StringToObjectType(statementName);
                    var obj = _world.CreateObject(objType, name, true);
                    Expect(TokenType.Comma);
                    obj["FILENAME"] = Expect(TokenType.String).ValueString;
                    if (Matches(TokenType.Comma))
                    {
                        obj["X"] = ParseNumber();
                        Expect(TokenType.Comma);
                        obj["Y"] = ParseNumber();
                        Expect(TokenType.Comma);
                        obj["DX"] = ParseNumber();
                        Expect(TokenType.Comma);
                        obj["DY"] = ParseNumber();
                    }
                    Expect(TokenType.Semicolon);
                    return;
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
            var name = property.ValueString;
            var value =
                name == "FLAGS" ? ParseFlagList() :
                name == "SCALE_XY" ? ParseValuePair() :
                Consume().Value;
            Expect(TokenType.Semicolon);
            return (property.ValueString, value);
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
            result.Add(first.ValueString);
            while (Matches(TokenType.Comma))
            {
                var next = Expect(TokenType.Identifier);
                result.Add(next.ValueString);
            }
            return result;
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
