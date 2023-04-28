using Acknex.Interfaces;

namespace Acknex
{
    public class Panel : Overlay
    {
        public override string ToString()
        {
            return AcknexObject.ToString();
        }

        public override IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Panel);
        private static IAcknexObject GetTemplateCallback(int name)
        {
            return null;
        }

        public override void UpdateObject()
        {
            //todo: better way
            if (
                World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_1) == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_2) == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_3) == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_4) == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_5) == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_6) == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_7) == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_8) == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_9) == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_10) == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_11) == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_12) == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_13) == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_14) == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_15) == AcknexObject
             || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_16) == AcknexObject)
            {
                OverlayGraphic.enabled = true;
            }
            else
            {
                OverlayGraphic.enabled = false;
            }
            var overlaySprite = AcknexObject.GetAcknexObject(PropertyName.PAN_MAP)?.Container as Bitmap;
            Draw(overlaySprite);
        }
    }
}