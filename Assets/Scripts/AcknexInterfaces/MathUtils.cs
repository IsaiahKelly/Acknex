﻿using NameId = System.UInt32;
using UnityEngine;

namespace Acknex.Interfaces
{
    public static class MathUtils
    {
        private const float PrecisionTreshold = 0.05f;

        public static bool CheckEquals(float a, float b)
        {
            return Mathf.Abs(a - b) <= PrecisionTreshold;
        }

        public static bool CheckLower(float a, float b)
        {
            return a < b;
            //return a < b + PrecisionTreshold;
        }

        public static bool CheckGreater(float a, float b)
        {
            return a > b;
            //return a + PrecisionTreshold > b;
        }

        public static float Atan2(Vector2 dir)
        {
            return (Mathf.Atan2(dir.y, dir.x) - Mathf.PI * 0.5f) * -1f;
        }

        public static float Sin(float radians)
        {
            return Mathf.Sin(radians * -1f);
        }

        public static float Cos(float radians)
        {
            return Mathf.Cos(radians * -1f);
        }

        public static float Acos(float radians)
        {
            return Mathf.Acos(radians * -1f);
        }

        public static float Asin(float radians)
        {
            return Mathf.Asin(radians * -1f);
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
    }
}