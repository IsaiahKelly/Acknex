using Acknex.Interfaces;

namespace Acknex
{
    public class AcknexString : IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetDefinitionCallbackActor);

        private static IAcknexObject GetDefinitionCallbackActor(string name)
        {
            return null;
        }

        public string Value;

        public AcknexString(string value)
        {
            Value = value;
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
