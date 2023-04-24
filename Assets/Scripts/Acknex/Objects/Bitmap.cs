﻿using System.Collections.Generic;
using Acknex.Interfaces;
using DmitryBrant.ImageFormats;
using UnityEngine;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering;

namespace Acknex
{
    public class Bitmap : IAcknexObjectContainer
    {
        //todo: move
        private Texture2DArray _skyboxPalette2DArray;
        private Texture2DArray _skyboxTexture2DArray;

        public TextureAndPalette CropTexture;
        public TextureAndPalette OriginalTexture;

        public Bitmap()
        {
            AcknexObject.Container = this;
        }

        public float Width => AcknexObject.GetFloat("DX") != 0 ? AcknexObject.GetFloat("DX") : OriginalTexture != null ? OriginalTexture.Texture.width : 0;
        public float Height => AcknexObject.GetFloat("DY") != 0 ? AcknexObject.GetFloat("DY") : OriginalTexture != null ? OriginalTexture.Texture.height : 0;
        public float X => AcknexObject.GetFloat("X");
        public float Y => AcknexObject.GetFloat("Y");

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Bitmap);
        public bool DebugMarked { get; set; }

        public void Disable()
        {
        }

        public void Enable()
        {
        }

        public GameObject GameObject => null;

        public Vector3 GetCenter()
        {
            return default;
        }

        public IAcknexObject GetRegion()
        {
            return null;
        }

        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {
        }

        public void SetupInstance()
        {
        }

        public void SetupTemplate()
        {
            var filename = AcknexObject.GetString("FILENAME");
            CreateBitmapTexture(filename, (int)X, (int)Y, (int)Width, (int)Height, out OriginalTexture, out CropTexture);
        }

        public void UpdateObject()
        {
        }

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        public static void CreateBitmapTexture(string filename, int x, int y, int width, int height, out TextureAndPalette textureAndPalette, out TextureAndPalette cropTexture, bool paletteOnly = false)
        {
            textureAndPalette = null;
            if (filename != null && !World.Instance.TextureCache.TryGetValue(filename, out textureAndPalette))
            {
                var lowerInvariant = filename.ToLowerInvariant();
                if (lowerInvariant.EndsWith("pcx"))
                {
                    textureAndPalette = PcxReader.Load(filename, false, paletteOnly);
                    if (!paletteOnly)
                    {
                        World.Instance.TextureCache.Add(filename, textureAndPalette);
                    }
                }
                else if (lowerInvariant.EndsWith("lbm") || lowerInvariant.EndsWith("bbm"))
                {
                    var parser = new IlbmReaderTest.IffReader();
                    textureAndPalette = parser.Read(filename, paletteOnly);
                    if (!paletteOnly)
                    {
                        World.Instance.TextureCache.Add(filename, textureAndPalette);
                    }
                }
            }
            if (textureAndPalette != null && textureAndPalette.Texture != null)
            {
                if (width == 0)
                {
                    width = textureAndPalette.Texture.width;
                }
                if (height == 0)
                {
                    height = textureAndPalette.Texture.height;
                }
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


        public void UpdateMaterial(IList<Material> materials, Texture texture, int index, bool mirror, IAcknexObject sourceAcknexObject)
        {
            if (CropTexture == null)
            {
                return;
            }
            if (World.Instance.DisableMaterials)
            {
                return;
            }
            var scaleX = 16f;
            var scaleY = 16f;
            var offsetX = 0f;
            var offsetY = 0f;
            var ambient = 1f;
            var transparent = false;
            CropTexture.Palette.wrapModeU = CropTexture.Texture.wrapModeU = TextureWrapMode.Repeat;
            CropTexture.Palette.wrapModeV = CropTexture.Texture.wrapModeV = TextureWrapMode.Repeat;
            if (sourceAcknexObject != null)
            {
                if (sourceAcknexObject.Type == ObjectType.Actor || sourceAcknexObject.Type == ObjectType.Thing || sourceAcknexObject.Type == ObjectType.Overlay || sourceAcknexObject.Type == ObjectType.Panel)
                {
                    CropTexture.Palette.wrapModeU = CropTexture.Texture.wrapModeU = TextureWrapMode.Clamp;
                    CropTexture.Palette.wrapModeV = CropTexture.Texture.wrapModeV = TextureWrapMode.Clamp;
                }
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
                    if (wall.HasGap)
                    {
                        for (var i = 0; i < materials.Count; i++)
                        {
                            Material material = materials[i];
                            material.SetFloat("_V0H", wall.GapUV.m12);
                            material.SetFloat("_V1H", wall.GapUV.m13);
                        }
                    }
                    else
                    {
                        for (var i = 0; i < materials.Count; i++)
                        {
                            Material material = materials[i];
                            material.SetFloat("_V0H", wall.BottomUV.m12);
                            material.SetFloat("_V1H", wall.BottomUV.m13);
                        }
                    }
                    if (wall.AcknexObject.HasFlag("FENCE"))
                    {
                        for (var i = 0; i < materials.Count; i++)
                        {
                            Material material = materials[i];
                            material.SetInt("_FENCE", 1);
                        }
                        CropTexture.Palette.wrapModeV = CropTexture.Texture.wrapModeV = TextureWrapMode.Clamp;
                    }
                    if (wall.AcknexObject.HasFlag("PORTCULLIS"))
                    {
                        for (var i = 0; i < materials.Count; i++)
                        {
                            Material material = materials[i];
                            material.SetInt("_PORTCULLIS", 1);
                        }
                    }
                }
                transparent = sourceAcknexObject.HasFlag("TRANSPARENT");
            }
            var albedo = 0f;
            var radiance = 0f;
            if (texture != null)
            {
                if (texture.AcknexObject.TryGetFloat("ALBEDO", out var textureAlbedo))
                {
                    albedo = textureAlbedo;
                }
                if (texture.AcknexObject.TryGetFloat("RADIANCE", out var textureRadiance))
                {
                    radiance = textureRadiance;
                }
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
                    for (var i = 0; i < materials.Count; i++)
                    {
                        Material material = materials[i];
                        material.SetInt("_SIDES", sides);
                        material.SetTexture("_BMAPS", World.Instance.UsePalettes ? _skyboxPalette2DArray : _skyboxTexture2DArray);
                    }
                    //todo: SKY_OFFS_Y
                }
            }
            var x0 = mirror ? 0 + Width : 0;
            var y0 = 0;
            var x1 = mirror ? 0 : 0 + Width;
            var y1 = 0 + Height;
            var cullMode = transparent ? CullMode.Off : CullMode.Back;
            for (var i = 0; i < materials.Count; i++)
            {
                Material material = materials[i];
                material.SetFloat("_X0", x0);
                material.SetFloat("_Y0", y0);
                material.SetFloat("_X1", x1);
                material.SetFloat("_Y1", y1);
                material.SetFloat("_OFFSETX", offsetX);
                material.SetFloat("_OFFSETY", offsetY);
                material.SetFloat("_SCALEX", scaleX);
                material.SetFloat("_SCALEY", scaleY);
                material.SetFloat("_AMBIENT", ambient);
                material.SetFloat("_ALBEDO", albedo);
                material.SetFloat("_RADIANCE", radiance);
                material.SetInt("_TRANSPARENT", transparent ? 1 : 0);
                material.SetInt("_CullMode", (int)cullMode);
                material.mainTexture = World.Instance.UsePalettes ? CropTexture.Palette : CropTexture.Texture;
            }
            if (sourceAcknexObject is AcknexObject acknexObject)
            {
                acknexObject.CurrentBitmap = this;
                acknexObject.BitmapCoords = new Vector4(x0, y0, x1, y1);
                acknexObject.OffsetScale = new Vector4(offsetX, offsetY, scaleX, scaleY);
            }
        }

        public static TextureAndPalette ExtractBitmap(TextureAndPalette texture, int x, int y, int w, int h)
        {
            var bitmapTexture2D = new Texture2D(w, h, texture.Texture.graphicsFormat, TextureCreationFlags.MipChain);
            TextureUtils.CopyTextureCPU(texture.Texture, bitmapTexture2D, true, false, x, y, w, h);
            TextureUtils.Dilate(bitmapTexture2D);

            var paletteTexture2D = new Texture2D(w, h, texture.Palette.graphicsFormat, TextureCreationFlags.None);
            paletteTexture2D.filterMode = FilterMode.Point;

            TextureUtils.CopyTextureCPU(texture.Palette, paletteTexture2D, true, false, x, y, w, h);
            return new TextureAndPalette(bitmapTexture2D, paletteTexture2D);
        }
    }
}