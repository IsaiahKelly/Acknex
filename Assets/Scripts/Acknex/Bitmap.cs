using System;
using DmitryBrant.ImageFormats;
using UnityEngine;

namespace Acknex
{
    [Serializable]
    public class Bitmap : IAcknexObject
    {
        public string NAME;
        public string FILENAME;
        public float X;
        public float Y;
        public float DX;
        public float DY;

        public Texture2D Texture2D;
        //public Sprite Sprite;

        public void Setup()
        {
            Texture2D = PcxReader.Load(FILENAME);
            Texture2D.name = NAME;
            //if (X + Y + DX + DY > 0)
            //{
            //    Sprite = Sprite.Create(Texture2D, new Rect(X, Y - DY, DX, DY), new Vector2(DX * 0.5f, DY * 0.5f));
            //    Sprite.name = NAME;
            //}
        }

        public void Disable()
        {
            throw new NotImplementedException();
        }
    }
}