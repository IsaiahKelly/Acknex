using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Acknex.Interfaces;
using LibTessDotNet;
using UnityEngine;
using UnityEngine.Rendering;
using NameId = System.UInt32;
using PropertyName = Acknex.Interfaces.PropertyName;
#if DEBUG_ENABLED
using Utils;
#endif

namespace Acknex
{
    public class Region : MonoBehaviour, IAcknexObjectContainer, IGraphicObject
    {
        private Dictionary<int, List<int>> _allTriangles;
        private List<Vector2> _allUVs;
        private List<Vector3> _allVertices;
        private IEnumerator _animateCeilCoroutine;
        private IEnumerator _animateFloorCoroutine;
        private AudioSource _audioSource;
        private GameObject _audioSourceGameObject;
        private Region _belowOverride;
        private MeshCollider _ceilCollider;
        private GameObject _ceilGameObject;
        private Material _ceilMaterial;
        private Mesh _ceilMesh;
        private MeshRenderer _ceilMeshRenderer;
        private Material[] _ceilMeshRendererMaterials;
        private MeshCollider _floorCollider;
        private GameObject _floorGameObject;
        private Material _floorMaterial;
        private Mesh _floorMesh;
        private MeshRenderer _floorMeshRenderer;
        private Material[] _floorMeshRendererMaterials;
        private MeshCollider _invertedCeilCollider;
        private Mesh _invertedCeilMesh;
        private MeshCollider _invertedFloorCollider;
        private Mesh _invertedFloorMesh;
        private bool _materialsCreated;

        public AckTransform AckTransform;
        public ContouredRegion ContouredRegion;
        public bool DisableCeilRender;
        public bool DisableFloorRender;
        public HashSet<Wall> Walls = new HashSet<Wall>();
        //private MeshCollider _floorOffsetMeshCollider;
        //private GameObject _floorOffsetGameObject;

        public Texture FloorTexture
        {
            get
            {
                if (AcknexObject.TryGetAcknexObject(PropertyName.FLOOR_TEX, out var floorTextureObject))
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
                if (AcknexObject.TryGetAcknexObject(PropertyName.CEIL_TEX, out var ceilTextureObject))
                {
                    return ceilTextureObject.Container as Texture;
                }
                return null;
            }
        }

        public Region Above { get; set; }

        public Region Below
        {
            get
            {
                if (_belowOverride != null)
                {
                    return _belowOverride;
                }
                var below = AcknexObject.GetAcknexObject(PropertyName.BELOW, true, false);
                if (below?.Container is Region region)
                {
                    return region;
                }
                return null;
            }
            set => _belowOverride = value;
        }

        public MeshFilter CeilMeshFilter { get; set; }

        public MeshFilter FloorMeshFilter { get; set; }

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Region);
        public Vector4 BitmapCoords { get; set; }

        public Bitmap CurrentBitmap { get; set; }

        public void Disable()
        {
            AcknexObject.AddFlag(PropertyName.INVISIBLE);
        }

        public void Enable()
        {
            AcknexObject.RemoveFlag(PropertyName.INVISIBLE);
        }
        public bool IsUnderwater => AcknexObject.TryGetAcknexObject(PropertyName.IF_ARISE, out _);
        public bool IsWater => AcknexObject.TryGetAcknexObject(PropertyName.IF_DIVE, out _);

        public GameObject GameObject => gameObject;

        public float GetAmbient()
        {
            var ambient = AcknexObject.GetFloat(PropertyName.AMBIENT);
            if (IsUnderwater)
            {
                ambient += 1f;
            }
            //if (AcknexObject.HasFlag(PropertyName.HERE))
            //{
            //    ambient += World.Instance.GetSkillValue("PLAYER_LIGHT") * Mathf.InverseLerp(World.Instance.GetSkillValue(PropertyName.CLIP_DIST), 0f, AcknexObject.GetFloat(PropertyName.DISTANCE));
            //}
            return ambient;
        }


        public Vector3 GetCenter()
        {
            var bounds = new Bounds();
            if (_ceilMeshRenderer != null)
            {
                bounds.Encapsulate(_ceilMeshRenderer.bounds);
            }
            if (_floorMeshRenderer != null)
            {
                bounds.Encapsulate(_floorMeshRenderer.bounds);
            }
            return bounds.center;
        }

        public IAcknexObject GetRegion()
        {
            return AcknexObject;
        }

        public bool IsGeometryDirty { get; set; }

        public bool IsTextureDirty { get; set; } = true;

        public void NotifyPropertyChanged(uint propertyName)
        {
            switch (propertyName)
            {
                case (uint)PropertyName.CEIL_TEX:
                case (uint)PropertyName.FLOOR_TEX:
                    IsTextureDirty = true;
                    break;
                case (uint)PropertyName.FLOOR_HGT:
                case (uint)PropertyName.CEIL_HGT:
                    IsGeometryDirty = true;
                    break;
            }
        }

        public Vector4 OffsetScale { get; set; }

        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {
            if (!(sound?.Container is Sound soundContainer))
            {
                return;
            }
            if (_audioSource.clip == soundContainer.AudioClip && _audioSource.isPlaying)
            {
                return;
            }
#if DEBUG_ENABLED
            DebugExtension.DebugWireSphere(GetCenter(), Color.blue, 1f, 10f);
#endif
            _audioSource.Stop();
            _audioSource.clip = soundContainer.AudioClip;
            _audioSource.maxDistance = Mathf.Max(sDist, svDist);
            _audioSource.volume = volume;
            _audioSource.Play();
        }

        public void ResetTexture()
        {
            IsTextureDirty = true;
        }

        public void SetupInstance()
        {
            if (AcknexObject.IsInstance)
            {
                return;
            }
            AcknexObject.IsInstance = true;
            foreach (Transform child in transform)
            {
                Destroy(child.gameObject);
            }
            _allVertices = new List<Vector3>();
            _allUVs = new List<Vector2>();
            _allTriangles = new Dictionary<int, List<int>>();
            _floorMesh = new Mesh();
            _ceilMesh = new Mesh();
            _invertedCeilMesh = new Mesh();
            _invertedFloorMesh = new Mesh();
            _floorGameObject = new GameObject("Floor");
            _floorGameObject.transform.SetParent(transform, false);
            _floorGameObject.layer = World.Instance.RegionsLayer.LayerIndex;
            //_floorOffsetGameObject = new GameObject("Offset");
            //_floorOffsetGameObject.layer = World.Instance.RegionOffsetLayer.LayerIndex;
            //_floorOffsetGameObject.transform.SetParent(_floorGameObject.transform, false);
            //_floorOffsetGameObject.transform.localPosition = new Vector3(0f, World.Instance.TestOffset/*-playerClimb * 0.5f*/, 0f);
            //_floorOffsetMeshCollider = _floorOffsetGameObject.AddComponent<MeshCollider>();
            _ceilGameObject = new GameObject("Ceil");
            _ceilGameObject.transform.SetParent(transform, false);
            _ceilGameObject.layer = World.Instance.RegionsLayer.LayerIndex;
            _ceilMeshRenderer = _ceilGameObject.AddComponent<MeshRenderer>();
            CeilMeshFilter = _ceilGameObject.AddComponent<MeshFilter>();
            _ceilCollider = _ceilGameObject.AddComponent<MeshCollider>();
            _invertedCeilCollider = _ceilGameObject.AddComponent<MeshCollider>();
            FloorMeshFilter = _floorGameObject.AddComponent<MeshFilter>();
            _floorMeshRenderer = _floorGameObject.AddComponent<MeshRenderer>();
            _floorCollider = _floorGameObject.AddComponent<MeshCollider>();
            _invertedFloorCollider = _floorGameObject.AddComponent<MeshCollider>();
            if (gameObject.TryGetComponent<AudioSource>(out var audioSource))
            {
                Destroy(audioSource);
            }
            _audioSourceGameObject = new GameObject("AudioSource");
            _audioSourceGameObject.transform.SetParent(transform, false);
            _audioSource = _audioSourceGameObject.AddComponent<AudioSource>();
            _audioSource.minDistance = 0f;
            _audioSource.maxDistance = 0f;
            _audioSource.volume = 0f;
            _audioSource.playOnAwake = false;
            _audioSource.spatialBlend = 1f;
            _audioSource.rolloffMode = AudioRolloffMode.Linear;
            //_floorGameObject.transform.position = new Vector3(0f, World.Instance.FloorCollisionOffset, 0f);
            //_ceilGameObject.transform.position = new Vector3(0f, -World.Instance.FloorCollisionOffset, 0f);
            World.Instance.StartManagedCoroutine(this, TriggerTickEvents());
            World.Instance.StartManagedCoroutine(this, TriggerSecEvents());
        }


        public void SetupTemplate()
        {
        }

        public void UpdateObject()
        {
            if (_floorMeshRenderer == null)
            {
                return;
            }
            if (IsGeometryDirty)
            {
                foreach (var wall in Walls)
                {
                    wall.IsGeometryDirty = true;
                }
                UpdateAllMeshes();
                IsGeometryDirty = false;
            }
            if (IsTextureDirty)
            {
                if (_animateCeilCoroutine != null)
                {
                    World.Instance.StopManagedCoroutine(this, _animateCeilCoroutine);
                }
                var hasPlay = AcknexObject.HasFlag(PropertyName.PLAY);
                if (CeilTexture != null)
                {
                    if (hasPlay)
                    {
                        AcknexObject.AddFlag(PropertyName.ONESHOT);
                        AcknexObject.RemoveFlag(PropertyName.PLAY);
                    }
                    _animateCeilCoroutine = World.Instance.StartManagedCoroutine(this, AnimateCeil());
                }
                if (_animateFloorCoroutine != null)
                {
                    World.Instance.StopManagedCoroutine(this, _animateFloorCoroutine);
                }
                if (FloorTexture != null)
                {
                    if (hasPlay)
                    {
                        AcknexObject.AddFlag(PropertyName.ONESHOT);
                        AcknexObject.RemoveFlag(PropertyName.PLAY);
                    }
                    _animateFloorCoroutine = World.Instance.StartManagedCoroutine(this, AnimateFloor());
                }
                IsTextureDirty = false;
            }
            var center = GetCenter();
            var pos2D = new Vector2(center.x, center.z);
            var playerPos2D = new Vector2(World.Instance.GetSkillValue(SkillName.PLAYER_X), World.Instance.GetSkillValue(SkillName.PLAYER_Y));
            var distance = Vector2.Distance(playerPos2D, pos2D);
            if (!AcknexObject.HasFlag(PropertyName.LIBER) && distance > World.Instance.AcknexObject.GetFloat(PropertyName.CLIP_DIST))
            {
                return;
            }
            AcknexObject.NoDirtyFlag = true;
            AcknexObject.SetFloat(PropertyName.DISTANCE, distance);
            AcknexObject.NoDirtyFlag = false;
            if (!AcknexObject.IsDirty)
            {
                return;
            }
            AcknexObject.IsDirty = false;
            _audioSourceGameObject.transform.position = GetCenter();
            if (AcknexObject.HasFlag(PropertyName.INVISIBLE))
            {
                _floorMeshRenderer.enabled = false;
                _ceilMeshRenderer.enabled = false;
                _invertedFloorCollider.enabled = _floorCollider.enabled = false;
                _invertedCeilCollider.enabled = _ceilCollider.enabled = false;
                return;
            }
            if (AckTransform.Degrees != 0f)
            {
                transform.RotateAround(AckTransform.Center, Vector3.up, -AckTransform.Degrees);
                AckTransform.Degrees = 0f;
            }
            if (AckTransform.DX != 0f)
            {
                transform.Translate(AckTransform.DX, 0f, 0f, Space.World);
                AckTransform.DX = 0f;
            }
            if (AckTransform.DY != 0f)
            {
                transform.Translate(0f, 0f, AckTransform.DY, Space.World);
                AckTransform.DY = 0f;
            }
            if (AckTransform.DZ != 0f)
            {
                transform.Translate(0f, AckTransform.DZ, 0f, Space.World);
                AckTransform.DZ = 0f;
            }
            _floorMeshRenderer.enabled = !DisableFloorRender;
            _ceilMeshRenderer.enabled = !DisableCeilRender;
            _invertedFloorCollider.enabled = _floorCollider.enabled = true;
            _invertedCeilCollider.enabled = _ceilCollider.enabled = true;
            _floorMeshRenderer.shadowCastingMode = ShadowCastingMode.TwoSided;
            _ceilMeshRenderer.shadowCastingMode = ShadowCastingMode.TwoSided;
            _floorCollider.gameObject.layer = IsWater ? World.Instance.WaterLayer.LayerIndex : World.Instance.RegionsLayer.LayerIndex;
            _ceilCollider.gameObject.layer = IsUnderwater ? World.Instance.WaterLayer.LayerIndex : World.Instance.RegionsLayer.LayerIndex;
            if (CeilTexture != null)
            {
                _ceilMeshRenderer.shadowCastingMode = CeilTexture.AcknexObject.HasFlag(PropertyName.SKY) ? ShadowCastingMode.Off : ShadowCastingMode.TwoSided;
            }
        }

        public override string ToString()
        {
            return AcknexObject.ToString();
        }

        private static IAcknexObject GetTemplateCallback(uint name)
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
            var enumerator = CeilTexture.AnimateTexture(CeilTextureCanceled, true, _ceilMeshRendererMaterials, null, CeilMeshFilter, null, AcknexObject, AcknexObject);
            while (enumerator.MoveNext())
            {
                yield return enumerator.Current;
            }
        }

        private bool CeilTextureCanceled(Texture texture)
        {
            return AcknexObject.HasFlag(PropertyName.INVISIBLE) || texture != CeilTexture;
        }

        private IEnumerator AnimateFloor()
        {
            while (FloorTexture == null)
            {
                yield return null;
            }
            var enumerator = FloorTexture.AnimateTexture(FloorTextureCanceled, true, _floorMeshRendererMaterials, null, FloorMeshFilter, null, AcknexObject, AcknexObject);
            while (enumerator.MoveNext())
            {
                yield return enumerator.Current;
            }
        }

        private bool FloorTextureCanceled(Texture texture)
        {
            return AcknexObject.HasFlag(PropertyName.INVISIBLE) || texture != FloorTexture;
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
            World.Instance.TriggerEvent(PropertyName.DO, AcknexObject, AcknexObject, GetRegion());
        }

        public void BuildMeshes()
        {
            var ceilTexture = CeilTexture;
            var floorTexture = FloorTexture;
            _floorMesh.Clear();
            _floorMesh.SetVertices(_allVertices);
            _floorMesh.SetUVs(0, _allUVs);
            _floorMesh.subMeshCount = 1;
            _floorMesh.SetTriangles(_allTriangles[0], 0);
            _floorMesh.RecalculateNormals();
            _floorMesh.UploadMeshData(false);
            _floorMesh.RecalculateBounds();
            _invertedFloorMesh.Clear();
            _invertedFloorMesh.SetVertices(_allVertices);
            _invertedFloorMesh.SetUVs(0, _allUVs);
            _invertedFloorMesh.subMeshCount = 1;
            //todo: allocation
            var invertedFloorTriangles = new List<int>(_allTriangles[0]);
            invertedFloorTriangles.Reverse();
            _invertedFloorMesh.SetTriangles(invertedFloorTriangles, 0);
            _invertedFloorMesh.UploadMeshData(false);
            _invertedFloorMesh.RecalculateBounds();
            FloorMeshFilter.sharedMesh = _floorMesh;
            if (!_materialsCreated)
            {
                _floorMaterial = World.Instance.BuildMaterial(floorTexture.AcknexObject);
                _floorMeshRenderer.sharedMaterial = _floorMaterial;
            }
            _floorMeshRendererMaterials = _floorMeshRenderer.materials;
            foreach (var material in _floorMeshRendererMaterials)
            {
                material.mainTexture = World.Instance.NullTexture;
                material.SetInt("_TRANSPARENT", 1);
            }
            //_floorOffsetMeshCollider.sharedMesh =_floorMesh
            _floorCollider.sharedMesh = _floorMesh;
            _floorCollider.enabled = false;
            _invertedFloorCollider.sharedMesh = _invertedFloorMesh;
            _invertedFloorCollider.enabled = false;
            _ceilMesh.Clear();
            _ceilMesh.SetVertices(_allVertices);
            _ceilMesh.SetUVs(0, _allUVs);
            _ceilMesh.subMeshCount = 1;
            _ceilMesh.SetTriangles(_allTriangles[1], 0);
            _ceilMesh.RecalculateNormals();
            _ceilMesh.UploadMeshData(false);
            _ceilMesh.RecalculateBounds();
            _invertedCeilMesh.Clear();
            _invertedCeilMesh.SetVertices(_allVertices);
            _invertedCeilMesh.SetUVs(0, _allUVs);
            _invertedCeilMesh.subMeshCount = 1;
            //todo: allocation
            var invertedCeilTriangles = new List<int>(_allTriangles[1]);
            invertedCeilTriangles.Reverse();
            _invertedCeilMesh.SetTriangles(invertedCeilTriangles, 0);
            _invertedCeilMesh.UploadMeshData(false);
            _invertedCeilMesh.RecalculateBounds();
            CeilMeshFilter.sharedMesh = _ceilMesh;
            if (!_materialsCreated)
            {
                _ceilMaterial = World.Instance.BuildMaterial(ceilTexture.AcknexObject, true);
                _ceilMeshRenderer.sharedMaterial = _ceilMaterial;
            }
            _ceilMeshRendererMaterials = _ceilMeshRenderer.materials;
            foreach (var material in _ceilMeshRendererMaterials)
            {
                material.mainTexture = World.Instance.NullTexture;
                material.SetInt("_TRANSPARENT", 1);
            }
            _ceilCollider.sharedMesh = _ceilMesh;
            _ceilCollider.enabled = false;
            _invertedCeilCollider.sharedMesh = _invertedCeilMesh;
            _invertedCeilCollider.enabled = false;
            _materialsCreated = true;
        }

        private IEnumerator TriggerSecEvents()
        {
            while (true)
            {
                World.Instance.TriggerEvent(PropertyName.EACH_SEC, AcknexObject, AcknexObject, GetRegion());
                yield return World.Instance.WaitForSecond;
            }
        }

        private IEnumerator TriggerTickEvents()
        {
            while (true)
            {
                World.Instance.TriggerEvent(PropertyName.EACH_TICK, AcknexObject, AcknexObject, GetRegion());
                yield return World.Instance.WaitForTick;
            }
        }

        public void UpdateAllMeshes()
        {
            if (ContouredRegion == null)
            {
                return;
            }
            var meshIndex = 0;
            _allVertices.Clear();
            _allUVs.Clear();
            _allTriangles.Clear();
            if (Math.Abs(AcknexObject.GetFloat(PropertyName.CEIL_HGT) - AcknexObject.GetFloat(PropertyName.FLOOR_HGT)) > Mathf.Epsilon)
            {
                BuildFloorOrCeil(ref meshIndex);
                BuildFloorOrCeil(ref meshIndex, true);
                BuildMeshes();
            }
        }

        public void BuildFloorOrCeil(ref int meshIndex, bool ceil = false)
        {
            var tess = new Tess();
            if (World.Instance.OldAckVersion)
            {
                foreach (var contouredList in ContouredRegion)
                {
                    tess.AddContour(contouredList);
                }
            }
            else
            {
                var biggestArea = 0f;
                IList<ContourVertex> biggestContour = null;
                if (ContouredRegion == null)
                {
                    return;
                }
                foreach (var contouredList in ContouredRegion)
                {
                    var area = ContouredRegion.CalculateArea(contouredList);
                    if (area > biggestArea)
                    {
                        biggestArea = area;
                        biggestContour = contouredList;
                    }
                }
                if (biggestContour == null)
                {
                    return;
                }
                tess.AddContour(biggestContour);
                if (!ceil)
                {
                    View.Instance.AddMapRegion(this, biggestContour);
                }
            }
            tess.Tessellate(WindingRule.EvenOdd, ElementType.Polygons, 3, CombineCallback);
            var floorVertices = new Vector3[tess.VertexCount];
            var ceilLift = GetCeilLift();
            var floorLift = GetFloorLift();
            var height = ceil ? AcknexObject.GetFloat(PropertyName.CEIL_HGT) : AcknexObject.GetFloat(PropertyName.FLOOR_HGT);
            var lifted = (ceil && ceilLift != 0) || (!ceil && floorLift != 0);
            for (var i = 0; i < tess.VertexCount; i++)
            {
                var vertex = tess.Vertices[i];
                var position = vertex.Data as Vec3? ?? vertex.Position;
                if (lifted)
                {
                    floorVertices[i] = new Vector3(position.X, ceil ? height + position.Z * ceilLift : height + position.Z * floorLift, position.Y);
                }
                else
                {
                    floorVertices[i] = new Vector3(position.X, height, position.Y);
                }
            }
            var unRotateNormal = Quaternion.Inverse(Quaternion.LookRotation(ceil ? Vector3.up : Vector3.down));
            for (var i = 0; i < floorVertices.Length; i++)
            {
                _allUVs.Add(unRotateNormal * floorVertices[i]);
            }
            var vertexIndex = _allVertices.Count;
            _allVertices.AddRange(floorVertices);
            for (var i = 0; i < tess.Elements.Length; i++)
            {
                tess.Elements[i] += vertexIndex;
            }
            var elements = tess.Elements.ToList();
            if (ceil)
            {
                elements.Reverse();
            }
            _allTriangles.Add(meshIndex, elements);
            meshIndex++;
        }

        public int GetFloorLift()
        {
            if (AcknexObject.HasFlag(PropertyName.FLOOR_LIFTED))
            {
                return 1;
            }
            if (AcknexObject.HasFlag(PropertyName.FLOOR_DESCEND))
            {
                return -1;
            }
            if (AcknexObject.HasFlag(PropertyName.FLOOR_ASCEND))
            {
                return 1;
            }
            return 0;
        }

        public int GetCeilLift()
        {
            if (AcknexObject.HasFlag(PropertyName.CEIL_LIFTED))
            {
                return -1;
            }
            if (AcknexObject.HasFlag(PropertyName.CEIL_ASCEND))
            {
                return 1;
            }
            if (AcknexObject.HasFlag(PropertyName.CEIL_DESCEND))
            {
                return -1;
            }
            return 0;
        }

        private static object CombineCallback(Vec3 position, object[] data, float[] weights)
        {
            return position;
        }

        public static Region Locate(IAcknexObject acknexObject, Region currentRegion, float radius, float thingX, float thingY, ref float thingHgt, bool onCeil = false, float? height = null)
        {
            bool GetValue(RaycastHit raycastHit, ref float outThingZ, out Region outRegion)
            {
                if (raycastHit.transform.parent != null && raycastHit.transform.parent.TryGetComponent(out outRegion))
                {
                    outThingZ = raycastHit.point.y;
                    return true;
                }
                outRegion = currentRegion;
                return false;
            }

            if (onCeil)
            {
                var zCheck = height ?? currentRegion.AcknexObject.GetFloat(PropertyName.FLOOR_HGT);
                var point = new Vector3(thingX, zCheck, thingY);
                RaycastHit raycastHit;
                if ((radius == 0f && Physics.Raycast(new Ray(point, Vector3.up), out raycastHit, Mathf.Infinity, World.Instance.WallsWaterAndRegions)) || Physics.SphereCast(new Ray(point, Vector3.up), radius, out raycastHit, Mathf.Infinity, World.Instance.WallsWaterAndRegions))
                {
                    if (GetValue(raycastHit, ref thingHgt, out var outRegion))
                    {
#if DEBUG_ENABLED
                        Debug.DrawLine(point, raycastHit.point, Color.red, 1f);
#endif
                        return outRegion;
                    }
                }
            }
            else
            {
                var zCheck = height ?? currentRegion.AcknexObject.GetFloat(PropertyName.CEIL_HGT);
                var point = new Vector3(thingX, zCheck, thingY);
                if ((radius == 0f && Physics.Raycast(new Ray(point, Vector3.down), out var raycastHit, Mathf.Infinity, World.Instance.WallsWaterAndRegions)) || Physics.SphereCast(new Ray(point, Vector3.down), radius, out  raycastHit, Mathf.Infinity, World.Instance.WallsWaterAndRegions))
                {
                    if (GetValue(raycastHit, ref thingHgt, out var outRegion))
                    {
#if DEBUG_ENABLED
                        Debug.DrawLine(point, raycastHit.point, Color.red, 1f);
#endif
                        return outRegion;
                    }
                }
            }
            return currentRegion;
        }

        public float GetDepth()
        {
            return Mathf.Abs(AcknexObject.GetFloat(PropertyName.CEIL_HGT) - AcknexObject.GetFloat(PropertyName.FLOOR_HGT));
        }

        //todo: is this needed?
        public float GetRealCeilHeight()
        {
            return AcknexObject.GetFloat(PropertyName.FLOOR_HGT) + GetDepth();
        }

        //todo:is this needed?
        public float GetRealFloorHeight()
        {
            return AcknexObject.GetFloat(PropertyName.FLOOR_HGT);
        }

        public void BuildBelowInstance(List<Region> createdRegions)
        {
            if (Below != null)
            {
                var belowAcknexObject = (AcknexObject)Below.AcknexObject;
                var newAcknexObject = new AcknexObject(GetTemplateCallback, ObjectType.Region);
                newAcknexObject.ObjectProperties = new Dictionary<uint, object>(belowAcknexObject.ObjectProperties);
                newAcknexObject.NumberProperties = new Dictionary<uint, float>(belowAcknexObject.NumberProperties);
                newAcknexObject.Name = belowAcknexObject.Name;
                var newRegion = Instantiate(Below.gameObject).GetComponent<Region>();
                newRegion.Above = this;
                newRegion.ContouredRegion = ContouredRegion;
                newRegion.AcknexObject = newAcknexObject;
                newRegion.name = Below.name;
                newRegion.transform.SetParent(World.Instance.transform, false);
                newRegion._materialsCreated = false;
                newAcknexObject.Container = newRegion;
                createdRegions.Add(newRegion);
                Below = newRegion;
                newRegion.BuildBelowInstance(createdRegions);
            }
        }

        public void PlayRegionSound(bool ceil = false)
        {
            var sound = ceil ? CeilTexture.AcknexObject.GetAcknexObject(PropertyName.SOUND) :  FloorTexture.AcknexObject.GetAcknexObject(PropertyName.SOUND);
            if (sound != null)
            {
                World.Instance.PlaySound(sound, FloorTexture.AcknexObject.GetFloat(PropertyName.SVOL), 0.5f, FloorTexture.AcknexObject.GetFloat(PropertyName.SDIST), FloorTexture.AcknexObject.GetFloat(PropertyName.SVDIST));
            }
        }

        //todo: rotate things and actors as well
        public void Rotate(Vector3 center, float degrees)
        {
            if (Player.Instance.GetRegion() == AcknexObject)
            {
                Player.Instance.Rotate(center, degrees);
            }
            AckTransform.Center = center;
            AckTransform.Degrees = degrees;
            AcknexObject.IsDirty = true;
            foreach (var wall in Walls)
            {
                wall.Rotate(center, degrees);
            }
        }

        public void Shift(float dx, float dy)
        {
            if (Player.Instance.GetRegion() == AcknexObject)
            {
                Player.Instance.Shift(dx, dy);
            }
            AckTransform.DX = dx;
            AckTransform.DY = dy;
            AcknexObject.IsDirty = true;
            foreach (var wall in Walls)
            {
                wall.Shift(dx, dy);
            }
        }

        public Region GetRegionWithCeilingAbove(float thingZ)
        {
            var floorHeight = GetRealFloorHeight();
            var ceilHeight = GetRealCeilHeight();
            if (floorHeight <= thingZ && ceilHeight >= thingZ)
            {
                return this;
            }
            return Below == null ? this : Below.GetRegionWithCeilingAbove(thingZ);
        }

        public void Lift(float dz)
        {
            if (Player.Instance.GetRegion() == AcknexObject)
            {
                Player.Instance.Lift(dz);
            }
            AckTransform.DZ = dz;
            AcknexObject.IsDirty = true;
            foreach (var wall in Walls)
            {
                wall.Lift(dz);
            }
        }
    }
}