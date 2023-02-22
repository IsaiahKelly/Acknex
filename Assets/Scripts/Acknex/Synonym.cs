using Acknex.Interfaces;

namespace Acknex
{
    public class Synonym : IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetDefinitionCallback);

        private static IAcknexObject GetDefinitionCallback(string name)
        {
            return null;
        }

        //public string TYPE;
        //public string DEFAULT;

        public void UpdateObject()
        {
            throw new System.NotImplementedException();
        }

        public void Enable()
        {
            
        }

        public void Disable()
        {
            
        }

    }
}