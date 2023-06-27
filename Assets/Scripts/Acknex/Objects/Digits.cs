using NameId = System.UInt32;
using Acknex.Interfaces;
using UnityEngine;
using UnityEngine.UI;
using PropertyName = Acknex.Interfaces.PropertyName;

namespace Acknex
{
    public class Digits : Text
    {
        public override string ToString()
        {
            return AcknexObject.ToString();
        }

        public override IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Digits);
        public Panel Panel;
        private static IAcknexObject GetTemplateCallback(NameId name)
        {
            return null;
        }

        public override void UpdateObject()
        {
            rectTransform.anchorMin = new Vector3(0f, 1f);
            rectTransform.anchorMax = new Vector3(0f, 1f);
            rectTransform.anchoredPosition = new Vector3(AcknexObject.GetFloat(PropertyName.POS_X), -AcknexObject.GetFloat(PropertyName.POS_Y), 0f);
            if (AcknexObject.TryGetAcknexObject(PropertyName.SKILL, out var skill) && skill.IsDirty)
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
                if (AcknexObject.TryGetAcknexObject(PropertyName.SKILL, out var skill))
                {
                    var len = AcknexObject.GetFloat(PropertyName.LEN);
                    var skillValue = skill.GetInteger(PropertyName.VAL).ToString($"D{len}");
                    DrawText(vh, skillValue, true);
                }
            }
        }
    }
}