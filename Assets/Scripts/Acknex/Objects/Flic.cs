using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Flic : IAcknexObjectContainer
    {
        public bool IsTextureDirty => false;
        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {

        }
        public bool DebugMarked { get; set; }
        public GameObject GameObject => null;

        public void ResetTexture()
        {
            
        }

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Flic);
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


        public Flic()
        {
            AcknexObject.Container = this;
        }
    }
}