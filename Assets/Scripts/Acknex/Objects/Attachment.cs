using Acknex.Interfaces;
using UnityEngine;
using Quaternion = UnityEngine.Quaternion;
using Vector3 = UnityEngine.Vector3;

namespace Acknex
{
    public class Attachment : MonoBehaviour, IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; }

        public Bitmap BitmapImage;
        public Texture TextureObject;
        public Material Material;

        private GameObject _attached;

        //todo: looks like an attachment disappear when it gets outside a given wall area, so we'll need barycentric interpolation to handle that
        //public static void HandleAttachment(
        //    ref GameObject attached,
        //    GameObject parent,
        //    IAcknexObject acknexObject,
        //    Texture textureObject,
        //    Vector3 baseRightDirection,
        //    Vector3? basePosition = null,
        //    bool pivotAtLeft = false)
        //{
        //    var attach = acknexObject.GetAcknexObject("ATTACH");
        //    if (attach == null && textureObject != null)
        //    {
        //        attach = textureObject.AcknexObject.GetAcknexObject("ATTACH");
        //    }
        //    if (attach != null && attached != null || attached != null && attach != attached)
        //    {
        //        Object.Destroy(attached);
        //    }
        //    if (attach != null && attached == null)
        //    {
        //        if (attach.Container is Texture toAttachTextureObject)
        //        {
        //            var toAttachBitmapImage = toAttachTextureObject.GetBitmapAt();
        //            attached = TextureUtils.BuildTextureGameObject(parent.transform, toAttachTextureObject.AcknexObject.GetString("NAME"), toAttachBitmapImage, out _, out var toAttachMeshRenderer, pivotAtLeft);
        //            var transformPosition = attached.transform.position;
        //            if (basePosition.HasValue)
        //            {
        //                transformPosition = basePosition.Value;
        //            }
        //            var baseForwardDirection = Vector3.Cross(baseRightDirection, Vector3.up);
        //            attached.transform.rotation = Quaternion.LookRotation(baseForwardDirection);
        //            var posX = textureObject.AcknexObject.GetFloat("POS_X") + toAttachTextureObject.AcknexObject.GetFloat("POS_X");
        //            var posY = textureObject.AcknexObject.GetFloat("POS_Y") + toAttachTextureObject.AcknexObject.GetFloat("POS_Y");
        //            var upperLeftPos = baseRightDirection * (posX / toAttachTextureObject.ScaleX);
        //            var upperTopPos = Vector3.down * (posY / toAttachTextureObject.ScaleY);
        //            transformPosition += upperLeftPos + upperTopPos - (baseForwardDirection * 0.01f);
        //            attached.transform.position = transformPosition;
        //            var attachment = attached.AddComponent<Attachment>();
        //            attachment.AcknexObject = acknexObject;
        //            attachment.AcknexObject.Container = attachment;
        //            attachment.TextureObject = toAttachTextureObject;
        //            attachment.BitmapImage = toAttachBitmapImage;
        //            attachment.Material = toAttachMeshRenderer.material;
        //        }
        //    }
        //}

        public void UpdateObject()
        {
            //TODO: this is causing an infinite loop
            //TextureUtils.HandleAttachment(ref _attached, gameObject, AcknexObject, TextureObject.AcknexObject);
            //TextureUtils.UpdateScale(transform, BitmapImage, TextureObject);
            //transform.localScale = TextureUtils.CalculateObjectSize(BitmapImage, TextureObject);
            //BitmapImage?.UpdateMaterial(Material, TextureObject, 0, false); //TODO: flag mirror?
            //if (TextureObject.AcknexObject.ContainsFlag("SHADOW"))
            //{
            //    gameObject.SetActive(false);
            //}
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

        private void Update()
        {
            UpdateObject();
        }
    }
}
