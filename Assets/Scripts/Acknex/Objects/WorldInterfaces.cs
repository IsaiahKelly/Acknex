using NameId = System.UInt32;
using System;
using System.Collections.Generic;
using Acknex.Interfaces;
using AudioSynthesis.Bank;
using AudioSynthesis.Midi;
using LibTessDotNet;
using Tests;
using UnityEngine;
using Utils;
using PropertyName = Acknex.Interfaces.PropertyName;
using Resolution = Acknex.Interfaces.Resolution;

namespace Acknex
{
    public partial class World
    {
        private const int MaxHits = 255;

        private readonly Collider[] _overlapResults = new Collider[MaxHits];
        private readonly List<PostResolveItem> _postResolve = new List<PostResolveItem>();
        private readonly RaycastHit[] _raycastResults = new RaycastHit[MaxHits];
        private Resolution _resolution = Resolution.Res320x200;
        private IAcknexRuntime _runtime;
        private int _unnamedStringCount;

        public float Accelerate(float value, float amount)
        {
            var timeCorr = GetSkillValue(SkillName.TIME_CORR);
            var result = (1f - timeCorr * GetSkillValue(SkillName.FRICTION)) * value + timeCorr * amount / GetSkillValue(SkillName.INERTIA);
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

        public void AddPostResolve(PostResolveItem postResolveItem)
        {
            _postResolve.Add(postResolveItem);
        }

        //todo: move out from here

        public void AddVertex(float x, float y, float z)
        {
            ContourVertices.Add(new ContourVertex(new Vec3(x, y, z)));
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
                    if (!OldAckVersion)
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
                    ActorsByName.Add(actor.AcknexObject.NameId, actor);
                    AcknexObject.SetAcknexObject(actor.AcknexObject.NameId, actor.AcknexObject);
                    return actor.AcknexObject;
                }
                case ObjectType.Bitmap:
                {
                    var bitmap = CreateBitmap(name);
                    return bitmap.AcknexObject;
                }
                case ObjectType.Region:
                {
                    var region = CreateRegion(name);
                    RegionsByName.Add(region.AcknexObject.NameId, region);
                    AcknexObject.SetAcknexObject(region.AcknexObject.NameId, region.AcknexObject);
                    if (OldAckVersion)
                    {
                        RegionsByIndex.Add(region);
                    }
                    return region.AcknexObject;
                }
                case ObjectType.Skill:
                {
                    //var nameInt = NameUtils.NameToInt(name, true);
                    var skill = CreateSkill(name, /*nameInt,*/ 0f, Mathf.NegativeInfinity, Mathf.Infinity);
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
                    ThingsByName.Add(thing.AcknexObject.NameId, thing);
                    AcknexObject.SetAcknexObject(thing.AcknexObject.NameId, thing.AcknexObject);
                    return thing.AcknexObject;
                }
                case ObjectType.Wall:
                {
                    var wall = CreateWall(name);
                    WallsByName.Add(wall.AcknexObject.NameId, wall);
                    AcknexObject.SetAcknexObject(wall.AcknexObject.NameId, wall.AcknexObject);
                    return wall.AcknexObject;
                }
                case ObjectType.Way:
                {
                    var way = CreateWay(name);
                    WaysByName.Add(way.AcknexObject.NameId, way);
                    AcknexObject.SetAcknexObject(way.AcknexObject.NameId, way.AcknexObject);
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
                case ObjectType.Digits:
                {
                    var text = CreateDigitis(name);
                    return text.AcknexObject;
                }
                case ObjectType.Picture:
                {
                    var picture = CreatePicture(name);
                    return picture.AcknexObject;
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
                PostSetupObjectInstance(acknexObject);
                acknexObject.Container.SetupInstance();
                var newPosition =
                    new Vector3(GetSkillValue(SkillName.PLAYER_X), 0f, GetSkillValue(SkillName.PLAYER_Y)) +
                    Quaternion.Euler(0f, AngleUtils.ConvertAcknexToUnityAngle(GetSkillValue(SkillName.PLAYER_ANGLE)),
                        0f) * new Vector3(0f, 0f, acknexObject.GetFloat(PropertyName.DIST));
                acknexObject.SetFloat(PropertyName.X, newPosition.x);
                acknexObject.SetFloat(PropertyName.Y, newPosition.z);
                ((IGraphicObject)acknexObject.Container).ResetTexture();
                acknexObject.IsDirty = true;
#if DEBUG_ENABLED
                Debug.DrawLine(Player.Instance.transform.position, newPosition, Color.red, 100f);
#endif
                return acknexObject;
            }
            return null;
        } 

        public void Enable()
        {
        }

        public void Explode(IAcknexObject acknexObject, IAcknexObject MY, IAcknexObject THERE)
        {
            var origin = acknexObject.Container.GetCenter();
            //todo: shootSector
            var shootFac = GetSkillValue(SkillName.SHOOT_FAC);
            var shootRange = GetSkillValue(SkillName.SHOOT_RANGE);
            var minDist = Mathf.Infinity;
            IAcknexObject minObject = null;
            void HandleMinDist(IAcknexObject hitAcknexObject)
            {
                var hitPoint = hitAcknexObject.Container.GetCenter();
                var distance = Vector3.Distance(hitPoint, origin);
                if (distance < minDist)
                {
                    minObject = hitAcknexObject;
                    minDist = distance;
                }
            }
            void HandleHit(Collider raycastResult, IAcknexObject hitAcknexObject)
            {
                var hitPoint = hitAcknexObject.Container.GetCenter();
                var distance = Vector3.Distance(hitPoint, origin);
                UpdateSkillValue(SkillName.HIT_DIST, distance);
                UpdateSkillValue(SkillName.RESULT, shootFac * (1.0f - distance / shootRange));
                UpdateSkillValue(SkillName.SHOOT_ANGLE, AngleUtils.ConvertUnityToAcknexAngle(AngleUtils.Angle(AngleUtils.To2D(hitPoint), AngleUtils.To2D(origin))));
                TriggerEvent(PropertyName.IF_HIT, hitAcknexObject, hitAcknexObject, hitAcknexObject.Container.GetRegion());
            }
#if DEBUG_ENABLED
            DebugExtension.DebugWireSphere(origin, Color.black, shootRange);
#endif
            Array.Clear(_overlapResults, 0, MaxHits);
            var hitCount = Physics.OverlapSphereNonAlloc(origin, shootRange, _overlapResults, WallsWaterRegionsAndThings);
            for (var i = 0; i < hitCount; i++)
            {
                var overlapResult = _overlapResults[i];
                if (overlapResult == null)
                {
                    continue;
                }
                if (overlapResult.transform.TryGetComponent<Player>(out var player))
                {
                    HandleMinDist(player.AcknexObject);
                }
                else if (overlapResult.transform.TryGetComponent<Thing>(out var thing))
                {
                    if (!thing.AcknexObject.HasFlag(PropertyName.FRAGILE))
                    {
                        continue;
                    }
                    HandleMinDist(thing.AcknexObject);
                }
                else if (overlapResult.transform.parent != null)
                {
                    if (overlapResult.transform.parent.TryGetComponent<Wall>(out var wall))
                    {
                        if (!wall.AcknexObject.HasFlag(PropertyName.FRAGILE))
                        {
                            continue;
                        }
                        HandleMinDist(wall.AcknexObject);
                    }
                    else if (overlapResult.transform.parent.TryGetComponent<Region>(out var region))
                    {
                        if (!region.AcknexObject.HasFlag(PropertyName.FRAGILE))
                        {
                            continue;
                        }
                        HandleMinDist(region.AcknexObject);
                    }
                }
            }
            UpdateSkillValue(SkillName.HIT_DIST, 0f);
            UpdateSkillValue(SkillName.RESULT, 0f);
            UpdateSkillValue(SkillName.SHOOT_ANGLE, 0f);
            SetSynonymObject(SynonymName.HIT, minObject);
            UpdateSkillValue(SkillName.HIT_MINDIST, minDist < Mathf.Infinity ? minDist : 0);
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
                else if (overlapResult.transform.TryGetComponent<Thing>(out var thing))
                {
                    if (!thing.AcknexObject.HasFlag(PropertyName.FRAGILE))
                    {
                        continue;
                    }
                    HandleHit(overlapResult, thing.AcknexObject);
                }
                else if (overlapResult.transform.parent != null)
                {
                    if (overlapResult.transform.parent.TryGetComponent<Wall>(out var wall))
                    {
                        if (!wall.AcknexObject.HasFlag(PropertyName.FRAGILE))
                        {
                            continue;
                        }
                        HandleHit(overlapResult, wall.AcknexObject);
                    }
                    else if (overlapResult.transform.parent.TryGetComponent<Region>(out var region))
                    {
                        if (!region.AcknexObject.HasFlag(PropertyName.FRAGILE))
                        {
                            continue;
                        }
                        HandleHit(overlapResult, region.AcknexObject);
                    }
                }
            }
        }

        public void FadePal(IAcknexObject acknexObject, float factor)
        {
            if (acknexObject?.Container is Palette palette)
            {
                var backgroundPixels = Palette.Instance.GetPixels();
                var foregroundPixels = palette.GetPixels();
                for (var i = 0; i < _palettePixels.Length; i++)
                {
                    _palettePixels[i] = Color.Lerp(backgroundPixels[i], foregroundPixels[i], factor);
                }
                _palette.SetPixels(_palettePixels);
                _palette.Apply(false, false);
            }
        }

        public Resolution GameResolution
        {
            get => _resolution;
            set
            {
                //todo: fixed
                var referenceResolution = new Vector2();
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
                UpdateSkillValue(SkillName.SCREEN_WIDTH, referenceResolution.x);
                UpdateSkillValue(SkillName.SCREEN_HGT, referenceResolution.y);
                CanvasView.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, referenceResolution.x);
                CanvasView.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, referenceResolution.y);
                referenceResolution.x *= 2f;
                CanvasScaler.referenceResolution = referenceResolution;
                _resolution = value;
            }
        }

        public IAcknexObject GetObject(ObjectType type, NameId name)
        {
            if (type == ObjectType.Player)
            {
                return Player.Instance.AcknexObject;
            }
            if (name != NameUtils.NULL && AcknexObject.TryGetAcknexObject(name, out var acknexObject))
            {
                return acknexObject;
            }
            return null;
        }

        public int GetRegionIndex(NameId name)
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

        public void Lift(IAcknexObject acknexObject, float dz)
        {
            var region = acknexObject.Container as Region;
            if (region != null)
            {
                var regionName = region.AcknexObject.Name;
                var nameInt = region.AcknexObject.NameId;
                foreach (var instance in AllRegionsByName[nameInt])
                {
                    instance.Lift(dz);
                }
            }
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

        public void PlaySound(IAcknexObject sound, float volume, float balance = 0.5f, float sDist = 100, float svDist = 100)
        {
            PlaySound(sound, volume, null, sDist, svDist);
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
            if (acknexObject.IsInstance)
            {
                return;
            }
            var nameId = acknexObject.NameId;
            switch (acknexObject.Container)
            {
                case Wall wall:
                {
                    //var name = acknexObject.Name;
                    if (!AllWallsByName.TryGetValue(nameId, out var list))
                    {
                        list = new HashSet<Wall>();
                        AllWallsByName.Add(nameId, list);
                    }
                    wall.AcknexObject.InstanceIndex = list.Count;
                    list.Add(wall);
                    if (list.Count == 1)
                    {
                        AcknexObject.SetAcknexObject(nameId, wall.AcknexObject);
                    }
                    break;
                }
                case Region region:
                {
                    //var name = acknexObject.Name;
                    if (!AllRegionsByName.TryGetValue(nameId, out var list))
                    {
                        list = new HashSet<Region>();
                        AllRegionsByName.Add(nameId, list);
                    }
                    region.AcknexObject.InstanceIndex = list.Count;
                    list.Add(region);
                    if (list.Count == 1)
                    {
                        AcknexObject.SetAcknexObject(nameId, region.AcknexObject);
                    }
                    break;
                }
                case Actor actor:
                {
                    //var name = acknexObject.Name;
                    if (!AllActorsByName.TryGetValue(nameId, out var list))
                    {
                        list = new HashSet<Actor>();
                        AllActorsByName.Add(nameId, list);
                    }
                    actor.AcknexObject.InstanceIndex = list.Count;
                    list.Add(actor);
                    if (list.Count == 1)
                    {
                        AcknexObject.SetAcknexObject(nameId, actor.AcknexObject);
                    }
                    break;
                }
                case Thing thing:
                {
                    //var name = acknexObject.Name;
                    if (!AllThingsByName.TryGetValue(nameId, out var list))
                    {
                        list = new HashSet<Thing>();
                        AllThingsByName.Add(nameId, list);
                    }
                    thing.AcknexObject.InstanceIndex = list.Count;
                    list.Add(thing);
                    if (list.Count == 1)
                    {
                        AcknexObject.SetAcknexObject(nameId, thing.AcknexObject);
                    }
                    break;
                }
                case Way way:
                {
                    //var name = acknexObject.Name;
                    if (!AllWaysByName.TryGetValue(nameId, out var list))
                    {
                        list = new HashSet<Way>();
                        AllWaysByName.Add(nameId, list);
                    }
                    way.AcknexObject.InstanceIndex = list.Count;
                    list.Add(way);
                    if (list.Count == 1)
                    {
                        AcknexObject.SetAcknexObject(nameId, way.AcknexObject);
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
            BuildRegionsAndWalls();
            PostSetupObjects();
            if (!UseWDLEngine)
            {
                if (!DisableCompilation)
                {
                    ConvertActionsToCS();
                }
                _runtime = new Game();
                _runtime.SetWorld(this);
            }
        }

        public void ReadInkey(IAcknexObject acknexObject)
        {
        }

        public void Rotate(IAcknexObject acknexObject, float radians)
        {
            var region = acknexObject.Container as Region;
            if (region != null)
            {
                //var regionName = region.AcknexObject.Name;
                var nameInt = region.AcknexObject.NameId;
                foreach (var instance in AllRegionsByName[nameInt])
                {
                    Vector3 center;
                    if (acknexObject.TryGetAcknexObject(PropertyName.GENIUS, out var genius))
                    {
                        center = genius.Container.GetCenter();
                    }
                    else
                    {
                        center = Vector3.zero;
                    }
                    instance.Rotate(center, Mathf.Rad2Deg * radians);
                }
            }
        }

        public void SetRuntime(IAcknexRuntime runtime)
        {
            _runtime = runtime;
        }

        public void SetupTemplate()
        {
        }

        public void Shift(IAcknexObject acknexObject, float dx, float dy)
        {
            var region = acknexObject.Container as Region;
            if (region != null)
            {
                //var regionName = region.AcknexObject.Name;
                var nameInt = region.AcknexObject.NameId;
                foreach (var instance in AllRegionsByName[nameInt])
                {
                    instance.Shift(dx, dy);
                }
            }
        }

        public void Shoot(IAcknexObject acknexObject, IAcknexObject MY, IAcknexObject THERE)
        {
            if (View.Instance == null)
            {
                return;
            }
            var shootX = GetSkillValue(SkillName.SHOOT_X);
            var shootY = GetSkillValue(SkillName.SHOOT_Y);
            Ray ray;
            if (acknexObject == null)
            {
                ray = View.Instance.ViewCamera.ViewportPointToRay(new Vector3(0.5f + shootX, 0.5f + shootY, 0f));
#if DEBUG_ENABLED
                DebugExtension.DebugArrow(ray.origin, ray.direction, Color.black, 10f);
#endif
            }
            else
            {
                ray = new Ray(View.Instance.ViewCamera.transform.position, (acknexObject.Container.GetCenter() - View.Instance.ViewCamera.transform.position).normalized);
            }
            //todo: shootSector
            var shootFac = GetSkillValue(SkillName.SHOOT_FAC);
            var shootRange = GetSkillValue(SkillName.SHOOT_RANGE);

            void HandleHit(RaycastHit raycastResult, IAcknexObject hitAcknexObject)
            {
                if (acknexObject != null && hitAcknexObject != acknexObject)
                {
                    return;
                }
                var distance = acknexObject != null ? Vector3.Distance(acknexObject.Container.GetCenter(), ray.origin) : raycastResult.distance;
                UpdateSkillValue(SkillName.HIT_DIST, distance);
                UpdateSkillValue(SkillName.RESULT, shootFac * (1.0f - distance / shootRange));
                UpdateSkillValue(SkillName.SHOOT_ANGLE, AngleUtils.ConvertUnityToAcknexAngle(AngleUtils.Angle(AngleUtils.To2D(raycastResult.point), AngleUtils.To2D(ray.origin))));
                SetSynonymObject(SynonymName.HIT, hitAcknexObject);
                if (acknexObject == null)
                {
                    TriggerEvent(PropertyName.IF_HIT, hitAcknexObject, hitAcknexObject, hitAcknexObject.Container.GetRegion());
                }
#if DEBUG_ENABLED
                var color = Color.magenta;
                switch (hitAcknexObject.Type)
                {
                    case ObjectType.Wall:
                        color = Color.red;
                        break;
                    case ObjectType.Region:
                        color = Color.green;
                        break;
                    case ObjectType.Thing:
                        color = Color.blue;
                        break;
                }
                Debug.DrawLine(ray.origin, hitAcknexObject.Container.GetCenter(), color, 1f);
                DebugExtension.DebugPoint(raycastResult.point, color, 1f, 1f);
#endif
            }

            UpdateSkillValue(SkillName.HIT_DIST, 0f);
            UpdateSkillValue(SkillName.RESULT, 0f);
            UpdateSkillValue(SkillName.SHOOT_ANGLE, 0f);
            SetSynonymObject(SynonymName.HIT, null);
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
                        if (wall.AcknexObject.HasFlag(PropertyName.IMMATERIAL))
                        {
                            continue;
                        }
                        HandleHit(raycastResult, wall.AcknexObject);
                        return;
                    }
                    if (raycastResult.transform.parent.TryGetComponent<Region>(out var region))
                    {
                        if (region.AcknexObject.HasFlag(PropertyName.IMMATERIAL))
                        {
                            continue;
                        }
                        HandleHit(raycastResult, region.AcknexObject);
                        return;
                    }
                    if (raycastResult.transform.parent.TryGetComponent<Thing>(out var thing))
                    {
                        if (thing.AcknexObject.HasFlag(PropertyName.IMMATERIAL))
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
#if DEBUG_ENABLED
            Debug.DrawRay(ray.origin, ray.direction * shootRange, Color.black, 1f);
#endif
        }

        public void UpdateObject()
        {
            CanvasWidthRatio = CanvasScaler.referenceResolution.x * (CanvasScaler.referenceResolution.x / Screen.width);
            Shader.SetGlobalInt("_AcknexUsePalettes", UsePalettes ? 1 : 0);
            AmbientLight.shadows = DrawShadows ? LightShadows.Hard : LightShadows.None;
            AmbientLight.transform.rotation = Quaternion.Euler(0f, AngleUtils.ConvertAcknexToUnityAngle(AcknexObject.GetFloat(PropertyName.LIGHT_ANGLE), true), 0f) * Quaternion.Euler(45f, 0f, 0f);
            UpdateSkills();
        }

        public void LateUpdate()
        {
            foreach (var texture in TexturesByName.Values)
            {
                texture.AcknexObject.IsDirty = false;
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
            if (OldAckVersion)
            {
                foreach (var kvp in RegionsByName)
                {
                    PostSetupObjectInstance(kvp.Value.AcknexObject);
                }
            }
            var createdRegions = new List<Region>();
            foreach (var items in AllRegionsByName.Values)
            {
                foreach (var item in items)
                {
                    item.SetupInstance();
                    item.UpdateAllMeshes();
                    item.BuildBelowInstance(createdRegions);
                }
            }
            foreach (var item in createdRegions)
            {
                PostSetupObjectInstance(item.AcknexObject);
                item.SetupInstance();
                item.UpdateAllMeshes();
            }
            foreach (var items in AllWallsByName.Values)
            {
                foreach (var item in items)
                {
                    item.SetupInstance();
                    item.UpdateAllMeshes();
                }
            }
            foreach (var items in AllWaysByName.Values)
            {
                foreach (var item in items)
                {
                    item.SetupInstance();
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
            if (MeshBatch && !_culled)
            {
                SetupCulling();
                _culled = true;
            }
        }

        private void ResolveReferences()
        {
            foreach (var item in _postResolve)
            {
                var objectName = item.objectName;
                var objectIntName = NameUtils.ToNameId(objectName, true, false, false);
                if (item.list != null)
                {
                    if (AcknexObject.TryGetAcknexObject(objectIntName, out var acknexObject))
                    {
                        item.list.Add(acknexObject);
                    }
                    else if (objectIntName == NameUtils.NULL)
                    {
                        item.list.Add(null);
                    }
                    else
                    {
                        //todo: this is hacky
                        var propertyName = $"_UNNAMED_{_unnamedStringCount++}";
                        var str = AddString(propertyName, objectName);
                        item.list.Add(str);
                    }
                }
                else
                {
                    if (AcknexObject.TryGetAcknexObject(objectIntName, out var acknexObject))
                    {
                        item.acknexObject.SetAcknexObject(item.keyword, acknexObject);
                    }
                }
            }
        }
    }
}