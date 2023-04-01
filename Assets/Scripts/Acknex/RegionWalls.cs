using System.Collections.Generic;
using Acknex.Interfaces;

namespace Acknex
{
    public class RegionWalls : Dictionary<IAcknexObject, RegionWall>
    {
        public List<Wall> GetWallsList(IAcknexObject region)
        {
            if (!TryGetValue(region, out var walls))
            {
                walls = new RegionWall();
                Add(region, walls);
            }
            return walls;
        }
    }
}