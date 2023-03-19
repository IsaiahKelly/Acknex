using System;
using System.Collections.Generic;
using Acknex.Interfaces;
using LibTessDotNet;
#if UNITY_EDITOR
using UnityEditor;
using UnityEditorInternal.VersionControl;
#endif
using UnityEngine;
using UnityMidi;
using WdlEngine;

namespace Acknex
{
    public partial class World : MonoBehaviour, IAcknexWorld
    {
        public virtual IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.World);

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

        public readonly List<Region> RegionsByIndex = new List<Region>();

        public readonly Dictionary<string, HashSet<Region>> AllRegionsByName = new Dictionary<string, HashSet<Region>>();
        public readonly Dictionary<string, HashSet<Wall>> AllWallsByName = new Dictionary<string, HashSet<Wall>>();
        public readonly Dictionary<string, HashSet<Way>> AllWaysByName = new Dictionary<string, HashSet<Way>>();
        public readonly Dictionary<string, HashSet<Actor>> AllActorsByName = new Dictionary<string, HashSet<Actor>>();
        public readonly Dictionary<string, HashSet<Thing>> AllThingsByName = new Dictionary<string, HashSet<Thing>>();

        public readonly SortedDictionary<string, Synonym> SynonymsByName = new SortedDictionary<string, Synonym>();
        public readonly SortedDictionary<string, Action> ActionsByName = new SortedDictionary<string, Action>();
        public readonly SortedDictionary<string, Skill> SkillsByName = new SortedDictionary<string, Skill>();
        public readonly SortedDictionary<string, Region> RegionsByName = new SortedDictionary<string, Region>();
        public readonly SortedDictionary<string, Wall> WallsByName = new SortedDictionary<string, Wall>();
        public readonly SortedDictionary<string, Bitmap> BitmapsByName = new SortedDictionary<string, Bitmap>();
        public readonly SortedDictionary<string, Texture> TexturesByName = new SortedDictionary<string, Texture>();
        public readonly SortedDictionary<string, Way> WaysByName = new SortedDictionary<string, Way>();
        public readonly SortedDictionary<string, Actor> ActorsByName = new SortedDictionary<string, Actor>();
        public readonly SortedDictionary<string, Overlay> OverlaysByName = new SortedDictionary<string, Overlay>();
        public readonly SortedDictionary<string, Thing> ThingsByName = new SortedDictionary<string, Thing>();
        public readonly SortedDictionary<string, Flic> FlicsByName = new SortedDictionary<string, Flic>();
        public readonly SortedDictionary<string, Texture2D> TextureCache = new SortedDictionary<string, Texture2D>();
        public readonly SortedDictionary<string, AcknexString> StringsByName = new SortedDictionary<string, AcknexString>();
        public readonly SortedDictionary<string, Text> TextsByName = new SortedDictionary<string, Text>();
        public readonly SortedDictionary<string, Panel> PanelsByName = new SortedDictionary<string, Panel>();
        public readonly SortedDictionary<string, Font> FontsByName = new SortedDictionary<string, Font>();
        public readonly SortedDictionary<string, Palette> PalettesByName = new SortedDictionary<string, Palette>();
        public readonly SortedDictionary<string, Sound> SoundsByName = new SortedDictionary<string, Sound>();
        public readonly SortedDictionary<string, Music> MusicsByName = new SortedDictionary<string, Music>();
        public readonly SortedDictionary<string, Model> ModelsByName = new SortedDictionary<string, Model>();

        public readonly List<string> Paths = new List<string>();

        public readonly List<Wall> Walls = new List<Wall>();

        public Canvas Canvas;
        public Light AmbientLight;

        //Text parser variables
        private TextParser _textParser;
        private List<ContourVertex> _contourVertices;
        private RegionWalls _regionWalls;

        public MidiPlayer MidiPlayer;
        public AudioSource AudioSource;

        private void Awake()
        {
            AcknexObject.Container = this;
        }

        private void Start()
        {
            Instance = this;

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

#if UNITY_EDITOR
            Selection.activeTransform = Player.Instance.transform;
            SceneView.lastActiveSceneView.FrameSelected();
#endif
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
                material = new Material(textureObject.AcknexObject.ContainsFlag("SKY")
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