using NameId = System.UInt32;
using Acknex.Interfaces;
using UnityEngine;
using Utils;
using PropertyName = Acknex.Interfaces.PropertyName;

namespace Acknex
{
    public class Player : MonoBehaviour, IAcknexObjectContainer
    {
        public void NotifyPropertyChanged(uint propertyName)
        {

        }
        public override string ToString()
        {
            return AcknexObject.ToString();
        }

        private CharacterController _characterController;
        private bool _soundTriggered;
        private float _walkTime;
        private float _waterHeight;

        public static Player Instance { get; private set; }
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Player);

        public void Disable()
        {
        }

        public void Enable()
        {
        }

        public GameObject GameObject => gameObject;

        public Vector3 GetCenter()
        {
            return transform.position + new Vector3(0f, World.Instance.GetSkillValue(SkillName.PLAYER_SIZE) * 0.5f, 0f);
        }

        public IAcknexObject GetRegion()
        {
            var regionObject = AcknexObject.GetAcknexObject(PropertyName.REGION);
            return regionObject ?? World.Instance.RegionsByIndex[0].AcknexObject;
        }


        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {
        }

        public void SetupInstance()
        {
        }

        public void SetupTemplate()
        {
        }

        private Collider[] _results = new Collider[255];

        public void UpdateObject()
        {
            var playerX = World.Instance.GetSkillValue(SkillName.PLAYER_X);
            var playerY = World.Instance.GetSkillValue(SkillName.PLAYER_Y);
            var playerZ = World.Instance.GetSkillValue(SkillName.PLAYER_Z);
            var playerHgt = World.Instance.GetSkillValue(SkillName.PLAYER_HGT);
            var playerAngle = World.Instance.GetSkillValue(SkillName.PLAYER_ANGLE);
            var floorHgt = World.Instance.GetSkillValue(SkillName.FLOOR_HGT);
            var playerFootZ = floorHgt + playerHgt;
            var unityPlayerAngle = AngleUtils.ConvertAcknexToUnityAngle(playerAngle);
            var initialPosition = new Vector3(playerX, playerFootZ, playerY);
            var playerWidth = World.Instance.GetSkillValue(SkillName.PLAYER_WIDTH);
            _characterController.transform.rotation = Quaternion.Euler(0f, unityPlayerAngle, 0f);
            _characterController.transform.position = initialPosition;
            _characterController.radius = playerWidth;
            //todo: _characterController.skinWidth = playerWidth * 0.1f;
            var playerSize = World.Instance.GetSkillValue(SkillName.PLAYER_SIZE);
            var playerClimb = World.Instance.GetSkillValue(SkillName.PLAYER_CLIMB);
            var possibleClimb = Mathf.Min(playerWidth, playerClimb);
            _characterController.height = Mathf.Max(0f, playerSize - possibleClimb);
            var playerMove = new Vector3(World.Instance.GetSkillValue(SkillName.PLAYER_VX), 0f, World.Instance.GetSkillValue(SkillName.PLAYER_VY)) * World.Instance.GetSkillValue(SkillName.TIME_CORR);
            playerMove.y = World.Instance.GetSkillValue(SkillName.PLAYER_VZ) * Time.deltaTime * World.Instance.TestTimeScale;
            var characterControllerCenter = _characterController.center;
            characterControllerCenter.y = _characterController.height * 0.5f + possibleClimb;
            _characterController.center = characterControllerCenter;
            _characterController.Move(playerMove);
            var delta = _characterController.transform.position - initialPosition;
            var deltaXZ = new Vector3(delta.x, 0f, delta.z);
            var deltaXZMagnitude = deltaXZ.magnitude;
            var regionContainer = ((Region)GetRegion().Container);
            if (regionContainer.IsUnderwater || playerHgt <= 0.1f && deltaXZMagnitude > Mathf.Epsilon)
            {
                if (regionContainer.IsUnderwater)
                {
                    _walkTime += Time.deltaTime;
                }
                else
                {
                    var period = deltaXZMagnitude / World.Instance.GetSkillValue(SkillName.WALK_PERIOD) * 2f;
                    _walkTime += period;
                }
                var walk = Mathf.Sin(_walkTime * Mathf.PI);
                World.Instance.UpdateSkillValue(SkillName.WALK, walk);
                if (!_soundTriggered && walk >= 0.5f)
                {
                    var container = (Region)GetRegion().Container;
                    container.PlayRegionSound(regionContainer.IsUnderwater);
                    _soundTriggered = true;
                }
                if (_soundTriggered && walk < 0.5f)
                {
                    _soundTriggered = false;
                }
            }
            var waveTime = Time.time / TimeUtils.TicksToTime((int)World.Instance.GetSkillValue(SkillName.WAVE_PERIOD)) * 2f;
            var wave = Mathf.Sin(waveTime * Mathf.PI);
            World.Instance.UpdateSkillValue(SkillName.WAVE, wave);
            World.Instance.UpdateSkillValue(SkillName.IMPACT_VX, deltaXZ.x);
            World.Instance.UpdateSkillValue(SkillName.IMPACT_VY, deltaXZ.z);
            playerAngle = Mathf.Repeat(playerAngle + World.Instance.GetSkillValue(SkillName.PLAYER_VROT), Mathf.PI * 2f);
            playerX = _characterController.transform.position.x;
            playerY = _characterController.transform.position.z;
            playerZ = _characterController.transform.position.y + playerSize;// - _characterController.skinWidth;
            //todo: real calc?
            var playerSpeed = (Quaternion.Inverse(View.Instance.transform.rotation) * _characterController.velocity).z * 0.1f;
            //playerSpeed = Mathf.Abs(playerSpeed) > 0.01f ? Mathf.Sign(playerSpeed) : 0f;
            Locate(playerX, playerY, playerZ, false);
            World.Instance.UpdateSkillValue(SkillName.PLAYER_SPEED, playerSpeed);
            World.Instance.UpdateSkillValue(SkillName.PLAYER_SIN, MathUtils.Sin(playerAngle));
            World.Instance.UpdateSkillValue(SkillName.PLAYER_COS, MathUtils.Cos(playerAngle));
            World.Instance.UpdateSkillValue(SkillName.PLAYER_ANGLE, playerAngle);
            World.Instance.UpdateSkillValue(SkillName.LAST_PLAYER_X, playerX);
            World.Instance.UpdateSkillValue(SkillName.LAST_PLAYER_Y, playerY);
            World.Instance.UpdateSkillValue(SkillName.LAST_PLAYER_Z, playerZ);
        }

        private void OnControllerColliderHit(ControllerColliderHit controllerColliderHit)
        {
            if (Vector3.Dot(controllerColliderHit.normal, Vector3.up) > 0.5f || Vector3.Dot(controllerColliderHit.normal, Vector3.down) > 0.5f)
            {
                return;
            }
            if (controllerColliderHit.transform.parent != null && controllerColliderHit.transform.parent.TryGetComponent<Wall>(out var wall) && wall.AcknexObject.GetFloat(PropertyName.DIST) <= 0f)
            {
                World.Instance.TriggerEvent(PropertyName.IF_NEAR, wall.AcknexObject, AcknexObject, GetRegion());
                World.Instance.TriggerEvent(PropertyName.IF_FAR, wall.AcknexObject, AcknexObject, GetRegion());
            }
        }

        private static IAcknexObject GetTemplateCallback(NameId name)
        {
            return null;
        }

        private void Start()
        {
            var playerX = World.Instance.GetSkillValue(SkillName.PLAYER_X);
            var playerY = World.Instance.GetSkillValue(SkillName.PLAYER_Y);
            Locate(playerX, playerY);
        }

        private void OnGUI()
        {
            if (!World.Instance.DebugSkills)
            {
                return;
            }
            GUI.Window(0, new Rect(0f, 0f, 320f, Screen.height), delegate
            {
                GUILayout.BeginVertical();
                GUILayout.Label($"PLAYER_ANGLE:{World.Instance.GetSkillValue(SkillName.PLAYER_ANGLE) * Mathf.Rad2Deg}");
                GUILayout.Label($"PLAYER_TILT:{World.Instance.GetSkillValue(SkillName.PLAYER_TILT)}");
                GUILayout.Label($"PLAYER_VX:{World.Instance.GetSkillValue(SkillName.PLAYER_VX)}");
                GUILayout.Label($"PLAYER_VY:{World.Instance.GetSkillValue(SkillName.PLAYER_VY)}");
                GUILayout.Label($"PLAYER_VZ:{World.Instance.GetSkillValue(SkillName.PLAYER_VZ)}");
                GUILayout.Label($"PLAYER_X:{World.Instance.GetSkillValue(SkillName.PLAYER_X)}");
                GUILayout.Label($"PLAYER_Y:{World.Instance.GetSkillValue(SkillName.PLAYER_Y)}");
                GUILayout.Label($"PLAYER_Z:{World.Instance.GetSkillValue(SkillName.PLAYER_Z)}");
                GUILayout.Label($"PLAYER_HGT:{World.Instance.GetSkillValue(SkillName.PLAYER_HGT)}");
                GUILayout.Label($"PLAYER_SIZE:{World.Instance.GetSkillValue(SkillName.PLAYER_SIZE)}");
                GUILayout.Label($"PLAYER_VROT:{World.Instance.GetSkillValue(SkillName.PLAYER_VROT)}");
                GUILayout.Label($"PLAYER_SIN:{World.Instance.GetSkillValue(SkillName.PLAYER_SIN)}");
                GUILayout.Label($"PLAYER_COS:{World.Instance.GetSkillValue(SkillName.PLAYER_COS)}");
                GUILayout.Label($"PLAYER_SPEED:{World.Instance.GetSkillValue(SkillName.PLAYER_SPEED)}");
                GUILayout.Label($"PLAYER_LIGHT:{World.Instance.GetSkillValue(SkillName.PLAYER_LIGHT)}");
                GUILayout.Label($"CEIL_HGT:{World.Instance.GetSkillValue(SkillName.CEIL_HGT)}");
                GUILayout.Label($"FLOOR_HGT:{World.Instance.GetSkillValue(SkillName.FLOOR_HGT)}");
                GUILayout.Label($"PLAYER_DEPTH:{World.Instance.GetSkillValue(SkillName.PLAYER_DEPTH)}");
                GUILayout.Label($"MOVE_MODE:{World.Instance.GetSkillValue(SkillName.MOVE_MODE)}");
                var region = AcknexObject.GetAcknexObject(PropertyName.REGION);
                GUILayout.Label($"RGN:{region?.Name}");
                if (World.Instance.UsePalettes)
                {
                    var rect = GUILayoutUtility.GetRect(256, 256, 32, 32);
                    GUI.DrawTexture(rect, Shader.GetGlobalTexture("_AcknexPalette"), ScaleMode.StretchToFill, false);
                }
                GUILayout.EndVertical();
            }, "Debug");
        }

        private void Locate(float playerX, float playerY, float playerZ = 0, bool initial = true)
        {
            var region = GetRegion();
            var regionContainer = (Region)region.Container;
            float depth;
            if (regionContainer.Below != null && regionContainer.IsWater)
            {
                depth = regionContainer.Below.GetDepth();
            }
            else
            {
                depth = 0;
            }
            World.Instance.UpdateSkillValue(SkillName.PLAYER_DEPTH, depth);
            if (playerZ == 0f)
            {
                playerZ = World.Instance.GetSkillValue(SkillName.PLAYER_Z);
            }
            var playerHgt = World.Instance.GetSkillValue(SkillName.PLAYER_HGT);
            //var playerClimb = World.Instance.GetSkillValue(SkillName.PLAYER_CLIMB);
            var ceilBasePoint = initial ? regionContainer.GetRealCeilHeight() : playerZ;
            //var floorBasePoint = initial ? regionContainer.GetRealFloorHeight() : playerHgt;
            var playerSize = World.Instance.GetSkillValue(SkillName.PLAYER_SIZE);
            var playerWidth = World.Instance.GetSkillValue(SkillName.PLAYER_WIDTH);
            var floorHgt = regionContainer.GetRealFloorHeight() + playerHgt;
            var newRegion = Region.Locate(AcknexObject, regionContainer, playerWidth, playerX, playerY, ref floorHgt, false, ceilBasePoint);
            var ceilHgt = floorHgt;
            Region.Locate(AcknexObject, regionContainer, playerWidth, playerX, playerY, ref ceilHgt, true, floorHgt);
            if (initial || newRegion != regionContainer)
            {
                regionContainer.AcknexObject.RemoveFlag(PropertyName.HERE);
                newRegion.AcknexObject.AddFlag(PropertyName.HERE);
                World.Instance.SetSynonymObject(SynonymName.HERE, newRegion.AcknexObject);
                AcknexObject.SetAcknexObject(PropertyName.REGION, newRegion.AcknexObject);
                if (!initial)
                {
                    World.Instance.TriggerEvent(PropertyName.IF_LEAVE, regionContainer.AcknexObject, null, regionContainer.AcknexObject);
                    if (floorHgt > _waterHeight)
                    {
                        World.Instance.TriggerEvent(PropertyName.IF_ARISE, regionContainer.AcknexObject, null, regionContainer.AcknexObject);
                    }
                }
                World.Instance.TriggerEvent(PropertyName.IF_ENTER, newRegion.AcknexObject, null, newRegion.AcknexObject);
                if (newRegion.Above != null && floorHgt < newRegion.Above.GetRealFloorHeight())
                {
                    World.Instance.TriggerEvent(PropertyName.IF_DIVE, newRegion.Above.AcknexObject, null, newRegion.Above.AcknexObject);
                    _waterHeight = regionContainer.GetRealCeilHeight();
                }
            }
            //playerSize = Mathf.Min(playerSize, ceilHgt - playerZ);
            if (initial)
            {
                playerZ = floorHgt + playerSize;
            }
            //else
            //{
            //var playerHgtOffset = _characterController.transform.position.y + playerSize - playerZ;
            //playerZ += playerHgtOffset;
            //}
            playerHgt = playerZ - playerSize - floorHgt; //todo:  - _characterController.skinWidth;
            //if (Mathf.Abs(playerHgt) < 0.1f)
            //{
            //    playerHgt = 0f;
            //}
            World.Instance.UpdateSkillValue(SkillName.PLAYER_HGT, playerHgt);
            World.Instance.UpdateSkillValue(SkillName.PLAYER_X, playerX);
            World.Instance.UpdateSkillValue(SkillName.PLAYER_Y, playerY);
            World.Instance.UpdateSkillValue(SkillName.PLAYER_Z, playerZ);
            World.Instance.UpdateSkillValue(SkillName.FLOOR_HGT, floorHgt);
            World.Instance.UpdateSkillValue(SkillName.CEIL_HGT, ceilHgt);
            World.Instance.UpdateSkillValue(SkillName.PLAYER_SIZE, playerSize);
            //Shader.SetGlobalFloat("_PLAYER_Z", playerZ);
            //Shader.SetGlobalFloat("_FLOOR_HGT", floorHgt);
            //Shader.SetGlobalFloat("_CEIL_HGT", ceilHgt);
        }

        private void Awake()
        {
            Instance = this;
            AcknexObject.Container = this;
            _characterController = GetComponent<CharacterController>();
        }

        private void Update()
        {
            UpdateObject();
        }

        public void Rotate(Vector3 center, float degrees)
        {
            //todo
        }

        public void Shift(float dx, float dy)
        {
            var playerX = World.Instance.GetSkillValue(SkillName.PLAYER_X);
            var playerY = World.Instance.GetSkillValue(SkillName.PLAYER_Y);
            World.Instance.UpdateSkillValue(SkillName.PLAYER_X, playerX + dx);
            World.Instance.UpdateSkillValue(SkillName.PLAYER_Y, playerY + dy);
        }

        public void Lift(float dz)
        {
            var playerHgt = World.Instance.GetSkillValue(SkillName.PLAYER_HGT);
            var playerZ = World.Instance.GetSkillValue(SkillName.PLAYER_Z);
            World.Instance.UpdateSkillValue(SkillName.PLAYER_HGT, playerHgt + dz);
            World.Instance.UpdateSkillValue(SkillName.PLAYER_Z, playerZ + dz);
        }
    }
}