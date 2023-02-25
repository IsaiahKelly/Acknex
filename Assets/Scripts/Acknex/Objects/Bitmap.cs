using System;
using Acknex.Interfaces;
using DmitryBrant.ImageFormats;
using UnityEngine;

namespace Acknex
{
    public class Bitmap : IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetDefinitionCallback);

        public float Width => AcknexObject.Get<float>("DX") == 0 ? Texture2D.width : AcknexObject.Get<float>("DX");
        public float Height => AcknexObject.Get<float>("DY") == 0 ? Texture2D.height : AcknexObject.Get<float>("DY");
        public float X => AcknexObject.Get<float>("X");
        public float Y => AcknexObject.Get<float>("Y");

        private static IAcknexObject GetDefinitionCallback(string name)
        {
            return null;
        }
        public Texture2D Texture2D;

        public void Setup()
        {
            var fileName = AcknexObject.Get<string>("FILENAME");
            if (!World.Instance.TextureCache.TryGetValue(fileName, out Texture2D))
            {
                Texture2D = PcxReader.Load(fileName);
                Texture2D.name = AcknexObject.Get<string>("NAME");
                World.Instance.TextureCache.Add(fileName, Texture2D);
            }
        }

        public void UpdateObject()
        {
            throw new NotImplementedException();
        }

        public void Enable()
        {
            
        }

        public void Disable()
        {
            
        }

        public void UpdateMaterial(Material material, bool mirror = false, float ambient = 1.0f)
        {
            material.SetFloat("_X0", mirror ? X + Width : X);
            material.SetFloat("_Y0", Y);
            material.SetFloat("_X1", mirror ? X : X + Width);
            material.SetFloat("_Y1", Y + Height);
            material.SetFloat("_AMBIENT", ambient);
            material.mainTexture = Texture2D;
        }
    }
}