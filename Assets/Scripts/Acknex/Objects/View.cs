using Acknex.Interfaces;
using System;
using UnityEngine;

namespace Acknex
{
    public class View : MonoBehaviour, IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.View);
        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        public static View Instance { get; private set; }

        public bool MainView;

        private Camera _camera;

        public void UpdateObject()
        {
            if (MainView)
            {
                //todo: check if fov is right
                _camera.fieldOfView = Mathf.InverseLerp(0.2f, 2.0f, World.Instance.GetSkillValue("PLAYER_ARC")) * 120f;
                var transformLocalPosition = transform.localPosition;
                transformLocalPosition.y = World.Instance.GetSkillValue("PLAYER_SIZE");
                transform.localPosition = transformLocalPosition;
                var transformLocalRotation = transform.localRotation;
                transformLocalRotation.eulerAngles = new Vector3(World.Instance.GetSkillValue("PLAYER_TILT") * Mathf.Rad2Deg, 0f, 0f);
                transform.localRotation = transformLocalRotation;
                //Shader.SetGlobalFloat("_CAMERA_PITCH",  Mathf.DeltaAngle(CameraExtensions.GetLastActiveCamera().transform.localEulerAngles.x, 0f));
            }
            var ray = _camera.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out var hitInfo))
            {
                if (hitInfo.collider.TryGetComponent<IAcknexObjectContainer>(out var container))
                {
                    switch (container)
                    {
                        case Region _:
                            World.Instance.SetSynonymObject("TOUCH_REG", container.AcknexObject);
                            break;
                        case Thing _:
                            World.Instance.SetSynonymObject("TOUCHED", container.AcknexObject);
                            break;
                    }
                }
            }
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

        private void Awake()
        {
            Instance = this;
            AcknexObject.Container = this;
            _camera = GetComponent<Camera>();
        }

        private void Update()
        {
            UpdateObject();
        }
    }
}