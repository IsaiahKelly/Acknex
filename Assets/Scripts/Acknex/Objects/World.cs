using System;
using System.Collections.Generic;
using Acknex.Interfaces;
using LibTessDotNet;
using UnityEngine;
using UnityEngine.UI;

namespace Acknex
{
    public partial class World : MonoBehaviour, IAcknexObjectContainer, IAcknexWorld
    {
        public virtual IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback);

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        public static World Instance { get; private set; }

        public Resolution Resolution1
        {
            get => Resolution;
            set => Resolution = value;
        }

        public string WDLPath;

        //todo: how to calculate this?
        public float CanvasWidthRatio = 2f;
        public bool WMPContainsRegionsByName;
        public bool UseWDLEngine;

        public readonly List<Region> RegionsByIndex = new List<Region>();
        public readonly HashSet<string> DefinitionsByName = new HashSet<string>();
        public readonly Dictionary<string, Synonym> SynonymsByName = new Dictionary<string, Synonym>();
        public readonly Dictionary<string, Action> ActionsByName = new Dictionary<string, Action>();
        public readonly Dictionary<string, Skill> SkillsByName = new Dictionary<string, Skill>();
        public readonly Dictionary<string, Region> RegionsByName = new Dictionary<string, Region>();
        public readonly Dictionary<string, Wall> WallsByName = new Dictionary<string, Wall>();
        public readonly Dictionary<string, Bitmap> BitmapsByName = new Dictionary<string, Bitmap>();
        public readonly Dictionary<string, Texture> TexturesByName = new Dictionary<string, Texture>();
        public readonly Dictionary<string, string> StringsByName = new Dictionary<string, string>();
        public readonly Dictionary<string, Way> WaysByName = new Dictionary<string, Way>();
        public readonly Dictionary<string, Actor> ActorsByName = new Dictionary<string, Actor>();
        public readonly Dictionary<string, Overlay> OverlaysByName = new Dictionary<string, Overlay>();
        public readonly Dictionary<string, Thing> ThingsByName = new Dictionary<string, Thing>();
        public readonly Dictionary<string, Texture2D> TextureCache = new Dictionary<string, Texture2D>();

        public readonly List<string> Paths = new List<string>();

        public readonly List<string> MapFiles = new List<string>();

        public readonly List<Wall> Walls = new List<Wall>();

        public Canvas Canvas;
        public Light AmbientLight;

        private Resolution _resolution = Resolution.Res320x200;

        //Text parser variables
        private TextParser _textParser;

        //WDL engine variables
        private List<ContourVertex> _contourVertices;
        private RegionWalls _regionWalls;

        public Resolution Resolution
        {
            get => _resolution;
            set
            {
                var canvasScaler = Canvas.GetComponent<CanvasScaler>();
                var referenceResolution = canvasScaler.referenceResolution;
                switch (value)
                {
                    case Resolution.Res320x200:
                        {
                            referenceResolution.x = 320f;
                            referenceResolution.y = 200f;
                            break;
                        }
                    case Resolution.ResX320x240:
                        {
                            referenceResolution.x = 320f;
                            referenceResolution.y = 240f;
                            break;
                        }
                    case Resolution.ResX320x400:
                        {
                            referenceResolution.x = 320f;
                            referenceResolution.y = 400f;
                            break;
                        }
                    case Resolution.ResS640x480:
                        {
                            referenceResolution.x = 640f;
                            referenceResolution.y = 480f;
                            break;
                        }
                    case Resolution.ResS800x600:
                        {
                            referenceResolution.x = 800f;
                            referenceResolution.y = 600f;
                            break;
                        }
                }
                UpdateSkillValue("SCREEN_WIDTH", referenceResolution.x);
                UpdateSkillValue("SCREEN_HGT", referenceResolution.y);
                canvasScaler.referenceResolution = referenceResolution;
                _resolution = value;
            }
        }

        private void Start()
        {
            Instance = this;
            CreateDefaultSynonyms();
            CreateDefaultSkills();
            if (UseWDLEngine)
            {
                _contourVertices = new List<ContourVertex>();
                _regionWalls = new RegionWalls();

                //todo: LPeter1997 you can start parsing your code here
                //the IAcknexWorld instance is ´this´
                //the path to the WDL is at the `WDLPath` variable
            }
            else
            {
                var baseDir = PathUtils.GetFileDirectory(WDLPath);
                _textParser = new TextParser(baseDir, WMPContainsRegionsByName);
                _textParser.ParseWDL(WDLPath);
                foreach (var mapFile in MapFiles)
                {
                    _textParser.ParseWMP(mapFile);
                }
            }
        }

        private void Update()
        {
            UpdateObject();
        }

        //todo: generic method?
        public Overlay CreateOverlay(string name, bool definition = false)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(transform, false);
            var newOverlay = newGameObject.AddComponent<Overlay>();
            newOverlay.AcknexObject.SetString("NAME", name);
            return newOverlay;
        }

        //todo: generic method?
        public Region CreateRegion(string name, bool definition = false)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(transform, false);
            var newRegion = newGameObject.AddComponent<Region>();
            newRegion.AcknexObject.SetString("NAME", name);
            return newRegion;
        }

        //todo: generic method?
        public Wall CreateWall(string name, bool definition = false)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(transform, false);
            var newWall = newGameObject.AddComponent<Wall>();
            newWall.AcknexObject.SetString("NAME", name);
            return newWall;
        }

        //todo: generic method?
        public Way CreateWay(string name, bool definition = false)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(transform, false);
            var newWay = newGameObject.AddComponent<Way>();
            newWay.AcknexObject.SetString("NAME", name);
            return newWay;
        }

        //todo: generic method?
        public Thing CreateThing(string name, bool definition = false)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(transform, false);
            var newThing = newGameObject.AddComponent<Thing>();
            newThing.AcknexObject.SetString("NAME", name);
            return newThing;
        }

        //todo: generic method?
        public Actor CreateActor(string name, bool definition = false)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(transform, false);
            var newActor = newGameObject.AddComponent<Actor>();
            newActor.AcknexObject.SetString("NAME", name);
            return newActor;
        }

        public Material BuildMaterial(string textureName)
        {
            Material material;
            if (textureName != null && TexturesByName.TryGetValue(textureName, out var textureObject))
            {
                material = new Material(textureObject.Flags.Contains("SKY")
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

        public Skill CreateSkill(string name, float value = 0f, float min = 0f, float max = 0f)
        {
            if (SkillsByName.TryGetValue(name, out var existingSkill))
            {
                return existingSkill;
            }
            var skill = new Skill();
            skill.AcknexObject.SetFloat("MIN", min);
            skill.AcknexObject.SetFloat("MAX", max);
            skill.AcknexObject.SetFloat("VAL", value);
            SkillsByName.Add(name, skill);
            return skill;
        }

        public Synonym CreateSynonym(string name, string type = null)
        {
            if (SynonymsByName.TryGetValue(name, out var existingSynonym))
            {
                return existingSynonym;
            }
            var synonym = new Synonym();
            synonym.AcknexObject.SetString("TYPE",type);
            SynonymsByName.Add(name, synonym);
            return synonym;
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
                    wall.ProcessWall(allContourVertices, contourVertices, wall, kvp, ref vertexCount, wall.AcknexObject.GetInteger("REGION2") == kvp.Key);
                }
            }

            foreach (var kvp in contouredRegions)
            {
                var region = World.Instance.RegionsByIndex[kvp.Key];
                Region.BuildRegionFloorAndCeiling(region, kvp.Value);
            }

            foreach (var wall in World.Instance.Walls)
            {
                Wall.BuildWallAndMesh(wall, contourVertices);
            }
        }
    }
}