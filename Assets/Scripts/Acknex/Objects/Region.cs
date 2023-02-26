using System;
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

        private const float MaxHeightCheck = 20000f;

        private MeshFilter _meshFilter;
        private MeshCollider _meshCollider;
        private MeshRenderer _meshRenderer;

        private Region _belowOverride;

        public ContouredRegion ContouredRegion;

        private void Update()
        {
            UpdateObject();
        }

        public void UpdateObject()
        {
            if (_meshRenderer == null)
            {
                return;
            }
            var floorTexture = AcknexObject.Get<string>("FLOOR_TEX");
            if (floorTexture != null && World.Instance.TexturesByName.TryGetValue(floorTexture, out var floorTextureObject))
            {
                var bitmapImage = floorTextureObject.GetBitmapAt(0);
                if (bitmapImage != null)
                {
                    bitmapImage.UpdateMaterial(_meshRenderer.materials[0], floorTextureObject, 0, false, AcknexObject);
                }
            }
            var ceilTexture = AcknexObject.Get<string>("CEIL_TEX");
            if (ceilTexture != null && World.Instance.TexturesByName.TryGetValue(ceilTexture, out var ceilTextureObject))
            {
                var bitmapImage = ceilTextureObject.GetBitmapAt(0);
                if (bitmapImage != null)
                {
                    bitmapImage.UpdateMaterial(_meshRenderer.materials[1], ceilTextureObject, 0, false, AcknexObject);
                }
            }
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

        public MeshCollider MeshCollider
        {
            get
            {
                if (_meshCollider != null)
                {
                    return _meshCollider;
                }
                if (World.Instance.RegionsByName.TryGetValue(AcknexObject.Get<string>("NAME"), out var definition))
                {
                    return definition._meshCollider;
                }
                return null;
            }
        }

        public bool IsPointInsideRegion(Vector3 point)
        {
            if (!Physics.Raycast(new Ray(point  + new Vector3(0f, 1f, 0f), Vector3.down), out var bottomHit, MaxHeightCheck) || bottomHit.collider != _meshCollider)
            {
                return false;
            }
            if (!Physics.Raycast(new Ray(point  - new Vector3(0f, 1f, 0f), Vector3.up), out var topHit, MaxHeightCheck) || topHit.collider != _meshCollider)
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

        public float ProjectHeight(float x, float y, bool ground = false)
        {
            var point = new Vector3(x, AcknexObject.Get<float>("CEIL_HGT"), y);
            return !ground && _meshCollider != null && _meshCollider.Raycast(new Ray(point, Vector3.down), out var bottomHit, Mathf.Infinity) ? bottomHit.point.y : 0f;
        }

        private Region GetGroundRegion(Region region)
        {
            while (region.Below != null)
            {
                region = region.Below;
            }
            return region;
        }

        public void Enable()
        {
            gameObject.SetActive(true);
        }

        public void Disable()
        {
            gameObject.SetActive(false);
        }

        public static void BuildFloorMesh(List<Vector3> allVertices, List<Vector2> allUVS, Dictionary<int, List<int>> allTriangles,
            Region region, string ceilTexture, string floorTexture)
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

            region._meshFilter = region.gameObject.AddComponent<MeshFilter>();
            region._meshFilter.sharedMesh = mesh;

            region._meshRenderer = region.gameObject.AddComponent<MeshRenderer>();
            var materials = new Material[mesh.subMeshCount];

            for (var i = 0; i < materials.Length; i++)
            {
                var textureName = i == 0 ? floorTexture : ceilTexture;
                var material = World.Instance.BuildMaterial(textureName);
                materials[i] = material;
            }

            region._meshRenderer.sharedMaterials = materials;

            region._meshCollider = region.gameObject.AddComponent<MeshCollider>();
            region._meshCollider.sharedMesh = mesh;
        }

        public static void BuildRegionFloorAndCeiling(Region region, ContouredRegion contouredRegion)
        {
            region.ContouredRegion = contouredRegion;
            var meshIndex = 0;
            var allVertices = new List<Vector3>();
            var allUVs = new List<Vector2>();
            var allTriangles = new Dictionary<int, List<int>>();
            if (Math.Abs(region.AcknexObject.Get<float>("CEIL_HGT") - region.AcknexObject.Get<float>("FLOOR_HGT")) > Mathf.Epsilon)
            {
                BuildFloor(contouredRegion, region, allVertices, allUVs, allTriangles, ref meshIndex);
                BuildFloor(contouredRegion, region, allVertices, allUVs, allTriangles, ref meshIndex, true);
                BuildFloorMesh(allVertices, allUVs, allTriangles, region, region.AcknexObject.Get<string>("CEIL_TEX"), region.AcknexObject.Get<string>("FLOOR_TEX"));
            }
            region.Enable();
            if (region.Below != null)
            {
                var newRegion = Instantiate(region.Below.gameObject).GetComponent<Region>();
                newRegion.transform.SetParent(World.Instance.transform, false);
                newRegion.name = region.Below.name;
                ((AcknexObject)newRegion.AcknexObject).Properties = new Dictionary<string, object>(((AcknexObject)region.Below.AcknexObject).Properties);
                region.Below = newRegion;
                BuildRegionFloorAndCeiling(newRegion, contouredRegion);
            }
        }

        public static void BuildFloor(ContouredRegion contouredRegion, Region region, List<Vector3> allVertices, List<Vector2> allUVs,
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
                        floorVertices[i] = new Vector3(vertex.Position.X, ceil ? (height - vertex.Position.Z) : (height + vertex.Position.Z), vertex.Position.Y);
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