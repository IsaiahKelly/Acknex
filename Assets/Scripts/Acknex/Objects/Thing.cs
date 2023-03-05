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

        public HashSet<string> Flags
        {
            get
            {
                if (AcknexObject.TryGetObject("FLAGS", out HashSet<string> flags))
                {
                    return flags;
                }
                flags = new HashSet<string>();
                AcknexObject.SetObject("FLAGS", flags);
                return flags;
            }
        }

        public void AddFlag(string flag)
        {
            Flags.Add(flag);
        }

        public Texture TextureObject => AcknexObject.GetString("TEXTURE") != null && World.Instance.TexturesByName.TryGetValue(AcknexObject.GetString("TEXTURE"), out var textureObject) ? textureObject : null;

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
            StartCoroutine(World.Instance.TriggerTickEvents(AcknexObject));
            StartCoroutine(World.Instance.TriggerSecEvents(AcknexObject));
        }

        private void OnTriggerExitCallback(Collider obj)
        {

        }

        private void OnTriggerEnterCallback(Collider obj)
        {

        }

        private void OnCollisionExitCallback(Collision obj)
        {

        }

        private void OnCollisionEnterCallback(Collision obj)
        {

        }

        private void OnDrawGizmosSelected()
        {

        }

        private IEnumerator Animate(Texture texture, MeshRenderer meshRenderer)
        {
            var cycles = Mathf.Max(1, texture.AcknexObject.GetInteger("CYCLES"));
            var sides = Mathf.Max(1, texture.AcknexObject.GetInteger("SIDES"));
            var mirror = texture.AcknexObject.GetObject<List<int>>("MIRROR");
            var cycle = 0;
            while (true)
            {
                UpdateAngleFrameScale(texture, meshRenderer, cycles, sides, cycle, mirror);
                var currentDelay = _textureObjectDelay != null && _textureObjectDelay.Count > cycle ? _textureObjectDelay[cycle] : null;
                yield return currentDelay;
                cycle = (int)Mathf.Repeat(cycle + 1, cycles);
                if (AcknexObject.TryGetString("EACH_CYCLE", out var eachCycle))
                {
                    World.Instance.TriggerEvent(AcknexObject, "EACH_CYCLE");
                }
            }
        }

        private void UpdateAngleFrameScale(Texture texture, MeshRenderer meshRenderer, int cycles, int sides, int animFrame, List<int> mirror)
        {
            var halfStep = 180f / sides;
            var camera = CameraExtensions.GetLastActiveCamera();
            int side;
            if (camera != null)
            {
                var cameraToThingDirection = Quaternion.LookRotation(AngleUtils.To2D(camera.transform.position - _thingGameObject.transform.position).normalized, Vector3.up) * Vector3.forward;
                var thingAngle = AngleUtils.ConvertAcknexToUnityAngle(AcknexObject.GetFloat("ANGLE"));
                var thingDirection = Quaternion.Euler(0f, thingAngle, 0f) * Vector3.back;
                var angle = Mathf.Repeat(AngleUtils.Angle(thingDirection, cameraToThingDirection) + halfStep, 360f);
                var normalizedAngle = angle / 360f;
                side = Mathf.RoundToInt(Mathf.Lerp(0, sides - 1, normalizedAngle));
            }
            else
            {
                side = 0;
            }
            Bitmap bitmap;
            int angleFrame;
            if (mirror != null && mirror[side] > 0) //mirrored
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
            transform.localScale = TextureUtils.CalculateObjectSize(bitmap, texture);
        }

        private static void UpdateFrame(Bitmap bitmap, Texture textureObject, MeshRenderer meshRenderer, bool mirror = false, int frameIndex = 0)
        {
            //todo: null here to avoid scale
            bitmap.UpdateMaterial(meshRenderer.material, null, frameIndex, mirror);
        }

        private void Awake()
        {
            AcknexObject.Container = this;
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

        private Texture _lastTextureObject;
        private List<WaitForSeconds> _textureObjectDelay;

        private bool _goingToTarget;

        public virtual void UpdateObject()
        {
            UpdateEvents();

            if (!AcknexObject.IsDirty)
            {
                return;
            }
            AcknexObject.IsDirty = true;

            if (AcknexObject.TryGetString("TARGET", out var target) && !_goingToTarget)
            {
                if (World.Instance.AllWaysByName.TryGetValue(target, out var wayList))
                {
                    StartCoroutine(wayList[0].MoveThingOrActor(AcknexObject));
                    _goingToTarget = true;
                }
            }

            //todo: better way to do that?
            if (TextureObject != _lastTextureObject)
            {
                var delay = TextureObject.AcknexObject.GetObject<List<int>>("DELAY");
                if (delay != null)
                {
                    _textureObjectDelay = new List<WaitForSeconds>(delay.Count);
                    for (var i = 0; i < delay.Count; i++)
                    {
                        _textureObjectDelay.Add(new WaitForSeconds(TimeUtils.TicksToTime(delay[i])));
                    }
                }
                _lastTextureObject = TextureObject;
            }

            var thingX = AcknexObject.GetFloat("X");
            var thingY = AcknexObject.GetFloat("Y");
            var thingZ = AcknexObject.GetFloat("Z");

            //todo: this block should only run on carefully flagged
            StickToTheGround(thingX, thingY, ref thingZ);
            transform.position = new Vector3(thingX, thingZ, thingY);

            var thingPosition = _thingGameObject.transform.position;
            thingPosition.y = transform.position.y + AcknexObject.GetFloat("HEIGHT");
            _thingGameObject.transform.position = thingPosition;
            _collider.isTrigger = Flags.Contains("PASSABLE");

            //todo: how to?
            //_collider.radius = AcknexObject.GetNumber("DIST") > 0f ? AcknexObject.GetNumber("DIST") * 0.5f : 0.5f;

            Attachment.HandleAttachment(ref _attached, gameObject, AcknexObject, TextureObject, transform.right);
        }

        public virtual void UpdateEvents()
        {
            
        }

        public void StickToTheGround(float thingX, float thingY, ref float thingZ)
        {
            var regionIndex = AcknexObject.GetInteger("REGION");
            Region.Locate(AcknexObject, ref regionIndex, thingX, thingY, ref thingZ, Flags.Contains("GROUND"));
            AcknexObject.SetInteger("REGION", regionIndex);
            AcknexObject.SetFloat("Z", thingZ);
        }
    }
}