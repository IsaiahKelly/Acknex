using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace WdlEngine
{
    internal sealed class TestGameEngine : IGameEngine
    {
    }

    public sealed class ScriptingEngine
    {
        public void Test(string rootPath, TextReader reader)
        {
            var gameEngine = new TestGameEngine();
            var lexedTokens = Lexer.Lex(reader);
            var preprocessedTokens = Preprocessor.Process(rootPath, lexedTokens);
            Parser.Parse(gameEngine, preprocessedTokens);
        }
    }
}
