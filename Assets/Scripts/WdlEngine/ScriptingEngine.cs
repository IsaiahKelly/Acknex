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

        public void Test(string rootPath, TextReader reader)
        {
            var lexedTokens = Lexer.Lex(reader);
            var preprocessedTokens = Preprocessor.Process(rootPath, lexedTokens);
            WdlParser.Parse(_world, preprocessedTokens);
        }
    }
}
