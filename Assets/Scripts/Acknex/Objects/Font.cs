using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Font :  IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Font);

        public Texture2D Texture2D;
        public Texture2D BitmapTexture2D;

        public void UpdateObject()
        {

        }

        public void Enable()
        {

        }

        public void Disable()
        {

        }

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        public void SetupTemplate()
        {
            var filename = AcknexObject.GetString("FILENAME");
            var width = AcknexObject.GetFloat("WIDTH");
            var height = AcknexObject.GetFloat("HEIGHT");
            Bitmap.CreateBitmapTexture(filename, 0,0, (int)width, (int)height, out Texture2D, ref BitmapTexture2D);
        }

        public void SetupInstance()
        {
            
        }

        public Vector3 GetCenter()
        {
            return default;
        }
    }
}