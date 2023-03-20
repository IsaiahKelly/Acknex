using Acknex.Interfaces;

namespace Acknex
{
    public class Text : IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Text);
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


        public Text()
        {
            AcknexObject.Container = this;
        }
    }
}