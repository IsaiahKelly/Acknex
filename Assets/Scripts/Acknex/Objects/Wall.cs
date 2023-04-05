using System;
using System.Collections;
using System.Collections.Generic;
using Acknex.Interfaces;
using LibTessDotNet;
using UnityEngine;
using UnityEngine.Rendering;
using Utils;

namespace Acknex
{
    public class Wall : MonoBehaviour, IAcknexObjectContainer
    {
        private Dictionary<IAcknexObject, List<int>> _allTriangles;
        private List<Vector2> _allUVs;
        private List<Vector3> _allVertices;
        private Coroutine _animateCoroutine;
        private GameObject _attached;
        private AudioSource _audioSource;
        private GameObject _audioSourceGameObject;
        private MeshCollider _collider;
        private CollisionCallback _collisionCallbackA;
        private CollisionCallback _collisionCallbackB;
        private GameObject _innerGameObject;
        private MeshCollider _invertedCollider;
        private Mesh _invertedMesh;
        private Texture _lastTextureObject;
        private bool _materialsCreated;
        private Mesh _mesh;
        private MeshRenderer _meshRenderer;
        private GameObject _vertexGameObjectA;
        private GameObject _vertexGameObjectB;
        private SphereCollider _vertexTriggerA;
        private SphereCollider _vertexTriggerB;
        private Vector3 _xAxis;

        //todo: can remove, debug info
        public Matrix4x4 BottomQuad;
        public Matrix4x4 BottomUV;
        public bool DisableRender;
        public bool Processed;

        public Texture TextureObject => AcknexObject.TryGetAcknexObject("TEXTURE", out var textureObject) ? textureObject?.Container as Texture : null;
        public Bitmap BitmapImage => TextureObject?.GetBitmapAt();

        public MeshFilter Filter { get; set; }

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Wall);

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
            return Vector3.Lerp(_vertexGameObjectA.transform.position, _vertexGameObjectB.transform.position, 0.5f);
        }

        public IAcknexObject GetRegion()
        {
            return null;
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
#if DEBUG_ENABLED
            Debug.Log(AcknexObject.GetString("NAME"));
            DebugExtension.DebugWireSphere(GetCenter(), Color.blue, 1f, 10f);
#endif
            _audioSource.Stop();
            _audioSource.clip = soundContainer.AudioClip;
            _audioSource.maxDistance = Mathf.Max(sDist, svDist);
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
            _allVertices = new List<Vector3>();
            _allUVs = new List<Vector2>();
            _allTriangles = new Dictionary<IAcknexObject, List<int>>();
            _mesh = new Mesh();
            _invertedMesh = new Mesh();
            _innerGameObject = new GameObject("Wall");
            _innerGameObject.layer = World.Instance.WallsAndRegionsLayer.LayerIndex;
            _innerGameObject.transform.SetParent(transform, false);
            Filter = _innerGameObject.AddComponent<MeshFilter>();
            _meshRenderer = _innerGameObject.AddComponent<MeshRenderer>();
            _collider = _innerGameObject.AddComponent<MeshCollider>();
            _invertedCollider = _innerGameObject.AddComponent<MeshCollider>();
            _invertedCollider.enabled = false;

            _vertexGameObjectA = new GameObject("VertexA");
            _vertexGameObjectA.transform.SetParent(transform, false);
            _vertexGameObjectA.layer = World.Instance.TriggersLayer.LayerIndex;
            _vertexTriggerA = _vertexGameObjectA.AddComponent<SphereCollider>();
            _vertexTriggerA.isTrigger = true;
            _collisionCallbackA = _vertexGameObjectA.AddComponent<CollisionCallback>();
            _collisionCallbackA.OnTriggerEnterCallback += OnWallTriggerEnter;
            _collisionCallbackA.OnTriggerExitCallback += OnWallTriggerExit;

            _vertexGameObjectB = new GameObject("VertexB");
            _vertexGameObjectB.transform.SetParent(transform, false);
            _vertexGameObjectB.layer = World.Instance.TriggersLayer.LayerIndex;
            _vertexTriggerB = _vertexGameObjectB.AddComponent<SphereCollider>();
            _vertexTriggerB.isTrigger = true;
            _collisionCallbackB = _vertexGameObjectB.AddComponent<CollisionCallback>();
            _collisionCallbackB.OnTriggerEnterCallback += OnWallTriggerEnter;
            _collisionCallbackB.OnTriggerExitCallback += OnWallTriggerExit;

            _audioSourceGameObject = new GameObject("AudioSource");
            _audioSourceGameObject.transform.SetParent(transform, false);
            _audioSource = _audioSourceGameObject.AddComponent<AudioSource>();
            _audioSource.minDistance = 0f;
            _audioSource.maxDistance = 0f;
            _audioSource.volume = 0f;
            _audioSource.playOnAwake = false;
            _audioSource.spatialBlend = 1f;
            _audioSource.rolloffMode = AudioRolloffMode.Linear;
            _audioSource.spread = 360f;

        }

        //private void OnCollisionExitCallback(Collision collision)
        //{
        //
        //}
        //
        //private void OnCollisionEnterCallback(Collision collision)
        //{
        //
        //}

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
                _meshRenderer.enabled = false;
                _collider.enabled = false;
                return;
            }
            _meshRenderer.enabled = !DisableRender;
            AcknexObject.SetFloat("VISIBLE", AcknexObject.GetFloat("INVISIBLE") > 0f ? 0f : 1f);
            var hasPlay = AcknexObject.HasFlag("PLAY");
            if (TextureObject != _lastTextureObject || hasPlay)
            {
                if (_animateCoroutine != null)
                {
                    StopCoroutine(_animateCoroutine);
                }
                if (TextureObject != null)
                {
                    if (hasPlay)
                    {
                        AcknexObject.AddFlag("ONESHOT");
                        AcknexObject.RemoveFlag("PLAY");
                    }
                    _animateCoroutine = StartCoroutine(Animate());
                }
                _lastTextureObject = TextureObject;
            }
            //todo reimplement
            //Attachment.HandleAttachment(ref _attached, gameObject, AcknexObject, TextureObject, XAxis, BottomQuad.GetColumn(0), true);
            _meshRenderer.shadowCastingMode = TextureObject != null && TextureObject.AcknexObject.HasFlag("SKY") ? ShadowCastingMode.Off : ShadowCastingMode.TwoSided;
            _collider.enabled = !AcknexObject.HasFlag("PASSABLE");
            _vertexTriggerB.radius = _vertexTriggerA.radius = AcknexObject.GetFloat("DIST");
            _vertexGameObjectA.transform.position = BottomQuad.GetColumn(3);
            _vertexGameObjectB.transform.position = BottomQuad.GetColumn(2);
            _invertedCollider.enabled = AcknexObject.HasFlag("FENCE");
        }

        private static IAcknexObject GetTemplateCallback(string name)
        {
            if (World.Instance.WallsByName.TryGetValue(name, out var wall))
            {
                return wall.AcknexObject;
            }
            return null;
        }

        private void Awake()
        {
            AcknexObject.Container = this;
        }

        private IEnumerator Animate()
        {
            while (TextureObject == null)
            {
                yield return null;
            }
            var enumerator = TextureObject.AnimateTexture(true, _meshRenderer, Filter, null, AcknexObject, AcknexObject, null);
            while (enumerator.MoveNext())
            {
                yield return enumerator.Current;
            }
        }

        private void OnWallTriggerExit(Collider collider)
        {
            if (collider.TryGetComponent<Player>(out var player))
            {
                World.Instance.TriggerEvent("IF_FAR", AcknexObject, player.AcknexObject, player.GetRegion());
            }
        }

        private void OnWallTriggerEnter(Collider collider)
        {
            if (collider.TryGetComponent<Player>(out var player))
            {
                World.Instance.TriggerEvent("IF_NEAR", AcknexObject, player.AcknexObject, player.GetRegion());
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


        //private void OnDrawGizmosSelected()
        //{
        //    var middleX = Mathf.Lerp(_vertexGameObjectA.transform.position.x, _vertexGameObjectB.transform.position.x, 0.5f);
        //    var middleZ = Mathf.Lerp(_vertexGameObjectA.transform.position.z, _vertexGameObjectB.transform.position.z, 0.5f);

        //    Gizmos.color = Color.red;
        //    Gizmos.DrawSphere(new Vector3(middleX, _floorHeightDown, middleZ), 0.5f);
        //    Gizmos.color = Color.green;
        //    Gizmos.DrawSphere(new Vector3(middleX, _ceilHeightDown, middleZ), 0.5f);

        //    Gizmos.color = Color.blue;
        //    Gizmos.DrawSphere(new Vector3(middleX, _floorHeightUp, middleZ), 0.5f);
        //    Gizmos.color = Color.yellow;
        //    Gizmos.DrawSphere(new Vector3(middleX, _ceilHeightUp, middleZ), 0.5f);

        //    GizmosUtils.DrawString("0" + "(" + (Vector2)BottomUV.GetColumn(0) + ")", BottomQuad.GetColumn(0));
        //    GizmosUtils.DrawString("1" + "(" + (Vector2)BottomUV.GetColumn(1) + ")", BottomQuad.GetColumn(1));
        //    GizmosUtils.DrawString("2" + "(" + (Vector2)BottomUV.GetColumn(2) + ")", BottomQuad.GetColumn(2));
        //    GizmosUtils.DrawString("3" + "(" + (Vector2)BottomUV.GetColumn(3) + ")", BottomQuad.GetColumn(3));
        //}

        private void UpdateEvents()
        {
            World.Instance.TriggerEvent("DO", AcknexObject, AcknexObject, GetRegion());
        }

        public void ProcessWall(List<ContourVertex> allContourVertices, Wall wallA, KeyValuePair<IAcknexObject, RegionWall> kvp, ref int vertexCount, bool inverted = false)
        {
            var contourVertices = World.Instance.ContourVertices;
            vertexCount++;
            var initialVertex = contourVertices[inverted ? wallA.AcknexObject.GetInteger("VERTEX2") : wallA.AcknexObject.GetInteger("VERTEX1")];
            initialVertex = new ContourVertex(initialVertex.Position, new WallWithSide(wallA, inverted));
            allContourVertices.Add(initialVertex);
            wallA.Processed = true;
            var foundPair = false;
            foreach (var wallB in kvp.Value)
            {
                if (wallB.Processed)
                {
                    continue;
                }
                if (inverted)
                {
                    if (wallB.AcknexObject.GetInteger("VERTEX2") == wallA.AcknexObject.GetInteger("VERTEX1"))
                    {
                        ProcessWall(allContourVertices, wallB, kvp, ref vertexCount, true);
                        foundPair = true;
                        break;
                    }
                    if (wallB.AcknexObject.GetInteger("VERTEX1") == wallA.AcknexObject.GetInteger("VERTEX1"))
                    {
                        ProcessWall(allContourVertices, wallB, kvp, ref vertexCount);
                        foundPair = true;
                        break;
                    }
                }
                else
                {
                    if (wallB.AcknexObject.GetInteger("VERTEX1") == wallA.AcknexObject.GetInteger("VERTEX2"))
                    {
                        ProcessWall(allContourVertices, wallB, kvp, ref vertexCount);
                        foundPair = true;
                        break;
                    }
                    if (wallB.AcknexObject.GetInteger("VERTEX2") == wallA.AcknexObject.GetInteger("VERTEX2"))
                    {
                        ProcessWall(allContourVertices, wallB, kvp, ref vertexCount, true);
                        foundPair = true;
                        break;
                    }
                }
            }
            if (!foundPair)
            {
                var endingVertex = contourVertices[inverted ? wallA.AcknexObject.GetInteger("VERTEX1") : wallA.AcknexObject.GetInteger("VERTEX2")];
                endingVertex = new ContourVertex(endingVertex.Position, new WallWithSide(wallA, inverted));
                allContourVertices.Add(endingVertex);
                vertexCount++;
            }
        }

        private void BuildWallMesh()
        {
            _mesh.SetVertices(_allVertices);
            _mesh.SetUVs(0, _allUVs);
            _mesh.subMeshCount = _allTriangles.Count;
            var triangleListIndex = 0;
            foreach (var triangleList in _allTriangles.Values)
            {
                _mesh.SetIndices(triangleList, MeshTopology.Quads, triangleListIndex++);
            }
            _mesh.RecalculateNormals();
            _mesh.UploadMeshData(false);
            _invertedMesh.SetVertices(_allVertices);
            _invertedMesh.SetUVs(0, _allUVs);
            _invertedMesh.subMeshCount = _allTriangles.Count;
            for (var invertedTriangleListIndex = 0; invertedTriangleListIndex < _allTriangles.Count; invertedTriangleListIndex++)
            {
                var indices = _mesh.GetIndices(invertedTriangleListIndex);
                Array.Reverse(indices);
                _invertedMesh.SetIndices(indices, MeshTopology.Quads, invertedTriangleListIndex);
            }
            _invertedMesh.UploadMeshData(false);
            //todo: this needs another approach, as textures might change from common to sky and visce-versa
            if (!_materialsCreated)
            {
                var materials = new Material[_allTriangles.Count];
                var allTrianglesIndex = 0;
                foreach (var texture in _allTriangles.Keys)
                {
                    var material = World.Instance.BuildMaterial(texture);
                    materials[allTrianglesIndex++] = material;
                }
                _materialsCreated = true;
                _meshRenderer.sharedMaterials = materials;
            }
            Filter.sharedMesh = _mesh;
            _collider.sharedMesh = _mesh;
            _invertedCollider.sharedMesh = _invertedMesh;
        }

        private void BuildWall(ContourVertex vertexA, ContourVertex vertexB, List<ContourVertex> vertices, Region rightRegion, Region leftRegion, Region rightRegionAbove = null, Region leftRegionAbove = null)
        {
            if (leftRegion == null)
            {
                leftRegion = leftRegionAbove;
            }
            if (rightRegion == null)
            {
                rightRegion = rightRegionAbove;
            }
            var leftRegionBelowCeilHeight = leftRegion?.Below == null ? 0f : leftRegion.Below.AcknexObject.GetFloat("CEIL_HGT");
            var rightRegionBelowCeilHeight = rightRegion?.Below == null ? 0f : rightRegion.Below.AcknexObject.GetFloat("CEIL_HGT");
            var leftRegionAboveFloorHeight = leftRegionAbove == null ? 0f : leftRegionAbove.AcknexObject.GetFloat("FLOOR_HGT");
            var rightRegionAboveFloorHeight = rightRegionAbove == null ? 0f : rightRegionAbove.AcknexObject.GetFloat("FLOOR_HGT");
            //todo: checking by the flag here is wrong
            if (AcknexObject.HasFlag("FENCE"))
            //leftRegion.AcknexObject.GetNumber("FLOOR_HGT") == rightRegion.AcknexObject.GetNumber("FLOOR_HGT") && 
            //leftRegion.AcknexObject.GetNumber("CEIL_HGT") == rightRegion.AcknexObject.GetNumber("CEIL_HGT"))
            {
                BuildFence(rightRegionAbove, leftRegionAbove, leftRegion, leftRegionBelowCeilHeight, rightRegion, rightRegionBelowCeilHeight, leftRegionAboveFloorHeight, rightRegionAboveFloorHeight, vertexA, vertexB);
            }
            else

            {
                //if (leftRegionAbove != null || rightRegionAbove != null)
                {
                    //floor conf
                    float ceilHeightDown;
                    float floorHeightDown;
                    int leftLiftDown;
                    int rightLiftDown;
                    {
                        var ceilHeight = leftRegion.AcknexObject.GetFloat("FLOOR_HGT", false);
                        var floorHeight = rightRegion.AcknexObject.GetFloat("FLOOR_HGT", false);
                        if (leftRegion.Below != null)
                        {
                            ceilHeight = Mathf.Max(ceilHeight, leftRegionBelowCeilHeight);
                            floorHeight = Mathf.Max(floorHeight, leftRegionBelowCeilHeight);
                        }
                        if (rightRegion.Below != null)
                        {
                            floorHeight = Mathf.Max(floorHeight, rightRegionBelowCeilHeight);
                            ceilHeight = Mathf.Max(ceilHeight, rightRegionBelowCeilHeight);
                        }
                        if (leftRegionAbove != null && leftRegionAbove != leftRegion)
                        {
                            ceilHeight = Mathf.Min(ceilHeight, leftRegionAboveFloorHeight);
                            floorHeight = Mathf.Min(floorHeight, leftRegionAboveFloorHeight);
                        }
                        if (rightRegionAbove != null && rightRegionAbove != rightRegion)
                        {
                            floorHeight = Mathf.Min(floorHeight, rightRegionAboveFloorHeight);
                            ceilHeight = Mathf.Min(ceilHeight, rightRegionAboveFloorHeight);
                        }
                        ceilHeightDown = ceilHeight;
                        floorHeightDown = floorHeight;
                        leftLiftDown = leftRegion.GetFloorLift();
                        rightLiftDown = rightRegion.GetFloorLift();
                    }
                    //ceil conf
                    float ceilHeightUp;
                    float floorHeightUp;
                    int leftLiftUp;
                    int rightLiftUp;
                    {
                        var ceilHeight = leftRegion.AcknexObject.GetFloat("CEIL_HGT", false);
                        var floorHeight = rightRegion.AcknexObject.GetFloat("CEIL_HGT", false);
                        if (leftRegionAbove != null && leftRegionAbove != leftRegion)
                        {
                            ceilHeight = Mathf.Min(ceilHeight, leftRegionAboveFloorHeight);
                            floorHeight = Mathf.Min(floorHeight, leftRegionAboveFloorHeight);
                        }
                        if (rightRegionAbove != null && rightRegionAbove != rightRegion)
                        {
                            floorHeight = Mathf.Min(floorHeight, rightRegionAboveFloorHeight);
                            ceilHeight = Mathf.Min(ceilHeight, rightRegionAboveFloorHeight);
                        }
                        ceilHeightUp = ceilHeight;
                        floorHeightUp = floorHeight;
                        leftLiftUp = leftRegion.GetCeilLift();
                        rightLiftUp = rightRegion.GetCeilLift();
                    }
                    var middleOpen = Mathf.Abs(ceilHeightUp - ceilHeightDown) > 0f;
                    var liftedLeftDown = (middleOpen || leftRegionAbove == null) && leftLiftDown != 0;
                    var liftedRightDown = (middleOpen || rightRegionAbove == null) && rightLiftDown != 0;
                    var liftedLeftUp = (middleOpen || leftRegionAbove == null) && leftLiftUp != 0;
                    var liftedRightUp = (middleOpen || rightRegionAbove == null) && rightLiftUp != 0;
                    //negative space
                    if (false)//( Math.Abs(ceilHeightDown - floorHeightDown) < Mathf.Epsilon && Math.Abs(ceilHeightUp - floorHeightUp) < Mathf.Epsilon)
                    {
                        var v0 = new Vector3(vertexA.Position.X, floorHeightUp + (liftedLeftUp ? (vertexA.Position.Z * leftLiftUp) : 0), vertexA.Position.Y);
                        var v1 = new Vector3(vertexB.Position.X, floorHeightUp + (liftedLeftUp ? (vertexB.Position.Z * leftLiftUp) : 0), vertexB.Position.Y);
                        var v2 = new Vector3(vertexB.Position.X, ceilHeightDown + (liftedRightDown ? (vertexB.Position.Z * rightLiftDown) : 0), vertexB.Position.Y);
                        var v3 = new Vector3(vertexA.Position.X, ceilHeightDown + (liftedRightDown ? (vertexA.Position.Z * rightLiftDown) : 0), vertexA.Position.Y);
                        if (Mathf.Abs(v2.y - v0.y) > Mathf.Epsilon || Mathf.Abs(v3.y - v1.y) > Mathf.Epsilon)
                        {
                            MeshUtils.AddQuad(0, 1, 2, 3, _allTriangles, AcknexObject.GetAcknexObject("TEXTURE"), _allVertices.Count);
                            _allVertices.Add(v0); //a
                            _allVertices.Add(v1); //b
                            _allVertices.Add(v2); //c
                            _allVertices.Add(v3); //d
                            var uv0 = CalculateUV(v0 - v0, v0);
                            var uv1 = CalculateUV(v1 - v0, v1);
                            var uv2 = CalculateUV(v2 - v0, v2);
                            var uv3 = CalculateUV(v3 - v0, v3);
                            _allUVs.Add(uv0);
                            _allUVs.Add(uv1);
                            _allUVs.Add(uv2);
                            _allUVs.Add(uv3);
                            BottomQuad = new Matrix4x4(v0, v1, v2, v3);
                            BottomUV = new Matrix4x4(uv0, uv1, uv2, uv3);
                        }
                    }
                    else
                    {
                        //floor
                        {
                            var v0 = new Vector3(vertexA.Position.X, ceilHeightDown + (liftedLeftDown ? (vertexA.Position.Z * leftLiftDown) : 0), vertexA.Position.Y);
                            var v1 = new Vector3(vertexB.Position.X, ceilHeightDown + (liftedLeftDown ? (vertexB.Position.Z * leftLiftDown) : 0), vertexB.Position.Y);
                            var v2 = new Vector3(vertexB.Position.X, floorHeightDown + (liftedRightDown ? (vertexB.Position.Z * rightLiftDown) : 0), vertexB.Position.Y);
                            var v3 = new Vector3(vertexA.Position.X, floorHeightDown + (liftedRightDown ? (vertexA.Position.Z * rightLiftDown) : 0), vertexA.Position.Y);
                            if (Mathf.Abs(v2.y - v0.y) > Mathf.Epsilon || Mathf.Abs(v3.y - v1.y) > Mathf.Epsilon)
                            {
                                MeshUtils.AddQuad(0, 1, 2, 3, _allTriangles, AcknexObject.GetAcknexObject("TEXTURE"), _allVertices.Count);
                                _allVertices.Add(v0); //a
                                _allVertices.Add(v1); //b
                                _allVertices.Add(v2); //c
                                _allVertices.Add(v3); //d
                                var uv0 = CalculateUV(v0 - v0, v0);
                                var uv1 = CalculateUV(v1 - v0, v1);
                                var uv2 = CalculateUV(v2 - v0, v2);
                                var uv3 = CalculateUV(v3 - v0, v3);
                                _allUVs.Add(uv0);
                                _allUVs.Add(uv1);
                                _allUVs.Add(uv2);
                                _allUVs.Add(uv3);
                                BottomQuad = new Matrix4x4(v0, v1, v2, v3);
                                BottomUV = new Matrix4x4(uv0, uv1, uv2, uv3);
                            }
                        }
                        //ceil
                        {
                            var v0 = new Vector3(vertexA.Position.X, ceilHeightUp + (liftedLeftUp ? (vertexA.Position.Z * leftLiftUp) : 0), vertexA.Position.Y);
                            var v1 = new Vector3(vertexB.Position.X, ceilHeightUp + (liftedLeftUp ? (vertexB.Position.Z * leftLiftUp) : 0), vertexB.Position.Y);
                            var v2 = new Vector3(vertexB.Position.X, floorHeightUp + (liftedRightUp ? (vertexB.Position.Z * rightLiftUp) : 0), vertexB.Position.Y);
                            var v3 = new Vector3(vertexA.Position.X, floorHeightUp + (liftedRightUp ? (vertexA.Position.Z * rightLiftUp) : 0), vertexA.Position.Y);
                            if (Mathf.Abs(v2.y - v0.y) > Mathf.Epsilon || Mathf.Abs(v3.y - v1.y) > Mathf.Epsilon)
                            {
                                MeshUtils.AddQuad(3, 2, 1, 0, _allTriangles, AcknexObject.GetAcknexObject("TEXTURE"), _allVertices.Count);
                                _allVertices.Add(v0);
                                _allVertices.Add(v1);
                                _allVertices.Add(v2);
                                _allVertices.Add(v3);
                                var uv0 = CalculateUV(v0 - v0, v0);
                                var uv1 = CalculateUV(v1 - v0, v1);
                                var uv2 = CalculateUV(v2 - v0, v2);
                                var uv3 = CalculateUV(v3 - v0, v3);
                                _allUVs.Add(uv0);
                                _allUVs.Add(uv1);
                                _allUVs.Add(uv2);
                                _allUVs.Add(uv3);
                            }
                        }
                    }
                }
            }
            if (leftRegion?.Below != null || rightRegion?.Below != null)
            {
                //var newWall = World.Instance.CreateWall(leftRegion?.Below?.AcknexObject.GetString("NAME") ?? rightRegion?.Below?.AcknexObject.GetString("NAME"));
                //World.Instance.PostSetupObjectInstance(newWall.AcknexObject);
                //newWall.BuildWall(vertexA, vertexB, vertices, rightRegion?.Below, leftRegion?.Below, rightRegion, leftRegion);
                {
                    BuildWall(vertexA, vertexB, vertices, rightRegion?.Below, leftRegion?.Below, rightRegion, leftRegion);
                }
            }
        }

        private void BuildFence(Region rightRegionAbove, Region leftRegionAbove, Region leftRegion, float leftRegionBelowCeilHeight, Region rightRegion, float rightRegionBelowCeilHeight, float leftRegionAboveFloorHeight, float rightRegionAboveFloorHeight, ContourVertex vertexA, ContourVertex vertexB)
        {
            var floorHeight = leftRegion.AcknexObject.GetFloat("FLOOR_HGT", false);
            var ceilHeight = leftRegion.AcknexObject.GetFloat("CEIL_HGT", false);
            if (leftRegion.Below != null)
            {
                floorHeight = Mathf.Max(floorHeight, leftRegionBelowCeilHeight);
            }
            if (rightRegion?.Below != null)
            {
                floorHeight = Mathf.Max(floorHeight, rightRegionBelowCeilHeight);
            }
            if (leftRegionAbove != null && leftRegionAbove != leftRegion)
            {
                ceilHeight = Mathf.Min(ceilHeight, leftRegionAboveFloorHeight);
            }
            if (rightRegionAbove != null && rightRegionAbove != rightRegion)
            {
                ceilHeight = Mathf.Min(ceilHeight, rightRegionAboveFloorHeight);
            }
            var liftedLeft = leftRegionAbove == null && leftRegion.AcknexObject.HasFlag("FLOOR_LIFTED");
            var liftedRight = rightRegionAbove == null && rightRegion.AcknexObject.HasFlag("FLOOR_LIFTED");
            var v0 = new Vector3(vertexA.Position.X, ceilHeight + (liftedLeft ? vertexA.Position.Z : 0), vertexA.Position.Y);
            var v1 = new Vector3(vertexB.Position.X, ceilHeight + (liftedLeft ? vertexB.Position.Z : 0), vertexB.Position.Y);
            var v2 = new Vector3(vertexB.Position.X, floorHeight + (liftedRight ? vertexB.Position.Z : 0), vertexB.Position.Y);
            var v3 = new Vector3(vertexA.Position.X, floorHeight + (liftedRight ? vertexA.Position.Z : 0), vertexA.Position.Y);
            if (Mathf.Abs(v2.y - v0.y) > Mathf.Epsilon || Mathf.Abs(v3.y - v1.y) > Mathf.Epsilon)
            {
                MeshUtils.AddQuad(0, 1, 2, 3, _allTriangles, AcknexObject.GetAcknexObject("TEXTURE"), _allVertices.Count);
                _allVertices.Add(v0); //a
                _allVertices.Add(v1); //b
                _allVertices.Add(v2); //c
                _allVertices.Add(v3); //d
                var uv0 = CalculateUV(v0 - v0, v0);
                var uv1 = CalculateUV(v1 - v0, v1);
                var uv2 = CalculateUV(v2 - v0, v2);
                var uv3 = CalculateUV(v3 - v0, v3);
                _allUVs.Add(uv0);
                _allUVs.Add(uv1);
                _allUVs.Add(uv2);
                _allUVs.Add(uv3);
                BottomQuad = new Matrix4x4(v0, v1, v2, v3);
                BottomUV = new Matrix4x4(uv0, uv1, uv2, uv3);
            }
        }

        private Vector2 CalculateUV(Vector3 input, Vector3 yAxis)
        {
            var uv = new Vector2(Vector3.Project(input, _xAxis).magnitude, yAxis.y);
            return uv;
        }

        public void UpdateAllMeshes()
        {
            _allVertices.Clear();
            _allUVs.Clear();
            _allTriangles.Clear();
            var contourVertices = World.Instance.ContourVertices;
            var rightRegion = AcknexObject.GetAcknexObject("REGION1").Container as Region;
            var leftRegion = AcknexObject.GetAcknexObject("REGION2").Container as Region;
            var vertexA = contourVertices[AcknexObject.GetInteger("VERTEX1")];
            var vertexB = contourVertices[AcknexObject.GetInteger("VERTEX2")];
            var xAxis = (new Vector3(vertexB.Position.X, 0f, vertexB.Position.Y) - new Vector3(vertexA.Position.X, 0f, vertexA.Position.Y)).normalized;
            _xAxis = xAxis;
            //AcknexObject.SetFloat("X1", vertexA.Position.X);
            //AcknexObject.SetFloat("Y1", vertexA.Position.Y);
            //AcknexObject.SetFloat("Z1", vertexA.Position.Z);
            //AcknexObject.SetFloat("X2", vertexB.Position.X);
            //AcknexObject.SetFloat("Y2", vertexB.Position.Y);
            //AcknexObject.SetFloat("Z2", vertexB.Position.Z);
            BuildWall(vertexA, vertexB, contourVertices, rightRegion, leftRegion);
            BuildWallMesh();
        }
    }
}