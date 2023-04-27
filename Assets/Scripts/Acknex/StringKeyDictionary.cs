using System;
using System.Collections.Generic;

namespace Acknex
{
    public class StringKeyDictionary<T1, T2> : Dictionary<string, T2>
    {
        public StringKeyDictionary() : base(StringComparer.Ordinal)
        {
    
        }
    
        public StringKeyDictionary(IDictionary<string, T2> existing) : base(existing, StringComparer.Ordinal)
        {
    
        }
    }

    //public class StringKeyDictionary<T, T2> : StringTrie<T2>
    //{
    //    public StringKeyDictionary()
    //    {
    //
    //    }
    //
    //    public StringKeyDictionary(IDictionary<string, T2> source) 
    //    {
    //        foreach (var kvp in source)
    //        {
    //            this.Add(kvp.Key, kvp.Value);
    //        }
    //    }
    //}

    //public class StringKeyDictionary<T1, T2>  : Dictionary<string, T2>
    //{
    //    public StringKeyDictionary() : base(new ReferenceEqualityComparer())
    //    {
    //
    //    }
    //
    //    public StringKeyDictionary(IDictionary<string, T2> existing) : base(existing, new ReferenceEqualityComparer())
    //    {
    //
    //    }
    //}
}
