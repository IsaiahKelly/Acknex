using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Palette : IAcknexObjectContainer
    {
        private Color[] _colors;

        public TextureAndPalette Texture;

        public Palette()
        {
            AcknexObject.Container = this;
            Instance = this;
        }

        public static Palette Instance { get; private set; }

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

        public bool IsTextureDirty => false;

        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {
        }

        public void ResetTexture()
        {
        }

        public void SetupInstance()
        {
        }

        public void SetupTemplate()
        {
            var filename = AcknexObject.GetString("PALFILE");
            Bitmap.CreateBitmapTexture(filename, 0, 0, 0, 0, out Texture, out _, true);
            if (Texture != null)
            {
                _colors = Texture.Palette.GetPixels();
            }
        }

        public void UpdateObject()
        {
        }

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        public Color[] GetPixels()
        {
            return _colors;
        }
    }
}