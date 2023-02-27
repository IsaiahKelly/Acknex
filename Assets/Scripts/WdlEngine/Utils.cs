using Acknex.Interfaces;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WdlEngine
{
    internal static class Utils
    {
        public static ObjectType StringToObjectType(string str)
        {
            switch (str)
            {
            case "ACTION":
                return ObjectType.Action;
            case "ACTOR":
                return ObjectType.Actor;
            case "BITMAP":
                return ObjectType.Bitmap;
            case "OVERLAY":
                return ObjectType.Overlay;
            case "PANEL":
                return ObjectType.Panel;
            case "PLAYER":
                return ObjectType.Player;
            case "REGION":
                return ObjectType.Region;
            case "SKILL":
                return ObjectType.Skill;
            case "SOUND":
                return ObjectType.Sound;
            case "SYNONYM":
                return ObjectType.Synonym;
            case "TEXTURE":
                return ObjectType.Texture;
            case "THING":
                return ObjectType.Thing;
            case "VIEW":
                return ObjectType.View;
            case "WALL":
                return ObjectType.Wall;
            case "WAY":
                return ObjectType.Way;
            case "WORLD":
                return ObjectType.World;
            default:
                throw new ArgumentOutOfRangeException(nameof(str));
            }
        }
    }
}
