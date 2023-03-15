using Acknex.Interfaces;
using UnityEngine;

namespace Acknex.Interfaces
{
    //todo: how to convert cycles to time?
    public class WaitForCycles : CustomYieldInstruction
    {
      

        public WaitForCycles(float cycles)
        {
          
        }

        public override bool keepWaiting
        {
            get
            {
                return false;
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
