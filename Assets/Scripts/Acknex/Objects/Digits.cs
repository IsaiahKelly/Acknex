using Acknex.Interfaces;
using UnityEngine;
using UnityEngine.UI;

namespace Acknex
{
    public class Digits : Text
    {
        public override IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Digits);
        public Panel Panel;
        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        public override void UpdateObject()
        {
            rectTransform.anchorMin = new Vector3(0f, 1f);
            rectTransform.anchorMax = new Vector3(0f, 1f);
            rectTransform.anchoredPosition = new Vector3(AcknexObject.GetFloat("POS_X"), -AcknexObject.GetFloat("POS_Y"), 0f);
            if (AcknexObject.TryGetAcknexObject("SKILL", out var skill) && skill.IsDirty)
            {
                SetAllDirty();
            }
            AcknexObject.IsDirty = false;
        }

        protected override void OnPopulateMesh(VertexHelper vh)
        {
            vh.Clear();
            if (Panel != null && Panel.OverlayGraphic.enabled)
            {
                materialForRendering.SetTexture("_MainTex", World.Instance.UsePalettes ? Font.GlyphsPalette : Font.GlyphsTexture);
                if (AcknexObject.TryGetAcknexObject("SKILL", out var skill))
                {
                    var len = AcknexObject.GetFloat("LEN");
                    var skillValue = skill.GetInteger("VAL").ToString($"D{len}");
                    DrawText(vh, skillValue);
                }
            }
        }
    }
}