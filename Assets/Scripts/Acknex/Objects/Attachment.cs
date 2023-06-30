using NameId = System.UInt32;
using Acknex.Interfaces;
using System.Collections.Generic;
using UnityEngine;
using PropertyName = Acknex.Interfaces.PropertyName;

namespace Acknex
{
    public static class Attachment
    {
        public const int MaxAttachments = 255;

        public static int ProcessAttachments(
            Texture[] tempAttachments,
            ref Texture2DArray attachmentsTexture,
            ref Texture2DArray palettesTexture, 
            Vector4[] positions,
            Texture texture,
            IList<Material> materials)
        {
            var attachmentCount = 0;
            var isDirty = false;
            var textureAcknexObject = texture.AcknexObject;
            while (textureAcknexObject.TryGetAcknexObject(PropertyName.ATTACH, out var attachAcknexObject))
            {
                isDirty |= textureAcknexObject.IsDirty;
                textureAcknexObject = attachAcknexObject;
            }
            if (!isDirty)
            {
                return attachmentCount;
            }
            if (materials == null)
            {
                return attachmentCount;
            }
            if (!texture.AcknexObject.TryGetAcknexObject(PropertyName.ATTACH, out var attach))
            {
                for (var i = 0; i < materials.Count; i++)
                {
                    var material = materials[i];
                    if (material == null)
                    {
                        return attachmentCount;
                    }
                    material.SetInt("_attachCount", 0);
                }
                return attachmentCount;
            }
            var posX = attach.GetFloat(PropertyName.POS_X);
            var posY = attach.GetFloat(PropertyName.POS_Y);
            var scaleX = attach.GetFloat(PropertyName.SCALE_X);
            var scaleY = attach.GetFloat(PropertyName.SCALE_Y);
            positions[attachmentCount] = new Vector4(posX, posY, scaleX, scaleY);
            texture = (Texture)attach.Container;
            tempAttachments[attachmentCount++] = texture;
            while (texture.AcknexObject.TryGetAcknexObject(PropertyName.ATTACH, out var child))
            {
                var childTexture = (Texture)child.Container;
                posX += texture.AcknexObject.GetFloat(PropertyName.POS_X);
                posY += texture.AcknexObject.GetFloat(PropertyName.POS_Y);
                scaleX = texture.AcknexObject.GetFloat(PropertyName.SCALE_X);
                scaleY = texture.AcknexObject.GetFloat(PropertyName.SCALE_Y);
                positions[attachmentCount] = (new Vector4(posX, posY, scaleX, scaleY));
                tempAttachments[attachmentCount++] = (childTexture);
                texture = childTexture;
            }
            if (attachmentsTexture == null || palettesTexture == null)
            {
                var bitmap = texture.GetBitmapAt(0);
                attachmentsTexture = new Texture2DArray((int)bitmap.Width, (int)bitmap.Height, MaxAttachments, bitmap.CropTexture.Texture.format, bitmap.CropTexture.Texture.mipmapCount > 1);
                palettesTexture = new Texture2DArray((int)bitmap.Width, (int)bitmap.Height, MaxAttachments, bitmap.CropTexture.Palette.format, bitmap.CropTexture.Palette.mipmapCount > 1);
                attachmentsTexture.filterMode = palettesTexture.filterMode = World.Instance.UsePalettes ? FilterMode.Point : (World.Instance.BilinearFilter ? FilterMode.Bilinear : FilterMode.Point);
            }
            for (var i = 0; i < attachmentCount; i++)
            {
                texture = tempAttachments[i];
                var cycle = texture.AcknexObject.GetInteger(PropertyName.CYCLE);
                var bitmap = texture.GetBitmapAt(cycle);
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
                    material.SetInt("_attachCount", attachmentCount);
                    material.SetVectorArray("_attachPos", positions);
                }
            }
            return attachmentCount;
        }
    }
}
