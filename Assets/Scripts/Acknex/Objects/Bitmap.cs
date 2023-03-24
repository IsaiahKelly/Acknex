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

        public float Width => AcknexObject.GetFloat("DX") != 0 ? AcknexObject.GetFloat("DX") : Texture2D != null ? Texture2D.width : 0;
        public float Height => AcknexObject.GetFloat("DY") != 0 ? AcknexObject.GetFloat("DY") : Texture2D != null ? Texture2D.height : 0;
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

        }

        public void SetupTemplate()
        {
            var filename = AcknexObject.GetString("FILENAME");
            CreateBitmapTexture(filename, (int)X, (int)Y, (int)Width, (int)Height, out Texture2D, ref BitmapTexture2D);
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

        public static void CreateBitmapTexture(string filename, int x, int y, int width, int height, out Texture2D texture2D, ref Texture2D bitmapTexture2D)
        {
            if (!World.Instance.TextureCache.TryGetValue(filename, out texture2D))
            {
                var lowerInvariant = filename.ToLowerInvariant();
                if (lowerInvariant.EndsWith("pcx"))
                {
                    texture2D = PcxReader.Load(filename);
                    World.Instance.TextureCache.Add(filename, texture2D);
                    if (width == 0)
                    {
                        width = texture2D.width;
                    }
                    if (height == 0)
                    {
                        height = texture2D.height;
                    }
                }
                else if (lowerInvariant.EndsWith("lbm"))
                {
                    var parser = new IlbmReaderTest.IffReader();
                    var iff = parser.Read(filename);
                    if (iff.Ilbms.Count > 0)
                    {
                        texture2D = iff.Ilbms[0].Texture2D;
                        World.Instance.TextureCache.Add(filename, texture2D);
                        if (width == 0)
                        {
                            width = texture2D.width;
                        }
                        if (height == 0)
                        {
                            height = texture2D.height;
                        }
                    }
                }
            }
            if (texture2D != null)
            {
                bitmapTexture2D = new Texture2D(width, height, texture2D.graphicsFormat, TextureCreationFlags.MipChain);
                TextureUtils.CopyTextureCPU(texture2D, bitmapTexture2D, true, false, x, y, width, height);
                TextureUtils.Dilate(bitmapTexture2D);
            }
        }

        public void Enable()
        {

        }

        public void Disable()
        {

        }


        public void UpdateMaterial(Material material, Texture texture, int index, bool mirror, IAcknexObject sourceAcknexObject)
        {
            if (BitmapTexture2D == null)
            {
                return;
            }
            if (sourceAcknexObject != null && World.Instance.DisableWallTextures)
            {
                return;
            }
            var scaleX = 16f;
            var scaleY = 16f;
            var offsetX = 0f;
            var offsetY = 0f;
            var cullMode = UnityEngine.Rendering.CullMode.Back;
            var ambient = 1f;
            BitmapTexture2D.wrapModeV = TextureWrapMode.Repeat;
            if (sourceAcknexObject != null)
            {
                if (sourceAcknexObject.TryGetFloat("AMBIENT", out var wallOrRegionAmbient))
                {
                    ambient *= wallOrRegionAmbient;
                }
                if (sourceAcknexObject.TryGetFloat("OFFSET_X", out var offsetXVal))
                {
                    offsetX = offsetXVal;
                }
                if (sourceAcknexObject.TryGetFloat("OFFSET_Y", out var offsetYVal))
                {
                    offsetY = offsetYVal;
                }
                if (sourceAcknexObject.Container is Wall wall)
                {
                    if (wall.AcknexObject.HasFlag("FENCE"))
                    {
                        material.SetFloat("_V0H", wall.BottomUV.m12);
                        material.SetFloat("_V1H", wall.BottomUV.m13);
                        material.SetInt("_FENCE", 1);
                        BitmapTexture2D.wrapModeV = TextureWrapMode.Clamp;
                        cullMode = UnityEngine.Rendering.CullMode.Off;
                    }
                    if (wall.AcknexObject.HasFlag("PORTCULLIS"))
                    {
                        material.SetInt("_PORTCULLIS", 1);
                        cullMode = UnityEngine.Rendering.CullMode.Off;
                    }
                }
            }
            if (texture != null)
            {
                if (texture.AcknexObject.TryGetFloat("AMBIENT", out var textureAmbient))
                {
                    ambient *= textureAmbient;
                }
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
                if (texture.AcknexObject.HasFlag("SKY"))
                {
                    var sides = texture.AcknexObject.GetInteger("SIDES");
                    material.SetInt("_SIDES", sides);
                    if (_bmaps == null)
                    {
                        var bitmapCount = texture.BitmapCount;
                        _bmaps = new Texture2DArray((int)Width, (int)Height, bitmapCount, BitmapTexture2D.graphicsFormat, TextureCreationFlags.MipChain);
                        for (var i = 0; i < bitmapCount; i++)
                        {
                            var bitmap = texture.GetBitmapAt(i);
                            var bitmapTexture2D = bitmap.BitmapTexture2D;
                            _bmaps.SetPixels(bitmapTexture2D.GetPixels(), i);
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
            material.SetFloat("_AMBIENT", ambient);
            material.mainTexture = BitmapTexture2D;
        }
    }
}