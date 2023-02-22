using System.Collections.Generic;
using System.IO;
using System.Linq;
using WdlEngine;
using LibTessDotNet;
using UnityEngine;

namespace Acknex
{
    public class World : MonoBehaviour
    {
        public static World Instance { get; private set; }

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
        public readonly Dictionary<string, Thing> ThingsByName = new Dictionary<string, Thing>();

        public readonly List<string> Paths = new List<string>();

        public readonly List<string> MapFiles = new List<string>();

        public readonly List<Wall> Walls = new List<Wall>();

        private readonly TextParser _textParser = new TextParser();

        private void Start()
        {
            Instance = this;

            // TODO: Temporary
            using (var streamReader = new StreamReader(File.OpenRead(_wdlPath)))
            {
                new ScriptingEngine().Test("Assets\\Data", streamReader);
            }

            _textParser.ParseWDL(_wdlPath);
            foreach (var mapFile in MapFiles)
            {
                _textParser.ParseWMP(mapFile);
            }
            SynonymsByName.Add("HERE", new Synonym());
            SynonymsByName.Add("THERE", new Synonym());
            SynonymsByName.Add("MY", new Synonym());
            SynonymsByName.Add("#HIT", new Synonym());
            SynonymsByName.Add("#TOUCHED", new Synonym());
            SynonymsByName.Add("#TOUCH_TEX", new Synonym());
            SynonymsByName.Add("#TOUCH_REG", new Synonym());
            SynonymsByName.Add("#TOUCH_TEXT", new Synonym());
        }

        //todo: generic method?
        public Region CreateRegion(string name)
        {
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(transform, false);
            var newRegion = newGameObject.AddComponent<Region>();
            newRegion.AcknexObject.Set("NAME", name);
            return newRegion;
        }

        //todo: generic method?
        public Wall CreateWall(string name)
        {
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(transform, false);
            var newWall = newGameObject.AddComponent<Wall>();
            newWall.AcknexObject.Set("NAME", name);
            return newWall;
        }

        //todo: generic method?
        public Way CreateWay(string name)
        {
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(transform, false);
            var newWay = newGameObject.AddComponent<Way>();
            newWay.AcknexObject.Set("NAME", name);
            return newWay;
        }

        //todo: generic method?
        public Thing CreateThing(string name)
        {
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(transform, false);
            var newThing = newGameObject.AddComponent<Thing>();
            newThing.AcknexObject.Set("NAME", name);
            return newThing;
        }

        public Material BuildMaterial(string textureName)
        {
            Material material;
            if (textureName != null && TexturesByName.TryGetValue(textureName, out var textureObject))
            {
                material = new Material(textureObject.Flags.Contains("SKY")
                    ? Shader.Find("Acknex/Sky")
                    : Shader.Find("Standard"));
                material.mainTexture = textureObject.GetFirstBitmapImage();
            }
            else
            {
                material = new Material(Shader.Find("Standard"));
            }
            material.SetFloat("_Glossiness", 0f);
            return material;
        }
    }
}