using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Acknex.Interfaces;
using CodiceApp.EventTracking.Plastic;
using UnityEditor;
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

        private AudioSource _audioSource;
        private MeshFilter _meshFilter;
        private MeshRenderer _meshRenderer;
        private GameObject _innerGameObject;
        private CapsuleCollider _innerCollider;
        private CollisionCallback _thingCollisionCallback;

        //Deltas for comparison
        private GameObject _attached;
        private Texture _lastTextureObject;
        private IAcknexObject _lastTarget;
        private GameObject _triggerGameObject;
        private SphereCollider _triggerCollider;
        private CollisionCallback _triggerCollisionCallback;
        private bool _movingToTarget;
        private Coroutine _movingCoroutine;

        public Texture TextureObject => AcknexObject.TryGetAcknexObject("TEXTURE", out var textureObject) ? textureObject?.Container as Texture : null;
        public Bitmap BitmapImage => TextureObject?.GetBitmapAt();

        private IEnumerator TriggerSecEvents()
        {
            while (true)
            {
                World.Instance.TriggerEvent("EACH_SEC", AcknexObject, AcknexObject, GetRegion());
                yield return World.Instance.WaitForSecond;
            }
        }

        private IEnumerator TriggerTickEvents()
        {
            while (true)
            {
                World.Instance.TriggerEvent("EACH_TICK", AcknexObject, AcknexObject, GetRegion());
                yield return null;
            }
        }

        private void OnTriggerExitCallback(Collider obj)
        {
            if (obj.TryGetComponent<Player>(out var player))
            {
                World.Instance.TriggerEvent("IF_FAR", AcknexObject, AcknexObject, player.GetRegion());
            }
        }

        private void OnTriggerEnterCallback(Collider obj)
        {
            if (obj.TryGetComponent<Player>(out var player))
            {
                World.Instance.TriggerEvent("IF_NEAR", AcknexObject, AcknexObject, player.GetRegion());
            }
        }

        private void OnCollisionExitCallback(Collision obj)
        {

        }

        private void OnCollisionEnterCallback(Collision obj)
        {

        }

        private void OnDrawGizmos()
        {
            var quaternion = Quaternion.Euler(0f, AngleUtils.ConvertAcknexToUnityAngle(AcknexObject.GetFloat("ANGLE")), 0f);
            DebugExtension.DrawArrow(transform.position, quaternion * Vector3.forward, Color.cyan);
        }

        private IEnumerator Animate()
        {
            reload:
            while (TextureObject == null)
            {
                yield return null;
            }
            var textureObject = TextureObject;
            var enumerator = textureObject.AnimateTexture(false, _meshRenderer, _meshFilter, _innerGameObject, AcknexObject, GetRegion(), _innerGameObject.transform);
            while (enumerator.MoveNext())
            {
                if (textureObject != TextureObject)
                {
                    goto reload;
                }
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
            _innerGameObject = TextureUtils.BuildTextureGameObject(transform, "Thing", BitmapImage, out _meshFilter, out _meshRenderer);
            _innerGameObject.layer = World.Instance.ThingsAndActorsLayer.LayerIndex;
            _innerCollider = _innerGameObject.AddComponent<CapsuleCollider>();
            _innerCollider.height = 1f;
            _thingCollisionCallback = _innerGameObject.AddComponent<CollisionCallback>();
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

            AcknexObject.IsInstance = true;

            if (GetRegion() == null)
            {
                var thingZ = AcknexObject.GetFloat("Z");
                Locate(AcknexObject.GetFloat("X"), AcknexObject.GetFloat("Y"), ref thingZ);
            }
        }

        public Vector3 GetCenter()
        {
            return transform.position + new Vector3(0f, AcknexObject.GetFloat("HEIGHT") * 0.5f, 0f);
        }

        public virtual void UpdateObject()
        {
            //if (TextureObject == null || !TextureObject.HasModel(out _))
            //{
                var camera = CameraExtensions.GetLastActiveCamera();
                if (camera == null)
                {
                    return;
                }
                var eulerAngles = transform.eulerAngles;
                eulerAngles.y = camera.transform.eulerAngles.y;
                transform.eulerAngles = eulerAngles;
            //}
            //else
            //{
            //    var angle = AcknexObject.GetFloat("ANGLE");
            //    var eulerAngles = transform.eulerAngles;
            //    eulerAngles.y = AngleUtils.ConvertAcknexToUnityAngle(angle);
            //    transform.eulerAngles = eulerAngles;
            //}

            //if (!AcknexObject.IsDirty)
            //{
            //    return;
            //}
            //AcknexObject.IsDirty = false;

            if (AcknexObject.ContainsFlag("INVISIBLE", false))
            {
                _meshRenderer.enabled = false;
                _innerCollider.enabled = false;
            }
            else
            {
                _meshRenderer.enabled = true;
                _innerCollider.enabled = true;
            }

            if (AcknexObject.TryGetAcknexObject("TARGET", out var target) && target != _lastTarget)
            {
                if (_movingCoroutine != null)
                {
                    StopCoroutine(_movingCoroutine);
                }
                if (target != null)
                {
                    var targetName = target.GetString("NAME");
                    switch (targetName)
                    {
                        case "FOLLOW":
                            //Debug.Log(AcknexObject + "moving in direction of player with speed " + AcknexObject.GetFloat("SPEED"));
                            _movingCoroutine = StartCoroutine(MoveToPlayer());
                            break;
                        case "VERTEX":
                            //Debug.Log(AcknexObject + "moving in direction of vertex with speed " + AcknexObject.GetFloat("SPEED"));
                            _movingCoroutine = StartCoroutine(MoveToVertex());
                            break;
                        case "MOVE":
                        case "BULLET":
                            //Debug.Log(AcknexObject + "moving in direction of its angle with speed " + AcknexObject.GetFloat("SPEED"));
                            _movingCoroutine = StartCoroutine(MoveToAngle());
                            break;
                        default:
                        {
                            if (target.Container is Way way)
                            {
                                //Debug.Log(AcknexObject + "moving in direction of way " + way.AcknexObject + " with speed " + AcknexObject.GetFloat("SPEED"));
                                _movingCoroutine = StartCoroutine(MoveToWay(way));
                            }
                            //else
                            //{
                            //    Debug.Log(AcknexObject + "moving to nothing");
                            //}
                            break;
                        }
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

            var thingPosition = _innerGameObject.transform.position;
            thingPosition.y = transform.position.y + AcknexObject.GetFloat("HEIGHT");
            _innerGameObject.transform.position = thingPosition;

            _innerCollider.radius = 0.5f;
            _innerCollider.isTrigger = AcknexObject.ContainsFlag("PASSABLE");

            _triggerCollider.radius = AcknexObject.GetFloat("DIST") * 0.5f;

            AcknexObject.SetFloat("DISTANCE", Vector3.Distance(transform.position, Player.Instance.transform.position) * 0.2f);
            //Approximate distance(+/ -20 %) of the player
            //    from the center of the object; only valid for
            //    objects within the player's CLIP_DIST.

            //todo: reimplement
            //Attachment.HandleAttachment(ref _attached, gameObject, AcknexObject, TextureObject, transform.right);
        }

        private IEnumerator MoveToWay(Way way)
        {
            var points = way.InstancePoints;
            var waypoint = 1;
            AcknexObject.SetInteger("WAYPOINT", waypoint);
            if (points.Count == 0)
            {
                World.Instance.TriggerEvent("IF_ARRIVED", AcknexObject, way.AcknexObject, GetRegion());
                yield break;
            }
            var nextPoint = points[waypoint - 1];
            for (; ; )
            {
                if (MoveToPoint(nextPoint))
                {
                    waypoint++;
                    if (waypoint > points.Count)
                    {
                        yield break;
                    }
                    AcknexObject.SetInteger("WAYPOINT", waypoint);
                    World.Instance.TriggerEvent("IF_ARRIVED", AcknexObject, way.AcknexObject, GetRegion());
                    nextPoint = points[waypoint - 1];
                }
                yield return null;
            }
        }

        private IEnumerator MoveToVertex()
        {
            var targetPos = new Vector2(AcknexObject.GetFloat("TARGET_X"), AcknexObject.GetFloat("TARGET_Y"));
            for (; ; )
            {
                if (MoveToPoint(targetPos, World.Instance.GetSkillValue("PLAYER_SIZE") * 2f))
                {
                    World.Instance.TriggerEvent("IF_ARRIVED", AcknexObject, AcknexObject, GetRegion());
                    yield break;
                }
                yield return null;
            }
        }

        private IEnumerator MoveToPlayer()
        {
            _movingToTarget = true;
            for (; ; )
            {
                var playerPos = new Vector2(World.Instance.GetSkillValue("PLAYER_X"), World.Instance.GetSkillValue("PLAYER_Y"));
                if (MoveToPoint(playerPos, World.Instance.GetSkillValue("PLAYER_SIZE") * 2f))
                {
                    _movingToTarget = false;
                    yield break;
                }
                yield return null;
            }
        }

        private IEnumerator MoveToAngle()
        {
            _movingToTarget = true;
            var angle = AcknexObject.GetFloat("ANGLE");
            var speed = AcknexObject.GetFloat("SPEED");
            var timeCorr = World.Instance.GetSkillValue("TIME_CORR");
            var sin = AngleUtils.Sin(angle) * speed * timeCorr;
            var cos = AngleUtils.Cos(angle) * speed * timeCorr;
            var targetPos = new Vector2(AcknexObject.GetFloat("X") + sin, AcknexObject.GetFloat("Y") + cos);
            for (; ; )
            {
                if (MoveToPoint(targetPos))
                {
                    _movingToTarget = false;
                    yield break;
                }
                yield return null;
            }
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
            var region = GetRegion();
            var newRegionContainer = Region.Locate(AcknexObject, region.Container as Region, AcknexObject.GetFloat("DIST") * 0.5f, thingX, thingY, ref thingZ, AcknexObject.ContainsFlag("GROUND"), true);
            thingZ = thingZ - _innerGameObject.transform.localScale.y;
            AcknexObject.SetFloat("Z", thingZ);
        }

        //todo: IF_ARISE only happens when leaving upwards
        public void Locate(float thingX, float thingY, ref float thingZ)
        {
            var region = GetRegion();
            var regionContainer = region?.Container as Region;
            var newRegionContainer = Region.Locate(AcknexObject, regionContainer, AcknexObject.GetFloat("DIST") * 0.5f, thingX, thingY, ref thingZ, AcknexObject.ContainsFlag("GROUND"));
            AcknexObject.SetFloat("Z", thingZ);
            if (AcknexObject.ContainsFlag("MASTER") && newRegionContainer != regionContainer)
            {
                if (_movingToTarget && AcknexObject.ContainsFlag("CAREFULLY"))
                {
                    World.Instance.TriggerEvent("IF_ARRIVED", AcknexObject, Player.Instance.AcknexObject, AcknexObject);
                }
                World.Instance.TriggerEvent("IF_LEAVE", AcknexObject, AcknexObject, AcknexObject);
                World.Instance.TriggerEvent("IF_ARISE", AcknexObject, AcknexObject, AcknexObject);
                region = newRegionContainer.AcknexObject;
                regionContainer = newRegionContainer;
                World.Instance.TriggerEvent("IF_ENTER", AcknexObject, AcknexObject, AcknexObject);
                if (regionContainer.Above != null)
                {
                    World.Instance.TriggerEvent("IF_DIVE", regionContainer.Above.AcknexObject, AcknexObject, regionContainer.Above.AcknexObject);
                }
            }
            else
            {
                if (newRegionContainer != null)
                {
                    region = newRegionContainer.AcknexObject;
                }
            }
            AcknexObject.SetAcknexObject("REGION", region);
        }

        public bool MoveToPoint(Vector2 nextPoint, float? minDistance = null)
        {
            var pos = new Vector2(AcknexObject.GetFloat("X"), AcknexObject.GetFloat("Y"));
            var speed = AcknexObject.GetFloat("SPEED");
            AcknexObject.SetFloat("TARGET_X", nextPoint.x);
            AcknexObject.SetFloat("TARGET_Y", nextPoint.y);
            var toTarget = nextPoint - pos;
            //todo: why angle inverted?
            var angle = AngleUtils.ConvertUnityToAcknexAngle(AngleUtils.Atan2(toTarget) * Mathf.Rad2Deg);
            var newPos = Vector2.MoveTowards(pos, nextPoint, speed * World.Instance.GetSkillValue("TIME_CORR"));
            Debug.DrawLine(new Vector3(pos.x, 0f, pos.y), new Vector3(nextPoint.x, 0f, nextPoint.y), Color.magenta, 1f);
            AcknexObject.SetFloat("X", newPos.x);
            AcknexObject.SetFloat("Y", newPos.y);
            AcknexObject.SetFloat("ANGLE", angle);
            AcknexObject.IsDirty = true;
            return toTarget.magnitude <= (minDistance ?? speed);
        }
    }
}