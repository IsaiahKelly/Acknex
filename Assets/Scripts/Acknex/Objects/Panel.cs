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
            //todo: better way
            if (
                World.Instance.AcknexObject.GetAcknexObject("PANELS.1") == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject("PANELS.2") == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject("PANELS.3") == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject("PANELS.4") == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject("PANELS.5") == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject("PANELS.6") == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject("PANELS.7") == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject("PANELS.8") == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject("PANELS.9") == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject("PANELS.10") == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject("PANELS.11") == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject("PANELS.12") == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject("PANELS.13") == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject("PANELS.14") == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject("PANELS.15") == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject("PANELS.16") == AcknexObject)
            {
                OverlayGraphic.enabled = true;
            }
            else
            {
                OverlayGraphic.enabled = false;
            }
            var overlaySprite = AcknexObject.GetAcknexObject("PAN_MAP")?.Container as Bitmap;
            Draw(overlaySprite);
        }
    }
}