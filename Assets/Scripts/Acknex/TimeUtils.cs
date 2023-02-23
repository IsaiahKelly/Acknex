using UnityEngine;

namespace Acknex
{
    public static class TimeUtils
    {
        public static float TicksToTime(int ticks)
        {
            var oneTick = 1.0f / 60f;
            return ticks * oneTick;
        }
    }
}
