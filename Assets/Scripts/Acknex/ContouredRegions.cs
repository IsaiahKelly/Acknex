using System.Collections.Generic;
using Acknex.Interfaces;

namespace Acknex
{
    public class ContouredRegions : Dictionary<IAcknexObject, ContouredRegion>
    {
        public ContouredRegion GetContouredRegion(IAcknexObject region)
        {
            if (!TryGetValue(region, out var contouredRegion))
            {
                contouredRegion = new ContouredRegion();
                Add(region, contouredRegion);
            }
            return contouredRegion;
        }
    }
}