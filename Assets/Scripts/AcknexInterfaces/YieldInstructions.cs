using Acknex.Interfaces;
using UnityEngine;

namespace Acknex.Interfaces
{
    public class WaitForCycles : CustomYieldInstruction
    {
        private int _startCycles;
        private float _totalCycles;

        public WaitForCycles(float cycles)
        {
            _startCycles = Time.frameCount;
            _totalCycles = cycles;
        }

        public override bool keepWaiting
        {
            get
            {
               return Time.frameCount - _startCycles < _totalCycles;
            }
        }
    }

    public class WaitForTicks : CustomYieldInstruction
    {
        private float _startTime;
        private float _totalTime;

        public WaitForTicks(float ticks)
        {
            _startTime = Time.time;
            _totalTime = TimeUtils.TimeToTicks(ticks);
        }

        public override bool keepWaiting
        {
            get
            {
                return Time.time - _startTime < _totalTime;
            }
        }
    }
}
