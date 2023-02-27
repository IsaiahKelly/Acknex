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

        private void SetSkill(string name, object value)
        {
            var skill = _world.CreateObject(ObjectType.Skill, name, false);
            skill["VAL"] = value;
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
                case "PLAYER_START":
                {
                    SetSkill("PLAYER_X", ParseNumber());
                    SetSkill("PLAYER_Y", ParseNumber());
                    SetSkill("PLAYER_ANGLE", Mathf.Deg2Rad * ParseNumber());
                    var region = (int)Expect(TokenType.Integer).Value;
                    // TODO: Set REGION of player
                    Expect(TokenType.Semicolon);
                    return;
                }
                case "THING":
                case "ACTOR":
                {
                    var name = Expect(TokenType.Identifier).ValueString;
                    var objType = Utils.StringToObjectType(statementName);
                    var obj = _world.CreateObject(objType, name, false);
                    obj["X"] = ParseNumber();
                    obj["Y"] = ParseNumber();
                    obj["ANGLE"] = Mathf.Deg2Rad * ParseNumber();
                    obj["REGION"] = (int)Expect(TokenType.Integer).Value;
                    Expect(TokenType.Semicolon);
                    return;
                }
                case "VERTEX":
                    // TODO: Handle
                    return;
                case "REGION":
                    // TODO: Handle
                    return;
                case "WALL":
                    // TODO: Handle
                    return;
                case "WAY":
                    // TODO: Handle
                    return;
                }
            }

            Debug.LogError($"Unknown construct {statement.Type}, {statement.Value}");
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
            while (true)
            {
                var consumed = Consume();
                if (consumed.Type == TokenType.EndOfInput) break;
                if (consumed.Type == TokenType.Semicolon) break;
            }
        }
    }
}
