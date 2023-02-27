using Acknex.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using WdlEngine;

namespace Assets.Scripts.WdlEngine
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
                var statementName = statement.ValueString;
                switch (statementName)
                {
                case "PLAYER_START":
                    // TODO: Handle
                    return;
                }
            }

            Debug.LogError($"Unknown construct {statement.Type}, {statement.Value}");
            SkipStructure();
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
