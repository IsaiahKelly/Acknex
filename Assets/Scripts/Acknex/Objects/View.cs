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

        public void UpdateObject()
        {
            
        }

        public void Enable()
        {
           
        }

        public void Disable()
        {
            
        }
    }
}