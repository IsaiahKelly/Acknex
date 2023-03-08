using System.Collections.Generic;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{

    public partial class World
    {
        public Dictionary<ObjectType, Dictionary<string, PropertyType>> PropertyDescriptors = new Dictionary<ObjectType, Dictionary<string, PropertyType>>();

        public void CreatePropertyDescriptors()
        {
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_START");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_TICK.1");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_TICK.2");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_TICK.3");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_TICK.4");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_TICK.5");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_TICK.6");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_TICK.7");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_TICK.8");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_TICK.9");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_TICK.10");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_TICK.11");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_TICK.12");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_TICK.13");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_TICK.14");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_TICK.15");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_TICK.16");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_SEC.1");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_SEC.2");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_SEC.3");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_SEC.4");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_SEC.5");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_SEC.6");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_SEC.7");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_SEC.8");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_SEC.9");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_SEC.10");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_SEC.11");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_SEC.12");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_SEC.13");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_SEC.14");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_SEC.15");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "EACH_SEC.16");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_ANYKEY");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_0");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_1");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_2");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_3");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_4");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_5");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_6");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_7");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_8");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_9");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_A");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_B");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_C");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_D");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_E");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_F");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_G");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_H");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_I");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_J");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_K");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_L");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_M");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_N");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_O");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_P");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_Q");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_R");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_S");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_T");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_U");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_V");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_X");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_Y");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_Z");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_W");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_ALT");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_BKSP");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_CAL");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_CAR");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_CTRL");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_DEL");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_END");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_ENTER");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_ESC");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_F1");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_F2");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_F3");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_F4");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_F5");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_F6");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_F7");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_F8");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_F9");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_HOME");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_INS");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_LEFT");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_MIDDLE");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_RIGHT");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_PAUSE");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_PGDN");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_PGUP");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_SPACE");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_TAB");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_CUU");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_CUD");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_CUR");
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, "IF_CUL");
            AddObjectProperty(ObjectType.World, PropertyType.Float, "AMBIENT");
            AddObjectProperty(ObjectType.World, PropertyType.Float, "LIGHT_ANGLE");


            AddObjectProperty(ObjectType.Actor, PropertyType.String, "NAME");
            AddObjectProperty(ObjectType.Actor, PropertyType.Float, "AMBIENT");
            AddObjectProperty(ObjectType.Actor, PropertyType.ObjectReference, "TEXTURE");
            AddObjectProperty(ObjectType.Actor, PropertyType.Float, "HEIGHT");
            AddObjectProperty(ObjectType.Actor, PropertyType.ObjectReference, "ATTACH");
            AddObjectProperty(ObjectType.Actor, PropertyType.Flags, "FLAGS");
            AddObjectProperty(ObjectType.Actor, PropertyType.Float, "SPEED");
            AddObjectProperty(ObjectType.Actor, PropertyType.Float, "VSPEED");
            AddObjectProperty(ObjectType.Actor, PropertyType.Float, "ASPEED");
            AddObjectProperty(ObjectType.Actor, PropertyType.Float, "WAYPOINT");
            AddObjectProperty(ObjectType.Actor, PropertyType.Float, "DIST");
            AddObjectProperty(ObjectType.Actor, PropertyType.Float, "SKILL1");
            AddObjectProperty(ObjectType.Actor, PropertyType.Float, "SKILL2");
            AddObjectProperty(ObjectType.Actor, PropertyType.Float, "SKILL3");
            AddObjectProperty(ObjectType.Actor, PropertyType.Float, "SKILL4");
            AddObjectProperty(ObjectType.Actor, PropertyType.Float, "SKILL5");
            AddObjectProperty(ObjectType.Actor, PropertyType.Float, "SKILL6");
            AddObjectProperty(ObjectType.Actor, PropertyType.Float, "SKILL7");
            AddObjectProperty(ObjectType.Actor, PropertyType.Float, "SKILL8");
            AddObjectProperty(ObjectType.Actor, PropertyType.ActionReference, "EACH_TICK");
            AddObjectProperty(ObjectType.Actor, PropertyType.ActionReference, "EACH_CYCLE");
            AddObjectProperty(ObjectType.Actor, PropertyType.ActionReference, "IF_ARRIVED");
            AddObjectProperty(ObjectType.Actor, PropertyType.ActionReference, "IF_HIT");
            AddObjectProperty(ObjectType.Actor, PropertyType.ActionReference, "IF_NEAR");
            AddObjectProperty(ObjectType.Actor, PropertyType.ActionReference, "IF_FAR");
            AddObjectProperty(ObjectType.Actor, PropertyType.Float, "ANGLE");
            AddObjectProperty(ObjectType.Actor, PropertyType.Float, "X");
            AddObjectProperty(ObjectType.Actor, PropertyType.Float, "Y");
            AddObjectProperty(ObjectType.Actor, PropertyType.Float, "Z");
            AddObjectProperty(ObjectType.Actor, PropertyType.ObjectReference, "REGION");
            AddObjectProperty(ObjectType.Actor, PropertyType.String, "TARGET");


            AddObjectProperty(ObjectType.Thing, PropertyType.String, "NAME");
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, "AMBIENT");
            AddObjectProperty(ObjectType.Thing, PropertyType.ObjectReference, "TEXTURE");
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, "HEIGHT");
            AddObjectProperty(ObjectType.Thing, PropertyType.ObjectReference, "ATTACH");
            AddObjectProperty(ObjectType.Thing, PropertyType.Flags, "FLAGS");
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, "SPEED");
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, "VSPEED");
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, "ASPEED");
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, "WAYPOINT");
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, "DIST");
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, "SKILL1");
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, "SKILL2");
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, "SKILL3");
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, "SKILL4");
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, "SKILL5");
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, "SKILL6");
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, "SKILL7");
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, "SKILL8");
            AddObjectProperty(ObjectType.Thing, PropertyType.ActionReference, "EACH_TICK");
            AddObjectProperty(ObjectType.Thing, PropertyType.ActionReference, "EACH_CYCLE");
            AddObjectProperty(ObjectType.Thing, PropertyType.ActionReference, "IF_ARRIVED");
            AddObjectProperty(ObjectType.Thing, PropertyType.ActionReference, "IF_HIT");
            AddObjectProperty(ObjectType.Thing, PropertyType.ActionReference, "IF_NEAR");
            AddObjectProperty(ObjectType.Thing, PropertyType.ActionReference, "IF_FAR");
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, "ANGLE");
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, "X");
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, "Y");
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, "Z");
            AddObjectProperty(ObjectType.Thing, PropertyType.ObjectReference, "REGION");
            AddObjectProperty(ObjectType.Thing, PropertyType.String, "TARGET");



            AddObjectProperty(ObjectType.Overlay, PropertyType.String, "NAME");
            AddObjectProperty(ObjectType.Overlay, PropertyType.Float, "LAYER");
            AddObjectProperty(ObjectType.Overlay, PropertyType.Float, "POS_X");
            AddObjectProperty(ObjectType.Overlay, PropertyType.Float, "POS_Y");
            AddObjectProperty(ObjectType.Overlay, PropertyType.Float, "SIZE_X");
            AddObjectProperty(ObjectType.Overlay, PropertyType.Float, "SIZE_Y");
            AddObjectProperty(ObjectType.Overlay, PropertyType.Flags, "FLAGS");
            AddObjectProperty(ObjectType.Overlay, PropertyType.ObjectReference, "OVLYS");
            AddObjectProperty(ObjectType.Overlay, PropertyType.ObjectReference, "MSPRITE");


            AddObjectProperty(ObjectType.Synonym, PropertyType.String, "NAME");
            AddObjectProperty(ObjectType.Synonym, PropertyType.String, "TYPE");
            AddObjectProperty(ObjectType.Synonym, PropertyType.ObjectReference, "DEFAULT");


            AddObjectProperty(ObjectType.Skill, PropertyType.String, "NAME");
            AddObjectProperty(ObjectType.Skill, PropertyType.Float, "VAL");
            AddObjectProperty(ObjectType.Skill, PropertyType.Float, "MIN");
            AddObjectProperty(ObjectType.Skill, PropertyType.Float, "MAX");


            AddObjectProperty(ObjectType.Region, PropertyType.String, "NAME");
            AddObjectProperty(ObjectType.Region, PropertyType.Float, "AMBIENT");
            AddObjectProperty(ObjectType.Region, PropertyType.Float, "FLOOR_HGT");
            AddObjectProperty(ObjectType.Region, PropertyType.Float, "CEIL_HGT");
            AddObjectProperty(ObjectType.Region, PropertyType.Flags, "FLAGS");
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, "BELOW");
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, "FLOOR_TEX");
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, "CEIL_TEX");
            AddObjectProperty(ObjectType.Region, PropertyType.Float, "SKILL1");
            AddObjectProperty(ObjectType.Region, PropertyType.Float, "SKILL2");
            AddObjectProperty(ObjectType.Region, PropertyType.Float, "SKILL3");
            AddObjectProperty(ObjectType.Region, PropertyType.Float, "SKILL4");
            AddObjectProperty(ObjectType.Region, PropertyType.Float, "SKILL5");
            AddObjectProperty(ObjectType.Region, PropertyType.Float, "SKILL6");
            AddObjectProperty(ObjectType.Region, PropertyType.Float, "SKILL7");
            AddObjectProperty(ObjectType.Region, PropertyType.Float, "SKILL8");
            AddObjectProperty(ObjectType.Region, PropertyType.Float, "FLOOR_OFFS_X");
            AddObjectProperty(ObjectType.Region, PropertyType.Float, "CEIL_OFFS_X");
            AddObjectProperty(ObjectType.Region, PropertyType.Float, "FLOOR_OFFS_Y");
            AddObjectProperty(ObjectType.Region, PropertyType.Float, "CEIL_OFFS_Y");
            AddObjectProperty(ObjectType.Region, PropertyType.ActionReference, "EACH_TICK");
            AddObjectProperty(ObjectType.Region, PropertyType.ActionReference, "IF_ENTER");
            AddObjectProperty(ObjectType.Region, PropertyType.ActionReference, "IF_DIVE");
            AddObjectProperty(ObjectType.Region, PropertyType.ActionReference, "IF_ARISE");


            AddObjectProperty(ObjectType.Wall, PropertyType.String, "NAME");
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, "AMBIENT");
            AddObjectProperty(ObjectType.Wall, PropertyType.ObjectReference, "TEXTURE");
            AddObjectProperty(ObjectType.Wall, PropertyType.Flags, "FLAGS");
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, "DIST");
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, "SKILL1");
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, "SKILL2");
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, "SKILL3");
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, "SKILL4");
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, "SKILL5");
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, "SKILL6");
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, "SKILL7");
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, "SKILL8");
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, "OFFSET_X");
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, "OFFSET_Y");
            AddObjectProperty(ObjectType.Wall, PropertyType.ActionReference, "EACH_TICK");


            AddObjectProperty(ObjectType.Texture, PropertyType.String, "NAME");
            AddObjectProperty(ObjectType.Texture, PropertyType.ScaleXY, "SCALE_XY");
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, "SCALE_X");
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, "SCALE_Y");
            AddObjectProperty(ObjectType.Texture, PropertyType.ObjectReferenceList, "BMAPS");
            AddObjectProperty(ObjectType.Texture, PropertyType.ObjectReference, "FLIC");
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, "POS_X");
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, "POS_Y");
            AddObjectProperty(ObjectType.Texture, PropertyType.Flags, "FLAGS");
            AddObjectProperty(ObjectType.Texture, PropertyType.FloatList, "DELAY");
            AddObjectProperty(ObjectType.Texture, PropertyType.FloatList, "MIRROR");
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, "SIDES");
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, "CYCLES");
            AddObjectProperty(ObjectType.Texture, PropertyType.ObjectReference, "ATTACH");
        }

        public void AddObjectProperty(ObjectType objectType, PropertyType propertyType, string property)
        {
            if (!PropertyDescriptors.TryGetValue(objectType, out var dictionary))
            {
                dictionary = new Dictionary<string, PropertyType>();
                PropertyDescriptors.Add(objectType, dictionary);
            }

            dictionary.Add(property, propertyType);
        }

        public PropertyType GetPropertyType(ObjectType objectType, string property)
        {
            if (PropertyDescriptors.TryGetValue(objectType, out var dictionary))
            {
                if (dictionary.TryGetValue(property, out var propertyType))
                {
                    return propertyType;
                }
            }
            Debug.LogWarning($"<color=#FFFF00>Uknown property type: [{objectType}.{property}]</color>");
            return PropertyType.Unknown;
        }
    }
}
