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

        [field: SerializeField] public bool DebugMarked { get; set; }

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
            var playerAngle = World.Instance.GetSkillValue("PLAYER_ANGLE");
            var unityPlayerAngle = AngleUtils.ConvertAcknexToUnityAngle(playerAngle);
            _characterController.transform.rotation = Quaternion.Euler(0f, unityPlayerAngle, 0f);
            var initialPosition = _characterController.transform.position = new Vector3(playerX, playerZ, playerY);
            var playerWidth = World.Instance.GetSkillValue("PLAYER_WIDTH");
            _characterController.radius = playerWidth;
            _characterController.skinWidth = playerWidth * 0.1f;
            var playerSize = World.Instance.GetSkillValue("PLAYER_SIZE");
            //if (Physics.SphereCast(_characterController.transform.position, playerWidth, Vector3.up, out var raycastHit, Mathf.Infinity, World.Instance.WallsAndRegionsLayer.Mask))
            //{
            //    playerSize = Mathf.Min(playerSize, raycastHit.distance);
            //    World.Instance.UpdateSkillValue("PLAYER_SIZE", playerSize);
            //}
            _characterController.height = playerSize;
            var playerMove = new Vector3(World.Instance.GetSkillValue("PLAYER_VX"), World.Instance.GetSkillValue("PLAYER_VZ"), World.Instance.GetSkillValue("PLAYER_VY")) * World.Instance.GetSkillValue("TIME_CORR");
            var desiredPosition = _characterController.transform.position + playerMove;
            var stepSize = Mathf.Min(playerSize, World.Instance.GetSkillValue("PLAYER_CLIMB"));
            var checkPosition = new Vector3(desiredPosition.x, desiredPosition.y + playerSize - playerWidth, desiredPosition.z);
            if (Physics.SphereCast(checkPosition, playerWidth, Vector3.up, out var raycastHit, Mathf.Infinity, World.Instance.WallsAndRegionsLayer.Mask))
            {
                stepSize = Mathf.Min(stepSize, raycastHit.distance);
            }
            _characterController.stepOffset = stepSize;
            var characterControllerCenter = _characterController.center;
            characterControllerCenter.y = _characterController.height * 0.5f;
            _characterController.center = characterControllerCenter;
            //var midPoint = initialPosition + (playerMove * 0.5f);
            //if (playerMove.z != 0f && Physics.CheckCapsule(midPoint + new Vector3(0f, _characterController.radius + 0.1f, 0f), midPoint + new Vector3(0f, _characterController.height - _characterController.radius + 0.1f, 0f), _characterController.radius, World.Instance.WallsAndRegionsLayer.Mask))
            //{
            //    Debug.Log("blocked");
            //    playerMove = Vector3.zero;
            //}
            _characterController.Move(playerMove);
            var delta = _characterController.transform.position - initialPosition;
            var deltaXZ = new Vector3(delta.x, 0f, delta.z);
            var playerHgt = World.Instance.GetSkillValue("PLAYER_HGT");
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
            var region = GetRegion();
            var regionContainer = (Region)region.Container;
            var forceUp = World.Instance.GetSkillValue("FORCE_UP");
            //var actualSize = Mathf.Max(playerSize, playerWidth);
            ////Debug.DrawLine(new Vector3(0f, regionContainer.GetRealCeilHeight(), 0f), new Vector3(playerX, regionContainer.GetRealCeilHeight() - actualSize - WaterBorderThickness, playerY), Color.cyan);
            ////Debug.DrawLine(new Vector3(playerX, regionContainer.GetRealCeilHeight(), playerY), new Vector3(playerX, playerZ, playerY), Color.magenta);
            //if (
            //    forceUp < 0f &&
            //    playerZ < regionContainer.GetRealFloorHeight() + WaterBorderThickness && 
            //    region.TryGetAcknexObject("IF_DIVE", out _)
            //) 
            //{
            //    transform.Translate(0f, -actualSize - WaterBorderThickness, 0f);
            //} 
            //else if (
            //    forceUp > 0f &&
            //    playerZ > regionContainer.GetRealCeilHeight() - actualSize - WaterBorderThickness &&
            //    region.TryGetAcknexObject("IF_ARISE", out _)
            //)
            //{
            //    transform.Translate(0f, actualSize + WaterBorderThickness, 0f);
            //}
            playerX = _characterController.transform.position.x;
            playerY = _characterController.transform.position.z;
            playerZ = _characterController.transform.position.y;
            playerAngle = Mathf.Repeat(playerAngle + World.Instance.GetSkillValue("PLAYER_VROT"), Mathf.PI * 2f);
            World.Instance.UpdateSkillValue("LAST_PLAYER_X", World.Instance.GetSkillValue("PLAYER_X"));
            World.Instance.UpdateSkillValue("LAST_PLAYER_Y", World.Instance.GetSkillValue("PLAYER_Y"));
            World.Instance.UpdateSkillValue("LAST_PLAYER_Z", World.Instance.GetSkillValue("PLAYER_Z"));

            //todo
            var playerSpeed = (Quaternion.Inverse(View.Instance.transform.rotation) * _characterController.velocity).z * 0.1f;
            //playerSpeed = Mathf.Abs(playerSpeed) > 0.01f ? Mathf.Sign(playerSpeed) : 0f;

            World.Instance.UpdateSkillValue("PLAYER_SPEED", playerSpeed);
            World.Instance.UpdateSkillValue("PLAYER_X", playerX);
            World.Instance.UpdateSkillValue("PLAYER_Y", playerY);
            World.Instance.UpdateSkillValue("PLAYER_Z", playerZ);
            World.Instance.UpdateSkillValue("PLAYER_SIN", MathUtils.Sin(playerAngle));
            World.Instance.UpdateSkillValue("PLAYER_COS", MathUtils.Cos(playerAngle));
            World.Instance.UpdateSkillValue("PLAYER_ANGLE", playerAngle);
            var groundZ = playerZ;
            Locate(playerX, playerY, ref groundZ, false);
            playerHgt = playerZ - groundZ - _characterController.skinWidth;
            if (playerHgt < 0.1f)
            {
                playerHgt = 0f;
            }
            World.Instance.UpdateSkillValue("PLAYER_HGT", playerHgt);
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

        //private void OnDrawGizmos()
        //{
        //    if (_characterController == null)
        //    {
        //        return;
        //    }
        //    var size = new Vector3(_characterController.radius * 2f, _characterController.stepOffset, _characterController.radius * 2f);
        //    var center = new Vector3(0f, _characterController.stepOffset * 0.5f, 0f);
        //    DebugExtension.DebugLocalCube(transform, size, Color.magenta, center);
        //}

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        private void Start()
        {
            var playerX = World.Instance.GetSkillValue("PLAYER_X");
            var playerY = World.Instance.GetSkillValue("PLAYER_Y");
            var playerZ = World.Instance.GetSkillValue("PLAYER_Z");
            //todo: this block should only run on carefully flagged
            Locate(playerX, playerY, ref playerZ);
            World.Instance.UpdateSkillValue("PLAYER_X", playerX);
            World.Instance.UpdateSkillValue("PLAYER_Y", playerY);
            World.Instance.UpdateSkillValue("PLAYER_Z", playerZ);
        }

        private void OnGUI()
        {
            if (!World.Instance.DebugSkills)
            {
                return;
            }
            GUILayout.BeginVertical();
            GUILayout.Label($"PLAYER_ANGLE:{World.Instance.GetSkillValue("PLAYER_ANGLE") * Mathf.Rad2Deg}");
            GUILayout.Label($"PLAYER_TILT:{World.Instance.GetSkillValue("PLAYER_TILT")}");
            GUILayout.Label($"PLAYER_VX:{World.Instance.GetSkillValue("PLAYER_VX")}");
            GUILayout.Label($"PLAYER_VY:{World.Instance.GetSkillValue("PLAYER_VY")}");
            GUILayout.Label($"PLAYER_VZ:{World.Instance.GetSkillValue("PLAYER_VZ")}");
            GUILayout.Label($"PLAYER_VROT:{World.Instance.GetSkillValue("PLAYER_VROT")}");
            GUILayout.Label($"PLAYER_SIN:{World.Instance.GetSkillValue("PLAYER_SIN")}");
            GUILayout.Label($"PLAYER_COS:{World.Instance.GetSkillValue("PLAYER_COS")}");
            GUILayout.Label($"PLAYER_HGT:{World.Instance.GetSkillValue("PLAYER_HGT")}");
            GUILayout.Label($"PLAYER_HEALTH:{World.Instance.GetSkillValue("PLAYER_HEALTH")}");
            GUILayout.Label($"PLAYER_SPEED:{World.Instance.GetSkillValue("PLAYER_SPEED")}");
            GUILayout.Label($"AMMO:{World.Instance.GetSkillValue("AMMO")}");
            var region = AcknexObject.GetAcknexObject("REGION");
            GUILayout.Label($"RGN:{region?.GetString("NAME")}");
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
        }

        private void Locate(float playerX, float playerY, ref float playerZ, bool initial = true)
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
            var ceilBasePoint = initial ? regionContainer.GetRealCeilHeight() : playerZ + World.Instance.GetSkillValue("PLAYER_CLIMB");
            var floorBasePoint = initial ? regionContainer.GetRealFloorHeight() : playerZ;
            var playerWidth = World.Instance.GetSkillValue("PLAYER_WIDTH");
            var newRegion = Region.Locate(AcknexObject, regionContainer, playerWidth, playerX, playerY, ref playerZ, false, ceilBasePoint);
            var ceilZ = playerZ;
            Region.Locate(AcknexObject, regionContainer, playerWidth, playerX, playerY, ref ceilZ, true, floorBasePoint);
            World.Instance.UpdateSkillValue("FLOOR_HGT", playerZ);
            World.Instance.UpdateSkillValue("CEIL_HGT", ceilZ);
            if (initial || newRegion != regionContainer)
            {
                regionContainer.AcknexObject.RemoveFlag("HERE");
                newRegion.AcknexObject.AddFlag("HERE");
                World.Instance.SetSynonymObject("HERE", newRegion.AcknexObject);
                AcknexObject.SetAcknexObject("REGION", newRegion.AcknexObject);
                if (!initial)
                {
                    World.Instance.TriggerEvent("IF_LEAVE", regionContainer.AcknexObject, null, regionContainer.AcknexObject);
                    if (playerZ > regionContainer.GetRealCeilHeight())
                    {
                        World.Instance.TriggerEvent("IF_ARISE", regionContainer.AcknexObject, null, regionContainer.AcknexObject);
                    }
                }
                World.Instance.TriggerEvent("IF_ENTER", newRegion.AcknexObject, null, newRegion.AcknexObject);
                if (newRegion.Above != null && playerZ < newRegion.Above.GetRealFloorHeight())
                {
                    World.Instance.TriggerEvent("IF_DIVE", newRegion.Above.AcknexObject, null, newRegion.Above.AcknexObject);
                }
            }
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
           
        }
    }
}