using System;
using System.Collections;
using System.Collections.Generic;
using Acknex.Interfaces;

namespace Tests
{
    public class Game : IAcknexRuntime
    {
        public void SetWorld(IAcknexWorld world)
        {
            
        }

        public IEnumerator CallAction(string name, IAcknexObject MY, IAcknexObject THERE)
        {
            yield break;
        }
    }
}