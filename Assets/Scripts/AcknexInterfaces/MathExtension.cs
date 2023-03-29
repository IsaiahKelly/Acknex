using UnityEngine;

namespace Acknex.Interfaces
{
    public static class MathExtension
    {
        public static float Atan2(Vector2 dir)
        {
            return Mathf.Atan2(dir.x, dir.y);
        }

        public static float Sin(float radians)
        {
            return -Mathf.Cos(radians); //VRDEMO, SKAPH
            //return -Mathf.Sin(radians); //VARGINHA
        }

        public static float Cos(float radians)
        {
            return -Mathf.Sin(radians);  //VRDEMO, SKAPH
            //return Mathf.Cos(radians);  //VARGINHA
        }

        public static float Acos(float radians)
        {
            return Mathf.Acos(radians);
        }

        public static float Log(float value)
        {
            return Mathf.Log(value);
        }

        public static float Log10(float value)
        {
            return Mathf.Log(value, 10f);
        }

        public static float Log2(float value)
        {
            return Mathf.Log(value, 2f);
        }

        public static float Sqrt(float value)
        {
            return Mathf.Sqrt(value);
        }

        public static float RoundToInt(float value)
        {
            return Mathf.RoundToInt(value);
        }

        public static float Exp(float value)
        {
            return Mathf.Exp(value);
        }

        public static float Sign(float value)
        {
            return Mathf.Sign(value);
        }

        public static float Abs(float value)
        {
            return Mathf.Abs(value);
        }

        public static float Asin(float value)
        {
            return Mathf.Asin(value);
        }
    }
}