using Acknex.Interfaces;
using UnityEngine;
using Object = UnityEngine.Object;
using PropertyName = Acknex.Interfaces.PropertyName;

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
            var value = new Vector3(
                Mathf.Max(1, bitmap.Width) / Mathf.Max(1, textureObject.AcknexObject.GetFloat(PropertyName.SCALE_X)),
                Mathf.Max(1, bitmap.Height) / Mathf.Max(1, textureObject.AcknexObject.GetFloat(PropertyName.SCALE_Y)),
                1f);
            return value;
        }

        public static GameObject BuildTextureGameObject(Transform parent, string name, Bitmap bitmap, out MeshFilter meshFilter, out MeshRenderer meshRenderer, out Mesh mesh, out Mesh invertedMesh, bool pivotAtLeft = false)
        {
            var innerGameObject = new GameObject(name);
            innerGameObject.transform.SetParent(parent, false);
            meshFilter = innerGameObject.AddComponent<MeshFilter>();
            meshRenderer = innerGameObject.AddComponent<MeshRenderer>();
            mesh = MeshUtils.CreateQuadMesh(pivotAtLeft);
            invertedMesh = MeshUtils.CreateQuadMesh(pivotAtLeft, true);
            meshFilter.mesh = mesh;
            meshRenderer.material = new Material(Shader.Find("Acknex/Sprite"));
            World.Instance.CreatedObjects.Add(meshRenderer.material);
            return innerGameObject;
        }

        public static void CopyTextureCPU(UnityEngine.Texture from, Texture2D to, bool updateMipMaps, bool makeNoLongerReadable, int x, int y, int width, int height)
        {
            var renderTexture = RenderTexture.GetTemporary(from.width, from.height, 0, from.graphicsFormat);
            Graphics.CopyTexture(from, 0, 0, renderTexture, 0, 0);
            RenderTexture.active = renderTexture;
            to.ReadPixels(new Rect(x, y, width, height), 0, 0);
            to.Apply(updateMipMaps, makeNoLongerReadable);
            RenderTexture.active = null;
            RenderTexture.ReleaseTemporary(renderTexture);
        }

        public static void Dilate(Texture2D texture2D)
        {
            if (texture2D.width == 0 || texture2D.height == 0)
            {
                return;
            }
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
            CopyTextureCPU(renderTextureA, texture2D, true, false, 0, 0, texture2D.width, texture2D.height);
            RenderTexture.ReleaseTemporary(renderTextureA);
            RenderTexture.ReleaseTemporary(renderTextureB);
        }
    }
}
