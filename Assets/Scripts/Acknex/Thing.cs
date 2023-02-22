using System.Collections.Generic;
using UnityEngine;

namespace Acknex
{
    public class Thing : MonoBehaviour, IAcknexObject
    {
        public string NAME;
        public string TEXTURE;
        public float HEIGHT;
        public List<string> FLAGS = new List<string>();
        public float DIST;
        public float X;
        public float Y;
        public float ANGLE;
        public int REGION;

        private MeshFilter _meshFilter;
        private MeshRenderer _meshRenderer;
        private GameObject _innerGameObject;
        private SphereCollider _sphereCollider;
        private bool _set;

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
        public List<string> Flags => Definition?.FLAGS ?? FLAGS;

        public Texture TextureObject => !World.Instance.TexturesByName.TryGetValue(Texture, out var textureObject) ? null : textureObject;

        public Texture2D BitmapImage => TextureObject.GetFirstBitmapImage();

        public string Texture => Definition != null ? Definition.TEXTURE : TEXTURE;

        public float Height => Definition != null ? Definition.HEIGHT : HEIGHT;

        public float Dist => Definition != null ? Definition.DIST : DIST;

        public Region Region => World.Instance.RegionsByIndex[REGION];

        public void Start()
        {
            _innerGameObject = new GameObject("Inner");
            _innerGameObject.transform.SetParent(transform, false);
            _meshFilter = _innerGameObject.AddComponent<MeshFilter>();
            _meshRenderer = _innerGameObject.AddComponent<MeshRenderer>();

            if (TextureObject == null || BitmapImage == null)
            {
                return;
            }
            var mesh = MeshUtils.CreateQuadMesh();
            _meshFilter.sharedMesh = mesh;
            _meshRenderer.material = new Material(Shader.Find("Acknex/Sprite"));
            _meshRenderer.material.mainTexture = BitmapImage;
        }

        private void LateUpdate()
        {
            UpdateObject();
            if (Camera.current == null)
            {
                return;
            }
            var eulerAngles = transform.eulerAngles;
            eulerAngles.y = Camera.current.transform.eulerAngles.y;
            transform.eulerAngles = eulerAngles;
        }
        
        public void Enable()
        {

        }

        public void Disable()
        {
            gameObject.SetActive(false);
        }

        public void UpdateObject()
        {
            var bitmapImage = BitmapImage;
            var textureObject = TextureObject;
            _innerGameObject.transform.localScale = new Vector3(bitmapImage.width / textureObject.SCALE_X,
                bitmapImage.height / textureObject.SCALE_Y, 1f);
            var transformLocalPosition = _innerGameObject.transform.localPosition;
            transformLocalPosition.y = Height;
            _innerGameObject.transform.localPosition = transformLocalPosition;
            if (!Flags.Contains("PASSABLE"))
            {
                if (_sphereCollider == null)
                {
                    _sphereCollider = gameObject.AddComponent<SphereCollider>();
                    _sphereCollider.isTrigger = true;
                }

                _sphereCollider.radius = Dist;
            }
            else
            {
                if (_sphereCollider != null)
                {
                    Destroy(_sphereCollider);
                }
            }

            if (!_set)
            {
                SetPositionAngleRegion();
                _set = true;
            }
        }

        //todo: fix

        public void SetPositionAngleRegion()
        {
            transform.SetPositionAndRotation(Region.ProjectPosition(X, Y, Flags.Contains("GROUND")), Quaternion.Euler(0f, ANGLE * Mathf.Rad2Deg, 0f));
        }
    }
}