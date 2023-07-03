using NameId = System.UInt32;
using System.Collections.Generic;
using Acknex.Interfaces;
using UnityEngine;
using PropertyName = Acknex.Interfaces.PropertyName;

namespace Acknex
{
    public partial class World
    {
        public Dictionary<ObjectType, Dictionary<PropertyName, PropertyType>> PropertyDescriptors = new Dictionary<ObjectType, Dictionary<PropertyName, PropertyType>>();

        public void CreatePropertyDescriptors()
        {
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_LOAD);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_START);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_TICK_1);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_TICK_2);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_TICK_3);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_TICK_4);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_TICK_5);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_TICK_6);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_TICK_7);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_TICK_8);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_TICK_9);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_TICK_10);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_TICK_11);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_TICK_12);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_TICK_13);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_TICK_14);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_TICK_15);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_TICK_16);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_SEC_1);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_SEC_2);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_SEC_3);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_SEC_4);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_SEC_5);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_SEC_6);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_SEC_7);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_SEC_8);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_SEC_9);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_SEC_10);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_SEC_11);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_SEC_12);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_SEC_13);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_SEC_14);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_SEC_15);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.EACH_SEC_16);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_ANYKEY);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_TAST);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_0);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_1);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_2);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_3);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_4);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_5);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_6);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_7);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_8);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_9);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_A);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_B);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_C);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_D);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_E);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_F);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_G);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_H);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_I);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_J);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_K);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_L);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_M);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_N);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_O);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_P);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_Q);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_R);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_S);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_T);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_U);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_V);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_X);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_Y);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_Z);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_W);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_ALT);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_BKSP);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_CAL);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_CAR);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_CTRL);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_DEL);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_END);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_ENTER);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_ESC);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_F1);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_F2);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_F3);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_F4);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_F5);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_F6);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_F7);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_F8);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_F9);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_F10);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_F11);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_F12);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_HOME);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_INS);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_LEFT);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_MIDDLE);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_RIGHT);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_PAUSE);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_PGDN);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_PGUP);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_SPACE);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_TAB);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_CUU);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_CUD);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_CUR);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_CUL);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_APO);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_MINUS);
            AddObjectProperty(ObjectType.World, PropertyType.ActionReference, PropertyName.IF_PLUS);
            AddObjectProperty(ObjectType.World, PropertyType.Float, PropertyName.AMBIENT);
            AddObjectProperty(ObjectType.World, PropertyType.Float, PropertyName.LIGHT_ANGLE);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.MESSAGES_1);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.MESSAGES_2);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.MESSAGES_3);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.MESSAGES_4);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.MESSAGES_5);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.MESSAGES_6);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.MESSAGES_7);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.MESSAGES_8);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.MESSAGES_9);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.MESSAGES_10);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.MESSAGES_11);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.MESSAGES_12);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.MESSAGES_13);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.MESSAGES_14);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.MESSAGES_15);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.MESSAGES_16);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.PANELS_1);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.PANELS_2);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.PANELS_3);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.PANELS_4);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.PANELS_5);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.PANELS_6);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.PANELS_7);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.PANELS_8);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.PANELS_9);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.PANELS_10);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.PANELS_11);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.PANELS_12);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.PANELS_13);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.PANELS_14);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.PANELS_15);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.PANELS_16);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.LAYERS_1);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.LAYERS_2);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.LAYERS_3);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.LAYERS_4);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.LAYERS_5);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.LAYERS_6);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.LAYERS_7);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.LAYERS_8);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.LAYERS_9);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.LAYERS_10);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.LAYERS_11);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.LAYERS_12);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.LAYERS_13);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.LAYERS_14);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.LAYERS_15);
            AddObjectProperty(ObjectType.World, PropertyType.ObjectReference, PropertyName.LAYERS_16);
            AddObjectProperty(ObjectType.World, PropertyType.Float, PropertyName.CLIP_DIST);

            //AddObjectProperty(ObjectType.Thing, PropertyType.String, PropertyName.NAME);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.AMBIENT);
            AddObjectProperty(ObjectType.Thing, PropertyType.ObjectReference, PropertyName.TEXTURE);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.HEIGHT);
            AddObjectProperty(ObjectType.Thing, PropertyType.ObjectReference, PropertyName.ATTACH);
            AddObjectProperty(ObjectType.Thing, PropertyType.Flags, PropertyName.FLAGS);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.SPEED);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.VSPEED);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.ASPEED);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.WAYPOINT);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.DIST);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.SKILL1);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.SKILL2);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.SKILL3);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.SKILL4);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.SKILL5);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.SKILL6);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.SKILL7);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.SKILL8);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.FLAG1);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.FLAG2);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.FLAG3);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.FLAG4);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.FLAG5);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.FLAG6);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.FLAG7);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.FLAG8);
            AddObjectProperty(ObjectType.Thing, PropertyType.ActionReference, PropertyName.EACH_TICK);
            AddObjectProperty(ObjectType.Thing, PropertyType.ActionReference, PropertyName.EACH_CYCLE);
            AddObjectProperty(ObjectType.Thing, PropertyType.ActionReference, PropertyName.IF_ARRIVED);
            AddObjectProperty(ObjectType.Thing, PropertyType.ActionReference, PropertyName.IF_NEAR);
            AddObjectProperty(ObjectType.Thing, PropertyType.ActionReference, PropertyName.IF_FAR);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.ANGLE);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.X);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.Y);
            //AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.Z);
            AddObjectProperty(ObjectType.Thing, PropertyType.ObjectReference, PropertyName.REGION);
            AddObjectProperty(ObjectType.Thing, PropertyType.ObjectReference, PropertyName.TARGET);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.FLOOR_HGT);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.CEIL_HGT);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.DISTANCE);
            AddObjectProperty(ObjectType.Thing, PropertyType.ObjectReference, PropertyName.GENIUS);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.INVISIBLE);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.VISIBLE);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.PASSABLE);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.CAREFULLY);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.FRAGILE);
            AddObjectProperty(ObjectType.Thing, PropertyType.ActionReference, PropertyName.IF_HIT);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.OFFSET_X);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.OFFSET_Y);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.TRANSPARENT);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.GROUND);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.SENSITIVE);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.SIZE_X);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.SIZE_Y);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.TARGET_X);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.TARGET_Y);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.BERKELEY);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.IMMATERIAL);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.PLAY);
            AddObjectProperty(ObjectType.Thing, PropertyType.ActionReference, PropertyName.DO);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.LIBER);

            //AddObjectProperty(ObjectType.Overlay, PropertyType.String, PropertyName.NAME);
            AddObjectProperty(ObjectType.Overlay, PropertyType.Float, PropertyName.LAYER);
            AddObjectProperty(ObjectType.Overlay, PropertyType.Float, PropertyName.POS_X);
            AddObjectProperty(ObjectType.Overlay, PropertyType.Float, PropertyName.POS_Y);
            AddObjectProperty(ObjectType.Overlay, PropertyType.Float, PropertyName.SIZE_X);
            AddObjectProperty(ObjectType.Overlay, PropertyType.Float, PropertyName.SIZE_Y);
            AddObjectProperty(ObjectType.Overlay, PropertyType.Float, PropertyName.VISIBLE);
            AddObjectProperty(ObjectType.Overlay, PropertyType.Flags, PropertyName.FLAGS);
            AddObjectProperty(ObjectType.Overlay, PropertyType.ObjectReference, PropertyName.OVLYS);
            AddObjectProperty(ObjectType.Overlay, PropertyType.ObjectReference, PropertyName.MSPRITE);

            //AddObjectProperty(ObjectType.Synonym, PropertyType.String, PropertyName.NAME);
            AddObjectProperty(ObjectType.Synonym, PropertyType.String, PropertyName.TYPE);
            AddObjectProperty(ObjectType.Synonym, PropertyType.ObjectReference, PropertyName.DEFAULT);


            //AddObjectProperty(ObjectType.Skill, PropertyType.String, PropertyName.NAME);
            AddObjectProperty(ObjectType.Skill, PropertyType.Float, PropertyName.VAL);
            AddObjectProperty(ObjectType.Skill, PropertyType.Float, PropertyName.MIN);
            AddObjectProperty(ObjectType.Skill, PropertyType.Float, PropertyName.MAX);
            AddObjectProperty(ObjectType.Skill, PropertyType.String, PropertyName.TYPE);


            //AddObjectProperty(ObjectType.Region, PropertyType.String, PropertyName.NAME);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.AMBIENT);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.FLOOR_HGT);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.CEIL_HGT);
            AddObjectProperty(ObjectType.Region, PropertyType.Flags, PropertyName.FLAGS);
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, PropertyName.BELOW);
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, PropertyName.FLOOR_TEX);
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, PropertyName.CEIL_TEX);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.SKILL1);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.SKILL2);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.SKILL3);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.SKILL4);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.SKILL5);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.SKILL6);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.SKILL7);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.SKILL8);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.FLAG1);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.FLAG2);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.FLAG3);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.FLAG4);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.FLAG5);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.FLAG6);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.FLAG7);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.FLAG8);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.FLOOR_OFFS_X);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.CEIL_OFFS_X);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.FLOOR_OFFS_Y);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.CEIL_OFFS_Y);
            AddObjectProperty(ObjectType.Region, PropertyType.ActionReference, PropertyName.EACH_TICK);
            AddObjectProperty(ObjectType.Region, PropertyType.ActionReference, PropertyName.IF_ENTER);
            AddObjectProperty(ObjectType.Region, PropertyType.ActionReference, PropertyName.IF_LEAVE);
            AddObjectProperty(ObjectType.Region, PropertyType.ActionReference, PropertyName.IF_DIVE);
            AddObjectProperty(ObjectType.Region, PropertyType.ActionReference, PropertyName.IF_ARISE);
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, PropertyName.GENIUS);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.CLIP_DIST);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.CEIL_LIFTED);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.FLOOR_LIFTED);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.PLAY);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.VISIBLE);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.HERE);
            AddObjectProperty(ObjectType.Region, PropertyType.ActionReference, PropertyName.DO);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.CEIL_ASCEND);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.FLOOR_ASCEND);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.CEIL_DESCEND);
            AddObjectProperty(ObjectType.Region, PropertyType.Float, PropertyName.FLOOR_DESCEND);
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, PropertyName.TEXTURE1);
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, PropertyName.TEXTURE2);
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, PropertyName.TEXTURE3);
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, PropertyName.TEXTURE4);
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, PropertyName.TEXTURE5);
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, PropertyName.TEXTURE6);
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, PropertyName.TEXTURE7);
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, PropertyName.TEXTURE8);
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, PropertyName.TEXTURE9);
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, PropertyName.TEXTURE10);
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, PropertyName.TEXTURE11);
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, PropertyName.TEXTURE12);
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, PropertyName.TEXTURE13);
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, PropertyName.TEXTURE14);
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, PropertyName.TEXTURE15);
            AddObjectProperty(ObjectType.Region, PropertyType.ObjectReference, PropertyName.TEXTURE16);

            //AddObjectProperty(ObjectType.Wall, PropertyType.String, PropertyName.NAME);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.AMBIENT);
            AddObjectProperty(ObjectType.Wall, PropertyType.ObjectReference, PropertyName.TEXTURE);
            AddObjectProperty(ObjectType.Wall, PropertyType.Flags, PropertyName.FLAGS);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.DIST);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.SKILL1);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.SKILL2);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.SKILL3);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.SKILL4);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.SKILL5);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.SKILL6);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.SKILL7);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.SKILL8);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.FLAG1);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.FLAG2);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.FLAG3);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.FLAG4);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.FLAG5);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.FLAG6);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.FLAG7);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.FLAG8);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.OFFSET_X);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.OFFSET_Y);
            AddObjectProperty(ObjectType.Wall, PropertyType.ActionReference, PropertyName.EACH_TICK);
            AddObjectProperty(ObjectType.Wall, PropertyType.ActionReference, PropertyName.IF_NEAR);
            AddObjectProperty(ObjectType.Wall, PropertyType.ActionReference, PropertyName.IF_FAR);
            AddObjectProperty(ObjectType.Wall, PropertyType.ObjectReference, PropertyName.GENIUS);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.POSITION);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.FENCE);
            AddObjectProperty(ObjectType.Wall, PropertyType.ActionReference, PropertyName.IF_HIT);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.X1);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.Y1);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.Z1);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.X2);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.Y2);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.Z2);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.IMPASSABLE);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.PLAY);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.VISIBLE);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.PASSABLE);
            AddObjectProperty(ObjectType.Wall, PropertyType.Float, PropertyName.INVISIBLE);
            AddObjectProperty(ObjectType.Wall, PropertyType.ActionReference, PropertyName.DO);

            //AddObjectProperty(ObjectType.Texture, PropertyType.String, PropertyName.NAME);
            AddObjectProperty(ObjectType.Texture, PropertyType.ScaleXY, PropertyName.SCALE_XY);
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, PropertyName.SCALE_X);
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, PropertyName.SCALE_Y);
            AddObjectProperty(ObjectType.Texture, PropertyType.ObjectReferenceList, PropertyName.BMAPS);
            AddObjectProperty(ObjectType.Texture, PropertyType.ObjectReference, PropertyName.FLIC);
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, PropertyName.POS_X);
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, PropertyName.POS_Y);
            AddObjectProperty(ObjectType.Texture, PropertyType.Flags, PropertyName.FLAGS);
            AddObjectProperty(ObjectType.Texture, PropertyType.FloatList, PropertyName.DELAY);
            AddObjectProperty(ObjectType.Texture, PropertyType.FloatList, PropertyName.MIRROR);
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, PropertyName.SIDES);
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, PropertyName.CYCLES);
            AddObjectProperty(ObjectType.Texture, PropertyType.ObjectReference, PropertyName.ATTACH);
            AddObjectProperty(ObjectType.Texture, PropertyType.ObjectReference, PropertyName.MODEL);
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, PropertyName.AMBIENT);
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, PropertyName.ALBEDO);
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, PropertyName.SVOL);
            AddObjectProperty(ObjectType.Texture, PropertyType.ObjectReference, PropertyName.SOUND);
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, PropertyName.RADIANCE);
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, PropertyName.SVDIST);
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, PropertyName.SDIST);
            AddObjectProperty(ObjectType.Texture, PropertyType.FloatList, PropertyName.SCYCLES);
            AddObjectProperty(ObjectType.Texture, PropertyType.ObjectReference, PropertyName.BMAP);
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, PropertyName.RANDOM);
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, PropertyName.NO_CLIP);
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, PropertyName.CLIP);
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, PropertyName.DIAPHANOUS);
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, PropertyName.BEHIND);
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, PropertyName.SHADOW);
            AddObjectProperty(ObjectType.Texture, PropertyType.Float, PropertyName.SLOOP);

            AddObjectProperty(ObjectType.Text, PropertyType.Float, PropertyName.POS_X);
            AddObjectProperty(ObjectType.Text, PropertyType.Float, PropertyName.POS_Y);
            AddObjectProperty(ObjectType.Text, PropertyType.ObjectReferenceList, PropertyName.STRING);
            AddObjectProperty(ObjectType.Text, PropertyType.Float, PropertyName.STRINGS);
            AddObjectProperty(ObjectType.Text, PropertyType.Float, PropertyName.VISIBLE);
            AddObjectProperty(ObjectType.Text, PropertyType.Float, PropertyName.INDEX);
            AddObjectProperty(ObjectType.Text, PropertyType.ObjectReference, PropertyName.FONT);
            AddObjectProperty(ObjectType.Text, PropertyType.Float, PropertyName.SCALE_X);
            AddObjectProperty(ObjectType.Text, PropertyType.Float, PropertyName.SCALE_Y);
            AddObjectProperty(ObjectType.Text, PropertyType.Float, PropertyName.SIZE_X);
            AddObjectProperty(ObjectType.Text, PropertyType.Float, PropertyName.SIZE_Y);
            AddObjectProperty(ObjectType.Text, PropertyType.Float, PropertyName.OFFSET_Y);
            AddObjectProperty(ObjectType.Text, PropertyType.Float, PropertyName.LAYER);
            AddObjectProperty(ObjectType.Text, PropertyType.Float, PropertyName.CENTER_X);
            AddObjectProperty(ObjectType.Text, PropertyType.Float, PropertyName.CENTER_Y);
            AddObjectProperty(ObjectType.Text, PropertyType.Float, PropertyName.CONDENSED);
            AddObjectProperty(ObjectType.Text, PropertyType.Float, PropertyName.NARROW);

            AddObjectProperty(ObjectType.Panel, PropertyType.Float, PropertyName.POS_X);
            AddObjectProperty(ObjectType.Panel, PropertyType.Float, PropertyName.POS_Y);
            AddObjectProperty(ObjectType.Panel, PropertyType.Float, PropertyName.LAYER);
            AddObjectProperty(ObjectType.Panel, PropertyType.ObjectReference, PropertyName.PAN_MAP);
            AddObjectProperty(ObjectType.Panel, PropertyType.Flags, PropertyName.FLAGS);
            AddObjectProperty(ObjectType.Panel, PropertyType.ActionReference, PropertyName.IF_KLICK);
            AddObjectProperty(ObjectType.Panel, PropertyType.Float, PropertyName.REFRESH);
            
            //TODO: digits
            //TODO: picture
            //TODO: BUTTON
            //todo: VSLIDER
            //todo: HSLIDER
            //todo: VBAR
            //todo: HBAR
            //todo: WINDOW
            //todo: MSPRITE
            //todo: STRING

            AddObjectProperty(ObjectType.Palette, PropertyType.Flags, PropertyName.FLAGS);
            AddObjectProperty(ObjectType.Palette, PropertyType.Filename, PropertyName.PALFILE);
            AddObjectProperty(ObjectType.Palette, PropertyType.Range, PropertyName.RANGE);

            foreach (var properties in PropertyDescriptors[ObjectType.Thing])
            {
                AddObjectProperty(ObjectType.Actor, properties.Value, properties.Key);
            }

            AddObjectProperty(ObjectType.Actor, PropertyType.Float, PropertyName.ACTOR);
            AddObjectProperty(ObjectType.Thing, PropertyType.Float, PropertyName.THING);
        }

        public void AddObjectProperty(ObjectType objectType, PropertyType propertyType, PropertyName propertyName)
        {
            if (!PropertyDescriptors.TryGetValue(objectType, out var dictionary))
            {
                dictionary = new Dictionary<PropertyName, PropertyType>();
                PropertyDescriptors.Add(objectType, dictionary);
            }

            dictionary.Add(propertyName, propertyType);
        }

        public PropertyType GetPropertyType(ObjectType objectType, PropertyName propertyName, string filename = null, int line = 0)
        {
            if (PropertyDescriptors.TryGetValue(objectType, out var dictionary))
            {
                if (dictionary.TryGetValue(propertyName, out var propertyType))
                {
                    return propertyType;
                }
            }
            Debug.LogWarning($"<color=#FFFF00>Uknown property type: [{objectType}.{propertyName} at {filename}:{line}]</color>");
            return PropertyType.Unknown;
        }
    }
}
