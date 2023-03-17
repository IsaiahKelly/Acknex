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

        public static int TimeToTicks(float time)
        {
            return (int)Mathf.Max(1, (time / OneTick));
        }
    }
}
