using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class View : MonoBehaviour, IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetDefinitionCallback);
        private static IAcknexObject GetDefinitionCallback(string name)
        {
            return null;
        }

        public bool MainView;

        private Camera _camera;

        public void UpdateObject()
        {
            if (MainView)
            {
                _camera.fieldOfView = Mathf.InverseLerp(0.2f, 2.0f, World.Instance.GetSkillValue("PLAYER_ARC")) * 120f;
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
            _camera = GetComponent<Camera>();
        }

        private void Update()
        {
            UpdateObject();
        }
    }
}