using Acknex.Interfaces;
using NameId = System.UInt32;

namespace Acknex
{
    public class Panel : Overlay
    {
        public override IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Panel);

        public override Bitmap OverlaySprite => AcknexObject.GetAcknexObject(PropertyName.PAN_MAP)?.Container as Bitmap;

        public override string ToString()
        {
            return AcknexObject.ToString();
        }

        private static IAcknexObject GetTemplateCallback(uint name)
        {
            return null;
        }

        public override void NotifyPropertyChanged(uint propertyName)
        {
            switch (propertyName)
            {
                case (uint)PropertyName.SIDE:
                case (uint)PropertyName.AMBIENT:
                case (uint)PropertyName.PLAY:
                case (uint)PropertyName.INVISIBLE:
                case (uint)PropertyName.PAN_MAP:
                    IsTextureDirty = true;
                    break;
            }
        }

        public override void UpdateObject()
        {
            //todo: better way
            if (World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_1) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_2) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_3) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_4) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_5) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_6) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_7) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_8) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_9) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_10) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_11) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_12) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_13) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_14) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_15) == AcknexObject || World.Instance.AcknexObject.GetAcknexObject(PropertyName.PANELS_16) == AcknexObject)
            {
                OverlayGraphic.enabled = true;
            }
            else
            {
                OverlayGraphic.enabled = false;
            }
            Draw();
        }
    }
}