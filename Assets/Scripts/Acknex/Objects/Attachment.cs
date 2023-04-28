using Acknex.Interfaces;
using System.Collections.Generic;
using UnityEngine;
using PropertyName = Acknex.Interfaces.PropertyName;

namespace Acknex
{
    public static class Attachment
    {
        public static void ProcessAttachments(List<Texture> tempAttachments, ref Texture2DArray attachmentsTexture, ref Texture2DArray palettesTexture, List<Vector4> positions, Texture attachment, IList<Material> materials)
        {
            tempAttachments.Clear();
            if (materials == null)
            {
                return;
            }
            if (!attachment.AcknexObject.TryGetAcknexObject(PropertyName.ATTACH, out var attach))
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
            var posX = attachment.AcknexObject.GetFloat(PropertyName.POS_X);
            var posY = attachment.AcknexObject.GetFloat(PropertyName.POS_Y);
            positions.Add(new Vector2(posX, posY));
            attachment = (Texture)attach.Container;
            tempAttachments.Add(attachment);
            while (attachment.AcknexObject.TryGetAcknexObject(PropertyName.ATTACH, out var child))
            {
                var childTexture = (Texture)child.Container;
                tempAttachments.Add(childTexture);
                posX += attachment.AcknexObject.GetFloat(PropertyName.POS_X);
                posY += attachment.AcknexObject.GetFloat(PropertyName.POS_Y);
                positions.Add(new Vector2(posX, posY));
                attachment = childTexture;
            }
            if (attachmentsTexture == null || palettesTexture == null)
            {
                var bitmap = attachment.GetBitmapAt(0);
                attachmentsTexture = new Texture2DArray((int)bitmap.Width, (int)bitmap.Height, tempAttachments.Count, bitmap.CropTexture.Texture.format, bitmap.CropTexture.Texture.mipmapCount > 1);
                palettesTexture = new Texture2DArray((int)bitmap.Width, (int)bitmap.Height, tempAttachments.Count, bitmap.CropTexture.Palette.format, bitmap.CropTexture.Palette.mipmapCount > 1);
                attachmentsTexture.filterMode = palettesTexture.filterMode = World.Instance.UsePalettes ? FilterMode.Point : (World.Instance.BilinearFilter ? FilterMode.Bilinear : FilterMode.Point);
            }
            positions.Clear();
            for (var i = 0; i < tempAttachments.Count; i++)
            {
                attachment = tempAttachments[i];
                var cycle = attachment.AcknexObject.GetInteger(PropertyName.CYCLE);
                var bitmap = attachment.GetBitmapAt(cycle);
                Graphics.CopyTexture(bitmap.CropTexture.Texture, 0, attachmentsTexture, i);
                Graphics.CopyTexture(bitmap.CropTexture.Palette, 0, palettesTexture, i);
            }
            attachmentsTexture.Apply(true, false);
            palettesTexture.Apply(true, false);
            for (var i = 0; i < materials.Count; i++)
            {
                Material material = materials[i];
                if (material != null)
                {
                    material.SetTexture("_ATTACH", World.Instance.UsePalettes ? palettesTexture : attachmentsTexture);
                    material.SetInt("_ATTACH_COUNT", tempAttachments.Count);
                    material.SetVectorArray("_ATTACH_POS", positions);
                }
            }
        }
    }
}
