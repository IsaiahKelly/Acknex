using System.Collections;
using Acknex.Interfaces;
using UnityEditor;
using UnityEngine;
using Utils;
using static UnityEngine.GraphicsBuffer;

namespace Acknex
{
    //todo: CYCLE PROP
    //todo: skill ACTOR_WIDTH & THING_WIDTH
    public class Thing : MonoBehaviour, IAcknexObjectContainer
    {
        [field: SerializeField]
        public bool DebugMarked { get; set; }

        public GameObject GameObject => gameObject;

        private AudioSource _audioSource;
        private CharacterController _characterController;
        private CapsuleCollider _collider;
        private MeshCollider _spriteCollider;
        private GameObject _innerGameObject;
        private MeshFilter _meshFilter;
        private MeshRenderer _meshRenderer;
        private SphereCollider _triggerCollider;
        private CollisionCallback _triggerCollisionCallback;
        private GameObject _triggerGameObject;
        private Coroutine _animatingCoroutine;
        private Coroutine _movingCoroutine;

        private GameObject _attached;
        private IAcknexObject _lastTarget;
        private Texture _lastTextureObject;
        private int _lastSide;

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
            _audioSource.Stop();
            _audioSource.clip = soundContainer.AudioClip;
            _audioSource.maxDistance = Mathf.Max(sDist, svDist);
            _audioSource.rolloffMode = AudioRolloffMode.Linear;
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
            _innerGameObject = TextureUtils.BuildTextureGameObject(transform, "Thing", BitmapImage, out _meshFilter, out _meshRenderer);
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
            var thingZ = AcknexObject.GetFloat("Z");
            Locate(thingX, thingY, ref thingZ, true);

            _triggerCollisionCallback.OnTriggerEnterCallback += OnTriggerEnterCallback;
            _triggerCollisionCallback.OnTriggerExitCallback += OnTriggerExitCallback;
            _audioSource = gameObject.AddComponent<AudioSource>();
            _audioSource.spatialBlend = 1f;
            //_animating = StartCoroutine(Animate());
            StartCoroutine(TriggerTickEvents());
            StartCoroutine(TriggerSecEvents());
        }

        private void Start()
        {

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
                if (_animatingCoroutine != null)
                {
                    StopCoroutine(_animatingCoroutine);
                }
                if (TextureObject != null)
                {
                    if (AcknexObject.HasFlag("PLAY"))
                    {
                        AcknexObject.AddFlag("ONESHOT");
                        AcknexObject.RemoveFlag("PLAY");
                    }
                    _animatingCoroutine = StartCoroutine(Animate(side));
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

            AcknexObject.SetFloat("VISIBLE", AcknexObject.GetFloat("INVISIBLE") > 0f ? 0f : 1f);

            if (AcknexObject.HasFlag("INVISIBLE"))
            {
                _meshRenderer.enabled = false;
                _triggerCollider.enabled = _collider.enabled = _characterController.enabled = false;
                return;
            }

            _spriteCollider.enabled = _collider.enabled = _characterController.enabled = true;
            _meshRenderer.enabled = true;

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
                    else
                    {
                        if (target.Container is Way way)
                        {
                            _movingCoroutine = StartCoroutine(MoveToWay(way));
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
            var hasToTrigger = AcknexObject.HasFlag("SENSITIVE");
            if (AcknexObject.HasFlag("CAREFULLY") && !hasToTrigger)
            {
                var target = AcknexObject.GetAcknexObject("TARGET");
                if (target == World.Instance.BulletString)
                {
                    hasToTrigger = true;
                }
            }
            if (hasToTrigger)
            {
                World.Instance.TriggerEvent("IF_HIT", AcknexObject, AcknexObject, GetRegion());
            }
        }

        private void OnDrawGizmos()
        {
#if DEBUG_ENABLED
            if (DebugMarked)
            {
                var position = transform.position + new Vector3(0f, 1f, 0f);
                position.y += 0.2f; GizmosUtils.DrawString("SKILL1:" + AcknexObject.GetFloat("SKILL1"), position);
                position.y += 0.2f; GizmosUtils.DrawString("SKILL2:" + AcknexObject.GetFloat("SKILL2"), position);
                position.y += 0.2f; GizmosUtils.DrawString("SKILL3:" + AcknexObject.GetFloat("SKILL3"), position);
                position.y += 0.2f; GizmosUtils.DrawString("SKILL4:" + AcknexObject.GetFloat("SKILL4"), position);
                position.y += 0.2f; GizmosUtils.DrawString("SKILL5:" + AcknexObject.GetFloat("SKILL5"), position);
                position.y += 0.2f; GizmosUtils.DrawString("SKILL6:" + AcknexObject.GetFloat("SKILL6"), position);
                position.y += 0.2f; GizmosUtils.DrawString("SKILL7:" + AcknexObject.GetFloat("SKILL7"), position);
                position.y += 0.2f; GizmosUtils.DrawString("SKILL8:" + AcknexObject.GetFloat("SKILL8"), position);
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
            var enumerator = TextureObject.AnimateTexture(false, _meshRenderer, _meshFilter, _innerGameObject, AcknexObject, GetRegion(), _innerGameObject.transform, side);
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
            AcknexObject.SetFloat("WAYPOINT", waypoint);
            var nextPoint = points[waypoint - 1];
            for (; ; )
            {
                AcknexObject.IsDirty = true;
                if (MoveToPointStep(nextPoint))
                {
                    if (waypoint++ >= points.Count)
                    {
                        AcknexObject.SetAcknexObject("TARGET", null);
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
                    AcknexObject.SetAcknexObject("TARGET", null);
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
                    AcknexObject.SetAcknexObject("TARGET", null);
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
            //var angle = AcknexObject.GetFloat("ANGLE");
            //var speed = AcknexObject.GetFloat("SPEED");
            //var timeCorr = World.Instance.GetSkillValue("TIME_CORR");
            //var sin = AngleUtils.Sin(angle) * speed * timeCorr;
            //var cos = AngleUtils.Cos(angle) * speed * timeCorr;
            //var targetPos = new Vector2(AcknexObject.GetFloat("X") + sin, AcknexObject.GetFloat("Y") + cos);
            //DebugExtension.DebugArrow(new Vector3(transform.position.x, 0f, transform.position.z), new Vector3(targetPos.x, 0f, targetPos.y), Color.yellow, 10f);
            var currentRegion = GetRegion();
            for (; ; )
            {
                AcknexObject.IsDirty = true;
                MoveToAngleStep();
                if (CrossedRegion(ref currentRegion))
                {
                    AcknexObject.SetAcknexObject("TARGET", null);
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
        }

        public void StickToTheCeiling(float thingX, float thingY, ref float thingZ, bool initial = false)
        {
            var region = GetRegion();
            var regionContainer = region?.Container as Region;
            var newRegionContainer = Region.Locate(AcknexObject, regionContainer, _innerGameObject.transform.localScale.x * 0.5f, thingX, thingY, ref thingZ, true, region == null || initial ? Region.MaxHeight : _innerGameObject.transform.localScale.y * 0.5f);
            thingZ = thingZ - _innerGameObject.transform.localScale.y; //todo: right?
            AcknexObject.SetFloat("Z", thingZ);
        }

        //todo: IF_ARISE only happens when leaving upwards
        public void Locate(float thingX, float thingY, ref float thingZ, bool initial = false)
        {
            var region = GetRegion();
            var regionContainer = region?.Container as Region;
            var newRegionContainer = Region.Locate(AcknexObject, regionContainer, _innerGameObject.transform.localScale.x * 0.5f, thingX, thingY, ref thingZ, false, region == null || initial ? Region.MaxHeight : _innerGameObject.transform.localScale.y * 0.5f);
            AcknexObject.SetFloat("Z", thingZ);
            if (AcknexObject.HasFlag("MASTER") && newRegionContainer != regionContainer)
            {
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


        public void MoveToAngleStep()
        {
            var speed = AcknexObject.GetFloat("SPEED");
            if (Mathf.Approximately(speed, 0f))
            {
                return;
            }
            //todo: why angle inverted?
            var angle = AcknexObject.GetFloat("ANGLE");
            var delta = new Vector3(MathExtension.Cos(angle), 0f, MathExtension.Sin(angle)) * speed * World.Instance.GetSkillValue("TIME_CORR");
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
            var angle = AngleUtils.ConvertUnityToAcknexAngle(MathExtension.Atan2(toTarget) * Mathf.Rad2Deg);
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