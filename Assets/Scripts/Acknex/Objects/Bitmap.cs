using System;
using System.Collections.Generic;
using Acknex.Interfaces;
using DmitryBrant.ImageFormats;
using UnityEngine;

namespace Acknex
{
    public class Bitmap : IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetDefinitionCallback);
        private static IAcknexObject GetDefinitionCallback(string name)
        {
            return null;
        }

        public float Width => AcknexObject.Get<float>("DX") == 0 ? Texture2D.width : AcknexObject.Get<float>("DX");
        public float Height => AcknexObject.Get<float>("DY") == 0 ? Texture2D.height : AcknexObject.Get<float>("DY");
        public float X => AcknexObject.Get<float>("X");
        public float Y => AcknexObject.Get<float>("Y");

        public Texture2D Texture2D;

        public Bitmap()
        {
            AcknexObject.Container = this;
        }


        public void UpdateObject()
        {
            var filename = AcknexObject.Get<string>("FILENAME");
            if (!World.Instance.TextureCache.TryGetValue(filename, out Texture2D))
            {
                var lowerInvariant = filename.ToLowerInvariant();
                if (lowerInvariant.EndsWith("pcx"))
                {
                    Texture2D = PcxReader.Load(filename);
                    Texture2D.name = AcknexObject.Get<string>("NAME");
                    World.Instance.TextureCache.Add(filename, Texture2D);
                }
                else if (lowerInvariant.EndsWith("lbm"))
                {
                    var parser = new IlbmReaderTest.IffReader();
                    var iff = parser.Read(filename);
                    if (iff.Ilbms.Count > 0)
                    {
                        Texture2D = iff.Ilbms[0].Texture2D;
                        Texture2D.name = AcknexObject.Get<string>("NAME");
                        World.Instance.TextureCache.Add(filename, Texture2D);
                    }
                }
            }
        }

        public void Enable()
        {

        }

        public void Disable()
        {

        }

        public void UpdateMaterial(Material material, Texture texture = null, int index = 0, bool mirror = false, IAcknexObject wallOrRegion = null)
        {
            var offsetX = 0f;
            var offsetY = 0f;
            var scaleX = 0f;
            var scaleY = 0f;
            if (wallOrRegion != null && wallOrRegion.TryGet<float>("OFFSET_X", out var offsetXVal))
            {
                offsetX = offsetXVal;
            }
            if (wallOrRegion != null && wallOrRegion.TryGet<float>("OFFSET_Y", out var offsetYVal))
            {
                offsetY = offsetYVal;
            }
            if (texture != null && texture.AcknexObject.TryGet<List<float>>("OFFSET_X", out var offsetXList))
            {
                offsetX = offsetXList[index];
            }
            if (texture != null && texture.AcknexObject.TryGet<List<float>>("OFFSET_Y", out var offsetYList))
            {
                offsetY = offsetYList[index];
            }
            if (texture != null && texture.AcknexObject.TryGet<float>("SCALE_X", out scaleX))
            {
             
            }
            if (texture != null && texture.AcknexObject.TryGet<float>("SCALE_Y", out scaleY))
            {
                
            }
            var x0 = mirror ? X + Width : X;
            var y0 = Y;
            var x1 = mirror ? X : X + Width;
            var y1 = Y + Height;
            material.SetFloat("_X0", x0);
            material.SetFloat("_Y0", y0);
            material.SetFloat("_X1", x1);
            material.SetFloat("_Y1", y1);
            material.SetFloat("_OFFSET_X", offsetX);
            material.SetFloat("_OFFSET_Y", offsetY);
            material.SetFloat("_SCALE_X", scaleX);
            material.SetFloat("_SCALE_Y", scaleY);
            //material.SetFloat("_AMBIENT", ambient);
            material.mainTexture = Texture2D;
        }
    }
}