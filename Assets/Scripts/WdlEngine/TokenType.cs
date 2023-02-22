using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WdlEngine
{
    internal enum TokenType
    {
        EndOfInput,
        Unknown,
        Identifier,
        Dot,
        Comma,
        Colon,
        Semicolon,
        Assign,
        Integer,
        Real,
        String,
        OpenBrace,
        CloseBrace,
        Plus,
        PlusAssign,
        Minus,
        MinusAssign,
        Star,
        StarAssign,
        Slash,
        SlashAssign,
        Percent,
        BitOr,
        Or,
        BitAnd,
        And,
        BitXor,
        Equal,
        NotEqual,
        Less,
        Greater,
        LessEqual,
        GreaterEqual,
    }
}
