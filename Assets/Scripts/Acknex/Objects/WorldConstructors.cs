using NameId = System.UInt32;
using System;
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
            var str = new AcknexString(value);
            str.AcknexObject.Type = ObjectType.String;
            str.AcknexObject.Name = name;
            StringsByName.Add(str.AcknexObject.NameId, str);
            AcknexObject.SetAcknexObject(str.AcknexObject.NameId, str.AcknexObject);
            return str.AcknexObject;
        }

        public Panel CreatePanel(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(CanvasView, false);
            var panel = newGameObject.AddComponent<Panel>();
            panel.AcknexObject.Type = ObjectType.Panel;
            panel.AcknexObject.Name = name;
            AcknexObject.SetAcknexObject(panel.AcknexObject.NameId, panel.AcknexObject);
            PanelsByName.Add(panel.AcknexObject.NameId, panel);
            return panel;
        }

        public Overlay CreateOverlay(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(CanvasView, false);
            var overlay = newGameObject.AddComponent<Overlay>();
            overlay.AcknexObject.Type = ObjectType.Overlay;
            overlay.AcknexObject.Name = name;
            AcknexObject.SetAcknexObject(overlay.AcknexObject.NameId, overlay.AcknexObject);
            OverlaysByName.Add(overlay.AcknexObject.NameId, overlay);
            return overlay;
        }

        public Region CreateRegion(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var newGameObject = new GameObject(name);
            newGameObject.layer = RegionFloorLayer.LayerIndex;
            newGameObject.transform.SetParent(transform, false);
            var region = newGameObject.AddComponent<Region>();
            region.AcknexObject.Type = ObjectType.Region;
            region.AcknexObject.Name = name;
            region.AcknexObject.SetFloat(PropertyName.AMBIENT, 1.0f);
            return region;
        }

        public Wall CreateWall(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
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
            
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(transform, false);
            var way = newGameObject.AddComponent<Way>();
            way.AcknexObject.Type = ObjectType.Way;
            way.AcknexObject.Name = name;
            return way;
        }


        public Thing CreateThing(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var newGameObject = new GameObject(name);
            newGameObject.layer = ThingsAndActorsLayer.LayerIndex;
            newGameObject.transform.SetParent(transform, false);
            var thing = newGameObject.AddComponent<Thing>();
            thing.AcknexObject.Type = ObjectType.Thing;
            thing.AcknexObject.Name = name;
            thing.AcknexObject.SetFloat(PropertyName.AMBIENT, 1.0f);
            return thing;
        }

        public Bitmap CreateBitmap(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var bitmap = new Bitmap();
            bitmap.AcknexObject.Type = ObjectType.Bitmap;
            bitmap.AcknexObject.Name = name;
            BitmapsByName.Add(bitmap.AcknexObject.NameId, bitmap);
            AcknexObject.SetAcknexObject(bitmap.AcknexObject.NameId, bitmap.AcknexObject);
            return bitmap;
        }

        public Actor CreateActor(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var newGameObject = new GameObject(name);
            newGameObject.layer = ThingsAndActorsLayer.LayerIndex;
            newGameObject.transform.SetParent(transform, false);
            var actor = newGameObject.AddComponent<Actor>();
            actor.AcknexObject.Type = ObjectType.Actor;
            actor.AcknexObject.Name = name;
            actor.AcknexObject.SetFloat(PropertyName.AMBIENT, 1.0f);
            return actor;
        }

        public Skill CreateSkill(SkillName name, float value = 0f, float min = 0f, float max = 0f)
        {
            var skill = new Skill();
            skill.AcknexObject.Type = ObjectType.Skill;
            skill.AcknexObject.Name = name.ToString();
            skill.AcknexObject.NameId = (NameId)name;
            if (SkillsByName.TryGetValue(skill.AcknexObject.NameId, out var existingSkill))
            {
                if (min != 0f || max != 0f)
                {
                    existingSkill.AcknexObject.SetFloat(PropertyName.MIN, min);
                    existingSkill.AcknexObject.SetFloat(PropertyName.MAX, max);
                }
                UpdateSkillValue(skill.AcknexObject.NameId, value);
                return existingSkill;
            }
            if (min != 0f || max != 0f)
            {
                skill.AcknexObject.SetFloat(PropertyName.MIN, min);
                skill.AcknexObject.SetFloat(PropertyName.MAX, max);
            }
            SkillsByName.Add(skill.AcknexObject.NameId, skill);
            UpdateSkillValue(skill.AcknexObject.NameId, value);
            AcknexObject.SetAcknexObject(skill.AcknexObject.NameId, skill.AcknexObject);
            return skill;
        }

        public Skill CreateSkill(string name, float value = 0f, float min = 0f, float max = 0f)
        {
            var skill = new Skill();
            skill.AcknexObject.Type = ObjectType.Skill;
            skill.AcknexObject.Name = name;
            if (SkillsByName.TryGetValue(skill.AcknexObject.NameId, out var existingSkill))
            {
                if (min != 0f || max != 0f)
                {
                    existingSkill.AcknexObject.SetFloat(PropertyName.MIN, min);
                    existingSkill.AcknexObject.SetFloat(PropertyName.MAX, max);
                }
                UpdateSkillValue(skill.AcknexObject.NameId, value);
                return existingSkill;
            }
            if (min != 0f || max != 0f)
            {
                skill.AcknexObject.SetFloat(PropertyName.MIN, min);
                skill.AcknexObject.SetFloat(PropertyName.MAX, max);
            }
            SkillsByName.Add(skill.AcknexObject.NameId, skill);
            UpdateSkillValue(skill.AcknexObject.NameId, value);
            AcknexObject.SetAcknexObject(skill.AcknexObject.NameId, skill.AcknexObject);
            return skill;
        }

        public Synonym CreateSynonym(SynonymName name, string type = null)
        {
            var synonym = new Synonym();
            synonym.AcknexObject.Type = ObjectType.Synonym;
            synonym.AcknexObject.Name = name.ToString();
            synonym.AcknexObject.SetString(PropertyName.TYPE, type);
            SynonymsByName.Add((NameId)name, synonym);
            AcknexObject.SetAcknexObject((NameId)name, synonym.AcknexObject);
            return synonym;
        }

        public Synonym CreateSynonym(string name, string type = null)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var synonym = new Synonym();
            synonym.AcknexObject.Type = ObjectType.Synonym;
            synonym.AcknexObject.Name = name;
            synonym.AcknexObject.SetString(PropertyName.TYPE, type);
            SynonymsByName.Add(synonym.AcknexObject.NameId, synonym);
            AcknexObject.SetAcknexObject(synonym.AcknexObject.NameId, synonym.AcknexObject);
            return synonym;
        }

        private Action CreateAction(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var action = new Action();
            action.AcknexObject.Type = ObjectType.Action;
            action.AcknexObject.Name = name;
            if (ActionsByName.ContainsKey(action.AcknexObject.NameId))
            {
                ActionsByName[action.AcknexObject.NameId] = action;
                Debug.Log("Replaced action " + name);
            }
            else
            {
                ActionsByName.Add(action.AcknexObject.NameId, action);
            }
            AcknexObject.SetAcknexObject(action.AcknexObject.NameId, action.AcknexObject);
            return action;
        }

        private Palette CreatePalette(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var palette = new Palette();
            palette.AcknexObject.Type = ObjectType.Palette;
            palette.AcknexObject.Name = name;
            PalettesByName.Add(palette.AcknexObject.NameId, palette);
            AcknexObject.SetAcknexObject(palette.AcknexObject.NameId, palette.AcknexObject);
            return palette;
        }

        private Model CreateModel(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var model = new Model();
            model.AcknexObject.Type = ObjectType.Model;
            model.AcknexObject.Name = name;
            ModelsByName.Add(model.AcknexObject.NameId, model);
            AcknexObject.SetAcknexObject(model.AcknexObject.NameId, model.AcknexObject);
            return model;
        }

        private Song CreateMusic(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var music = new Song();
            music.AcknexObject.Type = ObjectType.Song;
            music.AcknexObject.Name = name;
            SongsByName.Add(music.AcknexObject.NameId, music);
            AcknexObject.SetAcknexObject(music.AcknexObject.NameId, music.AcknexObject);
            return music;
        }

        private Sound CreateSound(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var sound = new Sound();
            sound.AcknexObject.Type = ObjectType.Sound;
            sound.AcknexObject.Name = name;
            SoundsByName.Add(sound.AcknexObject.NameId, sound);
            AcknexObject.SetAcknexObject(sound.AcknexObject.NameId, sound.AcknexObject);
            return sound;
        }

        private Font CreateFont(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var font = new Font();
            font.AcknexObject.Type = ObjectType.Font;
            font.AcknexObject.Name = name;
            FontsByName.Add(font.AcknexObject.NameId, font);
            AcknexObject.SetAcknexObject(font.AcknexObject.NameId, font.AcknexObject);
            return font;
        }

        public Digits CreateDigitis(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(CanvasView, false);
            var digits = newGameObject.AddComponent<Digits>();
            digits.AcknexObject.Type = ObjectType.Digits;
            digits.AcknexObject.Name = name;
            AcknexObject.SetAcknexObject(digits.AcknexObject.NameId, digits.AcknexObject);
            DigitsByName.Add(digits.AcknexObject.NameId, digits);
            return digits;
        }

        public Picture CreatePicture(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(CanvasView, false);
            var picture = newGameObject.AddComponent<Picture>();
            picture.AcknexObject.Type = ObjectType.Picture;
            picture.AcknexObject.Name = name;
            AcknexObject.SetAcknexObject(picture.AcknexObject.NameId, picture.AcknexObject);
            PicturesByName.Add(picture.AcknexObject.NameId, picture);
            return picture;
        }

        public Text CreateText(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(CanvasView, false);
            var text = newGameObject.AddComponent<Text>();
            text.AcknexObject.Type = ObjectType.Text;
            text.AcknexObject.Name = name;
            text.AcknexObject.SetFloat(PropertyName.INDEX, 1);
            AcknexObject.SetAcknexObject(text.AcknexObject.NameId, text.AcknexObject);
            TextsByName.Add(text.AcknexObject.NameId, text);
            return text;
        }

        private Flic CreateFlic(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            var flic = new Flic();
            flic.AcknexObject.Type = ObjectType.Flic;
            flic.AcknexObject.Name = name;
            FlicsByName.Add(flic.AcknexObject.NameId, flic);
            AcknexObject.SetAcknexObject(flic.AcknexObject.NameId, flic.AcknexObject);
            return flic;
        }

        private Texture CreateTexture(string name)
        {
            if (name == null)
            {
                throw new Exception("Expected: name");
            }
            
            var texture = new Texture();
            texture.AcknexObject.Type = ObjectType.Texture;
            texture.AcknexObject.Name = name;
            texture.AcknexObject.SetFloat(PropertyName.SVOL, 0.5f);
            texture.AcknexObject.SetFloat(PropertyName.SDIST, 100f);
            texture.AcknexObject.SetFloat(PropertyName.SVDIST, 100f);
            texture.AcknexObject.SetFloat(PropertyName.SCALE_X, 16);
            texture.AcknexObject.SetFloat(PropertyName.SCALE_Y, 16);
            TexturesByName.Add(texture.AcknexObject.NameId, texture);
            AcknexObject.SetAcknexObject(texture.AcknexObject.NameId, texture.AcknexObject);
            return texture;
        }
    }
}
