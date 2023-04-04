using Acknex.Interfaces;
using UnityEngine;
using UnityEngine.UI;

namespace Acknex
{
    public class Text : MaskableGraphic, IAcknexObjectContainer
    {
        private UIVertex[] _verts;
        public Font Font => (Font)AcknexObject.GetAcknexObject("FONT").Container;

        public override UnityEngine.Texture mainTexture => World.Instance.UsePalettes ? Font.GlyphsPalette : Font.GlyphsTexture;

        public override Material material { get; set; }

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Text);

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

        public void UpdateObject()
        {
            //todo: better way
            if (World.Instance.AcknexObject.GetAcknexObject("LAYERS.1") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.2") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.3") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.4") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.5") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.6") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.7") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.8") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.9") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.10") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.11") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.12") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.13") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.14") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.15") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.16") == AcknexObject)
            {
                enabled = true;
            }
            else
            {
                enabled = false;
            }
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
            _verts = new UIVertex[4];
        }

        private void Update()
        {
            UpdateObject();
        }

        protected override void OnPopulateMesh(VertexHelper vh)
        {
            materialForRendering.mainTexture = mainTexture;
            if (!AcknexObject.TryGetAcknexObject("STRING", out var stringObject))
            {
                return;
            }
            var stringValue = stringObject.GetString("VAL");
            if (stringValue == null)
            {
                return;
            }
            var baseX = AcknexObject.GetFloat("POS_X");
            var baseY = AcknexObject.GetFloat("POS_Y");
            var charWidth = Font.AcknexObject.GetFloat("WIDTH");
            var charHeight = Font.AcknexObject.GetFloat("HEIGHT");
            var x = baseX;
            var y = -baseY;
            vh.Clear();
            for (var i = 0; i < stringValue.Length; i++)
            {
                var c = stringValue[i];
                if (c == '\n')
                {
                    y += charHeight;
                    x = baseX;
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