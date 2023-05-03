using NameId = System.UInt32;
using UnityEngine;

namespace Acknex.Interfaces
{
    public static class TimeUtils
    {
        public const float OneTick = 1f / 16f;

        public static float TicksToTime(int ticks)
        {
            return ticks * OneTick;
        }

        public static float FramesToTime(int frames)
        {
            var oneFrame = 1f / Mathf.Max(16f, Application.targetFrameRate);
            return frames * oneFrame;
        }

        public static int TimeToTicks(float time)
        {
            return (int)Mathf.Max(1f, (time / OneTick));
        }
    }
}
