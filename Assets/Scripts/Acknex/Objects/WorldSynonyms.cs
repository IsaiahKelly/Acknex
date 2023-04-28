using System;
using Acknex.Interfaces;

namespace Acknex
{
    public partial class World
    {
        public IAcknexObject GetSynonymObject(SynonymName synonymName, bool fromRuntime = false)
        {
            return GetSynonymObject((int)synonymName, fromRuntime);
        }

        public IAcknexObject GetSynonymObject(int synonymName, bool fromRuntime = false)
        {
            IAcknexObject value = null;
            if (SynonymsByName.TryGetValue(synonymName, out var synonym))
            {
                value = synonym.AcknexObject.GetAcknexObject(PropertyName.VAL);
            }
            if (value == null && fromRuntime)
            {
                //Debug.LogError($"Null value when trying to get the synonym object: {synonymName}");
            }
            return value;
        }

        public void SetSynonymObject(SynonymName synonymName, IAcknexObject target)
        {
            SetSynonymObject((int)synonymName, target);
        }

        public void SetSynonymObject(int synonymName, IAcknexObject target)
        {
            if (!SynonymsByName.TryGetValue(synonymName, out var synonym))
            {
                throw new Exception("Synonym [" + synonymName + "] not found");
            }
            synonym.AcknexObject.SetAcknexObject(PropertyName.VAL, target);
        }

        private void CreateDefaultSynonyms()
        {
            CreateSynonym(SynonymName.HERE, "REGION");
            CreateSynonym(SynonymName.THERE, "REGION");
            CreateSynonym(SynonymName.MY, "THING");
            CreateSynonym(SynonymName.HIT, "THING");
            CreateSynonym(SynonymName.TOUCHED, "THING");
            CreateSynonym(SynonymName.TOUCH_TEX, "TEXTURE");
            CreateSynonym(SynonymName.TOUCH_REG, "REGION");
            CreateSynonym(SynonymName.TOUCH_TEXT, "TEXT");
        }

        public ObjectType GetSynonymType(int synonymName)
        {
            var synonymType = SynonymsByName[synonymName].AcknexObject.GetString(PropertyName.TYPE);
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