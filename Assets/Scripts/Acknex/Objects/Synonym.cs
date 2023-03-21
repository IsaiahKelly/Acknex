using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Synonym : IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Synonym);

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
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

        public Synonym()
        {
            AcknexObject.Container = this;
        }

    }
}