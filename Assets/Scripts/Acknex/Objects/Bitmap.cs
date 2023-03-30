using System.Collections.Generic;
using Acknex.Interfaces;
using DmitryBrant.ImageFormats;
using UnityEngine;
using UnityEngine.Experimental.Rendering;

namespace Acknex
{
    public class Bitmap : IAcknexObjectContainer
    {
        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {

        }
        public bool DebugMarked { get; set; }
        public GameObject GameObject => null;

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Bitmap);
        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        public float Width => AcknexObject.GetFloat("DX") != 0 ? AcknexObject.GetFloat("DX") : OriginalTexture != null ? OriginalTexture.Texture.width : 0;
        public float Height => AcknexObject.GetFloat("DY") != 0 ? AcknexObject.GetFloat("DY") : OriginalTexture != null ? OriginalTexture.Texture.height : 0;
        public float X => AcknexObject.GetFloat("X");
        public float Y => AcknexObject.GetFloat("Y");

        private Texture2DArray _skyboxTexture2DArray;
        private Texture2DArray _skyboxPalette2DArray;

        public TextureAndPalette OriginalTexture;
        public TextureAndPalette CropTexture;

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
            CreateBitmapTexture(filename, (int)X, (int)Y, (int)Width, (int)Height, out OriginalTexture, out CropTexture);
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

        public static void CreateBitmapTexture(
            string filename,
            int x, 
            int y, 
            int width,
            int height,
            out TextureAndPalette textureAndPalette,
            out TextureAndPalette cropTexture, //todo: remove ref
            bool paletteOnly = false
        )
        {
            if (!World.Instance.TextureCache.TryGetValue(filename, out textureAndPalette))
            {
                var lowerInvariant = filename.ToLowerInvariant();
                if (lowerInvariant.EndsWith("pcx"))
                {
                    textureAndPalette = PcxReader.Load(filename, false, paletteOnly);
                    if (!paletteOnly)
                    {
                        World.Instance.TextureCache.Add(filename, textureAndPalette);
                        if (width == 0)
                        {
                            width = textureAndPalette.Texture.width;
                        }
                        if (height == 0)
                        {
                            height = textureAndPalette.Texture.height;
                        }
                    }
                }
                //todo: reimplement
                //else if (lowerInvariant.EndsWith("lbm"))
                //{
                //    var parser = new IlbmReaderTest.IffReader();
                //    var iff = parser.Read(filename);
                //    if (iff.Ilbms.Count > 0)
                //    {
                //        texture = iff.Ilbms[0].Texture2D;
                //        World.Instance.TextureCache.Add(filename, texture);
                //        if (width == 0)
                //        {
                //            width = texture.width;
                //        }
                //        if (height == 0)
                //        {
                //            height = texture.height;
                //        }
                //    }
                //}
            }
            if (!paletteOnly && textureAndPalette != null && width > 0f && height > 0f)
            {
                var bitmapTexture2D = new Texture2D(width, height, textureAndPalette.Texture.graphicsFormat, TextureCreationFlags.MipChain);
                TextureUtils.CopyTextureCPU(textureAndPalette.Texture, bitmapTexture2D, true, false, x, y, width, height);
                TextureUtils.Dilate(bitmapTexture2D);

                var paletteTexture2D = new Texture2D(width, height, textureAndPalette.Palette.graphicsFormat, TextureCreationFlags.None);
                paletteTexture2D.filterMode = FilterMode.Point;
                TextureUtils.CopyTextureCPU(textureAndPalette.Palette, paletteTexture2D, true, false, x, y, width, height);

                cropTexture = new TextureAndPalette(bitmapTexture2D, paletteTexture2D);
            }
            else
            {
                cropTexture = null;
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
            if (CropTexture == null)
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
            CropTexture.Palette.wrapModeV = CropTexture.Texture.wrapModeV = TextureWrapMode.Repeat;
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
                        CropTexture.Palette.wrapModeV = CropTexture.Texture.wrapModeV = TextureWrapMode.Clamp;
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
                //todo: is there a better place to build that?
                if (texture.AcknexObject.HasFlag("SKY"))
                {
                    var sides = texture.AcknexObject.GetInteger("SIDES");
                    material.SetInt("_SIDES", sides);
                    if (_skyboxTexture2DArray == null)
                    {
                        var bitmapCount = texture.BMaps.Count;
                        _skyboxTexture2DArray = new Texture2DArray((int)Width, (int)Height, bitmapCount, CropTexture.Texture.graphicsFormat, TextureCreationFlags.MipChain);
                        _skyboxPalette2DArray = new Texture2DArray((int)Width, (int)Height, bitmapCount, CropTexture.Palette.graphicsFormat, TextureCreationFlags.None);
                        _skyboxPalette2DArray.filterMode = FilterMode.Point;
                        for (var i = 0; i < bitmapCount; i++)
                        {
                            var bitmap = texture.GetBitmapAt(i);
                            _skyboxTexture2DArray.SetPixels(bitmap.CropTexture.Texture.GetPixels(), i);
                            _skyboxPalette2DArray.SetPixels(bitmap.CropTexture.Palette.GetPixels(), i);
                        }
                        _skyboxTexture2DArray.Apply(true, false);
                        _skyboxPalette2DArray.Apply(true, false);
                    }
                    material.SetTexture("_BMAPS", World.Instance.UsePalettes ? _skyboxPalette2DArray : _skyboxTexture2DArray);
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
            material.mainTexture = World.Instance.UsePalettes ? CropTexture.Palette : CropTexture.Texture;
            if (sourceAcknexObject is AcknexObject acknexObject)
            {
                acknexObject.CurrentBitmap = this;
                acknexObject.BitmapCoords = new Vector4(x0, y0, x1, y1);
                acknexObject.OffsetScale = new Vector4(offsetX, offsetY, scaleX, scaleY);
            }
        }
    }
}