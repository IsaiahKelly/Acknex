using System;
using LibTessDotNet;
using System.Collections.Generic;
using System.Linq;
using Acknex.Interfaces;
using Codice.CM.WorkspaceServer;
using UnityEngine;
using Quaternion = UnityEngine.Quaternion;
using Vector2 = UnityEngine.Vector2;
using Vector3 = UnityEngine.Vector3;
using UnityEngine.Rendering;
using Utils;

namespace Acknex
{
    //todo: tesselation needs to implement the method to create new vertices
    public class Region : MonoBehaviour, IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback);

        private static IAcknexObject GetTemplateCallback(string name)
        {
            if (World.Instance.RegionsByName.TryGetValue(name, out var region))
            {
                return region.AcknexObject;
            }
            return null;
        }

        private const float MaxHeightCheck = 20000f;

        private MeshFilter _meshFilter;
        private MeshCollider _collider;
        private MeshRenderer _meshRenderer;

        private Region _belowOverride;
        private HashSet<IAcknexObject> _dive = new HashSet<IAcknexObject>();

        public ContouredRegion ContouredRegion;

        private void Awake()
        {
            AcknexObject.Container = this;
        }

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

            UpdateEvents();

            if (!AcknexObject.IsDirty)
            {
                return;
            }
            AcknexObject.IsDirty = false;

            if (AcknexObject.ContainsFlag("INVISIBLE", false))
            {
                _meshRenderer.enabled = false;
                _collider.enabled = false;
            }
            else
            {
                _meshRenderer.enabled = true;
                _collider.enabled = true;
            }

            _meshRenderer.shadowCastingMode = ShadowCastingMode.TwoSided;
            var floorTexture = AcknexObject.GetString("FLOOR_TEX");
            if (floorTexture != null && World.Instance.TexturesByName.TryGetValue(floorTexture, out var floorTextureObject))
            {
                var bitmapImage = floorTextureObject.GetBitmapAt(0);
                if (bitmapImage != null)
                {
                    bitmapImage.UpdateMaterial(_meshRenderer.materials[0], floorTextureObject, 0, false, AcknexObject);
                }
            }

            var ceilTexture = AcknexObject.GetString("CEIL_TEX");
            if (ceilTexture != null && World.Instance.TexturesByName.TryGetValue(ceilTexture, out var ceilTextureObject))
            {
                var bitmapImage = ceilTextureObject.GetBitmapAt(0);
                if (bitmapImage != null)
                {
                    bitmapImage.UpdateMaterial(_meshRenderer.materials[1], ceilTextureObject, 0, false, AcknexObject);
                }

                //todo: will need two mesh renderers to handle that correctly
                _meshRenderer.shadowCastingMode = ceilTextureObject.AcknexObject.ContainsFlag("SKY") ? ShadowCastingMode.Off : ShadowCastingMode.TwoSided;
            }
        }

        private void UpdateEvents()
        {
            //todo: masters
            var playerZ = World.Instance.GetSkillValue("PLAYER_Z");
            //todo: needs to take the bottom offset?
            var ceilHgt = AcknexObject.GetFloat("CEIL_HGT");
            if (playerZ <= ceilHgt && !_dive.Contains(Player.Instance.AcknexObject))
            {
                if (AcknexObject.TryGetString("IF_DIVE", out var ifDive))
                {
                    World.Instance.SetSynonymObject("THERE", AcknexObject);
                    World.Instance.TriggerEvent(Player.Instance.AcknexObject, "IF_DIVE");
                }
                _dive.Add(Player.Instance.AcknexObject);
            }
            else if (playerZ > ceilHgt && !_dive.Contains(Player.Instance.AcknexObject))
            {
                if (AcknexObject.TryGetString("IF_ARISE", out var ifDive))
                {
                    World.Instance.SetSynonymObject("THERE", AcknexObject);
                    World.Instance.TriggerEvent(Player.Instance.AcknexObject, "IF_ARISE");
                }
                _dive.Remove(Player.Instance.AcknexObject);
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
                var below = AcknexObject.GetString("BELOW");
                if (below != null && World.Instance.RegionsByName.TryGetValue(below, out var region))
                {
                    return region;
                }
                return null;
            }
            set => _belowOverride = value;
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
            AcknexObject.RemoveFlag("INVISIBLE");
            AcknexObject.AddFlag("VISIBLE");
        }

        public void Disable()
        {
            AcknexObject.AddFlag("INVISIBLE");
            AcknexObject.RemoveFlag("VISIBLE");
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
                var tris = kvp.Value;
                //tris.Reverse();
                mesh.SetTriangles(tris, kvp.Key);
            }

            mesh.RecalculateNormals();
            mesh.UploadMeshData(true);

            region._meshFilter = region.gameObject.AddComponent<MeshFilter>();
            region._meshFilter.mesh = mesh;

            region._meshRenderer = region.gameObject.AddComponent<MeshRenderer>();
            var materials = new Material[mesh.subMeshCount];

            for (var i = 0; i < materials.Length; i++)
            {
                var textureName = i == 0 ? floorTexture : ceilTexture;
                var material = World.Instance.BuildMaterial(textureName);
                materials[i] = material;
            }

            region._meshRenderer.materials = materials;

            region._collider = region.gameObject.AddComponent<MeshCollider>();
            region._collider.sharedMesh = mesh;
        }

        public static void BuildRegionFloorAndCeiling(Region region, ContouredRegion contouredRegion)
        {
            region.ContouredRegion = contouredRegion;
            var meshIndex = 0;
            var allVertices = new List<Vector3>();
            var allUVs = new List<Vector2>();
            var allTriangles = new Dictionary<int, List<int>>();
            if (Math.Abs(region.AcknexObject.GetFloat("CEIL_HGT") - region.AcknexObject.GetFloat("FLOOR_HGT")) > Mathf.Epsilon)
            {
                BuildFloor(contouredRegion, region, allVertices, allUVs, allTriangles, ref meshIndex);
                BuildFloor(contouredRegion, region, allVertices, allUVs, allTriangles, ref meshIndex, true);
                BuildFloorMesh(allVertices, allUVs, allTriangles, region, region.AcknexObject.GetString("CEIL_TEX"), region.AcknexObject.GetString("FLOOR_TEX"));
            }
            region.Enable();
            if (region.Below != null)
            {
                var newRegion = Instantiate(region.Below.gameObject).GetComponent<Region>();
                newRegion.transform.SetParent(World.Instance.transform, false);
                newRegion.name = region.Below.name;
                var acknexObject = ((AcknexObject)newRegion.AcknexObject);
                var belowAcknexObject = ((AcknexObject)region.Below.AcknexObject);
                acknexObject.ObjectProperties = new Dictionary<string, object>(belowAcknexObject.ObjectProperties);
                acknexObject.NumberProperties = new Dictionary<string, float>(belowAcknexObject.NumberProperties);
                acknexObject.Type = belowAcknexObject.Type;
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
            var height = (ceil ? region.AcknexObject.GetFloat("CEIL_HGT") : region.AcknexObject.GetFloat("FLOOR_HGT"));
            for (var i = 0; i < tess.VertexCount; i++)
            {
                var vertex = tess.Vertices[i];
                var lifted = false;
                {
                    if (ceil && region.AcknexObject.ContainsFlag("CEIL_LIFTED") || !ceil && region.AcknexObject.ContainsFlag("FLOOR_LIFTED"))
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

            var unRotateNormal = Quaternion.Inverse(Quaternion.LookRotation(ceil ? Vector3.up : Vector3.down));
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

        //todo: replace MaxHeightCheck
        public static void Locate(IAcknexObject source, ref int regionIndex, float thingX, float thingY, ref float thingZ, bool onGround = false)
        {
            if (regionIndex >= World.Instance.RegionsByIndex.Count || regionIndex < 0)
            {
                return;
            }
            var currentRegion = World.Instance.RegionsByIndex[regionIndex];
            var point = new Vector3(thingX, currentRegion.AcknexObject.GetFloat("CEIL_HGT"), thingY);
            if (Physics.Raycast(new Ray(point, Vector3.down), out var raycastHit, Mathf.Infinity, World.Instance.WallsAndRegionsLayer.Mask))
            {
                if (raycastHit.transform.TryGetComponent<Region>(out var region))
                {
                    thingZ = onGround ? 0 : raycastHit.point.y;
                    var newRegionIndex = World.Instance.RegionsByIndex.IndexOf(region);
                    if (
                        source.Type == ObjectType.Player ||
                        source.ContainsFlag("MASTER", false))
                    {
                        if (newRegionIndex != regionIndex)
                        {
                            //var oldRegionIndex = source.GetInteger("REGION");
                            //var oldRegion = World.Instance.RegionsByIndex[oldRegionIndex];
                            World.Instance.SetSynonymObject("THERE", currentRegion.AcknexObject);
                            World.Instance.TriggerEvent(source, "IF_LEAVE");

                            World.Instance.SetSynonymObject("THERE", region.AcknexObject);
                            World.Instance.TriggerEvent(source, "IF_ENTER");
                        }
                    }
                    regionIndex = newRegionIndex;
                    return;
                }
            }
            if (onGround)
            {
                thingZ = 0f;
            }
        }
    }
}