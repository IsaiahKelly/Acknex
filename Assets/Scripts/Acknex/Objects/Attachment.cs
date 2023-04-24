using Acknex.Interfaces;
using System.Collections.Generic;
using UnityEngine;

namespace Acknex
{
    public static class Attachment
    {
        public static void ProcessAttachments(List<Texture> _tempAttachments, ref Texture2DArray attachmentsTexture, ref Texture2DArray palettesTexture, List<Vector4> positions, Texture attachment, IList<Material> materials)
        {
            _tempAttachments.Clear();
            if (materials == null)
            {
                return;
            }
            if (!attachment.AcknexObject.TryGetAcknexObject("ATTACH", out var attach))
            {
                for (int i = 0; i < materials.Count; i++)
                {
                    Material material = materials[i];
                    if (material == null)
                    {
                        return;
                    }
                    material.SetInt("_ATTACH_COUNT", 0);
                }
                return;
            }
            var posX = attachment.AcknexObject.GetFloat("POS_X");
            var posY = attachment.AcknexObject.GetFloat("POS_Y");
            positions.Add(new Vector2(posX, posY));
            attachment = (Texture)attach.Container;
            _tempAttachments.Add(attachment);
            while (attachment.AcknexObject.TryGetAcknexObject("ATTACH", out var child))
            {
                var childTexture = (Texture)child.Container;
                _tempAttachments.Add(childTexture);
                posX += attachment.AcknexObject.GetFloat("POS_X");
                posY += attachment.AcknexObject.GetFloat("POS_Y");
                positions.Add(new Vector2(posX, posY));
                attachment = childTexture;
            }
            if (attachmentsTexture == null || palettesTexture == null)
            {
                var bitmap = attachment.GetBitmapAt(0);
                attachmentsTexture = new Texture2DArray((int)bitmap.Width, (int)bitmap.Height, _tempAttachments.Count, bitmap.CropTexture.Texture.format, bitmap.CropTexture.Texture.mipmapCount > 1);
                palettesTexture = new Texture2DArray((int)bitmap.Width, (int)bitmap.Height, _tempAttachments.Count, bitmap.CropTexture.Palette.format, bitmap.CropTexture.Palette.mipmapCount > 1);
            }
            positions.Clear();
            for (var i = 0; i < _tempAttachments.Count; i++)
            {
                attachment = _tempAttachments[i];
                var cycle = attachment.AcknexObject.GetInteger("CYCLE");
                var bitmap = attachment.GetBitmapAt(cycle);
                Graphics.CopyTexture(bitmap.CropTexture.Texture, 0, attachmentsTexture, i);
                Graphics.CopyTexture(bitmap.CropTexture.Palette, 0, palettesTexture, i);
                //attachmentsTexture.SetPixelData(bitmap.CropTexture.Texture.GetPixels(), 0, i, 0);
                //palettesTexture.SetPixelData(bitmap.CropTexture.Palette.GetPixels(), 0, i, 0);
            }
            attachmentsTexture.Apply(true, false);
            palettesTexture.Apply(true, false);
            for (var i = 0; i < materials.Count; i++)
            {
                Material material = materials[i];
                if (material != null)
                {
                    material.SetTexture("_ATTACH", World.Instance.UsePalettes ? palettesTexture : attachmentsTexture);
                    material.SetInt("_ATTACH_COUNT", _tempAttachments.Count);
                    material.SetVectorArray("_ATTACH_POS", positions);
                }
            }
        }
    }
}
