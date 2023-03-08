using System;
using System.Collections.Generic;
using System.IO;
using System.Net.NetworkInformation;
using System.Text;
using Acknex.Interfaces;
using LibTessDotNet;
using UnityEngine;
using UnityEngine.UI;
using Resolution = Acknex.Interfaces.Resolution;

namespace Acknex
{
    public partial class World
    {
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


        private Resolution _resolution = Resolution.Res320x200;
        private IAcknexRuntime _runtime;

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
                        var container = CreateThing(name);
                        container.AcknexObject.Type = type;
                        container.AcknexObject.SetFloat("SCALE_X", 16);
                        container.AcknexObject.SetFloat("SCALE_Y", 16);
                        return container.AcknexObject;
                    }
                case ObjectType.Actor:
                    {
                        var container = CreateActor(name);
                        container.AcknexObject.Type = type;
                        container.AcknexObject.SetFloat("SCALE_X", 16);
                        container.AcknexObject.SetFloat("SCALE_Y", 16);
                        return container.AcknexObject;
                    }
                case ObjectType.Region:
                    {
                        var container = CreateRegion(name);
                        container.AcknexObject.Type = type;
                        if (!WMPContainsRegionsByName)
                        {
                            RegionsByIndex.Add(container);
                        }
                        return container.AcknexObject;
                    }
                case ObjectType.Wall:
                    {
                        var container = CreateWall(name);
                        container.AcknexObject.Type = type;
                        Walls.Add(container);
                        return container.AcknexObject;
                    }
                case ObjectType.Way:
                    {
                        var container = CreateWay(name);
                        container.AcknexObject.Type = type;
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
                        if (ActionsByName.ContainsKey(name))
                        {
                            throw new Exception("Action [" + name + "] already registered.");
                        }
                        var action = new Action();
                        action.AcknexObject.Type = type;
                        action.AcknexObject.SetString("NAME", name);
                        ActionsByName.Add(name, action);
                        return action.AcknexObject;
                    }
                case ObjectType.Actor:
                    {
                        if (ActorsByName.ContainsKey(name))
                        {
                            throw new Exception("Actor [" + name + "] already registered.");
                        }
                        var actor = CreateActor(name, true);
                        actor.AcknexObject.Type = type;
                        actor.AcknexObject.SetString("NAME", name);
                        actor.AcknexObject.SetFloat("SCALE_X", 16);
                        actor.AcknexObject.SetFloat("SCALE_Y", 16);
                        actor.Disable();
                        ActorsByName.Add(name, actor);
                        return actor.AcknexObject;
                    }
                case ObjectType.Bitmap:
                    {
                        if (BitmapsByName.ContainsKey(name))
                        {
                            throw new Exception("Bitmap [" + name + "] already registered.");
                        }
                        var bitmap = new Bitmap();
                        bitmap.AcknexObject.Type = type;
                        bitmap.AcknexObject.SetString("NAME", name);
                        BitmapsByName.Add(name, bitmap);
                        return bitmap.AcknexObject;
                    }
                case ObjectType.Region:
                    {
                        if (RegionsByName.ContainsKey(name))
                        {
                            throw new Exception("Region [" + name + "] already registered.");
                        }
                        var region = CreateRegion(name, true);
                        region.AcknexObject.Type = type;
                        region.AcknexObject.SetString("NAME", name);
                        region.Disable();
                        RegionsByName.Add(name, region);
                        if (WMPContainsRegionsByName)
                        {
                            RegionsByIndex.Add(region);
                        }
                        return region.AcknexObject;
                    }
                case ObjectType.Skill:
                    {
                        if (SkillsByName.TryGetValue(name, out var skill))
                        {
                            return skill.AcknexObject;
                        }
                        skill = CreateSkill(name, 0, 0, 0);
                        skill.AcknexObject.Type = type;
                        skill.AcknexObject.SetString("NAME", name);
                        return skill.AcknexObject;
                    }
                case ObjectType.Synonym:
                    {
                        if (SynonymsByName.TryGetValue(name, out var synonym))
                        {
                            return synonym.AcknexObject;
                        }
                        synonym = CreateSynonym(name);
                        synonym.AcknexObject.Type = type;
                        synonym.AcknexObject.SetString("NAME", name);
                        return synonym.AcknexObject;
                    }
                case ObjectType.Texture:
                    {
                        if (TexturesByName.ContainsKey(name))
                        {
                            throw new Exception("Texture [" + name + "] already registered.");
                        }
                        var texture = new Texture();
                        texture.AcknexObject.Type = type;
                        texture.AcknexObject.SetString("NAME", name);
                        TexturesByName.Add(name, texture);
                        return texture.AcknexObject;
                    }
                case ObjectType.Thing:
                    {
                        if (ThingsByName.ContainsKey(name))
                        {
                            throw new Exception("Thing [" + name + "] already registered.");
                        }
                        var thing = CreateThing(name, true);
                        thing.AcknexObject.Type = type;
                        thing.AcknexObject.SetString("NAME", name);
                        thing.AcknexObject.SetFloat("SCALE_X", 16);
                        thing.AcknexObject.SetFloat("SCALE_Y", 16);
                        thing.Disable();
                        ThingsByName.Add(name, thing);
                        return thing.AcknexObject;
                    }
                case ObjectType.Wall:
                    {
                        if (WallsByName.ContainsKey(name))
                        {
                            throw new Exception("Wall [" + name + "] already registered.");
                        }
                        var wall = CreateWall(name, true);
                        wall.AcknexObject.Type = type;
                        wall.AcknexObject.SetString("NAME", name);
                        wall.Disable();
                        WallsByName.Add(name, wall);
                        return wall.AcknexObject;
                    }
                case ObjectType.Way:
                    {
                        if (WaysByName.ContainsKey(name))
                        {
                            throw new Exception("Way [" + name + "] already registered.");
                        }
                        var way = CreateWay(name, true);
                        way.AcknexObject.Type = type;
                        way.AcknexObject.SetString("NAME", name);
                        way.Disable();
                        WaysByName.Add(name, way);
                        return way.AcknexObject;
                    }
                case ObjectType.Overlay:
                    {
                        if (OverlaysByName.ContainsKey(name))
                        {
                            throw new Exception("Overlay [" + name + "] already registered.");
                        }
                        var overlay = CreateOverlay(name, true);
                        overlay.AcknexObject.Type = type;
                        overlay.AcknexObject.SetString("NAME", name);
                        overlay.Disable();
                        OverlaysByName.Add(name, overlay);
                        return overlay.AcknexObject;
                    }
                case ObjectType.Flic:
                {
                    if (FlicsByName.ContainsKey(name))
                    {
                        throw new Exception("Flic [" + name + "] already registered.");
                    }
                    var flic = new Flic();
                    flic.AcknexObject.Type = type;
                    flic.AcknexObject.SetString("NAME", name);
                    FlicsByName.Add(name, flic);
                    return flic.AcknexObject;
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
                case ObjectType.Action:
                    return ActionsByName.TryGetValue(name, out var action) ? action.AcknexObject : null;
                case ObjectType.Actor:
                    return ActorsByName.TryGetValue(name, out var actor) ? actor.AcknexObject : null;
                case ObjectType.Bitmap:
                    return BitmapsByName.TryGetValue(name, out var bitmap) ? bitmap.AcknexObject : null;
                case ObjectType.Region:
                    return RegionsByName.TryGetValue(name, out var region) ? region.AcknexObject : null;
                case ObjectType.Skill:
                    return SkillsByName.TryGetValue(name, out var skill) ? skill.AcknexObject : null;
                case ObjectType.Synonym:
                    return GetSynonymObject(name);    
                //return SynonymsByName.TryGetValue(name, out var synonym) ? synonym.AcknexObject : null;
                case ObjectType.Texture:
                    return TexturesByName.TryGetValue(name, out var texture) ? texture.AcknexObject : null;
                case ObjectType.Thing:
                    return ThingsByName.TryGetValue(name, out var thing) ? thing.AcknexObject : null;
                case ObjectType.Wall:
                    return WallsByName.TryGetValue(name, out var wall) ? wall.AcknexObject : null;
                case ObjectType.Way:
                    return WaysByName.TryGetValue(name, out var way) ? way.AcknexObject : null;
                case ObjectType.Overlay:
                    return OverlaysByName.TryGetValue(name, out var overlay) ? overlay.AcknexObject : null;
                case ObjectType.Flic:
                    return FlicsByName.TryGetValue(name, out var flic) ? flic.AcknexObject : null;
                case ObjectType.Player:
                    return Player.Instance.AcknexObject;
            }
            return null;
        }

        public IAcknexObject GetWorld()
        {
            return AcknexObject;
        }

        public void PostSetupWMP()
        {
            BuildRegionsAndWalls(_regionWalls, _contourVertices);
            var sourceStringBuilder = new StringBuilder();
            sourceStringBuilder.AppendLine("public class Game {");
            foreach (var action in ActionsByName)
            {
                action.Value.WriteHeader();
                action.Value.ParseAllStatements(_textParser);
                action.Value.WriteFooter();
                sourceStringBuilder.Append(action.Value.CodeStringBuilder);
            }
            File.WriteAllText(Application.temporaryCachePath + "/source.cs", sourceStringBuilder.ToString());
            Debug.Log(Application.temporaryCachePath + "/source.cs");
        }

        public void AddVertex(float x, float y, float z)
        {
            _contourVertices.Add(new ContourVertex(new Vec3(x, y, z)));
        }

        public void AddString(string name, string value)
        {
            if (StringsByName.ContainsKey(name))
            {
                throw new Exception("String [" + name + "] already registered.");
            }
            var str = new AcknexString(value);
            str.AcknexObject.Type = ObjectType.String;
            str.AcknexObject.SetString("NAME", name);
            StringsByName.Add(name, str);
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
                _regionWalls.GetWallsList(wall.AcknexObject.GetInteger("REGION1")).Add(wall);
                _regionWalls.GetWallsList(wall.AcknexObject.GetInteger("REGION2")).Add(wall);
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
            }
        }

        public void PostSetupObjectTemplate(IAcknexObject acknexObject)
        {
            if (acknexObject.Type == ObjectType.Bitmap)
            {
                acknexObject.Container.UpdateObject();
            } 
        }

        public void AddWayPoint(IAcknexObject way, float x, float y)
        {
            var container = way.Container as Way;
            if (container != null)
            {
                container.Points.Add(new Vector2(x,y));
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

        public void SetRuntime(IAcknexRuntime runtime)
        {
            _runtime = runtime;
        }

        public void WaitForCycles(ActionIdentifier identifier, int cycles)
        {
           
        }

        public void WaitForTicks(ActionIdentifier identifier, int ticks)
        {
            
        }
    }
}