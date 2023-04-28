using System.Collections.Generic;
using Acknex.Interfaces;
using LibTessDotNet;
using UnityEngine;
using UnityEngine.Experimental.Rendering;
using UnityEngine.UI;
using UnityMidi;
using PropertyName = Acknex.Interfaces.PropertyName;

namespace Acknex
{
    public partial class World : MonoBehaviour, IAcknexWorld
    {
        public override string ToString()
        {
            return AcknexObject.ToString();
        }

        private readonly IDictionary<Texture, IList<Mesh>> _meshesPerTexture = new Dictionary<Texture, IList<Mesh>>();
        public readonly IDictionary<int, Action> ActionsByName = new Dictionary<int, Action>();
        public readonly IDictionary<int, Actor> ActorsByName = new Dictionary<int, Actor>();
        public readonly IDictionary<int, HashSet<Actor>> AllActorsByName = new Dictionary<int, HashSet<Actor>>();
        public readonly IDictionary<int, HashSet<Region>> AllRegionsByName = new Dictionary<int, HashSet<Region>>();
        public readonly IDictionary<int, HashSet<Thing>> AllThingsByName = new Dictionary<int, HashSet<Thing>>();
        public readonly IDictionary<int, HashSet<Wall>> AllWallsByName = new Dictionary<int, HashSet<Wall>>();
        public readonly IDictionary<int, HashSet<Way>> AllWaysByName = new Dictionary<int, HashSet<Way>>();
        public readonly IDictionary<int, Bitmap> BitmapsByName = new Dictionary<int, Bitmap>();
        public readonly IDictionary<int, Digits> DigitsByName = new Dictionary<int, Digits>();
        public readonly IDictionary<int, Flic> FlicsByName = new Dictionary<int, Flic>();
        public readonly IDictionary<int, Font> FontsByName = new Dictionary<int, Font>();
        public readonly IDictionary<int, Model> ModelsByName = new Dictionary<int, Model>();
        public readonly IDictionary<int, Overlay> OverlaysByName = new Dictionary<int, Overlay>();
        public readonly IDictionary<int, Palette> PalettesByName = new Dictionary<int, Palette>();
        public readonly IDictionary<int, Panel> PanelsByName = new Dictionary<int, Panel>();
        public readonly IDictionary<int, Picture> PicturesByName = new Dictionary<int, Picture>();
        public readonly IDictionary<int, Region> RegionsByName = new Dictionary<int, Region>();
        public readonly IDictionary<int, Skill> SkillsByName = new Dictionary<int, Skill>();
        public readonly IDictionary<int, Song> SongsByName = new Dictionary<int, Song>();
        public readonly IDictionary<int, Sound> SoundsByName = new Dictionary<int, Sound>();
        public readonly IDictionary<int, AcknexString> StringsByName = new Dictionary<int, AcknexString>();
        public readonly IDictionary<int, Synonym> SynonymsByName = new Dictionary<int, Synonym>();
        public readonly IDictionary<int, Text> TextsByName = new Dictionary<int, Text>();
        public readonly IDictionary<int, Texture> TexturesByName = new Dictionary<int, Texture>();
        public readonly IDictionary<int, Thing> ThingsByName = new Dictionary<int, Thing>();
        public readonly IDictionary<int, Wall> WallsByName = new Dictionary<int, Wall>();
        public readonly IDictionary<int, Way> WaysByName = new Dictionary<int, Way>();
        public readonly IDictionary<string, TextureAndPalette> TextureCache = new Dictionary<string, TextureAndPalette>();
        public readonly List<string> Paths = new List<string>();
        public readonly List<Wall> Walls = new List<Wall>();
        public readonly List<Region> RegionsByIndex = new List<Region>(1000);

        private bool _culled;
        private Texture2D _palette;
        private Color[] _palettePixels;
        private Material _skyMaterial;
        private Material _surfacesMaterial;
        private TextParser _textParser;

        public SingleUnityLayer WallsLayer;
        public SingleUnityLayer RegionsLayer;
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
        //public SingleUnityLayer WallsAndRegionsLayer;
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

        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {
        }

        public void ResetTexture()
        {
        }

        public void SetupInstance()
        {
        }

        private static IAcknexObject GetTemplateCallback(int name)
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

        public Material BuildMaterial(IAcknexObject acknexObject)
        {
            if (acknexObject?.Container is Texture textureObject && textureObject.AcknexObject.HasFlag(PropertyName.SKY))
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
            var template = region.AcknexObject.GetTemplateCallback(region.AcknexObject.NameInt);
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
            //        if (wall.TextureObject.AcknexObject.GetInteger(ObjectProperty.CYCLES) > 1)
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
            //        if (region.CeilTexture.AcknexObject.GetInteger(ObjectProperty.CYCLES) <= 1)
            //        {
            //            if (!_meshesPerTexture.TryGetValue(region.CeilTexture, out var meshes))
            //            {
            //                meshes = new List<Mesh>();
            //                _meshesPerTexture.Add(region.CeilTexture, meshes);
            //            }
            //            meshes.Add(region.CeilMeshFilter.sharedMesh);
            //            region.DisableCeilRender = true;
            //        }
            //        if (region.FloorTexture.AcknexObject.GetInteger(ObjectProperty.CYCLES) <= 1)
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