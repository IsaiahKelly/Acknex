using LibTessDotNet;
using System.Collections.Generic;
using System.Linq;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
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

        public ContouredRegion ContouredRegion;

        private void Start()
        {
            _meshFilter = GetComponent<MeshFilter>();
            _meshCollider = GetComponent<MeshCollider>();
        }

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
                newRegion.name = region.Below.name + "_INSTANCE";
                ((AcknexObject)newRegion.AcknexObject).Properties = new Dictionary<string, object>(((AcknexObject)region.Below.AcknexObject).Properties);
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
            var height = (ceil ? region.AcknexObject.Get<float>("CEIL_HGT") : region.AcknexObject.Get<float>("FLOOR_HGT"));
            for (var i = 0; i < tess.VertexCount; i++)
            {
                var vertex = tess.Vertices[i];
                var lifted = false;
                {
                    if (ceil && region.Flags.Contains("CEIL_LIFTED") || !ceil && region.Flags.Contains("FLOOR_LIFTED"))
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