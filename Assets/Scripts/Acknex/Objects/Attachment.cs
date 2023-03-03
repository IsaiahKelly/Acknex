using Acknex.Interfaces;
using UnityEditor.PackageManager;
using UnityEngine;

namespace Acknex
{
    public class Attachment : MonoBehaviour, IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; }

        public Bitmap BitmapImage;
        public Texture TextureObject;
        public Material Material;

        private GameObject _attached;

        public static void HandleAttachment(ref GameObject attached, GameObject parent, IAcknexObject acknexObject, IAcknexObject textureObject, Vector3? basePosition = null, Quaternion? baseRotation = null, bool pivotAtLeft = false)
        {
            var attach = acknexObject.GetString("ATTACH");
            if (attach == null && textureObject != null)
            {
                attach = textureObject.GetString("ATTACH");
            }
            if (string.IsNullOrEmpty(attach) && attached != null || attached != null && attach != attached.name)
            {
                Object.Destroy(attached);
            }
            if (!string.IsNullOrEmpty(attach) && attached == null)
            {
                if (World.Instance.TexturesByName.TryGetValue(attach, out var toAttachTextureObject))
                {
                    var toAttachBitmapImage = toAttachTextureObject.GetBitmapAt();
                    attached = TextureUtils.BuildTextureGameObject(parent.transform, toAttachTextureObject.AcknexObject.GetString("NAME"), toAttachBitmapImage, out _, out var toAttachMeshRenderer, pivotAtLeft);
                    var transformPosition = attached.transform.position;
                    if (basePosition.HasValue)
                    {
                        transformPosition = basePosition.Value;
                    }
                    if (baseRotation.HasValue)
                    {
                        attached.transform.rotation = baseRotation.Value;
                    }
                    attached.transform.position = transformPosition;
                    var transformLocalPosition = attached.transform.localPosition;
                    transformLocalPosition.y = toAttachTextureObject.AcknexObject.GetFloat("POS_Y");
                    transformLocalPosition.z -= 0.01f;
                    attached.transform.localPosition = transformLocalPosition;
                    var attachment = attached.AddComponent<Attachment>();
                    attachment.AcknexObject = acknexObject;
                    attachment.TextureObject = toAttachTextureObject;
                    attachment.BitmapImage = toAttachBitmapImage;
                    attachment.Material = toAttachMeshRenderer.material;
                }
            }
        }

        public void UpdateObject()
        {
            //TODO: this is causing an infinite loop
            //TextureUtils.HandleAttachment(ref _attached, gameObject, AcknexObject, TextureObject.AcknexObject);
            //TextureUtils.UpdateScale(transform, BitmapImage, TextureObject);
            transform.localScale = TextureUtils.CalculateObjectSize(BitmapImage, TextureObject);
            BitmapImage?.UpdateMaterial(Material, TextureObject, 0, false); //TODO: flag mirror?
            if (TextureObject.Flags.Contains("SHADOW"))
            {
                gameObject.SetActive(false);
            }
        }

        public void Enable()
        {
            
        }

        public void Disable()
        {
           
        }

        private void Update()
        {
            UpdateObject();
        }
    }
}
