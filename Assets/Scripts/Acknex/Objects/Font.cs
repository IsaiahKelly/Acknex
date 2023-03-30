﻿using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Font :  IAcknexObjectContainer
    {
        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {

        }
        public bool DebugMarked { get; set; }
        public GameObject GameObject => null;

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Font);

        public TextureAndPalette Texture;
        public TextureAndPalette CropTexture;

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
            Bitmap.CreateBitmapTexture(filename, 0,0, (int)width, (int)height, out Texture, out CropTexture);
        }

        public void SetupInstance()
        {
            
        }

        public Vector3 GetCenter()
        {
            return default;
        }

        public IAcknexObject GetRegion()
        {
            return null;
        }
    }
}