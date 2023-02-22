using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WdlEngine
{
    internal readonly struct Token
    {
        public readonly TokenType Type;
        public readonly object Value;

        public string ValueString => Value.ToString();

        public Token(TokenType type, object value)
        {
            Type = type;
            Value = value;
        }
    }
}
