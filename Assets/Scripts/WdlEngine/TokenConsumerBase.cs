using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using WdlEngine;

namespace WdlEngine
{
    internal abstract class TokenConsumerBase
    {
        protected readonly List<Token> PeekBuffer = new List<Token>();
        private readonly IEnumerator<Token> _tokens;

        protected TokenConsumerBase(IEnumerator<Token> tokens)
        {
            _tokens = tokens;
        }

        protected Token Expect(TokenType type)
        {
            if (!Matches(type, out var token))
            {
                var got = Peek();
                throw new InvalidOperationException($"expected token {type} but got {got.Type}");
            }
            return token;
        }

        protected bool Matches(TokenType type) => Matches(type, out _);

        protected bool Matches(TokenType type, out Token token)
        {
            if (Peek().Type == type)
            {
                token = Consume();
                return true;
            }
            else
            {
                token = default;
                return false;
            }
        }

        protected Token Consume()
        {
            var peeked = Peek();
            PeekBuffer.RemoveAt(0);
            return peeked;
        }

        protected Token Peek(int offset = 0)
        {
            while (PeekBuffer.Count <= offset)
            {
                if (!_tokens.MoveNext()) return new Token(TokenType.EndOfInput, null);
                PeekBuffer.Add(_tokens.Current);
            }
            return PeekBuffer[offset];
        }
    }
}
