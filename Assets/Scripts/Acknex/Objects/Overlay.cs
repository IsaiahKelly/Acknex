﻿using Acknex.Interfaces;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Acknex
{
    public class Overlay : MonoBehaviour, IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Overlay);

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        private Graphic _overlayGraphic;
        private Bitmap _overlaySprite;

        public void UpdateObject()
        {
            _overlayGraphic.enabled = AcknexObject.HasFlag("VISIBLE");
            _overlayGraphic.rectTransform.anchorMin = new Vector3(0f, 1f);
            _overlayGraphic.rectTransform.anchorMax = new Vector3(0f, 1f);
            _overlayGraphic.rectTransform.anchoredPosition = new Vector3(AcknexObject.GetFloat("POS_X") * World.Instance.CanvasWidthRatio, -AcknexObject.GetFloat("POS_Y"), 0f);
            var overlaySprite = AcknexObject.GetAcknexObject("OVLYS")?.Container as Bitmap;
            if (_overlaySprite != overlaySprite && overlaySprite != null)
            {
                //if (World.Instance.BitmapsByName.TryGetValue(overlaySprite, out var bitmap))
                {
                    _overlayGraphic.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, (AcknexObject.TryGetFloat("SIZE_X", out var width) ? width : overlaySprite.Width) * World.Instance.CanvasWidthRatio);
                    _overlayGraphic.rectTransform.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, AcknexObject.TryGetFloat("SIZE_Y", out var height) ? height : overlaySprite.Height);
                    overlaySprite.UpdateMaterial(_overlayGraphic.material, null, 0, false, null);
                }
                _overlaySprite = overlaySprite;
            }
            _overlayGraphic.transform.SetSiblingIndex(_overlayGraphic.transform.parent.childCount - 1 - AcknexObject.GetInteger("LAYER"));
        }

        public void Enable()
        {

        }

        public void Disable()
        {

        }

        public void SetupTemplate()
        {
            
        }

        public void SetupInstance()
        {
            
        }

        public Vector3 GetCenter()
        {
            return default;
        }

        public IAcknexObject GetRegion()
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
            overlayGraphic.material = new Material(Shader.Find("Acknex/Sprite"));
        }
    }
}
