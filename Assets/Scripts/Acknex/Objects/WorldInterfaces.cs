using System;
using Acknex.Interfaces;
using LibTessDotNet;
using UnityEngine;

namespace Acknex
{
    public partial class World
    {
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

        public IAcknexObject CreateObjectInstance(ObjectType type, string name)
        {
            switch (type)
            {
                case ObjectType.Thing:
                {
                    return CreateThing(name).AcknexObject;
                }
                case ObjectType.Actor:
                {
                    return CreateActor(name).AcknexObject;
                }
                case ObjectType.Region:
                {
                    var region = CreateRegion(name);
                    if (!WMPContainsRegionsByName)
                    {
                        RegionsByIndex.Add(region);
                    }

                    return region.AcknexObject;
                }
                case ObjectType.Wall:
                {
                    var wall = CreateWall(name);
                    wall.transform.SetParent(transform, false);
                    Walls.Add(wall);
                    return wall.AcknexObject;
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

                        var action = gameObject.AddComponent<Action>();
                        action.Disable();
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
                        return skill.AcknexObject;
                    }
                case ObjectType.Synonym:
                    {
                        if (SynonymsByName.TryGetValue(name, out var synonym))
                        {
                            return synonym.AcknexObject;
                        }

                        synonym = CreateSynonym(name);
                        return synonym.AcknexObject;
                    }
                case ObjectType.Texture:
                    {
                        if (TexturesByName.ContainsKey(name))
                        {
                            throw new Exception("Texture [" + name + "] already registered.");
                        }

                        var texture = new Texture();
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
                        overlay.Disable();
                        OverlaysByName.Add(name, overlay);
                        return overlay.AcknexObject;
                    }
                case ObjectType.World:
                    throw new Exception("It is not possible to create new worlds.");
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
                    return SynonymsByName.TryGetValue(name, out var synonym) ? synonym.AcknexObject : null;
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

            StringsByName.Add(name, value);
        }

        public void PostSetupObjectInstance(ObjectType type, IAcknexObject acknexObject)
        {
            if (type == ObjectType.Wall)
            {
                var wall = acknexObject.Container as Wall;
                if (wall != null)
                {
                    _regionWalls.GetWallsList(wall.AcknexObject.GetInteger("REGION1")).Add(wall);
                    _regionWalls.GetWallsList(wall.AcknexObject.GetInteger("REGION2")).Add(wall);
                }
            }
        }

        public void PostSetupObjectTemplate(ObjectType type, IAcknexObject acknexObject)
        {
            if (type == ObjectType.Bitmap)
            {
                acknexObject.Container.UpdateObject();
            }
        }
    }
}