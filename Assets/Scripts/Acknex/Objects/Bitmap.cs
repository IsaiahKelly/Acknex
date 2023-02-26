using System;
using System.Collections.Generic;
using Acknex.Interfaces;
using DmitryBrant.ImageFormats;
using IffParserNS;
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
            var filename = AcknexObject.Get<string>("FILENAME");
            if (!World.Instance.TextureCache.TryGetValue(filename, out Texture2D))
            {
                var lowerInvariant = filename.ToLowerInvariant();
                if (lowerInvariant.EndsWith("pcx"))
                {
                    Texture2D = PcxReader.Load(filename);
                    Texture2D.name = AcknexObject.Get<string>("NAME");
                    World.Instance.TextureCache.Add(filename, Texture2D);
                } else if (lowerInvariant.EndsWith("lbm"))
                {
                    var parser = new IlbmReaderTest.IffReader();
                    var iff = parser.Read(filename);
                    if (iff.Ilbms.Count > 0)
                    {
                        Texture2D = iff.Ilbms[0].Texture2D;
                        Texture2D.name = AcknexObject.Get<string>("NAME");
                        World.Instance.TextureCache.Add(filename, Texture2D);
                    }
                    //var iff = new IFF();
                    //iff.Parse(fileName);
                    //Texture2D = iff.Texture2D;
                    //Texture2D.name = AcknexObject.Get<string>("NAME");
                    //World.Instance.TextureCache.Add(filename, Texture2D);
                }
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

        public void UpdateMaterial(Material material, Texture texture = null, int index = 0, bool mirror = false, IAcknexObject wallOrRegion = null)
        {
            var x = X;
            var y = Y;
            var width = Width;
            var height = Height;
            //if (texture != null || wallOrRegion != null)
            {
                if (wallOrRegion != null && wallOrRegion.TryGet<float>("OFFSET_X", out var offsetX))
                {
                    x = offsetX;
                }
                if (wallOrRegion != null && wallOrRegion.TryGet<float>("OFFSET_Y", out var offsetY))
                {
                    y = offsetY;
                }
                if (texture != null && texture.AcknexObject.TryGet<List<float>>("OFFSET_X", out var offsetXList))
                {
                    x = offsetXList[index];
                }
                if (texture != null && texture.AcknexObject.TryGet<List<float>>("OFFSET_Y", out var offsetYList))
                {
                    y = offsetYList[index];
                }
                if (texture != null && texture.AcknexObject.TryGet<float>("SCALE_X", out var scaleX))
                {
                    width = scaleX;
                }
                if (texture != null && texture.AcknexObject.TryGet<float>("SCALE_Y", out var scaleY))
                {
                    height = scaleY;
                }
            }
            var x0 = mirror ? x + width : x;
            var y0 = y;
            var x1 = mirror ? x : x + width;
            var y1 = y + height;
            material.SetFloat("_X0", x0);
            material.SetFloat("_Y0", y0);
            material.SetFloat("_X1", x1);
            material.SetFloat("_Y1", y1);
            //material.SetFloat("_AMBIENT", ambient);
            material.mainTexture = Texture2D;
        }
    }
}