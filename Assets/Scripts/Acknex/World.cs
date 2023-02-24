using System;
using System.Collections.Generic;
using Acknex.Interfaces;
using UnityEngine;
using UnityEngine.UI;

namespace Acknex
{
    public partial class World : MonoBehaviour, IAcknexWorld
    {
        public static World Instance { get; private set; }

        public Resolution Resolution1
        {
            get => Resolution;
            set => Resolution = value;
        }

        [SerializeField]
        private string _wdlPath;

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

        private Resolution _resolution = Resolution.Res320x200;
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
                UpdateSkill("SCREEN_WIDTH", referenceResolution.x);
                UpdateSkill("SCREEN_HGT", referenceResolution.y);
                canvasScaler.referenceResolution = referenceResolution;
                _resolution = value;
            }
        }

        //todo: how to calculate this?
        public float CanvasWidthRatio = 2f;

        private readonly TextParser _textParser = new TextParser();

        private void Start()
        {
            Instance = this;
            CreateDefaultSynonyms();
            CreateDefaultSkills();
            _textParser.ParseWDL(_wdlPath);
            foreach (var mapFile in MapFiles)
            {
                _textParser.ParseWMP(mapFile);
            }
        }

        //todo: generic method?
        public Overlay CreateOverlay(string name, bool definition = false)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var newGameObject = new GameObject(definition ? name + "_DEFINITION" : name);
            newGameObject.transform.SetParent(transform, false);
            var newOverlay = newGameObject.AddComponent<Overlay>();
            newOverlay.AcknexObject.Set("NAME", name);
            return newOverlay;
        }

        //todo: generic method?
        public Region CreateRegion(string name, bool definition = false)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var newGameObject = new GameObject(definition ? name + "_DEFINITION" : name);
            newGameObject.transform.SetParent(transform, false);
            var newRegion = newGameObject.AddComponent<Region>();
            newRegion.AcknexObject.Set("NAME", name);
            return newRegion;
        }

        //todo: generic method?
        public Wall CreateWall(string name, bool definition = false)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var newGameObject = new GameObject(definition ? name + "_DEFINITION" : name);
            newGameObject.transform.SetParent(transform, false);
            var newWall = newGameObject.AddComponent<Wall>();
            newWall.AcknexObject.Set("NAME", name);
            return newWall;
        }

        //todo: generic method?
        public Way CreateWay(string name, bool definition = false)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var newGameObject = new GameObject(definition ? name + "_DEFINITION" : name);
            newGameObject.transform.SetParent(transform, false);
            var newWay = newGameObject.AddComponent<Way>();
            newWay.AcknexObject.Set("NAME", name);
            return newWay;
        }

        //todo: generic method?
        public Thing CreateThing(string name, bool definition = false)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var newGameObject = new GameObject(definition ? name + "_DEFINITION" : name);
            newGameObject.transform.SetParent(transform, false);
            var newThing = newGameObject.AddComponent<Thing>();
            newThing.AcknexObject.Set("NAME", name);
            return newThing;
        }

        //todo: generic method?
        public Thing CreateActor(string name, bool definition = false)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var newGameObject = new GameObject(definition ? name + "_DEFINITION" : name);
            newGameObject.transform.SetParent(transform, false);
            var newActor = newGameObject.AddComponent<Actor>();
            newActor.AcknexObject.Set("NAME", name);
            return newActor;
        }

        public Material BuildMaterial(string textureName)
        {
            Material material;
            if (textureName != null && TexturesByName.TryGetValue(textureName, out var textureObject))
            {
                material = new Material(textureObject.Flags.Contains("SKY")
                    ? Shader.Find("Acknex/Sky")
                    : Shader.Find("Standard"));
                material.mainTexture = textureObject.GetBitmapAt()?.Texture2D;
            }
            else
            {
                material = new Material(Shader.Find("Standard"));
            }
            material.SetFloat("_Glossiness", 0f);
            return material;
        }

        public IAcknexObject CreateObject(ObjectType type, string name, bool fromWDL)
        {
            throw new NotImplementedException();
        }

        public IAcknexObject GetObject(ObjectType type, string name, bool fromWDL)
        {
            throw new NotImplementedException();
        }


        public Skill CreateSkill(string name, float value = 0f, float min = 0f, float max = 0f)
        {
            if (SkillsByName.TryGetValue(name, out var existingSkill))
            {
                return existingSkill;
            }
            var skill = new Skill();
            skill.AcknexObject["MIN"] = min;
            skill.AcknexObject["MAX"] = max;
            skill.AcknexObject["VAL"] = value;
            SkillsByName.Add(name, skill);
            return skill;
        }

        //todo: clamp
        public void UpdateSkill(string name, float value)
        {
            if (SkillsByName.TryGetValue(name, out var skill))
            {
                skill.AcknexObject["VAL"] = value;
            }
        }

        public Synonym CreateSynonym(string name, string type = null)
        {
            if (SynonymsByName.TryGetValue(name, out var existingSynonym))
            {
                return existingSynonym;
            }
            var synonym = new Synonym();
            synonym.AcknexObject["TYPE"] = type;
            SynonymsByName.Add(name, synonym);
            return synonym;
        }
    }
}