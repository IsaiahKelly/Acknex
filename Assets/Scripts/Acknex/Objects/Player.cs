using System;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Player : MonoBehaviour, IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Player);
        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        private CharacterController _characterController;

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
        public void UpdateObject()
        {
            var playerX = World.Instance.GetSkillValue("PLAYER_X");
            var playerY = World.Instance.GetSkillValue("PLAYER_Y");
            var playerZ = World.Instance.GetSkillValue("PLAYER_Z");
            var playerAngle = World.Instance.GetSkillValue("PLAYER_ANGLE");
            var unityPlayerAngle = AngleUtils.ConvertAcknexToUnityAngle(playerAngle);
            _characterController.transform.rotation = Quaternion.Euler(0f, unityPlayerAngle, 0f);
            _characterController.transform.position = new Vector3(playerX, playerZ, playerY);
            _characterController.radius = World.Instance.GetSkillValue("PLAYER_WIDTH");
            _characterController.stepOffset = World.Instance.GetSkillValue("PLAYER_CLIMB");
            var playerSize = World.Instance.GetSkillValue("PLAYER_SIZE");
            _characterController.height = playerSize;
            var characterControllerCenter = _characterController.center;
            characterControllerCenter.y = _characterController.height * 0.5f;
            _characterController.center = characterControllerCenter;
            var playerMove = new Vector3(World.Instance.GetSkillValue("PLAYER_VX"), World.Instance.GetSkillValue("PLAYER_VZ"), World.Instance.GetSkillValue("PLAYER_VY")) * World.Instance.GetSkillValue("TIME_CORR");
            //var moveAngle = playerMove.magnitude > 0f ? AngleUtils.ConvertUnityToAcknexAngle(Quaternion.LookRotation(playerMove).eulerAngles.y) : 0f;
            //var deltaAngle = moveAngle - World.Instance.GetSkillValue("MOVE_ANGLE");
            //World.Instance.UpdateSkillValue("MOVE_ANGLE", moveAngle);
            //World.Instance.UpdateSkillValue("DELTA_ANGLE", deltaAngle);
            _characterController.Move(playerMove);
            if (World.Instance.GetSkillValue("FORCE_UP") < 0f && World.Instance.GetSkillValue("PLAYER_HGT") < 0.1f && GetRegion().TryGetAcknexObject("IF_DIVE", out _))
            {
                transform.Translate(0f, -playerSize, 0f);
            }
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
            World.Instance.UpdateSkillValue("PLAYER_SIN", AngleUtils.Sin(playerAngle));
            World.Instance.UpdateSkillValue("PLAYER_COS", AngleUtils.Cos(playerAngle));
            World.Instance.UpdateSkillValue("PLAYER_ANGLE", playerAngle);

            var groundZ = playerZ;
            Locate(playerX, playerY, ref groundZ, false);
            var playerHgt = playerZ - groundZ;
            if (playerHgt < 0.1f)
            {
                playerHgt = 0f;
            }
            World.Instance.UpdateSkillValue("PLAYER_HGT", playerHgt);
        }

        private void OnGUI()
        {
            GUILayout.BeginVertical();
            GUILayout.Label($"PLAYER_ANGLE:{World.Instance.GetSkillValue("PLAYER_ANGLE")}");
            GUILayout.Label($"PLAYER_TILT:{World.Instance.GetSkillValue("PLAYER_TILT")}");
            GUILayout.Label($"PLAYER_VX:{World.Instance.GetSkillValue("PLAYER_VX")}");
            GUILayout.Label($"PLAYER_VY:{World.Instance.GetSkillValue("PLAYER_VY")}");
            GUILayout.Label($"PLAYER_VZ:{World.Instance.GetSkillValue("PLAYER_VZ")}");
            GUILayout.Label($"PLAYER_VROT:{World.Instance.GetSkillValue("PLAYER_VROT")}");
            GUILayout.Label($"PLAYER_SIN:{World.Instance.GetSkillValue("PLAYER_SIN")}");
            GUILayout.Label($"PLAYER_COS:{World.Instance.GetSkillValue("PLAYER_COS")}");
            GUILayout.Label($"PLAYER_HGT:{World.Instance.GetSkillValue("PLAYER_HGT")}");
            GUILayout.Label($"PLAYER_HEALTH:{World.Instance.GetSkillValue("PLAYER_HEALTH")}");
            var region = Player.Instance.AcknexObject.GetAcknexObject("REGION");
            GUILayout.Label($"RGN:{region?.GetString("NAME")}");
            GUILayout.EndVertical();
        }

        //todo: IF_ARISE only happens when leaving upwards
        private void Locate(float playerX, float playerY, ref float playerZ, bool initial = true)
        {
            var region = (Region)AcknexObject.GetAcknexObject("REGION").Container;
            var newRegion = Region.Locate(AcknexObject, region, World.Instance.GetSkillValue("PLAYER_WIDTH"), playerX, playerY, ref playerZ, false, initial);
            if (newRegion != region)
            {
                World.Instance.TriggerEvent("IF_LEAVE", region.AcknexObject, null, region.AcknexObject);
                World.Instance.TriggerEvent("IF_ARISE", region.AcknexObject, null, region.AcknexObject);
                region = newRegion;
                World.Instance.UpdateSkillValue("FLOOR_HGT", region.AcknexObject.GetFloat("FLOOR_HGT"));
                World.Instance.UpdateSkillValue("CEIL_HGT", region.AcknexObject.GetFloat("CEIL_HGT"));
                World.Instance.TriggerEvent("IF_ENTER", region.AcknexObject, null, region.AcknexObject);
                if (region.Above != null)
                {
                    World.Instance.TriggerEvent("IF_DIVE", region.Above.AcknexObject, null, region.Above.AcknexObject);
                }
            }
            World.Instance.SetSynonymObject("HERE", region.AcknexObject);
            AcknexObject.SetAcknexObject("REGION", region.AcknexObject);
        }

        public IAcknexObject GetRegion()
        {
            var regionObject = AcknexObject.GetAcknexObject("REGION");
            return regionObject;
        }

        public void Enable()
        {

        }

        public void Disable()
        {

        }

        public void SetupTemplate()
        {

        }

        public void SetupInstance()
        {

        }

        public Vector3 GetCenter()
        {
            return transform.position + new Vector3(0f, World.Instance.GetSkillValue("PLAYER_SIZE") * 0.5f, 0f);
        }

        public static Player Instance { get; private set; }

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