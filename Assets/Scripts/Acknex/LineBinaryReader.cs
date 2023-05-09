using System.IO;
using System.Text;
using JetBrains.Annotations;

namespace Acknex
{
    public class LineBinaryReader : BinaryReader
    {
        public int LineCount = 1;

        public LineBinaryReader([NotNull] Stream input) : base(input)
        {
        }

        public LineBinaryReader([NotNull] Stream input, [NotNull] Encoding encoding) : base(input, encoding)
        {
        }

        public LineBinaryReader(Stream input, Encoding encoding, bool leaveOpen) : base(input, encoding, leaveOpen)
        {
        }
    }
}