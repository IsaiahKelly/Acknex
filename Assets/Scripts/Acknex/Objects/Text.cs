using Acknex.Interfaces;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.UI;

namespace Acknex
{
    public class Text : MaskableGraphic, IAcknexObjectContainer
    {
        private Material[] _materials;
        private UIVertex[] _verts;
        public Font Font => (Font)AcknexObject.GetAcknexObject("FONT").Container;

        //public override UnityEngine.Texture mainTexture => World.Instance.UsePalettes ? Font.GlyphsPalette : Font.GlyphsTexture;

        public override Material material { get; set; }

        public virtual IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Text);

        public bool DebugMarked { get; set; }

        public void Disable()
        {
        }

        public void Enable()
        {
        }

        public GameObject GameObject => null;

        public Vector3 GetCenter()
        {
            return default;
        }

        public IAcknexObject GetRegion()
        {
            return null;
        }

        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {
        }

        public void SetupInstance()
        {
        }

        public void SetupTemplate()
        {

        }

        public virtual void UpdateObject()
        {
            rectTransform.anchorMin = new Vector3(0f, 1f);
            rectTransform.anchorMax = new Vector3(0f, 1f);
            rectTransform.anchoredPosition = new Vector3(AcknexObject.GetFloat("POS_X"), -AcknexObject.GetFloat("POS_Y"), 0f);
            if (AcknexObject.IsDirty)
            {
                SetAllDirty();
            }
            AcknexObject.IsDirty = false;
            //todo: better way
            //if (World.Instance.AcknexObject.GetAcknexObject("MESSAGES.1") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("MESSAGES.2") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("MESSAGES.3") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("MESSAGES.4") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("MESSAGES.5") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("MESSAGES.6") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("MESSAGES.7") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("MESSAGES.8") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("MESSAGES.9") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("MESSAGES.10") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("MESSAGES.11") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("MESSAGES.12") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("MESSAGES.13") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("MESSAGES.14") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("MESSAGES.15") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("MESSAGES.16") == AcknexObject)
            //{
            //    enabled = true;
            //}
            //else
            //{
            //    enabled = false;
            //}
        }

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        protected override void Awake()
        {
            base.Awake();
            AcknexObject.Container = this;
        }

        protected override void Start()
        {
            base.Start();
            material = new Material(Shader.Find("Acknex/Font"));
            rectTransform.anchorMin = new Vector3(0f, 1f);
            rectTransform.anchorMax = new Vector3(0f, 1f);
            rectTransform.pivot = new Vector3(0f, 1f);
            _materials = new Material[] { material };
            _verts = new UIVertex[4];
        }

        private void Update()
        {
            UpdateObject();
        }

        protected override void OnPopulateMesh(VertexHelper vh)
        {
            vh.Clear();
            materialForRendering.SetTexture("_MainTex", World.Instance.UsePalettes ? Font.GlyphsPalette : Font.GlyphsTexture);
            var stringIndex = AcknexObject.GetInteger("INDEX") - 1;
            if (!AcknexObject.TryGetObject<List<IAcknexObject>>("STRING", out var strings) || stringIndex < 0 || stringIndex >= strings.Count)
            {
                return;
            }
            var str = strings[stringIndex];
            if (str == null)
            {
                return;
            }
            var stringValue = str.GetString("VAL");
            if (stringValue == null)
            {
                return;
            }
            DrawText(vh, stringValue);
        }

        protected void DrawText(VertexHelper vh, string stringValue)
        {
            var charWidth = Font.AcknexObject.GetFloat("WIDTH");
            var charHeight = Font.AcknexObject.GetFloat("HEIGHT");
            var x = 0f;
            var y = -charHeight;
            for (var i = 0; i < stringValue.Length; i++)
            {
                var c = stringValue[i];
                if (c == '\n')
                {
                    y += charHeight;
                    x = 0f;
                }
                var cUV = new Vector2(c, 0f);
                _verts[0] = new UIVertex { position = new Vector3(x, y), uv0 = new Vector2(0, 0), uv1 = cUV };
                _verts[1] = new UIVertex { position = new Vector3(x, y + charHeight), uv0 = new Vector2(0, 1), uv1 = cUV };
                _verts[2] = new UIVertex { position = new Vector3(x + charWidth, y + charHeight), uv0 = new Vector2(1, 1), uv1 = cUV };
                _verts[3] = new UIVertex { position = new Vector3(x + charWidth, y), uv0 = new Vector2(1, 0), uv1 = cUV };
                vh.AddUIVertexQuad(_verts);
                x += charWidth;
            }
        }
    }
}