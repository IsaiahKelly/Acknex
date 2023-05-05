using NameId = System.UInt32;
using System.Collections;
using Acknex.Interfaces;
using UnityEngine;
using PropertyName = Acknex.Interfaces.PropertyName;

namespace Acknex
{
    public class Picture : Overlay
    {
        public override string ToString()
        {
            return AcknexObject.ToString();
        }

        private Coroutine _animateCoroutine;

        public Panel Panel;
        public Texture TextureObject => AcknexObject.TryGetAcknexObject(PropertyName.TEXTURE, out var textureObject) ? textureObject?.Container as Texture : null;
        public override IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Picture);

        private static IAcknexObject GetTemplateCallback(NameId name)
        {
            return null;
        }

        private bool TextureCanceled(Texture texture)
        {
            return AcknexObject.HasFlag(PropertyName.INVISIBLE) || texture != TextureObject;
        }

        private IEnumerator Animate(int side = 0)
        {
            var enumerator = TextureObject.AnimateTexture(TextureCanceled, false, Materials, null, null, AcknexObject, null, side);
            while (enumerator.MoveNext())
            {
                yield return enumerator.Current;
            }
        }

        public override void UpdateObject()
        {
            if (Panel != null && Panel.OverlayGraphic.enabled)
            {
                OverlayGraphic.enabled = true;
            }
            else
            {
                OverlayGraphic.enabled = false;
            }
            int side;
            var skill = AcknexObject.GetAcknexObject(PropertyName.SKILL);
            if (skill != null)
            {
                side = skill.GetInteger(PropertyName.VAL) - 1;
            }
            else
            {
                side = 0;
            }
            AcknexObject.SetFloat(PropertyName.SIDE, side);
            if (IsTextureDirty)
            {
                if (_animateCoroutine != null)
                {
                    StopCoroutine(_animateCoroutine);
                }
                if (TextureObject != null)
                {
                    if (AcknexObject.HasFlag(PropertyName.PLAY))
                    {
                        AcknexObject.AddFlag(PropertyName.ONESHOT);
                        AcknexObject.RemoveFlag(PropertyName.PLAY);
                    }
                    _animateCoroutine = StartCoroutine(Animate(side));
                }
                IsTextureDirty = false;
            }
            OverlayGraphic.rectTransform.anchoredPosition = new Vector3(AcknexObject.GetFloat(PropertyName.POS_X), -AcknexObject.GetFloat(PropertyName.POS_Y), 0f);
            if (CurrentBitmap != null)
            {
                OverlayGraphic.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, CurrentBitmap.Width);
                OverlayGraphic.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, CurrentBitmap.Height);
            }
        }
    }
}