using Acknex.Interfaces;
using UnityEngine;
using Object = UnityEngine.Object;

namespace Acknex
{
    public static class TextureUtils
    {
        public static Vector3 CalculateObjectSize(Bitmap bitmap, Texture textureObject)
        {
            if (bitmap == null || textureObject == null)
            {
                return Vector3.one;
            }
            return new Vector3(bitmap.Width / textureObject.AcknexObject.Get<float>("SCALE_X"), bitmap.Height / textureObject.AcknexObject.Get<float>("SCALE_Y"), 1f);
        }

        public static void UpdateScale(Transform transform, Bitmap bitmap, Texture textureObject)
        {
            transform.localScale = CalculateObjectSize(bitmap, textureObject);
        }

        public static GameObject BuildTextureGameObject(Transform parent, string name, Bitmap bitmap, out MeshFilter meshFilter, out MeshRenderer meshRenderer, bool pivotAtLeft = false)
        {
            var innerGameObject = new GameObject(name);
            innerGameObject.transform.SetParent(parent, false);
            meshFilter = innerGameObject.AddComponent<MeshFilter>();
            meshRenderer = innerGameObject.AddComponent<MeshRenderer>();
            if (bitmap == null)
            {
                meshFilter = null;
                meshRenderer = null;
                return innerGameObject;
            }
            var mesh = MeshUtils.CreateQuadMesh(pivotAtLeft);
            meshFilter.sharedMesh = mesh;
            meshRenderer.material = new Material(Shader.Find("Acknex/Sprite"));
            //UpdateFrame(bitmap, meshRenderer);
            return innerGameObject;
        }

        public static void HandleAttachment(ref GameObject attached, GameObject parent, IAcknexObject acknexObject, IAcknexObject textureObject, Vector3? position = null , Quaternion? rotation = null, bool pivotAtLeft = false)
        {
            var attach = acknexObject.Get<string>("ATTACH");
            if (attach == null && textureObject != null)
            {
                attach = textureObject.Get<string>("ATTACH");
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
                    attached = BuildTextureGameObject(parent.transform, toAttachTextureObject.AcknexObject.Get<string>("NAME"), toAttachBitmapImage, out _, out var toAttachMeshRenderer, pivotAtLeft);
                    if (position.HasValue)
                    {
                        attached.transform.position = position.Value;
                    }
                    if (rotation.HasValue)
                    {
                        attached.transform.rotation = rotation.Value;
                    }
                    var transformLocalPosition = attached.transform.localPosition;
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

    }
}
