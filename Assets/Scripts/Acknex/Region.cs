using LibTessDotNet;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace Acknex
{
    //todo: some refactored methods dont need to receive this class instance anymore
    public class Region : MonoBehaviour, IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetDefinitionCallback);

        private static IAcknexObject GetDefinitionCallback(string name)
        {
            if (World.Instance.RegionsByName.TryGetValue(name, out var region))
            {
                return region.AcknexObject;
            }
            return null;
        }

        private MeshFilter _meshFilter;
        private MeshCollider _meshCollider;
        private Region _belowOverride;

        //public string NAME;
        //public float FLOOR_HGT;
        //public float CEIL_HGT;
        //public float AMBIENT;
        //public List<string> FLAGS = new List<string>();
        //public string BELOW;
        //public string FLOOR_TEX;
        //public string CEIL_TEX;

        public ContouredRegion ContouredRegion;

        private void Start()
        {
            _meshFilter = GetComponent<MeshFilter>();
            _meshCollider = GetComponent<MeshCollider>();
        }

        //public Region Definition
        //{
        //    get
        //    {
        //        if (World.Instance.RegionsByName.TryGetValue(AcknexObject.Get<string>("NAME"), out var region))
        //        {
        //            return region;
        //        }
        //        return null;
        //    }
        //}

        public List<string> Flags
        {
            get
            {
                if (AcknexObject.TryGet("FLAGS", out List<string> flags))
                {
                    return flags;
                }
                flags = new List<string>();
                AcknexObject["FLAGS"] = flags;
                return flags;
            }
        }

        public bool CellLifted => Flags.Contains("CEIL_LIFTED");

        public bool FloorLifted => Flags.Contains("FLOOR_LIFTED");

        public Region Below
        {
            get
            {
                if (_belowOverride != null)
                {
                    return _belowOverride;
                }
                var below = AcknexObject.Get<string>("BELOW");
                if (below != null && World.Instance.RegionsByName.TryGetValue(below, out var region))
                {
                    return region;
                }
                return null;
            }
            set => _belowOverride = value;
        }

        //public string CeilTexture => AcknexObject.Get<string>("CEIL_TEX");
        //public string FloorTexture => AcknexObject.Get<string>("FLOOR_TEX");

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

        public Vector3 ProjectPosition(float x, float y, bool ground = false)
        {
            var point = new Vector3(x, AcknexObject.Get<float>("CEIL_HGT"), y);
            return !ground && _meshCollider != null && _meshCollider.Raycast(new Ray(point, Vector3.down), out var bottomHit, Mathf.Infinity) ? bottomHit.point : new Vector3(x, 0f, y);
        }

        private Region GetGroundRegion(Region region)
        {
            while (region.Below != null)
            {
                region = region.Below;
            }
            return region;
        }

        public void UpdateObject()
        {
            throw new System.NotImplementedException();
        }

        public void Enable()
        {
            gameObject.SetActive(true);
        }

        public void Disable()
        {
            gameObject.SetActive(false);
        }

        public void BuildFloorMesh(List<Vector3> allVertices, List<Vector2> allUVS, Dictionary<int, List<int>> allTriangles,
            GameObject floorGameObject, string ceilTexture, string floorTexture)
        {
            var mesh = new Mesh();
            mesh.SetVertices(allVertices);
            mesh.SetUVs(0, allUVS);

            mesh.subMeshCount = allTriangles.Count;
            foreach (var kvp in allTriangles)
            {
                mesh.SetTriangles(kvp.Value, kvp.Key);
            }

            mesh.RecalculateNormals();
            mesh.UploadMeshData(true);

            var meshFilter = floorGameObject.AddComponent<MeshFilter>();
            meshFilter.sharedMesh = mesh;

            var meshRenderer = floorGameObject.AddComponent<MeshRenderer>();
            var materials = new Material[mesh.subMeshCount];

            for (var i = 0; i < materials.Length; i++)
            {
                var textureName = i == 0 ? floorTexture : ceilTexture;
                var material = World.Instance.BuildMaterial(textureName);
                materials[i] = material;
            }

            meshRenderer.sharedMaterials = materials;

            var meshCollider = floorGameObject.AddComponent<MeshCollider>();
            meshCollider.sharedMesh = mesh;
        }

        public void BuildRegionFloorAndCeiling(Region region, ContouredRegion contouredRegion)
        {
            region.ContouredRegion = contouredRegion;
            var meshIndex = 0;
            var allVertices = new List<Vector3>();
            var allUVs = new List<Vector2>();
            var allTriangles = new Dictionary<int, List<int>>();
            BuildFloor(contouredRegion, region, allVertices, allUVs, allTriangles, ref meshIndex);
            BuildFloor(contouredRegion, region, allVertices, allUVs, allTriangles, ref meshIndex, true);
            region.BuildFloorMesh(allVertices, allUVs, allTriangles, region.gameObject, region.AcknexObject.Get<string>("CEIL_TEX"), region.AcknexObject.Get<string>("FLOOR_TEX"));
            region.Enable();
            if (region.Below != null)
            {
                var newRegion = Instantiate(region.Below.gameObject).GetComponent<Region>();
                newRegion.name = region.Below.name;
                region.Below = newRegion;
                BuildRegionFloorAndCeiling(newRegion, contouredRegion);
            }
        }

        public void BuildFloor(ContouredRegion contouredRegion, Region region, List<Vector3> allVertices, List<Vector2> allUVs,
            Dictionary<int, List<int>> allTriangles, ref int meshIndex, bool ceil = false)
        {
            var tess = new Tess();
            foreach (var contouredList in contouredRegion)
            {
                tess.AddContour(contouredList);
            }

            tess.Tessellate();
            var floorVertices = new Vector3[tess.VertexCount];
            //var height = regionDefinition != null ? (ceil ? regionDefinition.CEIL_HGT : regionDefinition.FLOOR_HGT) : (ceil ? region.CEIL_HGT : region.FLOOR_HGT);
            var height = (ceil ? region.AcknexObject.Get<float>("CEIL_HGT") : region.AcknexObject.Get<float>("FLOOR_HGT"));
            for (var i = 0; i < tess.VertexCount; i++)
            {
                var vertex = tess.Vertices[i];
                var lifted = false;
                //if (region.Definition != null)
                {
                    if (ceil && region.CellLifted || !ceil && region.FloorLifted)
                    {
                        lifted = true;
                        floorVertices[i] = new Vector3(vertex.Position.X, vertex.Position.Z + height,
                            vertex.Position.Y);
                    }
                }

                if (!lifted)
                {
                    floorVertices[i] = new Vector3(vertex.Position.X, height, vertex.Position.Y);
                }
            }

            var unRotateNormal = Quaternion.Inverse(Quaternion.LookRotation(Vector3.up));
            for (var i = 0; i < floorVertices.Length; i++)
            {
                allUVs.Add(unRotateNormal * floorVertices[i]);
            }

            var vertexIndex = allVertices.Count;
            allVertices.AddRange(floorVertices);
            for (var i = 0; i < tess.Elements.Length; i++)
            {
                tess.Elements[i] += vertexIndex;
            }

            var elements = tess.Elements.ToList();
            if (ceil)
            {
                elements.Reverse();
            }

            allTriangles.Add(meshIndex, elements);
            meshIndex++;
        }
    }
}