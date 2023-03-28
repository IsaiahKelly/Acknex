using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.NetworkInformation;
using Acknex.Interfaces;
using AudioSynthesis.Bank;
using AudioSynthesis.Midi;
using LibTessDotNet;
using Tests;
using UnityEngine;
using UnityEngine.UI;
using Utils;
using Resolution = Acknex.Interfaces.Resolution;

namespace Acknex
{
    public partial class World
    {
        private const int MaxHits = 255;

        private readonly List<(IAcknexObject acknexObject, string keyword, string objectName)> _postResolve = new List<(IAcknexObject acknexObject, string keyword, string objectName)>();

        private readonly Collider[] _overlapResults = new Collider[MaxHits];
        private readonly RaycastHit[] _raycastResults = new RaycastHit[MaxHits];

        private Resolution _resolution = Resolution.Res320x200;
        private IAcknexRuntime _runtime;

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

        public void AddPath(string value)
        {
            Paths.Add(value);
        }

        public void AddPostResolve((IAcknexObject acknexObject, string keyword, string objectName) postResolve)
        {
            _postResolve.Add(postResolve);
        }

        //todo: move out from here

        public void AddVertex(float x, float y, float z)
        {
            _contourVertices.Add(new ContourVertex(new Vec3(x, y, z)));
        }

        public void AddWayPoint(IAcknexObject way, float x, float y)
        {
            var container = way.Container as Way;
            if (container != null)
            {
                container.Points.Add(new Vector2(x, y));
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
                        //actor.Disable();
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
                        //region.Disable();
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
                        //thing.Disable();
                        ThingsByName.Add(name, thing);
                        AcknexObject.SetAcknexObject(name, thing.AcknexObject);
                        return thing.AcknexObject;
                    }
                case ObjectType.Wall:
                    {
                        var wall = CreateWall(name);
                        //wall.Disable();
                        WallsByName.Add(name, wall);
                        AcknexObject.SetAcknexObject(name, wall.AcknexObject);
                        return wall.AcknexObject;
                    }
                case ObjectType.Way:
                    {
                        var way = CreateWay(name);
                        //way.Disable();
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
                case ObjectType.Song:
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

        public void Disable()
        {
        }

        public IAcknexObject Drop(IAcknexObject acknexObject, IAcknexObject MY, IAcknexObject THERE)
        {
            var containerGameObject = acknexObject.Container?.GameObject;
            if (containerGameObject != null)
            {
                //var newGameObject = new GameObject(acknexObject.GetString("NAME"));
                //newGameObject.transform.SetParent(transform, false);
                //var newPosition =
                //    new Vector3(GetSkillValue("PLAYER_X"), 0f, GetSkillValue("PLAYER_Y")) +
                //    Quaternion.Euler(0f, AngleUtils.ConvertAcknexToUnityAngle(GetSkillValue("PLAYER_ANGLE")), 0f) *
                //    new Vector3(0f, 0f, acknexObject.GetFloat("DIST"));
                //var newThing = acknexObject.Type == ObjectType.Actor ? newGameObject.AddComponent<Actor>() : newGameObject.AddComponent<Thing>();
                //var existingAcknexObject = (AcknexObject)acknexObject;
                //var newAcknexObject = new AcknexObject(existingAcknexObject.GetTemplateCallback, existingAcknexObject.Type);
                //newAcknexObject.NumberProperties = new Dictionary<string, float>(existingAcknexObject.NumberProperties);
                //newAcknexObject.ObjectProperties = new Dictionary<string, object>(existingAcknexObject.ObjectProperties);
                //newAcknexObject.SetFloat("X", newPosition.x);
                //newAcknexObject.SetFloat("Y", newPosition.z);
                //newThing.AcknexObject = newAcknexObject;
                //PostSetupObjectInstance(newThing.AcknexObject);
                //newThing.SetupInstance();
                //return newThing.AcknexObject;
                PostSetupObjectInstance(acknexObject);
                acknexObject.Container.SetupInstance();
                return acknexObject;
            }
            return null;
        }

        public void Enable()
        {
        }

        public void Explode(IAcknexObject acknexObject, IAcknexObject MY, IAcknexObject THERE)
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
                TriggerEvent("IF_HIT", AcknexObject, AcknexObject, AcknexObject.Container.GetRegion());
                minDist = Mathf.Min(minDist, distance);
            }

            UpdateSkillValue("HIT_DIST", 0f);
            UpdateSkillValue("RESULT", 0f);
            DebugExtension.DebugWireSphere(origin, Color.black, shootRange);
            Array.Clear(_overlapResults, 0, MaxHits);
            var hitCount = Physics.OverlapSphereNonAlloc(origin, shootRange, _overlapResults, WallsWaterRegionsAndSprites);
            for (var i = 0; i < hitCount; i++)
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
                        if (!wall.AcknexObject.HasFlag("FRAGILE"))
                        {
                            continue;
                        }
                        HandleHit(overlapResult, wall.AcknexObject);
                    }
                    else if (overlapResult.transform.parent.TryGetComponent<Region>(out var region))
                    {
                        if (!region.AcknexObject.HasFlag("FRAGILE"))
                        {
                            continue;
                        }
                        HandleHit(overlapResult, region.AcknexObject);
                    }
                    else if (overlapResult.transform.parent.TryGetComponent<Thing>(out var thing))
                    {
                        if (!thing.AcknexObject.HasFlag("FRAGILE"))
                        {
                            continue;
                        }
                        HandleHit(overlapResult, thing.AcknexObject);
                    }
                }
            }
            UpdateSkillValue("HIT_MINDIST", minDist < Mathf.Infinity ? minDist : 0);
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

        public int GetRegionIndex(string name)
        {
            if (RegionsByName.TryGetValue(name, out var region))
            {
                return RegionsByIndex.IndexOf(region);
            }
            return 0;
        }

        public IAcknexObject GetWorld()
        {
            return AcknexObject;
        }

        public void PlaySong(IAcknexObject song, float volume)
        {
            if (song == null)
            {
                return;
            }
            //todo: volume
            MidiPlayer.midiSource = ((Song)song.Container).Resource;
            MidiPlayer.LoadBank(new PatchBank(MidiPlayer.bankSource));
            MidiPlayer.LoadMidi(new MidiFile(MidiPlayer.midiSource));
            MidiPlayer.Play();
        }

        //todo: pool
        public void PlaySound(IAcknexObject sound, float volume = 0.5f, IAcknexObject balance = null, float sDist = 100f, float svDist = 100f)
        {
            var container = (Sound)sound?.Container;
            if (container == null)
            {
                return;
            }
            if (balance?.Container != null)
            {
                balance.Container.PlaySoundLocated(sound, volume, sDist, svDist);
                return;
            }
            View.Instance.PlaySoundLocated(sound, volume, sDist, svDist);
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
                        wall.AcknexObject.InstanceIndex = list.Count;
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
                        region.AcknexObject.InstanceIndex = list.Count;
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
                        actor.AcknexObject.InstanceIndex = list.Count;
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
                        thing.AcknexObject.InstanceIndex = list.Count;
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
                        way.AcknexObject.InstanceIndex = list.Count;
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

        public void ReadInkey(string stringName)
        {
        }

        public void SetRuntime(IAcknexRuntime runtime)
        {
            _runtime = runtime;
        }

        public void SetupTemplate()
        {
        }

        public void Shoot(IAcknexObject acknexObject, IAcknexObject MY, IAcknexObject THERE)
        {
            if (View.Instance == null)
            {
                return;
            }
            var shootX = GetSkillValue("SHOOT_X");
            var shootY = GetSkillValue("SHOOT_Y");
            //todo: deviation
            Ray ray;
            if (acknexObject == null)
            {
                ray = View.Instance.ViewCamera.ViewportPointToRay(new Vector3(0.5f, 0.5f, 0f));
                DebugExtension.DebugArrow(ray.origin, ray.direction, Color.black, 10f);
            }
            else
            {
                ray = new Ray(View.Instance.ViewCamera.transform.position, (acknexObject.Container.GetCenter() - View.Instance.ViewCamera.transform.position).normalized);
            }
            //todo: shootSector
            var shootFac = GetSkillValue("SHOOT_FAC");
            var shootRange = GetSkillValue("SHOOT_RANGE");

            void HandleHit(RaycastHit raycastResult, IAcknexObject hitAcknexObject)
            {
                if (acknexObject != null && hitAcknexObject != acknexObject)
                {
                    return;
                }
                var distance = acknexObject != null ? Vector3.Distance(acknexObject.Container.GetCenter(), raycastResult.point) : raycastResult.distance;
                UpdateSkillValue("HIT_DIST", distance);
                UpdateSkillValue("RESULT", shootFac * (1.0f - distance / shootRange));
                UpdateSkillValue("SHOOT_ANGLE", AngleUtils.ConvertUnityToAcknexAngle(AngleUtils.Angle(AngleUtils.To2D(raycastResult.point), AngleUtils.To2D(ray.origin))));
                SetSynonymObject("HIT", hitAcknexObject);
                if (acknexObject == null)
                {
                    TriggerEvent("IF_HIT", hitAcknexObject, hitAcknexObject, hitAcknexObject.Container.GetRegion());
                }
                Debug.DrawLine(ray.origin, raycastResult.point, Color.white, 10f);
            }
            UpdateSkillValue("HIT_DIST", 0f);
            UpdateSkillValue("RESULT", 0f);
            UpdateSkillValue("SHOOT_ANGLE", 0f);
            SetSynonymObject("HIT", null);
            Array.Clear(_raycastResults, 0, MaxHits);
            Physics.RaycastNonAlloc(ray, _raycastResults, shootRange, WallsWaterRegionsAndSprites, QueryTriggerInteraction.Collide);
            Array.Sort(_raycastResults, (a, b) => a.distance.CompareTo(b.distance));
            for (var i = 0; i < MaxHits; i++)
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
                        if (wall.AcknexObject.HasFlag("IMMATERIAL"))
                        {
                            continue;
                        }
                        HandleHit(raycastResult, wall.AcknexObject);
                        return;
                    }
                    if (raycastResult.transform.parent.TryGetComponent<Region>(out var region))
                    {
                        if (region.AcknexObject.HasFlag("IMMATERIAL"))
                        {
                            continue;
                        }
                        HandleHit(raycastResult, region.AcknexObject);
                        return;
                    }
                    if (raycastResult.transform.parent.TryGetComponent<Thing>(out var thing))
                    {
                        if (thing.AcknexObject.HasFlag("IMMATERIAL"))
                        {
                            continue;
                        }
                        if (acknexObject == null && !thing.HitPixel(raycastResult.textureCoord, raycastResult.point))
                        {
                            continue;
                        }
                        HandleHit(raycastResult, thing.AcknexObject);
                        return;
                    }
                }
            }
            Debug.DrawRay(ray.origin, ray.direction * shootRange, Color.black, 1f);
        }

        public void UpdateObject()
        {
            AmbientLight.transform.rotation = Quaternion.Euler(0f, AngleUtils.ConvertAcknexToUnityAngle(AcknexObject.GetFloat("LIGHT_ANGLE")), 0f) * Quaternion.Euler(45f, 0f, 0f);
            UpdateSkills();
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
    }
}