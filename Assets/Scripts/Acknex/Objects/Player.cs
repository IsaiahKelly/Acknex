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
            StickToTheGround(playerX, playerY, ref playerZ);
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
            characterControllerCenter.y = playerSize * 0.5f;
            _characterController.center = characterControllerCenter;
            var playerMove = new Vector3(World.Instance.GetSkillValue("PLAYER_VX"), World.Instance.GetSkillValue("PLAYER_VZ"), World.Instance.GetSkillValue("PLAYER_VY"));
            //var moveAngle = playerMove.magnitude > 0f ? AngleUtils.ConvertUnityToAcknexAngle(Quaternion.LookRotation(playerMove).eulerAngles.y) : 0f;
            //var deltaAngle = moveAngle - World.Instance.GetSkillValue("MOVE_ANGLE");
            //World.Instance.UpdateSkillValue("MOVE_ANGLE", moveAngle);
            //World.Instance.UpdateSkillValue("DELTA_ANGLE", deltaAngle);
            _characterController.Move(playerMove/* * TimeUtils.TicksToTime(1)*/);
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
            StickToTheGround(playerX, playerY, ref playerZ);
            World.Instance.UpdateSkillValue("PLAYER_HGT", playerZ - GetRegion().GetFloat("FLOOR_HGT"));
        }

        private void OnGUI()
        {
            GUILayout.BeginVertical();
            GUILayout.Label($"PLAYER_ANGLE:{World.Instance.GetSkillValue("PLAYER_ANGLE")}");
            GUILayout.Label($"PLAYER_VX:{World.Instance.GetSkillValue("PLAYER_VX")}");
            GUILayout.Label($"PLAYER_VY:{World.Instance.GetSkillValue("PLAYER_VY")}");
            GUILayout.Label($"PLAYER_VZ:{World.Instance.GetSkillValue("PLAYER_VZ")}");
            GUILayout.Label($"PLAYER_VROT:{World.Instance.GetSkillValue("PLAYER_VROT")}");
            GUILayout.Label($"PLAYER_SIN:{World.Instance.GetSkillValue("PLAYER_SIN")}");
            GUILayout.Label($"PLAYER_COS:{World.Instance.GetSkillValue("PLAYER_COS")}");
            GUILayout.Label($"PLAYER_HGT:{World.Instance.GetSkillValue("PLAYER_HGT")}");
            GUILayout.EndVertical();
        }

        private void StickToTheGround(float playerX, float playerY, ref float playerZ)
        {
            var playerRegion = AcknexObject.GetInteger("REGION");
            Region.Locate(AcknexObject, ref playerRegion, playerX, playerY, ref playerZ, false);
            var playerRegionObject = GetRegion(playerRegion);
            if (playerRegionObject != null)
            {
                World.Instance.SetSynonymObject("HERE", playerRegionObject);
                World.Instance.UpdateSkillValue("FLOOR_HGT", playerRegionObject.GetFloat("FLOOR_HGT"));
                World.Instance.UpdateSkillValue("CEIL_HGT", playerRegionObject.GetFloat("CEIL_HGT"));
            }
            AcknexObject.SetInteger("REGION", playerRegion);
        }

        public IAcknexObject GetRegion(int? actualPlayerRegion = null)
        {
            var playerRegion = actualPlayerRegion ?? AcknexObject.GetInteger("REGION");
            if (playerRegion >= World.Instance.RegionsByIndex.Count)
            {
                return null;
            }
            var playerRegionObject = World.Instance.RegionsByIndex[playerRegion].AcknexObject;
            return playerRegionObject;
        }

        public void Enable()
        {

        }

        public void Disable()
        {

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