using System.Collections;
using System.Collections.Generic;
using Acknex.Interfaces;
using UnityEngine;
using Utils;

namespace Acknex
{
    //todo: CYCLE PROP
    //todo: UPDATE BITMAP
    //todo: remove debug fields
    //todo: skill ACTOR_WIDTH & THING_WIDTH
    public class Thing : MonoBehaviour, IAcknexObjectContainer
    {
        public virtual IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetDefinitionCallback);

        private static IAcknexObject GetDefinitionCallback(string name)
        {
            if (World.Instance.ThingsByName.TryGetValue(name, out var definition))
            {
                return definition.AcknexObject;
            }
            return null;
        }

        private MeshFilter _meshFilter;
        private MeshRenderer _meshRenderer;
        private GameObject _thingGameObject;
        private CapsuleCollider _collider;
        private GameObject _attached;

        //todo: debug vars
        public int side;
        public int angleFrame;
        public int cycles;
        public int sides;
        public bool mirrored;
        public float normalizedAngle;
        public float angle;
        public Vector3 cameraToThingDirection;
        public Vector3 thingDirection;

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

        public Texture TextureObject => AcknexObject.Get<string>("TEXTURE") != null && World.Instance.TexturesByName.TryGetValue(AcknexObject.Get<string>("TEXTURE"), out var textureObject) ? textureObject : null;

        public Bitmap BitmapImage => TextureObject?.GetBitmapAt();

        public Region Region => World.Instance.RegionsByIndex[AcknexObject.Get<int>("REGION")];

        protected virtual void Start()
        {
            _thingGameObject = BuildInnerGameObject(transform, "Thing", BitmapImage, out _meshFilter, out _meshRenderer);
            var collisionCallback = _thingGameObject.AddComponent<CollisionCallback>();
            collisionCallback.OnCollisionEnterCallback += OnCollisionEnterCallback;
            collisionCallback.OnCollisionExitCallback += OnCollisionExitCallback;
            collisionCallback.OnTriggerEnterCallback += OnTriggerEnterCallback;
            collisionCallback.OnTriggerExitCallback += OnTriggerExitCallback;
            _collider = _thingGameObject.AddComponent<CapsuleCollider>();
            _collider.height = 1f;
            if (_meshRenderer != null)
            {
                StartCoroutine(Animate(TextureObject, _meshRenderer));
            }
        }

        private void OnTriggerExitCallback(Collider obj)
        {

        }

        private void OnTriggerEnterCallback(Collider obj)
        {
            ;
        }

        private void OnCollisionExitCallback(Collision obj)
        {

        }

        private void OnCollisionEnterCallback(Collision obj)
        {

        }

        private void OnDrawGizmos()
        {
            var forward = Quaternion.Euler(0f, AcknexObject.Get<float>("ANGLE"), 0f) * Vector3.right;
            DebugExtension.DebugArrow(_thingGameObject.transform.position, forward, Color.red);
            DebugExtension.DebugArrow(_thingGameObject.transform.position, thingDirection, Color.yellow);
            DebugExtension.DebugArrow(_thingGameObject.transform.position, cameraToThingDirection, Color.blue);
        }

        private GameObject BuildInnerGameObject(Transform parent, string name, Bitmap bitmap, out MeshFilter meshFilter, out MeshRenderer meshRenderer)
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
            UpdateFrame(bitmap, meshRenderer);
            return innerGameObject;
        }

        private IEnumerator Animate(Texture texture, MeshRenderer meshRenderer)
        {
            cycles = Mathf.Max(1, texture.AcknexObject.Get<int>("CYCLES"));
            sides = Mathf.Max(1, texture.AcknexObject.Get<int>("SIDES"));
            var delay = texture.AcknexObject.Get<List<string>>("DELAY");
            var mirror = texture.AcknexObject.Get<List<string>>("MIRROR");
            var cycle = 0;
            while (true)
            {
                //UpdateFrameAngleScale(texture, meshRenderer, cycles, sides, cycle, mirror);
                var currentDelay = delay != null && delay.Count > cycle ? TimeUtils.TicksToTime(int.Parse(delay[cycle])) : Mathf.Infinity;
                //var elapsed = 0f;
                //while (elapsed < currentDelay)
                //{
                UpdateAngleFrameScale(texture, meshRenderer, cycles, sides, cycle, mirror);
                    //elapsed += Time.deltaTime;
                yield return new WaitForSeconds(currentDelay);
                //}
                cycle = (int)Mathf.Repeat(cycle + 1, cycles);
            }
        }

        public static float Angle(Vector3 from, Vector3 to)
        {
            var angle = Vector3.SignedAngle(to, from, Vector3.up);
            if (angle < 0)
            {
                angle = 360 - angle * -1f;
            }
            return angle;
        }
        private static Vector3 To2D(Vector3 position)
        {
            return new Vector3(position.x, 0f, position.z);
        }

        private void UpdateAngleFrameScale(Texture texture, MeshRenderer meshRenderer, int cycles, int sides, int animFrame, List<string> mirror)
        {
            //int side;
            var camera = CameraExtensions.GetLastActiveCamera();
            if (camera != null)
            {
                cameraToThingDirection = Quaternion.LookRotation(To2D(camera.transform.position-_thingGameObject.transform.position).normalized, Vector3.up) * Vector3.forward;
                thingDirection = Quaternion.Euler(0f, AcknexObject.Get<float>("ANGLE"), 0f) * Vector3.right;
                angle = Angle(thingDirection, cameraToThingDirection);
                normalizedAngle = angle / 360f;
                side = Mathf.RoundToInt(Mathf.Lerp(0, sides-1, normalizedAngle));
            }
            else
            {
                side = 0;
            }
            Bitmap bitmap;
            //int angleFrame;
            if (mirror != null && int.Parse(mirror[side]) > 0)
            {
                mirrored = true;
                angleFrame = side * cycles;
                bitmap = texture.GetBitmapAt(angleFrame + animFrame);
                UpdateFrame(bitmap, meshRenderer, true);
            }
            else
            {
                mirrored = false;
                angleFrame = side * cycles;
                bitmap = texture.GetBitmapAt(angleFrame + animFrame);
                UpdateFrame(bitmap, meshRenderer);
            }
            UpdateScale(meshRenderer.transform, bitmap, texture);
        }


        private static void UpdateFrame(Bitmap bitmap, MeshRenderer meshRenderer, bool mirror = false)
        {
            bitmap.UpdateMaterial(meshRenderer.material, mirror);
        }

        private static void UpdateScale(Transform transform, Bitmap bitmap, Texture textureObject)
        {
            transform.localScale = CalculateObjectSize(bitmap, textureObject);
        }

        protected virtual void Update()
        {
            UpdateObject();
            var camera = CameraExtensions.GetLastActiveCamera();
            if (camera == null)
            {
                return;
            }
            var eulerAngles = transform.eulerAngles;
            eulerAngles.y = camera.transform.eulerAngles.y;
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
            var thingX = AcknexObject.Get<float>("X");
            var thingY = AcknexObject.Get<float>("Y");
            var thingZ = AcknexObject.Get<float>("Z");


            //todo: this block should only run on carefully flagged
            StickToTheGround(thingX, thingY, ref thingZ);
            transform.position = new Vector3(thingX, thingZ, thingY);

            var transformLocalPosition = _thingGameObject.transform.localPosition;
            transformLocalPosition.y = AcknexObject.Get<float>("HEIGHT");
            _thingGameObject.transform.localPosition = transformLocalPosition;
            _collider.isTrigger = Flags.Contains("PASSABLE");
            
            //todo: how to?
            //_collider.radius = AcknexObject.Get<float>("DIST") > 0f ? AcknexObject.Get<float>("DIST") * 0.5f : 0.5f;

            if (AcknexObject.Get<string>("ATTACH") != null && _attached == null && World.Instance.TexturesByName.TryGetValue(AcknexObject.Get<string>("ATTACH"), out var toAttachTextureObject))
            {
                var toAttachBitmapImage = toAttachTextureObject.GetBitmapAt();
                _attached = BuildInnerGameObject(gameObject.transform, toAttachTextureObject.AcknexObject.Get<string>("NAME"), toAttachBitmapImage, out _, out _);
                UpdateScale(_attached.transform, toAttachBitmapImage, toAttachTextureObject);
                if (toAttachTextureObject.Flags.Contains("SHADOW"))
                {
                    _attached.gameObject.SetActive(false);
                }
            }
        }

        private static Vector3 CalculateObjectSize(Bitmap bitmap, Texture textureObject)
        {
            if (bitmap == null || textureObject == null)
            {
                return Vector3.one;
            }
            return new Vector3(bitmap.Width / textureObject.AcknexObject.Get<float>("SCALE_X"), bitmap.Height / textureObject.AcknexObject.Get<float>("SCALE_Y"), 1f);
        }

        public void StickToTheGround(float thingX, float thingY, ref float thingZ)
        {
            var thingRegion = World.Instance.RegionsByIndex[AcknexObject.Get<int>("REGION")];
            thingZ = thingRegion.ProjectHeight(thingX, thingY, false);
            AcknexObject.Set("Z", thingZ);
            //transform.position = Region.ProjectPosition(A, , Flags.Contains("GROUND")/* || !Flags.Contains("CAREFULLY")*/);
        }
    }
}