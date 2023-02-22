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
        public string ATTACH;

        private MeshFilter _meshFilter;
        private MeshRenderer _meshRenderer;
        private GameObject _thingGameObject;
        private SphereCollider _sphereCollider;
        private GameObject _attached;
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

        public Texture2D BitmapImage => TextureObject?.GetFirstBitmapImage();

        public string Texture => Definition != null ? Definition.TEXTURE : TEXTURE;

        public float Height => Definition != null ? Definition.HEIGHT : HEIGHT;

        public float Dist => Definition != null ? Definition.DIST : DIST;

        public Region Region => World.Instance.RegionsByIndex[REGION];

        public string Attach => Definition != null ? Definition.ATTACH : ATTACH;

        public void Start()
        {
            _thingGameObject = BuildInnerGameObject(transform, "Thing", BitmapImage, out _meshFilter, out _meshRenderer);
        }

        private GameObject BuildInnerGameObject(Transform parent, string name,Texture2D bitmap, out MeshFilter meshFilter, out MeshRenderer meshRenderer)
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
            var mesh = MeshUtils.CreateQuadMesh();
            meshFilter.sharedMesh = mesh;
            meshRenderer.material = new Material(Shader.Find("Acknex/Sprite"));
            meshRenderer.material.mainTexture = bitmap;
            return innerGameObject;
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
            UpdateScale(_thingGameObject.transform, bitmapImage, textureObject);
            var transformLocalPosition = _thingGameObject.transform.localPosition;
            transformLocalPosition.y = Height;
            _thingGameObject.transform.localPosition = transformLocalPosition;
            if (!Flags.Contains("PASSABLE"))
            {
                if (_sphereCollider == null)
                {
                    _sphereCollider = _thingGameObject.AddComponent<SphereCollider>();
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
            if (Attach != null && _attached == null && World.Instance.TexturesByName.TryGetValue(Attach, out var toAttachTextureObject))
            {
                var toAttachBitmapImage = toAttachTextureObject.GetFirstBitmapImage();
                _attached = BuildInnerGameObject(gameObject.transform, toAttachTextureObject.NAME, toAttachBitmapImage, out _, out _);
                UpdateScale(_attached.transform, toAttachBitmapImage, toAttachTextureObject);
                //disabling shadow objects as Unity is already projecting shadows
                if (toAttachTextureObject.Flags.Contains("SHADOW"))
                {
                    _attached.gameObject.SetActive(false);
                }
            }
        }

        private void UpdateScale(Transform transform, Texture2D bitmapImage, Texture textureObject)
        {
            transform.localScale = new Vector3(bitmapImage.width / textureObject.SCALE_X, bitmapImage.height / textureObject.SCALE_Y, 1f);
        }

        //todo: fix

        public void SetPositionAngleRegion()
        {
            transform.SetPositionAndRotation(Region.ProjectPosition(X, Y, Flags.Contains("GROUND")), Quaternion.Euler(0f, ANGLE * Mathf.Rad2Deg, 0f));
        }
    }
}