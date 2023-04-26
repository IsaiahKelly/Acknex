using System;
using System.Collections.Generic;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public partial class World
    {
        public IAcknexObject AddString(string name, string value)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            if (StringsByName.ContainsKey(name))
            {
                throw new Exception("String [" + name + "] already registered.");
            }
            var str = new AcknexString(value);
            str.AcknexObject.Name = name;
            str.AcknexObject.Type = ObjectType.String;
            StringsByName.Add(name, str);
            AcknexObject.SetAcknexObject(name, str.AcknexObject);
            return str.AcknexObject;
        }

        public Panel CreatePanel(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(CanvasView, false);
            var panel = newGameObject.AddComponent<Panel>();
            panel.AcknexObject.Name = name;
            panel.AcknexObject.Type = ObjectType.Panel;
            AcknexObject.SetAcknexObject(name, panel.AcknexObject);
            PanelsByName.Add(name, panel);
            return panel;
        }

        public Overlay CreateOverlay(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(CanvasView, false);
            var overlay = newGameObject.AddComponent<Overlay>();
            overlay.AcknexObject.Name = name;
            overlay.AcknexObject.Type = ObjectType.Overlay;
            AcknexObject.SetAcknexObject(name, overlay.AcknexObject);
            OverlaysByName.Add(name, overlay);
            return overlay;
        }

        public Region CreateRegion(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            var newGameObject = new GameObject(name);
            newGameObject.layer = WallsAndRegionsLayer.LayerIndex;
            newGameObject.transform.SetParent(transform, false);
            var region = newGameObject.AddComponent<Region>();
            region.AcknexObject.Name = name;
            region.AcknexObject.Type = ObjectType.Region;
            return region;
        }

        public Wall CreateWall(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            var newGameObject = new GameObject(name);
            newGameObject.layer = WallsAndRegionsLayer.LayerIndex;
            newGameObject.transform.SetParent(transform, false);
            var wall = newGameObject.AddComponent<Wall>();
            wall.AcknexObject.Type = ObjectType.Wall;
            wall.AcknexObject.Name = name;
            return wall;
        }

        public Way CreateWay(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(transform, false);
            var way = newGameObject.AddComponent<Way>();
            way.AcknexObject.Name = name;
            way.AcknexObject.Type = ObjectType.Way;
            return way;
        }


        public Thing CreateThing(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            var newGameObject = new GameObject(name);
            newGameObject.layer = ThingsAndActorsLayer.LayerIndex;
            newGameObject.transform.SetParent(transform, false);
            var thing = newGameObject.AddComponent<Thing>();
            thing.AcknexObject.Name = name;
            thing.AcknexObject.Type = ObjectType.Thing;
            return thing;
        }

        public Bitmap CreateBitmap(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            var bitmap = new Bitmap();
            bitmap.AcknexObject.Name = name;
            BitmapsByName.Add(name, bitmap);
            AcknexObject.SetAcknexObject(name, bitmap.AcknexObject);
            return bitmap;
        }

        public Actor CreateActor(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            var newGameObject = new GameObject(name);
            newGameObject.layer = ThingsAndActorsLayer.LayerIndex;
            newGameObject.transform.SetParent(transform, false);
            var actor = newGameObject.AddComponent<Actor>();
            actor.AcknexObject.Name = name;
            actor.AcknexObject.Type = ObjectType.Actor;
            return actor;
        }

        public Skill CreateSkill(string name, float value = 0f, float min = 0f, float max = 0f)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            if (SkillsByName.TryGetValue(name, out var existingSkill))
            {
                return existingSkill;
            }
            var skill = new Skill();
            skill.AcknexObject.Name = name;
            skill.AcknexObject.Type = ObjectType.Skill;
            if (min != 0f || max != 0f)
            {
                skill.AcknexObject.SetFloat("MIN", min);
                skill.AcknexObject.SetFloat("MAX", max);
            }
            SkillsByName.Add(name, skill);
            UpdateSkillValue(name, value);
            AcknexObject.SetAcknexObject(name, skill.AcknexObject);
            return skill;
        }

        public Synonym CreateSynonym(string name, string type = null)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            var synonym = new Synonym();
            synonym.AcknexObject.Name = name;
            synonym.AcknexObject.SetString("TYPE", type);
            synonym.AcknexObject.Type = ObjectType.Synonym;
            SynonymsByName.Add(name, synonym);
            AcknexObject.SetAcknexObject(name, synonym.AcknexObject);
            return synonym;
        }

        private Action CreateAction(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            var action = new Action();
            action.AcknexObject.Name = name;
            action.AcknexObject.Type = ObjectType.Action;
            if (ActionsByName.ContainsKey(name))
            {
                ActionsByName[name] = action;
                Debug.Log("Replaced action " + name);
            }
            else
            {
                ActionsByName.Add(name, action);
            }
            AcknexObject.SetAcknexObject(name, action.AcknexObject);
            return action;
        }

        private Palette CreatePalette(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            var palette = new Palette();
            palette.AcknexObject.Name = name;
            palette.AcknexObject.Type = ObjectType.Palette;
            PalettesByName.Add(name, palette);
            AcknexObject.SetAcknexObject(name, palette.AcknexObject);
            return palette;
        }

        private Model CreateModel(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            var model = new Model();
            model.AcknexObject.Name = name;
            model.AcknexObject.Type = ObjectType.Model;
            ModelsByName.Add(name, model);
            AcknexObject.SetAcknexObject(name, model.AcknexObject);
            return model;
        }

        private Song CreateMusic(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            var music = new Song();
            music.AcknexObject.Name = name;
            music.AcknexObject.Type = ObjectType.Song;
            SongsByName.Add(name, music);
            AcknexObject.SetAcknexObject(name, music.AcknexObject);
            return music;
        }

        private Sound CreateSound(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            var sound = new Sound();
            sound.AcknexObject.Name = name;
            sound.AcknexObject.Type = ObjectType.Sound;
            SoundsByName.Add(name, sound);
            AcknexObject.SetAcknexObject(name, sound.AcknexObject);
            return sound;
        }

        private Font CreateFont(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            var font = new Font();
            font.AcknexObject.Name = name;
            font.AcknexObject.Type = ObjectType.Font;
            FontsByName.Add(name, font);
            AcknexObject.SetAcknexObject(name, font.AcknexObject);
            return font;
        }

        public Digits CreateDigitis(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(CanvasView, false);
            var digits = newGameObject.AddComponent<Digits>();
            digits.AcknexObject.Name = name;
            digits.AcknexObject.Type = ObjectType.Digits;
            AcknexObject.SetAcknexObject(name, digits.AcknexObject);
            DigitsByName.Add(name, digits);
            return digits;
        }

        public Picture CreatePicture(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(CanvasView, false);
            var picture = newGameObject.AddComponent<Picture>();
            picture.AcknexObject.Name = name;
            picture.AcknexObject.Type = ObjectType.Picture;
            AcknexObject.SetAcknexObject(name, picture.AcknexObject);
            PicturesByName.Add(name, picture);
            return picture;
        }

        public Text CreateText(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(CanvasView, false);
            var text = newGameObject.AddComponent<Text>();
            text.AcknexObject.Name = name;
            // text.AcknexObject.SetObject("STRING", new List<IAcknexObject> { null });
            text.AcknexObject.SetFloat("INDEX", 1);
            text.AcknexObject.Type = ObjectType.Text;
            AcknexObject.SetAcknexObject(name, text.AcknexObject);
            TextsByName.Add(name, text);
            return text;
        }

        private Flic CreateFlic(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            var flic = new Flic();
            flic.AcknexObject.Name = name;
            flic.AcknexObject.Type = ObjectType.Flic;
            FlicsByName.Add(name, flic);
            AcknexObject.SetAcknexObject(name, flic.AcknexObject);
            return flic;
        }

        private Texture CreateTexture(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            name = string.Intern(name);
            var texture = new Texture();
            texture.AcknexObject.Name = name;
            texture.AcknexObject.SetFloat("SVOL", 0.5f);
            texture.AcknexObject.SetFloat("SDIST", 100f);
            texture.AcknexObject.SetFloat("SVDIST", 100f);
            texture.AcknexObject.SetFloat("SCALE_X", 16);
            texture.AcknexObject.SetFloat("SCALE_Y", 16);
            texture.AcknexObject.Type = ObjectType.Texture;
            TexturesByName.Add(name, texture);
            AcknexObject.SetAcknexObject(name, texture.AcknexObject);
            return texture;
        }
    }
}
