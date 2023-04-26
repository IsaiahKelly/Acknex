using System;
using System.Collections.Generic;
using System.Globalization;

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
            return obj.GetHashCode();
        }
    }
}