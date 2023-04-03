using System;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public partial class World
    {
        private void CreateDefaultSynonyms()
        {
            CreateSynonym("HERE", "REGION");
            CreateSynonym("THERE", "REGION");
            CreateSynonym("MY", "THING");
            CreateSynonym("HIT", "THING");
            CreateSynonym("TOUCHED", "THING");
            CreateSynonym("TOUCH_TEX","TEXTURE");
            CreateSynonym("TOUCH_REG", "REGION");
            CreateSynonym("TOUCH_TEXT", "TEXT");
        }

        public void SetSynonymObject(string synonymName, IAcknexObject target) {
            if (!SynonymsByName.TryGetValue(synonymName, out var synonym))
            {
                throw new Exception("Synonym [" + synonymName + "] not found");
            }
            synonym.AcknexObject.SetAcknexObject("VAL", target);
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
                    return  ObjectType.Wall;
                case "REGION":
                    return ObjectType.Region;
                case "OVERLAY":
                    return  ObjectType.Overlay;
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

        public IAcknexObject GetSynonymObject(string synonymName)
        {
            if (SynonymsByName.TryGetValue(synonymName, out var synonym))
            {
                return synonym.AcknexObject.GetAcknexObject("VAL");
            }
            Debug.LogError($"Null value when trying to get the synonym object: {synonymName}");
            return _dummyObject.AcknexObject;
        }
    }
}