using System.Collections;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Picture : Overlay
    {
        private Coroutine _animateCoroutine;

        private int _lastSide = -1;
        private Texture _lastTextureObject;

        public Panel Panel;
        public Texture TextureObject => AcknexObject.TryGetAcknexObject("TEXTURE", out var textureObject) ? textureObject?.Container as Texture : null;
        public Bitmap BitmapImage => TextureObject?.GetBitmapAt();
        public override IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Picture);

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        private bool TextureCanceled(Texture texture)
        {
            return AcknexObject.HasFlag("INVISIBLE") || texture != TextureObject;
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
            var skill = AcknexObject.GetAcknexObject("SKILL");
            if (skill != null)
            {
                side = skill.GetInteger("VAL") - 1;
            }
            else
            {
                side = 0;
            }
            if (side != _lastSide || TextureObject != _lastTextureObject || AcknexObject.HasFlag("PLAY"))
            {
                if (_animateCoroutine != null)
                {
                    StopCoroutine(_animateCoroutine);
                }
                if (TextureObject != null)
                {
                    if (AcknexObject.HasFlag("PLAY"))
                    {
                        AcknexObject.AddFlag("ONESHOT");
                        AcknexObject.RemoveFlag("PLAY");
                    }
                    _animateCoroutine = StartCoroutine(Animate(side));
                }
            }
            _lastTextureObject = TextureObject;
            _lastSide = side;
            OverlayGraphic.rectTransform.anchoredPosition = new Vector3(AcknexObject.GetFloat("POS_X"), -AcknexObject.GetFloat("POS_Y"), 0f);
            if (CurrentBitmap != null)
            {
                OverlayGraphic.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, CurrentBitmap.Width);
                OverlayGraphic.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, CurrentBitmap.Height);
            }
        }
    }
}