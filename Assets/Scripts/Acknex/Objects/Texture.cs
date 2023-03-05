using System.Collections.Generic;
using Acknex.Interfaces;

namespace Acknex
{
    public class Texture : IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback);

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        public HashSet<string> Flags
        {
            get
            {
                if (AcknexObject.TryGetObject("FLAGS", out HashSet<string> flags))
                {
                    return flags;
                }
                flags = new HashSet<string>();
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

        public float ScaleX => AcknexObject.TryGetFloat("SCALE_X", out var val) ? val : 16f;
        public float ScaleY => AcknexObject.TryGetFloat("SCALE_Y", out var val) ? val : 16f;

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

        public Texture()
        {
            AcknexObject.Container = this;
        }
    }
}