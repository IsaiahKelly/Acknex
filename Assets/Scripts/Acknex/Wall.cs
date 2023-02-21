using LibTessDotNet;
using UnityEngine;

namespace Acknex
{
    public class Wall : MonoBehaviour, IAcknexObject
    {
        public string NAME;
        public int VERTEX1;
        public int VERTEX2;
        public int REGION1;
        public int REGION2;
        public float OFFSETX;
        public float OFFSETY;

        public string TEXTURE;

        public Region RightRegion;
        public Region LeftRegion;
        public Vec3 Vertex1;
        public Vec3 Vertex2;
        public float FloorHeightRight;
        public float CeilHeightRight;
        public float FloorHeightLeft;
        public float CeilHeightLeft;
        public bool LiftedFloorRight;
        public bool LiftedCeilRight;
        public bool LiftedFloorLeft;
        public bool LiftedCeilLeft;

        public bool processed;

        public Wall Definition
        {
            get
            {
                if (World.Instance.WallsByName.TryGetValue(NAME, out var wall))
                {
                    return wall;
                }

                return null;
            }
        }

        public string Texture
        {
            get { return TEXTURE ?? Definition?.TEXTURE; }
        }
    }
}