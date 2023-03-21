using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Skill : IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Skill);

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

        public Skill()
        {
            AcknexObject.Container = this;
        }
    }
}