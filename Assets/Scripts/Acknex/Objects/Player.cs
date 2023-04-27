using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Player : MonoBehaviour, IAcknexObjectContainer
    {
        private CharacterController _characterController;
        private bool _soundTriggered;
        private float _walkTime;

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
            return transform.position + new Vector3(0f, World.Instance.GetSkillValue("PLAYER_SIZE") * 0.5f, 0f);
        }

        public IAcknexObject GetRegion()
        {
            var regionObject = AcknexObject.GetAcknexObject("REGION");
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

        public void UpdateObject()
        {
            var playerX = World.Instance.GetSkillValue("PLAYER_X");
            var playerY = World.Instance.GetSkillValue("PLAYER_Y");
            var playerZ = World.Instance.GetSkillValue("PLAYER_Z");
            World.Instance.UpdateSkillValue("LAST_PLAYER_X", playerX);
            World.Instance.UpdateSkillValue("LAST_PLAYER_Y", playerY);
            World.Instance.UpdateSkillValue("LAST_PLAYER_Z", playerZ);
            var playerHgt = World.Instance.GetSkillValue("PLAYER_HGT");
            var playerAngle = World.Instance.GetSkillValue("PLAYER_ANGLE");
            var floorHgt = World.Instance.GetSkillValue("FLOOR_HGT");
            var playerFootZ = floorHgt + playerHgt;
            var unityPlayerAngle = AngleUtils.ConvertAcknexToUnityAngle(playerAngle);
            _characterController.transform.rotation = Quaternion.Euler(0f, unityPlayerAngle, 0f);
            var initialPosition = _characterController.transform.position = new Vector3(playerX, playerFootZ, playerY);
            var playerWidth = World.Instance.GetSkillValue("PLAYER_WIDTH");
            _characterController.radius = playerWidth;
            //todo: _characterController.skinWidth = playerWidth * 0.1f;
            var playerSize = World.Instance.GetSkillValue("PLAYER_SIZE");
            _characterController.height = playerSize;
            var playerMove = new Vector3(World.Instance.GetSkillValue("PLAYER_VX"), 0f, World.Instance.GetSkillValue("PLAYER_VY")) * World.Instance.GetSkillValue("TIME_CORR");
            playerMove.y = World.Instance.GetSkillValue("PLAYER_VZ");
            var desiredPosition = initialPosition + playerMove;
            var stepSize = Mathf.Min(playerSize, World.Instance.GetSkillValue("PLAYER_CLIMB"));
            var checkPosition = new Vector3(desiredPosition.x, desiredPosition.y + playerSize - playerWidth, desiredPosition.z);
            if (Physics.SphereCast(checkPosition, playerWidth, Vector3.up, out var raycastHit, Mathf.Infinity, World.Instance.RegionsLayer.Mask))
            {
                stepSize = Mathf.Min(stepSize, raycastHit.distance);
            }
            _characterController.stepOffset = stepSize;
            var characterControllerCenter = _characterController.center;
            characterControllerCenter.y = _characterController.height * 0.5f;
            _characterController.center = characterControllerCenter;
            _characterController.Move(playerMove);
            var delta = _characterController.transform.position - initialPosition;
            var deltaXZ = new Vector3(delta.x, 0f, delta.z);
            if (playerHgt <= 0.1f && deltaXZ.magnitude > Mathf.Epsilon)
            {
                var period = deltaXZ.magnitude / World.Instance.GetSkillValue("WALK_PERIOD") * 2f;
                _walkTime += period;
                var walk = Mathf.Sin(_walkTime * Mathf.PI);
                World.Instance.UpdateSkillValue("WALK", walk);
                if (!_soundTriggered && walk >= 0.5f)
                {
                    ((Region)GetRegion().Container).PlayRegionSound();
                    _soundTriggered = true;
                }
                if (_soundTriggered && walk < 0.5f)
                {
                    _soundTriggered = false;
                }
            }
            var waveTime = Time.time / TimeUtils.TicksToTime((int)World.Instance.GetSkillValue("WAVE_PERIOD")) * 2f;
            var wave = Mathf.Sin(waveTime * Mathf.PI);
            World.Instance.UpdateSkillValue("WAVE", wave);
            World.Instance.UpdateSkillValue("IMPACT_VX", deltaXZ.x);
            World.Instance.UpdateSkillValue("IMPACT_VY", deltaXZ.z);
            playerAngle = Mathf.Repeat(playerAngle + World.Instance.GetSkillValue("PLAYER_VROT"), Mathf.PI * 2f);
            playerX = _characterController.transform.position.x;
            playerY = _characterController.transform.position.z;
            //playerZ = _characterController.transform.position.y + playerSize;// - _characterController.skinWidth;
            //todo: real calc?
            var playerSpeed = (Quaternion.Inverse(View.Instance.transform.rotation) * _characterController.velocity).z * 0.1f;
            //playerSpeed = Mathf.Abs(playerSpeed) > 0.01f ? Mathf.Sign(playerSpeed) : 0f;
            playerFootZ = _characterController.transform.position.y;
            Locate(playerX, playerY, playerFootZ, playerSize, false);
            World.Instance.UpdateSkillValue("PLAYER_SPEED", playerSpeed);
            World.Instance.UpdateSkillValue("PLAYER_SIN", MathUtils.Sin(playerAngle));
            World.Instance.UpdateSkillValue("PLAYER_COS", MathUtils.Cos(playerAngle));
            World.Instance.UpdateSkillValue("PLAYER_ANGLE", playerAngle);
        }

        private void OnControllerColliderHit(ControllerColliderHit controllerColliderHit)
        {
            if (Vector3.Dot(controllerColliderHit.normal, Vector3.up) > 0.5f || Vector3.Dot(controllerColliderHit.normal, Vector3.down) > 0.5f)
            {
                return;
            }
            if (controllerColliderHit.transform.parent != null && controllerColliderHit.transform.parent.TryGetComponent<Wall>(out var wall) && wall.AcknexObject.GetFloat("DIST") <= 0f)
            {
                World.Instance.TriggerEvent("IF_NEAR", wall.AcknexObject, AcknexObject, GetRegion());
                World.Instance.TriggerEvent("IF_FAR", wall.AcknexObject, AcknexObject, GetRegion());
            }
        }

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        private void Start()
        {
            var playerX = World.Instance.GetSkillValue("PLAYER_X");
            var playerY = World.Instance.GetSkillValue("PLAYER_Y");
            var playerSize = World.Instance.GetSkillValue("PLAYER_SIZE");
            Locate(playerX, playerY, 0f, playerSize);
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
                GUILayout.Label($"PLAYER_ANGLE:{World.Instance.GetSkillValue("PLAYER_ANGLE") * Mathf.Rad2Deg}");
                GUILayout.Label($"PLAYER_TILT:{World.Instance.GetSkillValue("PLAYER_TILT")}");
                GUILayout.Label($"PLAYER_VX:{World.Instance.GetSkillValue("PLAYER_VX")}");
                GUILayout.Label($"PLAYER_VY:{World.Instance.GetSkillValue("PLAYER_VY")}");
                GUILayout.Label($"PLAYER_VZ:{World.Instance.GetSkillValue("PLAYER_VZ")}");
                GUILayout.Label($"PLAYER_X:{World.Instance.GetSkillValue("PLAYER_X")}");
                GUILayout.Label($"PLAYER_Y:{World.Instance.GetSkillValue("PLAYER_Y")}");
                GUILayout.Label($"PLAYER_Z:{World.Instance.GetSkillValue("PLAYER_Z")}");
                GUILayout.Label($"PLAYER_HGT:{World.Instance.GetSkillValue("PLAYER_HGT")}");
                GUILayout.Label($"PLAYER_SIZE:{World.Instance.GetSkillValue("PLAYER_SIZE")}");
                GUILayout.Label($"PLAYER_VROT:{World.Instance.GetSkillValue("PLAYER_VROT")}");
                GUILayout.Label($"PLAYER_SIN:{World.Instance.GetSkillValue("PLAYER_SIN")}");
                GUILayout.Label($"PLAYER_COS:{World.Instance.GetSkillValue("PLAYER_COS")}");
                GUILayout.Label($"PLAYER_HEALTH:{World.Instance.GetSkillValue("PLAYER_HEALTH")}");
                GUILayout.Label($"PLAYER_SPEED:{World.Instance.GetSkillValue("PLAYER_SPEED")}");
                GUILayout.Label($"PLAYER_LIGHT:{World.Instance.GetSkillValue("PLAYER_LIGHT")}");
                GUILayout.Label($"AMMO:{World.Instance.GetSkillValue("AMMO")}");
                var region = AcknexObject.GetAcknexObject("REGION");
                GUILayout.Label($"RGN:{region?.Name}");
                GUILayout.Label($"CEIL_HGT:{World.Instance.GetSkillValue("CEIL_HGT")}");
                GUILayout.Label($"FLOOR_HGT:{World.Instance.GetSkillValue("FLOOR_HGT")}");
                GUILayout.Label($"PLAYER_DEPTH:{World.Instance.GetSkillValue("PLAYER_DEPTH")}");
                GUILayout.Label($"MOVE_MODE:{World.Instance.GetSkillValue("MOVE_MODE")}");
                if (World.Instance.UsePalettes)
                {
                    var rect = GUILayoutUtility.GetRect(256, 256, 32, 32);
                    GUI.DrawTexture(rect, Shader.GetGlobalTexture("_AcknexPalette"), ScaleMode.StretchToFill, false);
                }
                GUILayout.EndVertical();
            }, "Debug");
        }

        private void Locate(float playerX, float playerY, float playerFootZ, float playerSize, bool initial = true)
        {
            var region = GetRegion();
            var regionContainer = (Region)region.Container;
            if (regionContainer.Below != null && region.TryGetAcknexObject("IF_DIVE", out _))
            {
                World.Instance.UpdateSkillValue("PLAYER_DEPTH", regionContainer.Below.GetDepth());
            }
            else
            {
                World.Instance.UpdateSkillValue("PLAYER_DEPTH", 0f);
            }
            var ceilBasePoint = initial ? regionContainer.GetRealCeilHeight() : playerFootZ + World.Instance.GetSkillValue("PLAYER_CLIMB");
            var floorBasePoint = initial ? regionContainer.GetRealFloorHeight() : playerFootZ;
            var playerWidth = World.Instance.GetSkillValue("PLAYER_WIDTH");
            var floorHgt = playerFootZ;
            var newRegion = Region.Locate(AcknexObject, regionContainer, 0f, playerX, playerY, ref floorHgt, false, ceilBasePoint);
            var ceilHgt = floorHgt;
            Region.Locate(AcknexObject, regionContainer, 0f, playerX, playerY, ref ceilHgt, true, floorBasePoint);
            World.Instance.UpdateSkillValue("FLOOR_HGT", floorHgt);
            World.Instance.UpdateSkillValue("CEIL_HGT", ceilHgt);
            if (initial || newRegion != regionContainer)
            {
                regionContainer.AcknexObject.RemoveFlag("HERE");
                newRegion.AcknexObject.AddFlag("HERE");
                World.Instance.SetSynonymObject("HERE", newRegion.AcknexObject);
                AcknexObject.SetAcknexObject("REGION", newRegion.AcknexObject);
                if (!initial)
                {
                    World.Instance.TriggerEvent("IF_LEAVE", regionContainer.AcknexObject, null, regionContainer.AcknexObject);
                    if (floorHgt > regionContainer.GetRealCeilHeight())
                    {
                        World.Instance.TriggerEvent("IF_ARISE", regionContainer.AcknexObject, null, regionContainer.AcknexObject);
                    }
                }
                World.Instance.TriggerEvent("IF_ENTER", newRegion.AcknexObject, null, newRegion.AcknexObject);
                if (newRegion.Above != null && floorHgt < newRegion.Above.GetRealFloorHeight())
                {
                    World.Instance.TriggerEvent("IF_DIVE", newRegion.Above.AcknexObject, null, newRegion.Above.AcknexObject);
                }
            }
            var playerHgt = playerFootZ - floorHgt; //todo:  - _characterController.skinWidth;
            if (playerHgt < 0.1f)
            {
                playerHgt = 0f;
            }
            World.Instance.UpdateSkillValue("PLAYER_HGT", playerHgt);
            World.Instance.UpdateSkillValue("PLAYER_X", playerX);
            World.Instance.UpdateSkillValue("PLAYER_Y", playerY);
            World.Instance.UpdateSkillValue("PLAYER_Z", floorHgt + playerSize);
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
            var playerX = World.Instance.GetSkillValue("PLAYER_X");
            var playerY = World.Instance.GetSkillValue("PLAYER_Y");
            World.Instance.UpdateSkillValue("PLAYER_X", playerX + dx);
            World.Instance.UpdateSkillValue("PLAYER_Y", playerY + dy);
        }

        public void Lift(float dz)
        {
            var playerHgt = World.Instance.GetSkillValue("PLAYER_HGT");
            var playerZ = World.Instance.GetSkillValue("PLAYER_Z");
            World.Instance.UpdateSkillValue("PLAYER_HGT", playerHgt + dz);
            World.Instance.UpdateSkillValue("PLAYER_Z", playerZ + dz);
        }
    }
}