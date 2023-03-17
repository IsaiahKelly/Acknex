using Acknex.Interfaces;

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

        public Synonym()
        {
            AcknexObject.Container = this;
        }

    }
}