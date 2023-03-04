using Acknex.Interfaces;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace WdlEngine
{
    public sealed class ScriptingEngine
    {
        private readonly IAcknexWorld _world;

        public ScriptingEngine(IAcknexWorld world)
        {
            _world = world;
        }

        public void ParseWdl(string path)
        {
            var rootPath = Path.GetDirectoryName(path);
            using (var sourceText = File.OpenText(path))
            {
                var tokens = Lexer.Lex(sourceText);
                tokens = Preprocessor.Process(rootPath, tokens);
                var wdlResult = WdlParser.Parse(rootPath, _world, tokens);
                foreach (var mapfile in wdlResult.MapFiles) ParseWmp(mapfile);
            }
        }

        private void ParseWmp(string path)
        {
            using (var sourceText = File.OpenText(path))
            {
                var tokens = Lexer.Lex(sourceText);
                WmpParser.Parse(_world, tokens);
            }
        }
    }
}
