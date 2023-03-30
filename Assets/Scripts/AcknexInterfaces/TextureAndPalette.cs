using UnityEngine;

namespace Acknex.Interfaces
{
    public class TextureAndPalette
    {
        public Texture2D Texture;
        public Texture2D Palette;

        public TextureAndPalette(Texture2D texture, Texture2D palette)
        {
            Texture = texture;
            Palette = palette;
        }
    }
}
