using System.Collections.Generic;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Texture : IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetDefinitionCallback);

        private static IAcknexObject GetDefinitionCallback(string name)
        {
            return null;
        }

        public List<string> Flags
        {
            get
            {
                if (AcknexObject.TryGet("FLAGS", out List<string> flags))
                {
                    return flags;
                }
                flags = new List<string>();
                AcknexObject["FLAGS"] = flags;
                return flags;
            }
        }
        public List<string> BMaps
        {
            get
            {
                if (AcknexObject.TryGet("BMAPS", out List<string> bmaps))
                {
                    return bmaps;
                }
                bmaps = new List<string>();
                AcknexObject["BMAPS"] = bmaps;
                return bmaps;
            }
        }

        public void UpdateObject()
        {
            throw new System.NotImplementedException();
        }

        public void Enable()
        {
            
        }

        public void Disable()
        {
            
        }

        public Texture2D GetFirstBitmapImage()
        {
            if (BMaps.Count > 0)
            {
                if (World.Instance.BitmapsByName.TryGetValue(BMaps[0], out var bitmapObject))
                {
                    return bitmapObject.Texture2D;
                }
            }
            return null;
        }
    }
}