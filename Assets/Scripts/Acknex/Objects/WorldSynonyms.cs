using System;
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
            if (!isValid)
            {
                throw new Exception($"Invalid Synonym attribution. Expected: {type}. Got: {target.Type}");
            }
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

        //todo: add instance check "INDEX"  
        public IAcknexObject GetSynonymObject(string synonymName)
        {
            if (SynonymsByName.TryGetValue(synonymName, out var synonym))
            {
                var objectName = synonym.AcknexObject.GetString("VAL");
                switch (synonym.AcknexObject.GetString("TYPE"))
                {
                    case "OVERLAY":
                        return GetObject(ObjectType.Overlay, objectName);
                    case "TEXTURE":
                        return GetObject(ObjectType.Texture, objectName);
                    case "WALL":
                        return GetObject(ObjectType.Wall, objectName);
                    case "THING":
                        return GetObject(ObjectType.Thing, objectName);
                    case "ACTOR":
                        return GetObject(ObjectType.Actor, objectName);
                    case "REGION":
                        return GetObject(ObjectType.Region, objectName);
                    case "PANEL":
                        return GetObject(ObjectType.Panel, objectName);
                    case "TEXT":
                        return GetObject(ObjectType.Text, objectName);
                    case "STRING":
                        return GetObject(ObjectType.String, objectName);
                    case "ACTION":
                        return GetObject(ObjectType.Action, objectName);
                }
            }
            throw new Exception("Unknown synonym type");
        }
    }
}