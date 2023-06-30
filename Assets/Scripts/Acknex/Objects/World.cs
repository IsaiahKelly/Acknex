using System.Collections;
using System.Collections.Generic;
using Acknex.Interfaces;
using LibTessDotNet;
using Unity.Collections;
using UnityEngine;
using UnityEngine.Experimental.Rendering;
using UnityEngine.UI;
using UnityMidi;
using NameId = System.UInt32;
using PropertyName = Acknex.Interfaces.PropertyName;

namespace Acknex
{
    public partial class World : MonoBehaviour, IAcknexWorld
    {
        private readonly IDictionary<Texture, IList<Mesh>> _meshesPerTexture = new Dictionary<Texture, IList<Mesh>>();
        public readonly IDictionary<uint, Action> ActionsByName = new Dictionary<uint, Action>();
        public readonly IDictionary<uint, Actor> ActorsByName = new Dictionary<uint, Actor>();
        public readonly IDictionary<uint, HashSet<Actor>> AllActorsByName = new Dictionary<uint, HashSet<Actor>>();
        public readonly IDictionary<uint, HashSet<Region>> AllRegionsByName = new Dictionary<uint, HashSet<Region>>();
        public readonly IDictionary<uint, HashSet<Thing>> AllThingsByName = new Dictionary<uint, HashSet<Thing>>();
        public readonly IDictionary<uint, HashSet<Wall>> AllWallsByName = new Dictionary<uint, HashSet<Wall>>();
        public readonly IDictionary<uint, HashSet<Way>> AllWaysByName = new Dictionary<uint, HashSet<Way>>();
        public readonly IDictionary<uint, Bitmap> BitmapsByName = new Dictionary<uint, Bitmap>();
        public readonly IDictionary<uint, Digits> DigitsByName = new Dictionary<uint, Digits>();
        public readonly IDictionary<uint, Flic> FlicsByName = new Dictionary<uint, Flic>();
        public readonly IDictionary<uint, Font> FontsByName = new Dictionary<uint, Font>();
        public readonly IDictionary<uint, Model> ModelsByName = new Dictionary<uint, Model>();
        public readonly IDictionary<uint, Overlay> OverlaysByName = new Dictionary<uint, Overlay>();
        public readonly IDictionary<uint, Palette> PalettesByName = new Dictionary<uint, Palette>();
        public readonly IDictionary<uint, Panel> PanelsByName = new Dictionary<uint, Panel>();
        public readonly List<string> Paths = new List<string>();
        public readonly IDictionary<uint, Picture> PicturesByName = new Dictionary<uint, Picture>();
        public readonly List<Region> RegionsByIndex = new List<Region>(1000);
        public readonly IDictionary<uint, Region> RegionsByName = new Dictionary<uint, Region>();
        public readonly IDictionary<uint, Skill> SkillsByName = new Dictionary<uint, Skill>();
        public readonly IDictionary<uint, Song> SongsByName = new Dictionary<uint, Song>();
        public readonly IDictionary<uint, Sound> SoundsByName = new Dictionary<uint, Sound>();
        public readonly IDictionary<uint, AcknexString> StringsByName = new Dictionary<uint, AcknexString>();
        public readonly IDictionary<uint, Synonym> SynonymsByName = new Dictionary<uint, Synonym>();
        public readonly IDictionary<uint, Text> TextsByName = new Dictionary<uint, Text>();
        public readonly IDictionary<string, TextureAndPalette> TextureCache = new Dictionary<string, TextureAndPalette>();
        public readonly IDictionary<uint, Texture> TexturesByName = new Dictionary<uint, Texture>();
        public readonly IDictionary<uint, Thing> ThingsByName = new Dictionary<uint, Thing>();
        public readonly List<Wall> Walls = new List<Wall>();
        public readonly IDictionary<uint, Wall> WallsByName = new Dictionary<uint, Wall>();
        public readonly IDictionary<uint, Way> WaysByName = new Dictionary<uint, Way>();
        private bool _culled;
        private Texture2D _palette;
        private Color[] _palettePixels;

        private Vector2 _scrollPos;
        private Material _skyMaterial;
        private Material _skyMaterialRegion;
        private Material _surfacesMaterial;
        private TextParser _textParser;
        public Dictionary<IEnumerator, string> ActiveCoroutines = new Dictionary<IEnumerator, string>();
        public Light AmbientLight;
        public AudioSource AudioSource;
        public bool BilinearFilter = true;
        public IAcknexObject BulletString;
        public Canvas Canvas;
        public CanvasScaler CanvasScaler;
        public RectTransform CanvasView;
        public float CanvasWidthRatio;
        private ContouredRegions ContouredRegions;
        public List<ContourVertex> ContourVertices;
        public bool CustomStateMachines;
        public bool DebugCoroutines;
        public bool DebugSkills;
        public bool DisableCompilation;
        public bool DisableMaterials;
        public bool DrawShadows;
        public IAcknexObject FollowString;
        public bool GodMode;
        public IAcknexObject HoldString;
        public SingleUnityLayer IgnoreRaycastLayer;
        public bool MeshBatch;
        public MidiPlayer MidiPlayer;
        public float MouseMultiplier = 0.1f;
        public IAcknexObject MoveString;
        public IAcknexObject Node1String;
        public IAcknexObject Node2String;
        public Texture2D NullTexture;
        public bool OldAckVersion;
        public SingleUnityLayer RegionOffsetLayer;
        public SingleUnityLayer RegionsLayer;
        public RegionWalls RegionWalls;
        public IAcknexObject RepelString;
        public string SourceGenerationPath;
        public SingleUnityLayer Sprites;
        public IAcknexObject StickString;
        public float TestTimeScale = 1f;
        public SingleUnityLayer ThingsAndActorsLayer;
        public SingleUnityLayer TriggersLayer;
        public bool UsePalettes;
        public bool UseWDLEngine;
        public IAcknexObject VertexString;
        public float Volume = 1f;
        public LayerMask WallsAndRegions;

        public SingleUnityLayer WallsLayer;

        //public SingleUnityLayer WallsAndRegionsLayer;
        public LayerMask WallsWaterAndRegions;
        public LayerMask WallsWaterRegionsAndSprites;
        public LayerMask WallsWaterRegionsAndThings;
        public LayerMask WallsWaterRegionsOffsetAndThings;
        public SingleUnityLayer WaterLayer;
        public string WDLPath;
        public float TestOffset = -0.05f;

        public static World Instance { get; private set; }

        public virtual IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.World);

        public GameObject GameObject => gameObject;

        public Vector3 GetCenter()
        {
            return default;
        }

        public IAcknexObject GetRegion()
        {
            return null;
        }

        public void NotifyPropertyChanged(uint propertyName)
        {
        }

        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {
        }

        public void SetupInstance()
        {
        }

        public IEnumerator StartManagedCoroutine(MonoBehaviour behaviour, IEnumerator enumerator)
        {
            behaviour = behaviour ?? this;
            behaviour.StartCoroutine(enumerator);
            if (DebugCoroutines)
            {
                if (enumerator == null)
                {
                    return null;
                }
                ActiveCoroutines.Add(enumerator, behaviour.name + "::" + enumerator);
            }
            return enumerator;
        }

        public void StopManagedCoroutine(MonoBehaviour behaviour, IEnumerator enumerator)
        {
            behaviour = behaviour ?? this;
            behaviour.StopCoroutine(enumerator);
            if (DebugCoroutines)
            {
                ActiveCoroutines.Remove(enumerator);
            }
        }

        private void OnGUI()
        {
            if (!DebugCoroutines)
            {
                return;
            }
            var rect = new Rect(0f, 0f, 320f, Screen.height);
            var count = 0;
            foreach (var coroutine in ActiveCoroutines)
            {
                if (coroutine.Key.Current == null)
                {
                    continue;
                }
                count++;
            }
            GUI.Window(0, rect, delegate
            {
                _scrollPos = GUILayout.BeginScrollView(_scrollPos);
                GUILayout.BeginVertical();
                foreach (var coroutine in ActiveCoroutines)
                {
                    if (coroutine.Key.Current == null)
                    {
                        continue;
                    }
                    GUILayout.Label(coroutine.Value);
                }
                GUILayout.EndVertical();
                GUILayout.EndScrollView();
            }, "Coroutines:" + count);
        }

        public override string ToString()
        {
            return AcknexObject.ToString();
        }

        private static IAcknexObject GetTemplateCallback(uint name)
        {
            return null;
        }

        private void Awake()
        {
            Instance = this;
            AcknexObject.Container = this;
            AcknexObject.Name = "__WORLD__";
            _palette = new Texture2D(256, 1, GraphicsFormat.R8G8B8A8_UNorm, TextureCreationFlags.None);
            _palette.filterMode = FilterMode.Point;
            _palettePixels = new Color[256];
            _surfacesMaterial = new Material(Shader.Find("Acknex/Surface"));
            _skyMaterial = new Material(Shader.Find("Acknex/Sky"));
            _skyMaterialRegion = new Material(Shader.Find("Acknex/Sky"));
            _skyMaterialRegion.SetInt("_ZWrite", 0);
            Shader.SetGlobalTexture("_AcknexPalette", _palette);
        }

        private void Start()
        {
            if (!DebugCoroutines)
            {
                Cursor.lockState = CursorLockMode.Locked;
            }
            AudioListener.volume = Volume;
            CreateDefaultObjects();
            CreateDefaultSynonyms();
            CreateDefaultSkills();
            CreatePropertyDescriptors();
            ContouredRegions = new ContouredRegions();
            ContourVertices = new List<ContourVertex>();
            RegionWalls = new RegionWalls();
            //if (UseWDLEngine)
            //{
            //    var engine = new ScriptingEngine(this);
            //    engine.ParseWdl(WDLPath);
            //}
            //else
            {
                var baseDir = PathUtils.GetFileDirectory(WDLPath);
                _textParser = new TextParser(this, baseDir, OldAckVersion);
                _textParser.ParseInitialWDL(WDLPath);
            }
            if (!BilinearFilter)
            {
                foreach (var texture in TextureCache.Values)
                {
                    texture.Texture.filterMode = FilterMode.Point;
                }
                foreach (var bitmap in BitmapsByName.Values)
                {
                    if (bitmap.CropTexture != null)
                    {
                        bitmap.CropTexture.Texture.filterMode = FilterMode.Point;
                    }
                }
            }
            SetupEvents();
            SetupPhysics();
        }

        private void SetupPhysics()
        {
            //Physics.ContactModifyEvent += PhysicsOnContactModifyEvent;
        }

        private void PhysicsOnContactModifyEvent(PhysicsScene physicsScene, NativeArray<ModifiableContactPair> modifiableContactPairs)
        {
          
        }

        private void CreateDefaultObjects()
        {
            MoveString = AddString("MOVE", "MOVE");
            BulletString = AddString("BULLET", "BULLET");
            StickString = AddString("STICK", "STICK");
            FollowString = AddString("FOLLOW", "FOLLOW");
            RepelString = AddString("REPEL", "REPEL");
            VertexString = AddString("VERTEX", "VERTEX");
            HoldString = AddString("HOLD", "HOLD");
            Node1String = AddString("NODE1", "NODE1");
            Node2String = AddString("NODE2", "NODE2");
            AcknexObject.SetFloat(PropertyName.CLIP_DIST, 1000f);
        }

        private static IAcknexObject GetNullTemplateCallback(string name)
        {
            return null;
        }

        private void Update()
        {
            UpdateObject();
        }

        public void BuildRegionsAndWalls()
        {
            var vertexCount = 0;
            foreach (var kvp in AllWallsByName)
            {
                foreach (var wall in kvp.Value)
                {
                    RegionWalls.GetWallsList(wall.AcknexObject.GetAcknexObject(PropertyName.REGION1, true, false)).Add(wall);
                    RegionWalls.GetWallsList(wall.AcknexObject.GetAcknexObject(PropertyName.REGION2, true, false)).Add(wall);
                }
            }
            foreach (var kvp in RegionWalls)
            {
                foreach (var wall in kvp.Value)
                {
                    wall.Processed = false;
                }
                foreach (var wall in kvp.Value)
                {
                    if (wall.Processed)
                    {
                        continue;
                    }
                    var rightRegion = ContouredRegions.GetContouredRegion(kvp.Key);
                    var allContourVertices = rightRegion.GetNew();
                    wall.ProcessWall(allContourVertices, wall, kvp, ref vertexCount, wall.AcknexObject.GetAcknexObject(PropertyName.REGION2, true, false) == kvp.Key);
                }
            }
            foreach (var kvp in ContouredRegions)
            {
                var region = (Region)kvp.Key.Container;
                var contouredRegion = kvp.Value;
                region.ContouredRegion = contouredRegion;
            }
        }

        public Material BuildMaterial(IAcknexObject acknexObject, bool isRegion = false)
        {
            if (acknexObject?.Container is Texture textureObject && textureObject.AcknexObject.HasFlag(PropertyName.SKY))
            {
                return isRegion ? _skyMaterialRegion : _skyMaterial;
            }
            return _surfacesMaterial;
        }

        public int GetRegionIndex(Region region)
        {
            var indexOf = RegionsByIndex.IndexOf(region);
            if (indexOf >= 0)
            {
                return indexOf;
            }
            var template = region.AcknexObject.GetTemplateCallback(region.AcknexObject.NameId);
            if (template.Container is Region templateRegion)
            {
                return RegionsByIndex.IndexOf(templateRegion);
            }
            return -1;
        }

        public Region GetRegionByIndex(int index)
        {
            if (index < RegionsByIndex.Count && index >= 0)
            {
                return RegionsByIndex[index];
            }
            return null;
        }

        private void SetupCulling()
        {
            //todo: reimplement
            //_meshesPerTexture.Clear();
            //foreach (var walls in AllWallsByName.Values)
            //{
            //    foreach (var wall in walls)
            //    {
            //        if (wall.TextureObject.AcknexObject.GetInteger(PropertyName.CYCLES) > 1)
            //        {
            //            continue;
            //        }
            //        wall.DisableRender = true;
            //        if (!_meshesPerTexture.TryGetValue(wall.TextureObject, out var meshes))
            //        {
            //            meshes = new List<Mesh>();
            //            _meshesPerTexture.Add(wall.TextureObject, meshes);
            //        }
            //        meshes.Add(wall.Filter.sharedMesh);
            //        meshes.Add(wall.GapFilter.sharedMesh);
            //    }
            //}
            //foreach (var regions in AllRegionsByName.Values)
            //{
            //    foreach (var region in regions)
            //    {
            //        if (region.CeilTexture.AcknexObject.GetInteger(PropertyName.CYCLES) <= 1)
            //        {
            //            if (!_meshesPerTexture.TryGetValue(region.CeilTexture, out var meshes))
            //            {
            //                meshes = new List<Mesh>();
            //                _meshesPerTexture.Add(region.CeilTexture, meshes);
            //            }
            //            meshes.Add(region.CeilMeshFilter.sharedMesh);
            //            region.DisableCeilRender = true;
            //        }
            //        if (region.FloorTexture.AcknexObject.GetInteger(PropertyName.CYCLES) <= 1)
            //        {
            //            if (region.FloorMeshFilter == null)
            //            {
            //                continue;
            //            }
            //            if (!_meshesPerTexture.TryGetValue(region.FloorTexture, out var meshes))
            //            {
            //                meshes = new List<Mesh>();
            //                _meshesPerTexture.Add(region.FloorTexture, meshes);
            //            }
            //            meshes.Add(region.FloorMeshFilter.sharedMesh);
            //            region.DisableFloorRender = true;
            //        }
            //    }
            //}
            //foreach (var kvp in _meshesPerTexture)
            //{
            //    var combinedMesh = new Mesh();
            //    var combineInstances = new CombineInstance[kvp.Value.Count];
            //    for (var i = 0; i < kvp.Value.Count; i++)
            //    {
            //        combineInstances[i] = new CombineInstance();
            //        combineInstances[i].mesh = kvp.Value[i];
            //    }
            //    combinedMesh.CombineMeshes(combineInstances, true, false, false);
            //    var groupGameObject = new GameObject(kvp.Key.AcknexObject.Name);
            //    groupGameObject.transform.SetParent(transform, false);
            //    groupGameObject.layer = IgnoreRaycastLayer.LayerIndex;
            //    var meshFilter = groupGameObject.AddComponent<MeshFilter>();
            //    meshFilter.sharedMesh = combinedMesh;
            //    var meshRenderer = groupGameObject.AddComponent<MeshRenderer>();
            //    meshRenderer.material = BuildMaterial(kvp.Key.AcknexObject);
            //    var bitmap = kvp.Key.GetBitmapAt();
            //    kvp.Key.UpdateFrame(bitmap, meshRenderer.materials, false, false, 0, kvp.Key.AcknexObject);
            //}
        }
    }
}