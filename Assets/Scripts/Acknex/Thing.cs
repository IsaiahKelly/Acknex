using System.Collections.Generic;
using UnityEngine;

namespace Acknex
{
    public class Thing : MonoBehaviour, IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetDefinitionCallback);

        private static IAcknexObject GetDefinitionCallback(string name)
        {
            if (World.Instance.ThingsByName.TryGetValue(name, out var definition))
            {
                return definition.AcknexObject;
            }
            return null;
        }

        //public string NAME;
        //public string TEXTURE;
        //public float HEIGHT;
        //public List<string> FLAGS = new List<string>();
        //public float DIST;
        //public float X;
        //public float Y;
        //public float ANGLE;
        //public int REGION;
        //public string ATTACH;

        private MeshFilter _meshFilter;
        private MeshRenderer _meshRenderer;
        private GameObject _thingGameObject;
        private CapsuleCollider _collider;
        private GameObject _attached;
        private bool _set;

        //public Thing Definition
        //{
        //    get
        //    {
        //        if (World.Instance.ThingsByName.TryGetValue(AcknexObject.Get<string>("NAME"), out var thing))
        //        {
        //            return thing;
        //        }
        //        return null;
        //    }
        //}
        public List<string> Flags
        {
            get
            {
                if (AcknexObject.TryGet("FLAGS", out List<string> flags))
                {
                    return flags;
                }
                flags = new List<string>();
                AcknexObject["FLAGS"] = flags;
                return flags;
            }
        }

        public Texture TextureObject => !World.Instance.TexturesByName.TryGetValue(AcknexObject.Get<string>("TEXTURE"), out var textureObject) ? null : textureObject;

        public Texture2D BitmapImage => TextureObject?.GetFirstBitmapImage();

        //public string Texture => AcknexObject.Get<string>("TEXTURE");
        //
        //public float Height => AcknexObject.Get<float>("HEIGHT");
        //
        //public float Dist =>  AcknexObject.Get<float>("DIST");

        public Region Region => World.Instance.RegionsByIndex[AcknexObject.Get<int>("REGION")];

        //public string Attach => AcknexObject.Get<string>("ATTACH");


        public void Start()
        {
            _thingGameObject = BuildInnerGameObject(transform, "Thing", BitmapImage, out _meshFilter, out _meshRenderer);
            _collider = _thingGameObject.AddComponent<CapsuleCollider>();
            _collider.height = 1f;
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
            UpdateScale(_thingGameObject.transform, BitmapImage, TextureObject);
            var transformLocalPosition = _thingGameObject.transform.localPosition;
            transformLocalPosition.y = AcknexObject.Get<float>("HEIGHT");
            _thingGameObject.transform.localPosition = transformLocalPosition;
            _collider.isTrigger = Flags.Contains("PASSABLE");
            _collider.radius = AcknexObject.Get<float>("DIST") > 0f ? AcknexObject.Get<float>("DIST") * 0.5f : 0.5f;
            if (!_set)
            {
                SetPositionAngleRegion();
                _set = true;
            }
            if (AcknexObject.Get<string>("ATTACH") != null && _attached == null && World.Instance.TexturesByName.TryGetValue(AcknexObject.Get<string>("ATTACH"), out var toAttachTextureObject))
            {
                var toAttachBitmapImage = toAttachTextureObject.GetFirstBitmapImage();
                _attached = BuildInnerGameObject(gameObject.transform, toAttachTextureObject.AcknexObject.Get<string>("NAME"), toAttachBitmapImage, out _, out _);
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
            transform.localScale = CalculateObjectSize(bitmapImage, textureObject);
        }

        private Vector3 CalculateObjectSize(Texture2D bitmapImage, Texture textureObject)
        {
            if (bitmapImage == null || textureObject == null)
            {
                return Vector3.one;
            }
            return new Vector3(bitmapImage.width / textureObject.AcknexObject.Get<float>("SCALE_X"), bitmapImage.height / textureObject.AcknexObject.Get<float>("SCALE_Y"), 1f);
        }

        //todo: fix

        public void SetPositionAngleRegion()
        {
            transform.SetPositionAndRotation(Region.ProjectPosition(AcknexObject.Get<float>("X"), AcknexObject.Get<float>("Y"), Flags.Contains("GROUND")), Quaternion.Euler(0f, AcknexObject.Get<float>("ANGLE") * Mathf.Rad2Deg, 0f));
        }
    }
}