using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class AcknexString : IAcknexObjectContainer
    {
        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {

        }
        public bool DebugMarked { get; set; }

        public GameObject GameObject => null;
        
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetDefinitionCallbackActor, ObjectType.String);

        private static IAcknexObject GetDefinitionCallbackActor(string name)
        {
            return null;
        }

        public AcknexString(string value)
        {
            AcknexObject.Container = this;
            AcknexObject.SetString("VAL", value);
        }

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
    }
}
