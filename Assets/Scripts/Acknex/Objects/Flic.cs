using Acknex.Interfaces;

namespace Acknex
{
    public class Flic : IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Flic);
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

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }


        public Flic()
        {
            AcknexObject.Container = this;
        }
    }
}