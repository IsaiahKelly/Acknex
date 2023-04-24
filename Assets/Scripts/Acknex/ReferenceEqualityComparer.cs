using System;
using System.Collections.Generic;
using System.Globalization;
using System.Runtime.InteropServices;

namespace Acknex
{
    public class ReferenceEqualityComparer : IEqualityComparer<string>
    {
        private StringComparer _stringComparer;

        public ReferenceEqualityComparer()
        {
            _stringComparer = StringComparer.Create(CultureInfo.InvariantCulture, false);
        }

        public bool Equals(string x, string y)
        {
            if (ReferenceEquals(x, y))
            {
                return true;
            }
            return _stringComparer.Equals(x, y);
        }

        public int GetHashCode(string obj)
        {
            return obj == null ? 0 : obj.GetHashCode();
        }
    }
}