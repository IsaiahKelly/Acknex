using System.Collections.Generic;
using Acknex.Interfaces;
using LibTessDotNet;
using UnityEngine;
using UnityEngine.Experimental.Rendering;
using UnityEngine.UI;
using UnityMidi;
using WdlEngine;

namespace Acknex
{
    public partial class World : MonoBehaviour, IAcknexWorld
    {
        private readonly Dictionary<Texture, IList<Mesh>> _meshesPerTexture = new Dictionary<Texture, IList<Mesh>>();
        public readonly Dictionary<string, Action> ActionsByName = new Dictionary<string, Action>();
        public readonly Dictionary<string, Actor> ActorsByName = new Dictionary<string, Actor>();
        public readonly Dictionary<string, HashSet<Actor>> AllActorsByName = new Dictionary<string, HashSet<Actor>>();
        public readonly Dictionary<string, HashSet<Region>> AllRegionsByName = new Dictionary<string, HashSet<Region>>();
        public readonly Dictionary<string, HashSet<Thing>> AllThingsByName = new Dictionary<string, HashSet<Thing>>();
        public readonly Dictionary<string, HashSet<Wall>> AllWallsByName = new Dictionary<string, HashSet<Wall>>();
        public readonly Dictionary<string, HashSet<Way>> AllWaysByName = new Dictionary<string, HashSet<Way>>();
        public readonly Dictionary<string, Bitmap> BitmapsByName = new Dictionary<string, Bitmap>();
        public readonly Dictionary<string, Flic> FlicsByName = new Dictionary<string, Flic>();
        public readonly Dictionary<string, Font> FontsByName = new Dictionary<string, Font>();
        public readonly Dictionary<string, Model> ModelsByName = new Dictionary<string, Model>();
        public readonly Dictionary<string, Overlay> OverlaysByName = new Dictionary<string, Overlay>();
        public readonly Dictionary<string, Palette> PalettesByName = new Dictionary<string, Palette>();
        public readonly Dictionary<string, Panel> PanelsByName = new Dictionary<string, Panel>();
        public readonly List<string> Paths = new List<string>();
        public readonly List<Region> RegionsByIndex = new List<Region>();
        public readonly Dictionary<string, Region> RegionsByName = new Dictionary<string, Region>();
        public readonly Dictionary<string, Skill> SkillsByName = new Dictionary<string, Skill>();
        public readonly Dictionary<string, Song> SongsByName = new Dictionary<string, Song>();
        public readonly Dictionary<string, Sound> SoundsByName = new Dictionary<string, Sound>();
        public readonly Dictionary<string, AcknexString> StringsByName = new Dictionary<string, AcknexString>();
        public readonly Dictionary<string, Synonym> SynonymsByName = new Dictionary<string, Synonym>();
        public readonly Dictionary<string, Text> TextsByName = new Dictionary<string, Text>();
        public readonly Dictionary<string, TextureAndPalette> TextureCache = new Dictionary<string, TextureAndPalette>();
        public readonly Dictionary<string, Texture> TexturesByName = new Dictionary<string, Texture>();
        public readonly Dictionary<string, Thing> ThingsByName = new Dictionary<string, Thing>();
        public readonly List<Wall> Walls = new List<Wall>();
        public readonly Dictionary<string, Wall> WallsByName = new Dictionary<string, Wall>();
        public readonly Dictionary<string, Way> WaysByName = new Dictionary<string, Way>();

        private bool _culled;
        private Thing _dummyObject;
        private Texture2D _palette;
        private Color[] _palettePixels;
        private Material _skyMaterial;
        private Material _surfacesMaterial;
        private TextParser _textParser;

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
        public Color DebugColor;
        public GameObject DebugContainer;
        public Texture2D DebugTexture;
        public bool DisableCompilation;
        public bool DisableMaterials;
        public bool DrawShadows;
        public IAcknexObject FollowString;
        public bool GodMode;
        public IAcknexObject HoldString;
        public SingleUnityLayer IgnoreRaycastLayer;
        public float LightMultiplier = 2f;
        public bool MeshBatch;
        public MidiPlayer MidiPlayer;
        public float MouseMultiplier = 0.1f;
        public IAcknexObject MoveString;
        public IAcknexObject Node1String;
        public IAcknexObject Node2String;
        public RegionWalls RegionWalls;
        public IAcknexObject RepelString;
        public bool OldAckVersion;
        public string SourceGenerationPath;
        public SingleUnityLayer Sprites;
        public IAcknexObject StickString;
        public SingleUnityLayer ThingsAndActorsLayer;
        public SingleUnityLayer TriggersLayer;
        public bool UsePalettes;
        public bool UseWDLEngine;
        public IAcknexObject VertexString;
        public float Volume = 1f;
        public SingleUnityLayer WallsAndRegionsLayer;
        public LayerMask WallsWaterAndRegions;
        public LayerMask WallsWaterRegionsAndSprites;
        public LayerMask WallsWaterRegionsAndThings;
        public SingleUnityLayer WaterLayer;
        public string WDLPath;

        public static World Instance { get; private set; }

        public virtual IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.World);

        [field: SerializeField] public bool DebugMarked { get; set; }

        public GameObject GameObject => gameObject;

        public Vector3 GetCenter()
        {
            return default;
        }

        public IAcknexObject GetRegion()
        {
            return null;
        }

        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {
        }

        public void SetupInstance()
        {
        }

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        private void Awake()
        {
            AcknexObject.Container = this;
            _palette = new Texture2D(256, 1, GraphicsFormat.R8G8B8A8_UNorm, TextureCreationFlags.None);
            _palette.filterMode = FilterMode.Point;
            _palettePixels = new Color[256];
            _surfacesMaterial = new Material(Shader.Find("Acknex/Surfaces"));
            _skyMaterial = new Material(Shader.Find("Acknex/Sky"));
            Shader.SetGlobalTexture("_AcknexPalette", _palette);
        }

        private void Start()
        {
            Instance = this;
            Cursor.lockState = CursorLockMode.Locked;
            AudioListener.volume = Volume;
            CreateDefaultObjects();
            CreateDefaultSynonyms();
            CreateDefaultSkills();
            CreatePropertyDescriptors();
            ContouredRegions = new ContouredRegions();
            ContourVertices = new List<ContourVertex>();
            RegionWalls = new RegionWalls();
            if (UseWDLEngine)
            {
                var engine = new ScriptingEngine(this);
                engine.ParseWdl(WDLPath);
            }
            else
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
            _dummyObject = CreateThing("_INTERNAL_DUMMY_");
            AcknexObject.SetFloat("CLIP_DIST", 1000f);
        }

        private void Update()
        {
            UpdateObject();
            if (GodMode)
            {
                UpdateSkillValue("AMMO", 9999999F);
                UpdateSkillValue("PLAYER_HEALTH", 9999999F);
            }
        }

        public void BuildRegionsAndWalls()
        {
            var vertexCount = 0;
            foreach (var kvp in AllWallsByName)
            {
                foreach (var wall in kvp.Value)
                {
                    RegionWalls.GetWallsList(wall.AcknexObject.GetAcknexObject("REGION1", true, false)).Add(wall);
                    RegionWalls.GetWallsList(wall.AcknexObject.GetAcknexObject("REGION2", true, false)).Add(wall);
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
                    wall.ProcessWall(allContourVertices, wall, kvp, ref vertexCount, wall.AcknexObject.GetAcknexObject("REGION2", true, false) == kvp.Key);
                }
            }
            foreach (var kvp in ContouredRegions)
            {
                var region = (Region)kvp.Key.Container;
                var contouredRegion = kvp.Value;
                region.ContouredRegion = contouredRegion;
            }
        }

        public Material BuildMaterial(IAcknexObject acknexObject)
        {
            if (acknexObject?.Container is Texture textureObject && textureObject.AcknexObject.HasFlag("SKY"))
            {
                return _skyMaterial;
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
            var template = region.AcknexObject.GetTemplateCallback(region.AcknexObject.GetString("NAME"));
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
            _meshesPerTexture.Clear();
            foreach (var walls in AllWallsByName.Values)
            {
                foreach (var wall in walls)
                {
                    if (wall.TextureObject.AcknexObject.GetInteger("CYCLES") > 1)
                    {
                        continue;
                    }
                    wall.DisableRender = true;
                    if (!_meshesPerTexture.TryGetValue(wall.TextureObject, out var meshes))
                    {
                        meshes = new List<Mesh>();
                        _meshesPerTexture.Add(wall.TextureObject, meshes);
                    }
                    meshes.Add(wall.Filter.sharedMesh);
                }
            }
            foreach (var regions in AllRegionsByName.Values)
            {
                foreach (var region in regions)
                {
                    if (region.CeilTexture.AcknexObject.GetInteger("CYCLES") <= 1)
                    {
                        if (!_meshesPerTexture.TryGetValue(region.CeilTexture, out var meshes))
                        {
                            meshes = new List<Mesh>();
                            _meshesPerTexture.Add(region.CeilTexture, meshes);
                        }
                        meshes.Add(region.CeilMeshFilter.sharedMesh);
                        region.DisableCeilRender = true;
                    }
                    if (region.FloorTexture.AcknexObject.GetInteger("CYCLES") <= 1)
                    {
                        if (region.FloorMeshFilter == null)
                        {
                            continue;
                        }
                        if (!_meshesPerTexture.TryGetValue(region.FloorTexture, out var meshes))
                        {
                            meshes = new List<Mesh>();
                            _meshesPerTexture.Add(region.FloorTexture, meshes);
                        }
                        meshes.Add(region.FloorMeshFilter.sharedMesh);
                        region.DisableFloorRender = true;
                    }
                }
            }
            foreach (var kvp in _meshesPerTexture)
            {
                var combinedMesh = new Mesh();
                var combineInstances = new CombineInstance[kvp.Value.Count];
                for (var i = 0; i < kvp.Value.Count; i++)
                {
                    combineInstances[i] = new CombineInstance();
                    combineInstances[i].mesh = kvp.Value[i];
                }
                combinedMesh.CombineMeshes(combineInstances, true, false, false);
                var groupGameObject = new GameObject(kvp.Key.AcknexObject.GetString("NAME"));
                groupGameObject.transform.SetParent(transform, false);
                groupGameObject.layer = IgnoreRaycastLayer.LayerIndex;
                var meshFilter = groupGameObject.AddComponent<MeshFilter>();
                meshFilter.sharedMesh = combinedMesh;
                var meshRenderer = groupGameObject.AddComponent<MeshRenderer>();
                meshRenderer.material = BuildMaterial(kvp.Key.AcknexObject);
                var bitmap = kvp.Key.GetBitmapAt();
                kvp.Key.UpdateFrame(bitmap, meshRenderer.material, false, false, 0, kvp.Key.AcknexObject);
            }
        }
    }
}