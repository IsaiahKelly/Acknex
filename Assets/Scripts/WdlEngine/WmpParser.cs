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
                    // TODO: Handle
                    break;
                }
                case "THING":
                case "ACTOR":
                {
                    // TODO: Handle
                    break;
                }
                case "VERTEX":
                    // TODO: Handle
                    break;
                case "REGION":
                {
                    var name = Expect(TokenType.Identifier).StringValue;
                    var region = _world.CreateObjectInstance(ObjectType.Region, name);
                    region["FLOOR_HGT"] = ParseNumber();
                    region["CEIL_HGT"] = ParseNumber();
                    // TODO: Text parser does this
                    /*
                     if (!_wmpContainsRegionsByName)
                     {
                         World.Instance.RegionsByIndex.Add(region);
                     }
                     */
                    _world.PostSetupObjectInstance(ObjectType.Region, region);
                    Expect(TokenType.Semicolon);
                    return;
                }
                case "WALL":
                    // TODO: Handle
                    break;
                case "WAY":
                    // TODO: Handle
                    break;
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
