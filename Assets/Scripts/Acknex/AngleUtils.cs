using UnityEngine;

namespace Acknex
{
    public static class AngleUtils
    {
        public static float ConvertUnityToAcknexAngle(float unityAngle)
        {
            return Mathf.Repeat(Mathf.Deg2Rad * (unityAngle + 180f), 360f);
        }


        public static float ConvertAcknexToUnityAngle(float acknexAngle)
        {
            return Mathf.Repeat(Mathf.Rad2Deg * acknexAngle - 180f, 360f);
        }

        public static float ConvertAcknexToUnityAnglePerTick(float acknexAngle)
        {
            return Mathf.Repeat(Mathf.Rad2Deg * (acknexAngle * TimeUtils.TimeToTicks(Time.deltaTime)) - 180f, 360f);
        }

        //public static Vector3 ConvertVector(Vector3 vector)
        //{
        //    return new Vector3(vector.x, vector.z, vector.y);
        //}
    }
}