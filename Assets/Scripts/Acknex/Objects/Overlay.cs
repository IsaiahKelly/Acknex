using Acknex.Interfaces;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Acknex
{
    public class Overlay : MonoBehaviour, IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback);

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        private Graphic _overlayGraphic;
        private string _overlaySprite;

        public HashSet<string> Flags
        {
            get
            {
                if (AcknexObject.TryGetObject("FLAGS", out HashSet<string> flags))
                {
                    return flags;
                }
                flags = new HashSet<string>();
                AcknexObject.SetObject("FLAGS", flags);
                return flags;
            }
        }

        public void UpdateObject()
        {
            _overlayGraphic.rectTransform.anchorMin = new Vector3(0f, 1f);
            _overlayGraphic.rectTransform.anchorMax = new Vector3(0f, 1f);
            _overlayGraphic.rectTransform.anchoredPosition = new Vector3(AcknexObject.GetFloat("POS_X") * World.Instance.CanvasWidthRatio, -AcknexObject.GetFloat("POS_Y"), 0f);
            var overlaySprite = AcknexObject.GetString("OVLYS");
            if (!string.IsNullOrEmpty(overlaySprite) && _overlaySprite != overlaySprite)
            {
                if (World.Instance.BitmapsByName.TryGetValue(overlaySprite, out var bitmap))
                {
                    _overlayGraphic.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, (AcknexObject.TryGetFloat("SIZE_X", out var width) ? width : bitmap.Width) * World.Instance.CanvasWidthRatio);
                    _overlayGraphic.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, AcknexObject.TryGetFloat("SIZE_Y", out var height) ? height : bitmap.Height);
                    bitmap.UpdateMaterial(_overlayGraphic.material, null, 0, false);
                }
                _overlaySprite = overlaySprite;
            }
            _overlayGraphic.enabled = Flags.Contains("VISIBLE");
            _overlayGraphic.transform.SetSiblingIndex(_overlayGraphic.transform.parent.childCount - 1 - AcknexObject.GetInteger("LAYER"));
        }

        public void Enable()
        {

        }

        public void Disable()
        {

        }

        private void Awake()
        {
            AcknexObject.Container = this;
        }

        private void Start()
        {
            transform.SetParent(World.Instance.Canvas.transform, false);
            SetupInnerGameObject(gameObject, out _overlayGraphic);
        }

        private void Update()
        {
            UpdateObject();
        }

        private void SetupInnerGameObject(GameObject overlayGameObject, out Graphic overlayGraphic)
        {
            overlayGameObject.transform.SetParent(transform, false);
            overlayGraphic = overlayGameObject.AddComponent<Image>();
            overlayGraphic.rectTransform.pivot = new Vector3(0f, 1f);
            overlayGraphic.material = new Material(Shader.Find("Acknex/Sprite"));
        }
    }
}
