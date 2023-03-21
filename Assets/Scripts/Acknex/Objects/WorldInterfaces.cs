using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using Acknex.Interfaces;
using AudioSynthesis.Bank;
using AudioSynthesis.Midi;
using LibTessDotNet;
using Tests;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;
using Utils;
using Resolution = Acknex.Interfaces.Resolution;

namespace Acknex
{
    public partial class World
    {
        private const int MaxHits = 255;
        private readonly List<(IAcknexObject acknexObject, string keyword, string objectName)> _postResolve = new List<(IAcknexObject acknexObject, string keyword, string objectName)>();
        private readonly RaycastHit[] _raycastResults = new RaycastHit[MaxHits];
        private readonly Collider[] _overlapResults = new Collider[MaxHits];


        private Resolution _resolution = Resolution.Res320x200;
        private IAcknexRuntime _runtime;

        public void UpdateObject()
        {
            AmbientLight.transform.rotation = Quaternion.Euler(0f, AngleUtils.ConvertAcknexToUnityAngle(AcknexObject.GetFloat("LIGHT_ANGLE")), 0f) * Quaternion.Euler(45f, 0f, 0f);
            UpdateSkills();
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
            switch (type)
            {
                case ObjectType.Player:
                    return Player.Instance.AcknexObject;
                //case ObjectType.Wall when name != null:
                //    return AllWallsByName[name].First().AcknexObject;
                //case ObjectType.Region when name != null:
                //    return AllRegionsByName[name].First().AcknexObject;
                //case ObjectType.Thing when name != null:
                //    return AllThingsByName[name].First().AcknexObject;
                //case ObjectType.Way when name != null:
                //    return AllWaysByName[name].First().AcknexObject;
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
            ResolveReferences();
            BuildRegionsAndWalls(_regionWalls, _contourVertices);
            PostSetupObjects();
            if (!DisableEvents && !UseWDLEngine)
            {
                ConvertActionsToCS();
                _runtime = new Game();
                _runtime.SetWorld(this);
            }
        }

        private void PostSetupObjects()
        {
            var worldAcknexObject = (AcknexObject)AcknexObject;
            foreach (var @object in worldAcknexObject.ObjectProperties.Values)
            {
                if (@object is IAcknexObject acknexObject)
                {
                    if (!acknexObject.IsInstance)
                    {
                        acknexObject.Container?.SetupTemplate();
                    }
                }
            }
            foreach (var items in AllThingsByName.Values)
            {
                foreach (var item in items)
                {
                    item.SetupInstance();
                }
            }
            foreach (var items in AllActorsByName.Values)
            {
                foreach (var item in items)
                {
                    item.SetupInstance();
                }
            }
            foreach (var items in AllRegionsByName.Values)
            {
                foreach (var item in items)
                {
                    item.SetupInstance();
                }
            }
            foreach (var items in AllWallsByName.Values)
            {
                foreach (var item in items)
                {
                    item.SetupInstance();
                }
            }
            foreach (var items in AllWaysByName.Values)
            {
                foreach (var item in items)
                {
                    item.SetupInstance();
                }
            }
        }

        public void AddPostResolve((IAcknexObject acknexObject, string keyword, string objectName) postResolve)
        {
            _postResolve.Add(postResolve);
        }

        private void ResolveReferences()
        {
            foreach (var item in _postResolve)
            {
                if (AcknexObject.TryGetAcknexObject(item.objectName, out var acknexObject))
                {
                    item.acknexObject.SetAcknexObject(item.keyword, acknexObject);
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
            switch (acknexObject.Container)
            {
                case Wall wall:
                    {
                        var name = acknexObject.GetString("NAME");
                        if (!AllWallsByName.TryGetValue(name, out var list))
                        {
                            list = new HashSet<Wall>();
                            AllWallsByName.Add(name, list);
                        }
                        list.Add(wall);
                        if (list.Count == 1)
                        {
                            AcknexObject.SetAcknexObject(name, wall.AcknexObject);
                        }
                        _regionWalls.GetWallsList(wall.AcknexObject.GetAcknexObject("REGION1")).Add(wall);
                        _regionWalls.GetWallsList(wall.AcknexObject.GetAcknexObject("REGION2")).Add(wall);
           
                        break;
                    }
                case Region region:
                    {
                        var name = acknexObject.GetString("NAME");
                        if (!AllRegionsByName.TryGetValue(name, out var list))
                        {
                            list = new HashSet<Region>();
                            AllRegionsByName.Add(name, list);
                        }
                        list.Add(region);
                        if (list.Count == 1)
                        {
                            AcknexObject.SetAcknexObject(name, region.AcknexObject);
                        }
                        break;
                    }
                case Actor actor:
                    {
                        var name = acknexObject.GetString("NAME");
                        if (!AllActorsByName.TryGetValue(name, out var list))
                        {
                            list = new HashSet<Actor>();
                            AllActorsByName.Add(name, list);
                        }
                        list.Add(actor); 
                        if (list.Count == 1)
                        {
                            AcknexObject.SetAcknexObject(name, actor.AcknexObject);
                        }
                        break;
                    }
                case Thing thing:
                    {
                        var name = acknexObject.GetString("NAME");
                        if (!AllThingsByName.TryGetValue(name, out var list))
                        {
                            list = new HashSet<Thing>();
                            AllThingsByName.Add(name, list);
                        }
                        list.Add(thing);
                        if (list.Count == 1)
                        {
                            AcknexObject.SetAcknexObject(name, thing.AcknexObject);
                        }
                        break;
                    }
                case Way way:
                    {
                        var name = acknexObject.GetString("NAME");
                        if (!AllWaysByName.TryGetValue(name, out var list))
                        {
                            list = new HashSet<Way>();
                            AllWaysByName.Add(name, list);
                        }
                        list.Add(way);
                        if (list.Count == 1)
                        {
                            AcknexObject.SetAcknexObject(name, way.AcknexObject);
                        }
                        break;
                    }
            }
        }

        public void PostSetupObjectTemplate(IAcknexObject acknexObject)
        {

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

        public void Shoot(IAcknexObject acknexObject = null)
        {
            if (View.Instance == null)
            {
                return;
            }
            var shootX = GetSkillValue("SHOOT_X");
            var shootY = GetSkillValue("SHOOT_Y");
            Ray ray;
            if (acknexObject == null)
            {
                ray = View.Instance.ViewCamera.ViewportPointToRay(new Vector3(0.5f + Mathf.Lerp(-1f, 1f, shootX), 0.5f + Mathf.Lerp(-1f, 1f, shootY), 0f));
            }
            else
            {
                //todo: deviation
                ray = new Ray(View.Instance.ViewCamera.transform.position, (acknexObject.Container.GetCenter() - View.Instance.ViewCamera.transform.position).normalized);
            }
            //todo: shootSector
            var shootFac = GetSkillValue("SHOOT_FAC");
            var shootRange = GetSkillValue("SHOOT_RANGE");
            void HandleHit(RaycastHit raycastResult, IAcknexObject hitAcknexObject)
            {
                UpdateSkillValue("HIT_DIST", raycastResult.distance);
                UpdateSkillValue("RESULT", shootFac * (1.0f - raycastResult.distance / shootRange));
                UpdateSkillValue("SHOOT_ANGLE", AngleUtils.ConvertUnityToAcknexAngle(AngleUtils.Angle(AngleUtils.To2D(raycastResult.point), AngleUtils.To2D(ray.origin))));
                TriggerEvent(AcknexObject, GetSynonymObject("MY"), null, "IF_HIT");
            }
            UpdateSkillValue("HIT_DIST", 0f);
            UpdateSkillValue("RESULT", 0f);
            DebugExtension.DebugArrow(ray.origin, ray.direction, Color.black);
            Physics.RaycastNonAlloc(ray, _raycastResults, shootRange, AllLayers);
            Array.Sort(_raycastResults, (a, b) => a.distance.CompareTo(b.distance));
            for (var i = 0; i < _raycastResults.Length; i++)
            {
                var raycastResult = _raycastResults[i];
                if (raycastResult.collider == null)
                {
                    continue;
                }
                if (raycastResult.transform.parent != null)
                {
                    if (raycastResult.transform.parent.TryGetComponent<Wall>(out var wall))
                    {
                        if (wall.AcknexObject.ContainsFlag("IMMATERIAL"))
                        {
                            continue;
                        }
                        HandleHit(raycastResult,  wall.AcknexObject);
                        return;
                    }
                    else if (raycastResult.transform.parent.TryGetComponent<Region>(out var region))
                    {
                        if (region.AcknexObject.ContainsFlag("IMMATERIAL"))
                        {
                            continue;
                        }
                        HandleHit(raycastResult, region.AcknexObject);
                        return;
                    }
                    else if (raycastResult.transform.parent.TryGetComponent<Thing>(out var thing))
                    {
                        if (thing.AcknexObject.ContainsFlag("IMMATERIAL"))
                        {
                            continue;
                        }
                        HandleHit(raycastResult, thing.AcknexObject);
                        return;
                    }
                }
            }
        }

        public void Explode(IAcknexObject acknexObject)
        {
            //var shootX = GetSkillValue("SHOOT_X");
            //var shootY = GetSkillValue("SHOOT_Y");
            var origin = acknexObject.Container.GetCenter();
            //todo: shootSector
            var shootFac = GetSkillValue("SHOOT_FAC");
            var shootRange = GetSkillValue("SHOOT_RANGE");
            var minDist = Mathf.Infinity;
            void HandleHit(Collider raycastResult, IAcknexObject hitAcknexObject)
            {
                var hitPoint = hitAcknexObject.Container.GetCenter();
                var distance = Vector3.Distance(hitPoint, origin);
                UpdateSkillValue("HIT_DIST", distance);
                UpdateSkillValue("RESULT", shootFac * (1.0f - distance / shootRange));
                UpdateSkillValue("SHOOT_ANGLE", AngleUtils.ConvertUnityToAcknexAngle(AngleUtils.Angle(AngleUtils.To2D(hitPoint), AngleUtils.To2D(origin))));
                TriggerEvent(AcknexObject, GetSynonymObject("MY"), null, "IF_HIT");
                minDist = Mathf.Min(minDist, distance);
            }
            UpdateSkillValue("HIT_DIST", 0f);
            UpdateSkillValue("RESULT", 0f);
            DebugExtension.DebugWireSphere(origin, Color.black, shootRange);
            Physics.OverlapSphereNonAlloc(origin, shootRange, _overlapResults, AllLayers);
            for (var i = 0; i < _overlapResults.Length; i++)
            {
                var overlapResult = _overlapResults[i];
                if (overlapResult == null)
                {
                    continue;
                }
                if (overlapResult.transform.TryGetComponent<Player>(out var player))
                {
                    HandleHit(overlapResult, player.AcknexObject);
                }
                else if (overlapResult.transform.parent != null)
                {
                    if (overlapResult.transform.parent.TryGetComponent<Wall>(out var wall))
                    {
                        if (!wall.AcknexObject.ContainsFlag("FRAGILE"))
                        {
                            continue;
                        }
                        HandleHit(overlapResult, wall.AcknexObject);
                    }
                    else if (overlapResult.transform.parent.TryGetComponent<Region>(out var region))
                    {
                        if (!region.AcknexObject.ContainsFlag("FRAGILE"))
                        {
                            continue;
                        }
                        HandleHit(overlapResult, region.AcknexObject);
                    }
                    else if (overlapResult.transform.parent.TryGetComponent<Thing>(out var thing))
                    {
                        if (!thing.AcknexObject.ContainsFlag("FRAGILE"))
                        {
                            continue;
                        }
                        HandleHit(overlapResult, thing.AcknexObject);
                    }
                }
            }
            UpdateSkillValue("HIT_MINDIST", minDist < Mathf.Infinity ? minDist : 0);
        }
        public void ReadInkey(string stringName)
        {

        }
    }
}