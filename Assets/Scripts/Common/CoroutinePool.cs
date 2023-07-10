using System.Collections.Generic;
using System;
using System.Collections;
using UnityEngine;

namespace Common
{
    public static class CoroutinePool
    {
        private const int MaxItems = 1024;

        private static readonly Dictionary<Type, IEnumerator[]> Pool = new Dictionary<Type, IEnumerator[]>();

        public static void Clear()
        {
            Pool.Clear();
        }

        public static bool TryToRegister<T>(out Type t, out IEnumerator[] array)
        {
            t = typeof(T);
            if (!Pool.TryGetValue(t, out array))
            {
                array = new IEnumerator[MaxItems];
                for (var i = 0; i < MaxItems; i++)
                {
                    array[i] = (IEnumerator)Activator.CreateInstance(t); //todo: does this works on IL2CPP?
                }
                Pool.Add(t, array);
                return true;
            }
            return false;
        }

        public static IEnumerator Get<T>()
        {
            return Get(typeof(T));
        }

        public static IEnumerator Get(Type type)
        {
            if (!Pool.TryGetValue(type, out var array))
            {
                Debug.LogError("No coroutine pool for [" + type + "]");
                return null;
            }
            for (var i = 0; i < MaxItems; i++)
            {
                var enumerator = array[i];
                if (enumerator.Current == null)
                {
                    enumerator.Reset();
                    return enumerator;
                }
            }
            throw new Exception("No coroutine pool left for [" + type + "]");
        }
    }
}
