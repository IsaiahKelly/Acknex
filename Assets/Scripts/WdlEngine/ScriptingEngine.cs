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
            foreach (var token in Lexer.Lex(CommentStyle.DoubleSlash, reader))
            {
                Debug.Log($"{token.Type} - {token.Value}");
            }
        }
    }
}
