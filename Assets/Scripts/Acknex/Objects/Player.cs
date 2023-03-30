using System.Linq;
using Acknex.Interfaces;
using UnityEngine;
using Utils;

namespace Acknex
{
    public class Player : MonoBehaviour, IAcknexObjectContainer
    {

        private const float WaterBorderThickness = 0.65f;

        private CharacterController _characterController;

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
            return regionObject;
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
            _characterController.transform.position = new Vector3(playerX, playerZ, playerY);
            var playerWidth = World.Instance.GetSkillValue("PLAYER_WIDTH");
            _characterController.radius = playerWidth;
            var playerSize = World.Instance.GetSkillValue("PLAYER_SIZE");
            _characterController.height = playerSize;
            _characterController.stepOffset = Mathf.Min(playerSize, World.Instance.GetSkillValue("PLAYER_CLIMB"));
            var characterControllerCenter = _characterController.center;
            characterControllerCenter.y = _characterController.height * 0.5f;
            _characterController.center = characterControllerCenter;
            var playerMove = new Vector3(
                World.Instance.GetSkillValue("PLAYER_VX"),
                World.Instance.GetSkillValue("PLAYER_VZ"),
                World.Instance.GetSkillValue("PLAYER_VY"))
                             * World.Instance.GetSkillValue("TIME_CORR");
            //var moveAngle = playerMove.magnitude > 0f ? AngleUtils.ConvertUnityToAcknexAngle(Quaternion.LookRotation(playerMove).eulerAngles.y) : 0f;
            //var deltaAngle = moveAngle - World.Instance.GetSkillValue("MOVE_ANGLE");
            //World.Instance.UpdateSkillValue("MOVE_ANGLE", moveAngle);
            //World.Instance.UpdateSkillValue("DELTA_ANGLE", deltaAngle);
            var desiredPosition = _characterController.transform.position + playerMove;
            _characterController.Move(playerMove);
            var delta = playerMove - desiredPosition;
            World.Instance.UpdateSkillValue("IMPACT_VX", delta.x);
            World.Instance.UpdateSkillValue("IMPACT_VY", delta.z);
            var region = GetRegion();
            var regionContainer = (Region)region.Container;
            var forceUp = World.Instance.GetSkillValue("FORCE_UP");
            var playerHgt = World.Instance.GetSkillValue("PLAYER_HGT");
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
            //playerAngle += /*TimeUtils.TimeToTicks(Time.deltaTime) **/ World.Instance.GetSkillValue("PLAYER_VROT");
            World.Instance.UpdateSkillValue("LAST_PLAYER_X", World.Instance.GetSkillValue("PLAYER_X"));
            World.Instance.UpdateSkillValue("LAST_PLAYER_Y", World.Instance.GetSkillValue("PLAYER_Y"));
            World.Instance.UpdateSkillValue("LAST_PLAYER_Z", World.Instance.GetSkillValue("PLAYER_Z"));
            //World.Instance.UpdateSkillValue("PLAYER_SPEED", _characterController.velocity.magnitude);
            World.Instance.UpdateSkillValue("PLAYER_X", playerX);
            World.Instance.UpdateSkillValue("PLAYER_Y", playerY);
            World.Instance.UpdateSkillValue("PLAYER_Z", playerZ);
            World.Instance.UpdateSkillValue("PLAYER_SIN", MathExtension.Sin(playerAngle));
            World.Instance.UpdateSkillValue("PLAYER_COS", MathExtension.Cos(playerAngle));
            World.Instance.UpdateSkillValue("PLAYER_ANGLE", playerAngle);
            var groundZ = playerZ;
            Locate(playerX, playerY, ref groundZ, false);
            playerHgt = playerZ - groundZ;
            if (playerHgt < 0.1f)
            {
                playerHgt = 0f;
            }
            World.Instance.UpdateSkillValue("PLAYER_HGT", playerHgt);
        }

        //private void OnDrawGizmos()
        //{
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
            if (World.Instance.UsePalettes)
            {
                GUI.DrawTexture(new Rect(16f, 16f, 256f, 32f), Shader.GetGlobalTexture("_AcknexPalette"), ScaleMode.StretchToFill, false);
            }
            else
            {
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
                GUILayout.Label($"AMMO:{World.Instance.GetSkillValue("AMMO")}");
                var region = AcknexObject.GetAcknexObject("REGION");
                GUILayout.Label($"RGN:{region?.GetString("NAME")}");
                GUILayout.Label($"CEIL_HGT:{region?.GetFloat("CEIL_HGT")}");
                GUILayout.Label($"FLOOR_HGT:{region?.GetFloat("FLOOR_HGT")}");
                GUILayout.Label($"PLAYER_DEPTH:{World.Instance.GetSkillValue("PLAYER_DEPTH")}");
                GUILayout.EndVertical();
            }
        }

        private void Locate(float playerX, float playerY, ref float playerZ, bool initial = true)
        {
            var region = (Region)AcknexObject.GetAcknexObject("REGION").Container;
            region.AcknexObject.RemoveFlag("HERE");
            var newRegion = Region.Locate(AcknexObject, region, World.Instance.GetSkillValue("PLAYER_WIDTH"), playerX, playerY, ref playerZ, false, initial ? Region.MaxHeight : World.Instance.GetSkillValue("PLAYER_CLIMB"));
            if (newRegion != region)
            {
                World.Instance.TriggerEvent("IF_LEAVE", region.AcknexObject, null, region.AcknexObject);
                if (playerZ > region.GetRealCeilHeight())
                {
                    World.Instance.TriggerEvent("IF_ARISE", region.AcknexObject, null, region.AcknexObject);
                }
                region = newRegion;
                World.Instance.UpdateSkillValue("FLOOR_HGT", region.AcknexObject.GetFloat("FLOOR_HGT"));
                World.Instance.UpdateSkillValue("CEIL_HGT", region.AcknexObject.GetFloat("CEIL_HGT"));
                World.Instance.TriggerEvent("IF_ENTER", region.AcknexObject, null, region.AcknexObject);
                if (region.Above != null && playerZ < region.Above.GetRealFloorHeight())
                {
                    World.Instance.TriggerEvent("IF_DIVE", region.Above.AcknexObject, null, region.Above.AcknexObject);
                }
            }
            region.AcknexObject.AddFlag("HERE");
            World.Instance.SetSynonymObject("HERE", region.AcknexObject);
            AcknexObject.SetAcknexObject("REGION", region.AcknexObject);
            if (region.Below != null && region.AcknexObject.TryGetAcknexObject("IF_DIVE", out _))
            {
                World.Instance.UpdateSkillValue("PLAYER_DEPTH", region.Below.GetDepth());
            }
            else
            {
                World.Instance.UpdateSkillValue("PLAYER_DEPTH", 0f);
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
    }
}