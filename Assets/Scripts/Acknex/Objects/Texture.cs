using System.Collections.Generic;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Texture : IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback);

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        public List<string> Flags
        {
            get
            {
                if (AcknexObject.TryGetObject("FLAGS", out List<string> flags))
                {
                    return flags;
                }
                flags = new List<string>();
                AcknexObject.SetObject("FLAGS", flags);
                return flags;
            }
        }
        public List<string> BMaps
        {
            get
            {
                if (AcknexObject.TryGetObject("BMAPS", out List<string> bmaps))
                {
                    return bmaps;
                }
                bmaps = new List<string>();
                AcknexObject.SetObject("BMAPS", bmaps);
                return bmaps;
            }
        }

        public int BitmapCount => AcknexObject.TryGetObject("BMAPS", out List<string> bmaps) ? bmaps.Count : 0;

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

        public Bitmap GetBitmapAt(int index = 0)
        {
            if (BMaps.Count > index)
            {
                if (World.Instance.BitmapsByName.TryGetValue(BMaps[index], out var bitmapObject))
                {
                    return bitmapObject;
                }
            }
            return null;
        }
    }
}