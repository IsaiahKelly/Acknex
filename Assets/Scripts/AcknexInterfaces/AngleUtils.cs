using System;
using UnityEngine;

namespace Acknex.Interfaces
{
    public static class AngleUtils
    {

        public static float PatchAngle(float angle)
        {
            return angle;// + Mathf.PI * 0.5f;
        }

        public static float ConvertUnityToAcknexAngle(float degrees)
        {
            //return Mathf.Repeat(Mathf.Rad2Deg * degrees - 90f, 360f); VRDEMO, SKAPH
            return Mathf.Repeat(Mathf.Deg2Rad * (degrees + 180f), 360f); //VARGINHA
        }
        
        public static float ConvertAcknexToUnityAngle(float radians)
        {
            //return Mathf.Repeat(Mathf.Rad2Deg * radians + 90f, 360f); VRDEMO, SKAPH
            return Mathf.Repeat(Mathf.Rad2Deg * radians - 180f, 360f); //VARGINHA
        }

        public static float Angle(Vector3 from, Vector3 to)
        {
            var angle = Vector3.SignedAngle(to, from, Vector3.up);
            if (angle < 0)
            {
                angle = 360 - angle * -1f;
            }
            return angle;
        }

        public static Vector3 To2D(Vector3 position)
        {
            return new Vector3(position.x, 0f, position.z);
        }

        public static Vector3 To3D(float x, float y)
        {
            return new Vector3(x, 0f, y);
        }
    }
}