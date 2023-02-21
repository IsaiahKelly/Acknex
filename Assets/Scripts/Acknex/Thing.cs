using System.Collections.Generic;
using UnityEngine;

namespace Acknex
{
    public class Thing : MonoBehaviour, IAcknexObject
    {
        public string NAME;
        public string TEXTURE;
        public float HEIGHT;
        public List<string> FLAGS;
        public float DIST;

        private MeshFilter _meshFilter;
        private MeshRenderer _meshRenderer;
        private GameObject _innerGameObject;

        public Thing Definition
        {
            get
            {
                if (World.Instance.ThingsByName.TryGetValue(NAME, out var thing))
                {
                    return thing;
                }
                return null;
            }
        }

        public string Texture => Definition != null ? Definition.TEXTURE : TEXTURE;

        public float Height => Definition != null ? Definition.HEIGHT : HEIGHT;

        public void Start()
        {
            _innerGameObject = new GameObject("Inner");
            _innerGameObject.transform.SetParent(transform, false);
            _meshFilter = _innerGameObject.AddComponent<MeshFilter>();
            _meshRenderer = _innerGameObject.AddComponent<MeshRenderer>();
            if (!World.Instance.TexturesByName.TryGetValue(Texture, out var textureObject))
            {
                return;
            }
            var bitmap = World.Instance.GetFirstBitmap(textureObject);
            if (bitmap == null)
            {
                return;
            }
            var mesh = MeshUtils.CreateQuadMesh();
            _meshFilter.sharedMesh = mesh;
            _meshRenderer.material = new Material(Shader.Find("Acknex/Sprite"));
            _meshRenderer.material.mainTexture = bitmap;
            _innerGameObject.transform.localScale = new Vector3(bitmap.width / textureObject.SCALE_X, bitmap.height / textureObject.SCALE_Y, 1f);
            var transformLocalPosition = _innerGameObject.transform.localPosition;
            transformLocalPosition.y = Height;
            _innerGameObject.transform.localPosition = transformLocalPosition;
        }

        //todo: better way for VR?
        private void LateUpdate()
        {
            if (Camera.current == null)
            {
                return;
            }
            var eulerAngles = transform.eulerAngles;
            eulerAngles.y = Camera.current.transform.eulerAngles.y;
            transform.eulerAngles = eulerAngles;
        }

        public void Disable()
        {
            gameObject.SetActive(false);
        }
    }
}