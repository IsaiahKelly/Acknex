using NameId = System.UInt32;
using Acknex.Interfaces;
using UnityEngine;
using PropertyName = Acknex.Interfaces.PropertyName;

namespace Acknex
{
    public class AcknexString : IAcknexObjectContainer
    {
        public void NotifyPropertyChanged(NameId propertyName)
        {

        }
        public AcknexString(string value)
        {
            AcknexObject.Container = this;
            AcknexObject.SetString(PropertyName.VAL, value);
        }

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetDefinitionCallbackActor, ObjectType.String);

        public void Disable()
        {
        }

        public void Enable()
        {
        }

        public GameObject GameObject => null;

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

        public void UpdateObject()
        {
        }

        private static IAcknexObject GetDefinitionCallbackActor(NameId name)
        {
            return null;
        }
    }
}