using System.Collections.Generic;
using Acknex.Interfaces;
using DmitryBrant.ImageFormats;
using UnityEngine;
using UnityEngine.Experimental.Rendering;

namespace Acknex
{
    public class Bitmap : IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback);
        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        public float Width => AcknexObject.GetFloat("DX") == 0 && Texture2D != null ? Texture2D.width : AcknexObject.GetFloat("DX");
        public float Height => AcknexObject.GetFloat("DY") == 0 && Texture2D != null ? Texture2D.height : AcknexObject.GetFloat("DY");
        public float X => AcknexObject.GetFloat("X");
        public float Y => AcknexObject.GetFloat("Y");

        public Texture2D Texture2D;
        private Texture2DArray _bmaps;

        public Bitmap()
        {
            AcknexObject.Container = this;
        }

        public void UpdateObject()
        {
            var filename = AcknexObject.GetString("FILENAME");
            if (!World.Instance.TextureCache.TryGetValue(filename, out Texture2D))
            {
                var lowerInvariant = filename.ToLowerInvariant();
                if (lowerInvariant.EndsWith("pcx"))
                {
                    Texture2D = PcxReader.Load(filename);
                    Texture2D.name = AcknexObject.GetString("NAME");
                    TextureUtils.Dilate(Texture2D);
                    World.Instance.TextureCache.Add(filename, Texture2D);
                }
                else if (lowerInvariant.EndsWith("lbm"))
                {
                    var parser = new IlbmReaderTest.IffReader();
                    var iff = parser.Read(filename);
                    if (iff.Ilbms.Count > 0)
                    {
                        Texture2D = iff.Ilbms[0].Texture2D;
                        Texture2D.name = AcknexObject.GetString("NAME");
                        TextureUtils.Dilate(Texture2D);
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
            if (Texture2D == null)
            {
                return;
            }
            var width = Width;
            var height = Height;
            var x = X;
            var y = Y;
            var scaleX = 16f;
            var scaleY = 16f;
            var offsetX = 0f;
            var offsetY = 0f;
            if (wallOrRegion != null && wallOrRegion.TryGetFloat("OFFSET_X", out var offsetXVal))
            {
                offsetX = offsetXVal;
            }
            if (wallOrRegion != null && wallOrRegion.TryGetFloat("OFFSET_Y", out var offsetYVal))
            {
                offsetY = offsetYVal;
            }
            if (texture != null && texture.AcknexObject.TryGetObject<List<float>>("OFFSET_X", out var offsetXList))
            {
                offsetX = offsetXList[index];
            }
            if (texture != null && texture.AcknexObject.TryGetObject<List<float>>("OFFSET_Y", out var offsetYList))
            {
                offsetY = offsetYList[index];
            }
            if (texture != null && texture.AcknexObject.TryGetFloat("SCALE_X", out var scaleXVal))
            {
                scaleX = scaleXVal;
            }
            if (texture != null && texture.AcknexObject.TryGetFloat("SCALE_Y", out var scaleYVal))
            {
                scaleY = scaleYVal;
            }
            var cullMode = UnityEngine.Rendering.CullMode.Back;
            material.SetInt("_CLAMPY", 0);
            if (wallOrRegion?.Container is Wall wall && wall.Flags.Contains("FENCE"))
            {
                material.SetFloat("_V0H", wall.BottomUV.m12);
                material.SetFloat("_V1H", wall.BottomUV.m13);
                material.SetInt("_FENCE", 1);
                cullMode = UnityEngine.Rendering.CullMode.Off;
            }
            if (texture != null && texture.Flags.Contains("SKY"))
            {
                var sides = texture.AcknexObject.GetInteger("SIDES");
                material.SetInt("_SIDES", sides);
                if (_bmaps == null)
                {
                    var bitmapCount = texture.BitmapCount;
                    _bmaps = new Texture2DArray((int)width, (int)height, bitmapCount, Texture2D.graphicsFormat, TextureCreationFlags.MipChain);
                    for (var i = 0; i < bitmapCount; i++)
                    {
                        _bmaps.SetPixels(texture.GetBitmapAt(i).Texture2D.GetPixels(), i);
                    }
                    _bmaps.Apply(true, false);
                }
                material.SetTexture("_BMAPS", _bmaps);
            }
            var x0 = mirror ? x + width : x;
            var y0 = y;
            var x1 = mirror ? x : x + width;
            var y1 = y + height;
            material.SetFloat("_X0", x0);
            material.SetFloat("_Y0", y0);
            material.SetFloat("_X1", x1);
            material.SetFloat("_Y1", y1);
            material.SetFloat("_OFFSETX", offsetX);
            material.SetFloat("_OFFSETY", offsetY);
            material.SetFloat("_SCALEX", scaleX);
            material.SetFloat("_SCALEY", scaleY);
            material.SetInt("_CullMode", (int)cullMode);
            //material.SetFloat("_AMBIENT", ambient);
            material.mainTexture = Texture2D;
        }
    }
}