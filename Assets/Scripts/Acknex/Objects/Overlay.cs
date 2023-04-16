using System.Collections.Generic;
using Acknex.Interfaces;
using UnityEngine;
using UnityEngine.UI;

namespace Acknex
{

    public class Overlay : MonoBehaviour, IAcknexObjectContainer
    {
        private Bitmap _lastOverlaySprite;

        private Graphic _overlayGraphic;
        private IList<Material> _materials;
        public virtual IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Overlay);

        [field: SerializeField] public bool DebugMarked { get; set; }

        public void Disable()
        {
        }

        public void Enable()
        {
        }

        public GameObject GameObject => gameObject;

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
            if (World.Instance.AcknexObject.GetAcknexObject("LAYERS.1") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.2") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.3") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.4") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.5") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.6") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.7") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.8") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.9") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.10") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.11") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.12") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.13") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.14") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.15") == AcknexObject || World.Instance.AcknexObject.GetAcknexObject("LAYERS.16") == AcknexObject)
            {
                _overlayGraphic.enabled = true;
            }
            else
            {
                _overlayGraphic.enabled = false;
            }
            var overlaySprite = AcknexObject.GetAcknexObject("OVLYS")?.Container as Bitmap;
            Draw(overlaySprite);
        }

        protected void Draw(Bitmap overlaySprite)
        {
            _overlayGraphic.rectTransform.anchorMin = new Vector3(0f, 1f);
            _overlayGraphic.rectTransform.anchorMax = new Vector3(0f, 1f);
            _overlayGraphic.rectTransform.pivot = new Vector3(0f, 1f);
            _overlayGraphic.rectTransform.anchoredPosition = new Vector3(AcknexObject.GetFloat("POS_X"), -AcknexObject.GetFloat("POS_Y"), 0f);
            if (_lastOverlaySprite != overlaySprite && overlaySprite != null)
            {
                _overlayGraphic.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, overlaySprite.Width);
                _overlayGraphic.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, overlaySprite.Height);
                overlaySprite.UpdateMaterial(_materials, null, 0, false, null);
                AcknexObject.SetFloat("SIZE_X", overlaySprite.Width);
                AcknexObject.SetFloat("SIZE_Y", overlaySprite.Height);
                _lastOverlaySprite = overlaySprite;
            }
            _overlayGraphic.transform.SetSiblingIndex(AcknexObject.GetInteger("LAYER"));
        }

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        private void Awake()
        {
            AcknexObject.Container = this;
        }

        private void Start()
        {
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
            overlayGraphic.material = new Material(Shader.Find("Acknex/UI"));
            _materials = new List<Material>() {_overlayGraphic.material};
        }
    }
}