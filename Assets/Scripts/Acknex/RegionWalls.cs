using System.Collections.Generic;
using Acknex.Interfaces;

namespace Acknex
{
    public class RegionWalls : Dictionary<IAcknexObject, RegionWall>
    {
        public List<Wall> GetWallsList(IAcknexObject index)
        {
            if (!TryGetValue(index, out var walls))
            {
                walls = new RegionWall();
                Add(index, walls);
            }
            return walls;
        }
    }
}