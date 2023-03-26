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
        public GameObject GameObject => gameObject;

        private GameObject _attached;
        private AudioSource _audioSource;
        private CharacterController _characterController;
        private CapsuleCollider _collider;
        private GameObject _innerGameObject;
        private IAcknexObject _lastTarget;
        private Texture _lastTextureObject;
        private MeshFilter _meshFilter;
        private MeshRenderer _meshRenderer;
        private Coroutine _movingCoroutine;
        //private bool _movingToTarget;
        private Texture _textureObject;
        //private CollisionCallback _thingCollisionCallback;
        private SphereCollider _triggerCollider;
        private CollisionCallback _triggerCollisionCallback;
        private GameObject _triggerGameObject;
        private Coroutine _animating;

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
            _characterController = gameObject.AddComponent<CharacterController>();
            _characterController.detectCollisions = false;
            _collider = gameObject.AddComponent<CapsuleCollider>();
            //_thingCollisionCallback = _innerGameObject.AddComponent<CollisionCallback>();
            //_thingCollisionCallback.OnCollisionEnterCallback += OnCollisionEnterCallback;
            //_thingCollisionCallback.OnCollisionExitCallback += OnCollisionExitCallback;
            _triggerGameObject = new GameObject("Trigger");
            _triggerGameObject.layer = World.Instance.TriggersLayer.LayerIndex;
            _triggerGameObject.transform.SetParent(transform, false);
            _triggerCollider = _triggerGameObject.AddComponent<SphereCollider>();
            _triggerCollider.isTrigger = true;
            _triggerCollisionCallback = _triggerGameObject.AddComponent<CollisionCallback>();
            _triggerCollisionCallback.OnTriggerEnterCallback += OnTriggerEnterCallback;
            _triggerCollisionCallback.OnTriggerExitCallback += OnTriggerExitCallback;
            _audioSource = gameObject.AddComponent<AudioSource>();
            //_animating = StartCoroutine(Animate());
            StartCoroutine(TriggerTickEvents());
            StartCoroutine(TriggerSecEvents());
        }

        private void Start()
        {
            var thingX = AcknexObject.GetFloat("X");
            var thingY = AcknexObject.GetFloat("Y");
            var thingZ = AcknexObject.GetFloat("Z");
            Locate(thingX, thingY, ref thingZ, true);
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

            if (!AcknexObject.IsDirty)
            {
                DebugExtension.DebugWireSphere(transform.position, Color.red);
                return;
            }
            DebugExtension.DebugWireSphere(transform.position, Color.green);
            AcknexObject.IsDirty = false;

            AcknexObject.SetFloat("VISIBLE", AcknexObject.GetFloat("INVISIBLE") > 0f ? 0f : 1f);

            if (AcknexObject.HasFlag("INVISIBLE"))
            {
                _meshRenderer.enabled = false;
                _triggerCollider.enabled = _collider.enabled = _characterController.enabled = false;
                return;
            }


            _collider.enabled = _characterController.enabled = true;
            _meshRenderer.enabled = true;

            //todo: ok, this is hacky
            //if (!_animating)
            //{
            if (TextureObject != _textureObject || AcknexObject.HasFlag("PLAY"))
            {
                _textureObject = TextureObject;
                if (_animating != null)
                {
                    StopCoroutine(_animating);
                }
                if (TextureObject != null)
                {
                    if (AcknexObject.HasFlag("PLAY"))
                    {
                        AcknexObject.AddFlag("ONESHOT");
                        AcknexObject.RemoveFlag("PLAY");
                    }
                    _animating = StartCoroutine(Animate());
                }
            }
            //}

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

            _collider.center = _characterController.center = new Vector3(0f, _innerGameObject.transform.localPosition.y + _innerGameObject.transform.localScale.y * 0.5f, 0f);
            _collider.height = _characterController.height = _innerGameObject.transform.localScale.y;
            _collider.radius = _characterController.radius = _innerGameObject.transform.localScale.x * 0.5f;

            if (AcknexObject.HasFlag("PASSABLE"))
            {
                _collider.enabled = _characterController.enabled = false;
            }
            else
            {
                _collider.enabled = _characterController.enabled = true;
            }

            _triggerCollider.center = _collider.center;
            _triggerCollider.radius = AcknexObject.GetFloat("DIST") * 0.5f;

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
                        case "REPEL":
                            //Debug.Log(AcknexObject + "moving away from player with speed " + AcknexObject.GetFloat("SPEED"));
                            _movingCoroutine = StartCoroutine(MoveAwayFromPlayer());
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
                World.Instance.TriggerEvent("IF_FAR", AcknexObject, AcknexObject, GetRegion());
            }
        }

        private void OnTriggerEnterCallback(Collider obj)
        {
            if (obj.TryGetComponent<Player>(out var player))
            {
                World.Instance.TriggerEvent("IF_NEAR", AcknexObject, AcknexObject, GetRegion());
            }
        }

        private void OnCollisionExit(Collision obj)
        {
        }

        private void OnCollisionEnter(Collision obj)
        {
        }


        private void OnDrawGizmosSelected()
        {
            Gizmos.color = Color.cyan;
            Gizmos.DrawLine(transform.position, new Vector3(AcknexObject.GetFloat("TARGET_X"), 0f, AcknexObject.GetFloat("TARGET_Y")));
            //Gizmos.color = AcknexObject.IsDirty ? Color.green : Color.red;
            //Gizmos.DrawSphere(transform.position, 1f);
            var quaternion = Quaternion.Euler(0f, AngleUtils.ConvertAcknexToUnityAngle(AcknexObject.GetFloat("ANGLE")), 0f);
            DebugExtension.DrawArrow(transform.position, quaternion * Vector3.forward, Color.cyan);
        }

        private IEnumerator Animate()
        {
            var enumerator = TextureObject.AnimateTexture(false, _meshRenderer, _meshFilter, _innerGameObject, AcknexObject, GetRegion(), _innerGameObject.transform);
            while (enumerator.MoveNext())
            {
                yield return enumerator.Current;
            }
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
            var points = way.InstancePoints;
            var waypoint = 1;
            AcknexObject.SetInteger("WAYPOINT", waypoint);
            var nextPoint = points[waypoint - 1];
            for (; ; )
            {
                AcknexObject.IsDirty = true;
                if (MoveToPoint(nextPoint))
                {
                    if (waypoint++ >= points.Count)
                    {
                        AcknexObject.SetAcknexObject("TARGET", null);
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
            var targetPos = new Vector2(AcknexObject.GetFloat("TARGET_X"), AcknexObject.GetFloat("TARGET_Y"));
            for (; ; )
            {
                AcknexObject.IsDirty = true;
                if (MoveToPoint(targetPos, World.Instance.GetSkillValue("PLAYER_SIZE") * 2f))
                {
                    AcknexObject.SetAcknexObject("TARGET", null);
                    World.Instance.TriggerEvent("IF_ARRIVED", AcknexObject, AcknexObject, GetRegion());
                    yield break;
                }
                yield return null;
            }
        }

        private IEnumerator MoveToPlayer()
        {
            for (; ; )
            {
                AcknexObject.IsDirty = true;
                var playerPos = new Vector2(World.Instance.GetSkillValue("PLAYER_X"), World.Instance.GetSkillValue("PLAYER_Y"));
                if (MoveToPoint(playerPos, World.Instance.GetSkillValue("PLAYER_SIZE") * 2f))
                {
                    AcknexObject.SetAcknexObject("TARGET", null);
                    yield break;
                }
                yield return null;
            }
        }

        private IEnumerator MoveAwayFromPlayer()
        {
            for (; ; )
            {
                AcknexObject.IsDirty = true;
                var pos = new Vector2(AcknexObject.GetFloat("X"), AcknexObject.GetFloat("y"));
                var playerPos = new Vector2(World.Instance.GetSkillValue("PLAYER_X"), World.Instance.GetSkillValue("PLAYER_Y"));
                var targetPos = pos + (pos - playerPos).normalized * 1000f;
                Debug.DrawLine(pos, targetPos, Color.cyan, 10f);
                if (MoveToPoint(targetPos, World.Instance.GetSkillValue("PLAYER_SIZE") * 2f))
                {
                    AcknexObject.SetAcknexObject("TARGET", null);
                    yield break;
                }
                yield return null;
            }
        }

        private IEnumerator MoveToAngle()
        {
            var angle = AcknexObject.GetFloat("ANGLE");
            var speed = AcknexObject.GetFloat("SPEED");
            var timeCorr = World.Instance.GetSkillValue("TIME_CORR");
            var sin = AngleUtils.Sin(angle) * speed * timeCorr;
            var cos = AngleUtils.Cos(angle) * speed * timeCorr;
            var targetPos = new Vector2(AcknexObject.GetFloat("X") + sin, AcknexObject.GetFloat("Y") + cos);
            for (; ; )
            {
                AcknexObject.IsDirty = true;
                if (MoveToPoint(targetPos))
                {
                    AcknexObject.SetAcknexObject("TARGET", null);
                    yield break;
                }
                yield return null;
            }
        }

        public virtual void UpdateEvents()
        {
        }

        public void StickToTheCeiling(float thingX, float thingY, ref float thingZ, bool initial = false)
        {
            var region = GetRegion();
            var regionContainer = region?.Container as Region;
            var newRegionContainer = Region.Locate(AcknexObject, regionContainer, AcknexObject.GetFloat("DIST") * 0.5f, thingX, thingY, ref thingZ, true, region == null || initial ? Region.MaxHeight : _innerGameObject.transform.localScale.y * 0.5f);
            thingZ = thingZ - _innerGameObject.transform.localScale.y; //todo: right?
            AcknexObject.SetFloat("Z", thingZ);
        }

        //todo: IF_ARISE only happens when leaving upwards
        public void Locate(float thingX, float thingY, ref float thingZ, bool initial = false)
        {
            var region = GetRegion();
            var regionContainer = region?.Container as Region;
            var newRegionContainer = Region.Locate(AcknexObject, regionContainer, AcknexObject.GetFloat("DIST") * 0.5f, thingX, thingY, ref thingZ, false, region == null || initial ? Region.MaxHeight : _innerGameObject.transform.localScale.y * 0.5f);
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
                //World.Instance.TriggerEvent("IF_ARISE", AcknexObject, null, region);
                region = newRegionContainer.AcknexObject;
                regionContainer = newRegionContainer;
                World.Instance.TriggerEvent("IF_ENTER", AcknexObject, null, region);
                //if (regionContainer.Above != null)
                //{
                //    World.Instance.TriggerEvent("IF_DIVE", regionContainer.Above.AcknexObject, null, regionContainer.Above.AcknexObject);
                //}
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
            var delta = new Vector3(newPos.x - pos.x, 0f, newPos.y - pos.y);
            if (AcknexObject.HasFlag("PASSABLE") || AcknexObject.GetAcknexObject("TARGET").Type == ObjectType.Way)
            {
                transform.Translate(delta, Space.World);
            }
            else
            {
                _characterController.Move(delta);
            }
            Debug.DrawLine(new Vector3(pos.x, 0f, pos.y), new Vector3(nextPoint.x, 0f, nextPoint.y), Color.magenta, 1f);
            AcknexObject.SetFloat("X", transform.position.x);
            AcknexObject.SetFloat("Y", transform.position.z);
            AcknexObject.SetFloat("ANGLE", angle);
            return toTarget.magnitude <= (minDistance ?? speed);
        }
    }
}