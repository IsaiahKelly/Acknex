﻿
using System;
using Acknex.Interfaces;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;
using PropertyName = Acknex.Interfaces.PropertyName;
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
            reset:
            if (name != null)
            {
                if (_callbacks.TryGetValue(name, out var callback))
                {
                    var enumerator = callback(MY, THERE);
                    var next = true;
                    while (next)
                    {
                        try
                        {
                            enumerator.MoveNext();
                        }
                        catch (Exception e)
                        {
                            Debug.LogError("ACK Runtime Error:" + e + "(" + Environment.StackTrace + ")");
                            goto reset;
                        }
                        if (next)
                        {
                            yield return enumerator.Current;
                        }
                    }
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
            _callbacks.Add("PICKUPLOCALMP5", PICKUPLOCALMP5);
            _callbacks.Add("ENDPHASE", ENDPHASE);
            _callbacks.Add("DRKLTURN", DRKLTURN);
            _callbacks.Add("DRKLWAIT", DRKLWAIT);
            _callbacks.Add("DRKLWANDER", DRKLWANDER);
            _callbacks.Add("DRKLSEARCH", DRKLSEARCH);
            _callbacks.Add("DRKLHIDE", DRKLHIDE);
            _callbacks.Add("DRKLLISTEN", DRKLLISTEN);
            _callbacks.Add("DRKLJUMP", DRKLJUMP);
            _callbacks.Add("DRKLLOOKFOR", DRKLLOOKFOR);
            _callbacks.Add("DRKLHEAR", DRKLHEAR);
            _callbacks.Add("DRKLDOWN", DRKLDOWN);
            _callbacks.Add("DRKLFOLLOWATTACK", DRKLFOLLOWATTACK);
            _callbacks.Add("DRKLSHOOT", DRKLSHOOT);
            _callbacks.Add("DRKLESCAPE", DRKLESCAPE);
            _callbacks.Add("DRKLDEAD", DRKLDEAD);
            _callbacks.Add("DRKLDIE", DRKLDIE);
            _callbacks.Add("DRKLIMPLODE", DRKLIMPLODE);
            _callbacks.Add("DRKLHIT", DRKLHIT);
            _callbacks.Add("CYCLEDRKLATTACK", CYCLEDRKLATTACK);
            _callbacks.Add("CYCLEDRKLHIDE", CYCLEDRKLHIDE);
            _callbacks.Add("CYCLEDRKLSHOOT", CYCLEDRKLSHOOT);
            _callbacks.Add("DRKLTALK", DRKLTALK);
            _callbacks.Add("TROPTURN", TROPTURN);
            _callbacks.Add("TROPBACKOFF", TROPBACKOFF);
            _callbacks.Add("TROPWAIT", TROPWAIT);
            _callbacks.Add("TROPWANDER", TROPWANDER);
            _callbacks.Add("TROPSEARCH", TROPSEARCH);
            _callbacks.Add("TROPHIDE", TROPHIDE);
            _callbacks.Add("TROPLISTEN", TROPLISTEN);
            _callbacks.Add("TROPWARNING", TROPWARNING);
            _callbacks.Add("TROPLOOKFOR", TROPLOOKFOR);
            _callbacks.Add("TROPFOLLOW", TROPFOLLOW);
            _callbacks.Add("TROPFOLLOWATTACK", TROPFOLLOWATTACK);
            _callbacks.Add("TROPFOLLOWWARNING", TROPFOLLOWWARNING);
            _callbacks.Add("TROPAIM", TROPAIM);
            _callbacks.Add("TROPSHOOT", TROPSHOOT);
            _callbacks.Add("TROPESCAPE", TROPESCAPE);
            _callbacks.Add("TROPDEAD", TROPDEAD);
            _callbacks.Add("TROPDIE", TROPDIE);
            _callbacks.Add("TROPIMPLODE", TROPIMPLODE);
            _callbacks.Add("TROPHIT", TROPHIT);
            _callbacks.Add("TROPDROPKEY", TROPDROPKEY);
            _callbacks.Add("CYCLETROPATTACK", CYCLETROPATTACK);
            _callbacks.Add("CYCLETROPHIDE", CYCLETROPHIDE);
            _callbacks.Add("CYCLETROPBACK", CYCLETROPBACK);
            _callbacks.Add("CYCLETROPSHOOT", CYCLETROPSHOOT);
            _callbacks.Add("CYCLETROPWARNING", CYCLETROPWARNING);
            _callbacks.Add("TROPTALK", TROPTALK);
            _callbacks.Add("TROPSHOUT", TROPSHOUT);
            _callbacks.Add("PICKTROPAMMO", PICKTROPAMMO);
            _callbacks.Add("PICKTROPARMOUR", PICKTROPARMOUR);
            _callbacks.Add("HUMMERHIT", HUMMERHIT);
            _callbacks.Add("LNCHTURN", LNCHTURN);
            _callbacks.Add("LNCHBACKOFF", LNCHBACKOFF);
            _callbacks.Add("LNCHWAIT", LNCHWAIT);
            _callbacks.Add("LNCHWANDER", LNCHWANDER);
            _callbacks.Add("LNCHSEARCH", LNCHSEARCH);
            _callbacks.Add("LNCHHIDE", LNCHHIDE);
            _callbacks.Add("LNCHLISTEN", LNCHLISTEN);
            _callbacks.Add("LNCHLOOKFOR", LNCHLOOKFOR);
            _callbacks.Add("LNCHFOLLOW", LNCHFOLLOW);
            _callbacks.Add("LNCHFOLLOWATTACK", LNCHFOLLOWATTACK);
            _callbacks.Add("LNCHAIM", LNCHAIM);
            _callbacks.Add("LNCHSHOOT", LNCHSHOOT);
            _callbacks.Add("LNCHESCAPE", LNCHESCAPE);
            _callbacks.Add("LNCHDEAD", LNCHDEAD);
            _callbacks.Add("LNCHDIE", LNCHDIE);
            _callbacks.Add("LNCHIMPLODE", LNCHIMPLODE);
            _callbacks.Add("LNCHHIT", LNCHHIT);
            _callbacks.Add("LNCHDROPKEY", LNCHDROPKEY);
            _callbacks.Add("CYCLELNCHATTACK", CYCLELNCHATTACK);
            _callbacks.Add("CYCLELNCHHIDE", CYCLELNCHHIDE);
            _callbacks.Add("CYCLELNCHBACK", CYCLELNCHBACK);
            _callbacks.Add("CYCLELNCHSHOOT", CYCLELNCHSHOOT);
            _callbacks.Add("LNCHTALK", LNCHTALK);
            _callbacks.Add("LNCHSHOUT", LNCHSHOUT);
            _callbacks.Add("REPTTURN", REPTTURN);
            _callbacks.Add("REPTWAIT", REPTWAIT);
            _callbacks.Add("REPTWANDER", REPTWANDER);
            _callbacks.Add("REPTSEARCH", REPTSEARCH);
            _callbacks.Add("REPTHIDE", REPTHIDE);
            _callbacks.Add("REPTLISTEN", REPTLISTEN);
            _callbacks.Add("REPTJUMP", REPTJUMP);
            _callbacks.Add("REPTLOOKFOR", REPTLOOKFOR);
            _callbacks.Add("REPTHEAR", REPTHEAR);
            _callbacks.Add("REPTDOWN", REPTDOWN);
            _callbacks.Add("REPTFOLLOWATTACK", REPTFOLLOWATTACK);
            _callbacks.Add("REPTSHOOT", REPTSHOOT);
            _callbacks.Add("REPTESCAPE", REPTESCAPE);
            _callbacks.Add("REPTDEAD", REPTDEAD);
            _callbacks.Add("REPTDIE", REPTDIE);
            _callbacks.Add("REPTIMPLODE", REPTIMPLODE);
            _callbacks.Add("REPTHIT", REPTHIT);
            _callbacks.Add("CYCLEREPTATTACK", CYCLEREPTATTACK);
            _callbacks.Add("CYCLEREPTHIDE", CYCLEREPTHIDE);
            _callbacks.Add("CYCLEREPTSHOOT", CYCLEREPTSHOOT);
            _callbacks.Add("REPTTALK", REPTTALK);
            _callbacks.Add("NURSTURN", NURSTURN);
            _callbacks.Add("NURSWAIT", NURSWAIT);
            _callbacks.Add("NURSWANDER", NURSWANDER);
            _callbacks.Add("NURSHIDE", NURSHIDE);
            _callbacks.Add("NURSDEAD", NURSDEAD);
            _callbacks.Add("NURSDIE", NURSDIE);
            _callbacks.Add("NURSIMPLODE", NURSIMPLODE);
            _callbacks.Add("NURSHIT", NURSHIT);
            _callbacks.Add("NURSCYCLE", NURSCYCLE);
            _callbacks.Add("NURSSCREAM", NURSSCREAM);
            _callbacks.Add("NURSTALK", NURSTALK);
            _callbacks.Add("DOCTTURN", DOCTTURN);
            _callbacks.Add("DOCTWAIT", DOCTWAIT);
            _callbacks.Add("DOCTWANDER", DOCTWANDER);
            _callbacks.Add("DOCTHIDE", DOCTHIDE);
            _callbacks.Add("DOCTDEAD", DOCTDEAD);
            _callbacks.Add("DOCTDIE", DOCTDIE);
            _callbacks.Add("DOCTIMPLODE", DOCTIMPLODE);
            _callbacks.Add("DOCTHIT", DOCTHIT);
            _callbacks.Add("DOCTCYCLE", DOCTCYCLE);
            _callbacks.Add("DOCTSCREAM", DOCTSCREAM);
            _callbacks.Add("DOCTTALK", DOCTTALK);
            _callbacks.Add("SETFORCE1", SETFORCE1);
            _callbacks.Add("TROPASSAULT", TROPASSAULT);
            _callbacks.Add("WAYGUARD2", WAYGUARD2);
            _callbacks.Add("DROPTROOPS2", DROPTROOPS2);
            _callbacks.Add("WARNPLAYER", WARNPLAYER);
            _callbacks.Add("RESETWARN", RESETWARN);
            _callbacks.Add("SELECTOR", SELECTOR);
            _callbacks.Add("RESETTOUCH", RESETTOUCH);
            _callbacks.Add("SETTOUCH1", SETTOUCH1);
            _callbacks.Add("SETTOUCH2", SETTOUCH2);
            _callbacks.Add("SETTOUCH4", SETTOUCH4);
            _callbacks.Add("SETTOUCH5", SETTOUCH5);
            _callbacks.Add("SETTOUCH6", SETTOUCH6);
            _callbacks.Add("SETTOUCH7", SETTOUCH7);
            _callbacks.Add("SETTOUCH8", SETTOUCH8);
            _callbacks.Add("OPENDOOR1", OPENDOOR1);
            _callbacks.Add("OPENDOOR2", OPENDOOR2);
            _callbacks.Add("OPENHATCH", OPENHATCH);
            _callbacks.Add("OPENHATCHA", OPENHATCHA);
            _callbacks.Add("OPENHATCHB", OPENHATCHB);
            _callbacks.Add("OPENMJ3", OPENMJ3);
            _callbacks.Add("OPENBLASTDOOR", OPENBLASTDOOR);
            _callbacks.Add("NOTOPEN", NOTOPEN);
            _callbacks.Add("DEFENSE1", DEFENSE1);
            _callbacks.Add("STARTLEVEL", STARTLEVEL);
            _callbacks.Add("LAUNCHMISSILES", LAUNCHMISSILES);
            _callbacks.Add("STARTASSAULT", STARTASSAULT);
            _callbacks.Add("FADEIN", FADEIN);
        }
        public IEnumerator DISPLAYMESSAGE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MESSAGE_TEXT_0 = _world.GetSynonymObject(361798934);
            var PANELTEXT_2 = _world.AcknexObject.GetAcknexObject(1886906754);
            var PANELTEXT_2_array = PANELTEXT_2.GetObject<List<IAcknexObject>>(293);
            var PANELTEXT_2_index = PANELTEXT_2.GetInteger(PropertyName.INDEX);
            PANELTEXT_2_array[PANELTEXT_2_index - 1] = MESSAGE_TEXT_0;
            PANELTEXT_2.IsDirty = true;
            var PANELTEXT_3 = _world.AcknexObject.GetAcknexObject(1886906754);
            _world.AcknexObject.SetAcknexObject(127, PANELTEXT_3);
            var MSGSECCOUNT_7 = _world.GetObject(ObjectType.Skill, 2688150552);
            MSGSECCOUNT_7.SetFloat(231, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CONTROLMESSAGEDISPLAY(IAcknexObject MY, IAcknexObject THERE)
        {
            //Unknown keyword: LOCATE
            var GODCOUNTER_1 = _world.GetObject(ObjectType.Skill, 3966981511);
            var GODCOUNTER_1_val = GODCOUNTER_1.GetFloat(PropertyName.VAL);
            if (GODCOUNTER_1_val < 0f)
            {
                goto WATER;
            }
            var GODCOUNTER_3 = _world.GetObject(ObjectType.Skill, 3966981511);
            var GODCOUNTER_3_val = GODCOUNTER_3.GetFloat(PropertyName.VAL);
            if (GODCOUNTER_3_val > 0f)
            {
                goto DECGOD;
            }
            _world.AcknexObject.SetAcknexObject(50, null);
            _world.AcknexObject.SetAcknexObject(54, null);
            _world.AcknexObject.SetAcknexObject(62, null);
            _world.AcknexObject.SetAcknexObject(51, null);
            DECGOD:
            var GODCOUNTER_13 = _world.GetObject(ObjectType.Skill, 3966981511);
            var GODCOUNTER_13_val = GODCOUNTER_13.GetFloat(PropertyName.VAL);
            var GODCOUNTER_14 = _world.GetObject(ObjectType.Skill, 3966981511);
            GODCOUNTER_14.SetFloat(231, GODCOUNTER_13_val + -1f);
            WATER:
            var UNDERWATER_16 = _world.GetObject(ObjectType.Skill, 1369167822);
            var UNDERWATER_16_val = UNDERWATER_16.GetFloat(PropertyName.VAL);
            if (UNDERWATER_16_val == 0f)
            {
                goto CONT;
            }
            var HERE_19 = _world.GetSynonymObject(703);
            var temp_20 = HERE_19?.GetAcknexObject(234);
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
            var SHOTSECCOUNT_22 = _world.GetObject(ObjectType.Skill, 733093231);
            var SHOTSECCOUNT_22_val = SHOTSECCOUNT_22.GetFloat(PropertyName.VAL);
            if (SHOTSECCOUNT_22_val < 0f)
            {
                goto MESSAGE;
            }
            var SHOTSECCOUNT_24 = _world.GetObject(ObjectType.Skill, 733093231);
            var SHOTSECCOUNT_24_val = SHOTSECCOUNT_24.GetFloat(PropertyName.VAL);
            var SHOTSECCOUNT_25 = _world.GetObject(ObjectType.Skill, 733093231);
            SHOTSECCOUNT_25.SetFloat(231, SHOTSECCOUNT_24_val + 1f);
            var SHOTSECCOUNT_27 = _world.GetObject(ObjectType.Skill, 733093231);
            var SHOTSECCOUNT_27_val = SHOTSECCOUNT_27.GetFloat(PropertyName.VAL);
            if (SHOTSECCOUNT_27_val < 10f)
            {
                goto MESSAGE;
            }
            var SHOT_SOUND_ON_29 = _world.GetObject(ObjectType.Skill, 3372273679);
            SHOT_SOUND_ON_29.SetFloat(231, 0f);
            var SHOTSECCOUNT_31 = _world.GetObject(ObjectType.Skill, 733093231);
            SHOTSECCOUNT_31.SetFloat(231, -1f);
            MESSAGE:
            var MSGSECCOUNT_33 = _world.GetObject(ObjectType.Skill, 2688150552);
            var MSGSECCOUNT_33_val = MSGSECCOUNT_33.GetFloat(PropertyName.VAL);
            if (MSGSECCOUNT_33_val < 0f)
            {
                yield break;
            }
            var MSGSECCOUNT_35 = _world.GetObject(ObjectType.Skill, 2688150552);
            var MSGSECCOUNT_35_val = MSGSECCOUNT_35.GetFloat(PropertyName.VAL);
            var MSGSECCOUNT_36 = _world.GetObject(ObjectType.Skill, 2688150552);
            MSGSECCOUNT_36.SetFloat(231, MSGSECCOUNT_35_val + 1f);
            var MSGSECCOUNT_38 = _world.GetObject(ObjectType.Skill, 2688150552);
            var MSGSECCOUNT_38_val = MSGSECCOUNT_38.GetFloat(PropertyName.VAL);
            if (MSGSECCOUNT_38_val < 10f)
            {
                yield break;
            }
            var MOVE_MODE_40 = _world.GetObject(ObjectType.Skill, 362);
            var MOVE_MODE_40_val = MOVE_MODE_40.GetFloat(PropertyName.VAL);
            if (MOVE_MODE_40_val > 0f)
            {
                goto CONTCOUNTER;
            }
            var MSGSECCOUNT_42 = _world.GetObject(ObjectType.Skill, 2688150552);
            MSGSECCOUNT_42.SetFloat(231, 10f);
            yield break;
            CONTCOUNTER:
            var BLANKSTR_43 = _world.AcknexObject.GetAcknexObject(3695414798);
            var PANELTEXT_45 = _world.AcknexObject.GetAcknexObject(1886906754);
            IAcknexObject temp_46;
            var temp_46_array = PANELTEXT_45?.GetObject<List<IAcknexObject>>(293);
            if (temp_46_array == null || temp_46_array.Count == 0)
            {
                temp_46 = null;
            }
            else
            {
                var temp_46_index = PANELTEXT_45.GetInteger(PropertyName.INDEX);
                temp_46 = temp_46_array[temp_46_index - 1];
            }
            if (temp_46 == BLANKSTR_43)
            {
                goto NULLMESSAGE;
            }
            var BLANKSTR_47 = _world.AcknexObject.GetAcknexObject(3695414798);
            var PANELTEXT_49 = _world.AcknexObject.GetAcknexObject(1886906754);
            var PANELTEXT_49_array = PANELTEXT_49.GetObject<List<IAcknexObject>>(293);
            var PANELTEXT_49_index = PANELTEXT_49.GetInteger(PropertyName.INDEX);
            PANELTEXT_49_array[PANELTEXT_49_index - 1] = BLANKSTR_47;
            PANELTEXT_49.IsDirty = true;
            var PANELTEXT_50 = _world.AcknexObject.GetAcknexObject(1886906754);
            _world.AcknexObject.SetAcknexObject(127, PANELTEXT_50);
            yield break;
            NULLMESSAGE:
            _world.AcknexObject.SetAcknexObject(127, null);
            var MSGSECCOUNT_57 = _world.GetObject(ObjectType.Skill, 2688150552);
            MSGSECCOUNT_57.SetFloat(231, -1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CONTROLUNDERWATERTIME(IAcknexObject MY, IAcknexObject THERE)
        {
            var UNDERWATER_1 = _world.GetObject(ObjectType.Skill, 1369167822);
            var UNDERWATER_1_val = UNDERWATER_1.GetFloat(PropertyName.VAL);
            if (UNDERWATER_1_val > 0f)
            {
                goto GLUBGLUB;
            }
            var UNDERWATERSECCOUNT_3 = _world.GetObject(ObjectType.Skill, 4018771090);
            UNDERWATERSECCOUNT_3.SetFloat(231, -1f);
            yield break;
            GLUBGLUB:
            var UNDERWATERSECCOUNT_5 = _world.GetObject(ObjectType.Skill, 4018771090);
            var UNDERWATERSECCOUNT_5_val = UNDERWATERSECCOUNT_5.GetFloat(PropertyName.VAL);
            var UNDERWATERSECCOUNT_6 = _world.GetObject(ObjectType.Skill, 4018771090);
            UNDERWATERSECCOUNT_6.SetFloat(231, UNDERWATERSECCOUNT_5_val + 1f);
            var UNDERWATERSECCOUNT_8 = _world.GetObject(ObjectType.Skill, 4018771090);
            var UNDERWATERSECCOUNT_8_val = UNDERWATERSECCOUNT_8.GetFloat(PropertyName.VAL);
            if (UNDERWATERSECCOUNT_8_val < 20f)
            {
                yield break;
            }
            var PLAYER_RESULT_10 = _world.GetObject(ObjectType.Skill, 1861765784);
            PLAYER_RESULT_10.SetFloat(231, 2f);
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
            MY_2.SetFloat(168, 0f);
            var MY_5 = MY;
            MY_5.SetFloat(207, 0f);
            var MY_8 = MY;
            MY_8.SetFloat(173, 10f);
            var MY_11 = MY;
            MY_11.SetAcknexObject(189, null);
            var MY_14 = MY;
            MY_14.SetFloat(204, 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator VANISHFORGOOD(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat(168, 0f);
            var MY_5 = MY;
            MY_5.SetFloat(207, 0f);
            var MY_8 = MY;
            MY_8.SetFloat(173, 10f);
            var VANISHSTOP_9 = _world.AcknexObject.GetAcknexObject(3676276956);
            var MY_11 = MY;
            MY_11.SetAcknexObject(189, VANISHSTOP_9);
            var NULLTEXTURE_12 = _world.AcknexObject.GetAcknexObject(2267006969);
            var MY_14 = MY;
            MY_14.SetAcknexObject(164, NULLTEXTURE_12);
            var MY_17 = MY;
            MY_17.SetFloat(204, 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator LOCATEACTOR(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(213);
            if (temp_3 == 0f)
            {
                goto CONT;
            }
            //Unknown keyword: LOCATE
            yield break;
            CONT:
            var MY_6 = MY;
            MY_6.SetFloat(165, 0f);
            var MY_9 = MY;
            MY_9.SetFloat(213, 1f);
            //Unknown keyword: LOCATE
            var MY_12 = MY;
            MY_12.SetFloat(213, 0f);
            var MY_15 = MY;
            MY_15.SetFloat(165, -0.05f);
            WATER:
            var MY_17 = MY;
            var temp_18 = MY_17?.GetAcknexObject(198);
            _world.SetSynonymObject(2468751347, temp_18);
            var WATER_REGION_22 = _world.GetSynonymObject(2468751347);
            var temp_23 = WATER_REGION_22?.GetAcknexObject(242);
            if (temp_23 == null)
            {
                yield break;
            }
            var MY_26 = MY;
            MY_26.SetFloat(165, -2.5f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator LOOKPLAYER(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(202);
            if (temp_3 > 200f)
            {
                goto NOTVISIBLE;
            }
            var DISTZ_4 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_5 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_5_val = DISTZ_5.GetFloat(PropertyName.VAL);
            var FLOOR_HGT_6 = _world.GetObject(ObjectType.Skill, 567);
            var FLOOR_HGT_6_val = FLOOR_HGT_6.GetFloat(PropertyName.VAL);
            var MY_9 = MY;
            var temp_10 = MY_9.GetFloat(200);
            DISTZ_4.SetFloat(231, FLOOR_HGT_6_val - temp_10);
            var DISTZ_12 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_12_val = DISTZ_12.GetFloat(PropertyName.VAL);
            if (DISTZ_12_val < -6f)
            {
                goto MAYBEVISIBLE;
            }
            var DISTZ_14 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_14_val = DISTZ_14.GetFloat(PropertyName.VAL);
            if (DISTZ_14_val > 6f)
            {
                goto MAYBEVISIBLE;
            }
            var SHOOT_SECTOR_16 = _world.GetObject(ObjectType.Skill, 440);
            SHOOT_SECTOR_16.SetFloat(231, 4f);
            var MY_19 = MY;
            var temp_20 = MY_19.GetFloat(202);
            if (temp_20 < 20f)
            {
                var SHOOT_SECTOR_22 = _world.GetObject(ObjectType.Skill, 440);
                SHOOT_SECTOR_22.SetFloat(231, 6.28f);
            }
            var SHOOT_RANGE_24 = _world.GetObject(ObjectType.Skill, 439);
            SHOOT_RANGE_24.SetFloat(231, 200f);
            var SHOOT_Y_26 = _world.GetObject(ObjectType.Skill, 443);
            SHOOT_Y_26.SetFloat(231, 0f);
            var MY_27 = MY;
            _world.Shoot(MY_27, MY, THERE);
            var HIT_DIST_29 = _world.GetObject(ObjectType.Skill, 444);
            var HIT_DIST_29_val = HIT_DIST_29.GetFloat(PropertyName.VAL);
            if (HIT_DIST_29_val == 0f)
            {
                goto NOTVISIBLE;
            }
            ISVISIBLE:
            var MY_32 = MY;
            MY_32.SetFloat(181, 1f);
            yield break;
            MAYBEVISIBLE:
            var MY_35 = MY;
            var temp_36 = MY_35.GetFloat(205);
            if (temp_36 == 1f)
            {
                goto ISVISIBLE;
            }
            NOTVISIBLE:
            var MY_39 = MY;
            MY_39.SetFloat(181, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator PROBE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(168);
            if (temp_3 < 0.05f)
            {
                yield break;
            }
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat(213);
            if (temp_7 == 0f)
            {
                goto CONT;
            }
            //Unknown keyword: LOCATE
            yield break;
            CONT:
            var MY_10 = MY;
            MY_10.SetFloat(165, -0.05f);
            WATER:
            var MY_12 = MY;
            var temp_13 = MY_12?.GetAcknexObject(198);
            _world.SetSynonymObject(2468751347, temp_13);
            var WATER_REGION_17 = _world.GetSynonymObject(2468751347);
            var temp_18 = WATER_REGION_17?.GetAcknexObject(242);
            if (temp_18 == null)
            {
                goto PROBELOOP;
            }
            var MY_21 = MY;
            MY_21.SetFloat(165, -2.5f);
            PROBELOOP:
            var WATER_REGION_24 = _world.GetSynonymObject(2468751347);
            var temp_25 = WATER_REGION_24.GetFloat(182);
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
            var WATER_REGION_28 = _world.GetSynonymObject(2468751347);
            var temp_29 = WATER_REGION_28.GetFloat(181);
            if (temp_29 < 1f)
            {
                yield break;
            }
            var STEPCOUNTER_31 = _world.GetObject(ObjectType.Skill, 2583753065);
            STEPCOUNTER_31.SetFloat(231, 0f);
            var MY_33 = MY;
            var temp_34 = MY_33.GetFloat(194);
            var ANGLEOUT_35 = _world.GetObject(ObjectType.Skill, 2546833996);
            ANGLEOUT_35.SetFloat(231, temp_34);
            PROBEAGAIN:
            var ANGLEOUT_36 = _world.GetObject(ObjectType.Skill, 2546833996);
            var ANGLEOUT_36_val = ANGLEOUT_36.GetFloat(PropertyName.VAL);
            var DISTY_37 = _world.GetObject(ObjectType.Skill, 217512506);
            DISTY_37.SetFloat(231, MathUtils.Sin(ANGLEOUT_36_val));
            var DISTX_38 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_39 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_39_val = DISTX_39.GetFloat(PropertyName.VAL);
            var ANGLEOUT_40 = _world.GetObject(ObjectType.Skill, 2546833996);
            var ANGLEOUT_40_val = ANGLEOUT_40.GetFloat(PropertyName.VAL);
            var HALF_PI_42 = _world.GetObject(ObjectType.Skill, 576);
            var HALF_PI_42_val = HALF_PI_42.GetFloat(PropertyName.VAL);
            DISTX_38.SetFloat(231, ANGLEOUT_40_val + HALF_PI_42_val);
            var DISTX_43 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_43_val = DISTX_43.GetFloat(PropertyName.VAL);
            var DISTX_44 = _world.GetObject(ObjectType.Skill, 217512505);
            DISTX_44.SetFloat(231, MathUtils.Sin(DISTX_43_val));
            var PROBETNG_46 = _world.AcknexObject.GetAcknexObject(3045485262);
            var PROBETNG_48 = _world.AcknexObject.GetAcknexObject(3045485262);
            var temp_49 = PROBETNG_48.GetFloat(195);
            var MY_51 = MY;
            var temp_52 = MY_51.GetFloat(195);
            var DISTX_54 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_54_val = DISTX_54.GetFloat(PropertyName.VAL);
            PROBETNG_46.SetFloat(195, temp_52 + DISTX_54_val * 12f);
            var PROBETNG_58 = _world.AcknexObject.GetAcknexObject(3045485262);
            var PROBETNG_60 = _world.AcknexObject.GetAcknexObject(3045485262);
            var temp_61 = PROBETNG_60.GetFloat(196);
            var MY_63 = MY;
            var temp_64 = MY_63.GetFloat(196);
            var DISTY_66 = _world.GetObject(ObjectType.Skill, 217512506);
            var DISTY_66_val = DISTY_66.GetFloat(PropertyName.VAL);
            PROBETNG_58.SetFloat(196, temp_64 + DISTY_66_val * 12f);
            var PROBETNG_71 = _world.AcknexObject.GetAcknexObject(3045485262);
            PROBETNG_71.SetFloat(213, 1f);
            var WATER_REGION_73 = _world.GetSynonymObject(2468751347);
            var temp_74 = WATER_REGION_73.GetFloat(200);
            var PROBETNG_76 = _world.AcknexObject.GetAcknexObject(3045485262);
            PROBETNG_76.SetFloat(165, temp_74);
            //Unknown keyword: LOCATE
            var PROBETNG_79 = _world.AcknexObject.GetAcknexObject(3045485262);
            PROBETNG_79.SetFloat(213, 0f);
            var PROBETNG_81 = _world.AcknexObject.GetAcknexObject(3045485262);
            var temp_82 = PROBETNG_81?.GetAcknexObject(198);
            _world.SetSynonymObject(2775723552, temp_82);
            var DISTZ_84 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_85 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_85_val = DISTZ_85.GetFloat(PropertyName.VAL);
            var P_REGION_87 = _world.GetSynonymObject(2775723552);
            var temp_88 = P_REGION_87.GetFloat(200);
            var WATER_REGION_91 = _world.GetSynonymObject(2468751347);
            var temp_92 = WATER_REGION_91.GetFloat(200);
            DISTZ_84.SetFloat(231, temp_88 - temp_92);
            var DISTZ_94 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_94_val = DISTZ_94.GetFloat(PropertyName.VAL);
            if (DISTZ_94_val > -1f)
            {
                goto END;
            }
            var STEPCOUNTER_96 = _world.GetObject(ObjectType.Skill, 2583753065);
            var STEPCOUNTER_96_val = STEPCOUNTER_96.GetFloat(PropertyName.VAL);
            if (STEPCOUNTER_96_val > 11f)
            {
                goto END;
            }
            var ANGLESTEP_97 = _world.GetObject(ObjectType.Skill, 2441253488);
            var ANGLESTEP_98 = _world.GetObject(ObjectType.Skill, 2441253488);
            var ANGLESTEP_98_val = ANGLESTEP_98.GetFloat(PropertyName.VAL);
            var ANGLESTEP_100 = _world.GetObject(ObjectType.Skill, 2441253488);
            var ANGLESTEP_100_val = ANGLESTEP_100.GetFloat(PropertyName.VAL);
            ANGLESTEP_97.SetFloat(231, -ANGLESTEP_100_val);
            var ANGLESTEP_102 = _world.GetObject(ObjectType.Skill, 2441253488);
            var ANGLESTEP_102_val = ANGLESTEP_102.GetFloat(PropertyName.VAL);
            if (ANGLESTEP_102_val < 0f)
            {
                var STEPCOUNTER_104 = _world.GetObject(ObjectType.Skill, 2583753065);
                var STEPCOUNTER_104_val = STEPCOUNTER_104.GetFloat(PropertyName.VAL);
                var STEPCOUNTER_105 = _world.GetObject(ObjectType.Skill, 2583753065);
                STEPCOUNTER_105.SetFloat(231, STEPCOUNTER_104_val + 1f);
            }
            var ANGLEOUT_106 = _world.GetObject(ObjectType.Skill, 2546833996);
            var ANGLEOUT_107 = _world.GetObject(ObjectType.Skill, 2546833996);
            var ANGLEOUT_107_val = ANGLEOUT_107.GetFloat(PropertyName.VAL);
            var MY_109 = MY;
            var temp_110 = MY_109.GetFloat(194);
            var STEPCOUNTER_112 = _world.GetObject(ObjectType.Skill, 2583753065);
            var STEPCOUNTER_112_val = STEPCOUNTER_112.GetFloat(PropertyName.VAL);
            var ANGLESTEP_114 = _world.GetObject(ObjectType.Skill, 2441253488);
            var ANGLESTEP_114_val = ANGLESTEP_114.GetFloat(PropertyName.VAL);
            ANGLEOUT_106.SetFloat(231, temp_110 + STEPCOUNTER_112_val * ANGLESTEP_114_val);
            goto PROBEAGAIN;
            END:
            var BULLET_115 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_117 = MY;
            MY_117.SetAcknexObject(199, BULLET_115);
            var ANGLEOUT_118 = _world.GetObject(ObjectType.Skill, 2546833996);
            var ANGLEOUT_118_val = ANGLEOUT_118.GetFloat(PropertyName.VAL);
            var MY_120 = MY;
            MY_120.SetFloat(194, ANGLEOUT_118_val);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator FOLLOWANGLE(IAcknexObject MY, IAcknexObject THERE)
        {
            var DISTZ_0 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_1 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_1_val = DISTZ_1.GetFloat(PropertyName.VAL);
            var PLAYER_X_3 = _world.GetObject(ObjectType.Skill, 459);
            var PLAYER_X_3_val = PLAYER_X_3.GetFloat(PropertyName.VAL);
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat(195);
            DISTZ_0.SetFloat(231, (PLAYER_X_3_val - temp_7));
            var DISTY_9 = _world.GetObject(ObjectType.Skill, 217512506);
            var DISTY_10 = _world.GetObject(ObjectType.Skill, 217512506);
            var DISTY_10_val = DISTY_10.GetFloat(PropertyName.VAL);
            var PLAYER_Y_12 = _world.GetObject(ObjectType.Skill, 460);
            var PLAYER_Y_12_val = PLAYER_Y_12.GetFloat(PropertyName.VAL);
            var MY_15 = MY;
            var temp_16 = MY_15.GetFloat(196);
            DISTY_9.SetFloat(231, (PLAYER_Y_12_val - temp_16));
            var DISTX_18 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_19 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_19_val = DISTX_19.GetFloat(PropertyName.VAL);
            var DISTZ_21 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_21_val = DISTZ_21.GetFloat(PropertyName.VAL);
            var DISTZ_23 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_23_val = DISTZ_23.GetFloat(PropertyName.VAL);
            var DISTY_27 = _world.GetObject(ObjectType.Skill, 217512506);
            var DISTY_27_val = DISTY_27.GetFloat(PropertyName.VAL);
            var DISTY_29 = _world.GetObject(ObjectType.Skill, 217512506);
            var DISTY_29_val = DISTY_29.GetFloat(PropertyName.VAL);
            DISTX_18.SetFloat(231, (DISTZ_21_val * DISTZ_23_val) + (DISTY_27_val * DISTY_29_val));
            var DISTX_31 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_31_val = DISTX_31.GetFloat(PropertyName.VAL);
            var DISTX_32 = _world.GetObject(ObjectType.Skill, 217512505);
            DISTX_32.SetFloat(231, MathUtils.Sqrt(DISTX_31_val));
            var DISTX_34 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_34_val = DISTX_34.GetFloat(PropertyName.VAL);
            if (DISTX_34_val < 0.1f)
            {
                yield break;
            }
            var DISTY_35 = _world.GetObject(ObjectType.Skill, 217512506);
            var DISTY_36 = _world.GetObject(ObjectType.Skill, 217512506);
            var DISTY_36_val = DISTY_36.GetFloat(PropertyName.VAL);
            var DISTY_37 = _world.GetObject(ObjectType.Skill, 217512506);
            var DISTY_37_val = DISTY_37.GetFloat(PropertyName.VAL);
            var DISTX_39 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_39_val = DISTX_39.GetFloat(PropertyName.VAL);
            DISTY_35.SetFloat(231, DISTY_37_val / DISTX_39_val);
            var DISTY_40 = _world.GetObject(ObjectType.Skill, 217512506);
            var DISTY_40_val = DISTY_40.GetFloat(PropertyName.VAL);
            var MY_42 = MY;
            MY_42.SetFloat(194, MathUtils.Asin(DISTY_40_val));
            var DISTZ_44 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_44_val = DISTZ_44.GetFloat(PropertyName.VAL);
            if (DISTZ_44_val > 0f)
            {
                yield break;
            }
            var MY_46 = MY;
            var MY_48 = MY;
            var temp_49 = MY_48.GetFloat(194);
            var PI_50 = _world.GetObject(ObjectType.Skill, 577);
            var PI_50_val = PI_50.GetFloat(PropertyName.VAL);
            var MY_53 = MY;
            var temp_54 = MY_53.GetFloat(194);
            MY_46.SetFloat(194, PI_50_val - temp_54);
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
            var PI_0 = _world.GetObject(ObjectType.Skill, 577);
            var PI_0_val = PI_0.GetFloat(PropertyName.VAL);
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(194);
            var MY_5 = MY;
            MY_5.SetFloat(194, temp_3 + PI_0_val);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator ACTORJUMP(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(169);
            var MY_5 = MY;
            MY_5.SetFloat(169, temp_3 + (-0.1f * TimeUtils.TicksToTime(1)));
            var MY_7 = MY;
            var temp_8 = MY_7.GetFloat(200);
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat(165);
            if (temp_11 > temp_8)
            {
                yield break;
            }
            var MY_14 = MY;
            MY_14.SetFloat(213, 0f);
            var MY_17 = MY;
            MY_17.SetFloat(165, -0.05f);
            var MY_20 = MY;
            MY_20.SetFloat(169, 0f);
            var MY_23 = MY;
            MY_23.SetAcknexObject(189, null);
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator ACTORJUMPSTOP(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(169);
            var MY_5 = MY;
            MY_5.SetFloat(169, temp_3 + -0.1f);
            var MY_7 = MY;
            var temp_8 = MY_7.GetFloat(200);
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat(165);
            if (temp_11 > temp_8)
            {
                yield break;
            }
            var MY_14 = MY;
            MY_14.SetFloat(213, 0f);
            var MY_17 = MY;
            MY_17.SetFloat(165, -0.05f);
            var MY_20 = MY;
            MY_20.SetFloat(169, 0f);
            var MY_23 = MY;
            var temp_24 = MY_23.GetFloat(168);
            var MY_26 = MY;
            MY_26.SetFloat(168, temp_24 + -0.1f);
            var MY_29 = MY;
            var temp_30 = MY_29.GetFloat(194);
            var MY_32 = MY;
            MY_32.SetFloat(194, temp_30 + 0.05f);
            var MY_35 = MY;
            var temp_36 = MY_35.GetFloat(168);
            if (temp_36 > 0.1f)
            {
                yield break;
            }
            var MY_39 = MY;
            MY_39.SetAcknexObject(189, null);
            var MY_42 = MY;
            MY_42.SetFloat(168, 0f);
            var MY_45 = MY;
            MY_45.SetFloat(207, 0f);
            var MY_48 = MY;
            MY_48.SetAcknexObject(199, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator TURNLEFT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(194);
            var MY_5 = MY;
            MY_5.SetFloat(194, temp_3 + 0.524f);
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
            var temp_3 = MY_2.GetFloat(194);
            var MY_5 = MY;
            MY_5.SetFloat(194, temp_3 + -0.524f);
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
            var WEAPONSEL_1 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_1_val = WEAPONSEL_1.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_1_val == 1f)
            {
                var AMMO_3 = _world.GetObject(ObjectType.Skill, 2088896983);
                AMMO_3.SetFloat(231, 0f);
            }
            var WEAPONSEL_5 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_5_val = WEAPONSEL_5.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_5_val == 2f)
            {
                var AMMO_MP5_6 = _world.GetObject(ObjectType.Skill, 1494668136);
                var AMMO_MP5_6_val = AMMO_MP5_6.GetFloat(PropertyName.VAL);
                var AMMO_7 = _world.GetObject(ObjectType.Skill, 2088896983);
                AMMO_7.SetFloat(231, AMMO_MP5_6_val);
            }
            var WEAPONSEL_9 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_9_val = WEAPONSEL_9.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_9_val == 3f)
            {
                var AMMO_GRANADE_10 = _world.GetObject(ObjectType.Skill, 3603202376);
                var AMMO_GRANADE_10_val = AMMO_GRANADE_10.GetFloat(PropertyName.VAL);
                var AMMO_11 = _world.GetObject(ObjectType.Skill, 2088896983);
                AMMO_11.SetFloat(231, AMMO_GRANADE_10_val);
            }
            var WEAPONSEL_13 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_13_val = WEAPONSEL_13.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_13_val == 4f)
            {
                var AMMO_STINGER_14 = _world.GetObject(ObjectType.Skill, 2008713554);
                var AMMO_STINGER_14_val = AMMO_STINGER_14.GetFloat(PropertyName.VAL);
                var AMMO_15 = _world.GetObject(ObjectType.Skill, 2088896983);
                AMMO_15.SetFloat(231, AMMO_STINGER_14_val);
            }
            var WEAPONSEL_17 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_17_val = WEAPONSEL_17.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_17_val == 5f)
            {
                var AMMO_QUANTUM_18 = _world.GetObject(ObjectType.Skill, 3750407617);
                var AMMO_QUANTUM_18_val = AMMO_QUANTUM_18.GetFloat(PropertyName.VAL);
                var AMMO_19 = _world.GetObject(ObjectType.Skill, 2088896983);
                AMMO_19.SetFloat(231, AMMO_QUANTUM_18_val);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DECAMMO(IAcknexObject MY, IAcknexObject THERE)
        {
            var WEAPONSEL_1 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_1_val = WEAPONSEL_1.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_1_val == 1f)
            {
                var AMMO_3 = _world.GetObject(ObjectType.Skill, 2088896983);
                AMMO_3.SetFloat(231, 0f);
            }
            var WEAPONSEL_5 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_5_val = WEAPONSEL_5.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_5_val == 2f)
            {
                var AMMO_6 = _world.GetObject(ObjectType.Skill, 2088896983);
                var AMMO_6_val = AMMO_6.GetFloat(PropertyName.VAL);
                var AMMO_MP5_7 = _world.GetObject(ObjectType.Skill, 1494668136);
                AMMO_MP5_7.SetFloat(231, AMMO_6_val);
            }
            var WEAPONSEL_9 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_9_val = WEAPONSEL_9.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_9_val == 3f)
            {
                var AMMO_10 = _world.GetObject(ObjectType.Skill, 2088896983);
                var AMMO_10_val = AMMO_10.GetFloat(PropertyName.VAL);
                var AMMO_GRANADE_11 = _world.GetObject(ObjectType.Skill, 3603202376);
                AMMO_GRANADE_11.SetFloat(231, AMMO_10_val);
            }
            var WEAPONSEL_13 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_13_val = WEAPONSEL_13.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_13_val == 4f)
            {
                var AMMO_14 = _world.GetObject(ObjectType.Skill, 2088896983);
                var AMMO_14_val = AMMO_14.GetFloat(PropertyName.VAL);
                var AMMO_STINGER_15 = _world.GetObject(ObjectType.Skill, 2008713554);
                AMMO_STINGER_15.SetFloat(231, AMMO_14_val);
            }
            var WEAPONSEL_17 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_17_val = WEAPONSEL_17.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_17_val == 5f)
            {
                var AMMO_18 = _world.GetObject(ObjectType.Skill, 2088896983);
                var AMMO_18_val = AMMO_18.GetFloat(PropertyName.VAL);
                var AMMO_QUANTUM_19 = _world.GetObject(ObjectType.Skill, 3750407617);
                AMMO_QUANTUM_19.SetFloat(231, AMMO_18_val);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator INNOCENTKILLED(IAcknexObject MY, IAcknexObject THERE)
        {
            var INNOCENTS_1 = _world.GetObject(ObjectType.Skill, 1460750270);
            var INNOCENTS_1_val = INNOCENTS_1.GetFloat(PropertyName.VAL);
            if (INNOCENTS_1_val > 2f)
            {
                yield break;
            }
            var INNOCENTS_3 = _world.GetObject(ObjectType.Skill, 1460750270);
            var INNOCENTS_3_val = INNOCENTS_3.GetFloat(PropertyName.VAL);
            var INNOCENTS_4 = _world.GetObject(ObjectType.Skill, 1460750270);
            INNOCENTS_4.SetFloat(231, INNOCENTS_3_val + 1f);
            var INNOCENTS_6 = _world.GetObject(ObjectType.Skill, 1460750270);
            var INNOCENTS_6_val = INNOCENTS_6.GetFloat(PropertyName.VAL);
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
            var PLAYER_HEALTH_9 = _world.GetObject(ObjectType.Skill, 1469755439);
            var PLAYER_HEALTH_9_val = PLAYER_HEALTH_9.GetFloat(PropertyName.VAL);
            if (PLAYER_HEALTH_9_val > 5f)
            {
                goto CONT;
            }
            var INNOCENTS_11 = _world.GetObject(ObjectType.Skill, 1460750270);
            INNOCENTS_11.SetFloat(231, 2f);
            yield break;
            CONT:
            var END01STR_12 = _world.AcknexObject.GetAcknexObject(1070587678);
            _world.SetSynonymObject(3892409159, END01STR_12);
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
            var temp_3 = MY_2.GetFloat(175);
            if (temp_3 == 0f)
            {
                yield break;
            }
            var MY_6 = MY;
            MY_6.SetFloat(175, 0f);
            var MY_8 = MY;
            var temp_9 = MY_8?.GetAcknexObject(164);
            _world.SetSynonymObject(3254537347, temp_9);
            var HOLEX_11 = _world.GetObject(ObjectType.Skill, 222463693);
            var HOLEX_12 = _world.GetObject(ObjectType.Skill, 222463693);
            var HOLEX_12_val = HOLEX_12.GetFloat(PropertyName.VAL);
            var HIT_X_13 = _world.GetObject(ObjectType.Skill, 448);
            var HIT_X_13_val = HIT_X_13.GetFloat(PropertyName.VAL);
            var MY_TEX_19 = _world.GetSynonymObject(3254537347);
            var temp_20 = MY_TEX_19.GetFloat(275);
            HOLEX_11.SetFloat(231, HIT_X_13_val - (5f * temp_20 / 48f));
            var HOLEY_24 = _world.GetObject(ObjectType.Skill, 222463694);
            var HOLEY_25 = _world.GetObject(ObjectType.Skill, 222463694);
            var HOLEY_25_val = HOLEY_25.GetFloat(PropertyName.VAL);
            var HIT_Y_26 = _world.GetObject(ObjectType.Skill, 449);
            var HIT_Y_26_val = HIT_Y_26.GetFloat(PropertyName.VAL);
            var MY_TEX_32 = _world.GetSynonymObject(3254537347);
            var temp_33 = MY_TEX_32.GetFloat(276);
            HOLEY_24.SetFloat(231, HIT_Y_26_val - (5f * temp_33 / 48f));
            var MY_TEX_38 = _world.GetSynonymObject(3254537347);
            var temp_39 = MY_TEX_38.GetFloat(276);
            var DISTY_40 = _world.GetObject(ObjectType.Skill, 217512506);
            DISTY_40.SetFloat(231, temp_39);
            var MY_43 = MY;
            var temp_44 = MY_43?.GetAcknexObject(166);
            if (temp_44 != null)
            {
                goto SECOND;
            }
            var MHL01TEX_45 = _world.AcknexObject.GetAcknexObject(3869925632);
            var MY_47 = MY;
            MY_47.SetAcknexObject(166, MHL01TEX_45);
            var MY_49 = MY;
            var temp_50 = MY_49?.GetAcknexObject(166);
            _world.SetSynonymObject(3254537347, temp_50);
            var MY_TEX_54 = _world.GetSynonymObject(3254537347);
            MY_TEX_54.SetAcknexObject(166, null);
            LAST:
            var MY_TEX_56 = _world.GetSynonymObject(3254537347);
            var MY_TEX_58 = _world.GetSynonymObject(3254537347);
            var temp_59 = MY_TEX_58.GetFloat(225);
            var HOLEX_60 = _world.GetObject(ObjectType.Skill, 222463693);
            var HOLEX_60_val = HOLEX_60.GetFloat(PropertyName.VAL);
            MY_TEX_56.SetFloat(225, HOLEX_60_val);
            var MY_TEX_62 = _world.GetSynonymObject(3254537347);
            var MY_TEX_64 = _world.GetSynonymObject(3254537347);
            var temp_65 = MY_TEX_64.GetFloat(226);
            var HOLEY_66 = _world.GetObject(ObjectType.Skill, 222463694);
            var HOLEY_66_val = HOLEY_66.GetFloat(PropertyName.VAL);
            MY_TEX_62.SetFloat(226, HOLEY_66_val);
            yield break;
            SECOND:
            var MY_68 = MY;
            var temp_69 = MY_68?.GetAcknexObject(166);
            _world.SetSynonymObject(3254537347, temp_69);
            var MY_TEX_73 = _world.GetSynonymObject(3254537347);
            var temp_74 = MY_TEX_73?.GetAcknexObject(166);
            if (temp_74 != null)
            {
                goto THIRD;
            }
            var MHL02TEX_75 = _world.AcknexObject.GetAcknexObject(3869961569);
            var MY_TEX_77 = _world.GetSynonymObject(3254537347);
            MY_TEX_77.SetAcknexObject(166, MHL02TEX_75);
            var MY_TEX_79 = _world.GetSynonymObject(3254537347);
            var temp_80 = MY_TEX_79?.GetAcknexObject(166);
            _world.SetSynonymObject(3254537347, temp_80);
            var MY_TEX_84 = _world.GetSynonymObject(3254537347);
            MY_TEX_84.SetAcknexObject(166, null);
            var MY_TEX_86 = _world.GetSynonymObject(3254537347);
            var MY_TEX_88 = _world.GetSynonymObject(3254537347);
            var temp_89 = MY_TEX_88.GetFloat(225);
            var HOLEX_90 = _world.GetObject(ObjectType.Skill, 222463693);
            var HOLEX_90_val = HOLEX_90.GetFloat(PropertyName.VAL);
            MY_TEX_86.SetFloat(225, HOLEX_90_val);
            var MY_TEX_92 = _world.GetSynonymObject(3254537347);
            var MY_TEX_94 = _world.GetSynonymObject(3254537347);
            var temp_95 = MY_TEX_94.GetFloat(226);
            var HOLEY_96 = _world.GetObject(ObjectType.Skill, 222463694);
            var HOLEY_96_val = HOLEY_96.GetFloat(PropertyName.VAL);
            MY_TEX_92.SetFloat(226, HOLEY_96_val);
            yield break;
            THIRD:
            var MY_TEX_98 = _world.GetSynonymObject(3254537347);
            var temp_99 = MY_TEX_98?.GetAcknexObject(166);
            _world.SetSynonymObject(3254537347, temp_99);
            var MY_TEX_103 = _world.GetSynonymObject(3254537347);
            var temp_104 = MY_TEX_103?.GetAcknexObject(166);
            if (temp_104 != null)
            {
                goto FOURTH;
            }
            var MHL03TEX_105 = _world.AcknexObject.GetAcknexObject(3869997506);
            var MY_TEX_107 = _world.GetSynonymObject(3254537347);
            MY_TEX_107.SetAcknexObject(166, MHL03TEX_105);
            var MY_TEX_109 = _world.GetSynonymObject(3254537347);
            var temp_110 = MY_TEX_109?.GetAcknexObject(166);
            _world.SetSynonymObject(3254537347, temp_110);
            var MY_TEX_114 = _world.GetSynonymObject(3254537347);
            MY_TEX_114.SetAcknexObject(166, null);
            var MY_TEX_116 = _world.GetSynonymObject(3254537347);
            var MY_TEX_118 = _world.GetSynonymObject(3254537347);
            var temp_119 = MY_TEX_118.GetFloat(225);
            var HOLEX_120 = _world.GetObject(ObjectType.Skill, 222463693);
            var HOLEX_120_val = HOLEX_120.GetFloat(PropertyName.VAL);
            MY_TEX_116.SetFloat(225, HOLEX_120_val);
            var MY_TEX_122 = _world.GetSynonymObject(3254537347);
            var MY_TEX_124 = _world.GetSynonymObject(3254537347);
            var temp_125 = MY_TEX_124.GetFloat(226);
            var HOLEY_126 = _world.GetObject(ObjectType.Skill, 222463694);
            var HOLEY_126_val = HOLEY_126.GetFloat(PropertyName.VAL);
            MY_TEX_122.SetFloat(226, HOLEY_126_val);
            yield break;
            FOURTH:
            var MY_TEX_128 = _world.GetSynonymObject(3254537347);
            var temp_129 = MY_TEX_128?.GetAcknexObject(166);
            _world.SetSynonymObject(3254537347, temp_129);
            var MY_TEX_133 = _world.GetSynonymObject(3254537347);
            var temp_134 = MY_TEX_133?.GetAcknexObject(166);
            if (temp_134 != null)
            {
                goto FIFTH;
            }
            var MHL04TEX_135 = _world.AcknexObject.GetAcknexObject(3870033443);
            var MY_TEX_137 = _world.GetSynonymObject(3254537347);
            MY_TEX_137.SetAcknexObject(166, MHL04TEX_135);
            var MY_TEX_139 = _world.GetSynonymObject(3254537347);
            var temp_140 = MY_TEX_139?.GetAcknexObject(166);
            _world.SetSynonymObject(3254537347, temp_140);
            var MY_TEX_144 = _world.GetSynonymObject(3254537347);
            MY_TEX_144.SetAcknexObject(166, null);
            var MY_TEX_146 = _world.GetSynonymObject(3254537347);
            var MY_TEX_148 = _world.GetSynonymObject(3254537347);
            var temp_149 = MY_TEX_148.GetFloat(225);
            var HOLEX_150 = _world.GetObject(ObjectType.Skill, 222463693);
            var HOLEX_150_val = HOLEX_150.GetFloat(PropertyName.VAL);
            MY_TEX_146.SetFloat(225, HOLEX_150_val);
            var MY_TEX_152 = _world.GetSynonymObject(3254537347);
            var MY_TEX_154 = _world.GetSynonymObject(3254537347);
            var temp_155 = MY_TEX_154.GetFloat(226);
            var HOLEY_156 = _world.GetObject(ObjectType.Skill, 222463694);
            var HOLEY_156_val = HOLEY_156.GetFloat(PropertyName.VAL);
            MY_TEX_152.SetFloat(226, HOLEY_156_val);
            yield break;
            FIFTH:
            var MY_TEX_158 = _world.GetSynonymObject(3254537347);
            var temp_159 = MY_TEX_158?.GetAcknexObject(166);
            _world.SetSynonymObject(3254537347, temp_159);
            var MY_TEX_163 = _world.GetSynonymObject(3254537347);
            var temp_164 = MY_TEX_163?.GetAcknexObject(166);
            if (temp_164 != null)
            {
                goto SIXTH;
            }
            var MHL05TEX_165 = _world.AcknexObject.GetAcknexObject(3870069380);
            var MY_TEX_167 = _world.GetSynonymObject(3254537347);
            MY_TEX_167.SetAcknexObject(166, MHL05TEX_165);
            var MY_TEX_169 = _world.GetSynonymObject(3254537347);
            var temp_170 = MY_TEX_169?.GetAcknexObject(166);
            _world.SetSynonymObject(3254537347, temp_170);
            var MY_TEX_174 = _world.GetSynonymObject(3254537347);
            MY_TEX_174.SetAcknexObject(166, null);
            var MY_TEX_176 = _world.GetSynonymObject(3254537347);
            var MY_TEX_178 = _world.GetSynonymObject(3254537347);
            var temp_179 = MY_TEX_178.GetFloat(225);
            var HOLEX_180 = _world.GetObject(ObjectType.Skill, 222463693);
            var HOLEX_180_val = HOLEX_180.GetFloat(PropertyName.VAL);
            MY_TEX_176.SetFloat(225, HOLEX_180_val);
            var MY_TEX_182 = _world.GetSynonymObject(3254537347);
            var MY_TEX_184 = _world.GetSynonymObject(3254537347);
            var temp_185 = MY_TEX_184.GetFloat(226);
            var HOLEY_186 = _world.GetObject(ObjectType.Skill, 222463694);
            var HOLEY_186_val = HOLEY_186.GetFloat(PropertyName.VAL);
            MY_TEX_182.SetFloat(226, HOLEY_186_val);
            yield break;
            SIXTH:
            var MY_TEX_188 = _world.GetSynonymObject(3254537347);
            var temp_189 = MY_TEX_188?.GetAcknexObject(166);
            _world.SetSynonymObject(3254537347, temp_189);
            var MY_TEX_193 = _world.GetSynonymObject(3254537347);
            var temp_194 = MY_TEX_193?.GetAcknexObject(166);
            if (temp_194 != null)
            {
                goto SEVENTH;
            }
            var MHL06TEX_195 = _world.AcknexObject.GetAcknexObject(3870105317);
            var MY_TEX_197 = _world.GetSynonymObject(3254537347);
            MY_TEX_197.SetAcknexObject(166, MHL06TEX_195);
            var MY_TEX_199 = _world.GetSynonymObject(3254537347);
            var temp_200 = MY_TEX_199?.GetAcknexObject(166);
            _world.SetSynonymObject(3254537347, temp_200);
            var MY_TEX_204 = _world.GetSynonymObject(3254537347);
            MY_TEX_204.SetAcknexObject(166, null);
            var MY_TEX_206 = _world.GetSynonymObject(3254537347);
            var MY_TEX_208 = _world.GetSynonymObject(3254537347);
            var temp_209 = MY_TEX_208.GetFloat(225);
            var HOLEX_210 = _world.GetObject(ObjectType.Skill, 222463693);
            var HOLEX_210_val = HOLEX_210.GetFloat(PropertyName.VAL);
            MY_TEX_206.SetFloat(225, HOLEX_210_val);
            var MY_TEX_212 = _world.GetSynonymObject(3254537347);
            var MY_TEX_214 = _world.GetSynonymObject(3254537347);
            var temp_215 = MY_TEX_214.GetFloat(226);
            var HOLEY_216 = _world.GetObject(ObjectType.Skill, 222463694);
            var HOLEY_216_val = HOLEY_216.GetFloat(PropertyName.VAL);
            MY_TEX_212.SetFloat(226, HOLEY_216_val);
            yield break;
            SEVENTH:
            var MY_TEX_218 = _world.GetSynonymObject(3254537347);
            var temp_219 = MY_TEX_218?.GetAcknexObject(166);
            _world.SetSynonymObject(3254537347, temp_219);
            var MY_TEX_223 = _world.GetSynonymObject(3254537347);
            var temp_224 = MY_TEX_223?.GetAcknexObject(166);
            if (temp_224 != null)
            {
                goto EIGHTH;
            }
            var MHL07TEX_225 = _world.AcknexObject.GetAcknexObject(3870141254);
            var MY_TEX_227 = _world.GetSynonymObject(3254537347);
            MY_TEX_227.SetAcknexObject(166, MHL07TEX_225);
            var MY_TEX_229 = _world.GetSynonymObject(3254537347);
            var temp_230 = MY_TEX_229?.GetAcknexObject(166);
            _world.SetSynonymObject(3254537347, temp_230);
            var MY_TEX_234 = _world.GetSynonymObject(3254537347);
            MY_TEX_234.SetAcknexObject(166, null);
            var MY_TEX_236 = _world.GetSynonymObject(3254537347);
            var MY_TEX_238 = _world.GetSynonymObject(3254537347);
            var temp_239 = MY_TEX_238.GetFloat(225);
            var HOLEX_240 = _world.GetObject(ObjectType.Skill, 222463693);
            var HOLEX_240_val = HOLEX_240.GetFloat(PropertyName.VAL);
            MY_TEX_236.SetFloat(225, HOLEX_240_val);
            var MY_TEX_242 = _world.GetSynonymObject(3254537347);
            var MY_TEX_244 = _world.GetSynonymObject(3254537347);
            var temp_245 = MY_TEX_244.GetFloat(226);
            var HOLEY_246 = _world.GetObject(ObjectType.Skill, 222463694);
            var HOLEY_246_val = HOLEY_246.GetFloat(PropertyName.VAL);
            MY_TEX_242.SetFloat(226, HOLEY_246_val);
            yield break;
            EIGHTH:
            var MY_TEX_248 = _world.GetSynonymObject(3254537347);
            var temp_249 = MY_TEX_248?.GetAcknexObject(166);
            _world.SetSynonymObject(3254537347, temp_249);
            var MY_TEX_253 = _world.GetSynonymObject(3254537347);
            var temp_254 = MY_TEX_253?.GetAcknexObject(166);
            if (temp_254 != null)
            {
                goto NINETH;
            }
            var MHL08TEX_255 = _world.AcknexObject.GetAcknexObject(3870177191);
            var MY_TEX_257 = _world.GetSynonymObject(3254537347);
            MY_TEX_257.SetAcknexObject(166, MHL08TEX_255);
            var MY_TEX_259 = _world.GetSynonymObject(3254537347);
            var temp_260 = MY_TEX_259?.GetAcknexObject(166);
            _world.SetSynonymObject(3254537347, temp_260);
            var MY_TEX_264 = _world.GetSynonymObject(3254537347);
            MY_TEX_264.SetAcknexObject(166, null);
            var MY_TEX_266 = _world.GetSynonymObject(3254537347);
            var MY_TEX_268 = _world.GetSynonymObject(3254537347);
            var temp_269 = MY_TEX_268.GetFloat(225);
            var HOLEX_270 = _world.GetObject(ObjectType.Skill, 222463693);
            var HOLEX_270_val = HOLEX_270.GetFloat(PropertyName.VAL);
            MY_TEX_266.SetFloat(225, HOLEX_270_val);
            var MY_TEX_272 = _world.GetSynonymObject(3254537347);
            var MY_TEX_274 = _world.GetSynonymObject(3254537347);
            var temp_275 = MY_TEX_274.GetFloat(226);
            var HOLEY_276 = _world.GetObject(ObjectType.Skill, 222463694);
            var HOLEY_276_val = HOLEY_276.GetFloat(PropertyName.VAL);
            MY_TEX_272.SetFloat(226, HOLEY_276_val);
            yield break;
            NINETH:
            var MY_TEX_278 = _world.GetSynonymObject(3254537347);
            var temp_279 = MY_TEX_278?.GetAcknexObject(166);
            _world.SetSynonymObject(3254537347, temp_279);
            var MY_TEX_283 = _world.GetSynonymObject(3254537347);
            var temp_284 = MY_TEX_283?.GetAcknexObject(166);
            if (temp_284 != null)
            {
                goto TENTH;
            }
            var MHL09TEX_285 = _world.AcknexObject.GetAcknexObject(3870213128);
            var MY_TEX_287 = _world.GetSynonymObject(3254537347);
            MY_TEX_287.SetAcknexObject(166, MHL09TEX_285);
            var MY_TEX_289 = _world.GetSynonymObject(3254537347);
            var temp_290 = MY_TEX_289?.GetAcknexObject(166);
            _world.SetSynonymObject(3254537347, temp_290);
            var MY_TEX_294 = _world.GetSynonymObject(3254537347);
            MY_TEX_294.SetAcknexObject(166, null);
            var MY_TEX_296 = _world.GetSynonymObject(3254537347);
            var MY_TEX_298 = _world.GetSynonymObject(3254537347);
            var temp_299 = MY_TEX_298.GetFloat(225);
            var HOLEX_300 = _world.GetObject(ObjectType.Skill, 222463693);
            var HOLEX_300_val = HOLEX_300.GetFloat(PropertyName.VAL);
            MY_TEX_296.SetFloat(225, HOLEX_300_val);
            var MY_TEX_302 = _world.GetSynonymObject(3254537347);
            var MY_TEX_304 = _world.GetSynonymObject(3254537347);
            var temp_305 = MY_TEX_304.GetFloat(226);
            var HOLEY_306 = _world.GetObject(ObjectType.Skill, 222463694);
            var HOLEY_306_val = HOLEY_306.GetFloat(PropertyName.VAL);
            MY_TEX_302.SetFloat(226, HOLEY_306_val);
            yield break;
            TENTH:
            var MY_TEX_308 = _world.GetSynonymObject(3254537347);
            var temp_309 = MY_TEX_308?.GetAcknexObject(166);
            _world.SetSynonymObject(3254537347, temp_309);
            var MY_TEX_313 = _world.GetSynonymObject(3254537347);
            var temp_314 = MY_TEX_313?.GetAcknexObject(166);
            if (temp_314 != null)
            {
                goto LAST;
            }
            var MHL10TEX_315 = _world.AcknexObject.GetAcknexObject(3871075616);
            var MY_TEX_317 = _world.GetSynonymObject(3254537347);
            MY_TEX_317.SetAcknexObject(166, MHL10TEX_315);
            var MY_TEX_319 = _world.GetSynonymObject(3254537347);
            var temp_320 = MY_TEX_319?.GetAcknexObject(166);
            _world.SetSynonymObject(3254537347, temp_320);
            var MY_TEX_324 = _world.GetSynonymObject(3254537347);
            MY_TEX_324.SetAcknexObject(166, null);
            var MY_TEX_326 = _world.GetSynonymObject(3254537347);
            var MY_TEX_328 = _world.GetSynonymObject(3254537347);
            var temp_329 = MY_TEX_328.GetFloat(225);
            var HOLEX_330 = _world.GetObject(ObjectType.Skill, 222463693);
            var HOLEX_330_val = HOLEX_330.GetFloat(PropertyName.VAL);
            MY_TEX_326.SetFloat(225, HOLEX_330_val);
            var MY_TEX_332 = _world.GetSynonymObject(3254537347);
            var MY_TEX_334 = _world.GetSynonymObject(3254537347);
            var temp_335 = MY_TEX_334.GetFloat(226);
            var HOLEY_336 = _world.GetObject(ObjectType.Skill, 222463694);
            var HOLEY_336_val = HOLEY_336.GetFloat(PropertyName.VAL);
            MY_TEX_332.SetFloat(226, HOLEY_336_val);
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
            var temp_3 = _world.AcknexObject?.GetAcknexObject(40);
            if (temp_3 == null)
            {
                goto WAITING;
            }
            var GUNFIRING_5 = _world.GetObject(ObjectType.Skill, 3478808598);
            var GUNFIRING_5_val = GUNFIRING_5.GetFloat(PropertyName.VAL);
            if (GUNFIRING_5_val == 1f)
            {
                goto WAITING;
            }
            var BLACK_6 = _world.AcknexObject.GetAcknexObject(215228298);
            _world.FadePal(BLACK_6, 0.4f);
            var BIP03SND_8 = _world.AcknexObject.GetAcknexObject(371601456);
            _world.PlaySound(BIP03SND_8, 0.5f, null);
            var HIDEMENU_10 = _world.AcknexObject.GetAcknexObject(2235387612);
            _world.AcknexObject.SetAcknexObject(82, HIDEMENU_10);
            var MOVE_MODE_13 = _world.GetObject(ObjectType.Skill, 362);
            MOVE_MODE_13.SetFloat(231, -0.5f);
            var MAXMENUITEM_15 = _world.GetObject(ObjectType.Skill, 2770297815);
            MAXMENUITEM_15.SetFloat(231, 4f);
            var MENUUP_16 = _world.AcknexObject.GetAcknexObject(3230209607);
            _world.AcknexObject.SetAcknexObject(105, MENUUP_16);
            var MENUDOWN_18 = _world.AcknexObject.GetAcknexObject(118349530);
            _world.AcknexObject.SetAcknexObject(106, MENUDOWN_18);
            var MENUUP_20 = _world.AcknexObject.GetAcknexObject(3230209607);
            _world.AcknexObject.SetAcknexObject(107, MENUUP_20);
            var MENUDOWN_22 = _world.AcknexObject.GetAcknexObject(118349530);
            _world.AcknexObject.SetAcknexObject(108, MENUDOWN_22);
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
            var CHOOSESUBMENU_24 = _world.AcknexObject.GetAcknexObject(2424356781);
            _world.AcknexObject.SetAcknexObject(81, CHOOSESUBMENU_24);
            var MENUPANEL_26 = _world.AcknexObject.GetAcknexObject(3919220402);
            _world.AcknexObject.SetAcknexObject(145, MENUPANEL_26);
            var MAINMENUTEXT_29 = _world.AcknexObject.GetAcknexObject(514908524);
            _world.AcknexObject.SetAcknexObject(129, MAINMENUTEXT_29);
            var HLP01STR_32 = _world.AcknexObject.GetAcknexObject(2258553803);
            _world.SetSynonymObject(361798934, HLP01STR_32);
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
            var HIDEMENU_0 = _world.AcknexObject.GetAcknexObject(2235387612);
            _world.AcknexObject.SetAcknexObject(82, HIDEMENU_0);
            var MOVE_MODE_3 = _world.GetObject(ObjectType.Skill, 362);
            MOVE_MODE_3.SetFloat(231, -0.5f);
            var MAXMENUITEM_5 = _world.GetObject(ObjectType.Skill, 2770297815);
            MAXMENUITEM_5.SetFloat(231, 4f);
            var SUBMENUUP_6 = _world.AcknexObject.GetAcknexObject(3112081393);
            _world.AcknexObject.SetAcknexObject(105, SUBMENUUP_6);
            var SUBMENUDOWN_8 = _world.AcknexObject.GetAcknexObject(325743364);
            _world.AcknexObject.SetAcknexObject(106, SUBMENUDOWN_8);
            var SUBMENUUP_10 = _world.AcknexObject.GetAcknexObject(3112081393);
            _world.AcknexObject.SetAcknexObject(107, SUBMENUUP_10);
            var SUBMENUDOWN_12 = _world.AcknexObject.GetAcknexObject(325743364);
            _world.AcknexObject.SetAcknexObject(108, SUBMENUDOWN_12);
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
            var BIP02SND_14 = _world.AcknexObject.GetAcknexObject(371565519);
            _world.PlaySound(BIP02SND_14, 0.5f, null);
            var LOADSAVETEXT_18 = _world.AcknexObject.GetAcknexObject(4073210305);
            LOADSAVETEXT_18.SetFloat(295, 1f);
            var SAVEDGAME01_19 = _world.AcknexObject.GetAcknexObject(462276091);
            var LOADSAVETEXT_21 = _world.AcknexObject.GetAcknexObject(4073210305);
            var LOADSAVETEXT_21_array = LOADSAVETEXT_21.GetObject<List<IAcknexObject>>(293);
            var LOADSAVETEXT_21_index = LOADSAVETEXT_21.GetInteger(PropertyName.INDEX);
            LOADSAVETEXT_21_array[LOADSAVETEXT_21_index - 1] = SAVEDGAME01_19;
            LOADSAVETEXT_21.IsDirty = true;
            var LOADSAVETEXT_24 = _world.AcknexObject.GetAcknexObject(4073210305);
            LOADSAVETEXT_24.SetFloat(295, 2f);
            var SAVEDGAME02_25 = _world.AcknexObject.GetAcknexObject(462276092);
            var LOADSAVETEXT_27 = _world.AcknexObject.GetAcknexObject(4073210305);
            var LOADSAVETEXT_27_array = LOADSAVETEXT_27.GetObject<List<IAcknexObject>>(293);
            var LOADSAVETEXT_27_index = LOADSAVETEXT_27.GetInteger(PropertyName.INDEX);
            LOADSAVETEXT_27_array[LOADSAVETEXT_27_index - 1] = SAVEDGAME02_25;
            LOADSAVETEXT_27.IsDirty = true;
            var LOADSAVETEXT_30 = _world.AcknexObject.GetAcknexObject(4073210305);
            LOADSAVETEXT_30.SetFloat(295, 3f);
            var SAVEDGAME03_31 = _world.AcknexObject.GetAcknexObject(462276093);
            var LOADSAVETEXT_33 = _world.AcknexObject.GetAcknexObject(4073210305);
            var LOADSAVETEXT_33_array = LOADSAVETEXT_33.GetObject<List<IAcknexObject>>(293);
            var LOADSAVETEXT_33_index = LOADSAVETEXT_33.GetInteger(PropertyName.INDEX);
            LOADSAVETEXT_33_array[LOADSAVETEXT_33_index - 1] = SAVEDGAME03_31;
            LOADSAVETEXT_33.IsDirty = true;
            var LOADSAVETEXT_36 = _world.AcknexObject.GetAcknexObject(4073210305);
            LOADSAVETEXT_36.SetFloat(295, 4f);
            var SAVEDGAME04_37 = _world.AcknexObject.GetAcknexObject(462276094);
            var LOADSAVETEXT_39 = _world.AcknexObject.GetAcknexObject(4073210305);
            var LOADSAVETEXT_39_array = LOADSAVETEXT_39.GetObject<List<IAcknexObject>>(293);
            var LOADSAVETEXT_39_index = LOADSAVETEXT_39.GetInteger(PropertyName.INDEX);
            LOADSAVETEXT_39_array[LOADSAVETEXT_39_index - 1] = SAVEDGAME04_37;
            LOADSAVETEXT_39.IsDirty = true;
            var TYPEGAME_40 = _world.AcknexObject.GetAcknexObject(2213650825);
            _world.AcknexObject.SetAcknexObject(81, TYPEGAME_40);
            var SUBMENUPANEL_42 = _world.AcknexObject.GetAcknexObject(2173282332);
            _world.AcknexObject.SetAcknexObject(145, SUBMENUPANEL_42);
            var LOADSAVETEXT_45 = _world.AcknexObject.GetAcknexObject(4073210305);
            _world.AcknexObject.SetAcknexObject(129, LOADSAVETEXT_45);
            var HLP01STR_48 = _world.AcknexObject.GetAcknexObject(2258553803);
            _world.SetSynonymObject(361798934, HLP01STR_48);
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
            var HIDEMENU_0 = _world.AcknexObject.GetAcknexObject(2235387612);
            _world.AcknexObject.SetAcknexObject(82, HIDEMENU_0);
            var MOVE_MODE_3 = _world.GetObject(ObjectType.Skill, 362);
            MOVE_MODE_3.SetFloat(231, -0.5f);
            var MAXMENUITEM_5 = _world.GetObject(ObjectType.Skill, 2770297815);
            MAXMENUITEM_5.SetFloat(231, 4f);
            var SUBMENUUP_6 = _world.AcknexObject.GetAcknexObject(3112081393);
            _world.AcknexObject.SetAcknexObject(105, SUBMENUUP_6);
            var SUBMENUDOWN_8 = _world.AcknexObject.GetAcknexObject(325743364);
            _world.AcknexObject.SetAcknexObject(106, SUBMENUDOWN_8);
            var SUBMENUUP_10 = _world.AcknexObject.GetAcknexObject(3112081393);
            _world.AcknexObject.SetAcknexObject(107, SUBMENUUP_10);
            var SUBMENUDOWN_12 = _world.AcknexObject.GetAcknexObject(325743364);
            _world.AcknexObject.SetAcknexObject(108, SUBMENUDOWN_12);
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
            var BIP02SND_14 = _world.AcknexObject.GetAcknexObject(371565519);
            _world.PlaySound(BIP02SND_14, 0.5f, null);
            var LOADSAVETEXT_18 = _world.AcknexObject.GetAcknexObject(4073210305);
            LOADSAVETEXT_18.SetFloat(295, 1f);
            var SAVEDGAME01_19 = _world.AcknexObject.GetAcknexObject(462276091);
            var LOADSAVETEXT_21 = _world.AcknexObject.GetAcknexObject(4073210305);
            var LOADSAVETEXT_21_array = LOADSAVETEXT_21.GetObject<List<IAcknexObject>>(293);
            var LOADSAVETEXT_21_index = LOADSAVETEXT_21.GetInteger(PropertyName.INDEX);
            LOADSAVETEXT_21_array[LOADSAVETEXT_21_index - 1] = SAVEDGAME01_19;
            LOADSAVETEXT_21.IsDirty = true;
            var LOADSAVETEXT_24 = _world.AcknexObject.GetAcknexObject(4073210305);
            LOADSAVETEXT_24.SetFloat(295, 2f);
            var SAVEDGAME02_25 = _world.AcknexObject.GetAcknexObject(462276092);
            var LOADSAVETEXT_27 = _world.AcknexObject.GetAcknexObject(4073210305);
            var LOADSAVETEXT_27_array = LOADSAVETEXT_27.GetObject<List<IAcknexObject>>(293);
            var LOADSAVETEXT_27_index = LOADSAVETEXT_27.GetInteger(PropertyName.INDEX);
            LOADSAVETEXT_27_array[LOADSAVETEXT_27_index - 1] = SAVEDGAME02_25;
            LOADSAVETEXT_27.IsDirty = true;
            var LOADSAVETEXT_30 = _world.AcknexObject.GetAcknexObject(4073210305);
            LOADSAVETEXT_30.SetFloat(295, 3f);
            var SAVEDGAME03_31 = _world.AcknexObject.GetAcknexObject(462276093);
            var LOADSAVETEXT_33 = _world.AcknexObject.GetAcknexObject(4073210305);
            var LOADSAVETEXT_33_array = LOADSAVETEXT_33.GetObject<List<IAcknexObject>>(293);
            var LOADSAVETEXT_33_index = LOADSAVETEXT_33.GetInteger(PropertyName.INDEX);
            LOADSAVETEXT_33_array[LOADSAVETEXT_33_index - 1] = SAVEDGAME03_31;
            LOADSAVETEXT_33.IsDirty = true;
            var LOADSAVETEXT_36 = _world.AcknexObject.GetAcknexObject(4073210305);
            LOADSAVETEXT_36.SetFloat(295, 4f);
            var SAVEDGAME04_37 = _world.AcknexObject.GetAcknexObject(462276094);
            var LOADSAVETEXT_39 = _world.AcknexObject.GetAcknexObject(4073210305);
            var LOADSAVETEXT_39_array = LOADSAVETEXT_39.GetObject<List<IAcknexObject>>(293);
            var LOADSAVETEXT_39_index = LOADSAVETEXT_39.GetInteger(PropertyName.INDEX);
            LOADSAVETEXT_39_array[LOADSAVETEXT_39_index - 1] = SAVEDGAME04_37;
            LOADSAVETEXT_39.IsDirty = true;
            var CHOOSEGAME_40 = _world.AcknexObject.GetAcknexObject(2006969512);
            _world.AcknexObject.SetAcknexObject(81, CHOOSEGAME_40);
            var SUBMENUPANEL_42 = _world.AcknexObject.GetAcknexObject(2173282332);
            _world.AcknexObject.SetAcknexObject(145, SUBMENUPANEL_42);
            var LOADSAVETEXT_45 = _world.AcknexObject.GetAcknexObject(4073210305);
            _world.AcknexObject.SetAcknexObject(129, LOADSAVETEXT_45);
            var HLP01STR_48 = _world.AcknexObject.GetAcknexObject(2258553803);
            _world.SetSynonymObject(361798934, HLP01STR_48);
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
            var BIP02SND_0 = _world.AcknexObject.GetAcknexObject(371565519);
            _world.PlaySound(BIP02SND_0, 0.5f, null);
            var HIDEMENU_2 = _world.AcknexObject.GetAcknexObject(2235387612);
            _world.AcknexObject.SetAcknexObject(82, HIDEMENU_2);
            var MOVE_MODE_5 = _world.GetObject(ObjectType.Skill, 362);
            MOVE_MODE_5.SetFloat(231, -0.5f);
            var MAXMENUITEM_7 = _world.GetObject(ObjectType.Skill, 2770297815);
            MAXMENUITEM_7.SetFloat(231, 3f);
            var SUBMENUUP_8 = _world.AcknexObject.GetAcknexObject(3112081393);
            _world.AcknexObject.SetAcknexObject(105, SUBMENUUP_8);
            var SUBMENUDOWN_10 = _world.AcknexObject.GetAcknexObject(325743364);
            _world.AcknexObject.SetAcknexObject(106, SUBMENUDOWN_10);
            var VOLUMEUP_12 = _world.AcknexObject.GetAcknexObject(1384066474);
            _world.AcknexObject.SetAcknexObject(107, VOLUMEUP_12);
            var VOLUMEDOWN_14 = _world.AcknexObject.GetAcknexObject(4008139517);
            _world.AcknexObject.SetAcknexObject(108, VOLUMEDOWN_14);
            var HIDEMENU_16 = _world.AcknexObject.GetAcknexObject(2235387612);
            _world.AcknexObject.SetAcknexObject(81, HIDEMENU_16);
            var SOUNDVOLUMEPANEL_18 = _world.AcknexObject.GetAcknexObject(3543679582);
            _world.AcknexObject.SetAcknexObject(145, SOUNDVOLUMEPANEL_18);
            var SOUNDVOLUMETEXT_21 = _world.AcknexObject.GetAcknexObject(1018587315);
            _world.AcknexObject.SetAcknexObject(129, SOUNDVOLUMETEXT_21);
            var HLP01STR_24 = _world.AcknexObject.GetAcknexObject(2258553803);
            _world.SetSynonymObject(361798934, HLP01STR_24);
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
            _world.AcknexObject.SetAcknexObject(145, null);
            _world.AcknexObject.SetAcknexObject(129, null);
            var SHOWMAINMENU_6 = _world.AcknexObject.GetAcknexObject(3665306792);
            _world.AcknexObject.SetAcknexObject(82, SHOWMAINMENU_6);
            _world.AcknexObject.SetAcknexObject(105, null);
            _world.AcknexObject.SetAcknexObject(106, null);
            _world.AcknexObject.SetAcknexObject(107, null);
            _world.AcknexObject.SetAcknexObject(108, null);
            var UNDERWATER_17 = _world.GetObject(ObjectType.Skill, 1369167822);
            var UNDERWATER_17_val = UNDERWATER_17.GetFloat(PropertyName.VAL);
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
            var BLACK_18 = _world.AcknexObject.GetAcknexObject(215228298);
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
            var MOVE_MODE_21 = _world.GetObject(ObjectType.Skill, 362);
            MOVE_MODE_21.SetFloat(231, 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MENUUP(IAcknexObject MY, IAcknexObject THERE)
        {
            var MENUITEM_1 = _world.GetObject(ObjectType.Skill, 118534065);
            var MENUITEM_1_val = MENUITEM_1.GetFloat(PropertyName.VAL);
            var MENUITEM_2 = _world.GetObject(ObjectType.Skill, 118534065);
            MENUITEM_2.SetFloat(231, MENUITEM_1_val + -1f);
            var MENUITEM_4 = _world.GetObject(ObjectType.Skill, 118534065);
            var MENUITEM_4_val = MENUITEM_4.GetFloat(PropertyName.VAL);
            if (MENUITEM_4_val < 1f)
            {
                var MAXMENUITEM_5 = _world.GetObject(ObjectType.Skill, 2770297815);
                var MAXMENUITEM_5_val = MAXMENUITEM_5.GetFloat(PropertyName.VAL);
                var MENUITEM_6 = _world.GetObject(ObjectType.Skill, 118534065);
                MENUITEM_6.SetFloat(231, MAXMENUITEM_5_val);
            }
            var BIP01SND_7 = _world.AcknexObject.GetAcknexObject(371529582);
            _world.PlaySound(BIP01SND_7, 0.5f, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MENUDOWN(IAcknexObject MY, IAcknexObject THERE)
        {
            var MENUITEM_1 = _world.GetObject(ObjectType.Skill, 118534065);
            var MENUITEM_1_val = MENUITEM_1.GetFloat(PropertyName.VAL);
            var MENUITEM_2 = _world.GetObject(ObjectType.Skill, 118534065);
            MENUITEM_2.SetFloat(231, MENUITEM_1_val + 1f);
            var MAXMENUITEM_3 = _world.GetObject(ObjectType.Skill, 2770297815);
            var MAXMENUITEM_3_val = MAXMENUITEM_3.GetFloat(PropertyName.VAL);
            var MENUITEM_4 = _world.GetObject(ObjectType.Skill, 118534065);
            var MENUITEM_4_val = MENUITEM_4.GetFloat(PropertyName.VAL);
            if (MENUITEM_4_val > MAXMENUITEM_3_val)
            {
                var MENUITEM_6 = _world.GetObject(ObjectType.Skill, 118534065);
                MENUITEM_6.SetFloat(231, 1f);
            }
            var BIP01SND_7 = _world.AcknexObject.GetAcknexObject(371529582);
            _world.PlaySound(BIP01SND_7, 0.5f, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SUBMENUUP(IAcknexObject MY, IAcknexObject THERE)
        {
            var SUBMENUITEM_1 = _world.GetObject(ObjectType.Skill, 325927899);
            var SUBMENUITEM_1_val = SUBMENUITEM_1.GetFloat(PropertyName.VAL);
            var SUBMENUITEM_2 = _world.GetObject(ObjectType.Skill, 325927899);
            SUBMENUITEM_2.SetFloat(231, SUBMENUITEM_1_val + -1f);
            var SUBMENUITEM_4 = _world.GetObject(ObjectType.Skill, 325927899);
            var SUBMENUITEM_4_val = SUBMENUITEM_4.GetFloat(PropertyName.VAL);
            if (SUBMENUITEM_4_val < 1f)
            {
                var MAXMENUITEM_5 = _world.GetObject(ObjectType.Skill, 2770297815);
                var MAXMENUITEM_5_val = MAXMENUITEM_5.GetFloat(PropertyName.VAL);
                var SUBMENUITEM_6 = _world.GetObject(ObjectType.Skill, 325927899);
                SUBMENUITEM_6.SetFloat(231, MAXMENUITEM_5_val);
            }
            var BIP01SND_7 = _world.AcknexObject.GetAcknexObject(371529582);
            _world.PlaySound(BIP01SND_7, 0.5f, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SUBMENUDOWN(IAcknexObject MY, IAcknexObject THERE)
        {
            var SUBMENUITEM_1 = _world.GetObject(ObjectType.Skill, 325927899);
            var SUBMENUITEM_1_val = SUBMENUITEM_1.GetFloat(PropertyName.VAL);
            var SUBMENUITEM_2 = _world.GetObject(ObjectType.Skill, 325927899);
            SUBMENUITEM_2.SetFloat(231, SUBMENUITEM_1_val + 1f);
            var MAXMENUITEM_3 = _world.GetObject(ObjectType.Skill, 2770297815);
            var MAXMENUITEM_3_val = MAXMENUITEM_3.GetFloat(PropertyName.VAL);
            var SUBMENUITEM_4 = _world.GetObject(ObjectType.Skill, 325927899);
            var SUBMENUITEM_4_val = SUBMENUITEM_4.GetFloat(PropertyName.VAL);
            if (SUBMENUITEM_4_val > MAXMENUITEM_3_val)
            {
                var SUBMENUITEM_6 = _world.GetObject(ObjectType.Skill, 325927899);
                SUBMENUITEM_6.SetFloat(231, 1f);
            }
            var BIP01SND_7 = _world.AcknexObject.GetAcknexObject(371529582);
            _world.PlaySound(BIP01SND_7, 0.5f, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator VOLUMEUP(IAcknexObject MY, IAcknexObject THERE)
        {
            var SUBMENUITEM_1 = _world.GetObject(ObjectType.Skill, 325927899);
            var SUBMENUITEM_1_val = SUBMENUITEM_1.GetFloat(PropertyName.VAL);
            if (SUBMENUITEM_1_val > 2f)
            {
                goto DIFIC;
            }
            var SUBMENUITEM_3 = _world.GetObject(ObjectType.Skill, 325927899);
            var SUBMENUITEM_3_val = SUBMENUITEM_3.GetFloat(PropertyName.VAL);
            if (SUBMENUITEM_3_val > 1f)
            {
                goto MUSIC;
            }
            var BIP01SND_4 = _world.AcknexObject.GetAcknexObject(371529582);
            _world.PlaySound(BIP01SND_4, 0.5f, null);
            var SOUND_VOL_7 = _world.GetObject(ObjectType.Skill, 405);
            var SOUND_VOL_7_val = SOUND_VOL_7.GetFloat(PropertyName.VAL);
            if (SOUND_VOL_7_val < 0.96f)
            {
                var SOUND_VOL_9 = _world.GetObject(ObjectType.Skill, 405);
                var SOUND_VOL_9_val = SOUND_VOL_9.GetFloat(PropertyName.VAL);
                var SOUND_VOL_10 = _world.GetObject(ObjectType.Skill, 405);
                SOUND_VOL_10.SetFloat(231, SOUND_VOL_9_val + 0.05f);
            }
            var SOUND_VOL_11 = _world.GetObject(ObjectType.Skill, 405);
            var SOUND_VOL_11_val = SOUND_VOL_11.GetFloat(PropertyName.VAL);
            var SOUND_VOL_BUFFER_12 = _world.GetObject(ObjectType.Skill, 299848383);
            SOUND_VOL_BUFFER_12.SetFloat(231, SOUND_VOL_11_val);
            yield break;
            MUSIC:
            var BIP01SND_13 = _world.AcknexObject.GetAcknexObject(371529582);
            _world.PlaySound(BIP01SND_13, 0.5f, null);
            var CDAUDIO_VOL_16 = _world.GetObject(ObjectType.Skill, 407);
            var CDAUDIO_VOL_16_val = CDAUDIO_VOL_16.GetFloat(PropertyName.VAL);
            if (CDAUDIO_VOL_16_val < 0.96f)
            {
                var CDAUDIO_VOL_18 = _world.GetObject(ObjectType.Skill, 407);
                var CDAUDIO_VOL_18_val = CDAUDIO_VOL_18.GetFloat(PropertyName.VAL);
                var CDAUDIO_VOL_19 = _world.GetObject(ObjectType.Skill, 407);
                CDAUDIO_VOL_19.SetFloat(231, CDAUDIO_VOL_18_val + 0.05f);
            }
            var CDAUDIO_VOL_20 = _world.GetObject(ObjectType.Skill, 407);
            var CDAUDIO_VOL_20_val = CDAUDIO_VOL_20.GetFloat(PropertyName.VAL);
            var CDAUDIO_VOL_BUFFER_21 = _world.GetObject(ObjectType.Skill, 2594965391);
            CDAUDIO_VOL_BUFFER_21.SetFloat(231, CDAUDIO_VOL_20_val);
            yield break;
            DIFIC:
            var TOUGHNESS_23 = _world.GetObject(ObjectType.Skill, 1295621997);
            var TOUGHNESS_23_val = TOUGHNESS_23.GetFloat(PropertyName.VAL);
            var TOUGHNESS_24 = _world.GetObject(ObjectType.Skill, 1295621997);
            TOUGHNESS_24.SetFloat(231, TOUGHNESS_23_val + 0.1f);
            var BIP01SND_25 = _world.AcknexObject.GetAcknexObject(371529582);
            _world.PlaySound(BIP01SND_25, 0.5f, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator VOLUMEDOWN(IAcknexObject MY, IAcknexObject THERE)
        {
            var SUBMENUITEM_1 = _world.GetObject(ObjectType.Skill, 325927899);
            var SUBMENUITEM_1_val = SUBMENUITEM_1.GetFloat(PropertyName.VAL);
            if (SUBMENUITEM_1_val > 2f)
            {
                goto DIFIC;
            }
            var SUBMENUITEM_3 = _world.GetObject(ObjectType.Skill, 325927899);
            var SUBMENUITEM_3_val = SUBMENUITEM_3.GetFloat(PropertyName.VAL);
            if (SUBMENUITEM_3_val > 1f)
            {
                goto MUSIC;
            }
            var BIP01SND_4 = _world.AcknexObject.GetAcknexObject(371529582);
            _world.PlaySound(BIP01SND_4, 0.5f, null);
            var SOUND_VOL_7 = _world.GetObject(ObjectType.Skill, 405);
            var SOUND_VOL_7_val = SOUND_VOL_7.GetFloat(PropertyName.VAL);
            if (SOUND_VOL_7_val > 0.05f)
            {
                var SOUND_VOL_9 = _world.GetObject(ObjectType.Skill, 405);
                var SOUND_VOL_9_val = SOUND_VOL_9.GetFloat(PropertyName.VAL);
                var SOUND_VOL_10 = _world.GetObject(ObjectType.Skill, 405);
                SOUND_VOL_10.SetFloat(231, SOUND_VOL_9_val + -0.05f);
            }
            var SOUND_VOL_11 = _world.GetObject(ObjectType.Skill, 405);
            var SOUND_VOL_11_val = SOUND_VOL_11.GetFloat(PropertyName.VAL);
            var SOUND_VOL_BUFFER_12 = _world.GetObject(ObjectType.Skill, 299848383);
            SOUND_VOL_BUFFER_12.SetFloat(231, SOUND_VOL_11_val);
            yield break;
            MUSIC:
            var BIP01SND_13 = _world.AcknexObject.GetAcknexObject(371529582);
            _world.PlaySound(BIP01SND_13, 0.5f, null);
            var CDAUDIO_VOL_16 = _world.GetObject(ObjectType.Skill, 407);
            var CDAUDIO_VOL_16_val = CDAUDIO_VOL_16.GetFloat(PropertyName.VAL);
            if (CDAUDIO_VOL_16_val > 0.05f)
            {
                var CDAUDIO_VOL_18 = _world.GetObject(ObjectType.Skill, 407);
                var CDAUDIO_VOL_18_val = CDAUDIO_VOL_18.GetFloat(PropertyName.VAL);
                var CDAUDIO_VOL_19 = _world.GetObject(ObjectType.Skill, 407);
                CDAUDIO_VOL_19.SetFloat(231, CDAUDIO_VOL_18_val + -0.05f);
            }
            var CDAUDIO_VOL_20 = _world.GetObject(ObjectType.Skill, 407);
            var CDAUDIO_VOL_20_val = CDAUDIO_VOL_20.GetFloat(PropertyName.VAL);
            var CDAUDIO_VOL_BUFFER_21 = _world.GetObject(ObjectType.Skill, 2594965391);
            CDAUDIO_VOL_BUFFER_21.SetFloat(231, CDAUDIO_VOL_20_val);
            yield break;
            DIFIC:
            var TOUGHNESS_23 = _world.GetObject(ObjectType.Skill, 1295621997);
            var TOUGHNESS_23_val = TOUGHNESS_23.GetFloat(PropertyName.VAL);
            var TOUGHNESS_24 = _world.GetObject(ObjectType.Skill, 1295621997);
            TOUGHNESS_24.SetFloat(231, TOUGHNESS_23_val + -0.1f);
            var BIP01SND_25 = _world.AcknexObject.GetAcknexObject(371529582);
            _world.PlaySound(BIP01SND_25, 0.5f, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator HIDEWEAPON(IAcknexObject MY, IAcknexObject THERE)
        {
            var temp_1 = _world.AcknexObject?.GetAcknexObject(97);
            _world.SetSynonymObject(3446392348, temp_1);
            var temp_5 = _world.AcknexObject?.GetAcknexObject(157);
            _world.SetSynonymObject(2082126285, temp_5);
            var temp_9 = _world.AcknexObject?.GetAcknexObject(158);
            _world.SetSynonymObject(2082126286, temp_9);
            var temp_13 = _world.AcknexObject?.GetAcknexObject(161);
            _world.SetSynonymObject(2082126289, temp_13);
            var temp_16 = _world.AcknexObject?.GetAcknexObject(104);
            _world.SetSynonymObject(2360103138, temp_16);
            var temp_19 = _world.AcknexObject?.GetAcknexObject(39);
            _world.SetSynonymObject(2359884416, temp_19);
            var temp_22 = _world.AcknexObject?.GetAcknexObject(40);
            _world.SetSynonymObject(2674522018, temp_22);
            var temp_25 = _world.AcknexObject?.GetAcknexObject(41);
            _world.SetSynonymObject(552731872, temp_25);
            var temp_28 = _world.AcknexObject?.GetAcknexObject(42);
            _world.SetSynonymObject(2359635704, temp_28);
            var temp_31 = _world.AcknexObject?.GetAcknexObject(43);
            _world.SetSynonymObject(2360069548, temp_31);
            var temp_34 = _world.AcknexObject?.GetAcknexObject(44);
            _world.SetSynonymObject(2359983755, temp_34);
            var MAP_MODE_36 = _world.GetObject(ObjectType.Skill, 380);
            var MAP_MODE_36_val = MAP_MODE_36.GetFloat(PropertyName.VAL);
            var MAPMODE_37 = _world.GetObject(ObjectType.Skill, 3363205840);
            MAPMODE_37.SetFloat(231, MAP_MODE_36_val);
            _world.AcknexObject.SetAcknexObject(97, null);
            _world.AcknexObject.SetAcknexObject(78, null);
            _world.AcknexObject.SetAcknexObject(157, null);
            _world.AcknexObject.SetAcknexObject(158, null);
            _world.AcknexObject.SetAcknexObject(161, null);
            _world.AcknexObject.SetAcknexObject(104, null);
            _world.AcknexObject.SetAcknexObject(39, null);
            _world.AcknexObject.SetAcknexObject(92, null);
            _world.AcknexObject.SetAcknexObject(40, null);
            _world.AcknexObject.SetAcknexObject(41, null);
            _world.AcknexObject.SetAcknexObject(42, null);
            _world.AcknexObject.SetAcknexObject(43, null);
            _world.AcknexObject.SetAcknexObject(44, null);
            var MAP_MODE_68 = _world.GetObject(ObjectType.Skill, 380);
            MAP_MODE_68.SetFloat(231, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SHOWWEAPON(IAcknexObject MY, IAcknexObject THERE)
        {
            var FIRE_GUN_0 = _world.GetSynonymObject(3446392348);
            _world.AcknexObject.SetAcknexObject(97, FIRE_GUN_0);
            var FIRE_GUN_2 = _world.GetSynonymObject(3446392348);
            _world.AcknexObject.SetAcknexObject(78, FIRE_GUN_2);
            var LAYER12_4 = _world.GetSynonymObject(2082126285);
            _world.AcknexObject.SetAcknexObject(157, LAYER12_4);
            var LAYER13_7 = _world.GetSynonymObject(2082126286);
            _world.AcknexObject.SetAcknexObject(158, LAYER13_7);
            var LAYER16_10 = _world.GetSynonymObject(2082126289);
            _world.AcknexObject.SetAcknexObject(161, LAYER16_10);
            var SEL_TRIC_13 = _world.GetSynonymObject(2360103138);
            _world.AcknexObject.SetAcknexObject(104, SEL_TRIC_13);
            var SEL_NONE_15 = _world.GetSynonymObject(2359884416);
            _world.AcknexObject.SetAcknexObject(39, SEL_NONE_15);
            var SEL_NONE_17 = _world.GetSynonymObject(2359884416);
            _world.AcknexObject.SetAcknexObject(92, SEL_NONE_17);
            var SEL_MP5_19 = _world.GetSynonymObject(2674522018);
            _world.AcknexObject.SetAcknexObject(40, SEL_MP5_19);
            var SEL_BURST_21 = _world.GetSynonymObject(552731872);
            _world.AcknexObject.SetAcknexObject(41, SEL_BURST_21);
            var SEL_GRAN_23 = _world.GetSynonymObject(2359635704);
            _world.AcknexObject.SetAcknexObject(42, SEL_GRAN_23);
            var SEL_STNG_25 = _world.GetSynonymObject(2360069548);
            _world.AcknexObject.SetAcknexObject(43, SEL_STNG_25);
            var SEL_QGUN_27 = _world.GetSynonymObject(2359983755);
            _world.AcknexObject.SetAcknexObject(44, SEL_QGUN_27);
            var MAPMODE_29 = _world.GetObject(ObjectType.Skill, 3363205840);
            var MAPMODE_29_val = MAPMODE_29.GetFloat(PropertyName.VAL);
            var MAP_MODE_30 = _world.GetObject(ObjectType.Skill, 380);
            MAP_MODE_30.SetFloat(231, MAPMODE_29_val);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator TYPEGAME(IAcknexObject MY, IAcknexObject THERE)
        {
            var SUBMENUITEM_1 = _world.GetObject(ObjectType.Skill, 325927899);
            var SUBMENUITEM_1_val = SUBMENUITEM_1.GetFloat(PropertyName.VAL);
            if (SUBMENUITEM_1_val < 1f)
            {
                yield break;
            }
            var SUBMENUITEM_3 = _world.GetObject(ObjectType.Skill, 325927899);
            var SUBMENUITEM_3_val = SUBMENUITEM_3.GetFloat(PropertyName.VAL);
            if (SUBMENUITEM_3_val > 4f)
            {
                yield break;
            }
            var BIP02SND_4 = _world.AcknexObject.GetAcknexObject(371565519);
            _world.PlaySound(BIP02SND_4, 0.5f, null);
            _world.AcknexObject.SetAcknexObject(81, null);
            var temp_9 = _world.AcknexObject?.GetAcknexObject(82);
            _world.SetSynonymObject(223318999, temp_9);
            _world.AcknexObject.SetAcknexObject(82, null);
            var HERE_14 = _world.GetSynonymObject(703);
            var temp_15 = HERE_14?.GetAcknexObject(236);
            _world.SetSynonymObject(3158079557, temp_15);
            var LIFTSOUND_19 = _world.GetSynonymObject(3158079557);
            LIFTSOUND_19.SetFloat(285, 0f);
            var MOVE_MODE_21 = _world.GetObject(ObjectType.Skill, 362);
            MOVE_MODE_21.SetFloat(231, 0f);
            var SUBMENUITEM_23 = _world.GetObject(ObjectType.Skill, 325927899);
            var SUBMENUITEM_23_val = SUBMENUITEM_23.GetFloat(PropertyName.VAL);
            if (SUBMENUITEM_23_val == 1f)
            {
                var SAVEDGAME01_24 = _world.AcknexObject.GetAcknexObject(462276091);
                _world.ReadInkey(SAVEDGAME01_24);
            }
            var SUBMENUITEM_26 = _world.GetObject(ObjectType.Skill, 325927899);
            var SUBMENUITEM_26_val = SUBMENUITEM_26.GetFloat(PropertyName.VAL);
            if (SUBMENUITEM_26_val == 2f)
            {
                var SAVEDGAME02_27 = _world.AcknexObject.GetAcknexObject(462276092);
                _world.ReadInkey(SAVEDGAME02_27);
            }
            var SUBMENUITEM_29 = _world.GetObject(ObjectType.Skill, 325927899);
            var SUBMENUITEM_29_val = SUBMENUITEM_29.GetFloat(PropertyName.VAL);
            if (SUBMENUITEM_29_val == 3f)
            {
                var SAVEDGAME03_30 = _world.AcknexObject.GetAcknexObject(462276093);
                _world.ReadInkey(SAVEDGAME03_30);
            }
            var SUBMENUITEM_32 = _world.GetObject(ObjectType.Skill, 325927899);
            var SUBMENUITEM_32_val = SUBMENUITEM_32.GetFloat(PropertyName.VAL);
            if (SUBMENUITEM_32_val == 4f)
            {
                var SAVEDGAME04_33 = _world.AcknexObject.GetAcknexObject(462276094);
                _world.ReadInkey(SAVEDGAME04_33);
            }
            var IFESC_34 = _world.GetSynonymObject(223318999);
            _world.AcknexObject.SetAcknexObject(82, IFESC_34);
            var RESULT_37 = _world.GetObject(ObjectType.Skill, 446);
            var RESULT_37_val = RESULT_37.GetFloat(PropertyName.VAL);
            if (RESULT_37_val < 0f)
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
            _world.AcknexObject.SetAcknexObject(145, null);
            _world.AcknexObject.SetAcknexObject(129, null);
            var SHOWMAINMENU_45 = _world.AcknexObject.GetAcknexObject(3665306792);
            _world.AcknexObject.SetAcknexObject(82, SHOWMAINMENU_45);
            _world.AcknexObject.SetAcknexObject(105, null);
            _world.AcknexObject.SetAcknexObject(106, null);
            _world.AcknexObject.SetAcknexObject(107, null);
            _world.AcknexObject.SetAcknexObject(108, null);
            var FIRE_GUN_55 = _world.GetSynonymObject(3446392348);
            _world.AcknexObject.SetAcknexObject(97, FIRE_GUN_55);
            var FIRE_GUN_57 = _world.GetSynonymObject(3446392348);
            _world.AcknexObject.SetAcknexObject(78, FIRE_GUN_57);
            var LAYER12_59 = _world.GetSynonymObject(2082126285);
            _world.AcknexObject.SetAcknexObject(157, LAYER12_59);
            var LAYER13_62 = _world.GetSynonymObject(2082126286);
            _world.AcknexObject.SetAcknexObject(158, LAYER13_62);
            var LAYER16_65 = _world.GetSynonymObject(2082126289);
            _world.AcknexObject.SetAcknexObject(161, LAYER16_65);
            var SEL_TRIC_68 = _world.GetSynonymObject(2360103138);
            _world.AcknexObject.SetAcknexObject(104, SEL_TRIC_68);
            var SEL_NONE_70 = _world.GetSynonymObject(2359884416);
            _world.AcknexObject.SetAcknexObject(39, SEL_NONE_70);
            var SEL_MP5_72 = _world.GetSynonymObject(2674522018);
            _world.AcknexObject.SetAcknexObject(40, SEL_MP5_72);
            var SEL_BURST_74 = _world.GetSynonymObject(552731872);
            _world.AcknexObject.SetAcknexObject(41, SEL_BURST_74);
            var SEL_GRAN_76 = _world.GetSynonymObject(2359635704);
            _world.AcknexObject.SetAcknexObject(42, SEL_GRAN_76);
            var SEL_STNG_78 = _world.GetSynonymObject(2360069548);
            _world.AcknexObject.SetAcknexObject(43, SEL_STNG_78);
            var SEL_QGUN_80 = _world.GetSynonymObject(2359983755);
            _world.AcknexObject.SetAcknexObject(44, SEL_QGUN_80);
            var MAPMODE_82 = _world.GetObject(ObjectType.Skill, 3363205840);
            var MAPMODE_82_val = MAPMODE_82.GetFloat(PropertyName.VAL);
            var MAP_MODE_83 = _world.GetObject(ObjectType.Skill, 380);
            MAP_MODE_83.SetFloat(231, MAPMODE_82_val);
            var SECCOUNTER_85 = _world.GetObject(ObjectType.Skill, 2748572712);
            SECCOUNTER_85.SetFloat(231, 0f);
            var MOVE_MODE_87 = _world.GetObject(ObjectType.Skill, 362);
            MOVE_MODE_87.SetFloat(231, 1f);
            var BLACK_88 = _world.AcknexObject.GetAcknexObject(215228298);
            _world.FadePal(BLACK_88, 0f);
            //Unknown keyword: SAVE
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CHOOSEGAME(IAcknexObject MY, IAcknexObject THERE)
        {
            var SUBMENUITEM_1 = _world.GetObject(ObjectType.Skill, 325927899);
            var SUBMENUITEM_1_val = SUBMENUITEM_1.GetFloat(PropertyName.VAL);
            if (SUBMENUITEM_1_val < 1f)
            {
                yield break;
            }
            var SUBMENUITEM_3 = _world.GetObject(ObjectType.Skill, 325927899);
            var SUBMENUITEM_3_val = SUBMENUITEM_3.GetFloat(PropertyName.VAL);
            if (SUBMENUITEM_3_val > 4f)
            {
                yield break;
            }
            var BIP02SND_4 = _world.AcknexObject.GetAcknexObject(371565519);
            _world.PlaySound(BIP02SND_4, 0.5f, null);
            _world.AcknexObject.SetAcknexObject(81, null);
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
            var MOVE_MODE_9 = _world.GetObject(ObjectType.Skill, 362);
            MOVE_MODE_9.SetFloat(231, 0f);
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
            var MENUITEM_1 = _world.GetObject(ObjectType.Skill, 118534065);
            var MENUITEM_1_val = MENUITEM_1.GetFloat(PropertyName.VAL);
            if (MENUITEM_1_val < 1f)
            {
                yield break;
            }
            var MENUITEM_3 = _world.GetObject(ObjectType.Skill, 118534065);
            var MENUITEM_3_val = MENUITEM_3.GetFloat(PropertyName.VAL);
            if (MENUITEM_3_val > 4f)
            {
                yield break;
            }
            _world.AcknexObject.SetAcknexObject(81, null);
            var MENUITEM_7 = _world.GetObject(ObjectType.Skill, 118534065);
            var MENUITEM_7_val = MENUITEM_7.GetFloat(PropertyName.VAL);
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
            var MENUITEM_9 = _world.GetObject(ObjectType.Skill, 118534065);
            var MENUITEM_9_val = MENUITEM_9.GetFloat(PropertyName.VAL);
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
            var MENUITEM_11 = _world.GetObject(ObjectType.Skill, 118534065);
            var MENUITEM_11_val = MENUITEM_11.GetFloat(PropertyName.VAL);
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
            var MENUITEM_13 = _world.GetObject(ObjectType.Skill, 118534065);
            var MENUITEM_13_val = MENUITEM_13.GetFloat(PropertyName.VAL);
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
            var MOVE_MODE_1 = _world.GetObject(ObjectType.Skill, 362);
            MOVE_MODE_1.SetFloat(231, 1f);
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
            var BIP02SND_0 = _world.AcknexObject.GetAcknexObject(371565519);
            _world.PlaySound(BIP02SND_0, 0.5f, null);
            _world.AcknexObject.SetAcknexObject(37, null);
            _world.AcknexObject.SetAcknexObject(66, null);
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
            var BIP03SND_0 = _world.AcknexObject.GetAcknexObject(371601456);
            _world.PlaySound(BIP03SND_0, 0.5f, null);
            var ASKFOREXITTEXT_2 = _world.AcknexObject.GetAcknexObject(91537234);
            _world.AcknexObject.SetAcknexObject(129, ASKFOREXITTEXT_2);
            _world.AcknexObject.SetAcknexObject(105, null);
            _world.AcknexObject.SetAcknexObject(106, null);
            _world.AcknexObject.SetAcknexObject(107, null);
            _world.AcknexObject.SetAcknexObject(108, null);
            var EXITGAME_13 = _world.AcknexObject.GetAcknexObject(1339506369);
            _world.AcknexObject.SetAcknexObject(66, EXITGAME_13);
            var EXITGAME_15 = _world.AcknexObject.GetAcknexObject(1339506369);
            _world.AcknexObject.SetAcknexObject(71, EXITGAME_15);
            var RESETANSWER_17 = _world.AcknexObject.GetAcknexObject(192524992);
            _world.AcknexObject.SetAcknexObject(61, RESETANSWER_17);
            var HLP02STR_19 = _world.AcknexObject.GetAcknexObject(2258589740);
            _world.SetSynonymObject(361798934, HLP02STR_19);
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
            var MOVE_MODE_1 = _world.GetObject(ObjectType.Skill, 362);
            MOVE_MODE_1.SetFloat(231, 1f);
            var BLACK_2 = _world.AcknexObject.GetAcknexObject(215228298);
            _world.FadePal(BLACK_2, 0.4f);
            var BIP03SND_4 = _world.AcknexObject.GetAcknexObject(371601456);
            _world.PlaySound(BIP03SND_4, 0.5f, null);
            var MENUITEM_7 = _world.GetObject(ObjectType.Skill, 118534065);
            MENUITEM_7.SetFloat(231, 3f);
            var MAXMENUITEM_9 = _world.GetObject(ObjectType.Skill, 2770297815);
            MAXMENUITEM_9.SetFloat(231, 3f);
            var HIDEMENU_10 = _world.AcknexObject.GetAcknexObject(2235387612);
            _world.AcknexObject.SetAcknexObject(82, HIDEMENU_10);
            _world.AcknexObject.SetAcknexObject(105, null);
            _world.AcknexObject.SetAcknexObject(106, null);
            _world.AcknexObject.SetAcknexObject(107, null);
            _world.AcknexObject.SetAcknexObject(108, null);
            var MENUPANEL_20 = _world.AcknexObject.GetAcknexObject(3919220402);
            _world.AcknexObject.SetAcknexObject(145, MENUPANEL_20);
            var PLEASEWAITTEXT_23 = _world.AcknexObject.GetAcknexObject(1780034721);
            _world.AcknexObject.SetAcknexObject(129, PLEASEWAITTEXT_23);
            var LEVEL_STRING_27 = _world.GetSynonymObject(270057211);
            if (LEVEL_STRING_27 != null)
            {
                goto CONT;
            }
            var LOAD08STR_28 = _world.AcknexObject.GetAcknexObject(2634792366);
            _world.SetSynonymObject(361798934, LOAD08STR_28);
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
            var PLAYER_HEALTH_31 = _world.GetObject(ObjectType.Skill, 1469755439);
            PLAYER_HEALTH_31.SetFloat(231, 100f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PLAYER_HEALTH_34 = _world.GetObject(ObjectType.Skill, 1469755439);
            PLAYER_HEALTH_34.SetFloat(231, 100f);
            //Unknown keyword: MAP
            //Unknown keyword: LOCATE
            _world.AcknexObject.SetAcknexObject(145, null);
            _world.AcknexObject.SetAcknexObject(129, null);
            yield break;
            CONT:
            var LOAD_STRING_41 = _world.GetSynonymObject(1876859747);
            _world.SetSynonymObject(361798934, LOAD_STRING_41);
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
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            Application.Quit();
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator EXPLOSIONSTART(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(189, null);
            var EXPLOSIONSMOKE_3 = _world.AcknexObject.GetAcknexObject(277450317);
            var MY_5 = MY;
            MY_5.SetAcknexObject(190, EXPLOSIONSMOKE_3);
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
            var EXP01ATEX_0 = _world.AcknexObject.GetAcknexObject(269389709);
            var MY_2 = MY;
            MY_2.SetAcknexObject(164, EXP01ATEX_0);
            var EXPLOSIONEND_3 = _world.AcknexObject.GetAcknexObject(3352602533);
            var MY_5 = MY;
            MY_5.SetAcknexObject(190, EXPLOSIONEND_3);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator EXPLOSIONEND(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(190, null);
            var MY_5 = MY;
            MY_5.SetFloat(204, 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator EXPLODETARGET(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2?.GetAcknexObject(199);
            if (temp_3 == null)
            {
                yield break;
            }
            var SQRTARGETDIST_4 = _world.GetObject(ObjectType.Skill, 4061522718);
            var SQRTARGETDIST_5 = _world.GetObject(ObjectType.Skill, 4061522718);
            var SQRTARGETDIST_5_val = SQRTARGETDIST_5.GetFloat(PropertyName.VAL);
            var MY_9 = MY;
            var temp_10 = MY_9.GetFloat(217);
            var MY_13 = MY;
            var temp_14 = MY_13.GetFloat(195);
            var MY_19 = MY;
            var temp_20 = MY_19.GetFloat(217);
            var MY_23 = MY;
            var temp_24 = MY_23.GetFloat(195);
            var MY_31 = MY;
            var temp_32 = MY_31.GetFloat(218);
            var MY_35 = MY;
            var temp_36 = MY_35.GetFloat(196);
            var MY_41 = MY;
            var temp_42 = MY_41.GetFloat(218);
            var MY_45 = MY;
            var temp_46 = MY_45.GetFloat(196);
            SQRTARGETDIST_4.SetFloat(231, ((temp_10 - temp_14) * (temp_20 - temp_24)) + ((temp_32 - temp_36) * (temp_42 - temp_46)));
            var SQRTARGETDIST_50 = _world.GetObject(ObjectType.Skill, 4061522718);
            var SQRTARGETDIST_50_val = SQRTARGETDIST_50.GetFloat(PropertyName.VAL);
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
            var EXPLOSIONSTART_0 = _world.AcknexObject.GetAcknexObject(277686876);
            var MY_2 = MY;
            MY_2.SetAcknexObject(189, EXPLOSIONSTART_0);
            var MY_5 = MY;
            MY_5.SetAcknexObject(190, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(191, null);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, null);
            var MY_14 = MY;
            MY_14.SetAcknexObject(192, null);
            var MY_17 = MY;
            MY_17.SetFloat(206, 1f);
            var MY_18 = MY;
            _world.SetSynonymObject(3704223598, MY_18);
            var EXPLOSION_ON_21 = _world.GetObject(ObjectType.Skill, 3352630890);
            EXPLOSION_ON_21.SetFloat(231, 1f);
            var SHOOT_SECTOR_23 = _world.GetObject(ObjectType.Skill, 440);
            SHOOT_SECTOR_23.SetFloat(231, 6.283f);
            var SHOOT_RANGE_25 = _world.GetObject(ObjectType.Skill, 439);
            SHOOT_RANGE_25.SetFloat(231, 20f);
            var SHOOT_FAC_27 = _world.GetObject(ObjectType.Skill, 441);
            SHOOT_FAC_27.SetFloat(231, 10f);
            var MY_28 = MY;
            _world.Explode(MY_28, MY, THERE);
            var HIT_DIST_30 = _world.GetObject(ObjectType.Skill, 444);
            var HIT_DIST_30_val = HIT_DIST_30.GetFloat(PropertyName.VAL);
            if (HIT_DIST_30_val == 0f)
            {
                goto CONT;
            }
            var RESULT_31 = _world.GetObject(ObjectType.Skill, 446);
            var RESULT_31_val = RESULT_31.GetFloat(PropertyName.VAL);
            var PLAYER_RESULT_32 = _world.GetObject(ObjectType.Skill, 1861765784);
            PLAYER_RESULT_32.SetFloat(231, RESULT_31_val);
            var SHOOT_FAC_34 = _world.GetObject(ObjectType.Skill, 441);
            SHOOT_FAC_34.SetFloat(231, 0f);
            var SHOOT_RANGE_36 = _world.GetObject(ObjectType.Skill, 439);
            SHOOT_RANGE_36.SetFloat(231, 40f);
            var MY_37 = MY;
            _world.Shoot(MY_37, MY, THERE);
            var HIT_DIST_39 = _world.GetObject(ObjectType.Skill, 444);
            var HIT_DIST_39_val = HIT_DIST_39.GetFloat(PropertyName.VAL);
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
            MY_42.SetFloat(168, 0f);
            var MY_45 = MY;
            MY_45.SetFloat(207, 0f);
            var MY_48 = MY;
            MY_48.SetFloat(213, 0f);
            var MY_51 = MY;
            MY_51.SetFloat(165, -0.05f);
            var EXP01TEX_52 = _world.AcknexObject.GetAcknexObject(1569990796);
            var MY_54 = MY;
            MY_54.SetAcknexObject(164, EXP01TEX_52);
            var MY_57 = MY;
            MY_57.SetFloat(221, 1f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var EXPLOSION_ON_60 = _world.GetObject(ObjectType.Skill, 3352630890);
            EXPLOSION_ON_60.SetFloat(231, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator AIMMISSILE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MISSILECOUNTER_1 = _world.GetObject(ObjectType.Skill, 3933088227);
            var MISSILECOUNTER_1_val = MISSILECOUNTER_1.GetFloat(PropertyName.VAL);
            var MISSILECOUNTER_2 = _world.GetObject(ObjectType.Skill, 3933088227);
            MISSILECOUNTER_2.SetFloat(231, MISSILECOUNTER_1_val + 1f);
            var MISSILECOUNTER_4 = _world.GetObject(ObjectType.Skill, 3933088227);
            var MISSILECOUNTER_4_val = MISSILECOUNTER_4.GetFloat(PropertyName.VAL);
            if (MISSILECOUNTER_4_val == 16f)
            {
                var MY_7 = MY;
                MY_7.SetFloat(206, 0f);
            }
            var MISSILECOUNTER_9 = _world.GetObject(ObjectType.Skill, 3933088227);
            var MISSILECOUNTER_9_val = MISSILECOUNTER_9.GetFloat(PropertyName.VAL);
            if (MISSILECOUNTER_9_val < 48f)
            {
                yield break;
            }
            var BULLET_10 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_12 = MY;
            MY_12.SetAcknexObject(199, BULLET_10);
            var MISSILECOUNTER_14 = _world.GetObject(ObjectType.Skill, 3933088227);
            var MISSILECOUNTER_14_val = MISSILECOUNTER_14.GetFloat(PropertyName.VAL);
            if (MISSILECOUNTER_14_val < 80f)
            {
                yield break;
            }
            var MISSILECOUNTER_16 = _world.GetObject(ObjectType.Skill, 3933088227);
            MISSILECOUNTER_16.SetFloat(231, 0f);
            var MY_19 = MY;
            var temp_20 = MY_19.GetFloat(205);
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
            MY_2.SetAcknexObject(189, null);
            var IMPLOSIONCRUSH_3 = _world.AcknexObject.GetAcknexObject(2471910572);
            var MY_5 = MY;
            MY_5.SetAcknexObject(190, IMPLOSIONCRUSH_3);
            var MY_8 = MY;
            MY_8.SetFloat(204, 0f);
            var MY_11 = MY;
            MY_11.SetFloat(221, 1f);
            //Unknown keyword: LOCATE
            var MY_14 = MY;
            MY_14.SetFloat(213, 0f);
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
            var IMPL01ATEX_0 = _world.AcknexObject.GetAcknexObject(2291086482);
            var MY_2 = MY;
            MY_2.SetAcknexObject(164, IMPL01ATEX_0);
            var IMPLODELIGHT_3 = _world.AcknexObject.GetAcknexObject(1148133871);
            _world.AcknexObject.SetAcknexObject(12, IMPLODELIGHT_3);
            var IMPLOSIONFLARE_6 = _world.AcknexObject.GetAcknexObject(2475230897);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, IMPLOSIONFLARE_6);
            var MY_11 = MY;
            MY_11.SetFloat(221, 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator IMPLOSIONFLARE(IAcknexObject MY, IAcknexObject THERE)
        {
            var IMPL01BTEX_0 = _world.AcknexObject.GetAcknexObject(2291122419);
            var MY_2 = MY;
            MY_2.SetAcknexObject(164, IMPL01BTEX_0);
            var IMPLOSIONEND_3 = _world.AcknexObject.GetAcknexObject(3500561246);
            var MY_5 = MY;
            MY_5.SetAcknexObject(190, IMPLOSIONEND_3);
            var MY_8 = MY;
            MY_8.SetFloat(221, 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator IMPLOSIONEND(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(190, null);
            var MY_3 = MY;
            _world.SetSynonymObject(3704223598, MY_3);
            var FOLLOW_5 = _world.AcknexObject.GetAcknexObject(2968039200);
            var MY_7 = MY;
            var temp_8 = MY_7?.GetAcknexObject(199);
            if (temp_8 != FOLLOW_5)
            {
                var EXPLOSION_ON_10 = _world.GetObject(ObjectType.Skill, 3352630890);
                EXPLOSION_ON_10.SetFloat(231, 2f);
            }
            var SHOOT_RANGE_12 = _world.GetObject(ObjectType.Skill, 439);
            SHOOT_RANGE_12.SetFloat(231, 80f);
            var SHOOT_FAC_14 = _world.GetObject(ObjectType.Skill, 441);
            SHOOT_FAC_14.SetFloat(231, 0.05f);
            var MY_15 = MY;
            _world.Explode(MY_15, MY, THERE);
            var MY_18 = MY;
            MY_18.SetFloat(204, 1f);
            var MY_21 = MY;
            var temp_22 = MY_21.GetFloat(205);
            if (temp_22 == 1f)
            {
                var RENDER_MODE_24 = _world.GetObject(ObjectType.Skill, 361);
                RENDER_MODE_24.SetFloat(231, 1f);
            }
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var EXPLOSION_ON_27 = _world.GetObject(ObjectType.Skill, 3352630890);
            EXPLOSION_ON_27.SetFloat(231, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator IMPLODEPARTICLE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(191, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(209, null);
            var MY_6 = MY;
            _world.SetSynonymObject(3704223598, MY_6);
            var FOLLOW_8 = _world.AcknexObject.GetAcknexObject(2968039200);
            var MY_10 = MY;
            var temp_11 = MY_10?.GetAcknexObject(199);
            if (temp_11 != FOLLOW_8)
            {
                var EXPLOSION_ON_13 = _world.GetObject(ObjectType.Skill, 3352630890);
                EXPLOSION_ON_13.SetFloat(231, 2f);
            }
            var SHOOT_RANGE_15 = _world.GetObject(ObjectType.Skill, 439);
            SHOOT_RANGE_15.SetFloat(231, 10f);
            var SHOOT_FAC_17 = _world.GetObject(ObjectType.Skill, 441);
            SHOOT_FAC_17.SetFloat(231, 0.05f);
            var MY_18 = MY;
            _world.Explode(MY_18, MY, THERE);
            var MY_21 = MY;
            MY_21.SetFloat(207, 0f);
            var MY_24 = MY;
            MY_24.SetFloat(206, 1f);
            var MY_27 = MY;
            MY_27.SetFloat(168, 0f);
            var MY_30 = MY;
            var temp_31 = MY_30.GetFloat(165);
            var MY_33 = MY;
            MY_33.SetFloat(165, temp_31 + -2.5f);
            var IMPL01TEX_34 = _world.AcknexObject.GetAcknexObject(4234264817);
            var MY_36 = MY;
            MY_36.SetAcknexObject(164, IMPL01TEX_34);
            var IMPLOSIONSTART_37 = _world.AcknexObject.GetAcknexObject(2490935381);
            var MY_39 = MY;
            MY_39.SetAcknexObject(189, IMPLOSIONSTART_37);
            var MY_42 = MY;
            MY_42.SetFloat(221, 1f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var EXPLOSION_ON_45 = _world.GetObject(ObjectType.Skill, 3352630890);
            EXPLOSION_ON_45.SetFloat(231, 0f);
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
            var PARTICLE_1 = _world.GetSynonymObject(2704244193);
            if (PARTICLE_1 == null)
            {
                yield break;
            }
            var DISTX_3 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_3_val = DISTX_3.GetFloat(PropertyName.VAL);
            if (DISTX_3_val != 0f)
            {
                var PARTICLE_5 = _world.GetSynonymObject(2704244193);
                var PARTICLE_7 = _world.GetSynonymObject(2704244193);
                var temp_8 = PARTICLE_7.GetFloat(169);
                var DISTZ_9 = _world.GetObject(ObjectType.Skill, 217512507);
                var DISTZ_9_val = DISTZ_9.GetFloat(PropertyName.VAL);
                var DISTX_11 = _world.GetObject(ObjectType.Skill, 217512505);
                var DISTX_11_val = DISTX_11.GetFloat(PropertyName.VAL);
                PARTICLE_5.SetFloat(169, DISTZ_9_val / DISTX_11_val);
            }
            var PARTICLE_14 = _world.GetSynonymObject(2704244193);
            var temp_15 = PARTICLE_14.GetFloat(169);
            if (temp_15 < 0f)
            {
                var PARTICLE_17 = _world.GetSynonymObject(2704244193);
                var PARTICLE_19 = _world.GetSynonymObject(2704244193);
                var temp_20 = PARTICLE_19.GetFloat(169);
                var PARTICLE_23 = _world.GetSynonymObject(2704244193);
                var temp_24 = PARTICLE_23.GetFloat(169);
                PARTICLE_17.SetFloat(169, -temp_24);
            }
            var MY_27 = MY;
            MY_27.SetFloat(220, 1f);
            var PARTICLE_30 = _world.GetSynonymObject(2704244193);
            PARTICLE_30.SetFloat(168, 2f);
            var MY_31 = MY;
            var PARTICLE_33 = _world.GetSynonymObject(2704244193);
            PARTICLE_33.SetAcknexObject(199, MY_31);
            var EXPLOSION_CENTER_35 = _world.GetSynonymObject(3704223598);
            var temp_36 = EXPLOSION_CENTER_35.GetFloat(195);
            var PARTICLE_38 = _world.GetSynonymObject(2704244193);
            PARTICLE_38.SetFloat(195, temp_36);
            var EXPLOSION_CENTER_40 = _world.GetSynonymObject(3704223598);
            var temp_41 = EXPLOSION_CENTER_40.GetFloat(196);
            var PARTICLE_43 = _world.GetSynonymObject(2704244193);
            PARTICLE_43.SetFloat(196, temp_41);
            var PARTICLE_46 = _world.GetSynonymObject(2704244193);
            PARTICLE_46.SetFloat(165, 2f);
            //Unknown keyword: LOCATE
            var PARTICLE_49 = _world.GetSynonymObject(2704244193);
            PARTICLE_49.SetFloat(213, 0f);
            var PRTCTEX_50 = _world.AcknexObject.GetAcknexObject(3612333943);
            var PARTICLE_52 = _world.GetSynonymObject(2704244193);
            PARTICLE_52.SetAcknexObject(164, PRTCTEX_50);
            var IMPLODEPARTICLE_53 = _world.AcknexObject.GetAcknexObject(372812267);
            var PARTICLE_55 = _world.GetSynonymObject(2704244193);
            PARTICLE_55.SetAcknexObject(191, IMPLODEPARTICLE_53);
            var LOCATEPARTICLE_56 = _world.AcknexObject.GetAcknexObject(2894381625);
            var PARTICLE_58 = _world.GetSynonymObject(2704244193);
            PARTICLE_58.SetAcknexObject(190, LOCATEPARTICLE_56);
            var PARTICLE_61 = _world.GetSynonymObject(2704244193);
            PARTICLE_61.SetFloat(204, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator LOCATEPARTICLE(IAcknexObject MY, IAcknexObject THERE)
        {
            var SHOOT_RANGE_1 = _world.GetObject(ObjectType.Skill, 439);
            SHOOT_RANGE_1.SetFloat(231, 100f);
            var SHOOT_FAC_3 = _world.GetObject(ObjectType.Skill, 441);
            SHOOT_FAC_3.SetFloat(231, 0f);
            var MY_4 = MY;
            _world.Explode(MY_4, MY, THERE);
            var HIT_MINDIST_6 = _world.GetObject(ObjectType.Skill, 445);
            var HIT_MINDIST_6_val = HIT_MINDIST_6.GetFloat(PropertyName.VAL);
            if (HIT_MINDIST_6_val == 0f)
            {
                goto VANISH;
            }
            var HIT_9 = _world.GetSynonymObject(704);
            var temp_10 = HIT_9.GetFloat(205);
            if (temp_10 == 0f)
            {
                yield break;
            }
            var HIT_12 = _world.GetSynonymObject(704);
            if (HIT_12 == null)
            {
                yield break;
            }
            var HIT_13 = _world.GetSynonymObject(704);
            var MY_15 = MY;
            MY_15.SetAcknexObject(199, HIT_13);
            var DISTX_16 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_17 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_17_val = DISTX_17.GetFloat(PropertyName.VAL);
            var HIT_X_19 = _world.GetObject(ObjectType.Skill, 448);
            var HIT_X_19_val = HIT_X_19.GetFloat(PropertyName.VAL);
            var EXPLOSION_CENTER_22 = _world.GetSynonymObject(3704223598);
            var temp_23 = EXPLOSION_CENTER_22.GetFloat(195);
            var HIT_X_27 = _world.GetObject(ObjectType.Skill, 448);
            var HIT_X_27_val = HIT_X_27.GetFloat(PropertyName.VAL);
            var EXPLOSION_CENTER_30 = _world.GetSynonymObject(3704223598);
            var temp_31 = EXPLOSION_CENTER_30.GetFloat(195);
            var HIT_Y_35 = _world.GetObject(ObjectType.Skill, 449);
            var HIT_Y_35_val = HIT_Y_35.GetFloat(PropertyName.VAL);
            var EXPLOSION_CENTER_38 = _world.GetSynonymObject(3704223598);
            var temp_39 = EXPLOSION_CENTER_38.GetFloat(196);
            var HIT_Y_43 = _world.GetObject(ObjectType.Skill, 449);
            var HIT_Y_43_val = HIT_Y_43.GetFloat(PropertyName.VAL);
            var EXPLOSION_CENTER_46 = _world.GetSynonymObject(3704223598);
            var temp_47 = EXPLOSION_CENTER_46.GetFloat(196);
            DISTX_16.SetFloat(231, (HIT_X_19_val - temp_23) * (HIT_X_27_val - temp_31) + (HIT_Y_35_val - temp_39) * (HIT_Y_43_val - temp_47));
            var DISTX_49 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_49_val = DISTX_49.GetFloat(PropertyName.VAL);
            var DISTX_50 = _world.GetObject(ObjectType.Skill, 217512505);
            DISTX_50.SetFloat(231, MathUtils.Sqrt(DISTX_49_val));
            var DISTZ_51 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_52 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_52_val = DISTZ_52.GetFloat(PropertyName.VAL);
            var HIT_54 = _world.GetSynonymObject(704);
            var temp_55 = HIT_54.GetFloat(200);
            var MY_58 = MY;
            var temp_59 = MY_58.GetFloat(200);
            DISTZ_51.SetFloat(231, temp_55 - temp_59);
            var DISTX_61 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_61_val = DISTX_61.GetFloat(PropertyName.VAL);
            if (DISTX_61_val != 0f)
            {
                var MY_63 = MY;
                var MY_65 = MY;
                var temp_66 = MY_65.GetFloat(169);
                var DISTZ_67 = _world.GetObject(ObjectType.Skill, 217512507);
                var DISTZ_67_val = DISTZ_67.GetFloat(PropertyName.VAL);
                var DISTX_69 = _world.GetObject(ObjectType.Skill, 217512505);
                var DISTX_69_val = DISTX_69.GetFloat(PropertyName.VAL);
                MY_63.SetFloat(169, DISTZ_67_val / DISTX_69_val);
            }
            var MY_72 = MY;
            var temp_73 = MY_72.GetFloat(169);
            if (temp_73 < 0f)
            {
                var MY_75 = MY;
                var MY_77 = MY;
                var temp_78 = MY_77.GetFloat(169);
                var MY_81 = MY;
                var temp_82 = MY_81.GetFloat(169);
                MY_75.SetFloat(169, -temp_82);
            }
            yield break;
            VANISH:
            var MY_85 = MY;
            var temp_86 = MY_85.GetFloat(213);
            if (temp_86 == 0f)
            {
                //Unknown keyword: LOCATE
            }
            var MY_89 = MY;
            var temp_90 = MY_89.GetFloat(205);
            if (temp_90 == 0f)
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
            var temp_3 = MY_2.GetFloat(202);
            if (temp_3 > 8f)
            {
                yield break;
            }
            var PLAYER_ARMOUR_4 = _world.GetObject(ObjectType.Skill, 1211659215);
            var PLAYER_ARMOUR_5 = _world.GetObject(ObjectType.Skill, 1211659215);
            var PLAYER_ARMOUR_5_val = PLAYER_ARMOUR_5.GetFloat(PropertyName.VAL);
            var PLAYER_ARMOUR_6 = _world.GetObject(ObjectType.Skill, 1211659215);
            var PLAYER_ARMOUR_6_val = PLAYER_ARMOUR_6.GetFloat(PropertyName.VAL);
            PLAYER_ARMOUR_4.SetFloat(231, PLAYER_ARMOUR_6_val / 2f);
            var PLAYER_RESULT_9 = _world.GetObject(ObjectType.Skill, 1861765784);
            var PLAYER_RESULT_10 = _world.GetObject(ObjectType.Skill, 1861765784);
            var PLAYER_RESULT_10_val = PLAYER_RESULT_10.GetFloat(PropertyName.VAL);
            PLAYER_RESULT_9.SetFloat(231, 10f * (UnityEngine.Random.value + 0.5f));
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
            var QGUN04SND_18 = _world.AcknexObject.GetAcknexObject(2622058161);
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
            var temp_3 = MY_2.GetFloat(173);
            var MY_5 = MY;
            MY_5.SetFloat(173, temp_3 + 1f);
            var MY_8 = MY;
            var temp_9 = MY_8.GetFloat(173);
            if (temp_9 < 8f)
            {
                yield break;
            }
            var MY_12 = MY;
            MY_12.SetFloat(173, 0f);
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
            var GRAN1ACT_2 = _world.AcknexObject.GetAcknexObject(1197183582);
            var temp_3 = GRAN1ACT_2.GetFloat(204);
            if (temp_3 != 1f)
            {
                goto GRANADE1;
            }
            var GRAN1ACT_4 = _world.AcknexObject.GetAcknexObject(1197183582);
            _world.SetSynonymObject(556898879, GRAN1ACT_4);
            yield break;
            GRANADE1:
            var GRAN11ACT_8 = _world.AcknexObject.GetAcknexObject(851742895);
            var temp_9 = GRAN11ACT_8.GetFloat(204);
            if (temp_9 != 1f)
            {
                goto GRANADE2;
            }
            var GRAN11ACT_10 = _world.AcknexObject.GetAcknexObject(851742895);
            _world.SetSynonymObject(556898879, GRAN11ACT_10);
            yield break;
            GRANADE2:
            var GRAN12ACT_14 = _world.AcknexObject.GetAcknexObject(851778832);
            var temp_15 = GRAN12ACT_14.GetFloat(204);
            if (temp_15 != 1f)
            {
                goto GRANADE3;
            }
            var GRAN12ACT_16 = _world.AcknexObject.GetAcknexObject(851778832);
            _world.SetSynonymObject(556898879, GRAN12ACT_16);
            yield break;
            GRANADE3:
            var GRAN13ACT_20 = _world.AcknexObject.GetAcknexObject(851814769);
            var temp_21 = GRAN13ACT_20.GetFloat(204);
            if (temp_21 != 1f)
            {
                goto GRANADE4;
            }
            var GRAN13ACT_22 = _world.AcknexObject.GetAcknexObject(851814769);
            _world.SetSynonymObject(556898879, GRAN13ACT_22);
            yield break;
            GRANADE4:
            var GRAN14ACT_26 = _world.AcknexObject.GetAcknexObject(851850706);
            var temp_27 = GRAN14ACT_26.GetFloat(204);
            if (temp_27 != 1f)
            {
                goto REFUSE;
            }
            var GRAN14ACT_28 = _world.AcknexObject.GetAcknexObject(851850706);
            _world.SetSynonymObject(556898879, GRAN14ACT_28);
            yield break;
            REFUSE:
            _world.SetSynonymObject(556898879, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CHOOSEMISSILE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MISS1ACT_2 = _world.AcknexObject.GetAcknexObject(1181860530);
            var temp_3 = MISS1ACT_2.GetFloat(204);
            if (temp_3 != 1f)
            {
                goto MISSILE1;
            }
            var MISS1ACT_4 = _world.AcknexObject.GetAcknexObject(1181860530);
            _world.SetSynonymObject(3680056099, MISS1ACT_4);
            yield break;
            MISSILE1:
            var MISS11ACT_8 = _world.AcknexObject.GetAcknexObject(346082179);
            var temp_9 = MISS11ACT_8.GetFloat(204);
            if (temp_9 != 1f)
            {
                goto MISSILE2;
            }
            var MISS11ACT_10 = _world.AcknexObject.GetAcknexObject(346082179);
            _world.SetSynonymObject(3680056099, MISS11ACT_10);
            yield break;
            MISSILE2:
            var MISS12ACT_14 = _world.AcknexObject.GetAcknexObject(346118116);
            var temp_15 = MISS12ACT_14.GetFloat(204);
            if (temp_15 != 1f)
            {
                goto MISSILE3;
            }
            var MISS12ACT_16 = _world.AcknexObject.GetAcknexObject(346118116);
            _world.SetSynonymObject(3680056099, MISS12ACT_16);
            yield break;
            MISSILE3:
            var MISS13ACT_20 = _world.AcknexObject.GetAcknexObject(346154053);
            var temp_21 = MISS13ACT_20.GetFloat(204);
            if (temp_21 != 1f)
            {
                goto MISSILE4;
            }
            var MISS13ACT_22 = _world.AcknexObject.GetAcknexObject(346154053);
            _world.SetSynonymObject(3680056099, MISS13ACT_22);
            yield break;
            MISSILE4:
            var MISS14ACT_26 = _world.AcknexObject.GetAcknexObject(346189990);
            var temp_27 = MISS14ACT_26.GetFloat(204);
            if (temp_27 != 1f)
            {
                goto REFUSE;
            }
            var MISS14ACT_28 = _world.AcknexObject.GetAcknexObject(346189990);
            _world.SetSynonymObject(3680056099, MISS14ACT_28);
            yield break;
            REFUSE:
            _world.SetSynonymObject(3680056099, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CHOOSEPARTICLE(IAcknexObject MY, IAcknexObject THERE)
        {
            var PARTICLEACT_2 = _world.AcknexObject.GetAcknexObject(162694329);
            var temp_3 = PARTICLEACT_2.GetFloat(204);
            if (temp_3 != 1f)
            {
                goto PARTICLE1;
            }
            var PARTICLEACT_4 = _world.AcknexObject.GetAcknexObject(162694329);
            _world.SetSynonymObject(2704244193, PARTICLEACT_4);
            yield break;
            PARTICLE1:
            var PARTICLE1ACT_8 = _world.AcknexObject.GetAcknexObject(1073335914);
            var temp_9 = PARTICLE1ACT_8.GetFloat(204);
            if (temp_9 != 1f)
            {
                goto PARTICLE2;
            }
            var PARTICLE1ACT_10 = _world.AcknexObject.GetAcknexObject(1073335914);
            _world.SetSynonymObject(2704244193, PARTICLE1ACT_10);
            yield break;
            PARTICLE2:
            var PARTICLE2ACT_14 = _world.AcknexObject.GetAcknexObject(1073371851);
            var temp_15 = PARTICLE2ACT_14.GetFloat(204);
            if (temp_15 != 1f)
            {
                goto PARTICLE3;
            }
            var PARTICLE2ACT_16 = _world.AcknexObject.GetAcknexObject(1073371851);
            _world.SetSynonymObject(2704244193, PARTICLE2ACT_16);
            yield break;
            PARTICLE3:
            var PARTICLE3ACT_20 = _world.AcknexObject.GetAcknexObject(1073407788);
            var temp_21 = PARTICLE3ACT_20.GetFloat(204);
            if (temp_21 != 1f)
            {
                goto PARTICLE4;
            }
            var PARTICLE3ACT_22 = _world.AcknexObject.GetAcknexObject(1073407788);
            _world.SetSynonymObject(2704244193, PARTICLE3ACT_22);
            yield break;
            PARTICLE4:
            var PARTICLE4ACT_26 = _world.AcknexObject.GetAcknexObject(1073443725);
            var temp_27 = PARTICLE4ACT_26.GetFloat(204);
            if (temp_27 != 1f)
            {
                goto REFUSE;
            }
            var PARTICLE4ACT_28 = _world.AcknexObject.GetAcknexObject(1073443725);
            _world.SetSynonymObject(2704244193, PARTICLE4ACT_28);
            yield break;
            REFUSE:
            _world.SetSynonymObject(2704244193, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CASTBLOOD(IAcknexObject MY, IAcknexObject THERE)
        {
            var BLOOD1ACT_2 = _world.AcknexObject.GetAcknexObject(2619845414);
            var temp_3 = BLOOD1ACT_2.GetFloat(204);
            if (temp_3 != 1f)
            {
                goto BLOOD2;
            }
            var BLOOD1ACT_4 = _world.AcknexObject.GetAcknexObject(2619845414);
            _world.SetSynonymObject(215243933, BLOOD1ACT_4);
            goto CAST;
            BLOOD2:
            var BLOOD2ACT_8 = _world.AcknexObject.GetAcknexObject(2619881351);
            var temp_9 = BLOOD2ACT_8.GetFloat(204);
            if (temp_9 != 1f)
            {
                goto BLOOD3;
            }
            var BLOOD2ACT_10 = _world.AcknexObject.GetAcknexObject(2619881351);
            _world.SetSynonymObject(215243933, BLOOD2ACT_10);
            goto CAST;
            BLOOD3:
            var BLOOD3ACT_14 = _world.AcknexObject.GetAcknexObject(2619917288);
            var temp_15 = BLOOD3ACT_14.GetFloat(204);
            if (temp_15 != 1f)
            {
                goto BLOOD4;
            }
            var BLOOD3ACT_16 = _world.AcknexObject.GetAcknexObject(2619917288);
            _world.SetSynonymObject(215243933, BLOOD3ACT_16);
            goto CAST;
            BLOOD4:
            var BLOOD4ACT_20 = _world.AcknexObject.GetAcknexObject(2619953225);
            var temp_21 = BLOOD4ACT_20.GetFloat(204);
            if (temp_21 != 1f)
            {
                goto REFUSE;
            }
            var BLOOD4ACT_22 = _world.AcknexObject.GetAcknexObject(2619953225);
            _world.SetSynonymObject(215243933, BLOOD4ACT_22);
            goto CAST;
            REFUSE:
            _world.SetSynonymObject(215243933, null);
            yield break;
            CAST:
            var HIT_DIST_26 = _world.GetObject(ObjectType.Skill, 444);
            var HIT_DIST_26_val = HIT_DIST_26.GetFloat(PropertyName.VAL);
            var BLOOD_28 = _world.GetSynonymObject(215243933);
            BLOOD_28.SetFloat(172, HIT_DIST_26_val);
            var BLOOD_30 = _world.GetSynonymObject(215243933);
            var BLOOD_32 = _world.GetSynonymObject(215243933);
            var temp_33 = BLOOD_32.GetFloat(165);
            var PLAYER_Z_34 = _world.GetObject(ObjectType.Skill, 461);
            var PLAYER_Z_34_val = PLAYER_Z_34.GetFloat(PropertyName.VAL);
            var HIT_DIST_38 = _world.GetObject(ObjectType.Skill, 444);
            var HIT_DIST_38_val = HIT_DIST_38.GetFloat(PropertyName.VAL);
            var PLAYER_TILT_40 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_40_val = PLAYER_TILT_40.GetFloat(PropertyName.VAL);
            BLOOD_30.SetFloat(165, PLAYER_Z_34_val - 0.728f * HIT_DIST_38_val * PLAYER_TILT_40_val - 0.5f);
            var BLOOD_43 = _world.GetSynonymObject(215243933);
            var dropped_44 = _world.Drop(BLOOD_43, MY, THERE);
            var BLOOD_47 = dropped_44;
            BLOOD_47.SetFloat(204, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator PICKUPMEDKIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill, 1469755439);
            var PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat(PropertyName.VAL);
            if (PLAYER_HEALTH_1_val > 98f)
            {
                yield break;
            }
            var PLAYER_HEALTH_3 = _world.GetObject(ObjectType.Skill, 1469755439);
            var PLAYER_HEALTH_3_val = PLAYER_HEALTH_3.GetFloat(PropertyName.VAL);
            var PLAYER_HEALTH_4 = _world.GetObject(ObjectType.Skill, 1469755439);
            PLAYER_HEALTH_4.SetFloat(231, PLAYER_HEALTH_3_val + 25f);
            var MY_7 = MY;
            MY_7.SetFloat(204, 1f);
            var MP_501SND_8 = _world.AcknexObject.GetAcknexObject(3759925572);
            _world.PlaySound(MP_501SND_8, 0.5f, null);
            var GET11STR_10 = _world.AcknexObject.GetAcknexObject(2297170088);
            _world.SetSynonymObject(361798934, GET11STR_10);
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
            var PLAYER_ARMOUR_1 = _world.GetObject(ObjectType.Skill, 1211659215);
            var PLAYER_ARMOUR_1_val = PLAYER_ARMOUR_1.GetFloat(PropertyName.VAL);
            if (PLAYER_ARMOUR_1_val > 190f)
            {
                yield break;
            }
            var PLAYER_ARMOUR_3 = _world.GetObject(ObjectType.Skill, 1211659215);
            var PLAYER_ARMOUR_3_val = PLAYER_ARMOUR_3.GetFloat(PropertyName.VAL);
            var PLAYER_ARMOUR_4 = _world.GetObject(ObjectType.Skill, 1211659215);
            PLAYER_ARMOUR_4.SetFloat(231, PLAYER_ARMOUR_3_val + 50f);
            var MY_7 = MY;
            MY_7.SetFloat(204, 1f);
            var ARMO01SND_8 = _world.AcknexObject.GetAcknexObject(366485954);
            _world.PlaySound(ARMO01SND_8, 0.5f, null);
            var GET10STR_10 = _world.AcknexObject.GetAcknexObject(2297134151);
            _world.SetSynonymObject(361798934, GET10STR_10);
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
            var HAS_MP5_1 = _world.GetObject(ObjectType.Skill, 1205036122);
            HAS_MP5_1.SetFloat(231, 1f);
            var AMMO_MP5_3 = _world.GetObject(ObjectType.Skill, 1494668136);
            var AMMO_MP5_3_val = AMMO_MP5_3.GetFloat(PropertyName.VAL);
            var AMMO_MP5_4 = _world.GetObject(ObjectType.Skill, 1494668136);
            AMMO_MP5_4.SetFloat(231, AMMO_MP5_3_val + 60f);
            var WEAPONSEL_6 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_6_val = WEAPONSEL_6.GetFloat(PropertyName.VAL);
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
            var WEAPONSEL_8 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_8_val = WEAPONSEL_8.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_8_val > 1f)
            {
                var AMMO01SND_9 = _world.AcknexObject.GetAcknexObject(2022635869);
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
            MY_13.SetFloat(204, 1f);
            var GET02STR_14 = _world.AcknexObject.GetAcknexObject(2296020104);
            _world.SetSynonymObject(361798934, GET02STR_14);
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
            var HAS_STINGER_1 = _world.GetObject(ObjectType.Skill, 2740601668);
            HAS_STINGER_1.SetFloat(231, 1f);
            var AMMO_STINGER_3 = _world.GetObject(ObjectType.Skill, 2008713554);
            var AMMO_STINGER_3_val = AMMO_STINGER_3.GetFloat(PropertyName.VAL);
            var AMMO_STINGER_4 = _world.GetObject(ObjectType.Skill, 2008713554);
            AMMO_STINGER_4.SetFloat(231, AMMO_STINGER_3_val + 2f);
            var WEAPONSEL_6 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_6_val = WEAPONSEL_6.GetFloat(PropertyName.VAL);
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
            MY_9.SetFloat(204, 1f);
            var GET08STR_10 = _world.AcknexObject.GetAcknexObject(2296235726);
            _world.SetSynonymObject(361798934, GET08STR_10);
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
            var HAS_QUANTUM_1 = _world.GetObject(ObjectType.Skill, 187328435);
            HAS_QUANTUM_1.SetFloat(231, 1f);
            var AMMO_QUANTUM_3 = _world.GetObject(ObjectType.Skill, 3750407617);
            var AMMO_QUANTUM_3_val = AMMO_QUANTUM_3.GetFloat(PropertyName.VAL);
            var AMMO_QUANTUM_4 = _world.GetObject(ObjectType.Skill, 3750407617);
            AMMO_QUANTUM_4.SetFloat(231, AMMO_QUANTUM_3_val + 5f);
            var WEAPONSEL_6 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_6_val = WEAPONSEL_6.GetFloat(PropertyName.VAL);
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
            MY_9.SetFloat(204, 1f);
            var GET09STR_10 = _world.AcknexObject.GetAcknexObject(2296271663);
            _world.SetSynonymObject(361798934, GET09STR_10);
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
            var AMMO_MP5_1 = _world.GetObject(ObjectType.Skill, 1494668136);
            var AMMO_MP5_1_val = AMMO_MP5_1.GetFloat(PropertyName.VAL);
            var AMMO_MP5_2 = _world.GetObject(ObjectType.Skill, 1494668136);
            AMMO_MP5_2.SetFloat(231, AMMO_MP5_1_val + 30f);
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
            MY_5.SetFloat(204, 1f);
            var AMMO01SND_6 = _world.AcknexObject.GetAcknexObject(2022635869);
            _world.PlaySound(AMMO01SND_6, 0.3f, null);
            var GET01STR_8 = _world.AcknexObject.GetAcknexObject(2295984167);
            _world.SetSynonymObject(361798934, GET01STR_8);
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
            var HAS_GRANADE_1 = _world.GetObject(ObjectType.Skill, 40123194);
            HAS_GRANADE_1.SetFloat(231, 1f);
            var AMMO_GRANADE_3 = _world.GetObject(ObjectType.Skill, 3603202376);
            var AMMO_GRANADE_3_val = AMMO_GRANADE_3.GetFloat(PropertyName.VAL);
            var AMMO_GRANADE_4 = _world.GetObject(ObjectType.Skill, 3603202376);
            AMMO_GRANADE_4.SetFloat(231, AMMO_GRANADE_3_val + 1f);
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
            MY_7.SetFloat(204, 1f);
            var GRAN01SND_8 = _world.AcknexObject.GetAcknexObject(850576923);
            _world.PlaySound(GRAN01SND_8, 0.5f, null);
            var GET05STR_10 = _world.AcknexObject.GetAcknexObject(2296127915);
            _world.SetSynonymObject(361798934, GET05STR_10);
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
            var AMMO_STINGER_1 = _world.GetObject(ObjectType.Skill, 2008713554);
            var AMMO_STINGER_1_val = AMMO_STINGER_1.GetFloat(PropertyName.VAL);
            var AMMO_STINGER_2 = _world.GetObject(ObjectType.Skill, 2008713554);
            AMMO_STINGER_2.SetFloat(231, AMMO_STINGER_1_val + 10f);
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
            MY_5.SetFloat(204, 1f);
            var AMMO01SND_6 = _world.AcknexObject.GetAcknexObject(2022635869);
            _world.PlaySound(AMMO01SND_6, 0.5f, null);
            var GET06STR_8 = _world.AcknexObject.GetAcknexObject(2296163852);
            _world.SetSynonymObject(361798934, GET06STR_8);
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
            var AMMO_QUANTUM_1 = _world.GetObject(ObjectType.Skill, 3750407617);
            var AMMO_QUANTUM_1_val = AMMO_QUANTUM_1.GetFloat(PropertyName.VAL);
            var AMMO_QUANTUM_2 = _world.GetObject(ObjectType.Skill, 3750407617);
            AMMO_QUANTUM_2.SetFloat(231, AMMO_QUANTUM_1_val + 1f);
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
            MY_5.SetFloat(204, 1f);
            var QGUN01SND_6 = _world.AcknexObject.GetAcknexObject(2621950350);
            _world.PlaySound(QGUN01SND_6, 0.2f, null);
            var GET07STR_8 = _world.AcknexObject.GetAcknexObject(2296199789);
            _world.SetSynonymObject(361798934, GET07STR_8);
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
            var LUP_1 = _world.GetObject(ObjectType.Skill, 193463646);
            var LUP_1_val = LUP_1.GetFloat(PropertyName.VAL);
            if (LUP_1_val != 0f)
            {
                goto IMPL1;
            }
            var MY_3 = MY;
            var temp_4 = MY_3?.GetAcknexObject(198);
            _world.SetSynonymObject(161611586, temp_4);
            var IMPL_REGION_7 = _world.GetSynonymObject(161611586);
            var temp_8 = IMPL_REGION_7.GetFloat(112);
            var NAMBIENT_9 = _world.GetObject(ObjectType.Skill, 3149682875);
            NAMBIENT_9.SetFloat(231, temp_8);
            var LAMBIENT_10 = _world.GetObject(ObjectType.Skill, 3812142841);
            var LAMBIENT_11 = _world.GetObject(ObjectType.Skill, 3812142841);
            var LAMBIENT_11_val = LAMBIENT_11.GetFloat(PropertyName.VAL);
            var NAMBIENT_12 = _world.GetObject(ObjectType.Skill, 3149682875);
            var NAMBIENT_12_val = NAMBIENT_12.GetFloat(PropertyName.VAL);
            LAMBIENT_10.SetFloat(231, NAMBIENT_12_val + 1f);
            var LUP_16 = _world.GetObject(ObjectType.Skill, 193463646);
            LUP_16.SetFloat(231, 0.04f);
            goto GO;
            IMPL1:
            var LUP1_18 = _world.GetObject(ObjectType.Skill, 2089301071);
            var LUP1_18_val = LUP1_18.GetFloat(PropertyName.VAL);
            if (LUP1_18_val != 0f)
            {
                goto IMPL2;
            }
            var MY_20 = MY;
            var temp_21 = MY_20?.GetAcknexObject(198);
            _world.SetSynonymObject(1038183091, temp_21);
            var IMPL_REGION1_24 = _world.GetSynonymObject(1038183091);
            var temp_25 = IMPL_REGION1_24.GetFloat(112);
            var NAMBIENT1_26 = _world.GetObject(ObjectType.Skill, 860287820);
            NAMBIENT1_26.SetFloat(231, temp_25);
            var LAMBIENT1_27 = _world.GetObject(ObjectType.Skill, 1246630218);
            var LAMBIENT1_28 = _world.GetObject(ObjectType.Skill, 1246630218);
            var LAMBIENT1_28_val = LAMBIENT1_28.GetFloat(PropertyName.VAL);
            var NAMBIENT1_29 = _world.GetObject(ObjectType.Skill, 860287820);
            var NAMBIENT1_29_val = NAMBIENT1_29.GetFloat(PropertyName.VAL);
            LAMBIENT1_27.SetFloat(231, NAMBIENT1_29_val + 1f);
            var LUP1_33 = _world.GetObject(ObjectType.Skill, 2089301071);
            LUP1_33.SetFloat(231, 0.04f);
            goto GO;
            IMPL2:
            var LUP2_35 = _world.GetObject(ObjectType.Skill, 2089301072);
            var LUP2_35_val = LUP2_35.GetFloat(PropertyName.VAL);
            if (LUP2_35_val != 0f)
            {
                goto IMPL3;
            }
            var MY_37 = MY;
            var temp_38 = MY_37?.GetAcknexObject(198);
            _world.SetSynonymObject(1038183092, temp_38);
            var IMPL_REGION2_41 = _world.GetSynonymObject(1038183092);
            var temp_42 = IMPL_REGION2_41.GetFloat(112);
            var NAMBIENT2_43 = _world.GetObject(ObjectType.Skill, 860287821);
            NAMBIENT2_43.SetFloat(231, temp_42);
            var LAMBIENT2_44 = _world.GetObject(ObjectType.Skill, 1246630219);
            var LAMBIENT2_45 = _world.GetObject(ObjectType.Skill, 1246630219);
            var LAMBIENT2_45_val = LAMBIENT2_45.GetFloat(PropertyName.VAL);
            var NAMBIENT2_46 = _world.GetObject(ObjectType.Skill, 860287821);
            var NAMBIENT2_46_val = NAMBIENT2_46.GetFloat(PropertyName.VAL);
            LAMBIENT2_44.SetFloat(231, NAMBIENT2_46_val + 1f);
            var LUP2_50 = _world.GetObject(ObjectType.Skill, 2089301072);
            LUP2_50.SetFloat(231, 0.04f);
            goto GO;
            IMPL3:
            var LUP3_52 = _world.GetObject(ObjectType.Skill, 2089301073);
            var LUP3_52_val = LUP3_52.GetFloat(PropertyName.VAL);
            if (LUP3_52_val != 0f)
            {
                goto IMPL4;
            }
            var MY_54 = MY;
            var temp_55 = MY_54?.GetAcknexObject(198);
            _world.SetSynonymObject(1038183093, temp_55);
            var IMPL_REGION3_58 = _world.GetSynonymObject(1038183093);
            var temp_59 = IMPL_REGION3_58.GetFloat(112);
            var NAMBIENT3_60 = _world.GetObject(ObjectType.Skill, 860287822);
            NAMBIENT3_60.SetFloat(231, temp_59);
            var LAMBIENT3_61 = _world.GetObject(ObjectType.Skill, 1246630220);
            var LAMBIENT3_62 = _world.GetObject(ObjectType.Skill, 1246630220);
            var LAMBIENT3_62_val = LAMBIENT3_62.GetFloat(PropertyName.VAL);
            var NAMBIENT3_63 = _world.GetObject(ObjectType.Skill, 860287822);
            var NAMBIENT3_63_val = NAMBIENT3_63.GetFloat(PropertyName.VAL);
            LAMBIENT3_61.SetFloat(231, NAMBIENT3_63_val + 1f);
            var LUP3_67 = _world.GetObject(ObjectType.Skill, 2089301073);
            LUP3_67.SetFloat(231, 0.04f);
            goto GO;
            IMPL4:
            var LUP4_69 = _world.GetObject(ObjectType.Skill, 2089301074);
            var LUP4_69_val = LUP4_69.GetFloat(PropertyName.VAL);
            if (LUP4_69_val != 0f)
            {
                yield break;
            }
            var MY_71 = MY;
            var temp_72 = MY_71?.GetAcknexObject(198);
            _world.SetSynonymObject(1038183094, temp_72);
            var IMPL_REGION4_75 = _world.GetSynonymObject(1038183094);
            var temp_76 = IMPL_REGION4_75.GetFloat(112);
            var NAMBIENT4_77 = _world.GetObject(ObjectType.Skill, 860287823);
            NAMBIENT4_77.SetFloat(231, temp_76);
            var LAMBIENT4_78 = _world.GetObject(ObjectType.Skill, 1246630221);
            var LAMBIENT4_79 = _world.GetObject(ObjectType.Skill, 1246630221);
            var LAMBIENT4_79_val = LAMBIENT4_79.GetFloat(PropertyName.VAL);
            var NAMBIENT4_80 = _world.GetObject(ObjectType.Skill, 860287823);
            var NAMBIENT4_80_val = NAMBIENT4_80.GetFloat(PropertyName.VAL);
            LAMBIENT4_78.SetFloat(231, NAMBIENT4_80_val + 1f);
            var LUP4_84 = _world.GetObject(ObjectType.Skill, 2089301074);
            LUP4_84.SetFloat(231, 0.04f);
            GO:
            var temp_88 = _world.AcknexObject?.GetAcknexObject(12);
            if (temp_88 == null)
            {
                var IMPLODELIGHT_89 = _world.AcknexObject.GetAcknexObject(1148133871);
                _world.AcknexObject.SetAcknexObject(12, IMPLODELIGHT_89);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator IMPLODELIGHT(IAcknexObject MY, IAcknexObject THERE)
        {
            var LUP_1 = _world.GetObject(ObjectType.Skill, 193463646);
            var LUP_1_val = LUP_1.GetFloat(PropertyName.VAL);
            if (LUP_1_val == 0f)
            {
                goto LIGHT1;
            }
            var LUP_2 = _world.GetObject(ObjectType.Skill, 193463646);
            var LUP_2_val = LUP_2.GetFloat(PropertyName.VAL);
            var IMPL_REGION_4 = _world.GetSynonymObject(161611586);
            var temp_5 = IMPL_REGION_4.GetFloat(112);
            var IMPL_REGION_7 = _world.GetSynonymObject(161611586);
            IMPL_REGION_7.SetFloat(112, temp_5 + LUP_2_val);
            var LAMBIENT_8 = _world.GetObject(ObjectType.Skill, 3812142841);
            var LAMBIENT_8_val = LAMBIENT_8.GetFloat(PropertyName.VAL);
            var IMPL_REGION_10 = _world.GetSynonymObject(161611586);
            var temp_11 = IMPL_REGION_10.GetFloat(112);
            if (temp_11 > LAMBIENT_8_val)
            {
                goto REVERSE;
            }
            var NAMBIENT_12 = _world.GetObject(ObjectType.Skill, 3149682875);
            var NAMBIENT_12_val = NAMBIENT_12.GetFloat(PropertyName.VAL);
            var IMPL_REGION_14 = _world.GetSynonymObject(161611586);
            var temp_15 = IMPL_REGION_14.GetFloat(112);
            if (temp_15 < NAMBIENT_12_val)
            {
                goto STOP;
            }
            goto LIGHT1;
            REVERSE:
            var LUP_17 = _world.GetObject(ObjectType.Skill, 193463646);
            LUP_17.SetFloat(231, -0.1f);
            goto LIGHT1;
            STOP:
            var NAMBIENT_18 = _world.GetObject(ObjectType.Skill, 3149682875);
            var NAMBIENT_18_val = NAMBIENT_18.GetFloat(PropertyName.VAL);
            var IMPL_REGION_20 = _world.GetSynonymObject(161611586);
            IMPL_REGION_20.SetFloat(112, NAMBIENT_18_val);
            var LUP_22 = _world.GetObject(ObjectType.Skill, 193463646);
            LUP_22.SetFloat(231, 0f);
            LIGHT1:
            var LUP1_24 = _world.GetObject(ObjectType.Skill, 2089301071);
            var LUP1_24_val = LUP1_24.GetFloat(PropertyName.VAL);
            if (LUP1_24_val == 0f)
            {
                goto LIGHT2;
            }
            var LUP1_25 = _world.GetObject(ObjectType.Skill, 2089301071);
            var LUP1_25_val = LUP1_25.GetFloat(PropertyName.VAL);
            var IMPL_REGION1_27 = _world.GetSynonymObject(1038183091);
            var temp_28 = IMPL_REGION1_27.GetFloat(112);
            var IMPL_REGION1_30 = _world.GetSynonymObject(1038183091);
            IMPL_REGION1_30.SetFloat(112, temp_28 + LUP1_25_val);
            var LAMBIENT1_31 = _world.GetObject(ObjectType.Skill, 1246630218);
            var LAMBIENT1_31_val = LAMBIENT1_31.GetFloat(PropertyName.VAL);
            var IMPL_REGION1_33 = _world.GetSynonymObject(1038183091);
            var temp_34 = IMPL_REGION1_33.GetFloat(112);
            if (temp_34 > LAMBIENT1_31_val)
            {
                goto REVERSE1;
            }
            var NAMBIENT1_35 = _world.GetObject(ObjectType.Skill, 860287820);
            var NAMBIENT1_35_val = NAMBIENT1_35.GetFloat(PropertyName.VAL);
            var IMPL_REGION1_37 = _world.GetSynonymObject(1038183091);
            var temp_38 = IMPL_REGION1_37.GetFloat(112);
            if (temp_38 < NAMBIENT1_35_val)
            {
                goto STOP1;
            }
            goto LIGHT2;
            REVERSE1:
            var LUP1_40 = _world.GetObject(ObjectType.Skill, 2089301071);
            LUP1_40.SetFloat(231, -0.1f);
            goto LIGHT2;
            STOP1:
            var NAMBIENT1_41 = _world.GetObject(ObjectType.Skill, 860287820);
            var NAMBIENT1_41_val = NAMBIENT1_41.GetFloat(PropertyName.VAL);
            var IMPL_REGION1_43 = _world.GetSynonymObject(1038183091);
            IMPL_REGION1_43.SetFloat(112, NAMBIENT1_41_val);
            var LUP1_45 = _world.GetObject(ObjectType.Skill, 2089301071);
            LUP1_45.SetFloat(231, 0f);
            LIGHT2:
            var LUP2_47 = _world.GetObject(ObjectType.Skill, 2089301072);
            var LUP2_47_val = LUP2_47.GetFloat(PropertyName.VAL);
            if (LUP2_47_val == 0f)
            {
                goto LIGHT3;
            }
            var LUP2_48 = _world.GetObject(ObjectType.Skill, 2089301072);
            var LUP2_48_val = LUP2_48.GetFloat(PropertyName.VAL);
            var IMPL_REGION2_50 = _world.GetSynonymObject(1038183092);
            var temp_51 = IMPL_REGION2_50.GetFloat(112);
            var IMPL_REGION2_53 = _world.GetSynonymObject(1038183092);
            IMPL_REGION2_53.SetFloat(112, temp_51 + LUP2_48_val);
            var LAMBIENT2_54 = _world.GetObject(ObjectType.Skill, 1246630219);
            var LAMBIENT2_54_val = LAMBIENT2_54.GetFloat(PropertyName.VAL);
            var IMPL_REGION2_56 = _world.GetSynonymObject(1038183092);
            var temp_57 = IMPL_REGION2_56.GetFloat(112);
            if (temp_57 > LAMBIENT2_54_val)
            {
                goto REVERSE2;
            }
            var NAMBIENT2_58 = _world.GetObject(ObjectType.Skill, 860287821);
            var NAMBIENT2_58_val = NAMBIENT2_58.GetFloat(PropertyName.VAL);
            var IMPL_REGION2_60 = _world.GetSynonymObject(1038183092);
            var temp_61 = IMPL_REGION2_60.GetFloat(112);
            if (temp_61 < NAMBIENT2_58_val)
            {
                goto STOP2;
            }
            goto LIGHT3;
            REVERSE2:
            var LUP2_63 = _world.GetObject(ObjectType.Skill, 2089301072);
            LUP2_63.SetFloat(231, -0.1f);
            goto LIGHT3;
            STOP2:
            var NAMBIENT2_64 = _world.GetObject(ObjectType.Skill, 860287821);
            var NAMBIENT2_64_val = NAMBIENT2_64.GetFloat(PropertyName.VAL);
            var IMPL_REGION2_66 = _world.GetSynonymObject(1038183092);
            IMPL_REGION2_66.SetFloat(112, NAMBIENT2_64_val);
            var LUP2_68 = _world.GetObject(ObjectType.Skill, 2089301072);
            LUP2_68.SetFloat(231, 0f);
            LIGHT3:
            var LUP3_70 = _world.GetObject(ObjectType.Skill, 2089301073);
            var LUP3_70_val = LUP3_70.GetFloat(PropertyName.VAL);
            if (LUP3_70_val == 0f)
            {
                goto LIGHT4;
            }
            var LUP3_71 = _world.GetObject(ObjectType.Skill, 2089301073);
            var LUP3_71_val = LUP3_71.GetFloat(PropertyName.VAL);
            var IMPL_REGION3_73 = _world.GetSynonymObject(1038183093);
            var temp_74 = IMPL_REGION3_73.GetFloat(112);
            var IMPL_REGION3_76 = _world.GetSynonymObject(1038183093);
            IMPL_REGION3_76.SetFloat(112, temp_74 + LUP3_71_val);
            var LAMBIENT3_77 = _world.GetObject(ObjectType.Skill, 1246630220);
            var LAMBIENT3_77_val = LAMBIENT3_77.GetFloat(PropertyName.VAL);
            var IMPL_REGION3_79 = _world.GetSynonymObject(1038183093);
            var temp_80 = IMPL_REGION3_79.GetFloat(112);
            if (temp_80 > LAMBIENT3_77_val)
            {
                goto REVERSE3;
            }
            var NAMBIENT3_81 = _world.GetObject(ObjectType.Skill, 860287822);
            var NAMBIENT3_81_val = NAMBIENT3_81.GetFloat(PropertyName.VAL);
            var IMPL_REGION3_83 = _world.GetSynonymObject(1038183093);
            var temp_84 = IMPL_REGION3_83.GetFloat(112);
            if (temp_84 < NAMBIENT3_81_val)
            {
                goto STOP3;
            }
            goto LIGHT4;
            REVERSE3:
            var LUP3_86 = _world.GetObject(ObjectType.Skill, 2089301073);
            LUP3_86.SetFloat(231, -0.1f);
            goto LIGHT4;
            STOP3:
            var NAMBIENT3_87 = _world.GetObject(ObjectType.Skill, 860287822);
            var NAMBIENT3_87_val = NAMBIENT3_87.GetFloat(PropertyName.VAL);
            var IMPL_REGION3_89 = _world.GetSynonymObject(1038183093);
            IMPL_REGION3_89.SetFloat(112, NAMBIENT3_87_val);
            var LUP3_91 = _world.GetObject(ObjectType.Skill, 2089301073);
            LUP3_91.SetFloat(231, 0f);
            LIGHT4:
            var LUP4_93 = _world.GetObject(ObjectType.Skill, 2089301074);
            var LUP4_93_val = LUP4_93.GetFloat(PropertyName.VAL);
            if (LUP4_93_val == 0f)
            {
                goto CHECKEND;
            }
            var LUP4_94 = _world.GetObject(ObjectType.Skill, 2089301074);
            var LUP4_94_val = LUP4_94.GetFloat(PropertyName.VAL);
            var IMPL_REGION4_96 = _world.GetSynonymObject(1038183094);
            var temp_97 = IMPL_REGION4_96.GetFloat(112);
            var IMPL_REGION4_99 = _world.GetSynonymObject(1038183094);
            IMPL_REGION4_99.SetFloat(112, temp_97 + LUP4_94_val);
            var LAMBIENT4_100 = _world.GetObject(ObjectType.Skill, 1246630221);
            var LAMBIENT4_100_val = LAMBIENT4_100.GetFloat(PropertyName.VAL);
            var IMPL_REGION4_102 = _world.GetSynonymObject(1038183094);
            var temp_103 = IMPL_REGION4_102.GetFloat(112);
            if (temp_103 > LAMBIENT4_100_val)
            {
                goto REVERSE4;
            }
            var NAMBIENT4_104 = _world.GetObject(ObjectType.Skill, 860287823);
            var NAMBIENT4_104_val = NAMBIENT4_104.GetFloat(PropertyName.VAL);
            var IMPL_REGION4_106 = _world.GetSynonymObject(1038183094);
            var temp_107 = IMPL_REGION4_106.GetFloat(112);
            if (temp_107 < NAMBIENT4_104_val)
            {
                goto STOP4;
            }
            goto CHECKEND;
            REVERSE4:
            var LUP4_109 = _world.GetObject(ObjectType.Skill, 2089301074);
            LUP4_109.SetFloat(231, -0.1f);
            goto CHECKEND;
            STOP4:
            var NAMBIENT4_110 = _world.GetObject(ObjectType.Skill, 860287823);
            var NAMBIENT4_110_val = NAMBIENT4_110.GetFloat(PropertyName.VAL);
            var IMPL_REGION4_112 = _world.GetSynonymObject(1038183094);
            IMPL_REGION4_112.SetFloat(112, NAMBIENT4_110_val);
            var LUP4_114 = _world.GetObject(ObjectType.Skill, 2089301074);
            LUP4_114.SetFloat(231, 0f);
            CHECKEND:
            var CHECKENDFLAG_116 = _world.GetObject(ObjectType.Skill, 4017501180);
            CHECKENDFLAG_116.SetFloat(231, 0f);
            var LUP_118 = _world.GetObject(ObjectType.Skill, 193463646);
            var LUP_118_val = LUP_118.GetFloat(PropertyName.VAL);
            if (LUP_118_val != 0f)
            {
                var CHECKENDFLAG_120 = _world.GetObject(ObjectType.Skill, 4017501180);
                var CHECKENDFLAG_120_val = CHECKENDFLAG_120.GetFloat(PropertyName.VAL);
                var CHECKENDFLAG_121 = _world.GetObject(ObjectType.Skill, 4017501180);
                CHECKENDFLAG_121.SetFloat(231, CHECKENDFLAG_120_val + 1f);
            }
            var LUP1_123 = _world.GetObject(ObjectType.Skill, 2089301071);
            var LUP1_123_val = LUP1_123.GetFloat(PropertyName.VAL);
            if (LUP1_123_val != 0f)
            {
                var CHECKENDFLAG_125 = _world.GetObject(ObjectType.Skill, 4017501180);
                var CHECKENDFLAG_125_val = CHECKENDFLAG_125.GetFloat(PropertyName.VAL);
                var CHECKENDFLAG_126 = _world.GetObject(ObjectType.Skill, 4017501180);
                CHECKENDFLAG_126.SetFloat(231, CHECKENDFLAG_125_val + 1f);
            }
            var LUP2_128 = _world.GetObject(ObjectType.Skill, 2089301072);
            var LUP2_128_val = LUP2_128.GetFloat(PropertyName.VAL);
            if (LUP2_128_val != 0f)
            {
                var CHECKENDFLAG_130 = _world.GetObject(ObjectType.Skill, 4017501180);
                var CHECKENDFLAG_130_val = CHECKENDFLAG_130.GetFloat(PropertyName.VAL);
                var CHECKENDFLAG_131 = _world.GetObject(ObjectType.Skill, 4017501180);
                CHECKENDFLAG_131.SetFloat(231, CHECKENDFLAG_130_val + 1f);
            }
            var LUP3_133 = _world.GetObject(ObjectType.Skill, 2089301073);
            var LUP3_133_val = LUP3_133.GetFloat(PropertyName.VAL);
            if (LUP3_133_val != 0f)
            {
                var CHECKENDFLAG_135 = _world.GetObject(ObjectType.Skill, 4017501180);
                var CHECKENDFLAG_135_val = CHECKENDFLAG_135.GetFloat(PropertyName.VAL);
                var CHECKENDFLAG_136 = _world.GetObject(ObjectType.Skill, 4017501180);
                CHECKENDFLAG_136.SetFloat(231, CHECKENDFLAG_135_val + 1f);
            }
            var LUP4_138 = _world.GetObject(ObjectType.Skill, 2089301074);
            var LUP4_138_val = LUP4_138.GetFloat(PropertyName.VAL);
            if (LUP4_138_val != 0f)
            {
                var CHECKENDFLAG_140 = _world.GetObject(ObjectType.Skill, 4017501180);
                var CHECKENDFLAG_140_val = CHECKENDFLAG_140.GetFloat(PropertyName.VAL);
                var CHECKENDFLAG_141 = _world.GetObject(ObjectType.Skill, 4017501180);
                CHECKENDFLAG_141.SetFloat(231, CHECKENDFLAG_140_val + 1f);
            }
            var CHECKENDFLAG_143 = _world.GetObject(ObjectType.Skill, 4017501180);
            var CHECKENDFLAG_143_val = CHECKENDFLAG_143.GetFloat(PropertyName.VAL);
            if (CHECKENDFLAG_143_val == 0f)
            {
                _world.AcknexObject.SetAcknexObject(12, null);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator BOUNCE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(174);
            if (temp_3 < -15f)
            {
                var MY_5 = MY;
                var temp_6 = MY_5.GetFloat(194);
                var MY_8 = MY;
                MY_8.SetFloat(174, temp_6);
            }
            var GRAN02SND_9 = _world.AcknexObject.GetAcknexObject(850612860);
            var MY_11 = MY;
            _world.PlaySound(GRAN02SND_9, 0.7f, MY_11);
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat(173);
            if (temp_15 == 0f)
            {
                goto YWALL;
            }
            var MY_17 = MY;
            var MY_19 = MY;
            var temp_20 = MY_19.GetFloat(194);
            var TWO_PI_21 = _world.GetObject(ObjectType.Skill, 578);
            var TWO_PI_21_val = TWO_PI_21.GetFloat(PropertyName.VAL);
            var MY_24 = MY;
            var temp_25 = MY_24.GetFloat(174);
            MY_17.SetFloat(194, TWO_PI_21_val - temp_25);
            var MY_28 = MY;
            MY_28.SetFloat(173, 0f);
            yield break;
            YWALL:
            var MY_30 = MY;
            var MY_32 = MY;
            var temp_33 = MY_32.GetFloat(194);
            var PI_34 = _world.GetObject(ObjectType.Skill, 577);
            var PI_34_val = PI_34.GetFloat(PropertyName.VAL);
            var MY_37 = MY;
            var temp_38 = MY_37.GetFloat(174);
            MY_30.SetFloat(194, PI_34_val - temp_38);
            var MY_41 = MY;
            MY_41.SetFloat(173, 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator FREEFALL(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(174);
            if (temp_3 < -15f)
            {
                goto BOUNCED;
            }
            var MY_5 = MY;
            var MY_7 = MY;
            var temp_8 = MY_7.GetFloat(174);
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat(174);
            var TWO_PI_13 = _world.GetObject(ObjectType.Skill, 578);
            var TWO_PI_13_val = TWO_PI_13.GetFloat(PropertyName.VAL);
            MY_5.SetFloat(174, temp_11 - TWO_PI_13_val);
            BOUNCED:
            var MY_16 = MY;
            var temp_17 = MY_16.GetFloat(213);
            if (temp_17 == 0f)
            {
                goto COAST;
            }
            var MY_20 = MY;
            var temp_21 = MY_20.GetFloat(169);
            var MY_23 = MY;
            MY_23.SetFloat(169, temp_21 + (-0.15f * TimeUtils.TicksToTime(1)));
            var MY_25 = MY;
            var temp_26 = MY_25.GetFloat(200);
            var MY_28 = MY;
            var temp_29 = MY_28.GetFloat(165);
            if (temp_29 > temp_26)
            {
                yield break;
            }
            var MY_31 = MY;
            var temp_32 = MY_31?.GetAcknexObject(198);
            _world.SetSynonymObject(2468751347, temp_32);
            var WATER_REGION_36 = _world.GetSynonymObject(2468751347);
            var temp_37 = WATER_REGION_36?.GetAcknexObject(242);
            if (temp_37 == null)
            {
                goto CONT;
            }
            var WATER_REGION_39 = _world.GetSynonymObject(2468751347);
            var temp_40 = WATER_REGION_39?.GetAcknexObject(234);
            var MY_42 = MY;
            MY_42.SetAcknexObject(198, temp_40);
            yield break;
            CONT:
            var MY_45 = MY;
            var temp_46 = MY_45.GetFloat(169);
            if (temp_46 > -0.5f)
            {
                goto STOP;
            }
            var GRAN02SND_47 = _world.AcknexObject.GetAcknexObject(850612860);
            var MY_49 = MY;
            _world.PlaySound(GRAN02SND_47, 0.7f, MY_49);
            var MY_51 = MY;
            var MY_53 = MY;
            var temp_54 = MY_53.GetFloat(169);
            var MY_56 = MY;
            var temp_57 = MY_56.GetFloat(169);
            MY_51.SetFloat(169, temp_57 * -0.2f);
            yield break;
            STOP:
            var MY_63 = MY;
            MY_63.SetFloat(213, 0f);
            var MY_66 = MY;
            MY_66.SetFloat(165, -0.05f);
            var MY_69 = MY;
            MY_69.SetFloat(169, 0f);
            COAST:
            var MY_71 = MY;
            var MY_73 = MY;
            var temp_74 = MY_73.GetFloat(168);
            var MY_76 = MY;
            var temp_77 = MY_76.GetFloat(168);
            MY_71.SetFloat(168, temp_77 * 0.7f);
            var MY_82 = MY;
            var temp_83 = MY_82.GetFloat(168);
            if (temp_83 < 0.1f)
            {
                goto FULLSTOP;
            }
            yield break;
            FULLSTOP:
            var GRAN0TEX_84 = _world.AcknexObject.GetAcknexObject(1197168406);
            var MY_86 = MY;
            MY_86.SetAcknexObject(164, GRAN0TEX_84);
            var MY_89 = MY;
            MY_89.SetFloat(168, 0f);
            var MY_92 = MY;
            MY_92.SetAcknexObject(209, null);
            var MY_95 = MY;
            MY_95.SetFloat(177, 32f);
            var EXPLOSIONTIMER_96 = _world.AcknexObject.GetAcknexObject(278490127);
            var MY_98 = MY;
            MY_98.SetAcknexObject(189, EXPLOSIONTIMER_96);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator EXPLOSIONTIMER(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(177);
            var MY_5 = MY;
            MY_5.SetFloat(177, temp_3 + (-1f * TimeUtils.TicksToTime(1)));
            var MY_8 = MY;
            var temp_9 = MY_8.GetFloat(177);
            if (temp_9 > 0f)
            {
                yield break;
            }
            var MY_12 = MY;
            MY_12.SetAcknexObject(189, null);
            var EXPLODEMISSILE_13 = _world.AcknexObject.GetAcknexObject(3869018100);
            var MY_15 = MY;
            MY_15.SetAcknexObject(190, EXPLODEMISSILE_13);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator INIT_MOVE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MODE_GEHEN_0 = _world.GetObject(ObjectType.Skill, 3270985304);
            var MODE_GEHEN_0_val = MODE_GEHEN_0.GetFloat(PropertyName.VAL);
            var MOVING_1 = _world.GetObject(ObjectType.Skill, 3242343005);
            MOVING_1.SetFloat(231, MODE_GEHEN_0_val);
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
            var MODE_GEHEN_0 = _world.GetObject(ObjectType.Skill, 3270985304);
            var MODE_GEHEN_0_val = MODE_GEHEN_0.GetFloat(PropertyName.VAL);
            var MOVING_1 = _world.GetObject(ObjectType.Skill, 3242343005);
            var MOVING_1_val = MOVING_1.GetFloat(PropertyName.VAL);
            if (MOVING_1_val == MODE_GEHEN_0_val)
            {
                var PLAYER_SIZE_2 = _world.GetObject(ObjectType.Skill, 422);
                var PLAYER_SIZE_3 = _world.GetObject(ObjectType.Skill, 422);
                var PLAYER_SIZE_3_val = PLAYER_SIZE_3.GetFloat(PropertyName.VAL);
                var MY_SIZE_4 = _world.GetObject(ObjectType.Skill, 25486605);
                var MY_SIZE_4_val = MY_SIZE_4.GetFloat(PropertyName.VAL);
                var WALK_8 = _world.GetObject(ObjectType.Skill, 427);
                var WALK_8_val = WALK_8.GetFloat(PropertyName.VAL);
                PLAYER_SIZE_2.SetFloat(231, MY_SIZE_4_val + 0.15f * WALK_8_val);
            }
            var MODE_SCHWIMMEN_9 = _world.GetObject(ObjectType.Skill, 3755117404);
            var MODE_SCHWIMMEN_9_val = MODE_SCHWIMMEN_9.GetFloat(PropertyName.VAL);
            var MOVING_10 = _world.GetObject(ObjectType.Skill, 3242343005);
            var MOVING_10_val = MOVING_10.GetFloat(PropertyName.VAL);
            if (MOVING_10_val == MODE_SCHWIMMEN_9_val)
            {
                var PLAYER_SIZE_11 = _world.GetObject(ObjectType.Skill, 422);
                var PLAYER_SIZE_12 = _world.GetObject(ObjectType.Skill, 422);
                var PLAYER_SIZE_12_val = PLAYER_SIZE_12.GetFloat(PropertyName.VAL);
                var WAVE_17 = _world.GetObject(ObjectType.Skill, 428);
                var WAVE_17_val = WAVE_17.GetFloat(PropertyName.VAL);
                PLAYER_SIZE_11.SetFloat(231, 1f + 0.12f * WAVE_17_val);
            }
            var MODE_TAUCHEN_18 = _world.GetObject(ObjectType.Skill, 1042033433);
            var MODE_TAUCHEN_18_val = MODE_TAUCHEN_18.GetFloat(PropertyName.VAL);
            var MOVING_19 = _world.GetObject(ObjectType.Skill, 3242343005);
            var MOVING_19_val = MOVING_19.GetFloat(PropertyName.VAL);
            if (MOVING_19_val == MODE_TAUCHEN_18_val)
            {
                var PLAYER_SIZE_20 = _world.GetObject(ObjectType.Skill, 422);
                var PLAYER_SIZE_21 = _world.GetObject(ObjectType.Skill, 422);
                var PLAYER_SIZE_21_val = PLAYER_SIZE_21.GetFloat(PropertyName.VAL);
                PLAYER_SIZE_20.SetFloat(231, 1f);
            }
            var MODE_DEATH_23 = _world.GetObject(ObjectType.Skill, 3267420407);
            var MODE_DEATH_23_val = MODE_DEATH_23.GetFloat(PropertyName.VAL);
            var MOVING_24 = _world.GetObject(ObjectType.Skill, 3242343005);
            var MOVING_24_val = MOVING_24.GetFloat(PropertyName.VAL);
            if (MOVING_24_val == MODE_DEATH_23_val)
            {
                var PLAYER_SIZE_25 = _world.GetObject(ObjectType.Skill, 422);
                var PLAYER_SIZE_26 = _world.GetObject(ObjectType.Skill, 422);
                var PLAYER_SIZE_26_val = PLAYER_SIZE_26.GetFloat(PropertyName.VAL);
                var PLAYER_SIZE_27 = _world.GetObject(ObjectType.Skill, 422);
                var PLAYER_SIZE_27_val = PLAYER_SIZE_27.GetFloat(PropertyName.VAL);
                PLAYER_SIZE_25.SetFloat(231, PLAYER_SIZE_27_val * 0.9f);
            }
            var MODE_GEHEN_30 = _world.GetObject(ObjectType.Skill, 3270985304);
            var MODE_GEHEN_30_val = MODE_GEHEN_30.GetFloat(PropertyName.VAL);
            var MOVING_31 = _world.GetObject(ObjectType.Skill, 3242343005);
            var MOVING_31_val = MOVING_31.GetFloat(PropertyName.VAL);
            if (MOVING_31_val == MODE_GEHEN_30_val)
            {
                var PLAYER_SIZE_32 = _world.GetObject(ObjectType.Skill, 422);
                var PLAYER_SIZE_33 = _world.GetObject(ObjectType.Skill, 422);
                var PLAYER_SIZE_33_val = PLAYER_SIZE_33.GetFloat(PropertyName.VAL);
                var PLAYER_SIZE_34 = _world.GetObject(ObjectType.Skill, 422);
                var PLAYER_SIZE_34_val = PLAYER_SIZE_34.GetFloat(PropertyName.VAL);
                var PLAYER_DEPTH_36 = _world.GetObject(ObjectType.Skill, 466);
                var PLAYER_DEPTH_36_val = PLAYER_DEPTH_36.GetFloat(PropertyName.VAL);
                PLAYER_SIZE_32.SetFloat(231, PLAYER_SIZE_34_val - PLAYER_DEPTH_36_val);
            }
            NO_WATEN:
            var MODE_SCHWIMMEN_37 = _world.GetObject(ObjectType.Skill, 3755117404);
            var MODE_SCHWIMMEN_37_val = MODE_SCHWIMMEN_37.GetFloat(PropertyName.VAL);
            var MOVING_38 = _world.GetObject(ObjectType.Skill, 3242343005);
            var MOVING_38_val = MOVING_38.GetFloat(PropertyName.VAL);
            if (MOVING_38_val != MODE_SCHWIMMEN_37_val)
            {
                goto NO_SWIM;
            }
            var PLAYER_DEPTH_40 = _world.GetObject(ObjectType.Skill, 466);
            var PLAYER_DEPTH_40_val = PLAYER_DEPTH_40.GetFloat(PropertyName.VAL);
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
            var MODE_GEHEN_41 = _world.GetObject(ObjectType.Skill, 3270985304);
            var MODE_GEHEN_41_val = MODE_GEHEN_41.GetFloat(PropertyName.VAL);
            var MOVING_42 = _world.GetObject(ObjectType.Skill, 3242343005);
            var MOVING_42_val = MOVING_42.GetFloat(PropertyName.VAL);
            if (MOVING_42_val != MODE_GEHEN_41_val)
            {
                goto NO_WATER;
            }
            var PLAYER_DEPTH_44 = _world.GetObject(ObjectType.Skill, 466);
            var PLAYER_DEPTH_44_val = PLAYER_DEPTH_44.GetFloat(PropertyName.VAL);
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
            var MOUSE_MIDDLE_46 = _world.GetObject(ObjectType.Skill, 472);
            var MOUSE_MIDDLE_46_val = MOUSE_MIDDLE_46.GetFloat(PropertyName.VAL);
            if (MOUSE_MIDDLE_46_val == 0f)
            {
                goto NO_MOUSE;
            }
            var KEY_SENSE_47 = _world.GetObject(ObjectType.Skill, 475);
            var KEY_SENSE_47_val = KEY_SENSE_47.GetFloat(PropertyName.VAL);
            var FORCE_AHEAD_48 = _world.GetObject(ObjectType.Skill, 480);
            FORCE_AHEAD_48.SetFloat(231, KEY_SENSE_47_val);
            var FORCE_AHEAD_49 = _world.GetObject(ObjectType.Skill, 480);
            var FORCE_AHEAD_49_val = FORCE_AHEAD_49.GetFloat(PropertyName.VAL);
            var FORCEFORWARD_50 = _world.GetObject(ObjectType.Skill, 590185617);
            FORCEFORWARD_50.SetFloat(231, FORCE_AHEAD_49_val);
            var KEY_SHIFT_52 = _world.GetObject(ObjectType.Skill, 554);
            var KEY_SHIFT_52_val = KEY_SHIFT_52.GetFloat(PropertyName.VAL);
            if (KEY_SHIFT_52_val == 1f)
            {
                var FORCE_AHEAD_53 = _world.GetObject(ObjectType.Skill, 480);
                var FORCE_AHEAD_54 = _world.GetObject(ObjectType.Skill, 480);
                var FORCE_AHEAD_54_val = FORCE_AHEAD_54.GetFloat(PropertyName.VAL);
                var FORCE_AHEAD_55 = _world.GetObject(ObjectType.Skill, 480);
                var FORCE_AHEAD_55_val = FORCE_AHEAD_55.GetFloat(PropertyName.VAL);
                var SHIFT_SENSE_57 = _world.GetObject(ObjectType.Skill, 476);
                var SHIFT_SENSE_57_val = SHIFT_SENSE_57.GetFloat(PropertyName.VAL);
                FORCE_AHEAD_53.SetFloat(231, FORCE_AHEAD_55_val * SHIFT_SENSE_57_val);
            }
            NO_MOUSE:
            var FORCE_AHEAD_58 = _world.GetObject(ObjectType.Skill, 480);
            var FORCE_AHEAD_58_val = FORCE_AHEAD_58.GetFloat(PropertyName.VAL);
            var FORCEFORWARD_59 = _world.GetObject(ObjectType.Skill, 590185617);
            FORCEFORWARD_59.SetFloat(231, FORCE_AHEAD_58_val);
            var FORCE_STRAFE_60 = _world.GetObject(ObjectType.Skill, 481);
            var FORCE_STRAFE_60_val = FORCE_STRAFE_60.GetFloat(PropertyName.VAL);
            var FORCESIDEWARD_61 = _world.GetObject(ObjectType.Skill, 2557859023);
            FORCESIDEWARD_61.SetFloat(231, FORCE_STRAFE_60_val);
            var FORCE_ROT_62 = _world.GetObject(ObjectType.Skill, 482);
            var FORCE_ROT_62_val = FORCE_ROT_62.GetFloat(PropertyName.VAL);
            var FORCEROTATION_63 = _world.GetObject(ObjectType.Skill, 2669285644);
            FORCEROTATION_63.SetFloat(231, FORCE_ROT_62_val);
            var MOUSE_RIGHT_65 = _world.GetObject(ObjectType.Skill, 473);
            var MOUSE_RIGHT_65_val = MOUSE_RIGHT_65.GetFloat(PropertyName.VAL);
            if (MOUSE_RIGHT_65_val == 1f)
            {
                var FORCEFORWARD_67 = _world.GetObject(ObjectType.Skill, 590185617);
                FORCEFORWARD_67.SetFloat(231, 2f);
            }
            var KEY_ALT_69 = _world.GetObject(ObjectType.Skill, 522);
            var KEY_ALT_69_val = KEY_ALT_69.GetFloat(PropertyName.VAL);
            if (KEY_ALT_69_val != 1f)
            {
                goto NOALT;
            }
            var FORCE_STRAFE_70 = _world.GetObject(ObjectType.Skill, 481);
            var FORCE_STRAFE_70_val = FORCE_STRAFE_70.GetFloat(PropertyName.VAL);
            var FORCEROTATION_71 = _world.GetObject(ObjectType.Skill, 2669285644);
            FORCEROTATION_71.SetFloat(231, FORCE_STRAFE_70_val);
            var FORCESIDEWARD_73 = _world.GetObject(ObjectType.Skill, 2557859023);
            FORCESIDEWARD_73.SetFloat(231, 0f);
            var FORCEFORWARD_75 = _world.GetObject(ObjectType.Skill, 590185617);
            FORCEFORWARD_75.SetFloat(231, 0f);
            NOALT:
            var BOOSTER_77 = _world.GetObject(ObjectType.Skill, 2588890763);
            BOOSTER_77.SetFloat(231, 1f);
            var MASS_78 = _world.GetObject(ObjectType.Skill, 2089315361);
            var MASS_78_val = MASS_78.GetFloat(PropertyName.VAL);
            var INERTIA_79 = _world.GetObject(ObjectType.Skill, 438);
            INERTIA_79.SetFloat(231, MASS_78_val);
            var FRICTION_80 = _world.GetObject(ObjectType.Skill, 437);
            var FRICTION_81 = _world.GetObject(ObjectType.Skill, 437);
            var FRICTION_81_val = FRICTION_81.GetFloat(PropertyName.VAL);
            var FRIC_82 = _world.GetObject(ObjectType.Skill, 2089081969);
            var FRIC_82_val = FRIC_82.GetFloat(PropertyName.VAL);
            var DEPTH_86 = _world.GetObject(ObjectType.Skill, 217365474);
            var DEPTH_86_val = DEPTH_86.GetFloat(PropertyName.VAL);
            FRICTION_80.SetFloat(231, FRIC_82_val + 0.1f * DEPTH_86_val);
            var FORCE_87 = _world.GetObject(ObjectType.Skill, 220098300);
            var FORCE_88 = _world.GetObject(ObjectType.Skill, 220098300);
            var FORCE_88_val = FORCE_88.GetFloat(PropertyName.VAL);
            var STRENGTH_90 = _world.GetObject(ObjectType.Skill, 461037372);
            var STRENGTH_90_val = STRENGTH_90.GetFloat(PropertyName.VAL);
            var WAVE_STR_92 = _world.GetObject(ObjectType.Skill, 525195384);
            var WAVE_STR_92_val = WAVE_STR_92.GetFloat(PropertyName.VAL);
            var WAVE_94 = _world.GetObject(ObjectType.Skill, 428);
            var WAVE_94_val = WAVE_94.GetFloat(PropertyName.VAL);
            var BOOSTER_97 = _world.GetObject(ObjectType.Skill, 2588890763);
            var BOOSTER_97_val = BOOSTER_97.GetFloat(PropertyName.VAL);
            var FORCEFORWARD_100 = _world.GetObject(ObjectType.Skill, 590185617);
            var FORCEFORWARD_100_val = FORCEFORWARD_100.GetFloat(PropertyName.VAL);
            var PLAYER_COS_102 = _world.GetObject(ObjectType.Skill, 464);
            var PLAYER_COS_102_val = PLAYER_COS_102.GetFloat(PropertyName.VAL);
            var FORCESIDEWARD_106 = _world.GetObject(ObjectType.Skill, 2557859023);
            var FORCESIDEWARD_106_val = FORCESIDEWARD_106.GetFloat(PropertyName.VAL);
            var PLAYER_SIN_108 = _world.GetObject(ObjectType.Skill, 463);
            var PLAYER_SIN_108_val = PLAYER_SIN_108.GetFloat(PropertyName.VAL);
            var DRIFT_X_111 = _world.GetObject(ObjectType.Skill, 986683741);
            var DRIFT_X_111_val = DRIFT_X_111.GetFloat(PropertyName.VAL);
            FORCE_87.SetFloat(231, (STRENGTH_90_val + WAVE_STR_92_val * WAVE_94_val) * BOOSTER_97_val * (FORCEFORWARD_100_val * PLAYER_COS_102_val - 0.5f * FORCESIDEWARD_106_val * PLAYER_SIN_108_val) + DRIFT_X_111_val);
            var FORCE_112 = _world.GetObject(ObjectType.Skill, 220098300);
            var FORCE_112_val = FORCE_112.GetFloat(PropertyName.VAL);
            var PLAYER_VX_113 = _world.GetObject(ObjectType.Skill, 431);
            var PLAYER_VX_113_val = PLAYER_VX_113.GetFloat(PropertyName.VAL);
            var PLAYER_VX_114 = _world.GetObject(ObjectType.Skill, 431);
            PLAYER_VX_114.SetFloat(231, _world.Accelerate(PLAYER_VX_113_val, FORCE_112_val));
            var FORCE_115 = _world.GetObject(ObjectType.Skill, 220098300);
            var FORCE_116 = _world.GetObject(ObjectType.Skill, 220098300);
            var FORCE_116_val = FORCE_116.GetFloat(PropertyName.VAL);
            var STRENGTH_118 = _world.GetObject(ObjectType.Skill, 461037372);
            var STRENGTH_118_val = STRENGTH_118.GetFloat(PropertyName.VAL);
            var WAVE_STR_120 = _world.GetObject(ObjectType.Skill, 525195384);
            var WAVE_STR_120_val = WAVE_STR_120.GetFloat(PropertyName.VAL);
            var WAVE_122 = _world.GetObject(ObjectType.Skill, 428);
            var WAVE_122_val = WAVE_122.GetFloat(PropertyName.VAL);
            var BOOSTER_125 = _world.GetObject(ObjectType.Skill, 2588890763);
            var BOOSTER_125_val = BOOSTER_125.GetFloat(PropertyName.VAL);
            var FORCEFORWARD_128 = _world.GetObject(ObjectType.Skill, 590185617);
            var FORCEFORWARD_128_val = FORCEFORWARD_128.GetFloat(PropertyName.VAL);
            var PLAYER_SIN_130 = _world.GetObject(ObjectType.Skill, 463);
            var PLAYER_SIN_130_val = PLAYER_SIN_130.GetFloat(PropertyName.VAL);
            var FORCESIDEWARD_134 = _world.GetObject(ObjectType.Skill, 2557859023);
            var FORCESIDEWARD_134_val = FORCESIDEWARD_134.GetFloat(PropertyName.VAL);
            var PLAYER_COS_136 = _world.GetObject(ObjectType.Skill, 464);
            var PLAYER_COS_136_val = PLAYER_COS_136.GetFloat(PropertyName.VAL);
            var DRIFT_Y_139 = _world.GetObject(ObjectType.Skill, 986683742);
            var DRIFT_Y_139_val = DRIFT_Y_139.GetFloat(PropertyName.VAL);
            FORCE_115.SetFloat(231, (STRENGTH_118_val + WAVE_STR_120_val * WAVE_122_val) * BOOSTER_125_val * (FORCEFORWARD_128_val * PLAYER_SIN_130_val + 0.5f * FORCESIDEWARD_134_val * PLAYER_COS_136_val) + DRIFT_Y_139_val);
            var FORCE_140 = _world.GetObject(ObjectType.Skill, 220098300);
            var FORCE_140_val = FORCE_140.GetFloat(PropertyName.VAL);
            var PLAYER_VY_141 = _world.GetObject(ObjectType.Skill, 432);
            var PLAYER_VY_141_val = PLAYER_VY_141.GetFloat(PropertyName.VAL);
            var PLAYER_VY_142 = _world.GetObject(ObjectType.Skill, 432);
            PLAYER_VY_142.SetFloat(231, _world.Accelerate(PLAYER_VY_141_val, FORCE_140_val));
            var FRICTION_144 = _world.GetObject(ObjectType.Skill, 437);
            FRICTION_144.SetFloat(231, 0.5f);
            var MODE_GEHEN_145 = _world.GetObject(ObjectType.Skill, 3270985304);
            var MODE_GEHEN_145_val = MODE_GEHEN_145.GetFloat(PropertyName.VAL);
            var MOVING_146 = _world.GetObject(ObjectType.Skill, 3242343005);
            var MOVING_146_val = MOVING_146.GetFloat(PropertyName.VAL);
            if (MOVING_146_val != MODE_GEHEN_145_val)
            {
                var FRICTION_148 = _world.GetObject(ObjectType.Skill, 437);
                FRICTION_148.SetFloat(231, 0.85f);
            }
            var FORCE_149 = _world.GetObject(ObjectType.Skill, 220098300);
            var FORCE_150 = _world.GetObject(ObjectType.Skill, 220098300);
            var FORCE_150_val = FORCE_150.GetFloat(PropertyName.VAL);
            var FORCEROTATION_153 = _world.GetObject(ObjectType.Skill, 2669285644);
            var FORCEROTATION_153_val = FORCEROTATION_153.GetFloat(PropertyName.VAL);
            FORCE_149.SetFloat(231, 0.05f * FORCEROTATION_153_val);
            var FORCE_154 = _world.GetObject(ObjectType.Skill, 220098300);
            var FORCE_154_val = FORCE_154.GetFloat(PropertyName.VAL);
            var PLAYER_VROT_155 = _world.GetObject(ObjectType.Skill, 434);
            var PLAYER_VROT_155_val = PLAYER_VROT_155.GetFloat(PropertyName.VAL);
            var PLAYER_VROT_156 = _world.GetObject(ObjectType.Skill, 434);
            PLAYER_VROT_156.SetFloat(231, _world.Accelerate(PLAYER_VROT_155_val, FORCE_154_val));
            var WEAPONWAVE_157 = _world.GetObject(ObjectType.Skill, 3283454442);
            var WEAPONWAVE_158 = _world.GetObject(ObjectType.Skill, 3283454442);
            var WEAPONWAVE_158_val = WEAPONWAVE_158.GetFloat(PropertyName.VAL);
            var WAVE_159 = _world.GetObject(ObjectType.Skill, 428);
            var WAVE_159_val = WAVE_159.GetFloat(PropertyName.VAL);
            var PLAYER_SPEED_161 = _world.GetObject(ObjectType.Skill, 465);
            var PLAYER_SPEED_161_val = PLAYER_SPEED_161.GetFloat(PropertyName.VAL);
            WEAPONWAVE_157.SetFloat(231, WAVE_159_val * PLAYER_SPEED_161_val);
            var MP5_01OVL_163 = _world.AcknexObject.GetAcknexObject(2701560848);
            var MP5_01OVL_165 = _world.AcknexObject.GetAcknexObject(2701560848);
            var temp_166 = MP5_01OVL_165.GetFloat(225);
            var WEAPONWAVE_171 = _world.GetObject(ObjectType.Skill, 3283454442);
            var WEAPONWAVE_171_val = WEAPONWAVE_171.GetFloat(PropertyName.VAL);
            MP5_01OVL_163.SetFloat(225, 100f + 12f * WEAPONWAVE_171_val);
            var QGUN00OVL_173 = _world.AcknexObject.GetAcknexObject(2621910329);
            var QGUN00OVL_175 = _world.AcknexObject.GetAcknexObject(2621910329);
            var temp_176 = QGUN00OVL_175.GetFloat(225);
            var WEAPONWAVE_181 = _world.GetObject(ObjectType.Skill, 3283454442);
            var WEAPONWAVE_181_val = WEAPONWAVE_181.GetFloat(PropertyName.VAL);
            QGUN00OVL_173.SetFloat(225, 190f + 6f * WEAPONWAVE_181_val);
            var GRAN00OVL_183 = _world.AcknexObject.GetAcknexObject(850536902);
            var GRAN00OVL_185 = _world.AcknexObject.GetAcknexObject(850536902);
            var temp_186 = GRAN00OVL_185.GetFloat(225);
            var WEAPONWAVE_191 = _world.GetObject(ObjectType.Skill, 3283454442);
            var WEAPONWAVE_191_val = WEAPONWAVE_191.GetFloat(PropertyName.VAL);
            GRAN00OVL_183.SetFloat(225, 184f + 6f * WEAPONWAVE_191_val);
            var FORCE_192 = _world.GetObject(ObjectType.Skill, 220098300);
            var FORCE_193 = _world.GetObject(ObjectType.Skill, 220098300);
            var FORCE_193_val = FORCE_193.GetFloat(PropertyName.VAL);
            var GRAVITY_194 = _world.GetObject(ObjectType.Skill, 557195635);
            var GRAVITY_194_val = GRAVITY_194.GetFloat(PropertyName.VAL);
            var FLOAT_STR_196 = _world.GetObject(ObjectType.Skill, 1319913115);
            var FLOAT_STR_196_val = FLOAT_STR_196.GetFloat(PropertyName.VAL);
            var FORCE_UP_198 = _world.GetObject(ObjectType.Skill, 484);
            var FORCE_UP_198_val = FORCE_UP_198.GetFloat(PropertyName.VAL);
            FORCE_192.SetFloat(231, GRAVITY_194_val + FLOAT_STR_196_val * FORCE_UP_198_val);
            var FRIC_AIR_199 = _world.GetObject(ObjectType.Skill, 1830104876);
            var FRIC_AIR_199_val = FRIC_AIR_199.GetFloat(PropertyName.VAL);
            var FRICTION_200 = _world.GetObject(ObjectType.Skill, 437);
            FRICTION_200.SetFloat(231, FRIC_AIR_199_val);
            var PLAYER_HGT_202 = _world.GetObject(ObjectType.Skill, 479);
            var PLAYER_HGT_202_val = PLAYER_HGT_202.GetFloat(PropertyName.VAL);
            if (PLAYER_HGT_202_val > 0f)
            {
                goto AIRBORNE;
            }
            var FRICTION_204 = _world.GetObject(ObjectType.Skill, 437);
            FRICTION_204.SetFloat(231, 0.98f);
            var FORCE_205 = _world.GetObject(ObjectType.Skill, 220098300);
            var FORCE_206 = _world.GetObject(ObjectType.Skill, 220098300);
            var FORCE_206_val = FORCE_206.GetFloat(PropertyName.VAL);
            var FORCE_207 = _world.GetObject(ObjectType.Skill, 220098300);
            var FORCE_207_val = FORCE_207.GetFloat(PropertyName.VAL);
            var PLAYER_HGT_211 = _world.GetObject(ObjectType.Skill, 479);
            var PLAYER_HGT_211_val = PLAYER_HGT_211.GetFloat(PropertyName.VAL);
            FORCE_205.SetFloat(231, FORCE_207_val - 0.2f * PLAYER_HGT_211_val);
            var FALLING_HEIGHT_213 = _world.GetObject(ObjectType.Skill, 4024852386);
            var FALLING_HEIGHT_213_val = FALLING_HEIGHT_213.GetFloat(PropertyName.VAL);
            if (FALLING_HEIGHT_213_val == 0f)
            {
                goto AIRBORNE;
            }
            var HERE_216 = _world.GetSynonymObject(703);
            var temp_217 = HERE_216?.GetAcknexObject(242);
            if (temp_217 == null)
            {
                goto FELL;
            }
            var FALLING_HEIGHT_219 = _world.GetObject(ObjectType.Skill, 4024852386);
            FALLING_HEIGHT_219.SetFloat(231, 0f);
            var FWT01SND_220 = _world.AcknexObject.GetAcknexObject(103833604);
            _world.PlaySound(FWT01SND_220, 0.5f, null);
            goto AIRBORNE;
            FELL:
            var FALLING_FLOOR_222 = _world.GetObject(ObjectType.Skill, 3373615819);
            var FALLING_FLOOR_222_val = FALLING_FLOOR_222.GetFloat(PropertyName.VAL);
            var HERE_224 = _world.GetSynonymObject(703);
            var temp_225 = HERE_224.GetFloat(200);
            if (temp_225 > FALLING_FLOOR_222_val)
            {
                var FALLING_HEIGHT_226 = _world.GetObject(ObjectType.Skill, 4024852386);
                var FALLING_HEIGHT_227 = _world.GetObject(ObjectType.Skill, 4024852386);
                var FALLING_HEIGHT_227_val = FALLING_HEIGHT_227.GetFloat(PropertyName.VAL);
                var FALLING_HEIGHT_228 = _world.GetObject(ObjectType.Skill, 4024852386);
                var FALLING_HEIGHT_228_val = FALLING_HEIGHT_228.GetFloat(PropertyName.VAL);
                var HERE_231 = _world.GetSynonymObject(703);
                var temp_232 = HERE_231.GetFloat(200);
                var FALLING_FLOOR_234 = _world.GetObject(ObjectType.Skill, 3373615819);
                var FALLING_FLOOR_234_val = FALLING_FLOOR_234.GetFloat(PropertyName.VAL);
                FALLING_HEIGHT_226.SetFloat(231, FALLING_HEIGHT_228_val - temp_232 + FALLING_FLOOR_234_val);
            }
            var FCT01SND_235 = _world.AcknexObject.GetAcknexObject(44278000);
            _world.PlaySound(FCT01SND_235, 0.5f, null);
            var PLAYER_RESULT_237 = _world.GetObject(ObjectType.Skill, 1861765784);
            var PLAYER_RESULT_238 = _world.GetObject(ObjectType.Skill, 1861765784);
            var PLAYER_RESULT_238_val = PLAYER_RESULT_238.GetFloat(PropertyName.VAL);
            var FALLING_HEIGHT_240 = _world.GetObject(ObjectType.Skill, 4024852386);
            var FALLING_HEIGHT_240_val = FALLING_HEIGHT_240.GetFloat(PropertyName.VAL);
            PLAYER_RESULT_237.SetFloat(231, (FALLING_HEIGHT_240_val - 6f) / 2f);
            var PLAYER_RESULT_247 = _world.GetObject(ObjectType.Skill, 1861765784);
            var PLAYER_RESULT_247_val = PLAYER_RESULT_247.GetFloat(PropertyName.VAL);
            if (PLAYER_RESULT_247_val > 0f)
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
            var FALLING_HEIGHT_249 = _world.GetObject(ObjectType.Skill, 4024852386);
            FALLING_HEIGHT_249.SetFloat(231, 0f);
            AIRBORNE:
            var FORCE_250 = _world.GetObject(ObjectType.Skill, 220098300);
            var FORCE_250_val = FORCE_250.GetFloat(PropertyName.VAL);
            var PLAYER_VZ_251 = _world.GetObject(ObjectType.Skill, 433);
            var PLAYER_VZ_251_val = PLAYER_VZ_251.GetFloat(PropertyName.VAL);
            var PLAYER_VZ_252 = _world.GetObject(ObjectType.Skill, 433);
            PLAYER_VZ_252.SetFloat(231, _world.Accelerate(PLAYER_VZ_251_val, FORCE_250_val));
            var PLAYER_HGT_254 = _world.GetObject(ObjectType.Skill, 479);
            var PLAYER_HGT_254_val = PLAYER_HGT_254.GetFloat(PropertyName.VAL);
            if (PLAYER_HGT_254_val < 2f)
            {
                goto AIRBORNE2;
            }
            var HERE_257 = _world.GetSynonymObject(703);
            var temp_258 = HERE_257?.GetAcknexObject(243);
            if (temp_258 != null)
            {
                goto AIRBORNE2;
            }
            var HERE_261 = _world.GetSynonymObject(703);
            var temp_262 = HERE_261?.GetAcknexObject(242);
            if (temp_262 != null)
            {
                goto AIRBORNE2;
            }
            var FALLING_HEIGHT_263 = _world.GetObject(ObjectType.Skill, 4024852386);
            var FALLING_HEIGHT_263_val = FALLING_HEIGHT_263.GetFloat(PropertyName.VAL);
            var PLAYER_HGT_264 = _world.GetObject(ObjectType.Skill, 479);
            var PLAYER_HGT_264_val = PLAYER_HGT_264.GetFloat(PropertyName.VAL);
            if (PLAYER_HGT_264_val > FALLING_HEIGHT_263_val)
            {
                goto FALLING;
            }
            goto AIRBORNE2;
            FALLING:
            var HERE_266 = _world.GetSynonymObject(703);
            var temp_267 = HERE_266.GetFloat(200);
            var FALLING_FLOOR_268 = _world.GetObject(ObjectType.Skill, 3373615819);
            FALLING_FLOOR_268.SetFloat(231, temp_267);
            var PLAYER_HGT_269 = _world.GetObject(ObjectType.Skill, 479);
            var PLAYER_HGT_269_val = PLAYER_HGT_269.GetFloat(PropertyName.VAL);
            var FALLING_HEIGHT_270 = _world.GetObject(ObjectType.Skill, 4024852386);
            FALLING_HEIGHT_270.SetFloat(231, PLAYER_HGT_269_val);
            AIRBORNE2:
            var DUCK_VAL_271 = _world.GetObject(ObjectType.Skill, 1846699062);
            var DUCK_VAL_272 = _world.GetObject(ObjectType.Skill, 1846699062);
            var DUCK_VAL_272_val = DUCK_VAL_272.GetFloat(PropertyName.VAL);
            var DUCK_VAL_275 = _world.GetObject(ObjectType.Skill, 1846699062);
            var DUCK_VAL_275_val = DUCK_VAL_275.GetFloat(PropertyName.VAL);
            DUCK_VAL_271.SetFloat(231, 0.8f * DUCK_VAL_275_val);
            var MODE_SCHWIMMEN_276 = _world.GetObject(ObjectType.Skill, 3755117404);
            var MODE_SCHWIMMEN_276_val = MODE_SCHWIMMEN_276.GetFloat(PropertyName.VAL);
            var MOVING_277 = _world.GetObject(ObjectType.Skill, 3242343005);
            var MOVING_277_val = MOVING_277.GetFloat(PropertyName.VAL);
            if (MOVING_277_val == MODE_SCHWIMMEN_276_val)
            {
                goto DUCK;
            }
            var FORCE_UP_279 = _world.GetObject(ObjectType.Skill, 484);
            var FORCE_UP_279_val = FORCE_UP_279.GetFloat(PropertyName.VAL);
            if (FORCE_UP_279_val > 0f)
            {
                goto NO_DUCK;
            }
            DUCK:
            var DUCK_VAL_280 = _world.GetObject(ObjectType.Skill, 1846699062);
            var DUCK_VAL_281 = _world.GetObject(ObjectType.Skill, 1846699062);
            var DUCK_VAL_281_val = DUCK_VAL_281.GetFloat(PropertyName.VAL);
            var DUCK_VAL_282 = _world.GetObject(ObjectType.Skill, 1846699062);
            var DUCK_VAL_282_val = DUCK_VAL_282.GetFloat(PropertyName.VAL);
            var DUCK_STR_284 = _world.GetObject(ObjectType.Skill, 1846696428);
            var DUCK_STR_284_val = DUCK_STR_284.GetFloat(PropertyName.VAL);
            var FORCE_UP_286 = _world.GetObject(ObjectType.Skill, 484);
            var FORCE_UP_286_val = FORCE_UP_286.GetFloat(PropertyName.VAL);
            DUCK_VAL_280.SetFloat(231, DUCK_VAL_282_val + DUCK_STR_284_val * FORCE_UP_286_val);
            NO_DUCK:
            var PLAYER_SIZE_287 = _world.GetObject(ObjectType.Skill, 422);
            var PLAYER_SIZE_288 = _world.GetObject(ObjectType.Skill, 422);
            var PLAYER_SIZE_288_val = PLAYER_SIZE_288.GetFloat(PropertyName.VAL);
            var PLAYER_SIZE_289 = _world.GetObject(ObjectType.Skill, 422);
            var PLAYER_SIZE_289_val = PLAYER_SIZE_289.GetFloat(PropertyName.VAL);
            var DUCK_VAL_291 = _world.GetObject(ObjectType.Skill, 1846699062);
            var DUCK_VAL_291_val = DUCK_VAL_291.GetFloat(PropertyName.VAL);
            PLAYER_SIZE_287.SetFloat(231, PLAYER_SIZE_289_val + DUCK_VAL_291_val);
            var MODE_GEHEN_292 = _world.GetObject(ObjectType.Skill, 3270985304);
            var MODE_GEHEN_292_val = MODE_GEHEN_292.GetFloat(PropertyName.VAL);
            var MOVING_293 = _world.GetObject(ObjectType.Skill, 3242343005);
            var MOVING_293_val = MOVING_293.GetFloat(PropertyName.VAL);
            if (MOVING_293_val != MODE_GEHEN_292_val)
            {
                goto NO_JUMP;
            }
            var JUMP_PHASE_295 = _world.GetObject(ObjectType.Skill, 259503833);
            var JUMP_PHASE_295_val = JUMP_PHASE_295.GetFloat(PropertyName.VAL);
            if (JUMP_PHASE_295_val > 0f)
            {
                goto JUMP_1;
            }
            var FORCE_UP_297 = _world.GetObject(ObjectType.Skill, 484);
            var FORCE_UP_297_val = FORCE_UP_297.GetFloat(PropertyName.VAL);
            if (FORCE_UP_297_val < 0.1f)
            {
                goto NO_JUMP;
            }
            var JUMP_PHASE_299 = _world.GetObject(ObjectType.Skill, 259503833);
            JUMP_PHASE_299.SetFloat(231, 1f);
            JUMP_1:
            var JUMP_PHASE_301 = _world.GetObject(ObjectType.Skill, 259503833);
            var JUMP_PHASE_301_val = JUMP_PHASE_301.GetFloat(PropertyName.VAL);
            if (JUMP_PHASE_301_val > 1f)
            {
                goto JUMP_2;
            }
            var DUCK_VAL_302 = _world.GetObject(ObjectType.Skill, 1846699062);
            var DUCK_VAL_303 = _world.GetObject(ObjectType.Skill, 1846699062);
            var DUCK_VAL_303_val = DUCK_VAL_303.GetFloat(PropertyName.VAL);
            var DUCK_VAL_304 = _world.GetObject(ObjectType.Skill, 1846699062);
            var DUCK_VAL_304_val = DUCK_VAL_304.GetFloat(PropertyName.VAL);
            DUCK_VAL_302.SetFloat(231, DUCK_VAL_304_val - 0.5f);
            var DUCK_VAL_308 = _world.GetObject(ObjectType.Skill, 1846699062);
            var DUCK_VAL_308_val = DUCK_VAL_308.GetFloat(PropertyName.VAL);
            if (DUCK_VAL_308_val < -0.7f)
            {
                var JUMP_PHASE_310 = _world.GetObject(ObjectType.Skill, 259503833);
                JUMP_PHASE_310.SetFloat(231, 2f);
            }
            goto NO_JUMP;
            JUMP_2:
            var JUMP_PHASE_312 = _world.GetObject(ObjectType.Skill, 259503833);
            var JUMP_PHASE_312_val = JUMP_PHASE_312.GetFloat(PropertyName.VAL);
            if (JUMP_PHASE_312_val > 2f)
            {
                goto JUMP_3;
            }
            var DUCK_VAL_314 = _world.GetObject(ObjectType.Skill, 1846699062);
            DUCK_VAL_314.SetFloat(231, 0f);
            var PLAYER_Z_315 = _world.GetObject(ObjectType.Skill, 461);
            var PLAYER_Z_316 = _world.GetObject(ObjectType.Skill, 461);
            var PLAYER_Z_316_val = PLAYER_Z_316.GetFloat(PropertyName.VAL);
            var FLOOR_HGT_317 = _world.GetObject(ObjectType.Skill, 567);
            var FLOOR_HGT_317_val = FLOOR_HGT_317.GetFloat(PropertyName.VAL);
            var MY_SIZE_319 = _world.GetObject(ObjectType.Skill, 25486605);
            var MY_SIZE_319_val = MY_SIZE_319.GetFloat(PropertyName.VAL);
            PLAYER_Z_315.SetFloat(231, FLOOR_HGT_317_val + MY_SIZE_319_val);
            var PLAYER_VZ_321 = _world.GetObject(ObjectType.Skill, 433);
            PLAYER_VZ_321.SetFloat(231, 0.35f);
            var JUMP_PHASE_323 = _world.GetObject(ObjectType.Skill, 259503833);
            JUMP_PHASE_323.SetFloat(231, 3f);
            goto NO_JUMP;
            JUMP_3:
            var PLAYER_VZ_325 = _world.GetObject(ObjectType.Skill, 433);
            var PLAYER_VZ_325_val = PLAYER_VZ_325.GetFloat(PropertyName.VAL);
            if (PLAYER_VZ_325_val > 0f)
            {
                goto NO_JUMP;
            }
            var PLAYER_HGT_327 = _world.GetObject(ObjectType.Skill, 479);
            var PLAYER_HGT_327_val = PLAYER_HGT_327.GetFloat(PropertyName.VAL);
            if (PLAYER_HGT_327_val > 0f)
            {
                goto NO_JUMP;
            }
            var JUMP_PHASE_329 = _world.GetObject(ObjectType.Skill, 259503833);
            JUMP_PHASE_329.SetFloat(231, 0f);
            NO_JUMP:
            var PLAYER_SPEED_SQR_330 = _world.GetObject(ObjectType.Skill, 310408863);
            var PLAYER_SPEED_SQR_331 = _world.GetObject(ObjectType.Skill, 310408863);
            var PLAYER_SPEED_SQR_331_val = PLAYER_SPEED_SQR_331.GetFloat(PropertyName.VAL);
            var PLAYER_VX_332 = _world.GetObject(ObjectType.Skill, 431);
            var PLAYER_VX_332_val = PLAYER_VX_332.GetFloat(PropertyName.VAL);
            var PLAYER_VX_334 = _world.GetObject(ObjectType.Skill, 431);
            var PLAYER_VX_334_val = PLAYER_VX_334.GetFloat(PropertyName.VAL);
            var PLAYER_VY_336 = _world.GetObject(ObjectType.Skill, 432);
            var PLAYER_VY_336_val = PLAYER_VY_336.GetFloat(PropertyName.VAL);
            var PLAYER_VY_338 = _world.GetObject(ObjectType.Skill, 432);
            var PLAYER_VY_338_val = PLAYER_VY_338.GetFloat(PropertyName.VAL);
            PLAYER_SPEED_SQR_330.SetFloat(231, PLAYER_VX_332_val * PLAYER_VX_334_val + PLAYER_VY_336_val * PLAYER_VY_338_val);
            var TILT_DECREASE_340 = _world.GetObject(ObjectType.Skill, 3051803237);
            var TILT_DECREASE_340_val = TILT_DECREASE_340.GetFloat(PropertyName.VAL);
            if (TILT_DECREASE_340_val != 1f)
            {
                goto CALC_TILT;
            }
            var MAX_PLAYER_TILT_P_341 = _world.GetObject(ObjectType.Skill, 3767657834);
            var MAX_PLAYER_TILT_P_341_val = MAX_PLAYER_TILT_P_341.GetFloat(PropertyName.VAL);
            var PLAYER_TILT_342 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_342_val = PLAYER_TILT_342.GetFloat(PropertyName.VAL);
            if (PLAYER_TILT_342_val > MAX_PLAYER_TILT_P_341_val)
            {
                goto CHECK_SPEED_TILT;
            }
            var MAX_PLAYER_TILT_N_343 = _world.GetObject(ObjectType.Skill, 3767657832);
            var MAX_PLAYER_TILT_N_343_val = MAX_PLAYER_TILT_N_343.GetFloat(PropertyName.VAL);
            var PLAYER_TILT_344 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_344_val = PLAYER_TILT_344.GetFloat(PropertyName.VAL);
            if (PLAYER_TILT_344_val > MAX_PLAYER_TILT_N_343_val)
            {
                goto DECR_TILT;
            }
            CHECK_SPEED_TILT:
            var PLAYER_SPEED_SQR_346 = _world.GetObject(ObjectType.Skill, 310408863);
            var PLAYER_SPEED_SQR_346_val = PLAYER_SPEED_SQR_346.GetFloat(PropertyName.VAL);
            if (PLAYER_SPEED_SQR_346_val > 0.4f)
            {
                goto DECR_TILT;
            }
            var PLAYER_VZ_348 = _world.GetObject(ObjectType.Skill, 433);
            var PLAYER_VZ_348_val = PLAYER_VZ_348.GetFloat(PropertyName.VAL);
            if (PLAYER_VZ_348_val != 0f)
            {
                goto DECR_TILT;
            }
            goto CALC_TILT;
            DECR_TILT:
            var TILT_DECREASE_350 = _world.GetObject(ObjectType.Skill, 3051803237);
            TILT_DECREASE_350.SetFloat(231, 0.8f);
            CALC_TILT:
            var PLAYER_TILT_351 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_352 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_352_val = PLAYER_TILT_352.GetFloat(PropertyName.VAL);
            var TILT_DECREASE_353 = _world.GetObject(ObjectType.Skill, 3051803237);
            var TILT_DECREASE_353_val = TILT_DECREASE_353.GetFloat(PropertyName.VAL);
            var PLAYER_TILT_355 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_355_val = PLAYER_TILT_355.GetFloat(PropertyName.VAL);
            var FORCE_TILT_359 = _world.GetObject(ObjectType.Skill, 483);
            var FORCE_TILT_359_val = FORCE_TILT_359.GetFloat(PropertyName.VAL);
            var FLOAT_STR_363 = _world.GetObject(ObjectType.Skill, 1319913115);
            var FLOAT_STR_363_val = FLOAT_STR_363.GetFloat(PropertyName.VAL);
            var FORCE_UP_365 = _world.GetObject(ObjectType.Skill, 484);
            var FORCE_UP_365_val = FORCE_UP_365.GetFloat(PropertyName.VAL);
            var TIME_CORR_367 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_367_val = TIME_CORR_367.GetFloat(PropertyName.VAL);
            var FLY_MODE_372 = _world.GetObject(ObjectType.Skill, 3329971932);
            var FLY_MODE_372_val = FLY_MODE_372.GetFloat(PropertyName.VAL);
            PLAYER_TILT_351.SetFloat(231, TILT_DECREASE_353_val * PLAYER_TILT_355_val + 0.3f * FORCE_TILT_359_val - 0.3f * FLOAT_STR_363_val * FORCE_UP_365_val * TIME_CORR_367_val * (1f - FLY_MODE_372_val));
            var PLAYER_SPEED_SQR_375 = _world.GetObject(ObjectType.Skill, 310408863);
            var PLAYER_SPEED_SQR_375_val = PLAYER_SPEED_SQR_375.GetFloat(PropertyName.VAL);
            if (PLAYER_SPEED_SQR_375_val > 0f)
            {
                goto skip_376;
            }
            var MAX_PLAYER_TILT_P_377 = _world.GetObject(ObjectType.Skill, 3767657834);
            var MAX_PLAYER_TILT_P_377_val = MAX_PLAYER_TILT_P_377.GetFloat(PropertyName.VAL);
            var PLAYER_TILT_378 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_378_val = PLAYER_TILT_378.GetFloat(PropertyName.VAL);
            if (PLAYER_TILT_378_val > MAX_PLAYER_TILT_P_377_val)
            {
                var TILT_DECREASE_380 = _world.GetObject(ObjectType.Skill, 3051803237);
                TILT_DECREASE_380.SetFloat(231, 1f);
            }
            var MAX_PLAYER_TILT_N_381 = _world.GetObject(ObjectType.Skill, 3767657832);
            var MAX_PLAYER_TILT_N_381_val = MAX_PLAYER_TILT_N_381.GetFloat(PropertyName.VAL);
            var PLAYER_TILT_382 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_382_val = PLAYER_TILT_382.GetFloat(PropertyName.VAL);
            if (PLAYER_TILT_382_val < MAX_PLAYER_TILT_N_381_val)
            {
                var TILT_DECREASE_384 = _world.GetObject(ObjectType.Skill, 3051803237);
                TILT_DECREASE_384.SetFloat(231, 1f);
            }
            skip_376:
            var MODE_SCHWIMMEN_385 = _world.GetObject(ObjectType.Skill, 3755117404);
            var MODE_SCHWIMMEN_385_val = MODE_SCHWIMMEN_385.GetFloat(PropertyName.VAL);
            var MOVING_386 = _world.GetObject(ObjectType.Skill, 3242343005);
            var MOVING_386_val = MOVING_386.GetFloat(PropertyName.VAL);
            if (MOVING_386_val == MODE_SCHWIMMEN_385_val)
            {
                var PLAYER_TILT_387 = _world.GetObject(ObjectType.Skill, 435);
                var PLAYER_TILT_388 = _world.GetObject(ObjectType.Skill, 435);
                var PLAYER_TILT_388_val = PLAYER_TILT_388.GetFloat(PropertyName.VAL);
                var PLAYER_TILT_389 = _world.GetObject(ObjectType.Skill, 435);
                var PLAYER_TILT_389_val = PLAYER_TILT_389.GetFloat(PropertyName.VAL);
                var WAVE_393 = _world.GetObject(ObjectType.Skill, 428);
                var WAVE_393_val = WAVE_393.GetFloat(PropertyName.VAL);
                PLAYER_TILT_387.SetFloat(231, PLAYER_TILT_389_val + 0.01f * WAVE_393_val);
            }
            var MODE_TAUCHEN_394 = _world.GetObject(ObjectType.Skill, 1042033433);
            var MODE_TAUCHEN_394_val = MODE_TAUCHEN_394.GetFloat(PropertyName.VAL);
            var MOVING_395 = _world.GetObject(ObjectType.Skill, 3242343005);
            var MOVING_395_val = MOVING_395.GetFloat(PropertyName.VAL);
            if (MOVING_395_val == MODE_TAUCHEN_394_val)
            {
                goto NO_HTILT;
            }
            var JUMP_PHASE_397 = _world.GetObject(ObjectType.Skill, 259503833);
            var JUMP_PHASE_397_val = JUMP_PHASE_397.GetFloat(PropertyName.VAL);
            if (JUMP_PHASE_397_val > 0f)
            {
                goto NO_HTILT;
            }
            var TILT_DECREASE_399 = _world.GetObject(ObjectType.Skill, 3051803237);
            var TILT_DECREASE_399_val = TILT_DECREASE_399.GetFloat(PropertyName.VAL);
            if (TILT_DECREASE_399_val == 1f)
            {
                goto NO_HTILT;
            }
            var PLAYER_HGT_401 = _world.GetObject(ObjectType.Skill, 479);
            var PLAYER_HGT_401_val = PLAYER_HGT_401.GetFloat(PropertyName.VAL);
            if (PLAYER_HGT_401_val > 0f)
            {
                var PLAYER_TILT_402 = _world.GetObject(ObjectType.Skill, 435);
                var PLAYER_TILT_403 = _world.GetObject(ObjectType.Skill, 435);
                var PLAYER_TILT_403_val = PLAYER_TILT_403.GetFloat(PropertyName.VAL);
                var PLAYER_TILT_404 = _world.GetObject(ObjectType.Skill, 435);
                var PLAYER_TILT_404_val = PLAYER_TILT_404.GetFloat(PropertyName.VAL);
                var PLAYER_HGT_409 = _world.GetObject(ObjectType.Skill, 479);
                var PLAYER_HGT_409_val = PLAYER_HGT_409.GetFloat(PropertyName.VAL);
                PLAYER_TILT_402.SetFloat(231, PLAYER_TILT_404_val + 0.03f * (PLAYER_HGT_409_val + 0.3f));
            }
            NO_HTILT:
            var RICHTER_414 = _world.GetObject(ObjectType.Skill, 1528103070);
            var RICHTER_414_val = RICHTER_414.GetFloat(PropertyName.VAL);
            if (RICHTER_414_val == 0f)
            {
                goto NO_QUAKE;
            }
            var PLAYER_X_415 = _world.GetObject(ObjectType.Skill, 459);
            var PLAYER_X_416 = _world.GetObject(ObjectType.Skill, 459);
            var PLAYER_X_416_val = PLAYER_X_416.GetFloat(PropertyName.VAL);
            var PLAYER_X_417 = _world.GetObject(ObjectType.Skill, 459);
            var PLAYER_X_417_val = PLAYER_X_417.GetFloat(PropertyName.VAL);
            var RICHTER_419 = _world.GetObject(ObjectType.Skill, 1528103070);
            var RICHTER_419_val = RICHTER_419.GetFloat(PropertyName.VAL);
            PLAYER_X_415.SetFloat(231, PLAYER_X_417_val + RICHTER_419_val * (UnityEngine.Random.value - 0.5f));
            var PLAYER_Y_426 = _world.GetObject(ObjectType.Skill, 460);
            var PLAYER_Y_427 = _world.GetObject(ObjectType.Skill, 460);
            var PLAYER_Y_427_val = PLAYER_Y_427.GetFloat(PropertyName.VAL);
            var PLAYER_Y_428 = _world.GetObject(ObjectType.Skill, 460);
            var PLAYER_Y_428_val = PLAYER_Y_428.GetFloat(PropertyName.VAL);
            var RICHTER_430 = _world.GetObject(ObjectType.Skill, 1528103070);
            var RICHTER_430_val = RICHTER_430.GetFloat(PropertyName.VAL);
            var RANDOM_1_433 = _world.GetObject(ObjectType.Skill, 1866495038);
            var RANDOM_1_433_val = RANDOM_1_433.GetFloat(PropertyName.VAL);
            PLAYER_Y_426.SetFloat(231, PLAYER_Y_428_val + RICHTER_430_val * (RANDOM_1_433_val - 0.5f));
            var PLAYER_VX_437 = _world.GetObject(ObjectType.Skill, 431);
            var PLAYER_VX_438 = _world.GetObject(ObjectType.Skill, 431);
            var PLAYER_VX_438_val = PLAYER_VX_438.GetFloat(PropertyName.VAL);
            var PLAYER_VX_439 = _world.GetObject(ObjectType.Skill, 431);
            var PLAYER_VX_439_val = PLAYER_VX_439.GetFloat(PropertyName.VAL);
            var RICHTER_443 = _world.GetObject(ObjectType.Skill, 1528103070);
            var RICHTER_443_val = RICHTER_443.GetFloat(PropertyName.VAL);
            PLAYER_VX_437.SetFloat(231, PLAYER_VX_439_val + 0.2f * RICHTER_443_val * (UnityEngine.Random.value - 0.5f));
            var PLAYER_VY_450 = _world.GetObject(ObjectType.Skill, 432);
            var PLAYER_VY_451 = _world.GetObject(ObjectType.Skill, 432);
            var PLAYER_VY_451_val = PLAYER_VY_451.GetFloat(PropertyName.VAL);
            var PLAYER_VY_452 = _world.GetObject(ObjectType.Skill, 432);
            var PLAYER_VY_452_val = PLAYER_VY_452.GetFloat(PropertyName.VAL);
            var RICHTER_456 = _world.GetObject(ObjectType.Skill, 1528103070);
            var RICHTER_456_val = RICHTER_456.GetFloat(PropertyName.VAL);
            var RANDOM_1_459 = _world.GetObject(ObjectType.Skill, 1866495038);
            var RANDOM_1_459_val = RANDOM_1_459.GetFloat(PropertyName.VAL);
            PLAYER_VY_450.SetFloat(231, PLAYER_VY_452_val + 0.2f * RICHTER_456_val * (RANDOM_1_459_val - 0.5f));
            var PLAYER_Z_463 = _world.GetObject(ObjectType.Skill, 461);
            var PLAYER_Z_464 = _world.GetObject(ObjectType.Skill, 461);
            var PLAYER_Z_464_val = PLAYER_Z_464.GetFloat(PropertyName.VAL);
            var PLAYER_Z_465 = _world.GetObject(ObjectType.Skill, 461);
            var PLAYER_Z_465_val = PLAYER_Z_465.GetFloat(PropertyName.VAL);
            var RICHTER_467 = _world.GetObject(ObjectType.Skill, 1528103070);
            var RICHTER_467_val = RICHTER_467.GetFloat(PropertyName.VAL);
            var RANDOM_2_470 = _world.GetObject(ObjectType.Skill, 1866495039);
            var RANDOM_2_470_val = RANDOM_2_470.GetFloat(PropertyName.VAL);
            PLAYER_Z_463.SetFloat(231, PLAYER_Z_465_val + RICHTER_467_val * (RANDOM_2_470_val - 0.5f));
            var RANDOM_1_474 = _world.GetObject(ObjectType.Skill, 1866495038);
            var RANDOM_1_474_val = RANDOM_1_474.GetFloat(PropertyName.VAL);
            var RANDOM_2_475 = _world.GetObject(ObjectType.Skill, 1866495039);
            RANDOM_2_475.SetFloat(231, RANDOM_1_474_val);
            var RANDOM_1_477 = _world.GetObject(ObjectType.Skill, 1866495038);
            RANDOM_1_477.SetFloat(231, UnityEngine.Random.value);
            NO_QUAKE:
            yield break;
            var KEY_INS_479 = _world.GetObject(ObjectType.Skill, 541);
            var KEY_INS_479_val = KEY_INS_479.GetFloat(PropertyName.VAL);
            if (KEY_INS_479_val > 0f)
            {
                var PLAYER_ARC_480 = _world.GetObject(ObjectType.Skill, 436);
                var PLAYER_ARC_481 = _world.GetObject(ObjectType.Skill, 436);
                var PLAYER_ARC_481_val = PLAYER_ARC_481.GetFloat(PropertyName.VAL);
                var PLAYER_ARC_482 = _world.GetObject(ObjectType.Skill, 436);
                var PLAYER_ARC_482_val = PLAYER_ARC_482.GetFloat(PropertyName.VAL);
                PLAYER_ARC_480.SetFloat(231, PLAYER_ARC_482_val - 0.1f);
            }
            var KEY_DEL_486 = _world.GetObject(ObjectType.Skill, 527);
            var KEY_DEL_486_val = KEY_DEL_486.GetFloat(PropertyName.VAL);
            if (KEY_DEL_486_val > 0f)
            {
                var PLAYER_ARC_487 = _world.GetObject(ObjectType.Skill, 436);
                var PLAYER_ARC_488 = _world.GetObject(ObjectType.Skill, 436);
                var PLAYER_ARC_488_val = PLAYER_ARC_488.GetFloat(PropertyName.VAL);
                var PLAYER_ARC_489 = _world.GetObject(ObjectType.Skill, 436);
                var PLAYER_ARC_489_val = PLAYER_ARC_489.GetFloat(PropertyName.VAL);
                PLAYER_ARC_487.SetFloat(231, PLAYER_ARC_489_val + 0.1f);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SET_WALKING(IAcknexObject MY, IAcknexObject THERE)
        {
            var MODE_GEHEN_0 = _world.GetObject(ObjectType.Skill, 3270985304);
            var MODE_GEHEN_0_val = MODE_GEHEN_0.GetFloat(PropertyName.VAL);
            var MOVING_1 = _world.GetObject(ObjectType.Skill, 3242343005);
            MOVING_1.SetFloat(231, MODE_GEHEN_0_val);
            var FRIC_3 = _world.GetObject(ObjectType.Skill, 2089081969);
            FRIC_3.SetFloat(231, 0.2f);
            var STRENGTH_5 = _world.GetObject(ObjectType.Skill, 461037372);
            STRENGTH_5.SetFloat(231, 0.15f);
            var WAVE_STR_7 = _world.GetObject(ObjectType.Skill, 525195384);
            WAVE_STR_7.SetFloat(231, 0f);
            var FLOAT_STR_9 = _world.GetObject(ObjectType.Skill, 1319913115);
            FLOAT_STR_9.SetFloat(231, 0f);
            var DUCK_STR_11 = _world.GetObject(ObjectType.Skill, 1846696428);
            DUCK_STR_11.SetFloat(231, 0.5f);
            var FRIC_AIR_13 = _world.GetObject(ObjectType.Skill, 1830104876);
            FRIC_AIR_13.SetFloat(231, 0.04f);
            var GRAVITY_15 = _world.GetObject(ObjectType.Skill, 557195635);
            GRAVITY_15.SetFloat(231, -0.15f);
            var MOVE_ME_16 = _world.AcknexObject.GetAcknexObject(3917947093);
            _world.AcknexObject.SetAcknexObject(19, MOVE_ME_16);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SET_SWIMMING(IAcknexObject MY, IAcknexObject THERE)
        {
            var FRIC_1 = _world.GetObject(ObjectType.Skill, 2089081969);
            FRIC_1.SetFloat(231, 0.3f);
            var MODE_SCHWIMMEN_2 = _world.GetObject(ObjectType.Skill, 3755117404);
            var MODE_SCHWIMMEN_2_val = MODE_SCHWIMMEN_2.GetFloat(PropertyName.VAL);
            var MOVING_3 = _world.GetObject(ObjectType.Skill, 3242343005);
            MOVING_3.SetFloat(231, MODE_SCHWIMMEN_2_val);
            var STRENGTH_5 = _world.GetObject(ObjectType.Skill, 461037372);
            STRENGTH_5.SetFloat(231, 0.15f);
            var WAVE_STR_7 = _world.GetObject(ObjectType.Skill, 525195384);
            WAVE_STR_7.SetFloat(231, 0.08f);
            var FLOAT_STR_9 = _world.GetObject(ObjectType.Skill, 1319913115);
            FLOAT_STR_9.SetFloat(231, 0f);
            var DUCK_STR_11 = _world.GetObject(ObjectType.Skill, 1846696428);
            DUCK_STR_11.SetFloat(231, 0.2f);
            var FRIC_AIR_13 = _world.GetObject(ObjectType.Skill, 1830104876);
            FRIC_AIR_13.SetFloat(231, 0.5f);
            var GRAVITY_15 = _world.GetObject(ObjectType.Skill, 557195635);
            GRAVITY_15.SetFloat(231, -0.15f);
            var MOVE_ME_16 = _world.AcknexObject.GetAcknexObject(3917947093);
            _world.AcknexObject.SetAcknexObject(19, MOVE_ME_16);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SET_DIVING(IAcknexObject MY, IAcknexObject THERE)
        {
            var FRIC_1 = _world.GetObject(ObjectType.Skill, 2089081969);
            FRIC_1.SetFloat(231, 0.3f);
            var MODE_TAUCHEN_2 = _world.GetObject(ObjectType.Skill, 1042033433);
            var MODE_TAUCHEN_2_val = MODE_TAUCHEN_2.GetFloat(PropertyName.VAL);
            var MOVING_3 = _world.GetObject(ObjectType.Skill, 3242343005);
            MOVING_3.SetFloat(231, MODE_TAUCHEN_2_val);
            var STRENGTH_5 = _world.GetObject(ObjectType.Skill, 461037372);
            STRENGTH_5.SetFloat(231, 0.1f);
            var WAVE_STR_7 = _world.GetObject(ObjectType.Skill, 525195384);
            WAVE_STR_7.SetFloat(231, 0.03f);
            var FLOAT_STR_9 = _world.GetObject(ObjectType.Skill, 1319913115);
            FLOAT_STR_9.SetFloat(231, 0.05f);
            var DUCK_STR_11 = _world.GetObject(ObjectType.Skill, 1846696428);
            DUCK_STR_11.SetFloat(231, 0f);
            var FRIC_AIR_13 = _world.GetObject(ObjectType.Skill, 1830104876);
            FRIC_AIR_13.SetFloat(231, 0.7f);
            var GRAVITY_15 = _world.GetObject(ObjectType.Skill, 557195635);
            GRAVITY_15.SetFloat(231, 0f);
            var MOVE_ME_16 = _world.AcknexObject.GetAcknexObject(3917947093);
            _world.AcknexObject.SetAcknexObject(19, MOVE_ME_16);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SET_DEATH(IAcknexObject MY, IAcknexObject THERE)
        {
            var FRIC_1 = _world.GetObject(ObjectType.Skill, 2089081969);
            FRIC_1.SetFloat(231, 0.01f);
            var MODE_DEATH_2 = _world.GetObject(ObjectType.Skill, 3267420407);
            var MODE_DEATH_2_val = MODE_DEATH_2.GetFloat(PropertyName.VAL);
            var MOVING_3 = _world.GetObject(ObjectType.Skill, 3242343005);
            MOVING_3.SetFloat(231, MODE_DEATH_2_val);
            var STRENGTH_5 = _world.GetObject(ObjectType.Skill, 461037372);
            STRENGTH_5.SetFloat(231, 0.1f);
            var WAVE_STR_7 = _world.GetObject(ObjectType.Skill, 525195384);
            WAVE_STR_7.SetFloat(231, 0.03f);
            var FLOAT_STR_9 = _world.GetObject(ObjectType.Skill, 1319913115);
            FLOAT_STR_9.SetFloat(231, 0.05f);
            var DUCK_STR_11 = _world.GetObject(ObjectType.Skill, 1846696428);
            DUCK_STR_11.SetFloat(231, 0f);
            var FRIC_AIR_13 = _world.GetObject(ObjectType.Skill, 1830104876);
            FRIC_AIR_13.SetFloat(231, 0.7f);
            var GRAVITY_15 = _world.GetObject(ObjectType.Skill, 557195635);
            GRAVITY_15.SetFloat(231, -0.35f);
            var MOVE_ME_16 = _world.AcknexObject.GetAcknexObject(3917947093);
            _world.AcknexObject.SetAcknexObject(19, MOVE_ME_16);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SET_MOVING(IAcknexObject MY, IAcknexObject THERE)
        {
            var MOVING_1 = _world.GetObject(ObjectType.Skill, 3242343005);
            var MOVING_1_val = MOVING_1.GetFloat(PropertyName.VAL);
            if (MOVING_1_val == 0f)
            {
                yield break;
            }
            var MODE_GEHEN_2 = _world.GetObject(ObjectType.Skill, 3270985304);
            var MODE_GEHEN_2_val = MODE_GEHEN_2.GetFloat(PropertyName.VAL);
            var MOVING_3 = _world.GetObject(ObjectType.Skill, 3242343005);
            var MOVING_3_val = MOVING_3.GetFloat(PropertyName.VAL);
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
            var MODE_SCHWIMMEN_4 = _world.GetObject(ObjectType.Skill, 3755117404);
            var MODE_SCHWIMMEN_4_val = MODE_SCHWIMMEN_4.GetFloat(PropertyName.VAL);
            var MOVING_5 = _world.GetObject(ObjectType.Skill, 3242343005);
            var MOVING_5_val = MOVING_5.GetFloat(PropertyName.VAL);
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
            var MODE_TAUCHEN_6 = _world.GetObject(ObjectType.Skill, 1042033433);
            var MODE_TAUCHEN_6_val = MODE_TAUCHEN_6.GetFloat(PropertyName.VAL);
            var MOVING_7 = _world.GetObject(ObjectType.Skill, 3242343005);
            var MOVING_7_val = MOVING_7.GetFloat(PropertyName.VAL);
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
            var PLAYER_VX_1 = _world.GetObject(ObjectType.Skill, 431);
            PLAYER_VX_1.SetFloat(231, 0f);
            var PLAYER_VY_3 = _world.GetObject(ObjectType.Skill, 432);
            PLAYER_VY_3.SetFloat(231, 0f);
            var PLAYER_VZ_5 = _world.GetObject(ObjectType.Skill, 433);
            PLAYER_VZ_5.SetFloat(231, 0f);
            var PLAYER_VROT_7 = _world.GetObject(ObjectType.Skill, 434);
            PLAYER_VROT_7.SetFloat(231, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SET_BLUE(IAcknexObject MY, IAcknexObject THERE)
        {
            var PAL_BLUE_0 = _world.AcknexObject.GetAcknexObject(2482235505);
            _world.FadePal(PAL_BLUE_0, 0.7f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator RESET_BLUE(IAcknexObject MY, IAcknexObject THERE)
        {
            var PAL_BLUE_0 = _world.AcknexObject.GetAcknexObject(2482235505);
            _world.FadePal(PAL_BLUE_0, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator ENTER_WATER(IAcknexObject MY, IAcknexObject THERE)
        {
            var FWT01SND_0 = _world.AcknexObject.GetAcknexObject(103833604);
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
            var PLAYERINSPSND_0 = _world.AcknexObject.GetAcknexObject(3374192921);
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
            var UNDERWATER_1 = _world.GetObject(ObjectType.Skill, 1369167822);
            var UNDERWATER_1_val = UNDERWATER_1.GetFloat(PropertyName.VAL);
            if (UNDERWATER_1_val == 1f)
            {
                yield break;
            }
            var UNDERWATER_3 = _world.GetObject(ObjectType.Skill, 1369167822);
            UNDERWATER_3.SetFloat(231, 1f);
            var FWT01SND_4 = _world.AcknexObject.GetAcknexObject(103833604);
            _world.PlaySound(FWT01SND_4, 0.5f, null);
            var PLAYER_ARC_6 = _world.GetObject(ObjectType.Skill, 436);
            var PLAYER_ARC_7 = _world.GetObject(ObjectType.Skill, 436);
            var PLAYER_ARC_7_val = PLAYER_ARC_7.GetFloat(PropertyName.VAL);
            var PLAYER_ARC_8 = _world.GetObject(ObjectType.Skill, 436);
            var PLAYER_ARC_8_val = PLAYER_ARC_8.GetFloat(PropertyName.VAL);
            PLAYER_ARC_6.SetFloat(231, PLAYER_ARC_8_val + 0.3f);
            var MY_SIZE_11 = _world.GetObject(ObjectType.Skill, 25486605);
            var MY_SIZE_12 = _world.GetObject(ObjectType.Skill, 25486605);
            var MY_SIZE_12_val = MY_SIZE_12.GetFloat(PropertyName.VAL);
            var MY_SIZE_13 = _world.GetObject(ObjectType.Skill, 25486605);
            var MY_SIZE_13_val = MY_SIZE_13.GetFloat(PropertyName.VAL);
            MY_SIZE_11.SetFloat(231, MY_SIZE_13_val - 0.2f);
            var PLAYER_SIZE_16 = _world.GetObject(ObjectType.Skill, 422);
            var PLAYER_SIZE_17 = _world.GetObject(ObjectType.Skill, 422);
            var PLAYER_SIZE_17_val = PLAYER_SIZE_17.GetFloat(PropertyName.VAL);
            var PLAYER_SIZE_18 = _world.GetObject(ObjectType.Skill, 422);
            var PLAYER_SIZE_18_val = PLAYER_SIZE_18.GetFloat(PropertyName.VAL);
            PLAYER_SIZE_16.SetFloat(231, PLAYER_SIZE_18_val - 0.2f);
            var PLAYER_Z_21 = _world.GetObject(ObjectType.Skill, 461);
            var PLAYER_Z_22 = _world.GetObject(ObjectType.Skill, 461);
            var PLAYER_Z_22_val = PLAYER_Z_22.GetFloat(PropertyName.VAL);
            var PLAYER_Z_23 = _world.GetObject(ObjectType.Skill, 461);
            var PLAYER_Z_23_val = PLAYER_Z_23.GetFloat(PropertyName.VAL);
            PLAYER_Z_21.SetFloat(231, PLAYER_Z_23_val - 0.2f);
            var PLAYER_LIGHT_27 = _world.GetObject(ObjectType.Skill, 418);
            var PLAYER_LIGHT_27_val = PLAYER_LIGHT_27.GetFloat(PropertyName.VAL);
            var PLAYER_LIGHT_28 = _world.GetObject(ObjectType.Skill, 418);
            PLAYER_LIGHT_28.SetFloat(231, PLAYER_LIGHT_27_val + 0.2f);
            {
                var enumerator = _world.CallSynonymAction(1342576697, MY, THERE);
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
            var UNDERWATER_1 = _world.GetObject(ObjectType.Skill, 1369167822);
            var UNDERWATER_1_val = UNDERWATER_1.GetFloat(PropertyName.VAL);
            if (UNDERWATER_1_val == 0f)
            {
                yield break;
            }
            var UNDERWATER_3 = _world.GetObject(ObjectType.Skill, 1369167822);
            UNDERWATER_3.SetFloat(231, 0f);
            var PLAYER_ARC_4 = _world.GetObject(ObjectType.Skill, 436);
            var PLAYER_ARC_5 = _world.GetObject(ObjectType.Skill, 436);
            var PLAYER_ARC_5_val = PLAYER_ARC_5.GetFloat(PropertyName.VAL);
            var PLAYER_ARC_6 = _world.GetObject(ObjectType.Skill, 436);
            var PLAYER_ARC_6_val = PLAYER_ARC_6.GetFloat(PropertyName.VAL);
            PLAYER_ARC_4.SetFloat(231, PLAYER_ARC_6_val - 0.3f);
            var MY_SIZE_9 = _world.GetObject(ObjectType.Skill, 25486605);
            var MY_SIZE_10 = _world.GetObject(ObjectType.Skill, 25486605);
            var MY_SIZE_10_val = MY_SIZE_10.GetFloat(PropertyName.VAL);
            var MY_SIZE_11 = _world.GetObject(ObjectType.Skill, 25486605);
            var MY_SIZE_11_val = MY_SIZE_11.GetFloat(PropertyName.VAL);
            MY_SIZE_9.SetFloat(231, MY_SIZE_11_val + 0.2f);
            var PLAYER_SIZE_14 = _world.GetObject(ObjectType.Skill, 422);
            var PLAYER_SIZE_15 = _world.GetObject(ObjectType.Skill, 422);
            var PLAYER_SIZE_15_val = PLAYER_SIZE_15.GetFloat(PropertyName.VAL);
            var PLAYER_SIZE_16 = _world.GetObject(ObjectType.Skill, 422);
            var PLAYER_SIZE_16_val = PLAYER_SIZE_16.GetFloat(PropertyName.VAL);
            PLAYER_SIZE_14.SetFloat(231, PLAYER_SIZE_16_val + 0.2f);
            var PLAYER_Z_19 = _world.GetObject(ObjectType.Skill, 461);
            var PLAYER_Z_20 = _world.GetObject(ObjectType.Skill, 461);
            var PLAYER_Z_20_val = PLAYER_Z_20.GetFloat(PropertyName.VAL);
            var PLAYER_Z_21 = _world.GetObject(ObjectType.Skill, 461);
            var PLAYER_Z_21_val = PLAYER_Z_21.GetFloat(PropertyName.VAL);
            PLAYER_Z_19.SetFloat(231, PLAYER_Z_21_val + 0.2f);
            var PLAYER_LIGHT_25 = _world.GetObject(ObjectType.Skill, 418);
            var PLAYER_LIGHT_25_val = PLAYER_LIGHT_25.GetFloat(PropertyName.VAL);
            var PLAYER_LIGHT_26 = _world.GetObject(ObjectType.Skill, 418);
            PLAYER_LIGHT_26.SetFloat(231, PLAYER_LIGHT_25_val + -0.2f);
            {
                var enumerator = _world.CallSynonymAction(1917066007, MY, THERE);
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
            var MODE_DEATH_0 = _world.GetObject(ObjectType.Skill, 3267420407);
            var MODE_DEATH_0_val = MODE_DEATH_0.GetFloat(PropertyName.VAL);
            var MOVING_1 = _world.GetObject(ObjectType.Skill, 3242343005);
            var MOVING_1_val = MOVING_1.GetFloat(PropertyName.VAL);
            if (MOVING_1_val == MODE_DEATH_0_val)
            {
                yield break;
            }
            var GOD_MODE_3 = _world.GetObject(ObjectType.Skill, 1756335307);
            var GOD_MODE_3_val = GOD_MODE_3.GetFloat(PropertyName.VAL);
            if (GOD_MODE_3_val > 0f)
            {
                yield break;
            }
            var HITSERIOUSNESS_4 = _world.GetObject(ObjectType.Skill, 4168972789);
            var HITSERIOUSNESS_5 = _world.GetObject(ObjectType.Skill, 4168972789);
            var HITSERIOUSNESS_5_val = HITSERIOUSNESS_5.GetFloat(PropertyName.VAL);
            var PLAYER_RESULT_6 = _world.GetObject(ObjectType.Skill, 1861765784);
            var PLAYER_RESULT_6_val = PLAYER_RESULT_6.GetFloat(PropertyName.VAL);
            var TOUGHNESS_11 = _world.GetObject(ObjectType.Skill, 1295621997);
            var TOUGHNESS_11_val = TOUGHNESS_11.GetFloat(PropertyName.VAL);
            HITSERIOUSNESS_4.SetFloat(231, PLAYER_RESULT_6_val * -5f * TOUGHNESS_11_val);
            var PLAYER_ARMOUR_13 = _world.GetObject(ObjectType.Skill, 1211659215);
            var PLAYER_ARMOUR_13_val = PLAYER_ARMOUR_13.GetFloat(PropertyName.VAL);
            if (PLAYER_ARMOUR_13_val == 0f)
            {
                goto CONT;
            }
            var HITSERIOUSNESS_14 = _world.GetObject(ObjectType.Skill, 4168972789);
            var HITSERIOUSNESS_14_val = HITSERIOUSNESS_14.GetFloat(PropertyName.VAL);
            var PLAYER_ARMOUR_15 = _world.GetObject(ObjectType.Skill, 1211659215);
            var PLAYER_ARMOUR_15_val = PLAYER_ARMOUR_15.GetFloat(PropertyName.VAL);
            var PLAYER_ARMOUR_16 = _world.GetObject(ObjectType.Skill, 1211659215);
            PLAYER_ARMOUR_16.SetFloat(231, PLAYER_ARMOUR_15_val + HITSERIOUSNESS_14_val);
            var HITSERIOUSNESS_17 = _world.GetObject(ObjectType.Skill, 4168972789);
            var HITSERIOUSNESS_18 = _world.GetObject(ObjectType.Skill, 4168972789);
            var HITSERIOUSNESS_18_val = HITSERIOUSNESS_18.GetFloat(PropertyName.VAL);
            var HITSERIOUSNESS_19 = _world.GetObject(ObjectType.Skill, 4168972789);
            var HITSERIOUSNESS_19_val = HITSERIOUSNESS_19.GetFloat(PropertyName.VAL);
            HITSERIOUSNESS_17.SetFloat(231, HITSERIOUSNESS_19_val / 4f);
            CONT:
            var PLAYER_ANGLE_22 = _world.GetObject(ObjectType.Skill, 462);
            var PLAYER_ANGLE_23 = _world.GetObject(ObjectType.Skill, 462);
            var PLAYER_ANGLE_23_val = PLAYER_ANGLE_23.GetFloat(PropertyName.VAL);
            var PLAYER_ANGLE_24 = _world.GetObject(ObjectType.Skill, 462);
            var PLAYER_ANGLE_24_val = PLAYER_ANGLE_24.GetFloat(PropertyName.VAL);
            var TOUGHNESS_34 = _world.GetObject(ObjectType.Skill, 1295621997);
            var TOUGHNESS_34_val = TOUGHNESS_34.GetFloat(PropertyName.VAL);
            PLAYER_ANGLE_22.SetFloat(231, PLAYER_ANGLE_24_val + (UnityEngine.Random.value * 0.2f - 0.1f) * TOUGHNESS_34_val);
            var PLAYER_TILT_35 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_36 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_36_val = PLAYER_TILT_36.GetFloat(PropertyName.VAL);
            var PLAYER_TILT_37 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_37_val = PLAYER_TILT_37.GetFloat(PropertyName.VAL);
            var TOUGHNESS_47 = _world.GetObject(ObjectType.Skill, 1295621997);
            var TOUGHNESS_47_val = TOUGHNESS_47.GetFloat(PropertyName.VAL);
            PLAYER_TILT_35.SetFloat(231, PLAYER_TILT_37_val + (UnityEngine.Random.value * 0.2f - 0.1f) * TOUGHNESS_47_val);
            var HITSERIOUSNESS_48 = _world.GetObject(ObjectType.Skill, 4168972789);
            var HITSERIOUSNESS_48_val = HITSERIOUSNESS_48.GetFloat(PropertyName.VAL);
            var PLAYER_HEALTH_49 = _world.GetObject(ObjectType.Skill, 1469755439);
            var PLAYER_HEALTH_49_val = PLAYER_HEALTH_49.GetFloat(PropertyName.VAL);
            var PLAYER_HEALTH_50 = _world.GetObject(ObjectType.Skill, 1469755439);
            PLAYER_HEALTH_50.SetFloat(231, PLAYER_HEALTH_49_val + HITSERIOUSNESS_48_val);
            var PLAYER_HIT_52 = _world.GetObject(ObjectType.Skill, 1956124350);
            var PLAYER_HIT_52_val = PLAYER_HIT_52.GetFloat(PropertyName.VAL);
            if (PLAYER_HIT_52_val != 0f)
            {
                yield break;
            }
            var PLAYER_HIT_54 = _world.GetObject(ObjectType.Skill, 1956124350);
            PLAYER_HIT_54.SetFloat(231, 1f);
            var HITVALUE_55 = _world.GetObject(ObjectType.Skill, 2881291151);
            var HITVALUE_56 = _world.GetObject(ObjectType.Skill, 2881291151);
            var HITVALUE_56_val = HITVALUE_56.GetFloat(PropertyName.VAL);
            var HITSERIOUSNESS_59 = _world.GetObject(ObjectType.Skill, 4168972789);
            var HITSERIOUSNESS_59_val = HITSERIOUSNESS_59.GetFloat(PropertyName.VAL);
            var PLAYER_HEALTH_67 = _world.GetObject(ObjectType.Skill, 1469755439);
            var PLAYER_HEALTH_67_val = PLAYER_HEALTH_67.GetFloat(PropertyName.VAL);
            HITVALUE_55.SetFloat(231, 0.5f * HITSERIOUSNESS_59_val / -100f + (100f - PLAYER_HEALTH_67_val) / 2f);
            var UNDERWATER_72 = _world.GetObject(ObjectType.Skill, 1369167822);
            var UNDERWATER_72_val = UNDERWATER_72.GetFloat(PropertyName.VAL);
            if (UNDERWATER_72_val > 0f)
            {
                goto BLUB;
            }
            var PLAYER_HEALTH_74 = _world.GetObject(ObjectType.Skill, 1469755439);
            var PLAYER_HEALTH_74_val = PLAYER_HEALTH_74.GetFloat(PropertyName.VAL);
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
            var HIT03SND_79 = _world.AcknexObject.GetAcknexObject(2835730426);
            _world.PlaySound(HIT03SND_79, 0.7f, null);
            goto CONT2;
            HIT01:
            var HIT01SND_81 = _world.AcknexObject.GetAcknexObject(2835658552);
            _world.PlaySound(HIT01SND_81, 0.5f, null);
            goto CONT2;
            HIT02:
            var HIT02SND_83 = _world.AcknexObject.GetAcknexObject(2835694489);
            _world.PlaySound(HIT02SND_83, 0.3f, null);
            goto CONT2;
            BLUB:
            var HIT04SND_85 = _world.AcknexObject.GetAcknexObject(2835766363);
            _world.PlaySound(HIT04SND_85, 0.8f, null);
            CONT2:
            var KILLPLAYER_87 = _world.AcknexObject.GetAcknexObject(1513684550);
            var temp_90 = _world.AcknexObject?.GetAcknexObject(11);
            if (temp_90 != KILLPLAYER_87)
            {
                var REDOUT_91 = _world.AcknexObject.GetAcknexObject(3425520672);
                _world.AcknexObject.SetAcknexObject(11, REDOUT_91);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator REDOUT(IAcknexObject MY, IAcknexObject THERE)
        {
            var REDVALUE_1 = _world.GetObject(ObjectType.Skill, 2366887749);
            var REDVALUE_1_val = REDVALUE_1.GetFloat(PropertyName.VAL);
            var REDVALUE_2 = _world.GetObject(ObjectType.Skill, 2366887749);
            REDVALUE_2.SetFloat(231, REDVALUE_1_val + 0.1f);
            var PLAYER_ARC_4 = _world.GetObject(ObjectType.Skill, 436);
            var PLAYER_ARC_4_val = PLAYER_ARC_4.GetFloat(PropertyName.VAL);
            var PLAYER_ARC_5 = _world.GetObject(ObjectType.Skill, 436);
            PLAYER_ARC_5.SetFloat(231, PLAYER_ARC_4_val + -0.01f);
            var PAL_RED_6 = _world.AcknexObject.GetAcknexObject(2938548932);
            var REDVALUE_7 = _world.GetObject(ObjectType.Skill, 2366887749);
            var REDVALUE_7_val = REDVALUE_7.GetFloat(PropertyName.VAL);
            _world.FadePal(PAL_RED_6, REDVALUE_7_val);
            var HITVALUE_8 = _world.GetObject(ObjectType.Skill, 2881291151);
            var HITVALUE_8_val = HITVALUE_8.GetFloat(PropertyName.VAL);
            var REDVALUE_9 = _world.GetObject(ObjectType.Skill, 2366887749);
            var REDVALUE_9_val = REDVALUE_9.GetFloat(PropertyName.VAL);
            if (REDVALUE_9_val < HITVALUE_8_val)
            {
                yield break;
            }
            var PLAYER_HEALTH_11 = _world.GetObject(ObjectType.Skill, 1469755439);
            var PLAYER_HEALTH_11_val = PLAYER_HEALTH_11.GetFloat(PropertyName.VAL);
            if (PLAYER_HEALTH_11_val < 1f)
            {
                goto KILL;
            }
            var REDIN_12 = _world.AcknexObject.GetAcknexObject(233954943);
            _world.AcknexObject.SetAcknexObject(11, REDIN_12);
            yield break;
            KILL:
            var KILLPLAYER_15 = _world.AcknexObject.GetAcknexObject(1513684550);
            _world.AcknexObject.SetAcknexObject(11, KILLPLAYER_15);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator REDIN(IAcknexObject MY, IAcknexObject THERE)
        {
            var REDVALUE_1 = _world.GetObject(ObjectType.Skill, 2366887749);
            var REDVALUE_1_val = REDVALUE_1.GetFloat(PropertyName.VAL);
            var REDVALUE_2 = _world.GetObject(ObjectType.Skill, 2366887749);
            REDVALUE_2.SetFloat(231, REDVALUE_1_val + -0.1f);
            var PLAYER_ARC_4 = _world.GetObject(ObjectType.Skill, 436);
            var PLAYER_ARC_4_val = PLAYER_ARC_4.GetFloat(PropertyName.VAL);
            var PLAYER_ARC_5 = _world.GetObject(ObjectType.Skill, 436);
            PLAYER_ARC_5.SetFloat(231, PLAYER_ARC_4_val + 0.01f);
            var PAL_RED_6 = _world.AcknexObject.GetAcknexObject(2938548932);
            var REDVALUE_7 = _world.GetObject(ObjectType.Skill, 2366887749);
            var REDVALUE_7_val = REDVALUE_7.GetFloat(PropertyName.VAL);
            _world.FadePal(PAL_RED_6, REDVALUE_7_val);
            var REDVALUE_9 = _world.GetObject(ObjectType.Skill, 2366887749);
            var REDVALUE_9_val = REDVALUE_9.GetFloat(PropertyName.VAL);
            if (REDVALUE_9_val < 0f)
            {
                var REDVALUE_11 = _world.GetObject(ObjectType.Skill, 2366887749);
                REDVALUE_11.SetFloat(231, 0f);
            }
            var REDVALUE_13 = _world.GetObject(ObjectType.Skill, 2366887749);
            var REDVALUE_13_val = REDVALUE_13.GetFloat(PropertyName.VAL);
            if (REDVALUE_13_val > 0f)
            {
                yield break;
            }
            var UNDERWATER_15 = _world.GetObject(ObjectType.Skill, 1369167822);
            var UNDERWATER_15_val = UNDERWATER_15.GetFloat(PropertyName.VAL);
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
            var PLAYER_ARC_17 = _world.GetObject(ObjectType.Skill, 436);
            PLAYER_ARC_17.SetFloat(231, 1.3f);
            goto FINISH;
            NOWATER:
            var PLAYER_ARC_19 = _world.GetObject(ObjectType.Skill, 436);
            PLAYER_ARC_19.SetFloat(231, 1f);
            FINISH:
            var PLAYER_HIT_21 = _world.GetObject(ObjectType.Skill, 1956124350);
            PLAYER_HIT_21.SetFloat(231, 0f);
            _world.AcknexObject.SetAcknexObject(11, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator FLASHPLAYER(IAcknexObject MY, IAcknexObject THERE)
        {
            var GOD_MODE_1 = _world.GetObject(ObjectType.Skill, 1756335307);
            var GOD_MODE_1_val = GOD_MODE_1.GetFloat(PropertyName.VAL);
            if (GOD_MODE_1_val > 0f)
            {
                yield break;
            }
            var HITSERIOUSNESS_2 = _world.GetObject(ObjectType.Skill, 4168972789);
            var HITSERIOUSNESS_3 = _world.GetObject(ObjectType.Skill, 4168972789);
            var HITSERIOUSNESS_3_val = HITSERIOUSNESS_3.GetFloat(PropertyName.VAL);
            var PLAYER_RESULT_4 = _world.GetObject(ObjectType.Skill, 1861765784);
            var PLAYER_RESULT_4_val = PLAYER_RESULT_4.GetFloat(PropertyName.VAL);
            var TOUGHNESS_12 = _world.GetObject(ObjectType.Skill, 1295621997);
            var TOUGHNESS_12_val = TOUGHNESS_12.GetFloat(PropertyName.VAL);
            HITSERIOUSNESS_2.SetFloat(231, PLAYER_RESULT_4_val * -5f * (0.5f + TOUGHNESS_12_val / 2f));
            var PLAYER_ARMOUR_17 = _world.GetObject(ObjectType.Skill, 1211659215);
            var PLAYER_ARMOUR_17_val = PLAYER_ARMOUR_17.GetFloat(PropertyName.VAL);
            if (PLAYER_ARMOUR_17_val == 0f)
            {
                goto CONT;
            }
            var HITSERIOUSNESS_18 = _world.GetObject(ObjectType.Skill, 4168972789);
            var HITSERIOUSNESS_18_val = HITSERIOUSNESS_18.GetFloat(PropertyName.VAL);
            var PLAYER_ARMOUR_19 = _world.GetObject(ObjectType.Skill, 1211659215);
            var PLAYER_ARMOUR_19_val = PLAYER_ARMOUR_19.GetFloat(PropertyName.VAL);
            var PLAYER_ARMOUR_20 = _world.GetObject(ObjectType.Skill, 1211659215);
            PLAYER_ARMOUR_20.SetFloat(231, PLAYER_ARMOUR_19_val + HITSERIOUSNESS_18_val);
            var HITSERIOUSNESS_21 = _world.GetObject(ObjectType.Skill, 4168972789);
            var HITSERIOUSNESS_22 = _world.GetObject(ObjectType.Skill, 4168972789);
            var HITSERIOUSNESS_22_val = HITSERIOUSNESS_22.GetFloat(PropertyName.VAL);
            var HITSERIOUSNESS_23 = _world.GetObject(ObjectType.Skill, 4168972789);
            var HITSERIOUSNESS_23_val = HITSERIOUSNESS_23.GetFloat(PropertyName.VAL);
            HITSERIOUSNESS_21.SetFloat(231, HITSERIOUSNESS_23_val / 4f);
            CONT:
            var HITSERIOUSNESS_26 = _world.GetObject(ObjectType.Skill, 4168972789);
            var HITSERIOUSNESS_26_val = HITSERIOUSNESS_26.GetFloat(PropertyName.VAL);
            var PLAYER_HEALTH_27 = _world.GetObject(ObjectType.Skill, 1469755439);
            var PLAYER_HEALTH_27_val = PLAYER_HEALTH_27.GetFloat(PropertyName.VAL);
            var PLAYER_HEALTH_28 = _world.GetObject(ObjectType.Skill, 1469755439);
            PLAYER_HEALTH_28.SetFloat(231, PLAYER_HEALTH_27_val + HITSERIOUSNESS_26_val);
            var PLAYER_HIT_30 = _world.GetObject(ObjectType.Skill, 1956124350);
            var PLAYER_HIT_30_val = PLAYER_HIT_30.GetFloat(PropertyName.VAL);
            if (PLAYER_HIT_30_val != 0f)
            {
                yield break;
            }
            var PLAYER_HIT_32 = _world.GetObject(ObjectType.Skill, 1956124350);
            PLAYER_HIT_32.SetFloat(231, 1f);
            var HITVALUE_33 = _world.GetObject(ObjectType.Skill, 2881291151);
            var HITVALUE_34 = _world.GetObject(ObjectType.Skill, 2881291151);
            var HITVALUE_34_val = HITVALUE_34.GetFloat(PropertyName.VAL);
            var HITSERIOUSNESS_37 = _world.GetObject(ObjectType.Skill, 4168972789);
            var HITSERIOUSNESS_37_val = HITSERIOUSNESS_37.GetFloat(PropertyName.VAL);
            var PLAYER_HEALTH_45 = _world.GetObject(ObjectType.Skill, 1469755439);
            var PLAYER_HEALTH_45_val = PLAYER_HEALTH_45.GetFloat(PropertyName.VAL);
            HITVALUE_33.SetFloat(231, 0.5f * HITSERIOUSNESS_37_val / -100f + (100f - PLAYER_HEALTH_45_val) / 2f);
            var PLAYER_HEALTH_50 = _world.GetObject(ObjectType.Skill, 1469755439);
            var PLAYER_HEALTH_50_val = PLAYER_HEALTH_50.GetFloat(PropertyName.VAL);
            if (PLAYER_HEALTH_50_val > 0f)
            {
                var HIT01SND_51 = _world.AcknexObject.GetAcknexObject(2835658552);
                _world.PlaySound(HIT01SND_51, 0.5f, null);
            }
            var FLASHOUT_53 = _world.AcknexObject.GetAcknexObject(2376312339);
            _world.AcknexObject.SetAcknexObject(11, FLASHOUT_53);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator FLASHOUT(IAcknexObject MY, IAcknexObject THERE)
        {
            var REDVALUE_1 = _world.GetObject(ObjectType.Skill, 2366887749);
            var REDVALUE_1_val = REDVALUE_1.GetFloat(PropertyName.VAL);
            var REDVALUE_2 = _world.GetObject(ObjectType.Skill, 2366887749);
            REDVALUE_2.SetFloat(231, REDVALUE_1_val + 0.1f);
            var PAL_FLASH_3 = _world.AcknexObject.GetAcknexObject(314083479);
            var REDVALUE_4 = _world.GetObject(ObjectType.Skill, 2366887749);
            var REDVALUE_4_val = REDVALUE_4.GetFloat(PropertyName.VAL);
            _world.FadePal(PAL_FLASH_3, REDVALUE_4_val);
            var HITVALUE_5 = _world.GetObject(ObjectType.Skill, 2881291151);
            var HITVALUE_5_val = HITVALUE_5.GetFloat(PropertyName.VAL);
            var REDVALUE_6 = _world.GetObject(ObjectType.Skill, 2366887749);
            var REDVALUE_6_val = REDVALUE_6.GetFloat(PropertyName.VAL);
            if (REDVALUE_6_val < HITVALUE_5_val)
            {
                yield break;
            }
            var PLAYER_HEALTH_8 = _world.GetObject(ObjectType.Skill, 1469755439);
            var PLAYER_HEALTH_8_val = PLAYER_HEALTH_8.GetFloat(PropertyName.VAL);
            if (PLAYER_HEALTH_8_val < 1f)
            {
                goto KILL;
            }
            var FLASHIN_9 = _world.AcknexObject.GetAcknexObject(3325773330);
            _world.AcknexObject.SetAcknexObject(11, FLASHIN_9);
            yield break;
            KILL:
            var KILLPLAYER_12 = _world.AcknexObject.GetAcknexObject(1513684550);
            _world.AcknexObject.SetAcknexObject(11, KILLPLAYER_12);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator FLASHIN(IAcknexObject MY, IAcknexObject THERE)
        {
            var REDVALUE_1 = _world.GetObject(ObjectType.Skill, 2366887749);
            var REDVALUE_1_val = REDVALUE_1.GetFloat(PropertyName.VAL);
            var REDVALUE_2 = _world.GetObject(ObjectType.Skill, 2366887749);
            REDVALUE_2.SetFloat(231, REDVALUE_1_val + -0.1f);
            var PAL_FLASH_3 = _world.AcknexObject.GetAcknexObject(314083479);
            var REDVALUE_4 = _world.GetObject(ObjectType.Skill, 2366887749);
            var REDVALUE_4_val = REDVALUE_4.GetFloat(PropertyName.VAL);
            _world.FadePal(PAL_FLASH_3, REDVALUE_4_val);
            var REDVALUE_6 = _world.GetObject(ObjectType.Skill, 2366887749);
            var REDVALUE_6_val = REDVALUE_6.GetFloat(PropertyName.VAL);
            if (REDVALUE_6_val < 0f)
            {
                var REDVALUE_8 = _world.GetObject(ObjectType.Skill, 2366887749);
                REDVALUE_8.SetFloat(231, 0f);
            }
            var REDVALUE_10 = _world.GetObject(ObjectType.Skill, 2366887749);
            var REDVALUE_10_val = REDVALUE_10.GetFloat(PropertyName.VAL);
            if (REDVALUE_10_val > 0f)
            {
                yield break;
            }
            var UNDERWATER_12 = _world.GetObject(ObjectType.Skill, 1369167822);
            var UNDERWATER_12_val = UNDERWATER_12.GetFloat(PropertyName.VAL);
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
            _world.AcknexObject.SetAcknexObject(11, null);
            var PLAYER_HIT_17 = _world.GetObject(ObjectType.Skill, 1956124350);
            PLAYER_HIT_17.SetFloat(231, 0f);
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
            var MODE_DEATH_0 = _world.GetObject(ObjectType.Skill, 3267420407);
            var MODE_DEATH_0_val = MODE_DEATH_0.GetFloat(PropertyName.VAL);
            var MOVING_1 = _world.GetObject(ObjectType.Skill, 3242343005);
            var MOVING_1_val = MOVING_1.GetFloat(PropertyName.VAL);
            if (MOVING_1_val == MODE_DEATH_0_val)
            {
                goto DEATH;
            }
            _world.AcknexObject.SetAcknexObject(82, null);
            var SELECTNONE_4 = _world.AcknexObject.GetAcknexObject(1879623005);
            _world.AcknexObject.SetAcknexObject(20, SELECTNONE_4);
            var PAL_RED_7 = _world.AcknexObject.GetAcknexObject(2938548932);
            _world.FadePal(PAL_RED_7, 0.5f);
            var DEATH00SND_9 = _world.AcknexObject.GetAcknexObject(2555225272);
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
            var DEATHCOUNTER_12 = _world.GetObject(ObjectType.Skill, 3779069139);
            DEATHCOUNTER_12.SetFloat(231, 0f);
            yield break;
            DEATH:
            var DEATHCOUNTER_14 = _world.GetObject(ObjectType.Skill, 3779069139);
            var DEATHCOUNTER_14_val = DEATHCOUNTER_14.GetFloat(PropertyName.VAL);
            var DEATHCOUNTER_15 = _world.GetObject(ObjectType.Skill, 3779069139);
            DEATHCOUNTER_15.SetFloat(231, DEATHCOUNTER_14_val + 1f);
            var PLAYER_VX_16 = _world.GetObject(ObjectType.Skill, 431);
            var PLAYER_VX_17 = _world.GetObject(ObjectType.Skill, 431);
            var PLAYER_VX_17_val = PLAYER_VX_17.GetFloat(PropertyName.VAL);
            var PLAYER_VX_18 = _world.GetObject(ObjectType.Skill, 431);
            var PLAYER_VX_18_val = PLAYER_VX_18.GetFloat(PropertyName.VAL);
            PLAYER_VX_16.SetFloat(231, PLAYER_VX_18_val * 0.5f);
            var PLAYER_VY_21 = _world.GetObject(ObjectType.Skill, 432);
            var PLAYER_VY_22 = _world.GetObject(ObjectType.Skill, 432);
            var PLAYER_VY_22_val = PLAYER_VY_22.GetFloat(PropertyName.VAL);
            var PLAYER_VY_23 = _world.GetObject(ObjectType.Skill, 432);
            var PLAYER_VY_23_val = PLAYER_VY_23.GetFloat(PropertyName.VAL);
            PLAYER_VY_21.SetFloat(231, PLAYER_VY_23_val * 0.5f);
            var DEATHCOUNTER_27 = _world.GetObject(ObjectType.Skill, 3779069139);
            var DEATHCOUNTER_27_val = DEATHCOUNTER_27.GetFloat(PropertyName.VAL);
            if (DEATHCOUNTER_27_val < 48f)
            {
                yield break;
            }
            var DEATHCOUNTER_29 = _world.GetObject(ObjectType.Skill, 3779069139);
            DEATHCOUNTER_29.SetFloat(231, 0f);
            _world.SetSynonymObject(270057211, null);
            var ENDOFLEVEL_32 = _world.AcknexObject.GetAcknexObject(4126566961);
            _world.AcknexObject.SetAcknexObject(20, ENDOFLEVEL_32);
            _world.AcknexObject.SetAcknexObject(11, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator FINISHPLAYER(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var KILLPLAYER_3 = _world.AcknexObject.GetAcknexObject(1513684550);
            _world.AcknexObject.SetAcknexObject(11, KILLPLAYER_3);
            var EXP01SND_6 = _world.AcknexObject.GetAcknexObject(1569989984);
            _world.PlaySound(EXP01SND_6, 0.7f, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator TOGGLEGODMODE(IAcknexObject MY, IAcknexObject THERE)
        {
            _world.AcknexObject.SetAcknexObject(51, null);
            var ALARM03SND_2 = _world.AcknexObject.GetAcknexObject(759955234);
            _world.PlaySound(ALARM03SND_2, 0.7f, null);
            var GOD_MODE_5 = _world.GetObject(ObjectType.Skill, 1756335307);
            var GOD_MODE_5_val = GOD_MODE_5.GetFloat(PropertyName.VAL);
            if (GOD_MODE_5_val < 1f)
            {
                goto GODMODE;
            }
            var HLP06STR_6 = _world.AcknexObject.GetAcknexObject(2258733488);
            _world.SetSynonymObject(361798934, HLP06STR_6);
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
            var GOD_MODE_9 = _world.GetObject(ObjectType.Skill, 1756335307);
            GOD_MODE_9.SetFloat(231, 0f);
            yield break;
            GODMODE:
            var HLP05STR_10 = _world.AcknexObject.GetAcknexObject(2258697551);
            _world.SetSynonymObject(361798934, HLP05STR_10);
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
            var GOD_MODE_13 = _world.GetObject(ObjectType.Skill, 1756335307);
            GOD_MODE_13.SetFloat(231, 1f);
            var HAS_MP5_15 = _world.GetObject(ObjectType.Skill, 1205036122);
            HAS_MP5_15.SetFloat(231, 1f);
            var HAS_GRANADE_17 = _world.GetObject(ObjectType.Skill, 40123194);
            HAS_GRANADE_17.SetFloat(231, 1f);
            var HAS_STINGER_19 = _world.GetObject(ObjectType.Skill, 2740601668);
            HAS_STINGER_19.SetFloat(231, 1f);
            var HAS_QUANTUM_21 = _world.GetObject(ObjectType.Skill, 187328435);
            HAS_QUANTUM_21.SetFloat(231, 1f);
            var HAS_PDA_23 = _world.GetObject(ObjectType.Skill, 1205039005);
            HAS_PDA_23.SetFloat(231, 1f);
            var AMMO_MP5_25 = _world.GetObject(ObjectType.Skill, 1494668136);
            AMMO_MP5_25.SetFloat(231, 999f);
            var AMMO_GRANADE_27 = _world.GetObject(ObjectType.Skill, 3603202376);
            AMMO_GRANADE_27.SetFloat(231, 999f);
            var AMMO_STINGER_29 = _world.GetObject(ObjectType.Skill, 2008713554);
            AMMO_STINGER_29.SetFloat(231, 999f);
            var AMMO_QUANTUM_31 = _world.GetObject(ObjectType.Skill, 3750407617);
            AMMO_QUANTUM_31.SetFloat(231, 999f);
            var KEY1_33 = _world.GetObject(ObjectType.Skill, 2089248007);
            KEY1_33.SetFloat(231, 1f);
            var KEY2_35 = _world.GetObject(ObjectType.Skill, 2089248008);
            KEY2_35.SetFloat(231, 1f);
            var KEY3_37 = _world.GetObject(ObjectType.Skill, 2089248009);
            KEY3_37.SetFloat(231, 1f);
            var KEY4_39 = _world.GetObject(ObjectType.Skill, 2089248010);
            KEY4_39.SetFloat(231, 1f);
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
            var SETGKEY_0 = _world.AcknexObject.GetAcknexObject(2683144393);
            _world.AcknexObject.SetAcknexObject(50, SETGKEY_0);
            var GODCOUNTER_3 = _world.GetObject(ObjectType.Skill, 3966981511);
            GODCOUNTER_3.SetFloat(231, 3f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SETGKEY(IAcknexObject MY, IAcknexObject THERE)
        {
            _world.AcknexObject.SetAcknexObject(50, null);
            var SETOKEY_2 = _world.AcknexObject.GetAcknexObject(2683431889);
            _world.AcknexObject.SetAcknexObject(54, SETOKEY_2);
            var GODCOUNTER_5 = _world.GetObject(ObjectType.Skill, 3966981511);
            GODCOUNTER_5.SetFloat(231, 3f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SETOKEY(IAcknexObject MY, IAcknexObject THERE)
        {
            _world.AcknexObject.SetAcknexObject(54, null);
            var SETDKEY_2 = _world.AcknexObject.GetAcknexObject(2683036582);
            _world.AcknexObject.SetAcknexObject(62, SETDKEY_2);
            var GODCOUNTER_5 = _world.GetObject(ObjectType.Skill, 3966981511);
            GODCOUNTER_5.SetFloat(231, 3f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SETDKEY(IAcknexObject MY, IAcknexObject THERE)
        {
            _world.AcknexObject.SetAcknexObject(62, null);
            var TOGGLEGODMODE_2 = _world.AcknexObject.GetAcknexObject(138490414);
            _world.AcknexObject.SetAcknexObject(51, TOGGLEGODMODE_2);
            var GODCOUNTER_5 = _world.GetObject(ObjectType.Skill, 3966981511);
            GODCOUNTER_5.SetFloat(231, 3f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator FIRE(IAcknexObject MY, IAcknexObject THERE)
        {
            var GUNFIRING_1 = _world.GetObject(ObjectType.Skill, 3478808598);
            GUNFIRING_1.SetFloat(231, 1f);
            _world.AcknexObject.SetAcknexObject(78, null);
            _world.AcknexObject.SetAcknexObject(97, null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            FIRE:
            var MP5_02OVL_7 = _world.AcknexObject.GetAcknexObject(2701596785);
            _world.AcknexObject.SetAcknexObject(158, MP5_02OVL_7);
            var AMMO_11 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_11_val = AMMO_11.GetFloat(PropertyName.VAL);
            if (AMMO_11_val == 0f)
            {
                goto NOAMMO;
            }
            var AMMO_12 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_13 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_13_val = AMMO_13.GetFloat(PropertyName.VAL);
            var AMMO_14 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_14_val = AMMO_14.GetFloat(PropertyName.VAL);
            var TOUGHNESS_16 = _world.GetObject(ObjectType.Skill, 1295621997);
            var TOUGHNESS_16_val = TOUGHNESS_16.GetFloat(PropertyName.VAL);
            AMMO_12.SetFloat(231, AMMO_14_val - TOUGHNESS_16_val);
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
            var AMMO_18 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_18_val = AMMO_18.GetFloat(PropertyName.VAL);
            if (AMMO_18_val > 20f)
            {
                goto PLENTY;
            }
            var WRN01STR_19 = _world.AcknexObject.GetAcknexObject(665673790);
            var PANELTEXT_21 = _world.AcknexObject.GetAcknexObject(1886906754);
            var PANELTEXT_21_array = PANELTEXT_21.GetObject<List<IAcknexObject>>(293);
            var PANELTEXT_21_index = PANELTEXT_21.GetInteger(PropertyName.INDEX);
            PANELTEXT_21_array[PANELTEXT_21_index - 1] = WRN01STR_19;
            PANELTEXT_21.IsDirty = true;
            var PANELTEXT_22 = _world.AcknexObject.GetAcknexObject(1886906754);
            _world.AcknexObject.SetAcknexObject(127, PANELTEXT_22);
            var MSGSECCOUNT_26 = _world.GetObject(ObjectType.Skill, 2688150552);
            MSGSECCOUNT_26.SetFloat(231, 0f);
            PLENTY:
            var PLAYER_LIGHT_28 = _world.GetObject(ObjectType.Skill, 418);
            var PLAYER_LIGHT_28_val = PLAYER_LIGHT_28.GetFloat(PropertyName.VAL);
            var PLAYER_LIGHT_29 = _world.GetObject(ObjectType.Skill, 418);
            PLAYER_LIGHT_29.SetFloat(231, PLAYER_LIGHT_28_val + 0.5f);
            var EXPL01OVL_30 = _world.AcknexObject.GetAcknexObject(1363414904);
            _world.AcknexObject.SetAcknexObject(157, EXPL01OVL_30);
            var MP_502SND_33 = _world.AcknexObject.GetAcknexObject(3759961509);
            _world.PlaySound(MP_502SND_33, 0.4f, null);
            var SHOT_SOUND_ON_36 = _world.GetObject(ObjectType.Skill, 3372273679);
            SHOT_SOUND_ON_36.SetFloat(231, 1f);
            var SHOTSECCOUNT_38 = _world.GetObject(ObjectType.Skill, 733093231);
            SHOTSECCOUNT_38.SetFloat(231, 0f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MP5_03OVL_40 = _world.AcknexObject.GetAcknexObject(2701632722);
            _world.AcknexObject.SetAcknexObject(158, MP5_03OVL_40);
            var EXPL02OVL_43 = _world.AcknexObject.GetAcknexObject(1363450841);
            _world.AcknexObject.SetAcknexObject(157, EXPL02OVL_43);
            var SHOOT_SECTOR_47 = _world.GetObject(ObjectType.Skill, 440);
            SHOOT_SECTOR_47.SetFloat(231, 6.283f);
            var SHOOT_RANGE_49 = _world.GetObject(ObjectType.Skill, 439);
            SHOOT_RANGE_49.SetFloat(231, 200f);
            var SHOOT_FAC_50 = _world.GetObject(ObjectType.Skill, 441);
            var SHOOT_FAC_51 = _world.GetObject(ObjectType.Skill, 441);
            var SHOOT_FAC_51_val = SHOOT_FAC_51.GetFloat(PropertyName.VAL);
            var PLAYERSHOOTFACTOR_52 = _world.GetObject(ObjectType.Skill, 1090796006);
            var PLAYERSHOOTFACTOR_52_val = PLAYERSHOOTFACTOR_52.GetFloat(PropertyName.VAL);
            SHOOT_FAC_50.SetFloat(231, PLAYERSHOOTFACTOR_52_val);
            var DSHOOTXPLUS_53 = _world.GetObject(ObjectType.Skill, 3730253338);
            var DSHOOTXPLUS_53_val = DSHOOTXPLUS_53.GetFloat(PropertyName.VAL);
            var SHOOT_X_54 = _world.GetObject(ObjectType.Skill, 442);
            SHOOT_X_54.SetFloat(231, DSHOOTXPLUS_53_val);
            var SVANGLE_55 = _world.GetObject(ObjectType.Skill, 3326160989);
            var SVANGLE_55_val = SVANGLE_55.GetFloat(PropertyName.VAL);
            var SHOOT_Y_56 = _world.GetObject(ObjectType.Skill, 443);
            SHOOT_Y_56.SetFloat(231, SVANGLE_55_val);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_58 = _world.GetObject(ObjectType.Skill, 444);
            var HIT_DIST_58_val = HIT_DIST_58.GetFloat(PropertyName.VAL);
            if (HIT_DIST_58_val == 0f)
            {
                goto SHOOT2;
            }
            var HIT_61 = _world.GetSynonymObject(704);
            var temp_62 = HIT_61.GetFloat(208);
            if (temp_62 == 1f)
            {
                goto CONTHIT;
            }
            SHOOT2:
            var SHOOT_X_64 = _world.GetObject(ObjectType.Skill, 442);
            SHOOT_X_64.SetFloat(231, 0f);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_66 = _world.GetObject(ObjectType.Skill, 444);
            var HIT_DIST_66_val = HIT_DIST_66.GetFloat(PropertyName.VAL);
            if (HIT_DIST_66_val == 0f)
            {
                goto SHOOT3;
            }
            var HIT_67 = _world.GetSynonymObject(704);
            _world.SetSynonymObject(2013386137, HIT_67);
            var MY_TARGET_71 = _world.GetSynonymObject(2013386137);
            MY_TARGET_71.SetFloat(175, 1f);
            var HIT_74 = _world.GetSynonymObject(704);
            var temp_75 = HIT_74.GetFloat(208);
            if (temp_75 == 1f)
            {
                goto CONTHIT;
            }
            SHOOT3:
            var DSHOOTXMINUS_76 = _world.GetObject(ObjectType.Skill, 2835570818);
            var DSHOOTXMINUS_76_val = DSHOOTXMINUS_76.GetFloat(PropertyName.VAL);
            var SHOOT_X_77 = _world.GetObject(ObjectType.Skill, 442);
            SHOOT_X_77.SetFloat(231, DSHOOTXMINUS_76_val);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_79 = _world.GetObject(ObjectType.Skill, 444);
            var HIT_DIST_79_val = HIT_DIST_79.GetFloat(PropertyName.VAL);
            if (HIT_DIST_79_val == 0f)
            {
                goto SHOOT4;
            }
            var HIT_82 = _world.GetSynonymObject(704);
            var temp_83 = HIT_82.GetFloat(208);
            if (temp_83 == 1f)
            {
                goto CONTHIT;
            }
            SHOOT4:
            var SHOOT_X_85 = _world.GetObject(ObjectType.Skill, 442);
            SHOOT_X_85.SetFloat(231, 0f);
            var DSHOOTYPLUS_86 = _world.GetObject(ObjectType.Skill, 3731439259);
            var DSHOOTYPLUS_86_val = DSHOOTYPLUS_86.GetFloat(PropertyName.VAL);
            var SHOOT_Y_87 = _world.GetObject(ObjectType.Skill, 443);
            SHOOT_Y_87.SetFloat(231, DSHOOTYPLUS_86_val);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_89 = _world.GetObject(ObjectType.Skill, 444);
            var HIT_DIST_89_val = HIT_DIST_89.GetFloat(PropertyName.VAL);
            if (HIT_DIST_89_val == 0f)
            {
                goto SHOOT5;
            }
            var HIT_92 = _world.GetSynonymObject(704);
            var temp_93 = HIT_92.GetFloat(208);
            if (temp_93 == 1f)
            {
                goto CONTHIT;
            }
            SHOOT5:
            var DSHOOTYMINUS_94 = _world.GetObject(ObjectType.Skill, 2874706211);
            var DSHOOTYMINUS_94_val = DSHOOTYMINUS_94.GetFloat(PropertyName.VAL);
            var SHOOT_Y_95 = _world.GetObject(ObjectType.Skill, 443);
            SHOOT_Y_95.SetFloat(231, DSHOOTYMINUS_94_val);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_97 = _world.GetObject(ObjectType.Skill, 444);
            var HIT_DIST_97_val = HIT_DIST_97.GetFloat(PropertyName.VAL);
            if (HIT_DIST_97_val == 0f)
            {
                goto NOHIT;
            }
            var HIT_100 = _world.GetSynonymObject(704);
            var temp_101 = HIT_100.GetFloat(208);
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
            var MY_TARGET_104 = _world.GetSynonymObject(2013386137);
            MY_TARGET_104.SetFloat(175, 1f);
            NOHIT:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            _world.AcknexObject.SetAcknexObject(157, null);
            var PLAYER_LIGHT_110 = _world.GetObject(ObjectType.Skill, 418);
            var PLAYER_LIGHT_110_val = PLAYER_LIGHT_110.GetFloat(PropertyName.VAL);
            var PLAYER_LIGHT_111 = _world.GetObject(ObjectType.Skill, 418);
            PLAYER_LIGHT_111.SetFloat(231, PLAYER_LIGHT_110_val + -0.5f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var WEAPONSEL_114 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_114_val = WEAPONSEL_114.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_114_val != 2f)
            {
                goto FINISH;
            }
            var MOUSE_LEFT_116 = _world.GetObject(ObjectType.Skill, 471);
            var MOUSE_LEFT_116_val = MOUSE_LEFT_116.GetFloat(PropertyName.VAL);
            if (MOUSE_LEFT_116_val == 1f)
            {
                goto FIRE;
            }
            var KEY_CTRL_118 = _world.GetObject(ObjectType.Skill, 526);
            var KEY_CTRL_118_val = KEY_CTRL_118.GetFloat(PropertyName.VAL);
            if (KEY_CTRL_118_val == 1f)
            {
                goto FIRE;
            }
            var MP5_02OVL_119 = _world.AcknexObject.GetAcknexObject(2701596785);
            _world.AcknexObject.SetAcknexObject(158, MP5_02OVL_119);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MP5_01OVL_123 = _world.AcknexObject.GetAcknexObject(2701560848);
            _world.AcknexObject.SetAcknexObject(158, MP5_01OVL_123);
            goto CONT;
            NOAMMO:
            var WRN02STR_126 = _world.AcknexObject.GetAcknexObject(665709727);
            var PANELTEXT_128 = _world.AcknexObject.GetAcknexObject(1886906754);
            var PANELTEXT_128_array = PANELTEXT_128.GetObject<List<IAcknexObject>>(293);
            var PANELTEXT_128_index = PANELTEXT_128.GetInteger(PropertyName.INDEX);
            PANELTEXT_128_array[PANELTEXT_128_index - 1] = WRN02STR_126;
            PANELTEXT_128.IsDirty = true;
            var PANELTEXT_129 = _world.AcknexObject.GetAcknexObject(1886906754);
            _world.AcknexObject.SetAcknexObject(127, PANELTEXT_129);
            var MSGSECCOUNT_133 = _world.GetObject(ObjectType.Skill, 2688150552);
            MSGSECCOUNT_133.SetFloat(231, 0f);
            var MP_504SND_134 = _world.AcknexObject.GetAcknexObject(3760033383);
            _world.PlaySound(MP_504SND_134, 1f, null);
            var GUN_ON_137 = _world.GetObject(ObjectType.Skill, 3014382675);
            GUN_ON_137.SetFloat(231, 0f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MP5_01OVL_139 = _world.AcknexObject.GetAcknexObject(2701560848);
            _world.AcknexObject.SetAcknexObject(158, MP5_01OVL_139);
            CONT:
            var FIRE_142 = _world.AcknexObject.GetAcknexObject(2089072467);
            _world.AcknexObject.SetAcknexObject(78, FIRE_142);
            var FIRE_144 = _world.AcknexObject.GetAcknexObject(2089072467);
            _world.AcknexObject.SetAcknexObject(97, FIRE_144);
            FINISH:
            var GUNFIRING_147 = _world.GetObject(ObjectType.Skill, 3478808598);
            GUNFIRING_147.SetFloat(231, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator BURST(IAcknexObject MY, IAcknexObject THERE)
        {
            var AMMO_1 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_1_val = AMMO_1.GetFloat(PropertyName.VAL);
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
            var GUNFIRING_3 = _world.GetObject(ObjectType.Skill, 3478808598);
            GUNFIRING_3.SetFloat(231, 1f);
            _world.AcknexObject.SetAcknexObject(78, null);
            _world.AcknexObject.SetAcknexObject(97, null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            FIRE:
            var MP5_02OVL_9 = _world.AcknexObject.GetAcknexObject(2701596785);
            _world.AcknexObject.SetAcknexObject(158, MP5_02OVL_9);
            var AMMO_13 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_13_val = AMMO_13.GetFloat(PropertyName.VAL);
            if (AMMO_13_val == 0f)
            {
                goto NOAMMO;
            }
            var AMMO_14 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_15 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_15_val = AMMO_15.GetFloat(PropertyName.VAL);
            var AMMO_16 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_16_val = AMMO_16.GetFloat(PropertyName.VAL);
            var TOUGHNESS_20 = _world.GetObject(ObjectType.Skill, 1295621997);
            var TOUGHNESS_20_val = TOUGHNESS_20.GetFloat(PropertyName.VAL);
            AMMO_14.SetFloat(231, AMMO_16_val - 3f * TOUGHNESS_20_val);
            var AMMO_22 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_22_val = AMMO_22.GetFloat(PropertyName.VAL);
            if (AMMO_22_val < 0f)
            {
                var AMMO_24 = _world.GetObject(ObjectType.Skill, 2088896983);
                AMMO_24.SetFloat(231, 0f);
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
            var AMMO_26 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_26_val = AMMO_26.GetFloat(PropertyName.VAL);
            if (AMMO_26_val > 20f)
            {
                goto PLENTY;
            }
            var WRN01STR_27 = _world.AcknexObject.GetAcknexObject(665673790);
            var PANELTEXT_29 = _world.AcknexObject.GetAcknexObject(1886906754);
            var PANELTEXT_29_array = PANELTEXT_29.GetObject<List<IAcknexObject>>(293);
            var PANELTEXT_29_index = PANELTEXT_29.GetInteger(PropertyName.INDEX);
            PANELTEXT_29_array[PANELTEXT_29_index - 1] = WRN01STR_27;
            PANELTEXT_29.IsDirty = true;
            var PANELTEXT_30 = _world.AcknexObject.GetAcknexObject(1886906754);
            _world.AcknexObject.SetAcknexObject(127, PANELTEXT_30);
            var MSGSECCOUNT_34 = _world.GetObject(ObjectType.Skill, 2688150552);
            MSGSECCOUNT_34.SetFloat(231, 0f);
            PLENTY:
            var PLAYER_LIGHT_36 = _world.GetObject(ObjectType.Skill, 418);
            var PLAYER_LIGHT_36_val = PLAYER_LIGHT_36.GetFloat(PropertyName.VAL);
            var PLAYER_LIGHT_37 = _world.GetObject(ObjectType.Skill, 418);
            PLAYER_LIGHT_37.SetFloat(231, PLAYER_LIGHT_36_val + 0.7f);
            var EXPL01OVL_38 = _world.AcknexObject.GetAcknexObject(1363414904);
            _world.AcknexObject.SetAcknexObject(157, EXPL01OVL_38);
            var MP_503SND_41 = _world.AcknexObject.GetAcknexObject(3759997446);
            _world.PlaySound(MP_503SND_41, 0.4f, null);
            var SHOT_SOUND_ON_44 = _world.GetObject(ObjectType.Skill, 3372273679);
            SHOT_SOUND_ON_44.SetFloat(231, 1f);
            var SHOTSECCOUNT_46 = _world.GetObject(ObjectType.Skill, 733093231);
            SHOTSECCOUNT_46.SetFloat(231, 0f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MP5_03OVL_48 = _world.AcknexObject.GetAcknexObject(2701632722);
            _world.AcknexObject.SetAcknexObject(158, MP5_03OVL_48);
            var EXPL02OVL_51 = _world.AcknexObject.GetAcknexObject(1363450841);
            _world.AcknexObject.SetAcknexObject(157, EXPL02OVL_51);
            var SHOOT_SECTOR_55 = _world.GetObject(ObjectType.Skill, 440);
            SHOOT_SECTOR_55.SetFloat(231, 6.283f);
            var SHOOT_RANGE_57 = _world.GetObject(ObjectType.Skill, 439);
            SHOOT_RANGE_57.SetFloat(231, 200f);
            var SHOOT_FAC_58 = _world.GetObject(ObjectType.Skill, 441);
            var SHOOT_FAC_59 = _world.GetObject(ObjectType.Skill, 441);
            var SHOOT_FAC_59_val = SHOOT_FAC_59.GetFloat(PropertyName.VAL);
            var PLAYERBURSTFACTOR_60 = _world.GetObject(ObjectType.Skill, 2833397193);
            var PLAYERBURSTFACTOR_60_val = PLAYERBURSTFACTOR_60.GetFloat(PropertyName.VAL);
            SHOOT_FAC_58.SetFloat(231, PLAYERBURSTFACTOR_60_val);
            var DSHOOTXPLUS_61 = _world.GetObject(ObjectType.Skill, 3730253338);
            var DSHOOTXPLUS_61_val = DSHOOTXPLUS_61.GetFloat(PropertyName.VAL);
            var SHOOT_X_62 = _world.GetObject(ObjectType.Skill, 442);
            SHOOT_X_62.SetFloat(231, DSHOOTXPLUS_61_val);
            var SHOOT_Y_64 = _world.GetObject(ObjectType.Skill, 443);
            SHOOT_Y_64.SetFloat(231, 0f);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_66 = _world.GetObject(ObjectType.Skill, 444);
            var HIT_DIST_66_val = HIT_DIST_66.GetFloat(PropertyName.VAL);
            if (HIT_DIST_66_val == 0f)
            {
                goto SHOOT2;
            }
            var HIT_67 = _world.GetSynonymObject(704);
            _world.SetSynonymObject(2013386137, HIT_67);
            var MY_TARGET_71 = _world.GetSynonymObject(2013386137);
            MY_TARGET_71.SetFloat(175, 1f);
            var HIT_74 = _world.GetSynonymObject(704);
            var temp_75 = HIT_74.GetFloat(208);
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
            var SHOOT_X_77 = _world.GetObject(ObjectType.Skill, 442);
            SHOOT_X_77.SetFloat(231, 0f);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_79 = _world.GetObject(ObjectType.Skill, 444);
            var HIT_DIST_79_val = HIT_DIST_79.GetFloat(PropertyName.VAL);
            if (HIT_DIST_79_val == 0f)
            {
                goto SHOOT3;
            }
            var HIT_80 = _world.GetSynonymObject(704);
            _world.SetSynonymObject(2013386137, HIT_80);
            var MY_TARGET_84 = _world.GetSynonymObject(2013386137);
            MY_TARGET_84.SetFloat(175, 1f);
            var HIT_87 = _world.GetSynonymObject(704);
            var temp_88 = HIT_87.GetFloat(208);
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
            var DSHOOTXMINUS_89 = _world.GetObject(ObjectType.Skill, 2835570818);
            var DSHOOTXMINUS_89_val = DSHOOTXMINUS_89.GetFloat(PropertyName.VAL);
            var SHOOT_X_90 = _world.GetObject(ObjectType.Skill, 442);
            SHOOT_X_90.SetFloat(231, DSHOOTXMINUS_89_val);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_92 = _world.GetObject(ObjectType.Skill, 444);
            var HIT_DIST_92_val = HIT_DIST_92.GetFloat(PropertyName.VAL);
            if (HIT_DIST_92_val == 0f)
            {
                goto NOHIT;
            }
            var HIT_93 = _world.GetSynonymObject(704);
            _world.SetSynonymObject(2013386137, HIT_93);
            var MY_TARGET_97 = _world.GetSynonymObject(2013386137);
            MY_TARGET_97.SetFloat(175, 1f);
            var HIT_100 = _world.GetSynonymObject(704);
            var temp_101 = HIT_100.GetFloat(208);
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
            _world.AcknexObject.SetAcknexObject(157, null);
            var PLAYER_LIGHT_107 = _world.GetObject(ObjectType.Skill, 418);
            var PLAYER_LIGHT_107_val = PLAYER_LIGHT_107.GetFloat(PropertyName.VAL);
            var PLAYER_LIGHT_108 = _world.GetObject(ObjectType.Skill, 418);
            PLAYER_LIGHT_108.SetFloat(231, PLAYER_LIGHT_107_val + -0.7f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var WEAPONSEL_111 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_111_val = WEAPONSEL_111.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_111_val != 2f)
            {
                goto FINISH;
            }
            var MOUSE_LEFT_113 = _world.GetObject(ObjectType.Skill, 471);
            var MOUSE_LEFT_113_val = MOUSE_LEFT_113.GetFloat(PropertyName.VAL);
            if (MOUSE_LEFT_113_val == 1f)
            {
                goto FIRE;
            }
            var KEY_CTRL_115 = _world.GetObject(ObjectType.Skill, 526);
            var KEY_CTRL_115_val = KEY_CTRL_115.GetFloat(PropertyName.VAL);
            if (KEY_CTRL_115_val == 1f)
            {
                goto FIRE;
            }
            var MP5_02OVL_116 = _world.AcknexObject.GetAcknexObject(2701596785);
            _world.AcknexObject.SetAcknexObject(158, MP5_02OVL_116);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MP5_01OVL_120 = _world.AcknexObject.GetAcknexObject(2701560848);
            _world.AcknexObject.SetAcknexObject(158, MP5_01OVL_120);
            goto CONT;
            NOAMMO:
            var WRN02STR_123 = _world.AcknexObject.GetAcknexObject(665709727);
            var PANELTEXT_125 = _world.AcknexObject.GetAcknexObject(1886906754);
            var PANELTEXT_125_array = PANELTEXT_125.GetObject<List<IAcknexObject>>(293);
            var PANELTEXT_125_index = PANELTEXT_125.GetInteger(PropertyName.INDEX);
            PANELTEXT_125_array[PANELTEXT_125_index - 1] = WRN02STR_123;
            PANELTEXT_125.IsDirty = true;
            var PANELTEXT_126 = _world.AcknexObject.GetAcknexObject(1886906754);
            _world.AcknexObject.SetAcknexObject(127, PANELTEXT_126);
            var MSGSECCOUNT_130 = _world.GetObject(ObjectType.Skill, 2688150552);
            MSGSECCOUNT_130.SetFloat(231, 0f);
            var MP_504SND_131 = _world.AcknexObject.GetAcknexObject(3760033383);
            _world.PlaySound(MP_504SND_131, 1f, null);
            var GUN_ON_134 = _world.GetObject(ObjectType.Skill, 3014382675);
            GUN_ON_134.SetFloat(231, 0f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MP5_01OVL_136 = _world.AcknexObject.GetAcknexObject(2701560848);
            _world.AcknexObject.SetAcknexObject(158, MP5_01OVL_136);
            CONT:
            var BURST_139 = _world.AcknexObject.GetAcknexObject(215570781);
            _world.AcknexObject.SetAcknexObject(78, BURST_139);
            var BURST_141 = _world.AcknexObject.GetAcknexObject(215570781);
            _world.AcknexObject.SetAcknexObject(97, BURST_141);
            FINISH:
            var GUNFIRING_144 = _world.GetObject(ObjectType.Skill, 3478808598);
            GUNFIRING_144.SetFloat(231, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator THROW(IAcknexObject MY, IAcknexObject THERE)
        {
            var AMMO_1 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_1_val = AMMO_1.GetFloat(PropertyName.VAL);
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
            var GRANADE_3 = _world.GetSynonymObject(556898879);
            if (GRANADE_3 == null)
            {
                yield break;
            }
            var GUNFIRING_5 = _world.GetObject(ObjectType.Skill, 3478808598);
            GUNFIRING_5.SetFloat(231, 1f);
            _world.AcknexObject.SetAcknexObject(78, null);
            _world.AcknexObject.SetAcknexObject(97, null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GRAN01OVL_11 = _world.AcknexObject.GetAcknexObject(850572839);
            _world.AcknexObject.SetAcknexObject(157, GRAN01OVL_11);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            _world.AcknexObject.SetAcknexObject(157, null);
            var GRAN02OVL_18 = _world.AcknexObject.GetAcknexObject(850608776);
            _world.AcknexObject.SetAcknexObject(158, GRAN02OVL_18);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GRAN01SND_22 = _world.AcknexObject.GetAcknexObject(850576923);
            _world.PlaySound(GRAN01SND_22, 1f, null);
            var GRAN03OVL_24 = _world.AcknexObject.GetAcknexObject(850644713);
            _world.AcknexObject.SetAcknexObject(157, GRAN03OVL_24);
            _world.AcknexObject.SetAcknexObject(158, null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            _world.AcknexObject.SetAcknexObject(157, null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)8f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GRAN04OVL_35 = _world.AcknexObject.GetAcknexObject(850680650);
            _world.AcknexObject.SetAcknexObject(158, GRAN04OVL_35);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GRAN05OVL_39 = _world.AcknexObject.GetAcknexObject(850716587);
            _world.AcknexObject.SetAcknexObject(158, GRAN05OVL_39);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GRAN06OVL_43 = _world.AcknexObject.GetAcknexObject(850752524);
            _world.AcknexObject.SetAcknexObject(158, GRAN06OVL_43);
            var GRANADE_48 = _world.GetSynonymObject(556898879);
            GRANADE_48.SetFloat(213, 1f);
            var GRANADE_51 = _world.GetSynonymObject(556898879);
            GRANADE_51.SetFloat(168, 2f);
            var GRANADE_53 = _world.GetSynonymObject(556898879);
            var GRANADE_55 = _world.GetSynonymObject(556898879);
            var temp_56 = GRANADE_55.GetFloat(195);
            var PLAYER_X_57 = _world.GetObject(ObjectType.Skill, 459);
            var PLAYER_X_57_val = PLAYER_X_57.GetFloat(PropertyName.VAL);
            var PLAYER_COS_59 = _world.GetObject(ObjectType.Skill, 464);
            var PLAYER_COS_59_val = PLAYER_COS_59.GetFloat(PropertyName.VAL);
            var PLAYER_VX_61 = _world.GetObject(ObjectType.Skill, 431);
            var PLAYER_VX_61_val = PLAYER_VX_61.GetFloat(PropertyName.VAL);
            var TIME_CORR_63 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_63_val = TIME_CORR_63.GetFloat(PropertyName.VAL);
            GRANADE_53.SetFloat(195, PLAYER_X_57_val + PLAYER_COS_59_val + PLAYER_VX_61_val * TIME_CORR_63_val);
            var GRANADE_65 = _world.GetSynonymObject(556898879);
            var GRANADE_67 = _world.GetSynonymObject(556898879);
            var temp_68 = GRANADE_67.GetFloat(196);
            var PLAYER_Y_69 = _world.GetObject(ObjectType.Skill, 460);
            var PLAYER_Y_69_val = PLAYER_Y_69.GetFloat(PropertyName.VAL);
            var PLAYER_SIN_71 = _world.GetObject(ObjectType.Skill, 463);
            var PLAYER_SIN_71_val = PLAYER_SIN_71.GetFloat(PropertyName.VAL);
            var PLAYER_VY_73 = _world.GetObject(ObjectType.Skill, 432);
            var PLAYER_VY_73_val = PLAYER_VY_73.GetFloat(PropertyName.VAL);
            var TIME_CORR_75 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_75_val = TIME_CORR_75.GetFloat(PropertyName.VAL);
            GRANADE_65.SetFloat(196, PLAYER_Y_69_val + PLAYER_SIN_71_val + PLAYER_VY_73_val * TIME_CORR_75_val);
            var GRANADE_77 = _world.GetSynonymObject(556898879);
            var GRANADE_79 = _world.GetSynonymObject(556898879);
            var temp_80 = GRANADE_79.GetFloat(165);
            var PLAYER_SIZE_81 = _world.GetObject(ObjectType.Skill, 422);
            var PLAYER_SIZE_81_val = PLAYER_SIZE_81.GetFloat(PropertyName.VAL);
            var PLAYER_TILT_84 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_84_val = PLAYER_TILT_84.GetFloat(PropertyName.VAL);
            var PLAYER_HGT_91 = _world.GetObject(ObjectType.Skill, 479);
            var PLAYER_HGT_91_val = PLAYER_HGT_91.GetFloat(PropertyName.VAL);
            var FLOOR_HGT_93 = _world.GetObject(ObjectType.Skill, 567);
            var FLOOR_HGT_93_val = FLOOR_HGT_93.GetFloat(PropertyName.VAL);
            GRANADE_77.SetFloat(165, PLAYER_SIZE_81_val - (PLAYER_TILT_84_val * 0.65f) - 0.05f + PLAYER_HGT_91_val + FLOOR_HGT_93_val);
            var FREEFALL_94 = _world.AcknexObject.GetAcknexObject(1675036814);
            var GRANADE_96 = _world.GetSynonymObject(556898879);
            GRANADE_96.SetAcknexObject(189, FREEFALL_94);
            var BOUNCE_97 = _world.AcknexObject.GetAcknexObject(2811822825);
            var GRANADE_99 = _world.GetSynonymObject(556898879);
            GRANADE_99.SetAcknexObject(209, BOUNCE_97);
            //Unknown keyword: LOCATE
            var GRAN2TEX_100 = _world.AcknexObject.GetAcknexObject(1197240280);
            var GRANADE_102 = _world.GetSynonymObject(556898879);
            GRANADE_102.SetAcknexObject(164, GRAN2TEX_100);
            var PLAYER_ANGLE_103 = _world.GetObject(ObjectType.Skill, 462);
            var PLAYER_ANGLE_103_val = PLAYER_ANGLE_103.GetFloat(PropertyName.VAL);
            var GRANADE_105 = _world.GetSynonymObject(556898879);
            GRANADE_105.SetFloat(194, PLAYER_ANGLE_103_val);
            var GRANADE_107 = _world.GetSynonymObject(556898879);
            var GRANADE_109 = _world.GetSynonymObject(556898879);
            var temp_110 = GRANADE_109.GetFloat(169);
            var PLAYER_TILT_112 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_112_val = PLAYER_TILT_112.GetFloat(PropertyName.VAL);
            GRANADE_107.SetFloat(169, -PLAYER_TILT_112_val / 2f + 0.2f);
            var BULLET_117 = _world.AcknexObject.GetAcknexObject(2818612821);
            var GRANADE_119 = _world.GetSynonymObject(556898879);
            GRANADE_119.SetAcknexObject(199, BULLET_117);
            var GRANADE_122 = _world.GetSynonymObject(556898879);
            GRANADE_122.SetFloat(207, 1f);
            var GRANADE_125 = _world.GetSynonymObject(556898879);
            GRANADE_125.SetFloat(204, 0f);
            var AMMO_127 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_127_val = AMMO_127.GetFloat(PropertyName.VAL);
            var AMMO_128 = _world.GetObject(ObjectType.Skill, 2088896983);
            AMMO_128.SetFloat(231, AMMO_127_val + -1f);
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
            var GRAN2TEX_130 = _world.AcknexObject.GetAcknexObject(1197240280);
            var GRANADE_132 = _world.GetSynonymObject(556898879);
            var temp_133 = GRANADE_132?.GetAcknexObject(164);
            if (temp_133 == GRAN2TEX_130)
            {
                var GRAN1TEX_134 = _world.AcknexObject.GetAcknexObject(1197204343);
                var GRANADE_136 = _world.GetSynonymObject(556898879);
                GRANADE_136.SetAcknexObject(164, GRAN1TEX_134);
            }
            _world.AcknexObject.SetAcknexObject(158, null);
            var AMMO_141 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_141_val = AMMO_141.GetFloat(PropertyName.VAL);
            if (AMMO_141_val > 0f)
            {
                goto MOREGRANADES;
            }
            var HAS_GRANADE_143 = _world.GetObject(ObjectType.Skill, 40123194);
            HAS_GRANADE_143.SetFloat(231, 0f);
            _world.SetSynonymObject(3254523708, null);
            var GUNFIRING_147 = _world.GetObject(ObjectType.Skill, 3478808598);
            GUNFIRING_147.SetFloat(231, 0f);
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
            var GRAN00OVL_149 = _world.AcknexObject.GetAcknexObject(850536902);
            _world.AcknexObject.SetAcknexObject(158, GRAN00OVL_149);
            var WEAPONSEL_153 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_153_val = WEAPONSEL_153.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_153_val != 3f)
            {
                goto FINISH;
            }
            var THROW_154 = _world.AcknexObject.GetAcknexObject(236450049);
            _world.AcknexObject.SetAcknexObject(78, THROW_154);
            var THROW_156 = _world.AcknexObject.GetAcknexObject(236450049);
            _world.AcknexObject.SetAcknexObject(97, THROW_156);
            FINISH:
            var GUNFIRING_159 = _world.GetObject(ObjectType.Skill, 3478808598);
            GUNFIRING_159.SetFloat(231, 0f);
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
            var MISSILE_1 = _world.GetSynonymObject(3680056099);
            if (MISSILE_1 == null)
            {
                yield break;
            }
            var GUNFIRING_3 = _world.GetObject(ObjectType.Skill, 3478808598);
            GUNFIRING_3.SetFloat(231, 1f);
            _world.AcknexObject.SetAcknexObject(78, null);
            _world.AcknexObject.SetAcknexObject(97, null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            FIRE:
            var STNG01OVL_9 = _world.AcknexObject.GetAcknexObject(1500292443);
            _world.AcknexObject.SetAcknexObject(158, STNG01OVL_9);
            var AMMO_13 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_13_val = AMMO_13.GetFloat(PropertyName.VAL);
            if (AMMO_13_val == 0f)
            {
                goto NOAMMO;
            }
            var AMMO_15 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_15_val = AMMO_15.GetFloat(PropertyName.VAL);
            var AMMO_16 = _world.GetObject(ObjectType.Skill, 2088896983);
            AMMO_16.SetFloat(231, AMMO_15_val + -1f);
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
            var AMMO_18 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_18_val = AMMO_18.GetFloat(PropertyName.VAL);
            if (AMMO_18_val > 5f)
            {
                goto PLENTY;
            }
            var WRN01STR_19 = _world.AcknexObject.GetAcknexObject(665673790);
            var PANELTEXT_21 = _world.AcknexObject.GetAcknexObject(1886906754);
            var PANELTEXT_21_array = PANELTEXT_21.GetObject<List<IAcknexObject>>(293);
            var PANELTEXT_21_index = PANELTEXT_21.GetInteger(PropertyName.INDEX);
            PANELTEXT_21_array[PANELTEXT_21_index - 1] = WRN01STR_19;
            PANELTEXT_21.IsDirty = true;
            var PANELTEXT_22 = _world.AcknexObject.GetAcknexObject(1886906754);
            _world.AcknexObject.SetAcknexObject(127, PANELTEXT_22);
            var MSGSECCOUNT_26 = _world.GetObject(ObjectType.Skill, 2688150552);
            MSGSECCOUNT_26.SetFloat(231, 0f);
            PLENTY:
            var PLAYER_LIGHT_28 = _world.GetObject(ObjectType.Skill, 418);
            var PLAYER_LIGHT_28_val = PLAYER_LIGHT_28.GetFloat(PropertyName.VAL);
            var PLAYER_LIGHT_29 = _world.GetObject(ObjectType.Skill, 418);
            PLAYER_LIGHT_29.SetFloat(231, PLAYER_LIGHT_28_val + 0.7f);
            var STNG02SND_30 = _world.AcknexObject.GetAcknexObject(1500332464);
            _world.PlaySound(STNG02SND_30, 0.8f, null);
            var SHOT_SOUND_ON_33 = _world.GetObject(ObjectType.Skill, 3372273679);
            SHOT_SOUND_ON_33.SetFloat(231, 1f);
            var SHOTSECCOUNT_35 = _world.GetObject(ObjectType.Skill, 733093231);
            SHOTSECCOUNT_35.SetFloat(231, 0f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)3f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var STNG02OVL_37 = _world.AcknexObject.GetAcknexObject(1500328380);
            _world.AcknexObject.SetAcknexObject(158, STNG02OVL_37);
            var MISSILE_42 = _world.GetSynonymObject(3680056099);
            MISSILE_42.SetFloat(213, 1f);
            var MISSILE_45 = _world.GetSynonymObject(3680056099);
            MISSILE_45.SetFloat(168, 3f);
            var MISSILE_47 = _world.GetSynonymObject(3680056099);
            var MISSILE_49 = _world.GetSynonymObject(3680056099);
            var temp_50 = MISSILE_49.GetFloat(195);
            var PLAYER_X_51 = _world.GetObject(ObjectType.Skill, 459);
            var PLAYER_X_51_val = PLAYER_X_51.GetFloat(PropertyName.VAL);
            var PLAYER_COS_53 = _world.GetObject(ObjectType.Skill, 464);
            var PLAYER_COS_53_val = PLAYER_COS_53.GetFloat(PropertyName.VAL);
            var PLAYER_VX_57 = _world.GetObject(ObjectType.Skill, 431);
            var PLAYER_VX_57_val = PLAYER_VX_57.GetFloat(PropertyName.VAL);
            var TIME_CORR_59 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_59_val = TIME_CORR_59.GetFloat(PropertyName.VAL);
            MISSILE_47.SetFloat(195, PLAYER_X_51_val + PLAYER_COS_53_val * 1.2f + PLAYER_VX_57_val * TIME_CORR_59_val);
            var MISSILE_61 = _world.GetSynonymObject(3680056099);
            var MISSILE_63 = _world.GetSynonymObject(3680056099);
            var temp_64 = MISSILE_63.GetFloat(196);
            var PLAYER_Y_65 = _world.GetObject(ObjectType.Skill, 460);
            var PLAYER_Y_65_val = PLAYER_Y_65.GetFloat(PropertyName.VAL);
            var PLAYER_SIN_67 = _world.GetObject(ObjectType.Skill, 463);
            var PLAYER_SIN_67_val = PLAYER_SIN_67.GetFloat(PropertyName.VAL);
            var PLAYER_VY_71 = _world.GetObject(ObjectType.Skill, 432);
            var PLAYER_VY_71_val = PLAYER_VY_71.GetFloat(PropertyName.VAL);
            var TIME_CORR_73 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_73_val = TIME_CORR_73.GetFloat(PropertyName.VAL);
            MISSILE_61.SetFloat(196, PLAYER_Y_65_val + PLAYER_SIN_67_val * 1.2f + PLAYER_VY_71_val * TIME_CORR_73_val);
            var MISSILE_75 = _world.GetSynonymObject(3680056099);
            var MISSILE_77 = _world.GetSynonymObject(3680056099);
            var temp_78 = MISSILE_77.GetFloat(165);
            var PLAYER_SIZE_79 = _world.GetObject(ObjectType.Skill, 422);
            var PLAYER_SIZE_79_val = PLAYER_SIZE_79.GetFloat(PropertyName.VAL);
            var PLAYER_TILT_82 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_82_val = PLAYER_TILT_82.GetFloat(PropertyName.VAL);
            var PLAYER_HGT_89 = _world.GetObject(ObjectType.Skill, 479);
            var PLAYER_HGT_89_val = PLAYER_HGT_89.GetFloat(PropertyName.VAL);
            var FLOOR_HGT_91 = _world.GetObject(ObjectType.Skill, 567);
            var FLOOR_HGT_91_val = FLOOR_HGT_91.GetFloat(PropertyName.VAL);
            MISSILE_75.SetFloat(165, PLAYER_SIZE_79_val - (PLAYER_TILT_82_val * 0.65f) - 0.05f + PLAYER_HGT_89_val + FLOOR_HGT_91_val);
            var EXPLODEMISSILE_92 = _world.AcknexObject.GetAcknexObject(3869018100);
            var MISSILE_94 = _world.GetSynonymObject(3680056099);
            MISSILE_94.SetAcknexObject(209, EXPLODEMISSILE_92);
            var EXPLODETARGET_95 = _world.AcknexObject.GetAcknexObject(3244966725);
            var MISSILE_97 = _world.GetSynonymObject(3680056099);
            MISSILE_97.SetAcknexObject(191, EXPLODETARGET_95);
            //Unknown keyword: LOCATE
            var MISS2TEX_98 = _world.AcknexObject.GetAcknexObject(1181917228);
            var MISSILE_100 = _world.GetSynonymObject(3680056099);
            MISSILE_100.SetAcknexObject(164, MISS2TEX_98);
            var PLAYER_ANGLE_101 = _world.GetObject(ObjectType.Skill, 462);
            var PLAYER_ANGLE_101_val = PLAYER_ANGLE_101.GetFloat(PropertyName.VAL);
            var MISSILE_103 = _world.GetSynonymObject(3680056099);
            MISSILE_103.SetFloat(194, PLAYER_ANGLE_101_val);
            var MISSILE_105 = _world.GetSynonymObject(3680056099);
            var MISSILE_107 = _world.GetSynonymObject(3680056099);
            var temp_108 = MISSILE_107.GetFloat(169);
            var PLAYER_TILT_110 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_110_val = PLAYER_TILT_110.GetFloat(PropertyName.VAL);
            MISSILE_105.SetFloat(169, -PLAYER_TILT_110_val);
            var BULLET_111 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MISSILE_113 = _world.GetSynonymObject(3680056099);
            MISSILE_113.SetAcknexObject(199, BULLET_111);
            var MISSILE_116 = _world.GetSynonymObject(3680056099);
            MISSILE_116.SetFloat(207, 1f);
            var MISSILE_119 = _world.GetSynonymObject(3680056099);
            MISSILE_119.SetFloat(214, 1f);
            var MISSILE_122 = _world.GetSynonymObject(3680056099);
            MISSILE_122.SetFloat(204, 0f);
            var SHOOT_SECTOR_124 = _world.GetObject(ObjectType.Skill, 440);
            SHOOT_SECTOR_124.SetFloat(231, 6.283f);
            var SHOOT_RANGE_126 = _world.GetObject(ObjectType.Skill, 439);
            SHOOT_RANGE_126.SetFloat(231, 200f);
            var SHOOT_FAC_128 = _world.GetObject(ObjectType.Skill, 441);
            SHOOT_FAC_128.SetFloat(231, 0f);
            var SHOOT_X_130 = _world.GetObject(ObjectType.Skill, 442);
            SHOOT_X_130.SetFloat(231, 0f);
            var SVANGLE_131 = _world.GetObject(ObjectType.Skill, 3326160989);
            var SVANGLE_131_val = SVANGLE_131.GetFloat(PropertyName.VAL);
            var SHOOT_Y_132 = _world.GetObject(ObjectType.Skill, 443);
            SHOOT_Y_132.SetFloat(231, SVANGLE_131_val);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_134 = _world.GetObject(ObjectType.Skill, 444);
            var HIT_DIST_134_val = HIT_DIST_134.GetFloat(PropertyName.VAL);
            if (HIT_DIST_134_val == 0f)
            {
                goto HITWALL;
            }
            var HIT_135 = _world.GetSynonymObject(704);
            _world.SetSynonymObject(2013386137, HIT_135);
            var HIT_139 = _world.GetSynonymObject(704);
            var temp_140 = HIT_139.GetFloat(208);
            if (temp_140 != 1f)
            {
                goto HITWALL;
            }
            var HIT_143 = _world.GetSynonymObject(704);
            var temp_144 = HIT_143.GetFloat(202);
            if (temp_144 != 0f)
            {
                var MISSILE_146 = _world.GetSynonymObject(3680056099);
                var MISSILE_148 = _world.GetSynonymObject(3680056099);
                var temp_149 = MISSILE_148.GetFloat(169);
                var HIT_152 = _world.GetSynonymObject(704);
                var temp_153 = HIT_152.GetFloat(200);
                var FLOOR_HGT_155 = _world.GetObject(ObjectType.Skill, 567);
                var FLOOR_HGT_155_val = FLOOR_HGT_155.GetFloat(PropertyName.VAL);
                var HIT_159 = _world.GetSynonymObject(704);
                var temp_160 = HIT_159.GetFloat(202);
                MISSILE_146.SetFloat(169, (temp_153 - FLOOR_HGT_155_val) / temp_160);
            }
            var MISSILE_163 = _world.GetSynonymObject(3680056099);
            var temp_164 = MISSILE_163.GetFloat(169);
            if (temp_164 < 0f)
            {
                var MISSILE_166 = _world.GetSynonymObject(3680056099);
                var MISSILE_168 = _world.GetSynonymObject(3680056099);
                var temp_169 = MISSILE_168.GetFloat(169);
                var MISSILE_172 = _world.GetSynonymObject(3680056099);
                var temp_173 = MISSILE_172.GetFloat(169);
                MISSILE_166.SetFloat(169, -temp_173);
            }
            goto CONTHIT;
            HITWALL:
            var MISSILE_175 = _world.GetSynonymObject(3680056099);
            var MISSILE_177 = _world.GetSynonymObject(3680056099);
            var temp_178 = MISSILE_177.GetFloat(169);
            var PLAYER_TILT_180 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_180_val = PLAYER_TILT_180.GetFloat(PropertyName.VAL);
            MISSILE_175.SetFloat(169, -PLAYER_TILT_180_val / 1.4f);
            CONTHIT:
            var PLAYER_LIGHT_184 = _world.GetObject(ObjectType.Skill, 418);
            var PLAYER_LIGHT_184_val = PLAYER_LIGHT_184.GetFloat(PropertyName.VAL);
            var PLAYER_LIGHT_185 = _world.GetObject(ObjectType.Skill, 418);
            PLAYER_LIGHT_185.SetFloat(231, PLAYER_LIGHT_184_val + -0.7f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MISS2TEX_187 = _world.AcknexObject.GetAcknexObject(1181917228);
            var MISSILE_189 = _world.GetSynonymObject(3680056099);
            var temp_190 = MISSILE_189?.GetAcknexObject(164);
            if (temp_190 == MISS2TEX_187)
            {
                var MISS1TEX_191 = _world.AcknexObject.GetAcknexObject(1181881291);
                var MISSILE_193 = _world.GetSynonymObject(3680056099);
                MISSILE_193.SetAcknexObject(164, MISS1TEX_191);
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
            var STNG01OVL_195 = _world.AcknexObject.GetAcknexObject(1500292443);
            _world.AcknexObject.SetAcknexObject(158, STNG01OVL_195);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var STNG00OVL_199 = _world.AcknexObject.GetAcknexObject(1500256506);
            _world.AcknexObject.SetAcknexObject(158, STNG00OVL_199);
            goto CONT;
            NOAMMO:
            var WRN02STR_202 = _world.AcknexObject.GetAcknexObject(665709727);
            var PANELTEXT_204 = _world.AcknexObject.GetAcknexObject(1886906754);
            var PANELTEXT_204_array = PANELTEXT_204.GetObject<List<IAcknexObject>>(293);
            var PANELTEXT_204_index = PANELTEXT_204.GetInteger(PropertyName.INDEX);
            PANELTEXT_204_array[PANELTEXT_204_index - 1] = WRN02STR_202;
            PANELTEXT_204.IsDirty = true;
            var PANELTEXT_205 = _world.AcknexObject.GetAcknexObject(1886906754);
            _world.AcknexObject.SetAcknexObject(127, PANELTEXT_205);
            var MSGSECCOUNT_209 = _world.GetObject(ObjectType.Skill, 2688150552);
            MSGSECCOUNT_209.SetFloat(231, 0f);
            var STNG03SND_210 = _world.AcknexObject.GetAcknexObject(1500368401);
            _world.PlaySound(STNG03SND_210, 1f, null);
            var GUN_ON_213 = _world.GetObject(ObjectType.Skill, 3014382675);
            GUN_ON_213.SetFloat(231, 0f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var STNG00OVL_215 = _world.AcknexObject.GetAcknexObject(1500256506);
            _world.AcknexObject.SetAcknexObject(158, STNG00OVL_215);
            CONT:
            var WEAPONSEL_219 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_219_val = WEAPONSEL_219.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_219_val != 4f)
            {
                goto FINISH;
            }
            var LAUNCH_220 = _world.AcknexObject.GetAcknexObject(3186573864);
            _world.AcknexObject.SetAcknexObject(78, LAUNCH_220);
            var LAUNCH_222 = _world.AcknexObject.GetAcknexObject(3186573864);
            _world.AcknexObject.SetAcknexObject(97, LAUNCH_222);
            FINISH:
            var GUNFIRING_225 = _world.GetObject(ObjectType.Skill, 3478808598);
            GUNFIRING_225.SetFloat(231, 0f);
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
            var PARTICLE_1 = _world.GetSynonymObject(2704244193);
            if (PARTICLE_1 == null)
            {
                yield break;
            }
            var GUNFIRING_3 = _world.GetObject(ObjectType.Skill, 3478808598);
            GUNFIRING_3.SetFloat(231, 1f);
            _world.AcknexObject.SetAcknexObject(78, null);
            _world.AcknexObject.SetAcknexObject(97, null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            FIRE:
            var QGUN01OVL_9 = _world.AcknexObject.GetAcknexObject(2621946266);
            _world.AcknexObject.SetAcknexObject(158, QGUN01OVL_9);
            var AMMO_13 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_13_val = AMMO_13.GetFloat(PropertyName.VAL);
            if (AMMO_13_val == 0f)
            {
                goto NOAMMO;
            }
            var AMMO_15 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_15_val = AMMO_15.GetFloat(PropertyName.VAL);
            var AMMO_16 = _world.GetObject(ObjectType.Skill, 2088896983);
            AMMO_16.SetFloat(231, AMMO_15_val + -1f);
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
            var AMMO_18 = _world.GetObject(ObjectType.Skill, 2088896983);
            var AMMO_18_val = AMMO_18.GetFloat(PropertyName.VAL);
            if (AMMO_18_val > 20f)
            {
                goto PLENTY;
            }
            var WRN01STR_19 = _world.AcknexObject.GetAcknexObject(665673790);
            var PANELTEXT_21 = _world.AcknexObject.GetAcknexObject(1886906754);
            var PANELTEXT_21_array = PANELTEXT_21.GetObject<List<IAcknexObject>>(293);
            var PANELTEXT_21_index = PANELTEXT_21.GetInteger(PropertyName.INDEX);
            PANELTEXT_21_array[PANELTEXT_21_index - 1] = WRN01STR_19;
            PANELTEXT_21.IsDirty = true;
            var PANELTEXT_22 = _world.AcknexObject.GetAcknexObject(1886906754);
            _world.AcknexObject.SetAcknexObject(127, PANELTEXT_22);
            var MSGSECCOUNT_26 = _world.GetObject(ObjectType.Skill, 2688150552);
            MSGSECCOUNT_26.SetFloat(231, 0f);
            PLENTY:
            var PLAYER_LIGHT_28 = _world.GetObject(ObjectType.Skill, 418);
            var PLAYER_LIGHT_28_val = PLAYER_LIGHT_28.GetFloat(PropertyName.VAL);
            var PLAYER_LIGHT_29 = _world.GetObject(ObjectType.Skill, 418);
            PLAYER_LIGHT_29.SetFloat(231, PLAYER_LIGHT_28_val + 0.9f);
            var QGUN02SND_30 = _world.AcknexObject.GetAcknexObject(2621986287);
            _world.PlaySound(QGUN02SND_30, 0.8f, null);
            var SHOT_SOUND_ON_33 = _world.GetObject(ObjectType.Skill, 3372273679);
            SHOT_SOUND_ON_33.SetFloat(231, 1f);
            var SHOTSECCOUNT_35 = _world.GetObject(ObjectType.Skill, 733093231);
            SHOTSECCOUNT_35.SetFloat(231, 0f);
            var QGUN02OVL_36 = _world.AcknexObject.GetAcknexObject(2621982203);
            _world.AcknexObject.SetAcknexObject(158, QGUN02OVL_36);
            var PARTICLE_41 = _world.GetSynonymObject(2704244193);
            PARTICLE_41.SetFloat(213, 1f);
            var PARTICLE_44 = _world.GetSynonymObject(2704244193);
            PARTICLE_44.SetFloat(168, 2f);
            var PARTICLE_46 = _world.GetSynonymObject(2704244193);
            var PARTICLE_48 = _world.GetSynonymObject(2704244193);
            var temp_49 = PARTICLE_48.GetFloat(195);
            var PLAYER_X_50 = _world.GetObject(ObjectType.Skill, 459);
            var PLAYER_X_50_val = PLAYER_X_50.GetFloat(PropertyName.VAL);
            var PLAYER_COS_52 = _world.GetObject(ObjectType.Skill, 464);
            var PLAYER_COS_52_val = PLAYER_COS_52.GetFloat(PropertyName.VAL);
            var PLAYER_VX_56 = _world.GetObject(ObjectType.Skill, 431);
            var PLAYER_VX_56_val = PLAYER_VX_56.GetFloat(PropertyName.VAL);
            var TIME_CORR_58 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_58_val = TIME_CORR_58.GetFloat(PropertyName.VAL);
            PARTICLE_46.SetFloat(195, PLAYER_X_50_val + PLAYER_COS_52_val * 2f + PLAYER_VX_56_val * TIME_CORR_58_val);
            var PARTICLE_60 = _world.GetSynonymObject(2704244193);
            var PARTICLE_62 = _world.GetSynonymObject(2704244193);
            var temp_63 = PARTICLE_62.GetFloat(196);
            var PLAYER_Y_64 = _world.GetObject(ObjectType.Skill, 460);
            var PLAYER_Y_64_val = PLAYER_Y_64.GetFloat(PropertyName.VAL);
            var PLAYER_SIN_66 = _world.GetObject(ObjectType.Skill, 463);
            var PLAYER_SIN_66_val = PLAYER_SIN_66.GetFloat(PropertyName.VAL);
            var PLAYER_VY_70 = _world.GetObject(ObjectType.Skill, 432);
            var PLAYER_VY_70_val = PLAYER_VY_70.GetFloat(PropertyName.VAL);
            var TIME_CORR_72 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_72_val = TIME_CORR_72.GetFloat(PropertyName.VAL);
            PARTICLE_60.SetFloat(196, PLAYER_Y_64_val + PLAYER_SIN_66_val * 2f + PLAYER_VY_70_val * TIME_CORR_72_val);
            var PARTICLE_74 = _world.GetSynonymObject(2704244193);
            var PARTICLE_76 = _world.GetSynonymObject(2704244193);
            var temp_77 = PARTICLE_76.GetFloat(165);
            var PLAYER_SIZE_78 = _world.GetObject(ObjectType.Skill, 422);
            var PLAYER_SIZE_78_val = PLAYER_SIZE_78.GetFloat(PropertyName.VAL);
            var PLAYER_TILT_81 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_81_val = PLAYER_TILT_81.GetFloat(PropertyName.VAL);
            var PLAYER_HGT_88 = _world.GetObject(ObjectType.Skill, 479);
            var PLAYER_HGT_88_val = PLAYER_HGT_88.GetFloat(PropertyName.VAL);
            var FLOOR_HGT_90 = _world.GetObject(ObjectType.Skill, 567);
            var FLOOR_HGT_90_val = FLOOR_HGT_90.GetFloat(PropertyName.VAL);
            PARTICLE_74.SetFloat(165, PLAYER_SIZE_78_val - (PLAYER_TILT_81_val * 1.3f) - 0.3f + PLAYER_HGT_88_val + FLOOR_HGT_90_val);
            var PRTCTEX_91 = _world.AcknexObject.GetAcknexObject(3612333943);
            var PARTICLE_93 = _world.GetSynonymObject(2704244193);
            PARTICLE_93.SetAcknexObject(164, PRTCTEX_91);
            var IMPLODEPARTICLE_94 = _world.AcknexObject.GetAcknexObject(372812267);
            var PARTICLE_96 = _world.GetSynonymObject(2704244193);
            PARTICLE_96.SetAcknexObject(191, IMPLODEPARTICLE_94);
            var LOCATEPARTICLE_97 = _world.AcknexObject.GetAcknexObject(2894381625);
            var PARTICLE_99 = _world.GetSynonymObject(2704244193);
            PARTICLE_99.SetAcknexObject(190, LOCATEPARTICLE_97);
            var PARTICLE_102 = _world.GetSynonymObject(2704244193);
            PARTICLE_102.SetAcknexObject(189, null);
            var PLAYER_ANGLE_103 = _world.GetObject(ObjectType.Skill, 462);
            var PLAYER_ANGLE_103_val = PLAYER_ANGLE_103.GetFloat(PropertyName.VAL);
            var PARTICLE_105 = _world.GetSynonymObject(2704244193);
            PARTICLE_105.SetFloat(194, PLAYER_ANGLE_103_val);
            var BULLET_106 = _world.AcknexObject.GetAcknexObject(2818612821);
            var PARTICLE_108 = _world.GetSynonymObject(2704244193);
            PARTICLE_108.SetAcknexObject(199, BULLET_106);
            var PARTICLE_111 = _world.GetSynonymObject(2704244193);
            PARTICLE_111.SetFloat(204, 0f);
            var SHOOT_SECTOR_113 = _world.GetObject(ObjectType.Skill, 440);
            SHOOT_SECTOR_113.SetFloat(231, 6.283f);
            var SHOOT_RANGE_115 = _world.GetObject(ObjectType.Skill, 439);
            SHOOT_RANGE_115.SetFloat(231, 200f);
            var SHOOT_FAC_117 = _world.GetObject(ObjectType.Skill, 441);
            SHOOT_FAC_117.SetFloat(231, 0f);
            var SHOOT_X_119 = _world.GetObject(ObjectType.Skill, 442);
            SHOOT_X_119.SetFloat(231, 0f);
            var SHOOT_Y_121 = _world.GetObject(ObjectType.Skill, 443);
            SHOOT_Y_121.SetFloat(231, 0f);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_123 = _world.GetObject(ObjectType.Skill, 444);
            var HIT_DIST_123_val = HIT_DIST_123.GetFloat(PropertyName.VAL);
            if (HIT_DIST_123_val == 0f)
            {
                goto HITWALL;
            }
            var HIT_124 = _world.GetSynonymObject(704);
            var PARTICLE_126 = _world.GetSynonymObject(2704244193);
            PARTICLE_126.SetAcknexObject(199, HIT_124);
            var HIT_129 = _world.GetSynonymObject(704);
            var temp_130 = HIT_129.GetFloat(202);
            if (temp_130 != 0f)
            {
                var PARTICLE_132 = _world.GetSynonymObject(2704244193);
                var PARTICLE_134 = _world.GetSynonymObject(2704244193);
                var temp_135 = PARTICLE_134.GetFloat(169);
                var HIT_138 = _world.GetSynonymObject(704);
                var temp_139 = HIT_138.GetFloat(200);
                var FLOOR_HGT_141 = _world.GetObject(ObjectType.Skill, 567);
                var FLOOR_HGT_141_val = FLOOR_HGT_141.GetFloat(PropertyName.VAL);
                var HIT_145 = _world.GetSynonymObject(704);
                var temp_146 = HIT_145.GetFloat(202);
                PARTICLE_132.SetFloat(169, (temp_139 - FLOOR_HGT_141_val) / temp_146);
            }
            var PARTICLE_149 = _world.GetSynonymObject(2704244193);
            var temp_150 = PARTICLE_149.GetFloat(169);
            if (temp_150 < 0f)
            {
                var PARTICLE_152 = _world.GetSynonymObject(2704244193);
                var PARTICLE_154 = _world.GetSynonymObject(2704244193);
                var temp_155 = PARTICLE_154.GetFloat(169);
                var PARTICLE_158 = _world.GetSynonymObject(2704244193);
                var temp_159 = PARTICLE_158.GetFloat(169);
                PARTICLE_152.SetFloat(169, -temp_159);
            }
            goto CONTHIT;
            HITWALL:
            var BULLET_160 = _world.AcknexObject.GetAcknexObject(2818612821);
            var PARTICLE_162 = _world.GetSynonymObject(2704244193);
            PARTICLE_162.SetAcknexObject(199, BULLET_160);
            var PARTICLE_164 = _world.GetSynonymObject(2704244193);
            var PARTICLE_166 = _world.GetSynonymObject(2704244193);
            var temp_167 = PARTICLE_166.GetFloat(169);
            var PLAYER_TILT_169 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_169_val = PLAYER_TILT_169.GetFloat(PropertyName.VAL);
            PARTICLE_164.SetFloat(169, -PLAYER_TILT_169_val / 1.4f);
            CONTHIT:
            var PLAYER_LIGHT_173 = _world.GetObject(ObjectType.Skill, 418);
            var PLAYER_LIGHT_173_val = PLAYER_LIGHT_173.GetFloat(PropertyName.VAL);
            var PLAYER_LIGHT_174 = _world.GetObject(ObjectType.Skill, 418);
            PLAYER_LIGHT_174.SetFloat(231, PLAYER_LIGHT_173_val + -0.9f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            //Unknown keyword: LOCATE
            var QGUN01OVL_176 = _world.AcknexObject.GetAcknexObject(2621946266);
            _world.AcknexObject.SetAcknexObject(158, QGUN01OVL_176);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var QGUN00OVL_180 = _world.AcknexObject.GetAcknexObject(2621910329);
            _world.AcknexObject.SetAcknexObject(158, QGUN00OVL_180);
            goto CONT;
            NOAMMO:
            var WRN02STR_183 = _world.AcknexObject.GetAcknexObject(665709727);
            var PANELTEXT_185 = _world.AcknexObject.GetAcknexObject(1886906754);
            var PANELTEXT_185_array = PANELTEXT_185.GetObject<List<IAcknexObject>>(293);
            var PANELTEXT_185_index = PANELTEXT_185.GetInteger(PropertyName.INDEX);
            PANELTEXT_185_array[PANELTEXT_185_index - 1] = WRN02STR_183;
            PANELTEXT_185.IsDirty = true;
            var PANELTEXT_186 = _world.AcknexObject.GetAcknexObject(1886906754);
            _world.AcknexObject.SetAcknexObject(127, PANELTEXT_186);
            var MSGSECCOUNT_190 = _world.GetObject(ObjectType.Skill, 2688150552);
            MSGSECCOUNT_190.SetFloat(231, 0f);
            var GUN_ON_192 = _world.GetObject(ObjectType.Skill, 3014382675);
            GUN_ON_192.SetFloat(231, 0f);
            var QGUN03SND_193 = _world.AcknexObject.GetAcknexObject(2622022224);
            _world.PlaySound(QGUN03SND_193, 0.5f, null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var QGUN00OVL_196 = _world.AcknexObject.GetAcknexObject(2621910329);
            _world.AcknexObject.SetAcknexObject(158, QGUN00OVL_196);
            CONT:
            var WEAPONSEL_200 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_200_val = WEAPONSEL_200.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_200_val != 5f)
            {
                goto FINISH;
            }
            var BEAM_201 = _world.AcknexObject.GetAcknexObject(2088923810);
            _world.AcknexObject.SetAcknexObject(78, BEAM_201);
            var BEAM_203 = _world.AcknexObject.GetAcknexObject(2088923810);
            _world.AcknexObject.SetAcknexObject(97, BEAM_203);
            FINISH:
            var GUNFIRING_206 = _world.GetObject(ObjectType.Skill, 3478808598);
            GUNFIRING_206.SetFloat(231, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator RAISE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_GUN_1 = _world.GetSynonymObject(3254523708);
            var MY_GUN_3 = _world.GetSynonymObject(3254523708);
            var temp_4 = MY_GUN_3.GetFloat(195);
            var PLAYER_X_5 = _world.GetObject(ObjectType.Skill, 459);
            var PLAYER_X_5_val = PLAYER_X_5.GetFloat(PropertyName.VAL);
            var PLAYER_COS_7 = _world.GetObject(ObjectType.Skill, 464);
            var PLAYER_COS_7_val = PLAYER_COS_7.GetFloat(PropertyName.VAL);
            var PLAYER_VX_11 = _world.GetObject(ObjectType.Skill, 431);
            var PLAYER_VX_11_val = PLAYER_VX_11.GetFloat(PropertyName.VAL);
            var TIME_CORR_13 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_13_val = TIME_CORR_13.GetFloat(PropertyName.VAL);
            MY_GUN_1.SetFloat(195, PLAYER_X_5_val + PLAYER_COS_7_val * 1.16f + PLAYER_VX_11_val * TIME_CORR_13_val);
            var MY_GUN_15 = _world.GetSynonymObject(3254523708);
            var MY_GUN_17 = _world.GetSynonymObject(3254523708);
            var temp_18 = MY_GUN_17.GetFloat(196);
            var PLAYER_Y_19 = _world.GetObject(ObjectType.Skill, 460);
            var PLAYER_Y_19_val = PLAYER_Y_19.GetFloat(PropertyName.VAL);
            var PLAYER_SIN_21 = _world.GetObject(ObjectType.Skill, 463);
            var PLAYER_SIN_21_val = PLAYER_SIN_21.GetFloat(PropertyName.VAL);
            var PLAYER_VY_25 = _world.GetObject(ObjectType.Skill, 432);
            var PLAYER_VY_25_val = PLAYER_VY_25.GetFloat(PropertyName.VAL);
            var TIME_CORR_27 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_27_val = TIME_CORR_27.GetFloat(PropertyName.VAL);
            MY_GUN_15.SetFloat(196, PLAYER_Y_19_val + PLAYER_SIN_21_val * 1.16f + PLAYER_VY_25_val * TIME_CORR_27_val);
            var MY_GUN_29 = _world.GetSynonymObject(3254523708);
            var MY_GUN_31 = _world.GetSynonymObject(3254523708);
            var temp_32 = MY_GUN_31.GetFloat(165);
            var PLAYER_Z_33 = _world.GetObject(ObjectType.Skill, 461);
            var PLAYER_Z_33_val = PLAYER_Z_33.GetFloat(PropertyName.VAL);
            var PLAYER_TILT_36 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_36_val = PLAYER_TILT_36.GetFloat(PropertyName.VAL);
            MY_GUN_29.SetFloat(165, PLAYER_Z_33_val - (PLAYER_TILT_36_val - 1f) * 0.844f - 1.9f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_46 = _world.GetSynonymObject(3254523708);
            var MY_GUN_48 = _world.GetSynonymObject(3254523708);
            var temp_49 = MY_GUN_48.GetFloat(195);
            var PLAYER_X_50 = _world.GetObject(ObjectType.Skill, 459);
            var PLAYER_X_50_val = PLAYER_X_50.GetFloat(PropertyName.VAL);
            var PLAYER_COS_52 = _world.GetObject(ObjectType.Skill, 464);
            var PLAYER_COS_52_val = PLAYER_COS_52.GetFloat(PropertyName.VAL);
            var PLAYER_VX_56 = _world.GetObject(ObjectType.Skill, 431);
            var PLAYER_VX_56_val = PLAYER_VX_56.GetFloat(PropertyName.VAL);
            var TIME_CORR_58 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_58_val = TIME_CORR_58.GetFloat(PropertyName.VAL);
            MY_GUN_46.SetFloat(195, PLAYER_X_50_val + PLAYER_COS_52_val * 1.16f + PLAYER_VX_56_val * TIME_CORR_58_val);
            var MY_GUN_60 = _world.GetSynonymObject(3254523708);
            var MY_GUN_62 = _world.GetSynonymObject(3254523708);
            var temp_63 = MY_GUN_62.GetFloat(196);
            var PLAYER_Y_64 = _world.GetObject(ObjectType.Skill, 460);
            var PLAYER_Y_64_val = PLAYER_Y_64.GetFloat(PropertyName.VAL);
            var PLAYER_SIN_66 = _world.GetObject(ObjectType.Skill, 463);
            var PLAYER_SIN_66_val = PLAYER_SIN_66.GetFloat(PropertyName.VAL);
            var PLAYER_VY_70 = _world.GetObject(ObjectType.Skill, 432);
            var PLAYER_VY_70_val = PLAYER_VY_70.GetFloat(PropertyName.VAL);
            var TIME_CORR_72 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_72_val = TIME_CORR_72.GetFloat(PropertyName.VAL);
            MY_GUN_60.SetFloat(196, PLAYER_Y_64_val + PLAYER_SIN_66_val * 1.16f + PLAYER_VY_70_val * TIME_CORR_72_val);
            var MY_GUN_74 = _world.GetSynonymObject(3254523708);
            var MY_GUN_76 = _world.GetSynonymObject(3254523708);
            var temp_77 = MY_GUN_76.GetFloat(165);
            var PLAYER_Z_78 = _world.GetObject(ObjectType.Skill, 461);
            var PLAYER_Z_78_val = PLAYER_Z_78.GetFloat(PropertyName.VAL);
            var PLAYER_TILT_81 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_81_val = PLAYER_TILT_81.GetFloat(PropertyName.VAL);
            MY_GUN_74.SetFloat(165, PLAYER_Z_78_val - (PLAYER_TILT_81_val - 1f) * 0.844f - 1.6f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_91 = _world.GetSynonymObject(3254523708);
            var MY_GUN_93 = _world.GetSynonymObject(3254523708);
            var temp_94 = MY_GUN_93.GetFloat(195);
            var PLAYER_X_95 = _world.GetObject(ObjectType.Skill, 459);
            var PLAYER_X_95_val = PLAYER_X_95.GetFloat(PropertyName.VAL);
            var PLAYER_COS_97 = _world.GetObject(ObjectType.Skill, 464);
            var PLAYER_COS_97_val = PLAYER_COS_97.GetFloat(PropertyName.VAL);
            var PLAYER_VX_101 = _world.GetObject(ObjectType.Skill, 431);
            var PLAYER_VX_101_val = PLAYER_VX_101.GetFloat(PropertyName.VAL);
            var TIME_CORR_103 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_103_val = TIME_CORR_103.GetFloat(PropertyName.VAL);
            MY_GUN_91.SetFloat(195, PLAYER_X_95_val + PLAYER_COS_97_val * 1.16f + PLAYER_VX_101_val * TIME_CORR_103_val);
            var MY_GUN_105 = _world.GetSynonymObject(3254523708);
            var MY_GUN_107 = _world.GetSynonymObject(3254523708);
            var temp_108 = MY_GUN_107.GetFloat(196);
            var PLAYER_Y_109 = _world.GetObject(ObjectType.Skill, 460);
            var PLAYER_Y_109_val = PLAYER_Y_109.GetFloat(PropertyName.VAL);
            var PLAYER_SIN_111 = _world.GetObject(ObjectType.Skill, 463);
            var PLAYER_SIN_111_val = PLAYER_SIN_111.GetFloat(PropertyName.VAL);
            var PLAYER_VY_115 = _world.GetObject(ObjectType.Skill, 432);
            var PLAYER_VY_115_val = PLAYER_VY_115.GetFloat(PropertyName.VAL);
            var TIME_CORR_117 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_117_val = TIME_CORR_117.GetFloat(PropertyName.VAL);
            MY_GUN_105.SetFloat(196, PLAYER_Y_109_val + PLAYER_SIN_111_val * 1.16f + PLAYER_VY_115_val * TIME_CORR_117_val);
            var MY_GUN_119 = _world.GetSynonymObject(3254523708);
            var MY_GUN_121 = _world.GetSynonymObject(3254523708);
            var temp_122 = MY_GUN_121.GetFloat(165);
            var PLAYER_Z_123 = _world.GetObject(ObjectType.Skill, 461);
            var PLAYER_Z_123_val = PLAYER_Z_123.GetFloat(PropertyName.VAL);
            var PLAYER_TILT_126 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_126_val = PLAYER_TILT_126.GetFloat(PropertyName.VAL);
            MY_GUN_119.SetFloat(165, PLAYER_Z_123_val - (PLAYER_TILT_126_val - 1f) * 0.844f - 1.45f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_136 = _world.GetSynonymObject(3254523708);
            var MY_GUN_138 = _world.GetSynonymObject(3254523708);
            var temp_139 = MY_GUN_138.GetFloat(195);
            var PLAYER_X_140 = _world.GetObject(ObjectType.Skill, 459);
            var PLAYER_X_140_val = PLAYER_X_140.GetFloat(PropertyName.VAL);
            var PLAYER_COS_142 = _world.GetObject(ObjectType.Skill, 464);
            var PLAYER_COS_142_val = PLAYER_COS_142.GetFloat(PropertyName.VAL);
            var PLAYER_VX_146 = _world.GetObject(ObjectType.Skill, 431);
            var PLAYER_VX_146_val = PLAYER_VX_146.GetFloat(PropertyName.VAL);
            var TIME_CORR_148 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_148_val = TIME_CORR_148.GetFloat(PropertyName.VAL);
            MY_GUN_136.SetFloat(195, PLAYER_X_140_val + PLAYER_COS_142_val * 1.16f + PLAYER_VX_146_val * TIME_CORR_148_val);
            var MY_GUN_150 = _world.GetSynonymObject(3254523708);
            var MY_GUN_152 = _world.GetSynonymObject(3254523708);
            var temp_153 = MY_GUN_152.GetFloat(196);
            var PLAYER_Y_154 = _world.GetObject(ObjectType.Skill, 460);
            var PLAYER_Y_154_val = PLAYER_Y_154.GetFloat(PropertyName.VAL);
            var PLAYER_SIN_156 = _world.GetObject(ObjectType.Skill, 463);
            var PLAYER_SIN_156_val = PLAYER_SIN_156.GetFloat(PropertyName.VAL);
            var PLAYER_VY_160 = _world.GetObject(ObjectType.Skill, 432);
            var PLAYER_VY_160_val = PLAYER_VY_160.GetFloat(PropertyName.VAL);
            var TIME_CORR_162 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_162_val = TIME_CORR_162.GetFloat(PropertyName.VAL);
            MY_GUN_150.SetFloat(196, PLAYER_Y_154_val + PLAYER_SIN_156_val * 1.16f + PLAYER_VY_160_val * TIME_CORR_162_val);
            var MY_GUN_164 = _world.GetSynonymObject(3254523708);
            var MY_GUN_166 = _world.GetSynonymObject(3254523708);
            var temp_167 = MY_GUN_166.GetFloat(165);
            var PLAYER_Z_168 = _world.GetObject(ObjectType.Skill, 461);
            var PLAYER_Z_168_val = PLAYER_Z_168.GetFloat(PropertyName.VAL);
            var PLAYER_TILT_171 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_171_val = PLAYER_TILT_171.GetFloat(PropertyName.VAL);
            MY_GUN_164.SetFloat(165, PLAYER_Z_168_val - (PLAYER_TILT_171_val - 1f) * 0.844f - 1.35f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_182 = _world.GetSynonymObject(3254523708);
            MY_GUN_182.SetFloat(165, -20f);
            var MY_GUN_185 = _world.GetSynonymObject(3254523708);
            MY_GUN_185.SetFloat(204, 1f);
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
            var MY_GUN_1 = _world.GetSynonymObject(3254523708);
            var MY_GUN_3 = _world.GetSynonymObject(3254523708);
            var temp_4 = MY_GUN_3.GetFloat(195);
            var PLAYER_X_5 = _world.GetObject(ObjectType.Skill, 459);
            var PLAYER_X_5_val = PLAYER_X_5.GetFloat(PropertyName.VAL);
            var PLAYER_COS_7 = _world.GetObject(ObjectType.Skill, 464);
            var PLAYER_COS_7_val = PLAYER_COS_7.GetFloat(PropertyName.VAL);
            var PLAYER_VX_11 = _world.GetObject(ObjectType.Skill, 431);
            var PLAYER_VX_11_val = PLAYER_VX_11.GetFloat(PropertyName.VAL);
            var TIME_CORR_13 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_13_val = TIME_CORR_13.GetFloat(PropertyName.VAL);
            MY_GUN_1.SetFloat(195, PLAYER_X_5_val + PLAYER_COS_7_val * 1.16f + PLAYER_VX_11_val * TIME_CORR_13_val);
            var MY_GUN_15 = _world.GetSynonymObject(3254523708);
            var MY_GUN_17 = _world.GetSynonymObject(3254523708);
            var temp_18 = MY_GUN_17.GetFloat(196);
            var PLAYER_Y_19 = _world.GetObject(ObjectType.Skill, 460);
            var PLAYER_Y_19_val = PLAYER_Y_19.GetFloat(PropertyName.VAL);
            var PLAYER_SIN_21 = _world.GetObject(ObjectType.Skill, 463);
            var PLAYER_SIN_21_val = PLAYER_SIN_21.GetFloat(PropertyName.VAL);
            var PLAYER_VY_25 = _world.GetObject(ObjectType.Skill, 432);
            var PLAYER_VY_25_val = PLAYER_VY_25.GetFloat(PropertyName.VAL);
            var TIME_CORR_27 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_27_val = TIME_CORR_27.GetFloat(PropertyName.VAL);
            MY_GUN_15.SetFloat(196, PLAYER_Y_19_val + PLAYER_SIN_21_val * 1.16f + PLAYER_VY_25_val * TIME_CORR_27_val);
            var MY_GUN_29 = _world.GetSynonymObject(3254523708);
            var MY_GUN_31 = _world.GetSynonymObject(3254523708);
            var temp_32 = MY_GUN_31.GetFloat(165);
            var PLAYER_Z_33 = _world.GetObject(ObjectType.Skill, 461);
            var PLAYER_Z_33_val = PLAYER_Z_33.GetFloat(PropertyName.VAL);
            var PLAYER_TILT_36 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_36_val = PLAYER_TILT_36.GetFloat(PropertyName.VAL);
            MY_GUN_29.SetFloat(165, PLAYER_Z_33_val - (PLAYER_TILT_36_val - 1f) * 0.844f - 1.35f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_46 = _world.GetSynonymObject(3254523708);
            var MY_GUN_48 = _world.GetSynonymObject(3254523708);
            var temp_49 = MY_GUN_48.GetFloat(195);
            var PLAYER_X_50 = _world.GetObject(ObjectType.Skill, 459);
            var PLAYER_X_50_val = PLAYER_X_50.GetFloat(PropertyName.VAL);
            var PLAYER_COS_52 = _world.GetObject(ObjectType.Skill, 464);
            var PLAYER_COS_52_val = PLAYER_COS_52.GetFloat(PropertyName.VAL);
            var PLAYER_VX_56 = _world.GetObject(ObjectType.Skill, 431);
            var PLAYER_VX_56_val = PLAYER_VX_56.GetFloat(PropertyName.VAL);
            var TIME_CORR_58 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_58_val = TIME_CORR_58.GetFloat(PropertyName.VAL);
            MY_GUN_46.SetFloat(195, PLAYER_X_50_val + PLAYER_COS_52_val * 1.16f + PLAYER_VX_56_val * TIME_CORR_58_val);
            var MY_GUN_60 = _world.GetSynonymObject(3254523708);
            var MY_GUN_62 = _world.GetSynonymObject(3254523708);
            var temp_63 = MY_GUN_62.GetFloat(196);
            var PLAYER_Y_64 = _world.GetObject(ObjectType.Skill, 460);
            var PLAYER_Y_64_val = PLAYER_Y_64.GetFloat(PropertyName.VAL);
            var PLAYER_SIN_66 = _world.GetObject(ObjectType.Skill, 463);
            var PLAYER_SIN_66_val = PLAYER_SIN_66.GetFloat(PropertyName.VAL);
            var PLAYER_VY_70 = _world.GetObject(ObjectType.Skill, 432);
            var PLAYER_VY_70_val = PLAYER_VY_70.GetFloat(PropertyName.VAL);
            var TIME_CORR_72 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_72_val = TIME_CORR_72.GetFloat(PropertyName.VAL);
            MY_GUN_60.SetFloat(196, PLAYER_Y_64_val + PLAYER_SIN_66_val * 1.16f + PLAYER_VY_70_val * TIME_CORR_72_val);
            var MY_GUN_74 = _world.GetSynonymObject(3254523708);
            var MY_GUN_76 = _world.GetSynonymObject(3254523708);
            var temp_77 = MY_GUN_76.GetFloat(165);
            var PLAYER_Z_78 = _world.GetObject(ObjectType.Skill, 461);
            var PLAYER_Z_78_val = PLAYER_Z_78.GetFloat(PropertyName.VAL);
            var PLAYER_TILT_81 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_81_val = PLAYER_TILT_81.GetFloat(PropertyName.VAL);
            MY_GUN_74.SetFloat(165, PLAYER_Z_78_val - (PLAYER_TILT_81_val - 1f) * 0.844f - 1.45f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_91 = _world.GetSynonymObject(3254523708);
            var MY_GUN_93 = _world.GetSynonymObject(3254523708);
            var temp_94 = MY_GUN_93.GetFloat(195);
            var PLAYER_X_95 = _world.GetObject(ObjectType.Skill, 459);
            var PLAYER_X_95_val = PLAYER_X_95.GetFloat(PropertyName.VAL);
            var PLAYER_COS_97 = _world.GetObject(ObjectType.Skill, 464);
            var PLAYER_COS_97_val = PLAYER_COS_97.GetFloat(PropertyName.VAL);
            var PLAYER_VX_101 = _world.GetObject(ObjectType.Skill, 431);
            var PLAYER_VX_101_val = PLAYER_VX_101.GetFloat(PropertyName.VAL);
            var TIME_CORR_103 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_103_val = TIME_CORR_103.GetFloat(PropertyName.VAL);
            MY_GUN_91.SetFloat(195, PLAYER_X_95_val + PLAYER_COS_97_val * 1.16f + PLAYER_VX_101_val * TIME_CORR_103_val);
            var MY_GUN_105 = _world.GetSynonymObject(3254523708);
            var MY_GUN_107 = _world.GetSynonymObject(3254523708);
            var temp_108 = MY_GUN_107.GetFloat(196);
            var PLAYER_Y_109 = _world.GetObject(ObjectType.Skill, 460);
            var PLAYER_Y_109_val = PLAYER_Y_109.GetFloat(PropertyName.VAL);
            var PLAYER_SIN_111 = _world.GetObject(ObjectType.Skill, 463);
            var PLAYER_SIN_111_val = PLAYER_SIN_111.GetFloat(PropertyName.VAL);
            var PLAYER_VY_115 = _world.GetObject(ObjectType.Skill, 432);
            var PLAYER_VY_115_val = PLAYER_VY_115.GetFloat(PropertyName.VAL);
            var TIME_CORR_117 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_117_val = TIME_CORR_117.GetFloat(PropertyName.VAL);
            MY_GUN_105.SetFloat(196, PLAYER_Y_109_val + PLAYER_SIN_111_val * 1.16f + PLAYER_VY_115_val * TIME_CORR_117_val);
            var MY_GUN_119 = _world.GetSynonymObject(3254523708);
            var MY_GUN_121 = _world.GetSynonymObject(3254523708);
            var temp_122 = MY_GUN_121.GetFloat(165);
            var PLAYER_Z_123 = _world.GetObject(ObjectType.Skill, 461);
            var PLAYER_Z_123_val = PLAYER_Z_123.GetFloat(PropertyName.VAL);
            var PLAYER_TILT_126 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_126_val = PLAYER_TILT_126.GetFloat(PropertyName.VAL);
            MY_GUN_119.SetFloat(165, PLAYER_Z_123_val - (PLAYER_TILT_126_val - 1f) * 0.844f - 1.6f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_136 = _world.GetSynonymObject(3254523708);
            var MY_GUN_138 = _world.GetSynonymObject(3254523708);
            var temp_139 = MY_GUN_138.GetFloat(195);
            var PLAYER_X_140 = _world.GetObject(ObjectType.Skill, 459);
            var PLAYER_X_140_val = PLAYER_X_140.GetFloat(PropertyName.VAL);
            var PLAYER_COS_142 = _world.GetObject(ObjectType.Skill, 464);
            var PLAYER_COS_142_val = PLAYER_COS_142.GetFloat(PropertyName.VAL);
            var PLAYER_VX_146 = _world.GetObject(ObjectType.Skill, 431);
            var PLAYER_VX_146_val = PLAYER_VX_146.GetFloat(PropertyName.VAL);
            var TIME_CORR_148 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_148_val = TIME_CORR_148.GetFloat(PropertyName.VAL);
            MY_GUN_136.SetFloat(195, PLAYER_X_140_val + PLAYER_COS_142_val * 1.16f + PLAYER_VX_146_val * TIME_CORR_148_val);
            var MY_GUN_150 = _world.GetSynonymObject(3254523708);
            var MY_GUN_152 = _world.GetSynonymObject(3254523708);
            var temp_153 = MY_GUN_152.GetFloat(196);
            var PLAYER_Y_154 = _world.GetObject(ObjectType.Skill, 460);
            var PLAYER_Y_154_val = PLAYER_Y_154.GetFloat(PropertyName.VAL);
            var PLAYER_SIN_156 = _world.GetObject(ObjectType.Skill, 463);
            var PLAYER_SIN_156_val = PLAYER_SIN_156.GetFloat(PropertyName.VAL);
            var PLAYER_VY_160 = _world.GetObject(ObjectType.Skill, 432);
            var PLAYER_VY_160_val = PLAYER_VY_160.GetFloat(PropertyName.VAL);
            var TIME_CORR_162 = _world.GetObject(ObjectType.Skill, 569);
            var TIME_CORR_162_val = TIME_CORR_162.GetFloat(PropertyName.VAL);
            MY_GUN_150.SetFloat(196, PLAYER_Y_154_val + PLAYER_SIN_156_val * 1.16f + PLAYER_VY_160_val * TIME_CORR_162_val);
            var MY_GUN_164 = _world.GetSynonymObject(3254523708);
            var MY_GUN_166 = _world.GetSynonymObject(3254523708);
            var temp_167 = MY_GUN_166.GetFloat(165);
            var PLAYER_Z_168 = _world.GetObject(ObjectType.Skill, 461);
            var PLAYER_Z_168_val = PLAYER_Z_168.GetFloat(PropertyName.VAL);
            var PLAYER_TILT_171 = _world.GetObject(ObjectType.Skill, 435);
            var PLAYER_TILT_171_val = PLAYER_TILT_171.GetFloat(PropertyName.VAL);
            MY_GUN_164.SetFloat(165, PLAYER_Z_168_val - (PLAYER_TILT_171_val - 1f) * 0.844f - 1.9f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_GUN_182 = _world.GetSynonymObject(3254523708);
            MY_GUN_182.SetFloat(165, -20f);
            var MY_GUN_185 = _world.GetSynonymObject(3254523708);
            MY_GUN_185.SetFloat(204, 1f);
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
            var TARGETOVL_0 = _world.AcknexObject.GetAcknexObject(2055106693);
            _world.AcknexObject.SetAcknexObject(161, TARGETOVL_0);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator TARGETOFF(IAcknexObject MY, IAcknexObject THERE)
        {
            _world.AcknexObject.SetAcknexObject(161, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SELECTNONE(IAcknexObject MY, IAcknexObject THERE)
        {
            var WEAPONSEL_1 = _world.GetObject(ObjectType.Skill, 2181903739);
            WEAPONSEL_1.SetFloat(231, 1f);
            _world.AcknexObject.SetAcknexObject(78, null);
            _world.AcknexObject.SetAcknexObject(97, null);
            _world.AcknexObject.SetAcknexObject(104, null);
            _world.AcknexObject.SetAcknexObject(39, null);
            _world.AcknexObject.SetAcknexObject(92, null);
            _world.AcknexObject.SetAcknexObject(40, null);
            _world.AcknexObject.SetAcknexObject(41, null);
            _world.AcknexObject.SetAcknexObject(42, null);
            _world.AcknexObject.SetAcknexObject(43, null);
            _world.AcknexObject.SetAcknexObject(44, null);
            WAITFIRE:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GUNFIRING_24 = _world.GetObject(ObjectType.Skill, 3478808598);
            var GUNFIRING_24_val = GUNFIRING_24.GetFloat(PropertyName.VAL);
            if (GUNFIRING_24_val != 0f)
            {
                goto WAITFIRE;
            }
            var MY_GUN_26 = _world.GetSynonymObject(3254523708);
            if (MY_GUN_26 == null)
            {
                goto NOGUN;
            }
            var MY_GUN_29 = _world.GetSynonymObject(3254523708);
            var temp_30 = MY_GUN_29.GetFloat(204);
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
            var MAP_MODE_32 = _world.GetObject(ObjectType.Skill, 380);
            MAP_MODE_32.SetFloat(231, 0f);
            var PDATEXT_35 = _world.AcknexObject.GetAcknexObject(3042501159);
            PDATEXT_35.SetFloat(205, 0f);
            _world.AcknexObject.SetAcknexObject(158, null);
            var MY_GUN_40 = _world.GetSynonymObject(3254523708);
            if (MY_GUN_40 == null)
            {
                goto CONT;
            }
            var MY_GUN_43 = _world.GetSynonymObject(3254523708);
            MY_GUN_43.SetFloat(204, 0f);
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
            var MY_GUN_47 = _world.GetSynonymObject(3254523708);
            var temp_48 = MY_GUN_47.GetFloat(204);
            if (temp_48 < 1f)
            {
                goto WAITING;
            }
            _world.SetSynonymObject(3254523708, null);
            var RENDER_MODE_52 = _world.GetObject(ObjectType.Skill, 361);
            RENDER_MODE_52.SetFloat(231, 1f);
            CONT:
            var SELECTTRICORDER_53 = _world.AcknexObject.GetAcknexObject(4185607035);
            _world.AcknexObject.SetAcknexObject(104, SELECTTRICORDER_53);
            var SELECTNONE_55 = _world.AcknexObject.GetAcknexObject(1879623005);
            _world.AcknexObject.SetAcknexObject(39, SELECTNONE_55);
            var SELECTNONE_57 = _world.AcknexObject.GetAcknexObject(1879623005);
            _world.AcknexObject.SetAcknexObject(92, SELECTNONE_57);
            var SELECTMP5_59 = _world.AcknexObject.GetAcknexObject(3831323359);
            _world.AcknexObject.SetAcknexObject(40, SELECTMP5_59);
            var SELECTMP5BURST_61 = _world.AcknexObject.GetAcknexObject(120038031);
            _world.AcknexObject.SetAcknexObject(41, SELECTMP5BURST_61);
            var SELECTGRANADE_63 = _world.AcknexObject.GetAcknexObject(677375039);
            _world.AcknexObject.SetAcknexObject(42, SELECTGRANADE_63);
            var SELECTSTINGER_65 = _world.AcknexObject.GetAcknexObject(3377853513);
            _world.AcknexObject.SetAcknexObject(43, SELECTSTINGER_65);
            var SELECTQUANTUM_67 = _world.AcknexObject.GetAcknexObject(824580280);
            _world.AcknexObject.SetAcknexObject(44, SELECTQUANTUM_67);
            var GUN_ON_70 = _world.GetObject(ObjectType.Skill, 3014382675);
            GUN_ON_70.SetFloat(231, 0f);
            var PLAYER_RESULT_72 = _world.GetObject(ObjectType.Skill, 1861765784);
            PLAYER_RESULT_72.SetFloat(231, -1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SELECTTRICORDER(IAcknexObject MY, IAcknexObject THERE)
        {
            var PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill, 1469755439);
            var PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat(PropertyName.VAL);
            if (PLAYER_HEALTH_1_val < 0.1f)
            {
                yield break;
            }
            var MAP_MODE_3 = _world.GetObject(ObjectType.Skill, 380);
            var MAP_MODE_3_val = MAP_MODE_3.GetFloat(PropertyName.VAL);
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
            var HAS_PDA_5 = _world.GetObject(ObjectType.Skill, 1205039005);
            var HAS_PDA_5_val = HAS_PDA_5.GetFloat(PropertyName.VAL);
            if (HAS_PDA_5_val != 0f)
            {
                goto HASGOT;
            }
            var WRN04STR_6 = _world.AcknexObject.GetAcknexObject(665781601);
            _world.SetSynonymObject(361798934, WRN04STR_6);
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
            var WEAPONSEL_9 = _world.GetObject(ObjectType.Skill, 2181903739);
            WEAPONSEL_9.SetFloat(231, 1f);
            _world.AcknexObject.SetAcknexObject(78, null);
            _world.AcknexObject.SetAcknexObject(97, null);
            _world.AcknexObject.SetAcknexObject(104, null);
            _world.AcknexObject.SetAcknexObject(39, null);
            _world.AcknexObject.SetAcknexObject(92, null);
            _world.AcknexObject.SetAcknexObject(40, null);
            _world.AcknexObject.SetAcknexObject(41, null);
            _world.AcknexObject.SetAcknexObject(42, null);
            _world.AcknexObject.SetAcknexObject(43, null);
            _world.AcknexObject.SetAcknexObject(44, null);
            WAITFIRE:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GUNFIRING_32 = _world.GetObject(ObjectType.Skill, 3478808598);
            var GUNFIRING_32_val = GUNFIRING_32.GetFloat(PropertyName.VAL);
            if (GUNFIRING_32_val != 0f)
            {
                goto WAITFIRE;
            }
            var MY_GUN_34 = _world.GetSynonymObject(3254523708);
            if (MY_GUN_34 == null)
            {
                goto NOGUN;
            }
            var MY_GUN_37 = _world.GetSynonymObject(3254523708);
            var temp_38 = MY_GUN_37.GetFloat(204);
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
            var MAP_MODE_40 = _world.GetObject(ObjectType.Skill, 380);
            MAP_MODE_40.SetFloat(231, 0f);
            _world.AcknexObject.SetAcknexObject(158, null);
            _world.AcknexObject.SetAcknexObject(78, null);
            _world.AcknexObject.SetAcknexObject(97, null);
            var MY_GUN_49 = _world.GetSynonymObject(3254523708);
            if (MY_GUN_49 == null)
            {
                goto CONT;
            }
            var MY_GUN_52 = _world.GetSynonymObject(3254523708);
            MY_GUN_52.SetFloat(204, 0f);
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
            var MY_GUN_56 = _world.GetSynonymObject(3254523708);
            var temp_57 = MY_GUN_56.GetFloat(204);
            if (temp_57 < 1f)
            {
                goto WAITING;
            }
            CONT:
            var TRICACT_58 = _world.AcknexObject.GetAcknexObject(175205335);
            _world.SetSynonymObject(3254523708, TRICACT_58);
            var MY_GUN_62 = _world.GetSynonymObject(3254523708);
            MY_GUN_62.SetFloat(204, 0f);
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
            var MY_GUN_66 = _world.GetSynonymObject(3254523708);
            var temp_67 = MY_GUN_66.GetFloat(204);
            if (temp_67 < 1f)
            {
                goto WAITING1;
            }
            var TRIC01SND_68 = _world.AcknexObject.GetAcknexObject(1798154821);
            _world.PlaySound(TRIC01SND_68, 0.5f, null);
            var MAP_LAYER_71 = _world.GetObject(ObjectType.Skill, 381);
            MAP_LAYER_71.SetFloat(231, 14f);
            var MAP_EDGE_X1_73 = _world.GetObject(ObjectType.Skill, 375);
            MAP_EDGE_X1_73.SetFloat(231, 77f);
            var MAP_EDGE_X2_75 = _world.GetObject(ObjectType.Skill, 376);
            MAP_EDGE_X2_75.SetFloat(231, 237f);
            var MAP_EDGE_Y1_77 = _world.GetObject(ObjectType.Skill, 377);
            MAP_EDGE_Y1_77.SetFloat(231, 69f);
            var MAP_EDGE_Y2_79 = _world.GetObject(ObjectType.Skill, 378);
            MAP_EDGE_Y2_79.SetFloat(231, 251f);
            var RENDER_MODE_81 = _world.GetObject(ObjectType.Skill, 361);
            RENDER_MODE_81.SetFloat(231, 1f);
            var MAP_MODE_83 = _world.GetObject(ObjectType.Skill, 380);
            MAP_MODE_83.SetFloat(231, 0.5f);
            var TRIC01OVL_84 = _world.AcknexObject.GetAcknexObject(1798150737);
            _world.AcknexObject.SetAcknexObject(158, TRIC01OVL_84);
            var SELECTTRICORDER_87 = _world.AcknexObject.GetAcknexObject(4185607035);
            _world.AcknexObject.SetAcknexObject(104, SELECTTRICORDER_87);
            var SELECTNONE_89 = _world.AcknexObject.GetAcknexObject(1879623005);
            _world.AcknexObject.SetAcknexObject(39, SELECTNONE_89);
            var SELECTNONE_91 = _world.AcknexObject.GetAcknexObject(1879623005);
            _world.AcknexObject.SetAcknexObject(92, SELECTNONE_91);
            var SELECTMP5_93 = _world.AcknexObject.GetAcknexObject(3831323359);
            _world.AcknexObject.SetAcknexObject(40, SELECTMP5_93);
            var SELECTMP5BURST_95 = _world.AcknexObject.GetAcknexObject(120038031);
            _world.AcknexObject.SetAcknexObject(41, SELECTMP5BURST_95);
            var SELECTGRANADE_97 = _world.AcknexObject.GetAcknexObject(677375039);
            _world.AcknexObject.SetAcknexObject(42, SELECTGRANADE_97);
            var SELECTSTINGER_99 = _world.AcknexObject.GetAcknexObject(3377853513);
            _world.AcknexObject.SetAcknexObject(43, SELECTSTINGER_99);
            var SELECTQUANTUM_101 = _world.AcknexObject.GetAcknexObject(824580280);
            _world.AcknexObject.SetAcknexObject(44, SELECTQUANTUM_101);
            var GUN_ON_104 = _world.GetObject(ObjectType.Skill, 3014382675);
            GUN_ON_104.SetFloat(231, 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SELECTMP5(IAcknexObject MY, IAcknexObject THERE)
        {
            var PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill, 1469755439);
            var PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat(PropertyName.VAL);
            if (PLAYER_HEALTH_1_val < 0.1f)
            {
                yield break;
            }
            var WEAPONSEL_3 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_3_val = WEAPONSEL_3.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_3_val == 2f)
            {
                goto HASGOT;
            }
            var HAS_MP5_5 = _world.GetObject(ObjectType.Skill, 1205036122);
            var HAS_MP5_5_val = HAS_MP5_5.GetFloat(PropertyName.VAL);
            if (HAS_MP5_5_val != 0f)
            {
                goto HASGOT;
            }
            var WRN03STR_6 = _world.AcknexObject.GetAcknexObject(665745664);
            _world.SetSynonymObject(361798934, WRN03STR_6);
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
            var WEAPONSEL_9 = _world.GetObject(ObjectType.Skill, 2181903739);
            WEAPONSEL_9.SetFloat(231, 2f);
            _world.AcknexObject.SetAcknexObject(78, null);
            _world.AcknexObject.SetAcknexObject(97, null);
            _world.AcknexObject.SetAcknexObject(104, null);
            _world.AcknexObject.SetAcknexObject(39, null);
            _world.AcknexObject.SetAcknexObject(92, null);
            _world.AcknexObject.SetAcknexObject(42, null);
            _world.AcknexObject.SetAcknexObject(43, null);
            _world.AcknexObject.SetAcknexObject(44, null);
            WAITFIRE:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GUNFIRING_28 = _world.GetObject(ObjectType.Skill, 3478808598);
            var GUNFIRING_28_val = GUNFIRING_28.GetFloat(PropertyName.VAL);
            if (GUNFIRING_28_val != 0f)
            {
                goto WAITFIRE;
            }
            var MY_GUN_30 = _world.GetSynonymObject(3254523708);
            if (MY_GUN_30 == null)
            {
                goto NOGUN;
            }
            var MY_GUN_33 = _world.GetSynonymObject(3254523708);
            var temp_34 = MY_GUN_33.GetFloat(204);
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
            var MAP_MODE_36 = _world.GetObject(ObjectType.Skill, 380);
            MAP_MODE_36.SetFloat(231, 0f);
            _world.AcknexObject.SetAcknexObject(158, null);
            var MY_GUN_41 = _world.GetSynonymObject(3254523708);
            if (MY_GUN_41 == null)
            {
                goto CONT;
            }
            var MY_GUN_44 = _world.GetSynonymObject(3254523708);
            MY_GUN_44.SetFloat(204, 0f);
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
            var MY_GUN_48 = _world.GetSynonymObject(3254523708);
            var temp_49 = MY_GUN_48.GetFloat(204);
            if (temp_49 < 1f)
            {
                goto WAITING;
            }
            CONT:
            var MP5ACT_50 = _world.AcknexObject.GetAcknexObject(3242333943);
            _world.SetSynonymObject(3254523708, MP5ACT_50);
            var MY_GUN_54 = _world.GetSynonymObject(3254523708);
            MY_GUN_54.SetFloat(204, 0f);
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
            var MY_GUN_58 = _world.GetSynonymObject(3254523708);
            var temp_59 = MY_GUN_58.GetFloat(204);
            if (temp_59 < 1f)
            {
                goto WAITING1;
            }
            var MP5_01OVL_60 = _world.AcknexObject.GetAcknexObject(2701560848);
            _world.AcknexObject.SetAcknexObject(158, MP5_01OVL_60);
            var RENDER_MODE_64 = _world.GetObject(ObjectType.Skill, 361);
            RENDER_MODE_64.SetFloat(231, 1f);
            var FIRE_65 = _world.AcknexObject.GetAcknexObject(2089072467);
            _world.AcknexObject.SetAcknexObject(78, FIRE_65);
            var FIRE_67 = _world.AcknexObject.GetAcknexObject(2089072467);
            _world.AcknexObject.SetAcknexObject(97, FIRE_67);
            var GUN_ON_70 = _world.GetObject(ObjectType.Skill, 3014382675);
            GUN_ON_70.SetFloat(231, 1f);
            var MP_501SND_71 = _world.AcknexObject.GetAcknexObject(3759925572);
            _world.PlaySound(MP_501SND_71, 0.5f, null);
            var SELECTTRICORDER_73 = _world.AcknexObject.GetAcknexObject(4185607035);
            _world.AcknexObject.SetAcknexObject(104, SELECTTRICORDER_73);
            var SELECTNONE_75 = _world.AcknexObject.GetAcknexObject(1879623005);
            _world.AcknexObject.SetAcknexObject(39, SELECTNONE_75);
            var SELECTNONE_77 = _world.AcknexObject.GetAcknexObject(1879623005);
            _world.AcknexObject.SetAcknexObject(92, SELECTNONE_77);
            var SELECTMP5_79 = _world.AcknexObject.GetAcknexObject(3831323359);
            _world.AcknexObject.SetAcknexObject(40, SELECTMP5_79);
            var SELECTMP5BURST_81 = _world.AcknexObject.GetAcknexObject(120038031);
            _world.AcknexObject.SetAcknexObject(41, SELECTMP5BURST_81);
            var SELECTGRANADE_83 = _world.AcknexObject.GetAcknexObject(677375039);
            _world.AcknexObject.SetAcknexObject(42, SELECTGRANADE_83);
            var SELECTSTINGER_85 = _world.AcknexObject.GetAcknexObject(3377853513);
            _world.AcknexObject.SetAcknexObject(43, SELECTSTINGER_85);
            var SELECTQUANTUM_87 = _world.AcknexObject.GetAcknexObject(824580280);
            _world.AcknexObject.SetAcknexObject(44, SELECTQUANTUM_87);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SELECTMP5BURST(IAcknexObject MY, IAcknexObject THERE)
        {
            var PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill, 1469755439);
            var PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat(PropertyName.VAL);
            if (PLAYER_HEALTH_1_val < 0.1f)
            {
                yield break;
            }
            var WEAPONSEL_3 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_3_val = WEAPONSEL_3.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_3_val == 2f)
            {
                goto HASGOT;
            }
            var HAS_MP5_5 = _world.GetObject(ObjectType.Skill, 1205036122);
            var HAS_MP5_5_val = HAS_MP5_5.GetFloat(PropertyName.VAL);
            if (HAS_MP5_5_val != 0f)
            {
                goto HASGOT;
            }
            var WRN03STR_6 = _world.AcknexObject.GetAcknexObject(665745664);
            _world.SetSynonymObject(361798934, WRN03STR_6);
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
            var WEAPONSEL_9 = _world.GetObject(ObjectType.Skill, 2181903739);
            WEAPONSEL_9.SetFloat(231, 2f);
            _world.AcknexObject.SetAcknexObject(78, null);
            _world.AcknexObject.SetAcknexObject(97, null);
            _world.AcknexObject.SetAcknexObject(104, null);
            _world.AcknexObject.SetAcknexObject(39, null);
            _world.AcknexObject.SetAcknexObject(92, null);
            _world.AcknexObject.SetAcknexObject(40, null);
            _world.AcknexObject.SetAcknexObject(41, null);
            _world.AcknexObject.SetAcknexObject(42, null);
            _world.AcknexObject.SetAcknexObject(43, null);
            _world.AcknexObject.SetAcknexObject(44, null);
            WAITFIRE:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GUNFIRING_32 = _world.GetObject(ObjectType.Skill, 3478808598);
            var GUNFIRING_32_val = GUNFIRING_32.GetFloat(PropertyName.VAL);
            if (GUNFIRING_32_val != 0f)
            {
                goto WAITFIRE;
            }
            var MY_GUN_34 = _world.GetSynonymObject(3254523708);
            if (MY_GUN_34 == null)
            {
                goto NOGUN;
            }
            var MY_GUN_37 = _world.GetSynonymObject(3254523708);
            var temp_38 = MY_GUN_37.GetFloat(204);
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
            var MAP_MODE_40 = _world.GetObject(ObjectType.Skill, 380);
            MAP_MODE_40.SetFloat(231, 0f);
            _world.AcknexObject.SetAcknexObject(158, null);
            var MY_GUN_45 = _world.GetSynonymObject(3254523708);
            if (MY_GUN_45 == null)
            {
                goto CONT;
            }
            var MY_GUN_48 = _world.GetSynonymObject(3254523708);
            MY_GUN_48.SetFloat(204, 0f);
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
            var MY_GUN_52 = _world.GetSynonymObject(3254523708);
            var temp_53 = MY_GUN_52.GetFloat(204);
            if (temp_53 < 1f)
            {
                goto WAITING;
            }
            CONT:
            var MP5ACT_54 = _world.AcknexObject.GetAcknexObject(3242333943);
            _world.SetSynonymObject(3254523708, MP5ACT_54);
            var MY_GUN_58 = _world.GetSynonymObject(3254523708);
            MY_GUN_58.SetFloat(204, 0f);
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
            var MY_GUN_62 = _world.GetSynonymObject(3254523708);
            var temp_63 = MY_GUN_62.GetFloat(204);
            if (temp_63 < 1f)
            {
                goto WAITING1;
            }
            var MP5_01OVL_64 = _world.AcknexObject.GetAcknexObject(2701560848);
            _world.AcknexObject.SetAcknexObject(158, MP5_01OVL_64);
            var BURST_67 = _world.AcknexObject.GetAcknexObject(215570781);
            _world.AcknexObject.SetAcknexObject(78, BURST_67);
            var BURST_69 = _world.AcknexObject.GetAcknexObject(215570781);
            _world.AcknexObject.SetAcknexObject(97, BURST_69);
            var GUN_ON_72 = _world.GetObject(ObjectType.Skill, 3014382675);
            GUN_ON_72.SetFloat(231, 1f);
            var RENDER_MODE_74 = _world.GetObject(ObjectType.Skill, 361);
            RENDER_MODE_74.SetFloat(231, 1f);
            var MP_501SND_75 = _world.AcknexObject.GetAcknexObject(3759925572);
            _world.PlaySound(MP_501SND_75, 0.5f, null);
            var SELECTTRICORDER_77 = _world.AcknexObject.GetAcknexObject(4185607035);
            _world.AcknexObject.SetAcknexObject(104, SELECTTRICORDER_77);
            var SELECTNONE_79 = _world.AcknexObject.GetAcknexObject(1879623005);
            _world.AcknexObject.SetAcknexObject(39, SELECTNONE_79);
            var SELECTNONE_81 = _world.AcknexObject.GetAcknexObject(1879623005);
            _world.AcknexObject.SetAcknexObject(92, SELECTNONE_81);
            var SELECTMP5_83 = _world.AcknexObject.GetAcknexObject(3831323359);
            _world.AcknexObject.SetAcknexObject(40, SELECTMP5_83);
            var SELECTMP5BURST_85 = _world.AcknexObject.GetAcknexObject(120038031);
            _world.AcknexObject.SetAcknexObject(41, SELECTMP5BURST_85);
            var SELECTGRANADE_87 = _world.AcknexObject.GetAcknexObject(677375039);
            _world.AcknexObject.SetAcknexObject(42, SELECTGRANADE_87);
            var SELECTSTINGER_89 = _world.AcknexObject.GetAcknexObject(3377853513);
            _world.AcknexObject.SetAcknexObject(43, SELECTSTINGER_89);
            var SELECTQUANTUM_91 = _world.AcknexObject.GetAcknexObject(824580280);
            _world.AcknexObject.SetAcknexObject(44, SELECTQUANTUM_91);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SELECTGRANADE(IAcknexObject MY, IAcknexObject THERE)
        {
            var PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill, 1469755439);
            var PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat(PropertyName.VAL);
            if (PLAYER_HEALTH_1_val < 0.1f)
            {
                yield break;
            }
            var WEAPONSEL_3 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_3_val = WEAPONSEL_3.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_3_val == 3f)
            {
                yield break;
            }
            var HAS_GRANADE_5 = _world.GetObject(ObjectType.Skill, 40123194);
            var HAS_GRANADE_5_val = HAS_GRANADE_5.GetFloat(PropertyName.VAL);
            if (HAS_GRANADE_5_val != 0f)
            {
                goto HASGOT;
            }
            var WRN03STR_6 = _world.AcknexObject.GetAcknexObject(665745664);
            _world.SetSynonymObject(361798934, WRN03STR_6);
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
            var WEAPONSEL_9 = _world.GetObject(ObjectType.Skill, 2181903739);
            WEAPONSEL_9.SetFloat(231, 3f);
            _world.AcknexObject.SetAcknexObject(78, null);
            _world.AcknexObject.SetAcknexObject(97, null);
            _world.AcknexObject.SetAcknexObject(104, null);
            _world.AcknexObject.SetAcknexObject(39, null);
            _world.AcknexObject.SetAcknexObject(92, null);
            _world.AcknexObject.SetAcknexObject(40, null);
            _world.AcknexObject.SetAcknexObject(41, null);
            _world.AcknexObject.SetAcknexObject(42, null);
            _world.AcknexObject.SetAcknexObject(43, null);
            _world.AcknexObject.SetAcknexObject(44, null);
            WAITFIRE:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GUNFIRING_32 = _world.GetObject(ObjectType.Skill, 3478808598);
            var GUNFIRING_32_val = GUNFIRING_32.GetFloat(PropertyName.VAL);
            if (GUNFIRING_32_val != 0f)
            {
                goto WAITFIRE;
            }
            var AMMO_GRANADE_34 = _world.GetObject(ObjectType.Skill, 3603202376);
            var AMMO_GRANADE_34_val = AMMO_GRANADE_34.GetFloat(PropertyName.VAL);
            if (AMMO_GRANADE_34_val < 1f)
            {
                goto EXITGRANADE;
            }
            var MY_GUN_36 = _world.GetSynonymObject(3254523708);
            if (MY_GUN_36 == null)
            {
                goto NOGUN;
            }
            var MY_GUN_39 = _world.GetSynonymObject(3254523708);
            var temp_40 = MY_GUN_39.GetFloat(204);
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
            var MAP_MODE_42 = _world.GetObject(ObjectType.Skill, 380);
            MAP_MODE_42.SetFloat(231, 0f);
            _world.AcknexObject.SetAcknexObject(158, null);
            var MY_GUN_47 = _world.GetSynonymObject(3254523708);
            if (MY_GUN_47 == null)
            {
                goto CONT;
            }
            var MY_GUN_50 = _world.GetSynonymObject(3254523708);
            MY_GUN_50.SetFloat(204, 0f);
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
            var MY_GUN_54 = _world.GetSynonymObject(3254523708);
            var temp_55 = MY_GUN_54.GetFloat(204);
            if (temp_55 < 1f)
            {
                goto WAITING;
            }
            CONT:
            var GRANACT_56 = _world.AcknexObject.GetAcknexObject(556898861);
            _world.SetSynonymObject(3254523708, GRANACT_56);
            var MY_GUN_60 = _world.GetSynonymObject(3254523708);
            MY_GUN_60.SetFloat(204, 0f);
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
            var MY_GUN_64 = _world.GetSynonymObject(3254523708);
            var temp_65 = MY_GUN_64.GetFloat(204);
            if (temp_65 < 1f)
            {
                goto WAITING1;
            }
            var GRAN00OVL_66 = _world.AcknexObject.GetAcknexObject(850536902);
            _world.AcknexObject.SetAcknexObject(158, GRAN00OVL_66);
            var THROW_69 = _world.AcknexObject.GetAcknexObject(236450049);
            _world.AcknexObject.SetAcknexObject(78, THROW_69);
            var THROW_71 = _world.AcknexObject.GetAcknexObject(236450049);
            _world.AcknexObject.SetAcknexObject(97, THROW_71);
            var GUN_ON_74 = _world.GetObject(ObjectType.Skill, 3014382675);
            GUN_ON_74.SetFloat(231, 1f);
            var RENDER_MODE_76 = _world.GetObject(ObjectType.Skill, 361);
            RENDER_MODE_76.SetFloat(231, 1f);
            var MP_501SND_77 = _world.AcknexObject.GetAcknexObject(3759925572);
            _world.PlaySound(MP_501SND_77, 0.5f, null);
            EXITGRANADE:
            var SELECTTRICORDER_79 = _world.AcknexObject.GetAcknexObject(4185607035);
            _world.AcknexObject.SetAcknexObject(104, SELECTTRICORDER_79);
            var SELECTNONE_81 = _world.AcknexObject.GetAcknexObject(1879623005);
            _world.AcknexObject.SetAcknexObject(39, SELECTNONE_81);
            var SELECTNONE_83 = _world.AcknexObject.GetAcknexObject(1879623005);
            _world.AcknexObject.SetAcknexObject(92, SELECTNONE_83);
            var SELECTMP5_85 = _world.AcknexObject.GetAcknexObject(3831323359);
            _world.AcknexObject.SetAcknexObject(40, SELECTMP5_85);
            var SELECTMP5BURST_87 = _world.AcknexObject.GetAcknexObject(120038031);
            _world.AcknexObject.SetAcknexObject(41, SELECTMP5BURST_87);
            var SELECTGRANADE_89 = _world.AcknexObject.GetAcknexObject(677375039);
            _world.AcknexObject.SetAcknexObject(42, SELECTGRANADE_89);
            var SELECTSTINGER_91 = _world.AcknexObject.GetAcknexObject(3377853513);
            _world.AcknexObject.SetAcknexObject(43, SELECTSTINGER_91);
            var SELECTQUANTUM_93 = _world.AcknexObject.GetAcknexObject(824580280);
            _world.AcknexObject.SetAcknexObject(44, SELECTQUANTUM_93);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SELECTSTINGER(IAcknexObject MY, IAcknexObject THERE)
        {
            var PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill, 1469755439);
            var PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat(PropertyName.VAL);
            if (PLAYER_HEALTH_1_val < 0.1f)
            {
                yield break;
            }
            var WEAPONSEL_3 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_3_val = WEAPONSEL_3.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_3_val == 4f)
            {
                yield break;
            }
            var HAS_STINGER_5 = _world.GetObject(ObjectType.Skill, 2740601668);
            var HAS_STINGER_5_val = HAS_STINGER_5.GetFloat(PropertyName.VAL);
            if (HAS_STINGER_5_val != 0f)
            {
                goto HASGOT;
            }
            var WRN03STR_6 = _world.AcknexObject.GetAcknexObject(665745664);
            _world.SetSynonymObject(361798934, WRN03STR_6);
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
            var WEAPONSEL_9 = _world.GetObject(ObjectType.Skill, 2181903739);
            WEAPONSEL_9.SetFloat(231, 4f);
            _world.AcknexObject.SetAcknexObject(78, null);
            _world.AcknexObject.SetAcknexObject(97, null);
            _world.AcknexObject.SetAcknexObject(104, null);
            _world.AcknexObject.SetAcknexObject(39, null);
            _world.AcknexObject.SetAcknexObject(92, null);
            _world.AcknexObject.SetAcknexObject(40, null);
            _world.AcknexObject.SetAcknexObject(41, null);
            _world.AcknexObject.SetAcknexObject(42, null);
            _world.AcknexObject.SetAcknexObject(43, null);
            _world.AcknexObject.SetAcknexObject(44, null);
            WAITFIRE:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GUNFIRING_32 = _world.GetObject(ObjectType.Skill, 3478808598);
            var GUNFIRING_32_val = GUNFIRING_32.GetFloat(PropertyName.VAL);
            if (GUNFIRING_32_val != 0f)
            {
                goto WAITFIRE;
            }
            var MY_GUN_34 = _world.GetSynonymObject(3254523708);
            if (MY_GUN_34 == null)
            {
                goto NOGUN;
            }
            var MY_GUN_37 = _world.GetSynonymObject(3254523708);
            var temp_38 = MY_GUN_37.GetFloat(204);
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
            var WEAPONSEL_40 = _world.GetObject(ObjectType.Skill, 2181903739);
            WEAPONSEL_40.SetFloat(231, 4f);
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
            var MAP_MODE_42 = _world.GetObject(ObjectType.Skill, 380);
            MAP_MODE_42.SetFloat(231, 0f);
            _world.AcknexObject.SetAcknexObject(158, null);
            var MY_GUN_47 = _world.GetSynonymObject(3254523708);
            if (MY_GUN_47 == null)
            {
                goto CONT;
            }
            var MY_GUN_50 = _world.GetSynonymObject(3254523708);
            MY_GUN_50.SetFloat(204, 0f);
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
            var MY_GUN_54 = _world.GetSynonymObject(3254523708);
            var temp_55 = MY_GUN_54.GetFloat(204);
            if (temp_55 < 1f)
            {
                goto WAITING;
            }
            CONT:
            var STNGACT_56 = _world.AcknexObject.GetAcknexObject(3263048801);
            _world.SetSynonymObject(3254523708, STNGACT_56);
            var MY_GUN_60 = _world.GetSynonymObject(3254523708);
            MY_GUN_60.SetFloat(204, 0f);
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
            var MY_GUN_64 = _world.GetSynonymObject(3254523708);
            var temp_65 = MY_GUN_64.GetFloat(204);
            if (temp_65 < 1f)
            {
                goto WAITING1;
            }
            var STNG00OVL_66 = _world.AcknexObject.GetAcknexObject(1500256506);
            _world.AcknexObject.SetAcknexObject(158, STNG00OVL_66);
            var LAUNCH_69 = _world.AcknexObject.GetAcknexObject(3186573864);
            _world.AcknexObject.SetAcknexObject(78, LAUNCH_69);
            var LAUNCH_71 = _world.AcknexObject.GetAcknexObject(3186573864);
            _world.AcknexObject.SetAcknexObject(97, LAUNCH_71);
            var GUN_ON_74 = _world.GetObject(ObjectType.Skill, 3014382675);
            GUN_ON_74.SetFloat(231, 1f);
            var RENDER_MODE_76 = _world.GetObject(ObjectType.Skill, 361);
            RENDER_MODE_76.SetFloat(231, 1f);
            var STNG01SND_77 = _world.AcknexObject.GetAcknexObject(1500296527);
            _world.PlaySound(STNG01SND_77, 0.5f, null);
            var SELECTTRICORDER_79 = _world.AcknexObject.GetAcknexObject(4185607035);
            _world.AcknexObject.SetAcknexObject(104, SELECTTRICORDER_79);
            var SELECTNONE_81 = _world.AcknexObject.GetAcknexObject(1879623005);
            _world.AcknexObject.SetAcknexObject(39, SELECTNONE_81);
            var SELECTNONE_83 = _world.AcknexObject.GetAcknexObject(1879623005);
            _world.AcknexObject.SetAcknexObject(92, SELECTNONE_83);
            var SELECTMP5_85 = _world.AcknexObject.GetAcknexObject(3831323359);
            _world.AcknexObject.SetAcknexObject(40, SELECTMP5_85);
            var SELECTMP5BURST_87 = _world.AcknexObject.GetAcknexObject(120038031);
            _world.AcknexObject.SetAcknexObject(41, SELECTMP5BURST_87);
            var SELECTGRANADE_89 = _world.AcknexObject.GetAcknexObject(677375039);
            _world.AcknexObject.SetAcknexObject(42, SELECTGRANADE_89);
            var SELECTSTINGER_91 = _world.AcknexObject.GetAcknexObject(3377853513);
            _world.AcknexObject.SetAcknexObject(43, SELECTSTINGER_91);
            var SELECTQUANTUM_93 = _world.AcknexObject.GetAcknexObject(824580280);
            _world.AcknexObject.SetAcknexObject(44, SELECTQUANTUM_93);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SELECTQUANTUM(IAcknexObject MY, IAcknexObject THERE)
        {
            var PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill, 1469755439);
            var PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat(PropertyName.VAL);
            if (PLAYER_HEALTH_1_val < 0.1f)
            {
                yield break;
            }
            var WEAPONSEL_3 = _world.GetObject(ObjectType.Skill, 2181903739);
            var WEAPONSEL_3_val = WEAPONSEL_3.GetFloat(PropertyName.VAL);
            if (WEAPONSEL_3_val == 5f)
            {
                yield break;
            }
            var HAS_QUANTUM_5 = _world.GetObject(ObjectType.Skill, 187328435);
            var HAS_QUANTUM_5_val = HAS_QUANTUM_5.GetFloat(PropertyName.VAL);
            if (HAS_QUANTUM_5_val != 0f)
            {
                goto HASGOT;
            }
            var WRN03STR_6 = _world.AcknexObject.GetAcknexObject(665745664);
            _world.SetSynonymObject(361798934, WRN03STR_6);
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
            var WEAPONSEL_9 = _world.GetObject(ObjectType.Skill, 2181903739);
            WEAPONSEL_9.SetFloat(231, 5f);
            _world.AcknexObject.SetAcknexObject(78, null);
            _world.AcknexObject.SetAcknexObject(97, null);
            _world.AcknexObject.SetAcknexObject(104, null);
            _world.AcknexObject.SetAcknexObject(39, null);
            _world.AcknexObject.SetAcknexObject(92, null);
            _world.AcknexObject.SetAcknexObject(40, null);
            _world.AcknexObject.SetAcknexObject(41, null);
            _world.AcknexObject.SetAcknexObject(42, null);
            _world.AcknexObject.SetAcknexObject(43, null);
            _world.AcknexObject.SetAcknexObject(44, null);
            WAITFIRE:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var GUNFIRING_32 = _world.GetObject(ObjectType.Skill, 3478808598);
            var GUNFIRING_32_val = GUNFIRING_32.GetFloat(PropertyName.VAL);
            if (GUNFIRING_32_val != 0f)
            {
                goto WAITFIRE;
            }
            var MY_GUN_34 = _world.GetSynonymObject(3254523708);
            if (MY_GUN_34 == null)
            {
                goto NOGUN;
            }
            var MY_GUN_37 = _world.GetSynonymObject(3254523708);
            var temp_38 = MY_GUN_37.GetFloat(204);
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
            var WEAPONSEL_40 = _world.GetObject(ObjectType.Skill, 2181903739);
            WEAPONSEL_40.SetFloat(231, 5f);
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
            var MAP_MODE_42 = _world.GetObject(ObjectType.Skill, 380);
            MAP_MODE_42.SetFloat(231, 0f);
            _world.AcknexObject.SetAcknexObject(158, null);
            var MY_GUN_47 = _world.GetSynonymObject(3254523708);
            if (MY_GUN_47 == null)
            {
                goto CONT;
            }
            var MY_GUN_50 = _world.GetSynonymObject(3254523708);
            MY_GUN_50.SetFloat(204, 0f);
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
            var MY_GUN_54 = _world.GetSynonymObject(3254523708);
            var temp_55 = MY_GUN_54.GetFloat(204);
            if (temp_55 < 1f)
            {
                goto WAITING;
            }
            CONT:
            var QGUNACT_56 = _world.AcknexObject.GetAcknexObject(179905760);
            _world.SetSynonymObject(3254523708, QGUNACT_56);
            var MY_GUN_60 = _world.GetSynonymObject(3254523708);
            MY_GUN_60.SetFloat(204, 0f);
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
            var MY_GUN_64 = _world.GetSynonymObject(3254523708);
            var temp_65 = MY_GUN_64.GetFloat(204);
            if (temp_65 < 1f)
            {
                goto WAITING1;
            }
            var QGUN00OVL_66 = _world.AcknexObject.GetAcknexObject(2621910329);
            _world.AcknexObject.SetAcknexObject(158, QGUN00OVL_66);
            var BEAM_69 = _world.AcknexObject.GetAcknexObject(2088923810);
            _world.AcknexObject.SetAcknexObject(78, BEAM_69);
            var BEAM_71 = _world.AcknexObject.GetAcknexObject(2088923810);
            _world.AcknexObject.SetAcknexObject(97, BEAM_71);
            var GUN_ON_74 = _world.GetObject(ObjectType.Skill, 3014382675);
            GUN_ON_74.SetFloat(231, 1f);
            var RENDER_MODE_76 = _world.GetObject(ObjectType.Skill, 361);
            RENDER_MODE_76.SetFloat(231, 1f);
            var QGUN01SND_77 = _world.AcknexObject.GetAcknexObject(2621950350);
            _world.PlaySound(QGUN01SND_77, 0.4f, null);
            var SELECTTRICORDER_79 = _world.AcknexObject.GetAcknexObject(4185607035);
            _world.AcknexObject.SetAcknexObject(104, SELECTTRICORDER_79);
            var SELECTNONE_81 = _world.AcknexObject.GetAcknexObject(1879623005);
            _world.AcknexObject.SetAcknexObject(39, SELECTNONE_81);
            var SELECTNONE_83 = _world.AcknexObject.GetAcknexObject(1879623005);
            _world.AcknexObject.SetAcknexObject(92, SELECTNONE_83);
            var SELECTMP5_85 = _world.AcknexObject.GetAcknexObject(3831323359);
            _world.AcknexObject.SetAcknexObject(40, SELECTMP5_85);
            var SELECTMP5BURST_87 = _world.AcknexObject.GetAcknexObject(120038031);
            _world.AcknexObject.SetAcknexObject(41, SELECTMP5BURST_87);
            var SELECTGRANADE_89 = _world.AcknexObject.GetAcknexObject(677375039);
            _world.AcknexObject.SetAcknexObject(42, SELECTGRANADE_89);
            var SELECTSTINGER_91 = _world.AcknexObject.GetAcknexObject(3377853513);
            _world.AcknexObject.SetAcknexObject(43, SELECTSTINGER_91);
            var SELECTQUANTUM_93 = _world.AcknexObject.GetAcknexObject(824580280);
            _world.AcknexObject.SetAcknexObject(44, SELECTQUANTUM_93);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator ZOOMMAPIN(IAcknexObject MY, IAcknexObject THERE)
        {
            var MAP_MODE_1 = _world.GetObject(ObjectType.Skill, 380);
            var MAP_MODE_1_val = MAP_MODE_1.GetFloat(PropertyName.VAL);
            if (MAP_MODE_1_val < 0.1f)
            {
                yield break;
            }
            ZOOM:
            var MAP_SCALE_3 = _world.GetObject(ObjectType.Skill, 379);
            var MAP_SCALE_3_val = MAP_SCALE_3.GetFloat(PropertyName.VAL);
            if (MAP_SCALE_3_val < 20f)
            {
                var MAP_SCALE_4 = _world.GetObject(ObjectType.Skill, 379);
                var MAP_SCALE_5 = _world.GetObject(ObjectType.Skill, 379);
                var MAP_SCALE_5_val = MAP_SCALE_5.GetFloat(PropertyName.VAL);
                var MAP_SCALE_6 = _world.GetObject(ObjectType.Skill, 379);
                var MAP_SCALE_6_val = MAP_SCALE_6.GetFloat(PropertyName.VAL);
                MAP_SCALE_4.SetFloat(231, MAP_SCALE_6_val * 1.1f);
            }
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var KEY_INS_11 = _world.GetObject(ObjectType.Skill, 541);
            var KEY_INS_11_val = KEY_INS_11.GetFloat(PropertyName.VAL);
            if (KEY_INS_11_val > 0f)
            {
                goto ZOOM;
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator ZOOMMAPOUT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MAP_MODE_1 = _world.GetObject(ObjectType.Skill, 380);
            var MAP_MODE_1_val = MAP_MODE_1.GetFloat(PropertyName.VAL);
            if (MAP_MODE_1_val < 0.1f)
            {
                yield break;
            }
            ZOOM:
            var MAP_SCALE_3 = _world.GetObject(ObjectType.Skill, 379);
            var MAP_SCALE_3_val = MAP_SCALE_3.GetFloat(PropertyName.VAL);
            if (MAP_SCALE_3_val > 1f)
            {
                var MAP_SCALE_4 = _world.GetObject(ObjectType.Skill, 379);
                var MAP_SCALE_5 = _world.GetObject(ObjectType.Skill, 379);
                var MAP_SCALE_5_val = MAP_SCALE_5.GetFloat(PropertyName.VAL);
                var MAP_SCALE_6 = _world.GetObject(ObjectType.Skill, 379);
                var MAP_SCALE_6_val = MAP_SCALE_6.GetFloat(PropertyName.VAL);
                MAP_SCALE_4.SetFloat(231, MAP_SCALE_6_val * 0.9f);
            }
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var KEY_DEL_11 = _world.GetObject(ObjectType.Skill, 527);
            var KEY_DEL_11_val = KEY_DEL_11.GetFloat(PropertyName.VAL);
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
            var temp_3 = _world.AcknexObject?.GetAcknexObject(40);
            if (temp_3 == null)
            {
                goto WAITING0;
            }
            var GUNFIRING_5 = _world.GetObject(ObjectType.Skill, 3478808598);
            var GUNFIRING_5_val = GUNFIRING_5.GetFloat(PropertyName.VAL);
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
            var WEAPONSEL_7 = _world.GetObject(ObjectType.Skill, 2181903739);
            WEAPONSEL_7.SetFloat(231, 1f);
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
            var MAP_MODE_9 = _world.GetObject(ObjectType.Skill, 380);
            MAP_MODE_9.SetFloat(231, 0f);
            _world.AcknexObject.SetAcknexObject(158, null);
            _world.AcknexObject.SetAcknexObject(78, null);
            _world.AcknexObject.SetAcknexObject(97, null);
            _world.AcknexObject.SetAcknexObject(82, null);
            _world.AcknexObject.SetAcknexObject(81, null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var TRICACT_22 = _world.AcknexObject.GetAcknexObject(175205335);
            _world.SetSynonymObject(3254523708, TRICACT_22);
            var MY_GUN_26 = _world.GetSynonymObject(3254523708);
            MY_GUN_26.SetFloat(204, 0f);
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
            var MY_GUN_30 = _world.GetSynonymObject(3254523708);
            var temp_31 = MY_GUN_30.GetFloat(204);
            if (temp_31 < 1f)
            {
                goto WAITING2;
            }
            var TRIC01SND_32 = _world.AcknexObject.GetAcknexObject(1798154821);
            _world.PlaySound(TRIC01SND_32, 0.5f, null);
            var BRIEFING_TEXT_34 = _world.GetSynonymObject(155729303);
            var PDATEXT_36 = _world.AcknexObject.GetAcknexObject(3042501159);
            var PDATEXT_36_array = PDATEXT_36.GetObject<List<IAcknexObject>>(293);
            var PDATEXT_36_index = PDATEXT_36.GetInteger(PropertyName.INDEX);
            PDATEXT_36_array[PDATEXT_36_index - 1] = BRIEFING_TEXT_34;
            PDATEXT_36.IsDirty = true;
            var TRIC01OVL_37 = _world.AcknexObject.GetAcknexObject(1798150737);
            _world.AcknexObject.SetAcknexObject(158, TRIC01OVL_37);
            var PDATEXT_42 = _world.AcknexObject.GetAcknexObject(3042501159);
            PDATEXT_42.SetFloat(205, 1f);
            var PDAMESSAGEOFF_43 = _world.AcknexObject.GetAcknexObject(3755623554);
            _world.AcknexObject.SetAcknexObject(82, PDAMESSAGEOFF_43);
            var GUN_ON_46 = _world.GetObject(ObjectType.Skill, 3014382675);
            GUN_ON_46.SetFloat(231, 0f);
            var HLP03STR_47 = _world.AcknexObject.GetAcknexObject(2258625677);
            _world.SetSynonymObject(361798934, HLP03STR_47);
            var BLACK_49 = _world.AcknexObject.GetAcknexObject(215228298);
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
            var RENDER_MODE_52 = _world.GetObject(ObjectType.Skill, 361);
            RENDER_MODE_52.SetFloat(231, 1f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MOVE_MODE_55 = _world.GetObject(ObjectType.Skill, 362);
            MOVE_MODE_55.SetFloat(231, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SHOWPDAGAMEOVER(IAcknexObject MY, IAcknexObject THERE)
        {
            var ALARM03SND_0 = _world.AcknexObject.GetAcknexObject(759955234);
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
            var temp_5 = _world.AcknexObject?.GetAcknexObject(40);
            if (temp_5 == null)
            {
                goto WAITING0;
            }
            var GUNFIRING_7 = _world.GetObject(ObjectType.Skill, 3478808598);
            var GUNFIRING_7_val = GUNFIRING_7.GetFloat(PropertyName.VAL);
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
            var WEAPONSEL_9 = _world.GetObject(ObjectType.Skill, 2181903739);
            WEAPONSEL_9.SetFloat(231, 1f);
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
            var MAP_MODE_11 = _world.GetObject(ObjectType.Skill, 380);
            MAP_MODE_11.SetFloat(231, 0f);
            _world.AcknexObject.SetAcknexObject(158, null);
            _world.AcknexObject.SetAcknexObject(78, null);
            _world.AcknexObject.SetAcknexObject(97, null);
            _world.AcknexObject.SetAcknexObject(82, null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var TRICACT_22 = _world.AcknexObject.GetAcknexObject(175205335);
            _world.SetSynonymObject(3254523708, TRICACT_22);
            var MY_GUN_26 = _world.GetSynonymObject(3254523708);
            MY_GUN_26.SetFloat(204, 0f);
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
            var MY_GUN_30 = _world.GetSynonymObject(3254523708);
            var temp_31 = MY_GUN_30.GetFloat(204);
            if (temp_31 < 1f)
            {
                goto WAITING2;
            }
            var ALARM03SND_32 = _world.AcknexObject.GetAcknexObject(759955234);
            _world.PlaySound(ALARM03SND_32, 0.7f, null);
            var GAMEOVER_TEXT_34 = _world.GetSynonymObject(3892409159);
            var PDATEXT_36 = _world.AcknexObject.GetAcknexObject(3042501159);
            var PDATEXT_36_array = PDATEXT_36.GetObject<List<IAcknexObject>>(293);
            var PDATEXT_36_index = PDATEXT_36.GetInteger(PropertyName.INDEX);
            PDATEXT_36_array[PDATEXT_36_index - 1] = GAMEOVER_TEXT_34;
            PDATEXT_36.IsDirty = true;
            _world.SetSynonymObject(270057211, null);
            var TRIC01OVL_39 = _world.AcknexObject.GetAcknexObject(1798150737);
            _world.AcknexObject.SetAcknexObject(158, TRIC01OVL_39);
            var PDATEXT_44 = _world.AcknexObject.GetAcknexObject(3042501159);
            PDATEXT_44.SetFloat(205, 1f);
            var PDAMESSAGEOFF_45 = _world.AcknexObject.GetAcknexObject(3755623554);
            _world.AcknexObject.SetAcknexObject(82, PDAMESSAGEOFF_45);
            var GUN_ON_48 = _world.GetObject(ObjectType.Skill, 3014382675);
            GUN_ON_48.SetFloat(231, 0f);
            var HLP04STR_49 = _world.AcknexObject.GetAcknexObject(2258661614);
            _world.SetSynonymObject(361798934, HLP04STR_49);
            var BLACK_51 = _world.AcknexObject.GetAcknexObject(215228298);
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
            var RENDER_MODE_54 = _world.GetObject(ObjectType.Skill, 361);
            RENDER_MODE_54.SetFloat(231, 1f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MOVE_MODE_57 = _world.GetObject(ObjectType.Skill, 362);
            MOVE_MODE_57.SetFloat(231, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator PDAMESSAGEOFF(IAcknexObject MY, IAcknexObject THERE)
        {
            var PDATEXT_2 = _world.AcknexObject.GetAcknexObject(3042501159);
            PDATEXT_2.SetFloat(205, 0f);
            var SHOWMAINMENU_3 = _world.AcknexObject.GetAcknexObject(3665306792);
            _world.AcknexObject.SetAcknexObject(82, SHOWMAINMENU_3);
            var SELECTTRICORDER_5 = _world.AcknexObject.GetAcknexObject(4185607035);
            _world.AcknexObject.SetAcknexObject(104, SELECTTRICORDER_5);
            var SELECTNONE_7 = _world.AcknexObject.GetAcknexObject(1879623005);
            _world.AcknexObject.SetAcknexObject(39, SELECTNONE_7);
            var SELECTNONE_9 = _world.AcknexObject.GetAcknexObject(1879623005);
            _world.AcknexObject.SetAcknexObject(92, SELECTNONE_9);
            var SELECTMP5_11 = _world.AcknexObject.GetAcknexObject(3831323359);
            _world.AcknexObject.SetAcknexObject(40, SELECTMP5_11);
            var SELECTMP5BURST_13 = _world.AcknexObject.GetAcknexObject(120038031);
            _world.AcknexObject.SetAcknexObject(41, SELECTMP5BURST_13);
            var SELECTSTINGER_15 = _world.AcknexObject.GetAcknexObject(3377853513);
            _world.AcknexObject.SetAcknexObject(43, SELECTSTINGER_15);
            var SELECTGRANADE_17 = _world.AcknexObject.GetAcknexObject(677375039);
            _world.AcknexObject.SetAcknexObject(42, SELECTGRANADE_17);
            var SELECTQUANTUM_19 = _world.AcknexObject.GetAcknexObject(824580280);
            _world.AcknexObject.SetAcknexObject(44, SELECTQUANTUM_19);
            _world.AcknexObject.SetAcknexObject(145, null);
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
            var BLANKSTR_24 = _world.AcknexObject.GetAcknexObject(3695414798);
            _world.SetSynonymObject(361798934, BLANKSTR_24);
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
            var SECCOUNTER_1 = _world.GetObject(ObjectType.Skill, 2748572712);
            var SECCOUNTER_1_val = SECCOUNTER_1.GetFloat(PropertyName.VAL);
            if (SECCOUNTER_1_val == 0f)
            {
                //Unknown keyword: PLAY_CD
            }
            var SECCOUNTER_3 = _world.GetObject(ObjectType.Skill, 2748572712);
            var SECCOUNTER_3_val = SECCOUNTER_3.GetFloat(PropertyName.VAL);
            var SECCOUNTER_4 = _world.GetObject(ObjectType.Skill, 2748572712);
            SECCOUNTER_4.SetFloat(231, SECCOUNTER_3_val + 1f);
            var CDTRACKTIME_5 = _world.GetObject(ObjectType.Skill, 4172716664);
            var CDTRACKTIME_5_val = CDTRACKTIME_5.GetFloat(PropertyName.VAL);
            var SECCOUNTER_6 = _world.GetObject(ObjectType.Skill, 2748572712);
            var SECCOUNTER_6_val = SECCOUNTER_6.GetFloat(PropertyName.VAL);
            if (SECCOUNTER_6_val > CDTRACKTIME_5_val)
            {
                var SECCOUNTER_8 = _world.GetObject(ObjectType.Skill, 2748572712);
                SECCOUNTER_8.SetFloat(231, 0f);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SETSOUNDVOL(IAcknexObject MY, IAcknexObject THERE)
        {
            var SOUND_VOL_BUFFER_0 = _world.GetObject(ObjectType.Skill, 299848383);
            var SOUND_VOL_BUFFER_0_val = SOUND_VOL_BUFFER_0.GetFloat(PropertyName.VAL);
            var SOUND_VOL_1 = _world.GetObject(ObjectType.Skill, 405);
            SOUND_VOL_1.SetFloat(231, SOUND_VOL_BUFFER_0_val);
            var CDAUDIO_VOL_BUFFER_2 = _world.GetObject(ObjectType.Skill, 2594965391);
            var CDAUDIO_VOL_BUFFER_2_val = CDAUDIO_VOL_BUFFER_2.GetFloat(PropertyName.VAL);
            var CDAUDIO_VOL_3 = _world.GetObject(ObjectType.Skill, 407);
            CDAUDIO_VOL_3.SetFloat(231, CDAUDIO_VOL_BUFFER_2_val);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator PICKKEY1(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat(204, 1f);
            var TICKETSND_3 = _world.AcknexObject.GetAcknexObject(1664629430);
            _world.PlaySound(TICKETSND_3, 0.5f, null);
            var KEY1_6 = _world.GetObject(ObjectType.Skill, 2089248007);
            KEY1_6.SetFloat(231, 1f);
            var GET03STR_7 = _world.AcknexObject.GetAcknexObject(2296056041);
            _world.SetSynonymObject(361798934, GET03STR_7);
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
            MY_2.SetFloat(204, 1f);
            var KEYSND_3 = _world.AcknexObject.GetAcknexObject(3152331707);
            _world.PlaySound(KEYSND_3, 0.5f, null);
            var KEY2_6 = _world.GetObject(ObjectType.Skill, 2089248008);
            KEY2_6.SetFloat(231, 1f);
            var GET04STR_7 = _world.AcknexObject.GetAcknexObject(2296091978);
            _world.SetSynonymObject(361798934, GET04STR_7);
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
        public IEnumerator PICKUPLOCALMP5(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = PICKUPMP5(MY, THERE);
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
        public IEnumerator ENDPHASE(IAcknexObject MY, IAcknexObject THERE)
        {
            var ENDPHASE_0 = _world.AcknexObject.GetAcknexObject(1109344053);
            var temp_3 = _world.AcknexObject?.GetAcknexObject(22);
            if (temp_3 == ENDPHASE_0)
            {
                goto CONT;
            }
            var MY_6 = MY;
            MY_6.SetAcknexObject(192, null);
            var ENDPHASE_7 = _world.AcknexObject.GetAcknexObject(1109344053);
            _world.AcknexObject.SetAcknexObject(22, ENDPHASE_7);
            CONT:
            var SHOT_SOUND_ON_11 = _world.GetObject(ObjectType.Skill, 3372273679);
            var SHOT_SOUND_ON_11_val = SHOT_SOUND_ON_11.GetFloat(PropertyName.VAL);
            if (SHOT_SOUND_ON_11_val > 0f)
            {
                yield break;
            }
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
            }
            _world.AcknexObject.SetAcknexObject(22, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DRKLTURN(IAcknexObject MY, IAcknexObject THERE)
        {
            var WAITTIME_0 = _world.GetObject(ObjectType.Skill, 33817649);
            var WAITTIME_1 = _world.GetObject(ObjectType.Skill, 33817649);
            var WAITTIME_1_val = WAITTIME_1.GetFloat(PropertyName.VAL);
            WAITTIME_0.SetFloat(231, 64f * UnityEngine.Random.value + 16f);
            if (UnityEngine.Random.value < 0.07f)
            {
                {
                    var enumerator = DRKLLISTEN(MY, THERE);
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
                var RIGHTTURNDRKL_11 = _world.GetObject(ObjectType.Skill, 16212225);
                var RIGHTTURNDRKL_12 = _world.GetObject(ObjectType.Skill, 16212225);
                var RIGHTTURNDRKL_12_val = RIGHTTURNDRKL_12.GetFloat(PropertyName.VAL);
                var RIGHTTURNDRKL_14 = _world.GetObject(ObjectType.Skill, 16212225);
                var RIGHTTURNDRKL_14_val = RIGHTTURNDRKL_14.GetFloat(PropertyName.VAL);
                var RIGHTTURNDRKL_20 = _world.GetObject(ObjectType.Skill, 16212225);
                var RIGHTTURNDRKL_20_val = RIGHTTURNDRKL_20.GetFloat(PropertyName.VAL);
                RIGHTTURNDRKL_11.SetFloat(231, (RIGHTTURNDRKL_14_val - 1f) * (RIGHTTURNDRKL_20_val - 1f));
            }
            var RIGHTTURNDRKL_24 = _world.GetObject(ObjectType.Skill, 16212225);
            var RIGHTTURNDRKL_24_val = RIGHTTURNDRKL_24.GetFloat(PropertyName.VAL);
            if (RIGHTTURNDRKL_24_val > RIGHTTURNDRKL_24.GetFloat(PropertyName.MAX))
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
        public IEnumerator DRKLWAIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(176);
            if (temp_3 != 4f)
            {
                goto CONT;
            }
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat(205);
            if (temp_7 != 1f)
            {
                goto CONT;
            }
            yield break;
            CONT:
            var MY_10 = MY;
            MY_10.SetAcknexObject(189, null);
            var DRKLJUMP_11 = _world.AcknexObject.GetAcknexObject(2580776150);
            var MY_13 = MY;
            MY_13.SetAcknexObject(192, DRKLJUMP_11);
            var DRKLFOLLOWATTACK_14 = _world.AcknexObject.GetAcknexObject(908617765);
            var MY_16 = MY;
            MY_16.SetAcknexObject(193, DRKLFOLLOWATTACK_14);
            var CYCLEDRKLATTACK_17 = _world.AcknexObject.GetAcknexObject(1078179746);
            var MY_19 = MY;
            MY_19.SetAcknexObject(190, CYCLEDRKLATTACK_17);
            var DRKLHIT_20 = _world.AcknexObject.GetAcknexObject(989257407);
            var MY_22 = MY;
            MY_22.SetAcknexObject(209, DRKLHIT_20);
            var MY_25 = MY;
            MY_25.SetFloat(213, 0f);
            var MY_28 = MY;
            MY_28.SetFloat(165, -0.05f);
            var MY_31 = MY;
            MY_31.SetFloat(176, 0f);
            var DRKL0TEX_32 = _world.AcknexObject.GetAcknexObject(2579840443);
            var MY_34 = MY;
            MY_34.SetAcknexObject(164, DRKL0TEX_32);
            var MY_37 = MY;
            MY_37.SetFloat(168, 0f);
            var MY_40 = MY;
            MY_40.SetAcknexObject(199, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DRKLWANDER(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(189, null);
            var DRKLJUMP_3 = _world.AcknexObject.GetAcknexObject(2580776150);
            var MY_5 = MY;
            MY_5.SetAcknexObject(192, DRKLJUMP_3);
            var DRKLFOLLOWATTACK_6 = _world.AcknexObject.GetAcknexObject(908617765);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, DRKLFOLLOWATTACK_6);
            var CYCLEDRKLATTACK_9 = _world.AcknexObject.GetAcknexObject(1078179746);
            var MY_11 = MY;
            MY_11.SetAcknexObject(190, CYCLEDRKLATTACK_9);
            var DRKLHIT_12 = _world.AcknexObject.GetAcknexObject(989257407);
            var MY_14 = MY;
            MY_14.SetAcknexObject(209, DRKLHIT_12);
            var MY_17 = MY;
            MY_17.SetFloat(213, 0f);
            var MY_20 = MY;
            MY_20.SetFloat(176, 1f);
            var DRKL1TEX_21 = _world.AcknexObject.GetAcknexObject(2579876380);
            var MY_23 = MY;
            MY_23.SetAcknexObject(164, DRKL1TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat(168, 1f);
            var BULLET_27 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_29 = MY;
            MY_29.SetAcknexObject(199, BULLET_27);
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
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DRKLSEARCH(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(189, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(192, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, null);
            var DRKLHIT_9 = _world.AcknexObject.GetAcknexObject(989257407);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, DRKLHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(213, 0f);
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
            var MY_17 = MY;
            var temp_18 = MY_17.GetFloat(181);
            if (temp_18 == 0f)
            {
                {
                    var enumerator = DRKLWAIT(MY, THERE);
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
                var enumerator = DRKLFOLLOWATTACK(MY, THERE);
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
        public IEnumerator DRKLHIDE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat(207, 1f);
            var MY_5 = MY;
            MY_5.SetAcknexObject(189, null);
            var DRKLESCAPE_6 = _world.AcknexObject.GetAcknexObject(1357105963);
            var MY_8 = MY;
            MY_8.SetAcknexObject(192, DRKLESCAPE_6);
            var MY_11 = MY;
            MY_11.SetAcknexObject(193, null);
            var CYCLEDRKLHIDE_12 = _world.AcknexObject.GetAcknexObject(3582341508);
            var MY_14 = MY;
            MY_14.SetAcknexObject(190, CYCLEDRKLHIDE_12);
            var DRKLHIT_15 = _world.AcknexObject.GetAcknexObject(989257407);
            var MY_17 = MY;
            MY_17.SetAcknexObject(209, DRKLHIT_15);
            var MY_20 = MY;
            MY_20.SetFloat(213, 0f);
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
            var MY_23 = MY;
            var temp_24 = MY_23.GetFloat(176);
            if (temp_24 == 4f)
            {
                goto HIDDING;
            }
            var MY_27 = MY;
            MY_27.SetFloat(176, 4f);
            var MY_29 = MY;
            var MY_31 = MY;
            var temp_32 = MY_31.GetFloat(194);
            var PLAYER_ANGLE_33 = _world.GetObject(ObjectType.Skill, 462);
            var PLAYER_ANGLE_33_val = PLAYER_ANGLE_33.GetFloat(PropertyName.VAL);
            MY_29.SetFloat(194, PLAYER_ANGLE_33_val + (UnityEngine.Random.value - 0.5f) * 2.4f);
            var DRKL1TEX_42 = _world.AcknexObject.GetAcknexObject(2579876380);
            var MY_44 = MY;
            MY_44.SetAcknexObject(164, DRKL1TEX_42);
            var MY_47 = MY;
            MY_47.SetFloat(172, 20f);
            var MY_50 = MY;
            MY_50.SetFloat(168, 0.6f);
            var BULLET_51 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_53 = MY;
            MY_53.SetAcknexObject(199, BULLET_51);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)384f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_57 = MY;
            var temp_58 = MY_57.GetFloat(173);
            if (temp_58 > 5f)
            {
                yield break;
            }
            var MY_61 = MY;
            var temp_62 = MY_61.GetFloat(173);
            var MY_64 = MY;
            MY_64.SetFloat(173, temp_62 + -2f);
            {
                var enumerator = DRKLWANDER(MY, THERE);
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
            var MY_66 = MY;
            var MY_68 = MY;
            var temp_69 = MY_68.GetFloat(194);
            var PLAYER_ANGLE_70 = _world.GetObject(ObjectType.Skill, 462);
            var PLAYER_ANGLE_70_val = PLAYER_ANGLE_70.GetFloat(PropertyName.VAL);
            MY_66.SetFloat(194, PLAYER_ANGLE_70_val + (UnityEngine.Random.value - 0.5f) * 2.4f);
            var DRKL1TEX_79 = _world.AcknexObject.GetAcknexObject(2579876380);
            var MY_81 = MY;
            MY_81.SetAcknexObject(164, DRKL1TEX_79);
            var MY_84 = MY;
            MY_84.SetFloat(172, 20f);
            var MY_87 = MY;
            MY_87.SetFloat(168, 0.6f);
            var BULLET_88 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_90 = MY;
            MY_90.SetAcknexObject(199, BULLET_88);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DRKLLISTEN(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(176);
            if (temp_3 != 4f)
            {
                goto CONT;
            }
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat(205);
            if (temp_7 != 1f)
            {
                goto CONT;
            }
            yield break;
            CONT:
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat(202);
            if (temp_11 > 100f)
            {
                goto CONT1;
            }
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat(182);
            if (temp_15 == 0f)
            {
                goto CONT1;
            }
            yield break;
            CONT1:
            var MY_18 = MY;
            MY_18.SetAcknexObject(192, null);
            var MY_21 = MY;
            MY_21.SetAcknexObject(193, null);
            var CYCLEDRKLATTACK_22 = _world.AcknexObject.GetAcknexObject(1078179746);
            var MY_24 = MY;
            MY_24.SetAcknexObject(190, CYCLEDRKLATTACK_22);
            var DRKLHIT_25 = _world.AcknexObject.GetAcknexObject(989257407);
            var MY_27 = MY;
            MY_27.SetAcknexObject(209, DRKLHIT_25);
            var MY_30 = MY;
            MY_30.SetFloat(213, 0f);
            var MY_33 = MY;
            MY_33.SetFloat(176, 0f);
            var DRKL0TEX_34 = _world.AcknexObject.GetAcknexObject(2579840443);
            var MY_36 = MY;
            MY_36.SetAcknexObject(164, DRKL0TEX_34);
            var MY_39 = MY;
            MY_39.SetFloat(168, 0f);
            var MY_42 = MY;
            MY_42.SetAcknexObject(199, null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)120f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_46 = MY;
            var temp_47 = MY_46.GetFloat(173);
            if (temp_47 < 9f)
            {
                {
                    var enumerator = DRKLWANDER(MY, THERE);
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
        public IEnumerator DRKLJUMP(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(182);
            if (temp_3 == 1f)
            {
                goto BLOODSMELL;
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
            var temp_7 = MY_6.GetFloat(181);
            if (temp_7 == 0f)
            {
                yield break;
            }
            BLOODSMELL:
            var MY_10 = MY;
            MY_10.SetAcknexObject(192, null);
            var DRKLFOLLOWATTACK_11 = _world.AcknexObject.GetAcknexObject(908617765);
            var MY_13 = MY;
            MY_13.SetAcknexObject(193, DRKLFOLLOWATTACK_11);
            var CYCLEDRKLSHOOT_14 = _world.AcknexObject.GetAcknexObject(2266142359);
            var MY_16 = MY;
            MY_16.SetAcknexObject(190, CYCLEDRKLSHOOT_14);
            var ACTORJUMP_17 = _world.AcknexObject.GetAcknexObject(1531531490);
            var MY_19 = MY;
            MY_19.SetAcknexObject(189, ACTORJUMP_17);
            var MY_22 = MY;
            MY_22.SetFloat(176, 0f);
            var DRKL2TEX_23 = _world.AcknexObject.GetAcknexObject(2579912317);
            var MY_25 = MY;
            MY_25.SetAcknexObject(164, DRKL2TEX_23);
            if (UnityEngine.Random.value < 0.5f)
            {
                var DRKL2ATEX_28 = _world.AcknexObject.GetAcknexObject(3532028830);
                var MY_30 = MY;
                MY_30.SetAcknexObject(164, DRKL2ATEX_28);
            }
            var MY_33 = MY;
            MY_33.SetFloat(168, 1.5f);
            var MY_36 = MY;
            MY_36.SetFloat(169, 0.5f);
            var MY_39 = MY;
            MY_39.SetFloat(213, 1f);
            var MOVE_40 = _world.AcknexObject.GetAcknexObject(2089330692);
            var MY_42 = MY;
            MY_42.SetAcknexObject(199, MOVE_40);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DRKLLOOKFOR(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(176);
            if (temp_3 == 10f)
            {
                yield break;
            }
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat(176);
            if (temp_7 == 4f)
            {
                yield break;
            }
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat(202);
            if (temp_11 > 100f)
            {
                yield break;
            }
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat(182);
            if (temp_15 == 1f)
            {
                {
                    var enumerator = DRKLFOLLOWATTACK(MY, THERE);
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
            var FOLLOW_16 = _world.AcknexObject.GetAcknexObject(2968039200);
            var MY_18 = MY;
            var temp_19 = MY_18?.GetAcknexObject(199);
            if (temp_19 == FOLLOW_16)
            {
                yield break;
            }
            var MY_22 = MY;
            var temp_23 = MY_22.GetFloat(173);
            if (temp_23 > 5f)
            {
                yield break;
            }
            var DRKLJUMP_24 = _world.AcknexObject.GetAcknexObject(2580776150);
            var MY_26 = MY;
            MY_26.SetAcknexObject(192, DRKLJUMP_24);
            var DRKLFOLLOWATTACK_27 = _world.AcknexObject.GetAcknexObject(908617765);
            var MY_29 = MY;
            MY_29.SetAcknexObject(193, DRKLFOLLOWATTACK_27);
            var DRKLHEAR_30 = _world.AcknexObject.GetAcknexObject(2580686458);
            var MY_32 = MY;
            MY_32.SetAcknexObject(190, DRKLHEAR_30);
            var DRKLHIT_33 = _world.AcknexObject.GetAcknexObject(989257407);
            var MY_35 = MY;
            MY_35.SetAcknexObject(209, DRKLHIT_33);
            var MY_38 = MY;
            MY_38.SetFloat(213, 0f);
            var MY_41 = MY;
            MY_41.SetFloat(176, 10f);
            var DRKL0UPTEX_42 = _world.AcknexObject.GetAcknexObject(538122080);
            var MY_44 = MY;
            MY_44.SetAcknexObject(164, DRKL0UPTEX_42);
            var MY_47 = MY;
            MY_47.SetFloat(168, 0f);
            var BULLET_48 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_50 = MY;
            MY_50.SetAcknexObject(199, BULLET_48);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DRKLHEAR(IAcknexObject MY, IAcknexObject THERE)
        {
            var DRKLJUMP_0 = _world.AcknexObject.GetAcknexObject(2580776150);
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, DRKLJUMP_0);
            var DRKLFOLLOWATTACK_3 = _world.AcknexObject.GetAcknexObject(908617765);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, DRKLFOLLOWATTACK_3);
            var DRKLDOWN_6 = _world.AcknexObject.GetAcknexObject(2580554322);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, DRKLDOWN_6);
            var MY_11 = MY;
            MY_11.SetFloat(176, 10f);
            var DRKL0TEX_12 = _world.AcknexObject.GetAcknexObject(2579840443);
            var MY_14 = MY;
            MY_14.SetAcknexObject(164, DRKL0TEX_12);
            var MY_17 = MY;
            MY_17.SetFloat(168, 0f);
            var FOLLOW_18 = _world.AcknexObject.GetAcknexObject(2968039200);
            var MY_20 = MY;
            MY_20.SetAcknexObject(199, FOLLOW_18);
            var MY_23 = MY;
            MY_23.SetFloat(213, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DRKLDOWN(IAcknexObject MY, IAcknexObject THERE)
        {
            var DRKLJUMP_0 = _world.AcknexObject.GetAcknexObject(2580776150);
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, DRKLJUMP_0);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var DRKLSEARCH_6 = _world.AcknexObject.GetAcknexObject(1888344784);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, DRKLSEARCH_6);
            var MY_11 = MY;
            MY_11.SetFloat(213, 0f);
            var MY_14 = MY;
            MY_14.SetFloat(176, 10f);
            var DRKL0DNTEX_15 = _world.AcknexObject.GetAcknexObject(517889549);
            var MY_17 = MY;
            MY_17.SetAcknexObject(164, DRKL0DNTEX_15);
            var MY_20 = MY;
            MY_20.SetFloat(168, 0f);
            var BULLET_21 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_23 = MY;
            MY_23.SetAcknexObject(199, BULLET_21);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DRKLFOLLOWATTACK(IAcknexObject MY, IAcknexObject THERE)
        {
            var DRKLJUMP_0 = _world.AcknexObject.GetAcknexObject(2580776150);
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, DRKLJUMP_0);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var CYCLEDRKLSHOOT_6 = _world.AcknexObject.GetAcknexObject(2266142359);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, CYCLEDRKLSHOOT_6);
            var DRKLHIT_9 = _world.AcknexObject.GetAcknexObject(989257407);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, DRKLHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(213, 0f);
            var MY_17 = MY;
            MY_17.SetFloat(176, 2f);
            var DRKL1TEX_18 = _world.AcknexObject.GetAcknexObject(2579876380);
            var MY_20 = MY;
            MY_20.SetAcknexObject(164, DRKL1TEX_18);
            var MY_23 = MY;
            MY_23.SetFloat(168, 1.2f);
            var BULLET_24 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_26 = MY;
            MY_26.SetAcknexObject(199, BULLET_24);
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
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DRKLSHOOT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var DRKLFOLLOWATTACK_3 = _world.AcknexObject.GetAcknexObject(908617765);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, DRKLFOLLOWATTACK_3);
            var CYCLEDRKLSHOOT_6 = _world.AcknexObject.GetAcknexObject(2266142359);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, CYCLEDRKLSHOOT_6);
            var DRKLHIT_9 = _world.AcknexObject.GetAcknexObject(989257407);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, DRKLHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(213, 0f);
            var MY_17 = MY;
            MY_17.SetFloat(176, 3f);
            var DRKL3TEX_18 = _world.AcknexObject.GetAcknexObject(2579948254);
            var MY_20 = MY;
            MY_20.SetAcknexObject(164, DRKL3TEX_18);
            var MY_23 = MY;
            MY_23.SetFloat(168, 0f);
            var FOLLOW_24 = _world.AcknexObject.GetAcknexObject(2968039200);
            var MY_26 = MY;
            MY_26.SetAcknexObject(199, FOLLOW_24);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DRKLESCAPE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var DRKLHIDE_3 = _world.AcknexObject.GetAcknexObject(2580690900);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, DRKLHIDE_3);
            var CYCLEDRKLHIDE_6 = _world.AcknexObject.GetAcknexObject(3582341508);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, CYCLEDRKLHIDE_6);
            var DRKLHIT_9 = _world.AcknexObject.GetAcknexObject(989257407);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, DRKLHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(213, 0f);
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
            var MY_17 = MY;
            MY_17.SetFloat(176, 4f);
            var DRKL1TEX_18 = _world.AcknexObject.GetAcknexObject(2579876380);
            var MY_20 = MY;
            MY_20.SetAcknexObject(164, DRKL1TEX_18);
            var MY_23 = MY;
            MY_23.SetFloat(172, 30f);
            var MY_26 = MY;
            MY_26.SetFloat(168, 0.4f);
            var BULLET_27 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_29 = MY;
            MY_29.SetAcknexObject(199, BULLET_27);
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
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator DRKLDEAD(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(209, null);
            var MY_11 = MY;
            MY_11.SetAcknexObject(190, null);
            var MY_14 = MY;
            MY_14.SetFloat(213, 0f);
            var MY_17 = MY;
            MY_17.SetFloat(176, 9f);
            var DRKL9TEX_18 = _world.AcknexObject.GetAcknexObject(2580163876);
            var MY_20 = MY;
            MY_20.SetAcknexObject(164, DRKL9TEX_18);
            var MY_23 = MY;
            MY_23.SetFloat(168, 0f);
            var MY_26 = MY;
            MY_26.SetAcknexObject(199, null);
            var MY_29 = MY;
            MY_29.SetFloat(206, 1f);
            var MY_32 = MY;
            MY_32.SetFloat(207, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DRKLDIE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat(173, 10f);
            var MY_5 = MY;
            MY_5.SetAcknexObject(192, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, null);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, null);
            var DRKLDEAD_12 = _world.AcknexObject.GetAcknexObject(2580542696);
            var MY_14 = MY;
            MY_14.SetAcknexObject(190, DRKLDEAD_12);
            var MY_17 = MY;
            MY_17.SetFloat(176, 8f);
            var DRKL8TEX_18 = _world.AcknexObject.GetAcknexObject(2580127939);
            var MY_20 = MY;
            MY_20.SetAcknexObject(164, DRKL8TEX_18);
            var MY_23 = MY;
            MY_23.SetFloat(168, 0f);
            var MY_26 = MY;
            MY_26.SetFloat(213, 0f);
            var MY_29 = MY;
            MY_29.SetFloat(165, -0.05f);
            var MY_32 = MY;
            MY_32.SetAcknexObject(199, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DRKLIMPLODE(IAcknexObject MY, IAcknexObject THERE)
        {
            var DISTX_0 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_1 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_1_val = DISTX_1.GetFloat(PropertyName.VAL);
            var MY_4 = MY;
            var temp_5 = MY_4.GetFloat(195);
            var EXPLOSION_CENTER_8 = _world.GetSynonymObject(3704223598);
            var temp_9 = EXPLOSION_CENTER_8.GetFloat(195);
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat(195);
            var EXPLOSION_CENTER_18 = _world.GetSynonymObject(3704223598);
            var temp_19 = EXPLOSION_CENTER_18.GetFloat(195);
            var MY_24 = MY;
            var temp_25 = MY_24.GetFloat(196);
            var EXPLOSION_CENTER_28 = _world.GetSynonymObject(3704223598);
            var temp_29 = EXPLOSION_CENTER_28.GetFloat(196);
            var MY_34 = MY;
            var temp_35 = MY_34.GetFloat(196);
            var EXPLOSION_CENTER_38 = _world.GetSynonymObject(3704223598);
            var temp_39 = EXPLOSION_CENTER_38.GetFloat(196);
            DISTX_0.SetFloat(231, (temp_5 - temp_9) * (temp_15 - temp_19) + (temp_25 - temp_29) * (temp_35 - temp_39));
            var DISTX_41 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_41_val = DISTX_41.GetFloat(PropertyName.VAL);
            var DISTX_42 = _world.GetObject(ObjectType.Skill, 217512505);
            DISTX_42.SetFloat(231, MathUtils.Sqrt(DISTX_41_val));
            var DISTZ_43 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_44 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_44_val = DISTZ_44.GetFloat(PropertyName.VAL);
            var MY_46 = MY;
            var temp_47 = MY_46.GetFloat(165);
            var EXPLOSION_CENTER_50 = _world.GetSynonymObject(3704223598);
            var temp_51 = EXPLOSION_CENTER_50.GetFloat(165);
            DISTZ_43.SetFloat(231, temp_47 - temp_51);
            var DISTX_53 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_53_val = DISTX_53.GetFloat(PropertyName.VAL);
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
            MY_56.SetFloat(206, 1f);
            var MY_59 = MY;
            MY_59.SetFloat(207, 0f);
            var MY_62 = MY;
            MY_62.SetAcknexObject(192, null);
            var MY_65 = MY;
            MY_65.SetAcknexObject(193, null);
            var MY_68 = MY;
            MY_68.SetAcknexObject(209, null);
            var VANISHFORGOOD_69 = _world.AcknexObject.GetAcknexObject(1333438470);
            var MY_71 = MY;
            MY_71.SetAcknexObject(190, VANISHFORGOOD_69);
            var MY_74 = MY;
            MY_74.SetFloat(176, 8f);
            var DRKL0ATEX_75 = _world.AcknexObject.GetAcknexObject(3529656988);
            var MY_77 = MY;
            MY_77.SetAcknexObject(164, DRKL0ATEX_75);
            var MY_80 = MY;
            MY_80.SetFloat(168, 0f);
            var MY_83 = MY;
            MY_83.SetAcknexObject(199, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DRKLHIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill, 441);
            var SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat(PropertyName.VAL);
            if (SHOOT_FAC_1_val == 0f)
            {
                goto OBSTACLE;
            }
            var MY_2 = MY;
            var HIT_3 = _world.GetSynonymObject(704);
            if (HIT_3 != MY_2)
            {
                goto EXPLOSION;
            }
            _world.SetSynonymObject(704, null);
            goto CONT;
            EXPLOSION:
            var EXPLOSION_ON_7 = _world.GetObject(ObjectType.Skill, 3352630890);
            var EXPLOSION_ON_7_val = EXPLOSION_ON_7.GetFloat(PropertyName.VAL);
            if (EXPLOSION_ON_7_val == 0f)
            {
                goto OBSTACLE;
            }
            var DISTX_8 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_9 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_9_val = DISTX_9.GetFloat(PropertyName.VAL);
            var MY_12 = MY;
            var temp_13 = MY_12.GetFloat(195);
            var EXPLOSION_CENTER_16 = _world.GetSynonymObject(3704223598);
            var temp_17 = EXPLOSION_CENTER_16.GetFloat(195);
            var MY_22 = MY;
            var temp_23 = MY_22.GetFloat(195);
            var EXPLOSION_CENTER_26 = _world.GetSynonymObject(3704223598);
            var temp_27 = EXPLOSION_CENTER_26.GetFloat(195);
            var MY_32 = MY;
            var temp_33 = MY_32.GetFloat(196);
            var EXPLOSION_CENTER_36 = _world.GetSynonymObject(3704223598);
            var temp_37 = EXPLOSION_CENTER_36.GetFloat(196);
            var MY_42 = MY;
            var temp_43 = MY_42.GetFloat(196);
            var EXPLOSION_CENTER_46 = _world.GetSynonymObject(3704223598);
            var temp_47 = EXPLOSION_CENTER_46.GetFloat(196);
            DISTX_8.SetFloat(231, (temp_13 - temp_17) * (temp_23 - temp_27) + (temp_33 - temp_37) * (temp_43 - temp_47));
            var DISTX_49 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_49_val = DISTX_49.GetFloat(PropertyName.VAL);
            var DISTX_50 = _world.GetObject(ObjectType.Skill, 217512505);
            DISTX_50.SetFloat(231, MathUtils.Sqrt(DISTX_49_val));
            var DISTX_52 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_52_val = DISTX_52.GetFloat(PropertyName.VAL);
            if (DISTX_52_val > 25f)
            {
                goto OBSTACLE;
            }
            HIT:
            var EXPLOSION_ON_54 = _world.GetObject(ObjectType.Skill, 3352630890);
            var EXPLOSION_ON_54_val = EXPLOSION_ON_54.GetFloat(PropertyName.VAL);
            if (EXPLOSION_ON_54_val != 2f)
            {
                goto CONT;
            }
            var MY_57 = MY;
            var temp_58 = MY_57.GetFloat(205);
            if (temp_58 == 1f)
            {
                {
                    var enumerator = DRKLIMPLODE(MY, THERE);
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
            var MY_60 = MY;
            var MY_62 = MY;
            var temp_63 = MY_62.GetFloat(173);
            var MY_65 = MY;
            var temp_66 = MY_65.GetFloat(173);
            var SHOOT_FAC_68 = _world.GetObject(ObjectType.Skill, 441);
            var SHOOT_FAC_68_val = SHOOT_FAC_68.GetFloat(PropertyName.VAL);
            MY_60.SetFloat(173, temp_66 + SHOOT_FAC_68_val * (UnityEngine.Random.value + 2f) / 3f);
            var MY_79 = MY;
            var temp_80 = MY_79.GetFloat(173);
            if (temp_80 > 5f)
            {
                goto DIE;
            }
            if (UnityEngine.Random.value < 0.05f)
            {
                goto DIE;
            }
            var MY_84 = MY;
            var temp_85 = MY_84?.GetAcknexObject(164);
            _world.SetSynonymObject(2581529482, temp_85);
            var DRKL5TEX_87 = _world.AcknexObject.GetAcknexObject(2580020128);
            var MY_89 = MY;
            MY_89.SetAcknexObject(164, DRKL5TEX_87);
            var MY_92 = MY;
            MY_92.SetAcknexObject(192, null);
            var MY_95 = MY;
            MY_95.SetAcknexObject(193, null);
            var MY_98 = MY;
            MY_98.SetAcknexObject(209, null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)6f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var DRKLHIT_100 = _world.AcknexObject.GetAcknexObject(989257407);
            var MY_102 = MY;
            MY_102.SetAcknexObject(209, DRKLHIT_100);
            var DRKL_TEX_103 = _world.GetSynonymObject(2581529482);
            var MY_105 = MY;
            MY_105.SetAcknexObject(164, DRKL_TEX_103);
            var MY_108 = MY;
            var temp_109 = MY_108.GetFloat(173);
            if (temp_109 > 4f)
            {
                {
                    var enumerator = DRKLHIDE(MY, THERE);
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
            var MY_112 = MY;
            var temp_113 = MY_112.GetFloat(176);
            if (temp_113 != 4f)
            {
                {
                    var enumerator = DRKLFOLLOWATTACK(MY, THERE);
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
            var MY_116 = MY;
            MY_116.SetFloat(173, 10f);
            {
                var enumerator = DRKLDIE(MY, THERE);
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
                var enumerator = DRKLTURN(MY, THERE);
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
        public IEnumerator CYCLEDRKLATTACK(IAcknexObject MY, IAcknexObject THERE)
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
            MY_2.SetFloat(213, 0f);
            var MY_5 = MY;
            MY_5.SetFloat(165, -0.05f);
            var MY_8 = MY;
            MY_8.SetFloat(169, 0f);
            var MY_11 = MY;
            MY_11.SetAcknexObject(189, null);
            {
                var enumerator = DRKLTALK(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var SHOT_SOUND_ON_13 = _world.GetObject(ObjectType.Skill, 3372273679);
            var SHOT_SOUND_ON_13_val = SHOT_SOUND_ON_13.GetFloat(PropertyName.VAL);
            if (SHOT_SOUND_ON_13_val == 0f)
            {
                goto CONT;
            }
            {
                var enumerator = DRKLLOOKFOR(MY, THERE);
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
            var MY_16 = MY;
            var temp_17 = MY_16.GetFloat(181);
            if (temp_17 == 0f)
            {
                yield break;
            }
            var MY_20 = MY;
            var temp_21 = MY_20.GetFloat(182);
            if (temp_21 == 1f)
            {
                goto CONT1;
            }
            var MY_24 = MY;
            MY_24.SetFloat(182, 1f);
            var DRKL02SND_25 = _world.AcknexObject.GetAcknexObject(3529117121);
            var MY_27 = MY;
            _world.PlaySound(DRKL02SND_25, 0.7f, MY_27);
            CONT1:
            {
                var enumerator = DRKLFOLLOWATTACK(MY, THERE);
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
        public IEnumerator CYCLEDRKLHIDE(IAcknexObject MY, IAcknexObject THERE)
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
            MY_2.SetFloat(213, 0f);
            var MY_5 = MY;
            MY_5.SetFloat(165, -0.05f);
            var MY_8 = MY;
            MY_8.SetFloat(169, 0f);
            var MY_11 = MY;
            MY_11.SetAcknexObject(189, null);
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat(205);
            if (temp_15 == 0f)
            {
                goto STOP;
            }
            var MY_18 = MY;
            MY_18.SetFloat(168, 0.6f);
            var BULLET_19 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_21 = MY;
            MY_21.SetAcknexObject(199, BULLET_19);
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
            var MY_23 = MY;
            var MY_25 = MY;
            var temp_26 = MY_25.GetFloat(194);
            var MY_28 = MY;
            var temp_29 = MY_28.GetFloat(194);
            MY_23.SetFloat(194, temp_29 + 2f * (UnityEngine.Random.value - 0.5f));
            yield break;
            STOP:
            var MY_40 = MY;
            MY_40.SetFloat(168, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CYCLEDRKLSHOOT(IAcknexObject MY, IAcknexObject THERE)
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
            var temp_3 = MY_2.GetFloat(173);
            if (temp_3 > 9f)
            {
                {
                    var enumerator = DRKLDIE(MY, THERE);
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
            var MY_6 = MY;
            MY_6.SetFloat(213, 0f);
            var MY_9 = MY;
            MY_9.SetFloat(165, -0.05f);
            var MY_12 = MY;
            MY_12.SetFloat(169, 0f);
            var MY_15 = MY;
            MY_15.SetAcknexObject(189, null);
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
            var MY_18 = MY;
            var temp_19 = MY_18.GetFloat(181);
            if (temp_19 == 0f)
            {
                goto CONTFLAG2;
            }
            goto PLAYERSEEN;
            CONTFLAG2:
            var MY_22 = MY;
            var temp_23 = MY_22.GetFloat(182);
            if (temp_23 == 1f)
            {
                goto ATTACK;
            }
            {
                var enumerator = DRKLWAIT(MY, THERE);
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
            PLAYERSEEN:
            var MY_26 = MY;
            var temp_27 = MY_26.GetFloat(202);
            if (temp_27 < 5f)
            {
                goto CONT;
            }
            var DRKLDELTA_28 = _world.GetObject(ObjectType.Skill, 3553510916);
            var DRKLDELTA_29 = _world.GetObject(ObjectType.Skill, 3553510916);
            var DRKLDELTA_29_val = DRKLDELTA_29.GetFloat(PropertyName.VAL);
            var MY_32 = MY;
            var temp_33 = MY_32.GetFloat(179);
            var MY_36 = MY;
            var temp_37 = MY_36.GetFloat(195);
            var MY_42 = MY;
            var temp_43 = MY_42.GetFloat(179);
            var MY_46 = MY;
            var temp_47 = MY_46.GetFloat(195);
            var MY_52 = MY;
            var temp_53 = MY_52.GetFloat(180);
            var MY_56 = MY;
            var temp_57 = MY_56.GetFloat(196);
            var MY_62 = MY;
            var temp_63 = MY_62.GetFloat(180);
            var MY_66 = MY;
            var temp_67 = MY_66.GetFloat(196);
            DRKLDELTA_28.SetFloat(231, (temp_33 - temp_37) * (temp_43 - temp_47) + (temp_53 - temp_57) * (temp_63 - temp_67));
            var MY_70 = MY;
            var temp_71 = MY_70.GetFloat(195);
            var MY_73 = MY;
            MY_73.SetFloat(179, temp_71);
            var MY_75 = MY;
            var temp_76 = MY_75.GetFloat(196);
            var MY_78 = MY;
            MY_78.SetFloat(180, temp_76);
            var DRKLDELTA_80 = _world.GetObject(ObjectType.Skill, 3553510916);
            var DRKLDELTA_80_val = DRKLDELTA_80.GetFloat(PropertyName.VAL);
            if (DRKLDELTA_80_val < 0.25f)
            {
                {
                    var enumerator = DRKLJUMP(MY, THERE);
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
            var MY_83 = MY;
            var temp_84 = MY_83.GetFloat(202);
            if (temp_84 > 10f)
            {
                goto ATTACK;
            }
            var PLAYER_RESULT_85 = _world.GetObject(ObjectType.Skill, 1861765784);
            var PLAYER_RESULT_86 = _world.GetObject(ObjectType.Skill, 1861765784);
            var PLAYER_RESULT_86_val = PLAYER_RESULT_86.GetFloat(PropertyName.VAL);
            var DRKLSHOOTFACTOR_87 = _world.GetObject(ObjectType.Skill, 3769297958);
            var DRKLSHOOTFACTOR_87_val = DRKLSHOOTFACTOR_87.GetFloat(PropertyName.VAL);
            PLAYER_RESULT_85.SetFloat(231, DRKLSHOOTFACTOR_87_val * (1f + UnityEngine.Random.value));
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
            {
                var enumerator = DRKLSHOOT(MY, THERE);
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
                var enumerator = DRKLFOLLOWATTACK(MY, THERE);
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
        public IEnumerator DRKLTALK(IAcknexObject MY, IAcknexObject THERE)
        {
            if (UnityEngine.Random.value > 0.95f)
            {
                var DRKL05SND_2 = _world.AcknexObject.GetAcknexObject(3529224932);
                var MY_4 = MY;
                _world.PlaySound(DRKL05SND_2, 0.5f, MY_4);
            }
            if (UnityEngine.Random.value < 0.07f)
            {
                var DRKL02SND_7 = _world.AcknexObject.GetAcknexObject(3529117121);
                var MY_9 = MY;
                _world.PlaySound(DRKL02SND_7, 0.5f, MY_9);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator TROPTURN(IAcknexObject MY, IAcknexObject THERE)
        {
            var WAITTIME_0 = _world.GetObject(ObjectType.Skill, 33817649);
            var WAITTIME_1 = _world.GetObject(ObjectType.Skill, 33817649);
            var WAITTIME_1_val = WAITTIME_1.GetFloat(PropertyName.VAL);
            WAITTIME_0.SetFloat(231, 64f * UnityEngine.Random.value + 16f);
            if (UnityEngine.Random.value < 0.07f)
            {
                {
                    var enumerator = TROPLISTEN(MY, THERE);
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
                var RIGHTTURNTROP_11 = _world.GetObject(ObjectType.Skill, 16787353);
                var RIGHTTURNTROP_12 = _world.GetObject(ObjectType.Skill, 16787353);
                var RIGHTTURNTROP_12_val = RIGHTTURNTROP_12.GetFloat(PropertyName.VAL);
                var RIGHTTURNTROP_14 = _world.GetObject(ObjectType.Skill, 16787353);
                var RIGHTTURNTROP_14_val = RIGHTTURNTROP_14.GetFloat(PropertyName.VAL);
                var RIGHTTURNTROP_20 = _world.GetObject(ObjectType.Skill, 16787353);
                var RIGHTTURNTROP_20_val = RIGHTTURNTROP_20.GetFloat(PropertyName.VAL);
                RIGHTTURNTROP_11.SetFloat(231, (RIGHTTURNTROP_14_val - 1f) * (RIGHTTURNTROP_20_val - 1f));
            }
            var RIGHTTURNTROP_24 = _world.GetObject(ObjectType.Skill, 16787353);
            var RIGHTTURNTROP_24_val = RIGHTTURNTROP_24.GetFloat(PropertyName.VAL);
            if (RIGHTTURNTROP_24_val > RIGHTTURNTROP_24.GetFloat(PropertyName.MAX))
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
        public IEnumerator TROPBACKOFF(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(189, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(192, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, null);
            var CYCLETROPBACK_9 = _world.AcknexObject.GetAcknexObject(2738689971);
            var MY_11 = MY;
            MY_11.SetAcknexObject(190, CYCLETROPBACK_9);
            var TROPHIT_12 = _world.AcknexObject.GetAcknexObject(182795863);
            var MY_14 = MY;
            MY_14.SetAcknexObject(209, TROPHIT_12);
            var MY_17 = MY;
            MY_17.SetFloat(207, 1f);
            var MY_20 = MY;
            MY_20.SetFloat(176, 1f);
            var TROP1TEX_21 = _world.AcknexObject.GetAcknexObject(1736449204);
            var MY_23 = MY;
            MY_23.SetAcknexObject(164, TROP1TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat(168, 0.3f);
            var BULLET_27 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_29 = MY;
            MY_29.SetAcknexObject(199, BULLET_27);
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
            var temp_34 = MY_33.GetFloat(194);
            var MY_36 = MY;
            var temp_37 = MY_36.GetFloat(194);
            MY_31.SetFloat(194, temp_37 + UnityEngine.Random.value - 0.5f);
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
            var MY_45 = MY;
            var temp_46 = MY_45.GetFloat(173);
            if (temp_46 > 5f)
            {
                yield break;
            }
            {
                var enumerator = TROPWAIT(MY, THERE);
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
        public IEnumerator TROPWAIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(176);
            if (temp_3 != 4f)
            {
                goto CONT;
            }
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat(205);
            if (temp_7 != 1f)
            {
                goto CONT;
            }
            yield break;
            CONT:
            var MY_10 = MY;
            MY_10.SetAcknexObject(189, null);
            var MY_13 = MY;
            MY_13.SetAcknexObject(192, null);
            var MY_16 = MY;
            MY_16.SetAcknexObject(193, null);
            var CYCLETROPATTACK_17 = _world.AcknexObject.GetAcknexObject(1708986426);
            var MY_19 = MY;
            MY_19.SetAcknexObject(190, CYCLETROPATTACK_17);
            var TROPHIT_20 = _world.AcknexObject.GetAcknexObject(182795863);
            var MY_22 = MY;
            MY_22.SetAcknexObject(209, TROPHIT_20);
            var MY_25 = MY;
            MY_25.SetFloat(207, 0f);
            var MY_28 = MY;
            MY_28.SetFloat(213, 0f);
            var MY_31 = MY;
            MY_31.SetFloat(165, -0.05f);
            var MY_34 = MY;
            MY_34.SetFloat(176, 1f);
            var TROP0TEX_35 = _world.AcknexObject.GetAcknexObject(1736413267);
            var MY_37 = MY;
            MY_37.SetAcknexObject(164, TROP0TEX_35);
            var MY_40 = MY;
            MY_40.SetFloat(168, 0f);
            var MY_43 = MY;
            MY_43.SetAcknexObject(199, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator TROPWANDER(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(189, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(192, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, null);
            var CYCLETROPATTACK_9 = _world.AcknexObject.GetAcknexObject(1708986426);
            var MY_11 = MY;
            MY_11.SetAcknexObject(190, CYCLETROPATTACK_9);
            var TROPHIT_12 = _world.AcknexObject.GetAcknexObject(182795863);
            var MY_14 = MY;
            MY_14.SetAcknexObject(209, TROPHIT_12);
            var MY_17 = MY;
            MY_17.SetFloat(207, 1f);
            var MY_20 = MY;
            MY_20.SetFloat(213, 0f);
            var MY_23 = MY;
            MY_23.SetFloat(219, 0f);
            var MY_26 = MY;
            MY_26.SetFloat(176, 1f);
            var TROP1TEX_27 = _world.AcknexObject.GetAcknexObject(1736449204);
            var MY_29 = MY;
            MY_29.SetAcknexObject(164, TROP1TEX_27);
            var MY_32 = MY;
            MY_32.SetFloat(168, 0.3f);
            var BULLET_33 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_35 = MY;
            MY_35.SetAcknexObject(199, BULLET_33);
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
        public IEnumerator TROPSEARCH(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(189, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(192, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, null);
            var CYCLETROPATTACK_9 = _world.AcknexObject.GetAcknexObject(1708986426);
            var MY_11 = MY;
            MY_11.SetAcknexObject(190, CYCLETROPATTACK_9);
            var TROPHIT_12 = _world.AcknexObject.GetAcknexObject(182795863);
            var MY_14 = MY;
            MY_14.SetAcknexObject(209, TROPHIT_12);
            var MY_17 = MY;
            MY_17.SetFloat(207, 1f);
            var MY_20 = MY;
            MY_20.SetFloat(219, 0f);
            var MY_23 = MY;
            MY_23.SetFloat(176, 11f);
            var TROPATEX_24 = _world.AcknexObject.GetAcknexObject(1737024196);
            var MY_26 = MY;
            MY_26.SetAcknexObject(164, TROPATEX_24);
            var MY_29 = MY;
            MY_29.SetFloat(168, 0.3f);
            var BULLET_30 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_32 = MY;
            MY_32.SetAcknexObject(199, BULLET_30);
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
        public IEnumerator TROPHIDE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(189, null);
            var TROPESCAPE_3 = _world.AcknexObject.GetAcknexObject(1987912643);
            var MY_5 = MY;
            MY_5.SetAcknexObject(192, TROPESCAPE_3);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, null);
            var TROPHIDE_9 = _world.AcknexObject.GetAcknexObject(1737263724);
            var MY_11 = MY;
            MY_11.SetAcknexObject(190, TROPHIDE_9);
            var TROPHIT_12 = _world.AcknexObject.GetAcknexObject(182795863);
            var MY_14 = MY;
            MY_14.SetAcknexObject(209, TROPHIT_12);
            var MY_17 = MY;
            MY_17.SetFloat(207, 1f);
            var MY_20 = MY;
            MY_20.SetFloat(219, 0f);
            var MY_23 = MY;
            var temp_24 = MY_23.GetFloat(176);
            if (temp_24 == 4f)
            {
                goto HIDDING;
            }
            var MY_27 = MY;
            MY_27.SetFloat(176, 4f);
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
            var temp_32 = MY_31.GetFloat(194);
            var MY_34 = MY;
            var temp_35 = MY_34.GetFloat(194);
            MY_29.SetFloat(194, temp_35 + (UnityEngine.Random.value - 0.5f) * 2.4f);
            var TROP1TEX_44 = _world.AcknexObject.GetAcknexObject(1736449204);
            var MY_46 = MY;
            MY_46.SetAcknexObject(164, TROP1TEX_44);
            var MY_49 = MY;
            MY_49.SetFloat(172, 20f);
            var MY_52 = MY;
            MY_52.SetFloat(168, 0.6f);
            var BULLET_53 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_55 = MY;
            MY_55.SetAcknexObject(199, BULLET_53);
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
            var temp_60 = MY_59.GetFloat(173);
            if (temp_60 > 5f)
            {
                yield break;
            }
            var MY_63 = MY;
            var temp_64 = MY_63.GetFloat(173);
            var MY_66 = MY;
            MY_66.SetFloat(173, temp_64 + -2f);
            {
                var enumerator = TROPFOLLOWATTACK(MY, THERE);
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
            var MY_68 = MY;
            var MY_70 = MY;
            var temp_71 = MY_70.GetFloat(194);
            var MY_73 = MY;
            var temp_74 = MY_73.GetFloat(194);
            MY_68.SetFloat(194, temp_74 + (UnityEngine.Random.value - 0.5f) * 2.4f);
            var TROP1TEX_83 = _world.AcknexObject.GetAcknexObject(1736449204);
            var MY_85 = MY;
            MY_85.SetAcknexObject(164, TROP1TEX_83);
            var MY_88 = MY;
            MY_88.SetFloat(172, 20f);
            var MY_91 = MY;
            MY_91.SetFloat(168, 0.6f);
            var BULLET_92 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_94 = MY;
            MY_94.SetAcknexObject(199, BULLET_92);
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
        public IEnumerator TROPLISTEN(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(176);
            if (temp_3 != 4f)
            {
                goto CONT;
            }
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat(205);
            if (temp_7 != 1f)
            {
                goto CONT;
            }
            yield break;
            CONT:
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat(202);
            if (temp_11 > 100f)
            {
                goto CONT1;
            }
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat(182);
            if (temp_15 == 0f)
            {
                goto CONT1;
            }
            yield break;
            CONT1:
            var MY_18 = MY;
            MY_18.SetAcknexObject(192, null);
            var MY_21 = MY;
            MY_21.SetAcknexObject(193, null);
            var CYCLETROPATTACK_22 = _world.AcknexObject.GetAcknexObject(1708986426);
            var MY_24 = MY;
            MY_24.SetAcknexObject(190, CYCLETROPATTACK_22);
            var TROPHIT_25 = _world.AcknexObject.GetAcknexObject(182795863);
            var MY_27 = MY;
            MY_27.SetAcknexObject(209, TROPHIT_25);
            var MY_30 = MY;
            MY_30.SetFloat(207, 0f);
            var MY_33 = MY;
            MY_33.SetFloat(219, 0f);
            var MY_36 = MY;
            MY_36.SetFloat(176, 0f);
            var TROP0TEX_37 = _world.AcknexObject.GetAcknexObject(1736413267);
            var MY_39 = MY;
            MY_39.SetAcknexObject(164, TROP0TEX_37);
            var MY_42 = MY;
            MY_42.SetFloat(168, 0f);
            var MY_45 = MY;
            MY_45.SetAcknexObject(199, null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)120f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_49 = MY;
            var temp_50 = MY_49.GetFloat(173);
            if (temp_50 < 9f)
            {
                {
                    var enumerator = TROPWANDER(MY, THERE);
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
        public IEnumerator TROPWARNING(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var TROPBACKOFF_6 = _world.AcknexObject.GetAcknexObject(893060478);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, TROPBACKOFF_6);
            var TROPHIT_9 = _world.AcknexObject.GetAcknexObject(182795863);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, TROPHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(176, 7f);
            var TROP7TEX_15 = _world.AcknexObject.GetAcknexObject(1736664826);
            var MY_17 = MY;
            MY_17.SetAcknexObject(164, TROP7TEX_15);
            if (UnityEngine.Random.value < 0.5f)
            {
                var TROP7ATEX_20 = _world.AcknexObject.GetAcknexObject(1474665403);
                var MY_22 = MY;
                MY_22.SetAcknexObject(164, TROP7ATEX_20);
            }
            var MY_24 = MY;
            var temp_25 = MY_24?.GetAcknexObject(164);
            _world.SetSynonymObject(1738102306, temp_25);
            var RANDOMTROP_28 = _world.GetObject(ObjectType.Skill, 1092120691);
            var RANDOMTROP_28_val = RANDOMTROP_28.GetFloat(PropertyName.VAL);
            var RANDOMTROP_29 = _world.GetObject(ObjectType.Skill, 1092120691);
            RANDOMTROP_29.SetFloat(231, Random.Range(0f, 1f));
            var RANDOMTROP_31 = _world.GetObject(ObjectType.Skill, 1092120691);
            var RANDOMTROP_31_val = RANDOMTROP_31.GetFloat(PropertyName.VAL);
            if (RANDOMTROP_31_val < 0.2f)
            {
                goto OVERTHERE;
            }
            var RANDOMTROP_33 = _world.GetObject(ObjectType.Skill, 1092120691);
            var RANDOMTROP_33_val = RANDOMTROP_33.GetFloat(PropertyName.VAL);
            if (RANDOMTROP_33_val < 0.4f)
            {
                goto GETDOWN;
            }
            var TROP07SND_34 = _world.AcknexObject.GetAcknexObject(1466003774);
            var TROP_TEX_36 = _world.GetSynonymObject(1738102306);
            TROP_TEX_36.SetAcknexObject(286, TROP07SND_34);
            goto CONT;
            GETDOWN:
            var TROP03SND_37 = _world.AcknexObject.GetAcknexObject(1465860026);
            var TROP_TEX_39 = _world.GetSynonymObject(1738102306);
            TROP_TEX_39.SetAcknexObject(286, TROP03SND_37);
            goto CONT;
            OVERTHERE:
            var TROP02SND_40 = _world.AcknexObject.GetAcknexObject(1465824089);
            var TROP_TEX_42 = _world.GetSynonymObject(1738102306);
            TROP_TEX_42.SetAcknexObject(286, TROP02SND_40);
            goto CONT;
            CONT:
            var MY_45 = MY;
            MY_45.SetFloat(168, 0f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)32f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_49 = MY;
            var temp_50 = MY_49.GetFloat(173);
            if (temp_50 > 5f)
            {
                yield break;
            }
            var MY_52 = MY;
            var MY_54 = MY;
            var temp_55 = MY_54.GetFloat(194);
            var MY_57 = MY;
            var temp_58 = MY_57.GetFloat(194);
            MY_52.SetFloat(194, temp_58 + 2f);
            if (UnityEngine.Random.value < 0.5f)
            {
                var MY_64 = MY;
                var MY_66 = MY;
                var temp_67 = MY_66.GetFloat(194);
                var MY_69 = MY;
                var temp_70 = MY_69.GetFloat(194);
                MY_64.SetFloat(194, temp_70 - 2f);
            }
            {
                var enumerator = TROPBACKOFF(MY, THERE);
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
        public IEnumerator TROPLOOKFOR(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(176);
            if (temp_3 == 10f)
            {
                yield break;
            }
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat(202);
            if (temp_7 > 100f)
            {
                yield break;
            }
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat(182);
            if (temp_11 == 1f)
            {
                {
                    var enumerator = TROPFOLLOWATTACK(MY, THERE);
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
            var FOLLOW_12 = _world.AcknexObject.GetAcknexObject(2968039200);
            var MY_14 = MY;
            var temp_15 = MY_14?.GetAcknexObject(199);
            if (temp_15 == FOLLOW_12)
            {
                yield break;
            }
            var MY_18 = MY;
            var temp_19 = MY_18.GetFloat(173);
            if (temp_19 > 5f)
            {
                yield break;
            }
            var MY_22 = MY;
            MY_22.SetAcknexObject(192, null);
            var MY_25 = MY;
            MY_25.SetAcknexObject(193, null);
            var TROPSEARCH_26 = _world.AcknexObject.GetAcknexObject(2519151464);
            var MY_28 = MY;
            MY_28.SetAcknexObject(190, TROPSEARCH_26);
            var TROPHIT_29 = _world.AcknexObject.GetAcknexObject(182795863);
            var MY_31 = MY;
            MY_31.SetAcknexObject(209, TROPHIT_29);
            var MY_34 = MY;
            MY_34.SetFloat(207, 0f);
            var MY_37 = MY;
            MY_37.SetFloat(219, 0f);
            var MY_40 = MY;
            MY_40.SetFloat(176, 10f);
            var TROPATEX_41 = _world.AcknexObject.GetAcknexObject(1737024196);
            var MY_43 = MY;
            MY_43.SetAcknexObject(164, TROPATEX_41);
            var MY_46 = MY;
            MY_46.SetFloat(168, 0f);
            var BULLET_47 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_49 = MY;
            MY_49.SetAcknexObject(199, BULLET_47);
            var MY_52 = MY;
            var temp_53 = MY_52.GetFloat(202);
            if (temp_53 < 100f)
            {
                var TROPFOLLOWATTACK_54 = _world.AcknexObject.GetAcknexObject(603443901);
                var MY_56 = MY;
                MY_56.SetAcknexObject(190, TROPFOLLOWATTACK_54);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator TROPFOLLOW(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var CYCLETROPATTACK_6 = _world.AcknexObject.GetAcknexObject(1708986426);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, CYCLETROPATTACK_6);
            var TROPHIT_9 = _world.AcknexObject.GetAcknexObject(182795863);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, TROPHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(207, 1f);
            var MY_17 = MY;
            MY_17.SetFloat(219, 0f);
            var MY_20 = MY;
            MY_20.SetFloat(176, 1f);
            var TROP1TEX_21 = _world.AcknexObject.GetAcknexObject(1736449204);
            var MY_23 = MY;
            MY_23.SetAcknexObject(164, TROP1TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat(168, 0.4f);
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
        public IEnumerator TROPFOLLOWATTACK(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var CYCLETROPSHOOT_6 = _world.AcknexObject.GetAcknexObject(202849327);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, CYCLETROPSHOOT_6);
            var TROPHIT_9 = _world.AcknexObject.GetAcknexObject(182795863);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, TROPHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(207, 1f);
            var MY_17 = MY;
            MY_17.SetFloat(219, 0f);
            var MY_20 = MY;
            MY_20.SetFloat(176, 2f);
            var TROPATEX_21 = _world.AcknexObject.GetAcknexObject(1737024196);
            var MY_23 = MY;
            MY_23.SetAcknexObject(164, TROPATEX_21);
            var MY_26 = MY;
            MY_26.SetFloat(168, 0.4f);
            var BULLET_27 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_29 = MY;
            MY_29.SetAcknexObject(199, BULLET_27);
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
        public IEnumerator TROPFOLLOWWARNING(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var CYCLETROPWARNING_6 = _world.AcknexObject.GetAcknexObject(2458966328);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, CYCLETROPWARNING_6);
            var TROPHIT_9 = _world.AcknexObject.GetAcknexObject(182795863);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, TROPHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(207, 1f);
            var MY_17 = MY;
            MY_17.SetFloat(219, 0f);
            var MY_20 = MY;
            MY_20.SetFloat(176, 1f);
            var TROP1TEX_21 = _world.AcknexObject.GetAcknexObject(1736449204);
            var MY_23 = MY;
            MY_23.SetAcknexObject(164, TROP1TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat(168, 0.4f);
            var BULLET_27 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_29 = MY;
            MY_29.SetAcknexObject(199, BULLET_27);
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
        public IEnumerator TROPAIM(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var TROPSHOOT_6 = _world.AcknexObject.GetAcknexObject(1508117631);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, TROPSHOOT_6);
            var TROPHIT_9 = _world.AcknexObject.GetAcknexObject(182795863);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, TROPHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(207, 0f);
            var MY_17 = MY;
            MY_17.SetFloat(219, 0f);
            var MY_20 = MY;
            MY_20.SetFloat(176, 3f);
            var TROP3ATEX_21 = _world.AcknexObject.GetAcknexObject(1469921719);
            var MY_23 = MY;
            MY_23.SetAcknexObject(164, TROP3ATEX_21);
            var MY_26 = MY;
            MY_26.SetFloat(168, 0f);
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
                var enumerator = TROPSHOUT(MY, THERE);
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
        public IEnumerator TROPSHOOT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var CYCLETROPSHOOT_6 = _world.AcknexObject.GetAcknexObject(202849327);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, CYCLETROPSHOOT_6);
            var TROPHIT_9 = _world.AcknexObject.GetAcknexObject(182795863);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, TROPHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(207, 0f);
            var MY_17 = MY;
            MY_17.SetFloat(219, 0f);
            var MY_20 = MY;
            MY_20.SetFloat(176, 3f);
            var TROP3TEX_21 = _world.AcknexObject.GetAcknexObject(1736521078);
            var MY_23 = MY;
            MY_23.SetAcknexObject(164, TROP3TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat(168, 0f);
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
            var SHOOT_SECTOR_28 = _world.GetObject(ObjectType.Skill, 440);
            SHOOT_SECTOR_28.SetFloat(231, 2f);
            var TROPSHOOTFACTOR_29 = _world.GetObject(ObjectType.Skill, 376136638);
            var TROPSHOOTFACTOR_29_val = TROPSHOOTFACTOR_29.GetFloat(PropertyName.VAL);
            var SHOOT_FAC_30 = _world.GetObject(ObjectType.Skill, 441);
            SHOOT_FAC_30.SetFloat(231, TROPSHOOTFACTOR_29_val);
            var SHOOT_RANGE_32 = _world.GetObject(ObjectType.Skill, 439);
            SHOOT_RANGE_32.SetFloat(231, 100f);
            var SHOOT_Y_34 = _world.GetObject(ObjectType.Skill, 443);
            SHOOT_Y_34.SetFloat(231, 0f);
            var MY_35 = MY;
            _world.Shoot(MY_35, MY, THERE);
            var HIT_DIST_37 = _world.GetObject(ObjectType.Skill, 444);
            var HIT_DIST_37_val = HIT_DIST_37.GetFloat(PropertyName.VAL);
            if (HIT_DIST_37_val == 0f)
            {
                goto MISS;
            }
            var RESULT_38 = _world.GetObject(ObjectType.Skill, 446);
            var RESULT_38_val = RESULT_38.GetFloat(PropertyName.VAL);
            var PLAYER_RESULT_39 = _world.GetObject(ObjectType.Skill, 1861765784);
            PLAYER_RESULT_39.SetFloat(231, RESULT_38_val);
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
            MISS:
            {
                var enumerator = TROPFOLLOWATTACK(MY, THERE);
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
        public IEnumerator TROPESCAPE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var TROPHIDE_3 = _world.AcknexObject.GetAcknexObject(1737263724);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, TROPHIDE_3);
            var CYCLETROPHIDE_6 = _world.AcknexObject.GetAcknexObject(2738914332);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, CYCLETROPHIDE_6);
            var TROPHIT_9 = _world.AcknexObject.GetAcknexObject(182795863);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, TROPHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(207, 1f);
            var MY_17 = MY;
            MY_17.SetFloat(219, 0f);
            var MY_20 = MY;
            MY_20.SetFloat(176, 4f);
            var TROP1TEX_21 = _world.AcknexObject.GetAcknexObject(1736449204);
            var MY_23 = MY;
            MY_23.SetAcknexObject(164, TROP1TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat(172, 30f);
            var MY_29 = MY;
            MY_29.SetFloat(168, 0.4f);
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
            var temp_34 = MY_33.GetFloat(194);
            var MY_36 = MY;
            var temp_37 = MY_36.GetFloat(194);
            MY_31.SetFloat(194, temp_37 + (UnityEngine.Random.value - 0.5f) * 2f);
            var BULLET_46 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_48 = MY;
            MY_48.SetAcknexObject(199, BULLET_46);
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
        public IEnumerator TROPDEAD(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(209, null);
            var MY_11 = MY;
            MY_11.SetAcknexObject(190, null);
            var MY_14 = MY;
            MY_14.SetFloat(172, 0f);
            var MY_17 = MY;
            MY_17.SetFloat(176, 9f);
            var TROP9TEX_18 = _world.AcknexObject.GetAcknexObject(1736736700);
            var MY_20 = MY;
            MY_20.SetAcknexObject(164, TROP9TEX_18);
            var MY_23 = MY;
            MY_23.SetFloat(168, 0f);
            var MY_26 = MY;
            MY_26.SetAcknexObject(199, null);
            var MY_29 = MY;
            MY_29.SetFloat(206, 1f);
            var MY_32 = MY;
            MY_32.SetFloat(207, 0f);
            var MY_35 = MY;
            MY_35.SetFloat(219, 1f);
            if (UnityEngine.Random.value > 0.4f)
            {
                yield break;
            }
            if (UnityEngine.Random.value > 0.2f)
            {
                goto ARMOUR;
            }
            var PICKTROPAMMO_40 = _world.AcknexObject.GetAcknexObject(3341694275);
            var MY_42 = MY;
            MY_42.SetAcknexObject(192, PICKTROPAMMO_40);
            var MY_45 = MY;
            MY_45.SetFloat(172, 4f);
            yield break;
            ARMOUR:
            var PICKTROPARMOUR_46 = _world.AcknexObject.GetAcknexObject(1272610255);
            var MY_48 = MY;
            MY_48.SetAcknexObject(192, PICKTROPARMOUR_46);
            var MY_51 = MY;
            MY_51.SetFloat(172, 4f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator TROPDIE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat(173, 10f);
            var MY_5 = MY;
            MY_5.SetAcknexObject(192, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, null);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, null);
            var TROPDEAD_12 = _world.AcknexObject.GetAcknexObject(1737115520);
            var MY_14 = MY;
            MY_14.SetAcknexObject(190, TROPDEAD_12);
            var MY_17 = MY;
            var temp_18 = MY_17.GetFloat(184);
            if (temp_18 != 0f)
            {
                {
                    var enumerator = TROPDROPKEY(MY, THERE);
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
            MY_21.SetFloat(176, 8f);
            var TROP8TEX_22 = _world.AcknexObject.GetAcknexObject(1736700763);
            var MY_24 = MY;
            MY_24.SetAcknexObject(164, TROP8TEX_22);
            var MY_27 = MY;
            MY_27.SetFloat(168, 0f);
            var MY_30 = MY;
            MY_30.SetAcknexObject(199, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator TROPIMPLODE(IAcknexObject MY, IAcknexObject THERE)
        {
            var DISTX_0 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_1 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_1_val = DISTX_1.GetFloat(PropertyName.VAL);
            var MY_4 = MY;
            var temp_5 = MY_4.GetFloat(195);
            var EXPLOSION_CENTER_8 = _world.GetSynonymObject(3704223598);
            var temp_9 = EXPLOSION_CENTER_8.GetFloat(195);
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat(195);
            var EXPLOSION_CENTER_18 = _world.GetSynonymObject(3704223598);
            var temp_19 = EXPLOSION_CENTER_18.GetFloat(195);
            var MY_24 = MY;
            var temp_25 = MY_24.GetFloat(196);
            var EXPLOSION_CENTER_28 = _world.GetSynonymObject(3704223598);
            var temp_29 = EXPLOSION_CENTER_28.GetFloat(196);
            var MY_34 = MY;
            var temp_35 = MY_34.GetFloat(196);
            var EXPLOSION_CENTER_38 = _world.GetSynonymObject(3704223598);
            var temp_39 = EXPLOSION_CENTER_38.GetFloat(196);
            DISTX_0.SetFloat(231, (temp_5 - temp_9) * (temp_15 - temp_19) + (temp_25 - temp_29) * (temp_35 - temp_39));
            var DISTX_41 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_41_val = DISTX_41.GetFloat(PropertyName.VAL);
            var DISTX_42 = _world.GetObject(ObjectType.Skill, 217512505);
            DISTX_42.SetFloat(231, MathUtils.Sqrt(DISTX_41_val));
            var DISTZ_43 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_44 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_44_val = DISTZ_44.GetFloat(PropertyName.VAL);
            var MY_46 = MY;
            var temp_47 = MY_46.GetFloat(165);
            var EXPLOSION_CENTER_50 = _world.GetSynonymObject(3704223598);
            var temp_51 = EXPLOSION_CENTER_50.GetFloat(165);
            DISTZ_43.SetFloat(231, temp_47 - temp_51);
            var DISTX_53 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_53_val = DISTX_53.GetFloat(PropertyName.VAL);
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
            MY_56.SetFloat(206, 1f);
            var MY_59 = MY;
            MY_59.SetFloat(207, 0f);
            var MY_62 = MY;
            MY_62.SetAcknexObject(192, null);
            var MY_65 = MY;
            MY_65.SetAcknexObject(193, null);
            var MY_68 = MY;
            MY_68.SetAcknexObject(209, null);
            var VANISHFORGOOD_69 = _world.AcknexObject.GetAcknexObject(1333438470);
            var MY_71 = MY;
            MY_71.SetAcknexObject(190, VANISHFORGOOD_69);
            var MY_74 = MY;
            MY_74.SetFloat(176, 8f);
            var TROP0ATEX_75 = _world.AcknexObject.GetAcknexObject(1466363956);
            var MY_77 = MY;
            MY_77.SetAcknexObject(164, TROP0ATEX_75);
            var MY_80 = MY;
            MY_80.SetFloat(168, 0f);
            var MY_83 = MY;
            MY_83.SetAcknexObject(199, null);
            var MY_86 = MY;
            var temp_87 = MY_86.GetFloat(184);
            if (temp_87 != 0f)
            {
                {
                    var enumerator = TROPDROPKEY(MY, THERE);
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
        public IEnumerator TROPHIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill, 441);
            var SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat(PropertyName.VAL);
            if (SHOOT_FAC_1_val == 0f)
            {
                goto OBSTACLE;
            }
            var MY_2 = MY;
            var HIT_3 = _world.GetSynonymObject(704);
            if (HIT_3 == MY_2)
            {
                goto CONT;
            }
            var EXPLOSION_ON_5 = _world.GetObject(ObjectType.Skill, 3352630890);
            var EXPLOSION_ON_5_val = EXPLOSION_ON_5.GetFloat(PropertyName.VAL);
            if (EXPLOSION_ON_5_val == 0f)
            {
                goto OBSTACLE;
            }
            var DISTX_6 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_7 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_7_val = DISTX_7.GetFloat(PropertyName.VAL);
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat(195);
            var EXPLOSION_CENTER_14 = _world.GetSynonymObject(3704223598);
            var temp_15 = EXPLOSION_CENTER_14.GetFloat(195);
            var MY_20 = MY;
            var temp_21 = MY_20.GetFloat(195);
            var EXPLOSION_CENTER_24 = _world.GetSynonymObject(3704223598);
            var temp_25 = EXPLOSION_CENTER_24.GetFloat(195);
            var MY_30 = MY;
            var temp_31 = MY_30.GetFloat(196);
            var EXPLOSION_CENTER_34 = _world.GetSynonymObject(3704223598);
            var temp_35 = EXPLOSION_CENTER_34.GetFloat(196);
            var MY_40 = MY;
            var temp_41 = MY_40.GetFloat(196);
            var EXPLOSION_CENTER_44 = _world.GetSynonymObject(3704223598);
            var temp_45 = EXPLOSION_CENTER_44.GetFloat(196);
            DISTX_6.SetFloat(231, (temp_11 - temp_15) * (temp_21 - temp_25) + (temp_31 - temp_35) * (temp_41 - temp_45));
            var DISTX_47 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_47_val = DISTX_47.GetFloat(PropertyName.VAL);
            var DISTX_48 = _world.GetObject(ObjectType.Skill, 217512505);
            DISTX_48.SetFloat(231, MathUtils.Sqrt(DISTX_47_val));
            var DISTX_50 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_50_val = DISTX_50.GetFloat(PropertyName.VAL);
            if (DISTX_50_val > 25f)
            {
                goto OBSTACLE;
            }
            HIT:
            var EXPLOSION_ON_52 = _world.GetObject(ObjectType.Skill, 3352630890);
            var EXPLOSION_ON_52_val = EXPLOSION_ON_52.GetFloat(PropertyName.VAL);
            if (EXPLOSION_ON_52_val != 2f)
            {
                goto GRANADE;
            }
            var MY_55 = MY;
            var temp_56 = MY_55.GetFloat(205);
            if (temp_56 == 1f)
            {
                {
                    var enumerator = TROPIMPLODE(MY, THERE);
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
            GRANADE:
            var MY_58 = MY;
            var MY_60 = MY;
            var temp_61 = MY_60.GetFloat(173);
            var MY_63 = MY;
            var temp_64 = MY_63.GetFloat(173);
            var SHOOT_FAC_66 = _world.GetObject(ObjectType.Skill, 441);
            var SHOOT_FAC_66_val = SHOOT_FAC_66.GetFloat(PropertyName.VAL);
            var DISTX_71 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_71_val = DISTX_71.GetFloat(PropertyName.VAL);
            MY_58.SetFloat(173, temp_64 + SHOOT_FAC_66_val * (20f - DISTX_71_val) / 20f);
            goto EXPLODED;
            CONT:
            var MY_76 = MY;
            var MY_78 = MY;
            var temp_79 = MY_78.GetFloat(173);
            var MY_81 = MY;
            var temp_82 = MY_81.GetFloat(173);
            var SHOOT_FAC_84 = _world.GetObject(ObjectType.Skill, 441);
            var SHOOT_FAC_84_val = SHOOT_FAC_84.GetFloat(PropertyName.VAL);
            MY_76.SetFloat(173, temp_82 + SHOOT_FAC_84_val * (UnityEngine.Random.value + 2f) / 3f);
            EXPLODED:
            var MY_95 = MY;
            var temp_96 = MY_95.GetFloat(173);
            if (temp_96 > 5f)
            {
                goto DIE;
            }
            if (UnityEngine.Random.value < 0.05f)
            {
                goto DIE;
            }
            var MY_100 = MY;
            var temp_101 = MY_100?.GetAcknexObject(164);
            _world.SetSynonymObject(1738102306, temp_101);
            var MY_105 = MY;
            MY_105.SetAcknexObject(192, null);
            var MY_108 = MY;
            MY_108.SetAcknexObject(193, null);
            var MY_111 = MY;
            MY_111.SetAcknexObject(209, null);
            if (UnityEngine.Random.value > 0.7f)
            {
                goto SONOFA;
            }
            var TROP5TEX_114 = _world.AcknexObject.GetAcknexObject(1736592952);
            var MY_116 = MY;
            MY_116.SetAcknexObject(164, TROP5TEX_114);
            var TROP05SND_117 = _world.AcknexObject.GetAcknexObject(1465931900);
            var MY_119 = MY;
            _world.PlaySound(TROP05SND_117, 0.2f, MY_119);
            goto WAIT;
            SONOFA:
            var TROP5ATEX_120 = _world.AcknexObject.GetAcknexObject(1472293561);
            var MY_122 = MY;
            MY_122.SetAcknexObject(164, TROP5ATEX_120);
            var TROP11SND_123 = _world.AcknexObject.GetAcknexObject(1466974073);
            var MY_125 = MY;
            _world.PlaySound(TROP11SND_123, 0.2f, MY_125);
            WAIT:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var TROPESCAPE_127 = _world.AcknexObject.GetAcknexObject(1987912643);
            var MY_129 = MY;
            MY_129.SetAcknexObject(192, TROPESCAPE_127);
            var TROPHIDE_130 = _world.AcknexObject.GetAcknexObject(1737263724);
            var MY_132 = MY;
            MY_132.SetAcknexObject(193, TROPHIDE_130);
            var TROPHIT_133 = _world.AcknexObject.GetAcknexObject(182795863);
            var MY_135 = MY;
            MY_135.SetAcknexObject(209, TROPHIT_133);
            var TROP_TEX_136 = _world.GetSynonymObject(1738102306);
            var MY_138 = MY;
            MY_138.SetAcknexObject(164, TROP_TEX_136);
            var MY_141 = MY;
            var temp_142 = MY_141.GetFloat(173);
            if (temp_142 > 4f)
            {
                {
                    var enumerator = TROPHIDE(MY, THERE);
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
            var MY_145 = MY;
            var temp_146 = MY_145.GetFloat(176);
            if (temp_146 != 4f)
            {
                {
                    var enumerator = TROPFOLLOWATTACK(MY, THERE);
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
            var MY_149 = MY;
            MY_149.SetFloat(173, 10f);
            {
                var enumerator = TROPDIE(MY, THERE);
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
                var enumerator = TROPTURN(MY, THERE);
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
        public IEnumerator TROPDROPKEY(IAcknexObject MY, IAcknexObject THERE)
        {
            var KEY2TNG_1 = _world.AcknexObject.GetAcknexObject(946520241);
            var KEY2TNG_3 = _world.AcknexObject.GetAcknexObject(946520241);
            var temp_4 = KEY2TNG_3.GetFloat(195);
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat(195);
            KEY2TNG_1.SetFloat(195, temp_7);
            var KEY2TNG_9 = _world.AcknexObject.GetAcknexObject(946520241);
            var KEY2TNG_11 = _world.AcknexObject.GetAcknexObject(946520241);
            var temp_12 = KEY2TNG_11.GetFloat(196);
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat(196);
            KEY2TNG_9.SetFloat(196, temp_15);
            var KEY2TNG_18 = _world.AcknexObject.GetAcknexObject(946520241);
            KEY2TNG_18.SetFloat(213, 1f);
            var KEY2TNG_20 = _world.AcknexObject.GetAcknexObject(946520241);
            var KEY2TNG_22 = _world.AcknexObject.GetAcknexObject(946520241);
            var temp_23 = KEY2TNG_22.GetFloat(165);
            var MY_25 = MY;
            var temp_26 = MY_25.GetFloat(200);
            KEY2TNG_20.SetFloat(165, temp_26 - 0.01f);
            var KEY2TNG_31 = _world.AcknexObject.GetAcknexObject(946520241);
            KEY2TNG_31.SetFloat(204, 0f);
            //Unknown keyword: LOCATE
            var KEY2TNG_34 = _world.AcknexObject.GetAcknexObject(946520241);
            KEY2TNG_34.SetFloat(213, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CYCLETROPATTACK(IAcknexObject MY, IAcknexObject THERE)
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
            var temp_3 = MY_2.GetFloat(182);
            if (temp_3 != 0f)
            {
                goto ATTACK;
            }
            var SHOT_SOUND_ON_5 = _world.GetObject(ObjectType.Skill, 3372273679);
            var SHOT_SOUND_ON_5_val = SHOT_SOUND_ON_5.GetFloat(PropertyName.VAL);
            if (SHOT_SOUND_ON_5_val == 0f)
            {
                goto CONT;
            }
            {
                var enumerator = TROPLOOKFOR(MY, THERE);
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
            var MY_8 = MY;
            var temp_9 = MY_8.GetFloat(181);
            if (temp_9 == 0f)
            {
                yield break;
            }
            var GUN_ON_11 = _world.GetObject(ObjectType.Skill, 3014382675);
            var GUN_ON_11_val = GUN_ON_11.GetFloat(PropertyName.VAL);
            if (GUN_ON_11_val != 0f)
            {
                goto ATTACK;
            }
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat(202);
            if (temp_15 < 20f)
            {
                {
                    var enumerator = TROPFOLLOWWARNING(MY, THERE);
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
            MY_18.SetFloat(182, 1f);
            {
                var enumerator = TROPTALK(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_21 = MY;
            var temp_22 = MY_21.GetFloat(202);
            if (temp_22 < 200f)
            {
                {
                    var enumerator = TROPFOLLOWATTACK(MY, THERE);
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
        public IEnumerator CYCLETROPHIDE(IAcknexObject MY, IAcknexObject THERE)
        {
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
            var MY_1 = MY;
            var MY_3 = MY;
            var temp_4 = MY_3.GetFloat(194);
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat(194);
            MY_1.SetFloat(194, temp_7 + (UnityEngine.Random.value - 0.5f) * 2f);
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
            var MY_18 = MY;
            var temp_19 = MY_18.GetFloat(205);
            if (temp_19 == 1f)
            {
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
            var MY_22 = MY;
            var temp_23 = MY_22.GetFloat(181);
            if (temp_23 == 0f)
            {
                goto STOP;
            }
            var MY_26 = MY;
            MY_26.SetFloat(168, 0.6f);
            var BULLET_27 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_29 = MY;
            MY_29.SetAcknexObject(199, BULLET_27);
            yield break;
            STOP:
            var MY_32 = MY;
            MY_32.SetFloat(168, 0f);
            var MY_35 = MY;
            MY_35.SetAcknexObject(199, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CYCLETROPBACK(IAcknexObject MY, IAcknexObject THERE)
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
        public IEnumerator CYCLETROPSHOOT(IAcknexObject MY, IAcknexObject THERE)
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
            var temp_3 = MY_2.GetFloat(173);
            if (temp_3 > 9f)
            {
                {
                    var enumerator = TROPDIE(MY, THERE);
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
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat(202);
            if (temp_7 > 300f)
            {
                {
                    var enumerator = TROPWAIT(MY, THERE);
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
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat(202);
            if (temp_11 > 100f)
            {
                goto ATTACK;
            }
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
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat(181);
            if (temp_15 == 0f)
            {
                goto ATTACK;
            }
            SHOOT:
            var SHOT_SOUND_ON_17 = _world.GetObject(ObjectType.Skill, 3372273679);
            SHOT_SOUND_ON_17.SetFloat(231, 1f);
            var SHOTSECCOUNT_19 = _world.GetObject(ObjectType.Skill, 733093231);
            SHOTSECCOUNT_19.SetFloat(231, 0f);
            if (UnityEngine.Random.value > 0.8f)
            {
                {
                    var enumerator = TROPAIM(MY, THERE);
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
                var enumerator = TROPSHOOT(MY, THERE);
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
                var enumerator = TROPFOLLOWATTACK(MY, THERE);
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
        public IEnumerator CYCLETROPWARNING(IAcknexObject MY, IAcknexObject THERE)
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
            var GUN_ON_1 = _world.GetObject(ObjectType.Skill, 3014382675);
            var GUN_ON_1_val = GUN_ON_1.GetFloat(PropertyName.VAL);
            if (GUN_ON_1_val != 0f)
            {
                {
                    var enumerator = TROPFOLLOWATTACK(MY, THERE);
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
            var temp_5 = MY_4.GetFloat(202);
            if (temp_5 > 10f)
            {
                goto CONT;
            }
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, null);
            {
                var enumerator = TROPWARNING(MY, THERE);
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
            var MY_11 = MY;
            var temp_12 = MY_11.GetFloat(202);
            if (temp_12 > 40f)
            {
                {
                    var enumerator = TROPWAIT(MY, THERE);
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
                var enumerator = FOLLOWANGLE(MY, THERE);
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
        public IEnumerator TROPTALK(IAcknexObject MY, IAcknexObject THERE)
        {
            var RANDOMTROP_1 = _world.GetObject(ObjectType.Skill, 1092120691);
            var RANDOMTROP_1_val = RANDOMTROP_1.GetFloat(PropertyName.VAL);
            var RANDOMTROP_2 = _world.GetObject(ObjectType.Skill, 1092120691);
            RANDOMTROP_2.SetFloat(231, Random.Range(0f, 1f));
            var RANDOMTROP_4 = _world.GetObject(ObjectType.Skill, 1092120691);
            var RANDOMTROP_4_val = RANDOMTROP_4.GetFloat(PropertyName.VAL);
            if (RANDOMTROP_4_val > 0.9f)
            {
                goto SND1;
            }
            var RANDOMTROP_6 = _world.GetObject(ObjectType.Skill, 1092120691);
            var RANDOMTROP_6_val = RANDOMTROP_6.GetFloat(PropertyName.VAL);
            if (RANDOMTROP_6_val > 0.8f)
            {
                goto SND2;
            }
            yield break;
            SND1:
            var TROP09SND_7 = _world.AcknexObject.GetAcknexObject(1466075648);
            var MY_9 = MY;
            _world.PlaySound(TROP09SND_7, 0.3f, MY_9);
            yield break;
            SND2:
            var TROP01SND_10 = _world.AcknexObject.GetAcknexObject(1465788152);
            var MY_12 = MY;
            _world.PlaySound(TROP01SND_10, 0.3f, MY_12);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator TROPSHOUT(IAcknexObject MY, IAcknexObject THERE)
        {
            var RANDOMTROP_1 = _world.GetObject(ObjectType.Skill, 1092120691);
            var RANDOMTROP_1_val = RANDOMTROP_1.GetFloat(PropertyName.VAL);
            var RANDOMTROP_2 = _world.GetObject(ObjectType.Skill, 1092120691);
            RANDOMTROP_2.SetFloat(231, Random.Range(0f, 1f));
            var RANDOMTROP_4 = _world.GetObject(ObjectType.Skill, 1092120691);
            var RANDOMTROP_4_val = RANDOMTROP_4.GetFloat(PropertyName.VAL);
            if (RANDOMTROP_4_val > 0.8f)
            {
                goto SND1;
            }
            var RANDOMTROP_6 = _world.GetObject(ObjectType.Skill, 1092120691);
            var RANDOMTROP_6_val = RANDOMTROP_6.GetFloat(PropertyName.VAL);
            if (RANDOMTROP_6_val > 0.4f)
            {
                goto SND2;
            }
            var RANDOMTROP_8 = _world.GetObject(ObjectType.Skill, 1092120691);
            var RANDOMTROP_8_val = RANDOMTROP_8.GetFloat(PropertyName.VAL);
            if (RANDOMTROP_8_val > 0.1f)
            {
                goto SND3;
            }
            var TROP06SND_9 = _world.AcknexObject.GetAcknexObject(1465967837);
            var MY_11 = MY;
            _world.PlaySound(TROP06SND_9, 0.3f, MY_11);
            yield break;
            SND1:
            var TROP12SND_12 = _world.AcknexObject.GetAcknexObject(1467010010);
            var MY_14 = MY;
            _world.PlaySound(TROP12SND_12, 0.4f, MY_14);
            yield break;
            SND2:
            var TROP10SND_15 = _world.AcknexObject.GetAcknexObject(1466938136);
            var MY_17 = MY;
            _world.PlaySound(TROP10SND_15, 0.3f, MY_17);
            yield break;
            SND3:
            var TROP03SND_18 = _world.AcknexObject.GetAcknexObject(1465860026);
            var MY_20 = MY;
            _world.PlaySound(TROP03SND_18, 0.3f, MY_20);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator PICKTROPAMMO(IAcknexObject MY, IAcknexObject THERE)
        {
            var AMMO_MP5_1 = _world.GetObject(ObjectType.Skill, 1494668136);
            var AMMO_MP5_1_val = AMMO_MP5_1.GetFloat(PropertyName.VAL);
            var AMMO_MP5_2 = _world.GetObject(ObjectType.Skill, 1494668136);
            AMMO_MP5_2.SetFloat(231, AMMO_MP5_1_val + 30f);
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
            MY_5.SetAcknexObject(192, null);
            var AMMO01SND_6 = _world.AcknexObject.GetAcknexObject(2022635869);
            _world.PlaySound(AMMO01SND_6, 0.3f, null);
            var GET01STR_8 = _world.AcknexObject.GetAcknexObject(2295984167);
            _world.SetSynonymObject(361798934, GET01STR_8);
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
        public IEnumerator PICKTROPARMOUR(IAcknexObject MY, IAcknexObject THERE)
        {
            var PLAYER_ARMOUR_1 = _world.GetObject(ObjectType.Skill, 1211659215);
            var PLAYER_ARMOUR_1_val = PLAYER_ARMOUR_1.GetFloat(PropertyName.VAL);
            if (PLAYER_ARMOUR_1_val > 190f)
            {
                yield break;
            }
            var PLAYER_ARMOUR_3 = _world.GetObject(ObjectType.Skill, 1211659215);
            var PLAYER_ARMOUR_3_val = PLAYER_ARMOUR_3.GetFloat(PropertyName.VAL);
            var PLAYER_ARMOUR_4 = _world.GetObject(ObjectType.Skill, 1211659215);
            PLAYER_ARMOUR_4.SetFloat(231, PLAYER_ARMOUR_3_val + 20f);
            var MY_7 = MY;
            MY_7.SetAcknexObject(192, null);
            var ARMO01SND_8 = _world.AcknexObject.GetAcknexObject(366485954);
            _world.PlaySound(ARMO01SND_8, 0.5f, null);
            var GET10STR_10 = _world.AcknexObject.GetAcknexObject(2297134151);
            _world.SetSynonymObject(361798934, GET10STR_10);
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
        public IEnumerator HUMMERHIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill, 441);
            var SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat(PropertyName.VAL);
            if (SHOOT_FAC_1_val == 0f)
            {
                yield break;
            }
            var MY_2 = MY;
            var HIT_3 = _world.GetSynonymObject(704);
            if (HIT_3 == MY_2)
            {
                goto HIT;
            }
            var EXPLOSION_ON_5 = _world.GetObject(ObjectType.Skill, 3352630890);
            var EXPLOSION_ON_5_val = EXPLOSION_ON_5.GetFloat(PropertyName.VAL);
            if (EXPLOSION_ON_5_val == 0f)
            {
                yield break;
            }
            var DISTX_6 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_7 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_7_val = DISTX_7.GetFloat(PropertyName.VAL);
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat(195);
            var EXPLOSION_CENTER_14 = _world.GetSynonymObject(3704223598);
            var temp_15 = EXPLOSION_CENTER_14.GetFloat(195);
            var MY_20 = MY;
            var temp_21 = MY_20.GetFloat(195);
            var EXPLOSION_CENTER_24 = _world.GetSynonymObject(3704223598);
            var temp_25 = EXPLOSION_CENTER_24.GetFloat(195);
            var MY_30 = MY;
            var temp_31 = MY_30.GetFloat(196);
            var EXPLOSION_CENTER_34 = _world.GetSynonymObject(3704223598);
            var temp_35 = EXPLOSION_CENTER_34.GetFloat(196);
            var MY_40 = MY;
            var temp_41 = MY_40.GetFloat(196);
            var EXPLOSION_CENTER_44 = _world.GetSynonymObject(3704223598);
            var temp_45 = EXPLOSION_CENTER_44.GetFloat(196);
            DISTX_6.SetFloat(231, (temp_11 - temp_15) * (temp_21 - temp_25) + (temp_31 - temp_35) * (temp_41 - temp_45));
            var DISTX_47 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_47_val = DISTX_47.GetFloat(PropertyName.VAL);
            var DISTX_48 = _world.GetObject(ObjectType.Skill, 217512505);
            DISTX_48.SetFloat(231, MathUtils.Sqrt(DISTX_47_val));
            var DISTX_50 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_50_val = DISTX_50.GetFloat(PropertyName.VAL);
            if (DISTX_50_val > 25f)
            {
                yield break;
            }
            HIT:
            var SHOOT_FAC_52 = _world.GetObject(ObjectType.Skill, 441);
            var SHOOT_FAC_52_val = SHOOT_FAC_52.GetFloat(PropertyName.VAL);
            if (SHOOT_FAC_52_val < 9f)
            {
                yield break;
            }
            var MY_55 = MY;
            MY_55.SetAcknexObject(191, null);
            var MOVE_56 = _world.AcknexObject.GetAcknexObject(2089330692);
            var MY_58 = MY;
            MY_58.SetAcknexObject(199, MOVE_56);
            var MY_61 = MY;
            MY_61.SetFloat(169, 0.5f);
            var MY_64 = MY;
            MY_64.SetAcknexObject(209, null);
            var HUMM04SND_65 = _world.AcknexObject.GetAcknexObject(89918285);
            var MY_67 = MY;
            _world.PlaySound(HUMM04SND_65, 0.5f, MY_67);
            var MY_70 = MY;
            MY_70.SetFloat(213, 1f);
            var ACTORJUMPSTOP_71 = _world.AcknexObject.GetAcknexObject(1223307560);
            var MY_73 = MY;
            MY_73.SetAcknexObject(189, ACTORJUMPSTOP_71);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator LNCHTURN(IAcknexObject MY, IAcknexObject THERE)
        {
            var WAITTIME_0 = _world.GetObject(ObjectType.Skill, 33817649);
            var WAITTIME_1 = _world.GetObject(ObjectType.Skill, 33817649);
            var WAITTIME_1_val = WAITTIME_1.GetFloat(PropertyName.VAL);
            WAITTIME_0.SetFloat(231, 64f * UnityEngine.Random.value + 16f);
            if (UnityEngine.Random.value < 0.07f)
            {
                {
                    var enumerator = LNCHLISTEN(MY, THERE);
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
                var RIGHTTURNLNCH_11 = _world.GetObject(ObjectType.Skill, 16495097);
                var RIGHTTURNLNCH_12 = _world.GetObject(ObjectType.Skill, 16495097);
                var RIGHTTURNLNCH_12_val = RIGHTTURNLNCH_12.GetFloat(PropertyName.VAL);
                var RIGHTTURNLNCH_14 = _world.GetObject(ObjectType.Skill, 16495097);
                var RIGHTTURNLNCH_14_val = RIGHTTURNLNCH_14.GetFloat(PropertyName.VAL);
                var RIGHTTURNLNCH_20 = _world.GetObject(ObjectType.Skill, 16495097);
                var RIGHTTURNLNCH_20_val = RIGHTTURNLNCH_20.GetFloat(PropertyName.VAL);
                RIGHTTURNLNCH_11.SetFloat(231, (RIGHTTURNLNCH_14_val - 1f) * (RIGHTTURNLNCH_20_val - 1f));
            }
            var RIGHTTURNLNCH_24 = _world.GetObject(ObjectType.Skill, 16495097);
            var RIGHTTURNLNCH_24_val = RIGHTTURNLNCH_24.GetFloat(PropertyName.VAL);
            if (RIGHTTURNLNCH_24_val > RIGHTTURNLNCH_24.GetFloat(PropertyName.MAX))
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
        public IEnumerator LNCHBACKOFF(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(189, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(192, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, null);
            var CYCLELNCHBACK_9 = _world.AcknexObject.GetAcknexObject(4038513171);
            var MY_11 = MY;
            MY_11.SetAcknexObject(190, CYCLELNCHBACK_9);
            var LNCHHIT_12 = _world.AcknexObject.GetAcknexObject(2564893879);
            var MY_14 = MY;
            MY_14.SetAcknexObject(209, LNCHHIT_12);
            var MY_17 = MY;
            MY_17.SetFloat(207, 1f);
            var MY_20 = MY;
            MY_20.SetFloat(176, 1f);
            var LNCH1TEX_21 = _world.AcknexObject.GetAcknexObject(3036272404);
            var MY_23 = MY;
            MY_23.SetAcknexObject(164, LNCH1TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat(168, 0.5f);
            var BULLET_27 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_29 = MY;
            MY_29.SetAcknexObject(199, BULLET_27);
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
            var temp_34 = MY_33.GetFloat(194);
            var MY_36 = MY;
            var temp_37 = MY_36.GetFloat(194);
            MY_31.SetFloat(194, temp_37 + UnityEngine.Random.value - 0.5f);
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
                var endTime = startTime + TimeUtils.FramesToTime((int)48f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_45 = MY;
            var temp_46 = MY_45.GetFloat(173);
            if (temp_46 > 5f)
            {
                yield break;
            }
            {
                var enumerator = LNCHWANDER(MY, THERE);
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
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)48f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_50 = MY;
            var temp_51 = MY_50.GetFloat(173);
            if (temp_51 > 5f)
            {
                yield break;
            }
            {
                var enumerator = LNCHFOLLOWATTACK(MY, THERE);
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
        public IEnumerator LNCHWAIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(189, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(192, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, null);
            var CYCLELNCHATTACK_9 = _world.AcknexObject.GetAcknexObject(4172210842);
            var MY_11 = MY;
            MY_11.SetAcknexObject(190, CYCLELNCHATTACK_9);
            var LNCHHIT_12 = _world.AcknexObject.GetAcknexObject(2564893879);
            var MY_14 = MY;
            MY_14.SetAcknexObject(209, LNCHHIT_12);
            var MY_17 = MY;
            MY_17.SetFloat(207, 0f);
            var MY_20 = MY;
            MY_20.SetFloat(213, 0f);
            var MY_23 = MY;
            MY_23.SetFloat(165, -0.05f);
            var MY_26 = MY;
            MY_26.SetFloat(176, 1f);
            var LNCH0TEX_27 = _world.AcknexObject.GetAcknexObject(3036236467);
            var MY_29 = MY;
            MY_29.SetAcknexObject(164, LNCH0TEX_27);
            var MY_32 = MY;
            MY_32.SetFloat(168, 0f);
            var MY_35 = MY;
            MY_35.SetAcknexObject(199, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator LNCHWANDER(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(189, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(192, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, null);
            var CYCLELNCHATTACK_9 = _world.AcknexObject.GetAcknexObject(4172210842);
            var MY_11 = MY;
            MY_11.SetAcknexObject(190, CYCLELNCHATTACK_9);
            var LNCHHIT_12 = _world.AcknexObject.GetAcknexObject(2564893879);
            var MY_14 = MY;
            MY_14.SetAcknexObject(209, LNCHHIT_12);
            var MY_17 = MY;
            MY_17.SetFloat(207, 1f);
            var MY_20 = MY;
            MY_20.SetFloat(219, 0f);
            var MY_23 = MY;
            MY_23.SetFloat(176, 1f);
            var LNCH1TEX_24 = _world.AcknexObject.GetAcknexObject(3036272404);
            var MY_26 = MY;
            MY_26.SetAcknexObject(164, LNCH1TEX_24);
            var MY_29 = MY;
            MY_29.SetFloat(168, 0.3f);
            var BULLET_30 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_32 = MY;
            MY_32.SetAcknexObject(199, BULLET_30);
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
        public IEnumerator LNCHSEARCH(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(189, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(192, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, null);
            var CYCLELNCHATTACK_9 = _world.AcknexObject.GetAcknexObject(4172210842);
            var MY_11 = MY;
            MY_11.SetAcknexObject(190, CYCLELNCHATTACK_9);
            var LNCHHIT_12 = _world.AcknexObject.GetAcknexObject(2564893879);
            var MY_14 = MY;
            MY_14.SetAcknexObject(209, LNCHHIT_12);
            var MY_17 = MY;
            MY_17.SetFloat(207, 1f);
            var MY_20 = MY;
            MY_20.SetFloat(219, 0f);
            var LNCH1TEX_21 = _world.AcknexObject.GetAcknexObject(3036272404);
            var MY_23 = MY;
            MY_23.SetAcknexObject(164, LNCH1TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat(168, 0.3f);
            var BULLET_27 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_29 = MY;
            MY_29.SetAcknexObject(199, BULLET_27);
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
        public IEnumerator LNCHHIDE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(189, null);
            var LNCHESCAPE_3 = _world.AcknexObject.GetAcknexObject(156169763);
            var MY_5 = MY;
            MY_5.SetAcknexObject(192, LNCHESCAPE_3);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, null);
            var CYCLELNCHHIDE_9 = _world.AcknexObject.GetAcknexObject(4038737532);
            var MY_11 = MY;
            MY_11.SetAcknexObject(190, CYCLELNCHHIDE_9);
            var LNCHHIT_12 = _world.AcknexObject.GetAcknexObject(2564893879);
            var MY_14 = MY;
            MY_14.SetAcknexObject(209, LNCHHIT_12);
            var MY_17 = MY;
            MY_17.SetFloat(207, 1f);
            var MY_20 = MY;
            MY_20.SetFloat(219, 0f);
            var MY_23 = MY;
            MY_23.SetFloat(176, 4f);
            var MY_25 = MY;
            var MY_27 = MY;
            var temp_28 = MY_27.GetFloat(194);
            var PLAYER_ANGLE_29 = _world.GetObject(ObjectType.Skill, 462);
            var PLAYER_ANGLE_29_val = PLAYER_ANGLE_29.GetFloat(PropertyName.VAL);
            MY_25.SetFloat(194, PLAYER_ANGLE_29_val + (UnityEngine.Random.value - 0.5f) * 2.4f);
            var LNCH1TEX_38 = _world.AcknexObject.GetAcknexObject(3036272404);
            var MY_40 = MY;
            MY_40.SetAcknexObject(164, LNCH1TEX_38);
            var MY_43 = MY;
            MY_43.SetFloat(172, 20f);
            var MY_46 = MY;
            MY_46.SetFloat(168, 0.6f);
            var BULLET_47 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_49 = MY;
            MY_49.SetAcknexObject(199, BULLET_47);
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
            var MY_53 = MY;
            var temp_54 = MY_53.GetFloat(173);
            if (temp_54 < 9f)
            {
                {
                    var enumerator = LNCHWANDER(MY, THERE);
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
        public IEnumerator LNCHLISTEN(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var CYCLELNCHATTACK_6 = _world.AcknexObject.GetAcknexObject(4172210842);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, CYCLELNCHATTACK_6);
            var LNCHHIT_9 = _world.AcknexObject.GetAcknexObject(2564893879);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, LNCHHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(207, 0f);
            var MY_17 = MY;
            MY_17.SetFloat(219, 0f);
            var MY_20 = MY;
            MY_20.SetFloat(176, 0f);
            var LNCH0TEX_21 = _world.AcknexObject.GetAcknexObject(3036236467);
            var MY_23 = MY;
            MY_23.SetAcknexObject(164, LNCH0TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat(168, 0f);
            var MY_29 = MY;
            MY_29.SetAcknexObject(199, null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)120f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_33 = MY;
            var temp_34 = MY_33.GetFloat(173);
            if (temp_34 < 9f)
            {
                {
                    var enumerator = LNCHWANDER(MY, THERE);
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
        public IEnumerator LNCHLOOKFOR(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(176);
            if (temp_3 == 10f)
            {
                yield break;
            }
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat(202);
            if (temp_7 > 100f)
            {
                yield break;
            }
            var FOLLOW_8 = _world.AcknexObject.GetAcknexObject(2968039200);
            var MY_10 = MY;
            var temp_11 = MY_10?.GetAcknexObject(199);
            if (temp_11 == FOLLOW_8)
            {
                yield break;
            }
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat(173);
            if (temp_15 > 5f)
            {
                yield break;
            }
            var MY_18 = MY;
            MY_18.SetAcknexObject(192, null);
            var MY_21 = MY;
            MY_21.SetAcknexObject(193, null);
            var LNCHSEARCH_22 = _world.AcknexObject.GetAcknexObject(687408584);
            var MY_24 = MY;
            MY_24.SetAcknexObject(190, LNCHSEARCH_22);
            var MY_27 = MY;
            MY_27.SetFloat(207, 0f);
            var MY_30 = MY;
            MY_30.SetFloat(219, 0f);
            var MY_33 = MY;
            var temp_34 = MY_33.GetFloat(202);
            if (temp_34 < 40f)
            {
                var LNCHFOLLOWATTACK_35 = _world.AcknexObject.GetAcknexObject(4080397597);
                var MY_37 = MY;
                MY_37.SetAcknexObject(190, LNCHFOLLOWATTACK_35);
            }
            var MY_40 = MY;
            MY_40.SetFloat(176, 10f);
            var LNCH1TEX_41 = _world.AcknexObject.GetAcknexObject(3036272404);
            var MY_43 = MY;
            MY_43.SetAcknexObject(164, LNCH1TEX_41);
            var MY_46 = MY;
            MY_46.SetFloat(168, 0f);
            var BULLET_47 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_49 = MY;
            MY_49.SetAcknexObject(199, BULLET_47);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator LNCHFOLLOW(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var CYCLELNCHATTACK_6 = _world.AcknexObject.GetAcknexObject(4172210842);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, CYCLELNCHATTACK_6);
            var LNCHHIT_9 = _world.AcknexObject.GetAcknexObject(2564893879);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, LNCHHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(207, 1f);
            var MY_17 = MY;
            MY_17.SetFloat(219, 0f);
            var MY_20 = MY;
            MY_20.SetFloat(176, 1f);
            var LNCH1TEX_21 = _world.AcknexObject.GetAcknexObject(3036272404);
            var MY_23 = MY;
            MY_23.SetAcknexObject(164, LNCH1TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat(168, 0.4f);
            var FOLLOW_27 = _world.AcknexObject.GetAcknexObject(2968039200);
            var MY_29 = MY;
            MY_29.SetAcknexObject(199, FOLLOW_27);
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
        public IEnumerator LNCHFOLLOWATTACK(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var CYCLELNCHSHOOT_6 = _world.AcknexObject.GetAcknexObject(147341967);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, CYCLELNCHSHOOT_6);
            var LNCHHIT_9 = _world.AcknexObject.GetAcknexObject(2564893879);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, LNCHHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(207, 1f);
            var MY_17 = MY;
            MY_17.SetFloat(219, 0f);
            var MY_20 = MY;
            MY_20.SetFloat(176, 2f);
            var LNCH1TEX_21 = _world.AcknexObject.GetAcknexObject(3036272404);
            var MY_23 = MY;
            MY_23.SetAcknexObject(164, LNCH1TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat(168, 0.4f);
            var FOLLOW_27 = _world.AcknexObject.GetAcknexObject(2968039200);
            var MY_29 = MY;
            MY_29.SetAcknexObject(199, FOLLOW_27);
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
        public IEnumerator LNCHAIM(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var LNCHSHOOT_6 = _world.AcknexObject.GetAcknexObject(1452610271);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, LNCHSHOOT_6);
            var LNCHHIT_9 = _world.AcknexObject.GetAcknexObject(2564893879);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, LNCHHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(207, 0f);
            var MY_17 = MY;
            MY_17.SetFloat(219, 0f);
            var MY_20 = MY;
            MY_20.SetFloat(176, 3f);
            var LNCH3ATEX_21 = _world.AcknexObject.GetAcknexObject(1414414359);
            var MY_23 = MY;
            MY_23.SetAcknexObject(164, LNCH3ATEX_21);
            var MY_26 = MY;
            MY_26.SetFloat(168, 0f);
            var FOLLOW_27 = _world.AcknexObject.GetAcknexObject(2968039200);
            var MY_29 = MY;
            MY_29.SetAcknexObject(199, FOLLOW_27);
            {
                var enumerator = LNCHSHOUT(MY, THERE);
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
        public IEnumerator LNCHSHOOT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var LNCHBACKOFF_6 = _world.AcknexObject.GetAcknexObject(575087582);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, LNCHBACKOFF_6);
            var LNCHHIT_9 = _world.AcknexObject.GetAcknexObject(2564893879);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, LNCHHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(207, 0f);
            var MY_17 = MY;
            MY_17.SetFloat(219, 0f);
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
            var MISSILE_19 = _world.GetSynonymObject(3680056099);
            if (MISSILE_19 == null)
            {
                yield break;
            }
            var MY_22 = MY;
            MY_22.SetFloat(176, 3f);
            var LNCH3TEX_23 = _world.AcknexObject.GetAcknexObject(3036344278);
            var MY_25 = MY;
            MY_25.SetAcknexObject(164, LNCH3TEX_23);
            var MY_28 = MY;
            MY_28.SetFloat(168, 0f);
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
            var FOLLOW_29 = _world.AcknexObject.GetAcknexObject(2968039200);
            var MY_31 = MY;
            MY_31.SetAcknexObject(199, FOLLOW_29);
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
            var MY_34 = MY;
            var temp_35 = MY_34.GetFloat(181);
            if (temp_35 == 0f)
            {
                goto MISS;
            }
            var DISTZ_36 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_37 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_37_val = DISTZ_37.GetFloat(PropertyName.VAL);
            var FLOOR_HGT_38 = _world.GetObject(ObjectType.Skill, 567);
            var FLOOR_HGT_38_val = FLOOR_HGT_38.GetFloat(PropertyName.VAL);
            var MY_41 = MY;
            var temp_42 = MY_41.GetFloat(200);
            DISTZ_36.SetFloat(231, FLOOR_HGT_38_val - temp_42);
            var MISSILE_45 = _world.GetSynonymObject(3680056099);
            MISSILE_45.SetFloat(213, 1f);
            var MISSILE_48 = _world.GetSynonymObject(3680056099);
            MISSILE_48.SetFloat(168, 3f);
            var MISSILE_51 = _world.GetSynonymObject(3680056099);
            MISSILE_51.SetFloat(169, 0.1f);
            var MY_54 = MY;
            var temp_55 = MY_54.GetFloat(202);
            if (temp_55 != 0f)
            {
                var MISSILE_57 = _world.GetSynonymObject(3680056099);
                var MISSILE_59 = _world.GetSynonymObject(3680056099);
                var temp_60 = MISSILE_59.GetFloat(169);
                var DISTZ_61 = _world.GetObject(ObjectType.Skill, 217512507);
                var DISTZ_61_val = DISTZ_61.GetFloat(PropertyName.VAL);
                var MY_64 = MY;
                var temp_65 = MY_64.GetFloat(202);
                MISSILE_57.SetFloat(169, DISTZ_61_val / temp_65);
            }
            var MY_67 = MY;
            var temp_68 = MY_67.GetFloat(195);
            var MISSILE_70 = _world.GetSynonymObject(3680056099);
            MISSILE_70.SetFloat(195, temp_68);
            var MY_72 = MY;
            var temp_73 = MY_72.GetFloat(196);
            var MISSILE_75 = _world.GetSynonymObject(3680056099);
            MISSILE_75.SetFloat(196, temp_73);
            var MY_77 = MY;
            var temp_78 = MY_77.GetFloat(194);
            var MISSILE_80 = _world.GetSynonymObject(3680056099);
            MISSILE_80.SetFloat(194, temp_78);
            var MISSILE_82 = _world.GetSynonymObject(3680056099);
            var MISSILE_84 = _world.GetSynonymObject(3680056099);
            var temp_85 = MISSILE_84.GetFloat(165);
            var MY_87 = MY;
            var temp_88 = MY_87.GetFloat(200);
            MISSILE_82.SetFloat(165, temp_88 + 3.2f);
            var MISS1TEX_91 = _world.AcknexObject.GetAcknexObject(1181881291);
            var MISSILE_93 = _world.GetSynonymObject(3680056099);
            MISSILE_93.SetAcknexObject(164, MISS1TEX_91);
            var EXPLODEMISSILE_94 = _world.AcknexObject.GetAcknexObject(3869018100);
            var MISSILE_96 = _world.GetSynonymObject(3680056099);
            MISSILE_96.SetAcknexObject(209, EXPLODEMISSILE_94);
            var EXPLODEMISSILE_97 = _world.AcknexObject.GetAcknexObject(3869018100);
            var MISSILE_99 = _world.GetSynonymObject(3680056099);
            MISSILE_99.SetAcknexObject(192, EXPLODEMISSILE_97);
            var EXPLODETARGET_100 = _world.AcknexObject.GetAcknexObject(3244966725);
            var MISSILE_102 = _world.GetSynonymObject(3680056099);
            MISSILE_102.SetAcknexObject(191, EXPLODETARGET_100);
            var AIMMISSILE_103 = _world.AcknexObject.GetAcknexObject(1530892122);
            var MISSILE_105 = _world.GetSynonymObject(3680056099);
            MISSILE_105.SetAcknexObject(189, AIMMISSILE_103);
            var MISSILE_108 = _world.GetSynonymObject(3680056099);
            MISSILE_108.SetFloat(204, 0f);
            var BULLET_109 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MISSILE_111 = _world.GetSynonymObject(3680056099);
            MISSILE_111.SetAcknexObject(199, BULLET_109);
            var MISSILE_114 = _world.GetSynonymObject(3680056099);
            MISSILE_114.SetFloat(206, 1f);
            //Unknown keyword: LOCATE
            yield break;
            MISS:
            {
                var enumerator = LNCHFOLLOWATTACK(MY, THERE);
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
        public IEnumerator LNCHESCAPE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var LNCHHIDE_3 = _world.AcknexObject.GetAcknexObject(3037086924);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, LNCHHIDE_3);
            var CYCLELNCHHIDE_6 = _world.AcknexObject.GetAcknexObject(4038737532);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, CYCLELNCHHIDE_6);
            var LNCHHIT_9 = _world.AcknexObject.GetAcknexObject(2564893879);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, LNCHHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(207, 1f);
            var MY_17 = MY;
            MY_17.SetFloat(219, 0f);
            var MY_20 = MY;
            MY_20.SetFloat(176, 4f);
            var LNCH1TEX_21 = _world.AcknexObject.GetAcknexObject(3036272404);
            var MY_23 = MY;
            MY_23.SetAcknexObject(164, LNCH1TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat(172, 30f);
            var MY_29 = MY;
            MY_29.SetFloat(168, 0.4f);
            var REPEL_30 = _world.AcknexObject.GetAcknexObject(233967877);
            var MY_32 = MY;
            MY_32.SetAcknexObject(199, REPEL_30);
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
        public IEnumerator LNCHDEAD(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(209, null);
            var MY_11 = MY;
            MY_11.SetAcknexObject(190, null);
            var MY_14 = MY;
            MY_14.SetFloat(176, 9f);
            var LNCH9TEX_15 = _world.AcknexObject.GetAcknexObject(3036559900);
            var MY_17 = MY;
            MY_17.SetAcknexObject(164, LNCH9TEX_15);
            var MY_20 = MY;
            MY_20.SetFloat(168, 0f);
            var MY_23 = MY;
            MY_23.SetAcknexObject(199, null);
            var MY_26 = MY;
            MY_26.SetFloat(206, 1f);
            var MY_29 = MY;
            MY_29.SetFloat(207, 0f);
            var MY_32 = MY;
            MY_32.SetFloat(219, 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator LNCHDIE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat(173, 10f);
            var MY_5 = MY;
            MY_5.SetAcknexObject(192, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, null);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, null);
            var LNCHDEAD_12 = _world.AcknexObject.GetAcknexObject(3036938720);
            var MY_14 = MY;
            MY_14.SetAcknexObject(190, LNCHDEAD_12);
            var MY_17 = MY;
            var temp_18 = MY_17.GetFloat(184);
            if (temp_18 != 0f)
            {
                {
                    var enumerator = LNCHDROPKEY(MY, THERE);
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
            MY_21.SetFloat(176, 8f);
            var LNCH8TEX_22 = _world.AcknexObject.GetAcknexObject(3036523963);
            var MY_24 = MY;
            MY_24.SetAcknexObject(164, LNCH8TEX_22);
            var MY_27 = MY;
            MY_27.SetFloat(168, 0f);
            var MY_30 = MY;
            MY_30.SetAcknexObject(199, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator LNCHIMPLODE(IAcknexObject MY, IAcknexObject THERE)
        {
            var DISTX_0 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_1 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_1_val = DISTX_1.GetFloat(PropertyName.VAL);
            var MY_4 = MY;
            var temp_5 = MY_4.GetFloat(195);
            var EXPLOSION_CENTER_8 = _world.GetSynonymObject(3704223598);
            var temp_9 = EXPLOSION_CENTER_8.GetFloat(195);
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat(195);
            var EXPLOSION_CENTER_18 = _world.GetSynonymObject(3704223598);
            var temp_19 = EXPLOSION_CENTER_18.GetFloat(195);
            var MY_24 = MY;
            var temp_25 = MY_24.GetFloat(196);
            var EXPLOSION_CENTER_28 = _world.GetSynonymObject(3704223598);
            var temp_29 = EXPLOSION_CENTER_28.GetFloat(196);
            var MY_34 = MY;
            var temp_35 = MY_34.GetFloat(196);
            var EXPLOSION_CENTER_38 = _world.GetSynonymObject(3704223598);
            var temp_39 = EXPLOSION_CENTER_38.GetFloat(196);
            DISTX_0.SetFloat(231, (temp_5 - temp_9) * (temp_15 - temp_19) + (temp_25 - temp_29) * (temp_35 - temp_39));
            var DISTX_41 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_41_val = DISTX_41.GetFloat(PropertyName.VAL);
            var DISTX_42 = _world.GetObject(ObjectType.Skill, 217512505);
            DISTX_42.SetFloat(231, MathUtils.Sqrt(DISTX_41_val));
            var DISTZ_43 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_44 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_44_val = DISTZ_44.GetFloat(PropertyName.VAL);
            var MY_46 = MY;
            var temp_47 = MY_46.GetFloat(165);
            var EXPLOSION_CENTER_50 = _world.GetSynonymObject(3704223598);
            var temp_51 = EXPLOSION_CENTER_50.GetFloat(165);
            DISTZ_43.SetFloat(231, temp_47 - temp_51);
            var DISTX_53 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_53_val = DISTX_53.GetFloat(PropertyName.VAL);
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
            MY_56.SetFloat(206, 1f);
            var MY_59 = MY;
            MY_59.SetFloat(207, 0f);
            var MY_62 = MY;
            MY_62.SetAcknexObject(192, null);
            var MY_65 = MY;
            MY_65.SetAcknexObject(193, null);
            var MY_68 = MY;
            MY_68.SetAcknexObject(209, null);
            var VANISHFORGOOD_69 = _world.AcknexObject.GetAcknexObject(1333438470);
            var MY_71 = MY;
            MY_71.SetAcknexObject(190, VANISHFORGOOD_69);
            var MY_74 = MY;
            MY_74.SetFloat(176, 8f);
            var LNCH0ATEX_75 = _world.AcknexObject.GetAcknexObject(1410856596);
            var MY_77 = MY;
            MY_77.SetAcknexObject(164, LNCH0ATEX_75);
            var MY_80 = MY;
            MY_80.SetFloat(168, 0f);
            var MY_83 = MY;
            MY_83.SetAcknexObject(199, null);
            var MY_86 = MY;
            var temp_87 = MY_86.GetFloat(184);
            if (temp_87 != 0f)
            {
                {
                    var enumerator = LNCHDROPKEY(MY, THERE);
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
        public IEnumerator LNCHHIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill, 441);
            var SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat(PropertyName.VAL);
            if (SHOOT_FAC_1_val == 0f)
            {
                goto OBSTACLE;
            }
            var MY_2 = MY;
            var HIT_3 = _world.GetSynonymObject(704);
            if (HIT_3 == MY_2)
            {
                goto HIT;
            }
            var EXPLOSION_ON_5 = _world.GetObject(ObjectType.Skill, 3352630890);
            var EXPLOSION_ON_5_val = EXPLOSION_ON_5.GetFloat(PropertyName.VAL);
            if (EXPLOSION_ON_5_val == 0f)
            {
                goto OBSTACLE;
            }
            var DISTX_6 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_7 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_7_val = DISTX_7.GetFloat(PropertyName.VAL);
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat(195);
            var EXPLOSION_CENTER_14 = _world.GetSynonymObject(3704223598);
            var temp_15 = EXPLOSION_CENTER_14.GetFloat(195);
            var MY_20 = MY;
            var temp_21 = MY_20.GetFloat(195);
            var EXPLOSION_CENTER_24 = _world.GetSynonymObject(3704223598);
            var temp_25 = EXPLOSION_CENTER_24.GetFloat(195);
            var MY_30 = MY;
            var temp_31 = MY_30.GetFloat(196);
            var EXPLOSION_CENTER_34 = _world.GetSynonymObject(3704223598);
            var temp_35 = EXPLOSION_CENTER_34.GetFloat(196);
            var MY_40 = MY;
            var temp_41 = MY_40.GetFloat(196);
            var EXPLOSION_CENTER_44 = _world.GetSynonymObject(3704223598);
            var temp_45 = EXPLOSION_CENTER_44.GetFloat(196);
            DISTX_6.SetFloat(231, (temp_11 - temp_15) * (temp_21 - temp_25) + (temp_31 - temp_35) * (temp_41 - temp_45));
            var DISTX_47 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_47_val = DISTX_47.GetFloat(PropertyName.VAL);
            var DISTX_48 = _world.GetObject(ObjectType.Skill, 217512505);
            DISTX_48.SetFloat(231, MathUtils.Sqrt(DISTX_47_val));
            var DISTX_50 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_50_val = DISTX_50.GetFloat(PropertyName.VAL);
            if (DISTX_50_val > 25f)
            {
                goto OBSTACLE;
            }
            HIT:
            var EXPLOSION_ON_52 = _world.GetObject(ObjectType.Skill, 3352630890);
            var EXPLOSION_ON_52_val = EXPLOSION_ON_52.GetFloat(PropertyName.VAL);
            if (EXPLOSION_ON_52_val != 2f)
            {
                goto CONT;
            }
            var MY_55 = MY;
            var temp_56 = MY_55.GetFloat(205);
            if (temp_56 == 1f)
            {
                {
                    var enumerator = LNCHIMPLODE(MY, THERE);
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
            var temp_61 = MY_60.GetFloat(173);
            var MY_63 = MY;
            var temp_64 = MY_63.GetFloat(173);
            var SHOOT_FAC_66 = _world.GetObject(ObjectType.Skill, 441);
            var SHOOT_FAC_66_val = SHOOT_FAC_66.GetFloat(PropertyName.VAL);
            MY_58.SetFloat(173, temp_64 + SHOOT_FAC_66_val * (UnityEngine.Random.value + 2f) / 3f);
            var MY_77 = MY;
            var temp_78 = MY_77.GetFloat(173);
            if (temp_78 > 5f)
            {
                goto DIE;
            }
            if (UnityEngine.Random.value < 0.05f)
            {
                goto DIE;
            }
            var MY_82 = MY;
            var temp_83 = MY_82?.GetAcknexObject(164);
            _world.SetSynonymObject(3037925506, temp_83);
            var LNCH5TEX_85 = _world.AcknexObject.GetAcknexObject(3036416152);
            var MY_87 = MY;
            MY_87.SetAcknexObject(164, LNCH5TEX_85);
            var MY_90 = MY;
            MY_90.SetAcknexObject(192, null);
            var MY_93 = MY;
            MY_93.SetAcknexObject(193, null);
            var MY_96 = MY;
            MY_96.SetAcknexObject(209, null);
            if (UnityEngine.Random.value > 0.8f)
            {
                goto SONOFA;
            }
            var TROP05SND_99 = _world.AcknexObject.GetAcknexObject(1465931900);
            var MY_101 = MY;
            _world.PlaySound(TROP05SND_99, 0.2f, MY_101);
            goto WAIT;
            SONOFA:
            var TROP11SND_102 = _world.AcknexObject.GetAcknexObject(1466974073);
            var MY_104 = MY;
            _world.PlaySound(TROP11SND_102, 0.2f, MY_104);
            WAIT:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var LNCHESCAPE_106 = _world.AcknexObject.GetAcknexObject(156169763);
            var MY_108 = MY;
            MY_108.SetAcknexObject(192, LNCHESCAPE_106);
            var LNCHHIDE_109 = _world.AcknexObject.GetAcknexObject(3037086924);
            var MY_111 = MY;
            MY_111.SetAcknexObject(193, LNCHHIDE_109);
            var LNCHHIT_112 = _world.AcknexObject.GetAcknexObject(2564893879);
            var MY_114 = MY;
            MY_114.SetAcknexObject(209, LNCHHIT_112);
            var LNCH_TEX_115 = _world.GetSynonymObject(3037925506);
            var MY_117 = MY;
            MY_117.SetAcknexObject(164, LNCH_TEX_115);
            var MY_120 = MY;
            var temp_121 = MY_120.GetFloat(173);
            if (temp_121 > 4f)
            {
                {
                    var enumerator = LNCHHIDE(MY, THERE);
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
            var MY_124 = MY;
            var temp_125 = MY_124.GetFloat(176);
            if (temp_125 != 4f)
            {
                {
                    var enumerator = LNCHFOLLOWATTACK(MY, THERE);
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
            var MY_128 = MY;
            MY_128.SetFloat(173, 10f);
            {
                var enumerator = LNCHDIE(MY, THERE);
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
                var enumerator = LNCHTURN(MY, THERE);
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
        public IEnumerator LNCHDROPKEY(IAcknexObject MY, IAcknexObject THERE)
        {
            var KEY2TNG_1 = _world.AcknexObject.GetAcknexObject(946520241);
            var KEY2TNG_3 = _world.AcknexObject.GetAcknexObject(946520241);
            var temp_4 = KEY2TNG_3.GetFloat(195);
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat(195);
            KEY2TNG_1.SetFloat(195, temp_7);
            var KEY2TNG_9 = _world.AcknexObject.GetAcknexObject(946520241);
            var KEY2TNG_11 = _world.AcknexObject.GetAcknexObject(946520241);
            var temp_12 = KEY2TNG_11.GetFloat(196);
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat(196);
            KEY2TNG_9.SetFloat(196, temp_15);
            var KEY2TNG_18 = _world.AcknexObject.GetAcknexObject(946520241);
            KEY2TNG_18.SetFloat(213, 1f);
            var KEY2TNG_20 = _world.AcknexObject.GetAcknexObject(946520241);
            var KEY2TNG_22 = _world.AcknexObject.GetAcknexObject(946520241);
            var temp_23 = KEY2TNG_22.GetFloat(165);
            var MY_25 = MY;
            var temp_26 = MY_25.GetFloat(200);
            KEY2TNG_20.SetFloat(165, temp_26 - 0.01f);
            var KEY2TNG_31 = _world.AcknexObject.GetAcknexObject(946520241);
            KEY2TNG_31.SetFloat(204, 0f);
            //Unknown keyword: LOCATE
            var KEY2TNG_34 = _world.AcknexObject.GetAcknexObject(946520241);
            KEY2TNG_34.SetFloat(213, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CYCLELNCHATTACK(IAcknexObject MY, IAcknexObject THERE)
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
            var SHOT_SOUND_ON_1 = _world.GetObject(ObjectType.Skill, 3372273679);
            var SHOT_SOUND_ON_1_val = SHOT_SOUND_ON_1.GetFloat(PropertyName.VAL);
            if (SHOT_SOUND_ON_1_val == 0f)
            {
                goto CONT;
            }
            {
                var enumerator = LNCHLOOKFOR(MY, THERE);
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
            var temp_5 = MY_4.GetFloat(181);
            if (temp_5 == 0f)
            {
                yield break;
            }
            var MY_8 = MY;
            var temp_9 = MY_8.GetFloat(182);
            if (temp_9 != 0f)
            {
                goto ATTACK;
            }
            var GUN_ON_11 = _world.GetObject(ObjectType.Skill, 3014382675);
            var GUN_ON_11_val = GUN_ON_11.GetFloat(PropertyName.VAL);
            if (GUN_ON_11_val != 0f)
            {
                goto ATTACK;
            }
            yield break;
            ATTACK:
            var MY_14 = MY;
            MY_14.SetFloat(182, 1f);
            {
                var enumerator = LNCHTALK(MY, THERE);
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
                var enumerator = LNCHFOLLOWATTACK(MY, THERE);
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
        public IEnumerator CYCLELNCHHIDE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(205);
            if (temp_3 == 0f)
            {
                goto STOP;
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
            var temp_8 = MY_7.GetFloat(194);
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat(194);
            MY_5.SetFloat(194, temp_11 + 2f * (UnityEngine.Random.value - 0.5f));
            var MY_22 = MY;
            MY_22.SetFloat(168, 0.6f);
            var BULLET_23 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_25 = MY;
            MY_25.SetAcknexObject(199, BULLET_23);
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
            MY_28.SetFloat(168, 0f);
            var MY_31 = MY;
            MY_31.SetAcknexObject(199, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CYCLELNCHBACK(IAcknexObject MY, IAcknexObject THERE)
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
        public IEnumerator CYCLELNCHSHOOT(IAcknexObject MY, IAcknexObject THERE)
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
            var temp_3 = MY_2.GetFloat(173);
            if (temp_3 > 9f)
            {
                {
                    var enumerator = LNCHDIE(MY, THERE);
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
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat(202);
            if (temp_7 < 25f)
            {
                {
                    var enumerator = LNCHBACKOFF(MY, THERE);
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
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat(181);
            if (temp_11 == 0f)
            {
                goto ATTACK;
            }
            SHOOT:
            var SHOT_SOUND_ON_13 = _world.GetObject(ObjectType.Skill, 3372273679);
            SHOT_SOUND_ON_13.SetFloat(231, 1f);
            var SHOTSECCOUNT_15 = _world.GetObject(ObjectType.Skill, 733093231);
            SHOTSECCOUNT_15.SetFloat(231, 0f);
            {
                var enumerator = LNCHAIM(MY, THERE);
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
                var enumerator = LNCHFOLLOWATTACK(MY, THERE);
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
        public IEnumerator LNCHTALK(IAcknexObject MY, IAcknexObject THERE)
        {
            if (UnityEngine.Random.value > 0.9f)
            {
                goto TALK2;
            }
            if (UnityEngine.Random.value > 0.8f)
            {
                goto TALK1;
            }
            yield break;
            TALK1:
            var TROP12SND_4 = _world.AcknexObject.GetAcknexObject(1467010010);
            var MY_6 = MY;
            _world.PlaySound(TROP12SND_4, 0.3f, MY_6);
            yield break;
            TALK2:
            var TROP09SND_7 = _world.AcknexObject.GetAcknexObject(1466075648);
            var MY_9 = MY;
            _world.PlaySound(TROP09SND_7, 0.3f, MY_9);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator LNCHSHOUT(IAcknexObject MY, IAcknexObject THERE)
        {
            if (UnityEngine.Random.value > 0.8f)
            {
                goto TALK;
            }
            var TROP03SND_2 = _world.AcknexObject.GetAcknexObject(1465860026);
            var MY_4 = MY;
            _world.PlaySound(TROP03SND_2, 0.3f, MY_4);
            yield break;
            TALK:
            var TROP12SND_5 = _world.AcknexObject.GetAcknexObject(1467010010);
            var MY_7 = MY;
            _world.PlaySound(TROP12SND_5, 0.3f, MY_7);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator REPTTURN(IAcknexObject MY, IAcknexObject THERE)
        {
            var WAITTIME_0 = _world.GetObject(ObjectType.Skill, 33817649);
            var WAITTIME_1 = _world.GetObject(ObjectType.Skill, 33817649);
            var WAITTIME_1_val = WAITTIME_1.GetFloat(PropertyName.VAL);
            WAITTIME_0.SetFloat(231, 64f * UnityEngine.Random.value + 16f);
            if (UnityEngine.Random.value < 0.07f)
            {
                {
                    var enumerator = REPTLISTEN(MY, THERE);
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
                var RIGHTTURNREPT_11 = _world.GetObject(ObjectType.Skill, 16701359);
                var RIGHTTURNREPT_12 = _world.GetObject(ObjectType.Skill, 16701359);
                var RIGHTTURNREPT_12_val = RIGHTTURNREPT_12.GetFloat(PropertyName.VAL);
                var RIGHTTURNREPT_14 = _world.GetObject(ObjectType.Skill, 16701359);
                var RIGHTTURNREPT_14_val = RIGHTTURNREPT_14.GetFloat(PropertyName.VAL);
                var RIGHTTURNREPT_20 = _world.GetObject(ObjectType.Skill, 16701359);
                var RIGHTTURNREPT_20_val = RIGHTTURNREPT_20.GetFloat(PropertyName.VAL);
                RIGHTTURNREPT_11.SetFloat(231, (RIGHTTURNREPT_14_val - 1f) * (RIGHTTURNREPT_20_val - 1f));
            }
            var RIGHTTURNREPT_24 = _world.GetObject(ObjectType.Skill, 16701359);
            var RIGHTTURNREPT_24_val = RIGHTTURNREPT_24.GetFloat(PropertyName.VAL);
            if (RIGHTTURNREPT_24_val > RIGHTTURNREPT_24.GetFloat(PropertyName.MAX))
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
        public IEnumerator REPTWAIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(189, null);
            var REPTJUMP_3 = _world.AcknexObject.GetAcknexObject(2834473604);
            var MY_5 = MY;
            MY_5.SetAcknexObject(192, REPTJUMP_3);
            var REPTFOLLOWATTACK_6 = _world.AcknexObject.GetAcknexObject(967398355);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, REPTFOLLOWATTACK_6);
            var CYCLEREPTATTACK_9 = _world.AcknexObject.GetAcknexObject(2476800208);
            var MY_11 = MY;
            MY_11.SetAcknexObject(190, CYCLEREPTATTACK_9);
            var REPTHIT_12 = _world.AcknexObject.GetAcknexObject(1387396781);
            var MY_14 = MY;
            MY_14.SetAcknexObject(209, REPTHIT_12);
            var MY_17 = MY;
            MY_17.SetFloat(213, 0f);
            var MY_20 = MY;
            MY_20.SetFloat(165, -0.05f);
            var MY_23 = MY;
            MY_23.SetFloat(176, 0f);
            var REPT0TEX_24 = _world.AcknexObject.GetAcknexObject(2833537897);
            var MY_26 = MY;
            MY_26.SetAcknexObject(164, REPT0TEX_24);
            var MY_29 = MY;
            MY_29.SetFloat(168, 0f);
            var MY_32 = MY;
            MY_32.SetAcknexObject(199, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator REPTWANDER(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(189, null);
            var REPTJUMP_3 = _world.AcknexObject.GetAcknexObject(2834473604);
            var MY_5 = MY;
            MY_5.SetAcknexObject(192, REPTJUMP_3);
            var REPTFOLLOWATTACK_6 = _world.AcknexObject.GetAcknexObject(967398355);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, REPTFOLLOWATTACK_6);
            var CYCLEREPTATTACK_9 = _world.AcknexObject.GetAcknexObject(2476800208);
            var MY_11 = MY;
            MY_11.SetAcknexObject(190, CYCLEREPTATTACK_9);
            var REPTHIT_12 = _world.AcknexObject.GetAcknexObject(1387396781);
            var MY_14 = MY;
            MY_14.SetAcknexObject(209, REPTHIT_12);
            var MY_17 = MY;
            MY_17.SetFloat(176, 1f);
            var REPT1TEX_18 = _world.AcknexObject.GetAcknexObject(2833573834);
            var MY_20 = MY;
            MY_20.SetAcknexObject(164, REPT1TEX_18);
            var MY_23 = MY;
            MY_23.SetFloat(168, 0.3f);
            var BULLET_24 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_26 = MY;
            MY_26.SetAcknexObject(199, BULLET_24);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator REPTSEARCH(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(189, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(192, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, null);
            var REPTHIT_9 = _world.AcknexObject.GetAcknexObject(1387396781);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, REPTHIT_9);
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
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat(181);
            if (temp_15 == 0f)
            {
                {
                    var enumerator = REPTWAIT(MY, THERE);
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
                var enumerator = REPTFOLLOWATTACK(MY, THERE);
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
        public IEnumerator REPTHIDE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat(207, 1f);
            var MY_5 = MY;
            MY_5.SetAcknexObject(189, null);
            var REPTESCAPE_6 = _world.AcknexObject.GetAcknexObject(2755726425);
            var MY_8 = MY;
            MY_8.SetAcknexObject(192, REPTESCAPE_6);
            var MY_11 = MY;
            MY_11.SetAcknexObject(193, null);
            var MY_14 = MY;
            MY_14.SetAcknexObject(190, null);
            var REPTHIT_15 = _world.AcknexObject.GetAcknexObject(1387396781);
            var MY_17 = MY;
            MY_17.SetAcknexObject(209, REPTHIT_15);
            var MY_20 = MY;
            MY_20.SetFloat(176, 4f);
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
            var MY_22 = MY;
            var MY_24 = MY;
            var temp_25 = MY_24.GetFloat(194);
            var MY_27 = MY;
            var temp_28 = MY_27.GetFloat(194);
            MY_22.SetFloat(194, temp_28 + (UnityEngine.Random.value - 0.5f) * 2.4f);
            var REPT1TEX_37 = _world.AcknexObject.GetAcknexObject(2833573834);
            var MY_39 = MY;
            MY_39.SetAcknexObject(164, REPT1TEX_37);
            var MY_42 = MY;
            MY_42.SetFloat(172, 20f);
            var MY_45 = MY;
            MY_45.SetFloat(168, 0.5f);
            var BULLET_46 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_48 = MY;
            MY_48.SetAcknexObject(199, BULLET_46);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)384f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_52 = MY;
            var temp_53 = MY_52.GetFloat(173);
            if (temp_53 > 5f)
            {
                yield break;
            }
            var MY_56 = MY;
            var temp_57 = MY_56.GetFloat(173);
            var MY_59 = MY;
            MY_59.SetFloat(173, temp_57 + -2f);
            {
                var enumerator = REPTWANDER(MY, THERE);
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
        public IEnumerator REPTLISTEN(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var CYCLEREPTATTACK_6 = _world.AcknexObject.GetAcknexObject(2476800208);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, CYCLEREPTATTACK_6);
            var REPTHIT_9 = _world.AcknexObject.GetAcknexObject(1387396781);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, REPTHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(176, 0f);
            var REPT0TEX_15 = _world.AcknexObject.GetAcknexObject(2833537897);
            var MY_17 = MY;
            MY_17.SetAcknexObject(164, REPT0TEX_15);
            var MY_20 = MY;
            MY_20.SetFloat(168, 0f);
            var MY_23 = MY;
            MY_23.SetAcknexObject(199, null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)120f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_27 = MY;
            var temp_28 = MY_27.GetFloat(173);
            if (temp_28 < 9f)
            {
                {
                    var enumerator = REPTWANDER(MY, THERE);
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
        public IEnumerator REPTJUMP(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(182);
            if (temp_3 == 1f)
            {
                goto BLOODSMELL;
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
            var temp_7 = MY_6.GetFloat(181);
            if (temp_7 == 0f)
            {
                yield break;
            }
            BLOODSMELL:
            {
                var enumerator = REPTTALK(MY, THERE);
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
        public IEnumerator REPTLOOKFOR(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(176);
            if (temp_3 == 0f)
            {
                yield break;
            }
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat(176);
            if (temp_7 == 4f)
            {
                yield break;
            }
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat(202);
            if (temp_11 > 100f)
            {
                yield break;
            }
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat(176);
            if (temp_15 == 10f)
            {
                yield break;
            }
            var FOLLOW_16 = _world.AcknexObject.GetAcknexObject(2968039200);
            var MY_18 = MY;
            var temp_19 = MY_18?.GetAcknexObject(199);
            if (temp_19 == FOLLOW_16)
            {
                yield break;
            }
            var MY_22 = MY;
            var temp_23 = MY_22.GetFloat(173);
            if (temp_23 > 5f)
            {
                yield break;
            }
            var REPTJUMP_24 = _world.AcknexObject.GetAcknexObject(2834473604);
            var MY_26 = MY;
            MY_26.SetAcknexObject(192, REPTJUMP_24);
            var REPTFOLLOWATTACK_27 = _world.AcknexObject.GetAcknexObject(967398355);
            var MY_29 = MY;
            MY_29.SetAcknexObject(193, REPTFOLLOWATTACK_27);
            var REPTHEAR_30 = _world.AcknexObject.GetAcknexObject(2834383912);
            var MY_32 = MY;
            MY_32.SetAcknexObject(190, REPTHEAR_30);
            var REPTHIT_33 = _world.AcknexObject.GetAcknexObject(1387396781);
            var MY_35 = MY;
            MY_35.SetAcknexObject(209, REPTHIT_33);
            var MY_38 = MY;
            MY_38.SetFloat(176, 0f);
            var REPTADNTEX_39 = _world.AcknexObject.GetAcknexObject(2581811692);
            var MY_41 = MY;
            MY_41.SetAcknexObject(164, REPTADNTEX_39);
            var MY_44 = MY;
            MY_44.SetFloat(168, 0f);
            var BULLET_45 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_47 = MY;
            MY_47.SetAcknexObject(199, BULLET_45);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator REPTHEAR(IAcknexObject MY, IAcknexObject THERE)
        {
            var REPTJUMP_0 = _world.AcknexObject.GetAcknexObject(2834473604);
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, REPTJUMP_0);
            var REPTFOLLOWATTACK_3 = _world.AcknexObject.GetAcknexObject(967398355);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, REPTFOLLOWATTACK_3);
            var REPTDOWN_6 = _world.AcknexObject.GetAcknexObject(2834251776);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, REPTDOWN_6);
            var MY_11 = MY;
            MY_11.SetFloat(176, 0f);
            var REPT0TEX_12 = _world.AcknexObject.GetAcknexObject(2833537897);
            var MY_14 = MY;
            MY_14.SetAcknexObject(164, REPT0TEX_12);
            var MY_17 = MY;
            MY_17.SetFloat(168, 0f);
            var FOLLOW_18 = _world.AcknexObject.GetAcknexObject(2968039200);
            var MY_20 = MY;
            MY_20.SetAcknexObject(199, FOLLOW_18);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator REPTDOWN(IAcknexObject MY, IAcknexObject THERE)
        {
            var REPTJUMP_0 = _world.AcknexObject.GetAcknexObject(2834473604);
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, REPTJUMP_0);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var REPTSEARCH_6 = _world.AcknexObject.GetAcknexObject(3286965246);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, REPTSEARCH_6);
            var MY_11 = MY;
            MY_11.SetFloat(176, 0f);
            var REPTAUPTEX_12 = _world.AcknexObject.GetAcknexObject(2602044223);
            var MY_14 = MY;
            MY_14.SetAcknexObject(164, REPTAUPTEX_12);
            var MY_17 = MY;
            MY_17.SetFloat(168, 0f);
            var BULLET_18 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_20 = MY;
            MY_20.SetAcknexObject(199, BULLET_18);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator REPTFOLLOWATTACK(IAcknexObject MY, IAcknexObject THERE)
        {
            var REPTJUMP_0 = _world.AcknexObject.GetAcknexObject(2834473604);
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, REPTJUMP_0);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var CYCLEREPTSHOOT_6 = _world.AcknexObject.GetAcknexObject(2048223749);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, CYCLEREPTSHOOT_6);
            var REPTHIT_9 = _world.AcknexObject.GetAcknexObject(1387396781);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, REPTHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(176, 2f);
            var REPT1TEX_15 = _world.AcknexObject.GetAcknexObject(2833573834);
            var MY_17 = MY;
            MY_17.SetAcknexObject(164, REPT1TEX_15);
            var MY_20 = MY;
            MY_20.SetFloat(168, 0.4f);
            var FOLLOW_21 = _world.AcknexObject.GetAcknexObject(2968039200);
            var MY_23 = MY;
            MY_23.SetAcknexObject(199, FOLLOW_21);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator REPTSHOOT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var REPTFOLLOWATTACK_3 = _world.AcknexObject.GetAcknexObject(967398355);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, REPTFOLLOWATTACK_3);
            var REPTHIDE_6 = _world.AcknexObject.GetAcknexObject(2834388354);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, REPTHIDE_6);
            var REPTHIT_9 = _world.AcknexObject.GetAcknexObject(1387396781);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, REPTHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(176, 3f);
            var REPT0TEX_15 = _world.AcknexObject.GetAcknexObject(2833537897);
            var MY_17 = MY;
            MY_17.SetAcknexObject(164, REPT0TEX_15);
            var MY_20 = MY;
            MY_20.SetFloat(168, 0f);
            var FOLLOW_21 = _world.AcknexObject.GetAcknexObject(2968039200);
            var MY_23 = MY;
            MY_23.SetAcknexObject(199, FOLLOW_21);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator REPTESCAPE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var REPTHIDE_3 = _world.AcknexObject.GetAcknexObject(2834388354);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, REPTHIDE_3);
            var CYCLEREPTHIDE_6 = _world.AcknexObject.GetAcknexObject(3836038962);
            var MY_8 = MY;
            MY_8.SetAcknexObject(190, CYCLEREPTHIDE_6);
            var REPTHIT_9 = _world.AcknexObject.GetAcknexObject(1387396781);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, REPTHIT_9);
            var MY_14 = MY;
            MY_14.SetFloat(176, 4f);
            var REPT1TEX_15 = _world.AcknexObject.GetAcknexObject(2833573834);
            var MY_17 = MY;
            MY_17.SetAcknexObject(164, REPT1TEX_15);
            var MY_20 = MY;
            MY_20.SetFloat(172, 30f);
            var MY_23 = MY;
            MY_23.SetFloat(168, 0.4f);
            var REPEL_24 = _world.AcknexObject.GetAcknexObject(233967877);
            var MY_26 = MY;
            MY_26.SetAcknexObject(199, REPEL_24);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator REPTDEAD(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(209, null);
            var MY_11 = MY;
            MY_11.SetAcknexObject(190, null);
            var MY_14 = MY;
            MY_14.SetFloat(176, 9f);
            var REPT9TEX_15 = _world.AcknexObject.GetAcknexObject(2833861330);
            var MY_17 = MY;
            MY_17.SetAcknexObject(164, REPT9TEX_15);
            var MY_20 = MY;
            MY_20.SetFloat(168, 0f);
            var MY_23 = MY;
            MY_23.SetAcknexObject(199, null);
            var MY_26 = MY;
            MY_26.SetFloat(206, 1f);
            var MY_29 = MY;
            MY_29.SetFloat(207, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator REPTDIE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat(173, 10f);
            var MY_5 = MY;
            MY_5.SetAcknexObject(192, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, null);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, null);
            var REPTDEAD_12 = _world.AcknexObject.GetAcknexObject(2834240150);
            var MY_14 = MY;
            MY_14.SetAcknexObject(190, REPTDEAD_12);
            var MY_17 = MY;
            MY_17.SetFloat(176, 8f);
            var REPT8TEX_18 = _world.AcknexObject.GetAcknexObject(2833825393);
            var MY_20 = MY;
            MY_20.SetAcknexObject(164, REPT8TEX_18);
            var MY_23 = MY;
            MY_23.SetFloat(168, 0f);
            var MY_26 = MY;
            MY_26.SetFloat(213, 0f);
            var MY_29 = MY;
            MY_29.SetFloat(165, -0.05f);
            var MY_32 = MY;
            MY_32.SetAcknexObject(199, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator REPTIMPLODE(IAcknexObject MY, IAcknexObject THERE)
        {
            var DISTX_0 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_1 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_1_val = DISTX_1.GetFloat(PropertyName.VAL);
            var MY_4 = MY;
            var temp_5 = MY_4.GetFloat(195);
            var EXPLOSION_CENTER_8 = _world.GetSynonymObject(3704223598);
            var temp_9 = EXPLOSION_CENTER_8.GetFloat(195);
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat(195);
            var EXPLOSION_CENTER_18 = _world.GetSynonymObject(3704223598);
            var temp_19 = EXPLOSION_CENTER_18.GetFloat(195);
            var MY_24 = MY;
            var temp_25 = MY_24.GetFloat(196);
            var EXPLOSION_CENTER_28 = _world.GetSynonymObject(3704223598);
            var temp_29 = EXPLOSION_CENTER_28.GetFloat(196);
            var MY_34 = MY;
            var temp_35 = MY_34.GetFloat(196);
            var EXPLOSION_CENTER_38 = _world.GetSynonymObject(3704223598);
            var temp_39 = EXPLOSION_CENTER_38.GetFloat(196);
            DISTX_0.SetFloat(231, (temp_5 - temp_9) * (temp_15 - temp_19) + (temp_25 - temp_29) * (temp_35 - temp_39));
            var DISTX_41 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_41_val = DISTX_41.GetFloat(PropertyName.VAL);
            var DISTX_42 = _world.GetObject(ObjectType.Skill, 217512505);
            DISTX_42.SetFloat(231, MathUtils.Sqrt(DISTX_41_val));
            var DISTZ_43 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_44 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_44_val = DISTZ_44.GetFloat(PropertyName.VAL);
            var MY_46 = MY;
            var temp_47 = MY_46.GetFloat(165);
            var EXPLOSION_CENTER_50 = _world.GetSynonymObject(3704223598);
            var temp_51 = EXPLOSION_CENTER_50.GetFloat(165);
            DISTZ_43.SetFloat(231, temp_47 - temp_51);
            var DISTX_53 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_53_val = DISTX_53.GetFloat(PropertyName.VAL);
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
            MY_56.SetFloat(206, 1f);
            var MY_59 = MY;
            MY_59.SetFloat(207, 0f);
            var MY_62 = MY;
            MY_62.SetAcknexObject(192, null);
            var MY_65 = MY;
            MY_65.SetAcknexObject(193, null);
            var MY_68 = MY;
            MY_68.SetAcknexObject(209, null);
            var VANISHFORGOOD_69 = _world.AcknexObject.GetAcknexObject(1333438470);
            var MY_71 = MY;
            MY_71.SetAcknexObject(190, VANISHFORGOOD_69);
            var MY_74 = MY;
            MY_74.SetFloat(176, 9f);
            var REPT0ATEX_75 = _world.AcknexObject.GetAcknexObject(3311738378);
            var MY_77 = MY;
            MY_77.SetAcknexObject(164, REPT0ATEX_75);
            var MY_80 = MY;
            MY_80.SetFloat(168, 0f);
            var MY_83 = MY;
            MY_83.SetAcknexObject(199, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator REPTHIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill, 441);
            var SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat(PropertyName.VAL);
            if (SHOOT_FAC_1_val == 0f)
            {
                goto OBSTACLE;
            }
            var MY_2 = MY;
            var HIT_3 = _world.GetSynonymObject(704);
            if (HIT_3 == MY_2)
            {
                goto HIT;
            }
            var EXPLOSION_ON_5 = _world.GetObject(ObjectType.Skill, 3352630890);
            var EXPLOSION_ON_5_val = EXPLOSION_ON_5.GetFloat(PropertyName.VAL);
            if (EXPLOSION_ON_5_val == 0f)
            {
                goto OBSTACLE;
            }
            HIT:
            var EXPLOSION_ON_7 = _world.GetObject(ObjectType.Skill, 3352630890);
            var EXPLOSION_ON_7_val = EXPLOSION_ON_7.GetFloat(PropertyName.VAL);
            if (EXPLOSION_ON_7_val != 2f)
            {
                goto CONT;
            }
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat(205);
            if (temp_11 == 1f)
            {
                {
                    var enumerator = REPTIMPLODE(MY, THERE);
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
            var SHOOT_FAC_12 = _world.GetObject(ObjectType.Skill, 441);
            var SHOOT_FAC_12_val = SHOOT_FAC_12.GetFloat(PropertyName.VAL);
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat(173);
            var MY_17 = MY;
            MY_17.SetFloat(173, temp_15 + SHOOT_FAC_12_val);
            var MY_20 = MY;
            var temp_21 = MY_20.GetFloat(173);
            if (temp_21 > 5f)
            {
                goto DIE;
            }
            if (UnityEngine.Random.value < 0.05f)
            {
                goto DIE;
            }
            var MY_25 = MY;
            var temp_26 = MY_25?.GetAcknexObject(164);
            _world.SetSynonymObject(2835226936, temp_26);
            var REPT5TEX_28 = _world.AcknexObject.GetAcknexObject(2833717582);
            var MY_30 = MY;
            MY_30.SetAcknexObject(164, REPT5TEX_28);
            var MY_33 = MY;
            MY_33.SetAcknexObject(192, null);
            var MY_36 = MY;
            MY_36.SetAcknexObject(193, null);
            var MY_39 = MY;
            MY_39.SetAcknexObject(209, null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)6f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var REPTHIT_41 = _world.AcknexObject.GetAcknexObject(1387396781);
            var MY_43 = MY;
            MY_43.SetAcknexObject(209, REPTHIT_41);
            var REPT_TEX_44 = _world.GetSynonymObject(2835226936);
            var MY_46 = MY;
            MY_46.SetAcknexObject(164, REPT_TEX_44);
            var REPT02SND_47 = _world.AcknexObject.GetAcknexObject(3311198511);
            var MY_49 = MY;
            _world.PlaySound(REPT02SND_47, 0.7f, MY_49);
            {
                var enumerator = REPTHIDE(MY, THERE);
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
            var MY_52 = MY;
            MY_52.SetFloat(173, 10f);
            {
                var enumerator = REPTDIE(MY, THERE);
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
                var enumerator = REPTTALK(MY, THERE);
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
                var enumerator = REPTTURN(MY, THERE);
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
        public IEnumerator CYCLEREPTATTACK(IAcknexObject MY, IAcknexObject THERE)
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
            var MY_2 = MY;
            MY_2.SetFloat(213, 0f);
            var MY_5 = MY;
            MY_5.SetFloat(165, -0.05f);
            var MY_8 = MY;
            MY_8.SetFloat(169, 0f);
            var MY_11 = MY;
            MY_11.SetAcknexObject(189, null);
            {
                var enumerator = REPTTALK(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var SHOT_SOUND_ON_13 = _world.GetObject(ObjectType.Skill, 3372273679);
            var SHOT_SOUND_ON_13_val = SHOT_SOUND_ON_13.GetFloat(PropertyName.VAL);
            if (SHOT_SOUND_ON_13_val == 0f)
            {
                goto CONT;
            }
            {
                var enumerator = REPTLOOKFOR(MY, THERE);
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
            var MY_16 = MY;
            var temp_17 = MY_16.GetFloat(181);
            if (temp_17 == 0f)
            {
                yield break;
            }
            var MY_20 = MY;
            var temp_21 = MY_20.GetFloat(182);
            if (temp_21 == 1f)
            {
                goto CONT1;
            }
            var MY_24 = MY;
            MY_24.SetFloat(182, 1f);
            var REPT02SND_25 = _world.AcknexObject.GetAcknexObject(3311198511);
            var MY_27 = MY;
            _world.PlaySound(REPT02SND_25, 0.7f, MY_27);
            CONT1:
            {
                var enumerator = REPTFOLLOWATTACK(MY, THERE);
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
        public IEnumerator CYCLEREPTHIDE(IAcknexObject MY, IAcknexObject THERE)
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
            var MY_2 = MY;
            MY_2.SetFloat(213, 0f);
            var MY_5 = MY;
            MY_5.SetFloat(165, -0.05f);
            var MY_8 = MY;
            MY_8.SetFloat(169, 0f);
            var MY_11 = MY;
            MY_11.SetAcknexObject(189, null);
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat(205);
            if (temp_15 == 0f)
            {
                goto STOP;
            }
            var MY_18 = MY;
            MY_18.SetFloat(168, 0.6f);
            var BULLET_19 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_21 = MY;
            MY_21.SetAcknexObject(199, BULLET_19);
            yield break;
            STOP:
            var MY_24 = MY;
            MY_24.SetFloat(168, 0f);
            var MY_27 = MY;
            MY_27.SetAcknexObject(199, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CYCLEREPTSHOOT(IAcknexObject MY, IAcknexObject THERE)
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
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(173);
            if (temp_3 > 9f)
            {
                {
                    var enumerator = REPTDIE(MY, THERE);
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
            var MY_6 = MY;
            MY_6.SetFloat(213, 0f);
            var MY_9 = MY;
            MY_9.SetFloat(165, -0.05f);
            var MY_12 = MY;
            MY_12.SetFloat(169, 0f);
            var MY_15 = MY;
            MY_15.SetAcknexObject(189, null);
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
            var MY_18 = MY;
            var temp_19 = MY_18.GetFloat(181);
            if (temp_19 == 0f)
            {
                goto CONTFLAG2;
            }
            goto PLAYERSEEN;
            CONTFLAG2:
            var MY_22 = MY;
            var temp_23 = MY_22.GetFloat(182);
            if (temp_23 == 1f)
            {
                goto ATTACK;
            }
            {
                var enumerator = REPTWAIT(MY, THERE);
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
            PLAYERSEEN:
            var MY_26 = MY;
            MY_26.SetFloat(182, 1f);
            CONT:
            var MY_29 = MY;
            var temp_30 = MY_29.GetFloat(202);
            if (temp_30 > 10f)
            {
                goto ATTACK;
            }
            {
                var enumerator = REPTSHOOT(MY, THERE);
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
                var enumerator = REPTFOLLOWATTACK(MY, THERE);
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
        public IEnumerator REPTTALK(IAcknexObject MY, IAcknexObject THERE)
        {
            if (UnityEngine.Random.value > 0.9f)
            {
                var REPT01SND_2 = _world.AcknexObject.GetAcknexObject(3311162574);
                var MY_4 = MY;
                _world.PlaySound(REPT01SND_2, 0.5f, MY_4);
            }
            if (UnityEngine.Random.value < 0.1f)
            {
                var REPT02SND_7 = _world.AcknexObject.GetAcknexObject(3311198511);
                var MY_9 = MY;
                _world.PlaySound(REPT02SND_7, 0.5f, MY_9);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator NURSTURN(IAcknexObject MY, IAcknexObject THERE)
        {
            var WAITTIME_0 = _world.GetObject(ObjectType.Skill, 33817649);
            var WAITTIME_1 = _world.GetObject(ObjectType.Skill, 33817649);
            var WAITTIME_1_val = WAITTIME_1.GetFloat(PropertyName.VAL);
            WAITTIME_0.SetFloat(231, 64f * UnityEngine.Random.value + 16f);
            if (UnityEngine.Random.value > 0.95f)
            {
                var RIGHTTURNNURS_9 = _world.GetObject(ObjectType.Skill, 16575100);
                var RIGHTTURNNURS_10 = _world.GetObject(ObjectType.Skill, 16575100);
                var RIGHTTURNNURS_10_val = RIGHTTURNNURS_10.GetFloat(PropertyName.VAL);
                var RIGHTTURNNURS_12 = _world.GetObject(ObjectType.Skill, 16575100);
                var RIGHTTURNNURS_12_val = RIGHTTURNNURS_12.GetFloat(PropertyName.VAL);
                var RIGHTTURNNURS_18 = _world.GetObject(ObjectType.Skill, 16575100);
                var RIGHTTURNNURS_18_val = RIGHTTURNNURS_18.GetFloat(PropertyName.VAL);
                RIGHTTURNNURS_9.SetFloat(231, (RIGHTTURNNURS_12_val - 1f) * (RIGHTTURNNURS_18_val - 1f));
            }
            var RIGHTTURNNURS_22 = _world.GetObject(ObjectType.Skill, 16575100);
            var RIGHTTURNNURS_22_val = RIGHTTURNNURS_22.GetFloat(PropertyName.VAL);
            if (RIGHTTURNNURS_22_val > RIGHTTURNNURS_22.GetFloat(PropertyName.MAX))
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
        public IEnumerator NURSWAIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat(207, 0f);
            var MY_5 = MY;
            MY_5.SetAcknexObject(189, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, null);
            var NURSHIT_9 = _world.AcknexObject.GetAcknexObject(1144994394);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, NURSHIT_9);
            var NURSTALK_12 = _world.AcknexObject.GetAcknexObject(3425466977);
            var MY_14 = MY;
            MY_14.SetAcknexObject(192, NURSTALK_12);
            var NURSCYCLE_15 = _world.AcknexObject.GetAcknexObject(1351920677);
            var MY_17 = MY;
            MY_17.SetAcknexObject(190, NURSCYCLE_15);
            var MY_20 = MY;
            MY_20.SetFloat(213, 0f);
            var MY_23 = MY;
            MY_23.SetFloat(165, -0.05f);
            var NURS0TEX_24 = _world.AcknexObject.GetAcknexObject(3424193718);
            var MY_26 = MY;
            MY_26.SetAcknexObject(164, NURS0TEX_24);
            var MY_29 = MY;
            MY_29.SetFloat(168, 0f);
            var MY_32 = MY;
            MY_32.SetAcknexObject(199, null);
            var MY_35 = MY;
            MY_35.SetFloat(176, 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator NURSWANDER(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat(207, 1f);
            var MY_5 = MY;
            MY_5.SetAcknexObject(189, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, null);
            var NURSHIT_9 = _world.AcknexObject.GetAcknexObject(1144994394);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, NURSHIT_9);
            var MY_14 = MY;
            MY_14.SetAcknexObject(192, null);
            var NURSCYCLE_15 = _world.AcknexObject.GetAcknexObject(1351920677);
            var MY_17 = MY;
            MY_17.SetAcknexObject(190, NURSCYCLE_15);
            var MY_20 = MY;
            MY_20.SetFloat(213, 0f);
            var NURS1TEX_21 = _world.AcknexObject.GetAcknexObject(3424229655);
            var MY_23 = MY;
            MY_23.SetAcknexObject(164, NURS1TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat(168, 0.4f);
            var BULLET_27 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_29 = MY;
            MY_29.SetAcknexObject(199, BULLET_27);
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
            MY_32.SetFloat(176, 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator NURSHIDE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat(207, 1f);
            var MY_5 = MY;
            MY_5.SetAcknexObject(189, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(192, null);
            var MY_11 = MY;
            MY_11.SetAcknexObject(193, null);
            var NURSCYCLE_12 = _world.AcknexObject.GetAcknexObject(1351920677);
            var MY_14 = MY;
            MY_14.SetAcknexObject(190, NURSCYCLE_12);
            var NURSHIT_15 = _world.AcknexObject.GetAcknexObject(1144994394);
            var MY_17 = MY;
            MY_17.SetAcknexObject(209, NURSHIT_15);
            {
                var enumerator = NURSSCREAM(MY, THERE);
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
            var temp_22 = MY_21.GetFloat(194);
            var PLAYER_ANGLE_23 = _world.GetObject(ObjectType.Skill, 462);
            var PLAYER_ANGLE_23_val = PLAYER_ANGLE_23.GetFloat(PropertyName.VAL);
            MY_19.SetFloat(194, PLAYER_ANGLE_23_val + (0.5f - UnityEngine.Random.value) * 2.4f);
            var NURS1TEX_32 = _world.AcknexObject.GetAcknexObject(3424229655);
            var MY_34 = MY;
            MY_34.SetAcknexObject(164, NURS1TEX_32);
            var MY_37 = MY;
            MY_37.SetFloat(168, 0.6f);
            var MY_40 = MY;
            MY_40.SetFloat(172, 20f);
            var BULLET_41 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_43 = MY;
            MY_43.SetAcknexObject(199, BULLET_41);
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
            MY_46.SetFloat(176, 4f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)480f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_50 = MY;
            var temp_51 = MY_50.GetFloat(173);
            if (temp_51 < 2f)
            {
                {
                    var enumerator = NURSWANDER(MY, THERE);
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
        public IEnumerator NURSDEAD(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(209, null);
            var MY_11 = MY;
            MY_11.SetAcknexObject(190, null);
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
            var NURS9TEX_12 = _world.AcknexObject.GetAcknexObject(3424517151);
            var MY_14 = MY;
            MY_14.SetAcknexObject(164, NURS9TEX_12);
            var MY_17 = MY;
            MY_17.SetFloat(168, 0f);
            var MY_20 = MY;
            MY_20.SetAcknexObject(199, null);
            var MY_23 = MY;
            MY_23.SetFloat(206, 1f);
            var MY_26 = MY;
            MY_26.SetFloat(207, 0f);
            var MY_29 = MY;
            MY_29.SetFloat(176, 8f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator NURSDIE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat(173, 10f);
            var MY_5 = MY;
            MY_5.SetFloat(206, 1f);
            var MY_8 = MY;
            MY_8.SetFloat(207, 0f);
            var MY_11 = MY;
            MY_11.SetAcknexObject(192, null);
            var MY_14 = MY;
            MY_14.SetAcknexObject(193, null);
            var MY_17 = MY;
            MY_17.SetAcknexObject(209, null);
            var NURSDEAD_18 = _world.AcknexObject.GetAcknexObject(3424895971);
            var MY_20 = MY;
            MY_20.SetAcknexObject(190, NURSDEAD_18);
            var NURS8TEX_21 = _world.AcknexObject.GetAcknexObject(3424481214);
            var MY_23 = MY;
            MY_23.SetAcknexObject(164, NURS8TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat(168, 0f);
            var MY_29 = MY;
            MY_29.SetAcknexObject(199, null);
            var NURS04SND_30 = _world.AcknexObject.GetAcknexObject(1328075998);
            var MY_32 = MY;
            _world.PlaySound(NURS04SND_30, 0.4f, MY_32);
            var MY_35 = MY;
            MY_35.SetFloat(176, 8f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator NURSIMPLODE(IAcknexObject MY, IAcknexObject THERE)
        {
            var DISTX_0 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_1 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_1_val = DISTX_1.GetFloat(PropertyName.VAL);
            var MY_4 = MY;
            var temp_5 = MY_4.GetFloat(195);
            var EXPLOSION_CENTER_8 = _world.GetSynonymObject(3704223598);
            var temp_9 = EXPLOSION_CENTER_8.GetFloat(195);
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat(195);
            var EXPLOSION_CENTER_18 = _world.GetSynonymObject(3704223598);
            var temp_19 = EXPLOSION_CENTER_18.GetFloat(195);
            var MY_24 = MY;
            var temp_25 = MY_24.GetFloat(196);
            var EXPLOSION_CENTER_28 = _world.GetSynonymObject(3704223598);
            var temp_29 = EXPLOSION_CENTER_28.GetFloat(196);
            var MY_34 = MY;
            var temp_35 = MY_34.GetFloat(196);
            var EXPLOSION_CENTER_38 = _world.GetSynonymObject(3704223598);
            var temp_39 = EXPLOSION_CENTER_38.GetFloat(196);
            DISTX_0.SetFloat(231, (temp_5 - temp_9) * (temp_15 - temp_19) + (temp_25 - temp_29) * (temp_35 - temp_39));
            var DISTX_41 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_41_val = DISTX_41.GetFloat(PropertyName.VAL);
            var DISTX_42 = _world.GetObject(ObjectType.Skill, 217512505);
            DISTX_42.SetFloat(231, MathUtils.Sqrt(DISTX_41_val));
            var DISTZ_43 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_44 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_44_val = DISTZ_44.GetFloat(PropertyName.VAL);
            var MY_46 = MY;
            var temp_47 = MY_46.GetFloat(200);
            var EXPLOSION_CENTER_50 = _world.GetSynonymObject(3704223598);
            var temp_51 = EXPLOSION_CENTER_50.GetFloat(200);
            DISTZ_43.SetFloat(231, temp_47 - temp_51);
            var DISTX_53 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_53_val = DISTX_53.GetFloat(PropertyName.VAL);
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
            MY_56.SetFloat(206, 1f);
            var MY_59 = MY;
            MY_59.SetFloat(207, 0f);
            var MY_62 = MY;
            MY_62.SetAcknexObject(192, null);
            var MY_65 = MY;
            MY_65.SetAcknexObject(193, null);
            var MY_68 = MY;
            MY_68.SetAcknexObject(209, null);
            var VANISHFORGOOD_69 = _world.AcknexObject.GetAcknexObject(1333438470);
            var MY_71 = MY;
            MY_71.SetAcknexObject(190, VANISHFORGOOD_69);
            var NURS0ATEX_72 = _world.AcknexObject.GetAcknexObject(1328543991);
            var MY_74 = MY;
            MY_74.SetAcknexObject(164, NURS0ATEX_72);
            var MY_77 = MY;
            MY_77.SetFloat(168, 0f);
            var MY_80 = MY;
            MY_80.SetAcknexObject(199, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator NURSHIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill, 441);
            var SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat(PropertyName.VAL);
            if (SHOOT_FAC_1_val == 0f)
            {
                goto OBSTACLE;
            }
            var MY_2 = MY;
            var HIT_3 = _world.GetSynonymObject(704);
            if (HIT_3 == MY_2)
            {
                goto HIT;
            }
            var EXPLOSION_ON_5 = _world.GetObject(ObjectType.Skill, 3352630890);
            var EXPLOSION_ON_5_val = EXPLOSION_ON_5.GetFloat(PropertyName.VAL);
            if (EXPLOSION_ON_5_val == 0f)
            {
                goto OBSTACLE;
            }
            var DISTX_6 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_7 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_7_val = DISTX_7.GetFloat(PropertyName.VAL);
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat(195);
            var EXPLOSION_CENTER_14 = _world.GetSynonymObject(3704223598);
            var temp_15 = EXPLOSION_CENTER_14.GetFloat(195);
            var MY_20 = MY;
            var temp_21 = MY_20.GetFloat(195);
            var EXPLOSION_CENTER_24 = _world.GetSynonymObject(3704223598);
            var temp_25 = EXPLOSION_CENTER_24.GetFloat(195);
            var MY_30 = MY;
            var temp_31 = MY_30.GetFloat(196);
            var EXPLOSION_CENTER_34 = _world.GetSynonymObject(3704223598);
            var temp_35 = EXPLOSION_CENTER_34.GetFloat(196);
            var MY_40 = MY;
            var temp_41 = MY_40.GetFloat(196);
            var EXPLOSION_CENTER_44 = _world.GetSynonymObject(3704223598);
            var temp_45 = EXPLOSION_CENTER_44.GetFloat(196);
            DISTX_6.SetFloat(231, (temp_11 - temp_15) * (temp_21 - temp_25) + (temp_31 - temp_35) * (temp_41 - temp_45));
            var DISTX_47 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_47_val = DISTX_47.GetFloat(PropertyName.VAL);
            var DISTX_48 = _world.GetObject(ObjectType.Skill, 217512505);
            DISTX_48.SetFloat(231, MathUtils.Sqrt(DISTX_47_val));
            var DISTX_50 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_50_val = DISTX_50.GetFloat(PropertyName.VAL);
            if (DISTX_50_val > 25f)
            {
                goto OBSTACLE;
            }
            HIT:
            var EXPLOSION_ON_52 = _world.GetObject(ObjectType.Skill, 3352630890);
            var EXPLOSION_ON_52_val = EXPLOSION_ON_52.GetFloat(PropertyName.VAL);
            if (EXPLOSION_ON_52_val != 2f)
            {
                goto CONT;
            }
            var MY_55 = MY;
            var temp_56 = MY_55.GetFloat(205);
            if (temp_56 == 1f)
            {
                {
                    var enumerator = NURSIMPLODE(MY, THERE);
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
            var SHOOT_FAC_57 = _world.GetObject(ObjectType.Skill, 441);
            var SHOOT_FAC_57_val = SHOOT_FAC_57.GetFloat(PropertyName.VAL);
            var MY_59 = MY;
            var temp_60 = MY_59.GetFloat(173);
            var MY_62 = MY;
            MY_62.SetFloat(173, temp_60 + SHOOT_FAC_57_val);
            var MY_65 = MY;
            var temp_66 = MY_65.GetFloat(173);
            if (temp_66 > 2f)
            {
                goto DIE;
            }
            if (UnityEngine.Random.value < 0.3f)
            {
                goto DIE;
            }
            var MY_70 = MY;
            var temp_71 = MY_70?.GetAcknexObject(164);
            _world.SetSynonymObject(1354526442, temp_71);
            var NURS5TEX_73 = _world.AcknexObject.GetAcknexObject(3424373403);
            var MY_75 = MY;
            MY_75.SetAcknexObject(164, NURS5TEX_73);
            var MY_78 = MY;
            MY_78.SetAcknexObject(192, null);
            var MY_81 = MY;
            MY_81.SetAcknexObject(193, null);
            var MY_84 = MY;
            MY_84.SetAcknexObject(209, null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_88 = MY;
            MY_88.SetAcknexObject(192, null);
            var MY_91 = MY;
            MY_91.SetAcknexObject(193, null);
            var NURSHIT_92 = _world.AcknexObject.GetAcknexObject(1144994394);
            var MY_94 = MY;
            MY_94.SetAcknexObject(209, NURSHIT_92);
            var NURSE_TEX_95 = _world.GetSynonymObject(1354526442);
            var MY_97 = MY;
            MY_97.SetAcknexObject(164, NURSE_TEX_95);
            {
                var enumerator = NURSHIDE(MY, THERE);
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
            MY_100.SetFloat(173, 10f);
            {
                var enumerator = NURSDIE(MY, THERE);
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
            var temp_104 = MY_103.GetFloat(176);
            if (temp_104 != 1f)
            {
                goto JUMP;
            }
            if (UnityEngine.Random.value > 0.97f)
            {
                var NURS02SND_107 = _world.AcknexObject.GetAcknexObject(1328004124);
                var MY_109 = MY;
                _world.PlaySound(NURS02SND_107, 0.3f, MY_109);
            }
            JUMP:
            {
                var enumerator = NURSTURN(MY, THERE);
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
        public IEnumerator NURSCYCLE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(176);
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
            var temp_8 = MY_7.GetFloat(194);
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat(194);
            MY_5.SetFloat(194, temp_11 + UnityEngine.Random.value - 0.5f);
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
            var temp_19 = MY_18.GetFloat(202);
            if (temp_19 > 4f)
            {
                goto CONT1;
            }
            var MY_22 = MY;
            var temp_23 = MY_22.GetFloat(168);
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
            var temp_28 = MY_27.GetFloat(194);
            var MY_30 = MY;
            var temp_31 = MY_30.GetFloat(194);
            MY_25.SetFloat(194, temp_31 + UnityEngine.Random.value - 0.5f);
            CONT1:
            var GUN_ON_37 = _world.GetObject(ObjectType.Skill, 3014382675);
            var GUN_ON_37_val = GUN_ON_37.GetFloat(PropertyName.VAL);
            if (GUN_ON_37_val != 0f)
            {
                goto HIDE;
            }
            var SHOT_SOUND_ON_39 = _world.GetObject(ObjectType.Skill, 3372273679);
            var SHOT_SOUND_ON_39_val = SHOT_SOUND_ON_39.GetFloat(PropertyName.VAL);
            if (SHOT_SOUND_ON_39_val != 0f)
            {
                goto HIDE;
            }
            var EXPLOSION_ON_41 = _world.GetObject(ObjectType.Skill, 3352630890);
            var EXPLOSION_ON_41_val = EXPLOSION_ON_41.GetFloat(PropertyName.VAL);
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
                var enumerator = NURSSCREAM(MY, THERE);
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
                var enumerator = NURSHIDE(MY, THERE);
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
        public IEnumerator NURSSCREAM(IAcknexObject MY, IAcknexObject THERE)
        {
            if (UnityEngine.Random.value < 0.4f)
            {
                goto NONO;
            }
            var NURS03SND_2 = _world.AcknexObject.GetAcknexObject(1328040061);
            var MY_4 = MY;
            _world.PlaySound(NURS03SND_2, 0.3f, MY_4);
            yield break;
            NONO:
            var NURS05SND_5 = _world.AcknexObject.GetAcknexObject(1328111935);
            var MY_7 = MY;
            _world.PlaySound(NURS05SND_5, 0.3f, MY_7);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator NURSTALK(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(205);
            if (temp_3 != 1f)
            {
                yield break;
            }
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat(176);
            if (temp_7 == 4f)
            {
                yield break;
            }
            var TALKNURS_9 = _world.GetObject(ObjectType.Skill, 1134038113);
            var TALKNURS_9_val = TALKNURS_9.GetFloat(PropertyName.VAL);
            if (TALKNURS_9_val != 0f)
            {
                yield break;
            }
            var TALKNURS_11 = _world.GetObject(ObjectType.Skill, 1134038113);
            TALKNURS_11.SetFloat(231, 1f);
            var FOLLOW_12 = _world.AcknexObject.GetAcknexObject(2968039200);
            var MY_14 = MY;
            MY_14.SetAcknexObject(199, FOLLOW_12);
            var MY_17 = MY;
            MY_17.SetFloat(168, 0.05f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_21 = MY;
            MY_21.SetFloat(168, 0f);
            if (UnityEngine.Random.value < 0.3f)
            {
                goto MAYIHELP;
            }
            var NURS01SND_24 = _world.AcknexObject.GetAcknexObject(1327968187);
            var MY_26 = MY;
            _world.PlaySound(NURS01SND_24, 0.25f, MY_26);
            goto TIMER;
            MAYIHELP:
            var NURS02SND_27 = _world.AcknexObject.GetAcknexObject(1328004124);
            var MY_29 = MY;
            _world.PlaySound(NURS02SND_27, 0.25f, MY_29);
            TIMER:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)128f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var TALKNURS_32 = _world.GetObject(ObjectType.Skill, 1134038113);
            TALKNURS_32.SetFloat(231, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DOCTTURN(IAcknexObject MY, IAcknexObject THERE)
        {
            var WAITTIME_0 = _world.GetObject(ObjectType.Skill, 33817649);
            var WAITTIME_1 = _world.GetObject(ObjectType.Skill, 33817649);
            var WAITTIME_1_val = WAITTIME_1.GetFloat(PropertyName.VAL);
            WAITTIME_0.SetFloat(231, 64f * UnityEngine.Random.value + 16f);
            if (UnityEngine.Random.value > 0.95f)
            {
                var RIGHTTURNDOCT_9 = _world.GetObject(ObjectType.Skill, 16208702);
                var RIGHTTURNDOCT_10 = _world.GetObject(ObjectType.Skill, 16208702);
                var RIGHTTURNDOCT_10_val = RIGHTTURNDOCT_10.GetFloat(PropertyName.VAL);
                var RIGHTTURNDOCT_12 = _world.GetObject(ObjectType.Skill, 16208702);
                var RIGHTTURNDOCT_12_val = RIGHTTURNDOCT_12.GetFloat(PropertyName.VAL);
                var RIGHTTURNDOCT_18 = _world.GetObject(ObjectType.Skill, 16208702);
                var RIGHTTURNDOCT_18_val = RIGHTTURNDOCT_18.GetFloat(PropertyName.VAL);
                RIGHTTURNDOCT_9.SetFloat(231, (RIGHTTURNDOCT_12_val - 1f) * (RIGHTTURNDOCT_18_val - 1f));
            }
            var RIGHTTURNDOCT_22 = _world.GetObject(ObjectType.Skill, 16208702);
            var RIGHTTURNDOCT_22_val = RIGHTTURNDOCT_22.GetFloat(PropertyName.VAL);
            if (RIGHTTURNDOCT_22_val > RIGHTTURNDOCT_22.GetFloat(PropertyName.MAX))
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
        public IEnumerator DOCTWAIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat(207, 0f);
            var MY_5 = MY;
            MY_5.SetAcknexObject(189, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, null);
            var DOCTHIT_9 = _world.AcknexObject.GetAcknexObject(862651356);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, DOCTHIT_9);
            var DOCTTALK_12 = _world.AcknexObject.GetAcknexObject(2698081315);
            var MY_14 = MY;
            MY_14.SetAcknexObject(192, DOCTTALK_12);
            var DOCTCYCLE_15 = _world.AcknexObject.GetAcknexObject(3117997607);
            var MY_17 = MY;
            MY_17.SetAcknexObject(190, DOCTCYCLE_15);
            var MY_20 = MY;
            MY_20.SetFloat(213, 0f);
            var MY_23 = MY;
            MY_23.SetFloat(165, -0.05f);
            var DOCT0TEX_24 = _world.AcknexObject.GetAcknexObject(2696808056);
            var MY_26 = MY;
            MY_26.SetAcknexObject(164, DOCT0TEX_24);
            var MY_29 = MY;
            MY_29.SetFloat(168, 0f);
            var MY_32 = MY;
            MY_32.SetAcknexObject(199, null);
            var MY_35 = MY;
            MY_35.SetFloat(176, 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DOCTWANDER(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat(207, 1f);
            var MY_5 = MY;
            MY_5.SetAcknexObject(189, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, null);
            var DOCTHIT_9 = _world.AcknexObject.GetAcknexObject(862651356);
            var MY_11 = MY;
            MY_11.SetAcknexObject(209, DOCTHIT_9);
            var MY_14 = MY;
            MY_14.SetAcknexObject(192, null);
            var DOCTCYCLE_15 = _world.AcknexObject.GetAcknexObject(3117997607);
            var MY_17 = MY;
            MY_17.SetAcknexObject(190, DOCTCYCLE_15);
            var MY_20 = MY;
            MY_20.SetFloat(213, 0f);
            var DOCT1TEX_21 = _world.AcknexObject.GetAcknexObject(2696843993);
            var MY_23 = MY;
            MY_23.SetAcknexObject(164, DOCT1TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat(168, 0.4f);
            var BULLET_27 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_29 = MY;
            MY_29.SetAcknexObject(199, BULLET_27);
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
            MY_32.SetFloat(176, 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DOCTHIDE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat(207, 1f);
            var MY_5 = MY;
            MY_5.SetAcknexObject(189, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(192, null);
            var MY_11 = MY;
            MY_11.SetAcknexObject(193, null);
            var DOCTCYCLE_12 = _world.AcknexObject.GetAcknexObject(3117997607);
            var MY_14 = MY;
            MY_14.SetAcknexObject(190, DOCTCYCLE_12);
            var DOCTHIT_15 = _world.AcknexObject.GetAcknexObject(862651356);
            var MY_17 = MY;
            MY_17.SetAcknexObject(209, DOCTHIT_15);
            {
                var enumerator = DOCTSCREAM(MY, THERE);
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
            var temp_22 = MY_21.GetFloat(194);
            var PLAYER_ANGLE_23 = _world.GetObject(ObjectType.Skill, 462);
            var PLAYER_ANGLE_23_val = PLAYER_ANGLE_23.GetFloat(PropertyName.VAL);
            MY_19.SetFloat(194, PLAYER_ANGLE_23_val + (0.5f - UnityEngine.Random.value) * 2.4f);
            var DOCT1TEX_32 = _world.AcknexObject.GetAcknexObject(2696843993);
            var MY_34 = MY;
            MY_34.SetAcknexObject(164, DOCT1TEX_32);
            var MY_37 = MY;
            MY_37.SetFloat(168, 0.6f);
            var MY_40 = MY;
            MY_40.SetFloat(172, 20f);
            var BULLET_41 = _world.AcknexObject.GetAcknexObject(2818612821);
            var MY_43 = MY;
            MY_43.SetAcknexObject(199, BULLET_41);
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
            MY_46.SetFloat(176, 4f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)480f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_50 = MY;
            var temp_51 = MY_50.GetFloat(173);
            if (temp_51 < 2f)
            {
                {
                    var enumerator = DOCTWANDER(MY, THERE);
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
        public IEnumerator DOCTDEAD(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(192, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(193, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(209, null);
            var MY_11 = MY;
            MY_11.SetAcknexObject(190, null);
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
            var DOCT9TEX_12 = _world.AcknexObject.GetAcknexObject(2697131489);
            var MY_14 = MY;
            MY_14.SetAcknexObject(164, DOCT9TEX_12);
            var MY_17 = MY;
            MY_17.SetFloat(168, 0f);
            var MY_20 = MY;
            MY_20.SetAcknexObject(199, null);
            var MY_23 = MY;
            MY_23.SetFloat(206, 1f);
            var MY_26 = MY;
            MY_26.SetFloat(207, 0f);
            var MY_29 = MY;
            MY_29.SetFloat(176, 8f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DOCTDIE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat(173, 10f);
            var MY_5 = MY;
            MY_5.SetFloat(206, 1f);
            var MY_8 = MY;
            MY_8.SetFloat(207, 0f);
            var MY_11 = MY;
            MY_11.SetAcknexObject(192, null);
            var MY_14 = MY;
            MY_14.SetAcknexObject(193, null);
            var MY_17 = MY;
            MY_17.SetAcknexObject(209, null);
            var DOCTDEAD_18 = _world.AcknexObject.GetAcknexObject(2697510309);
            var MY_20 = MY;
            MY_20.SetAcknexObject(190, DOCTDEAD_18);
            var DOCT8TEX_21 = _world.AcknexObject.GetAcknexObject(2697095552);
            var MY_23 = MY;
            MY_23.SetAcknexObject(164, DOCT8TEX_21);
            var MY_26 = MY;
            MY_26.SetFloat(168, 0f);
            var MY_29 = MY;
            MY_29.SetAcknexObject(199, null);
            var DOCT04SND_30 = _world.AcknexObject.GetAcknexObject(3094152928);
            var MY_32 = MY;
            _world.PlaySound(DOCT04SND_30, 0.4f, MY_32);
            var MY_35 = MY;
            MY_35.SetFloat(176, 8f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DOCTIMPLODE(IAcknexObject MY, IAcknexObject THERE)
        {
            var DISTX_0 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_1 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_1_val = DISTX_1.GetFloat(PropertyName.VAL);
            var MY_4 = MY;
            var temp_5 = MY_4.GetFloat(195);
            var EXPLOSION_CENTER_8 = _world.GetSynonymObject(3704223598);
            var temp_9 = EXPLOSION_CENTER_8.GetFloat(195);
            var MY_14 = MY;
            var temp_15 = MY_14.GetFloat(195);
            var EXPLOSION_CENTER_18 = _world.GetSynonymObject(3704223598);
            var temp_19 = EXPLOSION_CENTER_18.GetFloat(195);
            var MY_24 = MY;
            var temp_25 = MY_24.GetFloat(196);
            var EXPLOSION_CENTER_28 = _world.GetSynonymObject(3704223598);
            var temp_29 = EXPLOSION_CENTER_28.GetFloat(196);
            var MY_34 = MY;
            var temp_35 = MY_34.GetFloat(196);
            var EXPLOSION_CENTER_38 = _world.GetSynonymObject(3704223598);
            var temp_39 = EXPLOSION_CENTER_38.GetFloat(196);
            DISTX_0.SetFloat(231, (temp_5 - temp_9) * (temp_15 - temp_19) + (temp_25 - temp_29) * (temp_35 - temp_39));
            var DISTX_41 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_41_val = DISTX_41.GetFloat(PropertyName.VAL);
            var DISTX_42 = _world.GetObject(ObjectType.Skill, 217512505);
            DISTX_42.SetFloat(231, MathUtils.Sqrt(DISTX_41_val));
            var DISTZ_43 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_44 = _world.GetObject(ObjectType.Skill, 217512507);
            var DISTZ_44_val = DISTZ_44.GetFloat(PropertyName.VAL);
            var MY_46 = MY;
            var temp_47 = MY_46.GetFloat(200);
            var EXPLOSION_CENTER_50 = _world.GetSynonymObject(3704223598);
            var temp_51 = EXPLOSION_CENTER_50.GetFloat(200);
            DISTZ_43.SetFloat(231, temp_47 - temp_51);
            var DISTX_53 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_53_val = DISTX_53.GetFloat(PropertyName.VAL);
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
            MY_56.SetFloat(206, 1f);
            var MY_59 = MY;
            MY_59.SetFloat(207, 0f);
            var MY_62 = MY;
            MY_62.SetAcknexObject(192, null);
            var MY_65 = MY;
            MY_65.SetAcknexObject(193, null);
            var MY_68 = MY;
            MY_68.SetAcknexObject(209, null);
            var VANISHFORGOOD_69 = _world.AcknexObject.GetAcknexObject(1333438470);
            var MY_71 = MY;
            MY_71.SetAcknexObject(190, VANISHFORGOOD_69);
            var DOCT0ATEX_72 = _world.AcknexObject.GetAcknexObject(3094620921);
            var MY_74 = MY;
            MY_74.SetAcknexObject(164, DOCT0ATEX_72);
            var MY_77 = MY;
            MY_77.SetFloat(168, 0f);
            var MY_80 = MY;
            MY_80.SetAcknexObject(199, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DOCTHIT(IAcknexObject MY, IAcknexObject THERE)
        {
            var SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill, 441);
            var SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat(PropertyName.VAL);
            if (SHOOT_FAC_1_val == 0f)
            {
                goto OBSTACLE;
            }
            var MY_2 = MY;
            var HIT_3 = _world.GetSynonymObject(704);
            if (HIT_3 == MY_2)
            {
                goto HIT;
            }
            var EXPLOSION_ON_5 = _world.GetObject(ObjectType.Skill, 3352630890);
            var EXPLOSION_ON_5_val = EXPLOSION_ON_5.GetFloat(PropertyName.VAL);
            if (EXPLOSION_ON_5_val == 0f)
            {
                goto OBSTACLE;
            }
            var DISTX_6 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_7 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_7_val = DISTX_7.GetFloat(PropertyName.VAL);
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat(195);
            var EXPLOSION_CENTER_14 = _world.GetSynonymObject(3704223598);
            var temp_15 = EXPLOSION_CENTER_14.GetFloat(195);
            var MY_20 = MY;
            var temp_21 = MY_20.GetFloat(195);
            var EXPLOSION_CENTER_24 = _world.GetSynonymObject(3704223598);
            var temp_25 = EXPLOSION_CENTER_24.GetFloat(195);
            var MY_30 = MY;
            var temp_31 = MY_30.GetFloat(196);
            var EXPLOSION_CENTER_34 = _world.GetSynonymObject(3704223598);
            var temp_35 = EXPLOSION_CENTER_34.GetFloat(196);
            var MY_40 = MY;
            var temp_41 = MY_40.GetFloat(196);
            var EXPLOSION_CENTER_44 = _world.GetSynonymObject(3704223598);
            var temp_45 = EXPLOSION_CENTER_44.GetFloat(196);
            DISTX_6.SetFloat(231, (temp_11 - temp_15) * (temp_21 - temp_25) + (temp_31 - temp_35) * (temp_41 - temp_45));
            var DISTX_47 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_47_val = DISTX_47.GetFloat(PropertyName.VAL);
            var DISTX_48 = _world.GetObject(ObjectType.Skill, 217512505);
            DISTX_48.SetFloat(231, MathUtils.Sqrt(DISTX_47_val));
            var DISTX_50 = _world.GetObject(ObjectType.Skill, 217512505);
            var DISTX_50_val = DISTX_50.GetFloat(PropertyName.VAL);
            if (DISTX_50_val > 25f)
            {
                goto OBSTACLE;
            }
            HIT:
            var EXPLOSION_ON_52 = _world.GetObject(ObjectType.Skill, 3352630890);
            var EXPLOSION_ON_52_val = EXPLOSION_ON_52.GetFloat(PropertyName.VAL);
            if (EXPLOSION_ON_52_val != 2f)
            {
                goto CONT;
            }
            var MY_55 = MY;
            var temp_56 = MY_55.GetFloat(205);
            if (temp_56 == 1f)
            {
                {
                    var enumerator = DOCTIMPLODE(MY, THERE);
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
            var SHOOT_FAC_57 = _world.GetObject(ObjectType.Skill, 441);
            var SHOOT_FAC_57_val = SHOOT_FAC_57.GetFloat(PropertyName.VAL);
            var MY_59 = MY;
            var temp_60 = MY_59.GetFloat(173);
            var MY_62 = MY;
            MY_62.SetFloat(173, temp_60 + SHOOT_FAC_57_val);
            var MY_65 = MY;
            var temp_66 = MY_65.GetFloat(173);
            if (temp_66 > 2f)
            {
                goto DIE;
            }
            if (UnityEngine.Random.value < 0.3f)
            {
                goto DIE;
            }
            var MY_70 = MY;
            var temp_71 = MY_70?.GetAcknexObject(164);
            _world.SetSynonymObject(3120603372, temp_71);
            var DOCT5TEX_73 = _world.AcknexObject.GetAcknexObject(2696987741);
            var MY_75 = MY;
            MY_75.SetAcknexObject(164, DOCT5TEX_73);
            var MY_78 = MY;
            MY_78.SetAcknexObject(192, null);
            var MY_81 = MY;
            MY_81.SetAcknexObject(193, null);
            var MY_84 = MY;
            MY_84.SetAcknexObject(209, null);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_88 = MY;
            MY_88.SetAcknexObject(192, null);
            var MY_91 = MY;
            MY_91.SetAcknexObject(193, null);
            var DOCTHIT_92 = _world.AcknexObject.GetAcknexObject(862651356);
            var MY_94 = MY;
            MY_94.SetAcknexObject(209, DOCTHIT_92);
            var DOCTE_TEX_95 = _world.GetSynonymObject(3120603372);
            var MY_97 = MY;
            MY_97.SetAcknexObject(164, DOCTE_TEX_95);
            {
                var enumerator = DOCTHIDE(MY, THERE);
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
            MY_100.SetFloat(173, 10f);
            {
                var enumerator = DOCTDIE(MY, THERE);
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
            var temp_104 = MY_103.GetFloat(176);
            if (temp_104 != 1f)
            {
                goto JUMP;
            }
            if (UnityEngine.Random.value > 0.97f)
            {
                var DOCT02SND_107 = _world.AcknexObject.GetAcknexObject(3094081054);
                var MY_109 = MY;
                _world.PlaySound(DOCT02SND_107, 0.3f, MY_109);
            }
            JUMP:
            {
                var enumerator = DOCTTURN(MY, THERE);
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
        public IEnumerator DOCTCYCLE(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(176);
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
            var temp_8 = MY_7.GetFloat(194);
            var MY_10 = MY;
            var temp_11 = MY_10.GetFloat(194);
            MY_5.SetFloat(194, temp_11 + UnityEngine.Random.value - 0.5f);
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
            var temp_19 = MY_18.GetFloat(202);
            if (temp_19 > 4f)
            {
                goto CONT1;
            }
            var MY_22 = MY;
            var temp_23 = MY_22.GetFloat(168);
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
            var temp_28 = MY_27.GetFloat(194);
            var MY_30 = MY;
            var temp_31 = MY_30.GetFloat(194);
            MY_25.SetFloat(194, temp_31 + UnityEngine.Random.value - 0.5f);
            CONT1:
            var GUN_ON_37 = _world.GetObject(ObjectType.Skill, 3014382675);
            var GUN_ON_37_val = GUN_ON_37.GetFloat(PropertyName.VAL);
            if (GUN_ON_37_val != 0f)
            {
                goto HIDE;
            }
            var SHOT_SOUND_ON_39 = _world.GetObject(ObjectType.Skill, 3372273679);
            var SHOT_SOUND_ON_39_val = SHOT_SOUND_ON_39.GetFloat(PropertyName.VAL);
            if (SHOT_SOUND_ON_39_val != 0f)
            {
                goto HIDE;
            }
            var EXPLOSION_ON_41 = _world.GetObject(ObjectType.Skill, 3352630890);
            var EXPLOSION_ON_41_val = EXPLOSION_ON_41.GetFloat(PropertyName.VAL);
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
                var enumerator = DOCTSCREAM(MY, THERE);
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
                var enumerator = DOCTHIDE(MY, THERE);
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
        public IEnumerator DOCTSCREAM(IAcknexObject MY, IAcknexObject THERE)
        {
            var DOCT05SND_0 = _world.AcknexObject.GetAcknexObject(3094188865);
            var MY_2 = MY;
            _world.PlaySound(DOCT05SND_0, 0.3f, MY_2);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DOCTTALK(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            var temp_3 = MY_2.GetFloat(205);
            if (temp_3 != 1f)
            {
                yield break;
            }
            var MY_6 = MY;
            var temp_7 = MY_6.GetFloat(176);
            if (temp_7 == 4f)
            {
                yield break;
            }
            var TALKDOCT_9 = _world.GetObject(ObjectType.Skill, 1133671715);
            var TALKDOCT_9_val = TALKDOCT_9.GetFloat(PropertyName.VAL);
            if (TALKDOCT_9_val != 0f)
            {
                yield break;
            }
            var TALKDOCT_11 = _world.GetObject(ObjectType.Skill, 1133671715);
            TALKDOCT_11.SetFloat(231, 1f);
            var FOLLOW_12 = _world.AcknexObject.GetAcknexObject(2968039200);
            var MY_14 = MY;
            MY_14.SetAcknexObject(199, FOLLOW_12);
            var MY_17 = MY;
            MY_17.SetFloat(168, 0.05f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_21 = MY;
            MY_21.SetFloat(168, 0f);
            if (UnityEngine.Random.value < 0.3f)
            {
                goto LOSTCASE;
            }
            if (UnityEngine.Random.value < 0.5f)
            {
                goto NURSE;
            }
            var DOCT03SND_26 = _world.AcknexObject.GetAcknexObject(3094116991);
            var MY_28 = MY;
            _world.PlaySound(DOCT03SND_26, 0.25f, MY_28);
            goto TIMER;
            NURSE:
            var DOCT02SND_29 = _world.AcknexObject.GetAcknexObject(3094081054);
            var MY_31 = MY;
            _world.PlaySound(DOCT02SND_29, 0.25f, MY_31);
            goto TIMER;
            LOSTCASE:
            var DOCT01SND_32 = _world.AcknexObject.GetAcknexObject(3094045117);
            var MY_34 = MY;
            _world.PlaySound(DOCT01SND_32, 0.25f, MY_34);
            TIMER:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)128f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var TALKDOCT_37 = _world.GetObject(ObjectType.Skill, 1133671715);
            TALKDOCT_37.SetFloat(231, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SETFORCE1(IAcknexObject MY, IAcknexObject THERE)
        {
            var TROPU2ACT_2 = _world.AcknexObject.GetAcknexObject(1509683217);
            TROPU2ACT_2.SetFloatAll(204, 0f);
            var LNCHU2ACT_5 = _world.AcknexObject.GetAcknexObject(1454175857);
            LNCHU2ACT_5.SetFloatAll(204, 0f);
            var ENGINEROOMRGN_8 = _world.AcknexObject.GetAcknexObject(1901199751);
            ENGINEROOMRGN_8.SetAcknexObjectAll(81, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator TROPASSAULT(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetAcknexObject(189, null);
            var MY_5 = MY;
            MY_5.SetAcknexObject(192, null);
            var MY_8 = MY;
            MY_8.SetAcknexObject(193, null);
            var CYCLETROPATTACK_9 = _world.AcknexObject.GetAcknexObject(1708986426);
            var MY_11 = MY;
            MY_11.SetAcknexObject(190, CYCLETROPATTACK_9);
            var TROPATEX_12 = _world.AcknexObject.GetAcknexObject(1737024196);
            var MY_14 = MY;
            MY_14.SetAcknexObject(164, TROPATEX_12);
            var MY_17 = MY;
            MY_17.SetFloat(168, 0.7f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator WAYGUARD2(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = TROPTALK(MY, THERE);
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
            var temp_3 = MY_2.GetFloat(171);
            if (temp_3 != 4f)
            {
                yield break;
            }
            var MY_6 = MY;
            MY_6.SetAcknexObject(191, null);
            var TROPATEX_7 = _world.AcknexObject.GetAcknexObject(1737024196);
            var MY_9 = MY;
            MY_9.SetAcknexObject(164, TROPATEX_7);
            var GUARD2WAY_10 = _world.AcknexObject.GetAcknexObject(37186851);
            var MY_12 = MY;
            MY_12.SetAcknexObject(199, GUARD2WAY_10);
            var MY_15 = MY;
            MY_15.SetFloat(168, 0.5f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator DROPTROOPS2(IAcknexObject MY, IAcknexObject THERE)
        {
            var DROPPED_1 = _world.GetObject(ObjectType.Skill, 994153403);
            var DROPPED_1_val = DROPPED_1.GetFloat(PropertyName.VAL);
            if (DROPPED_1_val == 1f)
            {
                yield break;
            }
            var MY_4 = MY;
            var temp_5 = MY_4.GetFloat(171);
            if (temp_5 != 13f)
            {
                yield break;
            }
            var DROPPED_7 = _world.GetObject(ObjectType.Skill, 994153403);
            DROPPED_7.SetFloat(231, 1f);
            var MY_10 = MY;
            MY_10.SetFloat(168, 0f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)4f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var TROPASSAULT2ACT_14 = _world.AcknexObject.GetAcknexObject(620387993);
            TROPASSAULT2ACT_14.SetFloatAll(204, 0f);
            var ASSAULT2WAY_15 = _world.AcknexObject.GetAcknexObject(517716845);
            var TROPASSAULT2ACT_17 = _world.AcknexObject.GetAcknexObject(620387993);
            TROPASSAULT2ACT_17.SetAcknexObjectAll(199, ASSAULT2WAY_15);
            var TROPASSAULT2ACT_20 = _world.AcknexObject.GetAcknexObject(620387993);
            TROPASSAULT2ACT_20.SetFloatAll(172, 40f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)160f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MY_24 = MY;
            MY_24.SetFloat(168, 2f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator WARNPLAYER(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat(172, 20f);
            var WRN22STR_3 = _world.AcknexObject.GetAcknexObject(668081569);
            _world.SetSynonymObject(361798934, WRN22STR_3);
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
        public IEnumerator RESETWARN(IAcknexObject MY, IAcknexObject THERE)
        {
            var MY_2 = MY;
            MY_2.SetFloat(172, 5f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SELECTOR(IAcknexObject MY, IAcknexObject THERE)
        {
            var TOUCHKEY_1 = _world.GetObject(ObjectType.Skill, 2377224729);
            var TOUCHKEY_1_val = TOUCHKEY_1.GetFloat(PropertyName.VAL);
            if (TOUCHKEY_1_val == 1f)
            {
                {
                    var enumerator = OPENDOOR1(MY, THERE);
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
            var TOUCHKEY_3 = _world.GetObject(ObjectType.Skill, 2377224729);
            var TOUCHKEY_3_val = TOUCHKEY_3.GetFloat(PropertyName.VAL);
            if (TOUCHKEY_3_val == 2f)
            {
                {
                    var enumerator = OPENDOOR2(MY, THERE);
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
            var TOUCHKEY_5 = _world.GetObject(ObjectType.Skill, 2377224729);
            var TOUCHKEY_5_val = TOUCHKEY_5.GetFloat(PropertyName.VAL);
            if (TOUCHKEY_5_val == 4f)
            {
                {
                    var enumerator = OPENHATCH(MY, THERE);
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
            var TOUCHKEY_7 = _world.GetObject(ObjectType.Skill, 2377224729);
            var TOUCHKEY_7_val = TOUCHKEY_7.GetFloat(PropertyName.VAL);
            if (TOUCHKEY_7_val == 5f)
            {
                {
                    var enumerator = OPENMJ3(MY, THERE);
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
            var TOUCHKEY_9 = _world.GetObject(ObjectType.Skill, 2377224729);
            var TOUCHKEY_9_val = TOUCHKEY_9.GetFloat(PropertyName.VAL);
            if (TOUCHKEY_9_val == 6f)
            {
                {
                    var enumerator = NOTOPEN(MY, THERE);
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
            var TOUCHKEY_11 = _world.GetObject(ObjectType.Skill, 2377224729);
            var TOUCHKEY_11_val = TOUCHKEY_11.GetFloat(PropertyName.VAL);
            if (TOUCHKEY_11_val == 7f)
            {
                {
                    var enumerator = OPENHATCHA(MY, THERE);
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
            var TOUCHKEY_13 = _world.GetObject(ObjectType.Skill, 2377224729);
            var TOUCHKEY_13_val = TOUCHKEY_13.GetFloat(PropertyName.VAL);
            if (TOUCHKEY_13_val == 8f)
            {
                {
                    var enumerator = OPENHATCHB(MY, THERE);
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
        public IEnumerator RESETTOUCH(IAcknexObject MY, IAcknexObject THERE)
        {
            var TOUCHKEY_1 = _world.GetObject(ObjectType.Skill, 2377224729);
            TOUCHKEY_1.SetFloat(231, 0f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SETTOUCH1(IAcknexObject MY, IAcknexObject THERE)
        {
            var TOUCHKEY_1 = _world.GetObject(ObjectType.Skill, 2377224729);
            TOUCHKEY_1.SetFloat(231, 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SETTOUCH2(IAcknexObject MY, IAcknexObject THERE)
        {
            var TOUCHKEY_1 = _world.GetObject(ObjectType.Skill, 2377224729);
            TOUCHKEY_1.SetFloat(231, 2f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SETTOUCH4(IAcknexObject MY, IAcknexObject THERE)
        {
            var TOUCHKEY_1 = _world.GetObject(ObjectType.Skill, 2377224729);
            TOUCHKEY_1.SetFloat(231, 4f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SETTOUCH5(IAcknexObject MY, IAcknexObject THERE)
        {
            var TOUCHKEY_1 = _world.GetObject(ObjectType.Skill, 2377224729);
            TOUCHKEY_1.SetFloat(231, 5f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SETTOUCH6(IAcknexObject MY, IAcknexObject THERE)
        {
            var TOUCHKEY_1 = _world.GetObject(ObjectType.Skill, 2377224729);
            TOUCHKEY_1.SetFloat(231, 6f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SETTOUCH7(IAcknexObject MY, IAcknexObject THERE)
        {
            var TOUCHKEY_1 = _world.GetObject(ObjectType.Skill, 2377224729);
            TOUCHKEY_1.SetFloat(231, 7f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SETTOUCH8(IAcknexObject MY, IAcknexObject THERE)
        {
            var TOUCHKEY_1 = _world.GetObject(ObjectType.Skill, 2377224729);
            TOUCHKEY_1.SetFloat(231, 8f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator OPENDOOR1(IAcknexObject MY, IAcknexObject THERE)
        {
            var LOCKSND_0 = _world.AcknexObject.GetAcknexObject(2604149211);
            _world.PlaySound(LOCKSND_0, 0.3f, null);
            var KEYOPENWBR02TEX_2 = _world.AcknexObject.GetAcknexObject(1106095366);
            var LOCK01WALL_4 = _world.AcknexObject.GetAcknexObject(828472871);
            LOCK01WALL_4.SetAcknexObjectAll(164, KEYOPENWBR02TEX_2);
            var LOCK01WALL_7 = _world.AcknexObject.GetAcknexObject(828472871);
            LOCK01WALL_7.SetAcknexObjectAll(192, null);
            var NULLTEX_8 = _world.AcknexObject.GetAcknexObject(1137640249);
            var WGR01WALL_10 = _world.AcknexObject.GetAcknexObject(711956622);
            WGR01WALL_10.SetAcknexObjectAll(164, NULLTEX_8);
            var WGR01WALL_13 = _world.AcknexObject.GetAcknexObject(711956622);
            WGR01WALL_13.SetFloatAll(206, 1f);
            var WGR01WALL_16 = _world.AcknexObject.GetAcknexObject(711956622);
            WGR01WALL_16.SetFloatAll(204, 1f);
            var DROPTROOPS2_17 = _world.AcknexObject.GetAcknexObject(1904936731);
            var HUMM1ACT_19 = _world.AcknexObject.GetAcknexObject(913829005);
            HUMM1ACT_19.SetAcknexObject(191, DROPTROOPS2_17);
            var TROPASSAULT1ACT_22 = _world.AcknexObject.GetAcknexObject(620352056);
            TROPASSAULT1ACT_22.SetFloatAll(204, 0f);
            var WRN15STR_23 = _world.AcknexObject.GetAcknexObject(667003459);
            _world.SetSynonymObject(361798934, WRN15STR_23);
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
            var LOCK01WALL_27 = _world.AcknexObject.GetAcknexObject(828472871);
            LOCK01WALL_27.SetAcknexObject(192, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator OPENDOOR2(IAcknexObject MY, IAcknexObject THERE)
        {
            var LOCKSND_0 = _world.AcknexObject.GetAcknexObject(2604149211);
            _world.PlaySound(LOCKSND_0, 0.3f, null);
            var KEYOPENWPL03TEX_2 = _world.AcknexObject.GetAcknexObject(1772001327);
            var LOCK02WALL_4 = _world.AcknexObject.GetAcknexObject(829658792);
            LOCK02WALL_4.SetAcknexObjectAll(164, KEYOPENWPL03TEX_2);
            var LOCK02WALL_7 = _world.AcknexObject.GetAcknexObject(829658792);
            LOCK02WALL_7.SetAcknexObjectAll(192, null);
            var NULLTEX_8 = _world.AcknexObject.GetAcknexObject(1137640249);
            var WTUNELWALL_10 = _world.AcknexObject.GetAcknexObject(1522043004);
            WTUNELWALL_10.SetAcknexObjectAll(164, NULLTEX_8);
            var WTUNELWALL_13 = _world.AcknexObject.GetAcknexObject(1522043004);
            WTUNELWALL_13.SetFloatAll(206, 1f);
            var WTUNELWALL_16 = _world.AcknexObject.GetAcknexObject(1522043004);
            WTUNELWALL_16.SetFloatAll(204, 1f);
            var UDRKLACT_19 = _world.AcknexObject.GetAcknexObject(616962951);
            UDRKLACT_19.SetFloatAll(204, 0f);
            var TROPU1ACT_22 = _world.AcknexObject.GetAcknexObject(1509647280);
            TROPU1ACT_22.SetFloatAll(204, 0f);
            var TROPACT_25 = _world.AcknexObject.GetAcknexObject(182788042);
            TROPACT_25.SetFloatAll(182, 1f);
            var TROPASSAULT3ACT_28 = _world.AcknexObject.GetAcknexObject(620423930);
            TROPASSAULT3ACT_28.SetFloatAll(204, 0f);
            var WRN23STR_29 = _world.AcknexObject.GetAcknexObject(668117506);
            _world.SetSynonymObject(361798934, WRN23STR_29);
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
            var LOCK02WALL_33 = _world.AcknexObject.GetAcknexObject(829658792);
            LOCK02WALL_33.SetAcknexObject(192, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator OPENHATCH(IAcknexObject MY, IAcknexObject THERE)
        {
            var TROPU3ACT_2 = _world.AcknexObject.GetAcknexObject(1509719154);
            TROPU3ACT_2.SetFloatAll(204, 0f);
            var DOOR03SND_3 = _world.AcknexObject.GetAcknexObject(1333592649);
            var OPENFAL01WALL_5 = _world.AcknexObject.GetAcknexObject(2302191587);
            _world.PlaySound(DOOR03SND_3, 0.3f, OPENFAL01WALL_5);
            var OPENFAL01WALL_8 = _world.AcknexObject.GetAcknexObject(2302191587);
            OPENFAL01WALL_8.SetAcknexObjectAll(192, null);
            OPENLOOP:
            var OPENFAL01WALL_11 = _world.AcknexObject.GetAcknexObject(2302191587);
            var temp_12 = OPENFAL01WALL_11.GetFloat(270);
            if (temp_12 < 68f)
            {
                yield break;
            }
            var OPENFAL01WALL_15 = _world.AcknexObject.GetAcknexObject(2302191587);
            var temp_16 = OPENFAL01WALL_15.GetFloat(270);
            var OPENFAL01WALL_18 = _world.AcknexObject.GetAcknexObject(2302191587);
            OPENFAL01WALL_18.SetFloat(270, temp_16 + -0.1f);
            var OPENFAL01WALL_21 = _world.AcknexObject.GetAcknexObject(2302191587);
            var temp_22 = OPENFAL01WALL_21.GetFloat(272);
            var OPENFAL01WALL_24 = _world.AcknexObject.GetAcknexObject(2302191587);
            OPENFAL01WALL_24.SetFloat(272, temp_22 + -0.1f);
            var RENDER_MODE_26 = _world.GetObject(ObjectType.Skill, 361);
            RENDER_MODE_26.SetFloat(231, 1f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            goto OPENLOOP;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator OPENHATCHA(IAcknexObject MY, IAcknexObject THERE)
        {
            var DOOR03SND_0 = _world.AcknexObject.GetAcknexObject(1333592649);
            var OPENFAL01AWALL_2 = _world.AcknexObject.GetAcknexObject(2932534788);
            _world.PlaySound(DOOR03SND_0, 0.3f, OPENFAL01AWALL_2);
            var OPENFAL01AWALL_5 = _world.AcknexObject.GetAcknexObject(2932534788);
            OPENFAL01AWALL_5.SetAcknexObjectAll(192, null);
            OPENLOOP:
            var OPENFAL01AWALL_8 = _world.AcknexObject.GetAcknexObject(2932534788);
            var temp_9 = OPENFAL01AWALL_8.GetFloat(269);
            if (temp_9 < 319f)
            {
                yield break;
            }
            var OPENFAL01AWALL_12 = _world.AcknexObject.GetAcknexObject(2932534788);
            var temp_13 = OPENFAL01AWALL_12.GetFloat(269);
            var OPENFAL01AWALL_15 = _world.AcknexObject.GetAcknexObject(2932534788);
            OPENFAL01AWALL_15.SetFloat(269, temp_13 + -0.1f);
            var OPENFAL01AWALL_18 = _world.AcknexObject.GetAcknexObject(2932534788);
            var temp_19 = OPENFAL01AWALL_18.GetFloat(271);
            var OPENFAL01AWALL_21 = _world.AcknexObject.GetAcknexObject(2932534788);
            OPENFAL01AWALL_21.SetFloat(271, temp_19 + -0.1f);
            var RENDER_MODE_23 = _world.GetObject(ObjectType.Skill, 361);
            RENDER_MODE_23.SetFloat(231, 1f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            goto OPENLOOP;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator OPENHATCHB(IAcknexObject MY, IAcknexObject THERE)
        {
            var DOOR03SND_0 = _world.AcknexObject.GetAcknexObject(1333592649);
            var OPENFAL01BWALL_2 = _world.AcknexObject.GetAcknexObject(2933720709);
            _world.PlaySound(DOOR03SND_0, 0.3f, OPENFAL01BWALL_2);
            var OPENFAL01BWALL_5 = _world.AcknexObject.GetAcknexObject(2933720709);
            OPENFAL01BWALL_5.SetAcknexObjectAll(192, null);
            OPENLOOP:
            var OPENFAL01BWALL_8 = _world.AcknexObject.GetAcknexObject(2933720709);
            var temp_9 = OPENFAL01BWALL_8.GetFloat(270);
            if (temp_9 < 81f)
            {
                yield break;
            }
            var OPENFAL01BWALL_12 = _world.AcknexObject.GetAcknexObject(2933720709);
            var temp_13 = OPENFAL01BWALL_12.GetFloat(270);
            var OPENFAL01BWALL_15 = _world.AcknexObject.GetAcknexObject(2933720709);
            OPENFAL01BWALL_15.SetFloat(270, temp_13 + -0.1f);
            var OPENFAL01BWALL_18 = _world.AcknexObject.GetAcknexObject(2933720709);
            var temp_19 = OPENFAL01BWALL_18.GetFloat(272);
            var OPENFAL01BWALL_21 = _world.AcknexObject.GetAcknexObject(2933720709);
            OPENFAL01BWALL_21.SetFloat(272, temp_19 + -0.1f);
            var RENDER_MODE_23 = _world.GetObject(ObjectType.Skill, 361);
            RENDER_MODE_23.SetFloat(231, 1f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            goto OPENLOOP;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator OPENMJ3(IAcknexObject MY, IAcknexObject THERE)
        {
            var DOOR02SND_0 = _world.AcknexObject.GetAcknexObject(1333556712);
            var WFB03AWALL_2 = _world.AcknexObject.GetAcknexObject(1123059264);
            _world.PlaySound(DOOR02SND_0, 0.3f, WFB03AWALL_2);
            var DOORHANGARRGN_5 = _world.AcknexObject.GetAcknexObject(4004269785);
            DOORHANGARRGN_5.SetFloat(201, 12f);
            var KEYOPENFCT01TEX_6 = _world.AcknexObject.GetAcknexObject(3811740599);
            var MJ3GATEWALL_8 = _world.AcknexObject.GetAcknexObject(1123221928);
            MJ3GATEWALL_8.SetAcknexObjectAll(164, KEYOPENFCT01TEX_6);
            var MJ3GATEWALL_11 = _world.AcknexObject.GetAcknexObject(1123221928);
            MJ3GATEWALL_11.SetAcknexObject(192, null);
            var TROPU4ACT_14 = _world.AcknexObject.GetAcknexObject(1509755091);
            TROPU4ACT_14.SetFloatAll(204, 0f);
            var LNCHU4ACT_17 = _world.AcknexObject.GetAcknexObject(1454247731);
            LNCHU4ACT_17.SetFloatAll(204, 0f);
            var REPTUACT_20 = _world.AcknexObject.GetAcknexObject(2834846805);
            REPTUACT_20.SetFloatAll(204, 0f);
            var NURSUACT_23 = _world.AcknexObject.GetAcknexObject(3425502626);
            NURSUACT_23.SetFloatAll(204, 0f);
            var DOCTUACT_26 = _world.AcknexObject.GetAcknexObject(2698116964);
            DOCTUACT_26.SetFloatAll(204, 0f);
            var WRN15STR_27 = _world.AcknexObject.GetAcknexObject(667003459);
            _world.SetSynonymObject(361798934, WRN15STR_27);
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
        public IEnumerator OPENBLASTDOOR(IAcknexObject MY, IAcknexObject THERE)
        {
            var DOOR02SND_0 = _world.AcknexObject.GetAcknexObject(1333556712);
            var OPENBLASTDOORWALL_2 = _world.AcknexObject.GetAcknexObject(1298919865);
            _world.PlaySound(DOOR02SND_0, 0.3f, OPENBLASTDOORWALL_2);
            var OPENBLASTDOORWALL_5 = _world.AcknexObject.GetAcknexObject(1298919865);
            OPENBLASTDOORWALL_5.SetAcknexObject(192, null);
            var TROPU5ACT_8 = _world.AcknexObject.GetAcknexObject(1509791028);
            TROPU5ACT_8.SetFloatAll(204, 0f);
            OPEN:
            var BLASTDOORRGN_11 = _world.AcknexObject.GetAcknexObject(269196126);
            var temp_12 = BLASTDOORRGN_11.GetFloat(201);
            var BLASTDOORRGN_14 = _world.AcknexObject.GetAcknexObject(269196126);
            BLASTDOORRGN_14.SetFloat(201, temp_12 + 0.1f);
            var RENDER_MODE_16 = _world.GetObject(ObjectType.Skill, 361);
            RENDER_MODE_16.SetFloat(231, 1f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var BLASTDOORRGN_20 = _world.AcknexObject.GetAcknexObject(269196126);
            var temp_21 = BLASTDOORRGN_20.GetFloat(201);
            if (temp_21 < 11f)
            {
                goto OPEN;
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator NOTOPEN(IAcknexObject MY, IAcknexObject THERE)
        {
            var WRN18STR_0 = _world.AcknexObject.GetAcknexObject(667111270);
            _world.SetSynonymObject(361798934, WRN18STR_0);
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
        public IEnumerator DEFENSE1(IAcknexObject MY, IAcknexObject THERE)
        {
            var UDRKL2ACT_2 = _world.AcknexObject.GetAcknexObject(3179334489);
            UDRKL2ACT_2.SetFloatAll(204, 0f);
            var POOL2RGN_5 = _world.AcknexObject.GetAcknexObject(3477222656);
            POOL2RGN_5.SetAcknexObjectAll(81, null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator STARTLEVEL(IAcknexObject MY, IAcknexObject THERE)
        {
            var SCREEN_HGT_1 = _world.GetObject(ObjectType.Skill, 352);
            SCREEN_HGT_1.SetFloat(231, 358f);
            var SKY_OFFS_Y_3 = _world.GetObject(ObjectType.Skill, 358);
            SKY_OFFS_Y_3.SetFloat(231, 140f);
            var MAP_SCALE_5 = _world.GetObject(ObjectType.Skill, 379);
            MAP_SCALE_5.SetFloat(231, 5f);
            var MAP_ROT_7 = _world.GetObject(ObjectType.Skill, 382);
            MAP_ROT_7.SetFloat(231, 1f);
            var COLOR_PLAYER_9 = _world.GetObject(ObjectType.Skill, 383);
            COLOR_PLAYER_9.SetFloat(231, 101f);
            var COLOR_ACTORS_11 = _world.GetObject(ObjectType.Skill, 384);
            COLOR_ACTORS_11.SetFloat(231, 164f);
            var COLOR_THINGS_13 = _world.GetObject(ObjectType.Skill, 385);
            COLOR_THINGS_13.SetFloat(231, 176f);
            var COLOR_WALLS_15 = _world.GetObject(ObjectType.Skill, 386);
            COLOR_WALLS_15.SetFloat(231, 193f);
            var COLOR_BORDER_17 = _world.GetObject(ObjectType.Skill, 387);
            COLOR_BORDER_17.SetFloat(231, 195f);
            var PLAYER_LIGHT_19 = _world.GetObject(ObjectType.Skill, 418);
            PLAYER_LIGHT_19.SetFloat(231, 0.15f);
            var ACTOR_CLIMB_21 = _world.GetObject(ObjectType.Skill, 451);
            ACTOR_CLIMB_21.SetFloat(231, 1.5f);
            var MOTION_BLUR_23 = _world.GetObject(ObjectType.Skill, 359);
            MOTION_BLUR_23.SetFloat(231, 0f);
            var SECCOUNTER_25 = _world.GetObject(ObjectType.Skill, 2748572712);
            SECCOUNTER_25.SetFloat(231, 0f);
            var CONTROLMESSAGEDISPLAY_26 = _world.AcknexObject.GetAcknexObject(1473177801);
            _world.AcknexObject.SetAcknexObject(21, CONTROLMESSAGEDISPLAY_26);
            var CONTROLUNDERWATERTIME_29 = _world.AcknexObject.GetAcknexObject(1954955294);
            _world.AcknexObject.SetAcknexObject(22, CONTROLUNDERWATERTIME_29);
            var INFOPANEL_32 = _world.AcknexObject.GetAcknexObject(4029181129);
            _world.AcknexObject.SetAcknexObject(144, INFOPANEL_32);
            var PNLMSKOVL_35 = _world.AcknexObject.GetAcknexObject(3908987603);
            _world.AcknexObject.SetAcknexObject(160, PNLMSKOVL_35);
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
            var DROPPED_39 = _world.GetObject(ObjectType.Skill, 994153403);
            DROPPED_39.SetFloat(231, 0f);
            var AMMO_41 = _world.GetObject(ObjectType.Skill, 2088896983);
            AMMO_41.SetFloat(231, 0f);
            var KEY1_43 = _world.GetObject(ObjectType.Skill, 2089248007);
            KEY1_43.SetFloat(231, 2f);
            var KEY2_45 = _world.GetObject(ObjectType.Skill, 2089248008);
            KEY2_45.SetFloat(231, 2f);
            var KEY3_47 = _world.GetObject(ObjectType.Skill, 2089248009);
            KEY3_47.SetFloat(231, 2f);
            var KEY4_49 = _world.GetObject(ObjectType.Skill, 2089248010);
            KEY4_49.SetFloat(231, 2f);
            var END01STR_50 = _world.AcknexObject.GetAcknexObject(1070587678);
            _world.SetSynonymObject(3892409159, END01STR_50);
            var BRF01STR_52 = _world.AcknexObject.GetAcknexObject(3013452993);
            _world.SetSynonymObject(155729303, BRF01STR_52);
            var LOAD02STR_54 = _world.AcknexObject.GetAcknexObject(2634576744);
            _world.SetSynonymObject(1876859747, LOAD02STR_54);
            var LEVEL02STR_56 = _world.AcknexObject.GetAcknexObject(2696204544);
            _world.SetSynonymObject(270057211, LEVEL02STR_56);
            var INNOCENTS_59 = _world.GetObject(ObjectType.Skill, 1460750270);
            INNOCENTS_59.SetFloat(231, 20f);
            var UNDERWATER_61 = _world.GetObject(ObjectType.Skill, 1369167822);
            UNDERWATER_61.SetFloat(231, 0f);
            var PLAYER_ARC_63 = _world.GetObject(ObjectType.Skill, 436);
            PLAYER_ARC_63.SetFloat(231, 1f);
            var CDTRACK_65 = _world.GetObject(ObjectType.Skill, 3455742313);
            CDTRACK_65.SetFloat(231, 2f);
            var CDTRACKTIME_67 = _world.GetObject(ObjectType.Skill, 4172716664);
            CDTRACKTIME_67.SetFloat(231, 308f);
            var PLAYER_HIT_69 = _world.GetObject(ObjectType.Skill, 1956124350);
            PLAYER_HIT_69.SetFloat(231, 0f);
            var GUN_ON_71 = _world.GetObject(ObjectType.Skill, 3014382675);
            GUN_ON_71.SetFloat(231, 0f);
            var SHOT_SOUND_ON_73 = _world.GetObject(ObjectType.Skill, 3372273679);
            SHOT_SOUND_ON_73.SetFloat(231, 0f);
            var EXPLOSION_ON_75 = _world.GetObject(ObjectType.Skill, 3352630890);
            EXPLOSION_ON_75.SetFloat(231, 0f);
            var MISS14ACT_76 = _world.AcknexObject.GetAcknexObject(346189990);
            _world.SetSynonymObject(3680056099, MISS14ACT_76);
            var ASSAULTSTARTED_79 = _world.GetObject(ObjectType.Skill, 3202169889);
            ASSAULTSTARTED_79.SetFloat(231, 0f);
            var STARTASSAULT_80 = _world.AcknexObject.GetAcknexObject(692261144);
            _world.SetSynonymObject(1697496190, STARTASSAULT_80);
            var GOLCOUNTER_83 = _world.GetObject(ObjectType.Skill, 1317141647);
            GOLCOUNTER_83.SetFloat(231, 0f);
            {
                var enumerator = STARTASSAULT(MY, THERE);
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
        public IEnumerator LAUNCHMISSILES(IAcknexObject MY, IAcknexObject THERE)
        {
            var MISSILE_2 = _world.GetSynonymObject(3680056099);
            MISSILE_2.SetFloat(213, 1f);
            var MISSILE_5 = _world.GetSynonymObject(3680056099);
            MISSILE_5.SetFloat(168, 4f);
            var MISSILE_7 = _world.GetSynonymObject(3680056099);
            var MISSILE_9 = _world.GetSynonymObject(3680056099);
            var temp_10 = MISSILE_9.GetFloat(195);
            MISSILE_7.SetFloat(195, -170f);
            var MISSILE_14 = _world.GetSynonymObject(3680056099);
            var MISSILE_16 = _world.GetSynonymObject(3680056099);
            var temp_17 = MISSILE_16.GetFloat(196);
            MISSILE_14.SetFloat(196, 180f);
            var MISSILE_20 = _world.GetSynonymObject(3680056099);
            var MISSILE_22 = _world.GetSynonymObject(3680056099);
            var temp_23 = MISSILE_22.GetFloat(165);
            MISSILE_20.SetFloat(165, 5f);
            var MISSILE_27 = _world.GetSynonymObject(3680056099);
            MISSILE_27.SetFloat(217, -30f);
            var MISSILE_30 = _world.GetSynonymObject(3680056099);
            MISSILE_30.SetFloat(218, 57f);
            var MISS1TEX_31 = _world.AcknexObject.GetAcknexObject(1181881291);
            var MISSILE_33 = _world.GetSynonymObject(3680056099);
            MISSILE_33.SetAcknexObject(164, MISS1TEX_31);
            var EXPLODEMISSILE_34 = _world.AcknexObject.GetAcknexObject(3869018100);
            var MISSILE_36 = _world.GetSynonymObject(3680056099);
            MISSILE_36.SetAcknexObject(191, EXPLODEMISSILE_34);
            var EXPLODEMISSILE_37 = _world.AcknexObject.GetAcknexObject(3869018100);
            var MISSILE_39 = _world.GetSynonymObject(3680056099);
            MISSILE_39.SetAcknexObject(209, EXPLODEMISSILE_37);
            var PLAYER_ANGLE_40 = _world.GetObject(ObjectType.Skill, 462);
            var PLAYER_ANGLE_40_val = PLAYER_ANGLE_40.GetFloat(PropertyName.VAL);
            var MISSILE_42 = _world.GetSynonymObject(3680056099);
            MISSILE_42.SetFloat(194, PLAYER_ANGLE_40_val);
            var VERTEX_43 = _world.AcknexObject.GetAcknexObject(3582570283);
            var MISSILE_45 = _world.GetSynonymObject(3680056099);
            MISSILE_45.SetAcknexObject(199, VERTEX_43);
            var MISSILE_48 = _world.GetSynonymObject(3680056099);
            MISSILE_48.SetFloat(204, 0f);
            WAITING:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)16f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MISSILE_52 = _world.GetSynonymObject(3680056099);
            var temp_53 = MISSILE_52.GetFloat(204);
            if (temp_53 < 1f)
            {
                goto WAITING;
            }
            var MISSILE_56 = _world.GetSynonymObject(3680056099);
            MISSILE_56.SetFloat(213, 1f);
            var MISSILE_59 = _world.GetSynonymObject(3680056099);
            MISSILE_59.SetFloat(168, 4f);
            var MISSILE_61 = _world.GetSynonymObject(3680056099);
            var MISSILE_63 = _world.GetSynonymObject(3680056099);
            var temp_64 = MISSILE_63.GetFloat(195);
            MISSILE_61.SetFloat(195, -150f);
            var MISSILE_68 = _world.GetSynonymObject(3680056099);
            var MISSILE_70 = _world.GetSynonymObject(3680056099);
            var temp_71 = MISSILE_70.GetFloat(196);
            MISSILE_68.SetFloat(196, 50f);
            var MISSILE_74 = _world.GetSynonymObject(3680056099);
            var MISSILE_76 = _world.GetSynonymObject(3680056099);
            var temp_77 = MISSILE_76.GetFloat(165);
            MISSILE_74.SetFloat(165, 5f);
            var MISSILE_81 = _world.GetSynonymObject(3680056099);
            MISSILE_81.SetFloat(217, -100f);
            var MISSILE_84 = _world.GetSynonymObject(3680056099);
            MISSILE_84.SetFloat(218, 0f);
            var MISS1TEX_85 = _world.AcknexObject.GetAcknexObject(1181881291);
            var MISSILE_87 = _world.GetSynonymObject(3680056099);
            MISSILE_87.SetAcknexObject(164, MISS1TEX_85);
            var EXPLODEMISSILE_88 = _world.AcknexObject.GetAcknexObject(3869018100);
            var MISSILE_90 = _world.GetSynonymObject(3680056099);
            MISSILE_90.SetAcknexObject(191, EXPLODEMISSILE_88);
            var EXPLODEMISSILE_91 = _world.AcknexObject.GetAcknexObject(3869018100);
            var MISSILE_93 = _world.GetSynonymObject(3680056099);
            MISSILE_93.SetAcknexObject(209, EXPLODEMISSILE_91);
            var PLAYER_ANGLE_94 = _world.GetObject(ObjectType.Skill, 462);
            var PLAYER_ANGLE_94_val = PLAYER_ANGLE_94.GetFloat(PropertyName.VAL);
            var MISSILE_96 = _world.GetSynonymObject(3680056099);
            MISSILE_96.SetFloat(194, PLAYER_ANGLE_94_val);
            var VERTEX_97 = _world.AcknexObject.GetAcknexObject(3582570283);
            var MISSILE_99 = _world.GetSynonymObject(3680056099);
            MISSILE_99.SetAcknexObject(199, VERTEX_97);
            var MISSILE_102 = _world.GetSynonymObject(3680056099);
            MISSILE_102.SetFloat(204, 0f);
            WAITING1:
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)16f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MISSILE_106 = _world.GetSynonymObject(3680056099);
            var temp_107 = MISSILE_106.GetFloat(204);
            if (temp_107 < 1f)
            {
                goto WAITING1;
            }
            var MISSILE_110 = _world.GetSynonymObject(3680056099);
            MISSILE_110.SetFloat(213, 1f);
            var MISSILE_113 = _world.GetSynonymObject(3680056099);
            MISSILE_113.SetFloat(168, 4f);
            var MISSILE_115 = _world.GetSynonymObject(3680056099);
            var MISSILE_117 = _world.GetSynonymObject(3680056099);
            var temp_118 = MISSILE_117.GetFloat(195);
            MISSILE_115.SetFloat(195, -50f);
            var MISSILE_122 = _world.GetSynonymObject(3680056099);
            var MISSILE_124 = _world.GetSynonymObject(3680056099);
            var temp_125 = MISSILE_124.GetFloat(196);
            MISSILE_122.SetFloat(196, 0f);
            var MISSILE_128 = _world.GetSynonymObject(3680056099);
            var MISSILE_130 = _world.GetSynonymObject(3680056099);
            var temp_131 = MISSILE_130.GetFloat(165);
            MISSILE_128.SetFloat(165, 5f);
            var MISSILE_135 = _world.GetSynonymObject(3680056099);
            MISSILE_135.SetFloat(217, -10f);
            var MISSILE_138 = _world.GetSynonymObject(3680056099);
            MISSILE_138.SetFloat(218, 0f);
            var MISS1TEX_139 = _world.AcknexObject.GetAcknexObject(1181881291);
            var MISSILE_141 = _world.GetSynonymObject(3680056099);
            MISSILE_141.SetAcknexObject(164, MISS1TEX_139);
            var EXPLODEMISSILE_142 = _world.AcknexObject.GetAcknexObject(3869018100);
            var MISSILE_144 = _world.GetSynonymObject(3680056099);
            MISSILE_144.SetAcknexObject(191, EXPLODEMISSILE_142);
            var EXPLODEMISSILE_145 = _world.AcknexObject.GetAcknexObject(3869018100);
            var MISSILE_147 = _world.GetSynonymObject(3680056099);
            MISSILE_147.SetAcknexObject(209, EXPLODEMISSILE_145);
            var PLAYER_ANGLE_148 = _world.GetObject(ObjectType.Skill, 462);
            var PLAYER_ANGLE_148_val = PLAYER_ANGLE_148.GetFloat(PropertyName.VAL);
            var MISSILE_150 = _world.GetSynonymObject(3680056099);
            MISSILE_150.SetFloat(194, PLAYER_ANGLE_148_val);
            var VERTEX_151 = _world.AcknexObject.GetAcknexObject(3582570283);
            var MISSILE_153 = _world.GetSynonymObject(3680056099);
            MISSILE_153.SetAcknexObject(199, VERTEX_151);
            var MISSILE_156 = _world.GetSynonymObject(3680056099);
            MISSILE_156.SetFloat(204, 0f);
            var WRN17STR_157 = _world.AcknexObject.GetAcknexObject(667075333);
            _world.SetSynonymObject(361798934, WRN17STR_157);
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
            var SHOT_SOUND_ON_160 = _world.GetObject(ObjectType.Skill, 3372273679);
            SHOT_SOUND_ON_160.SetFloat(231, 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator STARTASSAULT(IAcknexObject MY, IAcknexObject THERE)
        {
            var ASSAULTSTARTED_1 = _world.GetObject(ObjectType.Skill, 3202169889);
            var ASSAULTSTARTED_1_val = ASSAULTSTARTED_1.GetFloat(PropertyName.VAL);
            if (ASSAULTSTARTED_1_val > 0f)
            {
                yield break;
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator FADEIN(IAcknexObject MY, IAcknexObject THERE)
        {
            var BLACK_0 = _world.AcknexObject.GetAcknexObject(215228298);
            _world.FadePal(BLACK_0, 2f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)8f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_3 = _world.AcknexObject.GetAcknexObject(2089422907);
            _world.FadePal(PAL1_3, 0.05f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_6 = _world.AcknexObject.GetAcknexObject(2089422907);
            _world.FadePal(PAL1_6, 0.1f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_9 = _world.AcknexObject.GetAcknexObject(2089422907);
            _world.FadePal(PAL1_9, 0.15f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_12 = _world.AcknexObject.GetAcknexObject(2089422907);
            _world.FadePal(PAL1_12, 0.2f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_15 = _world.AcknexObject.GetAcknexObject(2089422907);
            _world.FadePal(PAL1_15, 0.25f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_18 = _world.AcknexObject.GetAcknexObject(2089422907);
            _world.FadePal(PAL1_18, 0.3f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_21 = _world.AcknexObject.GetAcknexObject(2089422907);
            _world.FadePal(PAL1_21, 0.35f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_24 = _world.AcknexObject.GetAcknexObject(2089422907);
            _world.FadePal(PAL1_24, 0.4f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_27 = _world.AcknexObject.GetAcknexObject(2089422907);
            _world.FadePal(PAL1_27, 0.45f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_30 = _world.AcknexObject.GetAcknexObject(2089422907);
            _world.FadePal(PAL1_30, 0.5f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_33 = _world.AcknexObject.GetAcknexObject(2089422907);
            _world.FadePal(PAL1_33, 0.55f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_36 = _world.AcknexObject.GetAcknexObject(2089422907);
            _world.FadePal(PAL1_36, 0.6f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_39 = _world.AcknexObject.GetAcknexObject(2089422907);
            _world.FadePal(PAL1_39, 0.65f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_42 = _world.AcknexObject.GetAcknexObject(2089422907);
            _world.FadePal(PAL1_42, 0.7f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_45 = _world.AcknexObject.GetAcknexObject(2089422907);
            _world.FadePal(PAL1_45, 0.75f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_48 = _world.AcknexObject.GetAcknexObject(2089422907);
            _world.FadePal(PAL1_48, 0.8f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_51 = _world.AcknexObject.GetAcknexObject(2089422907);
            _world.FadePal(PAL1_51, 0.85f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_54 = _world.AcknexObject.GetAcknexObject(2089422907);
            _world.FadePal(PAL1_54, 0.9f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_57 = _world.AcknexObject.GetAcknexObject(2089422907);
            _world.FadePal(PAL1_57, 0.95f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var PAL1_60 = _world.AcknexObject.GetAcknexObject(2089422907);
            _world.FadePal(PAL1_60, 2f);
            var REPEATMUSIC_62 = _world.AcknexObject.GetAcknexObject(598921487);
            _world.AcknexObject.SetAcknexObject(20, REPEATMUSIC_62);
            //Unknown keyword: 
            yield break;
        }
    }
}
