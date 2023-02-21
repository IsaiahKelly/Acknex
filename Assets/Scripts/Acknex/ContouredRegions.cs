using System.Collections.Generic;

namespace Acknex
{
    public class ContouredRegions : Dictionary<int, ContouredRegion>
    {
        public ContouredRegion GetContouredRegion(int index)
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