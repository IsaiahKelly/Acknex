using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace Acknex
{
    public class Region : MonoBehaviour, IAcknexObject
    {
        private MeshFilter _meshFilter;
        private MeshCollider _meshCollider;

        public string NAME;
        public float FLOOR_HGT;
        public float CEIL_HGT;
        public float AMBIENT;
        public List<string> FLAGS;
        public string BELOW;
        public string FLOOR_TEX;
        public string CEIL_TEX;
        public ContouredRegion ContouredRegion;

        private void Start()
        {
            _meshFilter = GetComponent<MeshFilter>();
            _meshCollider = GetComponent<MeshCollider>();
        }

        public bool CellLifted
        {
            get
            {
                var flags = FLAGS ?? Definition?.FLAGS;
                return flags != null && flags.Contains("CEIL_LIFTED");
            }
        }

        public bool FloorLifted
        {
            get
            {
                var flags = FLAGS ?? Definition?.FLAGS;
                return flags != null && flags.Contains("FLOOR_LIFTED");
            }
        }

        public Region Definition
        {
            get
            {
                if (World.Instance.RegionsByName.TryGetValue(NAME, out var region))
                {
                    return region;
                }
                return null;
            }
        }

        public Region Below
        {
            get
            {
                var below = BELOW ?? Definition?.BELOW;
                if (below != null && World.Instance.RegionsByName.TryGetValue(below, out var region))
                {
                    return region;
                }

                return null;
            }
        }

        public string CeilTexture => CEIL_TEX ?? Definition?.CEIL_TEX;
        public string FloorTexture => FLOOR_TEX ?? Definition?.FLOOR_TEX;

        //todo: Y/Z flipped on engine
        //todo: check by convex hull?
        public bool IsPointInsideRegion(Vector3 point)
        {
            if (!Physics.Raycast(new Ray(point  + new Vector3(0f, 1f, 0f), Vector3.down), out var bottomHit, 20000f) || bottomHit.collider != _meshCollider)
            {
                return false;
            }
            if (!Physics.Raycast(new Ray(point  - new Vector3(0f, 1f, 0f), Vector3.up), out var topHit, 20000f) || topHit.collider != _meshCollider)
            {
                return false;
            }
            //for (var i = 0; i < ContouredRegion.Count; i++)
            //{
            //    var vertices = ContouredRegion[i];
            //    for (var j = 1; j < vertices.Count; j++)
            //    {
            //        var a = vertices[j - 1];
            //        var b = vertices[j];
            //        var vectorA = new Vector3(b.Position.X,
            //            b.Position.Z,
            //            b.Position.Y);
            //        var vectorB = new Vector3(a.Position.X,
            //            a.Position.Z,
            //            a.Position.Y);
            //        var right =
            //            vectorA -
            //            vectorB;
            //        var forward = -Vector3.Cross(right, Vector3.up).normalized;
            //        DebugExtension.DrawArrow(Vector3.Lerp(vectorA, vectorB, 0.5f), forward, Color.magenta);
            //    }
            //}
            return true;
        }

        public Vector3 ProjectPosition(float x, float y)
        {
            var point = new Vector3(x, FLOOR_HGT + 10000f, y);
            if (!Physics.Raycast(new Ray(point , Vector3.down), out var bottomHit, 20000f) || bottomHit.collider != _meshCollider)
            {
                return new Vector3(x, FLOOR_HGT, y);
            }
            return bottomHit.point;
        }

        public void Disable()
        {
            gameObject.SetActive(false);
        }
    }
}