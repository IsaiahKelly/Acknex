using System;
using System.Collections.Generic;
using Acknex.Interfaces;
using LibTessDotNet;
using UnityEngine;
using UnityEngine.UI;
using WdlEngine;

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
        
        public string WDLPath;

        //todo: how to calculate this?
        public float CanvasWidthRatio = 2f;
        public bool WMPContainsRegionsByName;
        public bool UseWDLEngine;
        public SingleUnityLayer WallsAndRegionsLayer;
        public SingleUnityLayer ThingsAndActorsLayer;

        public readonly List<Region> RegionsByIndex = new List<Region>();

        public readonly Dictionary<string, IList<Region>> AllRegionsByName = new Dictionary<string, IList<Region>>();
        public readonly Dictionary<string, IList<Wall>> AllWallsByName = new Dictionary<string, IList<Wall>>();
        public readonly Dictionary<string, IList<Way>> AllWaysByName = new Dictionary<string, IList<Way>>();
        public readonly Dictionary<string, IList<Actor>> AllActorsByName = new Dictionary<string, IList<Actor>>();
        public readonly Dictionary<string, IList<Thing>> AllThingsByName = new Dictionary<string, IList<Thing>>();

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
        public readonly Dictionary<string, string> StringsByName = new Dictionary<string, string>();

        public readonly List<string> Paths = new List<string>();

        public readonly List<Wall> Walls = new List<Wall>();

        public Canvas Canvas;
        public Light AmbientLight;

        //Text parser variables
        private TextParser _textParser;
        private List<ContourVertex> _contourVertices;
        private RegionWalls _regionWalls;
        
        private void Start()
        {
            Instance = this;
            CreateDefaultSynonyms();
            CreateDefaultSkills();

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
            newGameObject.layer = WallsAndRegionsLayer.LayerIndex;
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
            newGameObject.layer = WallsAndRegionsLayer.LayerIndex;
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
            newGameObject.layer = ThingsAndActorsLayer.LayerIndex;
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
            newGameObject.layer = ThingsAndActorsLayer.LayerIndex;
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
            synonym.AcknexObject.SetString("TYPE", type);
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

        public void SetFloatAll(string objectName, string propertyName, float value)
        {
            if (AllWallsByName.TryGetValue(objectName, out var walls))
            {
                foreach (var item in walls)
                {
                    item.AcknexObject.SetFloat(propertyName, value);
                }
            }
            if (AllActorsByName.TryGetValue(objectName, out var actors))
            {
                foreach (var item in actors)
                {
                    item.AcknexObject.SetFloat(propertyName, value);
                }
            }
            if (AllThingsByName.TryGetValue(objectName, out var things))
            {
                foreach (var item in things)
                {
                    item.AcknexObject.SetFloat(propertyName, value);
                }
            }
            if (AllRegionsByName.TryGetValue(objectName, out var regions))
            {
                foreach (var item in regions)
                {
                    item.AcknexObject.SetFloat(propertyName, value);
                }
            }
            if (AllWaysByName.TryGetValue(objectName, out var ways))
            {
                foreach (var item in ways)
                {
                    item.AcknexObject.SetFloat(propertyName, value);
                }
            }
        }

        public void SetIntegerAll(string objectName, string propertyName, int value)
        {
            if (AllWallsByName.TryGetValue(objectName, out var walls))
            {
                foreach (var item in walls)
                {
                    item.AcknexObject.SetInteger(propertyName, value);
                }
            }
            if (AllActorsByName.TryGetValue(objectName, out var actors))
            {
                foreach (var item in actors)
                {
                    item.AcknexObject.SetInteger(propertyName, value);
                }
            }
            if (AllThingsByName.TryGetValue(objectName, out var things))
            {
                foreach (var item in things)
                {
                    item.AcknexObject.SetInteger(propertyName, value);
                }
            }
            if (AllRegionsByName.TryGetValue(objectName, out var regions))
            {
                foreach (var item in regions)
                {
                    item.AcknexObject.SetInteger(propertyName, value);
                }
            }
            if (AllWaysByName.TryGetValue(objectName, out var ways))
            {
                foreach (var item in ways)
                {
                    item.AcknexObject.SetInteger(propertyName, value);
                }
            }
        }

        public void SetStringAll(string objectName, string propertyName, string value)
        {
            if (AllWallsByName.TryGetValue(objectName, out var walls))
            {
                foreach (var item in walls)
                {
                    item.AcknexObject.SetString(propertyName, value);
                }
            }
            if (AllActorsByName.TryGetValue(objectName, out var actors))
            {
                foreach (var item in actors)
                {
                    item.AcknexObject.SetString(propertyName, value);
                }
            }
            if (AllThingsByName.TryGetValue(objectName, out var things))
            {
                foreach (var item in things)
                {
                    item.AcknexObject.SetString(propertyName, value);
                }
            }
            if (AllRegionsByName.TryGetValue(objectName, out var regions))
            {
                foreach (var item in regions)
                {
                    item.AcknexObject.SetString(propertyName, value);
                }
            }
            if (AllWaysByName.TryGetValue(objectName, out var ways))
            {
                foreach (var item in ways)
                {
                    item.AcknexObject.SetString(propertyName, value);
                }
            }
        }

        public void SetObjectAll<T>(string objectName, string propertyName, T value)
        {
            if (AllWallsByName.TryGetValue(objectName, out var walls))
            {
                foreach (var item in walls)
                {
                    item.AcknexObject.SetObject(propertyName, value);
                }
            }
            if (AllActorsByName.TryGetValue(objectName, out var actors))
            {
                foreach (var item in actors)
                {
                    item.AcknexObject.SetObject(propertyName, value);
                }
            }
            if (AllThingsByName.TryGetValue(objectName, out var things))
            {
                foreach (var item in things)
                {
                    item.AcknexObject.SetObject(propertyName, value);
                }
            }
            if (AllRegionsByName.TryGetValue(objectName, out var regions))
            {
                foreach (var item in regions)
                {
                    item.AcknexObject.SetObject(propertyName, value);
                }
            }
            if (AllWaysByName.TryGetValue(objectName, out var ways))
            {
                foreach (var item in ways)
                {
                    item.AcknexObject.SetObject(propertyName, value);
                }
            }
        }

        public void SetAcknexObjectAll(string objectName, string propertyName, IAcknexObject value)
        {
            if (AllWallsByName.TryGetValue(objectName, out var walls))
            {
                foreach (var item in walls)
                {
                    item.AcknexObject.SetAcknexObject(propertyName, value);
                }
            }
            if (AllActorsByName.TryGetValue(objectName, out var actors))
            {
                foreach (var item in actors)
                {
                    item.AcknexObject.SetAcknexObject(propertyName, value);
                }
            }
            if (AllThingsByName.TryGetValue(objectName, out var things))
            {
                foreach (var item in things)
                {
                    item.AcknexObject.SetAcknexObject(propertyName, value);
                }
            }
            if (AllRegionsByName.TryGetValue(objectName, out var regions))
            {
                foreach (var item in regions)
                {
                    item.AcknexObject.SetAcknexObject(propertyName, value);
                }
            }
            if (AllWaysByName.TryGetValue(objectName, out var ways))
            {
                foreach (var item in ways)
                {
                    item.AcknexObject.SetAcknexObject(propertyName, value);
                }
            }
        }
    }
}