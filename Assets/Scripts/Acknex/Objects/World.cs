using System.Collections.Generic;
using Acknex.Interfaces;
using LibTessDotNet;
#if UNITY_EDITOR
using UnityEditor;
#endif
using UnityEngine;
using UnityMidi;
using WdlEngine;

namespace Acknex
{
    public partial class World : MonoBehaviour, IAcknexWorld
    {
        public virtual IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.World);
        public void SetupInstance()
        {
            
        }

        public Vector3 GetCenter()
        {
            return default;
        }

        public IAcknexObject GetRegion()
        {
            return null;
        }

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        public static World Instance { get; private set; }
        
        public string WDLPath;
        public string SourceGenerationPath;
        public bool DisableWallTextures;
        public bool DisableEvents;

        //todo: how to calculate this?
        public float CanvasWidthRatio = 2f;
        public bool WMPContainsRegionsByName;
        public bool UseWDLEngine;

        public SingleUnityLayer WallsAndRegionsLayer;
        public SingleUnityLayer ThingsAndActorsLayer;
        public SingleUnityLayer WaterLayer;
        public SingleUnityLayer TriggersLayer;
        public LayerMask WallsWaterAndRegions;
        public LayerMask AllLayers;

        public Canvas Canvas;
        public Light AmbientLight;
        public MidiPlayer MidiPlayer;
        public AudioSource AudioSource;

        public readonly List<Region> RegionsByIndex = new List<Region>();

        public readonly Dictionary<string, HashSet<Region>> AllRegionsByName = new Dictionary<string, HashSet<Region>>();
        public readonly Dictionary<string, HashSet<Wall>> AllWallsByName = new Dictionary<string, HashSet<Wall>>();
        public readonly Dictionary<string, HashSet<Way>> AllWaysByName = new Dictionary<string, HashSet<Way>>();
        public readonly Dictionary<string, HashSet<Actor>> AllActorsByName = new Dictionary<string, HashSet<Actor>>();
        public readonly Dictionary<string, HashSet<Thing>> AllThingsByName = new Dictionary<string, HashSet<Thing>>();

        public readonly Dictionary<string, Synonym> SynonymsByName = new Dictionary<string, Synonym>();
        public readonly Dictionary<string, Action> ActionsByName = new Dictionary<string, Action>();
        public readonly Dictionary<string, Skill> SkillsByName = new Dictionary<string, Skill>();
        public readonly Dictionary<string, Region> RegionsByName = new Dictionary<string, Region>();
        public readonly Dictionary<string, Wall> WallsByName = new Dictionary<string, Wall>();
        public readonly Dictionary<string, Bitmap> BitmapsByName = new Dictionary<string, Bitmap>();
        public readonly Dictionary<string, Texture> TexturesByName = new Dictionary<string, Texture>();
        public readonly Dictionary<string, Way> WaysByName = new Dictionary<string, Way>();
        public readonly Dictionary<string, Actor> ActorsByName = new Dictionary<string, Actor>();
        public readonly Dictionary<string, Overlay> OverlaysByName = new Dictionary<string, Overlay>();
        public readonly Dictionary<string, Thing> ThingsByName = new Dictionary<string, Thing>();
        public readonly Dictionary<string, Flic> FlicsByName = new Dictionary<string, Flic>();
        public readonly Dictionary<string, Texture2D> TextureCache = new Dictionary<string, Texture2D>();
        public readonly Dictionary<string, AcknexString> StringsByName = new Dictionary<string, AcknexString>();
        public readonly Dictionary<string, Text> TextsByName = new Dictionary<string, Text>();
        public readonly Dictionary<string, Panel> PanelsByName = new Dictionary<string, Panel>();
        public readonly Dictionary<string, Font> FontsByName = new Dictionary<string, Font>();
        public readonly Dictionary<string, Palette> PalettesByName = new Dictionary<string, Palette>();
        public readonly Dictionary<string, Sound> SoundsByName = new Dictionary<string, Sound>();
        public readonly Dictionary<string, Music> MusicsByName = new Dictionary<string, Music>();
        public readonly Dictionary<string, Model> ModelsByName = new Dictionary<string, Model>();

        public readonly List<string> Paths = new List<string>();

        public readonly List<Wall> Walls = new List<Wall>();

        public GameObject DebugContainer;


        //Text parser variables
        private TextParser _textParser;
        private List<ContourVertex> _contourVertices;
        private RegionWalls _regionWalls;


        private void Awake()
        {
            AcknexObject.Container = this;
        }

        private void Start()
        {
            Instance = this;

            Cursor.lockState = CursorLockMode.Locked;

            AudioListener.volume = 10f;

            CreateDefaultObjects();
            CreateDefaultSynonyms();
            CreateDefaultSkills();
            CreatePropertyDescriptors();

            _contourVertices = new List<ContourVertex>();
            _regionWalls = new RegionWalls();

            if (UseWDLEngine)
            {
                var engine = new ScriptingEngine(this);
                engine.ParseWdl(WDLPath);
            }
            else
            {
                var baseDir = PathUtils.GetFileDirectory(WDLPath);
                _textParser = new TextParser(this, baseDir, WMPContainsRegionsByName);
                _textParser.ParseInitialWDL(WDLPath);
            }

            SetupEvents();
        }

        private void CreateDefaultObjects()
        {
            AddString("MOVE", "MOVE");
            AddString("BULLET", "BULLET");
            AddString("STICK", "STICK");
            AddString("FOLLOW", "FOLLOW");
            AddString("REPEL", "REPEL");
            AddString("VERTEX", "VERTEX");
            AddString("HOLD", "HOLD");
            AddString("NODE1", "NODE1");
            AddString("NODE2", "NODE2");
        }

        private void Update()
        {
            UpdateObject();
        }
        public static void BuildRegionsAndWalls(RegionWalls regionWalls, List<ContourVertex> contourVertices)
        {
            var vertexCount = 0;
            var contouredRegions = new ContouredRegions();
            foreach (var kvp in regionWalls)
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

                    var rightRegion = contouredRegions.GetContouredRegion(kvp.Key);
                    var allContourVertices = rightRegion.GetNew();
                    wall.ProcessWall(allContourVertices, contourVertices, wall, kvp, ref vertexCount, wall.AcknexObject.GetAcknexObject("REGION2") == kvp.Key);
                }
            }

            foreach (var kvp in contouredRegions)
            {
                var region = kvp.Key?.Container as Region;
                Region.BuildRegionFloorAndCeiling(region, kvp.Value);
            }

            foreach (var wall in World.Instance.Walls)
            {
                Wall.BuildWallAndMesh(wall, contourVertices);
            }
        }
        public Material BuildMaterial(IAcknexObject acknexObject)
        {
            Material material;
            if (acknexObject != null && acknexObject.Container is Texture textureObject)
            {
                material = new Material(textureObject.AcknexObject.HasFlag("SKY")
                    ? Shader.Find("Acknex/Sky")
                    : Shader.Find("Acknex/Surfaces"));
                material.mainTexture = textureObject.GetBitmapAt()?.Texture2D;
            }
            else
            {
                material = new Material(Shader.Find("Acknex/Surfaces"));
            }
            material.SetFloat("_Glossiness", 0f);
            return material;
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
    }
}