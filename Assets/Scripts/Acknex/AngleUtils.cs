using UnityEngine;

namespace Acknex
{
    public static class AngleUtils
    {
        public static float Angle(Vector3 from, Vector3 to)
        {
            var angle = Vector3.SignedAngle(to, from, Vector3.up);
            if (angle < 0)
            {
                angle = 360 - angle * -1f;
            }
            return angle;
        }

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

        public static Vector3 To2D(Vector3 position)
        {
            return new Vector3(position.x, 0f, position.z);
        }

        public static Vector3 To3D(float x, float y)
        {
            return new Vector3(x, 0f, y);
        }

        //public static Vector3 ConvertVector(Vector3 vector)
        //{
        //    return new Vector3(vector.x, vector.z, vector.y);
        //}
    }
}