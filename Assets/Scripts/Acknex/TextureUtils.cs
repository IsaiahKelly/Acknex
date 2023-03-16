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
            var value = new Vector3(
                Mathf.Max(1, bitmap.Width) / Mathf.Max(1, textureObject.AcknexObject.GetFloat("SCALE_X")),
                Mathf.Max(1, bitmap.Height) / Mathf.Max(1, textureObject.AcknexObject.GetFloat("SCALE_Y")),
                1f);
            return value;
        }

        public static GameObject BuildTextureGameObject(Transform parent, string name, Bitmap bitmap,
            out MeshFilter meshFilter, out MeshRenderer meshRenderer, bool pivotAtLeft = false)
        {
            var innerGameObject = new GameObject(name);
            innerGameObject.transform.SetParent(parent, false);
            meshFilter = innerGameObject.AddComponent<MeshFilter>();
            meshRenderer = innerGameObject.AddComponent<MeshRenderer>();
            if (bitmap != null)
            {
                var mesh = MeshUtils.CreateQuadMesh(pivotAtLeft);
                meshFilter.mesh = mesh;
                meshRenderer.material = new Material(Shader.Find("Acknex/Sprite"));
            }
            return innerGameObject;
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
            CopyTextureCPU(renderTextureA, texture2D, true, false);
            RenderTexture.ReleaseTemporary(renderTextureA);
            RenderTexture.ReleaseTemporary(renderTextureB);
        }
    }
}
