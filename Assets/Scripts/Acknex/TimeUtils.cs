namespace Acknex
{
    public static class TimeUtils
    {
        private const float OneTick = 1.0f / 60f;

        public static float TicksToTime(int ticks)
        {
            return ticks * OneTick;
        }

        public static int TimeToTicks(float time)
        {
            return (int)(time / OneTick);
        }
    }
}
