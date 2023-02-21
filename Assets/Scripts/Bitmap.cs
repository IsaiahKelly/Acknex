using System;
using DmitryBrant.ImageFormats;
using UnityEngine;

namespace Acknex
{
    [Serializable]
    public class Bitmap : IAcknexObject
    {
        public string Keyword;
        public string Filename;
        public float x;
        public float y;
        public float dx;
        public float dy;

        public Texture2D Texture2D;
        public Sprite Sprite;

        public void Setup()
        {
            Texture2D = PcxReader.Load(Filename);
            Texture2D.name = Keyword;
            if (x + y + dx + dy > 0)
            {
                Sprite = Sprite.Create(Texture2D, new Rect(x, y - dy, dx, dy), new Vector2(dx * 0.5f, dy * 0.5f));
                Sprite.name = Keyword;
            }
        }
    }
}