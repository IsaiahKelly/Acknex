using System;
using System.Collections.Generic;
using System.Globalization;
using System.Runtime.CompilerServices;

namespace Acknex
{
    public class ReferenceEqualityComparer : IEqualityComparer<string>
    {
        private readonly StringComparer _stringComparer;

        public ReferenceEqualityComparer()
        {
            _stringComparer = StringComparer.Create(CultureInfo.InvariantCulture, false);
        }

        public bool Equals(string x, string y)
        {
#if DEBUG_ENABLED
            if (string.IsInterned(x) == null)
            {
                throw new Exception("String " + x + " is not internalized");
            }
            if (string.IsInterned(y) == null)
            {
                throw new Exception("String " + y + " is not internalized");
            }
#endif
            return ReferenceEquals(x, y) || _stringComparer.Equals(x, y);
        }

        public unsafe int GetHashCode(string obj)
        {
#if DEBUG_ENABLED
            if (string.IsInterned(obj) == null)
            {
                throw new Exception("String " + obj + " is not internalized");
            }
#endif
            return RuntimeHelpers.GetHashCode(obj); //obj.GetHashCode();
        }
    }
}