using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Acknex.Interfaces;
using LibTessDotNet;
using UnityEngine;
using UnityEngine.Rendering;
using Utils;

namespace Acknex
{
    //todo: tesselation needs to implement the method to create new vertices
    public class Region : MonoBehaviour, IAcknexObjectContainer
    {
        public const float MaxHeight = 10000f;

        private Dictionary<int, List<int>> _allTriangles;
        private List<Vector2> _allUVs;
        private List<Vector3> _allVertices;
        private Coroutine _animateCeilCoroutine;
        private Coroutine _animateFloorCoroutine;
        private AudioSource _audioSource;
        private GameObject _audioSourceGameObject;
        private Region _belowOverride;
        private MeshCollider _ceilCollider;
        private GameObject _ceilGameObject;
        private Material _ceilMaterial;
        private Mesh _ceilMesh;
        private MeshRenderer _ceilMeshRenderer;
        private MeshCollider _floorCollider;
        private GameObject _floorGameObject;
        private Material _floorMaterial;
        private Mesh _floorMesh;
        private MeshRenderer _floorMeshRenderer;
        private MeshCollider _invertedCeilCollider;
        private Mesh _invertedCeilMesh;
        private MeshCollider _invertedFloorCollider;
        private Mesh _invertedFloorMesh;
        private Texture _lastCeilTexture;
        private Texture _lastFloorTexture;
        private bool _materialsCreated;
        public ContouredRegion ContouredRegion;
        public bool DisableCeilRender;
        public bool DisableFloorRender;

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

        public Region Above { get; set; }

        public Region Below
        {
            get
            {
                if (_belowOverride != null)
                {
                    return _belowOverride;
                }
                var below = AcknexObject.GetAcknexObject("BELOW", true, false);
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

        [field: SerializeField] public bool DebugMarked { get; set; }

        public void Disable()
        {
            AcknexObject.AddFlag("INVISIBLE");
        }

        public void Enable()
        {
            AcknexObject.RemoveFlag("INVISIBLE");
        }

        public GameObject GameObject => gameObject;

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
            Debug.Log(AcknexObject.GetString("NAME"));
            DebugExtension.DebugWireSphere(GetCenter(), Color.blue, 1f, 10f);
            _audioSource.Stop();
            _audioSource.clip = soundContainer.AudioClip;
            _audioSource.maxDistance = Mathf.Max(sDist, svDist);
            _audioSource.rolloffMode = AudioRolloffMode.Linear;
            _audioSource.volume = volume;
            _audioSource.Play();
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
            _floorGameObject.layer = World.Instance.WallsAndRegionsLayer.LayerIndex;
            _ceilGameObject = new GameObject("Ceil");
            _ceilGameObject.transform.SetParent(transform, false);
            _ceilGameObject.layer = World.Instance.WallsAndRegionsLayer.LayerIndex;
            _ceilMeshRenderer = _ceilGameObject.AddComponent<MeshRenderer>();
            CeilMeshFilter = _ceilGameObject.AddComponent<MeshFilter>();
            _ceilCollider = _ceilGameObject.AddComponent<MeshCollider>();
            _invertedCeilCollider = _ceilGameObject.AddComponent<MeshCollider>();
            if (gameObject.TryGetComponent<AudioSource>(out var audioSource))
            {
                Destroy(audioSource);
            }
            _audioSourceGameObject = new GameObject("AudioSource");
            _audioSourceGameObject.transform.SetParent(transform, false);
            _audioSource = _audioSourceGameObject.AddComponent<AudioSource>();
            _audioSource.maxDistance = 0f;
            _audioSource.volume = 0f;
            _audioSource.playOnAwake = false;
        }

        public void SetupTemplate()
        {
        }

        public void UpdateObject()
        {
            if (AcknexObject.IsGeometryDirty)
            {
                UpdateAllMeshes();
                AcknexObject.IsGeometryDirty = false;
            }
            if (!AcknexObject.IsDirty)
            {
                return;
            }
            AcknexObject.IsDirty = false;
            _audioSourceGameObject.transform.position = GetCenter();
            if (AcknexObject.HasFlag("INVISIBLE"))
            {
                _floorMeshRenderer.enabled = false;
                _floorCollider.enabled = false;
                _ceilMeshRenderer.enabled = false;
                _ceilCollider.enabled = false;
                return;
            }
            _floorMeshRenderer.enabled = !DisableFloorRender;
            _floorCollider.enabled = true;
            _ceilMeshRenderer.enabled = !DisableCeilRender;
            _ceilCollider.enabled = true;
            _floorMeshRenderer.shadowCastingMode = ShadowCastingMode.TwoSided;
            _ceilMeshRenderer.shadowCastingMode = ShadowCastingMode.TwoSided;
            _floorCollider.gameObject.layer = AcknexObject.TryGetAcknexObject("IF_DIVE", out _) ? World.Instance.WaterLayer.LayerIndex : World.Instance.WallsAndRegionsLayer.LayerIndex;
            _ceilCollider.gameObject.layer = AcknexObject.TryGetAcknexObject("IF_ARISE", out _) ? World.Instance.WaterLayer.LayerIndex : World.Instance.WallsAndRegionsLayer.LayerIndex;
            if (CeilTexture != null)
            {
                _ceilMeshRenderer.shadowCastingMode = CeilTexture.AcknexObject.HasFlag("SKY") ? ShadowCastingMode.Off : ShadowCastingMode.TwoSided;
            }
            var hasPlay = AcknexObject.HasFlag("PLAY");
            if (CeilTexture != _lastCeilTexture || hasPlay)
            {
                if (_animateCeilCoroutine != null)
                {
                    StopCoroutine(_animateCeilCoroutine);
                }
                if (CeilTexture != null)
                {
                    if (hasPlay)
                    {
                        AcknexObject.AddFlag("ONESHOT");
                        AcknexObject.RemoveFlag("PLAY");
                    }
                    _animateCeilCoroutine = StartCoroutine(AnimateCeil());
                }
                _lastCeilTexture = CeilTexture;
            }
            if (FloorTexture != _lastFloorTexture || hasPlay)
            {
                if (_animateFloorCoroutine != null)
                {
                    StopCoroutine(_animateFloorCoroutine);
                }
                if (FloorTexture != null)
                {
                    if (hasPlay)
                    {
                        AcknexObject.AddFlag("ONESHOT");
                        AcknexObject.RemoveFlag("PLAY");
                    }
                    _animateFloorCoroutine = StartCoroutine(AnimateFloor());
                }
                _lastFloorTexture = FloorTexture;
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
            var enumerator = CeilTexture.AnimateTexture(true, _ceilMeshRenderer, CeilMeshFilter, null, AcknexObject, AcknexObject, null);
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
            var enumerator = FloorTexture.AnimateTexture(true, _floorMeshRenderer, FloorMeshFilter, null, AcknexObject, AcknexObject, null);
            while (enumerator.MoveNext())
            {
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
        }

        public void BuildMeshes( /*List<Vector3> allVertices, List<Vector2> allUVs, Dictionary<int, List<int>> allTriangles*/)
        {
            var ceilTexture = AcknexObject.GetAcknexObject("CEIL_TEX");
            var floorTexture = AcknexObject.GetAcknexObject("FLOOR_TEX");
            _floorMesh.SetVertices(_allVertices);
            _floorMesh.SetUVs(0, _allUVs);
            _floorMesh.subMeshCount = 1;
            _floorMesh.SetTriangles(_allTriangles[0], 0);
            _floorMesh.RecalculateNormals();
            _floorMesh.UploadMeshData(false);
            _invertedFloorMesh = new Mesh();
            _invertedFloorMesh.SetVertices(_allVertices);
            _invertedFloorMesh.SetUVs(0, _allUVs);
            _invertedFloorMesh.subMeshCount = 1;
            //todo: allocation
            var invertedFloorTriangles = new List<int>(_allTriangles[0]);
            invertedFloorTriangles.Reverse();
            _invertedFloorMesh.SetTriangles(invertedFloorTriangles, 0);
            _invertedFloorMesh.UploadMeshData(false);
            FloorMeshFilter = _floorGameObject.AddComponent<MeshFilter>();
            FloorMeshFilter.sharedMesh = _floorMesh;
            _floorMeshRenderer = _floorGameObject.AddComponent<MeshRenderer>();
            if (!_materialsCreated)
            {
                _floorMaterial = World.Instance.BuildMaterial(floorTexture);
                _floorMeshRenderer.sharedMaterial = _floorMaterial;
            }
            _floorCollider = _floorGameObject.AddComponent<MeshCollider>();
            _floorCollider.sharedMesh = _floorMesh;
            _invertedFloorCollider = _floorGameObject.AddComponent<MeshCollider>();
            _invertedFloorCollider.sharedMesh = _invertedFloorMesh;
            _invertedFloorCollider.enabled = false;
            _ceilMesh.SetVertices(_allVertices);
            _ceilMesh.SetUVs(0, _allUVs);
            _ceilMesh.subMeshCount = 1;
            _ceilMesh.SetTriangles(_allTriangles[1], 0);
            _ceilMesh.RecalculateNormals();
            _ceilMesh.UploadMeshData(false);
            _invertedCeilMesh.SetVertices(_allVertices);
            _invertedCeilMesh.SetUVs(0, _allUVs);
            _invertedCeilMesh.subMeshCount = 1;
            //todo: allocation
            var invertedCeilTriangles = new List<int>(_allTriangles[1]);
            invertedCeilTriangles.Reverse();
            _invertedCeilMesh.SetTriangles(invertedCeilTriangles, 0);
            _invertedCeilMesh.UploadMeshData(false);
            CeilMeshFilter.sharedMesh = _ceilMesh;
            if (!_materialsCreated)
            {
                _ceilMaterial = World.Instance.BuildMaterial(ceilTexture);
                _ceilMeshRenderer.sharedMaterial = _ceilMaterial;
            }
            _ceilCollider.sharedMesh = _ceilMesh;
            _invertedCeilCollider.sharedMesh = _invertedCeilMesh;
            _invertedCeilCollider.enabled = false;
            _materialsCreated = true;
        }

        public void UpdateAllMeshes()
        {
            var meshIndex = 0;
            //if (Math.Abs(AcknexObject.GetFloat("CEIL_HGT") - AcknexObject.GetFloat("FLOOR_HGT")) > Mathf.Epsilon)
            //{
            BuildFloorOrCeil( /*contouredRegion, allVertices, allUVs, allTriangles,*/ ref meshIndex);
            BuildFloorOrCeil( /*contouredRegion, allVertices, allUVs, allTriangles,*/ ref meshIndex, true);
            BuildMeshes( /*allVertices, allUVs, allTriangles*/);
            //}
        }

        public void BuildFloorOrCeil( /*ContouredRegion contouredRegion, List<Vector3> allVertices, List<Vector2> allUVs, Dictionary<int, List<int>> allTriangles,*/ ref int meshIndex, bool ceil = false)
        {
            var tess = new Tess();
            foreach (var contouredList in ContouredRegion)
            {
                tess.AddContour(contouredList);
            }
            tess.Tessellate();
            var floorVertices = new Vector3[tess.VertexCount];
            var height = ceil ? AcknexObject.GetFloat("CEIL_HGT") : AcknexObject.GetFloat("FLOOR_HGT");
            var lifted = (ceil && AcknexObject.HasFlag("CEIL_LIFTED")) || (!ceil && AcknexObject.HasFlag("FLOOR_LIFTED"));
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

        public static Region Locate(IAcknexObject acknexObject, Region currentRegion, float radius, float thingX, float thingY, ref float thingZ, bool onCeil = false, float? height = null)
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
                var zCheck = height ?? currentRegion.AcknexObject.GetFloat("FLOOR_HGT");
                var point = new Vector3(thingX, zCheck, thingY);
                if (Physics.SphereCast(new Ray(point, Vector3.up), radius, out var raycastHit, Mathf.Infinity, World.Instance.WallsWaterAndRegions))
                {
                    if (GetValue(raycastHit, ref thingZ, out var outRegion))
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
                var zCheck = height ?? currentRegion.AcknexObject.GetFloat("CEIL_HGT");
                var point = new Vector3(thingX, zCheck, thingY);
                if (Physics.SphereCast(new Ray(point, Vector3.down), radius, out var raycastHit, Mathf.Infinity, World.Instance.WallsWaterAndRegions))
                {
                    if (GetValue(raycastHit, ref thingZ, out var outRegion))
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
            return Mathf.Abs(AcknexObject.GetFloat("CEIL_HGT") - AcknexObject.GetFloat("FLOOR_HGT"));
        }

        //todo: sum below regions
        public float GetRealCeilHeight()
        {
            return AcknexObject.GetFloat("FLOOR_HGT") + GetDepth();
        }

        //todo: sum below regions
        public float GetRealFloorHeight()
        {
            return AcknexObject.GetFloat("FLOOR_HGT");
        }

        public void BuildBelowInstance(List<Region> createdRegions)
        {
            //this.Enable();
            if (Below != null)
            {
                var belowAcknexObject = (AcknexObject)Below.AcknexObject;
                var newAcknexObject = new AcknexObject(GetTemplateCallback, ObjectType.Region);
                newAcknexObject.ObjectProperties = new Dictionary<string, object>(belowAcknexObject.ObjectProperties);
                newAcknexObject.NumberProperties = new Dictionary<string, float>(belowAcknexObject.NumberProperties);
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
    }
}