using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{


    public class Panel : MonoBehaviour, IAcknexObjectContainer
    {
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

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

    }
}