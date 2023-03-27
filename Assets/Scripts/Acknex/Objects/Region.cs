using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Acknex.Interfaces;
using LibTessDotNet;
using UnityEngine;
using UnityEngine.Rendering;

namespace Acknex
{
    //todo: tesselation needs to implement the method to create new vertices
    public class Region : MonoBehaviour, IAcknexObjectContainer
    {
        public GameObject GameObject => gameObject;

        public const float MaxHeight = 10000f;

        //private GameObject _triggerGameObject;
        //private MeshCollider _triggerCollider;
        //private CollisionCallback _triggerCollisionCallback;

        private AudioSource _audioSource;

        private Region _belowOverride;
        private MeshCollider _ceilCollider;
        private MeshCollider _invertedCeilCollider;
        private GameObject _ceilGameObject;

        private MeshFilter _ceilMeshFilter;
        private MeshRenderer _ceilMeshRenderer;
        private MeshCollider _floorCollider;
        private MeshCollider _invertedFloorCollider;
        private GameObject _floorGameObject;

        private MeshFilter _floorMeshFilter;
        private MeshRenderer _floorMeshRenderer;

        public ContouredRegion ContouredRegion;

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

        public Region Above { get; private set; }

        public Region Below
        {
            get
            {
                if (_belowOverride != null)
                {
                    return _belowOverride;
                }
                var below = AcknexObject.GetAcknexObject("BELOW");
                if (below?.Container is Region region)
                {
                    return region;
                }
                return null;
            }
            set => _belowOverride = value;
        }

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Region);

        public void Disable()
        {
            AcknexObject.AddFlag("INVISIBLE");
            AcknexObject.RemoveFlag("VISIBLE");
        }

        public void Enable()
        {
            AcknexObject.RemoveFlag("INVISIBLE");
            AcknexObject.AddFlag("VISIBLE");
        }

        public Vector3 GetCenter()
        {
            return default;
        }

        public IAcknexObject GetRegion()
        {
            return AcknexObject;
        }

        public void SetupInstance()
        {
            if (AcknexObject.IsInstance)
            {
                return;
            }
            AcknexObject.IsInstance = true;
            //todo: move to middle
            _audioSource = gameObject.AddComponent<AudioSource>();
            StartCoroutine(AnimateCeil());
            StartCoroutine(AnimateFloor());
        }

        public void SetupTemplate()
        {
        }

        public void UpdateObject()
        {
            if (_floorMeshRenderer == null || _ceilMeshRenderer == null)
            {
                return;
            }
            if (!AcknexObject.IsDirty)
            {
                return;
            }
            if (AcknexObject.HasFlag("INVISIBLE"))
            {
                return;
            }
            AcknexObject.IsDirty = false;
            if (AcknexObject.HasFlag("INVISIBLE", false))
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

            //if (FloorTexture != null)
            //{
            //var bitmapImage = FloorTexture.GetBitmapAt(0);
            //if (bitmapImage != null)
            //{
            //    bitmapImage.UpdateMaterial(_floorMeshRenderer.material, FloorTexture, 0, false, AcknexObject);
            //}
            //}
            _floorCollider.gameObject.layer = AcknexObject.TryGetAcknexObject("IF_DIVE", out var ifDive) && ifDive.GetString("VAL") != null ? World.Instance.WaterLayer.LayerIndex : World.Instance.WallsAndRegionsLayer.LayerIndex;
            if (CeilTexture != null)
            {
                //var bitmapImage = CeilTexture.GetBitmapAt(0);
                //if (bitmapImage != null)
                //{
                //    bitmapImage.UpdateMaterial(_ceilMeshRenderer.material, CeilTexture, 0, false, AcknexObject);
                //}
                _ceilMeshRenderer.shadowCastingMode = CeilTexture.AcknexObject.HasFlag("SKY") ? ShadowCastingMode.Off : ShadowCastingMode.TwoSided;
            }
        }

        private static IAcknexObject GetTemplateCallback(string name)
        {
            if (World.Instance.RegionsByName.TryGetValue(name, out var region))
            {
                return region.AcknexObject;
            }
            return null;
        }

        private void Awake()
        {
            AcknexObject.Container = this;
        }

        private IEnumerator AnimateCeil()
        {
            while (CeilTexture == null)
            {
                yield return null;
            }
            var textureObject = CeilTexture;
            var enumerator = textureObject.AnimateTexture(true, _ceilMeshRenderer, _ceilMeshFilter, null, AcknexObject, AcknexObject, null);
            while (enumerator.MoveNext())
            {
                //if (AcknexObject.IsDirty)
                //{
                //    goto reload;
                //}
                yield return enumerator.Current;
            }
        }

        private IEnumerator AnimateFloor()
        {
            while (FloorTexture == null)
            {
                yield return null;
            }
            var textureObject = FloorTexture;
            var enumerator = textureObject.AnimateTexture(true, _floorMeshRenderer, _floorMeshFilter, null, AcknexObject, AcknexObject, null);
            while (enumerator.MoveNext())
            {
                //if (AcknexObject.IsDirty)
                //{
                //    goto reload;
                //}
                yield return enumerator.Current;
            }
        }

        private void Update()
        {
            if (!AcknexObject.IsInstance)
            {
                return;
            }
            UpdateObject();
            UpdateEvents();
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

        public void BuildFloorMesh(List<Vector3> allVertices, List<Vector2> allUVs, Dictionary<int, List<int>> allTriangles)
        {
            var ceilTexture = this.AcknexObject.GetAcknexObject("CEIL_TEX");
            var floorTexture = this.AcknexObject.GetAcknexObject("FLOOR_TEX");
            {
                this._floorGameObject = new GameObject("Floor");
                this._floorGameObject.transform.SetParent(this.transform, false);
                this._floorGameObject.layer = World.Instance.WallsAndRegionsLayer.LayerIndex;
                var floorMesh = new Mesh();
                floorMesh.SetVertices(allVertices);
                floorMesh.SetUVs(0, allUVs);
                floorMesh.subMeshCount = 1;
                floorMesh.SetTriangles(allTriangles[0], 0);
                floorMesh.RecalculateNormals();
                floorMesh.UploadMeshData(false);
                var invertedFloorMesh = new Mesh();
                invertedFloorMesh.SetVertices(allVertices);
                invertedFloorMesh.SetUVs(0, allUVs);
                invertedFloorMesh.subMeshCount = 1;
                var invertedTriangles = new List<int>(allTriangles[0]);
                invertedTriangles.Reverse();
                invertedFloorMesh.SetTriangles(invertedTriangles, 0);
                invertedFloorMesh.UploadMeshData(false);
                this._floorMeshFilter = this._floorGameObject.AddComponent<MeshFilter>();
                this._floorMeshFilter.mesh = floorMesh;
                this._floorMeshRenderer = this._floorGameObject.AddComponent<MeshRenderer>();
                var material = World.Instance.BuildMaterial(floorTexture);
                this._floorMeshRenderer.material = material;
                this._floorCollider = this._floorGameObject.AddComponent<MeshCollider>();
                this._floorCollider.sharedMesh = floorMesh;
                this._invertedFloorCollider = this._floorGameObject.AddComponent<MeshCollider>();
                this._invertedFloorCollider.sharedMesh = invertedFloorMesh;
                this._invertedFloorCollider.enabled = false;
            }
            {
                this._ceilGameObject = new GameObject("Ceil");
                this._ceilGameObject.transform.SetParent(this.transform, false);
                this._ceilGameObject.layer = World.Instance.WallsAndRegionsLayer.LayerIndex;
                var ceilMesh = new Mesh();
                ceilMesh.SetVertices(allVertices);
                ceilMesh.SetUVs(0, allUVs);
                ceilMesh.subMeshCount = 1;
                ceilMesh.SetTriangles(allTriangles[1], 0);
                ceilMesh.RecalculateNormals();
                ceilMesh.UploadMeshData(false);
                var invertedCeilMesh = new Mesh();
                invertedCeilMesh.SetVertices(allVertices);
                invertedCeilMesh.SetUVs(0, allUVs);
                invertedCeilMesh.subMeshCount = 1;
                var invertedTriangles = new List<int>(allTriangles[1]);
                invertedTriangles.Reverse();
                invertedCeilMesh.SetTriangles(invertedTriangles, 0);
                invertedCeilMesh.UploadMeshData(false);
                this._ceilMeshFilter = this._ceilGameObject.AddComponent<MeshFilter>();
                this._ceilMeshFilter.mesh = ceilMesh;
                this._ceilMeshRenderer = this._ceilGameObject.AddComponent<MeshRenderer>();
                var material = World.Instance.BuildMaterial(ceilTexture);
                this._ceilMeshRenderer.material = material;
                this._ceilCollider = this._ceilGameObject.AddComponent<MeshCollider>();
                this._ceilCollider.sharedMesh = ceilMesh;
                this._invertedCeilCollider = this._ceilGameObject.AddComponent<MeshCollider>();
                this._invertedCeilCollider.sharedMesh = invertedCeilMesh;
                this._invertedCeilCollider.enabled = false;
            }
        }

        public void BuildRegionFloorAndCeiling(ContouredRegion contouredRegion)
        {
            this.ContouredRegion = contouredRegion;
            var meshIndex = 0;
            var allVertices = new List<Vector3>();
            var allUVs = new List<Vector2>();
            var allTriangles = new Dictionary<int, List<int>>();
            if (Math.Abs(this.AcknexObject.GetFloat("CEIL_HGT") - this.AcknexObject.GetFloat("FLOOR_HGT")) > Mathf.Epsilon)
            {
                BuildFloorOrCeil(contouredRegion,  allVertices, allUVs, allTriangles, ref meshIndex);
                BuildFloorOrCeil(contouredRegion,  allVertices, allUVs, allTriangles, ref meshIndex, true);
                BuildFloorMesh(allVertices, allUVs, allTriangles);
            }
            this.Enable();
            if (this.Below != null)
            {
                var newRegion = Instantiate(this.Below.gameObject).GetComponent<Region>();
                newRegion.transform.SetParent(World.Instance.transform, false);
                newRegion.name = this.Below.name;
                newRegion.Above = this;
                var acknexObject = (AcknexObject)newRegion.AcknexObject;
                var belowAcknexObject = (AcknexObject)this.Below.AcknexObject;
                acknexObject.ObjectProperties = new Dictionary<string, object>(belowAcknexObject.ObjectProperties);
                acknexObject.NumberProperties = new Dictionary<string, float>(belowAcknexObject.NumberProperties);
                acknexObject.Type = belowAcknexObject.Type;
                World.Instance.PostSetupObjectInstance(newRegion.AcknexObject);
                this.Below = newRegion;
                newRegion.BuildRegionFloorAndCeiling(contouredRegion);
            }
        }

        public  void BuildFloorOrCeil(ContouredRegion contouredRegion, List<Vector3> allVertices, List<Vector2> allUVs, Dictionary<int, List<int>> allTriangles, ref int meshIndex, bool ceil = false)
        {
            var tess = new Tess();
            foreach (var contouredList in contouredRegion)
            {
                tess.AddContour(contouredList);
            }
            tess.Tessellate();
            var floorVertices = new Vector3[tess.VertexCount];
            var height = ceil ? this.AcknexObject.GetFloat("CEIL_HGT") : this.AcknexObject.GetFloat("FLOOR_HGT");
            var lifted = (ceil && this.AcknexObject.HasFlag("CEIL_LIFTED")) || (!ceil && this.AcknexObject.HasFlag("FLOOR_LIFTED"));
            for (var i = 0; i < tess.VertexCount; i++)
            {
                var vertex = tess.Vertices[i];
                if (lifted)
                {
                    floorVertices[i] = new Vector3(vertex.Position.X, ceil ? height - vertex.Position.Z : height + vertex.Position.Z, vertex.Position.Y);
                }
                else
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

        public static Region Locate(IAcknexObject acknexObject, Region currentRegion, float radius, float thingX, float thingY, ref float thingZ, bool onCeil = false, float? height = null)
        {
            var onGround = acknexObject.HasFlag("GROUND");
            bool GetValue(RaycastHit raycastHit, ref float outThingZ, out Region outRegion)
            {
                if (raycastHit.transform.parent != null && raycastHit.transform.parent.TryGetComponent(out outRegion))
                {
                    outThingZ = onGround ? 0 : raycastHit.point.y;
                    return true;
                }
                outRegion = currentRegion;
                return false;
            }
            if (onCeil)
            {
                var zCheck = height == null ? currentRegion.AcknexObject.GetFloat("FLOOR_HGT") : thingZ + height.Value;
                var point = new Vector3(thingX, zCheck, thingY);
                if (Physics.SphereCast(new Ray(point, Vector3.up), radius,  out var raycastHit, Mathf.Infinity, World.Instance.WallsWaterAndRegions))
                {
                    if (GetValue(raycastHit, ref thingZ, out var outRegion))
                    {
                        Debug.DrawLine(point, raycastHit.point, Color.red, 1f);
                        return outRegion;
                    }
                }
            }
            else
            {
                var zCheck = height == null ? currentRegion.AcknexObject.GetFloat("CEIL_HGT") : thingZ + height.Value;
                var point = new Vector3(thingX, zCheck, thingY);
                if (Physics.SphereCast(new Ray(point, Vector3.down), radius, out var raycastHit, Mathf.Infinity, World.Instance.WallsWaterAndRegions))
                {
                    if (GetValue(raycastHit, ref thingZ, out var outRegion))
                    {
                        Debug.DrawLine(point, raycastHit.point, Color.red, 1f);
                        return outRegion;
                    }
                }
            }
            if (onGround)
            {
                thingZ = 0f;
            }
            return currentRegion;
        }

        //todo: sum below regions
        public float GetRealCeilHeight()
        {
            return AcknexObject.GetFloat("CEIL_HGT");
        }

        //todo: sum below regions
        public double GetRealFloorHeight()
        {
            return AcknexObject.GetFloat("FLOOR_HGT");
        }
    }
}