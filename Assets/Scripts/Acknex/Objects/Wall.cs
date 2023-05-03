using NameId = System.UInt32;
using System.Collections;
using System.Collections.Generic;
using Acknex.Interfaces;
using LibTessDotNet;
using UnityEngine;
using UnityEngine.Rendering;
using PropertyName = Acknex.Interfaces.PropertyName;
#if DEBUG_ENABLED
using Utils;
#endif

namespace Acknex
{
    public class Wall : MonoBehaviour, IAcknexObjectContainer, IGraphicObject
    {
        public override string ToString()
        {
            return AcknexObject.ToString();
        }

        private readonly List<Vector4> _attachmentPos = new List<Vector4>();
        private readonly List<Texture> _tempAttachments = new List<Texture>();
        private Dictionary<WallPart, List<int>> _allTriangles;
        private List<Vector2> _allUVs;
        private List<Vector3> _allVertices;
        private Coroutine _animateCoroutine;
        private GameObject _attached;
        private Texture2DArray _attachmentsTexture;
        private AudioSource _audioSource;
        private GameObject _audioSourceGameObject;
        private MeshCollider _collider;
        private CollisionCallback _collisionCallbackA;
        private CollisionCallback _collisionCallbackB;
        private GameObject _gameObject;
        private MeshCollider _gapCollider;
        private GameObject _gapGameObject;
        private MeshCollider _gapInvertedCollider;
        private Mesh _gapInvertedMesh;
        private Mesh _gapMesh;
        private MeshRenderer _gapMeshRenderer;
        private Material[] _gapMeshRendererMaterials;
        private MeshCollider _invertedCollider;
        private Mesh _invertedMesh;
        private float _lastAmbient;
        private Texture _lastTextureObject;
        private bool _materialsCreated;
        private Mesh _mesh;
        private MeshRenderer _meshRenderer;
        private Material[] _meshRendererMaterials;
        private Texture2DArray _paletteTextures;
        private GameObject _vertexGameObjectA;
        private GameObject _vertexGameObjectB;
        private SphereCollider _vertexTriggerA;
        private SphereCollider _vertexTriggerB;
        private Vector3 _xAxis;

        public AckTransform AckTransform;
        public Matrix4x4 BottomQuad;
        public Matrix4x4 BottomUV;
        public bool DisableRender;
        public Matrix4x4 GapQuad;
        public Matrix4x4 GapUV;
        public bool Processed;
        public Matrix4x4 TopQuad;
        public Matrix4x4 TopUV;
        private IAcknexObject _rightRegionInstance;
        private IAcknexObject _leftRegionInstance;

        public MeshFilter Filter { get; set; }
        public MeshFilter GapFilter { get; set; }
        public Texture TextureObject => AcknexObject.TryGetAcknexObject(PropertyName.TEXTURE, out var textureObject) ? textureObject?.Container as Texture : null;
        public Bitmap BitmapImage => TextureObject?.GetBitmapAt();
        public bool HasGap { get; private set; }
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Wall);
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

        public GameObject GameObject => gameObject;

        public Vector3 GetCenter()
        {
            if (HasGap)
            {
                return (GapQuad.GetColumn(0) + GapQuad.GetColumn(1) + GapQuad.GetColumn(2) + GapQuad.GetColumn(3)) / 4f;
            }
            return (BottomQuad.GetColumn(0) + BottomQuad.GetColumn(1) + BottomQuad.GetColumn(2) + BottomQuad.GetColumn(3)) / 4f;
        }

        public IAcknexObject GetRegion()
        {
            return _rightRegionInstance;
        }

        public bool IsGeometryDirty { get; set; }


        public bool IsTextureDirty
        {
            get
            {
                var ambient = GetAmbient();
                var textureObject = TextureObject;
                var hasPlay = AcknexObject.HasFlag(PropertyName.PLAY);
                var isTextureDirty = ambient != _lastAmbient || textureObject != _lastTextureObject || (textureObject != null && textureObject.AcknexObject.IsDirty) || hasPlay;
                _lastAmbient = ambient;
                _lastTextureObject = textureObject;
                return isTextureDirty;
            }
            set { }
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
        }

        public float GetAmbient()
        {
            var ambient = AcknexObject.GetFloat(PropertyName.AMBIENT);
            ambient *= ((IGraphicObject)GetRegion().Container).GetAmbient();
            return ambient;
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
            _allTriangles = new Dictionary<WallPart, List<int>>();
            _mesh = new Mesh();
            _invertedMesh = new Mesh();
            _gameObject = new GameObject("Wall") { layer = World.Instance.WallsLayer.LayerIndex };
            _gameObject.transform.SetParent(transform, false);
            _meshRenderer = _gameObject.AddComponent<MeshRenderer>();
            _collider = _gameObject.AddComponent<MeshCollider>();
            _invertedCollider = _gameObject.AddComponent<MeshCollider>();
            _invertedCollider.enabled = false;
            Filter = _gameObject.AddComponent<MeshFilter>();
            _gapMesh = new Mesh();
            _gapInvertedMesh = new Mesh();
            _gapGameObject = new GameObject("Gap") { layer = World.Instance.WallsLayer.LayerIndex };
            _gapGameObject.transform.SetParent(transform, false);
            _gapMeshRenderer = _gapGameObject.AddComponent<MeshRenderer>();
            _gapCollider = _gapGameObject.AddComponent<MeshCollider>();
            _gapInvertedCollider = _gapGameObject.AddComponent<MeshCollider>();
            _gapInvertedCollider.enabled = false;
            GapFilter = _gapGameObject.AddComponent<MeshFilter>();
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
            StartCoroutine(TriggerTickEvents());
            StartCoroutine(TriggerSecEvents());
        }

        public void SetupTemplate()
        {
        }

        public void UpdateObject()
        {
            if (IsGeometryDirty)
            {
                UpdateAllMeshes();
                IsGeometryDirty = false;
            }
            if (IsTextureDirty)
            {
                if (_animateCoroutine != null)
                {
                    StopCoroutine(_animateCoroutine);
                }
                if (TextureObject != null)
                {
                    if (AcknexObject.HasFlag(PropertyName.PLAY))
                    {
                        AcknexObject.AddFlag(PropertyName.ONESHOT);
                        AcknexObject.RemoveFlag(PropertyName.PLAY);
                    }
                    _animateCoroutine = StartCoroutine(Animate());
                }
            }
            var center = GetCenter();
            var pos2D = new Vector2(center.x, center.z);
            var playerPos2D = new Vector2(World.Instance.GetSkillValue(SkillName.PLAYER_X), World.Instance.GetSkillValue(SkillName.PLAYER_Y));
            var distance = Vector2.Distance(playerPos2D, pos2D);
            if (!AcknexObject.HasFlag(PropertyName.LIBER) && distance > World.Instance.AcknexObject.GetFloat(PropertyName.CLIP_DIST))
            {
                return;
            }
            AcknexObject.SetFloat(PropertyName.DISTANCE, distance);
            if (!AcknexObject.IsDirty)
            {
                return;
            }
            AcknexObject.IsDirty = false;
            _vertexGameObjectA.transform.position = (HasGap ? GapQuad : BottomQuad).GetColumn(3);
            _vertexGameObjectB.transform.position = (HasGap ? GapQuad : BottomQuad).GetColumn(2);
            _audioSourceGameObject.transform.position = GetCenter();
            _meshRenderer.enabled = !DisableRender;
            var invisible = AcknexObject.GetFloat(PropertyName.INVISIBLE);
            AcknexObject.SetFloat(PropertyName.VISIBLE, invisible > 0f ? 0f : 1f);
            _meshRenderer.shadowCastingMode = TextureObject != null && TextureObject.AcknexObject.HasFlag(PropertyName.SKY) ? ShadowCastingMode.Off : ShadowCastingMode.TwoSided;
            var impassable = AcknexObject.HasFlag(PropertyName.IMPASSABLE);
            var passable = AcknexObject.HasFlag(PropertyName.PASSABLE);
            var dist = AcknexObject.GetFloat(PropertyName.DIST);
            _invertedCollider.enabled = _collider.enabled = impassable || !passable;
            _vertexTriggerB.radius = _vertexTriggerA.radius = dist;
            _gapInvertedCollider.enabled = _gapCollider.enabled = !passable && ((HasGap && !impassable) || (!HasGap && impassable));
            if (invisible == 1f)
            {
                _gapMeshRenderer.enabled = _meshRenderer.enabled = false;
                return;
            }
            _gapMeshRenderer.enabled = HasGap;
            if (AckTransform.Degrees != 0f)
            {
                transform.RotateAround(AckTransform.Center, Vector3.up, -AckTransform.Degrees);
                _vertexGameObjectA.transform.RotateAround(AckTransform.Center, Vector3.up, -AckTransform.Degrees);
                _vertexGameObjectB.transform.RotateAround(AckTransform.Center, Vector3.up, -AckTransform.Degrees);
                AckTransform.Degrees = 0f;
            }
            if (AckTransform.DX != 0f)
            {
                transform.Translate(AckTransform.DX, 0f, 0f, Space.World);
                _vertexGameObjectA.transform.Translate(AckTransform.DX, 0f, 0f, Space.World);
                _vertexGameObjectB.transform.Translate(AckTransform.DX, 0f, 0f, Space.World);
                AckTransform.DX = 0f;
            }
            if (AckTransform.DY != 0f)
            {
                transform.Translate(0f, 0f, AckTransform.DY, Space.World);
                _vertexGameObjectA.transform.Translate(0f, 0f, AckTransform.DY, Space.World);
                _vertexGameObjectB.transform.Translate(0f, 0f, AckTransform.DY, Space.World);
                AckTransform.DY = 0f;
            }
            if (AckTransform.DZ != 0f)
            {
                transform.Translate(0f, AckTransform.DZ, 0f, Space.World);
                _vertexGameObjectA.transform.Translate(0f, AckTransform.DZ, 0f, Space.World);
                _vertexGameObjectB.transform.Translate(0f, AckTransform.DZ, 0f, Space.World);
                AckTransform.DZ = 0f;
            }
        }

        private static IAcknexObject GetTemplateCallback(NameId name)
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
            var enumerator = TextureObject.AnimateTexture(TextureCanceled, true, HasGap ? _gapMeshRendererMaterials : _meshRendererMaterials, HasGap ? GapFilter : Filter, null, AcknexObject, AcknexObject);
            while (enumerator.MoveNext())
            {
                Attachment.ProcessAttachments(_tempAttachments, ref _attachmentsTexture, ref _paletteTextures, _attachmentPos, TextureObject, HasGap ? _gapMeshRendererMaterials : _meshRendererMaterials);
                yield return enumerator.Current;
            }
        }

        private bool TextureCanceled(Texture texture)
        {
            return AcknexObject.HasFlag(PropertyName.INVISIBLE) || texture != TextureObject;
        }

        private void OnWallTriggerExit(Collider collider)
        {
            if (collider.TryGetComponent<Player>(out var player))
            {
                World.Instance.TriggerEvent(PropertyName.IF_FAR, AcknexObject, player.AcknexObject, player.GetRegion());
            }
        }

        private void OnDrawGizmos()
        {
#if DEBUG_ENABLED
            Gizmos.color = AcknexObject.IsDirty ? Color.green : Color.red;
            Gizmos.DrawSphere(GetCenter(), 1f);
#endif
        }

        private void OnWallTriggerEnter(Collider collider)
        {
            if (collider.TryGetComponent<Player>(out var player))
            {
                World.Instance.TriggerEvent(PropertyName.IF_NEAR, AcknexObject, player.AcknexObject, player.GetRegion());
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
            World.Instance.TriggerEvent(PropertyName.DO, AcknexObject, AcknexObject, GetRegion());
        }

        public void ProcessWall(List<ContourVertex> allContourVertices, Wall wallA, KeyValuePair<IAcknexObject, RegionWall> kvp, ref int vertexCount, bool inverted = false)
        {
            var contourVertices = World.Instance.ContourVertices;
            vertexCount++;
            var initialVertex = contourVertices[inverted ? wallA.AcknexObject.GetInteger(PropertyName.VERTEX2) : wallA.AcknexObject.GetInteger(PropertyName.VERTEX1)];
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
                    if (wallB.AcknexObject.GetInteger(PropertyName.VERTEX2) == wallA.AcknexObject.GetInteger(PropertyName.VERTEX1))
                    {
                        ProcessWall(allContourVertices, wallB, kvp, ref vertexCount, true);
                        foundPair = true;
                        break;
                    }
                    if (wallB.AcknexObject.GetInteger(PropertyName.VERTEX1) == wallA.AcknexObject.GetInteger(PropertyName.VERTEX1))
                    {
                        ProcessWall(allContourVertices, wallB, kvp, ref vertexCount);
                        foundPair = true;
                        break;
                    }
                }
                else
                {
                    if (wallB.AcknexObject.GetInteger(PropertyName.VERTEX1) == wallA.AcknexObject.GetInteger(PropertyName.VERTEX2))
                    {
                        ProcessWall(allContourVertices, wallB, kvp, ref vertexCount);
                        foundPair = true;
                        break;
                    }
                    if (wallB.AcknexObject.GetInteger(PropertyName.VERTEX2) == wallA.AcknexObject.GetInteger(PropertyName.VERTEX2))
                    {
                        ProcessWall(allContourVertices, wallB, kvp, ref vertexCount, true);
                        foundPair = true;
                        break;
                    }
                }
            }
            if (!foundPair)
            {
                var endingVertex = contourVertices[inverted ? wallA.AcknexObject.GetInteger(PropertyName.VERTEX1) : wallA.AcknexObject.GetInteger(PropertyName.VERTEX2)];
                endingVertex = new ContourVertex(endingVertex.Position, new WallWithSide(wallA, inverted));
                allContourVertices.Add(endingVertex);
                vertexCount++;
            }
        }

        private void BuildWallMesh()
        {
            var region1 = AcknexObject.GetAcknexObject(PropertyName.REGION1);
            var region2 = AcknexObject.GetAcknexObject(PropertyName.REGION2);
            HasGap = region1.Name == region2.Name && region1.GetFloat(PropertyName.CEIL_HGT) == region2.GetFloat(PropertyName.CEIL_HGT) && region1.GetFloat(PropertyName.FLOOR_HGT) == region2.GetFloat(PropertyName.FLOOR_HGT);
            if (_allTriangles.TryGetValue(WallPart.FloorAndCeil, out var triangles))
            {
                //if (triangles.Count > 0)
                //{
                //    _hasGap = false;
                //}
                _mesh.Clear();
                _mesh.SetVertices(_allVertices);
                _mesh.SetUVs(0, _allUVs);
                _mesh.subMeshCount = 1;
                _mesh.SetIndices(triangles, MeshTopology.Quads, 0);
                _mesh.RecalculateNormals();
                _mesh.UploadMeshData(false);
                _mesh.RecalculateBounds();
                _collider.cookingOptions = MeshColliderCookingOptions.None;
                Filter.sharedMesh = _collider.sharedMesh = _mesh;
                _invertedMesh.Clear();
                _invertedMesh.SetVertices(_allVertices);
                _invertedMesh.SetUVs(0, _allUVs);
                _invertedMesh.subMeshCount = 1;
                triangles.Reverse();
                _invertedMesh.SetIndices(triangles, MeshTopology.Quads, 0);
                _invertedMesh.UploadMeshData(false);
                _invertedMesh.RecalculateBounds();
                _invertedCollider.cookingOptions = MeshColliderCookingOptions.None;
                _invertedCollider.sharedMesh = _invertedMesh;
                //todo: this needs another approach, as textures might change from common to sky and vice-versa
                if (!_materialsCreated)
                {
                    var materials = new Material[1];
                    materials[0] = World.Instance.BuildMaterial(TextureObject.AcknexObject);
                    _meshRenderer.sharedMaterials = materials;
                }
                _meshRendererMaterials = _meshRenderer.materials;
                foreach (var material in _meshRendererMaterials)
                {
                    material.mainTexture = World.Instance.NullTexture;
                    material.SetInt("_TRANSPARENT", 1);
                }
            }
            if (_allTriangles.TryGetValue(WallPart.Gap, out var gapTriangles))
            {
                _gapMesh.Clear();
                _gapMesh.SetVertices(_allVertices);
                _gapMesh.SetUVs(0, _allUVs);
                _gapMesh.subMeshCount = 1;
                _gapMesh.SetIndices(gapTriangles, MeshTopology.Quads, 0);
                _gapMesh.RecalculateNormals();
                _gapMesh.UploadMeshData(false);
                _gapMesh.RecalculateBounds();
                GapFilter.sharedMesh = _gapCollider.sharedMesh = _gapMesh;
                _gapInvertedMesh.Clear();
                _gapInvertedMesh.SetVertices(_allVertices);
                _gapInvertedMesh.SetUVs(0, _allUVs);
                _gapInvertedMesh.subMeshCount = 1;
                gapTriangles.Reverse();
                _gapInvertedMesh.SetIndices(gapTriangles, MeshTopology.Quads, 0);
                _gapInvertedMesh.UploadMeshData(false);
                _gapInvertedMesh.RecalculateBounds();
                _gapInvertedCollider.sharedMesh = _gapInvertedMesh;
                //todo: this needs another approach, as textures might change from common to sky and vice-versa
                if (!_materialsCreated)
                {
                    var materials = new Material[1];
                    materials[0] = World.Instance.BuildMaterial(TextureObject.AcknexObject);
                    _gapMeshRenderer.sharedMaterials = materials;
                }
                _gapMeshRendererMaterials = _gapMeshRenderer.materials;
                foreach (var material in _gapMeshRendererMaterials)
                {
                    material.mainTexture = World.Instance.NullTexture;
                    material.SetInt("_TRANSPARENT", 1);
                }
            }
            _materialsCreated = true;
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
            if (leftRegion != null)
            {
                _leftRegionInstance = rightRegion.AcknexObject;
                leftRegion.Walls.Add(this);
            }
            if (rightRegion != null)
            {
                _rightRegionInstance = rightRegion.AcknexObject;
                rightRegion.Walls.Add(this);
            }
            var leftRegionBelowCeilHeight = leftRegion?.Below == null ? 0f : leftRegion.Below.AcknexObject.GetFloat(PropertyName.CEIL_HGT);
            var rightRegionBelowCeilHeight = rightRegion?.Below == null ? 0f : rightRegion.Below.AcknexObject.GetFloat(PropertyName.CEIL_HGT);
            var leftRegionAboveFloorHeight = leftRegionAbove == null ? 0f : leftRegionAbove.AcknexObject.GetFloat(PropertyName.FLOOR_HGT);
            var rightRegionAboveFloorHeight = rightRegionAbove == null ? 0f : rightRegionAbove.AcknexObject.GetFloat(PropertyName.FLOOR_HGT);
            //todo: checking by the flag here is wrong
            if (AcknexObject.HasFlag(PropertyName.FENCE))
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
                        var ceilHeight = leftRegion.AcknexObject.GetFloat(PropertyName.FLOOR_HGT, false);
                        var floorHeight = rightRegion.AcknexObject.GetFloat(PropertyName.FLOOR_HGT, false);
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
                        var ceilHeight = leftRegion.AcknexObject.GetFloat(PropertyName.CEIL_HGT, false);
                        var floorHeight = rightRegion.AcknexObject.GetFloat(PropertyName.CEIL_HGT, false);
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
                    var texture = AcknexObject.GetAcknexObject(PropertyName.TEXTURE);
                    //negative space
                    {
                        var v0 = new Vector3(vertexA.Position.X, floorHeightUp + (liftedLeftUp ? vertexA.Position.Z * leftLiftUp : 0), vertexA.Position.Y);
                        var v1 = new Vector3(vertexB.Position.X, floorHeightUp + (liftedLeftUp ? vertexB.Position.Z * leftLiftUp : 0), vertexB.Position.Y);
                        var v2 = new Vector3(vertexB.Position.X, ceilHeightDown + (liftedRightDown ? vertexB.Position.Z * rightLiftDown : 0), vertexB.Position.Y);
                        var v3 = new Vector3(vertexA.Position.X, ceilHeightDown + (liftedRightDown ? vertexA.Position.Z * rightLiftDown : 0), vertexA.Position.Y);
                        //if (Mathf.Abs(v2.y - v0.y) > Mathf.Epsilon || Mathf.Abs(v3.y - v1.y) > Mathf.Epsilon)
                        {
                            MeshUtils.AddQuad(0, 1, 2, 3, _allTriangles, WallPart.Gap, _allVertices.Count);
                            //MeshUtils.AddQuad(3, 2, 1, 0, _allTriangles, WallPart.Middle, _allVertices.Count);
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
                            GapQuad = new Matrix4x4(v0, v1, v2, v3);
                            GapUV = new Matrix4x4(uv0, uv1, uv2, uv3);
                        }
                    }
                    //else
                    {
                        //floor
                        {
                            var v0 = new Vector3(vertexA.Position.X, ceilHeightDown + (liftedLeftDown ? vertexA.Position.Z * leftLiftDown : 0), vertexA.Position.Y);
                            var v1 = new Vector3(vertexB.Position.X, ceilHeightDown + (liftedLeftDown ? vertexB.Position.Z * leftLiftDown : 0), vertexB.Position.Y);
                            var v2 = new Vector3(vertexB.Position.X, floorHeightDown + (liftedRightDown ? vertexB.Position.Z * rightLiftDown : 0), vertexB.Position.Y);
                            var v3 = new Vector3(vertexA.Position.X, floorHeightDown + (liftedRightDown ? vertexA.Position.Z * rightLiftDown : 0), vertexA.Position.Y);
                            //if (Mathf.Abs(v2.y - v0.y) > Mathf.Epsilon || Mathf.Abs(v3.y - v1.y) > Mathf.Epsilon)
                            {
                                MeshUtils.AddQuad(0, 1, 2, 3, _allTriangles, WallPart.FloorAndCeil, _allVertices.Count);
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
                            var v0 = new Vector3(vertexA.Position.X, ceilHeightUp + (liftedLeftUp ? vertexA.Position.Z * leftLiftUp : 0), vertexA.Position.Y);
                            var v1 = new Vector3(vertexB.Position.X, ceilHeightUp + (liftedLeftUp ? vertexB.Position.Z * leftLiftUp : 0), vertexB.Position.Y);
                            var v2 = new Vector3(vertexB.Position.X, floorHeightUp + (liftedRightUp ? vertexB.Position.Z * rightLiftUp : 0), vertexB.Position.Y);
                            var v3 = new Vector3(vertexA.Position.X, floorHeightUp + (liftedRightUp ? vertexA.Position.Z * rightLiftUp : 0), vertexA.Position.Y);
                            //if (Mathf.Abs(v2.y - v0.y) > Mathf.Epsilon || Mathf.Abs(v3.y - v1.y) > Mathf.Epsilon)
                            {
                                MeshUtils.AddQuad(3, 2, 1, 0, _allTriangles, WallPart.FloorAndCeil, _allVertices.Count);
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
                                TopQuad = new Matrix4x4(v0, v1, v2, v3);
                                TopUV = new Matrix4x4(uv0, uv1, uv2, uv3);
                            }
                        }
                    }
                }
            }
            if (leftRegion?.Below != null || rightRegion?.Below != null)
            {
                BuildWall(vertexA, vertexB, vertices, rightRegion?.Below, leftRegion?.Below, rightRegion, leftRegion);
            }
        }

        private void BuildFence(Region rightRegionAbove, Region leftRegionAbove, Region leftRegion, float leftRegionBelowCeilHeight, Region rightRegion, float rightRegionBelowCeilHeight, float leftRegionAboveFloorHeight, float rightRegionAboveFloorHeight, ContourVertex vertexA, ContourVertex vertexB)
        {
            var floorHeight = leftRegion.AcknexObject.GetFloat(PropertyName.FLOOR_HGT, false);
            var ceilHeight = leftRegion.AcknexObject.GetFloat(PropertyName.CEIL_HGT, false);
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
            var liftedLeft = leftRegionAbove == null && leftRegion.AcknexObject.HasFlag(PropertyName.FLOOR_LIFTED);
            var liftedRight = rightRegionAbove == null && rightRegion.AcknexObject.HasFlag(PropertyName.FLOOR_LIFTED);
            var v0 = new Vector3(vertexA.Position.X, ceilHeight + (liftedLeft ? vertexA.Position.Z : 0), vertexA.Position.Y);
            var v1 = new Vector3(vertexB.Position.X, ceilHeight + (liftedLeft ? vertexB.Position.Z : 0), vertexB.Position.Y);
            var v2 = new Vector3(vertexB.Position.X, floorHeight + (liftedRight ? vertexB.Position.Z : 0), vertexB.Position.Y);
            var v3 = new Vector3(vertexA.Position.X, floorHeight + (liftedRight ? vertexA.Position.Z : 0), vertexA.Position.Y);
            //if (Mathf.Abs(v2.y - v0.y) > Mathf.Epsilon || Mathf.Abs(v3.y - v1.y) > Mathf.Epsilon)
            {
                MeshUtils.AddQuad(0, 1, 2, 3, _allTriangles, WallPart.FloorAndCeil, _allVertices.Count);
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
            var rightRegion = AcknexObject.GetAcknexObject(PropertyName.REGION1).Container as Region;
            var leftRegion = AcknexObject.GetAcknexObject(PropertyName.REGION2).Container as Region;
            var vertexA = contourVertices[AcknexObject.GetInteger(PropertyName.VERTEX1)];
            var vertexB = contourVertices[AcknexObject.GetInteger(PropertyName.VERTEX2)];
            var xAxis = (new Vector3(vertexB.Position.X, 0f, vertexB.Position.Y) - new Vector3(vertexA.Position.X, 0f, vertexA.Position.Y)).normalized;
            _xAxis = xAxis;
            //AcknexObject.SetFloat(ObjectProperty.X1, vertexA.Position.X);
            //AcknexObject.SetFloat(ObjectProperty.Y1, vertexA.Position.Y);
            //AcknexObject.SetFloat("Z1", vertexA.Position.Z);
            //AcknexObject.SetFloat(ObjectProperty.X2, vertexB.Position.X);
            //AcknexObject.SetFloat(ObjectProperty.Y2, vertexB.Position.Y);
            //AcknexObject.SetFloat("Z2", vertexB.Position.Z);
            BuildWall(vertexA, vertexB, contourVertices, rightRegion, leftRegion);
            BuildWallMesh();
        }

        public void Rotate(Vector3 center, float degrees)
        {
            AckTransform.Center = center;
            AckTransform.Degrees = degrees;
            AcknexObject.IsDirty = true;
            //transform.RotateAround(center, Vector3.up, -degrees);
        }

        public void Shift(float dx, float dy)
        {
            AckTransform.DX = dx;
            AckTransform.DY = dy;
            AcknexObject.IsDirty = true;
            //transform.Translate(dx, 0f, dy, Space.World);
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
                yield return null;
            }
        }

        public void Lift(float dz)
        {
            AckTransform.DZ = dz;
            AcknexObject.IsDirty = true;
        }

        private enum WallPart
        {
            FloorAndCeil,
            Gap
        }
    }
}