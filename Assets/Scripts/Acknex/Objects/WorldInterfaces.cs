using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using Acknex.Interfaces;
using AudioSynthesis.Bank;
using AudioSynthesis.Midi;
using LibTessDotNet;
using Tests;
using UnityEngine;
using UnityEngine.UI;
using Resolution = Acknex.Interfaces.Resolution;

namespace Acknex
{
    public partial class World
    {
        private Resolution _resolution = Resolution.Res320x200;
        private IAcknexRuntime _runtime;

        public void UpdateObject()
        {
            AmbientLight.transform.rotation = Quaternion.Euler(0f, AngleUtils.ConvertAcknexToUnityAngle(AcknexObject.GetFloat("LIGHT_ANGLE")), 0f) * Quaternion.Euler(45f, 0f, 0f);
            UpdateSkills();
            UpdateEvents();
        }

        public void Enable()
        {
        }

        public void Disable()
        {
        }

        public void SetupTemplate()
        {
            
        }

        public Resolution GameResolution
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

        public IAcknexObject CreateObjectInstance(ObjectType type, string name)
        {
            switch (type)
            {
                case ObjectType.Thing:
                    {
                        var thing = CreateThing(name);
                        return thing.AcknexObject;
                    }
                case ObjectType.Actor:
                    {
                        var actor = CreateActor(name);
                        return actor.AcknexObject;
                    }
                case ObjectType.Region:
                    {
                        var container = CreateRegion(name);
                        if (!WMPContainsRegionsByName)
                        {
                            RegionsByIndex.Add(container);
                        }
                        return container.AcknexObject;
                    }
                case ObjectType.Wall:
                    {
                        var container = CreateWall(name);
                        Walls.Add(container);
                        return container.AcknexObject;
                    }
                case ObjectType.Way:
                    {
                        var container = CreateWay(name);
                        return container.AcknexObject;
                    }
            }
            throw new Exception("Unknown instance type");
        }

        public IAcknexObject CreateObjectTemplate(ObjectType type, string name)
        {
            switch (type)
            {
                case ObjectType.Action:
                    {
                        var action = CreateAction(name);
                        return action.AcknexObject;
                    }
                case ObjectType.Actor:
                    {
                        var actor = CreateActor(name);
                        actor.Disable();
                        ActorsByName.Add(name, actor);
                        AcknexObject.SetAcknexObject(name, actor.AcknexObject);
                        return actor.AcknexObject;
                    }
                case ObjectType.Bitmap:
                    {
                        var bitmap = new Bitmap();
                        bitmap.AcknexObject.SetString("NAME", name);
                        BitmapsByName.Add(name, bitmap);
                        AcknexObject.SetAcknexObject(name, bitmap.AcknexObject);
                        return bitmap.AcknexObject;
                    }
                case ObjectType.Region:
                    {
                        var region = CreateRegion(name);
                        region.Disable();
                        RegionsByName.Add(name, region);
                        AcknexObject.SetAcknexObject(name, region.AcknexObject);
                        if (WMPContainsRegionsByName)
                        {
                            RegionsByIndex.Add(region);
                        }
                        return region.AcknexObject;
                    }
                case ObjectType.Skill:
                    {
                        var skill = CreateSkill(name, 0, Mathf.NegativeInfinity, Mathf.Infinity);
                        return skill.AcknexObject;
                    }
                case ObjectType.Synonym:
                    {
                        var synonym = CreateSynonym(name);
                        return synonym.AcknexObject;
                    }
                case ObjectType.Texture:
                    {
                        var texture = CreateTexture(name);
                        return texture.AcknexObject;
                    }
                case ObjectType.Thing:
                    {
                        var thing = CreateThing(name);
                        thing.Disable();
                        ThingsByName.Add(name, thing);
                        AcknexObject.SetAcknexObject(name, thing.AcknexObject);
                        return thing.AcknexObject;
                    }
                case ObjectType.Wall:
                    {
                        var wall = CreateWall(name);
                        wall.Disable();
                        WallsByName.Add(name, wall);
                        AcknexObject.SetAcknexObject(name, wall.AcknexObject);
                        return wall.AcknexObject;
                    }
                case ObjectType.Way:
                    {
                        var way = CreateWay(name);
                        way.Disable();
                        WaysByName.Add(name, way);
                        AcknexObject.SetAcknexObject(name, way.AcknexObject);
                        return way.AcknexObject;
                    }
                case ObjectType.Overlay:
                    {
                        var overlay = CreateOverlay(name);
                        return overlay.AcknexObject;
                    }
                case ObjectType.Flic:
                    {
                        var flic = CreateFlic(name);
                        return flic.AcknexObject;
                    }
                case ObjectType.Text:
                    {
                        var text = CreateText(name);
                        return text.AcknexObject;
                    }
                case ObjectType.Font:
                    {
                        var font = CreateFont(name);
                        return font.AcknexObject;
                    }
                case ObjectType.Sound:
                    {
                        var sound = CreateSound(name);
                        return sound.AcknexObject;
                    }
                case ObjectType.Music:
                    {
                        var music = CreateMusic(name);
                        return music.AcknexObject;
                    }
                case ObjectType.Model:
                    {
                        var model = CreateModel(name);
                        return model.AcknexObject;
                    }
                case ObjectType.Palette:
                    {
                        var palette = CreatePalette(name);
                        return palette.AcknexObject;
                    }
                case ObjectType.Panel:
                    {
                        var panel = CreatePanel(name);
                        return panel.AcknexObject;
                    }
                case ObjectType.World:
                    throw new Exception("It is not possible to create a new world.");
            }
            throw new NotImplementedException();
        }


        public IAcknexObject GetObject(ObjectType type, string name)
        {
            if (type == ObjectType.Player)
            {
                return Player.Instance.AcknexObject;
            }
            if (name != null && AcknexObject.TryGetAcknexObject(name, out var acknexObject))
            {
                return acknexObject;
            }
            return null;
        }

        public IAcknexObject GetWorld()
        {
            return AcknexObject;
        }

        public void PostSetupWMP()
        {
            DoPostResolve();
            BuildRegionsAndWalls(_regionWalls, _contourVertices);
            if (!DisableEvents && !UseWDLEngine)
            {
                ConvertActionsToCS();
                _runtime = new Game();
                _runtime.SetWorld(this);
            }
        }

        private readonly List<(IAcknexObject acknexObject, string keyword, string objectName)> _postResolve = new List<(IAcknexObject acknexObject, string keyword, string objectName)>();

        public void AddPostResolve((IAcknexObject acknexObject, string keyword, string objectName) postResolve)
        {
            _postResolve.Add(postResolve);
        }

        private void DoPostResolve()
        {
            foreach (var item in _postResolve)
            {
                if (AcknexObject.TryGetAcknexObject(item.objectName, out var acknexObject))
                {
                    item.acknexObject.SetAcknexObject(item.keyword, acknexObject);
                }
            }
            var worldAcknexObject = (AcknexObject)AcknexObject;
            foreach (var obj in worldAcknexObject.ObjectProperties.Values)
            {
                if (obj is IAcknexObject ackObj && ackObj.Container != null)
                {
                    ackObj.Container.SetupTemplate();
                }
            }
        }

        private void ConvertActionsToCS()
        {
            var sourceStringBuilder = new StringBuilder();
            sourceStringBuilder.AppendLine("using Acknex.Interfaces;");
            sourceStringBuilder.AppendLine("using System.Collections;");
            sourceStringBuilder.AppendLine("using UnityEngine;");
            sourceStringBuilder.AppendLine("namespace Tests {");
            sourceStringBuilder.AppendLine("    public class Game : IAcknexRuntime {");
            sourceStringBuilder.AppendLine("        private IAcknexWorld _world;");
            sourceStringBuilder.AppendLine("        public void SetWorld(IAcknexWorld world) {");
            sourceStringBuilder.AppendLine("            _world = world;");
            sourceStringBuilder.AppendLine("        }");
            sourceStringBuilder.AppendLine("        public IEnumerator CallAction(string name)");
            sourceStringBuilder.AppendLine("        {");
            sourceStringBuilder.AppendLine("            if (name == null) {");
            sourceStringBuilder.AppendLine("                yield break;");
            sourceStringBuilder.AppendLine("            }");
            sourceStringBuilder.AppendLine("            var method = this.GetType().GetMethod(name);");
            sourceStringBuilder.AppendLine("            if (method != null)");
            sourceStringBuilder.AppendLine("            {");
            sourceStringBuilder.AppendLine("                var result = method.Invoke(this, null);");
            sourceStringBuilder.AppendLine("                yield return (IEnumerator)result;");
            sourceStringBuilder.AppendLine("            }");
            sourceStringBuilder.AppendLine("            yield break;");
            sourceStringBuilder.AppendLine("        }");
            foreach (var action in ActionsByName)
            {
                action.Value.WriteHeader();
                action.Value.ParseAllStatements(_textParser);
                action.Value.WriteFooter();
                sourceStringBuilder.Append(action.Value.CodeStringBuilder);
            }

            sourceStringBuilder.AppendLine("    }");
            sourceStringBuilder.AppendLine("}");
            File.WriteAllText(SourceGenerationPath, sourceStringBuilder.ToString());
        }

        public void AddVertex(float x, float y, float z)
        {
            _contourVertices.Add(new ContourVertex(new Vec3(x, y, z)));
        }

        public void AddPath(string value)
        {
            Paths.Add(value);
        }

        public void PostSetupObjectInstance(IAcknexObject acknexObject)
        {
            var wall = acknexObject.Container as Wall;
            if (wall != null)
            {
                var name = acknexObject.GetString("NAME");
                if (!AllWallsByName.TryGetValue(name, out var list))
                {
                    list = new HashSet<Wall>();
                    AllWallsByName.Add(name, list);
                }
                list.Add(wall);
                _regionWalls.GetWallsList(wall.AcknexObject.GetAcknexObject("REGION1")).Add(wall);
                _regionWalls.GetWallsList(wall.AcknexObject.GetAcknexObject("REGION2")).Add(wall);
                wall.SetupInstance();
            }

            var region = acknexObject.Container as Region;
            if (region != null)
            {
                var name = acknexObject.GetString("NAME");
                if (!AllRegionsByName.TryGetValue(name, out var list))
                {
                    list = new HashSet<Region>();
                    AllRegionsByName.Add(name, list);
                }
                list.Add(region);
                region.SetupInstance();
            }

            var actor = acknexObject.Container as Actor;
            if (actor != null)
            {
                var name = acknexObject.GetString("NAME");
                if (!AllActorsByName.TryGetValue(name, out var list))
                {
                    list = new HashSet<Actor>();
                    AllActorsByName.Add(name, list);
                }
                list.Add(actor);
                actor.SetupInstance();
            }

            var thing = acknexObject.Container as Thing;
            if (thing != null)
            {
                var name = acknexObject.GetString("NAME");
                if (!AllThingsByName.TryGetValue(name, out var list))
                {
                    list = new HashSet<Thing>();
                    AllThingsByName.Add(name, list);
                }
                list.Add(thing);
                thing.SetupInstance();
            }

            var way = acknexObject.Container as Way;
            if (way != null)
            {
                var name = acknexObject.GetString("NAME");
                if (!AllWaysByName.TryGetValue(name, out var list))
                {
                    list = new HashSet<Way>();
                    AllWaysByName.Add(name, list);
                }
                list.Add(way);
                way.SetupInstance();
            }
        }

        public void PostSetupObjectTemplate(IAcknexObject acknexObject)
        {
            //if (acknexObject.Container is Bitmap bitmap)
            //{
            //    bitmap.Setup();
            //}
            //else if (acknexObject.Container is Model model)
            //{
            //    model.Setup();
            //}
            //else if (acknexObject.Container is Music music)
            //{
            //    music.Setup();
            //}
            //else if (acknexObject.Container is Sound sound)
            //{
            //    sound.Setup();
            //}
            //else if (acknexObject.Container is Texture texture)
            //{
            //    texture.Setup();
            //}
        }

        public void AddWayPoint(IAcknexObject way, float x, float y)
        {
            var container = way.Container as Way;
            if (container != null)
            {
                container.Points.Add(new Vector2(x, y));
            }
        }

        public int GetRegionIndex(string name)
        {
            if (RegionsByName.TryGetValue(name, out var region))
            {
                return RegionsByIndex.IndexOf(region);
            }
            return 0;
        }

        public float Accelerate(float value, float amount)
        {
            //todo: RULE PLAYER_VX = (1 - TIME_CORR * fric) * PLAYER_VX + TIME_CORR * (force_x +drift_x)/ mass;
            var timeCorr = GetSkillValue("TIME_CORR");
            var result = (1f - timeCorr * GetSkillValue("FRICTION")) * value + timeCorr * amount / GetSkillValue("INERTIA");
            if (Mathf.Abs(result) < Mathf.Epsilon)
            {
                result = 0f;
            }
            return result;
        }

        public void PlaySong(string songName, float volume)
        {
            if (MusicsByName.TryGetValue(songName, out var song))
            {
                //todo: volume
                MidiPlayer.midiSource = song.Resource;
                MidiPlayer.LoadBank(new PatchBank(MidiPlayer.bankSource));
                MidiPlayer.LoadMidi(new MidiFile(MidiPlayer.midiSource));
                MidiPlayer.Play();
            }
        }

        public void PlaySound(string songName, float volume, string balance = null)
        {
            if (SoundsByName.TryGetValue(songName, out var sound))
            {
                AudioSource.PlayClipAtPoint(sound.AudioClip, View.Instance.transform.position, volume);
            }
        }

        public void Drop(string name)
        {

        }

        public void SetRuntime(IAcknexRuntime runtime)
        {
            _runtime = runtime;
        }

        public void Shoot(string objectName = null)
        {

        }

        public void ReadInkey(string stringName)
        {

        }

        public void SetFloatAll(string objectName, string propertyName, float value)
        {

        }

        public void SetIntegerAll(string objectName, string propertyName, int value)
        {

        }

        public void SetStringAll(string objectName, string propertyName, string value)
        {

        }

        public void SetObjectAll<T>(string objectName, string propertyName, T value)
        {

        }

        public void SetAcknexObjectAll(string objectName, string propertyName, IAcknexObject value)
        {

        }


    }
}