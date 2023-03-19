﻿using System;
using System.Collections;
using LibTessDotNet;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using Acknex.Interfaces;
using Codice.CM.WorkspaceServer;
using UnityEngine;
using Quaternion = UnityEngine.Quaternion;
using Vector2 = UnityEngine.Vector2;
using Vector3 = UnityEngine.Vector3;
using UnityEngine.Rendering;
using Utils;
using Debug = System.Diagnostics.Debug;
using GK;

namespace Acknex
{
    //todo: tesselation needs to implement the method to create new vertices
    public class Region : MonoBehaviour, IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Region);

        private static IAcknexObject GetTemplateCallback(string name)
        {
            if (World.Instance.RegionsByName.TryGetValue(name, out var region))
            {
                return region.AcknexObject;
            }
            return null;
        }

        private MeshFilter _floorMeshFilter;
        private MeshCollider _floorCollider;
        private MeshRenderer _floorMeshRenderer;

        private MeshFilter _ceilMeshFilter;
        private MeshCollider _ceilCollider;
        private MeshRenderer _ceilMeshRenderer;

        private Region _belowOverride;
        private Region _aboveOverride;

        public ContouredRegion ContouredRegion;
        private AudioSource _audioSource;
        private GameObject floorGameObject;
        private GameObject ceilGameObject;
        private GameObject triggerGameObject;
        private MeshCollider triggerCollider;
        private CollisionCallback triggerCollisionCallback;
        private bool _instance;

        public Texture FloorTexture
        {
            get
            {
                if (AcknexObject.TryGetAcknexObject("FLOOR_TEX", out var floorTextureObject))
                {
                    return floorTextureObject.Container as Texture;
                }
                return null;
            }
        }

        public Texture CeilTexture
        {
            get
            {
                if (AcknexObject.TryGetAcknexObject("CEIL_TEX", out var ceilTextureObject))
                {
                    return ceilTextureObject.Container as Texture;
                }
                return null;
            }
        }

        private void Awake()
        {
            AcknexObject.Container = this;
            //todo: move to middle
            _audioSource = gameObject.AddComponent<AudioSource>();
        }

        private IEnumerator AnimateCeil()
        {
            while (CeilTexture == null)
            {
                yield return null;
            }
            var enumerator = CeilTexture.AnimateTexture(true, _ceilMeshRenderer, _ceilMeshFilter, null, AcknexObject, null);
            while (enumerator.MoveNext())
            {
                yield return enumerator.Current;
            }
        }

        private IEnumerator AnimateFloor()
        {
            while (FloorTexture == null)
            {
                yield return null;
            }
            var enumerator = FloorTexture.AnimateTexture(true, _floorMeshRenderer, _floorMeshFilter, null, AcknexObject, null);
            while (enumerator.MoveNext())
            {
                yield return enumerator.Current;
            }
        }

        private void Update()
        {
            if (!_instance)
            {
                return;
            }
            UpdateObject();
        }

        public void UpdateObject()
        {
            if (_floorMeshRenderer == null)
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
                _floorMeshRenderer.enabled = false;
                _floorCollider.enabled = false;
                _ceilMeshRenderer.enabled = false;
                _ceilCollider.enabled = false;
            }
            else
            {
                _floorMeshRenderer.enabled = true;
                _floorCollider.enabled = true;
                _ceilMeshRenderer.enabled = true;
                _ceilCollider.enabled = true;
            }

            _floorMeshRenderer.shadowCastingMode = ShadowCastingMode.TwoSided;
            _ceilMeshRenderer.shadowCastingMode = ShadowCastingMode.TwoSided;
            ;
            if (FloorTexture != null)
            {
                var bitmapImage = FloorTexture.GetBitmapAt(0);
                if (bitmapImage != null)
                {
                    bitmapImage.UpdateMaterial(_floorMeshRenderer.material, FloorTexture, 0, false, AcknexObject);
                }
            }
            _floorCollider.gameObject.layer = AcknexObject.TryGetAcknexObject("IF_DIVE", out var ifDive) && ifDive.GetString("VAL") != null ? World.Instance.WaterLayer.LayerIndex : World.Instance.WallsAndRegionsLayer.LayerIndex;

            if (CeilTexture != null)
            {
                var bitmapImage = CeilTexture.GetBitmapAt(0);
                if (bitmapImage != null)
                {
                    bitmapImage.UpdateMaterial(_ceilMeshRenderer.material, CeilTexture, 0, false, AcknexObject);
                }
                _ceilMeshRenderer.shadowCastingMode = CeilTexture.AcknexObject.ContainsFlag("SKY") ? ShadowCastingMode.Off : ShadowCastingMode.TwoSided;
            }
        }

        private void UpdateEvents()
        {
            //var playerZ = World.Instance.GetSkillValue("PLAYER_Z");
            //if (playerZ < AcknexObject.GetFloat("FLOOR_HGT") && !_dive.Contains(Player.Instance.AcknexObject))
            //{
            //    World.Instance.TriggerEvent(AcknexObject, "IF_DIVE");
            //    _dive.Add(Player.Instance.AcknexObject);
            //}
            //else if (playerZ > AcknexObject.GetFloat("CEIL_HGT") && !_dive.Contains(Player.Instance.AcknexObject))
            //{
            //    World.Instance.TriggerEvent(AcknexObject, "IF_ARISE");
            //    _dive.Remove(Player.Instance.AcknexObject);
            //}
        }

        public Region Above
        {
            get
            {
                return _aboveOverride;
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
                var below = AcknexObject.GetAcknexObject("BELOW");
                if (below != null && below.Container is Region region)
                {
                    return region;
                }
                return null;
            }
            set => _belowOverride = value;
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

        public void SetupTemplate()
        {
            
        }

        public void SetupInstance()
        {
            _instance = true;
            StartCoroutine(AnimateCeil());
            StartCoroutine(AnimateFloor());
        }

        public static void BuildFloorMesh(List<Vector3> allVertices, List<Vector2> allUVS, Dictionary<int, List<int>> allTriangles, Region region, IAcknexObject ceilTexture, IAcknexObject floorTexture)
        {
            {
                region.floorGameObject = new GameObject("Floor");
                region.floorGameObject.transform.SetParent(region.transform, false);
                region.floorGameObject.layer = World.Instance.WallsAndRegionsLayer.LayerIndex;
                var floorMesh = new Mesh();
                floorMesh.SetVertices(allVertices);
                floorMesh.SetUVs(0, allUVS);
                floorMesh.subMeshCount = 1;
                floorMesh.SetTriangles(allTriangles[0], 0);
                floorMesh.RecalculateNormals();
                floorMesh.UploadMeshData(true);
                region._floorMeshFilter = region.floorGameObject.AddComponent<MeshFilter>();
                region._floorMeshFilter.mesh = floorMesh;
                region._floorMeshRenderer = region.floorGameObject.AddComponent<MeshRenderer>();
                var material = World.Instance.BuildMaterial(floorTexture);
                region._floorMeshRenderer.material = material;
                region._floorCollider = region.floorGameObject.AddComponent<MeshCollider>();
                region._floorCollider.sharedMesh = floorMesh;
            }
            {
                region.ceilGameObject = new GameObject("Ceil");
                region.ceilGameObject.transform.SetParent(region.transform, false);
                region.ceilGameObject.layer = World.Instance.WallsAndRegionsLayer.LayerIndex;
                var ceilMesh = new Mesh();
                ceilMesh.SetVertices(allVertices);
                ceilMesh.SetUVs(0, allUVS);
                ceilMesh.subMeshCount = 1;
                ceilMesh.SetTriangles(allTriangles[1], 0);
                ceilMesh.RecalculateNormals();
                ceilMesh.UploadMeshData(true);
                region._ceilMeshFilter = region.ceilGameObject.AddComponent<MeshFilter>();
                region._ceilMeshFilter.mesh = ceilMesh;
                region._ceilMeshRenderer = region.ceilGameObject.AddComponent<MeshRenderer>();
                var material = World.Instance.BuildMaterial(ceilTexture);
                region._ceilMeshRenderer.material = material;
                region._ceilCollider = region.ceilGameObject.AddComponent<MeshCollider>();
                region._ceilCollider.sharedMesh = ceilMesh;
            }
            {
                var convexHull = new ConvexHullCalculator();
                var verts = new List<Vector3>();
                var tris = new List<int>();
                var normals = new List<Vector3>();
                convexHull.GenerateHull(allVertices, false, ref verts, ref tris, ref normals);
                var triggerMesh = new Mesh();
                triggerMesh.SetVertices(verts);
                triggerMesh.SetNormals(normals);
                triggerMesh.SetTriangles(tris, 0);
                triggerMesh.UploadMeshData(true);
                region.triggerGameObject = new GameObject("Trigger");
                region.triggerGameObject.layer = World.Instance.TriggersLayer.LayerIndex;
                region.triggerGameObject.transform.SetParent(region.transform, false);
                region.triggerCollider = region.triggerGameObject.AddComponent<MeshCollider>();
                region.triggerCollider.sharedMesh = triggerMesh;
                region.triggerCollider.convex = true;
                region.triggerCollider.isTrigger = true;
                region.triggerCollisionCallback = region.triggerGameObject.AddComponent<CollisionCallback>();
                region.triggerCollisionCallback.OnTriggerEnterCallback += region.OnTriggerEnterCallback;
                region.triggerCollisionCallback.OnTriggerExitCallback += region.OnTriggerExitCallback;
            }
        }

        private void OnTriggerExitCallback(Collider collider)
        {
            if (collider.TryGetComponent<Thing>(out var thing))
            {
                World.Instance.SetSynonymObject("THERE", AcknexObject);
                World.Instance.TriggerEvent(AcknexObject, "IF_LEAVE");
            }
            else if (collider.TryGetComponent<Player>(out var player))
            {
                World.Instance.SetSynonymObject("THERE", AcknexObject);
                World.Instance.TriggerEvent(AcknexObject, "IF_LEAVE");
                World.Instance.TriggerEvent(AcknexObject, "IF_ARISE");
            }
        }

        private void OnTriggerEnterCallback(Collider collider)
        {
            if (collider.TryGetComponent<Thing>(out var thing))
            {
                thing.AcknexObject.SetAcknexObject("REGION", this.AcknexObject);
                World.Instance.SetSynonymObject("THERE", AcknexObject);
                World.Instance.TriggerEvent(AcknexObject, "IF_ENTER");
            }
            else if (collider.TryGetComponent<Player>(out var player))
            {
                player.AcknexObject.SetAcknexObject("REGION", this.AcknexObject);
                World.Instance.SetSynonymObject("THERE", AcknexObject);
                World.Instance.SetSynonymObject("HERE", AcknexObject);
                World.Instance.UpdateSkillValue("FLOOR_HGT", AcknexObject.GetFloat("FLOOR_HGT"));
                World.Instance.UpdateSkillValue("CEIL_HGT", AcknexObject.GetFloat("CEIL_HGT"));
                World.Instance.TriggerEvent(AcknexObject, "IF_ENTER");
                if (Above != null)
                {
                    World.Instance.TriggerEvent(Above.AcknexObject, "IF_DIVE");
                }
            }
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
                BuildFloorMesh(allVertices, allUVs, allTriangles, region, region.AcknexObject.GetAcknexObject("CEIL_TEX"), region.AcknexObject.GetAcknexObject("FLOOR_TEX"));
            }
            region.Enable();
            if (region.Below != null)
            {
                var newRegion = Instantiate(region.Below.gameObject).GetComponent<Region>();
                newRegion.transform.SetParent(World.Instance.transform, false);
                newRegion.name = region.Below.name;
                newRegion._aboveOverride = region;
                var acknexObject = ((AcknexObject)newRegion.AcknexObject);
                var belowAcknexObject = ((AcknexObject)region.Below.AcknexObject);
                acknexObject.ObjectProperties = new SortedDictionary<string, object>(belowAcknexObject.ObjectProperties);
                acknexObject.NumberProperties = new SortedDictionary<string, float>(belowAcknexObject.NumberProperties);
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


        public static void PutOnGround(IAcknexObject source, Region currentRegion, float thingX, float thingY, ref float thingZ, bool onGround = false, bool onCeil = false, bool initial = true)
        {
            bool GetValue(RaycastHit raycastHit, Region region, ref float outThingZ)
            {
                if (raycastHit.transform.parent != null && raycastHit.transform.parent.TryGetComponent<Region>(out _))
                {
                    outThingZ = onGround ? 0 : raycastHit.point.y;
                    return true;
                }
                return false;
            }
            if (onCeil)
            {
                var zCheck = initial ? currentRegion.AcknexObject.GetFloat("FLOOR_HGT") : thingZ + 1.0f;
                var point = new Vector3(thingX, zCheck, thingY);
                if (Physics.Raycast(new Ray(point, Vector3.up), out var raycastHit, Mathf.Infinity, World.Instance.WallsWaterAndRegions))
                {
                    if (GetValue(raycastHit, currentRegion, ref thingZ))
                    {
                        return;
                    }
                }
            }
            else
            {
                var zCheck = initial ? currentRegion.AcknexObject.GetFloat("CEIL_HGT") : thingZ + 1.0f;
                var point = new Vector3(thingX, zCheck, thingY);
                if (Physics.Raycast(new Ray(point, Vector3.down), out var raycastHit, Mathf.Infinity, World.Instance.WallsWaterAndRegions))
                {
                    if (GetValue(raycastHit, currentRegion, ref thingZ))
                    {
                        return;
                    }
                }
            }
            if (onGround)
            {
                thingZ = 0f;
            }
        }
    }
}