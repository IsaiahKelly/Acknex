using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WdlEngine
{
    internal readonly struct WdlParseResult
    {
        public readonly IReadOnlyList<string> MapFileNames;

        public WdlParseResult(IReadOnlyList<string> mapFileNames)
        {
            MapFileNames = mapFileNames;
        }
    }
}
