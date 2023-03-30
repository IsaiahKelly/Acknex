using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Palette : IAcknexObjectContainer
    {
        public TextureAndPalette BitmapTexture;
        public TextureAndPalette Texture;

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Palette);
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
            var filename = AcknexObject.GetString("PALFILE");
            Bitmap.CreateBitmapTexture(filename, 0, 0, 0, 0, out Texture, ref BitmapTexture, true);
            if (BitmapTexture != null)
            {
                BitmapTexture.Palette.name = AcknexObject.GetString("NAME");
            }
            if (World.Instance.UsePalettes)
            {
                Shader.SetGlobalTexture("_AcknexPalette", Texture.Palette);
            }
        }

        public void UpdateObject()
        {
        }

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        public Palette()
        {
            AcknexObject.Container = this;
        }
    }
}