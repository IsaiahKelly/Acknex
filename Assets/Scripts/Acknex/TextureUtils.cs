using Acknex.Interfaces;
using UnityEngine;
using Object = UnityEngine.Object;

namespace Acknex
{
    public static class TextureUtils
    {
        private static Material _dilateShader;

        public static Vector3 CalculateObjectSize(Bitmap bitmap, Texture textureObject)
        {
            if (bitmap == null || textureObject == null)
            {
                return Vector3.one;
            }
            return new Vector3(
                bitmap.Width / textureObject.AcknexObject.GetNumber("SCALE_X"), 
                bitmap.Height / textureObject.AcknexObject.GetNumber("SCALE_Y"), 
                1f);
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

        public static void HandleAttachment(ref GameObject attached, GameObject parent, IAcknexObject acknexObject, IAcknexObject textureObject, Vector3? basePosition = null , Quaternion? baseRotation = null, bool pivotAtLeft = false)
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
                    attached = BuildTextureGameObject(parent.transform, toAttachTextureObject.AcknexObject.GetString("NAME"), toAttachBitmapImage, out _, out var toAttachMeshRenderer, pivotAtLeft);
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
                    transformLocalPosition.y = -toAttachTextureObject.AcknexObject.GetNumber("POS_Y");
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

        public static void CopyTextureCPU(RenderTexture from, Texture2D to, bool updateMipMaps, bool makeNoLongerReadable)
        {
            RenderTexture.active = from;
            to.ReadPixels(new Rect(0, 0, from.width, from.height), 0, 0);
            to.Apply(updateMipMaps, makeNoLongerReadable);
            RenderTexture.active = null;
        }

        public static void Dilate(Texture2D texture2D)
        {
            if (_dilateShader == null)
            {
                _dilateShader = new Material(Shader.Find("Acknex/Dilate"));
            }
            var renderTextureA = RenderTexture.GetTemporary(texture2D.width, texture2D.height, 0, texture2D.graphicsFormat);
            var renderTextureB = RenderTexture.GetTemporary(texture2D.width, texture2D.height, 0, texture2D.graphicsFormat);
            Graphics.Blit(texture2D, renderTextureA);
            for (var i = 0; i < Mathf.Max(texture2D.width, texture2D.height); i++)
            {
               Graphics.Blit(renderTextureA, renderTextureB, _dilateShader);
               Graphics.CopyTexture(renderTextureB, renderTextureA);
            }
            Graphics.CopyTexture(renderTextureA, 0, 0, texture2D, 0, 0);
            CopyTextureCPU(renderTextureA, texture2D, true, true);
            RenderTexture.ReleaseTemporary(renderTextureA);
            RenderTexture.ReleaseTemporary(renderTextureB);
        }
    }
}
