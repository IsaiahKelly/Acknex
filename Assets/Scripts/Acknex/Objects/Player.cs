using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Player : MonoBehaviour, IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback);
        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        private CharacterController _characterController;


        public void UpdateObject()
        {
            var playerX = World.Instance.GetSkillValue("PLAYER_X");
            var playerY = World.Instance.GetSkillValue("PLAYER_Y");
            var playerZ = World.Instance.GetSkillValue("PLAYER_Z");

            //todo: this block should only run on carefully flagged
            var playerRegion = StickToTheGround(playerX, playerY, out playerZ);

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
            var playerRotation = Quaternion.Euler(0f, unityPlayerAngle, 0f);
            var playerMove =
                playerRotation * Vector3.up * World.Instance.GetSkillValue("PLAYER_VZ") +
                playerRotation * Vector3.forward * World.Instance.GetSkillValue("PLAYER_VY") +
                playerRotation * Vector3.right * World.Instance.GetSkillValue("PLAYER_VX");
            var moveAngle = AngleUtils.ConvertUnityToAcknexAngle(Quaternion.LookRotation(playerMove).eulerAngles.y);
            var deltaAngle = moveAngle - World.Instance.GetSkillValue("MOVE_ANGLE");
            World.Instance.UpdateSkillValue("MOVE_ANGLE", moveAngle);
            World.Instance.UpdateSkillValue("DELTA_ANGLE", deltaAngle);
            //_characterController.Move(playerMove * TimeUtils.TicksToTime(1));
            //transform.Rotate(Vector3.up, AngleUtils.ConvertAcknexToUnityAnglePerTick(World.Instance.GetSkillValue("PLAYER_VROT")), Space.Self);
            //playerAngle = AngleUtils.ConvertUnityToAcknexAngle(transform.eulerAngles.y);
            World.Instance.UpdateSkillValue("LAST_PLAYER_X", World.Instance.GetSkillValue("PLAYER_X"));
            World.Instance.UpdateSkillValue("LAST_PLAYER_Y", World.Instance.GetSkillValue("PLAYER_Y"));
            World.Instance.UpdateSkillValue("LAST_PLAYER_Z", World.Instance.GetSkillValue("PLAYER_Z"));
            World.Instance.UpdateSkillValue("PLAYER_SPEED", _characterController.velocity.magnitude);
            World.Instance.UpdateSkillValue("PLAYER_X", _characterController.transform.position.x);
            World.Instance.UpdateSkillValue("PLAYER_Y", _characterController.transform.position.z);
            World.Instance.UpdateSkillValue("PLAYER_Z", _characterController.transform.position.y);
            World.Instance.UpdateSkillValue("PLAYER_SIN", Mathf.Sin(playerAngle));
            World.Instance.UpdateSkillValue("PLAYER_COS", Mathf.Cos(playerAngle));
            //World.Instance.UpdateSkillValue("PLAYER_ANGLE", playerAngle);
            //todo: update PLAYER_HGT
            if (playerRegion != null)
            {
                World.Instance.AssignSynonymToObject("HERE", playerRegion.AcknexObject, true);
            }
        }

        private Region StickToTheGround(float playerX, float playerY, out float playerZ)
        {
            var regionIndex = AcknexObject.GetInteger("REGION");
            if (regionIndex > World.Instance.RegionsByIndex.Count - 1)
            {
                playerZ = 0f;
                return null;
            }
            var playerRegion = World.Instance.RegionsByIndex[regionIndex];
            playerZ = playerRegion.ProjectHeight(playerX, playerY, false);
            World.Instance.UpdateSkillValue("PLAYER_Z", playerZ);
            return playerRegion;
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