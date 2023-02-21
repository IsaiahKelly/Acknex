namespace Acknex
{
    public class WallWithSide
    {
        public Wall wall;
        public bool inversed;

        public WallWithSide(Wall wall, bool inversed)
        {
            this.wall = wall;
            this.inversed = inversed;
        }
    }
}