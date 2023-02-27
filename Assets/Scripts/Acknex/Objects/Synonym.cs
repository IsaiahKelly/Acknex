using Acknex.Interfaces;

namespace Acknex
{
    public class Synonym : IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback);

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

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