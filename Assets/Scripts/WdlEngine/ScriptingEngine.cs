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
        public void Test(TextReader reader)
        {
            var lexedTokens = Lexer.Lex(CommentStyle.DoubleSlash, reader);
            var preprocessedTokens = Preprocessor.Process(lexedTokens);
            foreach (var token in preprocessedTokens)
            {
                Debug.Log($"{token.Type} - {token.Value}");
            }
        }
    }
}
