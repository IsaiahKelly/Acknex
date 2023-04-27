﻿using System;
using Acknex.Interfaces;

namespace Acknex
{
    public partial class World
    {
        public Synonym Here { get; private set; }

        public IAcknexObject GetSynonymObject(string synonymName, bool fromRuntime = false)
        {
            IAcknexObject value = null;
            if (SynonymsByName.TryGetValue(synonymName, out var synonym))
            {
                value = synonym.AcknexObject.GetAcknexObject("VAL");
            }
            if (value == null && fromRuntime)
            {
                //Debug.LogError($"Null value when trying to get the synonym object: {synonymName}");
            }
            return value;
        }

        public void SetSynonymObject(string synonymName, IAcknexObject target)
        {
            if (!SynonymsByName.TryGetValue(synonymName, out var synonym))
            {
                throw new Exception("Synonym [" + synonymName + "] not found");
            }
            synonym.AcknexObject.SetAcknexObject("VAL", target);
        }

        private void CreateDefaultSynonyms()
        {
            Here = CreateSynonym("HERE", "REGION");
            CreateSynonym("THERE", "REGION");
            CreateSynonym("MY", "THING");
            CreateSynonym("HIT", "THING");
            CreateSynonym("TOUCHED", "THING");
            CreateSynonym("TOUCH_TEX", "TEXTURE");
            CreateSynonym("TOUCH_REG", "REGION");
            CreateSynonym("TOUCH_TEXT", "TEXT");
        }

        public ObjectType GetSynonymType(string synonymName)
        {
            var synonymType = SynonymsByName[synonymName].AcknexObject.GetString("TYPE");
            switch (synonymType)
            {
                case "TEXTURE":
                    return ObjectType.Texture;
                case "THING":
                    return ObjectType.Thing;
                case "ACTOR":
                    return ObjectType.Actor;
                case "WALL":
                    return ObjectType.Wall;
                case "REGION":
                    return ObjectType.Region;
                case "OVERLAY":
                    return ObjectType.Overlay;
                case "PANEL":
                    return ObjectType.Panel;
                case "TEXT":
                    return ObjectType.Text;
                case "STRING":
                    return ObjectType.String;
                case "ACTION":
                    return ObjectType.Action;
                default:
                    throw new Exception("Unknown synonym type:" + synonymType);
            }
        }
    }
}