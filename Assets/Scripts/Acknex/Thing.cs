using System.Collections.Generic;
using UnityEngine;

namespace Acknex
{
    public class Thing : MonoBehaviour, IAcknexObject
    {
        public string NAME;
        public string TEXTURE;
        public float HEIGHT;
        public List<string> FLAGS;
        public float DIST;

        public Thing Definition
        {
            get
            {
                if (World.Instance.ThingsByName.TryGetValue(NAME, out var thing))
                {
                    return thing;
                }
                return null;
            }
        }
    }
}