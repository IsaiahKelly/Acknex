using System.Collections;
using Acknex.Interfaces;
using UnityEngine;
using Utils;
using NameId = System.UInt32;
using PropertyName = Acknex.Interfaces.PropertyName;

namespace Acknex
{
    public class Thing : MonoBehaviour, IAcknexObjectContainer, IGraphicObject
    {
        private IEnumerator _animateCoroutine;
        private AudioSource _audioSource;
        private GameObject _centerGameObject;
        private CharacterController _characterController;
        private CapsuleCollider _collider;
        private GameObject _innerGameObject;
        private IAcknexObject _lastTarget;
        private MeshFilter _meshFilter;
        private MeshRenderer _meshRenderer;
        private Material[] _meshRendererMaterials;
        private IEnumerator _movingCoroutine;
        private MeshCollider _spriteCollider;
        private SphereCollider _triggerCollider;
        private CollisionCallback _triggerCollisionCallback;
        private GameObject _triggerGameObject;
        private bool _lastGround;

        public Texture TextureObject => AcknexObject.TryGetAcknexObject(PropertyName.TEXTURE, out var textureObject) ? textureObject?.Container as Texture : null;
        public Bitmap BitmapImage => TextureObject?.GetBitmapAt();

        public virtual IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Thing);
        public Vector4 BitmapCoords { get; set; }

        public Bitmap CurrentBitmap { get; set; }

        public void Disable()
        {
            AcknexObject.AddFlag(PropertyName.INVISIBLE);
        }

        public void Enable()
        {
            AcknexObject.RemoveFlag(PropertyName.INVISIBLE);
        }

        public GameObject GameObject => gameObject;

        public float GetAmbient()
        {
            var ambient = AcknexObject.GetFloat(PropertyName.AMBIENT);
            ambient *= ((IGraphicObject)GetRegion().Container).GetAmbient();
            return ambient;
        }

        public Vector3 GetCenter()
        {
            return transform.position + new Vector3(0f, _innerGameObject.transform.localScale.y * 0.5f, 0f);
        }

        public IAcknexObject GetRegion()
        {
            var regionObject = AcknexObject.GetAcknexObject(PropertyName.REGION);
            return regionObject ?? World.Instance.RegionsByIndex[0].AcknexObject;
        }

        public bool IsGeometryDirty { get; set; }

        public bool IsTextureDirty { get; set; } = true;

        public void NotifyPropertyChanged(uint propertyName)
        {
            switch (propertyName)
            {
                case (uint)PropertyName.TEXTURE:
                case (uint)PropertyName.SIDE:
                case (uint)PropertyName.AMBIENT:
                case (uint)PropertyName.PLAY:
                case (uint)PropertyName.INVISIBLE:
                    IsTextureDirty = true;
                    break;
            }
        }

        public Vector4 OffsetScale { get; set; }

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
            DebugExtension.DebugWireSphere(GetCenter(), Color.blue, 1f, 10f);
#endif
            _audioSource.Stop();
            _audioSource.clip = soundContainer.AudioClip;
            _audioSource.maxDistance = Mathf.Max(sDist, svDist);
            _audioSource.volume = volume;
            _audioSource.Play();
        }

        public void ResetTexture()
        {
            IsTextureDirty = true;
        }

        public void SetupInstance()
        {
            if (AcknexObject.IsInstance)
            {
                return;
            }
            AcknexObject.IsInstance = true;
            _lastGround = AcknexObject.HasFlag(PropertyName.GROUND);
            _innerGameObject = TextureUtils.BuildTextureGameObject(transform, "Thing", BitmapImage, out _meshFilter, out _meshRenderer);
            _meshRendererMaterials = _meshRenderer.materials;
            foreach (var material in _meshRendererMaterials)
            {
                material.mainTexture = World.Instance.NullTexture;
            }
            _innerGameObject.layer = World.Instance.Sprites.LayerIndex;
            _characterController = gameObject.AddComponent<CharacterController>();
            _characterController.detectCollisions = false;
            _collider = gameObject.AddComponent<CapsuleCollider>();
            _spriteCollider = _innerGameObject.AddComponent<MeshCollider>();
            _spriteCollider.sharedMesh = _meshFilter.mesh;
            _triggerGameObject = new GameObject("Trigger");
            _triggerGameObject.layer = World.Instance.TriggersLayer.LayerIndex;
            _triggerGameObject.transform.SetParent(transform, false);
            _triggerCollider = _triggerGameObject.AddComponent<SphereCollider>();
            _triggerCollider.isTrigger = true;
            _triggerCollisionCallback = _triggerGameObject.AddComponent<CollisionCallback>();
            var thingX = AcknexObject.GetFloat(PropertyName.X);
            var thingY = AcknexObject.GetFloat(PropertyName.Y);
            var thingZ = AcknexObject.GetFloat(PropertyName.HEIGHT);
            Locate(thingX, thingY, ref thingZ, true);
            transform.position = new Vector3(thingX, thingZ, thingY);
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
            _centerGameObject.layer = World.Instance.IgnoreRaycastLayer.LayerIndex;
            _centerGameObject.transform.SetParent(transform, false);
            World.Instance.StartManagedCoroutine(this, TriggerTickEvents());
            World.Instance.StartManagedCoroutine(this, TriggerSecEvents());
        }

        public void SetupTemplate()
        {
        }

        public virtual void UpdateObject()
        {
            var thingX = AcknexObject.GetFloat(PropertyName.X);
            var thingY = AcknexObject.GetFloat(PropertyName.Y);
            var thingZ = AcknexObject.GetFloat(PropertyName.HEIGHT);
            var pos2D = new Vector2(thingX, thingY);
            var playerPos2D = new Vector2(World.Instance.GetSkillValue(SkillName.PLAYER_X), World.Instance.GetSkillValue(SkillName.PLAYER_Y));
            var distance = Vector2.Distance(playerPos2D, pos2D);
            if (!AcknexObject.HasFlag(PropertyName.LIBER) && distance > World.Instance.AcknexObject.GetFloat(PropertyName.CLIP_DIST))
            {
                return;
            }
            AcknexObject.NoDirtyFlag = true;
            AcknexObject.SetFloat(PropertyName.DISTANCE, distance);
            AcknexObject.NoDirtyFlag = false;
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
            //    var angle = AcknexObject.GetFloat(PropertyName.ANGLE);
            //    var eulerAngles = transform.eulerAngles;
            //    eulerAngles.y = AngleUtils.ConvertAcknexToUnityAngle(angle);
            //    transform.eulerAngles = eulerAngles;
            //}
            var sides = Mathf.Max(1, TextureObject.AcknexObject.GetInteger(PropertyName.SIDES));
            var activeCamera = CameraExtensions.GetLastActiveCamera();
            int side;
            if (sides > 1 && activeCamera != null)
            {
                var halfStep = 180f / sides;
                var cameraToThingDirection = Quaternion.LookRotation(AngleUtils.To2D(activeCamera.transform.position - GetCenter()).normalized, Vector3.up) * Vector3.forward;
                var thingAngle = AngleUtils.ConvertAcknexToUnityAngle(AcknexObject.GetFloat(PropertyName.ANGLE));
                var thingDirection = Quaternion.Euler(0f, thingAngle, 0f) * Vector3.forward;
                var angle = Mathf.Repeat(AngleUtils.Angle(thingDirection, cameraToThingDirection) + halfStep, 360f);
                var normalizedAngle = angle / 360f;
                side = Mathf.RoundToInt(Mathf.Lerp(0, sides - 1, normalizedAngle));
            }
            else
            {
                side = 0;
            }
            AcknexObject.SetInteger(PropertyName.SIDE, side);
            if (IsTextureDirty)
            {
                if (_animateCoroutine != null)
                {
                    World.Instance.StopManagedCoroutine(this, _animateCoroutine);
                }
                if (TextureObject != null)
                {
                    if (AcknexObject.HasFlag(PropertyName.PLAY))
                    {
                        AcknexObject.AddFlag(PropertyName.ONESHOT);
                        AcknexObject.RemoveFlag(PropertyName.PLAY);
                    }
                    _animateCoroutine = World.Instance.StartManagedCoroutine(this, Animate());
                }
                IsTextureDirty = false;
            }
            if (!AcknexObject.IsDirty)
            {
                return;
            }
            AcknexObject.IsDirty = false;
            _centerGameObject.transform.position = GetCenter();
            //todo: this block should only run on carefully flagged
            if (AcknexObject.HasFlag(PropertyName.CANDELABER))
            {
                StickToTheCeiling(thingX, thingY, ref thingZ);
            }
            else
            {
                Locate(thingX, thingY, ref thingZ);
            }
            transform.position = new Vector3(thingX, thingZ, thingY);
            AcknexObject.SetFloat(PropertyName.VISIBLE, AcknexObject.GetFloat(PropertyName.INVISIBLE) > 0f ? 0f : 1f);
            var invisible = AcknexObject.HasFlag(PropertyName.INVISIBLE);
            if (invisible)
            {
                _meshRenderer.enabled = false;
                _triggerCollider.enabled = _collider.enabled = _characterController.enabled = false;
                return;
            }
            _characterController.enabled = true;
            //_spriteCollider.enabled = _collider.enabled = _characterController.enabled = true;
            _meshRenderer.enabled = true;
            _collider.center = _characterController.center = new Vector3(0f, _innerGameObject.transform.localPosition.y + _innerGameObject.transform.localScale.y * 0.5f, 0f);
            _collider.height = _characterController.height = _innerGameObject.transform.localScale.y;
            _collider.radius = _characterController.radius = GetColliderRadius();
            if (AcknexObject.HasFlag(PropertyName.PASSABLE))
            {
                _spriteCollider.enabled = _collider.enabled /* = _characterController.enabled*/ = false;
            }
            else
            {
                _spriteCollider.enabled = _collider.enabled /* = _characterController.enabled*/ = true;
            }
            _triggerCollider.center = _collider.center;
            _triggerCollider.radius = AcknexObject.GetFloat(PropertyName.DIST);
            if (AcknexObject.TryGetAcknexObject(PropertyName.TARGET, out var target))
            {
                if (target != _lastTarget)
                {
                    _lastTarget = target;
                    if (_movingCoroutine != null)
                    {
                        World.Instance.StopManagedCoroutine(this, _movingCoroutine);
                    }
                    if (target != null)
                    {
                        if (target == World.Instance.FollowString)
                        {
                            _movingCoroutine = World.Instance.StartManagedCoroutine(this, MoveToPlayer());
                        }
                        else if (target == World.Instance.RepelString)
                        {
                            _movingCoroutine = World.Instance.StartManagedCoroutine(this, MoveAwayFromPlayer());
                        }
                        else if (target == World.Instance.VertexString)
                        {
                            _movingCoroutine = World.Instance.StartManagedCoroutine(this, MoveToVertex());
                        }
                        else if (target == World.Instance.MoveString || target == World.Instance.BulletString)
                        {
                            _movingCoroutine = World.Instance.StartManagedCoroutine(this, MoveToAngle());
                        }
                        else if (target.Container is Way way)
                        {
                            _movingCoroutine = World.Instance.StartManagedCoroutine(this, MoveToWay(way));
                        }
                    }
                }
            }
        }

        public override string ToString()
        {
            return AcknexObject.ToString();
        }

        private static IAcknexObject GetTemplateCallback(uint name)
        {
            return World.Instance.ThingsByName.TryGetValue(name, out var definition) ? definition.AcknexObject : null;
        }

        private IEnumerator TriggerSecEvents()
        {
            while (true)
            {
                World.Instance.TriggerEvent(PropertyName.EACH_SEC, AcknexObject, AcknexObject, GetRegion());
                yield return World.Instance.WaitForSecond;
            }
        }

        private IEnumerator TriggerTickEvents()
        {
            while (true)
            {
                World.Instance.TriggerEvent(PropertyName.EACH_TICK, AcknexObject, AcknexObject, GetRegion());
                yield return null;
            }
        }

        private void OnTriggerExitCallback(Collider obj)
        {
            if (obj.TryGetComponent<Player>(out var player))
            {
                World.Instance.TriggerEvent(PropertyName.IF_FAR, AcknexObject, AcknexObject, GetRegion());
            }
        }

        private void OnTriggerEnterCallback(Collider obj)
        {
            if (obj.TryGetComponent<Player>(out var player))
            {
                World.Instance.TriggerEvent(PropertyName.IF_NEAR, AcknexObject, AcknexObject, GetRegion());
            }
        }

        private void OnCollisionExit(Collision obj)
        {
        }

        private void OnControllerColliderHit(ControllerColliderHit controllerColliderHit)
        {
            //var movingVertically = Mathf.Abs(AcknexObject.GetFloat(PropertyName.VSPEED)) > 0.1f;
            //var movingHorizontally = !Mathf.Approximately(AcknexObject.GetFloat(PropertyName.SPEED), 0f);
            //var region = GetRegion().Container as Region;
            //var height = AcknexObject.GetFloat(PropertyName.HEIGHT);
            //var hittingUpOrDown = height < region.GetRealFloorHeight() || height > region.GetRealCeilHeight();
            //if (/*(movingVertically && hittingUpOrDown) ||*/ (movingHorizontally && !hittingUpOrDown))
            //{
            OnCollisionEnter(null);
            //}
        }

        private void OnCollisionEnter(Collision collision)
        {
            var hasToTrigger = AcknexObject.HasFlag(PropertyName.SENSITIVE) || (AcknexObject.HasFlag(PropertyName.CAREFULLY) && AcknexObject.GetAcknexObject(PropertyName.TARGET) == World.Instance.BulletString);
            if (hasToTrigger)
            {
                World.Instance.UpdateSkillValue(SkillName.HIT_DIST, 0f);
                World.Instance.UpdateSkillValue(SkillName.RESULT, 0f);
                World.Instance.UpdateSkillValue(SkillName.SHOOT_ANGLE, 0f);
                World.Instance.SetSynonymObject(SynonymName.HIT, null);
                World.Instance.TriggerEvent(PropertyName.IF_HIT, AcknexObject, AcknexObject, GetRegion());
            }
        }

        private void OnDrawGizmos()
        {
#if DEBUG_ENABLED
            Gizmos.color = AcknexObject.IsDirty ? Color.green : Color.red;
            Gizmos.DrawSphere(transform.position, 1f);
            if (IsTextureDirty)
            {
                Gizmos.color = Color.blue;
                Gizmos.DrawSphere(transform.position + new Vector3(0f,1f,0f), 1f);
            }
            //            if (DebugMarked)
            //            {
            //                var quaternion = Quaternion.Euler(0f, AngleUtils.ConvertAcknexToUnityAngle(AcknexObject.GetFloat(PropertyName.ANGLE)), 0f);
            //                DebugExtension.DebugArrow(transform.position, quaternion * Vector3.forward, Color.cyan, 30F);
            //            }
#endif
        }

        private void OnDrawGizmosSelected()
        {
#if DEBUG_ENABLED
            Gizmos.color = Color.cyan;
            Gizmos.DrawLine(transform.position, new Vector3(AcknexObject.GetFloat(PropertyName.TARGET_X), 0f, AcknexObject.GetFloat(PropertyName.TARGET_Y)));
            Gizmos.color = AcknexObject.IsDirty ? Color.green : Color.red;
            Gizmos.DrawSphere(transform.position, 1f);
            var quaternion = Quaternion.Euler(0f, AngleUtils.ConvertAcknexToUnityAngle(AcknexObject.GetFloat(PropertyName.ANGLE)), 0f);
            DebugExtension.DrawArrow(transform.position, quaternion * Vector3.forward, Color.cyan);
#endif
        }

        private IEnumerator Animate()
        {
            var side = AcknexObject.GetInteger(PropertyName.SIDE);
            var enumerator = TextureObject.AnimateTexture(TextureCanceled, false, _meshRendererMaterials, _meshFilter, _innerGameObject, AcknexObject, GetRegion(), side);
            while (enumerator.MoveNext())
            {
                yield return enumerator.Current;
            }
        }

        private bool TextureCanceled(Texture texture)
        {
            return AcknexObject.HasFlag(PropertyName.INVISIBLE) || texture != TextureObject;
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
            AcknexObject.SetFloat(PropertyName.WAYPOINT, waypoint);
            var nextPoint = points[waypoint - 1];
            for (;;)
            {
                AcknexObject.IsDirty = true;
                if (World.Instance.GetSkillValue(SkillName.MOVE_MODE) <= 0.5f || AcknexObject.HasFlag(PropertyName.INVISIBLE) || AcknexObject.GetAcknexObject(PropertyName.TARGET) != _lastTarget)
                {
                    _lastTarget = null;
                    yield break;
                }
                //todo: ensure this is right
                if (MoveToPointStep(nextPoint))
                {
                    if (waypoint++ >= points.Count)
                    {
                        _lastTarget = null;
                        yield break;
                    }
                    AcknexObject.SetFloat(PropertyName.WAYPOINT, waypoint);
                    World.Instance.TriggerEvent(PropertyName.IF_ARRIVED, AcknexObject, AcknexObject, GetRegion());
                    nextPoint = points[waypoint - 1];
                }
                yield return null;
            }
        }

        private IEnumerator MoveToVertex()
        {
            var targetPos = new Vector2(AcknexObject.GetFloat(PropertyName.TARGET_X), AcknexObject.GetFloat(PropertyName.TARGET_Y));
            for (;;)
            {
                AcknexObject.IsDirty = true;
                if (World.Instance.GetSkillValue(SkillName.MOVE_MODE) <= 0.5f || AcknexObject.HasFlag(PropertyName.INVISIBLE) || AcknexObject.GetAcknexObject(PropertyName.TARGET) != _lastTarget)
                {
                    _lastTarget = null;
                    yield break;
                }
                if (MoveToPointStep(targetPos, World.Instance.GetSkillValue(SkillName.PLAYER_SIZE) * 2f))
                {
                    World.Instance.TriggerEvent(PropertyName.IF_ARRIVED, AcknexObject, AcknexObject, GetRegion());
                    _lastTarget = null;
                    yield break;
                }
                yield return null;
            }
        }

        private IEnumerator MoveToPlayer()
        {
            var currentRegion = GetRegion();
            for (;;)
            {
                AcknexObject.IsDirty = true;
#if DEBUG_ENABLED
                AcknexObject.DebugMessage = "Got dirty because moved to player";
#endif
                var playerPos = new Vector2(World.Instance.GetSkillValue(SkillName.PLAYER_X), World.Instance.GetSkillValue(SkillName.PLAYER_Y));
                MoveToPointStep(playerPos, World.Instance.GetSkillValue(SkillName.PLAYER_SIZE) * 2f);
                if (CrossedRegion(ref currentRegion))
                {
                    World.Instance.TriggerEvent(PropertyName.IF_ARRIVED, AcknexObject, AcknexObject, GetRegion());
                }
                if (World.Instance.GetSkillValue(SkillName.MOVE_MODE) <= 0.5f || AcknexObject.HasFlag(PropertyName.INVISIBLE) || AcknexObject.GetAcknexObject(PropertyName.TARGET) != _lastTarget)
                {
                    _lastTarget = null;
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
            //    var pos = new Vector2(AcknexObject.GetFloat(PropertyName.X), AcknexObject.GetFloat("y"));
            //    var playerPos = new Vector2(World.Instance.GetSkillValue("PLAYER_X"), World.Instance.GetSkillValue("PLAYER_Y"));
            //    var targetPos = pos + (pos - playerPos).normalized * 1000f;
            //    Debug.DrawLine(pos, targetPos, Color.yellow, 10f);
            //    if (MoveToPointStep(targetPos, World.Instance.GetSkillValue("PLAYER_SIZE") * 2f))
            //    {
            //        AcknexObject.SetAcknexObject(PropertyName.TARGET, null);
            //        yield break;
            //    }
            //    yield return null;
            //}
        }

        private IEnumerator MoveToAngle()
        {
            var currentRegion = GetRegion();
            for (;;)
            {
                AcknexObject.IsDirty = true;
                MoveToAngleStep();
                if (CrossedRegion(ref currentRegion))
                {
                    World.Instance.TriggerEvent(PropertyName.IF_ARRIVED, AcknexObject, AcknexObject, GetRegion());
                }
                if (World.Instance.GetSkillValue(SkillName.MOVE_MODE) <= 0.5f || AcknexObject.HasFlag(PropertyName.INVISIBLE) || AcknexObject.GetAcknexObject(PropertyName.TARGET) != _lastTarget)
                {
                    _lastTarget = null;
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
            World.Instance.TriggerEvent(PropertyName.DO, AcknexObject, AcknexObject, GetRegion());
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
            AcknexObject.SetFloat(PropertyName.Z, thingZ);
            AcknexObject.SetAcknexObject(PropertyName.REGION, newRegionContainer.AcknexObject);
        }

        //todo: A Thing with MASTER set, can trigger IF_LEAVE and IF_ENTER events
        public void Locate(float thingX, float thingY, ref float thingZ, bool initial = false)
        {
            var ground = AcknexObject.HasFlag(PropertyName.GROUND);
            var region = GetRegion();
            var regionContainer = (Region)region.Container;
            if (initial && ground)
            {
                regionContainer = regionContainer.GetRegionWithCeilingAbove(thingZ);
                region = regionContainer.AcknexObject;
            }
            float checkHeight;
            //if (regionContainer != null)
            {
                if (!ground)
                {
                    thingZ = regionContainer.GetRealFloorHeight() + thingZ; //from relative to absolute
                }
                checkHeight = thingZ + World.Instance.GetSkillValue(SkillName.ACTOR_CLIMB);
            }
            //else
            //{
            //    checkHeight = Region.MaxHeight;
            //}
            var newRegionContainer = initial || AcknexObject.HasFlag(PropertyName.CAREFULLY) ? Region.Locate(AcknexObject, regionContainer, GetColliderRadius(), thingX, thingY, ref thingZ, false, checkHeight) : regionContainer;
            float height;
            if (ground)
            {
                thingZ = height = AcknexObject.GetFloat(PropertyName.HEIGHT); //thingZ; //absolute
            }
            else
            {
                height = thingZ - newRegionContainer.GetRealFloorHeight(); //from absolute to relative
            }
            AcknexObject.SetFloat(PropertyName.HEIGHT, height);
            AcknexObject.SetAcknexObject(PropertyName.REGION, newRegionContainer.AcknexObject);
            AcknexObject.SetFloat(PropertyName.FLOOR_HGT, newRegionContainer.AcknexObject.GetFloat(PropertyName.FLOOR_HGT));
            AcknexObject.SetFloat(PropertyName.CEIL_HGT, newRegionContainer.AcknexObject.GetFloat(PropertyName.CEIL_HGT));
            _lastGround = ground;
        }

        private float GetColliderRadius()
        {
            return _innerGameObject.transform.localScale.x * 0.5f * (AcknexObject.Type == ObjectType.Actor ? World.Instance.GetSkillValue(SkillName.ACTOR_WIDTH) : World.Instance.GetSkillValue(SkillName.THING_WIDTH));
        }

        public void MoveToAngleStep()
        {
            var moveMode = World.Instance.GetSkillValue(SkillName.MOVE_MODE);
            if (moveMode <= 0.5f)
            {
                return;
            }
            var speed = AcknexObject.GetFloat(PropertyName.SPEED);
            //if (Mathf.Approximately(speed, 0f))
            //{
            //    return;
            //}
            //todo: why angle inverted?
            var angle = AcknexObject.GetFloat(PropertyName.ANGLE);
            var timeCorr = World.Instance.GetSkillValue(SkillName.TIME_CORR);
            var delta = new Vector3(MathUtils.Cos(angle), 0f, MathUtils.Sin(angle)) * speed * timeCorr;
            delta.y = AcknexObject.GetFloat(PropertyName.VSPEED) /** timeCorr*/;
            var initialPosition = transform.position;
            //if (AcknexObject.HasFlag(PropertyName.PASSABLE))
            //{
            //    transform.Translate(delta, Space.World);
            //}
            //else
            //{
            //if (WontDrop(delta))
            //{
            _characterController.Move(delta);
            //}
            //}
#if DEBUG_ENABLED
            DebugExtension.DebugArrow(new Vector3(AcknexObject.GetFloat(PropertyName.X), 0f, AcknexObject.GetFloat(PropertyName.Y)), delta, Color.magenta, 10f);
#endif
            var height = AcknexObject.GetFloat(PropertyName.HEIGHT);
            delta = transform.position - initialPosition;
            AcknexObject.SetFloat(PropertyName.X, transform.position.x);
            AcknexObject.SetFloat(PropertyName.Y, transform.position.z);
            AcknexObject.SetFloat(PropertyName.HEIGHT, height + delta.y);
        }

        private bool WontDrop(Vector3 delta)
        {
            var finalPos = _characterController.transform.position + delta;
            return !Physics.SphereCast(finalPos + new Vector3(0f, _characterController.radius, 0f), _characterController.radius, Vector3.down, out var raycastHit, World.Instance.WallsWaterRegionsAndThings) || raycastHit.distance < World.Instance.GetSkillValue(SkillName.ACTOR_CLIMB);
        }

        public bool MoveToPointStep(Vector2 nextPoint, float? minDistance = null)
        {
            var moveMode = World.Instance.GetSkillValue(SkillName.MOVE_MODE);
            if (moveMode <= 0.5f)
            {
                return false;
            }
            //if (AcknexObject.HasFlag(PropertyName.INVISIBLE))
            //{
            //    return true;
            //}
            var pos = new Vector2(AcknexObject.GetFloat(PropertyName.X), AcknexObject.GetFloat(PropertyName.Y));
            AcknexObject.SetFloat(PropertyName.TARGET_X, nextPoint.x);
            AcknexObject.SetFloat(PropertyName.TARGET_Y, nextPoint.y);
            var speed = AcknexObject.GetFloat(PropertyName.SPEED);
            if (Mathf.Approximately(speed, 0f))
            {
                return false;
            }
            var toTarget = nextPoint - pos;
            //todo: why angle inverted?
            var angle = AngleUtils.ConvertUnityToAcknexAngle(MathUtils.Atan2(toTarget) * Mathf.Rad2Deg);
            var timeCorr = World.Instance.GetSkillValue(SkillName.TIME_CORR);
            var newPos = Vector2.MoveTowards(pos, nextPoint, speed * timeCorr);
            var delta = new Vector3(newPos.x - pos.x, 0f, newPos.y - pos.y);
            delta.y = AcknexObject.GetFloat(PropertyName.VSPEED) /** timeCorr */;
            var initialPosition = transform.position;
            if ( /*AcknexObject.HasFlag(PropertyName.PASSABLE) || */AcknexObject.GetAcknexObject(PropertyName.TARGET).Type == ObjectType.Way)
            {
                transform.Translate(delta, Space.World);
            }
            else
            {
                if (WontDrop(delta))
                {
                    _characterController.Move(delta);
                }
            }
#if DEBUG_ENABLED
            Debug.DrawLine(new Vector3(pos.x, 0f, pos.y), new Vector3(nextPoint.x, 0f, nextPoint.y), Color.magenta, 1f);
#endif
            var height = AcknexObject.GetFloat(PropertyName.HEIGHT);
            delta = transform.position - initialPosition;
            AcknexObject.SetFloat(PropertyName.X, transform.position.x);
            AcknexObject.SetFloat(PropertyName.Y, transform.position.z);
            AcknexObject.SetFloat(PropertyName.HEIGHT, height + delta.y);
            AcknexObject.SetFloat(PropertyName.ANGLE, angle);
            return toTarget.magnitude <= (minDistance ?? speed);
        }

        public bool HitPixel(Vector2 textureCoord, Vector3 hitPoint)
        {
            var acknexObject = (AcknexObject)AcknexObject;
            if (CurrentBitmap?.CropTexture != null)
            {
                var texelSize = new Vector4(1f / CurrentBitmap.Width, 1f / CurrentBitmap.Height, CurrentBitmap.Width, CurrentBitmap.Height);
                var y0 = texelSize.w - BitmapCoords[1];
                var y1 = texelSize.w - BitmapCoords[3];
                var coord0 = new Vector2(BitmapCoords[0], y0);
                var coord1 = new Vector2(BitmapCoords[2], y1);
                var coord2 = new Vector2(textureCoord.x, 1.0f - textureCoord.y);
                var uv = new Vector2();
                uv.x = Mathf.Lerp(coord0.x, coord1.x, coord2.x);
                uv.y = Mathf.Lerp(coord0.y, coord1.y, coord2.y);
                uv.x *= texelSize.x;
                uv.y *= texelSize.y;
                var color = CurrentBitmap.CropTexture.Texture.GetPixelBilinear(textureCoord.x, textureCoord.y);
#if DEBUG_ENABLED
                DebugExtension.DebugWireSphere(hitPoint, color, 0.1f, 60f);
#endif
                return color.a > 0.5f;
            }
            return false;
        }
    }
}