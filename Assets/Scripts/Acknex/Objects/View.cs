using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class View : MonoBehaviour, IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback);
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
                Shader.SetGlobalFloat("_CAMERA_PITCH",  Mathf.DeltaAngle(CameraExtensions.GetLastActiveCamera().transform.localEulerAngles.x, 0f));
            }
            var ray = _camera.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out var hitInfo))
            {
                if (hitInfo.collider.TryGetComponent<IAcknexObjectContainer>(out var container))
                {
                    if (container is Region)
                    {
                        World.Instance.AssignSynonymToObject("TOUCH_REG", container.AcknexObject, true);
                    }
                    World.Instance.AssignSynonymToObject("TOUCHED", container.AcknexObject, true);
                }
            }
        }

        public void Enable()
        {
           
        }

        public void Disable()
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