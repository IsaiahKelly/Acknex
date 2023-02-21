using System.Collections.Generic;

namespace Acknex
{
    public class RegionWalls : Dictionary<int, RegionWall>
    {
        public List<Wall> GetWallsList(int index)
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