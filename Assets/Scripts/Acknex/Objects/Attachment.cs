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
