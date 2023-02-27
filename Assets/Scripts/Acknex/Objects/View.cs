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
                _camera.fieldOfView = Mathf.InverseLerp(0.2f, 2.0f, World.Instance.GetSkillValue("PLAYER_ARC")) * 120f;
                var transformLocalPosition = transform.localPosition;
                transformLocalPosition.y = World.Instance.GetSkillValue("PLAYER_SIZE");
                transform.localPosition = transformLocalPosition;
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
            _camera = GetComponent<Camera>();
        }

        private void Update()
        {
            UpdateObject();
        }
    }
}