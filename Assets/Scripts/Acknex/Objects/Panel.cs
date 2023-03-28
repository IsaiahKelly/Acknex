using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{


    public class Panel : MonoBehaviour, IAcknexObjectContainer
    {
        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {

        }
        [field:SerializeField]
        public bool DebugMarked { get; set; }
        public GameObject GameObject => gameObject;
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Panel);
        public void UpdateObject()
        {
            
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

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

    }
}