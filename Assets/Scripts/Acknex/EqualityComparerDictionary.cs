using System.Collections.Generic;

namespace Acknex
{
    public class EqualityComparerDictionary<T1, T2>  : Dictionary<string, T2>
    {
        public EqualityComparerDictionary() : base(new ReferenceEqualityComparer())
        {

        }

        public EqualityComparerDictionary(IDictionary<string, T2> existing) : base(existing, new ReferenceEqualityComparer())
        {

        }
    }
}
