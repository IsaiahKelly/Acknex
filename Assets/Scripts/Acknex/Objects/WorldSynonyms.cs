using System;
using System.Collections;
using Acknex.Interfaces;

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
            if (target == null)
            {
                synonym.AcknexObject.SetString("VAL", null);
                synonym.AcknexObject.SetAcknexObject("INSTANCE", null);
                return;
            }
            var objectName = target.GetString("NAME");
            synonym.AcknexObject.SetString("VAL", objectName);
            synonym.AcknexObject.SetAcknexObject("INSTANCE", target);
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

        //todo: add instance check "INDEX"  
        public IAcknexObject GetSynonymObject(string synonymName)
        {
            if (SynonymsByName.TryGetValue(synonymName, out var synonym))
            {
                var objectName = synonym.AcknexObject.GetString("VAL");
                var objectType = GetSynonymType(synonymName);
                return GetObject(objectType, objectName);
            }
            return null;
        }

        public IEnumerator CallSynonymAction(string synonymName)
        {
            if (SynonymsByName.TryGetValue(synonymName, out var synonym))
            {
                var value = synonym.AcknexObject.GetAcknexObject("VAL") ?? synonym.AcknexObject.GetAcknexObject("DEFAULT");
                //var objectName = synonym.AcknexObject.GetString("VAL") ?? synonym.AcknexObject.GetString("DEFAULT") ?? synonym.AcknexObject.GetString("NAME");
                if (value != null)
                {
                    yield return CallAction(GetSynonymObject("MY"), value.GetString("NAME"));
                }
            }
        }
    }
}