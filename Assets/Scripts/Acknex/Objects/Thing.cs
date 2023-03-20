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
        private CapsuleCollider _thingCollider;
        private AudioSource _audioSource;
        private CollisionCallback _thingCollisionCallback;

        //Deltas for comparison
        private GameObject _attached;
        private Texture _lastTextureObject;
        private IAcknexObject _lastTarget;
        private GameObject _triggerGameObject;
        private SphereCollider _triggerCollider;
        private CollisionCallback _triggerCollisionCallback;
        private bool _movingToPlayer;

        public Texture TextureObject => AcknexObject.TryGetAcknexObject("TEXTURE", out var textureObject) ? textureObject?.Container as Texture : null;
        public Bitmap BitmapImage => TextureObject?.GetBitmapAt();

        private IEnumerator TriggerSecEvents()
        {
            while (true)
            {
                World.Instance.TriggerEvent(AcknexObject, AcknexObject, GetRegion(), "EACH_SEC");
                yield return World.Instance.WaitForSecond;
            }
        }

        private IEnumerator TriggerTickEvents()
        {
            while (true)
            {
                World.Instance.TriggerEvent(AcknexObject, AcknexObject, GetRegion(), "EACH_TICK");
                yield return null;
            }
        }

        private void OnTriggerExitCallback(Collider obj)
        {
            if (obj.TryGetComponent<Player>(out var player))
            {
                World.Instance.TriggerEvent(AcknexObject, AcknexObject, player.GetRegion(), "IF_FAR");
            }
        }

        private void OnTriggerEnterCallback(Collider obj)
        {
            if (obj.TryGetComponent<Player>(out var player))
            {
                World.Instance.TriggerEvent(AcknexObject, AcknexObject, player.GetRegion(), "IF_NEAR");
            }
        }

        private void OnCollisionExitCallback(Collision obj)
        {

        }

        private void OnCollisionEnterCallback(Collision obj)
        {

        }

        //private void OnDrawGizmosSelected()
        //{
        //    if (AcknexObject.TryGetFloat("DIST", out var dist))
        //    {
        //        DebugExtension.DrawCircle(transform.position, Vector3.up, Color.magenta, dist);
        //    }
        //}

        private IEnumerator Animate()
        {
            while (TextureObject == null)
            {
                yield return null;
            }
            var enumerator = TextureObject.AnimateTexture(false, _meshRenderer, _meshFilter, _thingGameObject, AcknexObject, GetRegion(), transform);
            while (enumerator.MoveNext())
            {
                yield return enumerator.Current;
            }
        }

        protected virtual void Awake()
        {
            AcknexObject.Container = this;
        }


        private IEnumerator UpdateInstance()
        {
            while (!AcknexObject.IsInstance)
            {
                yield return null;
            }
            while (true)
            {
                UpdateObject();
                UpdateEvents();
                yield return null;
            }
        }

        public void Enable()
        {
            AcknexObject.RemoveFlag("INVISIBLE");
            //AcknexObject.AddFlag("VISIBLE");
        }

        public void Disable()
        {
            AcknexObject.AddFlag("INVISIBLE");
            //AcknexObject.RemoveFlag("VISIBLE");
        }

        public void SetupTemplate()
        {

        }

        public void SetupInstance()
        {
            _thingGameObject = TextureUtils.BuildTextureGameObject(transform, "Thing", BitmapImage, out _meshFilter, out _meshRenderer);
            _thingGameObject.layer = World.Instance.ThingsAndActorsLayer.LayerIndex;
            _thingCollider = _thingGameObject.AddComponent<CapsuleCollider>();
            _thingCollider.height = 1f;
            _thingCollisionCallback = _thingGameObject.AddComponent<CollisionCallback>();
            _thingCollisionCallback.OnCollisionEnterCallback += OnCollisionEnterCallback;
            _thingCollisionCallback.OnCollisionExitCallback += OnCollisionExitCallback;

            _triggerGameObject = new GameObject("Trigger");
            _triggerGameObject.layer = World.Instance.TriggersLayer.LayerIndex;
            _triggerGameObject.transform.SetParent(transform, false);
            _triggerCollider = _triggerGameObject.AddComponent<SphereCollider>();
            _triggerCollider.isTrigger = true;
            _triggerCollisionCallback = _triggerGameObject.AddComponent<CollisionCallback>();
            _triggerCollisionCallback.OnTriggerEnterCallback += OnTriggerEnterCallback;
            _triggerCollisionCallback.OnTriggerExitCallback += OnTriggerExitCallback;

            _audioSource = gameObject.AddComponent<AudioSource>();
            StartCoroutine(UpdateInstance());
            StartCoroutine(Animate());
            StartCoroutine(TriggerTickEvents());
            StartCoroutine(TriggerSecEvents());
        }

        public virtual void UpdateObject()
        {
            if (TextureObject == null || !TextureObject.HasModel(out _))
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

            //if (!AcknexObject.IsDirty)
            //{
            //    return;
            //}
            //AcknexObject.IsDirty = false;

            if (AcknexObject.ContainsFlag("INVISIBLE", false))
            {
                _meshRenderer.enabled = false;
                _thingCollider.enabled = false;
            }
            else
            {
                _meshRenderer.enabled = true;
                _thingCollider.enabled = true;
            }
            if (AcknexObject.TryGetAcknexObject("TARGET", out var target) && target != _lastTarget)
            {
                if (target != null)
                {
                    if (target == World.Instance.GetObject(ObjectType.String, "FOLLOW"))
                    {
                        StartCoroutine(MoveToPlayer());
                    }
                    else if (target.Container is Way way)
                    {
                        StartCoroutine(way.MoveThingOrActor(AcknexObject));
                    }
                }
                _lastTarget = target;
            }

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
                Locate(thingX, thingY, ref thingZ);
            }
            transform.position = new Vector3(thingX, thingZ, thingY);

            var thingPosition = _thingGameObject.transform.position;
            thingPosition.y = transform.position.y + AcknexObject.GetFloat("HEIGHT");
            _thingGameObject.transform.position = thingPosition;

            _thingCollider.radius = 0.5f;
            _thingCollider.isTrigger = AcknexObject.ContainsFlag("PASSABLE");

            _triggerCollider.radius = AcknexObject.GetFloat("DIST") * 0.5f;

            //todo: reimplement
            //Attachment.HandleAttachment(ref _attached, gameObject, AcknexObject, TextureObject, transform.right);
        }

        private IEnumerator MoveToPlayer()
        {
            _movingToPlayer = true;
            var playerPos = new Vector2(World.Instance.GetSkillValue("PLAYER_X"), World.Instance.GetSkillValue("PLAYER_Y"));
            for (; ; )
            {
                if (MoveTo(playerPos))
                {
                    _movingToPlayer = false;
                    yield break;
                }
                yield return null;
            }
            _movingToPlayer = false;
        }

        public virtual void UpdateEvents()
        {

        }

        public IAcknexObject GetRegion()
        {
            var regionObject = AcknexObject.GetAcknexObject("REGION");
            return regionObject;
        }

        public void StickToTheCeiling(float thingX, float thingY, ref float thingZ)
        {
            var region = AcknexObject.GetAcknexObject("REGION")?.Container as Region;
            region = Region.Locate(AcknexObject, region, AcknexObject.GetFloat("DIST") * 0.5f, thingX, thingY, ref thingZ, AcknexObject.ContainsFlag("GROUND"), true);
            thingZ = thingZ - transform.localScale.y;
            AcknexObject.SetFloat("Z", thingZ);
            AcknexObject.SetAcknexObject("REGION", region.AcknexObject);
        }

        public void Locate(float thingX, float thingY, ref float thingZ)
        {
            var region = (Region)AcknexObject.GetAcknexObject("REGION").Container;
            var newRegion = Region.Locate(AcknexObject, region, AcknexObject.GetFloat("DIST") * 0.5f, thingX, thingY, ref thingZ, AcknexObject.ContainsFlag("GROUND"));
            AcknexObject.SetFloat("Z", thingZ);
            if (AcknexObject.ContainsFlag("MASTER") && newRegion != region)
            {
                if (_movingToPlayer)
                {
                    World.Instance.TriggerEvent(AcknexObject, Player.Instance.AcknexObject, region.AcknexObject, "IF_ARRIVED");
                }
                World.Instance.TriggerEvent(region.AcknexObject, AcknexObject, region.AcknexObject, "IF_LEAVE");
                World.Instance.TriggerEvent(region.AcknexObject, AcknexObject, region.AcknexObject, "IF_ARISE");
                region = newRegion;
                World.Instance.TriggerEvent(region.AcknexObject, AcknexObject, region.AcknexObject, "IF_ENTER");
                if (region.Above != null)
                {
                    World.Instance.TriggerEvent(region.Above.AcknexObject, AcknexObject, region.Above.AcknexObject, "IF_DIVE");
                }
            } 
            else
            {
                region = newRegion;
            }
            AcknexObject.SetAcknexObject("REGION", region.AcknexObject);
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