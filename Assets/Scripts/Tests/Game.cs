﻿
using System;
using Acknex.Interfaces;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;
namespace Tests
{
    public class Game : IAcknexRuntime
    {
        private IAcknexWorld _world;
        private WaitForEndOfFrame _waitForEndOfFrame = new WaitForEndOfFrame();
        private Dictionary<string, Func<IAcknexObject, IAcknexObject, IEnumerator>> _callbacks = new Dictionary<string, Func<IAcknexObject, IAcknexObject, IEnumerator>>();
        public void SetWorld(IAcknexWorld world)
        {
            _world = world;
        }
        public IEnumerator CallAction(string name, IAcknexObject MY, IAcknexObject THERE)
        {
            if (name != null)
            {
                if (_callbacks.TryGetValue(name, out var callback))
                {
                    yield return callback(MY, THERE);
                }
            }
            yield break;
        }
        public Game()
        {
            _callbacks.Add("DISPLAYMESSAGE", DISPLAYMESSAGE);
            _callbacks.Add("CONTROLMESSAGEDISPLAY", CONTROLMESSAGEDISPLAY);
            _callbacks.Add("CONTROLUNDERWATERTIME", CONTROLUNDERWATERTIME);
            _callbacks.Add("VANISHSTOP", VANISHSTOP);
            _callbacks.Add("VANISHFORGOOD", VANISHFORGOOD);
            _callbacks.Add("LOCATEACTOR", LOCATEACTOR);
            _callbacks.Add("LOOKPLAYER", LOOKPLAYER);
            _callbacks.Add("PROBE", PROBE);
            _callbacks.Add("FOLLOWANGLE", FOLLOWANGLE);
            _callbacks.Add("REPELANGLE", REPELANGLE);
            _callbacks.Add("ACTORJUMP", ACTORJUMP);
            _callbacks.Add("ACTORJUMPSTOP", ACTORJUMPSTOP);
            _callbacks.Add("TURNLEFT", TURNLEFT);
            _callbacks.Add("TURNRIGHT", TURNRIGHT);
            _callbacks.Add("SHOWAMMO", SHOWAMMO);
            _callbacks.Add("DECAMMO", DECAMMO);
            _callbacks.Add("INNOCENTKILLED", INNOCENTKILLED);
            _callbacks.Add("DRILLHOLE", DRILLHOLE);
            _callbacks.Add("SHOWMAINMENU", SHOWMAINMENU);
            _callbacks.Add("SHOWSAVEMENU", SHOWSAVEMENU);
            _callbacks.Add("SHOWLOADMENU", SHOWLOADMENU);
            _callbacks.Add("SHOWSOUNDVOLUMEMENU", SHOWSOUNDVOLUMEMENU);
            _callbacks.Add("HIDEMENU", HIDEMENU);
            _callbacks.Add("MENUUP", MENUUP);
            _callbacks.Add("MENUDOWN", MENUDOWN);
            _callbacks.Add("SUBMENUUP", SUBMENUUP);
            _callbacks.Add("SUBMENUDOWN", SUBMENUDOWN);
            _callbacks.Add("VOLUMEUP", VOLUMEUP);
            _callbacks.Add("VOLUMEDOWN", VOLUMEDOWN);
            _callbacks.Add("HIDEWEAPON", HIDEWEAPON);
            _callbacks.Add("SHOWWEAPON", SHOWWEAPON);
            _callbacks.Add("TYPEGAME", TYPEGAME);
            _callbacks.Add("CHOOSEGAME", CHOOSEGAME);
            _callbacks.Add("CHOOSESUBMENU", CHOOSESUBMENU);
            _callbacks.Add("SAVEERRORMESSAGE", SAVEERRORMESSAGE);
            _callbacks.Add("EXITGAME", EXITGAME);
            _callbacks.Add("RESETANSWER", RESETANSWER);
            _callbacks.Add("ASKFOREXIT", ASKFOREXIT);
            _callbacks.Add("ENDOFLEVEL", ENDOFLEVEL);
            _callbacks.Add("EXPLOSIONSTART", EXPLOSIONSTART);
            _callbacks.Add("EXPLOSIONSMOKE", EXPLOSIONSMOKE);
            _callbacks.Add("EXPLOSIONEND", EXPLOSIONEND);
            _callbacks.Add("EXPLODETARGET", EXPLODETARGET);
            _callbacks.Add("EXPLODEMISSILE", EXPLODEMISSILE);
            _callbacks.Add("AIMMISSILE", AIMMISSILE);
            _callbacks.Add("IMPLOSIONSTART", IMPLOSIONSTART);
            _callbacks.Add("IMPLOSIONCRUSH", IMPLOSIONCRUSH);
            _callbacks.Add("IMPLOSIONFLARE", IMPLOSIONFLARE);
            _callbacks.Add("IMPLOSIONEND", IMPLOSIONEND);
            _callbacks.Add("IMPLODEPARTICLE", IMPLODEPARTICLE);
            _callbacks.Add("BEAMREACT", BEAMREACT);
            _callbacks.Add("LOCATEPARTICLE", LOCATEPARTICLE);
            _callbacks.Add("LOCATEPLAYERPARTICLE", LOCATEPLAYERPARTICLE);
            _callbacks.Add("TIMEOUTPARTICLE", TIMEOUTPARTICLE);
            _callbacks.Add("CHOOSEGRANADE", CHOOSEGRANADE);
            _callbacks.Add("CHOOSEMISSILE", CHOOSEMISSILE);
            _callbacks.Add("CHOOSEPARTICLE", CHOOSEPARTICLE);
            _callbacks.Add("CASTBLOOD", CASTBLOOD);
            _callbacks.Add("PICKUPMEDKIT", PICKUPMEDKIT);
            _callbacks.Add("PICKUPARMOUR", PICKUPARMOUR);
            _callbacks.Add("PICKUPMP5", PICKUPMP5);
            _callbacks.Add("PICKUPSTINGER", PICKUPSTINGER);
            _callbacks.Add("PICKUPQUANTUM", PICKUPQUANTUM);
            _callbacks.Add("PICKAMMO", PICKAMMO);
            _callbacks.Add("PICKGRANADE", PICKGRANADE);
            _callbacks.Add("PICKSTINGERAMMO", PICKSTINGERAMMO);
            _callbacks.Add("PICKQUANTUMAMMO", PICKQUANTUMAMMO);
            _callbacks.Add("FLASHREGION", FLASHREGION);
            _callbacks.Add("IMPLODELIGHT", IMPLODELIGHT);
            _callbacks.Add("BOUNCE", BOUNCE);
            _callbacks.Add("FREEFALL", FREEFALL);
            _callbacks.Add("EXPLOSIONTIMER", EXPLOSIONTIMER);
            _callbacks.Add("INIT_MOVE", INIT_MOVE);
            _callbacks.Add("MOVE_ME", MOVE_ME);
            _callbacks.Add("SET_WALKING", SET_WALKING);
            _callbacks.Add("SET_SWIMMING", SET_SWIMMING);
            _callbacks.Add("SET_DIVING", SET_DIVING);
            _callbacks.Add("SET_DEATH", SET_DEATH);
            _callbacks.Add("SET_MOVING", SET_MOVING);
            _callbacks.Add("STOP_MOVING", STOP_MOVING);
            _callbacks.Add("SET_BLUE", SET_BLUE);
            _callbacks.Add("RESET_BLUE", RESET_BLUE);
            _callbacks.Add("ENTER_WATER", ENTER_WATER);
            _callbacks.Add("LEAVE_WATER", LEAVE_WATER);
            _callbacks.Add("DIVE_UP", DIVE_UP);
            _callbacks.Add("REGIO_DIVE", REGIO_DIVE);
            _callbacks.Add("REGIO_ARISE", REGIO_ARISE);
            _callbacks.Add("HITPLAYER", HITPLAYER);
            _callbacks.Add("REDOUT", REDOUT);
            _callbacks.Add("REDIN", REDIN);
            _callbacks.Add("FLASHPLAYER", FLASHPLAYER);
            _callbacks.Add("FLASHOUT", FLASHOUT);
            _callbacks.Add("FLASHIN", FLASHIN);
            _callbacks.Add("HITPLAYERDELAY", HITPLAYERDELAY);
            _callbacks.Add("KILLPLAYER", KILLPLAYER);
            _callbacks.Add("FINISHPLAYER", FINISHPLAYER);
            _callbacks.Add("TOGGLEGODMODE", TOGGLEGODMODE);
            _callbacks.Add("SETCKEY", SETCKEY);
            _callbacks.Add("SETGKEY", SETGKEY);
            _callbacks.Add("SETOKEY", SETOKEY);
            _callbacks.Add("SETDKEY", SETDKEY);
            _callbacks.Add("FIRE", FIRE);
            _callbacks.Add("BURST", BURST);
            _callbacks.Add("THROW", THROW);
            _callbacks.Add("LAUNCH", LAUNCH);
            _callbacks.Add("BEAM", BEAM);
            _callbacks.Add("RAISE", RAISE);
            _callbacks.Add("LOWER", LOWER);
            _callbacks.Add("TARGETON", TARGETON);
            _callbacks.Add("TARGETOFF", TARGETOFF);
            _callbacks.Add("SELECTNONE", SELECTNONE);
            _callbacks.Add("SELECTTRICORDER", SELECTTRICORDER);
            _callbacks.Add("SELECTMP5", SELECTMP5);
            _callbacks.Add("SELECTMP5BURST", SELECTMP5BURST);
            _callbacks.Add("SELECTGRANADE", SELECTGRANADE);
            _callbacks.Add("SELECTSTINGER", SELECTSTINGER);
            _callbacks.Add("SELECTQUANTUM", SELECTQUANTUM);
            _callbacks.Add("ZOOMMAPIN", ZOOMMAPIN);
            _callbacks.Add("ZOOMMAPOUT", ZOOMMAPOUT);
            _callbacks.Add("SHOWPDABRIEFING", SHOWPDABRIEFING);
            _callbacks.Add("SHOWPDAGAMEOVER", SHOWPDAGAMEOVER);
            _callbacks.Add("PDAMESSAGEOFF", PDAMESSAGEOFF);
            _callbacks.Add("REPEATMUSIC", REPEATMUSIC);
            _callbacks.Add("SETSOUNDVOL", SETSOUNDVOL);
            _callbacks.Add("PICKKEY1", PICKKEY1);
            _callbacks.Add("PICKKEY2", PICKKEY2);
            _callbacks.Add("PICKKEY3", PICKKEY3);
            _callbacks.Add("SETSTALSOUND", SETSTALSOUND);
            _callbacks.Add("EXPLODEBIGEAR", EXPLODEBIGEAR);
            _callbacks.Add("MIBKTURN", MIBKTURN);
            _callbacks.Add("MIBKBACKOFF", MIBKBACKOFF);
            _callbacks.Add("MIBKWAIT", MIBKWAIT);
            _callbacks.Add("MIBKWANDER", MIBKWANDER);
            _callbacks.Add("MIBKSEARCH", MIBKSEARCH);
            _callbacks.Add("MIBKHIDE", MIBKHIDE);
            _callbacks.Add("MIBKLISTEN", MIBKLISTEN);
            _callbacks.Add("MIBKWARNING", MIBKWARNING);
            _callbacks.Add("MIBKLOOKFOR", MIBKLOOKFOR);
            _callbacks.Add("MIBKFOLLOW", MIBKFOLLOW);
            _callbacks.Add("MIBKFOLLOWATTACK", MIBKFOLLOWATTACK);
            _callbacks.Add("MIBKFOLLOWWARNING", MIBKFOLLOWWARNING);
            _callbacks.Add("MIBKAIM", MIBKAIM);
            _callbacks.Add("MIBKSHOOT", MIBKSHOOT);
            _callbacks.Add("MIBKESCAPE", MIBKESCAPE);
            _callbacks.Add("MIBKDEAD", MIBKDEAD);
            _callbacks.Add("MIBKDIE", MIBKDIE);
            _callbacks.Add("MIBKIMPLODE", MIBKIMPLODE);
            _callbacks.Add("MIBKHIT", MIBKHIT);
            _callbacks.Add("MIBKDROPKEY", MIBKDROPKEY);
            _callbacks.Add("CYCLEMIBKATTACK", CYCLEMIBKATTACK);
            _callbacks.Add("CYCLEMIBKHIDE", CYCLEMIBKHIDE);
            _callbacks.Add("CYCLEMIBKBACK", CYCLEMIBKBACK);
            _callbacks.Add("CYCLEMIBKSHOOT", CYCLEMIBKSHOOT);
            _callbacks.Add("CYCLEMIBKWARNING", CYCLEMIBKWARNING);
            _callbacks.Add("DEPTTURN", DEPTTURN);
            _callbacks.Add("DEPTWAIT", DEPTWAIT);
            _callbacks.Add("DEPTWANDER", DEPTWANDER);
            _callbacks.Add("DEPTHIDE", DEPTHIDE);
            _callbacks.Add("DEPTDEAD", DEPTDEAD);
            _callbacks.Add("DEPTDIE", DEPTDIE);
            _callbacks.Add("DEPTIMPLODE", DEPTIMPLODE);
            _callbacks.Add("DEPTHIT", DEPTHIT);
            _callbacks.Add("DEPTCYCLE", DEPTCYCLE);
            _callbacks.Add("DEPTSCREAM", DEPTSCREAM);
            _callbacks.Add("GIRLTURN", GIRLTURN);
            _callbacks.Add("GIRLWAIT", GIRLWAIT);
            _callbacks.Add("GIRLWANDER", GIRLWANDER);
            _callbacks.Add("GIRLHIDE", GIRLHIDE);
            _callbacks.Add("GIRLDEAD", GIRLDEAD);
            _callbacks.Add("GIRLDIE", GIRLDIE);
            _callbacks.Add("GIRLIMPLODE", GIRLIMPLODE);
            _callbacks.Add("GIRLHIT", GIRLHIT);
            _callbacks.Add("GIRLCYCLE", GIRLCYCLE);
            _callbacks.Add("GIRLSCREAM", GIRLSCREAM);
            _callbacks.Add("OBOYTURN", OBOYTURN);
            _callbacks.Add("OBOYWAIT", OBOYWAIT);
            _callbacks.Add("OBOYWANDER", OBOYWANDER);
            _callbacks.Add("OBOYHIDE", OBOYHIDE);
            _callbacks.Add("OBOYDEAD", OBOYDEAD);
            _callbacks.Add("OBOYDIE", OBOYDIE);
            _callbacks.Add("OBOYIMPLODE", OBOYIMPLODE);
            _callbacks.Add("OBOYHIT", OBOYHIT);
            _callbacks.Add("OBOYCYCLE", OBOYCYCLE);
            _callbacks.Add("OBOYSCREAM", OBOYSCREAM);
            _callbacks.Add("SETMIBINT", SETMIBINT);
            _callbacks.Add("DSRTWAIT", DSRTWAIT);
            _callbacks.Add("DSRTCALL", DSRTCALL);
            _callbacks.Add("DSRTNEAR", DSRTNEAR);
            _callbacks.Add("DSRTHIT", DSRTHIT);
            _callbacks.Add("CYCLEDSRT", CYCLEDSRT);
            _callbacks.Add("RESETDOOR", RESETDOOR);
            _callbacks.Add("OPENDOOR01", OPENDOOR01);
            _callbacks.Add("OPENDOOR02", OPENDOOR02);
            _callbacks.Add("OPENDOOR03", OPENDOOR03);
            _callbacks.Add("OPENDOOR04", OPENDOOR04);
            _callbacks.Add("MOVEDOOR", MOVEDOOR);
            _callbacks.Add("SETMADMIB", SETMADMIB);
            _callbacks.Add("PLAYPASSSOUND", PLAYPASSSOUND);
            _callbacks.Add("RESETPASSSOUND", RESETPASSSOUND);
            _callbacks.Add("FREEPASS", FREEPASS);
            _callbacks.Add("LOCKPASS", LOCKPASS);
            _callbacks.Add("UNLOCKPASS", UNLOCKPASS);
            _callbacks.Add("PLAYCALL", PLAYCALL);
            _callbacks.Add("ENTERFINALROOM", ENTERFINALROOM);
            _callbacks.Add("STARTLEVEL", STARTLEVEL);
            _callbacks.Add("FADEIN", FADEIN);
        }
        public IEnumerator DISPLAYMESSAGE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MESSAGE_TEXT_0 = _world.GetSynonymObject("MESSAGE_TEXT");
            var PANELTEXT_2 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            var PANELTEXT_2_array = PANELTEXT_2.GetObject<List<IAcknexObject>>("STRING");
            var PANELTEXT_2_index = PANELTEXT_2.GetInteger("INDEX");
            PANELTEXT_2_array[PANELTEXT_2_index - 1] = MESSAGE_TEXT_0;
            PANELTEXT_2.IsDirty = true;
            var PANELTEXT_3 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", PANELTEXT_3);
            var MSGSECCOUNT_7 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_7.SetFloat("VAL", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CONTROLMESSAGEDISPLAY(IAcknexObject MY, IAcknexObject THERE)
        {
            //Unknown keyword: LOCATE
            var GODCOUNTER_1 = _world.GetObject(ObjectType.Skill, "GODCOUNTER");
            var GODCOUNTER_1_val = GODCOUNTER_1.GetFloat("VAL");
            if (GODCOUNTER_1_val < 0f)
            {
                goto WATER;
            }
            var GODCOUNTER_3 = _world.GetObject(ObjectType.Skill, "GODCOUNTER");
            var GODCOUNTER_3_val = GODCOUNTER_3.GetFloat("VAL");
            if (GODCOUNTER_3_val > 0f)
            {
                goto DECGOD;
            }
            _world.AcknexObject.SetAcknexObject("IF_C", null);
            _world.AcknexObject.SetAcknexObject("IF_G", null);
            _world.AcknexObject.SetAcknexObject("IF_O", null);
            _world.AcknexObject.SetAcknexObject("IF_D", null);
            DECGOD:
            var GODCOUNTER_13 = _world.GetObject(ObjectType.Skill, "GODCOUNTER");
            var GODCOUNTER_13_val = GODCOUNTER_13.GetFloat("VAL");
            var GODCOUNTER_14 = _world.GetObject(ObjectType.Skill, "GODCOUNTER");
            GODCOUNTER_14.SetFloat("VAL", GODCOUNTER_13_val + -1f);
            WATER:
            var UNDERWATER_16 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            var UNDERWATER_16_val = UNDERWATER_16.GetFloat("VAL");
            if (UNDERWATER_16_val == 0f)
            {
                goto CONT;
            }
            var HERE_19 = _world.GetSynonymObject("HERE");
            var temp_20 = HERE_19?.GetAcknexObject("BELOW");
            if (temp_20 == null)
            {
                goto CONT;
            }
            {
                var enumerator = REGIO_ARISE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            CONT:
            var SHOTSECCOUNT_22 = _world.GetObject(ObjectType.Skill, "SHOTSECCOUNT");
            var SHOTSECCOUNT_22_val = SHOTSECCOUNT_22.GetFloat("VAL");
            if (SHOTSECCOUNT_22_val < 0f)
            {
                goto MESSAGE;
            }
            var SHOTSECCOUNT_24 = _world.GetObject(ObjectType.Skill, "SHOTSECCOUNT");
            var SHOTSECCOUNT_24_val = SHOTSECCOUNT_24.GetFloat("VAL");
            var SHOTSECCOUNT_25 = _world.GetObject(ObjectType.Skill, "SHOTSECCOUNT");
            SHOTSECCOUNT_25.SetFloat("VAL", SHOTSECCOUNT_24_val + 1f);
            var SHOTSECCOUNT_27 = _world.GetObject(ObjectType.Skill, "SHOTSECCOUNT");
            var SHOTSECCOUNT_27_val = SHOTSECCOUNT_27.GetFloat("VAL");
            if (SHOTSECCOUNT_27_val < 10f)
            {
                goto MESSAGE;
            }
            var SHOT_SOUND_ON_29 = _world.GetObject(ObjectType.Skill, "SHOT_SOUND_ON");
            SHOT_SOUND_ON_29.SetFloat("VAL", 0f);
            var SHOTSECCOUNT_31 = _world.GetObject(ObjectType.Skill, "SHOTSECCOUNT");
            SHOTSECCOUNT_31.SetFloat("VAL", -1f);
            MESSAGE:
            var MSGSECCOUNT_33 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            var MSGSECCOUNT_33_val = MSGSECCOUNT_33.GetFloat("VAL");
            if (MSGSECCOUNT_33_val < 0f)
            {
                yield break;
            }
            var MSGSECCOUNT_35 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            var MSGSECCOUNT_35_val = MSGSECCOUNT_35.GetFloat("VAL");
            var MSGSECCOUNT_36 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_36.SetFloat("VAL", MSGSECCOUNT_35_val + 1f);
            var MSGSECCOUNT_38 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            var MSGSECCOUNT_38_val = MSGSECCOUNT_38.GetFloat("VAL");
            if (MSGSECCOUNT_38_val < 10f)
            {
                yield break;
            }
            var MOVE_MODE_40 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            var MOVE_MODE_40_val = MOVE_MODE_40.GetFloat("VAL");
            if (MOVE_MODE_40_val > 0f)
            {
                goto CONTCOUNTER;
            }
            var MSGSECCOUNT_42 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_42.SetFloat("VAL", 10f);
            yield break;
            CONTCOUNTER:
            var BLANKSTR_43 = _world.AcknexObject.GetAcknexObject("BLANKSTR");
            var PANELTEXT_45 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            IAcknexObject temp_46;
            var temp_46_array = PANELTEXT_45?.GetObject<List<IAcknexObject>>("STRING");
            if (temp_46_array == null || temp_46_array.Count == 0)
            {
                temp_46 = null;
            }
            else
            {
                var temp_46_index = PANELTEXT_45.GetInteger("INDEX");
                temp_46 = temp_46_array[temp_46_index - 1];
            }
            if (temp_46 == BLANKSTR_43)
            {
                goto NULLMESSAGE;
            }
            var BLANKSTR_47 = _world.AcknexObject.GetAcknexObject("BLANKSTR");
            var PANELTEXT_49 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            var PANELTEXT_49_array = PANELTEXT_49.GetObject<List<IAcknexObject>>("STRING");
            var PANELTEXT_49_index = PANELTEXT_49.GetInteger("INDEX");
            PANELTEXT_49_array[PANELTEXT_49_index - 1] = BLANKSTR_47;
            PANELTEXT_49.IsDirty = true;
            var PANELTEXT_50 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", PANELTEXT_50);
            yield break;
            NULLMESSAGE:
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", null);
            var MSGSECCOUNT_57 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_57.SetFloat("VAL", -1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CONTROLUNDERWATERTIME(IAcknexObject MY, IAcknexObject THERE)
        {
            var UNDERWATER_1 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            var UNDERWATER_1_val = UNDERWATER_1.GetFloat("VAL");
            if (UNDERWATER_1_val > 0f)
            {
                goto GLUBGLUB;
            }
            var UNDERWATERSECCOUNT_3 = _world.GetObject(ObjectType.Skill, "UNDERWATERSECCOUNT");
            UNDERWATERSECCOUNT_3.SetFloat("VAL", -1f);
            yield break;
            GLUBGLUB:
            var UNDERWATERSECCOUNT_5 = _world.GetObject(ObjectType.Skill, "UNDERWATERSECCOUNT");
            var UNDERWATERSECCOUNT_5_val = UNDERWATERSECCOUNT_5.GetFloat("VAL");
            var UNDERWATERSECCOUNT_6 = _world.GetObject(ObjectType.Skill, "UNDERWATERSECCOUNT");
            UNDERWATERSECCOUNT_6.SetFloat("VAL", UNDERWATERSECCOUNT_5_val + 1f);
            var UNDERWATERSECCOUNT_8 = _world.GetObject(ObjectType.Skill, "UNDERWATERSECCOUNT");
            var UNDERWATERSECCOUNT_8_val = UNDERWATERSECCOUNT_8.GetFloat("VAL");
            if (UNDERWATERSECCOUNT_8_val < 20f)
            {
                yield break;
            }
            var PLAYER_RESULT_10 = _world.GetObject(ObjectType.Skill, "PLAYER_RESULT");
            PLAYER_RESULT_10.SetFloat("VAL", 2f);
            {
                var enumerator = HITPLAYER(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator VANISHSTOP(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat("SPEED", 0f);
            var MY_5 = MY;
            MY_5.SetFloat("CAREFULLY", 0f);
            var MY_8 = MY;
            MY_8.SetFloat("SKILL1", 10f);
            var MY_11 = MY;
            MY_11.SetAcknexObject("EACH_TICK", null);
            var MY_14 = MY;
            MY_14.SetFloat("INVISIBLE", 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator VANISHFORGOOD(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat("SPEED", 0f);
            var MY_5 = MY;
            MY_5.SetFloat("CAREFULLY", 0f);
            var MY_8 = MY;
            MY_8.SetFloat("SKILL1", 10f);
            var VANISHSTOP_9 = _world.AcknexObject.GetAcknexObject("VANISHSTOP");
            var MY_11 = MY;
            MY_11.SetAcknexObject("EACH_TICK", VANISHSTOP_9);
            var NULLTEXTURE_12 = _world.AcknexObject.GetAcknexObject("NULLTEXTURE");
            var MY_14 = MY;
            MY_14.SetAcknexObject("TEXTURE", NULLTEXTURE_12);
            var MY_17 = MY;
            MY_17.SetFloat("INVISIBLE", 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator LOCATEACTOR(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("GROUND");
            if (temp_3 == 0f)
            {
                goto CONT;
            }
            //Unknown keyword: LOCATE
            yield break;
            CONT:
            var MY_6 = MY;
            MY_6.SetFloat("HEIGHT", 0f);
            var MY_9 = MY;
            MY_9.SetFloat("GROUND", 1f);
            //Unknown keyword: LOCATE
            var MY_12 = MY;
            MY_12.SetFloat("GROUND", 0f);
            var MY_15 = MY;
            MY_15.SetFloat("HEIGHT", -0.05f);
            WATER:
            var MY_17 = MY;
            var temp_18 = MY_17?.GetAcknexObject("REGION");
            _world.SetSynonymObject("WATER_REGION", temp_18);
            var WATER_REGION_22 = _world.GetSynonymObject("WATER_REGION");
            var temp_23 = WATER_REGION_22?.GetAcknexObject("IF_DIVE");
            if (temp_23 == null)
            {
                yield break;
            }
            var MY_26 = MY;
            MY_26.SetFloat("HEIGHT", -2.5f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator LOOKPLAYER(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("DISTANCE");
            if (temp_3 > 200f)
            {
                goto NOTVISIBLE;
            }
            var DISTZ_4 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_5 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_5_val = DISTZ_5.GetFloat("VAL");
            var FLOOR_HGT_6 = _world.GetObject(ObjectType.Skill, "FLOOR_HGT");
            var FLOOR_HGT_6_val = FLOOR_HGT_6.GetFloat("VAL");
            var MY_9 = MY;
            var temp_10 = MY_9.GetFloat("FLOOR_HGT");
            DISTZ_4.SetFloat("VAL", FLOOR_HGT_6_val - temp_10);
            var DISTZ_12 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_12_val = DISTZ_12.GetFloat("VAL");
            if (DISTZ_12_val < -6f)
            {
                goto MAYBEVISIBLE;
            }
            var DISTZ_14 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_14_val = DISTZ_14.GetFloat("VAL");
            if (DISTZ_14_val > 6f)
            {
                goto MAYBEVISIBLE;
            }
            var SHOOT_SECTOR_16 = _world.GetObject(ObjectType.Skill, "SHOOT_SECTOR");
            SHOOT_SECTOR_16.SetFloat("VAL", 4f);
            var MY_19 = MY;
            var temp_20 = MY_19.GetFloat("DISTANCE");
            if (temp_20 < 20f)
            {
                var SHOOT_SECTOR_22 = _world.GetObject(ObjectType.Skill, "SHOOT_SECTOR");
                SHOOT_SECTOR_22.SetFloat("VAL", 6.28f);
            }
            var SHOOT_RANGE_24 = _world.GetObject(ObjectType.Skill, "SHOOT_RANGE");
            SHOOT_RANGE_24.SetFloat("VAL", 200f);
            var SHOOT_Y_26 = _world.GetObject(ObjectType.Skill, "SHOOT_Y");
            SHOOT_Y_26.SetFloat("VAL", 0f);
            var MY_27 = MY;
            _world.Shoot(MY_27, MY, THERE);
            var HIT_DIST_29 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_29_val = HIT_DIST_29.GetFloat("VAL");
            if (HIT_DIST_29_val == 0f)
            {
                goto NOTVISIBLE;
            }
            ISVISIBLE:
            var MY_32 = MY;
            MY_32.SetFloat("FLAG1", 1f);
            yield break;
            MAYBEVISIBLE:
            var MY_35 = MY;
            var temp_36 = MY_35.GetFloat("VISIBLE");
            if (temp_36 == 1f)
            {
                goto ISVISIBLE;
            }
            NOTVISIBLE:
            var MY_39 = MY;
            MY_39.SetFloat("FLAG1", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator PROBE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("SPEED");
            if (temp_3 < 0.05f)
            {
                yield break;
            }
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat("GROUND");
            if (temp_7 == 0f)
            {
                goto CONT;
            }
            //Unknown keyword: LOCATE
            yield break;
            CONT:
            var MY_10 = MY;
            MY_10.SetFloat("HEIGHT", -0.05f);
            WATER:
            var MY_12 = MY;
            var temp_13 = MY_12?.GetAcknexObject("REGION");
            _world.SetSynonymObject("WATER_REGION", temp_13);
            var WATER_REGION_17 = _world.GetSynonymObject("WATER_REGION");
            var temp_18 = WATER_REGION_17?.GetAcknexObject("IF_DIVE");
            if (temp_18 == null)
            {
                goto PROBELOOP;
            }
            var MY_21 = MY;
            MY_21.SetFloat("HEIGHT", -2.5f);
            PROBELOOP:
            var WATER_REGION_24 = _world.GetSynonymObject("WATER_REGION");
            var temp_25 = WATER_REGION_24.GetFloat("FLAG2");
            if (temp_25 == 1f)
            {
                {
                    var enumerator = VANISHFORGOOD(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            var WATER_REGION_28 = _world.GetSynonymObject("WATER_REGION");
            var temp_29 = WATER_REGION_28.GetFloat("FLAG1");
            if (temp_29 < 1f)
            {
                yield break;
            }
            var STEPCOUNTER_31 = _world.GetObject(ObjectType.Skill, "STEPCOUNTER");
            STEPCOUNTER_31.SetFloat("VAL", 0f);
            var MY_33 = MY;
            var temp_34 = MY_33.GetFloat("ANGLE");
            var ANGLEOUT_35 = _world.GetObject(ObjectType.Skill, "ANGLEOUT");
            ANGLEOUT_35.SetFloat("VAL", temp_34);
            PROBEAGAIN:
            var ANGLEOUT_36 = _world.GetObject(ObjectType.Skill, "ANGLEOUT");
            var ANGLEOUT_36_val = ANGLEOUT_36.GetFloat("VAL");
            var DISTY_37 = _world.GetObject(ObjectType.Skill, "DISTY");
            DISTY_37.SetFloat("VAL", MathUtils.Sin(ANGLEOUT_36_val));
            var DISTX_38 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_39 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_39_val = DISTX_39.GetFloat("VAL");
            var ANGLEOUT_40 = _world.GetObject(ObjectType.Skill, "ANGLEOUT");
            var ANGLEOUT_40_val = ANGLEOUT_40.GetFloat("VAL");
            var HALF_PI_42 = _world.GetObject(ObjectType.Skill, "HALF_PI");
            var HALF_PI_42_val = HALF_PI_42.GetFloat("VAL");
            DISTX_38.SetFloat("VAL", ANGLEOUT_40_val + HALF_PI_42_val);
            var DISTX_43 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_43_val = DISTX_43.GetFloat("VAL");
            var DISTX_44 = _world.GetObject(ObjectType.Skill, "DISTX");
            DISTX_44.SetFloat("VAL", MathUtils.Sin(DISTX_43_val));
            var PROBETNG_46 = _world.AcknexObject.GetAcknexObject("PROBETNG");
            var PROBETNG_48 = _world.AcknexObject.GetAcknexObject("PROBETNG");
            var temp_49 = PROBETNG_48.GetFloat("X");
            var MY_51 = MY;
            var temp_52 = MY_51.GetFloat("X");
            var DISTX_54 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_54_val = DISTX_54.GetFloat("VAL");
            PROBETNG_46.SetFloat("X", temp_52 + DISTX_54_val * 12f);
            var PROBETNG_58 = _world.AcknexObject.GetAcknexObject("PROBETNG");
            var PROBETNG_60 = _world.AcknexObject.GetAcknexObject("PROBETNG");
            var temp_61 = PROBETNG_60.GetFloat("Y");
            var MY_63 = MY;
            var temp_64 = MY_63.GetFloat("Y");
            var DISTY_66 = _world.GetObject(ObjectType.Skill, "DISTY");
            var DISTY_66_val = DISTY_66.GetFloat("VAL");
            PROBETNG_58.SetFloat("Y", temp_64 + DISTY_66_val * 12f);
            var PROBETNG_71 = _world.AcknexObject.GetAcknexObject("PROBETNG");
            PROBETNG_71.SetFloat("GROUND", 1f);
            var WATER_REGION_73 = _world.GetSynonymObject("WATER_REGION");
            var temp_74 = WATER_REGION_73.GetFloat("FLOOR_HGT");
            var PROBETNG_76 = _world.AcknexObject.GetAcknexObject("PROBETNG");
            PROBETNG_76.SetFloat("HEIGHT", temp_74);
            //Unknown keyword: LOCATE
            var PROBETNG_79 = _world.AcknexObject.GetAcknexObject("PROBETNG");
            PROBETNG_79.SetFloat("GROUND", 0f);
            var PROBETNG_81 = _world.AcknexObject.GetAcknexObject("PROBETNG");
            var temp_82 = PROBETNG_81?.GetAcknexObject("REGION");
            _world.SetSynonymObject("P_REGION", temp_82);
            var DISTZ_84 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_85 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_85_val = DISTZ_85.GetFloat("VAL");
            var P_REGION_87 = _world.GetSynonymObject("P_REGION");
            var temp_88 = P_REGION_87.GetFloat("FLOOR_HGT");
            var WATER_REGION_91 = _world.GetSynonymObject("WATER_REGION");
            var temp_92 = WATER_REGION_91.GetFloat("FLOOR_HGT");
            DISTZ_84.SetFloat("VAL", temp_88 - temp_92);
            var DISTZ_94 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_94_val = DISTZ_94.GetFloat("VAL");
            if (DISTZ_94_val > -1f)
            {
                goto END;
            }
            var STEPCOUNTER_96 = _world.GetObject(ObjectType.Skill, "STEPCOUNTER");
            var STEPCOUNTER_96_val = STEPCOUNTER_96.GetFloat("VAL");
            if (STEPCOUNTER_96_val > 11f)
            {
                goto END;
            }
            var ANGLESTEP_97 = _world.GetObject(ObjectType.Skill, "ANGLESTEP");
            var ANGLESTEP_98 = _world.GetObject(ObjectType.Skill, "ANGLESTEP");
            var ANGLESTEP_98_val = ANGLESTEP_98.GetFloat("VAL");
            var ANGLESTEP_100 = _world.GetObject(ObjectType.Skill, "ANGLESTEP");
            var ANGLESTEP_100_val = ANGLESTEP_100.GetFloat("VAL");
            ANGLESTEP_97.SetFloat("VAL", -ANGLESTEP_100_val);
            var ANGLESTEP_102 = _world.GetObject(ObjectType.Skill, "ANGLESTEP");
            var ANGLESTEP_102_val = ANGLESTEP_102.GetFloat("VAL");
            if (ANGLESTEP_102_val < 0f)
            {
                var STEPCOUNTER_104 = _world.GetObject(ObjectType.Skill, "STEPCOUNTER");
                var STEPCOUNTER_104_val = STEPCOUNTER_104.GetFloat("VAL");
                var STEPCOUNTER_105 = _world.GetObject(ObjectType.Skill, "STEPCOUNTER");
                STEPCOUNTER_105.SetFloat("VAL", STEPCOUNTER_104_val + 1f);
            }
            var ANGLEOUT_106 = _world.GetObject(ObjectType.Skill, "ANGLEOUT");
            var ANGLEOUT_107 = _world.GetObject(ObjectType.Skill, "ANGLEOUT");
            var ANGLEOUT_107_val = ANGLEOUT_107.GetFloat("VAL");
            var MY_109 = MY;
            var temp_110 = MY_109.GetFloat("ANGLE");
            var STEPCOUNTER_112 = _world.GetObject(ObjectType.Skill, "STEPCOUNTER");
            var STEPCOUNTER_112_val = STEPCOUNTER_112.GetFloat("VAL");
            var ANGLESTEP_114 = _world.GetObject(ObjectType.Skill, "ANGLESTEP");
            var ANGLESTEP_114_val = ANGLESTEP_114.GetFloat("VAL");
            ANGLEOUT_106.SetFloat("VAL", temp_110 + STEPCOUNTER_112_val * ANGLESTEP_114_val);
            goto PROBEAGAIN;
            END:
            var BULLET_115 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_117 = MY;
            MY_117.SetAcknexObject("TARGET", BULLET_115);
            var ANGLEOUT_118 = _world.GetObject(ObjectType.Skill, "ANGLEOUT");
            var ANGLEOUT_118_val = ANGLEOUT_118.GetFloat("VAL");
            var MY_120 = MY;
            MY_120.SetFloat("ANGLE", ANGLEOUT_118_val);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator FOLLOWANGLE(IAcknexObject MY, IAcknexObject THERE)
        {
            var DISTZ_0 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_1 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_1_val = DISTZ_1.GetFloat("VAL");
            var PLAYER_X_3 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_3_val = PLAYER_X_3.GetFloat("VAL");
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat("X");
            DISTZ_0.SetFloat("VAL", (PLAYER_X_3_val - temp_7));
            var DISTY_9 = _world.GetObject(ObjectType.Skill, "DISTY");
            var DISTY_10 = _world.GetObject(ObjectType.Skill, "DISTY");
            var DISTY_10_val = DISTY_10.GetFloat("VAL");
            var PLAYER_Y_12 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_12_val = PLAYER_Y_12.GetFloat("VAL");
            var MY_15 = MY;
            var temp_16 = MY_15.GetFloat("Y");
            DISTY_9.SetFloat("VAL", (PLAYER_Y_12_val - temp_16));
            var DISTX_18 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_19 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_19_val = DISTX_19.GetFloat("VAL");
            var DISTZ_21 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_21_val = DISTZ_21.GetFloat("VAL");
            var DISTZ_23 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_23_val = DISTZ_23.GetFloat("VAL");
            var DISTY_27 = _world.GetObject(ObjectType.Skill, "DISTY");
            var DISTY_27_val = DISTY_27.GetFloat("VAL");
            var DISTY_29 = _world.GetObject(ObjectType.Skill, "DISTY");
            var DISTY_29_val = DISTY_29.GetFloat("VAL");
            DISTX_18.SetFloat("VAL", (DISTZ_21_val * DISTZ_23_val) + (DISTY_27_val * DISTY_29_val));
            var DISTX_31 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_31_val = DISTX_31.GetFloat("VAL");
            var DISTX_32 = _world.GetObject(ObjectType.Skill, "DISTX");
            DISTX_32.SetFloat("VAL", MathUtils.Sqrt(DISTX_31_val));
            var DISTX_34 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_34_val = DISTX_34.GetFloat("VAL");
            if (DISTX_34_val < 0.1f)
            {
                yield break;
            }
            var DISTY_35 = _world.GetObject(ObjectType.Skill, "DISTY");
            var DISTY_36 = _world.GetObject(ObjectType.Skill, "DISTY");
            var DISTY_36_val = DISTY_36.GetFloat("VAL");
            var DISTY_37 = _world.GetObject(ObjectType.Skill, "DISTY");
            var DISTY_37_val = DISTY_37.GetFloat("VAL");
            var DISTX_39 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_39_val = DISTX_39.GetFloat("VAL");
            DISTY_35.SetFloat("VAL", DISTY_37_val / DISTX_39_val);
            var DISTY_40 = _world.GetObject(ObjectType.Skill, "DISTY");
            var DISTY_40_val = DISTY_40.GetFloat("VAL");
            var MY_42 = MY;
            MY_42.SetFloat("ANGLE", MathUtils.Asin(DISTY_40_val));
            var DISTZ_44 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_44_val = DISTZ_44.GetFloat("VAL");
            if (DISTZ_44_val > 0f)
            {
                yield break;
            }
            var MY_46 = MY;
            var MY_48 = MY;
            var temp_49 = MY_48.GetFloat("ANGLE");
            var PI_50 = _world.GetObject(ObjectType.Skill, "PI");
            var PI_50_val = PI_50.GetFloat("VAL");
            var MY_53 = MY;
            var temp_54 = MY_53.GetFloat("ANGLE");
            MY_46.SetFloat("ANGLE", PI_50_val - temp_54);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator REPELANGLE(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = FOLLOWANGLE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var PI_0 = _world.GetObject(ObjectType.Skill, "PI");
            var PI_0_val = PI_0.GetFloat("VAL");
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("ANGLE");
            var MY_5 = MY;
            MY_5.SetFloat("ANGLE", temp_3 + PI_0_val);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator ACTORJUMP(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("VSPEED");
            var MY_5 = MY;
            MY_5.SetFloat("VSPEED", temp_3 + (-0.1f * TimeUtils.TicksToTime(1)));
            var MY_7 = MY;
            var temp_8 = MY_7.GetFloat("FLOOR_HGT");
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat("HEIGHT");
            if (temp_11 > temp_8)
            {
                yield break;
            }
            var MY_14 = MY;
            MY_14.SetFloat("GROUND", 0f);
            var MY_17 = MY;
            MY_17.SetFloat("HEIGHT", -0.05f);
            var MY_20 = MY;
            MY_20.SetFloat("VSPEED", 0f);
            var MY_23 = MY;
            MY_23.SetAcknexObject("EACH_TICK", null);
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator ACTORJUMPSTOP(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("VSPEED");
            var MY_5 = MY;
            MY_5.SetFloat("VSPEED", temp_3 + -0.1f);
            var MY_7 = MY;
            var temp_8 = MY_7.GetFloat("FLOOR_HGT");
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat("HEIGHT");
            if (temp_11 > temp_8)
            {
                yield break;
            }
            var MY_14 = MY;
            MY_14.SetFloat("GROUND", 0f);
            var MY_17 = MY;
            MY_17.SetFloat("HEIGHT", -0.05f);
            var MY_20 = MY;
            MY_20.SetFloat("VSPEED", 0f);
            var MY_23 = MY;
            var temp_24 = MY_23.GetFloat("SPEED");
            var MY_26 = MY;
            MY_26.SetFloat("SPEED", temp_24 + -0.1f);
            var MY_29 = MY;
            var temp_30 = MY_29.GetFloat("ANGLE");
            var MY_32 = MY;
            MY_32.SetFloat("ANGLE", temp_30 + 0.05f);
            var MY_35 = MY;
            var temp_36 = MY_35.GetFloat("SPEED");
            if (temp_36 > 0.1f)
            {
                yield break;
            }
            var MY_39 = MY;
            MY_39.SetAcknexObject("EACH_TICK", null);
            var MY_42 = MY;
            MY_42.SetFloat("SPEED", 0f);
            var MY_45 = MY;
            MY_45.SetFloat("CAREFULLY", 0f);
            var MY_48 = MY;
            MY_48.SetAcknexObject("TARGET", null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator TURNLEFT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("ANGLE");
            var MY_5 = MY;
            MY_5.SetFloat("ANGLE", temp_3 + 0.524f);
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator TURNRIGHT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("ANGLE");
            var MY_5 = MY;
            MY_5.SetFloat("ANGLE", temp_3 + -0.524f);
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SHOWAMMO(IAcknexObject MY, IAcknexObject THERE)
        {
            var WEAPONSEL_1 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_1_val = WEAPONSEL_1.GetFloat("VAL");
            if (WEAPONSEL_1_val == 1f)
            {
                var AMMO_3 = _world.GetObject(ObjectType.Skill, "AMMO");
                AMMO_3.SetFloat("VAL", 0f);
            }
            var WEAPONSEL_5 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_5_val = WEAPONSEL_5.GetFloat("VAL");
            if (WEAPONSEL_5_val == 2f)
            {
                var AMMO_MP5_6 = _world.GetObject(ObjectType.Skill, "AMMO_MP5");
                var AMMO_MP5_6_val = AMMO_MP5_6.GetFloat("VAL");
                var AMMO_7 = _world.GetObject(ObjectType.Skill, "AMMO");
                AMMO_7.SetFloat("VAL", AMMO_MP5_6_val);
            }
            var WEAPONSEL_9 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_9_val = WEAPONSEL_9.GetFloat("VAL");
            if (WEAPONSEL_9_val == 3f)
            {
                var AMMO_GRANADE_10 = _world.GetObject(ObjectType.Skill, "AMMO_GRANADE");
                var AMMO_GRANADE_10_val = AMMO_GRANADE_10.GetFloat("VAL");
                var AMMO_11 = _world.GetObject(ObjectType.Skill, "AMMO");
                AMMO_11.SetFloat("VAL", AMMO_GRANADE_10_val);
            }
            var WEAPONSEL_13 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_13_val = WEAPONSEL_13.GetFloat("VAL");
            if (WEAPONSEL_13_val == 4f)
            {
                var AMMO_STINGER_14 = _world.GetObject(ObjectType.Skill, "AMMO_STINGER");
                var AMMO_STINGER_14_val = AMMO_STINGER_14.GetFloat("VAL");
                var AMMO_15 = _world.GetObject(ObjectType.Skill, "AMMO");
                AMMO_15.SetFloat("VAL", AMMO_STINGER_14_val);
            }
            var WEAPONSEL_17 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_17_val = WEAPONSEL_17.GetFloat("VAL");
            if (WEAPONSEL_17_val == 5f)
            {
                var AMMO_QUANTUM_18 = _world.GetObject(ObjectType.Skill, "AMMO_QUANTUM");
                var AMMO_QUANTUM_18_val = AMMO_QUANTUM_18.GetFloat("VAL");
                var AMMO_19 = _world.GetObject(ObjectType.Skill, "AMMO");
                AMMO_19.SetFloat("VAL", AMMO_QUANTUM_18_val);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DECAMMO(IAcknexObject MY, IAcknexObject THERE)
        {
            var WEAPONSEL_1 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_1_val = WEAPONSEL_1.GetFloat("VAL");
            if (WEAPONSEL_1_val == 1f)
            {
                var AMMO_3 = _world.GetObject(ObjectType.Skill, "AMMO");
                AMMO_3.SetFloat("VAL", 0f);
            }
            var WEAPONSEL_5 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_5_val = WEAPONSEL_5.GetFloat("VAL");
            if (WEAPONSEL_5_val == 2f)
            {
                var AMMO_6 = _world.GetObject(ObjectType.Skill, "AMMO");
                var AMMO_6_val = AMMO_6.GetFloat("VAL");
                var AMMO_MP5_7 = _world.GetObject(ObjectType.Skill, "AMMO_MP5");
                AMMO_MP5_7.SetFloat("VAL", AMMO_6_val);
            }
            var WEAPONSEL_9 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_9_val = WEAPONSEL_9.GetFloat("VAL");
            if (WEAPONSEL_9_val == 3f)
            {
                var AMMO_10 = _world.GetObject(ObjectType.Skill, "AMMO");
                var AMMO_10_val = AMMO_10.GetFloat("VAL");
                var AMMO_GRANADE_11 = _world.GetObject(ObjectType.Skill, "AMMO_GRANADE");
                AMMO_GRANADE_11.SetFloat("VAL", AMMO_10_val);
            }
            var WEAPONSEL_13 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_13_val = WEAPONSEL_13.GetFloat("VAL");
            if (WEAPONSEL_13_val == 4f)
            {
                var AMMO_14 = _world.GetObject(ObjectType.Skill, "AMMO");
                var AMMO_14_val = AMMO_14.GetFloat("VAL");
                var AMMO_STINGER_15 = _world.GetObject(ObjectType.Skill, "AMMO_STINGER");
                AMMO_STINGER_15.SetFloat("VAL", AMMO_14_val);
            }
            var WEAPONSEL_17 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_17_val = WEAPONSEL_17.GetFloat("VAL");
            if (WEAPONSEL_17_val == 5f)
            {
                var AMMO_18 = _world.GetObject(ObjectType.Skill, "AMMO");
                var AMMO_18_val = AMMO_18.GetFloat("VAL");
                var AMMO_QUANTUM_19 = _world.GetObject(ObjectType.Skill, "AMMO_QUANTUM");
                AMMO_QUANTUM_19.SetFloat("VAL", AMMO_18_val);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator INNOCENTKILLED(IAcknexObject MY, IAcknexObject THERE)
        {
            var INNOCENTS_1 = _world.GetObject(ObjectType.Skill, "INNOCENTS");
            var INNOCENTS_1_val = INNOCENTS_1.GetFloat("VAL");
            if (INNOCENTS_1_val > 2f)
            {
                yield break;
            }
            var INNOCENTS_3 = _world.GetObject(ObjectType.Skill, "INNOCENTS");
            var INNOCENTS_3_val = INNOCENTS_3.GetFloat("VAL");
            var INNOCENTS_4 = _world.GetObject(ObjectType.Skill, "INNOCENTS");
            INNOCENTS_4.SetFloat("VAL", INNOCENTS_3_val + 1f);
            var INNOCENTS_6 = _world.GetObject(ObjectType.Skill, "INNOCENTS");
            var INNOCENTS_6_val = INNOCENTS_6.GetFloat("VAL");
            if (INNOCENTS_6_val < 3f)
            {
                yield break;
            }
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)320f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PLAYER_HEALTH_9 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            var PLAYER_HEALTH_9_val = PLAYER_HEALTH_9.GetFloat("VAL");
            if (PLAYER_HEALTH_9_val > 5f)
            {
                goto CONT;
            }
            var INNOCENTS_11 = _world.GetObject(ObjectType.Skill, "INNOCENTS");
            INNOCENTS_11.SetFloat("VAL", 2f);
            yield break;
            CONT:
            var END01STR_12 = _world.AcknexObject.GetAcknexObject("END01STR");
            _world.SetSynonymObject("GAMEOVER_TEXT", END01STR_12);
            {
                var enumerator = SHOWPDAGAMEOVER(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator DRILLHOLE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("SKILL3");
            if (temp_3 == 0f)
            {
                yield break;
            }
            var MY_6 = MY;
            MY_6.SetFloat("SKILL3", 0f);
            var MY_8 = MY;
            var temp_9 = MY_8?.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("MY_TEX", temp_9);
            var HOLEX_11 = _world.GetObject(ObjectType.Skill, "HOLEX");
            var HOLEX_12 = _world.GetObject(ObjectType.Skill, "HOLEX");
            var HOLEX_12_val = HOLEX_12.GetFloat("VAL");
            var HIT_X_13 = _world.GetObject(ObjectType.Skill, "HIT_X");
            var HIT_X_13_val = HIT_X_13.GetFloat("VAL");
            var MY_TEX_19 = _world.GetSynonymObject("MY_TEX");
            var temp_20 = MY_TEX_19.GetFloat("SCALE_X");
            HOLEX_11.SetFloat("VAL", HIT_X_13_val - (5f * temp_20 / 48f));
            var HOLEY_24 = _world.GetObject(ObjectType.Skill, "HOLEY");
            var HOLEY_25 = _world.GetObject(ObjectType.Skill, "HOLEY");
            var HOLEY_25_val = HOLEY_25.GetFloat("VAL");
            var HIT_Y_26 = _world.GetObject(ObjectType.Skill, "HIT_Y");
            var HIT_Y_26_val = HIT_Y_26.GetFloat("VAL");
            var MY_TEX_32 = _world.GetSynonymObject("MY_TEX");
            var temp_33 = MY_TEX_32.GetFloat("SCALE_Y");
            HOLEY_24.SetFloat("VAL", HIT_Y_26_val - (5f * temp_33 / 48f));
            var MY_TEX_38 = _world.GetSynonymObject("MY_TEX");
            var temp_39 = MY_TEX_38.GetFloat("SCALE_Y");
            var DISTY_40 = _world.GetObject(ObjectType.Skill, "DISTY");
            DISTY_40.SetFloat("VAL", temp_39);
            var MY_43 = MY;
            var temp_44 = MY_43?.GetAcknexObject("ATTACH");
            if (temp_44 != null)
            {
                goto SECOND;
            }
            var MHL01TEX_45 = _world.AcknexObject.GetAcknexObject("MHL01TEX");
            var MY_47 = MY;
            MY_47.SetAcknexObject("ATTACH", MHL01TEX_45);
            var MY_49 = MY;
            var temp_50 = MY_49?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("MY_TEX", temp_50);
            var MY_TEX_54 = _world.GetSynonymObject("MY_TEX");
            MY_TEX_54.SetAcknexObject("ATTACH", null);
            LAST:
            var MY_TEX_56 = _world.GetSynonymObject("MY_TEX");
            var MY_TEX_58 = _world.GetSynonymObject("MY_TEX");
            var temp_59 = MY_TEX_58.GetFloat("POS_X");
            var HOLEX_60 = _world.GetObject(ObjectType.Skill, "HOLEX");
            var HOLEX_60_val = HOLEX_60.GetFloat("VAL");
            MY_TEX_56.SetFloat("POS_X", HOLEX_60_val);
            var MY_TEX_62 = _world.GetSynonymObject("MY_TEX");
            var MY_TEX_64 = _world.GetSynonymObject("MY_TEX");
            var temp_65 = MY_TEX_64.GetFloat("POS_Y");
            var HOLEY_66 = _world.GetObject(ObjectType.Skill, "HOLEY");
            var HOLEY_66_val = HOLEY_66.GetFloat("VAL");
            MY_TEX_62.SetFloat("POS_Y", HOLEY_66_val);
            yield break;
            SECOND:
            var MY_68 = MY;
            var temp_69 = MY_68?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("MY_TEX", temp_69);
            var MY_TEX_73 = _world.GetSynonymObject("MY_TEX");
            var temp_74 = MY_TEX_73?.GetAcknexObject("ATTACH");
            if (temp_74 != null)
            {
                goto THIRD;
            }
            var MHL02TEX_75 = _world.AcknexObject.GetAcknexObject("MHL02TEX");
            var MY_TEX_77 = _world.GetSynonymObject("MY_TEX");
            MY_TEX_77.SetAcknexObject("ATTACH", MHL02TEX_75);
            var MY_TEX_79 = _world.GetSynonymObject("MY_TEX");
            var temp_80 = MY_TEX_79?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("MY_TEX", temp_80);
            var MY_TEX_84 = _world.GetSynonymObject("MY_TEX");
            MY_TEX_84.SetAcknexObject("ATTACH", null);
            var MY_TEX_86 = _world.GetSynonymObject("MY_TEX");
            var MY_TEX_88 = _world.GetSynonymObject("MY_TEX");
            var temp_89 = MY_TEX_88.GetFloat("POS_X");
            var HOLEX_90 = _world.GetObject(ObjectType.Skill, "HOLEX");
            var HOLEX_90_val = HOLEX_90.GetFloat("VAL");
            MY_TEX_86.SetFloat("POS_X", HOLEX_90_val);
            var MY_TEX_92 = _world.GetSynonymObject("MY_TEX");
            var MY_TEX_94 = _world.GetSynonymObject("MY_TEX");
            var temp_95 = MY_TEX_94.GetFloat("POS_Y");
            var HOLEY_96 = _world.GetObject(ObjectType.Skill, "HOLEY");
            var HOLEY_96_val = HOLEY_96.GetFloat("VAL");
            MY_TEX_92.SetFloat("POS_Y", HOLEY_96_val);
            yield break;
            THIRD:
            var MY_TEX_98 = _world.GetSynonymObject("MY_TEX");
            var temp_99 = MY_TEX_98?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("MY_TEX", temp_99);
            var MY_TEX_103 = _world.GetSynonymObject("MY_TEX");
            var temp_104 = MY_TEX_103?.GetAcknexObject("ATTACH");
            if (temp_104 != null)
            {
                goto FOURTH;
            }
            var MHL03TEX_105 = _world.AcknexObject.GetAcknexObject("MHL03TEX");
            var MY_TEX_107 = _world.GetSynonymObject("MY_TEX");
            MY_TEX_107.SetAcknexObject("ATTACH", MHL03TEX_105);
            var MY_TEX_109 = _world.GetSynonymObject("MY_TEX");
            var temp_110 = MY_TEX_109?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("MY_TEX", temp_110);
            var MY_TEX_114 = _world.GetSynonymObject("MY_TEX");
            MY_TEX_114.SetAcknexObject("ATTACH", null);
            var MY_TEX_116 = _world.GetSynonymObject("MY_TEX");
            var MY_TEX_118 = _world.GetSynonymObject("MY_TEX");
            var temp_119 = MY_TEX_118.GetFloat("POS_X");
            var HOLEX_120 = _world.GetObject(ObjectType.Skill, "HOLEX");
            var HOLEX_120_val = HOLEX_120.GetFloat("VAL");
            MY_TEX_116.SetFloat("POS_X", HOLEX_120_val);
            var MY_TEX_122 = _world.GetSynonymObject("MY_TEX");
            var MY_TEX_124 = _world.GetSynonymObject("MY_TEX");
            var temp_125 = MY_TEX_124.GetFloat("POS_Y");
            var HOLEY_126 = _world.GetObject(ObjectType.Skill, "HOLEY");
            var HOLEY_126_val = HOLEY_126.GetFloat("VAL");
            MY_TEX_122.SetFloat("POS_Y", HOLEY_126_val);
            yield break;
            FOURTH:
            var MY_TEX_128 = _world.GetSynonymObject("MY_TEX");
            var temp_129 = MY_TEX_128?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("MY_TEX", temp_129);
            var MY_TEX_133 = _world.GetSynonymObject("MY_TEX");
            var temp_134 = MY_TEX_133?.GetAcknexObject("ATTACH");
            if (temp_134 != null)
            {
                goto FIFTH;
            }
            var MHL04TEX_135 = _world.AcknexObject.GetAcknexObject("MHL04TEX");
            var MY_TEX_137 = _world.GetSynonymObject("MY_TEX");
            MY_TEX_137.SetAcknexObject("ATTACH", MHL04TEX_135);
            var MY_TEX_139 = _world.GetSynonymObject("MY_TEX");
            var temp_140 = MY_TEX_139?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("MY_TEX", temp_140);
            var MY_TEX_144 = _world.GetSynonymObject("MY_TEX");
            MY_TEX_144.SetAcknexObject("ATTACH", null);
            var MY_TEX_146 = _world.GetSynonymObject("MY_TEX");
            var MY_TEX_148 = _world.GetSynonymObject("MY_TEX");
            var temp_149 = MY_TEX_148.GetFloat("POS_X");
            var HOLEX_150 = _world.GetObject(ObjectType.Skill, "HOLEX");
            var HOLEX_150_val = HOLEX_150.GetFloat("VAL");
            MY_TEX_146.SetFloat("POS_X", HOLEX_150_val);
            var MY_TEX_152 = _world.GetSynonymObject("MY_TEX");
            var MY_TEX_154 = _world.GetSynonymObject("MY_TEX");
            var temp_155 = MY_TEX_154.GetFloat("POS_Y");
            var HOLEY_156 = _world.GetObject(ObjectType.Skill, "HOLEY");
            var HOLEY_156_val = HOLEY_156.GetFloat("VAL");
            MY_TEX_152.SetFloat("POS_Y", HOLEY_156_val);
            yield break;
            FIFTH:
            var MY_TEX_158 = _world.GetSynonymObject("MY_TEX");
            var temp_159 = MY_TEX_158?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("MY_TEX", temp_159);
            var MY_TEX_163 = _world.GetSynonymObject("MY_TEX");
            var temp_164 = MY_TEX_163?.GetAcknexObject("ATTACH");
            if (temp_164 != null)
            {
                goto SIXTH;
            }
            var MHL05TEX_165 = _world.AcknexObject.GetAcknexObject("MHL05TEX");
            var MY_TEX_167 = _world.GetSynonymObject("MY_TEX");
            MY_TEX_167.SetAcknexObject("ATTACH", MHL05TEX_165);
            var MY_TEX_169 = _world.GetSynonymObject("MY_TEX");
            var temp_170 = MY_TEX_169?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("MY_TEX", temp_170);
            var MY_TEX_174 = _world.GetSynonymObject("MY_TEX");
            MY_TEX_174.SetAcknexObject("ATTACH", null);
            var MY_TEX_176 = _world.GetSynonymObject("MY_TEX");
            var MY_TEX_178 = _world.GetSynonymObject("MY_TEX");
            var temp_179 = MY_TEX_178.GetFloat("POS_X");
            var HOLEX_180 = _world.GetObject(ObjectType.Skill, "HOLEX");
            var HOLEX_180_val = HOLEX_180.GetFloat("VAL");
            MY_TEX_176.SetFloat("POS_X", HOLEX_180_val);
            var MY_TEX_182 = _world.GetSynonymObject("MY_TEX");
            var MY_TEX_184 = _world.GetSynonymObject("MY_TEX");
            var temp_185 = MY_TEX_184.GetFloat("POS_Y");
            var HOLEY_186 = _world.GetObject(ObjectType.Skill, "HOLEY");
            var HOLEY_186_val = HOLEY_186.GetFloat("VAL");
            MY_TEX_182.SetFloat("POS_Y", HOLEY_186_val);
            yield break;
            SIXTH:
            var MY_TEX_188 = _world.GetSynonymObject("MY_TEX");
            var temp_189 = MY_TEX_188?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("MY_TEX", temp_189);
            var MY_TEX_193 = _world.GetSynonymObject("MY_TEX");
            var temp_194 = MY_TEX_193?.GetAcknexObject("ATTACH");
            if (temp_194 != null)
            {
                goto SEVENTH;
            }
            var MHL06TEX_195 = _world.AcknexObject.GetAcknexObject("MHL06TEX");
            var MY_TEX_197 = _world.GetSynonymObject("MY_TEX");
            MY_TEX_197.SetAcknexObject("ATTACH", MHL06TEX_195);
            var MY_TEX_199 = _world.GetSynonymObject("MY_TEX");
            var temp_200 = MY_TEX_199?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("MY_TEX", temp_200);
            var MY_TEX_204 = _world.GetSynonymObject("MY_TEX");
            MY_TEX_204.SetAcknexObject("ATTACH", null);
            var MY_TEX_206 = _world.GetSynonymObject("MY_TEX");
            var MY_TEX_208 = _world.GetSynonymObject("MY_TEX");
            var temp_209 = MY_TEX_208.GetFloat("POS_X");
            var HOLEX_210 = _world.GetObject(ObjectType.Skill, "HOLEX");
            var HOLEX_210_val = HOLEX_210.GetFloat("VAL");
            MY_TEX_206.SetFloat("POS_X", HOLEX_210_val);
            var MY_TEX_212 = _world.GetSynonymObject("MY_TEX");
            var MY_TEX_214 = _world.GetSynonymObject("MY_TEX");
            var temp_215 = MY_TEX_214.GetFloat("POS_Y");
            var HOLEY_216 = _world.GetObject(ObjectType.Skill, "HOLEY");
            var HOLEY_216_val = HOLEY_216.GetFloat("VAL");
            MY_TEX_212.SetFloat("POS_Y", HOLEY_216_val);
            yield break;
            SEVENTH:
            var MY_TEX_218 = _world.GetSynonymObject("MY_TEX");
            var temp_219 = MY_TEX_218?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("MY_TEX", temp_219);
            var MY_TEX_223 = _world.GetSynonymObject("MY_TEX");
            var temp_224 = MY_TEX_223?.GetAcknexObject("ATTACH");
            if (temp_224 != null)
            {
                goto EIGHTH;
            }
            var MHL07TEX_225 = _world.AcknexObject.GetAcknexObject("MHL07TEX");
            var MY_TEX_227 = _world.GetSynonymObject("MY_TEX");
            MY_TEX_227.SetAcknexObject("ATTACH", MHL07TEX_225);
            var MY_TEX_229 = _world.GetSynonymObject("MY_TEX");
            var temp_230 = MY_TEX_229?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("MY_TEX", temp_230);
            var MY_TEX_234 = _world.GetSynonymObject("MY_TEX");
            MY_TEX_234.SetAcknexObject("ATTACH", null);
            var MY_TEX_236 = _world.GetSynonymObject("MY_TEX");
            var MY_TEX_238 = _world.GetSynonymObject("MY_TEX");
            var temp_239 = MY_TEX_238.GetFloat("POS_X");
            var HOLEX_240 = _world.GetObject(ObjectType.Skill, "HOLEX");
            var HOLEX_240_val = HOLEX_240.GetFloat("VAL");
            MY_TEX_236.SetFloat("POS_X", HOLEX_240_val);
            var MY_TEX_242 = _world.GetSynonymObject("MY_TEX");
            var MY_TEX_244 = _world.GetSynonymObject("MY_TEX");
            var temp_245 = MY_TEX_244.GetFloat("POS_Y");
            var HOLEY_246 = _world.GetObject(ObjectType.Skill, "HOLEY");
            var HOLEY_246_val = HOLEY_246.GetFloat("VAL");
            MY_TEX_242.SetFloat("POS_Y", HOLEY_246_val);
            yield break;
            EIGHTH:
            var MY_TEX_248 = _world.GetSynonymObject("MY_TEX");
            var temp_249 = MY_TEX_248?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("MY_TEX", temp_249);
            var MY_TEX_253 = _world.GetSynonymObject("MY_TEX");
            var temp_254 = MY_TEX_253?.GetAcknexObject("ATTACH");
            if (temp_254 != null)
            {
                goto NINETH;
            }
            var MHL08TEX_255 = _world.AcknexObject.GetAcknexObject("MHL08TEX");
            var MY_TEX_257 = _world.GetSynonymObject("MY_TEX");
            MY_TEX_257.SetAcknexObject("ATTACH", MHL08TEX_255);
            var MY_TEX_259 = _world.GetSynonymObject("MY_TEX");
            var temp_260 = MY_TEX_259?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("MY_TEX", temp_260);
            var MY_TEX_264 = _world.GetSynonymObject("MY_TEX");
            MY_TEX_264.SetAcknexObject("ATTACH", null);
            var MY_TEX_266 = _world.GetSynonymObject("MY_TEX");
            var MY_TEX_268 = _world.GetSynonymObject("MY_TEX");
            var temp_269 = MY_TEX_268.GetFloat("POS_X");
            var HOLEX_270 = _world.GetObject(ObjectType.Skill, "HOLEX");
            var HOLEX_270_val = HOLEX_270.GetFloat("VAL");
            MY_TEX_266.SetFloat("POS_X", HOLEX_270_val);
            var MY_TEX_272 = _world.GetSynonymObject("MY_TEX");
            var MY_TEX_274 = _world.GetSynonymObject("MY_TEX");
            var temp_275 = MY_TEX_274.GetFloat("POS_Y");
            var HOLEY_276 = _world.GetObject(ObjectType.Skill, "HOLEY");
            var HOLEY_276_val = HOLEY_276.GetFloat("VAL");
            MY_TEX_272.SetFloat("POS_Y", HOLEY_276_val);
            yield break;
            NINETH:
            var MY_TEX_278 = _world.GetSynonymObject("MY_TEX");
            var temp_279 = MY_TEX_278?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("MY_TEX", temp_279);
            var MY_TEX_283 = _world.GetSynonymObject("MY_TEX");
            var temp_284 = MY_TEX_283?.GetAcknexObject("ATTACH");
            if (temp_284 != null)
            {
                goto TENTH;
            }
            var MHL09TEX_285 = _world.AcknexObject.GetAcknexObject("MHL09TEX");
            var MY_TEX_287 = _world.GetSynonymObject("MY_TEX");
            MY_TEX_287.SetAcknexObject("ATTACH", MHL09TEX_285);
            var MY_TEX_289 = _world.GetSynonymObject("MY_TEX");
            var temp_290 = MY_TEX_289?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("MY_TEX", temp_290);
            var MY_TEX_294 = _world.GetSynonymObject("MY_TEX");
            MY_TEX_294.SetAcknexObject("ATTACH", null);
            var MY_TEX_296 = _world.GetSynonymObject("MY_TEX");
            var MY_TEX_298 = _world.GetSynonymObject("MY_TEX");
            var temp_299 = MY_TEX_298.GetFloat("POS_X");
            var HOLEX_300 = _world.GetObject(ObjectType.Skill, "HOLEX");
            var HOLEX_300_val = HOLEX_300.GetFloat("VAL");
            MY_TEX_296.SetFloat("POS_X", HOLEX_300_val);
            var MY_TEX_302 = _world.GetSynonymObject("MY_TEX");
            var MY_TEX_304 = _world.GetSynonymObject("MY_TEX");
            var temp_305 = MY_TEX_304.GetFloat("POS_Y");
            var HOLEY_306 = _world.GetObject(ObjectType.Skill, "HOLEY");
            var HOLEY_306_val = HOLEY_306.GetFloat("VAL");
            MY_TEX_302.SetFloat("POS_Y", HOLEY_306_val);
            yield break;
            TENTH:
            var MY_TEX_308 = _world.GetSynonymObject("MY_TEX");
            var temp_309 = MY_TEX_308?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("MY_TEX", temp_309);
            var MY_TEX_313 = _world.GetSynonymObject("MY_TEX");
            var temp_314 = MY_TEX_313?.GetAcknexObject("ATTACH");
            if (temp_314 != null)
            {
                goto LAST;
            }
            var MHL10TEX_315 = _world.AcknexObject.GetAcknexObject("MHL10TEX");
            var MY_TEX_317 = _world.GetSynonymObject("MY_TEX");
            MY_TEX_317.SetAcknexObject("ATTACH", MHL10TEX_315);
            var MY_TEX_319 = _world.GetSynonymObject("MY_TEX");
            var temp_320 = MY_TEX_319?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("MY_TEX", temp_320);
            var MY_TEX_324 = _world.GetSynonymObject("MY_TEX");
            MY_TEX_324.SetAcknexObject("ATTACH", null);
            var MY_TEX_326 = _world.GetSynonymObject("MY_TEX");
            var MY_TEX_328 = _world.GetSynonymObject("MY_TEX");
            var temp_329 = MY_TEX_328.GetFloat("POS_X");
            var HOLEX_330 = _world.GetObject(ObjectType.Skill, "HOLEX");
            var HOLEX_330_val = HOLEX_330.GetFloat("VAL");
            MY_TEX_326.SetFloat("POS_X", HOLEX_330_val);
            var MY_TEX_332 = _world.GetSynonymObject("MY_TEX");
            var MY_TEX_334 = _world.GetSynonymObject("MY_TEX");
            var temp_335 = MY_TEX_334.GetFloat("POS_Y");
            var HOLEY_336 = _world.GetObject(ObjectType.Skill, "HOLEY");
            var HOLEY_336_val = HOLEY_336.GetFloat("VAL");
            MY_TEX_332.SetFloat("POS_Y", HOLEY_336_val);
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SHOWMAINMENU(IAcknexObject MY, IAcknexObject THERE)
        {
            WAITING:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var temp_3 = _world.AcknexObject?.GetAcknexObject("IF_2");
            if (temp_3 == null)
            {
                goto WAITING;
            }
            var GUNFIRING_5 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            var GUNFIRING_5_val = GUNFIRING_5.GetFloat("VAL");
            if (GUNFIRING_5_val == 1f)
            {
                goto WAITING;
            }
            var BLACK_6 = _world.AcknexObject.GetAcknexObject("BLACK");
            _world.FadePal(BLACK_6, 0.4f);
            var BIP03SND_8 = _world.AcknexObject.GetAcknexObject("BIP03SND");
            _world.PlaySound(BIP03SND_8, 0.5f, null);
            var HIDEMENU_10 = _world.AcknexObject.GetAcknexObject("HIDEMENU");
            _world.AcknexObject.SetAcknexObject("IF_ESC", HIDEMENU_10);
            var MOVE_MODE_13 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_13.SetFloat("VAL", -0.5f);
            var MAXMENUITEM_15 = _world.GetObject(ObjectType.Skill, "MAXMENUITEM");
            MAXMENUITEM_15.SetFloat("VAL", 4f);
            var MENUUP_16 = _world.AcknexObject.GetAcknexObject("MENUUP");
            _world.AcknexObject.SetAcknexObject("IF_CUU", MENUUP_16);
            var MENUDOWN_18 = _world.AcknexObject.GetAcknexObject("MENUDOWN");
            _world.AcknexObject.SetAcknexObject("IF_CUD", MENUDOWN_18);
            var MENUUP_20 = _world.AcknexObject.GetAcknexObject("MENUUP");
            _world.AcknexObject.SetAcknexObject("IF_CUR", MENUUP_20);
            var MENUDOWN_22 = _world.AcknexObject.GetAcknexObject("MENUDOWN");
            _world.AcknexObject.SetAcknexObject("IF_CUL", MENUDOWN_22);
            {
                var enumerator = HIDEWEAPON(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var CHOOSESUBMENU_24 = _world.AcknexObject.GetAcknexObject("CHOOSESUBMENU");
            _world.AcknexObject.SetAcknexObject("IF_ENTER", CHOOSESUBMENU_24);
            var MENUPANEL_26 = _world.AcknexObject.GetAcknexObject("MENUPANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.16", MENUPANEL_26);
            var MAINMENUTEXT_29 = _world.AcknexObject.GetAcknexObject("MAINMENUTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", MAINMENUTEXT_29);
            var HLP01STR_32 = _world.AcknexObject.GetAcknexObject("HLP01STR");
            _world.SetSynonymObject("MESSAGE_TEXT", HLP01STR_32);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator SHOWSAVEMENU(IAcknexObject MY, IAcknexObject THERE)
        {
            var HIDEMENU_0 = _world.AcknexObject.GetAcknexObject("HIDEMENU");
            _world.AcknexObject.SetAcknexObject("IF_ESC", HIDEMENU_0);
            var MOVE_MODE_3 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_3.SetFloat("VAL", -0.5f);
            var MAXMENUITEM_5 = _world.GetObject(ObjectType.Skill, "MAXMENUITEM");
            MAXMENUITEM_5.SetFloat("VAL", 4f);
            var SUBMENUUP_6 = _world.AcknexObject.GetAcknexObject("SUBMENUUP");
            _world.AcknexObject.SetAcknexObject("IF_CUU", SUBMENUUP_6);
            var SUBMENUDOWN_8 = _world.AcknexObject.GetAcknexObject("SUBMENUDOWN");
            _world.AcknexObject.SetAcknexObject("IF_CUD", SUBMENUDOWN_8);
            var SUBMENUUP_10 = _world.AcknexObject.GetAcknexObject("SUBMENUUP");
            _world.AcknexObject.SetAcknexObject("IF_CUR", SUBMENUUP_10);
            var SUBMENUDOWN_12 = _world.AcknexObject.GetAcknexObject("SUBMENUDOWN");
            _world.AcknexObject.SetAcknexObject("IF_CUL", SUBMENUDOWN_12);
            //Unknown keyword: SAVE_INFO
            //Unknown keyword: LOAD_INFO
            //Unknown keyword: SET_STRING
            //Unknown keyword: SET_STRING
            //Unknown keyword: SET_STRING
            //Unknown keyword: SET_STRING
            //Unknown keyword: LOAD_INFO
            //Unknown keyword: SET_STRING
            //Unknown keyword: SET_STRING
            //Unknown keyword: SET_STRING
            //Unknown keyword: SET_STRING
            var BIP02SND_14 = _world.AcknexObject.GetAcknexObject("BIP02SND");
            _world.PlaySound(BIP02SND_14, 0.5f, null);
            var LOADSAVETEXT_18 = _world.AcknexObject.GetAcknexObject("LOADSAVETEXT");
            LOADSAVETEXT_18.SetFloat("INDEX", 1f);
            var SAVEDGAME01_19 = _world.AcknexObject.GetAcknexObject("SAVEDGAME01");
            var LOADSAVETEXT_21 = _world.AcknexObject.GetAcknexObject("LOADSAVETEXT");
            var LOADSAVETEXT_21_array = LOADSAVETEXT_21.GetObject<List<IAcknexObject>>("STRING");
            var LOADSAVETEXT_21_index = LOADSAVETEXT_21.GetInteger("INDEX");
            LOADSAVETEXT_21_array[LOADSAVETEXT_21_index - 1] = SAVEDGAME01_19;
            LOADSAVETEXT_21.IsDirty = true;
            var LOADSAVETEXT_24 = _world.AcknexObject.GetAcknexObject("LOADSAVETEXT");
            LOADSAVETEXT_24.SetFloat("INDEX", 2f);
            var SAVEDGAME02_25 = _world.AcknexObject.GetAcknexObject("SAVEDGAME02");
            var LOADSAVETEXT_27 = _world.AcknexObject.GetAcknexObject("LOADSAVETEXT");
            var LOADSAVETEXT_27_array = LOADSAVETEXT_27.GetObject<List<IAcknexObject>>("STRING");
            var LOADSAVETEXT_27_index = LOADSAVETEXT_27.GetInteger("INDEX");
            LOADSAVETEXT_27_array[LOADSAVETEXT_27_index - 1] = SAVEDGAME02_25;
            LOADSAVETEXT_27.IsDirty = true;
            var LOADSAVETEXT_30 = _world.AcknexObject.GetAcknexObject("LOADSAVETEXT");
            LOADSAVETEXT_30.SetFloat("INDEX", 3f);
            var SAVEDGAME03_31 = _world.AcknexObject.GetAcknexObject("SAVEDGAME03");
            var LOADSAVETEXT_33 = _world.AcknexObject.GetAcknexObject("LOADSAVETEXT");
            var LOADSAVETEXT_33_array = LOADSAVETEXT_33.GetObject<List<IAcknexObject>>("STRING");
            var LOADSAVETEXT_33_index = LOADSAVETEXT_33.GetInteger("INDEX");
            LOADSAVETEXT_33_array[LOADSAVETEXT_33_index - 1] = SAVEDGAME03_31;
            LOADSAVETEXT_33.IsDirty = true;
            var LOADSAVETEXT_36 = _world.AcknexObject.GetAcknexObject("LOADSAVETEXT");
            LOADSAVETEXT_36.SetFloat("INDEX", 4f);
            var SAVEDGAME04_37 = _world.AcknexObject.GetAcknexObject("SAVEDGAME04");
            var LOADSAVETEXT_39 = _world.AcknexObject.GetAcknexObject("LOADSAVETEXT");
            var LOADSAVETEXT_39_array = LOADSAVETEXT_39.GetObject<List<IAcknexObject>>("STRING");
            var LOADSAVETEXT_39_index = LOADSAVETEXT_39.GetInteger("INDEX");
            LOADSAVETEXT_39_array[LOADSAVETEXT_39_index - 1] = SAVEDGAME04_37;
            LOADSAVETEXT_39.IsDirty = true;
            var TYPEGAME_40 = _world.AcknexObject.GetAcknexObject("TYPEGAME");
            _world.AcknexObject.SetAcknexObject("IF_ENTER", TYPEGAME_40);
            var SUBMENUPANEL_42 = _world.AcknexObject.GetAcknexObject("SUBMENUPANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.16", SUBMENUPANEL_42);
            var LOADSAVETEXT_45 = _world.AcknexObject.GetAcknexObject("LOADSAVETEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", LOADSAVETEXT_45);
            var HLP01STR_48 = _world.AcknexObject.GetAcknexObject("HLP01STR");
            _world.SetSynonymObject("MESSAGE_TEXT", HLP01STR_48);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator SHOWLOADMENU(IAcknexObject MY, IAcknexObject THERE)
        {
            var HIDEMENU_0 = _world.AcknexObject.GetAcknexObject("HIDEMENU");
            _world.AcknexObject.SetAcknexObject("IF_ESC", HIDEMENU_0);
            var MOVE_MODE_3 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_3.SetFloat("VAL", -0.5f);
            var MAXMENUITEM_5 = _world.GetObject(ObjectType.Skill, "MAXMENUITEM");
            MAXMENUITEM_5.SetFloat("VAL", 4f);
            var SUBMENUUP_6 = _world.AcknexObject.GetAcknexObject("SUBMENUUP");
            _world.AcknexObject.SetAcknexObject("IF_CUU", SUBMENUUP_6);
            var SUBMENUDOWN_8 = _world.AcknexObject.GetAcknexObject("SUBMENUDOWN");
            _world.AcknexObject.SetAcknexObject("IF_CUD", SUBMENUDOWN_8);
            var SUBMENUUP_10 = _world.AcknexObject.GetAcknexObject("SUBMENUUP");
            _world.AcknexObject.SetAcknexObject("IF_CUR", SUBMENUUP_10);
            var SUBMENUDOWN_12 = _world.AcknexObject.GetAcknexObject("SUBMENUDOWN");
            _world.AcknexObject.SetAcknexObject("IF_CUL", SUBMENUDOWN_12);
            //Unknown keyword: SAVE_INFO
            //Unknown keyword: LOAD_INFO
            //Unknown keyword: SET_STRING
            //Unknown keyword: SET_STRING
            //Unknown keyword: SET_STRING
            //Unknown keyword: SET_STRING
            //Unknown keyword: LOAD_INFO
            //Unknown keyword: SET_STRING
            //Unknown keyword: SET_STRING
            //Unknown keyword: SET_STRING
            //Unknown keyword: SET_STRING
            var BIP02SND_14 = _world.AcknexObject.GetAcknexObject("BIP02SND");
            _world.PlaySound(BIP02SND_14, 0.5f, null);
            var LOADSAVETEXT_18 = _world.AcknexObject.GetAcknexObject("LOADSAVETEXT");
            LOADSAVETEXT_18.SetFloat("INDEX", 1f);
            var SAVEDGAME01_19 = _world.AcknexObject.GetAcknexObject("SAVEDGAME01");
            var LOADSAVETEXT_21 = _world.AcknexObject.GetAcknexObject("LOADSAVETEXT");
            var LOADSAVETEXT_21_array = LOADSAVETEXT_21.GetObject<List<IAcknexObject>>("STRING");
            var LOADSAVETEXT_21_index = LOADSAVETEXT_21.GetInteger("INDEX");
            LOADSAVETEXT_21_array[LOADSAVETEXT_21_index - 1] = SAVEDGAME01_19;
            LOADSAVETEXT_21.IsDirty = true;
            var LOADSAVETEXT_24 = _world.AcknexObject.GetAcknexObject("LOADSAVETEXT");
            LOADSAVETEXT_24.SetFloat("INDEX", 2f);
            var SAVEDGAME02_25 = _world.AcknexObject.GetAcknexObject("SAVEDGAME02");
            var LOADSAVETEXT_27 = _world.AcknexObject.GetAcknexObject("LOADSAVETEXT");
            var LOADSAVETEXT_27_array = LOADSAVETEXT_27.GetObject<List<IAcknexObject>>("STRING");
            var LOADSAVETEXT_27_index = LOADSAVETEXT_27.GetInteger("INDEX");
            LOADSAVETEXT_27_array[LOADSAVETEXT_27_index - 1] = SAVEDGAME02_25;
            LOADSAVETEXT_27.IsDirty = true;
            var LOADSAVETEXT_30 = _world.AcknexObject.GetAcknexObject("LOADSAVETEXT");
            LOADSAVETEXT_30.SetFloat("INDEX", 3f);
            var SAVEDGAME03_31 = _world.AcknexObject.GetAcknexObject("SAVEDGAME03");
            var LOADSAVETEXT_33 = _world.AcknexObject.GetAcknexObject("LOADSAVETEXT");
            var LOADSAVETEXT_33_array = LOADSAVETEXT_33.GetObject<List<IAcknexObject>>("STRING");
            var LOADSAVETEXT_33_index = LOADSAVETEXT_33.GetInteger("INDEX");
            LOADSAVETEXT_33_array[LOADSAVETEXT_33_index - 1] = SAVEDGAME03_31;
            LOADSAVETEXT_33.IsDirty = true;
            var LOADSAVETEXT_36 = _world.AcknexObject.GetAcknexObject("LOADSAVETEXT");
            LOADSAVETEXT_36.SetFloat("INDEX", 4f);
            var SAVEDGAME04_37 = _world.AcknexObject.GetAcknexObject("SAVEDGAME04");
            var LOADSAVETEXT_39 = _world.AcknexObject.GetAcknexObject("LOADSAVETEXT");
            var LOADSAVETEXT_39_array = LOADSAVETEXT_39.GetObject<List<IAcknexObject>>("STRING");
            var LOADSAVETEXT_39_index = LOADSAVETEXT_39.GetInteger("INDEX");
            LOADSAVETEXT_39_array[LOADSAVETEXT_39_index - 1] = SAVEDGAME04_37;
            LOADSAVETEXT_39.IsDirty = true;
            var CHOOSEGAME_40 = _world.AcknexObject.GetAcknexObject("CHOOSEGAME");
            _world.AcknexObject.SetAcknexObject("IF_ENTER", CHOOSEGAME_40);
            var SUBMENUPANEL_42 = _world.AcknexObject.GetAcknexObject("SUBMENUPANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.16", SUBMENUPANEL_42);
            var LOADSAVETEXT_45 = _world.AcknexObject.GetAcknexObject("LOADSAVETEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", LOADSAVETEXT_45);
            var HLP01STR_48 = _world.AcknexObject.GetAcknexObject("HLP01STR");
            _world.SetSynonymObject("MESSAGE_TEXT", HLP01STR_48);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator SHOWSOUNDVOLUMEMENU(IAcknexObject MY, IAcknexObject THERE)
        {
            var BIP02SND_0 = _world.AcknexObject.GetAcknexObject("BIP02SND");
            _world.PlaySound(BIP02SND_0, 0.5f, null);
            var HIDEMENU_2 = _world.AcknexObject.GetAcknexObject("HIDEMENU");
            _world.AcknexObject.SetAcknexObject("IF_ESC", HIDEMENU_2);
            var MOVE_MODE_5 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_5.SetFloat("VAL", -0.5f);
            var MAXMENUITEM_7 = _world.GetObject(ObjectType.Skill, "MAXMENUITEM");
            MAXMENUITEM_7.SetFloat("VAL", 3f);
            var SUBMENUUP_8 = _world.AcknexObject.GetAcknexObject("SUBMENUUP");
            _world.AcknexObject.SetAcknexObject("IF_CUU", SUBMENUUP_8);
            var SUBMENUDOWN_10 = _world.AcknexObject.GetAcknexObject("SUBMENUDOWN");
            _world.AcknexObject.SetAcknexObject("IF_CUD", SUBMENUDOWN_10);
            var VOLUMEUP_12 = _world.AcknexObject.GetAcknexObject("VOLUMEUP");
            _world.AcknexObject.SetAcknexObject("IF_CUR", VOLUMEUP_12);
            var VOLUMEDOWN_14 = _world.AcknexObject.GetAcknexObject("VOLUMEDOWN");
            _world.AcknexObject.SetAcknexObject("IF_CUL", VOLUMEDOWN_14);
            var HIDEMENU_16 = _world.AcknexObject.GetAcknexObject("HIDEMENU");
            _world.AcknexObject.SetAcknexObject("IF_ENTER", HIDEMENU_16);
            var SOUNDVOLUMEPANEL_18 = _world.AcknexObject.GetAcknexObject("SOUNDVOLUMEPANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.16", SOUNDVOLUMEPANEL_18);
            var SOUNDVOLUMETEXT_21 = _world.AcknexObject.GetAcknexObject("SOUNDVOLUMETEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", SOUNDVOLUMETEXT_21);
            var HLP01STR_24 = _world.AcknexObject.GetAcknexObject("HLP01STR");
            _world.SetSynonymObject("MESSAGE_TEXT", HLP01STR_24);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator HIDEMENU(IAcknexObject MY, IAcknexObject THERE)
        {
            _world.AcknexObject.SetAcknexObject("PANELS.16", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", null);
            var SHOWMAINMENU_6 = _world.AcknexObject.GetAcknexObject("SHOWMAINMENU");
            _world.AcknexObject.SetAcknexObject("IF_ESC", SHOWMAINMENU_6);
            _world.AcknexObject.SetAcknexObject("IF_CUU", null);
            _world.AcknexObject.SetAcknexObject("IF_CUD", null);
            _world.AcknexObject.SetAcknexObject("IF_CUR", null);
            _world.AcknexObject.SetAcknexObject("IF_CUL", null);
            var UNDERWATER_17 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            var UNDERWATER_17_val = UNDERWATER_17.GetFloat("VAL");
            if (UNDERWATER_17_val == 0f)
            {
                goto NOWATER;
            }
            {
                var enumerator = SET_BLUE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            goto CONT;
            NOWATER:
            var BLACK_18 = _world.AcknexObject.GetAcknexObject("BLACK");
            _world.FadePal(BLACK_18, 0f);
            CONT:
            {
                var enumerator = SHOWWEAPON(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MOVE_MODE_21 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_21.SetFloat("VAL", 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MENUUP(IAcknexObject MY, IAcknexObject THERE)
        {
            var MENUITEM_1 = _world.GetObject(ObjectType.Skill, "MENUITEM");
            var MENUITEM_1_val = MENUITEM_1.GetFloat("VAL");
            var MENUITEM_2 = _world.GetObject(ObjectType.Skill, "MENUITEM");
            MENUITEM_2.SetFloat("VAL", MENUITEM_1_val + -1f);
            var MENUITEM_4 = _world.GetObject(ObjectType.Skill, "MENUITEM");
            var MENUITEM_4_val = MENUITEM_4.GetFloat("VAL");
            if (MENUITEM_4_val < 1f)
            {
                var MAXMENUITEM_5 = _world.GetObject(ObjectType.Skill, "MAXMENUITEM");
                var MAXMENUITEM_5_val = MAXMENUITEM_5.GetFloat("VAL");
                var MENUITEM_6 = _world.GetObject(ObjectType.Skill, "MENUITEM");
                MENUITEM_6.SetFloat("VAL", MAXMENUITEM_5_val);
            }
            var BIP01SND_7 = _world.AcknexObject.GetAcknexObject("BIP01SND");
            _world.PlaySound(BIP01SND_7, 0.5f, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MENUDOWN(IAcknexObject MY, IAcknexObject THERE)
        {
            var MENUITEM_1 = _world.GetObject(ObjectType.Skill, "MENUITEM");
            var MENUITEM_1_val = MENUITEM_1.GetFloat("VAL");
            var MENUITEM_2 = _world.GetObject(ObjectType.Skill, "MENUITEM");
            MENUITEM_2.SetFloat("VAL", MENUITEM_1_val + 1f);
            var MAXMENUITEM_3 = _world.GetObject(ObjectType.Skill, "MAXMENUITEM");
            var MAXMENUITEM_3_val = MAXMENUITEM_3.GetFloat("VAL");
            var MENUITEM_4 = _world.GetObject(ObjectType.Skill, "MENUITEM");
            var MENUITEM_4_val = MENUITEM_4.GetFloat("VAL");
            if (MENUITEM_4_val > MAXMENUITEM_3_val)
            {
                var MENUITEM_6 = _world.GetObject(ObjectType.Skill, "MENUITEM");
                MENUITEM_6.SetFloat("VAL", 1f);
            }
            var BIP01SND_7 = _world.AcknexObject.GetAcknexObject("BIP01SND");
            _world.PlaySound(BIP01SND_7, 0.5f, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SUBMENUUP(IAcknexObject MY, IAcknexObject THERE)
        {
            var SUBMENUITEM_1 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            var SUBMENUITEM_1_val = SUBMENUITEM_1.GetFloat("VAL");
            var SUBMENUITEM_2 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            SUBMENUITEM_2.SetFloat("VAL", SUBMENUITEM_1_val + -1f);
            var SUBMENUITEM_4 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            var SUBMENUITEM_4_val = SUBMENUITEM_4.GetFloat("VAL");
            if (SUBMENUITEM_4_val < 1f)
            {
                var MAXMENUITEM_5 = _world.GetObject(ObjectType.Skill, "MAXMENUITEM");
                var MAXMENUITEM_5_val = MAXMENUITEM_5.GetFloat("VAL");
                var SUBMENUITEM_6 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
                SUBMENUITEM_6.SetFloat("VAL", MAXMENUITEM_5_val);
            }
            var BIP01SND_7 = _world.AcknexObject.GetAcknexObject("BIP01SND");
            _world.PlaySound(BIP01SND_7, 0.5f, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SUBMENUDOWN(IAcknexObject MY, IAcknexObject THERE)
        {
            var SUBMENUITEM_1 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            var SUBMENUITEM_1_val = SUBMENUITEM_1.GetFloat("VAL");
            var SUBMENUITEM_2 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            SUBMENUITEM_2.SetFloat("VAL", SUBMENUITEM_1_val + 1f);
            var MAXMENUITEM_3 = _world.GetObject(ObjectType.Skill, "MAXMENUITEM");
            var MAXMENUITEM_3_val = MAXMENUITEM_3.GetFloat("VAL");
            var SUBMENUITEM_4 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            var SUBMENUITEM_4_val = SUBMENUITEM_4.GetFloat("VAL");
            if (SUBMENUITEM_4_val > MAXMENUITEM_3_val)
            {
                var SUBMENUITEM_6 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
                SUBMENUITEM_6.SetFloat("VAL", 1f);
            }
            var BIP01SND_7 = _world.AcknexObject.GetAcknexObject("BIP01SND");
            _world.PlaySound(BIP01SND_7, 0.5f, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator VOLUMEUP(IAcknexObject MY, IAcknexObject THERE)
        {
            var SUBMENUITEM_1 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            var SUBMENUITEM_1_val = SUBMENUITEM_1.GetFloat("VAL");
            if (SUBMENUITEM_1_val > 2f)
            {
                goto DIFIC;
            }
            var SUBMENUITEM_3 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            var SUBMENUITEM_3_val = SUBMENUITEM_3.GetFloat("VAL");
            if (SUBMENUITEM_3_val > 1f)
            {
                goto MUSIC;
            }
            var BIP01SND_4 = _world.AcknexObject.GetAcknexObject("BIP01SND");
            _world.PlaySound(BIP01SND_4, 0.5f, null);
            var SOUND_VOL_7 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            var SOUND_VOL_7_val = SOUND_VOL_7.GetFloat("VAL");
            if (SOUND_VOL_7_val < 0.96f)
            {
                var SOUND_VOL_9 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
                var SOUND_VOL_9_val = SOUND_VOL_9.GetFloat("VAL");
                var SOUND_VOL_10 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
                SOUND_VOL_10.SetFloat("VAL", SOUND_VOL_9_val + 0.05f);
            }
            var SOUND_VOL_11 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            var SOUND_VOL_11_val = SOUND_VOL_11.GetFloat("VAL");
            var SOUND_VOL_BUFFER_12 = _world.GetObject(ObjectType.Skill, "SOUND_VOL_BUFFER");
            SOUND_VOL_BUFFER_12.SetFloat("VAL", SOUND_VOL_11_val);
            yield break;
            MUSIC:
            var BIP01SND_13 = _world.AcknexObject.GetAcknexObject("BIP01SND");
            _world.PlaySound(BIP01SND_13, 0.5f, null);
            var CDAUDIO_VOL_16 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL");
            var CDAUDIO_VOL_16_val = CDAUDIO_VOL_16.GetFloat("VAL");
            if (CDAUDIO_VOL_16_val < 0.96f)
            {
                var CDAUDIO_VOL_18 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL");
                var CDAUDIO_VOL_18_val = CDAUDIO_VOL_18.GetFloat("VAL");
                var CDAUDIO_VOL_19 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL");
                CDAUDIO_VOL_19.SetFloat("VAL", CDAUDIO_VOL_18_val + 0.05f);
            }
            var CDAUDIO_VOL_20 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL");
            var CDAUDIO_VOL_20_val = CDAUDIO_VOL_20.GetFloat("VAL");
            var CDAUDIO_VOL_BUFFER_21 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL_BUFFER");
            CDAUDIO_VOL_BUFFER_21.SetFloat("VAL", CDAUDIO_VOL_20_val);
            yield break;
            DIFIC:
            var TOUGHNESS_23 = _world.GetObject(ObjectType.Skill, "TOUGHNESS");
            var TOUGHNESS_23_val = TOUGHNESS_23.GetFloat("VAL");
            var TOUGHNESS_24 = _world.GetObject(ObjectType.Skill, "TOUGHNESS");
            TOUGHNESS_24.SetFloat("VAL", TOUGHNESS_23_val + 0.1f);
            var BIP01SND_25 = _world.AcknexObject.GetAcknexObject("BIP01SND");
            _world.PlaySound(BIP01SND_25, 0.5f, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator VOLUMEDOWN(IAcknexObject MY, IAcknexObject THERE)
        {
            var SUBMENUITEM_1 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            var SUBMENUITEM_1_val = SUBMENUITEM_1.GetFloat("VAL");
            if (SUBMENUITEM_1_val > 2f)
            {
                goto DIFIC;
            }
            var SUBMENUITEM_3 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            var SUBMENUITEM_3_val = SUBMENUITEM_3.GetFloat("VAL");
            if (SUBMENUITEM_3_val > 1f)
            {
                goto MUSIC;
            }
            var BIP01SND_4 = _world.AcknexObject.GetAcknexObject("BIP01SND");
            _world.PlaySound(BIP01SND_4, 0.5f, null);
            var SOUND_VOL_7 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            var SOUND_VOL_7_val = SOUND_VOL_7.GetFloat("VAL");
            if (SOUND_VOL_7_val > 0.05f)
            {
                var SOUND_VOL_9 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
                var SOUND_VOL_9_val = SOUND_VOL_9.GetFloat("VAL");
                var SOUND_VOL_10 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
                SOUND_VOL_10.SetFloat("VAL", SOUND_VOL_9_val + -0.05f);
            }
            var SOUND_VOL_11 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            var SOUND_VOL_11_val = SOUND_VOL_11.GetFloat("VAL");
            var SOUND_VOL_BUFFER_12 = _world.GetObject(ObjectType.Skill, "SOUND_VOL_BUFFER");
            SOUND_VOL_BUFFER_12.SetFloat("VAL", SOUND_VOL_11_val);
            yield break;
            MUSIC:
            var BIP01SND_13 = _world.AcknexObject.GetAcknexObject("BIP01SND");
            _world.PlaySound(BIP01SND_13, 0.5f, null);
            var CDAUDIO_VOL_16 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL");
            var CDAUDIO_VOL_16_val = CDAUDIO_VOL_16.GetFloat("VAL");
            if (CDAUDIO_VOL_16_val > 0.05f)
            {
                var CDAUDIO_VOL_18 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL");
                var CDAUDIO_VOL_18_val = CDAUDIO_VOL_18.GetFloat("VAL");
                var CDAUDIO_VOL_19 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL");
                CDAUDIO_VOL_19.SetFloat("VAL", CDAUDIO_VOL_18_val + -0.05f);
            }
            var CDAUDIO_VOL_20 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL");
            var CDAUDIO_VOL_20_val = CDAUDIO_VOL_20.GetFloat("VAL");
            var CDAUDIO_VOL_BUFFER_21 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL_BUFFER");
            CDAUDIO_VOL_BUFFER_21.SetFloat("VAL", CDAUDIO_VOL_20_val);
            yield break;
            DIFIC:
            var TOUGHNESS_23 = _world.GetObject(ObjectType.Skill, "TOUGHNESS");
            var TOUGHNESS_23_val = TOUGHNESS_23.GetFloat("VAL");
            var TOUGHNESS_24 = _world.GetObject(ObjectType.Skill, "TOUGHNESS");
            TOUGHNESS_24.SetFloat("VAL", TOUGHNESS_23_val + -0.1f);
            var BIP01SND_25 = _world.AcknexObject.GetAcknexObject("BIP01SND");
            _world.PlaySound(BIP01SND_25, 0.5f, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator HIDEWEAPON(IAcknexObject MY, IAcknexObject THERE)
        {
            var temp_1 = _world.AcknexObject?.GetAcknexObject("IF_LEFT");
            _world.SetSynonymObject("FIRE_GUN", temp_1);
            var temp_5 = _world.AcknexObject?.GetAcknexObject("LAYERS.12");
            _world.SetSynonymObject("LAYER12", temp_5);
            var temp_9 = _world.AcknexObject?.GetAcknexObject("LAYERS.13");
            _world.SetSynonymObject("LAYER13", temp_9);
            var temp_13 = _world.AcknexObject?.GetAcknexObject("LAYERS.16");
            _world.SetSynonymObject("LAYER16", temp_13);
            var temp_16 = _world.AcknexObject?.GetAcknexObject("IF_TAB");
            _world.SetSynonymObject("SEL_TRIC", temp_16);
            var temp_19 = _world.AcknexObject?.GetAcknexObject("IF_1");
            _world.SetSynonymObject("SEL_NONE", temp_19);
            var temp_22 = _world.AcknexObject?.GetAcknexObject("IF_2");
            _world.SetSynonymObject("SEL_MP5", temp_22);
            var temp_25 = _world.AcknexObject?.GetAcknexObject("IF_3");
            _world.SetSynonymObject("SEL_BURST", temp_25);
            var temp_28 = _world.AcknexObject?.GetAcknexObject("IF_4");
            _world.SetSynonymObject("SEL_GRAN", temp_28);
            var temp_31 = _world.AcknexObject?.GetAcknexObject("IF_5");
            _world.SetSynonymObject("SEL_STNG", temp_31);
            var temp_34 = _world.AcknexObject?.GetAcknexObject("IF_6");
            _world.SetSynonymObject("SEL_QGUN", temp_34);
            var MAP_MODE_36 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            var MAP_MODE_36_val = MAP_MODE_36.GetFloat("VAL");
            var MAPMODE_37 = _world.GetObject(ObjectType.Skill, "MAPMODE");
            MAPMODE_37.SetFloat("VAL", MAP_MODE_36_val);
            _world.AcknexObject.SetAcknexObject("IF_LEFT", null);
            _world.AcknexObject.SetAcknexObject("IF_CTRL", null);
            _world.AcknexObject.SetAcknexObject("LAYERS.12", null);
            _world.AcknexObject.SetAcknexObject("LAYERS.13", null);
            _world.AcknexObject.SetAcknexObject("LAYERS.16", null);
            _world.AcknexObject.SetAcknexObject("IF_TAB", null);
            _world.AcknexObject.SetAcknexObject("IF_1", null);
            _world.AcknexObject.SetAcknexObject("IF_F10", null);
            _world.AcknexObject.SetAcknexObject("IF_2", null);
            _world.AcknexObject.SetAcknexObject("IF_3", null);
            _world.AcknexObject.SetAcknexObject("IF_4", null);
            _world.AcknexObject.SetAcknexObject("IF_5", null);
            _world.AcknexObject.SetAcknexObject("IF_6", null);
            var MAP_MODE_68 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            MAP_MODE_68.SetFloat("VAL", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SHOWWEAPON(IAcknexObject MY, IAcknexObject THERE)
        {
            var FIRE_GUN_0 = _world.GetSynonymObject("FIRE_GUN");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", FIRE_GUN_0);
            var FIRE_GUN_2 = _world.GetSynonymObject("FIRE_GUN");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", FIRE_GUN_2);
            var LAYER12_4 = _world.GetSynonymObject("LAYER12");
            _world.AcknexObject.SetAcknexObject("LAYERS.12", LAYER12_4);
            var LAYER13_7 = _world.GetSynonymObject("LAYER13");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", LAYER13_7);
            var LAYER16_10 = _world.GetSynonymObject("LAYER16");
            _world.AcknexObject.SetAcknexObject("LAYERS.16", LAYER16_10);
            var SEL_TRIC_13 = _world.GetSynonymObject("SEL_TRIC");
            _world.AcknexObject.SetAcknexObject("IF_TAB", SEL_TRIC_13);
            var SEL_NONE_15 = _world.GetSynonymObject("SEL_NONE");
            _world.AcknexObject.SetAcknexObject("IF_1", SEL_NONE_15);
            var SEL_NONE_17 = _world.GetSynonymObject("SEL_NONE");
            _world.AcknexObject.SetAcknexObject("IF_F10", SEL_NONE_17);
            var SEL_MP5_19 = _world.GetSynonymObject("SEL_MP5");
            _world.AcknexObject.SetAcknexObject("IF_2", SEL_MP5_19);
            var SEL_BURST_21 = _world.GetSynonymObject("SEL_BURST");
            _world.AcknexObject.SetAcknexObject("IF_3", SEL_BURST_21);
            var SEL_GRAN_23 = _world.GetSynonymObject("SEL_GRAN");
            _world.AcknexObject.SetAcknexObject("IF_4", SEL_GRAN_23);
            var SEL_STNG_25 = _world.GetSynonymObject("SEL_STNG");
            _world.AcknexObject.SetAcknexObject("IF_5", SEL_STNG_25);
            var SEL_QGUN_27 = _world.GetSynonymObject("SEL_QGUN");
            _world.AcknexObject.SetAcknexObject("IF_6", SEL_QGUN_27);
            var MAPMODE_29 = _world.GetObject(ObjectType.Skill, "MAPMODE");
            var MAPMODE_29_val = MAPMODE_29.GetFloat("VAL");
            var MAP_MODE_30 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            MAP_MODE_30.SetFloat("VAL", MAPMODE_29_val);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator TYPEGAME(IAcknexObject MY, IAcknexObject THERE)
        {
            var SUBMENUITEM_1 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            var SUBMENUITEM_1_val = SUBMENUITEM_1.GetFloat("VAL");
            if (SUBMENUITEM_1_val < 1f)
            {
                yield break;
            }
            var SUBMENUITEM_3 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            var SUBMENUITEM_3_val = SUBMENUITEM_3.GetFloat("VAL");
            if (SUBMENUITEM_3_val > 4f)
            {
                yield break;
            }
            var BIP02SND_4 = _world.AcknexObject.GetAcknexObject("BIP02SND");
            _world.PlaySound(BIP02SND_4, 0.5f, null);
            _world.AcknexObject.SetAcknexObject("IF_ENTER", null);
            var temp_9 = _world.AcknexObject?.GetAcknexObject("IF_ESC");
            _world.SetSynonymObject("IFESC", temp_9);
            _world.AcknexObject.SetAcknexObject("IF_ESC", null);
            var HERE_14 = _world.GetSynonymObject("HERE");
            var temp_15 = HERE_14?.GetAcknexObject("CEIL_TEX");
            _world.SetSynonymObject("LIFTSOUND", temp_15);
            var LIFTSOUND_19 = _world.GetSynonymObject("LIFTSOUND");
            LIFTSOUND_19.SetFloat("SVOL", 0f);
            var MOVE_MODE_21 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_21.SetFloat("VAL", 0f);
            var SUBMENUITEM_23 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            var SUBMENUITEM_23_val = SUBMENUITEM_23.GetFloat("VAL");
            if (SUBMENUITEM_23_val == 1f)
            {
                _world.ReadInkey("SAVEDGAME01");
            }
            var SUBMENUITEM_25 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            var SUBMENUITEM_25_val = SUBMENUITEM_25.GetFloat("VAL");
            if (SUBMENUITEM_25_val == 2f)
            {
                _world.ReadInkey("SAVEDGAME02");
            }
            var SUBMENUITEM_27 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            var SUBMENUITEM_27_val = SUBMENUITEM_27.GetFloat("VAL");
            if (SUBMENUITEM_27_val == 3f)
            {
                _world.ReadInkey("SAVEDGAME03");
            }
            var SUBMENUITEM_29 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            var SUBMENUITEM_29_val = SUBMENUITEM_29.GetFloat("VAL");
            if (SUBMENUITEM_29_val == 4f)
            {
                _world.ReadInkey("SAVEDGAME04");
            }
            var IFESC_30 = _world.GetSynonymObject("IFESC");
            _world.AcknexObject.SetAcknexObject("IF_ESC", IFESC_30);
            var RESULT_33 = _world.GetObject(ObjectType.Skill, "RESULT");
            var RESULT_33_val = RESULT_33.GetFloat("VAL");
            if (RESULT_33_val < 0f)
            {
                {
                    var enumerator = SAVEERRORMESSAGE(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            //Unknown keyword: PLAY_CD
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)16f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            //Unknown keyword: SAVE_INFO
            _world.AcknexObject.SetAcknexObject("PANELS.16", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", null);
            var SHOWMAINMENU_41 = _world.AcknexObject.GetAcknexObject("SHOWMAINMENU");
            _world.AcknexObject.SetAcknexObject("IF_ESC", SHOWMAINMENU_41);
            _world.AcknexObject.SetAcknexObject("IF_CUU", null);
            _world.AcknexObject.SetAcknexObject("IF_CUD", null);
            _world.AcknexObject.SetAcknexObject("IF_CUR", null);
            _world.AcknexObject.SetAcknexObject("IF_CUL", null);
            var FIRE_GUN_51 = _world.GetSynonymObject("FIRE_GUN");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", FIRE_GUN_51);
            var FIRE_GUN_53 = _world.GetSynonymObject("FIRE_GUN");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", FIRE_GUN_53);
            var LAYER12_55 = _world.GetSynonymObject("LAYER12");
            _world.AcknexObject.SetAcknexObject("LAYERS.12", LAYER12_55);
            var LAYER13_58 = _world.GetSynonymObject("LAYER13");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", LAYER13_58);
            var LAYER16_61 = _world.GetSynonymObject("LAYER16");
            _world.AcknexObject.SetAcknexObject("LAYERS.16", LAYER16_61);
            var SEL_TRIC_64 = _world.GetSynonymObject("SEL_TRIC");
            _world.AcknexObject.SetAcknexObject("IF_TAB", SEL_TRIC_64);
            var SEL_NONE_66 = _world.GetSynonymObject("SEL_NONE");
            _world.AcknexObject.SetAcknexObject("IF_1", SEL_NONE_66);
            var SEL_MP5_68 = _world.GetSynonymObject("SEL_MP5");
            _world.AcknexObject.SetAcknexObject("IF_2", SEL_MP5_68);
            var SEL_BURST_70 = _world.GetSynonymObject("SEL_BURST");
            _world.AcknexObject.SetAcknexObject("IF_3", SEL_BURST_70);
            var SEL_GRAN_72 = _world.GetSynonymObject("SEL_GRAN");
            _world.AcknexObject.SetAcknexObject("IF_4", SEL_GRAN_72);
            var SEL_STNG_74 = _world.GetSynonymObject("SEL_STNG");
            _world.AcknexObject.SetAcknexObject("IF_5", SEL_STNG_74);
            var SEL_QGUN_76 = _world.GetSynonymObject("SEL_QGUN");
            _world.AcknexObject.SetAcknexObject("IF_6", SEL_QGUN_76);
            var MAPMODE_78 = _world.GetObject(ObjectType.Skill, "MAPMODE");
            var MAPMODE_78_val = MAPMODE_78.GetFloat("VAL");
            var MAP_MODE_79 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            MAP_MODE_79.SetFloat("VAL", MAPMODE_78_val);
            var SECCOUNTER_81 = _world.GetObject(ObjectType.Skill, "SECCOUNTER");
            SECCOUNTER_81.SetFloat("VAL", 0f);
            var MOVE_MODE_83 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_83.SetFloat("VAL", 1f);
            var BLACK_84 = _world.AcknexObject.GetAcknexObject("BLACK");
            _world.FadePal(BLACK_84, 0f);
            //Unknown keyword: SAVE
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CHOOSEGAME(IAcknexObject MY, IAcknexObject THERE)
        {
            var SUBMENUITEM_1 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            var SUBMENUITEM_1_val = SUBMENUITEM_1.GetFloat("VAL");
            if (SUBMENUITEM_1_val < 1f)
            {
                yield break;
            }
            var SUBMENUITEM_3 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            var SUBMENUITEM_3_val = SUBMENUITEM_3.GetFloat("VAL");
            if (SUBMENUITEM_3_val > 4f)
            {
                yield break;
            }
            var BIP02SND_4 = _world.AcknexObject.GetAcknexObject("BIP02SND");
            _world.PlaySound(BIP02SND_4, 0.5f, null);
            _world.AcknexObject.SetAcknexObject("IF_ENTER", null);
            {
                var enumerator = HIDEMENU(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MOVE_MODE_9 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_9.SetFloat("VAL", 0f);
            //Unknown keyword: PLAY_CD
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)16f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            //Unknown keyword: LOAD
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CHOOSESUBMENU(IAcknexObject MY, IAcknexObject THERE)
        {
            var MENUITEM_1 = _world.GetObject(ObjectType.Skill, "MENUITEM");
            var MENUITEM_1_val = MENUITEM_1.GetFloat("VAL");
            if (MENUITEM_1_val < 1f)
            {
                yield break;
            }
            var MENUITEM_3 = _world.GetObject(ObjectType.Skill, "MENUITEM");
            var MENUITEM_3_val = MENUITEM_3.GetFloat("VAL");
            if (MENUITEM_3_val > 4f)
            {
                yield break;
            }
            _world.AcknexObject.SetAcknexObject("IF_ENTER", null);
            var MENUITEM_7 = _world.GetObject(ObjectType.Skill, "MENUITEM");
            var MENUITEM_7_val = MENUITEM_7.GetFloat("VAL");
            if (MENUITEM_7_val == 1f)
            {
                {
                    var enumerator = SHOWSOUNDVOLUMEMENU(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            var MENUITEM_9 = _world.GetObject(ObjectType.Skill, "MENUITEM");
            var MENUITEM_9_val = MENUITEM_9.GetFloat("VAL");
            if (MENUITEM_9_val == 2f)
            {
                {
                    var enumerator = SHOWSAVEMENU(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            var MENUITEM_11 = _world.GetObject(ObjectType.Skill, "MENUITEM");
            var MENUITEM_11_val = MENUITEM_11.GetFloat("VAL");
            if (MENUITEM_11_val == 3f)
            {
                {
                    var enumerator = SHOWLOADMENU(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            var MENUITEM_13 = _world.GetObject(ObjectType.Skill, "MENUITEM");
            var MENUITEM_13_val = MENUITEM_13.GetFloat("VAL");
            if (MENUITEM_13_val == 4f)
            {
                {
                    var enumerator = ASKFOREXIT(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SAVEERRORMESSAGE(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator EXITGAME(IAcknexObject MY, IAcknexObject THERE)
        {
            var MOVE_MODE_1 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_1.SetFloat("VAL", 1f);
            //Unknown keyword: PLAY_CD
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)16f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            Application.Quit();
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator RESETANSWER(IAcknexObject MY, IAcknexObject THERE)
        {
            var BIP02SND_0 = _world.AcknexObject.GetAcknexObject("BIP02SND");
            _world.PlaySound(BIP02SND_0, 0.5f, null);
            _world.AcknexObject.SetAcknexObject("IF_TAST", null);
            _world.AcknexObject.SetAcknexObject("IF_S", null);
            {
                var enumerator = HIDEMENU(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator ASKFOREXIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var BIP03SND_0 = _world.AcknexObject.GetAcknexObject("BIP03SND");
            _world.PlaySound(BIP03SND_0, 0.5f, null);
            var ASKFOREXITTEXT_2 = _world.AcknexObject.GetAcknexObject("ASKFOREXITTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", ASKFOREXITTEXT_2);
            _world.AcknexObject.SetAcknexObject("IF_CUU", null);
            _world.AcknexObject.SetAcknexObject("IF_CUD", null);
            _world.AcknexObject.SetAcknexObject("IF_CUR", null);
            _world.AcknexObject.SetAcknexObject("IF_CUL", null);
            var EXITGAME_13 = _world.AcknexObject.GetAcknexObject("EXITGAME");
            _world.AcknexObject.SetAcknexObject("IF_S", EXITGAME_13);
            var EXITGAME_15 = _world.AcknexObject.GetAcknexObject("EXITGAME");
            _world.AcknexObject.SetAcknexObject("IF_Y", EXITGAME_15);
            var RESETANSWER_17 = _world.AcknexObject.GetAcknexObject("RESETANSWER");
            _world.AcknexObject.SetAcknexObject("IF_N", RESETANSWER_17);
            var HLP02STR_19 = _world.AcknexObject.GetAcknexObject("HLP02STR");
            _world.SetSynonymObject("MESSAGE_TEXT", HLP02STR_19);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator ENDOFLEVEL(IAcknexObject MY, IAcknexObject THERE)
        {
            var MOVE_MODE_1 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_1.SetFloat("VAL", 1f);
            var BLACK_2 = _world.AcknexObject.GetAcknexObject("BLACK");
            _world.FadePal(BLACK_2, 0.4f);
            var BIP03SND_4 = _world.AcknexObject.GetAcknexObject("BIP03SND");
            _world.PlaySound(BIP03SND_4, 0.5f, null);
            var MENUITEM_7 = _world.GetObject(ObjectType.Skill, "MENUITEM");
            MENUITEM_7.SetFloat("VAL", 3f);
            var MAXMENUITEM_9 = _world.GetObject(ObjectType.Skill, "MAXMENUITEM");
            MAXMENUITEM_9.SetFloat("VAL", 3f);
            _world.AcknexObject.SetAcknexObject("IF_CUU", null);
            _world.AcknexObject.SetAcknexObject("IF_CUD", null);
            _world.AcknexObject.SetAcknexObject("IF_CUR", null);
            _world.AcknexObject.SetAcknexObject("IF_CUL", null);
            var MENUPANEL_18 = _world.AcknexObject.GetAcknexObject("MENUPANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.16", MENUPANEL_18);
            var PLEASEWAITTEXT_21 = _world.AcknexObject.GetAcknexObject("PLEASEWAITTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", PLEASEWAITTEXT_21);
            var LEVEL_STRING_25 = _world.GetSynonymObject("LEVEL_STRING");
            if (LEVEL_STRING_25 != null)
            {
                goto CONT;
            }
            var LOAD08STR_26 = _world.AcknexObject.GetAcknexObject("LOAD08STR");
            _world.SetSynonymObject("MESSAGE_TEXT", LOAD08STR_26);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: PLAY_CD
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)16f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PLAYER_HEALTH_30 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            PLAYER_HEALTH_30.SetFloat("VAL", 100f);
            //Unknown keyword: MAP
            //Unknown keyword: LOCATE
            _world.AcknexObject.SetAcknexObject("PANELS.16", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", null);
            yield break;
            CONT:
            var LOAD_STRING_37 = _world.GetSynonymObject("LOAD_STRING");
            _world.SetSynonymObject("MESSAGE_TEXT", LOAD_STRING_37);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: PLAY_CD
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)16f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            //Unknown keyword: LEVEL
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)320f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator EXPLOSIONSTART(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("EACH_TICK", null);
            var EXPLOSIONSMOKE_3 = _world.AcknexObject.GetAcknexObject("EXPLOSIONSMOKE");
            var MY_5 = MY;
            MY_5.SetAcknexObject("EACH_CYCLE", EXPLOSIONSMOKE_3);
            {
                var enumerator = FLASHREGION(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator EXPLOSIONSMOKE(IAcknexObject MY, IAcknexObject THERE)
        {
            var EXP01ATEX_0 = _world.AcknexObject.GetAcknexObject("EXP01ATEX");
            var MY_2 = MY;
            MY_2.SetAcknexObject("TEXTURE", EXP01ATEX_0);
            var EXPLOSIONEND_3 = _world.AcknexObject.GetAcknexObject("EXPLOSIONEND");
            var MY_5 = MY;
            MY_5.SetAcknexObject("EACH_CYCLE", EXPLOSIONEND_3);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator EXPLOSIONEND(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("EACH_CYCLE", null);
            var MY_5 = MY;
            MY_5.SetFloat("INVISIBLE", 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator EXPLODETARGET(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2?.GetAcknexObject("TARGET");
            if (temp_3 == null)
            {
                yield break;
            }
            var SQRTARGETDIST_4 = _world.GetObject(ObjectType.Skill, "SQRTARGETDIST");
            var SQRTARGETDIST_5 = _world.GetObject(ObjectType.Skill, "SQRTARGETDIST");
            var SQRTARGETDIST_5_val = SQRTARGETDIST_5.GetFloat("VAL");
            var MY_9 = MY;
            var temp_10 = MY_9.GetFloat("TARGET_X");
            var MY_13 = MY;
            var temp_14 = MY_13.GetFloat("X");
            var MY_19 = MY;
            var temp_20 = MY_19.GetFloat("TARGET_X");
            var MY_23 = MY;
            var temp_24 = MY_23.GetFloat("X");
            var MY_31 = MY;
            var temp_32 = MY_31.GetFloat("TARGET_Y");
            var MY_35 = MY;
            var temp_36 = MY_35.GetFloat("Y");
            var MY_41 = MY;
            var temp_42 = MY_41.GetFloat("TARGET_Y");
            var MY_45 = MY;
            var temp_46 = MY_45.GetFloat("Y");
            SQRTARGETDIST_4.SetFloat("VAL", ((temp_10 - temp_14) * (temp_20 - temp_24)) + ((temp_32 - temp_36) * (temp_42 - temp_46)));
            var SQRTARGETDIST_50 = _world.GetObject(ObjectType.Skill, "SQRTARGETDIST");
            var SQRTARGETDIST_50_val = SQRTARGETDIST_50.GetFloat("VAL");
            if (SQRTARGETDIST_50_val > 64f)
            {
                yield break;
            }
            {
                var enumerator = EXPLODEMISSILE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator EXPLODEMISSILE(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = LOCATEACTOR(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var EXPLOSIONSTART_0 = _world.AcknexObject.GetAcknexObject("EXPLOSIONSTART");
            var MY_2 = MY;
            MY_2.SetAcknexObject("EACH_TICK", EXPLOSIONSTART_0);
            var MY_5 = MY;
            MY_5.SetAcknexObject("EACH_CYCLE", null);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_ARRIVED", null);
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_HIT", null);
            var MY_14 = MY;
            MY_14.SetAcknexObject("IF_NEAR", null);
            var MY_17 = MY;
            MY_17.SetFloat("PASSABLE", 1f);
            var MY_18 = MY;
            _world.SetSynonymObject("EXPLOSION_CENTER", MY_18);
            var EXPLOSION_ON_21 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            EXPLOSION_ON_21.SetFloat("VAL", 1f);
            var SHOOT_SECTOR_23 = _world.GetObject(ObjectType.Skill, "SHOOT_SECTOR");
            SHOOT_SECTOR_23.SetFloat("VAL", 6.283f);
            var SHOOT_RANGE_25 = _world.GetObject(ObjectType.Skill, "SHOOT_RANGE");
            SHOOT_RANGE_25.SetFloat("VAL", 20f);
            var SHOOT_FAC_27 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            SHOOT_FAC_27.SetFloat("VAL", 10f);
            var MY_28 = MY;
            _world.Explode(MY_28, MY, THERE);
            var HIT_DIST_30 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_30_val = HIT_DIST_30.GetFloat("VAL");
            if (HIT_DIST_30_val == 0f)
            {
                goto CONT;
            }
            var RESULT_31 = _world.GetObject(ObjectType.Skill, "RESULT");
            var RESULT_31_val = RESULT_31.GetFloat("VAL");
            var PLAYER_RESULT_32 = _world.GetObject(ObjectType.Skill, "PLAYER_RESULT");
            PLAYER_RESULT_32.SetFloat("VAL", RESULT_31_val);
            var SHOOT_FAC_34 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            SHOOT_FAC_34.SetFloat("VAL", 0f);
            var SHOOT_RANGE_36 = _world.GetObject(ObjectType.Skill, "SHOOT_RANGE");
            SHOOT_RANGE_36.SetFloat("VAL", 40f);
            var MY_37 = MY;
            _world.Shoot(MY_37, MY, THERE);
            var HIT_DIST_39 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_39_val = HIT_DIST_39.GetFloat("VAL");
            if (HIT_DIST_39_val == 0f)
            {
                goto CONT;
            }
            {
                var enumerator = HITPLAYERDELAY(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            CONT:
            var MY_42 = MY;
            MY_42.SetFloat("SPEED", 0f);
            var MY_45 = MY;
            MY_45.SetFloat("CAREFULLY", 0f);
            var MY_48 = MY;
            MY_48.SetFloat("GROUND", 0f);
            var MY_51 = MY;
            MY_51.SetFloat("HEIGHT", -0.05f);
            var EXP01TEX_52 = _world.AcknexObject.GetAcknexObject("EXP01TEX");
            var MY_54 = MY;
            MY_54.SetAcknexObject("TEXTURE", EXP01TEX_52);
            var MY_57 = MY;
            MY_57.SetFloat("PLAY", 1f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var EXPLOSION_ON_60 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            EXPLOSION_ON_60.SetFloat("VAL", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator AIMMISSILE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MISSILECOUNTER_1 = _world.GetObject(ObjectType.Skill, "MISSILECOUNTER");
            var MISSILECOUNTER_1_val = MISSILECOUNTER_1.GetFloat("VAL");
            var MISSILECOUNTER_2 = _world.GetObject(ObjectType.Skill, "MISSILECOUNTER");
            MISSILECOUNTER_2.SetFloat("VAL", MISSILECOUNTER_1_val + 1f);
            var MISSILECOUNTER_4 = _world.GetObject(ObjectType.Skill, "MISSILECOUNTER");
            var MISSILECOUNTER_4_val = MISSILECOUNTER_4.GetFloat("VAL");
            if (MISSILECOUNTER_4_val == 16f)
            {
                var MY_7 = MY;
                MY_7.SetFloat("PASSABLE", 0f);
            }
            var MISSILECOUNTER_9 = _world.GetObject(ObjectType.Skill, "MISSILECOUNTER");
            var MISSILECOUNTER_9_val = MISSILECOUNTER_9.GetFloat("VAL");
            if (MISSILECOUNTER_9_val < 48f)
            {
                yield break;
            }
            var BULLET_10 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_12 = MY;
            MY_12.SetAcknexObject("TARGET", BULLET_10);
            var MISSILECOUNTER_14 = _world.GetObject(ObjectType.Skill, "MISSILECOUNTER");
            var MISSILECOUNTER_14_val = MISSILECOUNTER_14.GetFloat("VAL");
            if (MISSILECOUNTER_14_val < 80f)
            {
                yield break;
            }
            var MISSILECOUNTER_16 = _world.GetObject(ObjectType.Skill, "MISSILECOUNTER");
            MISSILECOUNTER_16.SetFloat("VAL", 0f);
            var MY_19 = MY;
            var temp_20 = MY_19.GetFloat("VISIBLE");
            if (temp_20 == 1f)
            {
                yield break;
            }
            {
                var enumerator = VANISHSTOP(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator IMPLOSIONSTART(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("EACH_TICK", null);
            var IMPLOSIONCRUSH_3 = _world.AcknexObject.GetAcknexObject("IMPLOSIONCRUSH");
            var MY_5 = MY;
            MY_5.SetAcknexObject("EACH_CYCLE", IMPLOSIONCRUSH_3);
            var MY_8 = MY;
            MY_8.SetFloat("INVISIBLE", 0f);
            var MY_11 = MY;
            MY_11.SetFloat("PLAY", 1f);
            //Unknown keyword: LOCATE
            var MY_14 = MY;
            MY_14.SetFloat("GROUND", 0f);
            {
                var enumerator = FLASHREGION(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator IMPLOSIONCRUSH(IAcknexObject MY, IAcknexObject THERE)
        {
            var IMPL01ATEX_0 = _world.AcknexObject.GetAcknexObject("IMPL01ATEX");
            var MY_2 = MY;
            MY_2.SetAcknexObject("TEXTURE", IMPL01ATEX_0);
            var IMPLODELIGHT_3 = _world.AcknexObject.GetAcknexObject("IMPLODELIGHT");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.9", IMPLODELIGHT_3);
            var IMPLOSIONFLARE_6 = _world.AcknexObject.GetAcknexObject("IMPLOSIONFLARE");
            var MY_8 = MY;
            MY_8.SetAcknexObject("EACH_CYCLE", IMPLOSIONFLARE_6);
            var MY_11 = MY;
            MY_11.SetFloat("PLAY", 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator IMPLOSIONFLARE(IAcknexObject MY, IAcknexObject THERE)
        {
            var IMPL01BTEX_0 = _world.AcknexObject.GetAcknexObject("IMPL01BTEX");
            var MY_2 = MY;
            MY_2.SetAcknexObject("TEXTURE", IMPL01BTEX_0);
            var IMPLOSIONEND_3 = _world.AcknexObject.GetAcknexObject("IMPLOSIONEND");
            var MY_5 = MY;
            MY_5.SetAcknexObject("EACH_CYCLE", IMPLOSIONEND_3);
            var MY_8 = MY;
            MY_8.SetFloat("PLAY", 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator IMPLOSIONEND(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("EACH_CYCLE", null);
            var MY_3 = MY;
            _world.SetSynonymObject("EXPLOSION_CENTER", MY_3);
            var FOLLOW_5 = _world.AcknexObject.GetAcknexObject("FOLLOW");
            var MY_7 = MY;
            var temp_8 = MY_7?.GetAcknexObject("TARGET");
            if (temp_8 != FOLLOW_5)
            {
                var EXPLOSION_ON_10 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
                EXPLOSION_ON_10.SetFloat("VAL", 2f);
            }
            var SHOOT_RANGE_12 = _world.GetObject(ObjectType.Skill, "SHOOT_RANGE");
            SHOOT_RANGE_12.SetFloat("VAL", 80f);
            var SHOOT_FAC_14 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            SHOOT_FAC_14.SetFloat("VAL", 0.05f);
            var MY_15 = MY;
            _world.Explode(MY_15, MY, THERE);
            var MY_18 = MY;
            MY_18.SetFloat("INVISIBLE", 1f);
            var MY_21 = MY;
            var temp_22 = MY_21.GetFloat("VISIBLE");
            if (temp_22 == 1f)
            {
                var RENDER_MODE_24 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
                RENDER_MODE_24.SetFloat("VAL", 1f);
            }
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var EXPLOSION_ON_27 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            EXPLOSION_ON_27.SetFloat("VAL", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator IMPLODEPARTICLE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("IF_ARRIVED", null);
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_HIT", null);
            var MY_6 = MY;
            _world.SetSynonymObject("EXPLOSION_CENTER", MY_6);
            var FOLLOW_8 = _world.AcknexObject.GetAcknexObject("FOLLOW");
            var MY_10 = MY;
            var temp_11 = MY_10?.GetAcknexObject("TARGET");
            if (temp_11 != FOLLOW_8)
            {
                var EXPLOSION_ON_13 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
                EXPLOSION_ON_13.SetFloat("VAL", 2f);
            }
            var SHOOT_RANGE_15 = _world.GetObject(ObjectType.Skill, "SHOOT_RANGE");
            SHOOT_RANGE_15.SetFloat("VAL", 10f);
            var SHOOT_FAC_17 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            SHOOT_FAC_17.SetFloat("VAL", 0.05f);
            var MY_18 = MY;
            _world.Explode(MY_18, MY, THERE);
            var MY_21 = MY;
            MY_21.SetFloat("CAREFULLY", 0f);
            var MY_24 = MY;
            MY_24.SetFloat("PASSABLE", 1f);
            var MY_27 = MY;
            MY_27.SetFloat("SPEED", 0f);
            var MY_30 = MY;
            var temp_31 = MY_30.GetFloat("HEIGHT");
            var MY_33 = MY;
            MY_33.SetFloat("HEIGHT", temp_31 + -2.5f);
            var IMPL01TEX_34 = _world.AcknexObject.GetAcknexObject("IMPL01TEX");
            var MY_36 = MY;
            MY_36.SetAcknexObject("TEXTURE", IMPL01TEX_34);
            var IMPLOSIONSTART_37 = _world.AcknexObject.GetAcknexObject("IMPLOSIONSTART");
            var MY_39 = MY;
            MY_39.SetAcknexObject("EACH_TICK", IMPLOSIONSTART_37);
            var MY_42 = MY;
            MY_42.SetFloat("PLAY", 1f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var EXPLOSION_ON_45 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            EXPLOSION_ON_45.SetFloat("VAL", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator BEAMREACT(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = CHOOSEPARTICLE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var PARTICLE_1 = _world.GetSynonymObject("PARTICLE");
            if (PARTICLE_1 == null)
            {
                yield break;
            }
            var DISTX_3 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_3_val = DISTX_3.GetFloat("VAL");
            if (DISTX_3_val != 0f)
            {
                var PARTICLE_5 = _world.GetSynonymObject("PARTICLE");
                var PARTICLE_7 = _world.GetSynonymObject("PARTICLE");
                var temp_8 = PARTICLE_7.GetFloat("VSPEED");
                var DISTZ_9 = _world.GetObject(ObjectType.Skill, "DISTZ");
                var DISTZ_9_val = DISTZ_9.GetFloat("VAL");
                var DISTX_11 = _world.GetObject(ObjectType.Skill, "DISTX");
                var DISTX_11_val = DISTX_11.GetFloat("VAL");
                PARTICLE_5.SetFloat("VSPEED", DISTZ_9_val / DISTX_11_val);
            }
            var PARTICLE_14 = _world.GetSynonymObject("PARTICLE");
            var temp_15 = PARTICLE_14.GetFloat("VSPEED");
            if (temp_15 < 0f)
            {
                var PARTICLE_17 = _world.GetSynonymObject("PARTICLE");
                var PARTICLE_19 = _world.GetSynonymObject("PARTICLE");
                var temp_20 = PARTICLE_19.GetFloat("VSPEED");
                var PARTICLE_23 = _world.GetSynonymObject("PARTICLE");
                var temp_24 = PARTICLE_23.GetFloat("VSPEED");
                PARTICLE_17.SetFloat("VSPEED", -temp_24);
            }
            var MY_27 = MY;
            MY_27.SetFloat("IMMATERIAL", 1f);
            var PARTICLE_30 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_30.SetFloat("SPEED", 2f);
            var MY_31 = MY;
            var PARTICLE_33 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_33.SetAcknexObject("TARGET", MY_31);
            var EXPLOSION_CENTER_35 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_36 = EXPLOSION_CENTER_35.GetFloat("X");
            var PARTICLE_38 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_38.SetFloat("X", temp_36);
            var EXPLOSION_CENTER_40 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_41 = EXPLOSION_CENTER_40.GetFloat("Y");
            var PARTICLE_43 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_43.SetFloat("Y", temp_41);
            var PARTICLE_46 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_46.SetFloat("HEIGHT", 2f);
            //Unknown keyword: LOCATE
            var PARTICLE_49 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_49.SetFloat("GROUND", 0f);
            var PRTCTEX_50 = _world.AcknexObject.GetAcknexObject("PRTCTEX");
            var PARTICLE_52 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_52.SetAcknexObject("TEXTURE", PRTCTEX_50);
            var IMPLODEPARTICLE_53 = _world.AcknexObject.GetAcknexObject("IMPLODEPARTICLE");
            var PARTICLE_55 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_55.SetAcknexObject("IF_ARRIVED", IMPLODEPARTICLE_53);
            var LOCATEPARTICLE_56 = _world.AcknexObject.GetAcknexObject("LOCATEPARTICLE");
            var PARTICLE_58 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_58.SetAcknexObject("EACH_CYCLE", LOCATEPARTICLE_56);
            var PARTICLE_61 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_61.SetFloat("INVISIBLE", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator LOCATEPARTICLE(IAcknexObject MY, IAcknexObject THERE)
        {
            var SHOOT_RANGE_1 = _world.GetObject(ObjectType.Skill, "SHOOT_RANGE");
            SHOOT_RANGE_1.SetFloat("VAL", 100f);
            var SHOOT_FAC_3 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            SHOOT_FAC_3.SetFloat("VAL", 0f);
            var MY_4 = MY;
            _world.Explode(MY_4, MY, THERE);
            var HIT_MINDIST_6 = _world.GetObject(ObjectType.Skill, "HIT_MINDIST");
            var HIT_MINDIST_6_val = HIT_MINDIST_6.GetFloat("VAL");
            if (HIT_MINDIST_6_val == 0f)
            {
                goto VANISH;
            }
            var HIT_9 = _world.GetSynonymObject("HIT");
            var temp_10 = HIT_9.GetFloat("VISIBLE");
            if (temp_10 == 0f)
            {
                yield break;
            }
            var HIT_12 = _world.GetSynonymObject("HIT");
            if (HIT_12 == null)
            {
                yield break;
            }
            var HIT_13 = _world.GetSynonymObject("HIT");
            var MY_15 = MY;
            MY_15.SetAcknexObject("TARGET", HIT_13);
            var DISTX_16 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_17 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_17_val = DISTX_17.GetFloat("VAL");
            var HIT_20 = _world.GetSynonymObject("HIT");
            var temp_21 = HIT_20.GetFloat("X");
            var EXPLOSION_CENTER_24 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_25 = EXPLOSION_CENTER_24.GetFloat("X");
            var HIT_30 = _world.GetSynonymObject("HIT");
            var temp_31 = HIT_30.GetFloat("X");
            var EXPLOSION_CENTER_34 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_35 = EXPLOSION_CENTER_34.GetFloat("X");
            var HIT_40 = _world.GetSynonymObject("HIT");
            var temp_41 = HIT_40.GetFloat("Y");
            var EXPLOSION_CENTER_44 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_45 = EXPLOSION_CENTER_44.GetFloat("Y");
            var HIT_50 = _world.GetSynonymObject("HIT");
            var temp_51 = HIT_50.GetFloat("Y");
            var EXPLOSION_CENTER_54 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_55 = EXPLOSION_CENTER_54.GetFloat("Y");
            DISTX_16.SetFloat("VAL", (temp_21 - temp_25) * (temp_31 - temp_35) + (temp_41 - temp_45) * (temp_51 - temp_55));
            var DISTX_57 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_57_val = DISTX_57.GetFloat("VAL");
            var DISTX_58 = _world.GetObject(ObjectType.Skill, "DISTX");
            DISTX_58.SetFloat("VAL", MathUtils.Sqrt(DISTX_57_val));
            var DISTZ_59 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_60 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_60_val = DISTZ_60.GetFloat("VAL");
            var HIT_62 = _world.GetSynonymObject("HIT");
            var temp_63 = HIT_62.GetFloat("FLOOR_HGT");
            var MY_66 = MY;
            var temp_67 = MY_66.GetFloat("FLOOR_HGT");
            DISTZ_59.SetFloat("VAL", temp_63 - temp_67);
            var DISTX_69 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_69_val = DISTX_69.GetFloat("VAL");
            if (DISTX_69_val != 0f)
            {
                var MY_71 = MY;
                var MY_73 = MY;
                var temp_74 = MY_73.GetFloat("VSPEED");
                var DISTZ_75 = _world.GetObject(ObjectType.Skill, "DISTZ");
                var DISTZ_75_val = DISTZ_75.GetFloat("VAL");
                var DISTX_77 = _world.GetObject(ObjectType.Skill, "DISTX");
                var DISTX_77_val = DISTX_77.GetFloat("VAL");
                MY_71.SetFloat("VSPEED", DISTZ_75_val / DISTX_77_val);
            }
            var MY_80 = MY;
            var temp_81 = MY_80.GetFloat("VSPEED");
            if (temp_81 < 0f)
            {
                var MY_83 = MY;
                var MY_85 = MY;
                var temp_86 = MY_85.GetFloat("VSPEED");
                var MY_89 = MY;
                var temp_90 = MY_89.GetFloat("VSPEED");
                MY_83.SetFloat("VSPEED", -temp_90);
            }
            yield break;
            VANISH:
            var MY_93 = MY;
            var temp_94 = MY_93.GetFloat("GROUND");
            if (temp_94 == 0f)
            {
                //Unknown keyword: LOCATE
            }
            var MY_97 = MY;
            var temp_98 = MY_97.GetFloat("VISIBLE");
            if (temp_98 == 0f)
            {
                {
                    var enumerator = VANISHSTOP(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator LOCATEPLAYERPARTICLE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("DISTANCE");
            if (temp_3 > 8f)
            {
                yield break;
            }
            var PLAYER_ARMOUR_4 = _world.GetObject(ObjectType.Skill, "PLAYER_ARMOUR");
            var PLAYER_ARMOUR_5 = _world.GetObject(ObjectType.Skill, "PLAYER_ARMOUR");
            var PLAYER_ARMOUR_5_val = PLAYER_ARMOUR_5.GetFloat("VAL");
            var PLAYER_ARMOUR_6 = _world.GetObject(ObjectType.Skill, "PLAYER_ARMOUR");
            var PLAYER_ARMOUR_6_val = PLAYER_ARMOUR_6.GetFloat("VAL");
            PLAYER_ARMOUR_4.SetFloat("VAL", PLAYER_ARMOUR_6_val / 2f);
            var PLAYER_RESULT_9 = _world.GetObject(ObjectType.Skill, "PLAYER_RESULT");
            var PLAYER_RESULT_10 = _world.GetObject(ObjectType.Skill, "PLAYER_RESULT");
            var PLAYER_RESULT_10_val = PLAYER_RESULT_10.GetFloat("VAL");
            PLAYER_RESULT_9.SetFloat("VAL", 10f * (UnityEngine.Random.value + 0.5f));
            {
                var enumerator = FLASHPLAYER(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var QGUN04SND_18 = _world.AcknexObject.GetAcknexObject("QGUN04SND");
            _world.PlaySound(QGUN04SND_18, 0.7f, null);
            {
                var enumerator = VANISHSTOP(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator TIMEOUTPARTICLE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("SKILL1");
            var MY_5 = MY;
            MY_5.SetFloat("SKILL1", temp_3 + 1f);
            var MY_8 = MY;
            var temp_9 = MY_8.GetFloat("SKILL1");
            if (temp_9 < 8f)
            {
                yield break;
            }
            var MY_12 = MY;
            MY_12.SetFloat("SKILL1", 0f);
            {
                var enumerator = IMPLODEPARTICLE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CHOOSEGRANADE(IAcknexObject MY, IAcknexObject THERE)
        {
            var GRAN1ACT_2 = _world.AcknexObject.GetAcknexObject("GRAN1ACT");
            var temp_3 = GRAN1ACT_2.GetFloat("INVISIBLE");
            if (temp_3 != 1f)
            {
                goto GRANADE1;
            }
            var GRAN1ACT_4 = _world.AcknexObject.GetAcknexObject("GRAN1ACT");
            _world.SetSynonymObject("GRANADE", GRAN1ACT_4);
            yield break;
            GRANADE1:
            var GRAN11ACT_8 = _world.AcknexObject.GetAcknexObject("GRAN11ACT");
            var temp_9 = GRAN11ACT_8.GetFloat("INVISIBLE");
            if (temp_9 != 1f)
            {
                goto GRANADE2;
            }
            var GRAN11ACT_10 = _world.AcknexObject.GetAcknexObject("GRAN11ACT");
            _world.SetSynonymObject("GRANADE", GRAN11ACT_10);
            yield break;
            GRANADE2:
            var GRAN12ACT_14 = _world.AcknexObject.GetAcknexObject("GRAN12ACT");
            var temp_15 = GRAN12ACT_14.GetFloat("INVISIBLE");
            if (temp_15 != 1f)
            {
                goto GRANADE3;
            }
            var GRAN12ACT_16 = _world.AcknexObject.GetAcknexObject("GRAN12ACT");
            _world.SetSynonymObject("GRANADE", GRAN12ACT_16);
            yield break;
            GRANADE3:
            var GRAN13ACT_20 = _world.AcknexObject.GetAcknexObject("GRAN13ACT");
            var temp_21 = GRAN13ACT_20.GetFloat("INVISIBLE");
            if (temp_21 != 1f)
            {
                goto GRANADE4;
            }
            var GRAN13ACT_22 = _world.AcknexObject.GetAcknexObject("GRAN13ACT");
            _world.SetSynonymObject("GRANADE", GRAN13ACT_22);
            yield break;
            GRANADE4:
            var GRAN14ACT_26 = _world.AcknexObject.GetAcknexObject("GRAN14ACT");
            var temp_27 = GRAN14ACT_26.GetFloat("INVISIBLE");
            if (temp_27 != 1f)
            {
                goto REFUSE;
            }
            var GRAN14ACT_28 = _world.AcknexObject.GetAcknexObject("GRAN14ACT");
            _world.SetSynonymObject("GRANADE", GRAN14ACT_28);
            yield break;
            REFUSE:
            _world.SetSynonymObject("GRANADE", null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CHOOSEMISSILE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MISS1ACT_2 = _world.AcknexObject.GetAcknexObject("MISS1ACT");
            var temp_3 = MISS1ACT_2.GetFloat("INVISIBLE");
            if (temp_3 != 1f)
            {
                goto MISSILE1;
            }
            var MISS1ACT_4 = _world.AcknexObject.GetAcknexObject("MISS1ACT");
            _world.SetSynonymObject("MISSILE", MISS1ACT_4);
            yield break;
            MISSILE1:
            var MISS11ACT_8 = _world.AcknexObject.GetAcknexObject("MISS11ACT");
            var temp_9 = MISS11ACT_8.GetFloat("INVISIBLE");
            if (temp_9 != 1f)
            {
                goto MISSILE2;
            }
            var MISS11ACT_10 = _world.AcknexObject.GetAcknexObject("MISS11ACT");
            _world.SetSynonymObject("MISSILE", MISS11ACT_10);
            yield break;
            MISSILE2:
            var MISS12ACT_14 = _world.AcknexObject.GetAcknexObject("MISS12ACT");
            var temp_15 = MISS12ACT_14.GetFloat("INVISIBLE");
            if (temp_15 != 1f)
            {
                goto MISSILE3;
            }
            var MISS12ACT_16 = _world.AcknexObject.GetAcknexObject("MISS12ACT");
            _world.SetSynonymObject("MISSILE", MISS12ACT_16);
            yield break;
            MISSILE3:
            var MISS13ACT_20 = _world.AcknexObject.GetAcknexObject("MISS13ACT");
            var temp_21 = MISS13ACT_20.GetFloat("INVISIBLE");
            if (temp_21 != 1f)
            {
                goto MISSILE4;
            }
            var MISS13ACT_22 = _world.AcknexObject.GetAcknexObject("MISS13ACT");
            _world.SetSynonymObject("MISSILE", MISS13ACT_22);
            yield break;
            MISSILE4:
            var MISS14ACT_26 = _world.AcknexObject.GetAcknexObject("MISS14ACT");
            var temp_27 = MISS14ACT_26.GetFloat("INVISIBLE");
            if (temp_27 != 1f)
            {
                goto REFUSE;
            }
            var MISS14ACT_28 = _world.AcknexObject.GetAcknexObject("MISS14ACT");
            _world.SetSynonymObject("MISSILE", MISS14ACT_28);
            yield break;
            REFUSE:
            _world.SetSynonymObject("MISSILE", null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CHOOSEPARTICLE(IAcknexObject MY, IAcknexObject THERE)
        {
            var PARTICLEACT_2 = _world.AcknexObject.GetAcknexObject("PARTICLEACT");
            var temp_3 = PARTICLEACT_2.GetFloat("INVISIBLE");
            if (temp_3 != 1f)
            {
                goto PARTICLE1;
            }
            var PARTICLEACT_4 = _world.AcknexObject.GetAcknexObject("PARTICLEACT");
            _world.SetSynonymObject("PARTICLE", PARTICLEACT_4);
            yield break;
            PARTICLE1:
            var PARTICLE1ACT_8 = _world.AcknexObject.GetAcknexObject("PARTICLE1ACT");
            var temp_9 = PARTICLE1ACT_8.GetFloat("INVISIBLE");
            if (temp_9 != 1f)
            {
                goto PARTICLE2;
            }
            var PARTICLE1ACT_10 = _world.AcknexObject.GetAcknexObject("PARTICLE1ACT");
            _world.SetSynonymObject("PARTICLE", PARTICLE1ACT_10);
            yield break;
            PARTICLE2:
            var PARTICLE2ACT_14 = _world.AcknexObject.GetAcknexObject("PARTICLE2ACT");
            var temp_15 = PARTICLE2ACT_14.GetFloat("INVISIBLE");
            if (temp_15 != 1f)
            {
                goto PARTICLE3;
            }
            var PARTICLE2ACT_16 = _world.AcknexObject.GetAcknexObject("PARTICLE2ACT");
            _world.SetSynonymObject("PARTICLE", PARTICLE2ACT_16);
            yield break;
            PARTICLE3:
            var PARTICLE3ACT_20 = _world.AcknexObject.GetAcknexObject("PARTICLE3ACT");
            var temp_21 = PARTICLE3ACT_20.GetFloat("INVISIBLE");
            if (temp_21 != 1f)
            {
                goto PARTICLE4;
            }
            var PARTICLE3ACT_22 = _world.AcknexObject.GetAcknexObject("PARTICLE3ACT");
            _world.SetSynonymObject("PARTICLE", PARTICLE3ACT_22);
            yield break;
            PARTICLE4:
            var PARTICLE4ACT_26 = _world.AcknexObject.GetAcknexObject("PARTICLE4ACT");
            var temp_27 = PARTICLE4ACT_26.GetFloat("INVISIBLE");
            if (temp_27 != 1f)
            {
                goto REFUSE;
            }
            var PARTICLE4ACT_28 = _world.AcknexObject.GetAcknexObject("PARTICLE4ACT");
            _world.SetSynonymObject("PARTICLE", PARTICLE4ACT_28);
            yield break;
            REFUSE:
            _world.SetSynonymObject("PARTICLE", null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CASTBLOOD(IAcknexObject MY, IAcknexObject THERE)
        {
            var BLOOD1ACT_2 = _world.AcknexObject.GetAcknexObject("BLOOD1ACT");
            var temp_3 = BLOOD1ACT_2.GetFloat("INVISIBLE");
            if (temp_3 != 1f)
            {
                goto BLOOD2;
            }
            var BLOOD1ACT_4 = _world.AcknexObject.GetAcknexObject("BLOOD1ACT");
            _world.SetSynonymObject("BLOOD", BLOOD1ACT_4);
            goto CAST;
            BLOOD2:
            var BLOOD2ACT_8 = _world.AcknexObject.GetAcknexObject("BLOOD2ACT");
            var temp_9 = BLOOD2ACT_8.GetFloat("INVISIBLE");
            if (temp_9 != 1f)
            {
                goto BLOOD3;
            }
            var BLOOD2ACT_10 = _world.AcknexObject.GetAcknexObject("BLOOD2ACT");
            _world.SetSynonymObject("BLOOD", BLOOD2ACT_10);
            goto CAST;
            BLOOD3:
            var BLOOD3ACT_14 = _world.AcknexObject.GetAcknexObject("BLOOD3ACT");
            var temp_15 = BLOOD3ACT_14.GetFloat("INVISIBLE");
            if (temp_15 != 1f)
            {
                goto BLOOD4;
            }
            var BLOOD3ACT_16 = _world.AcknexObject.GetAcknexObject("BLOOD3ACT");
            _world.SetSynonymObject("BLOOD", BLOOD3ACT_16);
            goto CAST;
            BLOOD4:
            var BLOOD4ACT_20 = _world.AcknexObject.GetAcknexObject("BLOOD4ACT");
            var temp_21 = BLOOD4ACT_20.GetFloat("INVISIBLE");
            if (temp_21 != 1f)
            {
                goto REFUSE;
            }
            var BLOOD4ACT_22 = _world.AcknexObject.GetAcknexObject("BLOOD4ACT");
            _world.SetSynonymObject("BLOOD", BLOOD4ACT_22);
            goto CAST;
            REFUSE:
            _world.SetSynonymObject("BLOOD", null);
            yield break;
            CAST:
            var HIT_DIST_26 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_26_val = HIT_DIST_26.GetFloat("VAL");
            var BLOOD_28 = _world.GetSynonymObject("BLOOD");
            BLOOD_28.SetFloat("DIST", HIT_DIST_26_val);
            var BLOOD_30 = _world.GetSynonymObject("BLOOD");
            var BLOOD_32 = _world.GetSynonymObject("BLOOD");
            var temp_33 = BLOOD_32.GetFloat("HEIGHT");
            var PLAYER_Z_34 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_34_val = PLAYER_Z_34.GetFloat("VAL");
            var HIT_DIST_38 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_38_val = HIT_DIST_38.GetFloat("VAL");
            var PLAYER_TILT_40 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_40_val = PLAYER_TILT_40.GetFloat("VAL");
            BLOOD_30.SetFloat("HEIGHT", PLAYER_Z_34_val - 0.728f * HIT_DIST_38_val * PLAYER_TILT_40_val - 0.5f);
            var BLOOD_43 = _world.GetSynonymObject("BLOOD");
            var dropped_44 = _world.Drop(BLOOD_43, MY, THERE);
            var BLOOD_47 = dropped_44;
            BLOOD_47.SetFloat("INVISIBLE", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator PICKUPMEDKIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            var PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat("VAL");
            if (PLAYER_HEALTH_1_val > 98f)
            {
                yield break;
            }
            var PLAYER_HEALTH_3 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            var PLAYER_HEALTH_3_val = PLAYER_HEALTH_3.GetFloat("VAL");
            var PLAYER_HEALTH_4 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            PLAYER_HEALTH_4.SetFloat("VAL", PLAYER_HEALTH_3_val + 25f);
            var MY_7 = MY;
            MY_7.SetFloat("INVISIBLE", 1f);
            var MP_501SND_8 = _world.AcknexObject.GetAcknexObject("MP_501SND");
            _world.PlaySound(MP_501SND_8, 0.5f, null);
            var GET11STR_10 = _world.AcknexObject.GetAcknexObject("GET11STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET11STR_10);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator PICKUPARMOUR(IAcknexObject MY, IAcknexObject THERE)
        {
            var PLAYER_ARMOUR_1 = _world.GetObject(ObjectType.Skill, "PLAYER_ARMOUR");
            var PLAYER_ARMOUR_1_val = PLAYER_ARMOUR_1.GetFloat("VAL");
            if (PLAYER_ARMOUR_1_val > 190f)
            {
                yield break;
            }
            var PLAYER_ARMOUR_3 = _world.GetObject(ObjectType.Skill, "PLAYER_ARMOUR");
            var PLAYER_ARMOUR_3_val = PLAYER_ARMOUR_3.GetFloat("VAL");
            var PLAYER_ARMOUR_4 = _world.GetObject(ObjectType.Skill, "PLAYER_ARMOUR");
            PLAYER_ARMOUR_4.SetFloat("VAL", PLAYER_ARMOUR_3_val + 50f);
            var MY_7 = MY;
            MY_7.SetFloat("INVISIBLE", 1f);
            var ARMO01SND_8 = _world.AcknexObject.GetAcknexObject("ARMO01SND");
            _world.PlaySound(ARMO01SND_8, 0.5f, null);
            var GET10STR_10 = _world.AcknexObject.GetAcknexObject("GET10STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET10STR_10);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator PICKUPMP5(IAcknexObject MY, IAcknexObject THERE)
        {
            var HAS_MP5_1 = _world.GetObject(ObjectType.Skill, "HAS_MP5");
            HAS_MP5_1.SetFloat("VAL", 1f);
            var AMMO_MP5_3 = _world.GetObject(ObjectType.Skill, "AMMO_MP5");
            var AMMO_MP5_3_val = AMMO_MP5_3.GetFloat("VAL");
            var AMMO_MP5_4 = _world.GetObject(ObjectType.Skill, "AMMO_MP5");
            AMMO_MP5_4.SetFloat("VAL", AMMO_MP5_3_val + 60f);
            var WEAPONSEL_6 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_6_val = WEAPONSEL_6.GetFloat("VAL");
            if (WEAPONSEL_6_val < 2f)
            {
                {
                    var enumerator = SELECTMP5(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
            }
            var WEAPONSEL_8 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_8_val = WEAPONSEL_8.GetFloat("VAL");
            if (WEAPONSEL_8_val > 1f)
            {
                var AMMO01SND_9 = _world.AcknexObject.GetAcknexObject("AMMO01SND");
                _world.PlaySound(AMMO01SND_9, 0.3f, null);
            }
            {
                var enumerator = SHOWAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_13 = MY;
            MY_13.SetFloat("INVISIBLE", 1f);
            var GET02STR_14 = _world.AcknexObject.GetAcknexObject("GET02STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET02STR_14);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator PICKUPSTINGER(IAcknexObject MY, IAcknexObject THERE)
        {
            var HAS_STINGER_1 = _world.GetObject(ObjectType.Skill, "HAS_STINGER");
            HAS_STINGER_1.SetFloat("VAL", 1f);
            var AMMO_STINGER_3 = _world.GetObject(ObjectType.Skill, "AMMO_STINGER");
            var AMMO_STINGER_3_val = AMMO_STINGER_3.GetFloat("VAL");
            var AMMO_STINGER_4 = _world.GetObject(ObjectType.Skill, "AMMO_STINGER");
            AMMO_STINGER_4.SetFloat("VAL", AMMO_STINGER_3_val + 2f);
            var WEAPONSEL_6 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_6_val = WEAPONSEL_6.GetFloat("VAL");
            if (WEAPONSEL_6_val < 4f)
            {
                {
                    var enumerator = SELECTSTINGER(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
            }
            {
                var enumerator = SHOWAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_9 = MY;
            MY_9.SetFloat("INVISIBLE", 1f);
            var GET08STR_10 = _world.AcknexObject.GetAcknexObject("GET08STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET08STR_10);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator PICKUPQUANTUM(IAcknexObject MY, IAcknexObject THERE)
        {
            var HAS_QUANTUM_1 = _world.GetObject(ObjectType.Skill, "HAS_QUANTUM");
            HAS_QUANTUM_1.SetFloat("VAL", 1f);
            var AMMO_QUANTUM_3 = _world.GetObject(ObjectType.Skill, "AMMO_QUANTUM");
            var AMMO_QUANTUM_3_val = AMMO_QUANTUM_3.GetFloat("VAL");
            var AMMO_QUANTUM_4 = _world.GetObject(ObjectType.Skill, "AMMO_QUANTUM");
            AMMO_QUANTUM_4.SetFloat("VAL", AMMO_QUANTUM_3_val + 5f);
            var WEAPONSEL_6 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_6_val = WEAPONSEL_6.GetFloat("VAL");
            if (WEAPONSEL_6_val < 5f)
            {
                {
                    var enumerator = SELECTQUANTUM(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
            }
            {
                var enumerator = SHOWAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_9 = MY;
            MY_9.SetFloat("INVISIBLE", 1f);
            var GET09STR_10 = _world.AcknexObject.GetAcknexObject("GET09STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET09STR_10);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator PICKAMMO(IAcknexObject MY, IAcknexObject THERE)
        {
            var AMMO_MP5_1 = _world.GetObject(ObjectType.Skill, "AMMO_MP5");
            var AMMO_MP5_1_val = AMMO_MP5_1.GetFloat("VAL");
            var AMMO_MP5_2 = _world.GetObject(ObjectType.Skill, "AMMO_MP5");
            AMMO_MP5_2.SetFloat("VAL", AMMO_MP5_1_val + 30f);
            {
                var enumerator = SHOWAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_5 = MY;
            MY_5.SetFloat("INVISIBLE", 1f);
            var AMMO01SND_6 = _world.AcknexObject.GetAcknexObject("AMMO01SND");
            _world.PlaySound(AMMO01SND_6, 0.3f, null);
            var GET01STR_8 = _world.AcknexObject.GetAcknexObject("GET01STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET01STR_8);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator PICKGRANADE(IAcknexObject MY, IAcknexObject THERE)
        {
            var HAS_GRANADE_1 = _world.GetObject(ObjectType.Skill, "HAS_GRANADE");
            HAS_GRANADE_1.SetFloat("VAL", 1f);
            var AMMO_GRANADE_3 = _world.GetObject(ObjectType.Skill, "AMMO_GRANADE");
            var AMMO_GRANADE_3_val = AMMO_GRANADE_3.GetFloat("VAL");
            var AMMO_GRANADE_4 = _world.GetObject(ObjectType.Skill, "AMMO_GRANADE");
            AMMO_GRANADE_4.SetFloat("VAL", AMMO_GRANADE_3_val + 1f);
            {
                var enumerator = SHOWAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_7 = MY;
            MY_7.SetFloat("INVISIBLE", 1f);
            var GRAN01SND_8 = _world.AcknexObject.GetAcknexObject("GRAN01SND");
            _world.PlaySound(GRAN01SND_8, 0.5f, null);
            var GET05STR_10 = _world.AcknexObject.GetAcknexObject("GET05STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET05STR_10);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator PICKSTINGERAMMO(IAcknexObject MY, IAcknexObject THERE)
        {
            var AMMO_STINGER_1 = _world.GetObject(ObjectType.Skill, "AMMO_STINGER");
            var AMMO_STINGER_1_val = AMMO_STINGER_1.GetFloat("VAL");
            var AMMO_STINGER_2 = _world.GetObject(ObjectType.Skill, "AMMO_STINGER");
            AMMO_STINGER_2.SetFloat("VAL", AMMO_STINGER_1_val + 10f);
            {
                var enumerator = SHOWAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_5 = MY;
            MY_5.SetFloat("INVISIBLE", 1f);
            var AMMO01SND_6 = _world.AcknexObject.GetAcknexObject("AMMO01SND");
            _world.PlaySound(AMMO01SND_6, 0.5f, null);
            var GET06STR_8 = _world.AcknexObject.GetAcknexObject("GET06STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET06STR_8);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator PICKQUANTUMAMMO(IAcknexObject MY, IAcknexObject THERE)
        {
            var AMMO_QUANTUM_1 = _world.GetObject(ObjectType.Skill, "AMMO_QUANTUM");
            var AMMO_QUANTUM_1_val = AMMO_QUANTUM_1.GetFloat("VAL");
            var AMMO_QUANTUM_2 = _world.GetObject(ObjectType.Skill, "AMMO_QUANTUM");
            AMMO_QUANTUM_2.SetFloat("VAL", AMMO_QUANTUM_1_val + 1f);
            {
                var enumerator = SHOWAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_5 = MY;
            MY_5.SetFloat("INVISIBLE", 1f);
            var QGUN01SND_6 = _world.AcknexObject.GetAcknexObject("QGUN01SND");
            _world.PlaySound(QGUN01SND_6, 0.2f, null);
            var GET07STR_8 = _world.AcknexObject.GetAcknexObject("GET07STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET07STR_8);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator FLASHREGION(IAcknexObject MY, IAcknexObject THERE)
        {
            var LUP_1 = _world.GetObject(ObjectType.Skill, "LUP");
            var LUP_1_val = LUP_1.GetFloat("VAL");
            if (LUP_1_val != 0f)
            {
                goto IMPL1;
            }
            var MY_3 = MY;
            var temp_4 = MY_3?.GetAcknexObject("REGION");
            _world.SetSynonymObject("IMPL_REGION", temp_4);
            var IMPL_REGION_7 = _world.GetSynonymObject("IMPL_REGION");
            var temp_8 = IMPL_REGION_7.GetFloat("AMBIENT");
            var NAMBIENT_9 = _world.GetObject(ObjectType.Skill, "NAMBIENT");
            NAMBIENT_9.SetFloat("VAL", temp_8);
            var LAMBIENT_10 = _world.GetObject(ObjectType.Skill, "LAMBIENT");
            var LAMBIENT_11 = _world.GetObject(ObjectType.Skill, "LAMBIENT");
            var LAMBIENT_11_val = LAMBIENT_11.GetFloat("VAL");
            var NAMBIENT_12 = _world.GetObject(ObjectType.Skill, "NAMBIENT");
            var NAMBIENT_12_val = NAMBIENT_12.GetFloat("VAL");
            LAMBIENT_10.SetFloat("VAL", NAMBIENT_12_val + 1f);
            var LUP_16 = _world.GetObject(ObjectType.Skill, "LUP");
            LUP_16.SetFloat("VAL", 0.04f);
            goto GO;
            IMPL1:
            var LUP1_18 = _world.GetObject(ObjectType.Skill, "LUP1");
            var LUP1_18_val = LUP1_18.GetFloat("VAL");
            if (LUP1_18_val != 0f)
            {
                goto IMPL2;
            }
            var MY_20 = MY;
            var temp_21 = MY_20?.GetAcknexObject("REGION");
            _world.SetSynonymObject("IMPL_REGION1", temp_21);
            var IMPL_REGION1_24 = _world.GetSynonymObject("IMPL_REGION1");
            var temp_25 = IMPL_REGION1_24.GetFloat("AMBIENT");
            var NAMBIENT1_26 = _world.GetObject(ObjectType.Skill, "NAMBIENT1");
            NAMBIENT1_26.SetFloat("VAL", temp_25);
            var LAMBIENT1_27 = _world.GetObject(ObjectType.Skill, "LAMBIENT1");
            var LAMBIENT1_28 = _world.GetObject(ObjectType.Skill, "LAMBIENT1");
            var LAMBIENT1_28_val = LAMBIENT1_28.GetFloat("VAL");
            var NAMBIENT1_29 = _world.GetObject(ObjectType.Skill, "NAMBIENT1");
            var NAMBIENT1_29_val = NAMBIENT1_29.GetFloat("VAL");
            LAMBIENT1_27.SetFloat("VAL", NAMBIENT1_29_val + 1f);
            var LUP1_33 = _world.GetObject(ObjectType.Skill, "LUP1");
            LUP1_33.SetFloat("VAL", 0.04f);
            goto GO;
            IMPL2:
            var LUP2_35 = _world.GetObject(ObjectType.Skill, "LUP2");
            var LUP2_35_val = LUP2_35.GetFloat("VAL");
            if (LUP2_35_val != 0f)
            {
                goto IMPL3;
            }
            var MY_37 = MY;
            var temp_38 = MY_37?.GetAcknexObject("REGION");
            _world.SetSynonymObject("IMPL_REGION2", temp_38);
            var IMPL_REGION2_41 = _world.GetSynonymObject("IMPL_REGION2");
            var temp_42 = IMPL_REGION2_41.GetFloat("AMBIENT");
            var NAMBIENT2_43 = _world.GetObject(ObjectType.Skill, "NAMBIENT2");
            NAMBIENT2_43.SetFloat("VAL", temp_42);
            var LAMBIENT2_44 = _world.GetObject(ObjectType.Skill, "LAMBIENT2");
            var LAMBIENT2_45 = _world.GetObject(ObjectType.Skill, "LAMBIENT2");
            var LAMBIENT2_45_val = LAMBIENT2_45.GetFloat("VAL");
            var NAMBIENT2_46 = _world.GetObject(ObjectType.Skill, "NAMBIENT2");
            var NAMBIENT2_46_val = NAMBIENT2_46.GetFloat("VAL");
            LAMBIENT2_44.SetFloat("VAL", NAMBIENT2_46_val + 1f);
            var LUP2_50 = _world.GetObject(ObjectType.Skill, "LUP2");
            LUP2_50.SetFloat("VAL", 0.04f);
            goto GO;
            IMPL3:
            var LUP3_52 = _world.GetObject(ObjectType.Skill, "LUP3");
            var LUP3_52_val = LUP3_52.GetFloat("VAL");
            if (LUP3_52_val != 0f)
            {
                goto IMPL4;
            }
            var MY_54 = MY;
            var temp_55 = MY_54?.GetAcknexObject("REGION");
            _world.SetSynonymObject("IMPL_REGION3", temp_55);
            var IMPL_REGION3_58 = _world.GetSynonymObject("IMPL_REGION3");
            var temp_59 = IMPL_REGION3_58.GetFloat("AMBIENT");
            var NAMBIENT3_60 = _world.GetObject(ObjectType.Skill, "NAMBIENT3");
            NAMBIENT3_60.SetFloat("VAL", temp_59);
            var LAMBIENT3_61 = _world.GetObject(ObjectType.Skill, "LAMBIENT3");
            var LAMBIENT3_62 = _world.GetObject(ObjectType.Skill, "LAMBIENT3");
            var LAMBIENT3_62_val = LAMBIENT3_62.GetFloat("VAL");
            var NAMBIENT3_63 = _world.GetObject(ObjectType.Skill, "NAMBIENT3");
            var NAMBIENT3_63_val = NAMBIENT3_63.GetFloat("VAL");
            LAMBIENT3_61.SetFloat("VAL", NAMBIENT3_63_val + 1f);
            var LUP3_67 = _world.GetObject(ObjectType.Skill, "LUP3");
            LUP3_67.SetFloat("VAL", 0.04f);
            goto GO;
            IMPL4:
            var LUP4_69 = _world.GetObject(ObjectType.Skill, "LUP4");
            var LUP4_69_val = LUP4_69.GetFloat("VAL");
            if (LUP4_69_val != 0f)
            {
                yield break;
            }
            var MY_71 = MY;
            var temp_72 = MY_71?.GetAcknexObject("REGION");
            _world.SetSynonymObject("IMPL_REGION4", temp_72);
            var IMPL_REGION4_75 = _world.GetSynonymObject("IMPL_REGION4");
            var temp_76 = IMPL_REGION4_75.GetFloat("AMBIENT");
            var NAMBIENT4_77 = _world.GetObject(ObjectType.Skill, "NAMBIENT4");
            NAMBIENT4_77.SetFloat("VAL", temp_76);
            var LAMBIENT4_78 = _world.GetObject(ObjectType.Skill, "LAMBIENT4");
            var LAMBIENT4_79 = _world.GetObject(ObjectType.Skill, "LAMBIENT4");
            var LAMBIENT4_79_val = LAMBIENT4_79.GetFloat("VAL");
            var NAMBIENT4_80 = _world.GetObject(ObjectType.Skill, "NAMBIENT4");
            var NAMBIENT4_80_val = NAMBIENT4_80.GetFloat("VAL");
            LAMBIENT4_78.SetFloat("VAL", NAMBIENT4_80_val + 1f);
            var LUP4_84 = _world.GetObject(ObjectType.Skill, "LUP4");
            LUP4_84.SetFloat("VAL", 0.04f);
            GO:
            var temp_88 = _world.AcknexObject?.GetAcknexObject("EACH_TICK.9");
            if (temp_88 == null)
            {
                var IMPLODELIGHT_89 = _world.AcknexObject.GetAcknexObject("IMPLODELIGHT");
                _world.AcknexObject.SetAcknexObject("EACH_TICK.9", IMPLODELIGHT_89);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator IMPLODELIGHT(IAcknexObject MY, IAcknexObject THERE)
        {
            var LUP_1 = _world.GetObject(ObjectType.Skill, "LUP");
            var LUP_1_val = LUP_1.GetFloat("VAL");
            if (LUP_1_val == 0f)
            {
                goto LIGHT1;
            }
            var LUP_2 = _world.GetObject(ObjectType.Skill, "LUP");
            var LUP_2_val = LUP_2.GetFloat("VAL");
            var IMPL_REGION_4 = _world.GetSynonymObject("IMPL_REGION");
            var temp_5 = IMPL_REGION_4.GetFloat("AMBIENT");
            var IMPL_REGION_7 = _world.GetSynonymObject("IMPL_REGION");
            IMPL_REGION_7.SetFloat("AMBIENT", temp_5 + LUP_2_val);
            var LAMBIENT_8 = _world.GetObject(ObjectType.Skill, "LAMBIENT");
            var LAMBIENT_8_val = LAMBIENT_8.GetFloat("VAL");
            var IMPL_REGION_10 = _world.GetSynonymObject("IMPL_REGION");
            var temp_11 = IMPL_REGION_10.GetFloat("AMBIENT");
            if (temp_11 > LAMBIENT_8_val)
            {
                goto REVERSE;
            }
            var NAMBIENT_12 = _world.GetObject(ObjectType.Skill, "NAMBIENT");
            var NAMBIENT_12_val = NAMBIENT_12.GetFloat("VAL");
            var IMPL_REGION_14 = _world.GetSynonymObject("IMPL_REGION");
            var temp_15 = IMPL_REGION_14.GetFloat("AMBIENT");
            if (temp_15 < NAMBIENT_12_val)
            {
                goto STOP;
            }
            goto LIGHT1;
            REVERSE:
            var LUP_17 = _world.GetObject(ObjectType.Skill, "LUP");
            LUP_17.SetFloat("VAL", -0.1f);
            goto LIGHT1;
            STOP:
            var NAMBIENT_18 = _world.GetObject(ObjectType.Skill, "NAMBIENT");
            var NAMBIENT_18_val = NAMBIENT_18.GetFloat("VAL");
            var IMPL_REGION_20 = _world.GetSynonymObject("IMPL_REGION");
            IMPL_REGION_20.SetFloat("AMBIENT", NAMBIENT_18_val);
            var LUP_22 = _world.GetObject(ObjectType.Skill, "LUP");
            LUP_22.SetFloat("VAL", 0f);
            LIGHT1:
            var LUP1_24 = _world.GetObject(ObjectType.Skill, "LUP1");
            var LUP1_24_val = LUP1_24.GetFloat("VAL");
            if (LUP1_24_val == 0f)
            {
                goto LIGHT2;
            }
            var LUP1_25 = _world.GetObject(ObjectType.Skill, "LUP1");
            var LUP1_25_val = LUP1_25.GetFloat("VAL");
            var IMPL_REGION1_27 = _world.GetSynonymObject("IMPL_REGION1");
            var temp_28 = IMPL_REGION1_27.GetFloat("AMBIENT");
            var IMPL_REGION1_30 = _world.GetSynonymObject("IMPL_REGION1");
            IMPL_REGION1_30.SetFloat("AMBIENT", temp_28 + LUP1_25_val);
            var LAMBIENT1_31 = _world.GetObject(ObjectType.Skill, "LAMBIENT1");
            var LAMBIENT1_31_val = LAMBIENT1_31.GetFloat("VAL");
            var IMPL_REGION1_33 = _world.GetSynonymObject("IMPL_REGION1");
            var temp_34 = IMPL_REGION1_33.GetFloat("AMBIENT");
            if (temp_34 > LAMBIENT1_31_val)
            {
                goto REVERSE1;
            }
            var NAMBIENT1_35 = _world.GetObject(ObjectType.Skill, "NAMBIENT1");
            var NAMBIENT1_35_val = NAMBIENT1_35.GetFloat("VAL");
            var IMPL_REGION1_37 = _world.GetSynonymObject("IMPL_REGION1");
            var temp_38 = IMPL_REGION1_37.GetFloat("AMBIENT");
            if (temp_38 < NAMBIENT1_35_val)
            {
                goto STOP1;
            }
            goto LIGHT2;
            REVERSE1:
            var LUP1_40 = _world.GetObject(ObjectType.Skill, "LUP1");
            LUP1_40.SetFloat("VAL", -0.1f);
            goto LIGHT2;
            STOP1:
            var NAMBIENT1_41 = _world.GetObject(ObjectType.Skill, "NAMBIENT1");
            var NAMBIENT1_41_val = NAMBIENT1_41.GetFloat("VAL");
            var IMPL_REGION1_43 = _world.GetSynonymObject("IMPL_REGION1");
            IMPL_REGION1_43.SetFloat("AMBIENT", NAMBIENT1_41_val);
            var LUP1_45 = _world.GetObject(ObjectType.Skill, "LUP1");
            LUP1_45.SetFloat("VAL", 0f);
            LIGHT2:
            var LUP2_47 = _world.GetObject(ObjectType.Skill, "LUP2");
            var LUP2_47_val = LUP2_47.GetFloat("VAL");
            if (LUP2_47_val == 0f)
            {
                goto LIGHT3;
            }
            var LUP2_48 = _world.GetObject(ObjectType.Skill, "LUP2");
            var LUP2_48_val = LUP2_48.GetFloat("VAL");
            var IMPL_REGION2_50 = _world.GetSynonymObject("IMPL_REGION2");
            var temp_51 = IMPL_REGION2_50.GetFloat("AMBIENT");
            var IMPL_REGION2_53 = _world.GetSynonymObject("IMPL_REGION2");
            IMPL_REGION2_53.SetFloat("AMBIENT", temp_51 + LUP2_48_val);
            var LAMBIENT2_54 = _world.GetObject(ObjectType.Skill, "LAMBIENT2");
            var LAMBIENT2_54_val = LAMBIENT2_54.GetFloat("VAL");
            var IMPL_REGION2_56 = _world.GetSynonymObject("IMPL_REGION2");
            var temp_57 = IMPL_REGION2_56.GetFloat("AMBIENT");
            if (temp_57 > LAMBIENT2_54_val)
            {
                goto REVERSE2;
            }
            var NAMBIENT2_58 = _world.GetObject(ObjectType.Skill, "NAMBIENT2");
            var NAMBIENT2_58_val = NAMBIENT2_58.GetFloat("VAL");
            var IMPL_REGION2_60 = _world.GetSynonymObject("IMPL_REGION2");
            var temp_61 = IMPL_REGION2_60.GetFloat("AMBIENT");
            if (temp_61 < NAMBIENT2_58_val)
            {
                goto STOP2;
            }
            goto LIGHT3;
            REVERSE2:
            var LUP2_63 = _world.GetObject(ObjectType.Skill, "LUP2");
            LUP2_63.SetFloat("VAL", -0.1f);
            goto LIGHT3;
            STOP2:
            var NAMBIENT2_64 = _world.GetObject(ObjectType.Skill, "NAMBIENT2");
            var NAMBIENT2_64_val = NAMBIENT2_64.GetFloat("VAL");
            var IMPL_REGION2_66 = _world.GetSynonymObject("IMPL_REGION2");
            IMPL_REGION2_66.SetFloat("AMBIENT", NAMBIENT2_64_val);
            var LUP2_68 = _world.GetObject(ObjectType.Skill, "LUP2");
            LUP2_68.SetFloat("VAL", 0f);
            LIGHT3:
            var LUP3_70 = _world.GetObject(ObjectType.Skill, "LUP3");
            var LUP3_70_val = LUP3_70.GetFloat("VAL");
            if (LUP3_70_val == 0f)
            {
                goto LIGHT4;
            }
            var LUP3_71 = _world.GetObject(ObjectType.Skill, "LUP3");
            var LUP3_71_val = LUP3_71.GetFloat("VAL");
            var IMPL_REGION3_73 = _world.GetSynonymObject("IMPL_REGION3");
            var temp_74 = IMPL_REGION3_73.GetFloat("AMBIENT");
            var IMPL_REGION3_76 = _world.GetSynonymObject("IMPL_REGION3");
            IMPL_REGION3_76.SetFloat("AMBIENT", temp_74 + LUP3_71_val);
            var LAMBIENT3_77 = _world.GetObject(ObjectType.Skill, "LAMBIENT3");
            var LAMBIENT3_77_val = LAMBIENT3_77.GetFloat("VAL");
            var IMPL_REGION3_79 = _world.GetSynonymObject("IMPL_REGION3");
            var temp_80 = IMPL_REGION3_79.GetFloat("AMBIENT");
            if (temp_80 > LAMBIENT3_77_val)
            {
                goto REVERSE3;
            }
            var NAMBIENT3_81 = _world.GetObject(ObjectType.Skill, "NAMBIENT3");
            var NAMBIENT3_81_val = NAMBIENT3_81.GetFloat("VAL");
            var IMPL_REGION3_83 = _world.GetSynonymObject("IMPL_REGION3");
            var temp_84 = IMPL_REGION3_83.GetFloat("AMBIENT");
            if (temp_84 < NAMBIENT3_81_val)
            {
                goto STOP3;
            }
            goto LIGHT4;
            REVERSE3:
            var LUP3_86 = _world.GetObject(ObjectType.Skill, "LUP3");
            LUP3_86.SetFloat("VAL", -0.1f);
            goto LIGHT4;
            STOP3:
            var NAMBIENT3_87 = _world.GetObject(ObjectType.Skill, "NAMBIENT3");
            var NAMBIENT3_87_val = NAMBIENT3_87.GetFloat("VAL");
            var IMPL_REGION3_89 = _world.GetSynonymObject("IMPL_REGION3");
            IMPL_REGION3_89.SetFloat("AMBIENT", NAMBIENT3_87_val);
            var LUP3_91 = _world.GetObject(ObjectType.Skill, "LUP3");
            LUP3_91.SetFloat("VAL", 0f);
            LIGHT4:
            var LUP4_93 = _world.GetObject(ObjectType.Skill, "LUP4");
            var LUP4_93_val = LUP4_93.GetFloat("VAL");
            if (LUP4_93_val == 0f)
            {
                goto CHECKEND;
            }
            var LUP4_94 = _world.GetObject(ObjectType.Skill, "LUP4");
            var LUP4_94_val = LUP4_94.GetFloat("VAL");
            var IMPL_REGION4_96 = _world.GetSynonymObject("IMPL_REGION4");
            var temp_97 = IMPL_REGION4_96.GetFloat("AMBIENT");
            var IMPL_REGION4_99 = _world.GetSynonymObject("IMPL_REGION4");
            IMPL_REGION4_99.SetFloat("AMBIENT", temp_97 + LUP4_94_val);
            var LAMBIENT4_100 = _world.GetObject(ObjectType.Skill, "LAMBIENT4");
            var LAMBIENT4_100_val = LAMBIENT4_100.GetFloat("VAL");
            var IMPL_REGION4_102 = _world.GetSynonymObject("IMPL_REGION4");
            var temp_103 = IMPL_REGION4_102.GetFloat("AMBIENT");
            if (temp_103 > LAMBIENT4_100_val)
            {
                goto REVERSE4;
            }
            var NAMBIENT4_104 = _world.GetObject(ObjectType.Skill, "NAMBIENT4");
            var NAMBIENT4_104_val = NAMBIENT4_104.GetFloat("VAL");
            var IMPL_REGION4_106 = _world.GetSynonymObject("IMPL_REGION4");
            var temp_107 = IMPL_REGION4_106.GetFloat("AMBIENT");
            if (temp_107 < NAMBIENT4_104_val)
            {
                goto STOP4;
            }
            goto CHECKEND;
            REVERSE4:
            var LUP4_109 = _world.GetObject(ObjectType.Skill, "LUP4");
            LUP4_109.SetFloat("VAL", -0.1f);
            goto CHECKEND;
            STOP4:
            var NAMBIENT4_110 = _world.GetObject(ObjectType.Skill, "NAMBIENT4");
            var NAMBIENT4_110_val = NAMBIENT4_110.GetFloat("VAL");
            var IMPL_REGION4_112 = _world.GetSynonymObject("IMPL_REGION4");
            IMPL_REGION4_112.SetFloat("AMBIENT", NAMBIENT4_110_val);
            var LUP4_114 = _world.GetObject(ObjectType.Skill, "LUP4");
            LUP4_114.SetFloat("VAL", 0f);
            CHECKEND:
            var CHECKENDFLAG_116 = _world.GetObject(ObjectType.Skill, "CHECKENDFLAG");
            CHECKENDFLAG_116.SetFloat("VAL", 0f);
            var LUP_118 = _world.GetObject(ObjectType.Skill, "LUP");
            var LUP_118_val = LUP_118.GetFloat("VAL");
            if (LUP_118_val != 0f)
            {
                var CHECKENDFLAG_120 = _world.GetObject(ObjectType.Skill, "CHECKENDFLAG");
                var CHECKENDFLAG_120_val = CHECKENDFLAG_120.GetFloat("VAL");
                var CHECKENDFLAG_121 = _world.GetObject(ObjectType.Skill, "CHECKENDFLAG");
                CHECKENDFLAG_121.SetFloat("VAL", CHECKENDFLAG_120_val + 1f);
            }
            var LUP1_123 = _world.GetObject(ObjectType.Skill, "LUP1");
            var LUP1_123_val = LUP1_123.GetFloat("VAL");
            if (LUP1_123_val != 0f)
            {
                var CHECKENDFLAG_125 = _world.GetObject(ObjectType.Skill, "CHECKENDFLAG");
                var CHECKENDFLAG_125_val = CHECKENDFLAG_125.GetFloat("VAL");
                var CHECKENDFLAG_126 = _world.GetObject(ObjectType.Skill, "CHECKENDFLAG");
                CHECKENDFLAG_126.SetFloat("VAL", CHECKENDFLAG_125_val + 1f);
            }
            var LUP2_128 = _world.GetObject(ObjectType.Skill, "LUP2");
            var LUP2_128_val = LUP2_128.GetFloat("VAL");
            if (LUP2_128_val != 0f)
            {
                var CHECKENDFLAG_130 = _world.GetObject(ObjectType.Skill, "CHECKENDFLAG");
                var CHECKENDFLAG_130_val = CHECKENDFLAG_130.GetFloat("VAL");
                var CHECKENDFLAG_131 = _world.GetObject(ObjectType.Skill, "CHECKENDFLAG");
                CHECKENDFLAG_131.SetFloat("VAL", CHECKENDFLAG_130_val + 1f);
            }
            var LUP3_133 = _world.GetObject(ObjectType.Skill, "LUP3");
            var LUP3_133_val = LUP3_133.GetFloat("VAL");
            if (LUP3_133_val != 0f)
            {
                var CHECKENDFLAG_135 = _world.GetObject(ObjectType.Skill, "CHECKENDFLAG");
                var CHECKENDFLAG_135_val = CHECKENDFLAG_135.GetFloat("VAL");
                var CHECKENDFLAG_136 = _world.GetObject(ObjectType.Skill, "CHECKENDFLAG");
                CHECKENDFLAG_136.SetFloat("VAL", CHECKENDFLAG_135_val + 1f);
            }
            var LUP4_138 = _world.GetObject(ObjectType.Skill, "LUP4");
            var LUP4_138_val = LUP4_138.GetFloat("VAL");
            if (LUP4_138_val != 0f)
            {
                var CHECKENDFLAG_140 = _world.GetObject(ObjectType.Skill, "CHECKENDFLAG");
                var CHECKENDFLAG_140_val = CHECKENDFLAG_140.GetFloat("VAL");
                var CHECKENDFLAG_141 = _world.GetObject(ObjectType.Skill, "CHECKENDFLAG");
                CHECKENDFLAG_141.SetFloat("VAL", CHECKENDFLAG_140_val + 1f);
            }
            var CHECKENDFLAG_143 = _world.GetObject(ObjectType.Skill, "CHECKENDFLAG");
            var CHECKENDFLAG_143_val = CHECKENDFLAG_143.GetFloat("VAL");
            if (CHECKENDFLAG_143_val == 0f)
            {
                _world.AcknexObject.SetAcknexObject("EACH_TICK.9", null);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator BOUNCE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("SKILL2");
            if (temp_3 < -15f)
            {
                var MY_5 = MY;
                var temp_6 = MY_5.GetFloat("ANGLE");
                var MY_8 = MY;
                MY_8.SetFloat("SKILL2", temp_6);
            }
            var GRAN02SND_9 = _world.AcknexObject.GetAcknexObject("GRAN02SND");
            var MY_11 = MY;
            _world.PlaySound(GRAN02SND_9, 0.7f, MY_11);
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat("SKILL1");
            if (temp_15 == 0f)
            {
                goto YWALL;
            }
            var MY_17 = MY;
            var MY_19 = MY;
            var temp_20 = MY_19.GetFloat("ANGLE");
            var TWO_PI_21 = _world.GetObject(ObjectType.Skill, "TWO_PI");
            var TWO_PI_21_val = TWO_PI_21.GetFloat("VAL");
            var MY_24 = MY;
            var temp_25 = MY_24.GetFloat("SKILL2");
            MY_17.SetFloat("ANGLE", TWO_PI_21_val - temp_25);
            var MY_28 = MY;
            MY_28.SetFloat("SKILL1", 0f);
            yield break;
            YWALL:
            var MY_30 = MY;
            var MY_32 = MY;
            var temp_33 = MY_32.GetFloat("ANGLE");
            var PI_34 = _world.GetObject(ObjectType.Skill, "PI");
            var PI_34_val = PI_34.GetFloat("VAL");
            var MY_37 = MY;
            var temp_38 = MY_37.GetFloat("SKILL2");
            MY_30.SetFloat("ANGLE", PI_34_val - temp_38);
            var MY_41 = MY;
            MY_41.SetFloat("SKILL1", 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator FREEFALL(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("SKILL2");
            if (temp_3 < -15f)
            {
                goto BOUNCED;
            }
            var MY_5 = MY;
            var MY_7 = MY;
            var temp_8 = MY_7.GetFloat("SKILL2");
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat("SKILL2");
            var TWO_PI_13 = _world.GetObject(ObjectType.Skill, "TWO_PI");
            var TWO_PI_13_val = TWO_PI_13.GetFloat("VAL");
            MY_5.SetFloat("SKILL2", temp_11 - TWO_PI_13_val);
            BOUNCED:
            var MY_16 = MY;
            var temp_17 = MY_16.GetFloat("GROUND");
            if (temp_17 == 0f)
            {
                goto COAST;
            }
            var MY_20 = MY;
            var temp_21 = MY_20.GetFloat("VSPEED");
            var MY_23 = MY;
            MY_23.SetFloat("VSPEED", temp_21 + (-0.15f * TimeUtils.TicksToTime(1)));
            var MY_25 = MY;
            var temp_26 = MY_25.GetFloat("FLOOR_HGT");
            var MY_28 = MY;
            var temp_29 = MY_28.GetFloat("HEIGHT");
            if (temp_29 > temp_26)
            {
                yield break;
            }
            var MY_31 = MY;
            var temp_32 = MY_31?.GetAcknexObject("REGION");
            _world.SetSynonymObject("WATER_REGION", temp_32);
            var WATER_REGION_36 = _world.GetSynonymObject("WATER_REGION");
            var temp_37 = WATER_REGION_36?.GetAcknexObject("IF_DIVE");
            if (temp_37 == null)
            {
                goto CONT;
            }
            var WATER_REGION_39 = _world.GetSynonymObject("WATER_REGION");
            var temp_40 = WATER_REGION_39?.GetAcknexObject("BELOW");
            var MY_42 = MY;
            MY_42.SetAcknexObject("REGION", temp_40);
            yield break;
            CONT:
            var MY_45 = MY;
            var temp_46 = MY_45.GetFloat("VSPEED");
            if (temp_46 > -0.5f)
            {
                goto STOP;
            }
            var GRAN02SND_47 = _world.AcknexObject.GetAcknexObject("GRAN02SND");
            var MY_49 = MY;
            _world.PlaySound(GRAN02SND_47, 0.7f, MY_49);
            var MY_51 = MY;
            var MY_53 = MY;
            var temp_54 = MY_53.GetFloat("VSPEED");
            var MY_56 = MY;
            var temp_57 = MY_56.GetFloat("VSPEED");
            MY_51.SetFloat("VSPEED", temp_57 * -0.2f);
            yield break;
            STOP:
            var MY_63 = MY;
            MY_63.SetFloat("GROUND", 0f);
            var MY_66 = MY;
            MY_66.SetFloat("HEIGHT", -0.05f);
            var MY_69 = MY;
            MY_69.SetFloat("VSPEED", 0f);
            COAST:
            var MY_71 = MY;
            var MY_73 = MY;
            var temp_74 = MY_73.GetFloat("SPEED");
            var MY_76 = MY;
            var temp_77 = MY_76.GetFloat("SPEED");
            MY_71.SetFloat("SPEED", temp_77 * 0.7f);
            var MY_82 = MY;
            var temp_83 = MY_82.GetFloat("SPEED");
            if (temp_83 < 0.1f)
            {
                goto FULLSTOP;
            }
            yield break;
            FULLSTOP:
            var GRAN0TEX_84 = _world.AcknexObject.GetAcknexObject("GRAN0TEX");
            var MY_86 = MY;
            MY_86.SetAcknexObject("TEXTURE", GRAN0TEX_84);
            var MY_89 = MY;
            MY_89.SetFloat("SPEED", 0f);
            var MY_92 = MY;
            MY_92.SetAcknexObject("IF_HIT", null);
            var MY_95 = MY;
            MY_95.SetFloat("SKILL5", 32f);
            var EXPLOSIONTIMER_96 = _world.AcknexObject.GetAcknexObject("EXPLOSIONTIMER");
            var MY_98 = MY;
            MY_98.SetAcknexObject("EACH_TICK", EXPLOSIONTIMER_96);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator EXPLOSIONTIMER(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("SKILL5");
            var MY_5 = MY;
            MY_5.SetFloat("SKILL5", temp_3 + (-1f * TimeUtils.TicksToTime(1)));
            var MY_8 = MY;
            var temp_9 = MY_8.GetFloat("SKILL5");
            if (temp_9 > 0f)
            {
                yield break;
            }
            var MY_12 = MY;
            MY_12.SetAcknexObject("EACH_TICK", null);
            var EXPLODEMISSILE_13 = _world.AcknexObject.GetAcknexObject("EXPLODEMISSILE");
            var MY_15 = MY;
            MY_15.SetAcknexObject("EACH_CYCLE", EXPLODEMISSILE_13);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator INIT_MOVE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MODE_GEHEN_0 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var MODE_GEHEN_0_val = MODE_GEHEN_0.GetFloat("VAL");
            var MOVING_1 = _world.GetObject(ObjectType.Skill, "MOVING");
            MOVING_1.SetFloat("VAL", MODE_GEHEN_0_val);
            {
                var enumerator = SET_MOVING(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator MOVE_ME(IAcknexObject MY, IAcknexObject THERE)
        {
            START:
            var MODE_GEHEN_0 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var MODE_GEHEN_0_val = MODE_GEHEN_0.GetFloat("VAL");
            var MOVING_1 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_1_val = MOVING_1.GetFloat("VAL");
            if (MOVING_1_val == MODE_GEHEN_0_val)
            {
                var PLAYER_SIZE_2 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var PLAYER_SIZE_3 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var PLAYER_SIZE_3_val = PLAYER_SIZE_3.GetFloat("VAL");
                var MY_SIZE_4 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
                var MY_SIZE_4_val = MY_SIZE_4.GetFloat("VAL");
                var WALK_8 = _world.GetObject(ObjectType.Skill, "WALK");
                var WALK_8_val = WALK_8.GetFloat("VAL");
                PLAYER_SIZE_2.SetFloat("VAL", MY_SIZE_4_val + 0.15f * WALK_8_val);
            }
            var MODE_SCHWIMMEN_9 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var MODE_SCHWIMMEN_9_val = MODE_SCHWIMMEN_9.GetFloat("VAL");
            var MOVING_10 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_10_val = MOVING_10.GetFloat("VAL");
            if (MOVING_10_val == MODE_SCHWIMMEN_9_val)
            {
                var PLAYER_SIZE_11 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var PLAYER_SIZE_12 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var PLAYER_SIZE_12_val = PLAYER_SIZE_12.GetFloat("VAL");
                var WAVE_17 = _world.GetObject(ObjectType.Skill, "WAVE");
                var WAVE_17_val = WAVE_17.GetFloat("VAL");
                PLAYER_SIZE_11.SetFloat("VAL", 1f + 0.12f * WAVE_17_val);
            }
            var MODE_TAUCHEN_18 = _world.GetObject(ObjectType.Skill, "MODE_TAUCHEN");
            var MODE_TAUCHEN_18_val = MODE_TAUCHEN_18.GetFloat("VAL");
            var MOVING_19 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_19_val = MOVING_19.GetFloat("VAL");
            if (MOVING_19_val == MODE_TAUCHEN_18_val)
            {
                var PLAYER_SIZE_20 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var PLAYER_SIZE_21 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var PLAYER_SIZE_21_val = PLAYER_SIZE_21.GetFloat("VAL");
                PLAYER_SIZE_20.SetFloat("VAL", 1f);
            }
            var MODE_DEATH_23 = _world.GetObject(ObjectType.Skill, "MODE_DEATH");
            var MODE_DEATH_23_val = MODE_DEATH_23.GetFloat("VAL");
            var MOVING_24 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_24_val = MOVING_24.GetFloat("VAL");
            if (MOVING_24_val == MODE_DEATH_23_val)
            {
                var PLAYER_SIZE_25 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var PLAYER_SIZE_26 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var PLAYER_SIZE_26_val = PLAYER_SIZE_26.GetFloat("VAL");
                var PLAYER_SIZE_27 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var PLAYER_SIZE_27_val = PLAYER_SIZE_27.GetFloat("VAL");
                PLAYER_SIZE_25.SetFloat("VAL", PLAYER_SIZE_27_val * 0.9f);
            }
            var MODE_GEHEN_30 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var MODE_GEHEN_30_val = MODE_GEHEN_30.GetFloat("VAL");
            var MOVING_31 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_31_val = MOVING_31.GetFloat("VAL");
            if (MOVING_31_val == MODE_GEHEN_30_val)
            {
                var PLAYER_SIZE_32 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var PLAYER_SIZE_33 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var PLAYER_SIZE_33_val = PLAYER_SIZE_33.GetFloat("VAL");
                var PLAYER_SIZE_34 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var PLAYER_SIZE_34_val = PLAYER_SIZE_34.GetFloat("VAL");
                var PLAYER_DEPTH_36 = _world.GetObject(ObjectType.Skill, "PLAYER_DEPTH");
                var PLAYER_DEPTH_36_val = PLAYER_DEPTH_36.GetFloat("VAL");
                PLAYER_SIZE_32.SetFloat("VAL", PLAYER_SIZE_34_val - PLAYER_DEPTH_36_val);
            }
            NO_WATEN:
            var MODE_SCHWIMMEN_37 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var MODE_SCHWIMMEN_37_val = MODE_SCHWIMMEN_37.GetFloat("VAL");
            var MOVING_38 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_38_val = MOVING_38.GetFloat("VAL");
            if (MOVING_38_val != MODE_SCHWIMMEN_37_val)
            {
                goto NO_SWIM;
            }
            var PLAYER_DEPTH_40 = _world.GetObject(ObjectType.Skill, "PLAYER_DEPTH");
            var PLAYER_DEPTH_40_val = PLAYER_DEPTH_40.GetFloat("VAL");
            if (PLAYER_DEPTH_40_val > 1.5f)
            {
                goto NO_WATER;
            }
            {
                var enumerator = SET_WALKING(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            goto START;
            NO_SWIM:
            var MODE_GEHEN_41 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var MODE_GEHEN_41_val = MODE_GEHEN_41.GetFloat("VAL");
            var MOVING_42 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_42_val = MOVING_42.GetFloat("VAL");
            if (MOVING_42_val != MODE_GEHEN_41_val)
            {
                goto NO_WATER;
            }
            var PLAYER_DEPTH_44 = _world.GetObject(ObjectType.Skill, "PLAYER_DEPTH");
            var PLAYER_DEPTH_44_val = PLAYER_DEPTH_44.GetFloat("VAL");
            if (PLAYER_DEPTH_44_val < 2.5f)
            {
                goto NO_WATER;
            }
            {
                var enumerator = SET_SWIMMING(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            goto START;
            NO_WATER:
            var MOUSE_MIDDLE_46 = _world.GetObject(ObjectType.Skill, "MOUSE_MIDDLE");
            var MOUSE_MIDDLE_46_val = MOUSE_MIDDLE_46.GetFloat("VAL");
            if (MOUSE_MIDDLE_46_val == 0f)
            {
                goto NO_MOUSE;
            }
            var KEY_SENSE_47 = _world.GetObject(ObjectType.Skill, "KEY_SENSE");
            var KEY_SENSE_47_val = KEY_SENSE_47.GetFloat("VAL");
            var FORCE_AHEAD_48 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
            FORCE_AHEAD_48.SetFloat("VAL", KEY_SENSE_47_val);
            var FORCEFORWARD_49 = _world.GetObject(ObjectType.Skill, "FORCEFORWARD");
            var FORCEFORWARD_50 = _world.GetObject(ObjectType.Skill, "FORCEFORWARD");
            var FORCEFORWARD_50_val = FORCEFORWARD_50.GetFloat("VAL");
            var FORCE_AHEAD_51 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
            var FORCE_AHEAD_51_val = FORCE_AHEAD_51.GetFloat("VAL");
            FORCEFORWARD_49.SetFloat("VAL", FORCE_AHEAD_51_val * 2f);
            var KEY_SHIFT_55 = _world.GetObject(ObjectType.Skill, "KEY_SHIFT");
            var KEY_SHIFT_55_val = KEY_SHIFT_55.GetFloat("VAL");
            if (KEY_SHIFT_55_val == 1f)
            {
                var FORCE_AHEAD_56 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
                var FORCE_AHEAD_57 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
                var FORCE_AHEAD_57_val = FORCE_AHEAD_57.GetFloat("VAL");
                var FORCE_AHEAD_58 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
                var FORCE_AHEAD_58_val = FORCE_AHEAD_58.GetFloat("VAL");
                var SHIFT_SENSE_60 = _world.GetObject(ObjectType.Skill, "SHIFT_SENSE");
                var SHIFT_SENSE_60_val = SHIFT_SENSE_60.GetFloat("VAL");
                FORCE_AHEAD_56.SetFloat("VAL", FORCE_AHEAD_58_val * SHIFT_SENSE_60_val);
            }
            NO_MOUSE:
            var FORCEFORWARD_61 = _world.GetObject(ObjectType.Skill, "FORCEFORWARD");
            var FORCEFORWARD_62 = _world.GetObject(ObjectType.Skill, "FORCEFORWARD");
            var FORCEFORWARD_62_val = FORCEFORWARD_62.GetFloat("VAL");
            var FORCE_AHEAD_63 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
            var FORCE_AHEAD_63_val = FORCE_AHEAD_63.GetFloat("VAL");
            FORCEFORWARD_61.SetFloat("VAL", FORCE_AHEAD_63_val * 2f);
            var FORCE_STRAFE_66 = _world.GetObject(ObjectType.Skill, "FORCE_STRAFE");
            var FORCE_STRAFE_66_val = FORCE_STRAFE_66.GetFloat("VAL");
            var FORCESIDEWARD_67 = _world.GetObject(ObjectType.Skill, "FORCESIDEWARD");
            FORCESIDEWARD_67.SetFloat("VAL", FORCE_STRAFE_66_val);
            var FORCE_ROT_68 = _world.GetObject(ObjectType.Skill, "FORCE_ROT");
            var FORCE_ROT_68_val = FORCE_ROT_68.GetFloat("VAL");
            var FORCEROTATION_69 = _world.GetObject(ObjectType.Skill, "FORCEROTATION");
            FORCEROTATION_69.SetFloat("VAL", FORCE_ROT_68_val);
            var MOUSE_RIGHT_71 = _world.GetObject(ObjectType.Skill, "MOUSE_RIGHT");
            var MOUSE_RIGHT_71_val = MOUSE_RIGHT_71.GetFloat("VAL");
            if (MOUSE_RIGHT_71_val == 1f)
            {
                var FORCEFORWARD_73 = _world.GetObject(ObjectType.Skill, "FORCEFORWARD");
                FORCEFORWARD_73.SetFloat("VAL", 2f);
            }
            var KEY_ALT_75 = _world.GetObject(ObjectType.Skill, "KEY_ALT");
            var KEY_ALT_75_val = KEY_ALT_75.GetFloat("VAL");
            if (KEY_ALT_75_val != 1f)
            {
                goto NOALT;
            }
            var FORCE_STRAFE_76 = _world.GetObject(ObjectType.Skill, "FORCE_STRAFE");
            var FORCE_STRAFE_76_val = FORCE_STRAFE_76.GetFloat("VAL");
            var FORCEROTATION_77 = _world.GetObject(ObjectType.Skill, "FORCEROTATION");
            FORCEROTATION_77.SetFloat("VAL", FORCE_STRAFE_76_val);
            var FORCESIDEWARD_79 = _world.GetObject(ObjectType.Skill, "FORCESIDEWARD");
            FORCESIDEWARD_79.SetFloat("VAL", 0f);
            var FORCEFORWARD_81 = _world.GetObject(ObjectType.Skill, "FORCEFORWARD");
            FORCEFORWARD_81.SetFloat("VAL", 0f);
            NOALT:
            var BOOSTER_83 = _world.GetObject(ObjectType.Skill, "BOOSTER");
            BOOSTER_83.SetFloat("VAL", 1f);
            var MASS_84 = _world.GetObject(ObjectType.Skill, "MASS");
            var MASS_84_val = MASS_84.GetFloat("VAL");
            var INERTIA_85 = _world.GetObject(ObjectType.Skill, "INERTIA");
            INERTIA_85.SetFloat("VAL", MASS_84_val);
            var FRICTION_86 = _world.GetObject(ObjectType.Skill, "FRICTION");
            var FRICTION_87 = _world.GetObject(ObjectType.Skill, "FRICTION");
            var FRICTION_87_val = FRICTION_87.GetFloat("VAL");
            var FRIC_88 = _world.GetObject(ObjectType.Skill, "FRIC");
            var FRIC_88_val = FRIC_88.GetFloat("VAL");
            var DEPTH_92 = _world.GetObject(ObjectType.Skill, "DEPTH");
            var DEPTH_92_val = DEPTH_92.GetFloat("VAL");
            FRICTION_86.SetFloat("VAL", FRIC_88_val + 0.1f * DEPTH_92_val);
            var FORCE_93 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_94 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_94_val = FORCE_94.GetFloat("VAL");
            var STRENGTH_96 = _world.GetObject(ObjectType.Skill, "STRENGTH");
            var STRENGTH_96_val = STRENGTH_96.GetFloat("VAL");
            var WAVE_STR_98 = _world.GetObject(ObjectType.Skill, "WAVE_STR");
            var WAVE_STR_98_val = WAVE_STR_98.GetFloat("VAL");
            var WAVE_100 = _world.GetObject(ObjectType.Skill, "WAVE");
            var WAVE_100_val = WAVE_100.GetFloat("VAL");
            var BOOSTER_103 = _world.GetObject(ObjectType.Skill, "BOOSTER");
            var BOOSTER_103_val = BOOSTER_103.GetFloat("VAL");
            var FORCEFORWARD_106 = _world.GetObject(ObjectType.Skill, "FORCEFORWARD");
            var FORCEFORWARD_106_val = FORCEFORWARD_106.GetFloat("VAL");
            var PLAYER_COS_108 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var PLAYER_COS_108_val = PLAYER_COS_108.GetFloat("VAL");
            var FORCESIDEWARD_112 = _world.GetObject(ObjectType.Skill, "FORCESIDEWARD");
            var FORCESIDEWARD_112_val = FORCESIDEWARD_112.GetFloat("VAL");
            var PLAYER_SIN_114 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var PLAYER_SIN_114_val = PLAYER_SIN_114.GetFloat("VAL");
            var DRIFT_X_117 = _world.GetObject(ObjectType.Skill, "DRIFT_X");
            var DRIFT_X_117_val = DRIFT_X_117.GetFloat("VAL");
            FORCE_93.SetFloat("VAL", (STRENGTH_96_val + WAVE_STR_98_val * WAVE_100_val) * BOOSTER_103_val * (FORCEFORWARD_106_val * PLAYER_COS_108_val - 0.5f * FORCESIDEWARD_112_val * PLAYER_SIN_114_val) + DRIFT_X_117_val);
            var FORCE_118 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_118_val = FORCE_118.GetFloat("VAL");
            var PLAYER_VX_119 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_119_val = PLAYER_VX_119.GetFloat("VAL");
            var PLAYER_VX_120 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            PLAYER_VX_120.SetFloat("VAL", _world.Accelerate(PLAYER_VX_119_val, FORCE_118_val));
            var FORCE_121 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_122 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_122_val = FORCE_122.GetFloat("VAL");
            var STRENGTH_124 = _world.GetObject(ObjectType.Skill, "STRENGTH");
            var STRENGTH_124_val = STRENGTH_124.GetFloat("VAL");
            var WAVE_STR_126 = _world.GetObject(ObjectType.Skill, "WAVE_STR");
            var WAVE_STR_126_val = WAVE_STR_126.GetFloat("VAL");
            var WAVE_128 = _world.GetObject(ObjectType.Skill, "WAVE");
            var WAVE_128_val = WAVE_128.GetFloat("VAL");
            var BOOSTER_131 = _world.GetObject(ObjectType.Skill, "BOOSTER");
            var BOOSTER_131_val = BOOSTER_131.GetFloat("VAL");
            var FORCEFORWARD_134 = _world.GetObject(ObjectType.Skill, "FORCEFORWARD");
            var FORCEFORWARD_134_val = FORCEFORWARD_134.GetFloat("VAL");
            var PLAYER_SIN_136 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var PLAYER_SIN_136_val = PLAYER_SIN_136.GetFloat("VAL");
            var FORCESIDEWARD_140 = _world.GetObject(ObjectType.Skill, "FORCESIDEWARD");
            var FORCESIDEWARD_140_val = FORCESIDEWARD_140.GetFloat("VAL");
            var PLAYER_COS_142 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var PLAYER_COS_142_val = PLAYER_COS_142.GetFloat("VAL");
            var DRIFT_Y_145 = _world.GetObject(ObjectType.Skill, "DRIFT_Y");
            var DRIFT_Y_145_val = DRIFT_Y_145.GetFloat("VAL");
            FORCE_121.SetFloat("VAL", (STRENGTH_124_val + WAVE_STR_126_val * WAVE_128_val) * BOOSTER_131_val * (FORCEFORWARD_134_val * PLAYER_SIN_136_val + 0.5f * FORCESIDEWARD_140_val * PLAYER_COS_142_val) + DRIFT_Y_145_val);
            var FORCE_146 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_146_val = FORCE_146.GetFloat("VAL");
            var PLAYER_VY_147 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_147_val = PLAYER_VY_147.GetFloat("VAL");
            var PLAYER_VY_148 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            PLAYER_VY_148.SetFloat("VAL", _world.Accelerate(PLAYER_VY_147_val, FORCE_146_val));
            var FRICTION_150 = _world.GetObject(ObjectType.Skill, "FRICTION");
            FRICTION_150.SetFloat("VAL", 0.5f);
            var MODE_GEHEN_151 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var MODE_GEHEN_151_val = MODE_GEHEN_151.GetFloat("VAL");
            var MOVING_152 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_152_val = MOVING_152.GetFloat("VAL");
            if (MOVING_152_val != MODE_GEHEN_151_val)
            {
                var FRICTION_154 = _world.GetObject(ObjectType.Skill, "FRICTION");
                FRICTION_154.SetFloat("VAL", 0.85f);
            }
            var FORCE_155 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_156 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_156_val = FORCE_156.GetFloat("VAL");
            var FORCEROTATION_159 = _world.GetObject(ObjectType.Skill, "FORCEROTATION");
            var FORCEROTATION_159_val = FORCEROTATION_159.GetFloat("VAL");
            FORCE_155.SetFloat("VAL", 0.05f * FORCEROTATION_159_val);
            var FORCE_160 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_160_val = FORCE_160.GetFloat("VAL");
            var PLAYER_VROT_161 = _world.GetObject(ObjectType.Skill, "PLAYER_VROT");
            var PLAYER_VROT_161_val = PLAYER_VROT_161.GetFloat("VAL");
            var PLAYER_VROT_162 = _world.GetObject(ObjectType.Skill, "PLAYER_VROT");
            PLAYER_VROT_162.SetFloat("VAL", _world.Accelerate(PLAYER_VROT_161_val, FORCE_160_val));
            var WEAPONWAVE_163 = _world.GetObject(ObjectType.Skill, "WEAPONWAVE");
            var WEAPONWAVE_164 = _world.GetObject(ObjectType.Skill, "WEAPONWAVE");
            var WEAPONWAVE_164_val = WEAPONWAVE_164.GetFloat("VAL");
            var WAVE_165 = _world.GetObject(ObjectType.Skill, "WAVE");
            var WAVE_165_val = WAVE_165.GetFloat("VAL");
            var PLAYER_SPEED_167 = _world.GetObject(ObjectType.Skill, "PLAYER_SPEED");
            var PLAYER_SPEED_167_val = PLAYER_SPEED_167.GetFloat("VAL");
            WEAPONWAVE_163.SetFloat("VAL", WAVE_165_val * PLAYER_SPEED_167_val);
            var MP5_01OVL_169 = _world.AcknexObject.GetAcknexObject("MP5_01OVL");
            var MP5_01OVL_171 = _world.AcknexObject.GetAcknexObject("MP5_01OVL");
            var temp_172 = MP5_01OVL_171.GetFloat("POS_X");
            var WEAPONWAVE_177 = _world.GetObject(ObjectType.Skill, "WEAPONWAVE");
            var WEAPONWAVE_177_val = WEAPONWAVE_177.GetFloat("VAL");
            MP5_01OVL_169.SetFloat("POS_X", 100f + 12f * WEAPONWAVE_177_val);
            var QGUN00OVL_179 = _world.AcknexObject.GetAcknexObject("QGUN00OVL");
            var QGUN00OVL_181 = _world.AcknexObject.GetAcknexObject("QGUN00OVL");
            var temp_182 = QGUN00OVL_181.GetFloat("POS_X");
            var WEAPONWAVE_187 = _world.GetObject(ObjectType.Skill, "WEAPONWAVE");
            var WEAPONWAVE_187_val = WEAPONWAVE_187.GetFloat("VAL");
            QGUN00OVL_179.SetFloat("POS_X", 190f + 6f * WEAPONWAVE_187_val);
            var GRAN00OVL_189 = _world.AcknexObject.GetAcknexObject("GRAN00OVL");
            var GRAN00OVL_191 = _world.AcknexObject.GetAcknexObject("GRAN00OVL");
            var temp_192 = GRAN00OVL_191.GetFloat("POS_X");
            var WEAPONWAVE_197 = _world.GetObject(ObjectType.Skill, "WEAPONWAVE");
            var WEAPONWAVE_197_val = WEAPONWAVE_197.GetFloat("VAL");
            GRAN00OVL_189.SetFloat("POS_X", 184f + 6f * WEAPONWAVE_197_val);
            var FORCE_198 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_199 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_199_val = FORCE_199.GetFloat("VAL");
            var GRAVITY_200 = _world.GetObject(ObjectType.Skill, "GRAVITY");
            var GRAVITY_200_val = GRAVITY_200.GetFloat("VAL");
            var FLOAT_STR_202 = _world.GetObject(ObjectType.Skill, "FLOAT_STR");
            var FLOAT_STR_202_val = FLOAT_STR_202.GetFloat("VAL");
            var FORCE_UP_204 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var FORCE_UP_204_val = FORCE_UP_204.GetFloat("VAL");
            FORCE_198.SetFloat("VAL", GRAVITY_200_val + FLOAT_STR_202_val * FORCE_UP_204_val);
            var FRIC_AIR_205 = _world.GetObject(ObjectType.Skill, "FRIC_AIR");
            var FRIC_AIR_205_val = FRIC_AIR_205.GetFloat("VAL");
            var FRICTION_206 = _world.GetObject(ObjectType.Skill, "FRICTION");
            FRICTION_206.SetFloat("VAL", FRIC_AIR_205_val);
            var PLAYER_HGT_208 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_208_val = PLAYER_HGT_208.GetFloat("VAL");
            if (PLAYER_HGT_208_val > 0f)
            {
                goto AIRBORNE;
            }
            var FRICTION_210 = _world.GetObject(ObjectType.Skill, "FRICTION");
            FRICTION_210.SetFloat("VAL", 0.98f);
            var FORCE_211 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_212 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_212_val = FORCE_212.GetFloat("VAL");
            var FORCE_213 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_213_val = FORCE_213.GetFloat("VAL");
            var PLAYER_HGT_217 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_217_val = PLAYER_HGT_217.GetFloat("VAL");
            FORCE_211.SetFloat("VAL", FORCE_213_val - 0.2f * PLAYER_HGT_217_val);
            var FALLING_HEIGHT_219 = _world.GetObject(ObjectType.Skill, "FALLING_HEIGHT");
            var FALLING_HEIGHT_219_val = FALLING_HEIGHT_219.GetFloat("VAL");
            if (FALLING_HEIGHT_219_val == 0f)
            {
                goto AIRBORNE;
            }
            var HERE_222 = _world.GetSynonymObject("HERE");
            var temp_223 = HERE_222?.GetAcknexObject("IF_DIVE");
            if (temp_223 == null)
            {
                goto FELL;
            }
            var FALLING_HEIGHT_225 = _world.GetObject(ObjectType.Skill, "FALLING_HEIGHT");
            FALLING_HEIGHT_225.SetFloat("VAL", 0f);
            var FWT01SND_226 = _world.AcknexObject.GetAcknexObject("FWT01SND");
            _world.PlaySound(FWT01SND_226, 0.5f, null);
            goto AIRBORNE;
            FELL:
            var FALLING_FLOOR_228 = _world.GetObject(ObjectType.Skill, "FALLING_FLOOR");
            var FALLING_FLOOR_228_val = FALLING_FLOOR_228.GetFloat("VAL");
            var HERE_230 = _world.GetSynonymObject("HERE");
            var temp_231 = HERE_230.GetFloat("FLOOR_HGT");
            if (temp_231 > FALLING_FLOOR_228_val)
            {
                var FALLING_HEIGHT_232 = _world.GetObject(ObjectType.Skill, "FALLING_HEIGHT");
                var FALLING_HEIGHT_233 = _world.GetObject(ObjectType.Skill, "FALLING_HEIGHT");
                var FALLING_HEIGHT_233_val = FALLING_HEIGHT_233.GetFloat("VAL");
                var FALLING_HEIGHT_234 = _world.GetObject(ObjectType.Skill, "FALLING_HEIGHT");
                var FALLING_HEIGHT_234_val = FALLING_HEIGHT_234.GetFloat("VAL");
                var HERE_237 = _world.GetSynonymObject("HERE");
                var temp_238 = HERE_237.GetFloat("FLOOR_HGT");
                var FALLING_FLOOR_240 = _world.GetObject(ObjectType.Skill, "FALLING_FLOOR");
                var FALLING_FLOOR_240_val = FALLING_FLOOR_240.GetFloat("VAL");
                FALLING_HEIGHT_232.SetFloat("VAL", FALLING_HEIGHT_234_val - temp_238 + FALLING_FLOOR_240_val);
            }
            var FCT01SND_241 = _world.AcknexObject.GetAcknexObject("FCT01SND");
            _world.PlaySound(FCT01SND_241, 0.5f, null);
            var PLAYER_RESULT_243 = _world.GetObject(ObjectType.Skill, "PLAYER_RESULT");
            var PLAYER_RESULT_244 = _world.GetObject(ObjectType.Skill, "PLAYER_RESULT");
            var PLAYER_RESULT_244_val = PLAYER_RESULT_244.GetFloat("VAL");
            var FALLING_HEIGHT_246 = _world.GetObject(ObjectType.Skill, "FALLING_HEIGHT");
            var FALLING_HEIGHT_246_val = FALLING_HEIGHT_246.GetFloat("VAL");
            PLAYER_RESULT_243.SetFloat("VAL", (FALLING_HEIGHT_246_val - 6f) / 2f);
            var PLAYER_RESULT_253 = _world.GetObject(ObjectType.Skill, "PLAYER_RESULT");
            var PLAYER_RESULT_253_val = PLAYER_RESULT_253.GetFloat("VAL");
            if (PLAYER_RESULT_253_val > 0f)
            {
                {
                    var enumerator = HITPLAYER(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
            }
            var FALLING_HEIGHT_255 = _world.GetObject(ObjectType.Skill, "FALLING_HEIGHT");
            FALLING_HEIGHT_255.SetFloat("VAL", 0f);
            AIRBORNE:
            var FORCE_256 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_256_val = FORCE_256.GetFloat("VAL");
            var PLAYER_VZ_257 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            var PLAYER_VZ_257_val = PLAYER_VZ_257.GetFloat("VAL");
            var PLAYER_VZ_258 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            PLAYER_VZ_258.SetFloat("VAL", _world.Accelerate(PLAYER_VZ_257_val, FORCE_256_val));
            var PLAYER_HGT_260 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_260_val = PLAYER_HGT_260.GetFloat("VAL");
            if (PLAYER_HGT_260_val < 2f)
            {
                goto AIRBORNE2;
            }
            var HERE_263 = _world.GetSynonymObject("HERE");
            var temp_264 = HERE_263?.GetAcknexObject("IF_ARISE");
            if (temp_264 != null)
            {
                goto AIRBORNE2;
            }
            var HERE_267 = _world.GetSynonymObject("HERE");
            var temp_268 = HERE_267?.GetAcknexObject("IF_DIVE");
            if (temp_268 != null)
            {
                goto AIRBORNE2;
            }
            var FALLING_HEIGHT_269 = _world.GetObject(ObjectType.Skill, "FALLING_HEIGHT");
            var FALLING_HEIGHT_269_val = FALLING_HEIGHT_269.GetFloat("VAL");
            var PLAYER_HGT_270 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_270_val = PLAYER_HGT_270.GetFloat("VAL");
            if (PLAYER_HGT_270_val > FALLING_HEIGHT_269_val)
            {
                goto FALLING;
            }
            goto AIRBORNE2;
            FALLING:
            var HERE_272 = _world.GetSynonymObject("HERE");
            var temp_273 = HERE_272.GetFloat("FLOOR_HGT");
            var FALLING_FLOOR_274 = _world.GetObject(ObjectType.Skill, "FALLING_FLOOR");
            FALLING_FLOOR_274.SetFloat("VAL", temp_273);
            var PLAYER_HGT_275 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_275_val = PLAYER_HGT_275.GetFloat("VAL");
            var FALLING_HEIGHT_276 = _world.GetObject(ObjectType.Skill, "FALLING_HEIGHT");
            FALLING_HEIGHT_276.SetFloat("VAL", PLAYER_HGT_275_val);
            AIRBORNE2:
            var DUCK_VAL_277 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_278 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_278_val = DUCK_VAL_278.GetFloat("VAL");
            var DUCK_VAL_281 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_281_val = DUCK_VAL_281.GetFloat("VAL");
            DUCK_VAL_277.SetFloat("VAL", 0.8f * DUCK_VAL_281_val);
            var MODE_SCHWIMMEN_282 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var MODE_SCHWIMMEN_282_val = MODE_SCHWIMMEN_282.GetFloat("VAL");
            var MOVING_283 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_283_val = MOVING_283.GetFloat("VAL");
            if (MOVING_283_val == MODE_SCHWIMMEN_282_val)
            {
                goto DUCK;
            }
            var FORCE_UP_285 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var FORCE_UP_285_val = FORCE_UP_285.GetFloat("VAL");
            if (FORCE_UP_285_val > 0f)
            {
                goto NO_DUCK;
            }
            DUCK:
            var DUCK_VAL_286 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_287 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_287_val = DUCK_VAL_287.GetFloat("VAL");
            var DUCK_VAL_288 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_288_val = DUCK_VAL_288.GetFloat("VAL");
            var DUCK_STR_290 = _world.GetObject(ObjectType.Skill, "DUCK_STR");
            var DUCK_STR_290_val = DUCK_STR_290.GetFloat("VAL");
            var FORCE_UP_292 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var FORCE_UP_292_val = FORCE_UP_292.GetFloat("VAL");
            DUCK_VAL_286.SetFloat("VAL", DUCK_VAL_288_val + DUCK_STR_290_val * FORCE_UP_292_val);
            NO_DUCK:
            var PLAYER_SIZE_293 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_294 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_294_val = PLAYER_SIZE_294.GetFloat("VAL");
            var PLAYER_SIZE_295 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_295_val = PLAYER_SIZE_295.GetFloat("VAL");
            var DUCK_VAL_297 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_297_val = DUCK_VAL_297.GetFloat("VAL");
            PLAYER_SIZE_293.SetFloat("VAL", PLAYER_SIZE_295_val + DUCK_VAL_297_val);
            var MODE_GEHEN_298 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var MODE_GEHEN_298_val = MODE_GEHEN_298.GetFloat("VAL");
            var MOVING_299 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_299_val = MOVING_299.GetFloat("VAL");
            if (MOVING_299_val != MODE_GEHEN_298_val)
            {
                goto NO_JUMP;
            }
            var JUMP_PHASE_301 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            var JUMP_PHASE_301_val = JUMP_PHASE_301.GetFloat("VAL");
            if (JUMP_PHASE_301_val > 0f)
            {
                goto JUMP_1;
            }
            var FORCE_UP_303 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var FORCE_UP_303_val = FORCE_UP_303.GetFloat("VAL");
            if (FORCE_UP_303_val < 0.1f)
            {
                goto NO_JUMP;
            }
            var JUMP_PHASE_305 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            JUMP_PHASE_305.SetFloat("VAL", 1f);
            JUMP_1:
            var JUMP_PHASE_307 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            var JUMP_PHASE_307_val = JUMP_PHASE_307.GetFloat("VAL");
            if (JUMP_PHASE_307_val > 1f)
            {
                goto JUMP_2;
            }
            var DUCK_VAL_308 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_309 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_309_val = DUCK_VAL_309.GetFloat("VAL");
            var DUCK_VAL_310 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_310_val = DUCK_VAL_310.GetFloat("VAL");
            DUCK_VAL_308.SetFloat("VAL", DUCK_VAL_310_val - 0.5f);
            var DUCK_VAL_314 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_314_val = DUCK_VAL_314.GetFloat("VAL");
            if (DUCK_VAL_314_val < -0.7f)
            {
                var JUMP_PHASE_316 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
                JUMP_PHASE_316.SetFloat("VAL", 2f);
            }
            goto NO_JUMP;
            JUMP_2:
            var JUMP_PHASE_318 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            var JUMP_PHASE_318_val = JUMP_PHASE_318.GetFloat("VAL");
            if (JUMP_PHASE_318_val > 2f)
            {
                goto JUMP_3;
            }
            var DUCK_VAL_320 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            DUCK_VAL_320.SetFloat("VAL", 0f);
            var PLAYER_Z_321 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_322 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_322_val = PLAYER_Z_322.GetFloat("VAL");
            var FLOOR_HGT_323 = _world.GetObject(ObjectType.Skill, "FLOOR_HGT");
            var FLOOR_HGT_323_val = FLOOR_HGT_323.GetFloat("VAL");
            var MY_SIZE_325 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var MY_SIZE_325_val = MY_SIZE_325.GetFloat("VAL");
            PLAYER_Z_321.SetFloat("VAL", FLOOR_HGT_323_val + MY_SIZE_325_val);
            var PLAYER_VZ_327 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            PLAYER_VZ_327.SetFloat("VAL", 0.35f);
            var JUMP_PHASE_329 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            JUMP_PHASE_329.SetFloat("VAL", 3f);
            goto NO_JUMP;
            JUMP_3:
            var PLAYER_VZ_331 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            var PLAYER_VZ_331_val = PLAYER_VZ_331.GetFloat("VAL");
            if (PLAYER_VZ_331_val > 0f)
            {
                goto NO_JUMP;
            }
            var PLAYER_HGT_333 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_333_val = PLAYER_HGT_333.GetFloat("VAL");
            if (PLAYER_HGT_333_val > 0f)
            {
                goto NO_JUMP;
            }
            var JUMP_PHASE_335 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            JUMP_PHASE_335.SetFloat("VAL", 0f);
            NO_JUMP:
            var PLAYER_SPEED_SQR_336 = _world.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
            var PLAYER_SPEED_SQR_337 = _world.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
            var PLAYER_SPEED_SQR_337_val = PLAYER_SPEED_SQR_337.GetFloat("VAL");
            var PLAYER_VX_338 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_338_val = PLAYER_VX_338.GetFloat("VAL");
            var PLAYER_VX_340 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_340_val = PLAYER_VX_340.GetFloat("VAL");
            var PLAYER_VY_342 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_342_val = PLAYER_VY_342.GetFloat("VAL");
            var PLAYER_VY_344 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_344_val = PLAYER_VY_344.GetFloat("VAL");
            PLAYER_SPEED_SQR_336.SetFloat("VAL", PLAYER_VX_338_val * PLAYER_VX_340_val + PLAYER_VY_342_val * PLAYER_VY_344_val);
            var TILT_DECREASE_346 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
            var TILT_DECREASE_346_val = TILT_DECREASE_346.GetFloat("VAL");
            if (TILT_DECREASE_346_val != 1f)
            {
                goto CALC_TILT;
            }
            var MAX_PLAYER_TILT_P_347 = _world.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_P");
            var MAX_PLAYER_TILT_P_347_val = MAX_PLAYER_TILT_P_347.GetFloat("VAL");
            var PLAYER_TILT_348 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_348_val = PLAYER_TILT_348.GetFloat("VAL");
            if (PLAYER_TILT_348_val > MAX_PLAYER_TILT_P_347_val)
            {
                goto CHECK_SPEED_TILT;
            }
            var MAX_PLAYER_TILT_N_349 = _world.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_N");
            var MAX_PLAYER_TILT_N_349_val = MAX_PLAYER_TILT_N_349.GetFloat("VAL");
            var PLAYER_TILT_350 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_350_val = PLAYER_TILT_350.GetFloat("VAL");
            if (PLAYER_TILT_350_val > MAX_PLAYER_TILT_N_349_val)
            {
                goto DECR_TILT;
            }
            CHECK_SPEED_TILT:
            var PLAYER_SPEED_SQR_352 = _world.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
            var PLAYER_SPEED_SQR_352_val = PLAYER_SPEED_SQR_352.GetFloat("VAL");
            if (PLAYER_SPEED_SQR_352_val > 0.4f)
            {
                goto DECR_TILT;
            }
            var PLAYER_VZ_354 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            var PLAYER_VZ_354_val = PLAYER_VZ_354.GetFloat("VAL");
            if (PLAYER_VZ_354_val != 0f)
            {
                goto DECR_TILT;
            }
            goto CALC_TILT;
            DECR_TILT:
            var TILT_DECREASE_356 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
            TILT_DECREASE_356.SetFloat("VAL", 0.8f);
            CALC_TILT:
            var PLAYER_TILT_357 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_358 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_358_val = PLAYER_TILT_358.GetFloat("VAL");
            var TILT_DECREASE_359 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
            var TILT_DECREASE_359_val = TILT_DECREASE_359.GetFloat("VAL");
            var PLAYER_TILT_361 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_361_val = PLAYER_TILT_361.GetFloat("VAL");
            var FORCE_TILT_365 = _world.GetObject(ObjectType.Skill, "FORCE_TILT");
            var FORCE_TILT_365_val = FORCE_TILT_365.GetFloat("VAL");
            var FLOAT_STR_369 = _world.GetObject(ObjectType.Skill, "FLOAT_STR");
            var FLOAT_STR_369_val = FLOAT_STR_369.GetFloat("VAL");
            var FORCE_UP_371 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var FORCE_UP_371_val = FORCE_UP_371.GetFloat("VAL");
            var TIME_CORR_373 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_373_val = TIME_CORR_373.GetFloat("VAL");
            var FLY_MODE_378 = _world.GetObject(ObjectType.Skill, "FLY_MODE");
            var FLY_MODE_378_val = FLY_MODE_378.GetFloat("VAL");
            PLAYER_TILT_357.SetFloat("VAL", TILT_DECREASE_359_val * PLAYER_TILT_361_val + 0.3f * FORCE_TILT_365_val - 0.3f * FLOAT_STR_369_val * FORCE_UP_371_val * TIME_CORR_373_val * (1f - FLY_MODE_378_val));
            var PLAYER_SPEED_SQR_381 = _world.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
            var PLAYER_SPEED_SQR_381_val = PLAYER_SPEED_SQR_381.GetFloat("VAL");
            if (PLAYER_SPEED_SQR_381_val > 0f)
            {
                goto skip_382;
            }
            var MAX_PLAYER_TILT_P_383 = _world.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_P");
            var MAX_PLAYER_TILT_P_383_val = MAX_PLAYER_TILT_P_383.GetFloat("VAL");
            var PLAYER_TILT_384 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_384_val = PLAYER_TILT_384.GetFloat("VAL");
            if (PLAYER_TILT_384_val > MAX_PLAYER_TILT_P_383_val)
            {
                var TILT_DECREASE_386 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
                TILT_DECREASE_386.SetFloat("VAL", 1f);
            }
            var MAX_PLAYER_TILT_N_387 = _world.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_N");
            var MAX_PLAYER_TILT_N_387_val = MAX_PLAYER_TILT_N_387.GetFloat("VAL");
            var PLAYER_TILT_388 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_388_val = PLAYER_TILT_388.GetFloat("VAL");
            if (PLAYER_TILT_388_val < MAX_PLAYER_TILT_N_387_val)
            {
                var TILT_DECREASE_390 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
                TILT_DECREASE_390.SetFloat("VAL", 1f);
            }
            skip_382:
            var MODE_SCHWIMMEN_391 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var MODE_SCHWIMMEN_391_val = MODE_SCHWIMMEN_391.GetFloat("VAL");
            var MOVING_392 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_392_val = MOVING_392.GetFloat("VAL");
            if (MOVING_392_val == MODE_SCHWIMMEN_391_val)
            {
                var PLAYER_TILT_393 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var PLAYER_TILT_394 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var PLAYER_TILT_394_val = PLAYER_TILT_394.GetFloat("VAL");
                var PLAYER_TILT_395 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var PLAYER_TILT_395_val = PLAYER_TILT_395.GetFloat("VAL");
                var WAVE_399 = _world.GetObject(ObjectType.Skill, "WAVE");
                var WAVE_399_val = WAVE_399.GetFloat("VAL");
                PLAYER_TILT_393.SetFloat("VAL", PLAYER_TILT_395_val + 0.01f * WAVE_399_val);
            }
            var MODE_TAUCHEN_400 = _world.GetObject(ObjectType.Skill, "MODE_TAUCHEN");
            var MODE_TAUCHEN_400_val = MODE_TAUCHEN_400.GetFloat("VAL");
            var MOVING_401 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_401_val = MOVING_401.GetFloat("VAL");
            if (MOVING_401_val == MODE_TAUCHEN_400_val)
            {
                goto NO_HTILT;
            }
            var JUMP_PHASE_403 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            var JUMP_PHASE_403_val = JUMP_PHASE_403.GetFloat("VAL");
            if (JUMP_PHASE_403_val > 0f)
            {
                goto NO_HTILT;
            }
            var TILT_DECREASE_405 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
            var TILT_DECREASE_405_val = TILT_DECREASE_405.GetFloat("VAL");
            if (TILT_DECREASE_405_val == 1f)
            {
                goto NO_HTILT;
            }
            var PLAYER_HGT_407 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_407_val = PLAYER_HGT_407.GetFloat("VAL");
            if (PLAYER_HGT_407_val > 0f)
            {
                var PLAYER_TILT_408 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var PLAYER_TILT_409 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var PLAYER_TILT_409_val = PLAYER_TILT_409.GetFloat("VAL");
                var PLAYER_TILT_410 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var PLAYER_TILT_410_val = PLAYER_TILT_410.GetFloat("VAL");
                var PLAYER_HGT_415 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
                var PLAYER_HGT_415_val = PLAYER_HGT_415.GetFloat("VAL");
                PLAYER_TILT_408.SetFloat("VAL", PLAYER_TILT_410_val + 0.03f * (PLAYER_HGT_415_val + 0.3f));
            }
            NO_HTILT:
            var RICHTER_420 = _world.GetObject(ObjectType.Skill, "RICHTER");
            var RICHTER_420_val = RICHTER_420.GetFloat("VAL");
            if (RICHTER_420_val == 0f)
            {
                goto NO_QUAKE;
            }
            var PLAYER_X_421 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_422 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_422_val = PLAYER_X_422.GetFloat("VAL");
            var PLAYER_X_423 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_423_val = PLAYER_X_423.GetFloat("VAL");
            var RICHTER_425 = _world.GetObject(ObjectType.Skill, "RICHTER");
            var RICHTER_425_val = RICHTER_425.GetFloat("VAL");
            PLAYER_X_421.SetFloat("VAL", PLAYER_X_423_val + RICHTER_425_val * (UnityEngine.Random.value - 0.5f));
            var PLAYER_Y_432 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_433 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_433_val = PLAYER_Y_433.GetFloat("VAL");
            var PLAYER_Y_434 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_434_val = PLAYER_Y_434.GetFloat("VAL");
            var RICHTER_436 = _world.GetObject(ObjectType.Skill, "RICHTER");
            var RICHTER_436_val = RICHTER_436.GetFloat("VAL");
            var RANDOM_1_439 = _world.GetObject(ObjectType.Skill, "RANDOM_1");
            var RANDOM_1_439_val = RANDOM_1_439.GetFloat("VAL");
            PLAYER_Y_432.SetFloat("VAL", PLAYER_Y_434_val + RICHTER_436_val * (RANDOM_1_439_val - 0.5f));
            var PLAYER_VX_443 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_444 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_444_val = PLAYER_VX_444.GetFloat("VAL");
            var PLAYER_VX_445 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_445_val = PLAYER_VX_445.GetFloat("VAL");
            var RICHTER_449 = _world.GetObject(ObjectType.Skill, "RICHTER");
            var RICHTER_449_val = RICHTER_449.GetFloat("VAL");
            PLAYER_VX_443.SetFloat("VAL", PLAYER_VX_445_val + 0.2f * RICHTER_449_val * (UnityEngine.Random.value - 0.5f));
            var PLAYER_VY_456 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_457 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_457_val = PLAYER_VY_457.GetFloat("VAL");
            var PLAYER_VY_458 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_458_val = PLAYER_VY_458.GetFloat("VAL");
            var RICHTER_462 = _world.GetObject(ObjectType.Skill, "RICHTER");
            var RICHTER_462_val = RICHTER_462.GetFloat("VAL");
            var RANDOM_1_465 = _world.GetObject(ObjectType.Skill, "RANDOM_1");
            var RANDOM_1_465_val = RANDOM_1_465.GetFloat("VAL");
            PLAYER_VY_456.SetFloat("VAL", PLAYER_VY_458_val + 0.2f * RICHTER_462_val * (RANDOM_1_465_val - 0.5f));
            var PLAYER_Z_469 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_470 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_470_val = PLAYER_Z_470.GetFloat("VAL");
            var PLAYER_Z_471 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_471_val = PLAYER_Z_471.GetFloat("VAL");
            var RICHTER_473 = _world.GetObject(ObjectType.Skill, "RICHTER");
            var RICHTER_473_val = RICHTER_473.GetFloat("VAL");
            var RANDOM_2_476 = _world.GetObject(ObjectType.Skill, "RANDOM_2");
            var RANDOM_2_476_val = RANDOM_2_476.GetFloat("VAL");
            PLAYER_Z_469.SetFloat("VAL", PLAYER_Z_471_val + RICHTER_473_val * (RANDOM_2_476_val - 0.5f));
            var RANDOM_1_480 = _world.GetObject(ObjectType.Skill, "RANDOM_1");
            var RANDOM_1_480_val = RANDOM_1_480.GetFloat("VAL");
            var RANDOM_2_481 = _world.GetObject(ObjectType.Skill, "RANDOM_2");
            RANDOM_2_481.SetFloat("VAL", RANDOM_1_480_val);
            var RANDOM_1_483 = _world.GetObject(ObjectType.Skill, "RANDOM_1");
            RANDOM_1_483.SetFloat("VAL", UnityEngine.Random.value);
            NO_QUAKE:
            yield break;
            var KEY_INS_485 = _world.GetObject(ObjectType.Skill, "KEY_INS");
            var KEY_INS_485_val = KEY_INS_485.GetFloat("VAL");
            if (KEY_INS_485_val > 0f)
            {
                var PLAYER_ARC_486 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var PLAYER_ARC_487 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var PLAYER_ARC_487_val = PLAYER_ARC_487.GetFloat("VAL");
                var PLAYER_ARC_488 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var PLAYER_ARC_488_val = PLAYER_ARC_488.GetFloat("VAL");
                PLAYER_ARC_486.SetFloat("VAL", PLAYER_ARC_488_val - 0.1f);
            }
            var KEY_DEL_492 = _world.GetObject(ObjectType.Skill, "KEY_DEL");
            var KEY_DEL_492_val = KEY_DEL_492.GetFloat("VAL");
            if (KEY_DEL_492_val > 0f)
            {
                var PLAYER_ARC_493 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var PLAYER_ARC_494 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var PLAYER_ARC_494_val = PLAYER_ARC_494.GetFloat("VAL");
                var PLAYER_ARC_495 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var PLAYER_ARC_495_val = PLAYER_ARC_495.GetFloat("VAL");
                PLAYER_ARC_493.SetFloat("VAL", PLAYER_ARC_495_val + 0.1f);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SET_WALKING(IAcknexObject MY, IAcknexObject THERE)
        {
            var MODE_GEHEN_0 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var MODE_GEHEN_0_val = MODE_GEHEN_0.GetFloat("VAL");
            var MOVING_1 = _world.GetObject(ObjectType.Skill, "MOVING");
            MOVING_1.SetFloat("VAL", MODE_GEHEN_0_val);
            var FRIC_3 = _world.GetObject(ObjectType.Skill, "FRIC");
            FRIC_3.SetFloat("VAL", 0.2f);
            var STRENGTH_5 = _world.GetObject(ObjectType.Skill, "STRENGTH");
            STRENGTH_5.SetFloat("VAL", 0.15f);
            var WAVE_STR_7 = _world.GetObject(ObjectType.Skill, "WAVE_STR");
            WAVE_STR_7.SetFloat("VAL", 0f);
            var FLOAT_STR_9 = _world.GetObject(ObjectType.Skill, "FLOAT_STR");
            FLOAT_STR_9.SetFloat("VAL", 0f);
            var DUCK_STR_11 = _world.GetObject(ObjectType.Skill, "DUCK_STR");
            DUCK_STR_11.SetFloat("VAL", 0.5f);
            var FRIC_AIR_13 = _world.GetObject(ObjectType.Skill, "FRIC_AIR");
            FRIC_AIR_13.SetFloat("VAL", 0.04f);
            var GRAVITY_15 = _world.GetObject(ObjectType.Skill, "GRAVITY");
            GRAVITY_15.SetFloat("VAL", -0.15f);
            var MOVE_ME_16 = _world.AcknexObject.GetAcknexObject("MOVE_ME");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.16", MOVE_ME_16);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SET_SWIMMING(IAcknexObject MY, IAcknexObject THERE)
        {
            var FRIC_1 = _world.GetObject(ObjectType.Skill, "FRIC");
            FRIC_1.SetFloat("VAL", 0.3f);
            var MODE_SCHWIMMEN_2 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var MODE_SCHWIMMEN_2_val = MODE_SCHWIMMEN_2.GetFloat("VAL");
            var MOVING_3 = _world.GetObject(ObjectType.Skill, "MOVING");
            MOVING_3.SetFloat("VAL", MODE_SCHWIMMEN_2_val);
            var STRENGTH_5 = _world.GetObject(ObjectType.Skill, "STRENGTH");
            STRENGTH_5.SetFloat("VAL", 0.15f);
            var WAVE_STR_7 = _world.GetObject(ObjectType.Skill, "WAVE_STR");
            WAVE_STR_7.SetFloat("VAL", 0.08f);
            var FLOAT_STR_9 = _world.GetObject(ObjectType.Skill, "FLOAT_STR");
            FLOAT_STR_9.SetFloat("VAL", 0f);
            var DUCK_STR_11 = _world.GetObject(ObjectType.Skill, "DUCK_STR");
            DUCK_STR_11.SetFloat("VAL", 0.2f);
            var FRIC_AIR_13 = _world.GetObject(ObjectType.Skill, "FRIC_AIR");
            FRIC_AIR_13.SetFloat("VAL", 0.5f);
            var GRAVITY_15 = _world.GetObject(ObjectType.Skill, "GRAVITY");
            GRAVITY_15.SetFloat("VAL", -0.15f);
            var MOVE_ME_16 = _world.AcknexObject.GetAcknexObject("MOVE_ME");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.16", MOVE_ME_16);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SET_DIVING(IAcknexObject MY, IAcknexObject THERE)
        {
            var FRIC_1 = _world.GetObject(ObjectType.Skill, "FRIC");
            FRIC_1.SetFloat("VAL", 0.3f);
            var MODE_TAUCHEN_2 = _world.GetObject(ObjectType.Skill, "MODE_TAUCHEN");
            var MODE_TAUCHEN_2_val = MODE_TAUCHEN_2.GetFloat("VAL");
            var MOVING_3 = _world.GetObject(ObjectType.Skill, "MOVING");
            MOVING_3.SetFloat("VAL", MODE_TAUCHEN_2_val);
            var STRENGTH_5 = _world.GetObject(ObjectType.Skill, "STRENGTH");
            STRENGTH_5.SetFloat("VAL", 0.1f);
            var WAVE_STR_7 = _world.GetObject(ObjectType.Skill, "WAVE_STR");
            WAVE_STR_7.SetFloat("VAL", 0.03f);
            var FLOAT_STR_9 = _world.GetObject(ObjectType.Skill, "FLOAT_STR");
            FLOAT_STR_9.SetFloat("VAL", 0.05f);
            var DUCK_STR_11 = _world.GetObject(ObjectType.Skill, "DUCK_STR");
            DUCK_STR_11.SetFloat("VAL", 0f);
            var FRIC_AIR_13 = _world.GetObject(ObjectType.Skill, "FRIC_AIR");
            FRIC_AIR_13.SetFloat("VAL", 0.7f);
            var GRAVITY_15 = _world.GetObject(ObjectType.Skill, "GRAVITY");
            GRAVITY_15.SetFloat("VAL", 0f);
            var MOVE_ME_16 = _world.AcknexObject.GetAcknexObject("MOVE_ME");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.16", MOVE_ME_16);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SET_DEATH(IAcknexObject MY, IAcknexObject THERE)
        {
            var FRIC_1 = _world.GetObject(ObjectType.Skill, "FRIC");
            FRIC_1.SetFloat("VAL", 0.01f);
            var MODE_DEATH_2 = _world.GetObject(ObjectType.Skill, "MODE_DEATH");
            var MODE_DEATH_2_val = MODE_DEATH_2.GetFloat("VAL");
            var MOVING_3 = _world.GetObject(ObjectType.Skill, "MOVING");
            MOVING_3.SetFloat("VAL", MODE_DEATH_2_val);
            var STRENGTH_5 = _world.GetObject(ObjectType.Skill, "STRENGTH");
            STRENGTH_5.SetFloat("VAL", 0.1f);
            var WAVE_STR_7 = _world.GetObject(ObjectType.Skill, "WAVE_STR");
            WAVE_STR_7.SetFloat("VAL", 0.03f);
            var FLOAT_STR_9 = _world.GetObject(ObjectType.Skill, "FLOAT_STR");
            FLOAT_STR_9.SetFloat("VAL", 0.05f);
            var DUCK_STR_11 = _world.GetObject(ObjectType.Skill, "DUCK_STR");
            DUCK_STR_11.SetFloat("VAL", 0f);
            var FRIC_AIR_13 = _world.GetObject(ObjectType.Skill, "FRIC_AIR");
            FRIC_AIR_13.SetFloat("VAL", 0.7f);
            var GRAVITY_15 = _world.GetObject(ObjectType.Skill, "GRAVITY");
            GRAVITY_15.SetFloat("VAL", -0.35f);
            var MOVE_ME_16 = _world.AcknexObject.GetAcknexObject("MOVE_ME");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.16", MOVE_ME_16);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SET_MOVING(IAcknexObject MY, IAcknexObject THERE)
        {
            var MOVING_1 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_1_val = MOVING_1.GetFloat("VAL");
            if (MOVING_1_val == 0f)
            {
                yield break;
            }
            var MODE_GEHEN_2 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var MODE_GEHEN_2_val = MODE_GEHEN_2.GetFloat("VAL");
            var MOVING_3 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_3_val = MOVING_3.GetFloat("VAL");
            if (MOVING_3_val == MODE_GEHEN_2_val)
            {
                {
                    var enumerator = SET_WALKING(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            var MODE_SCHWIMMEN_4 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var MODE_SCHWIMMEN_4_val = MODE_SCHWIMMEN_4.GetFloat("VAL");
            var MOVING_5 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_5_val = MOVING_5.GetFloat("VAL");
            if (MOVING_5_val == MODE_SCHWIMMEN_4_val)
            {
                {
                    var enumerator = SET_SWIMMING(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            var MODE_TAUCHEN_6 = _world.GetObject(ObjectType.Skill, "MODE_TAUCHEN");
            var MODE_TAUCHEN_6_val = MODE_TAUCHEN_6.GetFloat("VAL");
            var MOVING_7 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_7_val = MOVING_7.GetFloat("VAL");
            if (MOVING_7_val == MODE_TAUCHEN_6_val)
            {
                {
                    var enumerator = SET_DIVING(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator STOP_MOVING(IAcknexObject MY, IAcknexObject THERE)
        {
            var PLAYER_VX_1 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            PLAYER_VX_1.SetFloat("VAL", 0f);
            var PLAYER_VY_3 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            PLAYER_VY_3.SetFloat("VAL", 0f);
            var PLAYER_VZ_5 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            PLAYER_VZ_5.SetFloat("VAL", 0f);
            var PLAYER_VROT_7 = _world.GetObject(ObjectType.Skill, "PLAYER_VROT");
            PLAYER_VROT_7.SetFloat("VAL", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SET_BLUE(IAcknexObject MY, IAcknexObject THERE)
        {
            var PAL_BLUE_0 = _world.AcknexObject.GetAcknexObject("PAL_BLUE");
            _world.FadePal(PAL_BLUE_0, 0.7f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator RESET_BLUE(IAcknexObject MY, IAcknexObject THERE)
        {
            var PAL_BLUE_0 = _world.AcknexObject.GetAcknexObject("PAL_BLUE");
            _world.FadePal(PAL_BLUE_0, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator ENTER_WATER(IAcknexObject MY, IAcknexObject THERE)
        {
            var FWT01SND_0 = _world.AcknexObject.GetAcknexObject("FWT01SND");
            _world.PlaySound(FWT01SND_0, 0.8f, null);
            {
                var enumerator = SET_SWIMMING(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator LEAVE_WATER(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = SET_WALKING(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator DIVE_UP(IAcknexObject MY, IAcknexObject THERE)
        {
            var PLAYERINSPSND_0 = _world.AcknexObject.GetAcknexObject("PLAYERINSPSND");
            _world.PlaySound(PLAYERINSPSND_0, 0.8f, null);
            {
                var enumerator = RESET_BLUE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator REGIO_DIVE(IAcknexObject MY, IAcknexObject THERE)
        {
            var UNDERWATER_1 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            var UNDERWATER_1_val = UNDERWATER_1.GetFloat("VAL");
            if (UNDERWATER_1_val == 1f)
            {
                yield break;
            }
            var UNDERWATER_3 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            UNDERWATER_3.SetFloat("VAL", 1f);
            var FWT01SND_4 = _world.AcknexObject.GetAcknexObject("FWT01SND");
            _world.PlaySound(FWT01SND_4, 0.5f, null);
            var PLAYER_ARC_6 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var PLAYER_ARC_7 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var PLAYER_ARC_7_val = PLAYER_ARC_7.GetFloat("VAL");
            var PLAYER_ARC_8 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var PLAYER_ARC_8_val = PLAYER_ARC_8.GetFloat("VAL");
            PLAYER_ARC_6.SetFloat("VAL", PLAYER_ARC_8_val + 0.3f);
            var MY_SIZE_11 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var MY_SIZE_12 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var MY_SIZE_12_val = MY_SIZE_12.GetFloat("VAL");
            var MY_SIZE_13 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var MY_SIZE_13_val = MY_SIZE_13.GetFloat("VAL");
            MY_SIZE_11.SetFloat("VAL", MY_SIZE_13_val - 0.2f);
            var PLAYER_SIZE_16 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_17 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_17_val = PLAYER_SIZE_17.GetFloat("VAL");
            var PLAYER_SIZE_18 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_18_val = PLAYER_SIZE_18.GetFloat("VAL");
            PLAYER_SIZE_16.SetFloat("VAL", PLAYER_SIZE_18_val - 0.2f);
            var PLAYER_Z_21 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_22 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_22_val = PLAYER_Z_22.GetFloat("VAL");
            var PLAYER_Z_23 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_23_val = PLAYER_Z_23.GetFloat("VAL");
            PLAYER_Z_21.SetFloat("VAL", PLAYER_Z_23_val - 0.2f);
            var PLAYER_LIGHT_27 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            var PLAYER_LIGHT_27_val = PLAYER_LIGHT_27.GetFloat("VAL");
            var PLAYER_LIGHT_28 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            PLAYER_LIGHT_28.SetFloat("VAL", PLAYER_LIGHT_27_val + 0.2f);
            {
                var enumerator = _world.CallSynonymAction("SET_UNDERWATER", MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            {
                var enumerator = SET_DIVING(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator REGIO_ARISE(IAcknexObject MY, IAcknexObject THERE)
        {
            var UNDERWATER_1 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            var UNDERWATER_1_val = UNDERWATER_1.GetFloat("VAL");
            if (UNDERWATER_1_val == 0f)
            {
                yield break;
            }
            var UNDERWATER_3 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            UNDERWATER_3.SetFloat("VAL", 0f);
            var PLAYER_ARC_4 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var PLAYER_ARC_5 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var PLAYER_ARC_5_val = PLAYER_ARC_5.GetFloat("VAL");
            var PLAYER_ARC_6 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var PLAYER_ARC_6_val = PLAYER_ARC_6.GetFloat("VAL");
            PLAYER_ARC_4.SetFloat("VAL", PLAYER_ARC_6_val - 0.3f);
            var MY_SIZE_9 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var MY_SIZE_10 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var MY_SIZE_10_val = MY_SIZE_10.GetFloat("VAL");
            var MY_SIZE_11 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var MY_SIZE_11_val = MY_SIZE_11.GetFloat("VAL");
            MY_SIZE_9.SetFloat("VAL", MY_SIZE_11_val + 0.2f);
            var PLAYER_SIZE_14 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_15 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_15_val = PLAYER_SIZE_15.GetFloat("VAL");
            var PLAYER_SIZE_16 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_16_val = PLAYER_SIZE_16.GetFloat("VAL");
            PLAYER_SIZE_14.SetFloat("VAL", PLAYER_SIZE_16_val + 0.2f);
            var PLAYER_Z_19 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_20 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_20_val = PLAYER_Z_20.GetFloat("VAL");
            var PLAYER_Z_21 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_21_val = PLAYER_Z_21.GetFloat("VAL");
            PLAYER_Z_19.SetFloat("VAL", PLAYER_Z_21_val + 0.2f);
            var PLAYER_LIGHT_25 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            var PLAYER_LIGHT_25_val = PLAYER_LIGHT_25.GetFloat("VAL");
            var PLAYER_LIGHT_26 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            PLAYER_LIGHT_26.SetFloat("VAL", PLAYER_LIGHT_25_val + -0.2f);
            {
                var enumerator = _world.CallSynonymAction("SET_OVERWATER", MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            {
                var enumerator = SET_SWIMMING(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            {
                var enumerator = DIVE_UP(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator HITPLAYER(IAcknexObject MY, IAcknexObject THERE)
        {
            var MODE_DEATH_0 = _world.GetObject(ObjectType.Skill, "MODE_DEATH");
            var MODE_DEATH_0_val = MODE_DEATH_0.GetFloat("VAL");
            var MOVING_1 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_1_val = MOVING_1.GetFloat("VAL");
            if (MOVING_1_val == MODE_DEATH_0_val)
            {
                yield break;
            }
            var GOD_MODE_3 = _world.GetObject(ObjectType.Skill, "GOD_MODE");
            var GOD_MODE_3_val = GOD_MODE_3.GetFloat("VAL");
            if (GOD_MODE_3_val > 0f)
            {
                yield break;
            }
            var HITSERIOUSNESS_4 = _world.GetObject(ObjectType.Skill, "HITSERIOUSNESS");
            var HITSERIOUSNESS_5 = _world.GetObject(ObjectType.Skill, "HITSERIOUSNESS");
            var HITSERIOUSNESS_5_val = HITSERIOUSNESS_5.GetFloat("VAL");
            var PLAYER_RESULT_6 = _world.GetObject(ObjectType.Skill, "PLAYER_RESULT");
            var PLAYER_RESULT_6_val = PLAYER_RESULT_6.GetFloat("VAL");
            var TOUGHNESS_11 = _world.GetObject(ObjectType.Skill, "TOUGHNESS");
            var TOUGHNESS_11_val = TOUGHNESS_11.GetFloat("VAL");
            HITSERIOUSNESS_4.SetFloat("VAL", PLAYER_RESULT_6_val * -5f * TOUGHNESS_11_val);
            var PLAYER_ARMOUR_13 = _world.GetObject(ObjectType.Skill, "PLAYER_ARMOUR");
            var PLAYER_ARMOUR_13_val = PLAYER_ARMOUR_13.GetFloat("VAL");
            if (PLAYER_ARMOUR_13_val == 0f)
            {
                goto CONT;
            }
            var HITSERIOUSNESS_14 = _world.GetObject(ObjectType.Skill, "HITSERIOUSNESS");
            var HITSERIOUSNESS_14_val = HITSERIOUSNESS_14.GetFloat("VAL");
            var PLAYER_ARMOUR_15 = _world.GetObject(ObjectType.Skill, "PLAYER_ARMOUR");
            var PLAYER_ARMOUR_15_val = PLAYER_ARMOUR_15.GetFloat("VAL");
            var PLAYER_ARMOUR_16 = _world.GetObject(ObjectType.Skill, "PLAYER_ARMOUR");
            PLAYER_ARMOUR_16.SetFloat("VAL", PLAYER_ARMOUR_15_val + HITSERIOUSNESS_14_val);
            var HITSERIOUSNESS_17 = _world.GetObject(ObjectType.Skill, "HITSERIOUSNESS");
            var HITSERIOUSNESS_18 = _world.GetObject(ObjectType.Skill, "HITSERIOUSNESS");
            var HITSERIOUSNESS_18_val = HITSERIOUSNESS_18.GetFloat("VAL");
            var HITSERIOUSNESS_19 = _world.GetObject(ObjectType.Skill, "HITSERIOUSNESS");
            var HITSERIOUSNESS_19_val = HITSERIOUSNESS_19.GetFloat("VAL");
            HITSERIOUSNESS_17.SetFloat("VAL", HITSERIOUSNESS_19_val / 4f);
            CONT:
            var PLAYER_ANGLE_22 = _world.GetObject(ObjectType.Skill, "PLAYER_ANGLE");
            var PLAYER_ANGLE_23 = _world.GetObject(ObjectType.Skill, "PLAYER_ANGLE");
            var PLAYER_ANGLE_23_val = PLAYER_ANGLE_23.GetFloat("VAL");
            var PLAYER_ANGLE_24 = _world.GetObject(ObjectType.Skill, "PLAYER_ANGLE");
            var PLAYER_ANGLE_24_val = PLAYER_ANGLE_24.GetFloat("VAL");
            var TOUGHNESS_34 = _world.GetObject(ObjectType.Skill, "TOUGHNESS");
            var TOUGHNESS_34_val = TOUGHNESS_34.GetFloat("VAL");
            PLAYER_ANGLE_22.SetFloat("VAL", PLAYER_ANGLE_24_val + (UnityEngine.Random.value * 0.2f - 0.1f) * TOUGHNESS_34_val);
            var PLAYER_TILT_35 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_36 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_36_val = PLAYER_TILT_36.GetFloat("VAL");
            var PLAYER_TILT_37 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_37_val = PLAYER_TILT_37.GetFloat("VAL");
            var TOUGHNESS_47 = _world.GetObject(ObjectType.Skill, "TOUGHNESS");
            var TOUGHNESS_47_val = TOUGHNESS_47.GetFloat("VAL");
            PLAYER_TILT_35.SetFloat("VAL", PLAYER_TILT_37_val + (UnityEngine.Random.value * 0.2f - 0.1f) * TOUGHNESS_47_val);
            var HITSERIOUSNESS_48 = _world.GetObject(ObjectType.Skill, "HITSERIOUSNESS");
            var HITSERIOUSNESS_48_val = HITSERIOUSNESS_48.GetFloat("VAL");
            var PLAYER_HEALTH_49 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            var PLAYER_HEALTH_49_val = PLAYER_HEALTH_49.GetFloat("VAL");
            var PLAYER_HEALTH_50 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            PLAYER_HEALTH_50.SetFloat("VAL", PLAYER_HEALTH_49_val + HITSERIOUSNESS_48_val);
            var PLAYER_HIT_52 = _world.GetObject(ObjectType.Skill, "PLAYER_HIT");
            var PLAYER_HIT_52_val = PLAYER_HIT_52.GetFloat("VAL");
            if (PLAYER_HIT_52_val != 0f)
            {
                yield break;
            }
            var PLAYER_HIT_54 = _world.GetObject(ObjectType.Skill, "PLAYER_HIT");
            PLAYER_HIT_54.SetFloat("VAL", 1f);
            var HITVALUE_55 = _world.GetObject(ObjectType.Skill, "HITVALUE");
            var HITVALUE_56 = _world.GetObject(ObjectType.Skill, "HITVALUE");
            var HITVALUE_56_val = HITVALUE_56.GetFloat("VAL");
            var HITSERIOUSNESS_59 = _world.GetObject(ObjectType.Skill, "HITSERIOUSNESS");
            var HITSERIOUSNESS_59_val = HITSERIOUSNESS_59.GetFloat("VAL");
            var PLAYER_HEALTH_67 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            var PLAYER_HEALTH_67_val = PLAYER_HEALTH_67.GetFloat("VAL");
            HITVALUE_55.SetFloat("VAL", 0.5f * HITSERIOUSNESS_59_val / -100f + (100f - PLAYER_HEALTH_67_val) / 2f);
            var UNDERWATER_72 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            var UNDERWATER_72_val = UNDERWATER_72.GetFloat("VAL");
            if (UNDERWATER_72_val > 0f)
            {
                goto BLUB;
            }
            var PLAYER_HEALTH_74 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            var PLAYER_HEALTH_74_val = PLAYER_HEALTH_74.GetFloat("VAL");
            if (PLAYER_HEALTH_74_val < 0.1f)
            {
                goto CONT2;
            }
            if (UnityEngine.Random.value < 0.3f)
            {
                goto HIT01;
            }
            if (UnityEngine.Random.value < 0.6f)
            {
                goto HIT02;
            }
            var HIT03SND_79 = _world.AcknexObject.GetAcknexObject("HIT03SND");
            _world.PlaySound(HIT03SND_79, 0.7f, null);
            goto CONT2;
            HIT01:
            var HIT01SND_81 = _world.AcknexObject.GetAcknexObject("HIT01SND");
            _world.PlaySound(HIT01SND_81, 0.5f, null);
            goto CONT2;
            HIT02:
            var HIT02SND_83 = _world.AcknexObject.GetAcknexObject("HIT02SND");
            _world.PlaySound(HIT02SND_83, 0.3f, null);
            goto CONT2;
            BLUB:
            var HIT04SND_85 = _world.AcknexObject.GetAcknexObject("HIT04SND");
            _world.PlaySound(HIT04SND_85, 0.8f, null);
            CONT2:
            var KILLPLAYER_87 = _world.AcknexObject.GetAcknexObject("KILLPLAYER");
            var temp_90 = _world.AcknexObject?.GetAcknexObject("EACH_TICK.8");
            if (temp_90 != KILLPLAYER_87)
            {
                var REDOUT_91 = _world.AcknexObject.GetAcknexObject("REDOUT");
                _world.AcknexObject.SetAcknexObject("EACH_TICK.8", REDOUT_91);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator REDOUT(IAcknexObject MY, IAcknexObject THERE)
        {
            var REDVALUE_1 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_1_val = REDVALUE_1.GetFloat("VAL");
            var REDVALUE_2 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            REDVALUE_2.SetFloat("VAL", REDVALUE_1_val + 0.1f);
            var PLAYER_ARC_4 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var PLAYER_ARC_4_val = PLAYER_ARC_4.GetFloat("VAL");
            var PLAYER_ARC_5 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            PLAYER_ARC_5.SetFloat("VAL", PLAYER_ARC_4_val + -0.01f);
            var PAL_RED_6 = _world.AcknexObject.GetAcknexObject("PAL_RED");
            var REDVALUE_7 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_7_val = REDVALUE_7.GetFloat("VAL");
            _world.FadePal(PAL_RED_6, REDVALUE_7_val);
            var HITVALUE_8 = _world.GetObject(ObjectType.Skill, "HITVALUE");
            var HITVALUE_8_val = HITVALUE_8.GetFloat("VAL");
            var REDVALUE_9 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_9_val = REDVALUE_9.GetFloat("VAL");
            if (REDVALUE_9_val < HITVALUE_8_val)
            {
                yield break;
            }
            var PLAYER_HEALTH_11 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            var PLAYER_HEALTH_11_val = PLAYER_HEALTH_11.GetFloat("VAL");
            if (PLAYER_HEALTH_11_val < 1f)
            {
                goto KILL;
            }
            var REDIN_12 = _world.AcknexObject.GetAcknexObject("REDIN");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.8", REDIN_12);
            yield break;
            KILL:
            var KILLPLAYER_15 = _world.AcknexObject.GetAcknexObject("KILLPLAYER");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.8", KILLPLAYER_15);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator REDIN(IAcknexObject MY, IAcknexObject THERE)
        {
            var REDVALUE_1 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_1_val = REDVALUE_1.GetFloat("VAL");
            var REDVALUE_2 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            REDVALUE_2.SetFloat("VAL", REDVALUE_1_val + -0.1f);
            var PLAYER_ARC_4 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var PLAYER_ARC_4_val = PLAYER_ARC_4.GetFloat("VAL");
            var PLAYER_ARC_5 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            PLAYER_ARC_5.SetFloat("VAL", PLAYER_ARC_4_val + 0.01f);
            var PAL_RED_6 = _world.AcknexObject.GetAcknexObject("PAL_RED");
            var REDVALUE_7 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_7_val = REDVALUE_7.GetFloat("VAL");
            _world.FadePal(PAL_RED_6, REDVALUE_7_val);
            var REDVALUE_9 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_9_val = REDVALUE_9.GetFloat("VAL");
            if (REDVALUE_9_val < 0f)
            {
                var REDVALUE_11 = _world.GetObject(ObjectType.Skill, "REDVALUE");
                REDVALUE_11.SetFloat("VAL", 0f);
            }
            var REDVALUE_13 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_13_val = REDVALUE_13.GetFloat("VAL");
            if (REDVALUE_13_val > 0f)
            {
                yield break;
            }
            var UNDERWATER_15 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            var UNDERWATER_15_val = UNDERWATER_15.GetFloat("VAL");
            if (UNDERWATER_15_val == 0f)
            {
                goto NOWATER;
            }
            {
                var enumerator = SET_BLUE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var PLAYER_ARC_17 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            PLAYER_ARC_17.SetFloat("VAL", 1.3f);
            goto FINISH;
            NOWATER:
            var PLAYER_ARC_19 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            PLAYER_ARC_19.SetFloat("VAL", 1f);
            FINISH:
            var PLAYER_HIT_21 = _world.GetObject(ObjectType.Skill, "PLAYER_HIT");
            PLAYER_HIT_21.SetFloat("VAL", 0f);
            _world.AcknexObject.SetAcknexObject("EACH_TICK.8", null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator FLASHPLAYER(IAcknexObject MY, IAcknexObject THERE)
        {
            var GOD_MODE_1 = _world.GetObject(ObjectType.Skill, "GOD_MODE");
            var GOD_MODE_1_val = GOD_MODE_1.GetFloat("VAL");
            if (GOD_MODE_1_val > 0f)
            {
                yield break;
            }
            var HITSERIOUSNESS_2 = _world.GetObject(ObjectType.Skill, "HITSERIOUSNESS");
            var HITSERIOUSNESS_3 = _world.GetObject(ObjectType.Skill, "HITSERIOUSNESS");
            var HITSERIOUSNESS_3_val = HITSERIOUSNESS_3.GetFloat("VAL");
            var PLAYER_RESULT_4 = _world.GetObject(ObjectType.Skill, "PLAYER_RESULT");
            var PLAYER_RESULT_4_val = PLAYER_RESULT_4.GetFloat("VAL");
            var TOUGHNESS_12 = _world.GetObject(ObjectType.Skill, "TOUGHNESS");
            var TOUGHNESS_12_val = TOUGHNESS_12.GetFloat("VAL");
            HITSERIOUSNESS_2.SetFloat("VAL", PLAYER_RESULT_4_val * -5f * (0.5f + TOUGHNESS_12_val / 2f));
            var PLAYER_ARMOUR_17 = _world.GetObject(ObjectType.Skill, "PLAYER_ARMOUR");
            var PLAYER_ARMOUR_17_val = PLAYER_ARMOUR_17.GetFloat("VAL");
            if (PLAYER_ARMOUR_17_val == 0f)
            {
                goto CONT;
            }
            var HITSERIOUSNESS_18 = _world.GetObject(ObjectType.Skill, "HITSERIOUSNESS");
            var HITSERIOUSNESS_18_val = HITSERIOUSNESS_18.GetFloat("VAL");
            var PLAYER_ARMOUR_19 = _world.GetObject(ObjectType.Skill, "PLAYER_ARMOUR");
            var PLAYER_ARMOUR_19_val = PLAYER_ARMOUR_19.GetFloat("VAL");
            var PLAYER_ARMOUR_20 = _world.GetObject(ObjectType.Skill, "PLAYER_ARMOUR");
            PLAYER_ARMOUR_20.SetFloat("VAL", PLAYER_ARMOUR_19_val + HITSERIOUSNESS_18_val);
            var HITSERIOUSNESS_21 = _world.GetObject(ObjectType.Skill, "HITSERIOUSNESS");
            var HITSERIOUSNESS_22 = _world.GetObject(ObjectType.Skill, "HITSERIOUSNESS");
            var HITSERIOUSNESS_22_val = HITSERIOUSNESS_22.GetFloat("VAL");
            var HITSERIOUSNESS_23 = _world.GetObject(ObjectType.Skill, "HITSERIOUSNESS");
            var HITSERIOUSNESS_23_val = HITSERIOUSNESS_23.GetFloat("VAL");
            HITSERIOUSNESS_21.SetFloat("VAL", HITSERIOUSNESS_23_val / 4f);
            CONT:
            var HITSERIOUSNESS_26 = _world.GetObject(ObjectType.Skill, "HITSERIOUSNESS");
            var HITSERIOUSNESS_26_val = HITSERIOUSNESS_26.GetFloat("VAL");
            var PLAYER_HEALTH_27 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            var PLAYER_HEALTH_27_val = PLAYER_HEALTH_27.GetFloat("VAL");
            var PLAYER_HEALTH_28 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            PLAYER_HEALTH_28.SetFloat("VAL", PLAYER_HEALTH_27_val + HITSERIOUSNESS_26_val);
            var PLAYER_HIT_30 = _world.GetObject(ObjectType.Skill, "PLAYER_HIT");
            var PLAYER_HIT_30_val = PLAYER_HIT_30.GetFloat("VAL");
            if (PLAYER_HIT_30_val != 0f)
            {
                yield break;
            }
            var PLAYER_HIT_32 = _world.GetObject(ObjectType.Skill, "PLAYER_HIT");
            PLAYER_HIT_32.SetFloat("VAL", 1f);
            var HITVALUE_33 = _world.GetObject(ObjectType.Skill, "HITVALUE");
            var HITVALUE_34 = _world.GetObject(ObjectType.Skill, "HITVALUE");
            var HITVALUE_34_val = HITVALUE_34.GetFloat("VAL");
            var HITSERIOUSNESS_37 = _world.GetObject(ObjectType.Skill, "HITSERIOUSNESS");
            var HITSERIOUSNESS_37_val = HITSERIOUSNESS_37.GetFloat("VAL");
            var PLAYER_HEALTH_45 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            var PLAYER_HEALTH_45_val = PLAYER_HEALTH_45.GetFloat("VAL");
            HITVALUE_33.SetFloat("VAL", 0.5f * HITSERIOUSNESS_37_val / -100f + (100f - PLAYER_HEALTH_45_val) / 2f);
            var PLAYER_HEALTH_50 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            var PLAYER_HEALTH_50_val = PLAYER_HEALTH_50.GetFloat("VAL");
            if (PLAYER_HEALTH_50_val > 0f)
            {
                var HIT01SND_51 = _world.AcknexObject.GetAcknexObject("HIT01SND");
                _world.PlaySound(HIT01SND_51, 0.5f, null);
            }
            var FLASHOUT_53 = _world.AcknexObject.GetAcknexObject("FLASHOUT");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.8", FLASHOUT_53);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator FLASHOUT(IAcknexObject MY, IAcknexObject THERE)
        {
            var REDVALUE_1 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_1_val = REDVALUE_1.GetFloat("VAL");
            var REDVALUE_2 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            REDVALUE_2.SetFloat("VAL", REDVALUE_1_val + 0.1f);
            var PAL_FLASH_3 = _world.AcknexObject.GetAcknexObject("PAL_FLASH");
            var REDVALUE_4 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_4_val = REDVALUE_4.GetFloat("VAL");
            _world.FadePal(PAL_FLASH_3, REDVALUE_4_val);
            var HITVALUE_5 = _world.GetObject(ObjectType.Skill, "HITVALUE");
            var HITVALUE_5_val = HITVALUE_5.GetFloat("VAL");
            var REDVALUE_6 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_6_val = REDVALUE_6.GetFloat("VAL");
            if (REDVALUE_6_val < HITVALUE_5_val)
            {
                yield break;
            }
            var PLAYER_HEALTH_8 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            var PLAYER_HEALTH_8_val = PLAYER_HEALTH_8.GetFloat("VAL");
            if (PLAYER_HEALTH_8_val < 1f)
            {
                goto KILL;
            }
            var FLASHIN_9 = _world.AcknexObject.GetAcknexObject("FLASHIN");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.8", FLASHIN_9);
            yield break;
            KILL:
            var KILLPLAYER_12 = _world.AcknexObject.GetAcknexObject("KILLPLAYER");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.8", KILLPLAYER_12);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator FLASHIN(IAcknexObject MY, IAcknexObject THERE)
        {
            var REDVALUE_1 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_1_val = REDVALUE_1.GetFloat("VAL");
            var REDVALUE_2 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            REDVALUE_2.SetFloat("VAL", REDVALUE_1_val + -0.1f);
            var PAL_FLASH_3 = _world.AcknexObject.GetAcknexObject("PAL_FLASH");
            var REDVALUE_4 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_4_val = REDVALUE_4.GetFloat("VAL");
            _world.FadePal(PAL_FLASH_3, REDVALUE_4_val);
            var REDVALUE_6 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_6_val = REDVALUE_6.GetFloat("VAL");
            if (REDVALUE_6_val < 0f)
            {
                var REDVALUE_8 = _world.GetObject(ObjectType.Skill, "REDVALUE");
                REDVALUE_8.SetFloat("VAL", 0f);
            }
            var REDVALUE_10 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_10_val = REDVALUE_10.GetFloat("VAL");
            if (REDVALUE_10_val > 0f)
            {
                yield break;
            }
            var UNDERWATER_12 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            var UNDERWATER_12_val = UNDERWATER_12.GetFloat("VAL");
            if (UNDERWATER_12_val != 0f)
            {
                {
                    var enumerator = SET_BLUE(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
            }
            _world.AcknexObject.SetAcknexObject("EACH_TICK.8", null);
            var PLAYER_HIT_17 = _world.GetObject(ObjectType.Skill, "PLAYER_HIT");
            PLAYER_HIT_17.SetFloat("VAL", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator HITPLAYERDELAY(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)8f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            {
                var enumerator = HITPLAYER(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator KILLPLAYER(IAcknexObject MY, IAcknexObject THERE)
        {
            var MODE_DEATH_0 = _world.GetObject(ObjectType.Skill, "MODE_DEATH");
            var MODE_DEATH_0_val = MODE_DEATH_0.GetFloat("VAL");
            var MOVING_1 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_1_val = MOVING_1.GetFloat("VAL");
            if (MOVING_1_val == MODE_DEATH_0_val)
            {
                goto DEATH;
            }
            _world.AcknexObject.SetAcknexObject("IF_ESC", null);
            var SELECTNONE_4 = _world.AcknexObject.GetAcknexObject("SELECTNONE");
            _world.AcknexObject.SetAcknexObject("EACH_SEC.1", SELECTNONE_4);
            var PAL_RED_7 = _world.AcknexObject.GetAcknexObject("PAL_RED");
            _world.FadePal(PAL_RED_7, 0.5f);
            var DEATH00SND_9 = _world.AcknexObject.GetAcknexObject("DEATH00SND");
            _world.PlaySound(DEATH00SND_9, 1f, null);
            {
                var enumerator = SET_DEATH(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var DEATHCOUNTER_12 = _world.GetObject(ObjectType.Skill, "DEATHCOUNTER");
            DEATHCOUNTER_12.SetFloat("VAL", 0f);
            yield break;
            DEATH:
            var DEATHCOUNTER_14 = _world.GetObject(ObjectType.Skill, "DEATHCOUNTER");
            var DEATHCOUNTER_14_val = DEATHCOUNTER_14.GetFloat("VAL");
            var DEATHCOUNTER_15 = _world.GetObject(ObjectType.Skill, "DEATHCOUNTER");
            DEATHCOUNTER_15.SetFloat("VAL", DEATHCOUNTER_14_val + 1f);
            var PLAYER_VX_16 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_17 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_17_val = PLAYER_VX_17.GetFloat("VAL");
            var PLAYER_VX_18 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_18_val = PLAYER_VX_18.GetFloat("VAL");
            PLAYER_VX_16.SetFloat("VAL", PLAYER_VX_18_val * 0.5f);
            var PLAYER_VY_21 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_22 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_22_val = PLAYER_VY_22.GetFloat("VAL");
            var PLAYER_VY_23 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_23_val = PLAYER_VY_23.GetFloat("VAL");
            PLAYER_VY_21.SetFloat("VAL", PLAYER_VY_23_val * 0.5f);
            var DEATHCOUNTER_27 = _world.GetObject(ObjectType.Skill, "DEATHCOUNTER");
            var DEATHCOUNTER_27_val = DEATHCOUNTER_27.GetFloat("VAL");
            if (DEATHCOUNTER_27_val < 48f)
            {
                yield break;
            }
            var DEATHCOUNTER_29 = _world.GetObject(ObjectType.Skill, "DEATHCOUNTER");
            DEATHCOUNTER_29.SetFloat("VAL", 0f);
            _world.SetSynonymObject("LEVEL_STRING", null);
            var ENDOFLEVEL_32 = _world.AcknexObject.GetAcknexObject("ENDOFLEVEL");
            _world.AcknexObject.SetAcknexObject("EACH_SEC.1", ENDOFLEVEL_32);
            _world.AcknexObject.SetAcknexObject("EACH_TICK.8", null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator FINISHPLAYER(IAcknexObject MY, IAcknexObject THERE)
        {
            var PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            PLAYER_HEALTH_1.SetFloat("VAL", 0.5f);
            {
                var enumerator = HITPLAYER(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator TOGGLEGODMODE(IAcknexObject MY, IAcknexObject THERE)
        {
            _world.AcknexObject.SetAcknexObject("IF_D", null);
            var ALARM03SND_2 = _world.AcknexObject.GetAcknexObject("ALARM03SND");
            _world.PlaySound(ALARM03SND_2, 0.7f, null);
            var GOD_MODE_5 = _world.GetObject(ObjectType.Skill, "GOD_MODE");
            var GOD_MODE_5_val = GOD_MODE_5.GetFloat("VAL");
            if (GOD_MODE_5_val < 1f)
            {
                goto GODMODE;
            }
            var HLP06STR_6 = _world.AcknexObject.GetAcknexObject("HLP06STR");
            _world.SetSynonymObject("MESSAGE_TEXT", HLP06STR_6);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var GOD_MODE_9 = _world.GetObject(ObjectType.Skill, "GOD_MODE");
            GOD_MODE_9.SetFloat("VAL", 0f);
            yield break;
            GODMODE:
            var HLP05STR_10 = _world.AcknexObject.GetAcknexObject("HLP05STR");
            _world.SetSynonymObject("MESSAGE_TEXT", HLP05STR_10);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var GOD_MODE_13 = _world.GetObject(ObjectType.Skill, "GOD_MODE");
            GOD_MODE_13.SetFloat("VAL", 1f);
            var HAS_MP5_15 = _world.GetObject(ObjectType.Skill, "HAS_MP5");
            HAS_MP5_15.SetFloat("VAL", 1f);
            var HAS_GRANADE_17 = _world.GetObject(ObjectType.Skill, "HAS_GRANADE");
            HAS_GRANADE_17.SetFloat("VAL", 1f);
            var HAS_STINGER_19 = _world.GetObject(ObjectType.Skill, "HAS_STINGER");
            HAS_STINGER_19.SetFloat("VAL", 1f);
            var HAS_QUANTUM_21 = _world.GetObject(ObjectType.Skill, "HAS_QUANTUM");
            HAS_QUANTUM_21.SetFloat("VAL", 1f);
            var HAS_PDA_23 = _world.GetObject(ObjectType.Skill, "HAS_PDA");
            HAS_PDA_23.SetFloat("VAL", 1f);
            var AMMO_MP5_25 = _world.GetObject(ObjectType.Skill, "AMMO_MP5");
            AMMO_MP5_25.SetFloat("VAL", 999f);
            var AMMO_GRANADE_27 = _world.GetObject(ObjectType.Skill, "AMMO_GRANADE");
            AMMO_GRANADE_27.SetFloat("VAL", 999f);
            var AMMO_STINGER_29 = _world.GetObject(ObjectType.Skill, "AMMO_STINGER");
            AMMO_STINGER_29.SetFloat("VAL", 999f);
            var AMMO_QUANTUM_31 = _world.GetObject(ObjectType.Skill, "AMMO_QUANTUM");
            AMMO_QUANTUM_31.SetFloat("VAL", 999f);
            var KEY1_33 = _world.GetObject(ObjectType.Skill, "KEY1");
            KEY1_33.SetFloat("VAL", 1f);
            var KEY2_35 = _world.GetObject(ObjectType.Skill, "KEY2");
            KEY2_35.SetFloat("VAL", 1f);
            var KEY3_37 = _world.GetObject(ObjectType.Skill, "KEY3");
            KEY3_37.SetFloat("VAL", 1f);
            var KEY4_39 = _world.GetObject(ObjectType.Skill, "KEY4");
            KEY4_39.SetFloat("VAL", 1f);
            {
                var enumerator = SHOWAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator SETCKEY(IAcknexObject MY, IAcknexObject THERE)
        {
            var SETGKEY_0 = _world.AcknexObject.GetAcknexObject("SETGKEY");
            _world.AcknexObject.SetAcknexObject("IF_C", SETGKEY_0);
            var GODCOUNTER_3 = _world.GetObject(ObjectType.Skill, "GODCOUNTER");
            GODCOUNTER_3.SetFloat("VAL", 3f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SETGKEY(IAcknexObject MY, IAcknexObject THERE)
        {
            _world.AcknexObject.SetAcknexObject("IF_C", null);
            var SETOKEY_2 = _world.AcknexObject.GetAcknexObject("SETOKEY");
            _world.AcknexObject.SetAcknexObject("IF_G", SETOKEY_2);
            var GODCOUNTER_5 = _world.GetObject(ObjectType.Skill, "GODCOUNTER");
            GODCOUNTER_5.SetFloat("VAL", 3f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SETOKEY(IAcknexObject MY, IAcknexObject THERE)
        {
            _world.AcknexObject.SetAcknexObject("IF_G", null);
            var SETDKEY_2 = _world.AcknexObject.GetAcknexObject("SETDKEY");
            _world.AcknexObject.SetAcknexObject("IF_O", SETDKEY_2);
            var GODCOUNTER_5 = _world.GetObject(ObjectType.Skill, "GODCOUNTER");
            GODCOUNTER_5.SetFloat("VAL", 3f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SETDKEY(IAcknexObject MY, IAcknexObject THERE)
        {
            _world.AcknexObject.SetAcknexObject("IF_O", null);
            var TOGGLEGODMODE_2 = _world.AcknexObject.GetAcknexObject("TOGGLEGODMODE");
            _world.AcknexObject.SetAcknexObject("IF_D", TOGGLEGODMODE_2);
            var GODCOUNTER_5 = _world.GetObject(ObjectType.Skill, "GODCOUNTER");
            GODCOUNTER_5.SetFloat("VAL", 3f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator FIRE(IAcknexObject MY, IAcknexObject THERE)
        {
            var GUNFIRING_1 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            GUNFIRING_1.SetFloat("VAL", 1f);
            _world.AcknexObject.SetAcknexObject("IF_CTRL", null);
            _world.AcknexObject.SetAcknexObject("IF_LEFT", null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            FIRE:
            var MP5_02OVL_7 = _world.AcknexObject.GetAcknexObject("MP5_02OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_02OVL_7);
            var AMMO_11 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_11_val = AMMO_11.GetFloat("VAL");
            if (AMMO_11_val == 0f)
            {
                goto NOAMMO;
            }
            var AMMO_12 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_13 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_13_val = AMMO_13.GetFloat("VAL");
            var AMMO_14 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_14_val = AMMO_14.GetFloat("VAL");
            var TOUGHNESS_16 = _world.GetObject(ObjectType.Skill, "TOUGHNESS");
            var TOUGHNESS_16_val = TOUGHNESS_16.GetFloat("VAL");
            AMMO_12.SetFloat("VAL", AMMO_14_val - TOUGHNESS_16_val);
            {
                var enumerator = DECAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var AMMO_18 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_18_val = AMMO_18.GetFloat("VAL");
            if (AMMO_18_val > 20f)
            {
                goto PLENTY;
            }
            var WRN01STR_19 = _world.AcknexObject.GetAcknexObject("WRN01STR");
            var PANELTEXT_21 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            var PANELTEXT_21_array = PANELTEXT_21.GetObject<List<IAcknexObject>>("STRING");
            var PANELTEXT_21_index = PANELTEXT_21.GetInteger("INDEX");
            PANELTEXT_21_array[PANELTEXT_21_index - 1] = WRN01STR_19;
            PANELTEXT_21.IsDirty = true;
            var PANELTEXT_22 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", PANELTEXT_22);
            var MSGSECCOUNT_26 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_26.SetFloat("VAL", 0f);
            PLENTY:
            var PLAYER_LIGHT_28 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            var PLAYER_LIGHT_28_val = PLAYER_LIGHT_28.GetFloat("VAL");
            var PLAYER_LIGHT_29 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            PLAYER_LIGHT_29.SetFloat("VAL", PLAYER_LIGHT_28_val + 0.5f);
            var EXPL01OVL_30 = _world.AcknexObject.GetAcknexObject("EXPL01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.12", EXPL01OVL_30);
            var MP_502SND_33 = _world.AcknexObject.GetAcknexObject("MP_502SND");
            _world.PlaySound(MP_502SND_33, 0.4f, null);
            var SHOT_SOUND_ON_36 = _world.GetObject(ObjectType.Skill, "SHOT_SOUND_ON");
            SHOT_SOUND_ON_36.SetFloat("VAL", 1f);
            var SHOTSECCOUNT_38 = _world.GetObject(ObjectType.Skill, "SHOTSECCOUNT");
            SHOTSECCOUNT_38.SetFloat("VAL", 0f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MP5_03OVL_40 = _world.AcknexObject.GetAcknexObject("MP5_03OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_03OVL_40);
            var EXPL02OVL_43 = _world.AcknexObject.GetAcknexObject("EXPL02OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.12", EXPL02OVL_43);
            var SHOOT_SECTOR_47 = _world.GetObject(ObjectType.Skill, "SHOOT_SECTOR");
            SHOOT_SECTOR_47.SetFloat("VAL", 6.283f);
            var SHOOT_RANGE_49 = _world.GetObject(ObjectType.Skill, "SHOOT_RANGE");
            SHOOT_RANGE_49.SetFloat("VAL", 200f);
            var SHOOT_FAC_50 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_51 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_51_val = SHOOT_FAC_51.GetFloat("VAL");
            var PLAYERSHOOTFACTOR_52 = _world.GetObject(ObjectType.Skill, "PLAYERSHOOTFACTOR");
            var PLAYERSHOOTFACTOR_52_val = PLAYERSHOOTFACTOR_52.GetFloat("VAL");
            SHOOT_FAC_50.SetFloat("VAL", PLAYERSHOOTFACTOR_52_val);
            var DSHOOTXPLUS_53 = _world.GetObject(ObjectType.Skill, "DSHOOTXPLUS");
            var DSHOOTXPLUS_53_val = DSHOOTXPLUS_53.GetFloat("VAL");
            var SHOOT_X_54 = _world.GetObject(ObjectType.Skill, "SHOOT_X");
            SHOOT_X_54.SetFloat("VAL", DSHOOTXPLUS_53_val);
            var SVANGLE_55 = _world.GetObject(ObjectType.Skill, "SVANGLE");
            var SVANGLE_55_val = SVANGLE_55.GetFloat("VAL");
            var SHOOT_Y_56 = _world.GetObject(ObjectType.Skill, "SHOOT_Y");
            SHOOT_Y_56.SetFloat("VAL", SVANGLE_55_val);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_58 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_58_val = HIT_DIST_58.GetFloat("VAL");
            if (HIT_DIST_58_val == 0f)
            {
                goto SHOOT2;
            }
            var HIT_61 = _world.GetSynonymObject("HIT");
            var temp_62 = HIT_61.GetFloat("FRAGILE");
            if (temp_62 == 1f)
            {
                goto CONTHIT;
            }
            SHOOT2:
            var SHOOT_X_64 = _world.GetObject(ObjectType.Skill, "SHOOT_X");
            SHOOT_X_64.SetFloat("VAL", 0f);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_66 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_66_val = HIT_DIST_66.GetFloat("VAL");
            if (HIT_DIST_66_val == 0f)
            {
                goto SHOOT3;
            }
            var HIT_67 = _world.GetSynonymObject("HIT");
            _world.SetSynonymObject("MY_TARGET", HIT_67);
            var MY_TARGET_71 = _world.GetSynonymObject("MY_TARGET");
            MY_TARGET_71.SetFloat("SKILL3", 1f);
            var HIT_74 = _world.GetSynonymObject("HIT");
            var temp_75 = HIT_74.GetFloat("FRAGILE");
            if (temp_75 == 1f)
            {
                goto CONTHIT;
            }
            SHOOT3:
            var DSHOOTXMINUS_76 = _world.GetObject(ObjectType.Skill, "DSHOOTXMINUS");
            var DSHOOTXMINUS_76_val = DSHOOTXMINUS_76.GetFloat("VAL");
            var SHOOT_X_77 = _world.GetObject(ObjectType.Skill, "SHOOT_X");
            SHOOT_X_77.SetFloat("VAL", DSHOOTXMINUS_76_val);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_79 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_79_val = HIT_DIST_79.GetFloat("VAL");
            if (HIT_DIST_79_val == 0f)
            {
                goto SHOOT4;
            }
            var HIT_82 = _world.GetSynonymObject("HIT");
            var temp_83 = HIT_82.GetFloat("FRAGILE");
            if (temp_83 == 1f)
            {
                goto CONTHIT;
            }
            SHOOT4:
            var SHOOT_X_85 = _world.GetObject(ObjectType.Skill, "SHOOT_X");
            SHOOT_X_85.SetFloat("VAL", 0f);
            var DSHOOTYPLUS_86 = _world.GetObject(ObjectType.Skill, "DSHOOTYPLUS");
            var DSHOOTYPLUS_86_val = DSHOOTYPLUS_86.GetFloat("VAL");
            var SHOOT_Y_87 = _world.GetObject(ObjectType.Skill, "SHOOT_Y");
            SHOOT_Y_87.SetFloat("VAL", DSHOOTYPLUS_86_val);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_89 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_89_val = HIT_DIST_89.GetFloat("VAL");
            if (HIT_DIST_89_val == 0f)
            {
                goto SHOOT5;
            }
            var HIT_92 = _world.GetSynonymObject("HIT");
            var temp_93 = HIT_92.GetFloat("FRAGILE");
            if (temp_93 == 1f)
            {
                goto CONTHIT;
            }
            SHOOT5:
            var DSHOOTYMINUS_94 = _world.GetObject(ObjectType.Skill, "DSHOOTYMINUS");
            var DSHOOTYMINUS_94_val = DSHOOTYMINUS_94.GetFloat("VAL");
            var SHOOT_Y_95 = _world.GetObject(ObjectType.Skill, "SHOOT_Y");
            SHOOT_Y_95.SetFloat("VAL", DSHOOTYMINUS_94_val);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_97 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_97_val = HIT_DIST_97.GetFloat("VAL");
            if (HIT_DIST_97_val == 0f)
            {
                goto NOHIT;
            }
            var HIT_100 = _world.GetSynonymObject("HIT");
            var temp_101 = HIT_100.GetFloat("FRAGILE");
            if (temp_101 != 1f)
            {
                goto NOHIT;
            }
            CONTHIT:
            {
                var enumerator = CASTBLOOD(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_TARGET_104 = _world.GetSynonymObject("MY_TARGET");
            MY_TARGET_104.SetFloat("SKILL3", 1f);
            NOHIT:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            _world.AcknexObject.SetAcknexObject("LAYERS.12", null);
            var PLAYER_LIGHT_110 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            var PLAYER_LIGHT_110_val = PLAYER_LIGHT_110.GetFloat("VAL");
            var PLAYER_LIGHT_111 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            PLAYER_LIGHT_111.SetFloat("VAL", PLAYER_LIGHT_110_val + -0.5f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var WEAPONSEL_114 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_114_val = WEAPONSEL_114.GetFloat("VAL");
            if (WEAPONSEL_114_val != 2f)
            {
                goto FINISH;
            }
            var MOUSE_LEFT_116 = _world.GetObject(ObjectType.Skill, "MOUSE_LEFT");
            var MOUSE_LEFT_116_val = MOUSE_LEFT_116.GetFloat("VAL");
            if (MOUSE_LEFT_116_val == 1f)
            {
                goto FIRE;
            }
            var KEY_CTRL_118 = _world.GetObject(ObjectType.Skill, "KEY_CTRL");
            var KEY_CTRL_118_val = KEY_CTRL_118.GetFloat("VAL");
            if (KEY_CTRL_118_val == 1f)
            {
                goto FIRE;
            }
            var MP5_02OVL_119 = _world.AcknexObject.GetAcknexObject("MP5_02OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_02OVL_119);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MP5_01OVL_123 = _world.AcknexObject.GetAcknexObject("MP5_01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_01OVL_123);
            goto CONT;
            NOAMMO:
            var WRN02STR_126 = _world.AcknexObject.GetAcknexObject("WRN02STR");
            var PANELTEXT_128 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            var PANELTEXT_128_array = PANELTEXT_128.GetObject<List<IAcknexObject>>("STRING");
            var PANELTEXT_128_index = PANELTEXT_128.GetInteger("INDEX");
            PANELTEXT_128_array[PANELTEXT_128_index - 1] = WRN02STR_126;
            PANELTEXT_128.IsDirty = true;
            var PANELTEXT_129 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", PANELTEXT_129);
            var MSGSECCOUNT_133 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_133.SetFloat("VAL", 0f);
            var MP_504SND_134 = _world.AcknexObject.GetAcknexObject("MP_504SND");
            _world.PlaySound(MP_504SND_134, 1f, null);
            var GUN_ON_137 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_137.SetFloat("VAL", 0f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MP5_01OVL_139 = _world.AcknexObject.GetAcknexObject("MP5_01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_01OVL_139);
            CONT:
            var FIRE_142 = _world.AcknexObject.GetAcknexObject("FIRE");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", FIRE_142);
            var FIRE_144 = _world.AcknexObject.GetAcknexObject("FIRE");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", FIRE_144);
            FINISH:
            var GUNFIRING_147 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            GUNFIRING_147.SetFloat("VAL", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator BURST(IAcknexObject MY, IAcknexObject THERE)
        {
            var AMMO_1 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_1_val = AMMO_1.GetFloat("VAL");
            if (AMMO_1_val < 3f)
            {
                {
                    var enumerator = FIRE(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            var GUNFIRING_3 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            GUNFIRING_3.SetFloat("VAL", 1f);
            _world.AcknexObject.SetAcknexObject("IF_CTRL", null);
            _world.AcknexObject.SetAcknexObject("IF_LEFT", null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            FIRE:
            var MP5_02OVL_9 = _world.AcknexObject.GetAcknexObject("MP5_02OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_02OVL_9);
            var AMMO_13 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_13_val = AMMO_13.GetFloat("VAL");
            if (AMMO_13_val == 0f)
            {
                goto NOAMMO;
            }
            var AMMO_14 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_15 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_15_val = AMMO_15.GetFloat("VAL");
            var AMMO_16 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_16_val = AMMO_16.GetFloat("VAL");
            var TOUGHNESS_20 = _world.GetObject(ObjectType.Skill, "TOUGHNESS");
            var TOUGHNESS_20_val = TOUGHNESS_20.GetFloat("VAL");
            AMMO_14.SetFloat("VAL", AMMO_16_val - 3f * TOUGHNESS_20_val);
            var AMMO_22 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_22_val = AMMO_22.GetFloat("VAL");
            if (AMMO_22_val < 0f)
            {
                var AMMO_24 = _world.GetObject(ObjectType.Skill, "AMMO");
                AMMO_24.SetFloat("VAL", 0f);
            }
            {
                var enumerator = DECAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var AMMO_26 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_26_val = AMMO_26.GetFloat("VAL");
            if (AMMO_26_val > 20f)
            {
                goto PLENTY;
            }
            var WRN01STR_27 = _world.AcknexObject.GetAcknexObject("WRN01STR");
            var PANELTEXT_29 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            var PANELTEXT_29_array = PANELTEXT_29.GetObject<List<IAcknexObject>>("STRING");
            var PANELTEXT_29_index = PANELTEXT_29.GetInteger("INDEX");
            PANELTEXT_29_array[PANELTEXT_29_index - 1] = WRN01STR_27;
            PANELTEXT_29.IsDirty = true;
            var PANELTEXT_30 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", PANELTEXT_30);
            var MSGSECCOUNT_34 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_34.SetFloat("VAL", 0f);
            PLENTY:
            var PLAYER_LIGHT_36 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            var PLAYER_LIGHT_36_val = PLAYER_LIGHT_36.GetFloat("VAL");
            var PLAYER_LIGHT_37 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            PLAYER_LIGHT_37.SetFloat("VAL", PLAYER_LIGHT_36_val + 0.7f);
            var EXPL01OVL_38 = _world.AcknexObject.GetAcknexObject("EXPL01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.12", EXPL01OVL_38);
            var MP_503SND_41 = _world.AcknexObject.GetAcknexObject("MP_503SND");
            _world.PlaySound(MP_503SND_41, 0.4f, null);
            var SHOT_SOUND_ON_44 = _world.GetObject(ObjectType.Skill, "SHOT_SOUND_ON");
            SHOT_SOUND_ON_44.SetFloat("VAL", 1f);
            var SHOTSECCOUNT_46 = _world.GetObject(ObjectType.Skill, "SHOTSECCOUNT");
            SHOTSECCOUNT_46.SetFloat("VAL", 0f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MP5_03OVL_48 = _world.AcknexObject.GetAcknexObject("MP5_03OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_03OVL_48);
            var EXPL02OVL_51 = _world.AcknexObject.GetAcknexObject("EXPL02OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.12", EXPL02OVL_51);
            var SHOOT_SECTOR_55 = _world.GetObject(ObjectType.Skill, "SHOOT_SECTOR");
            SHOOT_SECTOR_55.SetFloat("VAL", 6.283f);
            var SHOOT_RANGE_57 = _world.GetObject(ObjectType.Skill, "SHOOT_RANGE");
            SHOOT_RANGE_57.SetFloat("VAL", 200f);
            var SHOOT_FAC_58 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_59 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_59_val = SHOOT_FAC_59.GetFloat("VAL");
            var PLAYERBURSTFACTOR_60 = _world.GetObject(ObjectType.Skill, "PLAYERBURSTFACTOR");
            var PLAYERBURSTFACTOR_60_val = PLAYERBURSTFACTOR_60.GetFloat("VAL");
            SHOOT_FAC_58.SetFloat("VAL", PLAYERBURSTFACTOR_60_val);
            var DSHOOTXPLUS_61 = _world.GetObject(ObjectType.Skill, "DSHOOTXPLUS");
            var DSHOOTXPLUS_61_val = DSHOOTXPLUS_61.GetFloat("VAL");
            var SHOOT_X_62 = _world.GetObject(ObjectType.Skill, "SHOOT_X");
            SHOOT_X_62.SetFloat("VAL", DSHOOTXPLUS_61_val);
            var SHOOT_Y_64 = _world.GetObject(ObjectType.Skill, "SHOOT_Y");
            SHOOT_Y_64.SetFloat("VAL", 0f);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_66 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_66_val = HIT_DIST_66.GetFloat("VAL");
            if (HIT_DIST_66_val == 0f)
            {
                goto SHOOT2;
            }
            var HIT_67 = _world.GetSynonymObject("HIT");
            _world.SetSynonymObject("MY_TARGET", HIT_67);
            var MY_TARGET_71 = _world.GetSynonymObject("MY_TARGET");
            MY_TARGET_71.SetFloat("SKILL3", 1f);
            var HIT_74 = _world.GetSynonymObject("HIT");
            var temp_75 = HIT_74.GetFloat("FRAGILE");
            if (temp_75 == 1f)
            {
                {
                    var enumerator = CASTBLOOD(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
            }
            SHOOT2:
            var SHOOT_X_77 = _world.GetObject(ObjectType.Skill, "SHOOT_X");
            SHOOT_X_77.SetFloat("VAL", 0f);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_79 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_79_val = HIT_DIST_79.GetFloat("VAL");
            if (HIT_DIST_79_val == 0f)
            {
                goto SHOOT3;
            }
            var HIT_80 = _world.GetSynonymObject("HIT");
            _world.SetSynonymObject("MY_TARGET", HIT_80);
            var MY_TARGET_84 = _world.GetSynonymObject("MY_TARGET");
            MY_TARGET_84.SetFloat("SKILL3", 1f);
            var HIT_87 = _world.GetSynonymObject("HIT");
            var temp_88 = HIT_87.GetFloat("FRAGILE");
            if (temp_88 == 1f)
            {
                {
                    var enumerator = CASTBLOOD(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
            }
            SHOOT3:
            var DSHOOTXMINUS_89 = _world.GetObject(ObjectType.Skill, "DSHOOTXMINUS");
            var DSHOOTXMINUS_89_val = DSHOOTXMINUS_89.GetFloat("VAL");
            var SHOOT_X_90 = _world.GetObject(ObjectType.Skill, "SHOOT_X");
            SHOOT_X_90.SetFloat("VAL", DSHOOTXMINUS_89_val);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_92 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_92_val = HIT_DIST_92.GetFloat("VAL");
            if (HIT_DIST_92_val == 0f)
            {
                goto NOHIT;
            }
            var HIT_93 = _world.GetSynonymObject("HIT");
            _world.SetSynonymObject("MY_TARGET", HIT_93);
            var MY_TARGET_97 = _world.GetSynonymObject("MY_TARGET");
            MY_TARGET_97.SetFloat("SKILL3", 1f);
            var HIT_100 = _world.GetSynonymObject("HIT");
            var temp_101 = HIT_100.GetFloat("FRAGILE");
            if (temp_101 == 1f)
            {
                {
                    var enumerator = CASTBLOOD(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
            }
            NOHIT:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            _world.AcknexObject.SetAcknexObject("LAYERS.12", null);
            var PLAYER_LIGHT_107 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            var PLAYER_LIGHT_107_val = PLAYER_LIGHT_107.GetFloat("VAL");
            var PLAYER_LIGHT_108 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            PLAYER_LIGHT_108.SetFloat("VAL", PLAYER_LIGHT_107_val + -0.7f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var WEAPONSEL_111 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_111_val = WEAPONSEL_111.GetFloat("VAL");
            if (WEAPONSEL_111_val != 2f)
            {
                goto FINISH;
            }
            var MOUSE_LEFT_113 = _world.GetObject(ObjectType.Skill, "MOUSE_LEFT");
            var MOUSE_LEFT_113_val = MOUSE_LEFT_113.GetFloat("VAL");
            if (MOUSE_LEFT_113_val == 1f)
            {
                goto FIRE;
            }
            var KEY_CTRL_115 = _world.GetObject(ObjectType.Skill, "KEY_CTRL");
            var KEY_CTRL_115_val = KEY_CTRL_115.GetFloat("VAL");
            if (KEY_CTRL_115_val == 1f)
            {
                goto FIRE;
            }
            var MP5_02OVL_116 = _world.AcknexObject.GetAcknexObject("MP5_02OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_02OVL_116);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MP5_01OVL_120 = _world.AcknexObject.GetAcknexObject("MP5_01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_01OVL_120);
            goto CONT;
            NOAMMO:
            var WRN02STR_123 = _world.AcknexObject.GetAcknexObject("WRN02STR");
            var PANELTEXT_125 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            var PANELTEXT_125_array = PANELTEXT_125.GetObject<List<IAcknexObject>>("STRING");
            var PANELTEXT_125_index = PANELTEXT_125.GetInteger("INDEX");
            PANELTEXT_125_array[PANELTEXT_125_index - 1] = WRN02STR_123;
            PANELTEXT_125.IsDirty = true;
            var PANELTEXT_126 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", PANELTEXT_126);
            var MSGSECCOUNT_130 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_130.SetFloat("VAL", 0f);
            var MP_504SND_131 = _world.AcknexObject.GetAcknexObject("MP_504SND");
            _world.PlaySound(MP_504SND_131, 1f, null);
            var GUN_ON_134 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_134.SetFloat("VAL", 0f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MP5_01OVL_136 = _world.AcknexObject.GetAcknexObject("MP5_01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_01OVL_136);
            CONT:
            var BURST_139 = _world.AcknexObject.GetAcknexObject("BURST");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", BURST_139);
            var BURST_141 = _world.AcknexObject.GetAcknexObject("BURST");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", BURST_141);
            FINISH:
            var GUNFIRING_144 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            GUNFIRING_144.SetFloat("VAL", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator THROW(IAcknexObject MY, IAcknexObject THERE)
        {
            var AMMO_1 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_1_val = AMMO_1.GetFloat("VAL");
            if (AMMO_1_val == 0f)
            {
                {
                    var enumerator = SELECTNONE(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            {
                var enumerator = CHOOSEGRANADE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var GRANADE_3 = _world.GetSynonymObject("GRANADE");
            if (GRANADE_3 == null)
            {
                yield break;
            }
            var GUNFIRING_5 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            GUNFIRING_5.SetFloat("VAL", 1f);
            _world.AcknexObject.SetAcknexObject("IF_CTRL", null);
            _world.AcknexObject.SetAcknexObject("IF_LEFT", null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GRAN01OVL_11 = _world.AcknexObject.GetAcknexObject("GRAN01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.12", GRAN01OVL_11);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            _world.AcknexObject.SetAcknexObject("LAYERS.12", null);
            var GRAN02OVL_18 = _world.AcknexObject.GetAcknexObject("GRAN02OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", GRAN02OVL_18);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GRAN01SND_22 = _world.AcknexObject.GetAcknexObject("GRAN01SND");
            _world.PlaySound(GRAN01SND_22, 1f, null);
            var GRAN03OVL_24 = _world.AcknexObject.GetAcknexObject("GRAN03OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.12", GRAN03OVL_24);
            _world.AcknexObject.SetAcknexObject("LAYERS.13", null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            _world.AcknexObject.SetAcknexObject("LAYERS.12", null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)8f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GRAN04OVL_35 = _world.AcknexObject.GetAcknexObject("GRAN04OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", GRAN04OVL_35);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GRAN05OVL_39 = _world.AcknexObject.GetAcknexObject("GRAN05OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", GRAN05OVL_39);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GRAN06OVL_43 = _world.AcknexObject.GetAcknexObject("GRAN06OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", GRAN06OVL_43);
            var GRANADE_48 = _world.GetSynonymObject("GRANADE");
            GRANADE_48.SetFloat("GROUND", 1f);
            var GRANADE_51 = _world.GetSynonymObject("GRANADE");
            GRANADE_51.SetFloat("SPEED", 2f);
            var GRANADE_53 = _world.GetSynonymObject("GRANADE");
            var GRANADE_55 = _world.GetSynonymObject("GRANADE");
            var temp_56 = GRANADE_55.GetFloat("X");
            var PLAYER_X_57 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_57_val = PLAYER_X_57.GetFloat("VAL");
            var PLAYER_COS_59 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var PLAYER_COS_59_val = PLAYER_COS_59.GetFloat("VAL");
            var PLAYER_VX_61 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_61_val = PLAYER_VX_61.GetFloat("VAL");
            var TIME_CORR_63 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_63_val = TIME_CORR_63.GetFloat("VAL");
            GRANADE_53.SetFloat("X", PLAYER_X_57_val + PLAYER_COS_59_val + PLAYER_VX_61_val * TIME_CORR_63_val);
            var GRANADE_65 = _world.GetSynonymObject("GRANADE");
            var GRANADE_67 = _world.GetSynonymObject("GRANADE");
            var temp_68 = GRANADE_67.GetFloat("Y");
            var PLAYER_Y_69 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_69_val = PLAYER_Y_69.GetFloat("VAL");
            var PLAYER_SIN_71 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var PLAYER_SIN_71_val = PLAYER_SIN_71.GetFloat("VAL");
            var PLAYER_VY_73 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_73_val = PLAYER_VY_73.GetFloat("VAL");
            var TIME_CORR_75 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_75_val = TIME_CORR_75.GetFloat("VAL");
            GRANADE_65.SetFloat("Y", PLAYER_Y_69_val + PLAYER_SIN_71_val + PLAYER_VY_73_val * TIME_CORR_75_val);
            var GRANADE_77 = _world.GetSynonymObject("GRANADE");
            var GRANADE_79 = _world.GetSynonymObject("GRANADE");
            var temp_80 = GRANADE_79.GetFloat("HEIGHT");
            var PLAYER_SIZE_81 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_81_val = PLAYER_SIZE_81.GetFloat("VAL");
            var PLAYER_TILT_84 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_84_val = PLAYER_TILT_84.GetFloat("VAL");
            var PLAYER_HGT_91 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_91_val = PLAYER_HGT_91.GetFloat("VAL");
            var FLOOR_HGT_93 = _world.GetObject(ObjectType.Skill, "FLOOR_HGT");
            var FLOOR_HGT_93_val = FLOOR_HGT_93.GetFloat("VAL");
            GRANADE_77.SetFloat("HEIGHT", PLAYER_SIZE_81_val - (PLAYER_TILT_84_val * 0.65f) - 0.05f + PLAYER_HGT_91_val + FLOOR_HGT_93_val);
            var FREEFALL_94 = _world.AcknexObject.GetAcknexObject("FREEFALL");
            var GRANADE_96 = _world.GetSynonymObject("GRANADE");
            GRANADE_96.SetAcknexObject("EACH_TICK", FREEFALL_94);
            var BOUNCE_97 = _world.AcknexObject.GetAcknexObject("BOUNCE");
            var GRANADE_99 = _world.GetSynonymObject("GRANADE");
            GRANADE_99.SetAcknexObject("IF_HIT", BOUNCE_97);
            //Unknown keyword: LOCATE
            var GRAN2TEX_100 = _world.AcknexObject.GetAcknexObject("GRAN2TEX");
            var GRANADE_102 = _world.GetSynonymObject("GRANADE");
            GRANADE_102.SetAcknexObject("TEXTURE", GRAN2TEX_100);
            var PLAYER_ANGLE_103 = _world.GetObject(ObjectType.Skill, "PLAYER_ANGLE");
            var PLAYER_ANGLE_103_val = PLAYER_ANGLE_103.GetFloat("VAL");
            var GRANADE_105 = _world.GetSynonymObject("GRANADE");
            GRANADE_105.SetFloat("ANGLE", PLAYER_ANGLE_103_val);
            var GRANADE_107 = _world.GetSynonymObject("GRANADE");
            var GRANADE_109 = _world.GetSynonymObject("GRANADE");
            var temp_110 = GRANADE_109.GetFloat("VSPEED");
            var PLAYER_TILT_112 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_112_val = PLAYER_TILT_112.GetFloat("VAL");
            GRANADE_107.SetFloat("VSPEED", -PLAYER_TILT_112_val / 2f + 0.2f);
            var BULLET_117 = _world.AcknexObject.GetAcknexObject("BULLET");
            var GRANADE_119 = _world.GetSynonymObject("GRANADE");
            GRANADE_119.SetAcknexObject("TARGET", BULLET_117);
            var GRANADE_122 = _world.GetSynonymObject("GRANADE");
            GRANADE_122.SetFloat("CAREFULLY", 1f);
            var GRANADE_125 = _world.GetSynonymObject("GRANADE");
            GRANADE_125.SetFloat("INVISIBLE", 0f);
            var AMMO_127 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_127_val = AMMO_127.GetFloat("VAL");
            var AMMO_128 = _world.GetObject(ObjectType.Skill, "AMMO");
            AMMO_128.SetFloat("VAL", AMMO_127_val + -1f);
            {
                var enumerator = DECAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GRAN2TEX_130 = _world.AcknexObject.GetAcknexObject("GRAN2TEX");
            var GRANADE_132 = _world.GetSynonymObject("GRANADE");
            var temp_133 = GRANADE_132?.GetAcknexObject("TEXTURE");
            if (temp_133 == GRAN2TEX_130)
            {
                var GRAN1TEX_134 = _world.AcknexObject.GetAcknexObject("GRAN1TEX");
                var GRANADE_136 = _world.GetSynonymObject("GRANADE");
                GRANADE_136.SetAcknexObject("TEXTURE", GRAN1TEX_134);
            }
            _world.AcknexObject.SetAcknexObject("LAYERS.13", null);
            var AMMO_141 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_141_val = AMMO_141.GetFloat("VAL");
            if (AMMO_141_val > 0f)
            {
                goto MOREGRANADES;
            }
            var HAS_GRANADE_143 = _world.GetObject(ObjectType.Skill, "HAS_GRANADE");
            HAS_GRANADE_143.SetFloat("VAL", 0f);
            _world.SetSynonymObject("MY_GUN", null);
            var GUNFIRING_147 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            GUNFIRING_147.SetFloat("VAL", 0f);
            {
                var enumerator = SELECTNONE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            MOREGRANADES:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)8f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GRAN00OVL_149 = _world.AcknexObject.GetAcknexObject("GRAN00OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", GRAN00OVL_149);
            var WEAPONSEL_153 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_153_val = WEAPONSEL_153.GetFloat("VAL");
            if (WEAPONSEL_153_val != 3f)
            {
                goto FINISH;
            }
            var THROW_154 = _world.AcknexObject.GetAcknexObject("THROW");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", THROW_154);
            var THROW_156 = _world.AcknexObject.GetAcknexObject("THROW");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", THROW_156);
            FINISH:
            var GUNFIRING_159 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            GUNFIRING_159.SetFloat("VAL", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator LAUNCH(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = CHOOSEMISSILE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MISSILE_1 = _world.GetSynonymObject("MISSILE");
            if (MISSILE_1 == null)
            {
                yield break;
            }
            var GUNFIRING_3 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            GUNFIRING_3.SetFloat("VAL", 1f);
            _world.AcknexObject.SetAcknexObject("IF_CTRL", null);
            _world.AcknexObject.SetAcknexObject("IF_LEFT", null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            FIRE:
            var STNG01OVL_9 = _world.AcknexObject.GetAcknexObject("STNG01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", STNG01OVL_9);
            var AMMO_13 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_13_val = AMMO_13.GetFloat("VAL");
            if (AMMO_13_val == 0f)
            {
                goto NOAMMO;
            }
            var AMMO_15 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_15_val = AMMO_15.GetFloat("VAL");
            var AMMO_16 = _world.GetObject(ObjectType.Skill, "AMMO");
            AMMO_16.SetFloat("VAL", AMMO_15_val + -1f);
            {
                var enumerator = DECAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var AMMO_18 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_18_val = AMMO_18.GetFloat("VAL");
            if (AMMO_18_val > 5f)
            {
                goto PLENTY;
            }
            var WRN01STR_19 = _world.AcknexObject.GetAcknexObject("WRN01STR");
            var PANELTEXT_21 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            var PANELTEXT_21_array = PANELTEXT_21.GetObject<List<IAcknexObject>>("STRING");
            var PANELTEXT_21_index = PANELTEXT_21.GetInteger("INDEX");
            PANELTEXT_21_array[PANELTEXT_21_index - 1] = WRN01STR_19;
            PANELTEXT_21.IsDirty = true;
            var PANELTEXT_22 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", PANELTEXT_22);
            var MSGSECCOUNT_26 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_26.SetFloat("VAL", 0f);
            PLENTY:
            var PLAYER_LIGHT_28 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            var PLAYER_LIGHT_28_val = PLAYER_LIGHT_28.GetFloat("VAL");
            var PLAYER_LIGHT_29 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            PLAYER_LIGHT_29.SetFloat("VAL", PLAYER_LIGHT_28_val + 0.7f);
            var STNG02SND_30 = _world.AcknexObject.GetAcknexObject("STNG02SND");
            _world.PlaySound(STNG02SND_30, 0.8f, null);
            var SHOT_SOUND_ON_33 = _world.GetObject(ObjectType.Skill, "SHOT_SOUND_ON");
            SHOT_SOUND_ON_33.SetFloat("VAL", 1f);
            var SHOTSECCOUNT_35 = _world.GetObject(ObjectType.Skill, "SHOTSECCOUNT");
            SHOTSECCOUNT_35.SetFloat("VAL", 0f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)3f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var STNG02OVL_37 = _world.AcknexObject.GetAcknexObject("STNG02OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", STNG02OVL_37);
            var MISSILE_42 = _world.GetSynonymObject("MISSILE");
            MISSILE_42.SetFloat("GROUND", 1f);
            var MISSILE_45 = _world.GetSynonymObject("MISSILE");
            MISSILE_45.SetFloat("SPEED", 3f);
            var MISSILE_47 = _world.GetSynonymObject("MISSILE");
            var MISSILE_49 = _world.GetSynonymObject("MISSILE");
            var temp_50 = MISSILE_49.GetFloat("X");
            var PLAYER_X_51 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_51_val = PLAYER_X_51.GetFloat("VAL");
            var PLAYER_COS_53 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var PLAYER_COS_53_val = PLAYER_COS_53.GetFloat("VAL");
            var PLAYER_VX_57 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_57_val = PLAYER_VX_57.GetFloat("VAL");
            var TIME_CORR_59 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_59_val = TIME_CORR_59.GetFloat("VAL");
            MISSILE_47.SetFloat("X", PLAYER_X_51_val + PLAYER_COS_53_val * 1.2f + PLAYER_VX_57_val * TIME_CORR_59_val);
            var MISSILE_61 = _world.GetSynonymObject("MISSILE");
            var MISSILE_63 = _world.GetSynonymObject("MISSILE");
            var temp_64 = MISSILE_63.GetFloat("Y");
            var PLAYER_Y_65 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_65_val = PLAYER_Y_65.GetFloat("VAL");
            var PLAYER_SIN_67 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var PLAYER_SIN_67_val = PLAYER_SIN_67.GetFloat("VAL");
            var PLAYER_VY_71 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_71_val = PLAYER_VY_71.GetFloat("VAL");
            var TIME_CORR_73 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_73_val = TIME_CORR_73.GetFloat("VAL");
            MISSILE_61.SetFloat("Y", PLAYER_Y_65_val + PLAYER_SIN_67_val * 1.2f + PLAYER_VY_71_val * TIME_CORR_73_val);
            var MISSILE_75 = _world.GetSynonymObject("MISSILE");
            var MISSILE_77 = _world.GetSynonymObject("MISSILE");
            var temp_78 = MISSILE_77.GetFloat("HEIGHT");
            var PLAYER_SIZE_79 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_79_val = PLAYER_SIZE_79.GetFloat("VAL");
            var PLAYER_TILT_82 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_82_val = PLAYER_TILT_82.GetFloat("VAL");
            var PLAYER_HGT_89 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_89_val = PLAYER_HGT_89.GetFloat("VAL");
            var FLOOR_HGT_91 = _world.GetObject(ObjectType.Skill, "FLOOR_HGT");
            var FLOOR_HGT_91_val = FLOOR_HGT_91.GetFloat("VAL");
            MISSILE_75.SetFloat("HEIGHT", PLAYER_SIZE_79_val - (PLAYER_TILT_82_val * 0.65f) - 0.05f + PLAYER_HGT_89_val + FLOOR_HGT_91_val);
            var EXPLODEMISSILE_92 = _world.AcknexObject.GetAcknexObject("EXPLODEMISSILE");
            var MISSILE_94 = _world.GetSynonymObject("MISSILE");
            MISSILE_94.SetAcknexObject("IF_HIT", EXPLODEMISSILE_92);
            var EXPLODETARGET_95 = _world.AcknexObject.GetAcknexObject("EXPLODETARGET");
            var MISSILE_97 = _world.GetSynonymObject("MISSILE");
            MISSILE_97.SetAcknexObject("IF_ARRIVED", EXPLODETARGET_95);
            //Unknown keyword: LOCATE
            var MISS2TEX_98 = _world.AcknexObject.GetAcknexObject("MISS2TEX");
            var MISSILE_100 = _world.GetSynonymObject("MISSILE");
            MISSILE_100.SetAcknexObject("TEXTURE", MISS2TEX_98);
            var PLAYER_ANGLE_101 = _world.GetObject(ObjectType.Skill, "PLAYER_ANGLE");
            var PLAYER_ANGLE_101_val = PLAYER_ANGLE_101.GetFloat("VAL");
            var MISSILE_103 = _world.GetSynonymObject("MISSILE");
            MISSILE_103.SetFloat("ANGLE", PLAYER_ANGLE_101_val);
            var MISSILE_105 = _world.GetSynonymObject("MISSILE");
            var MISSILE_107 = _world.GetSynonymObject("MISSILE");
            var temp_108 = MISSILE_107.GetFloat("VSPEED");
            var PLAYER_TILT_110 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_110_val = PLAYER_TILT_110.GetFloat("VAL");
            MISSILE_105.SetFloat("VSPEED", -PLAYER_TILT_110_val);
            var BULLET_111 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MISSILE_113 = _world.GetSynonymObject("MISSILE");
            MISSILE_113.SetAcknexObject("TARGET", BULLET_111);
            var MISSILE_116 = _world.GetSynonymObject("MISSILE");
            MISSILE_116.SetFloat("CAREFULLY", 1f);
            var MISSILE_119 = _world.GetSynonymObject("MISSILE");
            MISSILE_119.SetFloat("SENSITIVE", 1f);
            var MISSILE_122 = _world.GetSynonymObject("MISSILE");
            MISSILE_122.SetFloat("INVISIBLE", 0f);
            var SHOOT_SECTOR_124 = _world.GetObject(ObjectType.Skill, "SHOOT_SECTOR");
            SHOOT_SECTOR_124.SetFloat("VAL", 6.283f);
            var SHOOT_RANGE_126 = _world.GetObject(ObjectType.Skill, "SHOOT_RANGE");
            SHOOT_RANGE_126.SetFloat("VAL", 200f);
            var SHOOT_FAC_128 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            SHOOT_FAC_128.SetFloat("VAL", 0f);
            var SHOOT_X_130 = _world.GetObject(ObjectType.Skill, "SHOOT_X");
            SHOOT_X_130.SetFloat("VAL", 0f);
            var SVANGLE_131 = _world.GetObject(ObjectType.Skill, "SVANGLE");
            var SVANGLE_131_val = SVANGLE_131.GetFloat("VAL");
            var SHOOT_Y_132 = _world.GetObject(ObjectType.Skill, "SHOOT_Y");
            SHOOT_Y_132.SetFloat("VAL", SVANGLE_131_val);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_134 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_134_val = HIT_DIST_134.GetFloat("VAL");
            if (HIT_DIST_134_val == 0f)
            {
                goto HITWALL;
            }
            var HIT_135 = _world.GetSynonymObject("HIT");
            _world.SetSynonymObject("MY_TARGET", HIT_135);
            var HIT_139 = _world.GetSynonymObject("HIT");
            var temp_140 = HIT_139.GetFloat("FRAGILE");
            if (temp_140 != 1f)
            {
                goto HITWALL;
            }
            var HIT_143 = _world.GetSynonymObject("HIT");
            var temp_144 = HIT_143.GetFloat("DISTANCE");
            if (temp_144 != 0f)
            {
                var MISSILE_146 = _world.GetSynonymObject("MISSILE");
                var MISSILE_148 = _world.GetSynonymObject("MISSILE");
                var temp_149 = MISSILE_148.GetFloat("VSPEED");
                var HIT_152 = _world.GetSynonymObject("HIT");
                var temp_153 = HIT_152.GetFloat("FLOOR_HGT");
                var FLOOR_HGT_155 = _world.GetObject(ObjectType.Skill, "FLOOR_HGT");
                var FLOOR_HGT_155_val = FLOOR_HGT_155.GetFloat("VAL");
                var HIT_159 = _world.GetSynonymObject("HIT");
                var temp_160 = HIT_159.GetFloat("DISTANCE");
                MISSILE_146.SetFloat("VSPEED", (temp_153 - FLOOR_HGT_155_val) / temp_160);
            }
            var MISSILE_163 = _world.GetSynonymObject("MISSILE");
            var temp_164 = MISSILE_163.GetFloat("VSPEED");
            if (temp_164 < 0f)
            {
                var MISSILE_166 = _world.GetSynonymObject("MISSILE");
                var MISSILE_168 = _world.GetSynonymObject("MISSILE");
                var temp_169 = MISSILE_168.GetFloat("VSPEED");
                var MISSILE_172 = _world.GetSynonymObject("MISSILE");
                var temp_173 = MISSILE_172.GetFloat("VSPEED");
                MISSILE_166.SetFloat("VSPEED", -temp_173);
            }
            goto CONTHIT;
            HITWALL:
            var MISSILE_175 = _world.GetSynonymObject("MISSILE");
            var MISSILE_177 = _world.GetSynonymObject("MISSILE");
            var temp_178 = MISSILE_177.GetFloat("VSPEED");
            var PLAYER_TILT_180 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_180_val = PLAYER_TILT_180.GetFloat("VAL");
            MISSILE_175.SetFloat("VSPEED", -PLAYER_TILT_180_val / 1.4f);
            CONTHIT:
            var PLAYER_LIGHT_184 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            var PLAYER_LIGHT_184_val = PLAYER_LIGHT_184.GetFloat("VAL");
            var PLAYER_LIGHT_185 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            PLAYER_LIGHT_185.SetFloat("VAL", PLAYER_LIGHT_184_val + -0.7f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MISS2TEX_187 = _world.AcknexObject.GetAcknexObject("MISS2TEX");
            var MISSILE_189 = _world.GetSynonymObject("MISSILE");
            var temp_190 = MISSILE_189?.GetAcknexObject("TEXTURE");
            if (temp_190 == MISS2TEX_187)
            {
                var MISS1TEX_191 = _world.AcknexObject.GetAcknexObject("MISS1TEX");
                var MISSILE_193 = _world.GetSynonymObject("MISSILE");
                MISSILE_193.SetAcknexObject("TEXTURE", MISS1TEX_191);
            }
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            //Unknown keyword: LOCATE
            var STNG01OVL_195 = _world.AcknexObject.GetAcknexObject("STNG01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", STNG01OVL_195);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var STNG00OVL_199 = _world.AcknexObject.GetAcknexObject("STNG00OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", STNG00OVL_199);
            goto CONT;
            NOAMMO:
            var WRN02STR_202 = _world.AcknexObject.GetAcknexObject("WRN02STR");
            var PANELTEXT_204 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            var PANELTEXT_204_array = PANELTEXT_204.GetObject<List<IAcknexObject>>("STRING");
            var PANELTEXT_204_index = PANELTEXT_204.GetInteger("INDEX");
            PANELTEXT_204_array[PANELTEXT_204_index - 1] = WRN02STR_202;
            PANELTEXT_204.IsDirty = true;
            var PANELTEXT_205 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", PANELTEXT_205);
            var MSGSECCOUNT_209 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_209.SetFloat("VAL", 0f);
            var STNG03SND_210 = _world.AcknexObject.GetAcknexObject("STNG03SND");
            _world.PlaySound(STNG03SND_210, 1f, null);
            var GUN_ON_213 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_213.SetFloat("VAL", 0f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var STNG00OVL_215 = _world.AcknexObject.GetAcknexObject("STNG00OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", STNG00OVL_215);
            CONT:
            var WEAPONSEL_219 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_219_val = WEAPONSEL_219.GetFloat("VAL");
            if (WEAPONSEL_219_val != 4f)
            {
                goto FINISH;
            }
            var LAUNCH_220 = _world.AcknexObject.GetAcknexObject("LAUNCH");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", LAUNCH_220);
            var LAUNCH_222 = _world.AcknexObject.GetAcknexObject("LAUNCH");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", LAUNCH_222);
            FINISH:
            var GUNFIRING_225 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            GUNFIRING_225.SetFloat("VAL", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator BEAM(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = CHOOSEPARTICLE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var PARTICLE_1 = _world.GetSynonymObject("PARTICLE");
            if (PARTICLE_1 == null)
            {
                yield break;
            }
            var GUNFIRING_3 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            GUNFIRING_3.SetFloat("VAL", 1f);
            _world.AcknexObject.SetAcknexObject("IF_CTRL", null);
            _world.AcknexObject.SetAcknexObject("IF_LEFT", null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            FIRE:
            var QGUN01OVL_9 = _world.AcknexObject.GetAcknexObject("QGUN01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", QGUN01OVL_9);
            var AMMO_13 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_13_val = AMMO_13.GetFloat("VAL");
            if (AMMO_13_val == 0f)
            {
                goto NOAMMO;
            }
            var AMMO_15 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_15_val = AMMO_15.GetFloat("VAL");
            var AMMO_16 = _world.GetObject(ObjectType.Skill, "AMMO");
            AMMO_16.SetFloat("VAL", AMMO_15_val + -1f);
            {
                var enumerator = DECAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var AMMO_18 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_18_val = AMMO_18.GetFloat("VAL");
            if (AMMO_18_val > 20f)
            {
                goto PLENTY;
            }
            var WRN01STR_19 = _world.AcknexObject.GetAcknexObject("WRN01STR");
            var PANELTEXT_21 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            var PANELTEXT_21_array = PANELTEXT_21.GetObject<List<IAcknexObject>>("STRING");
            var PANELTEXT_21_index = PANELTEXT_21.GetInteger("INDEX");
            PANELTEXT_21_array[PANELTEXT_21_index - 1] = WRN01STR_19;
            PANELTEXT_21.IsDirty = true;
            var PANELTEXT_22 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", PANELTEXT_22);
            var MSGSECCOUNT_26 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_26.SetFloat("VAL", 0f);
            PLENTY:
            var PLAYER_LIGHT_28 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            var PLAYER_LIGHT_28_val = PLAYER_LIGHT_28.GetFloat("VAL");
            var PLAYER_LIGHT_29 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            PLAYER_LIGHT_29.SetFloat("VAL", PLAYER_LIGHT_28_val + 0.9f);
            var QGUN02SND_30 = _world.AcknexObject.GetAcknexObject("QGUN02SND");
            _world.PlaySound(QGUN02SND_30, 0.8f, null);
            var SHOT_SOUND_ON_33 = _world.GetObject(ObjectType.Skill, "SHOT_SOUND_ON");
            SHOT_SOUND_ON_33.SetFloat("VAL", 1f);
            var SHOTSECCOUNT_35 = _world.GetObject(ObjectType.Skill, "SHOTSECCOUNT");
            SHOTSECCOUNT_35.SetFloat("VAL", 0f);
            var QGUN02OVL_36 = _world.AcknexObject.GetAcknexObject("QGUN02OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", QGUN02OVL_36);
            var PARTICLE_41 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_41.SetFloat("GROUND", 1f);
            var PARTICLE_44 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_44.SetFloat("SPEED", 2f);
            var PARTICLE_46 = _world.GetSynonymObject("PARTICLE");
            var PARTICLE_48 = _world.GetSynonymObject("PARTICLE");
            var temp_49 = PARTICLE_48.GetFloat("X");
            var PLAYER_X_50 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_50_val = PLAYER_X_50.GetFloat("VAL");
            var PLAYER_COS_52 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var PLAYER_COS_52_val = PLAYER_COS_52.GetFloat("VAL");
            var PLAYER_VX_56 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_56_val = PLAYER_VX_56.GetFloat("VAL");
            var TIME_CORR_58 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_58_val = TIME_CORR_58.GetFloat("VAL");
            PARTICLE_46.SetFloat("X", PLAYER_X_50_val + PLAYER_COS_52_val * 2f + PLAYER_VX_56_val * TIME_CORR_58_val);
            var PARTICLE_60 = _world.GetSynonymObject("PARTICLE");
            var PARTICLE_62 = _world.GetSynonymObject("PARTICLE");
            var temp_63 = PARTICLE_62.GetFloat("Y");
            var PLAYER_Y_64 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_64_val = PLAYER_Y_64.GetFloat("VAL");
            var PLAYER_SIN_66 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var PLAYER_SIN_66_val = PLAYER_SIN_66.GetFloat("VAL");
            var PLAYER_VY_70 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_70_val = PLAYER_VY_70.GetFloat("VAL");
            var TIME_CORR_72 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_72_val = TIME_CORR_72.GetFloat("VAL");
            PARTICLE_60.SetFloat("Y", PLAYER_Y_64_val + PLAYER_SIN_66_val * 2f + PLAYER_VY_70_val * TIME_CORR_72_val);
            var PARTICLE_74 = _world.GetSynonymObject("PARTICLE");
            var PARTICLE_76 = _world.GetSynonymObject("PARTICLE");
            var temp_77 = PARTICLE_76.GetFloat("HEIGHT");
            var PLAYER_SIZE_78 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_78_val = PLAYER_SIZE_78.GetFloat("VAL");
            var PLAYER_TILT_81 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_81_val = PLAYER_TILT_81.GetFloat("VAL");
            var PLAYER_HGT_88 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_88_val = PLAYER_HGT_88.GetFloat("VAL");
            var FLOOR_HGT_90 = _world.GetObject(ObjectType.Skill, "FLOOR_HGT");
            var FLOOR_HGT_90_val = FLOOR_HGT_90.GetFloat("VAL");
            PARTICLE_74.SetFloat("HEIGHT", PLAYER_SIZE_78_val - (PLAYER_TILT_81_val * 1.3f) - 0.3f + PLAYER_HGT_88_val + FLOOR_HGT_90_val);
            var PRTCTEX_91 = _world.AcknexObject.GetAcknexObject("PRTCTEX");
            var PARTICLE_93 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_93.SetAcknexObject("TEXTURE", PRTCTEX_91);
            var IMPLODEPARTICLE_94 = _world.AcknexObject.GetAcknexObject("IMPLODEPARTICLE");
            var PARTICLE_96 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_96.SetAcknexObject("IF_ARRIVED", IMPLODEPARTICLE_94);
            var LOCATEPARTICLE_97 = _world.AcknexObject.GetAcknexObject("LOCATEPARTICLE");
            var PARTICLE_99 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_99.SetAcknexObject("EACH_CYCLE", LOCATEPARTICLE_97);
            var PARTICLE_102 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_102.SetAcknexObject("EACH_TICK", null);
            var PLAYER_ANGLE_103 = _world.GetObject(ObjectType.Skill, "PLAYER_ANGLE");
            var PLAYER_ANGLE_103_val = PLAYER_ANGLE_103.GetFloat("VAL");
            var PARTICLE_105 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_105.SetFloat("ANGLE", PLAYER_ANGLE_103_val);
            var BULLET_106 = _world.AcknexObject.GetAcknexObject("BULLET");
            var PARTICLE_108 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_108.SetAcknexObject("TARGET", BULLET_106);
            var PARTICLE_111 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_111.SetFloat("INVISIBLE", 0f);
            var SHOOT_SECTOR_113 = _world.GetObject(ObjectType.Skill, "SHOOT_SECTOR");
            SHOOT_SECTOR_113.SetFloat("VAL", 6.283f);
            var SHOOT_RANGE_115 = _world.GetObject(ObjectType.Skill, "SHOOT_RANGE");
            SHOOT_RANGE_115.SetFloat("VAL", 200f);
            var SHOOT_FAC_117 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            SHOOT_FAC_117.SetFloat("VAL", 0f);
            var SHOOT_X_119 = _world.GetObject(ObjectType.Skill, "SHOOT_X");
            SHOOT_X_119.SetFloat("VAL", 0f);
            var SHOOT_Y_121 = _world.GetObject(ObjectType.Skill, "SHOOT_Y");
            SHOOT_Y_121.SetFloat("VAL", 0f);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_123 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_123_val = HIT_DIST_123.GetFloat("VAL");
            if (HIT_DIST_123_val == 0f)
            {
                goto HITWALL;
            }
            var HIT_124 = _world.GetSynonymObject("HIT");
            var PARTICLE_126 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_126.SetAcknexObject("TARGET", HIT_124);
            var HIT_129 = _world.GetSynonymObject("HIT");
            var temp_130 = HIT_129.GetFloat("DISTANCE");
            if (temp_130 != 0f)
            {
                var PARTICLE_132 = _world.GetSynonymObject("PARTICLE");
                var PARTICLE_134 = _world.GetSynonymObject("PARTICLE");
                var temp_135 = PARTICLE_134.GetFloat("VSPEED");
                var HIT_138 = _world.GetSynonymObject("HIT");
                var temp_139 = HIT_138.GetFloat("FLOOR_HGT");
                var FLOOR_HGT_141 = _world.GetObject(ObjectType.Skill, "FLOOR_HGT");
                var FLOOR_HGT_141_val = FLOOR_HGT_141.GetFloat("VAL");
                var HIT_145 = _world.GetSynonymObject("HIT");
                var temp_146 = HIT_145.GetFloat("DISTANCE");
                PARTICLE_132.SetFloat("VSPEED", (temp_139 - FLOOR_HGT_141_val) / temp_146);
            }
            var PARTICLE_149 = _world.GetSynonymObject("PARTICLE");
            var temp_150 = PARTICLE_149.GetFloat("VSPEED");
            if (temp_150 < 0f)
            {
                var PARTICLE_152 = _world.GetSynonymObject("PARTICLE");
                var PARTICLE_154 = _world.GetSynonymObject("PARTICLE");
                var temp_155 = PARTICLE_154.GetFloat("VSPEED");
                var PARTICLE_158 = _world.GetSynonymObject("PARTICLE");
                var temp_159 = PARTICLE_158.GetFloat("VSPEED");
                PARTICLE_152.SetFloat("VSPEED", -temp_159);
            }
            goto CONTHIT;
            HITWALL:
            var BULLET_160 = _world.AcknexObject.GetAcknexObject("BULLET");
            var PARTICLE_162 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_162.SetAcknexObject("TARGET", BULLET_160);
            var PARTICLE_164 = _world.GetSynonymObject("PARTICLE");
            var PARTICLE_166 = _world.GetSynonymObject("PARTICLE");
            var temp_167 = PARTICLE_166.GetFloat("VSPEED");
            var PLAYER_TILT_169 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_169_val = PLAYER_TILT_169.GetFloat("VAL");
            PARTICLE_164.SetFloat("VSPEED", -PLAYER_TILT_169_val / 1.4f);
            CONTHIT:
            var PLAYER_LIGHT_173 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            var PLAYER_LIGHT_173_val = PLAYER_LIGHT_173.GetFloat("VAL");
            var PLAYER_LIGHT_174 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            PLAYER_LIGHT_174.SetFloat("VAL", PLAYER_LIGHT_173_val + -0.9f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            //Unknown keyword: LOCATE
            var QGUN01OVL_176 = _world.AcknexObject.GetAcknexObject("QGUN01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", QGUN01OVL_176);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var QGUN00OVL_180 = _world.AcknexObject.GetAcknexObject("QGUN00OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", QGUN00OVL_180);
            goto CONT;
            NOAMMO:
            var WRN02STR_183 = _world.AcknexObject.GetAcknexObject("WRN02STR");
            var PANELTEXT_185 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            var PANELTEXT_185_array = PANELTEXT_185.GetObject<List<IAcknexObject>>("STRING");
            var PANELTEXT_185_index = PANELTEXT_185.GetInteger("INDEX");
            PANELTEXT_185_array[PANELTEXT_185_index - 1] = WRN02STR_183;
            PANELTEXT_185.IsDirty = true;
            var PANELTEXT_186 = _world.AcknexObject.GetAcknexObject("PANELTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", PANELTEXT_186);
            var MSGSECCOUNT_190 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_190.SetFloat("VAL", 0f);
            var GUN_ON_192 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_192.SetFloat("VAL", 0f);
            var QGUN03SND_193 = _world.AcknexObject.GetAcknexObject("QGUN03SND");
            _world.PlaySound(QGUN03SND_193, 0.5f, null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var QGUN00OVL_196 = _world.AcknexObject.GetAcknexObject("QGUN00OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", QGUN00OVL_196);
            CONT:
            var WEAPONSEL_200 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_200_val = WEAPONSEL_200.GetFloat("VAL");
            if (WEAPONSEL_200_val != 5f)
            {
                goto FINISH;
            }
            var BEAM_201 = _world.AcknexObject.GetAcknexObject("BEAM");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", BEAM_201);
            var BEAM_203 = _world.AcknexObject.GetAcknexObject("BEAM");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", BEAM_203);
            FINISH:
            var GUNFIRING_206 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            GUNFIRING_206.SetFloat("VAL", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator RAISE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_GUN_1 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_3 = _world.GetSynonymObject("MY_GUN");
            var temp_4 = MY_GUN_3.GetFloat("X");
            var PLAYER_X_5 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_5_val = PLAYER_X_5.GetFloat("VAL");
            var PLAYER_COS_7 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var PLAYER_COS_7_val = PLAYER_COS_7.GetFloat("VAL");
            var PLAYER_VX_11 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_11_val = PLAYER_VX_11.GetFloat("VAL");
            var TIME_CORR_13 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_13_val = TIME_CORR_13.GetFloat("VAL");
            MY_GUN_1.SetFloat("X", PLAYER_X_5_val + PLAYER_COS_7_val * 1.16f + PLAYER_VX_11_val * TIME_CORR_13_val);
            var MY_GUN_15 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_17 = _world.GetSynonymObject("MY_GUN");
            var temp_18 = MY_GUN_17.GetFloat("Y");
            var PLAYER_Y_19 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_19_val = PLAYER_Y_19.GetFloat("VAL");
            var PLAYER_SIN_21 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var PLAYER_SIN_21_val = PLAYER_SIN_21.GetFloat("VAL");
            var PLAYER_VY_25 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_25_val = PLAYER_VY_25.GetFloat("VAL");
            var TIME_CORR_27 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_27_val = TIME_CORR_27.GetFloat("VAL");
            MY_GUN_15.SetFloat("Y", PLAYER_Y_19_val + PLAYER_SIN_21_val * 1.16f + PLAYER_VY_25_val * TIME_CORR_27_val);
            var MY_GUN_29 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_31 = _world.GetSynonymObject("MY_GUN");
            var temp_32 = MY_GUN_31.GetFloat("HEIGHT");
            var PLAYER_Z_33 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_33_val = PLAYER_Z_33.GetFloat("VAL");
            var PLAYER_TILT_36 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_36_val = PLAYER_TILT_36.GetFloat("VAL");
            MY_GUN_29.SetFloat("HEIGHT", PLAYER_Z_33_val - (PLAYER_TILT_36_val - 1f) * 0.844f - 1.9f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_46 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_48 = _world.GetSynonymObject("MY_GUN");
            var temp_49 = MY_GUN_48.GetFloat("X");
            var PLAYER_X_50 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_50_val = PLAYER_X_50.GetFloat("VAL");
            var PLAYER_COS_52 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var PLAYER_COS_52_val = PLAYER_COS_52.GetFloat("VAL");
            var PLAYER_VX_56 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_56_val = PLAYER_VX_56.GetFloat("VAL");
            var TIME_CORR_58 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_58_val = TIME_CORR_58.GetFloat("VAL");
            MY_GUN_46.SetFloat("X", PLAYER_X_50_val + PLAYER_COS_52_val * 1.16f + PLAYER_VX_56_val * TIME_CORR_58_val);
            var MY_GUN_60 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_62 = _world.GetSynonymObject("MY_GUN");
            var temp_63 = MY_GUN_62.GetFloat("Y");
            var PLAYER_Y_64 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_64_val = PLAYER_Y_64.GetFloat("VAL");
            var PLAYER_SIN_66 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var PLAYER_SIN_66_val = PLAYER_SIN_66.GetFloat("VAL");
            var PLAYER_VY_70 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_70_val = PLAYER_VY_70.GetFloat("VAL");
            var TIME_CORR_72 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_72_val = TIME_CORR_72.GetFloat("VAL");
            MY_GUN_60.SetFloat("Y", PLAYER_Y_64_val + PLAYER_SIN_66_val * 1.16f + PLAYER_VY_70_val * TIME_CORR_72_val);
            var MY_GUN_74 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_76 = _world.GetSynonymObject("MY_GUN");
            var temp_77 = MY_GUN_76.GetFloat("HEIGHT");
            var PLAYER_Z_78 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_78_val = PLAYER_Z_78.GetFloat("VAL");
            var PLAYER_TILT_81 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_81_val = PLAYER_TILT_81.GetFloat("VAL");
            MY_GUN_74.SetFloat("HEIGHT", PLAYER_Z_78_val - (PLAYER_TILT_81_val - 1f) * 0.844f - 1.6f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_91 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_93 = _world.GetSynonymObject("MY_GUN");
            var temp_94 = MY_GUN_93.GetFloat("X");
            var PLAYER_X_95 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_95_val = PLAYER_X_95.GetFloat("VAL");
            var PLAYER_COS_97 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var PLAYER_COS_97_val = PLAYER_COS_97.GetFloat("VAL");
            var PLAYER_VX_101 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_101_val = PLAYER_VX_101.GetFloat("VAL");
            var TIME_CORR_103 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_103_val = TIME_CORR_103.GetFloat("VAL");
            MY_GUN_91.SetFloat("X", PLAYER_X_95_val + PLAYER_COS_97_val * 1.16f + PLAYER_VX_101_val * TIME_CORR_103_val);
            var MY_GUN_105 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_107 = _world.GetSynonymObject("MY_GUN");
            var temp_108 = MY_GUN_107.GetFloat("Y");
            var PLAYER_Y_109 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_109_val = PLAYER_Y_109.GetFloat("VAL");
            var PLAYER_SIN_111 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var PLAYER_SIN_111_val = PLAYER_SIN_111.GetFloat("VAL");
            var PLAYER_VY_115 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_115_val = PLAYER_VY_115.GetFloat("VAL");
            var TIME_CORR_117 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_117_val = TIME_CORR_117.GetFloat("VAL");
            MY_GUN_105.SetFloat("Y", PLAYER_Y_109_val + PLAYER_SIN_111_val * 1.16f + PLAYER_VY_115_val * TIME_CORR_117_val);
            var MY_GUN_119 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_121 = _world.GetSynonymObject("MY_GUN");
            var temp_122 = MY_GUN_121.GetFloat("HEIGHT");
            var PLAYER_Z_123 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_123_val = PLAYER_Z_123.GetFloat("VAL");
            var PLAYER_TILT_126 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_126_val = PLAYER_TILT_126.GetFloat("VAL");
            MY_GUN_119.SetFloat("HEIGHT", PLAYER_Z_123_val - (PLAYER_TILT_126_val - 1f) * 0.844f - 1.45f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_136 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_138 = _world.GetSynonymObject("MY_GUN");
            var temp_139 = MY_GUN_138.GetFloat("X");
            var PLAYER_X_140 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_140_val = PLAYER_X_140.GetFloat("VAL");
            var PLAYER_COS_142 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var PLAYER_COS_142_val = PLAYER_COS_142.GetFloat("VAL");
            var PLAYER_VX_146 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_146_val = PLAYER_VX_146.GetFloat("VAL");
            var TIME_CORR_148 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_148_val = TIME_CORR_148.GetFloat("VAL");
            MY_GUN_136.SetFloat("X", PLAYER_X_140_val + PLAYER_COS_142_val * 1.16f + PLAYER_VX_146_val * TIME_CORR_148_val);
            var MY_GUN_150 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_152 = _world.GetSynonymObject("MY_GUN");
            var temp_153 = MY_GUN_152.GetFloat("Y");
            var PLAYER_Y_154 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_154_val = PLAYER_Y_154.GetFloat("VAL");
            var PLAYER_SIN_156 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var PLAYER_SIN_156_val = PLAYER_SIN_156.GetFloat("VAL");
            var PLAYER_VY_160 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_160_val = PLAYER_VY_160.GetFloat("VAL");
            var TIME_CORR_162 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_162_val = TIME_CORR_162.GetFloat("VAL");
            MY_GUN_150.SetFloat("Y", PLAYER_Y_154_val + PLAYER_SIN_156_val * 1.16f + PLAYER_VY_160_val * TIME_CORR_162_val);
            var MY_GUN_164 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_166 = _world.GetSynonymObject("MY_GUN");
            var temp_167 = MY_GUN_166.GetFloat("HEIGHT");
            var PLAYER_Z_168 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_168_val = PLAYER_Z_168.GetFloat("VAL");
            var PLAYER_TILT_171 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_171_val = PLAYER_TILT_171.GetFloat("VAL");
            MY_GUN_164.SetFloat("HEIGHT", PLAYER_Z_168_val - (PLAYER_TILT_171_val - 1f) * 0.844f - 1.35f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_182 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_182.SetFloat("HEIGHT", -20f);
            var MY_GUN_185 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_185.SetFloat("INVISIBLE", 1f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator LOWER(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_GUN_1 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_3 = _world.GetSynonymObject("MY_GUN");
            var temp_4 = MY_GUN_3.GetFloat("X");
            var PLAYER_X_5 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_5_val = PLAYER_X_5.GetFloat("VAL");
            var PLAYER_COS_7 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var PLAYER_COS_7_val = PLAYER_COS_7.GetFloat("VAL");
            var PLAYER_VX_11 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_11_val = PLAYER_VX_11.GetFloat("VAL");
            var TIME_CORR_13 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_13_val = TIME_CORR_13.GetFloat("VAL");
            MY_GUN_1.SetFloat("X", PLAYER_X_5_val + PLAYER_COS_7_val * 1.16f + PLAYER_VX_11_val * TIME_CORR_13_val);
            var MY_GUN_15 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_17 = _world.GetSynonymObject("MY_GUN");
            var temp_18 = MY_GUN_17.GetFloat("Y");
            var PLAYER_Y_19 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_19_val = PLAYER_Y_19.GetFloat("VAL");
            var PLAYER_SIN_21 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var PLAYER_SIN_21_val = PLAYER_SIN_21.GetFloat("VAL");
            var PLAYER_VY_25 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_25_val = PLAYER_VY_25.GetFloat("VAL");
            var TIME_CORR_27 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_27_val = TIME_CORR_27.GetFloat("VAL");
            MY_GUN_15.SetFloat("Y", PLAYER_Y_19_val + PLAYER_SIN_21_val * 1.16f + PLAYER_VY_25_val * TIME_CORR_27_val);
            var MY_GUN_29 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_31 = _world.GetSynonymObject("MY_GUN");
            var temp_32 = MY_GUN_31.GetFloat("HEIGHT");
            var PLAYER_Z_33 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_33_val = PLAYER_Z_33.GetFloat("VAL");
            var PLAYER_TILT_36 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_36_val = PLAYER_TILT_36.GetFloat("VAL");
            MY_GUN_29.SetFloat("HEIGHT", PLAYER_Z_33_val - (PLAYER_TILT_36_val - 1f) * 0.844f - 1.35f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_46 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_48 = _world.GetSynonymObject("MY_GUN");
            var temp_49 = MY_GUN_48.GetFloat("X");
            var PLAYER_X_50 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_50_val = PLAYER_X_50.GetFloat("VAL");
            var PLAYER_COS_52 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var PLAYER_COS_52_val = PLAYER_COS_52.GetFloat("VAL");
            var PLAYER_VX_56 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_56_val = PLAYER_VX_56.GetFloat("VAL");
            var TIME_CORR_58 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_58_val = TIME_CORR_58.GetFloat("VAL");
            MY_GUN_46.SetFloat("X", PLAYER_X_50_val + PLAYER_COS_52_val * 1.16f + PLAYER_VX_56_val * TIME_CORR_58_val);
            var MY_GUN_60 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_62 = _world.GetSynonymObject("MY_GUN");
            var temp_63 = MY_GUN_62.GetFloat("Y");
            var PLAYER_Y_64 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_64_val = PLAYER_Y_64.GetFloat("VAL");
            var PLAYER_SIN_66 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var PLAYER_SIN_66_val = PLAYER_SIN_66.GetFloat("VAL");
            var PLAYER_VY_70 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_70_val = PLAYER_VY_70.GetFloat("VAL");
            var TIME_CORR_72 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_72_val = TIME_CORR_72.GetFloat("VAL");
            MY_GUN_60.SetFloat("Y", PLAYER_Y_64_val + PLAYER_SIN_66_val * 1.16f + PLAYER_VY_70_val * TIME_CORR_72_val);
            var MY_GUN_74 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_76 = _world.GetSynonymObject("MY_GUN");
            var temp_77 = MY_GUN_76.GetFloat("HEIGHT");
            var PLAYER_Z_78 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_78_val = PLAYER_Z_78.GetFloat("VAL");
            var PLAYER_TILT_81 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_81_val = PLAYER_TILT_81.GetFloat("VAL");
            MY_GUN_74.SetFloat("HEIGHT", PLAYER_Z_78_val - (PLAYER_TILT_81_val - 1f) * 0.844f - 1.45f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_91 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_93 = _world.GetSynonymObject("MY_GUN");
            var temp_94 = MY_GUN_93.GetFloat("X");
            var PLAYER_X_95 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_95_val = PLAYER_X_95.GetFloat("VAL");
            var PLAYER_COS_97 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var PLAYER_COS_97_val = PLAYER_COS_97.GetFloat("VAL");
            var PLAYER_VX_101 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_101_val = PLAYER_VX_101.GetFloat("VAL");
            var TIME_CORR_103 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_103_val = TIME_CORR_103.GetFloat("VAL");
            MY_GUN_91.SetFloat("X", PLAYER_X_95_val + PLAYER_COS_97_val * 1.16f + PLAYER_VX_101_val * TIME_CORR_103_val);
            var MY_GUN_105 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_107 = _world.GetSynonymObject("MY_GUN");
            var temp_108 = MY_GUN_107.GetFloat("Y");
            var PLAYER_Y_109 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_109_val = PLAYER_Y_109.GetFloat("VAL");
            var PLAYER_SIN_111 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var PLAYER_SIN_111_val = PLAYER_SIN_111.GetFloat("VAL");
            var PLAYER_VY_115 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_115_val = PLAYER_VY_115.GetFloat("VAL");
            var TIME_CORR_117 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_117_val = TIME_CORR_117.GetFloat("VAL");
            MY_GUN_105.SetFloat("Y", PLAYER_Y_109_val + PLAYER_SIN_111_val * 1.16f + PLAYER_VY_115_val * TIME_CORR_117_val);
            var MY_GUN_119 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_121 = _world.GetSynonymObject("MY_GUN");
            var temp_122 = MY_GUN_121.GetFloat("HEIGHT");
            var PLAYER_Z_123 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_123_val = PLAYER_Z_123.GetFloat("VAL");
            var PLAYER_TILT_126 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_126_val = PLAYER_TILT_126.GetFloat("VAL");
            MY_GUN_119.SetFloat("HEIGHT", PLAYER_Z_123_val - (PLAYER_TILT_126_val - 1f) * 0.844f - 1.6f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_136 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_138 = _world.GetSynonymObject("MY_GUN");
            var temp_139 = MY_GUN_138.GetFloat("X");
            var PLAYER_X_140 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_140_val = PLAYER_X_140.GetFloat("VAL");
            var PLAYER_COS_142 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var PLAYER_COS_142_val = PLAYER_COS_142.GetFloat("VAL");
            var PLAYER_VX_146 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_146_val = PLAYER_VX_146.GetFloat("VAL");
            var TIME_CORR_148 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_148_val = TIME_CORR_148.GetFloat("VAL");
            MY_GUN_136.SetFloat("X", PLAYER_X_140_val + PLAYER_COS_142_val * 1.16f + PLAYER_VX_146_val * TIME_CORR_148_val);
            var MY_GUN_150 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_152 = _world.GetSynonymObject("MY_GUN");
            var temp_153 = MY_GUN_152.GetFloat("Y");
            var PLAYER_Y_154 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_154_val = PLAYER_Y_154.GetFloat("VAL");
            var PLAYER_SIN_156 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var PLAYER_SIN_156_val = PLAYER_SIN_156.GetFloat("VAL");
            var PLAYER_VY_160 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_160_val = PLAYER_VY_160.GetFloat("VAL");
            var TIME_CORR_162 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_162_val = TIME_CORR_162.GetFloat("VAL");
            MY_GUN_150.SetFloat("Y", PLAYER_Y_154_val + PLAYER_SIN_156_val * 1.16f + PLAYER_VY_160_val * TIME_CORR_162_val);
            var MY_GUN_164 = _world.GetSynonymObject("MY_GUN");
            var MY_GUN_166 = _world.GetSynonymObject("MY_GUN");
            var temp_167 = MY_GUN_166.GetFloat("HEIGHT");
            var PLAYER_Z_168 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_168_val = PLAYER_Z_168.GetFloat("VAL");
            var PLAYER_TILT_171 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_171_val = PLAYER_TILT_171.GetFloat("VAL");
            MY_GUN_164.SetFloat("HEIGHT", PLAYER_Z_168_val - (PLAYER_TILT_171_val - 1f) * 0.844f - 1.9f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_182 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_182.SetFloat("HEIGHT", -20f);
            var MY_GUN_185 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_185.SetFloat("INVISIBLE", 1f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator TARGETON(IAcknexObject MY, IAcknexObject THERE)
        {
            var TARGETOVL_0 = _world.AcknexObject.GetAcknexObject("TARGETOVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.16", TARGETOVL_0);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator TARGETOFF(IAcknexObject MY, IAcknexObject THERE)
        {
            _world.AcknexObject.SetAcknexObject("LAYERS.16", null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SELECTNONE(IAcknexObject MY, IAcknexObject THERE)
        {
            var WEAPONSEL_1 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            WEAPONSEL_1.SetFloat("VAL", 1f);
            _world.AcknexObject.SetAcknexObject("IF_CTRL", null);
            _world.AcknexObject.SetAcknexObject("IF_LEFT", null);
            _world.AcknexObject.SetAcknexObject("IF_TAB", null);
            _world.AcknexObject.SetAcknexObject("IF_1", null);
            _world.AcknexObject.SetAcknexObject("IF_F10", null);
            _world.AcknexObject.SetAcknexObject("IF_2", null);
            _world.AcknexObject.SetAcknexObject("IF_3", null);
            _world.AcknexObject.SetAcknexObject("IF_4", null);
            _world.AcknexObject.SetAcknexObject("IF_5", null);
            _world.AcknexObject.SetAcknexObject("IF_6", null);
            WAITFIRE:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GUNFIRING_24 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            var GUNFIRING_24_val = GUNFIRING_24.GetFloat("VAL");
            if (GUNFIRING_24_val != 0f)
            {
                goto WAITFIRE;
            }
            var MY_GUN_26 = _world.GetSynonymObject("MY_GUN");
            if (MY_GUN_26 == null)
            {
                goto NOGUN;
            }
            var MY_GUN_29 = _world.GetSynonymObject("MY_GUN");
            var temp_30 = MY_GUN_29.GetFloat("INVISIBLE");
            if (temp_30 != 1f)
            {
                goto WAITFIRE;
            }
            NOGUN:
            {
                var enumerator = TARGETOFF(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            {
                var enumerator = SHOWAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MAP_MODE_32 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            MAP_MODE_32.SetFloat("VAL", 0f);
            var PDATEXT_35 = _world.AcknexObject.GetAcknexObject("PDATEXT");
            PDATEXT_35.SetFloat("VISIBLE", 0f);
            _world.AcknexObject.SetAcknexObject("LAYERS.13", null);
            var MY_GUN_40 = _world.GetSynonymObject("MY_GUN");
            if (MY_GUN_40 == null)
            {
                goto CONT;
            }
            var MY_GUN_43 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_43.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = LOWER(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            WAITING:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)16f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_47 = _world.GetSynonymObject("MY_GUN");
            var temp_48 = MY_GUN_47.GetFloat("INVISIBLE");
            if (temp_48 < 1f)
            {
                goto WAITING;
            }
            _world.SetSynonymObject("MY_GUN", null);
            var RENDER_MODE_52 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_52.SetFloat("VAL", 1f);
            CONT:
            var SELECTTRICORDER_53 = _world.AcknexObject.GetAcknexObject("SELECTTRICORDER");
            _world.AcknexObject.SetAcknexObject("IF_TAB", SELECTTRICORDER_53);
            var SELECTNONE_55 = _world.AcknexObject.GetAcknexObject("SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_1", SELECTNONE_55);
            var SELECTNONE_57 = _world.AcknexObject.GetAcknexObject("SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_F10", SELECTNONE_57);
            var SELECTMP5_59 = _world.AcknexObject.GetAcknexObject("SELECTMP5");
            _world.AcknexObject.SetAcknexObject("IF_2", SELECTMP5_59);
            var SELECTMP5BURST_61 = _world.AcknexObject.GetAcknexObject("SELECTMP5BURST");
            _world.AcknexObject.SetAcknexObject("IF_3", SELECTMP5BURST_61);
            var SELECTGRANADE_63 = _world.AcknexObject.GetAcknexObject("SELECTGRANADE");
            _world.AcknexObject.SetAcknexObject("IF_4", SELECTGRANADE_63);
            var SELECTSTINGER_65 = _world.AcknexObject.GetAcknexObject("SELECTSTINGER");
            _world.AcknexObject.SetAcknexObject("IF_5", SELECTSTINGER_65);
            var SELECTQUANTUM_67 = _world.AcknexObject.GetAcknexObject("SELECTQUANTUM");
            _world.AcknexObject.SetAcknexObject("IF_6", SELECTQUANTUM_67);
            var GUN_ON_70 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_70.SetFloat("VAL", 0f);
            var PLAYER_RESULT_72 = _world.GetObject(ObjectType.Skill, "PLAYER_RESULT");
            PLAYER_RESULT_72.SetFloat("VAL", -1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SELECTTRICORDER(IAcknexObject MY, IAcknexObject THERE)
        {
            var PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            var PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat("VAL");
            if (PLAYER_HEALTH_1_val < 0.1f)
            {
                yield break;
            }
            var MAP_MODE_3 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            var MAP_MODE_3_val = MAP_MODE_3.GetFloat("VAL");
            if (MAP_MODE_3_val > 0f)
            {
                {
                    var enumerator = SELECTNONE(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            var HAS_PDA_5 = _world.GetObject(ObjectType.Skill, "HAS_PDA");
            var HAS_PDA_5_val = HAS_PDA_5.GetFloat("VAL");
            if (HAS_PDA_5_val != 0f)
            {
                goto HASGOT;
            }
            var WRN04STR_6 = _world.AcknexObject.GetAcknexObject("WRN04STR");
            _world.SetSynonymObject("MESSAGE_TEXT", WRN04STR_6);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            HASGOT:
            var WEAPONSEL_9 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            WEAPONSEL_9.SetFloat("VAL", 1f);
            _world.AcknexObject.SetAcknexObject("IF_CTRL", null);
            _world.AcknexObject.SetAcknexObject("IF_LEFT", null);
            _world.AcknexObject.SetAcknexObject("IF_TAB", null);
            _world.AcknexObject.SetAcknexObject("IF_1", null);
            _world.AcknexObject.SetAcknexObject("IF_F10", null);
            _world.AcknexObject.SetAcknexObject("IF_2", null);
            _world.AcknexObject.SetAcknexObject("IF_3", null);
            _world.AcknexObject.SetAcknexObject("IF_4", null);
            _world.AcknexObject.SetAcknexObject("IF_5", null);
            _world.AcknexObject.SetAcknexObject("IF_6", null);
            WAITFIRE:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GUNFIRING_32 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            var GUNFIRING_32_val = GUNFIRING_32.GetFloat("VAL");
            if (GUNFIRING_32_val != 0f)
            {
                goto WAITFIRE;
            }
            var MY_GUN_34 = _world.GetSynonymObject("MY_GUN");
            if (MY_GUN_34 == null)
            {
                goto NOGUN;
            }
            var MY_GUN_37 = _world.GetSynonymObject("MY_GUN");
            var temp_38 = MY_GUN_37.GetFloat("INVISIBLE");
            if (temp_38 != 1f)
            {
                goto WAITFIRE;
            }
            NOGUN:
            {
                var enumerator = TARGETOFF(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            {
                var enumerator = SHOWAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MAP_MODE_40 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            MAP_MODE_40.SetFloat("VAL", 0f);
            _world.AcknexObject.SetAcknexObject("LAYERS.13", null);
            _world.AcknexObject.SetAcknexObject("IF_CTRL", null);
            _world.AcknexObject.SetAcknexObject("IF_LEFT", null);
            var MY_GUN_49 = _world.GetSynonymObject("MY_GUN");
            if (MY_GUN_49 == null)
            {
                goto CONT;
            }
            var MY_GUN_52 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_52.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = LOWER(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            WAITING:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)8f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_56 = _world.GetSynonymObject("MY_GUN");
            var temp_57 = MY_GUN_56.GetFloat("INVISIBLE");
            if (temp_57 < 1f)
            {
                goto WAITING;
            }
            CONT:
            var TRICACT_58 = _world.AcknexObject.GetAcknexObject("TRICACT");
            _world.SetSynonymObject("MY_GUN", TRICACT_58);
            var MY_GUN_62 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_62.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = RAISE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            WAITING1:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_66 = _world.GetSynonymObject("MY_GUN");
            var temp_67 = MY_GUN_66.GetFloat("INVISIBLE");
            if (temp_67 < 1f)
            {
                goto WAITING1;
            }
            var TRIC01SND_68 = _world.AcknexObject.GetAcknexObject("TRIC01SND");
            _world.PlaySound(TRIC01SND_68, 0.5f, null);
            var MAP_LAYER_71 = _world.GetObject(ObjectType.Skill, "MAP_LAYER");
            MAP_LAYER_71.SetFloat("VAL", 14f);
            var MAP_EDGE_X1_73 = _world.GetObject(ObjectType.Skill, "MAP_EDGE_X1");
            MAP_EDGE_X1_73.SetFloat("VAL", 77f);
            var MAP_EDGE_X2_75 = _world.GetObject(ObjectType.Skill, "MAP_EDGE_X2");
            MAP_EDGE_X2_75.SetFloat("VAL", 237f);
            var MAP_EDGE_Y1_77 = _world.GetObject(ObjectType.Skill, "MAP_EDGE_Y1");
            MAP_EDGE_Y1_77.SetFloat("VAL", 69f);
            var MAP_EDGE_Y2_79 = _world.GetObject(ObjectType.Skill, "MAP_EDGE_Y2");
            MAP_EDGE_Y2_79.SetFloat("VAL", 251f);
            var RENDER_MODE_81 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_81.SetFloat("VAL", 1f);
            var MAP_MODE_83 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            MAP_MODE_83.SetFloat("VAL", 0.5f);
            var TRIC01OVL_84 = _world.AcknexObject.GetAcknexObject("TRIC01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", TRIC01OVL_84);
            var SELECTTRICORDER_87 = _world.AcknexObject.GetAcknexObject("SELECTTRICORDER");
            _world.AcknexObject.SetAcknexObject("IF_TAB", SELECTTRICORDER_87);
            var SELECTNONE_89 = _world.AcknexObject.GetAcknexObject("SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_1", SELECTNONE_89);
            var SELECTNONE_91 = _world.AcknexObject.GetAcknexObject("SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_F10", SELECTNONE_91);
            var SELECTMP5_93 = _world.AcknexObject.GetAcknexObject("SELECTMP5");
            _world.AcknexObject.SetAcknexObject("IF_2", SELECTMP5_93);
            var SELECTMP5BURST_95 = _world.AcknexObject.GetAcknexObject("SELECTMP5BURST");
            _world.AcknexObject.SetAcknexObject("IF_3", SELECTMP5BURST_95);
            var SELECTGRANADE_97 = _world.AcknexObject.GetAcknexObject("SELECTGRANADE");
            _world.AcknexObject.SetAcknexObject("IF_4", SELECTGRANADE_97);
            var SELECTSTINGER_99 = _world.AcknexObject.GetAcknexObject("SELECTSTINGER");
            _world.AcknexObject.SetAcknexObject("IF_5", SELECTSTINGER_99);
            var SELECTQUANTUM_101 = _world.AcknexObject.GetAcknexObject("SELECTQUANTUM");
            _world.AcknexObject.SetAcknexObject("IF_6", SELECTQUANTUM_101);
            var GUN_ON_104 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_104.SetFloat("VAL", 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SELECTMP5(IAcknexObject MY, IAcknexObject THERE)
        {
            var PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            var PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat("VAL");
            if (PLAYER_HEALTH_1_val < 0.1f)
            {
                yield break;
            }
            var WEAPONSEL_3 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_3_val = WEAPONSEL_3.GetFloat("VAL");
            if (WEAPONSEL_3_val == 2f)
            {
                goto HASGOT;
            }
            var HAS_MP5_5 = _world.GetObject(ObjectType.Skill, "HAS_MP5");
            var HAS_MP5_5_val = HAS_MP5_5.GetFloat("VAL");
            if (HAS_MP5_5_val != 0f)
            {
                goto HASGOT;
            }
            var WRN03STR_6 = _world.AcknexObject.GetAcknexObject("WRN03STR");
            _world.SetSynonymObject("MESSAGE_TEXT", WRN03STR_6);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            HASGOT:
            var WEAPONSEL_9 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            WEAPONSEL_9.SetFloat("VAL", 2f);
            _world.AcknexObject.SetAcknexObject("IF_CTRL", null);
            _world.AcknexObject.SetAcknexObject("IF_LEFT", null);
            _world.AcknexObject.SetAcknexObject("IF_TAB", null);
            _world.AcknexObject.SetAcknexObject("IF_1", null);
            _world.AcknexObject.SetAcknexObject("IF_F10", null);
            _world.AcknexObject.SetAcknexObject("IF_4", null);
            _world.AcknexObject.SetAcknexObject("IF_5", null);
            _world.AcknexObject.SetAcknexObject("IF_6", null);
            WAITFIRE:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GUNFIRING_28 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            var GUNFIRING_28_val = GUNFIRING_28.GetFloat("VAL");
            if (GUNFIRING_28_val != 0f)
            {
                goto WAITFIRE;
            }
            var MY_GUN_30 = _world.GetSynonymObject("MY_GUN");
            if (MY_GUN_30 == null)
            {
                goto NOGUN;
            }
            var MY_GUN_33 = _world.GetSynonymObject("MY_GUN");
            var temp_34 = MY_GUN_33.GetFloat("INVISIBLE");
            if (temp_34 != 1f)
            {
                goto WAITFIRE;
            }
            NOGUN:
            {
                var enumerator = TARGETON(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            {
                var enumerator = SHOWAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MAP_MODE_36 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            MAP_MODE_36.SetFloat("VAL", 0f);
            _world.AcknexObject.SetAcknexObject("LAYERS.13", null);
            var MY_GUN_41 = _world.GetSynonymObject("MY_GUN");
            if (MY_GUN_41 == null)
            {
                goto CONT;
            }
            var MY_GUN_44 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_44.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = LOWER(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            WAITING:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)8f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_48 = _world.GetSynonymObject("MY_GUN");
            var temp_49 = MY_GUN_48.GetFloat("INVISIBLE");
            if (temp_49 < 1f)
            {
                goto WAITING;
            }
            CONT:
            var MP5ACT_50 = _world.AcknexObject.GetAcknexObject("MP5ACT");
            _world.SetSynonymObject("MY_GUN", MP5ACT_50);
            var MY_GUN_54 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_54.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = RAISE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            WAITING1:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_58 = _world.GetSynonymObject("MY_GUN");
            var temp_59 = MY_GUN_58.GetFloat("INVISIBLE");
            if (temp_59 < 1f)
            {
                goto WAITING1;
            }
            var MP5_01OVL_60 = _world.AcknexObject.GetAcknexObject("MP5_01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_01OVL_60);
            var RENDER_MODE_64 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_64.SetFloat("VAL", 1f);
            var FIRE_65 = _world.AcknexObject.GetAcknexObject("FIRE");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", FIRE_65);
            var FIRE_67 = _world.AcknexObject.GetAcknexObject("FIRE");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", FIRE_67);
            var GUN_ON_70 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_70.SetFloat("VAL", 1f);
            var MP_501SND_71 = _world.AcknexObject.GetAcknexObject("MP_501SND");
            _world.PlaySound(MP_501SND_71, 0.5f, null);
            var SELECTTRICORDER_73 = _world.AcknexObject.GetAcknexObject("SELECTTRICORDER");
            _world.AcknexObject.SetAcknexObject("IF_TAB", SELECTTRICORDER_73);
            var SELECTNONE_75 = _world.AcknexObject.GetAcknexObject("SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_1", SELECTNONE_75);
            var SELECTNONE_77 = _world.AcknexObject.GetAcknexObject("SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_F10", SELECTNONE_77);
            var SELECTMP5_79 = _world.AcknexObject.GetAcknexObject("SELECTMP5");
            _world.AcknexObject.SetAcknexObject("IF_2", SELECTMP5_79);
            var SELECTMP5BURST_81 = _world.AcknexObject.GetAcknexObject("SELECTMP5BURST");
            _world.AcknexObject.SetAcknexObject("IF_3", SELECTMP5BURST_81);
            var SELECTGRANADE_83 = _world.AcknexObject.GetAcknexObject("SELECTGRANADE");
            _world.AcknexObject.SetAcknexObject("IF_4", SELECTGRANADE_83);
            var SELECTSTINGER_85 = _world.AcknexObject.GetAcknexObject("SELECTSTINGER");
            _world.AcknexObject.SetAcknexObject("IF_5", SELECTSTINGER_85);
            var SELECTQUANTUM_87 = _world.AcknexObject.GetAcknexObject("SELECTQUANTUM");
            _world.AcknexObject.SetAcknexObject("IF_6", SELECTQUANTUM_87);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SELECTMP5BURST(IAcknexObject MY, IAcknexObject THERE)
        {
            var PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            var PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat("VAL");
            if (PLAYER_HEALTH_1_val < 0.1f)
            {
                yield break;
            }
            var WEAPONSEL_3 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_3_val = WEAPONSEL_3.GetFloat("VAL");
            if (WEAPONSEL_3_val == 2f)
            {
                goto HASGOT;
            }
            var HAS_MP5_5 = _world.GetObject(ObjectType.Skill, "HAS_MP5");
            var HAS_MP5_5_val = HAS_MP5_5.GetFloat("VAL");
            if (HAS_MP5_5_val != 0f)
            {
                goto HASGOT;
            }
            var WRN03STR_6 = _world.AcknexObject.GetAcknexObject("WRN03STR");
            _world.SetSynonymObject("MESSAGE_TEXT", WRN03STR_6);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            HASGOT:
            var WEAPONSEL_9 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            WEAPONSEL_9.SetFloat("VAL", 2f);
            _world.AcknexObject.SetAcknexObject("IF_CTRL", null);
            _world.AcknexObject.SetAcknexObject("IF_LEFT", null);
            _world.AcknexObject.SetAcknexObject("IF_TAB", null);
            _world.AcknexObject.SetAcknexObject("IF_1", null);
            _world.AcknexObject.SetAcknexObject("IF_F10", null);
            _world.AcknexObject.SetAcknexObject("IF_2", null);
            _world.AcknexObject.SetAcknexObject("IF_3", null);
            _world.AcknexObject.SetAcknexObject("IF_4", null);
            _world.AcknexObject.SetAcknexObject("IF_5", null);
            _world.AcknexObject.SetAcknexObject("IF_6", null);
            WAITFIRE:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GUNFIRING_32 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            var GUNFIRING_32_val = GUNFIRING_32.GetFloat("VAL");
            if (GUNFIRING_32_val != 0f)
            {
                goto WAITFIRE;
            }
            var MY_GUN_34 = _world.GetSynonymObject("MY_GUN");
            if (MY_GUN_34 == null)
            {
                goto NOGUN;
            }
            var MY_GUN_37 = _world.GetSynonymObject("MY_GUN");
            var temp_38 = MY_GUN_37.GetFloat("INVISIBLE");
            if (temp_38 != 1f)
            {
                goto WAITFIRE;
            }
            NOGUN:
            {
                var enumerator = TARGETON(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            {
                var enumerator = SHOWAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MAP_MODE_40 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            MAP_MODE_40.SetFloat("VAL", 0f);
            _world.AcknexObject.SetAcknexObject("LAYERS.13", null);
            var MY_GUN_45 = _world.GetSynonymObject("MY_GUN");
            if (MY_GUN_45 == null)
            {
                goto CONT;
            }
            var MY_GUN_48 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_48.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = LOWER(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            WAITING:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)8f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_52 = _world.GetSynonymObject("MY_GUN");
            var temp_53 = MY_GUN_52.GetFloat("INVISIBLE");
            if (temp_53 < 1f)
            {
                goto WAITING;
            }
            CONT:
            var MP5ACT_54 = _world.AcknexObject.GetAcknexObject("MP5ACT");
            _world.SetSynonymObject("MY_GUN", MP5ACT_54);
            var MY_GUN_58 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_58.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = RAISE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            WAITING1:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_62 = _world.GetSynonymObject("MY_GUN");
            var temp_63 = MY_GUN_62.GetFloat("INVISIBLE");
            if (temp_63 < 1f)
            {
                goto WAITING1;
            }
            var MP5_01OVL_64 = _world.AcknexObject.GetAcknexObject("MP5_01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_01OVL_64);
            var BURST_67 = _world.AcknexObject.GetAcknexObject("BURST");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", BURST_67);
            var BURST_69 = _world.AcknexObject.GetAcknexObject("BURST");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", BURST_69);
            var GUN_ON_72 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_72.SetFloat("VAL", 1f);
            var RENDER_MODE_74 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_74.SetFloat("VAL", 1f);
            var MP_501SND_75 = _world.AcknexObject.GetAcknexObject("MP_501SND");
            _world.PlaySound(MP_501SND_75, 0.5f, null);
            var SELECTTRICORDER_77 = _world.AcknexObject.GetAcknexObject("SELECTTRICORDER");
            _world.AcknexObject.SetAcknexObject("IF_TAB", SELECTTRICORDER_77);
            var SELECTNONE_79 = _world.AcknexObject.GetAcknexObject("SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_1", SELECTNONE_79);
            var SELECTNONE_81 = _world.AcknexObject.GetAcknexObject("SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_F10", SELECTNONE_81);
            var SELECTMP5_83 = _world.AcknexObject.GetAcknexObject("SELECTMP5");
            _world.AcknexObject.SetAcknexObject("IF_2", SELECTMP5_83);
            var SELECTMP5BURST_85 = _world.AcknexObject.GetAcknexObject("SELECTMP5BURST");
            _world.AcknexObject.SetAcknexObject("IF_3", SELECTMP5BURST_85);
            var SELECTGRANADE_87 = _world.AcknexObject.GetAcknexObject("SELECTGRANADE");
            _world.AcknexObject.SetAcknexObject("IF_4", SELECTGRANADE_87);
            var SELECTSTINGER_89 = _world.AcknexObject.GetAcknexObject("SELECTSTINGER");
            _world.AcknexObject.SetAcknexObject("IF_5", SELECTSTINGER_89);
            var SELECTQUANTUM_91 = _world.AcknexObject.GetAcknexObject("SELECTQUANTUM");
            _world.AcknexObject.SetAcknexObject("IF_6", SELECTQUANTUM_91);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SELECTGRANADE(IAcknexObject MY, IAcknexObject THERE)
        {
            var PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            var PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat("VAL");
            if (PLAYER_HEALTH_1_val < 0.1f)
            {
                yield break;
            }
            var WEAPONSEL_3 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_3_val = WEAPONSEL_3.GetFloat("VAL");
            if (WEAPONSEL_3_val == 3f)
            {
                yield break;
            }
            var HAS_GRANADE_5 = _world.GetObject(ObjectType.Skill, "HAS_GRANADE");
            var HAS_GRANADE_5_val = HAS_GRANADE_5.GetFloat("VAL");
            if (HAS_GRANADE_5_val != 0f)
            {
                goto HASGOT;
            }
            var WRN03STR_6 = _world.AcknexObject.GetAcknexObject("WRN03STR");
            _world.SetSynonymObject("MESSAGE_TEXT", WRN03STR_6);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            HASGOT:
            var WEAPONSEL_9 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            WEAPONSEL_9.SetFloat("VAL", 3f);
            _world.AcknexObject.SetAcknexObject("IF_CTRL", null);
            _world.AcknexObject.SetAcknexObject("IF_LEFT", null);
            _world.AcknexObject.SetAcknexObject("IF_TAB", null);
            _world.AcknexObject.SetAcknexObject("IF_1", null);
            _world.AcknexObject.SetAcknexObject("IF_F10", null);
            _world.AcknexObject.SetAcknexObject("IF_2", null);
            _world.AcknexObject.SetAcknexObject("IF_3", null);
            _world.AcknexObject.SetAcknexObject("IF_4", null);
            _world.AcknexObject.SetAcknexObject("IF_5", null);
            _world.AcknexObject.SetAcknexObject("IF_6", null);
            WAITFIRE:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GUNFIRING_32 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            var GUNFIRING_32_val = GUNFIRING_32.GetFloat("VAL");
            if (GUNFIRING_32_val != 0f)
            {
                goto WAITFIRE;
            }
            var AMMO_GRANADE_34 = _world.GetObject(ObjectType.Skill, "AMMO_GRANADE");
            var AMMO_GRANADE_34_val = AMMO_GRANADE_34.GetFloat("VAL");
            if (AMMO_GRANADE_34_val < 1f)
            {
                goto EXITGRANADE;
            }
            var MY_GUN_36 = _world.GetSynonymObject("MY_GUN");
            if (MY_GUN_36 == null)
            {
                goto NOGUN;
            }
            var MY_GUN_39 = _world.GetSynonymObject("MY_GUN");
            var temp_40 = MY_GUN_39.GetFloat("INVISIBLE");
            if (temp_40 != 1f)
            {
                goto WAITFIRE;
            }
            NOGUN:
            {
                var enumerator = TARGETOFF(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            {
                var enumerator = SHOWAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MAP_MODE_42 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            MAP_MODE_42.SetFloat("VAL", 0f);
            _world.AcknexObject.SetAcknexObject("LAYERS.13", null);
            var MY_GUN_47 = _world.GetSynonymObject("MY_GUN");
            if (MY_GUN_47 == null)
            {
                goto CONT;
            }
            var MY_GUN_50 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_50.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = LOWER(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            WAITING:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_54 = _world.GetSynonymObject("MY_GUN");
            var temp_55 = MY_GUN_54.GetFloat("INVISIBLE");
            if (temp_55 < 1f)
            {
                goto WAITING;
            }
            CONT:
            var GRANACT_56 = _world.AcknexObject.GetAcknexObject("GRANACT");
            _world.SetSynonymObject("MY_GUN", GRANACT_56);
            var MY_GUN_60 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_60.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = RAISE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            WAITING1:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_64 = _world.GetSynonymObject("MY_GUN");
            var temp_65 = MY_GUN_64.GetFloat("INVISIBLE");
            if (temp_65 < 1f)
            {
                goto WAITING1;
            }
            var GRAN00OVL_66 = _world.AcknexObject.GetAcknexObject("GRAN00OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", GRAN00OVL_66);
            var THROW_69 = _world.AcknexObject.GetAcknexObject("THROW");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", THROW_69);
            var THROW_71 = _world.AcknexObject.GetAcknexObject("THROW");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", THROW_71);
            var GUN_ON_74 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_74.SetFloat("VAL", 1f);
            var RENDER_MODE_76 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_76.SetFloat("VAL", 1f);
            var MP_501SND_77 = _world.AcknexObject.GetAcknexObject("MP_501SND");
            _world.PlaySound(MP_501SND_77, 0.5f, null);
            EXITGRANADE:
            var SELECTTRICORDER_79 = _world.AcknexObject.GetAcknexObject("SELECTTRICORDER");
            _world.AcknexObject.SetAcknexObject("IF_TAB", SELECTTRICORDER_79);
            var SELECTNONE_81 = _world.AcknexObject.GetAcknexObject("SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_1", SELECTNONE_81);
            var SELECTNONE_83 = _world.AcknexObject.GetAcknexObject("SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_F10", SELECTNONE_83);
            var SELECTMP5_85 = _world.AcknexObject.GetAcknexObject("SELECTMP5");
            _world.AcknexObject.SetAcknexObject("IF_2", SELECTMP5_85);
            var SELECTMP5BURST_87 = _world.AcknexObject.GetAcknexObject("SELECTMP5BURST");
            _world.AcknexObject.SetAcknexObject("IF_3", SELECTMP5BURST_87);
            var SELECTGRANADE_89 = _world.AcknexObject.GetAcknexObject("SELECTGRANADE");
            _world.AcknexObject.SetAcknexObject("IF_4", SELECTGRANADE_89);
            var SELECTSTINGER_91 = _world.AcknexObject.GetAcknexObject("SELECTSTINGER");
            _world.AcknexObject.SetAcknexObject("IF_5", SELECTSTINGER_91);
            var SELECTQUANTUM_93 = _world.AcknexObject.GetAcknexObject("SELECTQUANTUM");
            _world.AcknexObject.SetAcknexObject("IF_6", SELECTQUANTUM_93);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SELECTSTINGER(IAcknexObject MY, IAcknexObject THERE)
        {
            var PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            var PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat("VAL");
            if (PLAYER_HEALTH_1_val < 0.1f)
            {
                yield break;
            }
            var WEAPONSEL_3 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_3_val = WEAPONSEL_3.GetFloat("VAL");
            if (WEAPONSEL_3_val == 4f)
            {
                yield break;
            }
            var HAS_STINGER_5 = _world.GetObject(ObjectType.Skill, "HAS_STINGER");
            var HAS_STINGER_5_val = HAS_STINGER_5.GetFloat("VAL");
            if (HAS_STINGER_5_val != 0f)
            {
                goto HASGOT;
            }
            var WRN03STR_6 = _world.AcknexObject.GetAcknexObject("WRN03STR");
            _world.SetSynonymObject("MESSAGE_TEXT", WRN03STR_6);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            HASGOT:
            var WEAPONSEL_9 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            WEAPONSEL_9.SetFloat("VAL", 4f);
            _world.AcknexObject.SetAcknexObject("IF_CTRL", null);
            _world.AcknexObject.SetAcknexObject("IF_LEFT", null);
            _world.AcknexObject.SetAcknexObject("IF_TAB", null);
            _world.AcknexObject.SetAcknexObject("IF_1", null);
            _world.AcknexObject.SetAcknexObject("IF_F10", null);
            _world.AcknexObject.SetAcknexObject("IF_2", null);
            _world.AcknexObject.SetAcknexObject("IF_3", null);
            _world.AcknexObject.SetAcknexObject("IF_4", null);
            _world.AcknexObject.SetAcknexObject("IF_5", null);
            _world.AcknexObject.SetAcknexObject("IF_6", null);
            WAITFIRE:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GUNFIRING_32 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            var GUNFIRING_32_val = GUNFIRING_32.GetFloat("VAL");
            if (GUNFIRING_32_val != 0f)
            {
                goto WAITFIRE;
            }
            var MY_GUN_34 = _world.GetSynonymObject("MY_GUN");
            if (MY_GUN_34 == null)
            {
                goto NOGUN;
            }
            var MY_GUN_37 = _world.GetSynonymObject("MY_GUN");
            var temp_38 = MY_GUN_37.GetFloat("INVISIBLE");
            if (temp_38 != 1f)
            {
                goto WAITFIRE;
            }
            NOGUN:
            {
                var enumerator = TARGETON(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var WEAPONSEL_40 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            WEAPONSEL_40.SetFloat("VAL", 4f);
            {
                var enumerator = SHOWAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MAP_MODE_42 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            MAP_MODE_42.SetFloat("VAL", 0f);
            _world.AcknexObject.SetAcknexObject("LAYERS.13", null);
            var MY_GUN_47 = _world.GetSynonymObject("MY_GUN");
            if (MY_GUN_47 == null)
            {
                goto CONT;
            }
            var MY_GUN_50 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_50.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = LOWER(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            WAITING:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_54 = _world.GetSynonymObject("MY_GUN");
            var temp_55 = MY_GUN_54.GetFloat("INVISIBLE");
            if (temp_55 < 1f)
            {
                goto WAITING;
            }
            CONT:
            var STNGACT_56 = _world.AcknexObject.GetAcknexObject("STNGACT");
            _world.SetSynonymObject("MY_GUN", STNGACT_56);
            var MY_GUN_60 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_60.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = RAISE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            WAITING1:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_64 = _world.GetSynonymObject("MY_GUN");
            var temp_65 = MY_GUN_64.GetFloat("INVISIBLE");
            if (temp_65 < 1f)
            {
                goto WAITING1;
            }
            var STNG00OVL_66 = _world.AcknexObject.GetAcknexObject("STNG00OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", STNG00OVL_66);
            var LAUNCH_69 = _world.AcknexObject.GetAcknexObject("LAUNCH");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", LAUNCH_69);
            var LAUNCH_71 = _world.AcknexObject.GetAcknexObject("LAUNCH");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", LAUNCH_71);
            var GUN_ON_74 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_74.SetFloat("VAL", 1f);
            var RENDER_MODE_76 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_76.SetFloat("VAL", 1f);
            var STNG01SND_77 = _world.AcknexObject.GetAcknexObject("STNG01SND");
            _world.PlaySound(STNG01SND_77, 0.5f, null);
            var SELECTTRICORDER_79 = _world.AcknexObject.GetAcknexObject("SELECTTRICORDER");
            _world.AcknexObject.SetAcknexObject("IF_TAB", SELECTTRICORDER_79);
            var SELECTNONE_81 = _world.AcknexObject.GetAcknexObject("SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_1", SELECTNONE_81);
            var SELECTNONE_83 = _world.AcknexObject.GetAcknexObject("SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_F10", SELECTNONE_83);
            var SELECTMP5_85 = _world.AcknexObject.GetAcknexObject("SELECTMP5");
            _world.AcknexObject.SetAcknexObject("IF_2", SELECTMP5_85);
            var SELECTMP5BURST_87 = _world.AcknexObject.GetAcknexObject("SELECTMP5BURST");
            _world.AcknexObject.SetAcknexObject("IF_3", SELECTMP5BURST_87);
            var SELECTGRANADE_89 = _world.AcknexObject.GetAcknexObject("SELECTGRANADE");
            _world.AcknexObject.SetAcknexObject("IF_4", SELECTGRANADE_89);
            var SELECTSTINGER_91 = _world.AcknexObject.GetAcknexObject("SELECTSTINGER");
            _world.AcknexObject.SetAcknexObject("IF_5", SELECTSTINGER_91);
            var SELECTQUANTUM_93 = _world.AcknexObject.GetAcknexObject("SELECTQUANTUM");
            _world.AcknexObject.SetAcknexObject("IF_6", SELECTQUANTUM_93);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SELECTQUANTUM(IAcknexObject MY, IAcknexObject THERE)
        {
            var PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            var PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat("VAL");
            if (PLAYER_HEALTH_1_val < 0.1f)
            {
                yield break;
            }
            var WEAPONSEL_3 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_3_val = WEAPONSEL_3.GetFloat("VAL");
            if (WEAPONSEL_3_val == 5f)
            {
                yield break;
            }
            var HAS_QUANTUM_5 = _world.GetObject(ObjectType.Skill, "HAS_QUANTUM");
            var HAS_QUANTUM_5_val = HAS_QUANTUM_5.GetFloat("VAL");
            if (HAS_QUANTUM_5_val != 0f)
            {
                goto HASGOT;
            }
            var WRN03STR_6 = _world.AcknexObject.GetAcknexObject("WRN03STR");
            _world.SetSynonymObject("MESSAGE_TEXT", WRN03STR_6);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            HASGOT:
            var WEAPONSEL_9 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            WEAPONSEL_9.SetFloat("VAL", 5f);
            _world.AcknexObject.SetAcknexObject("IF_CTRL", null);
            _world.AcknexObject.SetAcknexObject("IF_LEFT", null);
            _world.AcknexObject.SetAcknexObject("IF_TAB", null);
            _world.AcknexObject.SetAcknexObject("IF_1", null);
            _world.AcknexObject.SetAcknexObject("IF_F10", null);
            _world.AcknexObject.SetAcknexObject("IF_2", null);
            _world.AcknexObject.SetAcknexObject("IF_3", null);
            _world.AcknexObject.SetAcknexObject("IF_4", null);
            _world.AcknexObject.SetAcknexObject("IF_5", null);
            _world.AcknexObject.SetAcknexObject("IF_6", null);
            WAITFIRE:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GUNFIRING_32 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            var GUNFIRING_32_val = GUNFIRING_32.GetFloat("VAL");
            if (GUNFIRING_32_val != 0f)
            {
                goto WAITFIRE;
            }
            var MY_GUN_34 = _world.GetSynonymObject("MY_GUN");
            if (MY_GUN_34 == null)
            {
                goto NOGUN;
            }
            var MY_GUN_37 = _world.GetSynonymObject("MY_GUN");
            var temp_38 = MY_GUN_37.GetFloat("INVISIBLE");
            if (temp_38 != 1f)
            {
                goto WAITFIRE;
            }
            NOGUN:
            {
                var enumerator = TARGETON(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var WEAPONSEL_40 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            WEAPONSEL_40.SetFloat("VAL", 5f);
            {
                var enumerator = SHOWAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MAP_MODE_42 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            MAP_MODE_42.SetFloat("VAL", 0f);
            _world.AcknexObject.SetAcknexObject("LAYERS.13", null);
            var MY_GUN_47 = _world.GetSynonymObject("MY_GUN");
            if (MY_GUN_47 == null)
            {
                goto CONT;
            }
            var MY_GUN_50 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_50.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = LOWER(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            WAITING:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_54 = _world.GetSynonymObject("MY_GUN");
            var temp_55 = MY_GUN_54.GetFloat("INVISIBLE");
            if (temp_55 < 1f)
            {
                goto WAITING;
            }
            CONT:
            var QGUNACT_56 = _world.AcknexObject.GetAcknexObject("QGUNACT");
            _world.SetSynonymObject("MY_GUN", QGUNACT_56);
            var MY_GUN_60 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_60.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = RAISE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            WAITING1:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_64 = _world.GetSynonymObject("MY_GUN");
            var temp_65 = MY_GUN_64.GetFloat("INVISIBLE");
            if (temp_65 < 1f)
            {
                goto WAITING1;
            }
            var QGUN00OVL_66 = _world.AcknexObject.GetAcknexObject("QGUN00OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", QGUN00OVL_66);
            var BEAM_69 = _world.AcknexObject.GetAcknexObject("BEAM");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", BEAM_69);
            var BEAM_71 = _world.AcknexObject.GetAcknexObject("BEAM");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", BEAM_71);
            var GUN_ON_74 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_74.SetFloat("VAL", 1f);
            var RENDER_MODE_76 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_76.SetFloat("VAL", 1f);
            var QGUN01SND_77 = _world.AcknexObject.GetAcknexObject("QGUN01SND");
            _world.PlaySound(QGUN01SND_77, 0.4f, null);
            var SELECTTRICORDER_79 = _world.AcknexObject.GetAcknexObject("SELECTTRICORDER");
            _world.AcknexObject.SetAcknexObject("IF_TAB", SELECTTRICORDER_79);
            var SELECTNONE_81 = _world.AcknexObject.GetAcknexObject("SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_1", SELECTNONE_81);
            var SELECTNONE_83 = _world.AcknexObject.GetAcknexObject("SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_F10", SELECTNONE_83);
            var SELECTMP5_85 = _world.AcknexObject.GetAcknexObject("SELECTMP5");
            _world.AcknexObject.SetAcknexObject("IF_2", SELECTMP5_85);
            var SELECTMP5BURST_87 = _world.AcknexObject.GetAcknexObject("SELECTMP5BURST");
            _world.AcknexObject.SetAcknexObject("IF_3", SELECTMP5BURST_87);
            var SELECTGRANADE_89 = _world.AcknexObject.GetAcknexObject("SELECTGRANADE");
            _world.AcknexObject.SetAcknexObject("IF_4", SELECTGRANADE_89);
            var SELECTSTINGER_91 = _world.AcknexObject.GetAcknexObject("SELECTSTINGER");
            _world.AcknexObject.SetAcknexObject("IF_5", SELECTSTINGER_91);
            var SELECTQUANTUM_93 = _world.AcknexObject.GetAcknexObject("SELECTQUANTUM");
            _world.AcknexObject.SetAcknexObject("IF_6", SELECTQUANTUM_93);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator ZOOMMAPIN(IAcknexObject MY, IAcknexObject THERE)
        {
            var MAP_MODE_1 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            var MAP_MODE_1_val = MAP_MODE_1.GetFloat("VAL");
            if (MAP_MODE_1_val < 0.1f)
            {
                yield break;
            }
            ZOOM:
            var MAP_SCALE_3 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
            var MAP_SCALE_3_val = MAP_SCALE_3.GetFloat("VAL");
            if (MAP_SCALE_3_val < 20f)
            {
                var MAP_SCALE_4 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
                var MAP_SCALE_5 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
                var MAP_SCALE_5_val = MAP_SCALE_5.GetFloat("VAL");
                var MAP_SCALE_6 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
                var MAP_SCALE_6_val = MAP_SCALE_6.GetFloat("VAL");
                MAP_SCALE_4.SetFloat("VAL", MAP_SCALE_6_val * 1.1f);
            }
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var KEY_INS_11 = _world.GetObject(ObjectType.Skill, "KEY_INS");
            var KEY_INS_11_val = KEY_INS_11.GetFloat("VAL");
            if (KEY_INS_11_val > 0f)
            {
                goto ZOOM;
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator ZOOMMAPOUT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MAP_MODE_1 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            var MAP_MODE_1_val = MAP_MODE_1.GetFloat("VAL");
            if (MAP_MODE_1_val < 0.1f)
            {
                yield break;
            }
            ZOOM:
            var MAP_SCALE_3 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
            var MAP_SCALE_3_val = MAP_SCALE_3.GetFloat("VAL");
            if (MAP_SCALE_3_val > 1f)
            {
                var MAP_SCALE_4 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
                var MAP_SCALE_5 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
                var MAP_SCALE_5_val = MAP_SCALE_5.GetFloat("VAL");
                var MAP_SCALE_6 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
                var MAP_SCALE_6_val = MAP_SCALE_6.GetFloat("VAL");
                MAP_SCALE_4.SetFloat("VAL", MAP_SCALE_6_val * 0.9f);
            }
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var KEY_DEL_11 = _world.GetObject(ObjectType.Skill, "KEY_DEL");
            var KEY_DEL_11_val = KEY_DEL_11.GetFloat("VAL");
            if (KEY_DEL_11_val > 0f)
            {
                goto ZOOM;
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SHOWPDABRIEFING(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = SELECTNONE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            WAITING0:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var temp_3 = _world.AcknexObject?.GetAcknexObject("IF_2");
            if (temp_3 == null)
            {
                goto WAITING0;
            }
            var GUNFIRING_5 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            var GUNFIRING_5_val = GUNFIRING_5.GetFloat("VAL");
            if (GUNFIRING_5_val == 1f)
            {
                goto WAITING0;
            }
            {
                var enumerator = HIDEWEAPON(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var WEAPONSEL_7 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            WEAPONSEL_7.SetFloat("VAL", 1f);
            {
                var enumerator = SHOWAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MAP_MODE_9 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            MAP_MODE_9.SetFloat("VAL", 0f);
            _world.AcknexObject.SetAcknexObject("LAYERS.13", null);
            _world.AcknexObject.SetAcknexObject("IF_CTRL", null);
            _world.AcknexObject.SetAcknexObject("IF_LEFT", null);
            _world.AcknexObject.SetAcknexObject("IF_ESC", null);
            _world.AcknexObject.SetAcknexObject("IF_ENTER", null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var TRICACT_22 = _world.AcknexObject.GetAcknexObject("TRICACT");
            _world.SetSynonymObject("MY_GUN", TRICACT_22);
            var MY_GUN_26 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_26.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = RAISE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            WAITING2:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_30 = _world.GetSynonymObject("MY_GUN");
            var temp_31 = MY_GUN_30.GetFloat("INVISIBLE");
            if (temp_31 < 1f)
            {
                goto WAITING2;
            }
            var TRIC01SND_32 = _world.AcknexObject.GetAcknexObject("TRIC01SND");
            _world.PlaySound(TRIC01SND_32, 0.5f, null);
            var BRIEFING_TEXT_34 = _world.GetSynonymObject("BRIEFING_TEXT");
            var PDATEXT_36 = _world.AcknexObject.GetAcknexObject("PDATEXT");
            var PDATEXT_36_array = PDATEXT_36.GetObject<List<IAcknexObject>>("STRING");
            var PDATEXT_36_index = PDATEXT_36.GetInteger("INDEX");
            PDATEXT_36_array[PDATEXT_36_index - 1] = BRIEFING_TEXT_34;
            PDATEXT_36.IsDirty = true;
            var TRIC01OVL_37 = _world.AcknexObject.GetAcknexObject("TRIC01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", TRIC01OVL_37);
            var PDATEXT_42 = _world.AcknexObject.GetAcknexObject("PDATEXT");
            PDATEXT_42.SetFloat("VISIBLE", 1f);
            var PDAMESSAGEOFF_43 = _world.AcknexObject.GetAcknexObject("PDAMESSAGEOFF");
            _world.AcknexObject.SetAcknexObject("IF_ESC", PDAMESSAGEOFF_43);
            var GUN_ON_46 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_46.SetFloat("VAL", 0f);
            var HLP03STR_47 = _world.AcknexObject.GetAcknexObject("HLP03STR");
            _world.SetSynonymObject("MESSAGE_TEXT", HLP03STR_47);
            var BLACK_49 = _world.AcknexObject.GetAcknexObject("BLACK");
            _world.FadePal(BLACK_49, 0.4f);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var RENDER_MODE_52 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_52.SetFloat("VAL", 1f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MOVE_MODE_55 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_55.SetFloat("VAL", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SHOWPDAGAMEOVER(IAcknexObject MY, IAcknexObject THERE)
        {
            var ALARM03SND_0 = _world.AcknexObject.GetAcknexObject("ALARM03SND");
            _world.PlaySound(ALARM03SND_0, 0.7f, null);
            {
                var enumerator = SELECTNONE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            WAITING0:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var temp_5 = _world.AcknexObject?.GetAcknexObject("IF_2");
            if (temp_5 == null)
            {
                goto WAITING0;
            }
            var GUNFIRING_7 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            var GUNFIRING_7_val = GUNFIRING_7.GetFloat("VAL");
            if (GUNFIRING_7_val == 1f)
            {
                goto WAITING0;
            }
            {
                var enumerator = HIDEWEAPON(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var WEAPONSEL_9 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            WEAPONSEL_9.SetFloat("VAL", 1f);
            {
                var enumerator = SHOWAMMO(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MAP_MODE_11 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            MAP_MODE_11.SetFloat("VAL", 0f);
            _world.AcknexObject.SetAcknexObject("LAYERS.13", null);
            _world.AcknexObject.SetAcknexObject("IF_CTRL", null);
            _world.AcknexObject.SetAcknexObject("IF_LEFT", null);
            _world.AcknexObject.SetAcknexObject("IF_ESC", null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var TRICACT_22 = _world.AcknexObject.GetAcknexObject("TRICACT");
            _world.SetSynonymObject("MY_GUN", TRICACT_22);
            var MY_GUN_26 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_26.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = RAISE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            WAITING2:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_30 = _world.GetSynonymObject("MY_GUN");
            var temp_31 = MY_GUN_30.GetFloat("INVISIBLE");
            if (temp_31 < 1f)
            {
                goto WAITING2;
            }
            var ALARM03SND_32 = _world.AcknexObject.GetAcknexObject("ALARM03SND");
            _world.PlaySound(ALARM03SND_32, 0.7f, null);
            var GAMEOVER_TEXT_34 = _world.GetSynonymObject("GAMEOVER_TEXT");
            var PDATEXT_36 = _world.AcknexObject.GetAcknexObject("PDATEXT");
            var PDATEXT_36_array = PDATEXT_36.GetObject<List<IAcknexObject>>("STRING");
            var PDATEXT_36_index = PDATEXT_36.GetInteger("INDEX");
            PDATEXT_36_array[PDATEXT_36_index - 1] = GAMEOVER_TEXT_34;
            PDATEXT_36.IsDirty = true;
            _world.SetSynonymObject("LEVEL_STRING", null);
            var TRIC01OVL_39 = _world.AcknexObject.GetAcknexObject("TRIC01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", TRIC01OVL_39);
            var PDATEXT_44 = _world.AcknexObject.GetAcknexObject("PDATEXT");
            PDATEXT_44.SetFloat("VISIBLE", 1f);
            var PDAMESSAGEOFF_45 = _world.AcknexObject.GetAcknexObject("PDAMESSAGEOFF");
            _world.AcknexObject.SetAcknexObject("IF_ESC", PDAMESSAGEOFF_45);
            var GUN_ON_48 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_48.SetFloat("VAL", 0f);
            var HLP04STR_49 = _world.AcknexObject.GetAcknexObject("HLP04STR");
            _world.SetSynonymObject("MESSAGE_TEXT", HLP04STR_49);
            var BLACK_51 = _world.AcknexObject.GetAcknexObject("BLACK");
            _world.FadePal(BLACK_51, 0.4f);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var RENDER_MODE_54 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_54.SetFloat("VAL", 1f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MOVE_MODE_57 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_57.SetFloat("VAL", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator PDAMESSAGEOFF(IAcknexObject MY, IAcknexObject THERE)
        {
            var PDATEXT_2 = _world.AcknexObject.GetAcknexObject("PDATEXT");
            PDATEXT_2.SetFloat("VISIBLE", 0f);
            var SHOWMAINMENU_3 = _world.AcknexObject.GetAcknexObject("SHOWMAINMENU");
            _world.AcknexObject.SetAcknexObject("IF_ESC", SHOWMAINMENU_3);
            var SELECTTRICORDER_5 = _world.AcknexObject.GetAcknexObject("SELECTTRICORDER");
            _world.AcknexObject.SetAcknexObject("IF_TAB", SELECTTRICORDER_5);
            var SELECTNONE_7 = _world.AcknexObject.GetAcknexObject("SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_1", SELECTNONE_7);
            var SELECTNONE_9 = _world.AcknexObject.GetAcknexObject("SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_F10", SELECTNONE_9);
            var SELECTMP5_11 = _world.AcknexObject.GetAcknexObject("SELECTMP5");
            _world.AcknexObject.SetAcknexObject("IF_2", SELECTMP5_11);
            var SELECTMP5BURST_13 = _world.AcknexObject.GetAcknexObject("SELECTMP5BURST");
            _world.AcknexObject.SetAcknexObject("IF_3", SELECTMP5BURST_13);
            var SELECTSTINGER_15 = _world.AcknexObject.GetAcknexObject("SELECTSTINGER");
            _world.AcknexObject.SetAcknexObject("IF_5", SELECTSTINGER_15);
            var SELECTGRANADE_17 = _world.AcknexObject.GetAcknexObject("SELECTGRANADE");
            _world.AcknexObject.SetAcknexObject("IF_4", SELECTGRANADE_17);
            var SELECTQUANTUM_19 = _world.AcknexObject.GetAcknexObject("SELECTQUANTUM");
            _world.AcknexObject.SetAcknexObject("IF_6", SELECTQUANTUM_19);
            _world.AcknexObject.SetAcknexObject("PANELS.16", null);
            {
                var enumerator = SELECTNONE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var BLANKSTR_24 = _world.AcknexObject.GetAcknexObject("BLANKSTR");
            _world.SetSynonymObject("MESSAGE_TEXT", BLANKSTR_24);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            {
                var enumerator = SHOWWEAPON(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            {
                var enumerator = SELECTNONE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            {
                var enumerator = ENDOFLEVEL(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator REPEATMUSIC(IAcknexObject MY, IAcknexObject THERE)
        {
            var SECCOUNTER_1 = _world.GetObject(ObjectType.Skill, "SECCOUNTER");
            var SECCOUNTER_1_val = SECCOUNTER_1.GetFloat("VAL");
            if (SECCOUNTER_1_val == 0f)
            {
                //Unknown keyword: PLAY_CD
            }
            var SECCOUNTER_3 = _world.GetObject(ObjectType.Skill, "SECCOUNTER");
            var SECCOUNTER_3_val = SECCOUNTER_3.GetFloat("VAL");
            var SECCOUNTER_4 = _world.GetObject(ObjectType.Skill, "SECCOUNTER");
            SECCOUNTER_4.SetFloat("VAL", SECCOUNTER_3_val + 1f);
            var CDTRACKTIME_5 = _world.GetObject(ObjectType.Skill, "CDTRACKTIME");
            var CDTRACKTIME_5_val = CDTRACKTIME_5.GetFloat("VAL");
            var SECCOUNTER_6 = _world.GetObject(ObjectType.Skill, "SECCOUNTER");
            var SECCOUNTER_6_val = SECCOUNTER_6.GetFloat("VAL");
            if (SECCOUNTER_6_val > CDTRACKTIME_5_val)
            {
                var SECCOUNTER_8 = _world.GetObject(ObjectType.Skill, "SECCOUNTER");
                SECCOUNTER_8.SetFloat("VAL", 0f);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SETSOUNDVOL(IAcknexObject MY, IAcknexObject THERE)
        {
            var SOUND_VOL_BUFFER_0 = _world.GetObject(ObjectType.Skill, "SOUND_VOL_BUFFER");
            var SOUND_VOL_BUFFER_0_val = SOUND_VOL_BUFFER_0.GetFloat("VAL");
            var SOUND_VOL_1 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            SOUND_VOL_1.SetFloat("VAL", SOUND_VOL_BUFFER_0_val);
            var CDAUDIO_VOL_BUFFER_2 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL_BUFFER");
            var CDAUDIO_VOL_BUFFER_2_val = CDAUDIO_VOL_BUFFER_2.GetFloat("VAL");
            var CDAUDIO_VOL_3 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL");
            CDAUDIO_VOL_3.SetFloat("VAL", CDAUDIO_VOL_BUFFER_2_val);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator PICKKEY1(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat("INVISIBLE", 1f);
            var KEY01SND_3 = _world.AcknexObject.GetAcknexObject("KEY01SND");
            _world.PlaySound(KEY01SND_3, 0.5f, null);
            var KEY1_6 = _world.GetObject(ObjectType.Skill, "KEY1");
            KEY1_6.SetFloat("VAL", 1f);
            var GET03STR_7 = _world.AcknexObject.GetAcknexObject("GET03STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET03STR_7);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator PICKKEY2(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat("INVISIBLE", 1f);
            var KEY01SND_3 = _world.AcknexObject.GetAcknexObject("KEY01SND");
            _world.PlaySound(KEY01SND_3, 0.5f, null);
            var KEY2_6 = _world.GetObject(ObjectType.Skill, "KEY2");
            KEY2_6.SetFloat("VAL", 1f);
            var GET04STR_7 = _world.AcknexObject.GetAcknexObject("GET04STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET04STR_7);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator PICKKEY3(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat("INVISIBLE", 1f);
            var KEY01SND_3 = _world.AcknexObject.GetAcknexObject("KEY01SND");
            _world.PlaySound(KEY01SND_3, 0.5f, null);
            var KEY3_6 = _world.GetObject(ObjectType.Skill, "KEY3");
            KEY3_6.SetFloat("VAL", 1f);
            var GET04STR_7 = _world.AcknexObject.GetAcknexObject("GET04STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET04STR_7);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SETSTALSOUND(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_1 = MY;
            var temp_2 = MY_1?.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("MY_TEX", temp_2);
            var MY_TEX_6 = _world.GetSynonymObject("MY_TEX");
            MY_TEX_6.SetAcknexObject("SOUND", null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator EXPLODEBIGEAR(IAcknexObject MY, IAcknexObject THERE)
        {
            var SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat("VAL");
            if (SHOOT_FAC_1_val == 0f)
            {
                yield break;
            }
            var MY_2 = MY;
            var HIT_3 = _world.GetSynonymObject("HIT");
            if (HIT_3 == MY_2)
            {
                goto HIT;
            }
            var EXPLOSION_ON_5 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            var EXPLOSION_ON_5_val = EXPLOSION_ON_5.GetFloat("VAL");
            if (EXPLOSION_ON_5_val == 0f)
            {
                yield break;
            }
            var DISTX_6 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_7 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_7_val = DISTX_7.GetFloat("VAL");
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat("X");
            var EXPLOSION_CENTER_14 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_15 = EXPLOSION_CENTER_14.GetFloat("X");
            var MY_20 = MY;
            var temp_21 = MY_20.GetFloat("X");
            var EXPLOSION_CENTER_24 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_25 = EXPLOSION_CENTER_24.GetFloat("X");
            var MY_30 = MY;
            var temp_31 = MY_30.GetFloat("Y");
            var EXPLOSION_CENTER_34 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_35 = EXPLOSION_CENTER_34.GetFloat("Y");
            var MY_40 = MY;
            var temp_41 = MY_40.GetFloat("Y");
            var EXPLOSION_CENTER_44 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_45 = EXPLOSION_CENTER_44.GetFloat("Y");
            DISTX_6.SetFloat("VAL", (temp_11 - temp_15) * (temp_21 - temp_25) + (temp_31 - temp_35) * (temp_41 - temp_45));
            var DISTX_47 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_47_val = DISTX_47.GetFloat("VAL");
            var DISTX_48 = _world.GetObject(ObjectType.Skill, "DISTX");
            DISTX_48.SetFloat("VAL", MathUtils.Sqrt(DISTX_47_val));
            var DISTX_50 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_50_val = DISTX_50.GetFloat("VAL");
            if (DISTX_50_val > 15f)
            {
                yield break;
            }
            HIT:
            var SHOOT_FAC_52 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_52_val = SHOOT_FAC_52.GetFloat("VAL");
            if (SHOOT_FAC_52_val < 9f)
            {
                yield break;
            }
            var WRN08STR_53 = _world.AcknexObject.GetAcknexObject("WRN08STR");
            _world.SetSynonymObject("MESSAGE_TEXT", WRN08STR_53);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var BIGEARDTTEX_55 = _world.AcknexObject.GetAcknexObject("BIGEARDTTEX");
            var MY_57 = MY;
            MY_57.SetAcknexObject("TEXTURE", BIGEARDTTEX_55);
            var MY_60 = MY;
            MY_60.SetFloat("FRAGILE", 0f);
            var MY_63 = MY;
            MY_63.SetAcknexObject("TARGET", null);
            var MY_66 = MY;
            MY_66.SetAcknexObject("IF_HIT", null);
            var BIGEAR01SND_67 = _world.AcknexObject.GetAcknexObject("BIGEAR01SND");
            var MY_69 = MY;
            _world.PlaySound(BIGEAR01SND_67, 0.5f, MY_69);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MIBKTURN(IAcknexObject MY, IAcknexObject THERE)
        {
            var WAITTIME_0 = _world.GetObject(ObjectType.Skill, "WAITTIME");
            var WAITTIME_1 = _world.GetObject(ObjectType.Skill, "WAITTIME");
            var WAITTIME_1_val = WAITTIME_1.GetFloat("VAL");
            WAITTIME_0.SetFloat("VAL", 64f * UnityEngine.Random.value + 16f);
            if (UnityEngine.Random.value < 0.07f)
            {
                {
                    var enumerator = MIBKLISTEN(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            if (UnityEngine.Random.value > 0.95f)
            {
                var RIGHTTURNMIBK_11 = _world.GetObject(ObjectType.Skill, "RIGHTTURNMIBK");
                var RIGHTTURNMIBK_12 = _world.GetObject(ObjectType.Skill, "RIGHTTURNMIBK");
                var RIGHTTURNMIBK_12_val = RIGHTTURNMIBK_12.GetFloat("VAL");
                var RIGHTTURNMIBK_14 = _world.GetObject(ObjectType.Skill, "RIGHTTURNMIBK");
                var RIGHTTURNMIBK_14_val = RIGHTTURNMIBK_14.GetFloat("VAL");
                var RIGHTTURNMIBK_20 = _world.GetObject(ObjectType.Skill, "RIGHTTURNMIBK");
                var RIGHTTURNMIBK_20_val = RIGHTTURNMIBK_20.GetFloat("VAL");
                RIGHTTURNMIBK_11.SetFloat("VAL", (RIGHTTURNMIBK_14_val - 1f) * (RIGHTTURNMIBK_20_val - 1f));
            }
            var RIGHTTURNMIBK_24 = _world.GetObject(ObjectType.Skill, "RIGHTTURNMIBK");
            var RIGHTTURNMIBK_24_val = RIGHTTURNMIBK_24.GetFloat("VAL");
            if (RIGHTTURNMIBK_24_val > RIGHTTURNMIBK_24.GetFloat("MAX"))
            {
                {
                    var enumerator = TURNRIGHT(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            {
                var enumerator = TURNLEFT(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MIBKBACKOFF(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("EACH_TICK", null);
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_NEAR", null);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_FAR", null);
            var CYCLEMIBKBACK_9 = _world.AcknexObject.GetAcknexObject("CYCLEMIBKBACK");
            var MY_11 = MY;
            MY_11.SetAcknexObject("EACH_CYCLE", CYCLEMIBKBACK_9);
            var MIBKHIT_12 = _world.AcknexObject.GetAcknexObject("MIBKHIT");
            var MY_14 = MY;
            MY_14.SetAcknexObject("IF_HIT", MIBKHIT_12);
            var MY_17 = MY;
            MY_17.SetFloat("CAREFULLY", 1f);
            var MY_20 = MY;
            MY_20.SetFloat("SKILL4", 1f);
            var MIBK1TEX_21 = _world.AcknexObject.GetAcknexObject("MIBK1TEX");
            var MY_23 = MY;
            MY_23.SetAcknexObject("TEXTURE", MIBK1TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat("SPEED", 0.35f);
            var BULLET_27 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_29 = MY;
            MY_29.SetAcknexObject("TARGET", BULLET_27);
            {
                var enumerator = REPELANGLE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_31 = MY;
            var MY_33 = MY;
            var temp_34 = MY_33.GetFloat("ANGLE");
            var MY_36 = MY;
            var temp_37 = MY_36.GetFloat("ANGLE");
            MY_31.SetFloat("ANGLE", temp_37 + UnityEngine.Random.value - 0.5f);
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)64f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_45 = MY;
            var temp_46 = MY_45.GetFloat("SKILL1");
            if (temp_46 > 5f)
            {
                yield break;
            }
            {
                var enumerator = MIBKWANDER(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MIBKWAIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("SKILL4");
            if (temp_3 != 4f)
            {
                goto CONT;
            }
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat("VISIBLE");
            if (temp_7 != 1f)
            {
                goto CONT;
            }
            yield break;
            CONT:
            var MY_10 = MY;
            MY_10.SetAcknexObject("EACH_TICK", null);
            var MY_13 = MY;
            MY_13.SetAcknexObject("IF_NEAR", null);
            var MY_16 = MY;
            MY_16.SetAcknexObject("IF_FAR", null);
            var CYCLEMIBKATTACK_17 = _world.AcknexObject.GetAcknexObject("CYCLEMIBKATTACK");
            var MY_19 = MY;
            MY_19.SetAcknexObject("EACH_CYCLE", CYCLEMIBKATTACK_17);
            var MIBKHIT_20 = _world.AcknexObject.GetAcknexObject("MIBKHIT");
            var MY_22 = MY;
            MY_22.SetAcknexObject("IF_HIT", MIBKHIT_20);
            var MY_25 = MY;
            MY_25.SetFloat("CAREFULLY", 0f);
            var MY_28 = MY;
            MY_28.SetFloat("GROUND", 0f);
            var MY_31 = MY;
            MY_31.SetFloat("HEIGHT", -0.05f);
            var MY_34 = MY;
            MY_34.SetFloat("SKILL4", 1f);
            var MIBK0BTEX_35 = _world.AcknexObject.GetAcknexObject("MIBK0BTEX");
            var MY_37 = MY;
            MY_37.SetAcknexObject("TEXTURE", MIBK0BTEX_35);
            var MY_40 = MY;
            MY_40.SetFloat("SPEED", 0f);
            var MY_43 = MY;
            MY_43.SetAcknexObject("TARGET", null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MIBKWANDER(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("EACH_TICK", null);
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_NEAR", null);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_FAR", null);
            var CYCLEMIBKATTACK_9 = _world.AcknexObject.GetAcknexObject("CYCLEMIBKATTACK");
            var MY_11 = MY;
            MY_11.SetAcknexObject("EACH_CYCLE", CYCLEMIBKATTACK_9);
            var MIBKHIT_12 = _world.AcknexObject.GetAcknexObject("MIBKHIT");
            var MY_14 = MY;
            MY_14.SetAcknexObject("IF_HIT", MIBKHIT_12);
            var MY_17 = MY;
            MY_17.SetFloat("CAREFULLY", 1f);
            var MY_20 = MY;
            MY_20.SetFloat("BERKELEY", 0f);
            var MY_23 = MY;
            MY_23.SetFloat("SKILL4", 1f);
            var MIBK1TEX_24 = _world.AcknexObject.GetAcknexObject("MIBK1TEX");
            var MY_26 = MY;
            MY_26.SetAcknexObject("TEXTURE", MIBK1TEX_24);
            var MY_29 = MY;
            MY_29.SetFloat("SPEED", 0.3f);
            var BULLET_30 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_32 = MY;
            MY_32.SetAcknexObject("TARGET", BULLET_30);
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MIBKSEARCH(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("EACH_TICK", null);
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_NEAR", null);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_FAR", null);
            var CYCLEMIBKATTACK_9 = _world.AcknexObject.GetAcknexObject("CYCLEMIBKATTACK");
            var MY_11 = MY;
            MY_11.SetAcknexObject("EACH_CYCLE", CYCLEMIBKATTACK_9);
            var MIBKHIT_12 = _world.AcknexObject.GetAcknexObject("MIBKHIT");
            var MY_14 = MY;
            MY_14.SetAcknexObject("IF_HIT", MIBKHIT_12);
            var MY_17 = MY;
            MY_17.SetFloat("CAREFULLY", 1f);
            var MY_20 = MY;
            MY_20.SetFloat("BERKELEY", 0f);
            var MIBK2TEX_21 = _world.AcknexObject.GetAcknexObject("MIBK2TEX");
            var MY_23 = MY;
            MY_23.SetAcknexObject("TEXTURE", MIBK2TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat("SPEED", 0.3f);
            var BULLET_27 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_29 = MY;
            MY_29.SetAcknexObject("TARGET", BULLET_27);
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MIBKHIDE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("EACH_TICK", null);
            var MIBKESCAPE_3 = _world.AcknexObject.GetAcknexObject("MIBKESCAPE");
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_NEAR", MIBKESCAPE_3);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_FAR", null);
            var CYCLEMIBKHIDE_9 = _world.AcknexObject.GetAcknexObject("CYCLEMIBKHIDE");
            var MY_11 = MY;
            MY_11.SetAcknexObject("EACH_CYCLE", CYCLEMIBKHIDE_9);
            var MIBKHIT_12 = _world.AcknexObject.GetAcknexObject("MIBKHIT");
            var MY_14 = MY;
            MY_14.SetAcknexObject("IF_HIT", MIBKHIT_12);
            var MY_17 = MY;
            MY_17.SetFloat("CAREFULLY", 1f);
            var MY_20 = MY;
            MY_20.SetFloat("BERKELEY", 0f);
            var MY_23 = MY;
            var temp_24 = MY_23.GetFloat("SKILL4");
            if (temp_24 == 4f)
            {
                goto HIDDING;
            }
            var MY_27 = MY;
            MY_27.SetFloat("SKILL4", 4f);
            {
                var enumerator = REPELANGLE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_29 = MY;
            var MY_31 = MY;
            var temp_32 = MY_31.GetFloat("ANGLE");
            var MY_34 = MY;
            var temp_35 = MY_34.GetFloat("ANGLE");
            MY_29.SetFloat("ANGLE", temp_35 + (UnityEngine.Random.value - 0.5f) * 2.4f);
            var MIBK1TEX_44 = _world.AcknexObject.GetAcknexObject("MIBK1TEX");
            var MY_46 = MY;
            MY_46.SetAcknexObject("TEXTURE", MIBK1TEX_44);
            var MY_49 = MY;
            MY_49.SetFloat("DIST", 20f);
            var MY_52 = MY;
            MY_52.SetFloat("SPEED", 0.6f);
            var BULLET_53 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_55 = MY;
            MY_55.SetAcknexObject("TARGET", BULLET_53);
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)384f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_59 = MY;
            var temp_60 = MY_59.GetFloat("SKILL1");
            if (temp_60 > 5f)
            {
                yield break;
            }
            var MY_63 = MY;
            MY_63.SetFloat("SKILL1", 1f);
            {
                var enumerator = MIBKFOLLOWATTACK(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            HIDDING:
            {
                var enumerator = REPELANGLE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_65 = MY;
            var MY_67 = MY;
            var temp_68 = MY_67.GetFloat("ANGLE");
            var MY_70 = MY;
            var temp_71 = MY_70.GetFloat("ANGLE");
            MY_65.SetFloat("ANGLE", temp_71 + (UnityEngine.Random.value - 0.5f) * 2.4f);
            var MIBK1TEX_80 = _world.AcknexObject.GetAcknexObject("MIBK1TEX");
            var MY_82 = MY;
            MY_82.SetAcknexObject("TEXTURE", MIBK1TEX_80);
            var MY_85 = MY;
            MY_85.SetFloat("DIST", 20f);
            var MY_88 = MY;
            MY_88.SetFloat("SPEED", 0.6f);
            var BULLET_89 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_91 = MY;
            MY_91.SetAcknexObject("TARGET", BULLET_89);
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator MIBKLISTEN(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("SKILL4");
            if (temp_3 != 4f)
            {
                goto CONT;
            }
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat("VISIBLE");
            if (temp_7 != 1f)
            {
                goto CONT;
            }
            yield break;
            CONT:
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat("DISTANCE");
            if (temp_11 > 100f)
            {
                goto CONT1;
            }
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat("FLAG2");
            if (temp_15 == 0f)
            {
                goto CONT1;
            }
            yield break;
            CONT1:
            var MY_18 = MY;
            MY_18.SetAcknexObject("IF_NEAR", null);
            var MY_21 = MY;
            MY_21.SetAcknexObject("IF_FAR", null);
            var CYCLEMIBKATTACK_22 = _world.AcknexObject.GetAcknexObject("CYCLEMIBKATTACK");
            var MY_24 = MY;
            MY_24.SetAcknexObject("EACH_CYCLE", CYCLEMIBKATTACK_22);
            var MIBKHIT_25 = _world.AcknexObject.GetAcknexObject("MIBKHIT");
            var MY_27 = MY;
            MY_27.SetAcknexObject("IF_HIT", MIBKHIT_25);
            var MY_30 = MY;
            MY_30.SetFloat("CAREFULLY", 0f);
            var MY_33 = MY;
            MY_33.SetFloat("BERKELEY", 0f);
            var MY_36 = MY;
            MY_36.SetFloat("SKILL4", 0f);
            var MIBK0TEX_37 = _world.AcknexObject.GetAcknexObject("MIBK0TEX");
            var MY_39 = MY;
            MY_39.SetAcknexObject("TEXTURE", MIBK0TEX_37);
            var MY_42 = MY;
            MY_42.SetFloat("SPEED", 0f);
            var MY_45 = MY;
            MY_45.SetAcknexObject("TARGET", null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)120f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_49 = MY;
            var temp_50 = MY_49.GetFloat("SKILL1");
            if (temp_50 < 9f)
            {
                {
                    var enumerator = MIBKWANDER(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MIBKWARNING(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("IF_NEAR", null);
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_FAR", null);
            var CYCLEMIBKWARNING_6 = _world.AcknexObject.GetAcknexObject("CYCLEMIBKWARNING");
            var MY_8 = MY;
            MY_8.SetAcknexObject("EACH_CYCLE", CYCLEMIBKWARNING_6);
            var MIBKHIT_9 = _world.AcknexObject.GetAcknexObject("MIBKHIT");
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_HIT", MIBKHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat("SKILL4", 7f);
            var MIBK7TEX_15 = _world.AcknexObject.GetAcknexObject("MIBK7TEX");
            var MY_17 = MY;
            MY_17.SetAcknexObject("TEXTURE", MIBK7TEX_15);
            var MY_20 = MY;
            MY_20.SetFloat("SPEED", 0f);
            if (UnityEngine.Random.value < 0.35f)
            {
                goto GOAWAY;
            }
            var MIBK04SND_23 = _world.AcknexObject.GetAcknexObject("MIBK04SND");
            var MIBK7TEX_25 = _world.AcknexObject.GetAcknexObject("MIBK7TEX");
            MIBK7TEX_25.SetAcknexObject("SOUND", MIBK04SND_23);
            goto CONT;
            GOAWAY:
            var MIBK06SND_26 = _world.AcknexObject.GetAcknexObject("MIBK06SND");
            var MIBK7TEX_28 = _world.AcknexObject.GetAcknexObject("MIBK7TEX");
            MIBK7TEX_28.SetAcknexObject("SOUND", MIBK06SND_26);
            CONT:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)32f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_32 = MY;
            var temp_33 = MY_32.GetFloat("SKILL1");
            if (temp_33 > 5f)
            {
                yield break;
            }
            var MY_35 = MY;
            var MY_37 = MY;
            var temp_38 = MY_37.GetFloat("ANGLE");
            var MY_40 = MY;
            var temp_41 = MY_40.GetFloat("ANGLE");
            MY_35.SetFloat("ANGLE", temp_41 + 2f);
            if (UnityEngine.Random.value < 0.5f)
            {
                var MY_47 = MY;
                var MY_49 = MY;
                var temp_50 = MY_49.GetFloat("ANGLE");
                var MY_52 = MY;
                var temp_53 = MY_52.GetFloat("ANGLE");
                MY_47.SetFloat("ANGLE", temp_53 - 2f);
            }
            {
                var enumerator = MIBKBACKOFF(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MIBKLOOKFOR(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("SKILL4");
            if (temp_3 == 10f)
            {
                yield break;
            }
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat("DISTANCE");
            if (temp_7 > 100f)
            {
                yield break;
            }
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat("FLAG2");
            if (temp_11 == 1f)
            {
                {
                    var enumerator = MIBKFOLLOWATTACK(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            var FOLLOW_12 = _world.AcknexObject.GetAcknexObject("FOLLOW");
            var MY_14 = MY;
            var temp_15 = MY_14?.GetAcknexObject("TARGET");
            if (temp_15 == FOLLOW_12)
            {
                yield break;
            }
            var MY_18 = MY;
            var temp_19 = MY_18.GetFloat("SKILL1");
            if (temp_19 > 5f)
            {
                yield break;
            }
            var MY_22 = MY;
            MY_22.SetAcknexObject("IF_NEAR", null);
            var MY_25 = MY;
            MY_25.SetAcknexObject("IF_FAR", null);
            var MIBKSEARCH_26 = _world.AcknexObject.GetAcknexObject("MIBKSEARCH");
            var MY_28 = MY;
            MY_28.SetAcknexObject("EACH_CYCLE", MIBKSEARCH_26);
            var MIBKHIT_29 = _world.AcknexObject.GetAcknexObject("MIBKHIT");
            var MY_31 = MY;
            MY_31.SetAcknexObject("IF_HIT", MIBKHIT_29);
            var MY_34 = MY;
            MY_34.SetFloat("CAREFULLY", 0f);
            var MY_37 = MY;
            MY_37.SetFloat("BERKELEY", 0f);
            var MY_40 = MY;
            var temp_41 = MY_40.GetFloat("DISTANCE");
            if (temp_41 < 40f)
            {
                var MIBKFOLLOWATTACK_42 = _world.AcknexObject.GetAcknexObject("MIBKFOLLOWATTACK");
                var MY_44 = MY;
                MY_44.SetAcknexObject("EACH_CYCLE", MIBKFOLLOWATTACK_42);
            }
            var MY_47 = MY;
            MY_47.SetFloat("SKILL4", 10f);
            var MIBKATEX_48 = _world.AcknexObject.GetAcknexObject("MIBKATEX");
            var MY_50 = MY;
            MY_50.SetAcknexObject("TEXTURE", MIBKATEX_48);
            var MY_53 = MY;
            MY_53.SetFloat("SPEED", 0f);
            var BULLET_54 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_56 = MY;
            MY_56.SetAcknexObject("TARGET", BULLET_54);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MIBKFOLLOW(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("IF_NEAR", null);
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_FAR", null);
            var CYCLEMIBKATTACK_6 = _world.AcknexObject.GetAcknexObject("CYCLEMIBKATTACK");
            var MY_8 = MY;
            MY_8.SetAcknexObject("EACH_CYCLE", CYCLEMIBKATTACK_6);
            var MIBKHIT_9 = _world.AcknexObject.GetAcknexObject("MIBKHIT");
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_HIT", MIBKHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat("CAREFULLY", 1f);
            var MY_17 = MY;
            MY_17.SetFloat("BERKELEY", 0f);
            var MY_20 = MY;
            MY_20.SetFloat("SKILL4", 1f);
            var MIBK1TEX_21 = _world.AcknexObject.GetAcknexObject("MIBK1TEX");
            var MY_23 = MY;
            MY_23.SetAcknexObject("TEXTURE", MIBK1TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat("SPEED", 0.4f);
            var BULLET_27 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_29 = MY;
            MY_29.SetAcknexObject("TARGET", BULLET_27);
            {
                var enumerator = FOLLOWANGLE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MIBKFOLLOWATTACK(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("IF_NEAR", null);
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_FAR", null);
            var CYCLEMIBKSHOOT_6 = _world.AcknexObject.GetAcknexObject("CYCLEMIBKSHOOT");
            var MY_8 = MY;
            MY_8.SetAcknexObject("EACH_CYCLE", CYCLEMIBKSHOOT_6);
            var MIBKHIT_9 = _world.AcknexObject.GetAcknexObject("MIBKHIT");
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_HIT", MIBKHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat("CAREFULLY", 1f);
            var MY_17 = MY;
            MY_17.SetFloat("BERKELEY", 0f);
            var MY_20 = MY;
            MY_20.SetFloat("SKILL4", 2f);
            var MIBK2TEX_21 = _world.AcknexObject.GetAcknexObject("MIBK2TEX");
            var MY_23 = MY;
            MY_23.SetAcknexObject("TEXTURE", MIBK2TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat("SPEED", 0.4f);
            {
                var enumerator = FOLLOWANGLE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var BULLET_27 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_29 = MY;
            MY_29.SetAcknexObject("TARGET", BULLET_27);
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MIBKFOLLOWWARNING(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("IF_NEAR", null);
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_FAR", null);
            var CYCLEMIBKWARNING_6 = _world.AcknexObject.GetAcknexObject("CYCLEMIBKWARNING");
            var MY_8 = MY;
            MY_8.SetAcknexObject("EACH_CYCLE", CYCLEMIBKWARNING_6);
            var MIBKHIT_9 = _world.AcknexObject.GetAcknexObject("MIBKHIT");
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_HIT", MIBKHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat("CAREFULLY", 1f);
            var MY_17 = MY;
            MY_17.SetFloat("BERKELEY", 0f);
            var MY_20 = MY;
            MY_20.SetFloat("SKILL4", 1f);
            var MIBK1TEX_21 = _world.AcknexObject.GetAcknexObject("MIBK1TEX");
            var MY_23 = MY;
            MY_23.SetAcknexObject("TEXTURE", MIBK1TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat("SPEED", 0.4f);
            {
                var enumerator = FOLLOWANGLE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var BULLET_27 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_29 = MY;
            MY_29.SetAcknexObject("TARGET", BULLET_27);
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MIBKAIM(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("IF_NEAR", null);
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_FAR", null);
            var MIBKSHOOT_6 = _world.AcknexObject.GetAcknexObject("MIBKSHOOT");
            var MY_8 = MY;
            MY_8.SetAcknexObject("EACH_CYCLE", MIBKSHOOT_6);
            var MIBKHIT_9 = _world.AcknexObject.GetAcknexObject("MIBKHIT");
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_HIT", MIBKHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat("CAREFULLY", 0f);
            var MY_17 = MY;
            MY_17.SetFloat("BERKELEY", 0f);
            var MY_20 = MY;
            MY_20.SetFloat("SKILL4", 3f);
            var MIBK3ATEX_21 = _world.AcknexObject.GetAcknexObject("MIBK3ATEX");
            var MY_23 = MY;
            MY_23.SetAcknexObject("TEXTURE", MIBK3ATEX_21);
            var MY_26 = MY;
            MY_26.SetFloat("SPEED", 0f);
            var FOLLOW_27 = _world.AcknexObject.GetAcknexObject("FOLLOW");
            var MY_29 = MY;
            MY_29.SetAcknexObject("TARGET", FOLLOW_27);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MIBKSHOOT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("IF_NEAR", null);
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_FAR", null);
            var CYCLEMIBKSHOOT_6 = _world.AcknexObject.GetAcknexObject("CYCLEMIBKSHOOT");
            var MY_8 = MY;
            MY_8.SetAcknexObject("EACH_CYCLE", CYCLEMIBKSHOOT_6);
            var MIBKHIT_9 = _world.AcknexObject.GetAcknexObject("MIBKHIT");
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_HIT", MIBKHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat("CAREFULLY", 0f);
            var MY_17 = MY;
            MY_17.SetFloat("BERKELEY", 0f);
            var MY_20 = MY;
            MY_20.SetFloat("SKILL4", 3f);
            var MIBK3TEX_21 = _world.AcknexObject.GetAcknexObject("MIBK3TEX");
            var MY_23 = MY;
            MY_23.SetAcknexObject("TEXTURE", MIBK3TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat("SPEED", 0f);
            var FOLLOW_27 = _world.AcknexObject.GetAcknexObject("FOLLOW");
            var MY_29 = MY;
            MY_29.SetAcknexObject("TARGET", FOLLOW_27);
            {
                var enumerator = LOOKPLAYER(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_32 = MY;
            var temp_33 = MY_32.GetFloat("FLAG1");
            if (temp_33 == 0f)
            {
                {
                    var enumerator = MIBKFOLLOWATTACK(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            var SHOT_SOUND_ON_35 = _world.GetObject(ObjectType.Skill, "SHOT_SOUND_ON");
            SHOT_SOUND_ON_35.SetFloat("VAL", 1f);
            var SHOTSECCOUNT_37 = _world.GetObject(ObjectType.Skill, "SHOTSECCOUNT");
            SHOTSECCOUNT_37.SetFloat("VAL", 0f);
            var PLAYER_RESULT_38 = _world.GetObject(ObjectType.Skill, "PLAYER_RESULT");
            var PLAYER_RESULT_39 = _world.GetObject(ObjectType.Skill, "PLAYER_RESULT");
            var PLAYER_RESULT_39_val = PLAYER_RESULT_39.GetFloat("VAL");
            var MIBKSHOOTFACTOR_40 = _world.GetObject(ObjectType.Skill, "MIBKSHOOTFACTOR");
            var MIBKSHOOTFACTOR_40_val = MIBKSHOOTFACTOR_40.GetFloat("VAL");
            PLAYER_RESULT_38.SetFloat("VAL", MIBKSHOOTFACTOR_40_val * (UnityEngine.Random.value + 0.5f));
            {
                var enumerator = HITPLAYERDELAY(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MIBKESCAPE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("IF_NEAR", null);
            var MIBKHIDE_3 = _world.AcknexObject.GetAcknexObject("MIBKHIDE");
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_FAR", MIBKHIDE_3);
            var CYCLEMIBKHIDE_6 = _world.AcknexObject.GetAcknexObject("CYCLEMIBKHIDE");
            var MY_8 = MY;
            MY_8.SetAcknexObject("EACH_CYCLE", CYCLEMIBKHIDE_6);
            var MIBKHIT_9 = _world.AcknexObject.GetAcknexObject("MIBKHIT");
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_HIT", MIBKHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat("CAREFULLY", 1f);
            var MY_17 = MY;
            MY_17.SetFloat("BERKELEY", 0f);
            var MY_20 = MY;
            MY_20.SetFloat("SKILL4", 4f);
            var MIBK1TEX_21 = _world.AcknexObject.GetAcknexObject("MIBK1TEX");
            var MY_23 = MY;
            MY_23.SetAcknexObject("TEXTURE", MIBK1TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat("DIST", 30f);
            var MY_29 = MY;
            MY_29.SetFloat("SPEED", 0.4f);
            var BULLET_30 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_32 = MY;
            MY_32.SetAcknexObject("TARGET", BULLET_30);
            {
                var enumerator = REPELANGLE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MIBKDEAD(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("IF_NEAR", null);
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_FAR", null);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_HIT", null);
            var MY_11 = MY;
            MY_11.SetAcknexObject("EACH_CYCLE", null);
            var MY_14 = MY;
            MY_14.SetFloat("SKILL4", 9f);
            var MIBK9TEX_15 = _world.AcknexObject.GetAcknexObject("MIBK9TEX");
            var MY_17 = MY;
            MY_17.SetAcknexObject("TEXTURE", MIBK9TEX_15);
            var MY_20 = MY;
            MY_20.SetFloat("SPEED", 0f);
            var MY_23 = MY;
            MY_23.SetAcknexObject("TARGET", null);
            var MY_26 = MY;
            MY_26.SetFloat("PASSABLE", 1f);
            var MY_29 = MY;
            MY_29.SetFloat("CAREFULLY", 0f);
            var MY_32 = MY;
            MY_32.SetFloat("BERKELEY", 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MIBKDIE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat("SKILL1", 10f);
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_NEAR", null);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_FAR", null);
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_HIT", null);
            var MIBKDEAD_12 = _world.AcknexObject.GetAcknexObject("MIBKDEAD");
            var MY_14 = MY;
            MY_14.SetAcknexObject("EACH_CYCLE", MIBKDEAD_12);
            var MY_17 = MY;
            var temp_18 = MY_17.GetFloat("FLAG4");
            if (temp_18 != 0f)
            {
                {
                    var enumerator = MIBKDROPKEY(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
            }
            var MY_21 = MY;
            var temp_22 = MY_21.GetFloat("FLAG5");
            if (temp_22 != 0f)
            {
                {
                    var enumerator = MIBKDROPKEY(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
            }
            var MY_25 = MY;
            MY_25.SetFloat("SKILL4", 8f);
            var MIBK8TEX_26 = _world.AcknexObject.GetAcknexObject("MIBK8TEX");
            var MY_28 = MY;
            MY_28.SetAcknexObject("TEXTURE", MIBK8TEX_26);
            var MY_31 = MY;
            MY_31.SetFloat("SPEED", 0f);
            var MY_34 = MY;
            MY_34.SetAcknexObject("TARGET", null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MIBKIMPLODE(IAcknexObject MY, IAcknexObject THERE)
        {
            var DISTX_0 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_1 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_1_val = DISTX_1.GetFloat("VAL");
            var MY_4 = MY;
            var temp_5 = MY_4.GetFloat("X");
            var EXPLOSION_CENTER_8 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_9 = EXPLOSION_CENTER_8.GetFloat("X");
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat("X");
            var EXPLOSION_CENTER_18 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_19 = EXPLOSION_CENTER_18.GetFloat("X");
            var MY_24 = MY;
            var temp_25 = MY_24.GetFloat("Y");
            var EXPLOSION_CENTER_28 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_29 = EXPLOSION_CENTER_28.GetFloat("Y");
            var MY_34 = MY;
            var temp_35 = MY_34.GetFloat("Y");
            var EXPLOSION_CENTER_38 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_39 = EXPLOSION_CENTER_38.GetFloat("Y");
            DISTX_0.SetFloat("VAL", (temp_5 - temp_9) * (temp_15 - temp_19) + (temp_25 - temp_29) * (temp_35 - temp_39));
            var DISTX_41 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_41_val = DISTX_41.GetFloat("VAL");
            var DISTX_42 = _world.GetObject(ObjectType.Skill, "DISTX");
            DISTX_42.SetFloat("VAL", MathUtils.Sqrt(DISTX_41_val));
            var DISTZ_43 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_44 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_44_val = DISTZ_44.GetFloat("VAL");
            var MY_46 = MY;
            var temp_47 = MY_46.GetFloat("HEIGHT");
            var EXPLOSION_CENTER_50 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_51 = EXPLOSION_CENTER_50.GetFloat("HEIGHT");
            DISTZ_43.SetFloat("VAL", temp_47 - temp_51);
            var DISTX_53 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_53_val = DISTX_53.GetFloat("VAL");
            if (DISTX_53_val > 10f)
            {
                {
                    var enumerator = BEAMREACT(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            var MY_56 = MY;
            MY_56.SetFloat("PASSABLE", 1f);
            var MY_59 = MY;
            MY_59.SetFloat("CAREFULLY", 0f);
            var MY_62 = MY;
            MY_62.SetAcknexObject("IF_NEAR", null);
            var MY_65 = MY;
            MY_65.SetAcknexObject("IF_FAR", null);
            var MY_68 = MY;
            MY_68.SetAcknexObject("IF_HIT", null);
            var VANISHFORGOOD_69 = _world.AcknexObject.GetAcknexObject("VANISHFORGOOD");
            var MY_71 = MY;
            MY_71.SetAcknexObject("EACH_CYCLE", VANISHFORGOOD_69);
            var MY_74 = MY;
            MY_74.SetFloat("SKILL4", 8f);
            var MIBK0ATEX_75 = _world.AcknexObject.GetAcknexObject("MIBK0ATEX");
            var MY_77 = MY;
            MY_77.SetAcknexObject("TEXTURE", MIBK0ATEX_75);
            var MY_80 = MY;
            MY_80.SetFloat("SPEED", 0f);
            var MY_83 = MY;
            MY_83.SetAcknexObject("TARGET", null);
            var MY_86 = MY;
            var temp_87 = MY_86.GetFloat("FLAG4");
            if (temp_87 != 0f)
            {
                {
                    var enumerator = MIBKDROPKEY(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
            }
            var MY_90 = MY;
            var temp_91 = MY_90.GetFloat("FLAG5");
            if (temp_91 != 0f)
            {
                {
                    var enumerator = MIBKDROPKEY(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MIBKHIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat("VAL");
            if (SHOOT_FAC_1_val == 0f)
            {
                goto OBSTACLE;
            }
            var MY_2 = MY;
            var HIT_3 = _world.GetSynonymObject("HIT");
            if (HIT_3 == MY_2)
            {
                goto HIT;
            }
            var EXPLOSION_ON_5 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            var EXPLOSION_ON_5_val = EXPLOSION_ON_5.GetFloat("VAL");
            if (EXPLOSION_ON_5_val == 0f)
            {
                goto OBSTACLE;
            }
            var DISTX_6 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_7 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_7_val = DISTX_7.GetFloat("VAL");
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat("X");
            var EXPLOSION_CENTER_14 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_15 = EXPLOSION_CENTER_14.GetFloat("X");
            var MY_20 = MY;
            var temp_21 = MY_20.GetFloat("X");
            var EXPLOSION_CENTER_24 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_25 = EXPLOSION_CENTER_24.GetFloat("X");
            var MY_30 = MY;
            var temp_31 = MY_30.GetFloat("Y");
            var EXPLOSION_CENTER_34 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_35 = EXPLOSION_CENTER_34.GetFloat("Y");
            var MY_40 = MY;
            var temp_41 = MY_40.GetFloat("Y");
            var EXPLOSION_CENTER_44 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_45 = EXPLOSION_CENTER_44.GetFloat("Y");
            DISTX_6.SetFloat("VAL", (temp_11 - temp_15) * (temp_21 - temp_25) + (temp_31 - temp_35) * (temp_41 - temp_45));
            var DISTX_47 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_47_val = DISTX_47.GetFloat("VAL");
            var DISTX_48 = _world.GetObject(ObjectType.Skill, "DISTX");
            DISTX_48.SetFloat("VAL", MathUtils.Sqrt(DISTX_47_val));
            var DISTX_50 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_50_val = DISTX_50.GetFloat("VAL");
            if (DISTX_50_val > 25f)
            {
                goto OBSTACLE;
            }
            HIT:
            var EXPLOSION_ON_52 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            var EXPLOSION_ON_52_val = EXPLOSION_ON_52.GetFloat("VAL");
            if (EXPLOSION_ON_52_val != 2f)
            {
                goto CONT;
            }
            var MY_55 = MY;
            var temp_56 = MY_55.GetFloat("VISIBLE");
            if (temp_56 == 1f)
            {
                {
                    var enumerator = MIBKIMPLODE(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            CONT:
            var MY_58 = MY;
            var MY_60 = MY;
            var temp_61 = MY_60.GetFloat("SKILL1");
            var MY_63 = MY;
            var temp_64 = MY_63.GetFloat("SKILL1");
            var SHOOT_FAC_66 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_66_val = SHOOT_FAC_66.GetFloat("VAL");
            MY_58.SetFloat("SKILL1", temp_64 + SHOOT_FAC_66_val * (UnityEngine.Random.value + 2f) / 3f);
            var MY_77 = MY;
            var temp_78 = MY_77.GetFloat("SKILL1");
            if (temp_78 > 5f)
            {
                goto DIE;
            }
            if (UnityEngine.Random.value < 0.05f)
            {
                goto DIE;
            }
            var MY_82 = MY;
            var temp_83 = MY_82?.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("MIBK_TEX", temp_83);
            var MIBK5TEX_85 = _world.AcknexObject.GetAcknexObject("MIBK5TEX");
            var MY_87 = MY;
            MY_87.SetAcknexObject("TEXTURE", MIBK5TEX_85);
            var MY_90 = MY;
            MY_90.SetAcknexObject("IF_NEAR", null);
            var MY_93 = MY;
            MY_93.SetAcknexObject("IF_FAR", null);
            var MY_96 = MY;
            MY_96.SetAcknexObject("IF_HIT", null);
            var MIBK03SND_97 = _world.AcknexObject.GetAcknexObject("MIBK03SND");
            var MY_99 = MY;
            _world.PlaySound(MIBK03SND_97, 0.15f, MY_99);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MIBKESCAPE_101 = _world.AcknexObject.GetAcknexObject("MIBKESCAPE");
            var MY_103 = MY;
            MY_103.SetAcknexObject("IF_NEAR", MIBKESCAPE_101);
            var MIBKHIDE_104 = _world.AcknexObject.GetAcknexObject("MIBKHIDE");
            var MY_106 = MY;
            MY_106.SetAcknexObject("IF_FAR", MIBKHIDE_104);
            var MIBKHIT_107 = _world.AcknexObject.GetAcknexObject("MIBKHIT");
            var MY_109 = MY;
            MY_109.SetAcknexObject("IF_HIT", MIBKHIT_107);
            var MIBK_TEX_110 = _world.GetSynonymObject("MIBK_TEX");
            var MY_112 = MY;
            MY_112.SetAcknexObject("TEXTURE", MIBK_TEX_110);
            var MY_115 = MY;
            var temp_116 = MY_115.GetFloat("SKILL1");
            if (temp_116 > 4f)
            {
                {
                    var enumerator = MIBKHIDE(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            var MY_119 = MY;
            var temp_120 = MY_119.GetFloat("SKILL4");
            if (temp_120 != 4f)
            {
                {
                    var enumerator = MIBKFOLLOWATTACK(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            yield break;
            DIE:
            var MY_123 = MY;
            MY_123.SetFloat("SKILL1", 10f);
            {
                var enumerator = MIBKDIE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            yield break;
            OBSTACLE:
            {
                var enumerator = MIBKTURN(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MIBKDROPKEY(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("FLAG4");
            if (temp_3 != 0f)
            {
                goto K2;
            }
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat("FLAG5");
            if (temp_7 != 0f)
            {
                goto K3;
            }
            yield break;
            K2:
            var KEY2TNG_9 = _world.AcknexObject.GetAcknexObject("KEY2TNG");
            var KEY2TNG_11 = _world.AcknexObject.GetAcknexObject("KEY2TNG");
            var temp_12 = KEY2TNG_11.GetFloat("X");
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat("X");
            KEY2TNG_9.SetFloat("X", temp_15);
            var KEY2TNG_17 = _world.AcknexObject.GetAcknexObject("KEY2TNG");
            var KEY2TNG_19 = _world.AcknexObject.GetAcknexObject("KEY2TNG");
            var temp_20 = KEY2TNG_19.GetFloat("Y");
            var MY_22 = MY;
            var temp_23 = MY_22.GetFloat("Y");
            KEY2TNG_17.SetFloat("Y", temp_23);
            var KEY2TNG_26 = _world.AcknexObject.GetAcknexObject("KEY2TNG");
            KEY2TNG_26.SetFloat("GROUND", 1f);
            var KEY2TNG_28 = _world.AcknexObject.GetAcknexObject("KEY2TNG");
            var KEY2TNG_30 = _world.AcknexObject.GetAcknexObject("KEY2TNG");
            var temp_31 = KEY2TNG_30.GetFloat("HEIGHT");
            var MY_33 = MY;
            var temp_34 = MY_33.GetFloat("FLOOR_HGT");
            KEY2TNG_28.SetFloat("HEIGHT", temp_34 - 0.01f);
            var KEY2TNG_39 = _world.AcknexObject.GetAcknexObject("KEY2TNG");
            KEY2TNG_39.SetFloat("INVISIBLE", 0f);
            //Unknown keyword: LOCATE
            var KEY2TNG_42 = _world.AcknexObject.GetAcknexObject("KEY2TNG");
            KEY2TNG_42.SetFloat("GROUND", 0f);
            yield break;
            K3:
            var KEY3TNG_44 = _world.AcknexObject.GetAcknexObject("KEY3TNG");
            var KEY3TNG_46 = _world.AcknexObject.GetAcknexObject("KEY3TNG");
            var temp_47 = KEY3TNG_46.GetFloat("X");
            var MY_49 = MY;
            var temp_50 = MY_49.GetFloat("X");
            KEY3TNG_44.SetFloat("X", temp_50);
            var KEY3TNG_52 = _world.AcknexObject.GetAcknexObject("KEY3TNG");
            var KEY3TNG_54 = _world.AcknexObject.GetAcknexObject("KEY3TNG");
            var temp_55 = KEY3TNG_54.GetFloat("Y");
            var MY_57 = MY;
            var temp_58 = MY_57.GetFloat("Y");
            KEY3TNG_52.SetFloat("Y", temp_58);
            var KEY3TNG_61 = _world.AcknexObject.GetAcknexObject("KEY3TNG");
            KEY3TNG_61.SetFloat("GROUND", 1f);
            var KEY3TNG_63 = _world.AcknexObject.GetAcknexObject("KEY3TNG");
            var KEY3TNG_65 = _world.AcknexObject.GetAcknexObject("KEY3TNG");
            var temp_66 = KEY3TNG_65.GetFloat("HEIGHT");
            var MY_68 = MY;
            var temp_69 = MY_68.GetFloat("FLOOR_HGT");
            KEY3TNG_63.SetFloat("HEIGHT", temp_69 - 0.01f);
            var KEY3TNG_74 = _world.AcknexObject.GetAcknexObject("KEY3TNG");
            KEY3TNG_74.SetFloat("INVISIBLE", 0f);
            //Unknown keyword: LOCATE
            var KEY3TNG_77 = _world.AcknexObject.GetAcknexObject("KEY3TNG");
            KEY3TNG_77.SetFloat("GROUND", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CYCLEMIBKATTACK(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var SHOT_SOUND_ON_1 = _world.GetObject(ObjectType.Skill, "SHOT_SOUND_ON");
            var SHOT_SOUND_ON_1_val = SHOT_SOUND_ON_1.GetFloat("VAL");
            if (SHOT_SOUND_ON_1_val == 0f)
            {
                goto CONT;
            }
            {
                var enumerator = MIBKLOOKFOR(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            CONT:
            {
                var enumerator = LOOKPLAYER(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_4 = MY;
            var temp_5 = MY_4.GetFloat("FLAG1");
            if (temp_5 == 0f)
            {
                yield break;
            }
            var MY_8 = MY;
            var temp_9 = MY_8.GetFloat("FLAG2");
            if (temp_9 != 0f)
            {
                goto ATTACK;
            }
            var GUN_ON_11 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            var GUN_ON_11_val = GUN_ON_11.GetFloat("VAL");
            if (GUN_ON_11_val != 0f)
            {
                goto ATTACK;
            }
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat("DISTANCE");
            if (temp_15 < 20f)
            {
                {
                    var enumerator = MIBKFOLLOWWARNING(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            yield break;
            ATTACK:
            var MY_18 = MY;
            MY_18.SetFloat("FLAG2", 1f);
            var MY_21 = MY;
            var temp_22 = MY_21.GetFloat("DISTANCE");
            if (temp_22 < 50f)
            {
                {
                    var enumerator = MIBKFOLLOWATTACK(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CYCLEMIBKHIDE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("VISIBLE");
            if (temp_3 != 1f)
            {
                goto STOP;
            }
            var MY_6 = MY;
            MY_6.SetFloat("SPEED", 0.6f);
            var BULLET_7 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_9 = MY;
            MY_9.SetAcknexObject("TARGET", BULLET_7);
            {
                var enumerator = REPELANGLE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_11 = MY;
            var MY_13 = MY;
            var temp_14 = MY_13.GetFloat("ANGLE");
            var MY_16 = MY;
            var temp_17 = MY_16.GetFloat("ANGLE");
            MY_11.SetFloat("ANGLE", temp_17 + 2f * (UnityEngine.Random.value - 0.5f));
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            STOP:
            var MY_28 = MY;
            MY_28.SetFloat("SPEED", 0f);
            var MY_31 = MY;
            MY_31.SetAcknexObject("TARGET", null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CYCLEMIBKBACK(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator CYCLEMIBKSHOOT(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("SKILL1");
            if (temp_3 > 9f)
            {
                {
                    var enumerator = MIBKDIE(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            {
                var enumerator = LOOKPLAYER(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat("FLAG1");
            if (temp_7 == 0f)
            {
                goto ATTACK;
            }
            if (UnityEngine.Random.value > 0.6f)
            {
                {
                    var enumerator = MIBKAIM(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            {
                var enumerator = MIBKSHOOT(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            ATTACK:
            {
                var enumerator = MIBKFOLLOWATTACK(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CYCLEMIBKWARNING(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var GUN_ON_1 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            var GUN_ON_1_val = GUN_ON_1.GetFloat("VAL");
            if (GUN_ON_1_val != 0f)
            {
                {
                    var enumerator = MIBKFOLLOWATTACK(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            var MY_4 = MY;
            var temp_5 = MY_4.GetFloat("DISTANCE");
            if (temp_5 > 10f)
            {
                goto CONT;
            }
            {
                var enumerator = MIBKWARNING(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            CONT:
            var MY_8 = MY;
            var temp_9 = MY_8.GetFloat("DISTANCE");
            if (temp_9 > 40f)
            {
                {
                    var enumerator = MIBKWANDER(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DEPTTURN(IAcknexObject MY, IAcknexObject THERE)
        {
            var WAITTIME_0 = _world.GetObject(ObjectType.Skill, "WAITTIME");
            var WAITTIME_1 = _world.GetObject(ObjectType.Skill, "WAITTIME");
            var WAITTIME_1_val = WAITTIME_1.GetFloat("VAL");
            WAITTIME_0.SetFloat("VAL", 64f * UnityEngine.Random.value + 16f);
            if (UnityEngine.Random.value > 0.95f)
            {
                var RIGHTTURNPSBY_9 = _world.GetObject(ObjectType.Skill, "RIGHTTURNPSBY");
                var RIGHTTURNPSBY_10 = _world.GetObject(ObjectType.Skill, "RIGHTTURNPSBY");
                var RIGHTTURNPSBY_10_val = RIGHTTURNPSBY_10.GetFloat("VAL");
                var RIGHTTURNPSBY_12 = _world.GetObject(ObjectType.Skill, "RIGHTTURNPSBY");
                var RIGHTTURNPSBY_12_val = RIGHTTURNPSBY_12.GetFloat("VAL");
                var RIGHTTURNPSBY_18 = _world.GetObject(ObjectType.Skill, "RIGHTTURNPSBY");
                var RIGHTTURNPSBY_18_val = RIGHTTURNPSBY_18.GetFloat("VAL");
                RIGHTTURNPSBY_9.SetFloat("VAL", (RIGHTTURNPSBY_12_val - 1f) * (RIGHTTURNPSBY_18_val - 1f));
            }
            var RIGHTTURNPSBY_22 = _world.GetObject(ObjectType.Skill, "RIGHTTURNPSBY");
            var RIGHTTURNPSBY_22_val = RIGHTTURNPSBY_22.GetFloat("VAL");
            if (RIGHTTURNPSBY_22_val > RIGHTTURNPSBY_22.GetFloat("MAX"))
            {
                {
                    var enumerator = TURNRIGHT(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            {
                var enumerator = TURNLEFT(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DEPTWAIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat("CAREFULLY", 0f);
            var MY_5 = MY;
            MY_5.SetAcknexObject("EACH_TICK", null);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_FAR", null);
            var DEPTHIT_9 = _world.AcknexObject.GetAcknexObject("DEPTHIT");
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_HIT", DEPTHIT_9);
            var MY_14 = MY;
            MY_14.SetAcknexObject("IF_NEAR", null);
            var DEPTCYCLE_15 = _world.AcknexObject.GetAcknexObject("DEPTCYCLE");
            var MY_17 = MY;
            MY_17.SetAcknexObject("EACH_CYCLE", DEPTCYCLE_15);
            var MY_20 = MY;
            MY_20.SetFloat("GROUND", 0f);
            var MY_23 = MY;
            MY_23.SetFloat("HEIGHT", -0.05f);
            var DEPT0TEX_24 = _world.AcknexObject.GetAcknexObject("DEPT0TEX");
            var MY_26 = MY;
            MY_26.SetAcknexObject("TEXTURE", DEPT0TEX_24);
            var MY_29 = MY;
            MY_29.SetFloat("SPEED", 0f);
            var MY_32 = MY;
            MY_32.SetAcknexObject("TARGET", null);
            var MY_35 = MY;
            MY_35.SetFloat("SKILL4", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DEPTWANDER(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat("CAREFULLY", 1f);
            var MY_5 = MY;
            MY_5.SetAcknexObject("EACH_TICK", null);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_FAR", null);
            var DEPTHIT_9 = _world.AcknexObject.GetAcknexObject("DEPTHIT");
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_HIT", DEPTHIT_9);
            var MY_14 = MY;
            MY_14.SetAcknexObject("IF_NEAR", null);
            var DEPTCYCLE_15 = _world.AcknexObject.GetAcknexObject("DEPTCYCLE");
            var MY_17 = MY;
            MY_17.SetAcknexObject("EACH_CYCLE", DEPTCYCLE_15);
            var MY_20 = MY;
            MY_20.SetFloat("GROUND", 0f);
            var DEPT1TEX_21 = _world.AcknexObject.GetAcknexObject("DEPT1TEX");
            var MY_23 = MY;
            MY_23.SetAcknexObject("TEXTURE", DEPT1TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat("SPEED", 0.4f);
            var BULLET_27 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_29 = MY;
            MY_29.SetAcknexObject("TARGET", BULLET_27);
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_32 = MY;
            MY_32.SetFloat("SKILL4", 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DEPTHIDE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat("CAREFULLY", 1f);
            var MY_5 = MY;
            MY_5.SetAcknexObject("EACH_TICK", null);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_NEAR", null);
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_FAR", null);
            var DEPTCYCLE_12 = _world.AcknexObject.GetAcknexObject("DEPTCYCLE");
            var MY_14 = MY;
            MY_14.SetAcknexObject("EACH_CYCLE", DEPTCYCLE_12);
            var DEPTHIT_15 = _world.AcknexObject.GetAcknexObject("DEPTHIT");
            var MY_17 = MY;
            MY_17.SetAcknexObject("IF_HIT", DEPTHIT_15);
            var MY_19 = MY;
            var MY_21 = MY;
            var temp_22 = MY_21.GetFloat("ANGLE");
            var PLAYER_ANGLE_23 = _world.GetObject(ObjectType.Skill, "PLAYER_ANGLE");
            var PLAYER_ANGLE_23_val = PLAYER_ANGLE_23.GetFloat("VAL");
            MY_19.SetFloat("ANGLE", PLAYER_ANGLE_23_val + UnityEngine.Random.value - 0.5f);
            var DEPT1TEX_28 = _world.AcknexObject.GetAcknexObject("DEPT1TEX");
            var MY_30 = MY;
            MY_30.SetAcknexObject("TEXTURE", DEPT1TEX_28);
            var MY_33 = MY;
            MY_33.SetFloat("DIST", 20f);
            var MY_36 = MY;
            MY_36.SetFloat("SPEED", 0.6f);
            var BULLET_37 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_39 = MY;
            MY_39.SetAcknexObject("TARGET", BULLET_37);
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_42 = MY;
            MY_42.SetFloat("SKILL4", 4f);
            {
                var enumerator = DEPTSCREAM(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)480f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_46 = MY;
            var temp_47 = MY_46.GetFloat("SKILL1");
            if (temp_47 < 2f)
            {
                {
                    var enumerator = DEPTWANDER(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DEPTDEAD(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("IF_NEAR", null);
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_FAR", null);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_HIT", null);
            var MY_11 = MY;
            MY_11.SetAcknexObject("EACH_CYCLE", null);
            {
                var enumerator = INNOCENTKILLED(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var DEPT9TEX_12 = _world.AcknexObject.GetAcknexObject("DEPT9TEX");
            var MY_14 = MY;
            MY_14.SetAcknexObject("TEXTURE", DEPT9TEX_12);
            var MY_17 = MY;
            MY_17.SetFloat("SPEED", 0f);
            var MY_20 = MY;
            MY_20.SetAcknexObject("TARGET", null);
            var MY_23 = MY;
            MY_23.SetFloat("PASSABLE", 1f);
            var MY_26 = MY;
            MY_26.SetFloat("CAREFULLY", 0f);
            var MY_29 = MY;
            MY_29.SetFloat("SKILL4", 8f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DEPTDIE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat("SKILL1", 10f);
            var MY_5 = MY;
            MY_5.SetFloat("PASSABLE", 1f);
            var MY_8 = MY;
            MY_8.SetFloat("CAREFULLY", 0f);
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_NEAR", null);
            var MY_14 = MY;
            MY_14.SetAcknexObject("IF_FAR", null);
            var MY_17 = MY;
            MY_17.SetAcknexObject("IF_HIT", null);
            var DEPTDEAD_18 = _world.AcknexObject.GetAcknexObject("DEPTDEAD");
            var MY_20 = MY;
            MY_20.SetAcknexObject("EACH_CYCLE", DEPTDEAD_18);
            var DEPT8TEX_21 = _world.AcknexObject.GetAcknexObject("DEPT8TEX");
            var MY_23 = MY;
            MY_23.SetAcknexObject("TEXTURE", DEPT8TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat("SPEED", 0f);
            var MY_29 = MY;
            MY_29.SetAcknexObject("TARGET", null);
            var DEPT03SND_30 = _world.AcknexObject.GetAcknexObject("DEPT03SND");
            var MY_32 = MY;
            _world.PlaySound(DEPT03SND_30, 0.4f, MY_32);
            var MY_35 = MY;
            MY_35.SetFloat("SKILL4", 8f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DEPTIMPLODE(IAcknexObject MY, IAcknexObject THERE)
        {
            var DISTX_0 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_1 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_1_val = DISTX_1.GetFloat("VAL");
            var MY_4 = MY;
            var temp_5 = MY_4.GetFloat("X");
            var EXPLOSION_CENTER_8 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_9 = EXPLOSION_CENTER_8.GetFloat("X");
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat("X");
            var EXPLOSION_CENTER_18 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_19 = EXPLOSION_CENTER_18.GetFloat("X");
            var MY_24 = MY;
            var temp_25 = MY_24.GetFloat("Y");
            var EXPLOSION_CENTER_28 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_29 = EXPLOSION_CENTER_28.GetFloat("Y");
            var MY_34 = MY;
            var temp_35 = MY_34.GetFloat("Y");
            var EXPLOSION_CENTER_38 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_39 = EXPLOSION_CENTER_38.GetFloat("Y");
            DISTX_0.SetFloat("VAL", (temp_5 - temp_9) * (temp_15 - temp_19) + (temp_25 - temp_29) * (temp_35 - temp_39));
            var DISTX_41 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_41_val = DISTX_41.GetFloat("VAL");
            var DISTX_42 = _world.GetObject(ObjectType.Skill, "DISTX");
            DISTX_42.SetFloat("VAL", MathUtils.Sqrt(DISTX_41_val));
            var DISTZ_43 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_44 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_44_val = DISTZ_44.GetFloat("VAL");
            var MY_46 = MY;
            var temp_47 = MY_46.GetFloat("FLOOR_HGT");
            var EXPLOSION_CENTER_50 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_51 = EXPLOSION_CENTER_50.GetFloat("FLOOR_HGT");
            DISTZ_43.SetFloat("VAL", temp_47 - temp_51);
            var DISTX_53 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_53_val = DISTX_53.GetFloat("VAL");
            if (DISTX_53_val > 10f)
            {
                {
                    var enumerator = BEAMREACT(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            var MY_56 = MY;
            MY_56.SetFloat("PASSABLE", 1f);
            var MY_59 = MY;
            MY_59.SetFloat("CAREFULLY", 0f);
            var MY_62 = MY;
            MY_62.SetAcknexObject("IF_NEAR", null);
            var MY_65 = MY;
            MY_65.SetAcknexObject("IF_FAR", null);
            var MY_68 = MY;
            MY_68.SetAcknexObject("IF_HIT", null);
            var VANISHFORGOOD_69 = _world.AcknexObject.GetAcknexObject("VANISHFORGOOD");
            var MY_71 = MY;
            MY_71.SetAcknexObject("EACH_CYCLE", VANISHFORGOOD_69);
            var DEPT0ATEX_72 = _world.AcknexObject.GetAcknexObject("DEPT0ATEX");
            var MY_74 = MY;
            MY_74.SetAcknexObject("TEXTURE", DEPT0ATEX_72);
            var MY_77 = MY;
            MY_77.SetFloat("SPEED", 0f);
            var MY_80 = MY;
            MY_80.SetAcknexObject("TARGET", null);
            var MY_83 = MY;
            MY_83.SetFloat("SKILL4", 8f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DEPTHIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat("VAL");
            if (SHOOT_FAC_1_val == 0f)
            {
                goto OBSTACLE;
            }
            var MY_2 = MY;
            var HIT_3 = _world.GetSynonymObject("HIT");
            if (HIT_3 == MY_2)
            {
                goto HIT;
            }
            var EXPLOSION_ON_5 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            var EXPLOSION_ON_5_val = EXPLOSION_ON_5.GetFloat("VAL");
            if (EXPLOSION_ON_5_val == 0f)
            {
                goto OBSTACLE;
            }
            var DISTX_6 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_7 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_7_val = DISTX_7.GetFloat("VAL");
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat("X");
            var EXPLOSION_CENTER_14 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_15 = EXPLOSION_CENTER_14.GetFloat("X");
            var MY_20 = MY;
            var temp_21 = MY_20.GetFloat("X");
            var EXPLOSION_CENTER_24 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_25 = EXPLOSION_CENTER_24.GetFloat("X");
            var MY_30 = MY;
            var temp_31 = MY_30.GetFloat("Y");
            var EXPLOSION_CENTER_34 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_35 = EXPLOSION_CENTER_34.GetFloat("Y");
            var MY_40 = MY;
            var temp_41 = MY_40.GetFloat("Y");
            var EXPLOSION_CENTER_44 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_45 = EXPLOSION_CENTER_44.GetFloat("Y");
            DISTX_6.SetFloat("VAL", (temp_11 - temp_15) * (temp_21 - temp_25) + (temp_31 - temp_35) * (temp_41 - temp_45));
            var DISTX_47 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_47_val = DISTX_47.GetFloat("VAL");
            var DISTX_48 = _world.GetObject(ObjectType.Skill, "DISTX");
            DISTX_48.SetFloat("VAL", MathUtils.Sqrt(DISTX_47_val));
            var DISTX_50 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_50_val = DISTX_50.GetFloat("VAL");
            if (DISTX_50_val > 25f)
            {
                goto OBSTACLE;
            }
            HIT:
            var EXPLOSION_ON_52 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            var EXPLOSION_ON_52_val = EXPLOSION_ON_52.GetFloat("VAL");
            if (EXPLOSION_ON_52_val != 2f)
            {
                goto CONT;
            }
            var MY_55 = MY;
            var temp_56 = MY_55.GetFloat("VISIBLE");
            if (temp_56 == 1f)
            {
                {
                    var enumerator = DEPTIMPLODE(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            CONT:
            var SHOOT_FAC_57 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_57_val = SHOOT_FAC_57.GetFloat("VAL");
            var MY_59 = MY;
            var temp_60 = MY_59.GetFloat("SKILL1");
            var MY_62 = MY;
            MY_62.SetFloat("SKILL1", temp_60 + SHOOT_FAC_57_val);
            var MY_65 = MY;
            var temp_66 = MY_65.GetFloat("SKILL1");
            if (temp_66 > 2f)
            {
                goto DIE;
            }
            if (UnityEngine.Random.value < 0.3f)
            {
                goto DIE;
            }
            var MY_70 = MY;
            var temp_71 = MY_70?.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("DEPT_TEX", temp_71);
            var DEPT5TEX_73 = _world.AcknexObject.GetAcknexObject("DEPT5TEX");
            var MY_75 = MY;
            MY_75.SetAcknexObject("TEXTURE", DEPT5TEX_73);
            var MY_78 = MY;
            MY_78.SetAcknexObject("IF_NEAR", null);
            var MY_81 = MY;
            MY_81.SetAcknexObject("IF_FAR", null);
            var MY_84 = MY;
            MY_84.SetAcknexObject("IF_HIT", null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_88 = MY;
            MY_88.SetAcknexObject("IF_NEAR", null);
            var MY_91 = MY;
            MY_91.SetAcknexObject("IF_FAR", null);
            var DEPTHIT_92 = _world.AcknexObject.GetAcknexObject("DEPTHIT");
            var MY_94 = MY;
            MY_94.SetAcknexObject("IF_HIT", DEPTHIT_92);
            var DEPT_TEX_95 = _world.GetSynonymObject("DEPT_TEX");
            var MY_97 = MY;
            MY_97.SetAcknexObject("TEXTURE", DEPT_TEX_95);
            {
                var enumerator = DEPTHIDE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            DIE:
            var MY_100 = MY;
            MY_100.SetFloat("SKILL1", 10f);
            {
                var enumerator = DEPTDIE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            yield break;
            OBSTACLE:
            var MY_103 = MY;
            var temp_104 = MY_103.GetFloat("SKILL4");
            if (temp_104 != 1f)
            {
                goto JUMP;
            }
            if (UnityEngine.Random.value < 0.04f)
            {
                var DEPT02SND_107 = _world.AcknexObject.GetAcknexObject("DEPT02SND");
                var MY_109 = MY;
                _world.PlaySound(DEPT02SND_107, 0.3f, MY_109);
            }
            JUMP:
            {
                var enumerator = DEPTTURN(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DEPTCYCLE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("SKILL4");
            if (temp_3 != 4f)
            {
                goto CONT;
            }
            {
                var enumerator = REPELANGLE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_5 = MY;
            var MY_7 = MY;
            var temp_8 = MY_7.GetFloat("ANGLE");
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat("ANGLE");
            MY_5.SetFloat("ANGLE", temp_11 + UnityEngine.Random.value - 0.5f);
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            CONT:
            var MY_18 = MY;
            var temp_19 = MY_18.GetFloat("DISTANCE");
            if (temp_19 > 4f)
            {
                goto CONT1;
            }
            var MY_22 = MY;
            var temp_23 = MY_22.GetFloat("SPEED");
            if (temp_23 == 0f)
            {
                goto CONT1;
            }
            {
                var enumerator = REPELANGLE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_25 = MY;
            var MY_27 = MY;
            var temp_28 = MY_27.GetFloat("ANGLE");
            var MY_30 = MY;
            var temp_31 = MY_30.GetFloat("ANGLE");
            MY_25.SetFloat("ANGLE", temp_31 + UnityEngine.Random.value - 0.5f);
            CONT1:
            var GUN_ON_37 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            var GUN_ON_37_val = GUN_ON_37.GetFloat("VAL");
            if (GUN_ON_37_val != 0f)
            {
                goto HIDE;
            }
            var SHOT_SOUND_ON_39 = _world.GetObject(ObjectType.Skill, "SHOT_SOUND_ON");
            var SHOT_SOUND_ON_39_val = SHOT_SOUND_ON_39.GetFloat("VAL");
            if (SHOT_SOUND_ON_39_val != 0f)
            {
                goto HIDE;
            }
            var EXPLOSION_ON_41 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            var EXPLOSION_ON_41_val = EXPLOSION_ON_41.GetFloat("VAL");
            if (EXPLOSION_ON_41_val != 0f)
            {
                goto HIDE;
            }
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            HIDE:
            {
                var enumerator = DEPTSCREAM(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            {
                var enumerator = DEPTHIDE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DEPTSCREAM(IAcknexObject MY, IAcknexObject THERE)
        {
            if (UnityEngine.Random.value < 0.7f)
            {
                var DEPT04SND_2 = _world.AcknexObject.GetAcknexObject("DEPT04SND");
                var MY_4 = MY;
                _world.PlaySound(DEPT04SND_2, 0.3f, MY_4);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator GIRLTURN(IAcknexObject MY, IAcknexObject THERE)
        {
            var WAITTIME_0 = _world.GetObject(ObjectType.Skill, "WAITTIME");
            var WAITTIME_1 = _world.GetObject(ObjectType.Skill, "WAITTIME");
            var WAITTIME_1_val = WAITTIME_1.GetFloat("VAL");
            WAITTIME_0.SetFloat("VAL", 64f * UnityEngine.Random.value + 16f);
            if (UnityEngine.Random.value > 0.95f)
            {
                var RIGHTTURNPSBY_9 = _world.GetObject(ObjectType.Skill, "RIGHTTURNPSBY");
                var RIGHTTURNPSBY_10 = _world.GetObject(ObjectType.Skill, "RIGHTTURNPSBY");
                var RIGHTTURNPSBY_10_val = RIGHTTURNPSBY_10.GetFloat("VAL");
                var RIGHTTURNPSBY_12 = _world.GetObject(ObjectType.Skill, "RIGHTTURNPSBY");
                var RIGHTTURNPSBY_12_val = RIGHTTURNPSBY_12.GetFloat("VAL");
                var RIGHTTURNPSBY_18 = _world.GetObject(ObjectType.Skill, "RIGHTTURNPSBY");
                var RIGHTTURNPSBY_18_val = RIGHTTURNPSBY_18.GetFloat("VAL");
                RIGHTTURNPSBY_9.SetFloat("VAL", (RIGHTTURNPSBY_12_val - 1f) * (RIGHTTURNPSBY_18_val - 1f));
            }
            var RIGHTTURNPSBY_22 = _world.GetObject(ObjectType.Skill, "RIGHTTURNPSBY");
            var RIGHTTURNPSBY_22_val = RIGHTTURNPSBY_22.GetFloat("VAL");
            if (RIGHTTURNPSBY_22_val > RIGHTTURNPSBY_22.GetFloat("MAX"))
            {
                {
                    var enumerator = TURNRIGHT(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            {
                var enumerator = TURNLEFT(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator GIRLWAIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat("CAREFULLY", 0f);
            var MY_5 = MY;
            MY_5.SetAcknexObject("EACH_TICK", null);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_FAR", null);
            var GIRLHIT_9 = _world.AcknexObject.GetAcknexObject("GIRLHIT");
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_HIT", GIRLHIT_9);
            var MY_14 = MY;
            MY_14.SetAcknexObject("IF_NEAR", null);
            var GIRLCYCLE_15 = _world.AcknexObject.GetAcknexObject("GIRLCYCLE");
            var MY_17 = MY;
            MY_17.SetAcknexObject("EACH_CYCLE", GIRLCYCLE_15);
            var MY_20 = MY;
            MY_20.SetFloat("GROUND", 0f);
            var MY_23 = MY;
            MY_23.SetFloat("HEIGHT", -0.05f);
            var GIRL0TEX_24 = _world.AcknexObject.GetAcknexObject("GIRL0TEX");
            var MY_26 = MY;
            MY_26.SetAcknexObject("TEXTURE", GIRL0TEX_24);
            var MY_29 = MY;
            MY_29.SetFloat("SPEED", 0f);
            var MY_32 = MY;
            MY_32.SetAcknexObject("TARGET", null);
            var MY_35 = MY;
            MY_35.SetFloat("SKILL4", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator GIRLWANDER(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat("CAREFULLY", 1f);
            var MY_5 = MY;
            MY_5.SetAcknexObject("EACH_TICK", null);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_FAR", null);
            var GIRLHIT_9 = _world.AcknexObject.GetAcknexObject("GIRLHIT");
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_HIT", GIRLHIT_9);
            var MY_14 = MY;
            MY_14.SetAcknexObject("IF_NEAR", null);
            var GIRLCYCLE_15 = _world.AcknexObject.GetAcknexObject("GIRLCYCLE");
            var MY_17 = MY;
            MY_17.SetAcknexObject("EACH_CYCLE", GIRLCYCLE_15);
            var MY_20 = MY;
            MY_20.SetFloat("GROUND", 0f);
            var GIRL1TEX_21 = _world.AcknexObject.GetAcknexObject("GIRL1TEX");
            var MY_23 = MY;
            MY_23.SetAcknexObject("TEXTURE", GIRL1TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat("SPEED", 0.4f);
            var BULLET_27 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_29 = MY;
            MY_29.SetAcknexObject("TARGET", BULLET_27);
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_32 = MY;
            MY_32.SetFloat("SKILL4", 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator GIRLHIDE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat("CAREFULLY", 1f);
            var MY_5 = MY;
            MY_5.SetAcknexObject("EACH_TICK", null);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_NEAR", null);
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_FAR", null);
            var GIRLCYCLE_12 = _world.AcknexObject.GetAcknexObject("GIRLCYCLE");
            var MY_14 = MY;
            MY_14.SetAcknexObject("EACH_CYCLE", GIRLCYCLE_12);
            var GIRLHIT_15 = _world.AcknexObject.GetAcknexObject("GIRLHIT");
            var MY_17 = MY;
            MY_17.SetAcknexObject("IF_HIT", GIRLHIT_15);
            {
                var enumerator = GIRLSCREAM(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_19 = MY;
            var MY_21 = MY;
            var temp_22 = MY_21.GetFloat("ANGLE");
            var PLAYER_ANGLE_23 = _world.GetObject(ObjectType.Skill, "PLAYER_ANGLE");
            var PLAYER_ANGLE_23_val = PLAYER_ANGLE_23.GetFloat("VAL");
            MY_19.SetFloat("ANGLE", PLAYER_ANGLE_23_val + (0.5f - UnityEngine.Random.value) * 2.4f);
            var GIRL1TEX_32 = _world.AcknexObject.GetAcknexObject("GIRL1TEX");
            var MY_34 = MY;
            MY_34.SetAcknexObject("TEXTURE", GIRL1TEX_32);
            var MY_37 = MY;
            MY_37.SetFloat("SPEED", 0.6f);
            var MY_40 = MY;
            MY_40.SetFloat("DIST", 20f);
            var BULLET_41 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_43 = MY;
            MY_43.SetAcknexObject("TARGET", BULLET_41);
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_46 = MY;
            MY_46.SetFloat("SKILL4", 4f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)480f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_50 = MY;
            var temp_51 = MY_50.GetFloat("SKILL1");
            if (temp_51 < 2f)
            {
                {
                    var enumerator = GIRLWANDER(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator GIRLDEAD(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("IF_NEAR", null);
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_FAR", null);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_HIT", null);
            var MY_11 = MY;
            MY_11.SetAcknexObject("EACH_CYCLE", null);
            {
                var enumerator = INNOCENTKILLED(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var GIRL9TEX_12 = _world.AcknexObject.GetAcknexObject("GIRL9TEX");
            var MY_14 = MY;
            MY_14.SetAcknexObject("TEXTURE", GIRL9TEX_12);
            var MY_17 = MY;
            MY_17.SetFloat("SPEED", 0f);
            var MY_20 = MY;
            MY_20.SetAcknexObject("TARGET", null);
            var MY_23 = MY;
            MY_23.SetFloat("PASSABLE", 1f);
            var MY_26 = MY;
            MY_26.SetFloat("CAREFULLY", 0f);
            var MY_29 = MY;
            MY_29.SetFloat("SKILL4", 8f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator GIRLDIE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat("SKILL1", 10f);
            var MY_5 = MY;
            MY_5.SetFloat("PASSABLE", 1f);
            var MY_8 = MY;
            MY_8.SetFloat("CAREFULLY", 0f);
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_NEAR", null);
            var MY_14 = MY;
            MY_14.SetAcknexObject("IF_FAR", null);
            var MY_17 = MY;
            MY_17.SetAcknexObject("IF_HIT", null);
            var GIRLDEAD_18 = _world.AcknexObject.GetAcknexObject("GIRLDEAD");
            var MY_20 = MY;
            MY_20.SetAcknexObject("EACH_CYCLE", GIRLDEAD_18);
            var GIRL8TEX_21 = _world.AcknexObject.GetAcknexObject("GIRL8TEX");
            var MY_23 = MY;
            MY_23.SetAcknexObject("TEXTURE", GIRL8TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat("SPEED", 0f);
            var MY_29 = MY;
            MY_29.SetAcknexObject("TARGET", null);
            var GIRL04SND_30 = _world.AcknexObject.GetAcknexObject("GIRL04SND");
            var MY_32 = MY;
            _world.PlaySound(GIRL04SND_30, 0.4f, MY_32);
            var MY_35 = MY;
            MY_35.SetFloat("SKILL4", 8f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator GIRLIMPLODE(IAcknexObject MY, IAcknexObject THERE)
        {
            var DISTX_0 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_1 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_1_val = DISTX_1.GetFloat("VAL");
            var MY_4 = MY;
            var temp_5 = MY_4.GetFloat("X");
            var EXPLOSION_CENTER_8 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_9 = EXPLOSION_CENTER_8.GetFloat("X");
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat("X");
            var EXPLOSION_CENTER_18 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_19 = EXPLOSION_CENTER_18.GetFloat("X");
            var MY_24 = MY;
            var temp_25 = MY_24.GetFloat("Y");
            var EXPLOSION_CENTER_28 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_29 = EXPLOSION_CENTER_28.GetFloat("Y");
            var MY_34 = MY;
            var temp_35 = MY_34.GetFloat("Y");
            var EXPLOSION_CENTER_38 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_39 = EXPLOSION_CENTER_38.GetFloat("Y");
            DISTX_0.SetFloat("VAL", (temp_5 - temp_9) * (temp_15 - temp_19) + (temp_25 - temp_29) * (temp_35 - temp_39));
            var DISTX_41 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_41_val = DISTX_41.GetFloat("VAL");
            var DISTX_42 = _world.GetObject(ObjectType.Skill, "DISTX");
            DISTX_42.SetFloat("VAL", MathUtils.Sqrt(DISTX_41_val));
            var DISTZ_43 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_44 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_44_val = DISTZ_44.GetFloat("VAL");
            var MY_46 = MY;
            var temp_47 = MY_46.GetFloat("FLOOR_HGT");
            var EXPLOSION_CENTER_50 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_51 = EXPLOSION_CENTER_50.GetFloat("FLOOR_HGT");
            DISTZ_43.SetFloat("VAL", temp_47 - temp_51);
            var DISTX_53 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_53_val = DISTX_53.GetFloat("VAL");
            if (DISTX_53_val > 10f)
            {
                {
                    var enumerator = BEAMREACT(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            var MY_56 = MY;
            MY_56.SetFloat("PASSABLE", 1f);
            var MY_59 = MY;
            MY_59.SetFloat("CAREFULLY", 0f);
            var MY_62 = MY;
            MY_62.SetAcknexObject("IF_NEAR", null);
            var MY_65 = MY;
            MY_65.SetAcknexObject("IF_FAR", null);
            var MY_68 = MY;
            MY_68.SetAcknexObject("IF_HIT", null);
            var VANISHFORGOOD_69 = _world.AcknexObject.GetAcknexObject("VANISHFORGOOD");
            var MY_71 = MY;
            MY_71.SetAcknexObject("EACH_CYCLE", VANISHFORGOOD_69);
            var GIRL0ATEX_72 = _world.AcknexObject.GetAcknexObject("GIRL0ATEX");
            var MY_74 = MY;
            MY_74.SetAcknexObject("TEXTURE", GIRL0ATEX_72);
            var MY_77 = MY;
            MY_77.SetFloat("SPEED", 0f);
            var MY_80 = MY;
            MY_80.SetAcknexObject("TARGET", null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator GIRLHIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat("VAL");
            if (SHOOT_FAC_1_val == 0f)
            {
                goto OBSTACLE;
            }
            var MY_2 = MY;
            var HIT_3 = _world.GetSynonymObject("HIT");
            if (HIT_3 == MY_2)
            {
                goto HIT;
            }
            var EXPLOSION_ON_5 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            var EXPLOSION_ON_5_val = EXPLOSION_ON_5.GetFloat("VAL");
            if (EXPLOSION_ON_5_val == 0f)
            {
                goto OBSTACLE;
            }
            var DISTX_6 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_7 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_7_val = DISTX_7.GetFloat("VAL");
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat("X");
            var EXPLOSION_CENTER_14 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_15 = EXPLOSION_CENTER_14.GetFloat("X");
            var MY_20 = MY;
            var temp_21 = MY_20.GetFloat("X");
            var EXPLOSION_CENTER_24 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_25 = EXPLOSION_CENTER_24.GetFloat("X");
            var MY_30 = MY;
            var temp_31 = MY_30.GetFloat("Y");
            var EXPLOSION_CENTER_34 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_35 = EXPLOSION_CENTER_34.GetFloat("Y");
            var MY_40 = MY;
            var temp_41 = MY_40.GetFloat("Y");
            var EXPLOSION_CENTER_44 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_45 = EXPLOSION_CENTER_44.GetFloat("Y");
            DISTX_6.SetFloat("VAL", (temp_11 - temp_15) * (temp_21 - temp_25) + (temp_31 - temp_35) * (temp_41 - temp_45));
            var DISTX_47 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_47_val = DISTX_47.GetFloat("VAL");
            var DISTX_48 = _world.GetObject(ObjectType.Skill, "DISTX");
            DISTX_48.SetFloat("VAL", MathUtils.Sqrt(DISTX_47_val));
            var DISTX_50 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_50_val = DISTX_50.GetFloat("VAL");
            if (DISTX_50_val > 25f)
            {
                goto OBSTACLE;
            }
            HIT:
            var EXPLOSION_ON_52 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            var EXPLOSION_ON_52_val = EXPLOSION_ON_52.GetFloat("VAL");
            if (EXPLOSION_ON_52_val != 2f)
            {
                goto CONT;
            }
            var MY_55 = MY;
            var temp_56 = MY_55.GetFloat("VISIBLE");
            if (temp_56 == 1f)
            {
                {
                    var enumerator = GIRLIMPLODE(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            CONT:
            var SHOOT_FAC_57 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_57_val = SHOOT_FAC_57.GetFloat("VAL");
            var MY_59 = MY;
            var temp_60 = MY_59.GetFloat("SKILL1");
            var MY_62 = MY;
            MY_62.SetFloat("SKILL1", temp_60 + SHOOT_FAC_57_val);
            var MY_65 = MY;
            var temp_66 = MY_65.GetFloat("SKILL1");
            if (temp_66 > 2f)
            {
                goto DIE;
            }
            if (UnityEngine.Random.value < 0.3f)
            {
                goto DIE;
            }
            var MY_70 = MY;
            var temp_71 = MY_70?.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("GIRL_TEX", temp_71);
            var GIRL5TEX_73 = _world.AcknexObject.GetAcknexObject("GIRL5TEX");
            var MY_75 = MY;
            MY_75.SetAcknexObject("TEXTURE", GIRL5TEX_73);
            var MY_78 = MY;
            MY_78.SetAcknexObject("IF_NEAR", null);
            var MY_81 = MY;
            MY_81.SetAcknexObject("IF_FAR", null);
            var MY_84 = MY;
            MY_84.SetAcknexObject("IF_HIT", null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_88 = MY;
            MY_88.SetAcknexObject("IF_NEAR", null);
            var MY_91 = MY;
            MY_91.SetAcknexObject("IF_FAR", null);
            var GIRLHIT_92 = _world.AcknexObject.GetAcknexObject("GIRLHIT");
            var MY_94 = MY;
            MY_94.SetAcknexObject("IF_HIT", GIRLHIT_92);
            var GIRL_TEX_95 = _world.GetSynonymObject("GIRL_TEX");
            var MY_97 = MY;
            MY_97.SetAcknexObject("TEXTURE", GIRL_TEX_95);
            {
                var enumerator = GIRLHIDE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            DIE:
            var MY_100 = MY;
            MY_100.SetFloat("SKILL1", 10f);
            {
                var enumerator = GIRLDIE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            yield break;
            OBSTACLE:
            var MY_103 = MY;
            var temp_104 = MY_103.GetFloat("SKILL4");
            if (temp_104 != 1f)
            {
                goto JUMP;
            }
            if (UnityEngine.Random.value > 0.97f)
            {
                var GIRL02SND_107 = _world.AcknexObject.GetAcknexObject("GIRL02SND");
                var MY_109 = MY;
                _world.PlaySound(GIRL02SND_107, 0.3f, MY_109);
            }
            JUMP:
            {
                var enumerator = GIRLTURN(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator GIRLCYCLE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("SKILL4");
            if (temp_3 != 4f)
            {
                goto CONT;
            }
            {
                var enumerator = REPELANGLE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_5 = MY;
            var MY_7 = MY;
            var temp_8 = MY_7.GetFloat("ANGLE");
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat("ANGLE");
            MY_5.SetFloat("ANGLE", temp_11 + UnityEngine.Random.value - 0.5f);
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            CONT:
            var MY_18 = MY;
            var temp_19 = MY_18.GetFloat("DISTANCE");
            if (temp_19 > 4f)
            {
                goto CONT1;
            }
            var MY_22 = MY;
            var temp_23 = MY_22.GetFloat("SPEED");
            if (temp_23 == 0f)
            {
                goto CONT1;
            }
            {
                var enumerator = REPELANGLE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_25 = MY;
            var MY_27 = MY;
            var temp_28 = MY_27.GetFloat("ANGLE");
            var MY_30 = MY;
            var temp_31 = MY_30.GetFloat("ANGLE");
            MY_25.SetFloat("ANGLE", temp_31 + UnityEngine.Random.value - 0.5f);
            CONT1:
            var GUN_ON_37 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            var GUN_ON_37_val = GUN_ON_37.GetFloat("VAL");
            if (GUN_ON_37_val != 0f)
            {
                goto HIDE;
            }
            var SHOT_SOUND_ON_39 = _world.GetObject(ObjectType.Skill, "SHOT_SOUND_ON");
            var SHOT_SOUND_ON_39_val = SHOT_SOUND_ON_39.GetFloat("VAL");
            if (SHOT_SOUND_ON_39_val != 0f)
            {
                goto HIDE;
            }
            var EXPLOSION_ON_41 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            var EXPLOSION_ON_41_val = EXPLOSION_ON_41.GetFloat("VAL");
            if (EXPLOSION_ON_41_val != 0f)
            {
                goto HIDE;
            }
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            HIDE:
            {
                var enumerator = GIRLSCREAM(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            {
                var enumerator = GIRLHIDE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator GIRLSCREAM(IAcknexObject MY, IAcknexObject THERE)
        {
            if (UnityEngine.Random.value < 0.3f)
            {
                goto NONO;
            }
            if (UnityEngine.Random.value < 0.9f)
            {
                goto SCREAM;
            }
            var GIRL01SND_4 = _world.AcknexObject.GetAcknexObject("GIRL01SND");
            var MY_6 = MY;
            _world.PlaySound(GIRL01SND_4, 0.3f, MY_6);
            yield break;
            SCREAM:
            var GIRL03SND_7 = _world.AcknexObject.GetAcknexObject("GIRL03SND");
            var MY_9 = MY;
            _world.PlaySound(GIRL03SND_7, 0.3f, MY_9);
            yield break;
            NONO:
            var GIRL05SND_10 = _world.AcknexObject.GetAcknexObject("GIRL05SND");
            var MY_12 = MY;
            _world.PlaySound(GIRL05SND_10, 0.3f, MY_12);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator OBOYTURN(IAcknexObject MY, IAcknexObject THERE)
        {
            var WAITTIME_0 = _world.GetObject(ObjectType.Skill, "WAITTIME");
            var WAITTIME_1 = _world.GetObject(ObjectType.Skill, "WAITTIME");
            var WAITTIME_1_val = WAITTIME_1.GetFloat("VAL");
            WAITTIME_0.SetFloat("VAL", 64f * UnityEngine.Random.value + 16f);
            if (UnityEngine.Random.value > 0.95f)
            {
                var RIGHTTURNPSBY_9 = _world.GetObject(ObjectType.Skill, "RIGHTTURNPSBY");
                var RIGHTTURNPSBY_10 = _world.GetObject(ObjectType.Skill, "RIGHTTURNPSBY");
                var RIGHTTURNPSBY_10_val = RIGHTTURNPSBY_10.GetFloat("VAL");
                var RIGHTTURNPSBY_12 = _world.GetObject(ObjectType.Skill, "RIGHTTURNPSBY");
                var RIGHTTURNPSBY_12_val = RIGHTTURNPSBY_12.GetFloat("VAL");
                var RIGHTTURNPSBY_18 = _world.GetObject(ObjectType.Skill, "RIGHTTURNPSBY");
                var RIGHTTURNPSBY_18_val = RIGHTTURNPSBY_18.GetFloat("VAL");
                RIGHTTURNPSBY_9.SetFloat("VAL", (RIGHTTURNPSBY_12_val - 1f) * (RIGHTTURNPSBY_18_val - 1f));
            }
            var RIGHTTURNPSBY_22 = _world.GetObject(ObjectType.Skill, "RIGHTTURNPSBY");
            var RIGHTTURNPSBY_22_val = RIGHTTURNPSBY_22.GetFloat("VAL");
            if (RIGHTTURNPSBY_22_val > RIGHTTURNPSBY_22.GetFloat("MAX"))
            {
                {
                    var enumerator = TURNRIGHT(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            {
                var enumerator = TURNLEFT(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator OBOYWAIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat("CAREFULLY", 0f);
            var MY_5 = MY;
            MY_5.SetAcknexObject("EACH_TICK", null);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_FAR", null);
            var OBOYHIT_9 = _world.AcknexObject.GetAcknexObject("OBOYHIT");
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_HIT", OBOYHIT_9);
            var MY_14 = MY;
            MY_14.SetAcknexObject("IF_NEAR", null);
            var OBOYCYCLE_15 = _world.AcknexObject.GetAcknexObject("OBOYCYCLE");
            var MY_17 = MY;
            MY_17.SetAcknexObject("EACH_CYCLE", OBOYCYCLE_15);
            var MY_20 = MY;
            MY_20.SetFloat("HEIGHT", -0.05f);
            var OBOY0TEX_21 = _world.AcknexObject.GetAcknexObject("OBOY0TEX");
            var MY_23 = MY;
            MY_23.SetAcknexObject("TEXTURE", OBOY0TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat("SPEED", 0f);
            var MY_29 = MY;
            MY_29.SetAcknexObject("TARGET", null);
            var MY_32 = MY;
            MY_32.SetFloat("SKILL4", 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator OBOYWANDER(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat("CAREFULLY", 1f);
            var MY_5 = MY;
            MY_5.SetAcknexObject("EACH_TICK", null);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_FAR", null);
            var OBOYHIT_9 = _world.AcknexObject.GetAcknexObject("OBOYHIT");
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_HIT", OBOYHIT_9);
            var MY_14 = MY;
            MY_14.SetAcknexObject("IF_NEAR", null);
            var OBOYCYCLE_15 = _world.AcknexObject.GetAcknexObject("OBOYCYCLE");
            var MY_17 = MY;
            MY_17.SetAcknexObject("EACH_CYCLE", OBOYCYCLE_15);
            var OBOY1TEX_18 = _world.AcknexObject.GetAcknexObject("OBOY1TEX");
            var MY_20 = MY;
            MY_20.SetAcknexObject("TEXTURE", OBOY1TEX_18);
            var MY_23 = MY;
            MY_23.SetFloat("SPEED", 0.4f);
            var BULLET_24 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_26 = MY;
            MY_26.SetAcknexObject("TARGET", BULLET_24);
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_29 = MY;
            MY_29.SetFloat("SKILL4", 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator OBOYHIDE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat("CAREFULLY", 1f);
            var MY_5 = MY;
            MY_5.SetAcknexObject("EACH_TICK", null);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_NEAR", null);
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_FAR", null);
            var GIRLCYCLE_12 = _world.AcknexObject.GetAcknexObject("GIRLCYCLE");
            var MY_14 = MY;
            MY_14.SetAcknexObject("EACH_CYCLE", GIRLCYCLE_12);
            var OBOYHIT_15 = _world.AcknexObject.GetAcknexObject("OBOYHIT");
            var MY_17 = MY;
            MY_17.SetAcknexObject("IF_HIT", OBOYHIT_15);
            {
                var enumerator = OBOYSCREAM(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_19 = MY;
            var MY_21 = MY;
            var temp_22 = MY_21.GetFloat("ANGLE");
            var PLAYER_ANGLE_23 = _world.GetObject(ObjectType.Skill, "PLAYER_ANGLE");
            var PLAYER_ANGLE_23_val = PLAYER_ANGLE_23.GetFloat("VAL");
            MY_19.SetFloat("ANGLE", PLAYER_ANGLE_23_val + (0.5f - UnityEngine.Random.value) * 2.4f);
            var OBOY1TEX_32 = _world.AcknexObject.GetAcknexObject("OBOY1TEX");
            var MY_34 = MY;
            MY_34.SetAcknexObject("TEXTURE", OBOY1TEX_32);
            var MY_37 = MY;
            MY_37.SetFloat("SPEED", 0.6f);
            var MY_40 = MY;
            MY_40.SetFloat("DIST", 20f);
            var BULLET_41 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_43 = MY;
            MY_43.SetAcknexObject("TARGET", BULLET_41);
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_46 = MY;
            MY_46.SetFloat("SKILL4", 4f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)480f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_50 = MY;
            var temp_51 = MY_50.GetFloat("SKILL1");
            if (temp_51 < 2f)
            {
                {
                    var enumerator = OBOYWANDER(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator OBOYDEAD(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("IF_NEAR", null);
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_FAR", null);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_HIT", null);
            var MY_11 = MY;
            MY_11.SetAcknexObject("EACH_CYCLE", null);
            {
                var enumerator = INNOCENTKILLED(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var OBOY9TEX_12 = _world.AcknexObject.GetAcknexObject("OBOY9TEX");
            var MY_14 = MY;
            MY_14.SetAcknexObject("TEXTURE", OBOY9TEX_12);
            var MY_17 = MY;
            MY_17.SetFloat("SPEED", 0f);
            var MY_20 = MY;
            MY_20.SetAcknexObject("TARGET", null);
            var MY_23 = MY;
            MY_23.SetFloat("PASSABLE", 1f);
            var MY_26 = MY;
            MY_26.SetFloat("CAREFULLY", 0f);
            var MY_29 = MY;
            MY_29.SetFloat("SKILL4", 8f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator OBOYDIE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat("SKILL1", 10f);
            var MY_5 = MY;
            MY_5.SetFloat("PASSABLE", 1f);
            var MY_8 = MY;
            MY_8.SetFloat("CAREFULLY", 0f);
            var MY_11 = MY;
            MY_11.SetAcknexObject("IF_NEAR", null);
            var MY_14 = MY;
            MY_14.SetAcknexObject("IF_FAR", null);
            var MY_17 = MY;
            MY_17.SetAcknexObject("IF_HIT", null);
            var OBOYDEAD_18 = _world.AcknexObject.GetAcknexObject("OBOYDEAD");
            var MY_20 = MY;
            MY_20.SetAcknexObject("EACH_CYCLE", OBOYDEAD_18);
            var OBOY8TEX_21 = _world.AcknexObject.GetAcknexObject("OBOY8TEX");
            var MY_23 = MY;
            MY_23.SetAcknexObject("TEXTURE", OBOY8TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat("SPEED", 0f);
            var MY_29 = MY;
            MY_29.SetAcknexObject("TARGET", null);
            var OBOY03SND_30 = _world.AcknexObject.GetAcknexObject("OBOY03SND");
            var MY_32 = MY;
            _world.PlaySound(OBOY03SND_30, 0.4f, MY_32);
            var MY_35 = MY;
            MY_35.SetFloat("SKILL4", 8f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator OBOYIMPLODE(IAcknexObject MY, IAcknexObject THERE)
        {
            var DISTX_0 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_1 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_1_val = DISTX_1.GetFloat("VAL");
            var MY_4 = MY;
            var temp_5 = MY_4.GetFloat("X");
            var EXPLOSION_CENTER_8 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_9 = EXPLOSION_CENTER_8.GetFloat("X");
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat("X");
            var EXPLOSION_CENTER_18 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_19 = EXPLOSION_CENTER_18.GetFloat("X");
            var MY_24 = MY;
            var temp_25 = MY_24.GetFloat("Y");
            var EXPLOSION_CENTER_28 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_29 = EXPLOSION_CENTER_28.GetFloat("Y");
            var MY_34 = MY;
            var temp_35 = MY_34.GetFloat("Y");
            var EXPLOSION_CENTER_38 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_39 = EXPLOSION_CENTER_38.GetFloat("Y");
            DISTX_0.SetFloat("VAL", (temp_5 - temp_9) * (temp_15 - temp_19) + (temp_25 - temp_29) * (temp_35 - temp_39));
            var DISTX_41 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_41_val = DISTX_41.GetFloat("VAL");
            var DISTX_42 = _world.GetObject(ObjectType.Skill, "DISTX");
            DISTX_42.SetFloat("VAL", MathUtils.Sqrt(DISTX_41_val));
            var DISTZ_43 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_44 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_44_val = DISTZ_44.GetFloat("VAL");
            var MY_46 = MY;
            var temp_47 = MY_46.GetFloat("FLOOR_HGT");
            var EXPLOSION_CENTER_50 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_51 = EXPLOSION_CENTER_50.GetFloat("FLOOR_HGT");
            DISTZ_43.SetFloat("VAL", temp_47 - temp_51);
            var DISTX_53 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_53_val = DISTX_53.GetFloat("VAL");
            if (DISTX_53_val > 10f)
            {
                {
                    var enumerator = BEAMREACT(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            var MY_56 = MY;
            MY_56.SetFloat("PASSABLE", 1f);
            var MY_59 = MY;
            MY_59.SetFloat("CAREFULLY", 0f);
            var MY_62 = MY;
            MY_62.SetAcknexObject("IF_NEAR", null);
            var MY_65 = MY;
            MY_65.SetAcknexObject("IF_FAR", null);
            var MY_68 = MY;
            MY_68.SetAcknexObject("IF_HIT", null);
            var VANISHFORGOOD_69 = _world.AcknexObject.GetAcknexObject("VANISHFORGOOD");
            var MY_71 = MY;
            MY_71.SetAcknexObject("EACH_CYCLE", VANISHFORGOOD_69);
            var OBOY0ATEX_72 = _world.AcknexObject.GetAcknexObject("OBOY0ATEX");
            var MY_74 = MY;
            MY_74.SetAcknexObject("TEXTURE", OBOY0ATEX_72);
            var MY_77 = MY;
            MY_77.SetFloat("SPEED", 0f);
            var MY_80 = MY;
            MY_80.SetAcknexObject("TARGET", null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator OBOYHIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat("VAL");
            if (SHOOT_FAC_1_val == 0f)
            {
                goto OBSTACLE;
            }
            var MY_2 = MY;
            var HIT_3 = _world.GetSynonymObject("HIT");
            if (HIT_3 == MY_2)
            {
                goto HIT;
            }
            var EXPLOSION_ON_5 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            var EXPLOSION_ON_5_val = EXPLOSION_ON_5.GetFloat("VAL");
            if (EXPLOSION_ON_5_val == 0f)
            {
                goto OBSTACLE;
            }
            var DISTX_6 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_7 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_7_val = DISTX_7.GetFloat("VAL");
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat("X");
            var EXPLOSION_CENTER_14 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_15 = EXPLOSION_CENTER_14.GetFloat("X");
            var MY_20 = MY;
            var temp_21 = MY_20.GetFloat("X");
            var EXPLOSION_CENTER_24 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_25 = EXPLOSION_CENTER_24.GetFloat("X");
            var MY_30 = MY;
            var temp_31 = MY_30.GetFloat("Y");
            var EXPLOSION_CENTER_34 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_35 = EXPLOSION_CENTER_34.GetFloat("Y");
            var MY_40 = MY;
            var temp_41 = MY_40.GetFloat("Y");
            var EXPLOSION_CENTER_44 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_45 = EXPLOSION_CENTER_44.GetFloat("Y");
            DISTX_6.SetFloat("VAL", (temp_11 - temp_15) * (temp_21 - temp_25) + (temp_31 - temp_35) * (temp_41 - temp_45));
            var DISTX_47 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_47_val = DISTX_47.GetFloat("VAL");
            var DISTX_48 = _world.GetObject(ObjectType.Skill, "DISTX");
            DISTX_48.SetFloat("VAL", MathUtils.Sqrt(DISTX_47_val));
            var DISTX_50 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_50_val = DISTX_50.GetFloat("VAL");
            if (DISTX_50_val > 25f)
            {
                goto OBSTACLE;
            }
            HIT:
            var EXPLOSION_ON_52 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            var EXPLOSION_ON_52_val = EXPLOSION_ON_52.GetFloat("VAL");
            if (EXPLOSION_ON_52_val != 2f)
            {
                goto CONT;
            }
            var MY_55 = MY;
            var temp_56 = MY_55.GetFloat("VISIBLE");
            if (temp_56 == 1f)
            {
                {
                    var enumerator = OBOYIMPLODE(MY, THERE);
                    while (enumerator.MoveNext())
                    {
                        var current = enumerator.Current;
                        if (current != null)
                        {
                            yield return current;
                        }
                    }
                }
                yield break;
            }
            CONT:
            var SHOOT_FAC_57 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_57_val = SHOOT_FAC_57.GetFloat("VAL");
            var MY_59 = MY;
            var temp_60 = MY_59.GetFloat("SKILL1");
            var MY_62 = MY;
            MY_62.SetFloat("SKILL1", temp_60 + SHOOT_FAC_57_val);
            var MY_65 = MY;
            var temp_66 = MY_65.GetFloat("SKILL1");
            if (temp_66 > 2f)
            {
                goto DIE;
            }
            if (UnityEngine.Random.value < 0.3f)
            {
                goto DIE;
            }
            var MY_70 = MY;
            var temp_71 = MY_70?.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("OBOY_TEX", temp_71);
            var OBOY5TEX_73 = _world.AcknexObject.GetAcknexObject("OBOY5TEX");
            var MY_75 = MY;
            MY_75.SetAcknexObject("TEXTURE", OBOY5TEX_73);
            var MY_78 = MY;
            MY_78.SetAcknexObject("IF_NEAR", null);
            var MY_81 = MY;
            MY_81.SetAcknexObject("IF_FAR", null);
            var MY_84 = MY;
            MY_84.SetAcknexObject("IF_HIT", null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_88 = MY;
            MY_88.SetAcknexObject("IF_NEAR", null);
            var MY_91 = MY;
            MY_91.SetAcknexObject("IF_FAR", null);
            var OBOYHIT_92 = _world.AcknexObject.GetAcknexObject("OBOYHIT");
            var MY_94 = MY;
            MY_94.SetAcknexObject("IF_HIT", OBOYHIT_92);
            var OBOY_TEX_95 = _world.GetSynonymObject("OBOY_TEX");
            var MY_97 = MY;
            MY_97.SetAcknexObject("TEXTURE", OBOY_TEX_95);
            {
                var enumerator = OBOYHIDE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            DIE:
            var MY_100 = MY;
            MY_100.SetFloat("SKILL1", 10f);
            {
                var enumerator = OBOYDIE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            yield break;
            OBSTACLE:
            var MY_103 = MY;
            var temp_104 = MY_103.GetFloat("SKILL4");
            if (temp_104 != 1f)
            {
                goto JUMP;
            }
            if (UnityEngine.Random.value > 0.97f)
            {
                var OBOY02SND_107 = _world.AcknexObject.GetAcknexObject("OBOY02SND");
                var MY_109 = MY;
                _world.PlaySound(OBOY02SND_107, 0.3f, MY_109);
            }
            JUMP:
            {
                var enumerator = OBOYTURN(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator OBOYCYCLE(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat("SKILL4");
            if (temp_3 != 4f)
            {
                goto CONT;
            }
            {
                var enumerator = REPELANGLE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_5 = MY;
            var MY_7 = MY;
            var temp_8 = MY_7.GetFloat("ANGLE");
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat("ANGLE");
            MY_5.SetFloat("ANGLE", temp_11 + UnityEngine.Random.value - 0.5f);
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            CONT:
            var MY_18 = MY;
            var temp_19 = MY_18.GetFloat("DISTANCE");
            if (temp_19 > 4f)
            {
                goto CONT1;
            }
            var MY_22 = MY;
            var temp_23 = MY_22.GetFloat("SPEED");
            if (temp_23 == 0f)
            {
                goto CONT1;
            }
            {
                var enumerator = REPELANGLE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_25 = MY;
            var MY_27 = MY;
            var temp_28 = MY_27.GetFloat("ANGLE");
            var MY_30 = MY;
            var temp_31 = MY_30.GetFloat("ANGLE");
            MY_25.SetFloat("ANGLE", temp_31 + UnityEngine.Random.value - 0.5f);
            CONT1:
            var GUN_ON_37 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            var GUN_ON_37_val = GUN_ON_37.GetFloat("VAL");
            if (GUN_ON_37_val != 0f)
            {
                goto HIDE;
            }
            var SHOT_SOUND_ON_39 = _world.GetObject(ObjectType.Skill, "SHOT_SOUND_ON");
            var SHOT_SOUND_ON_39_val = SHOT_SOUND_ON_39.GetFloat("VAL");
            if (SHOT_SOUND_ON_39_val != 0f)
            {
                goto HIDE;
            }
            var EXPLOSION_ON_41 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            var EXPLOSION_ON_41_val = EXPLOSION_ON_41.GetFloat("VAL");
            if (EXPLOSION_ON_41_val != 0f)
            {
                goto HIDE;
            }
            {
                var enumerator = PROBE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            HIDE:
            {
                var enumerator = OBOYSCREAM(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            {
                var enumerator = OBOYHIDE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator OBOYSCREAM(IAcknexObject MY, IAcknexObject THERE)
        {
            if (UnityEngine.Random.value > 0.95f)
            {
                goto THISGAME;
            }
            var OBOY04SND_2 = _world.AcknexObject.GetAcknexObject("OBOY04SND");
            var MY_4 = MY;
            _world.PlaySound(OBOY04SND_2, 0.3f, MY_4);
            yield break;
            THISGAME:
            var OBOY01SND_5 = _world.AcknexObject.GetAcknexObject("OBOY01SND");
            var MY_7 = MY;
            _world.PlaySound(OBOY01SND_5, 0.3f, MY_7);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SETMIBINT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MIBKBADINTACT_2 = _world.AcknexObject.GetAcknexObject("MIBKBADINTACT");
            MIBKBADINTACT_2.SetFloatAll("INVISIBLE", 0f);
            var CORREDORSTARTRGN_5 = _world.AcknexObject.GetAcknexObject("CORREDORSTARTRGN");
            CORREDORSTARTRGN_5.SetAcknexObjectAll("IF_ENTER", null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DSRTWAIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("EACH_TICK", null);
            var DSRTNEAR_3 = _world.AcknexObject.GetAcknexObject("DSRTNEAR");
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_NEAR", DSRTNEAR_3);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_FAR", null);
            var CYCLEDSRT_9 = _world.AcknexObject.GetAcknexObject("CYCLEDSRT");
            var MY_11 = MY;
            MY_11.SetAcknexObject("EACH_CYCLE", CYCLEDSRT_9);
            var DSRTHIT_12 = _world.AcknexObject.GetAcknexObject("DSRTHIT");
            var MY_14 = MY;
            MY_14.SetAcknexObject("IF_HIT", DSRTHIT_12);
            var MY_17 = MY;
            MY_17.SetFloat("CAREFULLY", 0f);
            var MY_20 = MY;
            MY_20.SetFloat("GROUND", 0f);
            var MY_23 = MY;
            MY_23.SetFloat("SKILL4", 1f);
            var DSRT0TEX_24 = _world.AcknexObject.GetAcknexObject("DSRT0TEX");
            var MY_26 = MY;
            MY_26.SetAcknexObject("TEXTURE", DSRT0TEX_24);
            var MY_29 = MY;
            MY_29.SetFloat("SPEED", 0f);
            var MY_32 = MY;
            MY_32.SetAcknexObject("TARGET", null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DSRTCALL(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("EACH_TICK", null);
            var DSRTNEAR_3 = _world.AcknexObject.GetAcknexObject("DSRTNEAR");
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_NEAR", DSRTNEAR_3);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_FAR", null);
            var DSRTWAIT_9 = _world.AcknexObject.GetAcknexObject("DSRTWAIT");
            var MY_11 = MY;
            MY_11.SetAcknexObject("EACH_CYCLE", DSRTWAIT_9);
            var DSRTHIT_12 = _world.AcknexObject.GetAcknexObject("DSRTHIT");
            var MY_14 = MY;
            MY_14.SetAcknexObject("IF_HIT", DSRTHIT_12);
            var MY_17 = MY;
            MY_17.SetFloat("CAREFULLY", 0f);
            var MY_20 = MY;
            MY_20.SetFloat("GROUND", 0f);
            var MY_23 = MY;
            MY_23.SetFloat("SKILL4", 1f);
            var DSRT0ATEX_24 = _world.AcknexObject.GetAcknexObject("DSRT0ATEX");
            var MY_26 = MY;
            MY_26.SetAcknexObject("TEXTURE", DSRT0ATEX_24);
            var MY_29 = MY;
            MY_29.SetFloat("SPEED", 0f);
            var MY_32 = MY;
            MY_32.SetAcknexObject("TARGET", null);
            if (UnityEngine.Random.value > 0.52f)
            {
                var DSRT02SND_35 = _world.AcknexObject.GetAcknexObject("DSRT02SND");
                var MY_37 = MY;
                _world.PlaySound(DSRT02SND_35, 0.7f, MY_37);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DSRTNEAR(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("EACH_TICK", null);
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_NEAR", null);
            var MY_8 = MY;
            MY_8.SetAcknexObject("IF_FAR", null);
            var MY_11 = MY;
            MY_11.SetAcknexObject("EACH_CYCLE", null);
            var DSRTHIT_12 = _world.AcknexObject.GetAcknexObject("DSRTHIT");
            var MY_14 = MY;
            MY_14.SetAcknexObject("IF_HIT", DSRTHIT_12);
            var MY_17 = MY;
            MY_17.SetFloat("CAREFULLY", 0f);
            var MY_20 = MY;
            MY_20.SetFloat("GROUND", 0f);
            var DSRT0TEX_21 = _world.AcknexObject.GetAcknexObject("DSRT0TEX");
            var MY_23 = MY;
            MY_23.SetAcknexObject("TEXTURE", DSRT0TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat("SPEED", 0f);
            var MY_29 = MY;
            MY_29.SetAcknexObject("TARGET", null);
            var DSRT01SND_30 = _world.AcknexObject.GetAcknexObject("DSRT01SND");
            var MY_32 = MY;
            _world.PlaySound(DSRT01SND_30, 0.5f, MY_32);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DSRTHIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat("VAL");
            if (SHOOT_FAC_1_val == 0f)
            {
                yield break;
            }
            var MY_2 = MY;
            var HIT_3 = _world.GetSynonymObject("HIT");
            if (HIT_3 == MY_2)
            {
                goto HIT;
            }
            var EXPLOSION_ON_5 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            var EXPLOSION_ON_5_val = EXPLOSION_ON_5.GetFloat("VAL");
            if (EXPLOSION_ON_5_val == 0f)
            {
                yield break;
            }
            var DISTX_6 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_7 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_7_val = DISTX_7.GetFloat("VAL");
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat("X");
            var EXPLOSION_CENTER_14 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_15 = EXPLOSION_CENTER_14.GetFloat("X");
            var MY_20 = MY;
            var temp_21 = MY_20.GetFloat("X");
            var EXPLOSION_CENTER_24 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_25 = EXPLOSION_CENTER_24.GetFloat("X");
            var MY_30 = MY;
            var temp_31 = MY_30.GetFloat("Y");
            var EXPLOSION_CENTER_34 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_35 = EXPLOSION_CENTER_34.GetFloat("Y");
            var MY_40 = MY;
            var temp_41 = MY_40.GetFloat("Y");
            var EXPLOSION_CENTER_44 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_45 = EXPLOSION_CENTER_44.GetFloat("Y");
            DISTX_6.SetFloat("VAL", (temp_11 - temp_15) * (temp_21 - temp_25) + (temp_31 - temp_35) * (temp_41 - temp_45));
            var DISTX_47 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_47_val = DISTX_47.GetFloat("VAL");
            var DISTX_48 = _world.GetObject(ObjectType.Skill, "DISTX");
            DISTX_48.SetFloat("VAL", MathUtils.Sqrt(DISTX_47_val));
            var DISTX_50 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_50_val = DISTX_50.GetFloat("VAL");
            if (DISTX_50_val > 20f)
            {
                yield break;
            }
            HIT:
            var EXPLOSION_ON_52 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            var EXPLOSION_ON_52_val = EXPLOSION_ON_52.GetFloat("VAL");
            if (EXPLOSION_ON_52_val != 2f)
            {
                goto CONT;
            }
            var MY_55 = MY;
            var temp_56 = MY_55.GetFloat("VISIBLE");
            if (temp_56 != 1f)
            {
                yield break;
            }
            CONT:
            var MY_59 = MY;
            MY_59.SetAcknexObject("IF_HIT", null);
            var END02STR_60 = _world.AcknexObject.GetAcknexObject("END02STR");
            _world.SetSynonymObject("GAMEOVER_TEXT", END02STR_60);
            {
                var enumerator = SHOWPDAGAMEOVER(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator CYCLEDSRT(IAcknexObject MY, IAcknexObject THERE)
        {
            if (UnityEngine.Random.value > 0.7f)
            {
                yield break;
            }
            if (UnityEngine.Random.value < 0.2f)
            {
                yield break;
            }
            {
                var enumerator = DSRTCALL(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator RESETDOOR(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat("DIST", 4f);
            var MY_5 = MY;
            MY_5.SetAcknexObject("IF_FAR", null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator OPENDOOR01(IAcknexObject MY, IAcknexObject THERE)
        {
            var KEY2_1 = _world.GetObject(ObjectType.Skill, "KEY2");
            var KEY2_1_val = KEY2_1.GetFloat("VAL");
            if (KEY2_1_val == 1f)
            {
                goto CONT;
            }
            var MY_4 = MY;
            MY_4.SetFloat("DIST", 8f);
            var RESETDOOR_5 = _world.AcknexObject.GetAcknexObject("RESETDOOR");
            var MY_7 = MY;
            MY_7.SetAcknexObject("IF_FAR", RESETDOOR_5);
            var WRN07STR_8 = _world.AcknexObject.GetAcknexObject("WRN07STR");
            _world.SetSynonymObject("MESSAGE_TEXT", WRN07STR_8);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var DOOR08SND_10 = _world.AcknexObject.GetAcknexObject("DOOR08SND");
            var MY_12 = MY;
            _world.PlaySound(DOOR08SND_10, 0.5f, MY_12);
            yield break;
            CONT:
            var DOOR_TO_MOVE_14 = _world.GetSynonymObject("DOOR_TO_MOVE");
            if (DOOR_TO_MOVE_14 != null)
            {
                yield break;
            }
            var MY_17 = MY;
            MY_17.SetAcknexObject("IF_NEAR", null);
            var DOOR01RGN_18 = _world.AcknexObject.GetAcknexObject("DOOR01RGN");
            _world.SetSynonymObject("DOOR_TO_MOVE", DOOR01RGN_18);
            var DOORANGLE_21 = _world.GetObject(ObjectType.Skill, "DOORANGLE");
            DOORANGLE_21.SetFloat("VAL", 1.57f);
            var MY_24 = MY;
            MY_24.SetFloat("DIST", 8f);
            var DOOR09SND_25 = _world.AcknexObject.GetAcknexObject("DOOR09SND");
            var MY_27 = MY;
            _world.PlaySound(DOOR09SND_25, 0.5f, MY_27);
            {
                var enumerator = MOVEDOOR(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator OPENDOOR02(IAcknexObject MY, IAcknexObject THERE)
        {
            var KEY2_1 = _world.GetObject(ObjectType.Skill, "KEY2");
            var KEY2_1_val = KEY2_1.GetFloat("VAL");
            if (KEY2_1_val == 1f)
            {
                goto CONT;
            }
            var MY_4 = MY;
            MY_4.SetFloat("DIST", 8f);
            var RESETDOOR_5 = _world.AcknexObject.GetAcknexObject("RESETDOOR");
            var MY_7 = MY;
            MY_7.SetAcknexObject("IF_FAR", RESETDOOR_5);
            var WRN07STR_8 = _world.AcknexObject.GetAcknexObject("WRN07STR");
            _world.SetSynonymObject("MESSAGE_TEXT", WRN07STR_8);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var DOOR08SND_10 = _world.AcknexObject.GetAcknexObject("DOOR08SND");
            var MY_12 = MY;
            _world.PlaySound(DOOR08SND_10, 0.5f, MY_12);
            yield break;
            CONT:
            var DOOR_TO_MOVE_14 = _world.GetSynonymObject("DOOR_TO_MOVE");
            if (DOOR_TO_MOVE_14 != null)
            {
                yield break;
            }
            var MY_17 = MY;
            MY_17.SetAcknexObject("IF_NEAR", null);
            var DOOR02RGN_18 = _world.AcknexObject.GetAcknexObject("DOOR02RGN");
            _world.SetSynonymObject("DOOR_TO_MOVE", DOOR02RGN_18);
            var DOORANGLE_21 = _world.GetObject(ObjectType.Skill, "DOORANGLE");
            DOORANGLE_21.SetFloat("VAL", 3.14f);
            var MY_24 = MY;
            MY_24.SetFloat("DIST", 8f);
            var DOOR09SND_25 = _world.AcknexObject.GetAcknexObject("DOOR09SND");
            var MY_27 = MY;
            _world.PlaySound(DOOR09SND_25, 0.5f, MY_27);
            {
                var enumerator = MOVEDOOR(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator OPENDOOR03(IAcknexObject MY, IAcknexObject THERE)
        {
            var KEY2_1 = _world.GetObject(ObjectType.Skill, "KEY2");
            var KEY2_1_val = KEY2_1.GetFloat("VAL");
            if (KEY2_1_val == 1f)
            {
                goto CONT;
            }
            var MY_4 = MY;
            MY_4.SetFloat("DIST", 8f);
            var RESETDOOR_5 = _world.AcknexObject.GetAcknexObject("RESETDOOR");
            var MY_7 = MY;
            MY_7.SetAcknexObject("IF_FAR", RESETDOOR_5);
            var WRN07STR_8 = _world.AcknexObject.GetAcknexObject("WRN07STR");
            _world.SetSynonymObject("MESSAGE_TEXT", WRN07STR_8);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var DOOR08SND_10 = _world.AcknexObject.GetAcknexObject("DOOR08SND");
            var MY_12 = MY;
            _world.PlaySound(DOOR08SND_10, 0.5f, MY_12);
            yield break;
            CONT:
            var DOOR_TO_MOVE_14 = _world.GetSynonymObject("DOOR_TO_MOVE");
            if (DOOR_TO_MOVE_14 != null)
            {
                yield break;
            }
            var MY_17 = MY;
            MY_17.SetAcknexObject("IF_NEAR", null);
            var DOOR03RGN_18 = _world.AcknexObject.GetAcknexObject("DOOR03RGN");
            _world.SetSynonymObject("DOOR_TO_MOVE", DOOR03RGN_18);
            var DOORANGLE_21 = _world.GetObject(ObjectType.Skill, "DOORANGLE");
            DOORANGLE_21.SetFloat("VAL", 1.57f);
            var MY_24 = MY;
            MY_24.SetFloat("DIST", 8f);
            var DOOR09SND_25 = _world.AcknexObject.GetAcknexObject("DOOR09SND");
            var MY_27 = MY;
            _world.PlaySound(DOOR09SND_25, 0.5f, MY_27);
            {
                var enumerator = MOVEDOOR(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator OPENDOOR04(IAcknexObject MY, IAcknexObject THERE)
        {
            var KEY3_1 = _world.GetObject(ObjectType.Skill, "KEY3");
            var KEY3_1_val = KEY3_1.GetFloat("VAL");
            if (KEY3_1_val == 1f)
            {
                goto CONT;
            }
            var MY_4 = MY;
            MY_4.SetFloat("DIST", 8f);
            var RESETDOOR_5 = _world.AcknexObject.GetAcknexObject("RESETDOOR");
            var MY_7 = MY;
            MY_7.SetAcknexObject("IF_FAR", RESETDOOR_5);
            var WRN07STR_8 = _world.AcknexObject.GetAcknexObject("WRN07STR");
            _world.SetSynonymObject("MESSAGE_TEXT", WRN07STR_8);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var DOOR08SND_10 = _world.AcknexObject.GetAcknexObject("DOOR08SND");
            var MY_12 = MY;
            _world.PlaySound(DOOR08SND_10, 0.5f, MY_12);
            yield break;
            CONT:
            var DOOR_TO_MOVE_14 = _world.GetSynonymObject("DOOR_TO_MOVE");
            if (DOOR_TO_MOVE_14 != null)
            {
                yield break;
            }
            var MY_17 = MY;
            MY_17.SetAcknexObject("IF_NEAR", null);
            var DOOR04RGN_18 = _world.AcknexObject.GetAcknexObject("DOOR04RGN");
            _world.SetSynonymObject("DOOR_TO_MOVE", DOOR04RGN_18);
            var DOORANGLE_21 = _world.GetObject(ObjectType.Skill, "DOORANGLE");
            DOORANGLE_21.SetFloat("VAL", 3.14f);
            var MY_24 = MY;
            MY_24.SetFloat("DIST", 8f);
            var DOOR09SND_25 = _world.AcknexObject.GetAcknexObject("DOOR09SND");
            var MY_27 = MY;
            _world.PlaySound(DOOR09SND_25, 0.5f, MY_27);
            {
                var enumerator = MOVEDOOR(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator MOVEDOOR(IAcknexObject MY, IAcknexObject THERE)
        {
            var DOORSPEED_0 = _world.GetObject(ObjectType.Skill, "DOORSPEED");
            var DOORSPEED_1 = _world.GetObject(ObjectType.Skill, "DOORSPEED");
            var DOORSPEED_1_val = DOORSPEED_1.GetFloat("VAL");
            var DOORANGLE_2 = _world.GetObject(ObjectType.Skill, "DOORANGLE");
            var DOORANGLE_2_val = DOORANGLE_2.GetFloat("VAL");
            DOORSPEED_0.SetFloat("VAL", DOORANGLE_2_val / 20f);
            var DOORCOUNTER_6 = _world.GetObject(ObjectType.Skill, "DOORCOUNTER");
            DOORCOUNTER_6.SetFloat("VAL", 0f);
            var DOOR01SND_7 = _world.AcknexObject.GetAcknexObject("DOOR01SND");
            var MY_9 = MY;
            _world.PlaySound(DOOR01SND_7, 0.5f, MY_9);
            MOVE:
            var DOOR_TO_MOVE_10 = _world.GetSynonymObject("DOOR_TO_MOVE");
            var DOORSPEED_11 = _world.GetObject(ObjectType.Skill, "DOORSPEED");
            var DOORSPEED_11_val = DOORSPEED_11.GetFloat("VAL");
            _world.Rotate(DOOR_TO_MOVE_10, DOORSPEED_11_val);
            var DOORCOUNTER_13 = _world.GetObject(ObjectType.Skill, "DOORCOUNTER");
            var DOORCOUNTER_13_val = DOORCOUNTER_13.GetFloat("VAL");
            var DOORCOUNTER_14 = _world.GetObject(ObjectType.Skill, "DOORCOUNTER");
            DOORCOUNTER_14.SetFloat("VAL", DOORCOUNTER_13_val + 1f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var DOORCOUNTER_17 = _world.GetObject(ObjectType.Skill, "DOORCOUNTER");
            var DOORCOUNTER_17_val = DOORCOUNTER_17.GetFloat("VAL");
            if (DOORCOUNTER_17_val < 20f)
            {
                goto MOVE;
            }
            _world.SetSynonymObject("DOOR_TO_MOVE", null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SETMADMIB(IAcknexObject MY, IAcknexObject THERE)
        {
            var KEY1_1 = _world.GetObject(ObjectType.Skill, "KEY1");
            var KEY1_1_val = KEY1_1.GetFloat("VAL");
            if (KEY1_1_val == 1f)
            {
                yield break;
            }
            var TRAPWALLWALL_4 = _world.AcknexObject.GetAcknexObject("TRAPWALLWALL");
            TRAPWALLWALL_4.SetAcknexObjectAll("IF_NEAR", null);
            var MIBKBERKELEYACT_7 = _world.AcknexObject.GetAcknexObject("MIBKBERKELEYACT");
            MIBKBERKELEYACT_7.SetFloatAll("FLAG2", 1f);
            var MIBKACT_10 = _world.AcknexObject.GetAcknexObject("MIBKACT");
            MIBKACT_10.SetFloatAll("FLAG2", 1f);
            var WRN05STR_11 = _world.AcknexObject.GetAcknexObject("WRN05STR");
            _world.SetSynonymObject("MESSAGE_TEXT", WRN05STR_11);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator PLAYPASSSOUND(IAcknexObject MY, IAcknexObject THERE)
        {
            var PASSFLAG_1 = _world.GetObject(ObjectType.Skill, "PASSFLAG");
            var PASSFLAG_1_val = PASSFLAG_1.GetFloat("VAL");
            if (PASSFLAG_1_val < 0f)
            {
                goto NOWAY;
            }
            var PASSFLAG_3 = _world.GetObject(ObjectType.Skill, "PASSFLAG");
            var PASSFLAG_3_val = PASSFLAG_3.GetFloat("VAL");
            if (PASSFLAG_3_val == 0f)
            {
                goto NOPASS;
            }
            var BLANKSTR_4 = _world.AcknexObject.GetAcknexObject("BLANKSTR");
            _world.SetSynonymObject("MESSAGE_TEXT", BLANKSTR_4);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var CATR01SND_6 = _world.AcknexObject.GetAcknexObject("CATR01SND");
            var MY_8 = MY;
            _world.PlaySound(CATR01SND_6, 0.6f, MY_8);
            goto CONT;
            NOPASS:
            var WRN05STR_9 = _world.AcknexObject.GetAcknexObject("WRN05STR");
            _world.SetSynonymObject("MESSAGE_TEXT", WRN05STR_9);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var CATR02SND_11 = _world.AcknexObject.GetAcknexObject("CATR02SND");
            var MY_13 = MY;
            _world.PlaySound(CATR02SND_11, 0.6f, MY_13);
            goto CONT;
            NOWAY:
            var WRN06STR_14 = _world.AcknexObject.GetAcknexObject("WRN06STR");
            _world.SetSynonymObject("MESSAGE_TEXT", WRN06STR_14);
            {
                var enumerator = DISPLAYMESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var CATR02SND_16 = _world.AcknexObject.GetAcknexObject("CATR02SND");
            var MY_18 = MY;
            _world.PlaySound(CATR02SND_16, 0.6f, MY_18);
            CONT:
            var MY_21 = MY;
            MY_21.SetFloat("DIST", 4f);
            var RESETPASSSOUND_22 = _world.AcknexObject.GetAcknexObject("RESETPASSSOUND");
            var MY_24 = MY;
            MY_24.SetAcknexObject("IF_FAR", RESETPASSSOUND_22);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator RESETPASSSOUND(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject("IF_FAR", null);
            var MY_5 = MY;
            MY_5.SetFloat("DIST", 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator FREEPASS(IAcknexObject MY, IAcknexObject THERE)
        {
            var FENCEWALL_2 = _world.AcknexObject.GetAcknexObject("FENCEWALL");
            FENCEWALL_2.SetFloatAll("PASSABLE", 1f);
            var PASSFLAG_4 = _world.GetObject(ObjectType.Skill, "PASSFLAG");
            PASSFLAG_4.SetFloat("VAL", 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator LOCKPASS(IAcknexObject MY, IAcknexObject THERE)
        {
            var FENCEWALL_2 = _world.AcknexObject.GetAcknexObject("FENCEWALL");
            FENCEWALL_2.SetFloatAll("PASSABLE", 0f);
            var PASSFLAG_4 = _world.GetObject(ObjectType.Skill, "PASSFLAG");
            PASSFLAG_4.SetFloat("VAL", -1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator UNLOCKPASS(IAcknexObject MY, IAcknexObject THERE)
        {
            var PASSFLAG_1 = _world.GetObject(ObjectType.Skill, "PASSFLAG");
            PASSFLAG_1.SetFloat("VAL", 0f);
            var KEY1_3 = _world.GetObject(ObjectType.Skill, "KEY1");
            var KEY1_3_val = KEY1_3.GetFloat("VAL");
            if (KEY1_3_val != 1f)
            {
                yield break;
            }
            var FENCEWALL_6 = _world.AcknexObject.GetAcknexObject("FENCEWALL");
            FENCEWALL_6.SetFloatAll("PASSABLE", 1f);
            var PASSFLAG_8 = _world.GetObject(ObjectType.Skill, "PASSFLAG");
            PASSFLAG_8.SetFloat("VAL", 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator PLAYCALL(IAcknexObject MY, IAcknexObject THERE)
        {
            var HALLF1RGN_2 = _world.AcknexObject.GetAcknexObject("HALLF1RGN");
            HALLF1RGN_2.SetAcknexObjectAll("IF_ENTER", null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)160f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var SECALL01SND_4 = _world.AcknexObject.GetAcknexObject("SECALL01SND");
            _world.PlaySound(SECALL01SND_4, 0.5f, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator ENTERFINALROOM(IAcknexObject MY, IAcknexObject THERE)
        {
            var FINALROOMRGN_2 = _world.AcknexObject.GetAcknexObject("FINALROOMRGN");
            FINALROOMRGN_2.SetAcknexObjectAll("IF_ENTER", null);
            {
                var enumerator = SHOWPDABRIEFING(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator STARTLEVEL(IAcknexObject MY, IAcknexObject THERE)
        {
            var SCREEN_HGT_1 = _world.GetObject(ObjectType.Skill, "SCREEN_HGT");
            SCREEN_HGT_1.SetFloat("VAL", 358f);
            var SKY_OFFS_Y_3 = _world.GetObject(ObjectType.Skill, "SKY_OFFS_Y");
            SKY_OFFS_Y_3.SetFloat("VAL", 70f);
            var SOUND_VOL_BUFFER_4 = _world.GetObject(ObjectType.Skill, "SOUND_VOL_BUFFER");
            var SOUND_VOL_BUFFER_4_val = SOUND_VOL_BUFFER_4.GetFloat("VAL");
            var SOUND_VOL_5 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            SOUND_VOL_5.SetFloat("VAL", SOUND_VOL_BUFFER_4_val);
            var CDAUDIO_VOL_BUFFER_6 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL_BUFFER");
            var CDAUDIO_VOL_BUFFER_6_val = CDAUDIO_VOL_BUFFER_6.GetFloat("VAL");
            var CDAUDIO_VOL_7 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL");
            CDAUDIO_VOL_7.SetFloat("VAL", CDAUDIO_VOL_BUFFER_6_val);
            var MAP_SCALE_9 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
            MAP_SCALE_9.SetFloat("VAL", 5f);
            var MAP_ROT_11 = _world.GetObject(ObjectType.Skill, "MAP_ROT");
            MAP_ROT_11.SetFloat("VAL", 1f);
            var COLOR_PLAYER_13 = _world.GetObject(ObjectType.Skill, "COLOR_PLAYER");
            COLOR_PLAYER_13.SetFloat("VAL", 101f);
            var COLOR_ACTORS_15 = _world.GetObject(ObjectType.Skill, "COLOR_ACTORS");
            COLOR_ACTORS_15.SetFloat("VAL", 164f);
            var COLOR_THINGS_17 = _world.GetObject(ObjectType.Skill, "COLOR_THINGS");
            COLOR_THINGS_17.SetFloat("VAL", 176f);
            var COLOR_WALLS_19 = _world.GetObject(ObjectType.Skill, "COLOR_WALLS");
            COLOR_WALLS_19.SetFloat("VAL", 193f);
            var COLOR_BORDER_21 = _world.GetObject(ObjectType.Skill, "COLOR_BORDER");
            COLOR_BORDER_21.SetFloat("VAL", 195f);
            var PLAYER_LIGHT_23 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            PLAYER_LIGHT_23.SetFloat("VAL", 0.15f);
            var ACTOR_CLIMB_25 = _world.GetObject(ObjectType.Skill, "ACTOR_CLIMB");
            ACTOR_CLIMB_25.SetFloat("VAL", 1.5f);
            var MOTION_BLUR_27 = _world.GetObject(ObjectType.Skill, "MOTION_BLUR");
            MOTION_BLUR_27.SetFloat("VAL", 0f);
            var SECCOUNTER_29 = _world.GetObject(ObjectType.Skill, "SECCOUNTER");
            SECCOUNTER_29.SetFloat("VAL", 0f);
            var CONTROLMESSAGEDISPLAY_30 = _world.AcknexObject.GetAcknexObject("CONTROLMESSAGEDISPLAY");
            _world.AcknexObject.SetAcknexObject("EACH_SEC.2", CONTROLMESSAGEDISPLAY_30);
            var INFOPANEL_33 = _world.AcknexObject.GetAcknexObject("INFOPANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.15", INFOPANEL_33);
            var PNLMSKOVL_36 = _world.AcknexObject.GetAcknexObject("PNLMSKOVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.15", PNLMSKOVL_36);
            {
                var enumerator = SET_WALKING(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var AMMO_40 = _world.GetObject(ObjectType.Skill, "AMMO");
            AMMO_40.SetFloat("VAL", 0f);
            var KEY1_42 = _world.GetObject(ObjectType.Skill, "KEY1");
            KEY1_42.SetFloat("VAL", 2f);
            var KEY2_44 = _world.GetObject(ObjectType.Skill, "KEY2");
            KEY2_44.SetFloat("VAL", 2f);
            var KEY3_46 = _world.GetObject(ObjectType.Skill, "KEY3");
            KEY3_46.SetFloat("VAL", 2f);
            var KEY4_48 = _world.GetObject(ObjectType.Skill, "KEY4");
            KEY4_48.SetFloat("VAL", 2f);
            var END01STR_49 = _world.AcknexObject.GetAcknexObject("END01STR");
            _world.SetSynonymObject("GAMEOVER_TEXT", END01STR_49);
            var BRF04STR_51 = _world.AcknexObject.GetAcknexObject("BRF04STR");
            _world.SetSynonymObject("BRIEFING_TEXT", BRF04STR_51);
            var LOAD05STR_53 = _world.AcknexObject.GetAcknexObject("LOAD05STR");
            _world.SetSynonymObject("LOAD_STRING", LOAD05STR_53);
            var LEVEL05STR_55 = _world.AcknexObject.GetAcknexObject("LEVEL05STR");
            _world.SetSynonymObject("LEVEL_STRING", LEVEL05STR_55);
            var INNOCENTS_58 = _world.GetObject(ObjectType.Skill, "INNOCENTS");
            INNOCENTS_58.SetFloat("VAL", 0f);
            var UNDERWATER_60 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            UNDERWATER_60.SetFloat("VAL", 0f);
            var PLAYER_ARC_62 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            PLAYER_ARC_62.SetFloat("VAL", 1f);
            var CDTRACK_64 = _world.GetObject(ObjectType.Skill, "CDTRACK");
            CDTRACK_64.SetFloat("VAL", 5f);
            var CDTRACKTIME_66 = _world.GetObject(ObjectType.Skill, "CDTRACKTIME");
            CDTRACKTIME_66.SetFloat("VAL", 300f);
            var PLAYER_HIT_68 = _world.GetObject(ObjectType.Skill, "PLAYER_HIT");
            PLAYER_HIT_68.SetFloat("VAL", 0f);
            var GUN_ON_70 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_70.SetFloat("VAL", 0f);
            var SHOT_SOUND_ON_72 = _world.GetObject(ObjectType.Skill, "SHOT_SOUND_ON");
            SHOT_SOUND_ON_72.SetFloat("VAL", 0f);
            var EXPLOSION_ON_74 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            EXPLOSION_ON_74.SetFloat("VAL", 0f);
            {
                var enumerator = FADEIN(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator FADEIN(IAcknexObject MY, IAcknexObject THERE)
        {
            var BLACK_0 = _world.AcknexObject.GetAcknexObject("BLACK");
            _world.FadePal(BLACK_0, 2f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)8f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_3 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_3, 0.05f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_6 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_6, 0.1f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_9 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_9, 0.15f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_12 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_12, 0.2f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_15 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_15, 0.25f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_18 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_18, 0.3f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_21 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_21, 0.35f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_24 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_24, 0.4f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_27 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_27, 0.45f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_30 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_30, 0.5f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_33 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_33, 0.55f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_36 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_36, 0.6f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_39 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_39, 0.65f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_42 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_42, 0.7f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_45 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_45, 0.75f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_48 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_48, 0.8f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_51 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_51, 0.85f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_54 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_54, 0.9f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_57 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_57, 0.95f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_60 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_60, 2f);
            var REPEATMUSIC_62 = _world.AcknexObject.GetAcknexObject("REPEATMUSIC");
            _world.AcknexObject.SetAcknexObject("EACH_SEC.1", REPEATMUSIC_62);
            //Unknown keyword: 
            yield break;
        }
    }
}
