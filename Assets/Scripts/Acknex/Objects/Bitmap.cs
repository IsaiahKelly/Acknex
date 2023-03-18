using System.Collections.Generic;
using Acknex.Interfaces;
using DmitryBrant.ImageFormats;
using UnityEngine;
using UnityEngine.Experimental.Rendering;

namespace Acknex
{
    public class Bitmap : IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Bitmap);
        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        public float Width => AcknexObject.GetFloat("DX") == 0 && Texture2D != null ? Texture2D.width : AcknexObject.GetFloat("DX");
        public float Height => AcknexObject.GetFloat("DY") == 0 && Texture2D != null ? Texture2D.height : AcknexObject.GetFloat("DY");
        public float X => AcknexObject.GetFloat("X");
        public float Y => AcknexObject.GetFloat("Y");

        private Texture2DArray _bmaps;

        public Texture2D Texture2D;
        public Texture2D BitmapTexture2D;

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
                    //TextureUtils.Dilate(Texture2D);
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
                        //TextureUtils.Dilate(Texture2D);
                        World.Instance.TextureCache.Add(filename, Texture2D);
                    }
                }
            }
            if (Texture2D != null && BitmapTexture2D == null)
            {
                BitmapTexture2D = new Texture2D((int)Width, (int)Height, Texture2D.graphicsFormat, TextureCreationFlags.MipChain);
                TextureUtils.CopyTextureCPU(Texture2D, BitmapTexture2D, true, false, (int)X, (int)Y, (int)Width, (int)Height);
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
            if (BitmapTexture2D == null)
            {
                return;
            }
            if (wallOrRegion != null && World.Instance.DisableWallTextures)
            {
                return;
            }
            var scaleX = 16f;
            var scaleY = 16f;
            var offsetX = 0f;
            var offsetY = 0f;
            var cullMode = UnityEngine.Rendering.CullMode.Back;
            if (wallOrRegion != null)
            {
                if (wallOrRegion.TryGetFloat("OFFSET_X", out var offsetXVal))
                {
                    offsetX = offsetXVal;
                }
                if (wallOrRegion.TryGetFloat("OFFSET_Y", out var offsetYVal))
                {
                    offsetY = offsetYVal;
                }
                if (wallOrRegion.Container is Wall wall)
                {
                    if (wall.AcknexObject.ContainsFlag("FENCE"))
                    {
                        material.SetFloat("_V0H", wall.BottomUV.m12);
                        material.SetFloat("_V1H", wall.BottomUV.m13);
                        material.SetInt("_FENCE", 1);
                        cullMode = UnityEngine.Rendering.CullMode.Off;
                    }
                    if (wall.AcknexObject.ContainsFlag("PORTCULLIS"))
                    {
                        material.SetInt("_PORTCULLIS", 1);
                        cullMode = UnityEngine.Rendering.CullMode.Off;
                    }
                }
            }
            if (texture != null)
            {
                if (texture.AcknexObject.TryGetObject<List<float>>("OFFSET_X", out var offsetXList))
                {
                    offsetX = offsetXList[index];
                }
                if (texture.AcknexObject.TryGetObject<List<float>>("OFFSET_Y", out var offsetYList))
                {
                    offsetY = offsetYList[index];
                }
                scaleX = texture.ScaleX;
                scaleY = texture.ScaleY;
                if (texture.AcknexObject.ContainsFlag("SKY"))
                {
                    var sides = texture.AcknexObject.GetInteger("SIDES");
                    material.SetInt("_SIDES", sides);
                    if (_bmaps == null)
                    {
                        var bitmapCount = texture.BitmapCount;
                        _bmaps = new Texture2DArray((int)Width, (int)Height, bitmapCount, BitmapTexture2D.graphicsFormat, TextureCreationFlags.MipChain);
                        for (var i = 0; i < bitmapCount; i++)
                        {
                            _bmaps.SetPixels(texture.GetBitmapAt(i).BitmapTexture2D.GetPixels(), i);
                        }
                        _bmaps.Apply(true, false);
                    }
                    material.SetTexture("_BMAPS", _bmaps);
                    //todo: SKY_OFFS_Y
                }
            }
            var x0 = mirror ? 0 + Width : 0;
            var y0 = 0;
            var x1 = mirror ? 0 : 0 + Width;
            var y1 = 0 + Height;
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
            material.mainTexture = BitmapTexture2D;
        }
    }
}