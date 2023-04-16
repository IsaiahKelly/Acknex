using Acknex.Interfaces;

namespace Acknex
{
    public class Panel : Overlay
    {
        public override IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Panel);
        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        public override void UpdateObject()
        {
            var overlaySprite = AcknexObject.GetAcknexObject("PAN_MAP")?.Container as Bitmap;
            Draw(overlaySprite);
        }
    }
}