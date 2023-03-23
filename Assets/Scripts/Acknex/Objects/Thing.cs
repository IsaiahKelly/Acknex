using System.Collections;
using Acknex.Interfaces;
using UnityEngine;
using Utils;

namespace Acknex
{
    //todo: CYCLE PROP
    //todo: skill ACTOR_WIDTH & THING_WIDTH
    public class Thing : MonoBehaviour, IAcknexObjectContainer
    {
        private GameObject _attached;
        private AudioSource _audioSource;
        private CapsuleCollider _innerCollider;
        private GameObject _innerGameObject;
        private IAcknexObject _lastTarget;
        private Texture _lastTextureObject;
        private MeshFilter _meshFilter;
        private MeshRenderer _meshRenderer;
        private Coroutine _movingCoroutine;
        private bool _movingToTarget;
        private Texture _textureObject;
        private CollisionCallback _thingCollisionCallback;
        private SphereCollider _triggerCollider;
        private CollisionCallback _triggerCollisionCallback;
        private GameObject _triggerGameObject;
        private bool _animating;

        public Texture TextureObject => AcknexObject.TryGetAcknexObject("TEXTURE", out var textureObject) ? textureObject?.Container as Texture : null;
        public Bitmap BitmapImage => TextureObject?.GetBitmapAt();
        public virtual IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Thing);

        public void Disable()
        {
            AcknexObject.AddFlag("INVISIBLE");
            //AcknexObject.RemoveFlag("VISIBLE");
        }

        public void Enable()
        {
            AcknexObject.RemoveFlag("INVISIBLE");
            //AcknexObject.AddFlag("VISIBLE");
        }

        public Vector3 GetCenter()
        {
            return transform.position + new Vector3(0f, _innerGameObject.transform.localScale.y * 0.5f, 0f);
        }

        public IAcknexObject GetRegion()
        {
            var regionObject = AcknexObject.GetAcknexObject("REGION");
            return regionObject;
        }

        public void SetupInstance()
        {
            if (AcknexObject.IsInstance)
            {
                return;
            }
            AcknexObject.IsInstance = true;
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
            StartCoroutine(Animate());
            StartCoroutine(TriggerTickEvents());
            StartCoroutine(TriggerSecEvents());
            if (GetRegion() == null)
            {
                var thingZ = AcknexObject.GetFloat("Z");
                Locate(AcknexObject.GetFloat("X"), AcknexObject.GetFloat("Y"), ref thingZ);
            }
        }

        public void SetupTemplate()
        {
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
            if (AcknexObject.HasFlag("INVISIBLE"))
            {
                return;
            }
            if (!AcknexObject.IsDirty && !_movingToTarget)
            {
                DebugExtension.DebugWireSphere(transform.position, Color.red);
                return;
            }
            AcknexObject.IsDirty = false;
            //todo: ok, this is hacky
            if ((TextureObject != _textureObject && !_animating) || (AcknexObject.HasFlag("PLAY") && !_animating))
            {
                StartCoroutine(Animate());
            }
            _textureObject = TextureObject;
            DebugExtension.DebugWireSphere(transform.position, Color.green);
            if (AcknexObject.HasFlag("INVISIBLE"))
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
                                //Debug.Log(AcknexObject + "moving in direction of way " + way.AcknexObject + " with speed " + AcknexObject.GetFloat("SPEED"));
                                {
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
            if (AcknexObject.HasFlag("CANDELABER"))
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
            _innerCollider.isTrigger = AcknexObject.HasFlag("PASSABLE");
            _triggerCollider.radius = AcknexObject.GetFloat("DIST") * 0.5f;
            AcknexObject.SetFloat("DISTANCE", Vector3.Distance(transform.position, Player.Instance.transform.position));// * 0.2f);
            //Approximate distance(+/ -20 %) of the player
            //    from the center of the object; only valid for
            //    objects within the player's CLIP_DIST.

            //todo: reimplement
            //Attachment.HandleAttachment(ref _attached, gameObject, AcknexObject, TextureObject, transform.right);
        }

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return World.Instance.ThingsByName.TryGetValue(name, out var definition) ? definition.AcknexObject : null;
        }

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
                World.Instance.TriggerEvent("IF_FAR", AcknexObject, player.AcknexObject, player.GetRegion());
            }
        }

        private void OnTriggerEnterCallback(Collider obj)
        {
            if (obj.TryGetComponent<Player>(out var player))
            {
                World.Instance.TriggerEvent("IF_NEAR", AcknexObject, player.AcknexObject, player.GetRegion());
            }
        }

        private void OnCollisionExitCallback(Collision obj)
        {
        }

        private void OnCollisionEnterCallback(Collision obj)
        {
        }

        //private void OnDrawGizmos()
        //{
        //    Gizmos.color = AcknexObject.IsDirty ? Color.red : Color.green;
        //    Gizmos.DrawSphere(transform.position, 1f);
        //    var quaternion = Quaternion.Euler(0f, AngleUtils.ConvertAcknexToUnityAngle(AcknexObject.GetFloat("ANGLE")), 0f);
        //    DebugExtension.DrawArrow(transform.position, quaternion * Vector3.forward, Color.cyan);
        //}

        private IEnumerator Animate()
        {
            _animating = true;
            reload:
            while (TextureObject == null)
            {
                yield return null;
            }
            _textureObject = TextureObject;
            var enumerator = _textureObject.AnimateTexture(false, _meshRenderer, _meshFilter, _innerGameObject, AcknexObject, GetRegion(), _innerGameObject.transform);
            while (enumerator.MoveNext())
            {
                if (TextureObject != _textureObject)
                {
                    goto reload;
                }
                yield return enumerator.Current;
            }
            _animating = false;
        }

        protected virtual void Awake()
        {
            AcknexObject.Container = this;
        }


        private void Update()
        {
            if (!AcknexObject.IsInstance)
            {
                return;
            }
            UpdateObject();
            UpdateEvents();
        }

        private IEnumerator MoveToWay(Way way)
        {
            _movingToTarget = true;
            var points = way.InstancePoints;
            var waypoint = 1;
            AcknexObject.SetInteger("WAYPOINT", waypoint);
            //if (points.Count == 0)
            //{
            //    //World.Instance.TriggerEvent("IF_ARRIVED", AcknexObject, AcknexObject, GetRegion());
            //    yield break;
            //}
            var nextPoint = points[waypoint - 1];
            for (; ; )
            {
                if (MoveToPoint(nextPoint))
                {
                    waypoint++;
                    if (waypoint > points.Count)
                    {
                        AcknexObject.SetAcknexObject("TARGET", null);
                        _movingToTarget = false;
                        yield break;
                    }
                    AcknexObject.SetInteger("WAYPOINT", waypoint);
                    World.Instance.TriggerEvent("IF_ARRIVED", AcknexObject, AcknexObject, GetRegion());
                    nextPoint = points[waypoint - 1];
                }
                yield return null;
            }
        }

        private IEnumerator MoveToVertex()
        {
            _movingToTarget = true;
            var targetPos = new Vector2(AcknexObject.GetFloat("TARGET_X"), AcknexObject.GetFloat("TARGET_Y"));
            for (; ; )
            {
                if (MoveToPoint(targetPos, World.Instance.GetSkillValue("PLAYER_SIZE") * 2f))
                {
                    _movingToTarget = false;
                    AcknexObject.SetAcknexObject("TARGET", null);
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
                    AcknexObject.SetAcknexObject("TARGET", null);
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
                    AcknexObject.SetAcknexObject("TARGET", null);
                    yield break;
                }
                yield return null;
            }
        }

        public virtual void UpdateEvents()
        {
        }

        public void StickToTheCeiling(float thingX, float thingY, ref float thingZ)
        {
            var region = GetRegion();
            var newRegionContainer = Region.Locate(AcknexObject, region.Container as Region, AcknexObject.GetFloat("DIST") * 0.5f, thingX, thingY, ref thingZ, true);
            thingZ = thingZ - _innerGameObject.transform.localScale.y; //todo: right?
            AcknexObject.SetFloat("Z", thingZ);
        }

        //todo: IF_ARISE only happens when leaving upwards
        public void Locate(float thingX, float thingY, ref float thingZ)
        {
            var region = GetRegion();
            var regionContainer = region?.Container as Region;
            var newRegionContainer = Region.Locate(AcknexObject, regionContainer, AcknexObject.GetFloat("DIST") * 0.5f, thingX, thingY, ref thingZ);
            AcknexObject.SetFloat("Z", thingZ);
            if (AcknexObject.HasFlag("MASTER") && newRegionContainer != regionContainer)
            {
                var targetName = AcknexObject.GetAcknexObject("TARGET")?.GetString("NAME");
                switch (targetName)
                {
                    case "MOVE":
                    case "FOLLOW":
                    case "BULLET" when AcknexObject.HasFlag("CAREFULLY"):
                        World.Instance.TriggerEvent("IF_ARRIVED", AcknexObject, AcknexObject, region);
                        break;
                }
                World.Instance.TriggerEvent("IF_LEAVE", AcknexObject, null, region);
                World.Instance.TriggerEvent("IF_ARISE", AcknexObject, null, region);
                region = newRegionContainer.AcknexObject;
                regionContainer = newRegionContainer;
                World.Instance.TriggerEvent("IF_ENTER", AcknexObject, null, region);
                if (regionContainer.Above != null)
                {
                    World.Instance.TriggerEvent("IF_DIVE", regionContainer.Above.AcknexObject, null, regionContainer.Above.AcknexObject);
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
            return toTarget.magnitude <= (minDistance ?? speed);
        }
    }
}