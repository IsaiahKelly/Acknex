using NameId = System.UInt32;
using UnityEngine;

namespace Acknex
{
    public interface IGraphicObject
    {
       Bitmap CurrentBitmap { get; set; }

       Vector4 BitmapCoords { get; set; }

       Vector4 OffsetScale { get; set; }

       /// <summary>
       /// Indicates whether the object geometry has to be updated.
       /// </summary>
       bool IsGeometryDirty { get; set; }

       /// <summary>
       /// Indicates whether the object texture has to be updated.
       /// </summary>
       bool IsTextureDirty { get; set; }

       /// <summary>
       /// Resets the object texture.
       /// </summary>
       void ResetTexture();

       float GetAmbient();
    }
}
