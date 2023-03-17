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
                //synonym = new Synonym();
                //SynonymsByName.Add(synonymName, synonym);
            }
            var isValid = true;
            var type = synonym.AcknexObject.GetString("TYPE");
            switch (type)
            {
                case "OVERLAY":
                    isValid = target.Type == ObjectType.Overlay;
                    break;
                case "TEXTURE":
                    isValid = target.Type == ObjectType.Texture;
                    break;
                case "WALL":
                    isValid = target.Type == ObjectType.Wall;
                    break;
                case "THING":
                case "ACTOR":
                    isValid = target.Type == ObjectType.Thing || target.Type == ObjectType.Actor;
                    break;
                case "REGION":
                    isValid = target.Type == ObjectType.Region ;
                    break;
                case "PANEL":
                    isValid = target.Type == ObjectType.Panel;
                    break;
                case "TEXT":
                    isValid = target.Type == ObjectType.Text;
                    break;
                case "STRING":
                    isValid = target.Type == ObjectType.String;
                    break;
                case "ACTION":
                    isValid = target.Type == ObjectType.Action;
                    break;
            }
            //if (!isValid)
            //{
            //    throw new Exception($"Invalid Synonym attribution. Expected: {type}. Got: {target.Type}");
            //}
            var objectName = target.GetString("NAME");
            synonym.AcknexObject.SetString("VAL", objectName);
            synonym.AcknexObject.SetAcknexObject("INSTANCE", target);
            //switch (target.Type)
            //{
            //    case ObjectType.Actor:
            //        synonym.AcknexObject.SetInteger("INDEX", AllActorsByName[objectName].IndexOf((Actor)target.Container));
            //        break;
            //    case ObjectType.Thing:
            //        synonym.AcknexObject.SetInteger("INDEX", AllThingsByName[objectName].IndexOf((Thing)target.Container));
            //        break;
            //    case ObjectType.Wall:
            //        synonym.AcknexObject.SetInteger("INDEX", AllWallsByName[objectName].IndexOf((Wall)target.Container));
            //        break;
            //    case ObjectType.Region:
            //        synonym.AcknexObject.SetInteger("INDEX", AllRegionsByName[objectName].IndexOf((Region)target.Container));
            //        break;
            //}
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
                var objectName = synonym.AcknexObject.GetString("VAL");
                var objectType = GetSynonymType(synonymName);
                var action = GetObject(objectType, objectName);
                if (action != null)
                {
                    yield return CallAction(null, action.GetString("NAME"));
                }
            }
        }
    }
}