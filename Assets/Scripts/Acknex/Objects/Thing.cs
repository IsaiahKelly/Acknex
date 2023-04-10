using System.Collections;
using Acknex.Interfaces;
using UnityEngine;
using Utils;

namespace Acknex
{
    public class Thing : MonoBehaviour, IAcknexObjectContainer
    {
        private Coroutine _animateCoroutine;
        private GameObject _attached;
        private AudioSource _audioSource;
        private CharacterController _characterController;
        private CapsuleCollider _collider;
        private GameObject _innerGameObject;
        private bool _lastGround;
        private int _lastSide;
        private IAcknexObject _lastTarget;
        private Texture _lastTextureObject;
        private MeshFilter _meshFilter;
        private MeshRenderer _meshRenderer;
        private Coroutine _movingCoroutine;
        private MeshCollider _spriteCollider;
        private SphereCollider _triggerCollider;
        private CollisionCallback _triggerCollisionCallback;
        private GameObject _triggerGameObject;
        private GameObject _centerGameObject;
        private Light _light;

        public Texture TextureObject => AcknexObject.TryGetAcknexObject("TEXTURE", out var textureObject) ? textureObject?.Container as Texture : null;
        public Bitmap BitmapImage => TextureObject?.GetBitmapAt();
        public virtual IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Thing);

        [field: SerializeField] public bool DebugMarked { get; set; }

        public void Disable()
        {
            AcknexObject.AddFlag("INVISIBLE");
        }

        public void Enable()
        {
            AcknexObject.RemoveFlag("INVISIBLE");
        }

        public GameObject GameObject => gameObject;

        public Vector3 GetCenter()
        {
            return transform.position + new Vector3(0f, _innerGameObject.transform.localScale.y * 0.5f, 0f);
        }

        public IAcknexObject GetRegion()
        {
            var regionObject = AcknexObject.GetAcknexObject("REGION");
            return regionObject ?? World.Instance.RegionsByIndex[0].AcknexObject;
        }

        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {
            if (!(sound?.Container is Sound soundContainer))
            {
                return;
            }
            if (_audioSource.clip == soundContainer.AudioClip && _audioSource.isPlaying)
            {
                return;
            }
#if DEBUG_ENABLED
            Debug.Log(AcknexObject.GetString("NAME"));
            DebugExtension.DebugWireSphere(GetCenter(), Color.blue, 1f, 10f);
#endif
            _audioSource.Stop();
            _audioSource.clip = soundContainer.AudioClip;
            _audioSource.maxDistance = Mathf.Max(sDist, svDist);
            _audioSource.volume = volume;
            _audioSource.Play();
        }

        public void SetupInstance()
        {
            if (AcknexObject.IsInstance)
            {
                return;
            }
            AcknexObject.IsInstance = true;
            _lastGround = AcknexObject.HasFlag("GROUND");
            _innerGameObject = TextureUtils.BuildTextureGameObject(transform, "Thing", BitmapImage, out _meshFilter, out _meshRenderer);
            //_meshRendererPropertyBlock = new MaterialPropertyBlock();
            //_meshRenderer.SetPropertyBlock(_meshRendererPropertyBlock);
            _innerGameObject.layer = World.Instance.Sprites.LayerIndex;
            _characterController = gameObject.AddComponent<CharacterController>();
            _characterController.detectCollisions = false;
            _collider = gameObject.AddComponent<CapsuleCollider>();
            _spriteCollider = _innerGameObject.AddComponent<MeshCollider>();
            _spriteCollider.sharedMesh = _meshFilter.mesh;
            //_thingCollisionCallback = _innerGameObject.AddComponent<CollisionCallback>();
            //_thingCollisionCallback.OnCollisionEnterCallback += OnCollisionEnterCallback;
            //_thingCollisionCallback.OnCollisionExitCallback += OnCollisionExitCallback;
            _triggerGameObject = new GameObject("Trigger");
            _triggerGameObject.layer = World.Instance.TriggersLayer.LayerIndex;
            _triggerGameObject.transform.SetParent(transform, false);
            _triggerCollider = _triggerGameObject.AddComponent<SphereCollider>();
            _triggerCollider.isTrigger = true;
            _triggerCollisionCallback = _triggerGameObject.AddComponent<CollisionCallback>();
            var thingX = AcknexObject.GetFloat("X");
            var thingY = AcknexObject.GetFloat("Y");
            var thingZ = AcknexObject.GetFloat("HEIGHT");
            Locate(thingX, thingY, ref thingZ, true);
            _triggerCollisionCallback.OnTriggerEnterCallback += OnTriggerEnterCallback;
            _triggerCollisionCallback.OnTriggerExitCallback += OnTriggerExitCallback;
            _centerGameObject = new GameObject("Center");
            _audioSource = _centerGameObject.AddComponent<AudioSource>();
            _audioSource.minDistance = 0f;
            _audioSource.maxDistance = 0f;
            _audioSource.volume = 0f;
            _audioSource.playOnAwake = false;
            _audioSource.spatialBlend = 1f;
            _audioSource.rolloffMode = AudioRolloffMode.Linear;
            //_audioSource.spread = 360f;
            _centerGameObject.layer = World.Instance.IgnoreRaycastLayer.LayerIndex;
            _centerGameObject.transform.SetParent(transform, false);
            _light = _centerGameObject.AddComponent<Light>();
            _light.type = LightType.Point;
            _light.range = 1f;
            _light.intensity = 0f;
            StartCoroutine(TriggerTickEvents());
            StartCoroutine(TriggerSecEvents());
        }

        public void SetupTemplate()
        {
        }

        public virtual void UpdateObject()
        {
            var thingX = AcknexObject.GetFloat("X");
            var thingY = AcknexObject.GetFloat("Y");
            var thingZ = AcknexObject.GetFloat("HEIGHT");
            var pos2D = new Vector2(thingX, thingY);
            var playerPos2D = new Vector2(World.Instance.GetSkillValue("PLAYER_X"), World.Instance.GetSkillValue("PLAYER_Y"));
            var distance = Vector2.Distance(playerPos2D, pos2D);
            if (!AcknexObject.HasFlag("LIBER") && distance > World.Instance.AcknexObject.GetFloat("CLIP_DIST"))
            {
                return;
            }
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
            var sides = Mathf.Max(1, TextureObject.AcknexObject.GetInteger("SIDES"));
            var activeCamera = CameraExtensions.GetLastActiveCamera();
            int side;
            if (sides > 1 && activeCamera != null)
            {
                var halfStep = 180f / sides;
                var cameraToThingDirection = Quaternion.LookRotation(AngleUtils.To2D(activeCamera.transform.position - GetCenter()).normalized, Vector3.up) * Vector3.forward;
                var thingAngle = AngleUtils.ConvertAcknexToUnityAngle(AcknexObject.GetFloat("ANGLE"));
                var thingDirection = Quaternion.Euler(0f, thingAngle, 0f) * Vector3.forward;
                var angle = Mathf.Repeat(AngleUtils.Angle(thingDirection, cameraToThingDirection) + halfStep, 360f);
                var normalizedAngle = angle / 360f;
                side = Mathf.RoundToInt(Mathf.Lerp(0, sides - 1, normalizedAngle));
            }
            else
            {
                side = 0;
            }
            if (side != _lastSide || TextureObject != _lastTextureObject || AcknexObject.HasFlag("PLAY"))
            {
                if (_animateCoroutine != null)
                {
                    StopCoroutine(_animateCoroutine);
                }
                if (TextureObject != null)
                {
                    if (AcknexObject.HasFlag("PLAY"))
                    {
                        AcknexObject.AddFlag("ONESHOT");
                        AcknexObject.RemoveFlag("PLAY");
                    }
                    _animateCoroutine = StartCoroutine(Animate(side));
                }
            }
            _lastTextureObject = TextureObject;
            _lastSide = side;
            if (!AcknexObject.IsDirty)
            {
#if DEBUG_ENABLED
                DebugExtension.DebugWireSphere(transform.position, Color.red);
#endif
                return;
            }
#if DEBUG_ENABLED
            DebugExtension.DebugWireSphere(transform.position, Color.green);
#endif
            AcknexObject.IsDirty = false;
            AcknexObject.SetFloat("DISTANCE", distance);
            _centerGameObject.transform.position = GetCenter();
            if (TextureObject != null)
            {
                _light.intensity = TextureObject.AcknexObject.GetFloat("RADIANCE") * World.Instance.LightMultiplier;
            }
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
            AcknexObject.SetFloat("VISIBLE", AcknexObject.GetFloat("INVISIBLE") > 0f ? 0f : 1f);
            if (AcknexObject.HasFlag("INVISIBLE"))
            {
                _meshRenderer.enabled = false;
                _triggerCollider.enabled = _collider.enabled = _characterController.enabled = false;
                return;
            }
            _spriteCollider.enabled = _collider.enabled = _characterController.enabled = true;
            _meshRenderer.enabled = true;
            _collider.center = _characterController.center = new Vector3(0f, _innerGameObject.transform.localPosition.y + _innerGameObject.transform.localScale.y * 0.5f, 0f);
            _collider.height = _characterController.height = _innerGameObject.transform.localScale.y;
            _collider.radius = _characterController.radius = GetColliderRadius();
            if (AcknexObject.HasFlag("PASSABLE"))
            {
                _spriteCollider.enabled = _collider.enabled = _characterController.enabled = false;
            }
            else
            {
                _spriteCollider.enabled = _collider.enabled = _characterController.enabled = true;
            }
            _triggerCollider.center = _collider.center;
            _triggerCollider.radius = AcknexObject.GetFloat("DIST");
            if (AcknexObject.TryGetAcknexObject("TARGET", out var target) && target != _lastTarget)
            {
                if (_movingCoroutine != null)
                {
                    StopCoroutine(_movingCoroutine);
                }
                if (target != null)
                {
                    if (target == World.Instance.FollowString)
                    {
                        _movingCoroutine = StartCoroutine(MoveToPlayer());
                    }
                    else if (target == World.Instance.RepelString)
                    {
                        _movingCoroutine = StartCoroutine(MoveAwayFromPlayer());
                    }
                    else if (target == World.Instance.VertexString)
                    {
                        _movingCoroutine = StartCoroutine(MoveToVertex());
                    }
                    else if (target == World.Instance.MoveString || target == World.Instance.BulletString)
                    {
                        _movingCoroutine = StartCoroutine(MoveToAngle());
                    }
                    else if (target.Container is Way way)
                    {
                        _movingCoroutine = StartCoroutine(MoveToWay(way));
                    }
                }
                _lastTarget = target;
            }
            //Attachment.HandleAttachment(ref _attached, gameObject, AcknexObject, TextureObject, transform.right);
        }

        private void Start()
        {
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

        private void OnControllerColliderHit(ControllerColliderHit controllerColliderHit)
        {
            //if (DebugMarked)
            //{
            //    Debug.Log(this + " collided with " + hit.collider);
            //}
            if (Vector3.Dot(controllerColliderHit.normal, Vector3.up) > 0.5f || Vector3.Dot(controllerColliderHit.normal, Vector3.down) > 0.5f)
            {
                return;
            }
            OnCollisionEnter(null);
        }

        private void OnCollisionEnter(Collision collision)
        {
            var hasToTrigger = AcknexObject.HasFlag("SENSITIVE");
            if (hasToTrigger && AcknexObject.HasFlag("CAREFULLY"))
            {
                var target = AcknexObject.GetAcknexObject("TARGET");
                if (target == World.Instance.BulletString)
                {
                    hasToTrigger = true;
                }
            }
            if (hasToTrigger)
            {
                World.Instance.UpdateSkillValue("HIT_DIST", 0f);
                World.Instance.UpdateSkillValue("RESULT", 0f);
                World.Instance.TriggerEvent("IF_HIT", AcknexObject, AcknexObject, GetRegion());
            }
        }

        private void OnDrawGizmos()
        {
#if DEBUG_ENABLED
            if (DebugMarked)
            {
                var quaternion = Quaternion.Euler(0f, AngleUtils.ConvertAcknexToUnityAngle(AcknexObject.GetFloat("ANGLE")), 0f);
                DebugExtension.DebugArrow(transform.position, quaternion * Vector3.forward, Color.cyan, 30F);
            }
#endif
        }

        private void OnDrawGizmosSelected()
        {
#if DEBUG_ENABLED
            Gizmos.color = Color.cyan;
            Gizmos.DrawLine(transform.position, new Vector3(AcknexObject.GetFloat("TARGET_X"), 0f, AcknexObject.GetFloat("TARGET_Y")));
            //Gizmos.color = AcknexObject.IsDirty ? Color.green : Color.red;
            //Gizmos.DrawSphere(transform.position, 1f);
            var quaternion = Quaternion.Euler(0f, AngleUtils.ConvertAcknexToUnityAngle(AcknexObject.GetFloat("ANGLE")), 0f);
            DebugExtension.DrawArrow(transform.position, quaternion * Vector3.forward, Color.cyan);
#endif
        }

        private IEnumerator Animate(int side = 0)
        {
            var enumerator = TextureObject.AnimateTexture(TextureCanceled, false, _meshRenderer, _meshFilter, _innerGameObject, AcknexObject, GetRegion(), _innerGameObject.transform, side);
            while (enumerator.MoveNext())
            {
                yield return enumerator.Current;
            }
        }

        private bool TextureCanceled(Texture texture)
        {
            return AcknexObject.HasFlag("INVISIBLE")|| texture != TextureObject;
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
            AcknexObject.SetFloat("WAYPOINT", waypoint);
            var nextPoint = points[waypoint - 1];
            for (; ; )
            {
                AcknexObject.IsDirty = true;
                if (MoveToPointStep(nextPoint))
                {
                    if (waypoint++ >= points.Count)
                    {
                        //AcknexObject.SetAcknexObject("TARGET", null);
                        _lastTarget = null;
                        yield break;
                    }
                    AcknexObject.SetFloat("WAYPOINT", waypoint);
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
                if (MoveToPointStep(targetPos, World.Instance.GetSkillValue("PLAYER_SIZE") * 2f))
                {
                    //AcknexObject.SetAcknexObject("TARGET", null);
                    _lastTarget = null;
                    World.Instance.TriggerEvent("IF_ARRIVED", AcknexObject, AcknexObject, GetRegion());
                    yield break;
                }
                yield return null;
            }
        }

        private IEnumerator MoveToPlayer()
        {
            var currentRegion = GetRegion();
            for (; ; )
            {
                AcknexObject.IsDirty = true;
                var playerPos = new Vector2(World.Instance.GetSkillValue("PLAYER_X"), World.Instance.GetSkillValue("PLAYER_Y"));
                MoveToPointStep(playerPos, World.Instance.GetSkillValue("PLAYER_SIZE") * 2f);
                if (CrossedRegion(ref currentRegion))
                {
                    _lastTarget = null;
                    //AcknexObject.SetAcknexObject("TARGET", null);
                    yield break;
                }
                yield return null;
            }
        }

        private IEnumerator MoveAwayFromPlayer()
        {
            //todo: implement
            yield break;
            //for (; ; )
            //{
            //    AcknexObject.IsDirty = true;
            //    var pos = new Vector2(AcknexObject.GetFloat("X"), AcknexObject.GetFloat("y"));
            //    var playerPos = new Vector2(World.Instance.GetSkillValue("PLAYER_X"), World.Instance.GetSkillValue("PLAYER_Y"));
            //    var targetPos = pos + (pos - playerPos).normalized * 1000f;
            //    Debug.DrawLine(pos, targetPos, Color.yellow, 10f);
            //    if (MoveToPointStep(targetPos, World.Instance.GetSkillValue("PLAYER_SIZE") * 2f))
            //    {
            //        AcknexObject.SetAcknexObject("TARGET", null);
            //        yield break;
            //    }
            //    yield return null;
            //}
        }

        private IEnumerator MoveToAngle()
        {
            var currentRegion = GetRegion();
            for (; ; )
            {
                AcknexObject.IsDirty = true;
                MoveToAngleStep();
                if (CrossedRegion(ref currentRegion))
                {
                    _lastTarget = null;
                    //AcknexObject.SetAcknexObject("TARGET", null);
                    yield break;
                }
                yield return null;
            }
        }

        private bool CrossedRegion(ref IAcknexObject currentRegion)
        {
            var checkRegion = GetRegion();
            if (checkRegion != currentRegion)
            {
                return true;
            }
            currentRegion = checkRegion;
            return false;
        }

        public virtual void UpdateEvents()
        {
            World.Instance.TriggerEvent("DO", AcknexObject, AcknexObject, GetRegion());
        }

        //todo: reimplement
        public void StickToTheCeiling(float thingX, float thingY, ref float thingZ, bool initial = false)
        {
            return;
            var region = GetRegion();
            var regionContainer = region?.Container as Region;
            var checkHeight = regionContainer == null ? 0f : regionContainer.GetRealFloorHeight();
            var newRegionContainer = Region.Locate(AcknexObject, regionContainer, _innerGameObject.transform.localScale.x * 0.5f, thingX, thingY, ref thingZ, true, checkHeight);
            thingZ -= _innerGameObject.transform.localScale.y; //todo: right?
            AcknexObject.SetFloat("Z", thingZ);
            AcknexObject.SetAcknexObject("REGION", newRegionContainer.AcknexObject);
        }

        //todo: A Thing with MASTER set, can trigger IF_LEAVE and IF_ENTER events
        public void Locate(float thingX, float thingY, ref float thingZ, bool initial = false)
        {
            var ground = AcknexObject.HasFlag("GROUND");
            var region = GetRegion();
            var regionContainer = (Region)region.Container;
            if (initial && ground)
            {
                regionContainer = regionContainer.GetRegionWithCeilingAbove(thingZ);
                region = regionContainer.AcknexObject;
            }
            float checkHeight;
            if (regionContainer != null)
            {
                if (!ground)
                {
                    thingZ = regionContainer.GetRealFloorHeight() + thingZ; //from relative to absolute
                }
                checkHeight = thingZ + World.Instance.GetSkillValue("ACTOR_CLIMB");
            }
            else
            {
                checkHeight = Region.MaxHeight;
            }
            var newRegionContainer = Region.Locate(AcknexObject, regionContainer, GetColliderRadius(), thingX, thingY, ref thingZ, false, checkHeight);
            float height;
            if (ground)
            {
                height = thingZ; //absolute
            }
            else
            {
                height = thingZ - newRegionContainer.GetRealFloorHeight(); //from absolute to relative
            }
            AcknexObject.SetFloat("HEIGHT", height);
            AcknexObject.SetAcknexObject("REGION", newRegionContainer.AcknexObject);
            _lastGround = ground;
        }

        private float GetColliderRadius()
        {
            return _innerGameObject.transform.localScale.x * 0.5f * (AcknexObject.Type == ObjectType.Actor ? World.Instance.GetSkillValue("ACTOR_WIDTH") : World.Instance.GetSkillValue("THING_WIDTH"));
        }

        public void MoveToAngleStep()
        {
            var speed = AcknexObject.GetFloat("SPEED");
            if (Mathf.Approximately(speed, 0f))
            {
                return;
            }
            //todo: why angle inverted?
            var angle = AcknexObject.GetFloat("ANGLE");
            var delta = new Vector3(MathUtils.Cos(angle), 0f, MathUtils.Sin(angle)) * speed * World.Instance.GetSkillValue("TIME_CORR");
            if (AcknexObject.HasFlag("PASSABLE"))
            {
                transform.Translate(delta, Space.World);
            }
            else
            {
                _characterController.Move(delta);
            }
#if DEBUG_ENABLED
            DebugExtension.DebugArrow(new Vector3(AcknexObject.GetFloat("X"), 0f, AcknexObject.GetFloat("Y")), delta, Color.magenta, 10f);
#endif
            AcknexObject.SetFloat("X", transform.position.x);
            AcknexObject.SetFloat("Y", transform.position.z);
        }

        public bool MoveToPointStep(Vector2 nextPoint, float? minDistance = null)
        {
            var pos = new Vector2(AcknexObject.GetFloat("X"), AcknexObject.GetFloat("Y"));
            AcknexObject.SetFloat("TARGET_X", nextPoint.x);
            AcknexObject.SetFloat("TARGET_Y", nextPoint.y);
            var speed = AcknexObject.GetFloat("SPEED");
            if (Mathf.Approximately(speed, 0f))
            {
                return false;
            }
            var toTarget = nextPoint - pos;
            //todo: why angle inverted?
            var angle = AngleUtils.ConvertUnityToAcknexAngle(MathUtils.Atan2(toTarget) * Mathf.Rad2Deg);
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
#if DEBUG_ENABLED
            Debug.DrawLine(new Vector3(pos.x, 0f, pos.y), new Vector3(nextPoint.x, 0f, nextPoint.y), Color.magenta, 1f);
#endif
            AcknexObject.SetFloat("X", transform.position.x);
            AcknexObject.SetFloat("Y", transform.position.z);
            AcknexObject.SetFloat("ANGLE", angle);
            return toTarget.magnitude <= (minDistance ?? speed);
        }

        public bool HitPixel(Vector2 textureCoord, Vector3 hitPoint)
        {
            var acknexObject = (AcknexObject)AcknexObject;
            if (acknexObject.CurrentBitmap?.CropTexture != null)
            {
                var texelSize = new Vector4(1f / acknexObject.CurrentBitmap.Width, 1f / acknexObject.CurrentBitmap.Height, acknexObject.CurrentBitmap.Width, acknexObject.CurrentBitmap.Height);
                var y0 = texelSize.w - acknexObject.BitmapCoords[1];
                var y1 = texelSize.w - acknexObject.BitmapCoords[3];
                var coord0 = new Vector2(acknexObject.BitmapCoords[0], y0);
                var coord1 = new Vector2(acknexObject.BitmapCoords[2], y1);
                var coord2 = new Vector2(textureCoord.x, 1.0f - textureCoord.y);
                var uv = new Vector2();
                uv.x = Mathf.Lerp(coord0.x, coord1.x, coord2.x);
                uv.y = Mathf.Lerp(coord0.y, coord1.y, coord2.y);
                uv.x *= texelSize.x;
                uv.y *= texelSize.y;
                var color = acknexObject.CurrentBitmap.CropTexture.Texture.GetPixelBilinear(textureCoord.x, textureCoord.y);
                //World.Instance.DebugColor = color;
                //World.Instance.DebugTexture = acknexObject.CurrentBitmap.CropTexture;
#if DEBUG_ENABLED
                DebugExtension.DebugWireSphere(hitPoint, color, 0.1f, 60f);
#endif
                return color.a > 0.5f;
            }
            return false;
        }
    }
}