using Acknex.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WdlEngine
{
    internal static class Utils
    {
        public static ObjectType StringToObjectType(string str)
        {
            switch (str)
            {
            default:
                throw new ArgumentOutOfRangeException(nameof(str));
            }
        }
    }
}
