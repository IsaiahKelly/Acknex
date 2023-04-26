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
        private readonly IDictionary<Texture, IList<Mesh>> _meshesPerTexture = new Dictionary<Texture, IList<Mesh>>();
        public readonly IDictionary<string, Action> ActionsByName = new StringKeyDictionary<string, Action>();
        public readonly IDictionary<string, Actor> ActorsByName = new StringKeyDictionary<string, Actor>();
        public readonly IDictionary<string, HashSet<Actor>> AllActorsByName = new StringKeyDictionary<string, HashSet<Actor>>();
        public readonly IDictionary<string, HashSet<Region>> AllRegionsByName = new StringKeyDictionary<string, HashSet<Region>>();
        public readonly IDictionary<string, HashSet<Thing>> AllThingsByName = new StringKeyDictionary<string, HashSet<Thing>>();
        public readonly IDictionary<string, HashSet<Wall>> AllWallsByName = new StringKeyDictionary<string, HashSet<Wall>>();
        public readonly IDictionary<string, HashSet<Way>> AllWaysByName = new StringKeyDictionary<string, HashSet<Way>>();
        public readonly IDictionary<string, Bitmap> BitmapsByName = new StringKeyDictionary<string, Bitmap>();
        public readonly IDictionary<string, Digits> DigitsByName = new StringKeyDictionary<string, Digits>();
        public readonly IDictionary<string, Flic> FlicsByName = new StringKeyDictionary<string, Flic>();
        public readonly IDictionary<string, Font> FontsByName = new StringKeyDictionary<string, Font>();
        public readonly IDictionary<string, Model> ModelsByName = new StringKeyDictionary<string, Model>();
        public readonly IDictionary<string, Overlay> OverlaysByName = new StringKeyDictionary<string, Overlay>();
        public readonly IDictionary<string, Palette> PalettesByName = new StringKeyDictionary<string, Palette>();
        public readonly IDictionary<string, Panel> PanelsByName = new StringKeyDictionary<string, Panel>();
        public readonly List<string> Paths = new List<string>();
        public readonly IDictionary<string, Picture> PicturesByName = new StringKeyDictionary<string, Picture>();
        public readonly List<Region> RegionsByIndex = new List<Region>(1000);
        public readonly IDictionary<string, Region> RegionsByName = new StringKeyDictionary<string, Region>();
        public readonly IDictionary<string, Skill> SkillsByName = new StringKeyDictionary<string, Skill>();
        public readonly IDictionary<string, Song> SongsByName = new StringKeyDictionary<string, Song>();
        public readonly IDictionary<string, Sound> SoundsByName = new StringKeyDictionary<string, Sound>();
        public readonly IDictionary<string, AcknexString> StringsByName = new StringKeyDictionary<string, AcknexString>();
        public readonly IDictionary<string, Synonym> SynonymsByName = new StringKeyDictionary<string, Synonym>();
        public readonly IDictionary<string, Text> TextsByName = new StringKeyDictionary<string, Text>();
        public readonly IDictionary<string, TextureAndPalette> TextureCache = new StringKeyDictionary<string, TextureAndPalette>();
        public readonly IDictionary<string, Texture> TexturesByName = new StringKeyDictionary<string, Texture>();
        public readonly IDictionary<string, Thing> ThingsByName = new StringKeyDictionary<string, Thing>();
        public readonly List<Wall> Walls = new List<Wall>();
        public readonly IDictionary<string, Wall> WallsByName = new StringKeyDictionary<string, Wall>();
        public readonly IDictionary<string, Way> WaysByName = new StringKeyDictionary<string, Way>();

        private bool _culled;
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
        public SingleUnityLayer WallsAndRegionsLayer;
        public LayerMask WallsWaterAndRegions;
        public LayerMask WallsWaterRegionsAndSprites;
        public LayerMask WallsWaterRegionsAndThings;
        public SingleUnityLayer WaterLayer;
        public string WDLPath;

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

        [field: SerializeField] public bool IsDebugMarked { get; set; }
        public bool IsGeometryDirty { get; set; }

        public bool IsTextureDirty { get; set; }

        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {
        }

        public void ResetTexture()
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
            Instance = this;
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
            AcknexObject.SetFloat("CLIP_DIST", 1000f);
        }

        private static IAcknexObject GetNullTemplateCallback(string name)
        {
            return null;
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
            var template = region.AcknexObject.GetTemplateCallback(region.AcknexObject.Name);
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
                    meshes.Add(wall.GapFilter.sharedMesh);
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
                var groupGameObject = new GameObject(kvp.Key.AcknexObject.Name);
                groupGameObject.transform.SetParent(transform, false);
                groupGameObject.layer = IgnoreRaycastLayer.LayerIndex;
                var meshFilter = groupGameObject.AddComponent<MeshFilter>();
                meshFilter.sharedMesh = combinedMesh;
                var meshRenderer = groupGameObject.AddComponent<MeshRenderer>();
                meshRenderer.material = BuildMaterial(kvp.Key.AcknexObject);
                var bitmap = kvp.Key.GetBitmapAt();
                kvp.Key.UpdateFrame(bitmap, meshRenderer.materials, false, false, 0, kvp.Key.AcknexObject);
            }
        }
    }
}