using Acknex.Interfaces;
using UnityEngine;
using UnityEngine.Experimental.Rendering;

namespace Acknex
{
    public class Font : IAcknexObjectContainer
    {
        public void ResetTexture()
        {

        }
        public bool IsGeometryDirty { get; set; }
        public bool IsTextureDirty { get; set; }
        public TextureAndPalette Texture;
        public Texture2DArray GlyphsPalette;
        public Texture2DArray GlyphsTexture;

        public Font()
        {
            AcknexObject.Container = this;
        }

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Font);
        public bool IsDebugMarked { get; set; }

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
            var width = AcknexObject.GetInteger("WIDTH");
            var height = AcknexObject.GetInteger("HEIGHT");
            Bitmap.CreateBitmapTexture(filename, 0, 0, 0, 0, out Texture, out _);
            var rows = Texture.Texture.height / height;
            var cols = Texture.Texture.width / width;
            var charCount = rows * cols;
            GlyphsTexture = new Texture2DArray(width, height, 256, Texture.Texture.graphicsFormat, TextureCreationFlags.None);
            GlyphsTexture.wrapMode = TextureWrapMode.Clamp;
            GlyphsPalette = new Texture2DArray(width, height, 256, Texture.Palette.graphicsFormat, TextureCreationFlags.None);
            GlyphsPalette.wrapMode = TextureWrapMode.Clamp;
            GlyphsPalette.filterMode = FilterMode.Point;
            for (var row = 0; row < rows; row++)
            {
                for (var col = 0; col < cols; col++)
                {
                    var slice = row * cols + col;
                    if (charCount == 11)
                    {
                        if (slice <= 9)
                        {
                            slice += 48;
                        }
                        else
                        {
                            slice = 32;
                        }
                    }
                    var extracted = Bitmap.ExtractBitmap(Texture, col * width, row * height, width, height);
                    Graphics.CopyTexture(extracted.Texture, 0, 0, GlyphsTexture, slice, 0);
                    Graphics.CopyTexture(extracted.Palette, 0, 0, GlyphsPalette, slice, 0);
                }
            }
        }

        public void UpdateObject()
        {

        }

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }
    }
}