using Acknex.Interfaces;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Animations;
using UnityEngine.UI;

namespace Acknex
{
    public class Overlay : MonoBehaviour, IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetDefinitionCallback);

        private static IAcknexObject GetDefinitionCallback(string name)
        {
            return null;
        }

        private Graphic _overlayGraphic;
        private string _overlaySprite;


        public List<string> Flags
        {
            get
            {
                if (AcknexObject.TryGet("FLAGS", out List<string> flags))
                {
                    return flags;
                }
                flags = new List<string>();
                AcknexObject["FLAGS"] = flags;
                return flags;
            }
        }

        public void UpdateObject()
        {
            _overlayGraphic.rectTransform.anchorMin = new Vector3(0f, 1f);
            _overlayGraphic.rectTransform.anchorMax = new Vector3(0f, 1f);
            _overlayGraphic.rectTransform.anchoredPosition = new Vector3(AcknexObject.Get<float>("POS_X") * World.Instance.CanvasWidthRatio, -AcknexObject.Get<float>("POS_Y"), 0f);
            var overlaySprite = AcknexObject.Get<string>("OVLYS");
            if (!string.IsNullOrEmpty(overlaySprite) && _overlaySprite != overlaySprite)
            {
                if (World.Instance.BitmapsByName.TryGetValue(overlaySprite, out var bitmap))
                {
                    _overlayGraphic.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, (AcknexObject.TryGet<float>("SIZE_X", out var width) ? width : bitmap.Width) * World.Instance.CanvasWidthRatio);
                    _overlayGraphic.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, AcknexObject.TryGet<float>("SIZE_Y", out var height) ? height : bitmap.Height);
                    bitmap.UpdateMaterial(_overlayGraphic.material, null, 0, false);
                }
                _overlaySprite = overlaySprite;
            }
            _overlayGraphic.enabled = Flags.Contains("VISIBLE");
            _overlayGraphic.transform.SetSiblingIndex(_overlayGraphic.transform.parent.childCount - 1 - AcknexObject.Get<int>("LAYER"));
        }

        public void Enable()
        {

        }

        public void Disable()
        {

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
