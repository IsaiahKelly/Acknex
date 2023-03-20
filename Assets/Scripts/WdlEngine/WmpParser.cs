using Acknex.Interfaces;
using Codice.CM.Client.Differences;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using WdlEngine;

namespace WdlEngine
{
    internal sealed class WmpParser : TokenConsumerBase
    {
        public static void Parse(IAcknexWorld world, IEnumerable<Token> tokens)
        {
            var parser = new WmpParser(world, tokens);
            parser.Parse();
        }

        private readonly IAcknexWorld _world;

        private WmpParser(IAcknexWorld world, IEnumerable<Token> tokens)
            : base(tokens.GetEnumerator())
        {
            _world = world;
        }

        private void Parse()
        {
            while (!Matches(TokenType.EndOfInput)) ParseStatement();
            _world.PostSetupWMP();
        }

        private void ParseStatement()
        {
            var statement = Consume();
            if (statement.Type == TokenType.Identifier)
            {
                var statementName = statement.StringValue;
                switch (statementName)
                {
                case "PLAYER_START":
                {
                    var player = _world.GetObject(ObjectType.Player, null);
                    _world.UpdateSkillValue("PLAYER_X", ParseNumber());
                    _world.UpdateSkillValue("PLAYER_Y", ParseNumber());
                    _world.UpdateSkillValue("PLAYER_ANGLE", Mathf.Deg2Rad * ParseNumber());
                    player.SetFloat("REGION", Expect(TokenType.Integer).IntValue);
                    Expect(TokenType.Semicolon);
                    return;
                }
                case "THING":
                case "ACTOR":
                {
                    var type = Utils.StringToObjectType(statementName);
                    var name = Expect(TokenType.Identifier).StringValue;
                    var obj = _world.CreateObjectInstance(type, name);
                    obj.SetFloat("X", ParseNumber());
                    obj.SetFloat("Y", ParseNumber());
                    obj.SetFloat("ANGLE", Mathf.Deg2Rad * ParseNumber());
                    obj.SetFloat("REGION", Expect(TokenType.Integer).IntValue);
                    obj.IsInstance = true;
                    Expect(TokenType.Semicolon);
                    return;
                }
                case "VERTEX":
                {
                    var x = ParseNumber();
                    var y = ParseNumber();
                    var z = ParseNumber();
                    Expect(TokenType.Semicolon);
                    _world.AddVertex(x, y, z);
                    return;
                }
                case "REGION":
                {
                    var name = Expect(TokenType.Identifier).StringValue;
                    var region = _world.CreateObjectInstance(ObjectType.Region, name);
                    region.SetFloat("FLOOR_HGT", ParseNumber());
                    region.SetFloat("CEIL_HGT", ParseNumber());
                    region.IsInstance = true;
                    Expect(TokenType.Semicolon);
                    return;
                }
                case "WALL":
                {
                    var name = Expect(TokenType.Identifier).StringValue;
                    var obj = _world.CreateObjectInstance(ObjectType.Wall, name);
                    obj.SetFloat("VERTEX2", Expect(TokenType.Integer).IntValue);
                    obj.SetFloat("VERTEX1", Expect(TokenType.Integer).IntValue);
                    obj.SetFloat("REGION1", Expect(TokenType.Integer).IntValue);
                    obj.SetFloat("REGION2", Expect(TokenType.Integer).IntValue);
                    obj.SetFloat("OFFSET_X", ParseNumber());
                    obj.SetFloat("OFFSET_Y", ParseNumber());
                    obj.IsInstance = true;
                    Expect(TokenType.Semicolon);
                    return;
                }
                case "WAY":
                {
                    var name = Expect(TokenType.Identifier).StringValue;
                    var way = _world.CreateObjectInstance(ObjectType.Way, name);
                    while (!Matches(TokenType.Semicolon))
                    {
                        _world.AddWayPoint(way, ParseNumber(), ParseNumber());
                    }
                    way.IsInstance = true;
                    return;
                }
                }
            }

            Debug.LogError($"Unknown construct {statement.Type}, {statement.Value}");
            SkipStructure();
        }

        private float ParseNumber()
        {
            if (Matches(TokenType.Integer, out var integer)) return integer.IntValue;
            if (Matches(TokenType.Real, out var real)) return real.RealValue;
            throw new InvalidOperationException($"expected number, but got {Peek().Type}");
        }

        private void SkipStructure()
        {
            while (true)
            {
                var consumed = Consume();
                if (consumed.Type == TokenType.EndOfInput) break;
                if (consumed.Type == TokenType.Semicolon) break;
            }
        }
    }
}
