using System.Collections.Generic;
using Acknex.Interfaces;
using UnityEngine;
using UnityEngine.UI;
using NameId = System.UInt32;
using PropertyName = Acknex.Interfaces.PropertyName;

namespace Acknex
{
    public class Overlay : MonoBehaviour, IAcknexObjectContainer, IGraphicObject
    {
        protected IList<Material> Materials;

        public Graphic OverlayGraphic;

        public virtual Bitmap OverlaySprite => AcknexObject.GetAcknexObject(PropertyName.OVLYS)?.Container as Bitmap;
        public virtual IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Overlay);
        public Vector4 BitmapCoords { get; set; }

        public Bitmap CurrentBitmap { get; set; }

        public void Disable()
        {
        }

        public void Enable()
        {
        }

        public GameObject GameObject => gameObject;

        public float GetAmbient()
        {
            return 1f;
        }

        public Vector3 GetCenter()
        {
            return default;
        }

        public Vector3 GetEyeLevel()
        {
            return GetCenter();
        }

        public IAcknexObject GetRegion()
        {
            return null;
        }

        public bool IsGeometryDirty { get; set; }
        public virtual bool IsTextureDirty { get; set; } = true;

        public virtual void NotifyPropertyChanged(uint propertyName)
        {
            switch (propertyName)
            {
                case (uint)PropertyName.SIDE:
                case (uint)PropertyName.AMBIENT:
                case (uint)PropertyName.PLAY:
                case (uint)PropertyName.INVISIBLE:
                case (uint)PropertyName.OVLYS:
                    IsTextureDirty = true;
                    break;
            }
        }

        public Vector4 OffsetScale { get; set; }

        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {
        }

        public void ResetTexture()
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
            //todo: better way
            if (
                AcknexObject.HasFlag(PropertyName.VISIBLE) && AcknexObject.HasFlag(PropertyName.LAYER) ||
                World.Instance.AcknexObject.GetAcknexObject(PropertyName.LAYERS_1) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.LAYERS_2) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.LAYERS_3) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.LAYERS_4) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.LAYERS_5) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.LAYERS_6) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.LAYERS_7) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.LAYERS_8) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.LAYERS_9) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.LAYERS_10) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.LAYERS_11) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.LAYERS_12) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.LAYERS_13) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.LAYERS_14) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.LAYERS_15) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.LAYERS_16) == AcknexObject)
            {
                OverlayGraphic.enabled = true;
            }
            else
            {
                OverlayGraphic.enabled = false;
            }
            Draw();
        }

        public override string ToString()
        {
            return AcknexObject.ToString();
        }

        protected void Draw()
        {
            OverlayGraphic.rectTransform.anchoredPosition = new Vector3(AcknexObject.GetFloat(PropertyName.POS_X), -AcknexObject.GetFloat(PropertyName.POS_Y), 0f);
            OverlayGraphic.transform.SetSiblingIndex(AcknexObject.GetInteger(PropertyName.LAYER)); 
            var overlaySprite = OverlaySprite;
            if (overlaySprite == null)
            {
                for (var i = 0; i < Materials.Count; i++)
                {
                    var material = Materials[i];
                    material.SetTexture("_MainTex", World.Instance.NullTexture);
                    material.SetInt("_TRANSPARENT", 1);
                }
            }
            else
            {
                if (IsTextureDirty)
                {
                    OverlayGraphic.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, overlaySprite.Width);
                    OverlayGraphic.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, overlaySprite.Height);
                    overlaySprite.UpdateMaterial(Materials, null, 0, false, AcknexObject);
                    AcknexObject.SetFloat(PropertyName.SIZE_X, overlaySprite.Width);
                    AcknexObject.SetFloat(PropertyName.SIZE_Y, overlaySprite.Height);
                    IsTextureDirty = false;
                }
            }
        }

        private static IAcknexObject GetTemplateCallback(uint name)
        {
            return null;
        }

        private void Awake()
        {
            AcknexObject.Container = this;
        }

        private void Start()
        {
            SetupInnerGameObject(gameObject, out OverlayGraphic);
        }

        private void Update()
        {
            UpdateObject();
        }

        private void SetupInnerGameObject(GameObject overlayGameObject, out Graphic overlayGraphic)
        {
            overlayGameObject.transform.SetParent(transform, false);
            overlayGraphic = overlayGameObject.AddComponent<Image>();
            overlayGraphic.rectTransform.anchorMin = new Vector3(0f, 1f);
            overlayGraphic.rectTransform.anchorMax = new Vector3(0f, 1f);
            overlayGraphic.rectTransform.pivot = new Vector3(0f, 1f);
            overlayGraphic.material = new Material(Shader.Find("Acknex/UI"));
            World.Instance.CreatedObjects.Add(overlayGraphic.material);
            Materials = new List<Material> { OverlayGraphic.material };
        }
    }
}