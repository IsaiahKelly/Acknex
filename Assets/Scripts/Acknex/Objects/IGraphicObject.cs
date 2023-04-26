using UnityEngine;

namespace Acknex
{
    public interface IGraphicObject
    {
       Bitmap CurrentBitmap { get; set; }
       Vector4 BitmapCoords { get; set; }
       Vector4 OffsetScale { get; set; }
    }
}
