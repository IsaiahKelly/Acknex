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
        public virtual IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback);

        private static IAcknexObject GetTemplateCallback(string name)
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

        //public int side;
        //public int angleFrame;
        //public int cycles;
        //public int sides;
        //public bool mirrored;
        //public float normalizedAngle;
        //public float angle;
        //public Vector3 cameraToThingDirection;
        //public Vector3 thingDirection;

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

        protected virtual void Start()
        {
            _thingGameObject = TextureUtils.BuildTextureGameObject(transform, "Thing", BitmapImage, out _meshFilter, out _meshRenderer);
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
            //DebugExtension.DebugArrow(_thingGameObject.transform.position, thingDirection, Color.yellow);
            //DebugExtension.DebugArrow(_thingGameObject.transform.position, cameraToThingDirection, Color.blue);
        }

        private IEnumerator Animate(Texture texture, MeshRenderer meshRenderer)
        {
            var cycles = Mathf.Max(1, texture.AcknexObject.Get<int>("CYCLES"));
            var sides = Mathf.Max(1, texture.AcknexObject.Get<int>("SIDES"));
            var delay = texture.AcknexObject.Get<List<string>>("DELAY");
            var mirror = texture.AcknexObject.Get<List<string>>("MIRROR");
            var cycle = 0;
            while (true)
            {
                var currentDelay = delay != null && delay.Count > cycle ? TimeUtils.TicksToTime(int.Parse(delay[cycle])) : Mathf.Infinity;
                UpdateAngleFrameScale(texture, meshRenderer, cycles, sides, cycle, mirror);
                yield return new WaitForSeconds(currentDelay);
                cycle = (int)Mathf.Repeat(cycle + 1, cycles);
            }
        }

        private void UpdateAngleFrameScale(Texture texture, MeshRenderer meshRenderer, int cycles, int sides, int animFrame, List<string> mirror)
        {
            var camera = CameraExtensions.GetLastActiveCamera();
            int side;
            if (camera != null)
            {
                var cameraToThingDirection = Quaternion.LookRotation(AngleUtils.To2D(camera.transform.position - _thingGameObject.transform.position).normalized, Vector3.up) * Vector3.forward;
                var thingDirection = Quaternion.Euler(0f, AcknexObject.Get<float>("ANGLE"), 0f) * Vector3.back;
                var angle = AngleUtils.Angle(thingDirection, cameraToThingDirection);
                var normalizedAngle = angle / 360f;
                side = Mathf.RoundToInt(Mathf.Lerp(0, sides - 1, normalizedAngle));
            }
            else
            {
                side = 0;
            }
            Bitmap bitmap;
            int angleFrame;
            if (mirror != null && int.Parse(mirror[side]) > 0) //mirrored
            {
                angleFrame = side * cycles;
                var frame = angleFrame + animFrame;
                bitmap = texture.GetBitmapAt(frame);
                UpdateFrame(bitmap, texture, meshRenderer, true, frame);
            }
            else
            {
                angleFrame = side * cycles;
                var frame = angleFrame + animFrame;
                bitmap = texture.GetBitmapAt(frame);
                UpdateFrame(bitmap, texture, meshRenderer, false, frame);
            }
            TextureUtils.UpdateScale(meshRenderer.transform, bitmap, texture);
        }

        private static void UpdateFrame(Bitmap bitmap, Texture textureObject, MeshRenderer meshRenderer, bool mirror = false, int frameIndex = 0)
        {
            //todo: null here to avoid scale
            bitmap.UpdateMaterial(meshRenderer.material, null, frameIndex, mirror);
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

            TextureUtils.HandleAttachment(ref _attached, gameObject, AcknexObject, TextureObject?.AcknexObject);
        }

        public void StickToTheGround(float thingX, float thingY, ref float thingZ)
        {
            var thingRegion = World.Instance.RegionsByIndex[AcknexObject.Get<int>("REGION")];
            thingZ = thingRegion.ProjectHeight(thingX, thingY, Flags.Contains("GROUND"));
            AcknexObject.Set("Z", thingZ);
        }
    }
}