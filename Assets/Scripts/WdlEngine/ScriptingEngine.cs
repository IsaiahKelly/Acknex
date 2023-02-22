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
        public void Test(string rootPath, TextReader reader)
        {
            var lexedTokens = Lexer.Lex(CommentStyle.DoubleSlash, reader);
            var preprocessedTokens = Preprocessor.Process(rootPath, lexedTokens);
            Parser.Parse(preprocessedTokens);
        }
    }
}
