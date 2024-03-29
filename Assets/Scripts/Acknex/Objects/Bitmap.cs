﻿using NameId = System.UInt32;
using System.Collections.Generic;
using Acknex.Interfaces;
using DmitryBrant.ImageFormats;
using IlbmReaderTest;
using UnityEngine;
using UnityEngine.Experimental.Rendering;
using UnityEngine.Rendering;
using PropertyName = Acknex.Interfaces.PropertyName;

namespace Acknex
{
    public class Bitmap : IAcknexObjectContainer
    {
        public void NotifyPropertyChanged(uint propertyName)
        {

        }
        public override string ToString()
        {
            return AcknexObject.ToString();
        }

        //todo: move
        private Texture2DArray _skyboxPalette2DArray;
        private Texture2DArray _skyboxTexture2DArray;

        public TextureAndPalette CropTexture;
        public TextureAndPalette OriginalTexture;

        public Bitmap()
        {
            AcknexObject.Container = this;
        }

        public float Width => AcknexObject.GetFloat(PropertyName.DX) != 0 ? AcknexObject.GetFloat(PropertyName.DX) : OriginalTexture != null ? OriginalTexture.Texture.width : 0;
        public float Height => AcknexObject.GetFloat(PropertyName.DY) != 0 ? AcknexObject.GetFloat(PropertyName.DY) : OriginalTexture != null ? OriginalTexture.Texture.height : 0;
        public float X => AcknexObject.GetFloat(PropertyName.X);
        public float Y => AcknexObject.GetFloat(PropertyName.Y);

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Bitmap);


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
        public Vector3 GetEyeLevel()
        {
            return GetCenter();
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
            var filename = AcknexObject.GetString(PropertyName.FILENAME);
            CreateBitmapTexture(filename, (int)X, (int)Y, (int)Width, (int)Height, out OriginalTexture, out CropTexture);
        }

        public void UpdateObject()
        {
        }

        private static IAcknexObject GetTemplateCallback(NameId name)
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
                    if (textureAndPalette.Palette != null)
                    {
                        World.Instance.CreatedObjects.Add(textureAndPalette.Palette);
                    }
                    if (textureAndPalette.Texture != null)
                    {
                        World.Instance.CreatedObjects.Add(textureAndPalette.Texture);
                    }
                    if (!paletteOnly)
                    {
                        World.Instance.TextureCache.Add(filename, textureAndPalette);
                    }
                }
                else if (lowerInvariant.EndsWith("lbm") || lowerInvariant.EndsWith("bbm"))
                {
                    var parser = new IffReader();
                    textureAndPalette = parser.Read(filename, paletteOnly);
                    {
                        World.Instance.CreatedObjects.Add(textureAndPalette.Palette);
                    }
                    if (textureAndPalette.Texture != null)
                    {
                        World.Instance.CreatedObjects.Add(textureAndPalette.Texture);
                    }
                    if (!paletteOnly)
                    {
                        World.Instance.TextureCache.Add(filename, textureAndPalette);
                    }
                }
            }
            CreateBitmapTexture(textureAndPalette, x, y, width, height, out cropTexture, paletteOnly);
        }

        public static void CreateBitmapTexture(TextureAndPalette textureAndPalette, int x, int y, int width, int height, out TextureAndPalette cropTexture, bool paletteOnly = false)
        {
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
            if (!paletteOnly && textureAndPalette?.Texture != null && width > 0f && height > 0f)
            {
                var bitmapTexture2D = new Texture2D(width, height, textureAndPalette.Texture.graphicsFormat, TextureCreationFlags.MipChain);
                World.Instance.CreatedObjects.Add(bitmapTexture2D);
                TextureUtils.CopyTextureCPU(textureAndPalette.Texture, bitmapTexture2D, true, false, x, y, width, height);
                TextureUtils.Dilate(bitmapTexture2D);
                var paletteTexture2D = new Texture2D(width, height, textureAndPalette.Palette.graphicsFormat, TextureCreationFlags.None);
                World.Instance.CreatedObjects.Add(paletteTexture2D);
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
            var graphicObject = sourceAcknexObject?.Container as IGraphicObject;
            if (sourceAcknexObject != null)
            {
                if (sourceAcknexObject.Type == ObjectType.Actor || sourceAcknexObject.Type == ObjectType.Thing || sourceAcknexObject.Type == ObjectType.Overlay || sourceAcknexObject.Type == ObjectType.Panel)
                {
                    CropTexture.Palette.wrapModeU = CropTexture.Texture.wrapModeU = TextureWrapMode.Clamp;
                    CropTexture.Palette.wrapModeV = CropTexture.Texture.wrapModeV = TextureWrapMode.Clamp;
                }
                if (sourceAcknexObject.TryGetFloat(PropertyName.OFFSET_X, out var offsetXVal))
                {
                    offsetX = offsetXVal;
                }
                if (sourceAcknexObject.TryGetFloat(PropertyName.OFFSET_Y, out var offsetYVal))
                {
                    offsetY = offsetYVal;
                }
                if (sourceAcknexObject.Container is Wall wall)
                {
                    for (var i = 0; i < materials.Count; i++)
                    {
                        var material = materials[i];
                        if (wall.HasGap)
                        {

                            material.SetFloat("_V0H", wall.GapUV.m12);
                            material.SetFloat("_V1H", wall.GapUV.m13);
                        }
                        else
                        {
                            material.SetFloat("_V0H", wall.BottomUV.m12);
                            material.SetFloat("_V1H", wall.BottomUV.m13);

                        }
                        if (wall.AcknexObject.HasFlag(PropertyName.FENCE))
                        {
                            material.SetInt("_FENCE", 1);
                            CropTexture.Palette.wrapModeV = CropTexture.Texture.wrapModeV = TextureWrapMode.Clamp;
                        }
                        if (wall.AcknexObject.HasFlag(PropertyName.PORTCULLIS))
                        {
                            material.SetInt("_PORTCULLIS", 1);
                        }
                    }
                }
                transparent = sourceAcknexObject.HasFlag(PropertyName.TRANSPARENT);
                if (graphicObject != null)
                {
                    ambient *= graphicObject.GetAmbient();
                }
            }
            var albedo = 0f;
            var radiance = 0f;
            var diaphanous = false;
            if (texture != null)
            {
                diaphanous = texture.AcknexObject.HasFlag(PropertyName.DIAPHANOUS);
                if (texture.AcknexObject.TryGetFloat(PropertyName.ALBEDO, out var textureAlbedo))
                {
                    albedo = textureAlbedo;
                }
                if (texture.AcknexObject.TryGetFloat(PropertyName.RADIANCE, out var textureRadiance))
                {
                    radiance = textureRadiance;
                }
                if (texture.AcknexObject.TryGetFloat(PropertyName.AMBIENT, out var textureAmbient))
                {
                    ambient *= textureAmbient;
                }
                if (texture.AcknexObject.TryGetObject<List<float>>(PropertyName.OFFSET_X, out var offsetXList))
                {
                    offsetX = offsetXList[index];
                }
                if (texture.AcknexObject.TryGetObject<List<float>>(PropertyName.OFFSET_Y, out var offsetYList))
                {
                    offsetY = offsetYList[index];
                }
                scaleX = texture.AcknexObject.GetFloat(PropertyName.SCALE_X);
                scaleY = texture.AcknexObject.GetFloat(PropertyName.SCALE_Y);
                //todo: is there a better place to build that?
                if (texture.AcknexObject.HasFlag(PropertyName.SKY))
                {
                    var sides = texture.AcknexObject.GetInteger(PropertyName.SIDES);
                    if (_skyboxTexture2DArray == null)
                    {
                        var bitmapCount = texture.BMaps.Count;
                        _skyboxTexture2DArray = new Texture2DArray((int)Width, (int)Height, bitmapCount, CropTexture.Texture.graphicsFormat, TextureCreationFlags.MipChain);
                        World.Instance.CreatedObjects.Add(_skyboxTexture2DArray);
                        _skyboxPalette2DArray = new Texture2DArray((int)Width, (int)Height, bitmapCount, CropTexture.Palette.graphicsFormat, TextureCreationFlags.None);
                        World.Instance.CreatedObjects.Add(_skyboxPalette2DArray);
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
                        var material = materials[i];
                        material.SetInt("_SIDES", sides);
                        material.SetTexture("_BMAPS", _skyboxTexture2DArray);
                        material.SetTexture("_BMAPS_Pal", _skyboxPalette2DArray);
                    }
                    //todo: SKY_OFFS_Y
                }
            }
            var x0 = mirror ? Width : 0;
            var y0 = 0;
            var x1 = mirror ? 0 : Width;
            var y1 = Height;
            var cullMode = transparent ? CullMode.Off : CullMode.Back;
            for (var i = 0; i < materials.Count; i++)
            {
                var material = materials[i];
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
                material.SetInt("_DIAPHANOUS", diaphanous ? 1 : 0);
                material.SetInt("_CullMode", (int)cullMode);
                material.SetTexture("_MainTex", CropTexture.Texture);
                material.SetTexture("_MainTex_Pal", CropTexture.Palette);
            }
            if (graphicObject != null)
            {
                graphicObject.CurrentBitmap = this;
                graphicObject.BitmapCoords = new Vector4(x0, y0, x1, y1);
                graphicObject.OffsetScale = new Vector4(offsetX, offsetY, scaleX, scaleY);
            }
        }

        public static TextureAndPalette ExtractBitmap(TextureAndPalette texture, int x, int y, int w, int h)
        {
            var bitmapTexture2D = new Texture2D(w, h, texture.Texture.graphicsFormat, TextureCreationFlags.MipChain);
            World.Instance.CreatedObjects.Add(bitmapTexture2D);
            TextureUtils.CopyTextureCPU(texture.Texture, bitmapTexture2D, true, false, x, y, w, h);
            TextureUtils.Dilate(bitmapTexture2D);
            var paletteTexture2D = new Texture2D(w, h, texture.Palette.graphicsFormat, TextureCreationFlags.None);
            World.Instance.CreatedObjects.Add(paletteTexture2D);
            paletteTexture2D.filterMode = FilterMode.Point;
            TextureUtils.CopyTextureCPU(texture.Palette, paletteTexture2D, true, false, x, y, w, h);
            return new TextureAndPalette(bitmapTexture2D, paletteTexture2D);
        }
    }
}