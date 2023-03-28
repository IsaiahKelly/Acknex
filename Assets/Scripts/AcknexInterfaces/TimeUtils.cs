using UnityEngine;

namespace Acknex.Interfaces
{
    public static class TimeUtils
    {
        public const float OneTick = 1.0f / 16f;

        public static float TicksToTime(int ticks)
        {
            return ticks * OneTick;
        }

        public static float FramesToTime(int frames)
        {
            var oneFrame = 1.0f / Mathf.Max(16f, Application.targetFrameRate);
            return frames * oneFrame;
        }

        public static int TimeToTicks(float time)
        {
            return (int)Mathf.Max(1, (time / OneTick));
        }
    }
}
