using System;
using System.Collections.Generic;
using Acknex.Interfaces;
using UnityEngine;
using PropertyName = Acknex.Interfaces.PropertyName;

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
            
            var intName = NameUtils.NameToInt(name, true);
            if (StringsByName.ContainsKey(intName))
            {
                throw new Exception("String [" + name + "] already registered.");
            }
            var str = new AcknexString(value);
            str.AcknexObject.Name = name;
            str.AcknexObject.Type = ObjectType.String;
            StringsByName.Add(intName, str);
            AcknexObject.SetAcknexObject(intName, str.AcknexObject);
            return str.AcknexObject;
        }

        public Panel CreatePanel(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            
            var intName = NameUtils.NameToInt(name, true);
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(CanvasView, false);
            var panel = newGameObject.AddComponent<Panel>();
            panel.AcknexObject.Name = name;
            panel.AcknexObject.Type = ObjectType.Panel;
            AcknexObject.SetAcknexObject(intName, panel.AcknexObject);
            PanelsByName.Add(intName, panel);
            return panel;
        }

        public Overlay CreateOverlay(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            
            var intName = NameUtils.NameToInt(name, true);
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(CanvasView, false);
            var overlay = newGameObject.AddComponent<Overlay>();
            overlay.AcknexObject.Name = name;
            overlay.AcknexObject.Type = ObjectType.Overlay;
            AcknexObject.SetAcknexObject(intName, overlay.AcknexObject);
            OverlaysByName.Add(intName, overlay);
            return overlay;
        }

        public Region CreateRegion(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            
            var intName = NameUtils.NameToInt(name, true);
            var newGameObject = new GameObject(name);
            newGameObject.layer = RegionsLayer.LayerIndex;
            newGameObject.transform.SetParent(transform, false);
            var region = newGameObject.AddComponent<Region>();
            region.AcknexObject.Name = name;
            region.AcknexObject.Type = ObjectType.Region;
            region.AcknexObject.SetFloat(PropertyName.AMBIENT, 1.0f);
            return region;
        }

        public Wall CreateWall(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            
            var intName = NameUtils.NameToInt(name, true);
            var newGameObject = new GameObject(name);
            newGameObject.layer = WallsLayer.LayerIndex;
            newGameObject.transform.SetParent(transform, false);
            var wall = newGameObject.AddComponent<Wall>();
            wall.AcknexObject.Type = ObjectType.Wall;
            wall.AcknexObject.Name = name;
            wall.AcknexObject.SetFloat(PropertyName.AMBIENT, 1.0f);
            return wall;
        }

        public Way CreateWay(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            
            var intName = NameUtils.NameToInt(name, true);
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
            
            var intName = NameUtils.NameToInt(name, true);
            var newGameObject = new GameObject(name);
            newGameObject.layer = ThingsAndActorsLayer.LayerIndex;
            newGameObject.transform.SetParent(transform, false);
            var thing = newGameObject.AddComponent<Thing>();
            thing.AcknexObject.Name = name;
            thing.AcknexObject.Type = ObjectType.Thing;
            thing.AcknexObject.SetFloat(PropertyName.AMBIENT, 1.0f);
            return thing;
        }

        public Bitmap CreateBitmap(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            
            var intName = NameUtils.NameToInt(name, true);
            var bitmap = new Bitmap();
            bitmap.AcknexObject.Name = name;
            BitmapsByName.Add(intName, bitmap);
            AcknexObject.SetAcknexObject(intName, bitmap.AcknexObject);
            return bitmap;
        }

        public Actor CreateActor(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            
            var intName = NameUtils.NameToInt(name, true);
            var newGameObject = new GameObject(name);
            newGameObject.layer = ThingsAndActorsLayer.LayerIndex;
            newGameObject.transform.SetParent(transform, false);
            var actor = newGameObject.AddComponent<Actor>();
            actor.AcknexObject.Name = name;
            actor.AcknexObject.Type = ObjectType.Actor;
            actor.AcknexObject.SetFloat(PropertyName.AMBIENT, 1.0f);
            return actor;
        }

        public Skill CreateSkill(string name, float value = 0f, float min = 0f, float max = 0f)
        {
            var nameInt = NameUtils.NameToInt(name);
            return CreateSkill(name, nameInt, value, min, max);
        }

        public Skill CreateSkill(SkillName name, float value = 0f, float min = 0f, float max = 0f)
        {
            return CreateSkill(name.ToString(), (int)name, value, min, max);
        }

        public Skill CreateSkill(string name, int nameInt, float value = 0f, float min = 0f, float max = 0f)
        {
            if (SkillsByName.TryGetValue(nameInt, out var existingSkill))
            {
                return existingSkill;
            }
            var skill = new Skill();
            skill.AcknexObject.Name = name;
            skill.AcknexObject.Type = ObjectType.Skill;
            if (min != 0f || max != 0f)
            {
                skill.AcknexObject.SetFloat(PropertyName.MIN, min);
                skill.AcknexObject.SetFloat(PropertyName.MAX, max);
            }
            SkillsByName.Add(nameInt, skill);
            UpdateSkillValue(nameInt, value);
            AcknexObject.SetAcknexObject(nameInt, skill.AcknexObject);
            return skill;
        }

        public Synonym CreateSynonym(SynonymName name, string type = null)
        {
            var synonym = new Synonym();
            synonym.AcknexObject.Name = name.ToString();
            synonym.AcknexObject.SetString(PropertyName.TYPE, type);
            synonym.AcknexObject.Type = ObjectType.Synonym;
            SynonymsByName.Add((int)name, synonym);
            AcknexObject.SetAcknexObject((int)name, synonym.AcknexObject);
            return synonym;
        }

        public Synonym CreateSynonym(string name, string type = null)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var intName = NameUtils.NameToInt(name);
            var synonym = new Synonym();
            synonym.AcknexObject.Name = name;
            synonym.AcknexObject.SetString(PropertyName.TYPE, type);
            synonym.AcknexObject.Type = ObjectType.Synonym;
            SynonymsByName.Add(intName, synonym);
            AcknexObject.SetAcknexObject(intName, synonym.AcknexObject);
            return synonym;
        }

        private Action CreateAction(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            
            var intName = NameUtils.NameToInt(name, true);
            var action = new Action();
            action.AcknexObject.Name = name;
            action.AcknexObject.Type = ObjectType.Action;
            if (ActionsByName.ContainsKey(intName))
            {
                ActionsByName[intName] = action;
                Debug.Log("Replaced action " + name);
            }
            else
            {
                ActionsByName.Add(intName, action);
            }
            AcknexObject.SetAcknexObject(intName, action.AcknexObject);
            return action;
        }

        private Palette CreatePalette(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            
            var intName = NameUtils.NameToInt(name, true);
            var palette = new Palette();
            palette.AcknexObject.Name = name;
            palette.AcknexObject.Type = ObjectType.Palette;
            PalettesByName.Add(intName, palette);
            AcknexObject.SetAcknexObject(intName, palette.AcknexObject);
            return palette;
        }

        private Model CreateModel(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            
            var intName = NameUtils.NameToInt(name, true);
            var model = new Model();
            model.AcknexObject.Name = name;
            model.AcknexObject.Type = ObjectType.Model;
            ModelsByName.Add(intName, model);
            AcknexObject.SetAcknexObject(intName, model.AcknexObject);
            return model;
        }

        private Song CreateMusic(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            
            var intName = NameUtils.NameToInt(name, true);
            var music = new Song();
            music.AcknexObject.Name = name;
            music.AcknexObject.Type = ObjectType.Song;
            SongsByName.Add(intName, music);
            AcknexObject.SetAcknexObject(intName, music.AcknexObject);
            return music;
        }

        private Sound CreateSound(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            
            var intName = NameUtils.NameToInt(name, true);
            var sound = new Sound();
            sound.AcknexObject.Name = name;
            sound.AcknexObject.Type = ObjectType.Sound;
            SoundsByName.Add(intName, sound);
            AcknexObject.SetAcknexObject(intName, sound.AcknexObject);
            return sound;
        }

        private Font CreateFont(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            
            var intName = NameUtils.NameToInt(name, true);
            var font = new Font();
            font.AcknexObject.Name = name;
            font.AcknexObject.Type = ObjectType.Font;
            FontsByName.Add(intName, font);
            AcknexObject.SetAcknexObject(intName, font.AcknexObject);
            return font;
        }

        public Digits CreateDigitis(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var intName = NameUtils.NameToInt(name, true);
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(CanvasView, false);
            var digits = newGameObject.AddComponent<Digits>();
            digits.AcknexObject.Name = name;
            digits.AcknexObject.Type = ObjectType.Digits;
            AcknexObject.SetAcknexObject(intName, digits.AcknexObject);
            DigitsByName.Add(intName, digits);
            return digits;
        }

        public Picture CreatePicture(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            
            var intName = NameUtils.NameToInt(name, true);
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(CanvasView, false);
            var picture = newGameObject.AddComponent<Picture>();
            picture.AcknexObject.Name = name;
            picture.AcknexObject.Type = ObjectType.Picture;
            AcknexObject.SetAcknexObject(intName, picture.AcknexObject);
            PicturesByName.Add(intName, picture);
            return picture;
        }

        public Text CreateText(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            
            var intName = NameUtils.NameToInt(name, true);
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(CanvasView, false);
            var text = newGameObject.AddComponent<Text>();
            text.AcknexObject.Name = name;
            text.AcknexObject.SetFloat(PropertyName.INDEX, 1);
            text.AcknexObject.Type = ObjectType.Text;
            AcknexObject.SetAcknexObject(intName, text.AcknexObject);
            TextsByName.Add(intName, text);
            return text;
        }

        private Flic CreateFlic(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            
            var intName = NameUtils.NameToInt(name, true);
            var flic = new Flic();
            flic.AcknexObject.Name = name;
            flic.AcknexObject.Type = ObjectType.Flic;
            FlicsByName.Add(intName, flic);
            AcknexObject.SetAcknexObject(intName, flic.AcknexObject);
            return flic;
        }

        private Texture CreateTexture(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            
            var texture = new Texture();
            var intName = NameUtils.NameToInt(name, true);
            texture.AcknexObject.Name = name;
            texture.AcknexObject.SetFloat(PropertyName.SVOL, 0.5f);
            texture.AcknexObject.SetFloat(PropertyName.SDIST, 100f);
            texture.AcknexObject.SetFloat(PropertyName.SVDIST, 100f);
            texture.AcknexObject.SetFloat(PropertyName.SCALE_X, 16);
            texture.AcknexObject.SetFloat(PropertyName.SCALE_Y, 16);
            texture.AcknexObject.Type = ObjectType.Texture;
            TexturesByName.Add(intName, texture);
            AcknexObject.SetAcknexObject(intName, texture.AcknexObject);
            return texture;
        }
    }
}
