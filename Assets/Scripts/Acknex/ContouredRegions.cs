using System.Collections.Generic;
using Acknex.Interfaces;

namespace Acknex
{
    public class ContouredRegions : Dictionary<IAcknexObject, ContouredRegion>
    {
        public ContouredRegion GetContouredRegion(IAcknexObject index)
        {
            if (!TryGetValue(index, out var contouredRegion))
            {
                contouredRegion = new ContouredRegion();
                Add(index, contouredRegion);
            }
            return contouredRegion;
        }
    }
}