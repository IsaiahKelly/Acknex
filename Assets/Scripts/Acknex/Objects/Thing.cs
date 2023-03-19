using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Acknex.Interfaces;
using CodiceApp.EventTracking.Plastic;
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
        public virtual IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Thing);

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
        private AudioSource _audioSource;

        private GameObject _attached;

        //Deltas for comparison
        private Texture _lastTextureObject;
        private string _lastTarget;

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
            _audioSource = gameObject.AddComponent<AudioSource>();
            StartCoroutine(Animate());
            StartCoroutine(TriggerTickEvents());
            StartCoroutine(TriggerSecEvents());
        }

        private IEnumerator TriggerSecEvents()
        {
            while (true)
            {
                if (AcknexObject.TryGetString("EACH_SEC", out var action))
                {
                    World.Instance.CallAction(AcknexObject, action);
                }
                yield return World.Instance.WaitForSecond;
            }
        }

        private IEnumerator TriggerTickEvents()
        {
            while (true)
            {
                if (AcknexObject.TryGetString("EACH_TICK", out var action))
                {
                    World.Instance.CallAction(AcknexObject, action);
                }
                yield return World.Instance.WaitForTick;
            }
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
            if (AcknexObject.TryGetFloat("DIST", out var dist))
            {
                DebugExtension.DrawCircle(transform.position, Vector3.up, Color.magenta, dist);
            }
        }

        private IEnumerator Animate()
        {
            while (TextureObject == null)
            {
                yield return null;
            }
            var enumerator = TextureObject.AnimateTexture(false, _meshRenderer, _meshFilter, _thingGameObject, AcknexObject, transform);
            while (enumerator.MoveNext())
            {
                yield return enumerator.Current;
            }
        }

        private void Awake()
        {
            AcknexObject.Container = this;
        }

        protected virtual void Update()
        {
            UpdateObject();
            if (!TextureObject.HasModel(out _))
            {
                var camera = CameraExtensions.GetLastActiveCamera();
                if (camera == null)
                {
                    return;
                }
                var eulerAngles = transform.eulerAngles;
                eulerAngles.y = camera.transform.eulerAngles.y;
                transform.eulerAngles = eulerAngles;
            }
            else
            {
                var angle = AcknexObject.GetFloat("ANGLE");
                var eulerAngles = transform.eulerAngles;
                eulerAngles.y = AngleUtils.ConvertAcknexToUnityAngle(angle);
                transform.eulerAngles = eulerAngles;
            }
        }

        public void Enable()
        {
            AcknexObject.RemoveFlag("INVISIBLE");
            AcknexObject.AddFlag("VISIBLE");
        }

        public void Disable()
        {
            AcknexObject.AddFlag("INVISIBLE");
            AcknexObject.RemoveFlag("VISIBLE");
        }

        public virtual void UpdateObject()
        {
            if (_meshRenderer == null)
            {
                return;
            }

            UpdateEvents();

            if (!AcknexObject.IsDirty)
            {
                return;
            }
            AcknexObject.IsDirty = false;

            if (AcknexObject.ContainsFlag("INVISIBLE", false))
            {
                _meshRenderer.enabled = false;
                _collider.enabled = false;
            }
            else
            {
                _meshRenderer.enabled = true;
                _collider.enabled = true;
            }

            if (AcknexObject.TryGetString("TARGET", out var target) && target != _lastTarget)
            {
                if (target == "FOLLOW")
                {
                    StartCoroutine(MoveToPlayer());
                }
                if (World.Instance.AllWaysByName.TryGetValue(target, out var wayList))
                {
                    StartCoroutine(wayList.First().MoveThingOrActor(AcknexObject));
                }
                _lastTarget = target;
            }

            ////todo: better way to do that?
            //if (TextureObject != _lastTextureObject)
            //{
            //    var delay = TextureObject.AcknexObject.GetObject<List<float>>("DELAY");
            //    if (delay != null)
            //    {
            //        _textureObjectDelay = new List<WaitForSeconds>(delay.Count);
            //        for (var i = 0; i < delay.Count; i++)
            //        {
            //            _textureObjectDelay.Add(new WaitForSeconds(TimeUtils.TicksToTime((int)delay[i])));
            //        }
            //    }
            //    _lastTextureObject = TextureObject;
            //}

            var thingX = AcknexObject.GetFloat("X");
            var thingY = AcknexObject.GetFloat("Y");
            var thingZ = AcknexObject.GetFloat("Z");

            //todo: this block should only run on carefully flagged
            if (AcknexObject.ContainsFlag("CANDELABER"))
            {
                StickToTheCeiling(thingX, thingY, ref thingZ);
            }
            else
            {
                StickToTheGround(thingX, thingY, ref thingZ);
            }
            transform.position = new Vector3(thingX, thingZ, thingY);

            var thingPosition = _thingGameObject.transform.position;
            thingPosition.y = transform.position.y + AcknexObject.GetFloat("HEIGHT");
            _thingGameObject.transform.position = thingPosition;

            _collider.isTrigger = AcknexObject.ContainsFlag("PASSABLE");

            //todo: how to?
            //_collider.radius = AcknexObject.GetNumber("DIST") > 0f ? AcknexObject.GetNumber("DIST") * 0.5f : 0.5f;

            Attachment.HandleAttachment(ref _attached, gameObject, AcknexObject, TextureObject, transform.right);
        }

        private IEnumerator MoveToPlayer()
        {
            var playerPos = new Vector2(World.Instance.GetSkillValue("PLAYER_X"), World.Instance.GetSkillValue("PLAYER_Y"));
            for (; ; )
            {
                if (MoveTo(playerPos))
                {
                    yield break;
                }
                yield return null;
            }
        }

        public virtual void UpdateEvents()
        {
            //if (AcknexObject.TryGetFloat("DIST", out var dist))
            //{
            //    //todo: use MASTER objects as well
            //    var playerPos = new Vector2(World.Instance.GetSkillValue("PLAYER_X"), World.Instance.GetSkillValue("PLAYER_Y"));
            //    var pos = new Vector2(AcknexObject.GetFloat("X"), AcknexObject.GetFloat("Y"));
            //    if (!_near.Contains(Player.Instance.AcknexObject))
            //    {
            //        if (Vector2.Distance(playerPos, pos) <= dist)
            //        {
            //            World.Instance.SetSynonymObject("THERE", GetRegion());
            //            World.Instance.TriggerEvent(AcknexObject, "IF_NEAR");
            //            _near.Add(Player.Instance.AcknexObject);
            //        }
            //    }
            //    else
            //    {
            //        if (Vector2.Distance(playerPos, pos) > dist)
            //        {
            //            World.Instance.SetSynonymObject("THERE", GetRegion());
            //            World.Instance.TriggerEvent(AcknexObject, "IF_FAR");
            //            _near.Remove(Player.Instance.AcknexObject);
            //        }
            //    }
            //}
        }

        public IAcknexObject GetRegion()
        {
            var region = AcknexObject.GetInteger("REGION");
            var regionObject = World.Instance.GetRegionByIndex(region)?.AcknexObject;
            return regionObject;
        }

        public void StickToTheCeiling(float thingX, float thingY, ref float thingZ)
        {
            var regionIndex = AcknexObject.GetInteger("REGION");
            Region.Locate(AcknexObject, regionIndex, thingX, thingY, ref thingZ, AcknexObject.ContainsFlag("GROUND"), true);
            thingZ = thingZ - transform.localScale.y;
            AcknexObject.SetFloat("Z", thingZ);
        }

        public void StickToTheGround(float thingX, float thingY, ref float thingZ)
        {
            var regionIndex = AcknexObject.GetInteger("REGION");
            Region.Locate(AcknexObject, regionIndex, thingX, thingY, ref thingZ, AcknexObject.ContainsFlag("GROUND"));
            AcknexObject.SetFloat("Z", thingZ);
        }

        public bool MoveTo(Vector2 nextPoint)
        {
            var pos = new Vector2(AcknexObject.GetFloat("X"), AcknexObject.GetFloat("Y"));
            var speed = AcknexObject.GetFloat("SPEED");
            AcknexObject.SetFloat("TARGET_X", nextPoint.x);
            AcknexObject.SetFloat("TARGET_Y", nextPoint.y);
            var toTarget = pos - nextPoint;
            //todo: why angle inverted?
            var angle = AngleUtils.ConvertUnityToAcknexAngle(Mathf.Atan2(toTarget.x, toTarget.y) * Mathf.Rad2Deg);
            var newPos = Vector2.MoveTowards(pos, nextPoint, speed * World.Instance.GetSkillValue("TIME_CORR"));
            AcknexObject.SetFloat("X", newPos.x);
            AcknexObject.SetFloat("Y", newPos.y);
            AcknexObject.SetFloat("ANGLE", angle);
            AcknexObject.IsDirty = true;
            if (toTarget.magnitude <= speed)
            {
                return true;
            }
            return false;
        }
    }
}