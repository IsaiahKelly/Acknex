using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{


    public class Panel : MonoBehaviour, IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback);
        public void UpdateObject()
        {
            
        }

        public void Enable()
        {
            
        }

        public void Disable()
        {
            
        }

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

    }
}