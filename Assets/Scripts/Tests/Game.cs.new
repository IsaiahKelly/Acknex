
        using System;
        using Acknex.Interfaces;
        using System.Collections;
        using System.Collections.Generic;
        using UnityEngine;
        using Random = UnityEngine.Random;
        using PropertyName = Acknex.Interfaces.PropertyName;
        namespace Tests {
            public class Game : IAcknexRuntime {
                public static WaitForEndOfFrame WaitForEndOfFrame = new WaitForEndOfFrame();
                private IAcknexWorld _world;
                public void SetWorld(IAcknexWorld world) {
                    _world = world;
                }
        
                private Dictionary<string, ICompiledAction> _callbacks = new Dictionary<string, ICompiledAction>();
                public IEnumerator CallAction(string name, IAcknexObject MY, IAcknexObject THERE)
                {
                    reset:
                    if (name != null) {
                        if (_callbacks.TryGetValue(name, out var callback)) {
                            var enumerator = callback;
                            enumerator.Reset();
                            enumerator.MY = MY;
                            enumerator.THERE = THERE;
                            enumerator._world = _world;
                            var next = true;
                            while (next) {
                                try {
                                    next = enumerator.MoveNext();
                                }
                                catch (Exception e) {
                                    Debug.LogError("ACK Runtime Error:" + e + "(" + Environment.StackTrace + ")");
                                    goto reset;
                                }
                                if (next) {
                                    yield return enumerator.Current;
                                }
                            }
                        }
                    }
                    yield break;
        }public Game() {_callbacks.Add("DISPLAYMESSAGE", new DISPLAYMESSAGE());
_callbacks.Add("CONTROLMESSAGEDISPLAY", new CONTROLMESSAGEDISPLAY());
_callbacks.Add("CONTROLUNDERWATERTIME", new CONTROLUNDERWATERTIME());
_callbacks.Add("VANISHSTOP", new VANISHSTOP());
_callbacks.Add("VANISHFORGOOD", new VANISHFORGOOD());
_callbacks.Add("LOCATEACTOR", new LOCATEACTOR());
_callbacks.Add("LOOKPLAYER", new LOOKPLAYER());
_callbacks.Add("PROBE", new PROBE());
_callbacks.Add("FOLLOWANGLE", new FOLLOWANGLE());
_callbacks.Add("REPELANGLE", new REPELANGLE());
_callbacks.Add("ACTORJUMP", new ACTORJUMP());
_callbacks.Add("ACTORJUMPSTOP", new ACTORJUMPSTOP());
_callbacks.Add("TURNLEFT", new TURNLEFT());
_callbacks.Add("TURNRIGHT", new TURNRIGHT());
_callbacks.Add("SHOWAMMO", new SHOWAMMO());
_callbacks.Add("DECAMMO", new DECAMMO());
_callbacks.Add("INNOCENTKILLED", new INNOCENTKILLED());
_callbacks.Add("DRILLHOLE", new DRILLHOLE());
_callbacks.Add("SHOWMAINMENU", new SHOWMAINMENU());
_callbacks.Add("SHOWSAVEMENU", new SHOWSAVEMENU());
_callbacks.Add("SHOWLOADMENU", new SHOWLOADMENU());
_callbacks.Add("SHOWSOUNDVOLUMEMENU", new SHOWSOUNDVOLUMEMENU());
_callbacks.Add("HIDEMENU", new HIDEMENU());
_callbacks.Add("MENUUP", new MENUUP());
_callbacks.Add("MENUDOWN", new MENUDOWN());
_callbacks.Add("SUBMENUUP", new SUBMENUUP());
_callbacks.Add("SUBMENUDOWN", new SUBMENUDOWN());
_callbacks.Add("VOLUMEUP", new VOLUMEUP());
_callbacks.Add("VOLUMEDOWN", new VOLUMEDOWN());
_callbacks.Add("HIDEWEAPON", new HIDEWEAPON());
_callbacks.Add("SHOWWEAPON", new SHOWWEAPON());
_callbacks.Add("TYPEGAME", new TYPEGAME());
_callbacks.Add("CHOOSEGAME", new CHOOSEGAME());
_callbacks.Add("CHOOSESUBMENU", new CHOOSESUBMENU());
_callbacks.Add("SAVEERRORMESSAGE", new SAVEERRORMESSAGE());
_callbacks.Add("EXITGAME", new EXITGAME());
_callbacks.Add("RESETANSWER", new RESETANSWER());
_callbacks.Add("ASKFOREXIT", new ASKFOREXIT());
_callbacks.Add("ENDOFLEVEL", new ENDOFLEVEL());
_callbacks.Add("EXPLOSIONSTART", new EXPLOSIONSTART());
_callbacks.Add("EXPLOSIONSMOKE", new EXPLOSIONSMOKE());
_callbacks.Add("EXPLOSIONEND", new EXPLOSIONEND());
_callbacks.Add("EXPLODETARGET", new EXPLODETARGET());
_callbacks.Add("EXPLODEMISSILE", new EXPLODEMISSILE());
_callbacks.Add("AIMMISSILE", new AIMMISSILE());
_callbacks.Add("IMPLOSIONSTART", new IMPLOSIONSTART());
_callbacks.Add("IMPLOSIONCRUSH", new IMPLOSIONCRUSH());
_callbacks.Add("IMPLOSIONFLARE", new IMPLOSIONFLARE());
_callbacks.Add("IMPLOSIONEND", new IMPLOSIONEND());
_callbacks.Add("IMPLODEPARTICLE", new IMPLODEPARTICLE());
_callbacks.Add("BEAMREACT", new BEAMREACT());
_callbacks.Add("LOCATEPARTICLE", new LOCATEPARTICLE());
_callbacks.Add("LOCATEPLAYERPARTICLE", new LOCATEPLAYERPARTICLE());
_callbacks.Add("TIMEOUTPARTICLE", new TIMEOUTPARTICLE());
_callbacks.Add("CHOOSEGRANADE", new CHOOSEGRANADE());
_callbacks.Add("CHOOSEMISSILE", new CHOOSEMISSILE());
_callbacks.Add("CHOOSEPARTICLE", new CHOOSEPARTICLE());
_callbacks.Add("CASTBLOOD", new CASTBLOOD());
_callbacks.Add("PICKUPMEDKIT", new PICKUPMEDKIT());
_callbacks.Add("PICKUPARMOUR", new PICKUPARMOUR());
_callbacks.Add("PICKUPMP5", new PICKUPMP5());
_callbacks.Add("PICKUPSTINGER", new PICKUPSTINGER());
_callbacks.Add("PICKUPQUANTUM", new PICKUPQUANTUM());
_callbacks.Add("PICKAMMO", new PICKAMMO());
_callbacks.Add("PICKGRANADE", new PICKGRANADE());
_callbacks.Add("PICKSTINGERAMMO", new PICKSTINGERAMMO());
_callbacks.Add("PICKQUANTUMAMMO", new PICKQUANTUMAMMO());
_callbacks.Add("FLASHREGION", new FLASHREGION());
_callbacks.Add("IMPLODELIGHT", new IMPLODELIGHT());
_callbacks.Add("BOUNCE", new BOUNCE());
_callbacks.Add("FREEFALL", new FREEFALL());
_callbacks.Add("EXPLOSIONTIMER", new EXPLOSIONTIMER());
_callbacks.Add("INIT_MOVE", new INIT_MOVE());
_callbacks.Add("MOVE_ME", new MOVE_ME());
_callbacks.Add("SET_WALKING", new SET_WALKING());
_callbacks.Add("SET_SWIMMING", new SET_SWIMMING());
_callbacks.Add("SET_DIVING", new SET_DIVING());
_callbacks.Add("SET_DEATH", new SET_DEATH());
_callbacks.Add("SET_MOVING", new SET_MOVING());
_callbacks.Add("STOP_MOVING", new STOP_MOVING());
_callbacks.Add("SET_BLUE", new SET_BLUE());
_callbacks.Add("RESET_BLUE", new RESET_BLUE());
_callbacks.Add("ENTER_WATER", new ENTER_WATER());
_callbacks.Add("LEAVE_WATER", new LEAVE_WATER());
_callbacks.Add("DIVE_UP", new DIVE_UP());
_callbacks.Add("REGIO_DIVE", new REGIO_DIVE());
_callbacks.Add("REGIO_ARISE", new REGIO_ARISE());
_callbacks.Add("HITPLAYER", new HITPLAYER());
_callbacks.Add("REDOUT", new REDOUT());
_callbacks.Add("REDIN", new REDIN());
_callbacks.Add("FLASHPLAYER", new FLASHPLAYER());
_callbacks.Add("FLASHOUT", new FLASHOUT());
_callbacks.Add("FLASHIN", new FLASHIN());
_callbacks.Add("HITPLAYERDELAY", new HITPLAYERDELAY());
_callbacks.Add("KILLPLAYER", new KILLPLAYER());
_callbacks.Add("FINISHPLAYER", new FINISHPLAYER());
_callbacks.Add("TOGGLEGODMODE", new TOGGLEGODMODE());
_callbacks.Add("SETCKEY", new SETCKEY());
_callbacks.Add("SETGKEY", new SETGKEY());
_callbacks.Add("SETOKEY", new SETOKEY());
_callbacks.Add("SETDKEY", new SETDKEY());
_callbacks.Add("FIRE", new FIRE());
_callbacks.Add("BURST", new BURST());
_callbacks.Add("THROW", new THROW());
_callbacks.Add("LAUNCH", new LAUNCH());
_callbacks.Add("BEAM", new BEAM());
_callbacks.Add("RAISE", new RAISE());
_callbacks.Add("LOWER", new LOWER());
_callbacks.Add("TARGETON", new TARGETON());
_callbacks.Add("TARGETOFF", new TARGETOFF());
_callbacks.Add("SELECTNONE", new SELECTNONE());
_callbacks.Add("SELECTTRICORDER", new SELECTTRICORDER());
_callbacks.Add("SELECTMP5", new SELECTMP5());
_callbacks.Add("SELECTMP5BURST", new SELECTMP5BURST());
_callbacks.Add("SELECTGRANADE", new SELECTGRANADE());
_callbacks.Add("SELECTSTINGER", new SELECTSTINGER());
_callbacks.Add("SELECTQUANTUM", new SELECTQUANTUM());
_callbacks.Add("ZOOMMAPIN", new ZOOMMAPIN());
_callbacks.Add("ZOOMMAPOUT", new ZOOMMAPOUT());
_callbacks.Add("SHOWPDABRIEFING", new SHOWPDABRIEFING());
_callbacks.Add("SHOWPDAGAMEOVER", new SHOWPDAGAMEOVER());
_callbacks.Add("PDAMESSAGEOFF", new PDAMESSAGEOFF());
_callbacks.Add("REPEATMUSIC", new REPEATMUSIC());
_callbacks.Add("SETSOUNDVOL", new SETSOUNDVOL());
_callbacks.Add("PICKKEY1", new PICKKEY1());
_callbacks.Add("PICKKEY2", new PICKKEY2());
_callbacks.Add("PICKUPLOCALMP5", new PICKUPLOCALMP5());
_callbacks.Add("ENDPHASE", new ENDPHASE());
_callbacks.Add("DRKLTURN", new DRKLTURN());
_callbacks.Add("DRKLWAIT", new DRKLWAIT());
_callbacks.Add("DRKLWANDER", new DRKLWANDER());
_callbacks.Add("DRKLSEARCH", new DRKLSEARCH());
_callbacks.Add("DRKLHIDE", new DRKLHIDE());
_callbacks.Add("DRKLLISTEN", new DRKLLISTEN());
_callbacks.Add("DRKLJUMP", new DRKLJUMP());
_callbacks.Add("DRKLLOOKFOR", new DRKLLOOKFOR());
_callbacks.Add("DRKLHEAR", new DRKLHEAR());
_callbacks.Add("DRKLDOWN", new DRKLDOWN());
_callbacks.Add("DRKLFOLLOWATTACK", new DRKLFOLLOWATTACK());
_callbacks.Add("DRKLSHOOT", new DRKLSHOOT());
_callbacks.Add("DRKLESCAPE", new DRKLESCAPE());
_callbacks.Add("DRKLDEAD", new DRKLDEAD());
_callbacks.Add("DRKLDIE", new DRKLDIE());
_callbacks.Add("DRKLIMPLODE", new DRKLIMPLODE());
_callbacks.Add("DRKLHIT", new DRKLHIT());
_callbacks.Add("CYCLEDRKLATTACK", new CYCLEDRKLATTACK());
_callbacks.Add("CYCLEDRKLHIDE", new CYCLEDRKLHIDE());
_callbacks.Add("CYCLEDRKLSHOOT", new CYCLEDRKLSHOOT());
_callbacks.Add("DRKLTALK", new DRKLTALK());
_callbacks.Add("TROPTURN", new TROPTURN());
_callbacks.Add("TROPBACKOFF", new TROPBACKOFF());
_callbacks.Add("TROPWAIT", new TROPWAIT());
_callbacks.Add("TROPWANDER", new TROPWANDER());
_callbacks.Add("TROPSEARCH", new TROPSEARCH());
_callbacks.Add("TROPHIDE", new TROPHIDE());
_callbacks.Add("TROPLISTEN", new TROPLISTEN());
_callbacks.Add("TROPWARNING", new TROPWARNING());
_callbacks.Add("TROPLOOKFOR", new TROPLOOKFOR());
_callbacks.Add("TROPFOLLOW", new TROPFOLLOW());
_callbacks.Add("TROPFOLLOWATTACK", new TROPFOLLOWATTACK());
_callbacks.Add("TROPFOLLOWWARNING", new TROPFOLLOWWARNING());
_callbacks.Add("TROPAIM", new TROPAIM());
_callbacks.Add("TROPSHOOT", new TROPSHOOT());
_callbacks.Add("TROPESCAPE", new TROPESCAPE());
_callbacks.Add("TROPDEAD", new TROPDEAD());
_callbacks.Add("TROPDIE", new TROPDIE());
_callbacks.Add("TROPIMPLODE", new TROPIMPLODE());
_callbacks.Add("TROPHIT", new TROPHIT());
_callbacks.Add("TROPDROPKEY", new TROPDROPKEY());
_callbacks.Add("CYCLETROPATTACK", new CYCLETROPATTACK());
_callbacks.Add("CYCLETROPHIDE", new CYCLETROPHIDE());
_callbacks.Add("CYCLETROPBACK", new CYCLETROPBACK());
_callbacks.Add("CYCLETROPSHOOT", new CYCLETROPSHOOT());
_callbacks.Add("CYCLETROPWARNING", new CYCLETROPWARNING());
_callbacks.Add("TROPTALK", new TROPTALK());
_callbacks.Add("TROPSHOUT", new TROPSHOUT());
_callbacks.Add("PICKTROPAMMO", new PICKTROPAMMO());
_callbacks.Add("PICKTROPARMOUR", new PICKTROPARMOUR());
_callbacks.Add("HUMMERHIT", new HUMMERHIT());
_callbacks.Add("LNCHTURN", new LNCHTURN());
_callbacks.Add("LNCHBACKOFF", new LNCHBACKOFF());
_callbacks.Add("LNCHWAIT", new LNCHWAIT());
_callbacks.Add("LNCHWANDER", new LNCHWANDER());
_callbacks.Add("LNCHSEARCH", new LNCHSEARCH());
_callbacks.Add("LNCHHIDE", new LNCHHIDE());
_callbacks.Add("LNCHLISTEN", new LNCHLISTEN());
_callbacks.Add("LNCHLOOKFOR", new LNCHLOOKFOR());
_callbacks.Add("LNCHFOLLOW", new LNCHFOLLOW());
_callbacks.Add("LNCHFOLLOWATTACK", new LNCHFOLLOWATTACK());
_callbacks.Add("LNCHAIM", new LNCHAIM());
_callbacks.Add("LNCHSHOOT", new LNCHSHOOT());
_callbacks.Add("LNCHESCAPE", new LNCHESCAPE());
_callbacks.Add("LNCHDEAD", new LNCHDEAD());
_callbacks.Add("LNCHDIE", new LNCHDIE());
_callbacks.Add("LNCHIMPLODE", new LNCHIMPLODE());
_callbacks.Add("LNCHHIT", new LNCHHIT());
_callbacks.Add("LNCHDROPKEY", new LNCHDROPKEY());
_callbacks.Add("CYCLELNCHATTACK", new CYCLELNCHATTACK());
_callbacks.Add("CYCLELNCHHIDE", new CYCLELNCHHIDE());
_callbacks.Add("CYCLELNCHBACK", new CYCLELNCHBACK());
_callbacks.Add("CYCLELNCHSHOOT", new CYCLELNCHSHOOT());
_callbacks.Add("LNCHTALK", new LNCHTALK());
_callbacks.Add("LNCHSHOUT", new LNCHSHOUT());
_callbacks.Add("REPTTURN", new REPTTURN());
_callbacks.Add("REPTWAIT", new REPTWAIT());
_callbacks.Add("REPTWANDER", new REPTWANDER());
_callbacks.Add("REPTSEARCH", new REPTSEARCH());
_callbacks.Add("REPTHIDE", new REPTHIDE());
_callbacks.Add("REPTLISTEN", new REPTLISTEN());
_callbacks.Add("REPTJUMP", new REPTJUMP());
_callbacks.Add("REPTLOOKFOR", new REPTLOOKFOR());
_callbacks.Add("REPTHEAR", new REPTHEAR());
_callbacks.Add("REPTDOWN", new REPTDOWN());
_callbacks.Add("REPTFOLLOWATTACK", new REPTFOLLOWATTACK());
_callbacks.Add("REPTSHOOT", new REPTSHOOT());
_callbacks.Add("REPTESCAPE", new REPTESCAPE());
_callbacks.Add("REPTDEAD", new REPTDEAD());
_callbacks.Add("REPTDIE", new REPTDIE());
_callbacks.Add("REPTIMPLODE", new REPTIMPLODE());
_callbacks.Add("REPTHIT", new REPTHIT());
_callbacks.Add("CYCLEREPTATTACK", new CYCLEREPTATTACK());
_callbacks.Add("CYCLEREPTHIDE", new CYCLEREPTHIDE());
_callbacks.Add("CYCLEREPTSHOOT", new CYCLEREPTSHOOT());
_callbacks.Add("REPTTALK", new REPTTALK());
_callbacks.Add("NURSTURN", new NURSTURN());
_callbacks.Add("NURSWAIT", new NURSWAIT());
_callbacks.Add("NURSWANDER", new NURSWANDER());
_callbacks.Add("NURSHIDE", new NURSHIDE());
_callbacks.Add("NURSDEAD", new NURSDEAD());
_callbacks.Add("NURSDIE", new NURSDIE());
_callbacks.Add("NURSIMPLODE", new NURSIMPLODE());
_callbacks.Add("NURSHIT", new NURSHIT());
_callbacks.Add("NURSCYCLE", new NURSCYCLE());
_callbacks.Add("NURSSCREAM", new NURSSCREAM());
_callbacks.Add("NURSTALK", new NURSTALK());
_callbacks.Add("DOCTTURN", new DOCTTURN());
_callbacks.Add("DOCTWAIT", new DOCTWAIT());
_callbacks.Add("DOCTWANDER", new DOCTWANDER());
_callbacks.Add("DOCTHIDE", new DOCTHIDE());
_callbacks.Add("DOCTDEAD", new DOCTDEAD());
_callbacks.Add("DOCTDIE", new DOCTDIE());
_callbacks.Add("DOCTIMPLODE", new DOCTIMPLODE());
_callbacks.Add("DOCTHIT", new DOCTHIT());
_callbacks.Add("DOCTCYCLE", new DOCTCYCLE());
_callbacks.Add("DOCTSCREAM", new DOCTSCREAM());
_callbacks.Add("DOCTTALK", new DOCTTALK());
_callbacks.Add("SETFORCE1", new SETFORCE1());
_callbacks.Add("TROPASSAULT", new TROPASSAULT());
_callbacks.Add("WAYGUARD2", new WAYGUARD2());
_callbacks.Add("DROPTROOPS2", new DROPTROOPS2());
_callbacks.Add("WARNPLAYER", new WARNPLAYER());
_callbacks.Add("RESETWARN", new RESETWARN());
_callbacks.Add("SELECTOR", new SELECTOR());
_callbacks.Add("RESETTOUCH", new RESETTOUCH());
_callbacks.Add("SETTOUCH1", new SETTOUCH1());
_callbacks.Add("SETTOUCH2", new SETTOUCH2());
_callbacks.Add("SETTOUCH4", new SETTOUCH4());
_callbacks.Add("SETTOUCH5", new SETTOUCH5());
_callbacks.Add("SETTOUCH6", new SETTOUCH6());
_callbacks.Add("SETTOUCH7", new SETTOUCH7());
_callbacks.Add("SETTOUCH8", new SETTOUCH8());
_callbacks.Add("OPENDOOR1", new OPENDOOR1());
_callbacks.Add("OPENDOOR2", new OPENDOOR2());
_callbacks.Add("OPENHATCH", new OPENHATCH());
_callbacks.Add("OPENHATCHA", new OPENHATCHA());
_callbacks.Add("OPENHATCHB", new OPENHATCHB());
_callbacks.Add("OPENMJ3", new OPENMJ3());
_callbacks.Add("OPENBLASTDOOR", new OPENBLASTDOOR());
_callbacks.Add("NOTOPEN", new NOTOPEN());
_callbacks.Add("DEFENSE1", new DEFENSE1());
_callbacks.Add("STARTLEVEL", new STARTLEVEL());
_callbacks.Add("LAUNCHMISSILES", new LAUNCHMISSILES());
_callbacks.Add("STARTASSAULT", new STARTASSAULT());
_callbacks.Add("FADEIN", new FADEIN());
    }
public class DISPLAYMESSAGE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DISPLAYMESSAGE() {
  }
 public DISPLAYMESSAGE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MESSAGE_TEXT_0 = _world.GetSynonymObject(361798934);
PANELTEXT_2 = _world.AcknexObject.GetAcknexObject(1886906754);
PANELTEXT_2_array = PANELTEXT_2.GetObject<List<IAcknexObject>>(293);
PANELTEXT_2_index = PANELTEXT_2.GetInteger(PropertyName.INDEX);
PANELTEXT_2_array[PANELTEXT_2_index-1] = MESSAGE_TEXT_0;
PANELTEXT_2.IsDirty = true;
PANELTEXT_3 = _world.AcknexObject.GetAcknexObject(1886906754);
_world.AcknexObject.SetAcknexObject(127,PANELTEXT_3);
MSGSECCOUNT_7 = _world.GetObject(ObjectType.Skill,2688150552);
MSGSECCOUNT_7.SetFloat(231,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MESSAGE_TEXT_0;
IAcknexObject PANELTEXT_2;
List<IAcknexObject> PANELTEXT_2_array;
int PANELTEXT_2_index;
IAcknexObject PANELTEXT_3;
IAcknexObject MSGSECCOUNT_7;
}
public class CONTROLMESSAGEDISPLAY : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CONTROLMESSAGEDISPLAY() {
  }
 public CONTROLMESSAGEDISPLAY(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
//Unknown keyword: LOCATE
GODCOUNTER_1 = _world.GetObject(ObjectType.Skill,3966981511);
GODCOUNTER_1_val = GODCOUNTER_1.GetFloat(PropertyName.VAL);
if (GODCOUNTER_1_val < 0f)
{
goto WATER;
}
GODCOUNTER_3 = _world.GetObject(ObjectType.Skill,3966981511);
GODCOUNTER_3_val = GODCOUNTER_3.GetFloat(PropertyName.VAL);
if (GODCOUNTER_3_val > 0f)
{
goto DECGOD;
}
_world.AcknexObject.SetAcknexObject(50,null);
_world.AcknexObject.SetAcknexObject(54,null);
_world.AcknexObject.SetAcknexObject(62,null);
_world.AcknexObject.SetAcknexObject(51,null);
DECGOD:
GODCOUNTER_13 = _world.GetObject(ObjectType.Skill,3966981511);
GODCOUNTER_13_val = GODCOUNTER_13.GetFloat(PropertyName.VAL);
GODCOUNTER_14 = _world.GetObject(ObjectType.Skill,3966981511);
GODCOUNTER_14.SetFloat(231,GODCOUNTER_13_val + -1f);
WATER:
UNDERWATER_16 = _world.GetObject(ObjectType.Skill,1369167822);
UNDERWATER_16_val = UNDERWATER_16.GetFloat(PropertyName.VAL);
if (UNDERWATER_16_val == 0f)
{
goto CONT;
}
HERE_19 = _world.GetSynonymObject(703);
temp_20 =HERE_19?.GetAcknexObject(234);
if (temp_20 == null)
{
goto CONT;
}
{
            var enumerator = new REGIO_ARISE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }CONT:
SHOTSECCOUNT_22 = _world.GetObject(ObjectType.Skill,733093231);
SHOTSECCOUNT_22_val = SHOTSECCOUNT_22.GetFloat(PropertyName.VAL);
if (SHOTSECCOUNT_22_val < 0f)
{
goto MESSAGE;
}
SHOTSECCOUNT_24 = _world.GetObject(ObjectType.Skill,733093231);
SHOTSECCOUNT_24_val = SHOTSECCOUNT_24.GetFloat(PropertyName.VAL);
SHOTSECCOUNT_25 = _world.GetObject(ObjectType.Skill,733093231);
SHOTSECCOUNT_25.SetFloat(231,SHOTSECCOUNT_24_val + 1f);
SHOTSECCOUNT_27 = _world.GetObject(ObjectType.Skill,733093231);
SHOTSECCOUNT_27_val = SHOTSECCOUNT_27.GetFloat(PropertyName.VAL);
if (SHOTSECCOUNT_27_val < 10f)
{
goto MESSAGE;
}
SHOT_SOUND_ON_29 = _world.GetObject(ObjectType.Skill,3372273679);
SHOT_SOUND_ON_29.SetFloat(231,0f);
SHOTSECCOUNT_31 = _world.GetObject(ObjectType.Skill,733093231);
SHOTSECCOUNT_31.SetFloat(231,-1f);
MESSAGE:
MSGSECCOUNT_33 = _world.GetObject(ObjectType.Skill,2688150552);
MSGSECCOUNT_33_val = MSGSECCOUNT_33.GetFloat(PropertyName.VAL);
if (MSGSECCOUNT_33_val < 0f)
{
return false;
}
MSGSECCOUNT_35 = _world.GetObject(ObjectType.Skill,2688150552);
MSGSECCOUNT_35_val = MSGSECCOUNT_35.GetFloat(PropertyName.VAL);
MSGSECCOUNT_36 = _world.GetObject(ObjectType.Skill,2688150552);
MSGSECCOUNT_36.SetFloat(231,MSGSECCOUNT_35_val + 1f);
MSGSECCOUNT_38 = _world.GetObject(ObjectType.Skill,2688150552);
MSGSECCOUNT_38_val = MSGSECCOUNT_38.GetFloat(PropertyName.VAL);
if (MSGSECCOUNT_38_val < 10f)
{
return false;
}
MOVE_MODE_40 = _world.GetObject(ObjectType.Skill,362);
MOVE_MODE_40_val = MOVE_MODE_40.GetFloat(PropertyName.VAL);
if (MOVE_MODE_40_val > 0f)
{
goto CONTCOUNTER;
}
MSGSECCOUNT_42 = _world.GetObject(ObjectType.Skill,2688150552);
MSGSECCOUNT_42.SetFloat(231,10f);
return false;
CONTCOUNTER:
BLANKSTR_43 = _world.AcknexObject.GetAcknexObject(3695414798);
PANELTEXT_45 = _world.AcknexObject.GetAcknexObject(1886906754);
temp_46_array =PANELTEXT_45?.GetObject<List<IAcknexObject>>(293);
if (temp_46_array == null || temp_46_array.Count == 0) {
  temp_46 = null;
 } else {
temp_46_index =PANELTEXT_45.GetInteger(PropertyName.INDEX);
  temp_46 = temp_46_array[temp_46_index-1];
}
if (temp_46 == BLANKSTR_43)
{
goto NULLMESSAGE;
}
BLANKSTR_47 = _world.AcknexObject.GetAcknexObject(3695414798);
PANELTEXT_49 = _world.AcknexObject.GetAcknexObject(1886906754);
PANELTEXT_49_array = PANELTEXT_49.GetObject<List<IAcknexObject>>(293);
PANELTEXT_49_index = PANELTEXT_49.GetInteger(PropertyName.INDEX);
PANELTEXT_49_array[PANELTEXT_49_index-1] = BLANKSTR_47;
PANELTEXT_49.IsDirty = true;
PANELTEXT_50 = _world.AcknexObject.GetAcknexObject(1886906754);
_world.AcknexObject.SetAcknexObject(127,PANELTEXT_50);
return false;
NULLMESSAGE:
_world.AcknexObject.SetAcknexObject(127,null);
MSGSECCOUNT_57 = _world.GetObject(ObjectType.Skill,2688150552);
MSGSECCOUNT_57.SetFloat(231,-1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject GODCOUNTER_1;
float GODCOUNTER_1_val;
IAcknexObject GODCOUNTER_3;
float GODCOUNTER_3_val;
IAcknexObject GODCOUNTER_13;
float GODCOUNTER_13_val;
IAcknexObject GODCOUNTER_14;
IAcknexObject UNDERWATER_16;
float UNDERWATER_16_val;
IAcknexObject HERE_19;
IAcknexObject temp_20;
IAcknexObject SHOTSECCOUNT_22;
float SHOTSECCOUNT_22_val;
IAcknexObject SHOTSECCOUNT_24;
float SHOTSECCOUNT_24_val;
IAcknexObject SHOTSECCOUNT_25;
IAcknexObject SHOTSECCOUNT_27;
float SHOTSECCOUNT_27_val;
IAcknexObject SHOT_SOUND_ON_29;
IAcknexObject SHOTSECCOUNT_31;
IAcknexObject MSGSECCOUNT_33;
float MSGSECCOUNT_33_val;
IAcknexObject MSGSECCOUNT_35;
float MSGSECCOUNT_35_val;
IAcknexObject MSGSECCOUNT_36;
IAcknexObject MSGSECCOUNT_38;
float MSGSECCOUNT_38_val;
IAcknexObject MOVE_MODE_40;
float MOVE_MODE_40_val;
IAcknexObject MSGSECCOUNT_42;
IAcknexObject BLANKSTR_43;
IAcknexObject PANELTEXT_45;
IAcknexObject temp_46;
List<IAcknexObject> temp_46_array;
int temp_46_index;
IAcknexObject BLANKSTR_47;
IAcknexObject PANELTEXT_49;
List<IAcknexObject> PANELTEXT_49_array;
int PANELTEXT_49_index;
IAcknexObject PANELTEXT_50;
IAcknexObject MSGSECCOUNT_57;
}
public class CONTROLUNDERWATERTIME : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CONTROLUNDERWATERTIME() {
  }
 public CONTROLUNDERWATERTIME(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
UNDERWATER_1 = _world.GetObject(ObjectType.Skill,1369167822);
UNDERWATER_1_val = UNDERWATER_1.GetFloat(PropertyName.VAL);
if (UNDERWATER_1_val > 0f)
{
goto GLUBGLUB;
}
UNDERWATERSECCOUNT_3 = _world.GetObject(ObjectType.Skill,4018771090);
UNDERWATERSECCOUNT_3.SetFloat(231,-1f);
return false;
GLUBGLUB:
UNDERWATERSECCOUNT_5 = _world.GetObject(ObjectType.Skill,4018771090);
UNDERWATERSECCOUNT_5_val = UNDERWATERSECCOUNT_5.GetFloat(PropertyName.VAL);
UNDERWATERSECCOUNT_6 = _world.GetObject(ObjectType.Skill,4018771090);
UNDERWATERSECCOUNT_6.SetFloat(231,UNDERWATERSECCOUNT_5_val + 1f);
UNDERWATERSECCOUNT_8 = _world.GetObject(ObjectType.Skill,4018771090);
UNDERWATERSECCOUNT_8_val = UNDERWATERSECCOUNT_8.GetFloat(PropertyName.VAL);
if (UNDERWATERSECCOUNT_8_val < 20f)
{
return false;
}
PLAYER_RESULT_10 = _world.GetObject(ObjectType.Skill,1861765784);
PLAYER_RESULT_10.SetFloat(231,2f);
{
            var enumerator = new HITPLAYER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject UNDERWATER_1;
float UNDERWATER_1_val;
IAcknexObject UNDERWATERSECCOUNT_3;
IAcknexObject UNDERWATERSECCOUNT_5;
float UNDERWATERSECCOUNT_5_val;
IAcknexObject UNDERWATERSECCOUNT_6;
IAcknexObject UNDERWATERSECCOUNT_8;
float UNDERWATERSECCOUNT_8_val;
IAcknexObject PLAYER_RESULT_10;
}
public class VANISHSTOP : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public VANISHSTOP() {
  }
 public VANISHSTOP(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetFloat(168,0f);
MY_5 = MY;
MY_5.SetFloat(207,0f);
MY_8 = MY;
MY_8.SetFloat(173,10f);
MY_11 = MY;
MY_11.SetAcknexObject(189,null);
MY_14 = MY;
MY_14.SetFloat(204,1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject MY_14;
}
public class VANISHFORGOOD : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public VANISHFORGOOD() {
  }
 public VANISHFORGOOD(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetFloat(168,0f);
MY_5 = MY;
MY_5.SetFloat(207,0f);
MY_8 = MY;
MY_8.SetFloat(173,10f);
VANISHSTOP_9 = _world.AcknexObject.GetAcknexObject(3676276956);
MY_11 = MY;
MY_11.SetAcknexObject(189,VANISHSTOP_9);
NULLTEXTURE_12 = _world.AcknexObject.GetAcknexObject(2267006969);
MY_14 = MY;
MY_14.SetAcknexObject(164,NULLTEXTURE_12);
MY_17 = MY;
MY_17.SetFloat(204,1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject VANISHSTOP_9;
IAcknexObject MY_11;
IAcknexObject NULLTEXTURE_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
}
public class LOCATEACTOR : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LOCATEACTOR() {
  }
 public LOCATEACTOR(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(213);
if (temp_3 == 0f)
{
goto CONT;
}
//Unknown keyword: LOCATE
return false;
CONT:
MY_6 = MY;
MY_6.SetFloat(165,0f);
MY_9 = MY;
MY_9.SetFloat(213,1f);
//Unknown keyword: LOCATE
MY_12 = MY;
MY_12.SetFloat(213,0f);
MY_15 = MY;
MY_15.SetFloat(165,-0.05f);
WATER:
MY_17 = MY;
temp_18 =MY_17?.GetAcknexObject(198);
_world.SetSynonymObject(2468751347,temp_18);
WATER_REGION_22 = _world.GetSynonymObject(2468751347);
temp_23 =WATER_REGION_22?.GetAcknexObject(242);
if (temp_23 == null)
{
return false;
}
MY_26 = MY;
MY_26.SetFloat(165,-2.5f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_6;
IAcknexObject MY_9;
IAcknexObject MY_12;
IAcknexObject MY_15;
IAcknexObject MY_17;
IAcknexObject temp_18;
IAcknexObject WATER_REGION_22;
IAcknexObject temp_23;
IAcknexObject MY_26;
}
public class LOOKPLAYER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LOOKPLAYER() {
  }
 public LOOKPLAYER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(202);
if (temp_3 > 200f)
{
goto NOTVISIBLE;
}
DISTZ_4 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_5 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_5_val = DISTZ_5.GetFloat(PropertyName.VAL);
FLOOR_HGT_6 = _world.GetObject(ObjectType.Skill,567);
FLOOR_HGT_6_val = FLOOR_HGT_6.GetFloat(PropertyName.VAL);
MY_9 = MY;
temp_10 =MY_9.GetFloat(200);
DISTZ_4.SetFloat(231,FLOOR_HGT_6_val-temp_10);
DISTZ_12 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_12_val = DISTZ_12.GetFloat(PropertyName.VAL);
if (DISTZ_12_val < -6f)
{
goto MAYBEVISIBLE;
}
DISTZ_14 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_14_val = DISTZ_14.GetFloat(PropertyName.VAL);
if (DISTZ_14_val > 6f)
{
goto MAYBEVISIBLE;
}
SHOOT_SECTOR_16 = _world.GetObject(ObjectType.Skill,440);
SHOOT_SECTOR_16.SetFloat(231,4f);
MY_19 = MY;
temp_20 =MY_19.GetFloat(202);
if (temp_20 < 20f)
{
SHOOT_SECTOR_22 = _world.GetObject(ObjectType.Skill,440);
SHOOT_SECTOR_22.SetFloat(231,6.28f);
}
SHOOT_RANGE_24 = _world.GetObject(ObjectType.Skill,439);
SHOOT_RANGE_24.SetFloat(231,200f);
SHOOT_Y_26 = _world.GetObject(ObjectType.Skill,443);
SHOOT_Y_26.SetFloat(231,0f);
MY_27 = MY;
_world.Shoot(MY_27, MY, THERE);
HIT_DIST_29 = _world.GetObject(ObjectType.Skill,444);
HIT_DIST_29_val = HIT_DIST_29.GetFloat(PropertyName.VAL);
if (HIT_DIST_29_val == 0f)
{
goto NOTVISIBLE;
}
ISVISIBLE:
MY_32 = MY;
MY_32.SetFloat(181,1f);
return false;
MAYBEVISIBLE:
MY_35 = MY;
temp_36 =MY_35.GetFloat(205);
if (temp_36 == 1f)
{
goto ISVISIBLE;
}
NOTVISIBLE:
MY_39 = MY;
MY_39.SetFloat(181,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject DISTZ_4;
IAcknexObject DISTZ_5;
float DISTZ_5_val;
IAcknexObject FLOOR_HGT_6;
float FLOOR_HGT_6_val;
IAcknexObject MY_9;
float temp_10;
IAcknexObject DISTZ_12;
float DISTZ_12_val;
IAcknexObject DISTZ_14;
float DISTZ_14_val;
IAcknexObject SHOOT_SECTOR_16;
IAcknexObject MY_19;
float temp_20;
IAcknexObject SHOOT_SECTOR_22;
IAcknexObject SHOOT_RANGE_24;
IAcknexObject SHOOT_Y_26;
IAcknexObject MY_27;
IAcknexObject HIT_DIST_29;
float HIT_DIST_29_val;
IAcknexObject MY_32;
IAcknexObject MY_35;
float temp_36;
IAcknexObject MY_39;
}
public class PROBE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public PROBE() {
  }
 public PROBE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(168);
if (temp_3 < 0.05f)
{
return false;
}
MY_6 = MY;
temp_7 =MY_6.GetFloat(213);
if (temp_7 == 0f)
{
goto CONT;
}
//Unknown keyword: LOCATE
return false;
CONT:
MY_10 = MY;
MY_10.SetFloat(165,-0.05f);
WATER:
MY_12 = MY;
temp_13 =MY_12?.GetAcknexObject(198);
_world.SetSynonymObject(2468751347,temp_13);
WATER_REGION_17 = _world.GetSynonymObject(2468751347);
temp_18 =WATER_REGION_17?.GetAcknexObject(242);
if (temp_18 == null)
{
goto PROBELOOP;
}
MY_21 = MY;
MY_21.SetFloat(165,-2.5f);
PROBELOOP:
WATER_REGION_24 = _world.GetSynonymObject(2468751347);
temp_25 =WATER_REGION_24.GetFloat(182);
if (temp_25 == 1f)
{
{
            var enumerator = new VANISHFORGOOD();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
WATER_REGION_28 = _world.GetSynonymObject(2468751347);
temp_29 =WATER_REGION_28.GetFloat(181);
if (temp_29 < 1f)
{
return false;
}
STEPCOUNTER_31 = _world.GetObject(ObjectType.Skill,2583753065);
STEPCOUNTER_31.SetFloat(231,0f);
MY_33 = MY;
temp_34 =MY_33.GetFloat(194);
ANGLEOUT_35 = _world.GetObject(ObjectType.Skill,2546833996);
ANGLEOUT_35.SetFloat(231,temp_34);
PROBEAGAIN:
ANGLEOUT_36 = _world.GetObject(ObjectType.Skill,2546833996);
ANGLEOUT_36_val = ANGLEOUT_36.GetFloat(PropertyName.VAL);
DISTY_37 = _world.GetObject(ObjectType.Skill,217512506);
DISTY_37.SetFloat(231,MathUtils.Sin(ANGLEOUT_36_val));
DISTX_38 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_39 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_39_val = DISTX_39.GetFloat(PropertyName.VAL);
ANGLEOUT_40 = _world.GetObject(ObjectType.Skill,2546833996);
ANGLEOUT_40_val = ANGLEOUT_40.GetFloat(PropertyName.VAL);
HALF_PI_42 = _world.GetObject(ObjectType.Skill,576);
HALF_PI_42_val = HALF_PI_42.GetFloat(PropertyName.VAL);
DISTX_38.SetFloat(231,ANGLEOUT_40_val+HALF_PI_42_val);
DISTX_43 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_43_val = DISTX_43.GetFloat(PropertyName.VAL);
DISTX_44 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_44.SetFloat(231,MathUtils.Sin(DISTX_43_val));
PROBETNG_46 = _world.AcknexObject.GetAcknexObject(3045485262);
PROBETNG_48 = _world.AcknexObject.GetAcknexObject(3045485262);
temp_49 =PROBETNG_48.GetFloat(195);
MY_51 = MY;
temp_52 =MY_51.GetFloat(195);
DISTX_54 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_54_val = DISTX_54.GetFloat(PropertyName.VAL);
PROBETNG_46.SetFloat(195,temp_52+DISTX_54_val*12f);
PROBETNG_58 = _world.AcknexObject.GetAcknexObject(3045485262);
PROBETNG_60 = _world.AcknexObject.GetAcknexObject(3045485262);
temp_61 =PROBETNG_60.GetFloat(196);
MY_63 = MY;
temp_64 =MY_63.GetFloat(196);
DISTY_66 = _world.GetObject(ObjectType.Skill,217512506);
DISTY_66_val = DISTY_66.GetFloat(PropertyName.VAL);
PROBETNG_58.SetFloat(196,temp_64+DISTY_66_val*12f);
PROBETNG_71 = _world.AcknexObject.GetAcknexObject(3045485262);
PROBETNG_71.SetFloat(213,1f);
WATER_REGION_73 = _world.GetSynonymObject(2468751347);
temp_74 =WATER_REGION_73.GetFloat(200);
PROBETNG_76 = _world.AcknexObject.GetAcknexObject(3045485262);
PROBETNG_76.SetFloat(165,temp_74);
//Unknown keyword: LOCATE
PROBETNG_79 = _world.AcknexObject.GetAcknexObject(3045485262);
PROBETNG_79.SetFloat(213,0f);
PROBETNG_81 = _world.AcknexObject.GetAcknexObject(3045485262);
temp_82 =PROBETNG_81?.GetAcknexObject(198);
_world.SetSynonymObject(2775723552,temp_82);
DISTZ_84 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_85 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_85_val = DISTZ_85.GetFloat(PropertyName.VAL);
P_REGION_87 = _world.GetSynonymObject(2775723552);
temp_88 =P_REGION_87.GetFloat(200);
WATER_REGION_91 = _world.GetSynonymObject(2468751347);
temp_92 =WATER_REGION_91.GetFloat(200);
DISTZ_84.SetFloat(231,temp_88-temp_92);
DISTZ_94 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_94_val = DISTZ_94.GetFloat(PropertyName.VAL);
if (DISTZ_94_val > -1f)
{
goto END;
}
STEPCOUNTER_96 = _world.GetObject(ObjectType.Skill,2583753065);
STEPCOUNTER_96_val = STEPCOUNTER_96.GetFloat(PropertyName.VAL);
if (STEPCOUNTER_96_val > 11f)
{
goto END;
}
ANGLESTEP_97 = _world.GetObject(ObjectType.Skill,2441253488);
ANGLESTEP_98 = _world.GetObject(ObjectType.Skill,2441253488);
ANGLESTEP_98_val = ANGLESTEP_98.GetFloat(PropertyName.VAL);
ANGLESTEP_100 = _world.GetObject(ObjectType.Skill,2441253488);
ANGLESTEP_100_val = ANGLESTEP_100.GetFloat(PropertyName.VAL);
ANGLESTEP_97.SetFloat(231,-ANGLESTEP_100_val);
ANGLESTEP_102 = _world.GetObject(ObjectType.Skill,2441253488);
ANGLESTEP_102_val = ANGLESTEP_102.GetFloat(PropertyName.VAL);
if (ANGLESTEP_102_val < 0f)
{
STEPCOUNTER_104 = _world.GetObject(ObjectType.Skill,2583753065);
STEPCOUNTER_104_val = STEPCOUNTER_104.GetFloat(PropertyName.VAL);
STEPCOUNTER_105 = _world.GetObject(ObjectType.Skill,2583753065);
STEPCOUNTER_105.SetFloat(231,STEPCOUNTER_104_val + 1f);
}
ANGLEOUT_106 = _world.GetObject(ObjectType.Skill,2546833996);
ANGLEOUT_107 = _world.GetObject(ObjectType.Skill,2546833996);
ANGLEOUT_107_val = ANGLEOUT_107.GetFloat(PropertyName.VAL);
MY_109 = MY;
temp_110 =MY_109.GetFloat(194);
STEPCOUNTER_112 = _world.GetObject(ObjectType.Skill,2583753065);
STEPCOUNTER_112_val = STEPCOUNTER_112.GetFloat(PropertyName.VAL);
ANGLESTEP_114 = _world.GetObject(ObjectType.Skill,2441253488);
ANGLESTEP_114_val = ANGLESTEP_114.GetFloat(PropertyName.VAL);
ANGLEOUT_106.SetFloat(231,temp_110+STEPCOUNTER_112_val*ANGLESTEP_114_val);
goto PROBEAGAIN;
END:
BULLET_115 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_117 = MY;
MY_117.SetAcknexObject(199,BULLET_115);
ANGLEOUT_118 = _world.GetObject(ObjectType.Skill,2546833996);
ANGLEOUT_118_val = ANGLEOUT_118.GetFloat(PropertyName.VAL);
MY_120 = MY;
MY_120.SetFloat(194,ANGLEOUT_118_val);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_6;
float temp_7;
IAcknexObject MY_10;
IAcknexObject MY_12;
IAcknexObject temp_13;
IAcknexObject WATER_REGION_17;
IAcknexObject temp_18;
IAcknexObject MY_21;
IAcknexObject WATER_REGION_24;
float temp_25;
IAcknexObject WATER_REGION_28;
float temp_29;
IAcknexObject STEPCOUNTER_31;
IAcknexObject MY_33;
float temp_34;
IAcknexObject ANGLEOUT_35;
IAcknexObject ANGLEOUT_36;
float ANGLEOUT_36_val;
IAcknexObject DISTY_37;
IAcknexObject DISTX_38;
IAcknexObject DISTX_39;
float DISTX_39_val;
IAcknexObject ANGLEOUT_40;
float ANGLEOUT_40_val;
IAcknexObject HALF_PI_42;
float HALF_PI_42_val;
IAcknexObject DISTX_43;
float DISTX_43_val;
IAcknexObject DISTX_44;
IAcknexObject PROBETNG_46;
IAcknexObject PROBETNG_48;
float temp_49;
IAcknexObject MY_51;
float temp_52;
IAcknexObject DISTX_54;
float DISTX_54_val;
IAcknexObject PROBETNG_58;
IAcknexObject PROBETNG_60;
float temp_61;
IAcknexObject MY_63;
float temp_64;
IAcknexObject DISTY_66;
float DISTY_66_val;
IAcknexObject PROBETNG_71;
IAcknexObject WATER_REGION_73;
float temp_74;
IAcknexObject PROBETNG_76;
IAcknexObject PROBETNG_79;
IAcknexObject PROBETNG_81;
IAcknexObject temp_82;
IAcknexObject DISTZ_84;
IAcknexObject DISTZ_85;
float DISTZ_85_val;
IAcknexObject P_REGION_87;
float temp_88;
IAcknexObject WATER_REGION_91;
float temp_92;
IAcknexObject DISTZ_94;
float DISTZ_94_val;
IAcknexObject STEPCOUNTER_96;
float STEPCOUNTER_96_val;
IAcknexObject ANGLESTEP_97;
IAcknexObject ANGLESTEP_98;
float ANGLESTEP_98_val;
IAcknexObject ANGLESTEP_100;
float ANGLESTEP_100_val;
IAcknexObject ANGLESTEP_102;
float ANGLESTEP_102_val;
IAcknexObject STEPCOUNTER_104;
float STEPCOUNTER_104_val;
IAcknexObject STEPCOUNTER_105;
IAcknexObject ANGLEOUT_106;
IAcknexObject ANGLEOUT_107;
float ANGLEOUT_107_val;
IAcknexObject MY_109;
float temp_110;
IAcknexObject STEPCOUNTER_112;
float STEPCOUNTER_112_val;
IAcknexObject ANGLESTEP_114;
float ANGLESTEP_114_val;
IAcknexObject BULLET_115;
IAcknexObject MY_117;
IAcknexObject ANGLEOUT_118;
float ANGLEOUT_118_val;
IAcknexObject MY_120;
}
public class FOLLOWANGLE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public FOLLOWANGLE() {
  }
 public FOLLOWANGLE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
DISTZ_0 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_1 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_1_val = DISTZ_1.GetFloat(PropertyName.VAL);
PLAYER_X_3 = _world.GetObject(ObjectType.Skill,459);
PLAYER_X_3_val = PLAYER_X_3.GetFloat(PropertyName.VAL);
MY_6 = MY;
temp_7 =MY_6.GetFloat(195);
DISTZ_0.SetFloat(231,(PLAYER_X_3_val-temp_7));
DISTY_9 = _world.GetObject(ObjectType.Skill,217512506);
DISTY_10 = _world.GetObject(ObjectType.Skill,217512506);
DISTY_10_val = DISTY_10.GetFloat(PropertyName.VAL);
PLAYER_Y_12 = _world.GetObject(ObjectType.Skill,460);
PLAYER_Y_12_val = PLAYER_Y_12.GetFloat(PropertyName.VAL);
MY_15 = MY;
temp_16 =MY_15.GetFloat(196);
DISTY_9.SetFloat(231,(PLAYER_Y_12_val-temp_16));
DISTX_18 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_19 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_19_val = DISTX_19.GetFloat(PropertyName.VAL);
DISTZ_21 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_21_val = DISTZ_21.GetFloat(PropertyName.VAL);
DISTZ_23 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_23_val = DISTZ_23.GetFloat(PropertyName.VAL);
DISTY_27 = _world.GetObject(ObjectType.Skill,217512506);
DISTY_27_val = DISTY_27.GetFloat(PropertyName.VAL);
DISTY_29 = _world.GetObject(ObjectType.Skill,217512506);
DISTY_29_val = DISTY_29.GetFloat(PropertyName.VAL);
DISTX_18.SetFloat(231,(DISTZ_21_val*DISTZ_23_val)+(DISTY_27_val*DISTY_29_val));
DISTX_31 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_31_val = DISTX_31.GetFloat(PropertyName.VAL);
DISTX_32 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_32.SetFloat(231,MathUtils.Sqrt(DISTX_31_val));
DISTX_34 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_34_val = DISTX_34.GetFloat(PropertyName.VAL);
if (DISTX_34_val < 0.1f)
{
return false;
}
DISTY_35 = _world.GetObject(ObjectType.Skill,217512506);
DISTY_36 = _world.GetObject(ObjectType.Skill,217512506);
DISTY_36_val = DISTY_36.GetFloat(PropertyName.VAL);
DISTY_37 = _world.GetObject(ObjectType.Skill,217512506);
DISTY_37_val = DISTY_37.GetFloat(PropertyName.VAL);
DISTX_39 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_39_val = DISTX_39.GetFloat(PropertyName.VAL);
DISTY_35.SetFloat(231,DISTY_37_val/DISTX_39_val);
DISTY_40 = _world.GetObject(ObjectType.Skill,217512506);
DISTY_40_val = DISTY_40.GetFloat(PropertyName.VAL);
MY_42 = MY;
MY_42.SetFloat(194,MathUtils.Asin(DISTY_40_val));
DISTZ_44 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_44_val = DISTZ_44.GetFloat(PropertyName.VAL);
if (DISTZ_44_val > 0f)
{
return false;
}
MY_46 = MY;
MY_48 = MY;
temp_49 =MY_48.GetFloat(194);
PI_50 = _world.GetObject(ObjectType.Skill,577);
PI_50_val = PI_50.GetFloat(PropertyName.VAL);
MY_53 = MY;
temp_54 =MY_53.GetFloat(194);
MY_46.SetFloat(194,PI_50_val-temp_54);
//Unknown keyword: 
      return false;
  }
IAcknexObject DISTZ_0;
IAcknexObject DISTZ_1;
float DISTZ_1_val;
IAcknexObject PLAYER_X_3;
float PLAYER_X_3_val;
IAcknexObject MY_6;
float temp_7;
IAcknexObject DISTY_9;
IAcknexObject DISTY_10;
float DISTY_10_val;
IAcknexObject PLAYER_Y_12;
float PLAYER_Y_12_val;
IAcknexObject MY_15;
float temp_16;
IAcknexObject DISTX_18;
IAcknexObject DISTX_19;
float DISTX_19_val;
IAcknexObject DISTZ_21;
float DISTZ_21_val;
IAcknexObject DISTZ_23;
float DISTZ_23_val;
IAcknexObject DISTY_27;
float DISTY_27_val;
IAcknexObject DISTY_29;
float DISTY_29_val;
IAcknexObject DISTX_31;
float DISTX_31_val;
IAcknexObject DISTX_32;
IAcknexObject DISTX_34;
float DISTX_34_val;
IAcknexObject DISTY_35;
IAcknexObject DISTY_36;
float DISTY_36_val;
IAcknexObject DISTY_37;
float DISTY_37_val;
IAcknexObject DISTX_39;
float DISTX_39_val;
IAcknexObject DISTY_40;
float DISTY_40_val;
IAcknexObject MY_42;
IAcknexObject DISTZ_44;
float DISTZ_44_val;
IAcknexObject MY_46;
IAcknexObject MY_48;
float temp_49;
IAcknexObject PI_50;
float PI_50_val;
IAcknexObject MY_53;
float temp_54;
}
public class REPELANGLE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REPELANGLE() {
  }
 public REPELANGLE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = new FOLLOWANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }PI_0 = _world.GetObject(ObjectType.Skill,577);
PI_0_val = PI_0.GetFloat(PropertyName.VAL);
MY_2 = MY;
temp_3 =MY_2.GetFloat(194);
MY_5 = MY;
MY_5.SetFloat(194,temp_3 + PI_0_val);
//Unknown keyword: 
      return false;
  }
IAcknexObject PI_0;
float PI_0_val;
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_5;
}
public class ACTORJUMP : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public ACTORJUMP() {
  }
 public ACTORJUMP(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(169);
MY_5 = MY;
MY_5.SetFloat(169,temp_3 + (-0.1f * TimeUtils.TicksToTime(1)));
MY_7 = MY;
temp_8 =MY_7.GetFloat(200);
MY_10 = MY;
temp_11 =MY_10.GetFloat(165);
if (temp_11 > temp_8)
{
return false;
}
MY_14 = MY;
MY_14.SetFloat(213,0f);
MY_17 = MY;
MY_17.SetFloat(165,-0.05f);
MY_20 = MY;
MY_20.SetFloat(169,0f);
MY_23 = MY;
MY_23.SetAcknexObject(189,null);
return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_5;
IAcknexObject MY_7;
float temp_8;
IAcknexObject MY_10;
float temp_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject MY_23;
}
public class ACTORJUMPSTOP : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public ACTORJUMPSTOP() {
  }
 public ACTORJUMPSTOP(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(169);
MY_5 = MY;
MY_5.SetFloat(169,temp_3 + -0.1f);
MY_7 = MY;
temp_8 =MY_7.GetFloat(200);
MY_10 = MY;
temp_11 =MY_10.GetFloat(165);
if (temp_11 > temp_8)
{
return false;
}
MY_14 = MY;
MY_14.SetFloat(213,0f);
MY_17 = MY;
MY_17.SetFloat(165,-0.05f);
MY_20 = MY;
MY_20.SetFloat(169,0f);
MY_23 = MY;
temp_24 =MY_23.GetFloat(168);
MY_26 = MY;
MY_26.SetFloat(168,temp_24 + -0.1f);
MY_29 = MY;
temp_30 =MY_29.GetFloat(194);
MY_32 = MY;
MY_32.SetFloat(194,temp_30 + 0.05f);
MY_35 = MY;
temp_36 =MY_35.GetFloat(168);
if (temp_36 > 0.1f)
{
return false;
}
MY_39 = MY;
MY_39.SetAcknexObject(189,null);
MY_42 = MY;
MY_42.SetFloat(168,0f);
MY_45 = MY;
MY_45.SetFloat(207,0f);
MY_48 = MY;
MY_48.SetAcknexObject(199,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_5;
IAcknexObject MY_7;
float temp_8;
IAcknexObject MY_10;
float temp_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject MY_23;
float temp_24;
IAcknexObject MY_26;
IAcknexObject MY_29;
float temp_30;
IAcknexObject MY_32;
IAcknexObject MY_35;
float temp_36;
IAcknexObject MY_39;
IAcknexObject MY_42;
IAcknexObject MY_45;
IAcknexObject MY_48;
}
public class TURNLEFT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TURNLEFT() {
  }
 public TURNLEFT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(194);
MY_5 = MY;
MY_5.SetFloat(194,temp_3 + 0.524f);
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_5;
}
public class TURNRIGHT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TURNRIGHT() {
  }
 public TURNRIGHT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(194);
MY_5 = MY;
MY_5.SetFloat(194,temp_3 + -0.524f);
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_5;
}
public class SHOWAMMO : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SHOWAMMO() {
  }
 public SHOWAMMO(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
WEAPONSEL_1 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_1_val = WEAPONSEL_1.GetFloat(PropertyName.VAL);
if (WEAPONSEL_1_val == 1f)
{
AMMO_3 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_3.SetFloat(231,0f);
}
WEAPONSEL_5 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_5_val = WEAPONSEL_5.GetFloat(PropertyName.VAL);
if (WEAPONSEL_5_val == 2f)
{
AMMO_MP5_6 = _world.GetObject(ObjectType.Skill,1494668136);
AMMO_MP5_6_val = AMMO_MP5_6.GetFloat(PropertyName.VAL);
AMMO_7 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_7.SetFloat(231,AMMO_MP5_6_val);
}
WEAPONSEL_9 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_9_val = WEAPONSEL_9.GetFloat(PropertyName.VAL);
if (WEAPONSEL_9_val == 3f)
{
AMMO_GRANADE_10 = _world.GetObject(ObjectType.Skill,3603202376);
AMMO_GRANADE_10_val = AMMO_GRANADE_10.GetFloat(PropertyName.VAL);
AMMO_11 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_11.SetFloat(231,AMMO_GRANADE_10_val);
}
WEAPONSEL_13 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_13_val = WEAPONSEL_13.GetFloat(PropertyName.VAL);
if (WEAPONSEL_13_val == 4f)
{
AMMO_STINGER_14 = _world.GetObject(ObjectType.Skill,2008713554);
AMMO_STINGER_14_val = AMMO_STINGER_14.GetFloat(PropertyName.VAL);
AMMO_15 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_15.SetFloat(231,AMMO_STINGER_14_val);
}
WEAPONSEL_17 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_17_val = WEAPONSEL_17.GetFloat(PropertyName.VAL);
if (WEAPONSEL_17_val == 5f)
{
AMMO_QUANTUM_18 = _world.GetObject(ObjectType.Skill,3750407617);
AMMO_QUANTUM_18_val = AMMO_QUANTUM_18.GetFloat(PropertyName.VAL);
AMMO_19 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_19.SetFloat(231,AMMO_QUANTUM_18_val);
}
//Unknown keyword: 
      return false;
  }
IAcknexObject WEAPONSEL_1;
float WEAPONSEL_1_val;
IAcknexObject AMMO_3;
IAcknexObject WEAPONSEL_5;
float WEAPONSEL_5_val;
IAcknexObject AMMO_MP5_6;
float AMMO_MP5_6_val;
IAcknexObject AMMO_7;
IAcknexObject WEAPONSEL_9;
float WEAPONSEL_9_val;
IAcknexObject AMMO_GRANADE_10;
float AMMO_GRANADE_10_val;
IAcknexObject AMMO_11;
IAcknexObject WEAPONSEL_13;
float WEAPONSEL_13_val;
IAcknexObject AMMO_STINGER_14;
float AMMO_STINGER_14_val;
IAcknexObject AMMO_15;
IAcknexObject WEAPONSEL_17;
float WEAPONSEL_17_val;
IAcknexObject AMMO_QUANTUM_18;
float AMMO_QUANTUM_18_val;
IAcknexObject AMMO_19;
}
public class DECAMMO : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DECAMMO() {
  }
 public DECAMMO(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
WEAPONSEL_1 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_1_val = WEAPONSEL_1.GetFloat(PropertyName.VAL);
if (WEAPONSEL_1_val == 1f)
{
AMMO_3 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_3.SetFloat(231,0f);
}
WEAPONSEL_5 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_5_val = WEAPONSEL_5.GetFloat(PropertyName.VAL);
if (WEAPONSEL_5_val == 2f)
{
AMMO_6 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_6_val = AMMO_6.GetFloat(PropertyName.VAL);
AMMO_MP5_7 = _world.GetObject(ObjectType.Skill,1494668136);
AMMO_MP5_7.SetFloat(231,AMMO_6_val);
}
WEAPONSEL_9 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_9_val = WEAPONSEL_9.GetFloat(PropertyName.VAL);
if (WEAPONSEL_9_val == 3f)
{
AMMO_10 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_10_val = AMMO_10.GetFloat(PropertyName.VAL);
AMMO_GRANADE_11 = _world.GetObject(ObjectType.Skill,3603202376);
AMMO_GRANADE_11.SetFloat(231,AMMO_10_val);
}
WEAPONSEL_13 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_13_val = WEAPONSEL_13.GetFloat(PropertyName.VAL);
if (WEAPONSEL_13_val == 4f)
{
AMMO_14 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_14_val = AMMO_14.GetFloat(PropertyName.VAL);
AMMO_STINGER_15 = _world.GetObject(ObjectType.Skill,2008713554);
AMMO_STINGER_15.SetFloat(231,AMMO_14_val);
}
WEAPONSEL_17 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_17_val = WEAPONSEL_17.GetFloat(PropertyName.VAL);
if (WEAPONSEL_17_val == 5f)
{
AMMO_18 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_18_val = AMMO_18.GetFloat(PropertyName.VAL);
AMMO_QUANTUM_19 = _world.GetObject(ObjectType.Skill,3750407617);
AMMO_QUANTUM_19.SetFloat(231,AMMO_18_val);
}
//Unknown keyword: 
      return false;
  }
IAcknexObject WEAPONSEL_1;
float WEAPONSEL_1_val;
IAcknexObject AMMO_3;
IAcknexObject WEAPONSEL_5;
float WEAPONSEL_5_val;
IAcknexObject AMMO_6;
float AMMO_6_val;
IAcknexObject AMMO_MP5_7;
IAcknexObject WEAPONSEL_9;
float WEAPONSEL_9_val;
IAcknexObject AMMO_10;
float AMMO_10_val;
IAcknexObject AMMO_GRANADE_11;
IAcknexObject WEAPONSEL_13;
float WEAPONSEL_13_val;
IAcknexObject AMMO_14;
float AMMO_14_val;
IAcknexObject AMMO_STINGER_15;
IAcknexObject WEAPONSEL_17;
float WEAPONSEL_17_val;
IAcknexObject AMMO_18;
float AMMO_18_val;
IAcknexObject AMMO_QUANTUM_19;
}
public class INNOCENTKILLED : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public INNOCENTKILLED() {
  }
 public INNOCENTKILLED(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
INNOCENTS_1 = _world.GetObject(ObjectType.Skill,1460750270);
INNOCENTS_1_val = INNOCENTS_1.GetFloat(PropertyName.VAL);
if (INNOCENTS_1_val > 2f)
{
return false;
}
INNOCENTS_3 = _world.GetObject(ObjectType.Skill,1460750270);
INNOCENTS_3_val = INNOCENTS_3.GetFloat(PropertyName.VAL);
INNOCENTS_4 = _world.GetObject(ObjectType.Skill,1460750270);
INNOCENTS_4.SetFloat(231,INNOCENTS_3_val + 1f);
INNOCENTS_6 = _world.GetObject(ObjectType.Skill,1460750270);
INNOCENTS_6_val = INNOCENTS_6.GetFloat(PropertyName.VAL);
if (INNOCENTS_6_val < 3f)
{
return false;
}

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)320f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PLAYER_HEALTH_9 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_9_val = PLAYER_HEALTH_9.GetFloat(PropertyName.VAL);
if (PLAYER_HEALTH_9_val > 5f)
{
goto CONT;
}
INNOCENTS_11 = _world.GetObject(ObjectType.Skill,1460750270);
INNOCENTS_11.SetFloat(231,2f);
return false;
CONT:
END01STR_12 = _world.AcknexObject.GetAcknexObject(1070587678);
_world.SetSynonymObject(3892409159,END01STR_12);
{
            var enumerator = new SHOWPDAGAMEOVER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject INNOCENTS_1;
float INNOCENTS_1_val;
IAcknexObject INNOCENTS_3;
float INNOCENTS_3_val;
IAcknexObject INNOCENTS_4;
IAcknexObject INNOCENTS_6;
float INNOCENTS_6_val;
float startTime1;
float endTime1;
IAcknexObject PLAYER_HEALTH_9;
float PLAYER_HEALTH_9_val;
IAcknexObject INNOCENTS_11;
IAcknexObject END01STR_12;
}
public class DRILLHOLE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DRILLHOLE() {
  }
 public DRILLHOLE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(175);
if (temp_3 == 0f)
{
return false;
}
MY_6 = MY;
MY_6.SetFloat(175,0f);
MY_8 = MY;
temp_9 =MY_8?.GetAcknexObject(164);
_world.SetSynonymObject(3254537347,temp_9);
HOLEX_11 = _world.GetObject(ObjectType.Skill,222463693);
HOLEX_12 = _world.GetObject(ObjectType.Skill,222463693);
HOLEX_12_val = HOLEX_12.GetFloat(PropertyName.VAL);
HIT_X_13 = _world.GetObject(ObjectType.Skill,448);
HIT_X_13_val = HIT_X_13.GetFloat(PropertyName.VAL);
MY_TEX_19 = _world.GetSynonymObject(3254537347);
temp_20 =MY_TEX_19.GetFloat(275);
HOLEX_11.SetFloat(231,HIT_X_13_val-(5f*temp_20/48f));
HOLEY_24 = _world.GetObject(ObjectType.Skill,222463694);
HOLEY_25 = _world.GetObject(ObjectType.Skill,222463694);
HOLEY_25_val = HOLEY_25.GetFloat(PropertyName.VAL);
HIT_Y_26 = _world.GetObject(ObjectType.Skill,449);
HIT_Y_26_val = HIT_Y_26.GetFloat(PropertyName.VAL);
MY_TEX_32 = _world.GetSynonymObject(3254537347);
temp_33 =MY_TEX_32.GetFloat(276);
HOLEY_24.SetFloat(231,HIT_Y_26_val-(5f*temp_33/48f));
MY_TEX_38 = _world.GetSynonymObject(3254537347);
temp_39 =MY_TEX_38.GetFloat(276);
DISTY_40 = _world.GetObject(ObjectType.Skill,217512506);
DISTY_40.SetFloat(231,temp_39);
MY_43 = MY;
temp_44 =MY_43?.GetAcknexObject(166);
if (temp_44 != null)
{
goto SECOND;
}
MHL01TEX_45 = _world.AcknexObject.GetAcknexObject(3869925632);
MY_47 = MY;
MY_47.SetAcknexObject(166,MHL01TEX_45);
MY_49 = MY;
temp_50 =MY_49?.GetAcknexObject(166);
_world.SetSynonymObject(3254537347,temp_50);
MY_TEX_54 = _world.GetSynonymObject(3254537347);
MY_TEX_54.SetAcknexObject(166,null);
LAST:
MY_TEX_56 = _world.GetSynonymObject(3254537347);
MY_TEX_58 = _world.GetSynonymObject(3254537347);
temp_59 =MY_TEX_58.GetFloat(225);
HOLEX_60 = _world.GetObject(ObjectType.Skill,222463693);
HOLEX_60_val = HOLEX_60.GetFloat(PropertyName.VAL);
MY_TEX_56.SetFloat(225,HOLEX_60_val);
MY_TEX_62 = _world.GetSynonymObject(3254537347);
MY_TEX_64 = _world.GetSynonymObject(3254537347);
temp_65 =MY_TEX_64.GetFloat(226);
HOLEY_66 = _world.GetObject(ObjectType.Skill,222463694);
HOLEY_66_val = HOLEY_66.GetFloat(PropertyName.VAL);
MY_TEX_62.SetFloat(226,HOLEY_66_val);
return false;
SECOND:
MY_68 = MY;
temp_69 =MY_68?.GetAcknexObject(166);
_world.SetSynonymObject(3254537347,temp_69);
MY_TEX_73 = _world.GetSynonymObject(3254537347);
temp_74 =MY_TEX_73?.GetAcknexObject(166);
if (temp_74 != null)
{
goto THIRD;
}
MHL02TEX_75 = _world.AcknexObject.GetAcknexObject(3869961569);
MY_TEX_77 = _world.GetSynonymObject(3254537347);
MY_TEX_77.SetAcknexObject(166,MHL02TEX_75);
MY_TEX_79 = _world.GetSynonymObject(3254537347);
temp_80 =MY_TEX_79?.GetAcknexObject(166);
_world.SetSynonymObject(3254537347,temp_80);
MY_TEX_84 = _world.GetSynonymObject(3254537347);
MY_TEX_84.SetAcknexObject(166,null);
MY_TEX_86 = _world.GetSynonymObject(3254537347);
MY_TEX_88 = _world.GetSynonymObject(3254537347);
temp_89 =MY_TEX_88.GetFloat(225);
HOLEX_90 = _world.GetObject(ObjectType.Skill,222463693);
HOLEX_90_val = HOLEX_90.GetFloat(PropertyName.VAL);
MY_TEX_86.SetFloat(225,HOLEX_90_val);
MY_TEX_92 = _world.GetSynonymObject(3254537347);
MY_TEX_94 = _world.GetSynonymObject(3254537347);
temp_95 =MY_TEX_94.GetFloat(226);
HOLEY_96 = _world.GetObject(ObjectType.Skill,222463694);
HOLEY_96_val = HOLEY_96.GetFloat(PropertyName.VAL);
MY_TEX_92.SetFloat(226,HOLEY_96_val);
return false;
THIRD:
MY_TEX_98 = _world.GetSynonymObject(3254537347);
temp_99 =MY_TEX_98?.GetAcknexObject(166);
_world.SetSynonymObject(3254537347,temp_99);
MY_TEX_103 = _world.GetSynonymObject(3254537347);
temp_104 =MY_TEX_103?.GetAcknexObject(166);
if (temp_104 != null)
{
goto FOURTH;
}
MHL03TEX_105 = _world.AcknexObject.GetAcknexObject(3869997506);
MY_TEX_107 = _world.GetSynonymObject(3254537347);
MY_TEX_107.SetAcknexObject(166,MHL03TEX_105);
MY_TEX_109 = _world.GetSynonymObject(3254537347);
temp_110 =MY_TEX_109?.GetAcknexObject(166);
_world.SetSynonymObject(3254537347,temp_110);
MY_TEX_114 = _world.GetSynonymObject(3254537347);
MY_TEX_114.SetAcknexObject(166,null);
MY_TEX_116 = _world.GetSynonymObject(3254537347);
MY_TEX_118 = _world.GetSynonymObject(3254537347);
temp_119 =MY_TEX_118.GetFloat(225);
HOLEX_120 = _world.GetObject(ObjectType.Skill,222463693);
HOLEX_120_val = HOLEX_120.GetFloat(PropertyName.VAL);
MY_TEX_116.SetFloat(225,HOLEX_120_val);
MY_TEX_122 = _world.GetSynonymObject(3254537347);
MY_TEX_124 = _world.GetSynonymObject(3254537347);
temp_125 =MY_TEX_124.GetFloat(226);
HOLEY_126 = _world.GetObject(ObjectType.Skill,222463694);
HOLEY_126_val = HOLEY_126.GetFloat(PropertyName.VAL);
MY_TEX_122.SetFloat(226,HOLEY_126_val);
return false;
FOURTH:
MY_TEX_128 = _world.GetSynonymObject(3254537347);
temp_129 =MY_TEX_128?.GetAcknexObject(166);
_world.SetSynonymObject(3254537347,temp_129);
MY_TEX_133 = _world.GetSynonymObject(3254537347);
temp_134 =MY_TEX_133?.GetAcknexObject(166);
if (temp_134 != null)
{
goto FIFTH;
}
MHL04TEX_135 = _world.AcknexObject.GetAcknexObject(3870033443);
MY_TEX_137 = _world.GetSynonymObject(3254537347);
MY_TEX_137.SetAcknexObject(166,MHL04TEX_135);
MY_TEX_139 = _world.GetSynonymObject(3254537347);
temp_140 =MY_TEX_139?.GetAcknexObject(166);
_world.SetSynonymObject(3254537347,temp_140);
MY_TEX_144 = _world.GetSynonymObject(3254537347);
MY_TEX_144.SetAcknexObject(166,null);
MY_TEX_146 = _world.GetSynonymObject(3254537347);
MY_TEX_148 = _world.GetSynonymObject(3254537347);
temp_149 =MY_TEX_148.GetFloat(225);
HOLEX_150 = _world.GetObject(ObjectType.Skill,222463693);
HOLEX_150_val = HOLEX_150.GetFloat(PropertyName.VAL);
MY_TEX_146.SetFloat(225,HOLEX_150_val);
MY_TEX_152 = _world.GetSynonymObject(3254537347);
MY_TEX_154 = _world.GetSynonymObject(3254537347);
temp_155 =MY_TEX_154.GetFloat(226);
HOLEY_156 = _world.GetObject(ObjectType.Skill,222463694);
HOLEY_156_val = HOLEY_156.GetFloat(PropertyName.VAL);
MY_TEX_152.SetFloat(226,HOLEY_156_val);
return false;
FIFTH:
MY_TEX_158 = _world.GetSynonymObject(3254537347);
temp_159 =MY_TEX_158?.GetAcknexObject(166);
_world.SetSynonymObject(3254537347,temp_159);
MY_TEX_163 = _world.GetSynonymObject(3254537347);
temp_164 =MY_TEX_163?.GetAcknexObject(166);
if (temp_164 != null)
{
goto SIXTH;
}
MHL05TEX_165 = _world.AcknexObject.GetAcknexObject(3870069380);
MY_TEX_167 = _world.GetSynonymObject(3254537347);
MY_TEX_167.SetAcknexObject(166,MHL05TEX_165);
MY_TEX_169 = _world.GetSynonymObject(3254537347);
temp_170 =MY_TEX_169?.GetAcknexObject(166);
_world.SetSynonymObject(3254537347,temp_170);
MY_TEX_174 = _world.GetSynonymObject(3254537347);
MY_TEX_174.SetAcknexObject(166,null);
MY_TEX_176 = _world.GetSynonymObject(3254537347);
MY_TEX_178 = _world.GetSynonymObject(3254537347);
temp_179 =MY_TEX_178.GetFloat(225);
HOLEX_180 = _world.GetObject(ObjectType.Skill,222463693);
HOLEX_180_val = HOLEX_180.GetFloat(PropertyName.VAL);
MY_TEX_176.SetFloat(225,HOLEX_180_val);
MY_TEX_182 = _world.GetSynonymObject(3254537347);
MY_TEX_184 = _world.GetSynonymObject(3254537347);
temp_185 =MY_TEX_184.GetFloat(226);
HOLEY_186 = _world.GetObject(ObjectType.Skill,222463694);
HOLEY_186_val = HOLEY_186.GetFloat(PropertyName.VAL);
MY_TEX_182.SetFloat(226,HOLEY_186_val);
return false;
SIXTH:
MY_TEX_188 = _world.GetSynonymObject(3254537347);
temp_189 =MY_TEX_188?.GetAcknexObject(166);
_world.SetSynonymObject(3254537347,temp_189);
MY_TEX_193 = _world.GetSynonymObject(3254537347);
temp_194 =MY_TEX_193?.GetAcknexObject(166);
if (temp_194 != null)
{
goto SEVENTH;
}
MHL06TEX_195 = _world.AcknexObject.GetAcknexObject(3870105317);
MY_TEX_197 = _world.GetSynonymObject(3254537347);
MY_TEX_197.SetAcknexObject(166,MHL06TEX_195);
MY_TEX_199 = _world.GetSynonymObject(3254537347);
temp_200 =MY_TEX_199?.GetAcknexObject(166);
_world.SetSynonymObject(3254537347,temp_200);
MY_TEX_204 = _world.GetSynonymObject(3254537347);
MY_TEX_204.SetAcknexObject(166,null);
MY_TEX_206 = _world.GetSynonymObject(3254537347);
MY_TEX_208 = _world.GetSynonymObject(3254537347);
temp_209 =MY_TEX_208.GetFloat(225);
HOLEX_210 = _world.GetObject(ObjectType.Skill,222463693);
HOLEX_210_val = HOLEX_210.GetFloat(PropertyName.VAL);
MY_TEX_206.SetFloat(225,HOLEX_210_val);
MY_TEX_212 = _world.GetSynonymObject(3254537347);
MY_TEX_214 = _world.GetSynonymObject(3254537347);
temp_215 =MY_TEX_214.GetFloat(226);
HOLEY_216 = _world.GetObject(ObjectType.Skill,222463694);
HOLEY_216_val = HOLEY_216.GetFloat(PropertyName.VAL);
MY_TEX_212.SetFloat(226,HOLEY_216_val);
return false;
SEVENTH:
MY_TEX_218 = _world.GetSynonymObject(3254537347);
temp_219 =MY_TEX_218?.GetAcknexObject(166);
_world.SetSynonymObject(3254537347,temp_219);
MY_TEX_223 = _world.GetSynonymObject(3254537347);
temp_224 =MY_TEX_223?.GetAcknexObject(166);
if (temp_224 != null)
{
goto EIGHTH;
}
MHL07TEX_225 = _world.AcknexObject.GetAcknexObject(3870141254);
MY_TEX_227 = _world.GetSynonymObject(3254537347);
MY_TEX_227.SetAcknexObject(166,MHL07TEX_225);
MY_TEX_229 = _world.GetSynonymObject(3254537347);
temp_230 =MY_TEX_229?.GetAcknexObject(166);
_world.SetSynonymObject(3254537347,temp_230);
MY_TEX_234 = _world.GetSynonymObject(3254537347);
MY_TEX_234.SetAcknexObject(166,null);
MY_TEX_236 = _world.GetSynonymObject(3254537347);
MY_TEX_238 = _world.GetSynonymObject(3254537347);
temp_239 =MY_TEX_238.GetFloat(225);
HOLEX_240 = _world.GetObject(ObjectType.Skill,222463693);
HOLEX_240_val = HOLEX_240.GetFloat(PropertyName.VAL);
MY_TEX_236.SetFloat(225,HOLEX_240_val);
MY_TEX_242 = _world.GetSynonymObject(3254537347);
MY_TEX_244 = _world.GetSynonymObject(3254537347);
temp_245 =MY_TEX_244.GetFloat(226);
HOLEY_246 = _world.GetObject(ObjectType.Skill,222463694);
HOLEY_246_val = HOLEY_246.GetFloat(PropertyName.VAL);
MY_TEX_242.SetFloat(226,HOLEY_246_val);
return false;
EIGHTH:
MY_TEX_248 = _world.GetSynonymObject(3254537347);
temp_249 =MY_TEX_248?.GetAcknexObject(166);
_world.SetSynonymObject(3254537347,temp_249);
MY_TEX_253 = _world.GetSynonymObject(3254537347);
temp_254 =MY_TEX_253?.GetAcknexObject(166);
if (temp_254 != null)
{
goto NINETH;
}
MHL08TEX_255 = _world.AcknexObject.GetAcknexObject(3870177191);
MY_TEX_257 = _world.GetSynonymObject(3254537347);
MY_TEX_257.SetAcknexObject(166,MHL08TEX_255);
MY_TEX_259 = _world.GetSynonymObject(3254537347);
temp_260 =MY_TEX_259?.GetAcknexObject(166);
_world.SetSynonymObject(3254537347,temp_260);
MY_TEX_264 = _world.GetSynonymObject(3254537347);
MY_TEX_264.SetAcknexObject(166,null);
MY_TEX_266 = _world.GetSynonymObject(3254537347);
MY_TEX_268 = _world.GetSynonymObject(3254537347);
temp_269 =MY_TEX_268.GetFloat(225);
HOLEX_270 = _world.GetObject(ObjectType.Skill,222463693);
HOLEX_270_val = HOLEX_270.GetFloat(PropertyName.VAL);
MY_TEX_266.SetFloat(225,HOLEX_270_val);
MY_TEX_272 = _world.GetSynonymObject(3254537347);
MY_TEX_274 = _world.GetSynonymObject(3254537347);
temp_275 =MY_TEX_274.GetFloat(226);
HOLEY_276 = _world.GetObject(ObjectType.Skill,222463694);
HOLEY_276_val = HOLEY_276.GetFloat(PropertyName.VAL);
MY_TEX_272.SetFloat(226,HOLEY_276_val);
return false;
NINETH:
MY_TEX_278 = _world.GetSynonymObject(3254537347);
temp_279 =MY_TEX_278?.GetAcknexObject(166);
_world.SetSynonymObject(3254537347,temp_279);
MY_TEX_283 = _world.GetSynonymObject(3254537347);
temp_284 =MY_TEX_283?.GetAcknexObject(166);
if (temp_284 != null)
{
goto TENTH;
}
MHL09TEX_285 = _world.AcknexObject.GetAcknexObject(3870213128);
MY_TEX_287 = _world.GetSynonymObject(3254537347);
MY_TEX_287.SetAcknexObject(166,MHL09TEX_285);
MY_TEX_289 = _world.GetSynonymObject(3254537347);
temp_290 =MY_TEX_289?.GetAcknexObject(166);
_world.SetSynonymObject(3254537347,temp_290);
MY_TEX_294 = _world.GetSynonymObject(3254537347);
MY_TEX_294.SetAcknexObject(166,null);
MY_TEX_296 = _world.GetSynonymObject(3254537347);
MY_TEX_298 = _world.GetSynonymObject(3254537347);
temp_299 =MY_TEX_298.GetFloat(225);
HOLEX_300 = _world.GetObject(ObjectType.Skill,222463693);
HOLEX_300_val = HOLEX_300.GetFloat(PropertyName.VAL);
MY_TEX_296.SetFloat(225,HOLEX_300_val);
MY_TEX_302 = _world.GetSynonymObject(3254537347);
MY_TEX_304 = _world.GetSynonymObject(3254537347);
temp_305 =MY_TEX_304.GetFloat(226);
HOLEY_306 = _world.GetObject(ObjectType.Skill,222463694);
HOLEY_306_val = HOLEY_306.GetFloat(PropertyName.VAL);
MY_TEX_302.SetFloat(226,HOLEY_306_val);
return false;
TENTH:
MY_TEX_308 = _world.GetSynonymObject(3254537347);
temp_309 =MY_TEX_308?.GetAcknexObject(166);
_world.SetSynonymObject(3254537347,temp_309);
MY_TEX_313 = _world.GetSynonymObject(3254537347);
temp_314 =MY_TEX_313?.GetAcknexObject(166);
if (temp_314 != null)
{
goto LAST;
}
MHL10TEX_315 = _world.AcknexObject.GetAcknexObject(3871075616);
MY_TEX_317 = _world.GetSynonymObject(3254537347);
MY_TEX_317.SetAcknexObject(166,MHL10TEX_315);
MY_TEX_319 = _world.GetSynonymObject(3254537347);
temp_320 =MY_TEX_319?.GetAcknexObject(166);
_world.SetSynonymObject(3254537347,temp_320);
MY_TEX_324 = _world.GetSynonymObject(3254537347);
MY_TEX_324.SetAcknexObject(166,null);
MY_TEX_326 = _world.GetSynonymObject(3254537347);
MY_TEX_328 = _world.GetSynonymObject(3254537347);
temp_329 =MY_TEX_328.GetFloat(225);
HOLEX_330 = _world.GetObject(ObjectType.Skill,222463693);
HOLEX_330_val = HOLEX_330.GetFloat(PropertyName.VAL);
MY_TEX_326.SetFloat(225,HOLEX_330_val);
MY_TEX_332 = _world.GetSynonymObject(3254537347);
MY_TEX_334 = _world.GetSynonymObject(3254537347);
temp_335 =MY_TEX_334.GetFloat(226);
HOLEY_336 = _world.GetObject(ObjectType.Skill,222463694);
HOLEY_336_val = HOLEY_336.GetFloat(PropertyName.VAL);
MY_TEX_332.SetFloat(226,HOLEY_336_val);
return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_6;
IAcknexObject MY_8;
IAcknexObject temp_9;
IAcknexObject HOLEX_11;
IAcknexObject HOLEX_12;
float HOLEX_12_val;
IAcknexObject HIT_X_13;
float HIT_X_13_val;
IAcknexObject MY_TEX_19;
float temp_20;
IAcknexObject HOLEY_24;
IAcknexObject HOLEY_25;
float HOLEY_25_val;
IAcknexObject HIT_Y_26;
float HIT_Y_26_val;
IAcknexObject MY_TEX_32;
float temp_33;
IAcknexObject MY_TEX_38;
float temp_39;
IAcknexObject DISTY_40;
IAcknexObject MY_43;
IAcknexObject temp_44;
IAcknexObject MHL01TEX_45;
IAcknexObject MY_47;
IAcknexObject MY_49;
IAcknexObject temp_50;
IAcknexObject MY_TEX_54;
IAcknexObject MY_TEX_56;
IAcknexObject MY_TEX_58;
float temp_59;
IAcknexObject HOLEX_60;
float HOLEX_60_val;
IAcknexObject MY_TEX_62;
IAcknexObject MY_TEX_64;
float temp_65;
IAcknexObject HOLEY_66;
float HOLEY_66_val;
IAcknexObject MY_68;
IAcknexObject temp_69;
IAcknexObject MY_TEX_73;
IAcknexObject temp_74;
IAcknexObject MHL02TEX_75;
IAcknexObject MY_TEX_77;
IAcknexObject MY_TEX_79;
IAcknexObject temp_80;
IAcknexObject MY_TEX_84;
IAcknexObject MY_TEX_86;
IAcknexObject MY_TEX_88;
float temp_89;
IAcknexObject HOLEX_90;
float HOLEX_90_val;
IAcknexObject MY_TEX_92;
IAcknexObject MY_TEX_94;
float temp_95;
IAcknexObject HOLEY_96;
float HOLEY_96_val;
IAcknexObject MY_TEX_98;
IAcknexObject temp_99;
IAcknexObject MY_TEX_103;
IAcknexObject temp_104;
IAcknexObject MHL03TEX_105;
IAcknexObject MY_TEX_107;
IAcknexObject MY_TEX_109;
IAcknexObject temp_110;
IAcknexObject MY_TEX_114;
IAcknexObject MY_TEX_116;
IAcknexObject MY_TEX_118;
float temp_119;
IAcknexObject HOLEX_120;
float HOLEX_120_val;
IAcknexObject MY_TEX_122;
IAcknexObject MY_TEX_124;
float temp_125;
IAcknexObject HOLEY_126;
float HOLEY_126_val;
IAcknexObject MY_TEX_128;
IAcknexObject temp_129;
IAcknexObject MY_TEX_133;
IAcknexObject temp_134;
IAcknexObject MHL04TEX_135;
IAcknexObject MY_TEX_137;
IAcknexObject MY_TEX_139;
IAcknexObject temp_140;
IAcknexObject MY_TEX_144;
IAcknexObject MY_TEX_146;
IAcknexObject MY_TEX_148;
float temp_149;
IAcknexObject HOLEX_150;
float HOLEX_150_val;
IAcknexObject MY_TEX_152;
IAcknexObject MY_TEX_154;
float temp_155;
IAcknexObject HOLEY_156;
float HOLEY_156_val;
IAcknexObject MY_TEX_158;
IAcknexObject temp_159;
IAcknexObject MY_TEX_163;
IAcknexObject temp_164;
IAcknexObject MHL05TEX_165;
IAcknexObject MY_TEX_167;
IAcknexObject MY_TEX_169;
IAcknexObject temp_170;
IAcknexObject MY_TEX_174;
IAcknexObject MY_TEX_176;
IAcknexObject MY_TEX_178;
float temp_179;
IAcknexObject HOLEX_180;
float HOLEX_180_val;
IAcknexObject MY_TEX_182;
IAcknexObject MY_TEX_184;
float temp_185;
IAcknexObject HOLEY_186;
float HOLEY_186_val;
IAcknexObject MY_TEX_188;
IAcknexObject temp_189;
IAcknexObject MY_TEX_193;
IAcknexObject temp_194;
IAcknexObject MHL06TEX_195;
IAcknexObject MY_TEX_197;
IAcknexObject MY_TEX_199;
IAcknexObject temp_200;
IAcknexObject MY_TEX_204;
IAcknexObject MY_TEX_206;
IAcknexObject MY_TEX_208;
float temp_209;
IAcknexObject HOLEX_210;
float HOLEX_210_val;
IAcknexObject MY_TEX_212;
IAcknexObject MY_TEX_214;
float temp_215;
IAcknexObject HOLEY_216;
float HOLEY_216_val;
IAcknexObject MY_TEX_218;
IAcknexObject temp_219;
IAcknexObject MY_TEX_223;
IAcknexObject temp_224;
IAcknexObject MHL07TEX_225;
IAcknexObject MY_TEX_227;
IAcknexObject MY_TEX_229;
IAcknexObject temp_230;
IAcknexObject MY_TEX_234;
IAcknexObject MY_TEX_236;
IAcknexObject MY_TEX_238;
float temp_239;
IAcknexObject HOLEX_240;
float HOLEX_240_val;
IAcknexObject MY_TEX_242;
IAcknexObject MY_TEX_244;
float temp_245;
IAcknexObject HOLEY_246;
float HOLEY_246_val;
IAcknexObject MY_TEX_248;
IAcknexObject temp_249;
IAcknexObject MY_TEX_253;
IAcknexObject temp_254;
IAcknexObject MHL08TEX_255;
IAcknexObject MY_TEX_257;
IAcknexObject MY_TEX_259;
IAcknexObject temp_260;
IAcknexObject MY_TEX_264;
IAcknexObject MY_TEX_266;
IAcknexObject MY_TEX_268;
float temp_269;
IAcknexObject HOLEX_270;
float HOLEX_270_val;
IAcknexObject MY_TEX_272;
IAcknexObject MY_TEX_274;
float temp_275;
IAcknexObject HOLEY_276;
float HOLEY_276_val;
IAcknexObject MY_TEX_278;
IAcknexObject temp_279;
IAcknexObject MY_TEX_283;
IAcknexObject temp_284;
IAcknexObject MHL09TEX_285;
IAcknexObject MY_TEX_287;
IAcknexObject MY_TEX_289;
IAcknexObject temp_290;
IAcknexObject MY_TEX_294;
IAcknexObject MY_TEX_296;
IAcknexObject MY_TEX_298;
float temp_299;
IAcknexObject HOLEX_300;
float HOLEX_300_val;
IAcknexObject MY_TEX_302;
IAcknexObject MY_TEX_304;
float temp_305;
IAcknexObject HOLEY_306;
float HOLEY_306_val;
IAcknexObject MY_TEX_308;
IAcknexObject temp_309;
IAcknexObject MY_TEX_313;
IAcknexObject temp_314;
IAcknexObject MHL10TEX_315;
IAcknexObject MY_TEX_317;
IAcknexObject MY_TEX_319;
IAcknexObject temp_320;
IAcknexObject MY_TEX_324;
IAcknexObject MY_TEX_326;
IAcknexObject MY_TEX_328;
float temp_329;
IAcknexObject HOLEX_330;
float HOLEX_330_val;
IAcknexObject MY_TEX_332;
IAcknexObject MY_TEX_334;
float temp_335;
IAcknexObject HOLEY_336;
float HOLEY_336_val;
}
public class SHOWMAINMENU : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SHOWMAINMENU() {
  }
 public SHOWMAINMENU(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
WAITING:

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)1f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
temp_3 =_world.AcknexObject?.GetAcknexObject(40);
if (temp_3 == null)
{
goto WAITING;
}
GUNFIRING_5 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_5_val = GUNFIRING_5.GetFloat(PropertyName.VAL);
if (GUNFIRING_5_val == 1f)
{
goto WAITING;
}
BLACK_6 = _world.AcknexObject.GetAcknexObject(215228298);
_world.FadePal(BLACK_6,0.4f);
BIP03SND_8 = _world.AcknexObject.GetAcknexObject(371601456);
_world.PlaySound(BIP03SND_8,0.5f, null);
HIDEMENU_10 = _world.AcknexObject.GetAcknexObject(2235387612);
_world.AcknexObject.SetAcknexObject(82,HIDEMENU_10);
MOVE_MODE_13 = _world.GetObject(ObjectType.Skill,362);
MOVE_MODE_13.SetFloat(231,-0.5f);
MAXMENUITEM_15 = _world.GetObject(ObjectType.Skill,2770297815);
MAXMENUITEM_15.SetFloat(231,4f);
MENUUP_16 = _world.AcknexObject.GetAcknexObject(3230209607);
_world.AcknexObject.SetAcknexObject(105,MENUUP_16);
MENUDOWN_18 = _world.AcknexObject.GetAcknexObject(118349530);
_world.AcknexObject.SetAcknexObject(106,MENUDOWN_18);
MENUUP_20 = _world.AcknexObject.GetAcknexObject(3230209607);
_world.AcknexObject.SetAcknexObject(107,MENUUP_20);
MENUDOWN_22 = _world.AcknexObject.GetAcknexObject(118349530);
_world.AcknexObject.SetAcknexObject(108,MENUDOWN_22);
{
            var enumerator = new HIDEWEAPON();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }CHOOSESUBMENU_24 = _world.AcknexObject.GetAcknexObject(2424356781);
_world.AcknexObject.SetAcknexObject(81,CHOOSESUBMENU_24);
MENUPANEL_26 = _world.AcknexObject.GetAcknexObject(3919220402);
_world.AcknexObject.SetAcknexObject(145,MENUPANEL_26);
MAINMENUTEXT_29 = _world.AcknexObject.GetAcknexObject(514908524);
_world.AcknexObject.SetAcknexObject(129,MAINMENUTEXT_29);
HLP01STR_32 = _world.AcknexObject.GetAcknexObject(2258553803);
_world.SetSynonymObject(361798934,HLP01STR_32);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
float startTime1;
float endTime1;
IAcknexObject temp_3;
IAcknexObject GUNFIRING_5;
float GUNFIRING_5_val;
IAcknexObject BLACK_6;
IAcknexObject BIP03SND_8;
IAcknexObject HIDEMENU_10;
IAcknexObject MOVE_MODE_13;
IAcknexObject MAXMENUITEM_15;
IAcknexObject MENUUP_16;
IAcknexObject MENUDOWN_18;
IAcknexObject MENUUP_20;
IAcknexObject MENUDOWN_22;
IAcknexObject CHOOSESUBMENU_24;
IAcknexObject MENUPANEL_26;
IAcknexObject MAINMENUTEXT_29;
IAcknexObject HLP01STR_32;
}
public class SHOWSAVEMENU : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SHOWSAVEMENU() {
  }
 public SHOWSAVEMENU(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
HIDEMENU_0 = _world.AcknexObject.GetAcknexObject(2235387612);
_world.AcknexObject.SetAcknexObject(82,HIDEMENU_0);
MOVE_MODE_3 = _world.GetObject(ObjectType.Skill,362);
MOVE_MODE_3.SetFloat(231,-0.5f);
MAXMENUITEM_5 = _world.GetObject(ObjectType.Skill,2770297815);
MAXMENUITEM_5.SetFloat(231,4f);
SUBMENUUP_6 = _world.AcknexObject.GetAcknexObject(3112081393);
_world.AcknexObject.SetAcknexObject(105,SUBMENUUP_6);
SUBMENUDOWN_8 = _world.AcknexObject.GetAcknexObject(325743364);
_world.AcknexObject.SetAcknexObject(106,SUBMENUDOWN_8);
SUBMENUUP_10 = _world.AcknexObject.GetAcknexObject(3112081393);
_world.AcknexObject.SetAcknexObject(107,SUBMENUUP_10);
SUBMENUDOWN_12 = _world.AcknexObject.GetAcknexObject(325743364);
_world.AcknexObject.SetAcknexObject(108,SUBMENUDOWN_12);
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
BIP02SND_14 = _world.AcknexObject.GetAcknexObject(371565519);
_world.PlaySound(BIP02SND_14,0.5f, null);
LOADSAVETEXT_18 = _world.AcknexObject.GetAcknexObject(4073210305);
LOADSAVETEXT_18.SetFloat(295,1f);
SAVEDGAME01_19 = _world.AcknexObject.GetAcknexObject(462276091);
LOADSAVETEXT_21 = _world.AcknexObject.GetAcknexObject(4073210305);
LOADSAVETEXT_21_array = LOADSAVETEXT_21.GetObject<List<IAcknexObject>>(293);
LOADSAVETEXT_21_index = LOADSAVETEXT_21.GetInteger(PropertyName.INDEX);
LOADSAVETEXT_21_array[LOADSAVETEXT_21_index-1] = SAVEDGAME01_19;
LOADSAVETEXT_21.IsDirty = true;
LOADSAVETEXT_24 = _world.AcknexObject.GetAcknexObject(4073210305);
LOADSAVETEXT_24.SetFloat(295,2f);
SAVEDGAME02_25 = _world.AcknexObject.GetAcknexObject(462276092);
LOADSAVETEXT_27 = _world.AcknexObject.GetAcknexObject(4073210305);
LOADSAVETEXT_27_array = LOADSAVETEXT_27.GetObject<List<IAcknexObject>>(293);
LOADSAVETEXT_27_index = LOADSAVETEXT_27.GetInteger(PropertyName.INDEX);
LOADSAVETEXT_27_array[LOADSAVETEXT_27_index-1] = SAVEDGAME02_25;
LOADSAVETEXT_27.IsDirty = true;
LOADSAVETEXT_30 = _world.AcknexObject.GetAcknexObject(4073210305);
LOADSAVETEXT_30.SetFloat(295,3f);
SAVEDGAME03_31 = _world.AcknexObject.GetAcknexObject(462276093);
LOADSAVETEXT_33 = _world.AcknexObject.GetAcknexObject(4073210305);
LOADSAVETEXT_33_array = LOADSAVETEXT_33.GetObject<List<IAcknexObject>>(293);
LOADSAVETEXT_33_index = LOADSAVETEXT_33.GetInteger(PropertyName.INDEX);
LOADSAVETEXT_33_array[LOADSAVETEXT_33_index-1] = SAVEDGAME03_31;
LOADSAVETEXT_33.IsDirty = true;
LOADSAVETEXT_36 = _world.AcknexObject.GetAcknexObject(4073210305);
LOADSAVETEXT_36.SetFloat(295,4f);
SAVEDGAME04_37 = _world.AcknexObject.GetAcknexObject(462276094);
LOADSAVETEXT_39 = _world.AcknexObject.GetAcknexObject(4073210305);
LOADSAVETEXT_39_array = LOADSAVETEXT_39.GetObject<List<IAcknexObject>>(293);
LOADSAVETEXT_39_index = LOADSAVETEXT_39.GetInteger(PropertyName.INDEX);
LOADSAVETEXT_39_array[LOADSAVETEXT_39_index-1] = SAVEDGAME04_37;
LOADSAVETEXT_39.IsDirty = true;
TYPEGAME_40 = _world.AcknexObject.GetAcknexObject(2213650825);
_world.AcknexObject.SetAcknexObject(81,TYPEGAME_40);
SUBMENUPANEL_42 = _world.AcknexObject.GetAcknexObject(2173282332);
_world.AcknexObject.SetAcknexObject(145,SUBMENUPANEL_42);
LOADSAVETEXT_45 = _world.AcknexObject.GetAcknexObject(4073210305);
_world.AcknexObject.SetAcknexObject(129,LOADSAVETEXT_45);
HLP01STR_48 = _world.AcknexObject.GetAcknexObject(2258553803);
_world.SetSynonymObject(361798934,HLP01STR_48);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject HIDEMENU_0;
IAcknexObject MOVE_MODE_3;
IAcknexObject MAXMENUITEM_5;
IAcknexObject SUBMENUUP_6;
IAcknexObject SUBMENUDOWN_8;
IAcknexObject SUBMENUUP_10;
IAcknexObject SUBMENUDOWN_12;
IAcknexObject BIP02SND_14;
IAcknexObject LOADSAVETEXT_18;
IAcknexObject SAVEDGAME01_19;
IAcknexObject LOADSAVETEXT_21;
List<IAcknexObject> LOADSAVETEXT_21_array;
int LOADSAVETEXT_21_index;
IAcknexObject LOADSAVETEXT_24;
IAcknexObject SAVEDGAME02_25;
IAcknexObject LOADSAVETEXT_27;
List<IAcknexObject> LOADSAVETEXT_27_array;
int LOADSAVETEXT_27_index;
IAcknexObject LOADSAVETEXT_30;
IAcknexObject SAVEDGAME03_31;
IAcknexObject LOADSAVETEXT_33;
List<IAcknexObject> LOADSAVETEXT_33_array;
int LOADSAVETEXT_33_index;
IAcknexObject LOADSAVETEXT_36;
IAcknexObject SAVEDGAME04_37;
IAcknexObject LOADSAVETEXT_39;
List<IAcknexObject> LOADSAVETEXT_39_array;
int LOADSAVETEXT_39_index;
IAcknexObject TYPEGAME_40;
IAcknexObject SUBMENUPANEL_42;
IAcknexObject LOADSAVETEXT_45;
IAcknexObject HLP01STR_48;
}
public class SHOWLOADMENU : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SHOWLOADMENU() {
  }
 public SHOWLOADMENU(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
HIDEMENU_0 = _world.AcknexObject.GetAcknexObject(2235387612);
_world.AcknexObject.SetAcknexObject(82,HIDEMENU_0);
MOVE_MODE_3 = _world.GetObject(ObjectType.Skill,362);
MOVE_MODE_3.SetFloat(231,-0.5f);
MAXMENUITEM_5 = _world.GetObject(ObjectType.Skill,2770297815);
MAXMENUITEM_5.SetFloat(231,4f);
SUBMENUUP_6 = _world.AcknexObject.GetAcknexObject(3112081393);
_world.AcknexObject.SetAcknexObject(105,SUBMENUUP_6);
SUBMENUDOWN_8 = _world.AcknexObject.GetAcknexObject(325743364);
_world.AcknexObject.SetAcknexObject(106,SUBMENUDOWN_8);
SUBMENUUP_10 = _world.AcknexObject.GetAcknexObject(3112081393);
_world.AcknexObject.SetAcknexObject(107,SUBMENUUP_10);
SUBMENUDOWN_12 = _world.AcknexObject.GetAcknexObject(325743364);
_world.AcknexObject.SetAcknexObject(108,SUBMENUDOWN_12);
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
BIP02SND_14 = _world.AcknexObject.GetAcknexObject(371565519);
_world.PlaySound(BIP02SND_14,0.5f, null);
LOADSAVETEXT_18 = _world.AcknexObject.GetAcknexObject(4073210305);
LOADSAVETEXT_18.SetFloat(295,1f);
SAVEDGAME01_19 = _world.AcknexObject.GetAcknexObject(462276091);
LOADSAVETEXT_21 = _world.AcknexObject.GetAcknexObject(4073210305);
LOADSAVETEXT_21_array = LOADSAVETEXT_21.GetObject<List<IAcknexObject>>(293);
LOADSAVETEXT_21_index = LOADSAVETEXT_21.GetInteger(PropertyName.INDEX);
LOADSAVETEXT_21_array[LOADSAVETEXT_21_index-1] = SAVEDGAME01_19;
LOADSAVETEXT_21.IsDirty = true;
LOADSAVETEXT_24 = _world.AcknexObject.GetAcknexObject(4073210305);
LOADSAVETEXT_24.SetFloat(295,2f);
SAVEDGAME02_25 = _world.AcknexObject.GetAcknexObject(462276092);
LOADSAVETEXT_27 = _world.AcknexObject.GetAcknexObject(4073210305);
LOADSAVETEXT_27_array = LOADSAVETEXT_27.GetObject<List<IAcknexObject>>(293);
LOADSAVETEXT_27_index = LOADSAVETEXT_27.GetInteger(PropertyName.INDEX);
LOADSAVETEXT_27_array[LOADSAVETEXT_27_index-1] = SAVEDGAME02_25;
LOADSAVETEXT_27.IsDirty = true;
LOADSAVETEXT_30 = _world.AcknexObject.GetAcknexObject(4073210305);
LOADSAVETEXT_30.SetFloat(295,3f);
SAVEDGAME03_31 = _world.AcknexObject.GetAcknexObject(462276093);
LOADSAVETEXT_33 = _world.AcknexObject.GetAcknexObject(4073210305);
LOADSAVETEXT_33_array = LOADSAVETEXT_33.GetObject<List<IAcknexObject>>(293);
LOADSAVETEXT_33_index = LOADSAVETEXT_33.GetInteger(PropertyName.INDEX);
LOADSAVETEXT_33_array[LOADSAVETEXT_33_index-1] = SAVEDGAME03_31;
LOADSAVETEXT_33.IsDirty = true;
LOADSAVETEXT_36 = _world.AcknexObject.GetAcknexObject(4073210305);
LOADSAVETEXT_36.SetFloat(295,4f);
SAVEDGAME04_37 = _world.AcknexObject.GetAcknexObject(462276094);
LOADSAVETEXT_39 = _world.AcknexObject.GetAcknexObject(4073210305);
LOADSAVETEXT_39_array = LOADSAVETEXT_39.GetObject<List<IAcknexObject>>(293);
LOADSAVETEXT_39_index = LOADSAVETEXT_39.GetInteger(PropertyName.INDEX);
LOADSAVETEXT_39_array[LOADSAVETEXT_39_index-1] = SAVEDGAME04_37;
LOADSAVETEXT_39.IsDirty = true;
CHOOSEGAME_40 = _world.AcknexObject.GetAcknexObject(2006969512);
_world.AcknexObject.SetAcknexObject(81,CHOOSEGAME_40);
SUBMENUPANEL_42 = _world.AcknexObject.GetAcknexObject(2173282332);
_world.AcknexObject.SetAcknexObject(145,SUBMENUPANEL_42);
LOADSAVETEXT_45 = _world.AcknexObject.GetAcknexObject(4073210305);
_world.AcknexObject.SetAcknexObject(129,LOADSAVETEXT_45);
HLP01STR_48 = _world.AcknexObject.GetAcknexObject(2258553803);
_world.SetSynonymObject(361798934,HLP01STR_48);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject HIDEMENU_0;
IAcknexObject MOVE_MODE_3;
IAcknexObject MAXMENUITEM_5;
IAcknexObject SUBMENUUP_6;
IAcknexObject SUBMENUDOWN_8;
IAcknexObject SUBMENUUP_10;
IAcknexObject SUBMENUDOWN_12;
IAcknexObject BIP02SND_14;
IAcknexObject LOADSAVETEXT_18;
IAcknexObject SAVEDGAME01_19;
IAcknexObject LOADSAVETEXT_21;
List<IAcknexObject> LOADSAVETEXT_21_array;
int LOADSAVETEXT_21_index;
IAcknexObject LOADSAVETEXT_24;
IAcknexObject SAVEDGAME02_25;
IAcknexObject LOADSAVETEXT_27;
List<IAcknexObject> LOADSAVETEXT_27_array;
int LOADSAVETEXT_27_index;
IAcknexObject LOADSAVETEXT_30;
IAcknexObject SAVEDGAME03_31;
IAcknexObject LOADSAVETEXT_33;
List<IAcknexObject> LOADSAVETEXT_33_array;
int LOADSAVETEXT_33_index;
IAcknexObject LOADSAVETEXT_36;
IAcknexObject SAVEDGAME04_37;
IAcknexObject LOADSAVETEXT_39;
List<IAcknexObject> LOADSAVETEXT_39_array;
int LOADSAVETEXT_39_index;
IAcknexObject CHOOSEGAME_40;
IAcknexObject SUBMENUPANEL_42;
IAcknexObject LOADSAVETEXT_45;
IAcknexObject HLP01STR_48;
}
public class SHOWSOUNDVOLUMEMENU : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SHOWSOUNDVOLUMEMENU() {
  }
 public SHOWSOUNDVOLUMEMENU(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
BIP02SND_0 = _world.AcknexObject.GetAcknexObject(371565519);
_world.PlaySound(BIP02SND_0,0.5f, null);
HIDEMENU_2 = _world.AcknexObject.GetAcknexObject(2235387612);
_world.AcknexObject.SetAcknexObject(82,HIDEMENU_2);
MOVE_MODE_5 = _world.GetObject(ObjectType.Skill,362);
MOVE_MODE_5.SetFloat(231,-0.5f);
MAXMENUITEM_7 = _world.GetObject(ObjectType.Skill,2770297815);
MAXMENUITEM_7.SetFloat(231,3f);
SUBMENUUP_8 = _world.AcknexObject.GetAcknexObject(3112081393);
_world.AcknexObject.SetAcknexObject(105,SUBMENUUP_8);
SUBMENUDOWN_10 = _world.AcknexObject.GetAcknexObject(325743364);
_world.AcknexObject.SetAcknexObject(106,SUBMENUDOWN_10);
VOLUMEUP_12 = _world.AcknexObject.GetAcknexObject(1384066474);
_world.AcknexObject.SetAcknexObject(107,VOLUMEUP_12);
VOLUMEDOWN_14 = _world.AcknexObject.GetAcknexObject(4008139517);
_world.AcknexObject.SetAcknexObject(108,VOLUMEDOWN_14);
HIDEMENU_16 = _world.AcknexObject.GetAcknexObject(2235387612);
_world.AcknexObject.SetAcknexObject(81,HIDEMENU_16);
SOUNDVOLUMEPANEL_18 = _world.AcknexObject.GetAcknexObject(3543679582);
_world.AcknexObject.SetAcknexObject(145,SOUNDVOLUMEPANEL_18);
SOUNDVOLUMETEXT_21 = _world.AcknexObject.GetAcknexObject(1018587315);
_world.AcknexObject.SetAcknexObject(129,SOUNDVOLUMETEXT_21);
HLP01STR_24 = _world.AcknexObject.GetAcknexObject(2258553803);
_world.SetSynonymObject(361798934,HLP01STR_24);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject BIP02SND_0;
IAcknexObject HIDEMENU_2;
IAcknexObject MOVE_MODE_5;
IAcknexObject MAXMENUITEM_7;
IAcknexObject SUBMENUUP_8;
IAcknexObject SUBMENUDOWN_10;
IAcknexObject VOLUMEUP_12;
IAcknexObject VOLUMEDOWN_14;
IAcknexObject HIDEMENU_16;
IAcknexObject SOUNDVOLUMEPANEL_18;
IAcknexObject SOUNDVOLUMETEXT_21;
IAcknexObject HLP01STR_24;
}
public class HIDEMENU : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public HIDEMENU() {
  }
 public HIDEMENU(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
_world.AcknexObject.SetAcknexObject(145,null);
_world.AcknexObject.SetAcknexObject(129,null);
SHOWMAINMENU_6 = _world.AcknexObject.GetAcknexObject(3665306792);
_world.AcknexObject.SetAcknexObject(82,SHOWMAINMENU_6);
_world.AcknexObject.SetAcknexObject(105,null);
_world.AcknexObject.SetAcknexObject(106,null);
_world.AcknexObject.SetAcknexObject(107,null);
_world.AcknexObject.SetAcknexObject(108,null);
UNDERWATER_17 = _world.GetObject(ObjectType.Skill,1369167822);
UNDERWATER_17_val = UNDERWATER_17.GetFloat(PropertyName.VAL);
if (UNDERWATER_17_val == 0f)
{
goto NOWATER;
}
{
            var enumerator = new SET_BLUE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }goto CONT;
NOWATER:
BLACK_18 = _world.AcknexObject.GetAcknexObject(215228298);
_world.FadePal(BLACK_18,0f);
CONT:
{
            var enumerator = new SHOWWEAPON();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MOVE_MODE_21 = _world.GetObject(ObjectType.Skill,362);
MOVE_MODE_21.SetFloat(231,1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject SHOWMAINMENU_6;
IAcknexObject UNDERWATER_17;
float UNDERWATER_17_val;
IAcknexObject BLACK_18;
IAcknexObject MOVE_MODE_21;
}
public class MENUUP : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public MENUUP() {
  }
 public MENUUP(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MENUITEM_1 = _world.GetObject(ObjectType.Skill,118534065);
MENUITEM_1_val = MENUITEM_1.GetFloat(PropertyName.VAL);
MENUITEM_2 = _world.GetObject(ObjectType.Skill,118534065);
MENUITEM_2.SetFloat(231,MENUITEM_1_val + -1f);
MENUITEM_4 = _world.GetObject(ObjectType.Skill,118534065);
MENUITEM_4_val = MENUITEM_4.GetFloat(PropertyName.VAL);
if (MENUITEM_4_val < 1f)
{
MAXMENUITEM_5 = _world.GetObject(ObjectType.Skill,2770297815);
MAXMENUITEM_5_val = MAXMENUITEM_5.GetFloat(PropertyName.VAL);
MENUITEM_6 = _world.GetObject(ObjectType.Skill,118534065);
MENUITEM_6.SetFloat(231,MAXMENUITEM_5_val);
}
BIP01SND_7 = _world.AcknexObject.GetAcknexObject(371529582);
_world.PlaySound(BIP01SND_7,0.5f, null);
//Unknown keyword: 
      return false;
  }
IAcknexObject MENUITEM_1;
float MENUITEM_1_val;
IAcknexObject MENUITEM_2;
IAcknexObject MENUITEM_4;
float MENUITEM_4_val;
IAcknexObject MAXMENUITEM_5;
float MAXMENUITEM_5_val;
IAcknexObject MENUITEM_6;
IAcknexObject BIP01SND_7;
}
public class MENUDOWN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public MENUDOWN() {
  }
 public MENUDOWN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MENUITEM_1 = _world.GetObject(ObjectType.Skill,118534065);
MENUITEM_1_val = MENUITEM_1.GetFloat(PropertyName.VAL);
MENUITEM_2 = _world.GetObject(ObjectType.Skill,118534065);
MENUITEM_2.SetFloat(231,MENUITEM_1_val + 1f);
MAXMENUITEM_3 = _world.GetObject(ObjectType.Skill,2770297815);
MAXMENUITEM_3_val = MAXMENUITEM_3.GetFloat(PropertyName.VAL);
MENUITEM_4 = _world.GetObject(ObjectType.Skill,118534065);
MENUITEM_4_val = MENUITEM_4.GetFloat(PropertyName.VAL);
if (MENUITEM_4_val > MAXMENUITEM_3_val)
{
MENUITEM_6 = _world.GetObject(ObjectType.Skill,118534065);
MENUITEM_6.SetFloat(231,1f);
}
BIP01SND_7 = _world.AcknexObject.GetAcknexObject(371529582);
_world.PlaySound(BIP01SND_7,0.5f, null);
//Unknown keyword: 
      return false;
  }
IAcknexObject MENUITEM_1;
float MENUITEM_1_val;
IAcknexObject MENUITEM_2;
IAcknexObject MAXMENUITEM_3;
float MAXMENUITEM_3_val;
IAcknexObject MENUITEM_4;
float MENUITEM_4_val;
IAcknexObject MENUITEM_6;
IAcknexObject BIP01SND_7;
}
public class SUBMENUUP : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SUBMENUUP() {
  }
 public SUBMENUUP(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SUBMENUITEM_1 = _world.GetObject(ObjectType.Skill,325927899);
SUBMENUITEM_1_val = SUBMENUITEM_1.GetFloat(PropertyName.VAL);
SUBMENUITEM_2 = _world.GetObject(ObjectType.Skill,325927899);
SUBMENUITEM_2.SetFloat(231,SUBMENUITEM_1_val + -1f);
SUBMENUITEM_4 = _world.GetObject(ObjectType.Skill,325927899);
SUBMENUITEM_4_val = SUBMENUITEM_4.GetFloat(PropertyName.VAL);
if (SUBMENUITEM_4_val < 1f)
{
MAXMENUITEM_5 = _world.GetObject(ObjectType.Skill,2770297815);
MAXMENUITEM_5_val = MAXMENUITEM_5.GetFloat(PropertyName.VAL);
SUBMENUITEM_6 = _world.GetObject(ObjectType.Skill,325927899);
SUBMENUITEM_6.SetFloat(231,MAXMENUITEM_5_val);
}
BIP01SND_7 = _world.AcknexObject.GetAcknexObject(371529582);
_world.PlaySound(BIP01SND_7,0.5f, null);
//Unknown keyword: 
      return false;
  }
IAcknexObject SUBMENUITEM_1;
float SUBMENUITEM_1_val;
IAcknexObject SUBMENUITEM_2;
IAcknexObject SUBMENUITEM_4;
float SUBMENUITEM_4_val;
IAcknexObject MAXMENUITEM_5;
float MAXMENUITEM_5_val;
IAcknexObject SUBMENUITEM_6;
IAcknexObject BIP01SND_7;
}
public class SUBMENUDOWN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SUBMENUDOWN() {
  }
 public SUBMENUDOWN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SUBMENUITEM_1 = _world.GetObject(ObjectType.Skill,325927899);
SUBMENUITEM_1_val = SUBMENUITEM_1.GetFloat(PropertyName.VAL);
SUBMENUITEM_2 = _world.GetObject(ObjectType.Skill,325927899);
SUBMENUITEM_2.SetFloat(231,SUBMENUITEM_1_val + 1f);
MAXMENUITEM_3 = _world.GetObject(ObjectType.Skill,2770297815);
MAXMENUITEM_3_val = MAXMENUITEM_3.GetFloat(PropertyName.VAL);
SUBMENUITEM_4 = _world.GetObject(ObjectType.Skill,325927899);
SUBMENUITEM_4_val = SUBMENUITEM_4.GetFloat(PropertyName.VAL);
if (SUBMENUITEM_4_val > MAXMENUITEM_3_val)
{
SUBMENUITEM_6 = _world.GetObject(ObjectType.Skill,325927899);
SUBMENUITEM_6.SetFloat(231,1f);
}
BIP01SND_7 = _world.AcknexObject.GetAcknexObject(371529582);
_world.PlaySound(BIP01SND_7,0.5f, null);
//Unknown keyword: 
      return false;
  }
IAcknexObject SUBMENUITEM_1;
float SUBMENUITEM_1_val;
IAcknexObject SUBMENUITEM_2;
IAcknexObject MAXMENUITEM_3;
float MAXMENUITEM_3_val;
IAcknexObject SUBMENUITEM_4;
float SUBMENUITEM_4_val;
IAcknexObject SUBMENUITEM_6;
IAcknexObject BIP01SND_7;
}
public class VOLUMEUP : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public VOLUMEUP() {
  }
 public VOLUMEUP(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SUBMENUITEM_1 = _world.GetObject(ObjectType.Skill,325927899);
SUBMENUITEM_1_val = SUBMENUITEM_1.GetFloat(PropertyName.VAL);
if (SUBMENUITEM_1_val > 2f)
{
goto DIFIC;
}
SUBMENUITEM_3 = _world.GetObject(ObjectType.Skill,325927899);
SUBMENUITEM_3_val = SUBMENUITEM_3.GetFloat(PropertyName.VAL);
if (SUBMENUITEM_3_val > 1f)
{
goto MUSIC;
}
BIP01SND_4 = _world.AcknexObject.GetAcknexObject(371529582);
_world.PlaySound(BIP01SND_4,0.5f, null);
SOUND_VOL_7 = _world.GetObject(ObjectType.Skill,405);
SOUND_VOL_7_val = SOUND_VOL_7.GetFloat(PropertyName.VAL);
if (SOUND_VOL_7_val < 0.96f)
{
SOUND_VOL_9 = _world.GetObject(ObjectType.Skill,405);
SOUND_VOL_9_val = SOUND_VOL_9.GetFloat(PropertyName.VAL);
SOUND_VOL_10 = _world.GetObject(ObjectType.Skill,405);
SOUND_VOL_10.SetFloat(231,SOUND_VOL_9_val + 0.05f);
}
SOUND_VOL_11 = _world.GetObject(ObjectType.Skill,405);
SOUND_VOL_11_val = SOUND_VOL_11.GetFloat(PropertyName.VAL);
SOUND_VOL_BUFFER_12 = _world.GetObject(ObjectType.Skill,299848383);
SOUND_VOL_BUFFER_12.SetFloat(231,SOUND_VOL_11_val);
return false;
MUSIC:
BIP01SND_13 = _world.AcknexObject.GetAcknexObject(371529582);
_world.PlaySound(BIP01SND_13,0.5f, null);
CDAUDIO_VOL_16 = _world.GetObject(ObjectType.Skill,407);
CDAUDIO_VOL_16_val = CDAUDIO_VOL_16.GetFloat(PropertyName.VAL);
if (CDAUDIO_VOL_16_val < 0.96f)
{
CDAUDIO_VOL_18 = _world.GetObject(ObjectType.Skill,407);
CDAUDIO_VOL_18_val = CDAUDIO_VOL_18.GetFloat(PropertyName.VAL);
CDAUDIO_VOL_19 = _world.GetObject(ObjectType.Skill,407);
CDAUDIO_VOL_19.SetFloat(231,CDAUDIO_VOL_18_val + 0.05f);
}
CDAUDIO_VOL_20 = _world.GetObject(ObjectType.Skill,407);
CDAUDIO_VOL_20_val = CDAUDIO_VOL_20.GetFloat(PropertyName.VAL);
CDAUDIO_VOL_BUFFER_21 = _world.GetObject(ObjectType.Skill,2594965391);
CDAUDIO_VOL_BUFFER_21.SetFloat(231,CDAUDIO_VOL_20_val);
return false;
DIFIC:
TOUGHNESS_23 = _world.GetObject(ObjectType.Skill,1295621997);
TOUGHNESS_23_val = TOUGHNESS_23.GetFloat(PropertyName.VAL);
TOUGHNESS_24 = _world.GetObject(ObjectType.Skill,1295621997);
TOUGHNESS_24.SetFloat(231,TOUGHNESS_23_val + 0.1f);
BIP01SND_25 = _world.AcknexObject.GetAcknexObject(371529582);
_world.PlaySound(BIP01SND_25,0.5f, null);
//Unknown keyword: 
      return false;
  }
IAcknexObject SUBMENUITEM_1;
float SUBMENUITEM_1_val;
IAcknexObject SUBMENUITEM_3;
float SUBMENUITEM_3_val;
IAcknexObject BIP01SND_4;
IAcknexObject SOUND_VOL_7;
float SOUND_VOL_7_val;
IAcknexObject SOUND_VOL_9;
float SOUND_VOL_9_val;
IAcknexObject SOUND_VOL_10;
IAcknexObject SOUND_VOL_11;
float SOUND_VOL_11_val;
IAcknexObject SOUND_VOL_BUFFER_12;
IAcknexObject BIP01SND_13;
IAcknexObject CDAUDIO_VOL_16;
float CDAUDIO_VOL_16_val;
IAcknexObject CDAUDIO_VOL_18;
float CDAUDIO_VOL_18_val;
IAcknexObject CDAUDIO_VOL_19;
IAcknexObject CDAUDIO_VOL_20;
float CDAUDIO_VOL_20_val;
IAcknexObject CDAUDIO_VOL_BUFFER_21;
IAcknexObject TOUGHNESS_23;
float TOUGHNESS_23_val;
IAcknexObject TOUGHNESS_24;
IAcknexObject BIP01SND_25;
}
public class VOLUMEDOWN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public VOLUMEDOWN() {
  }
 public VOLUMEDOWN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SUBMENUITEM_1 = _world.GetObject(ObjectType.Skill,325927899);
SUBMENUITEM_1_val = SUBMENUITEM_1.GetFloat(PropertyName.VAL);
if (SUBMENUITEM_1_val > 2f)
{
goto DIFIC;
}
SUBMENUITEM_3 = _world.GetObject(ObjectType.Skill,325927899);
SUBMENUITEM_3_val = SUBMENUITEM_3.GetFloat(PropertyName.VAL);
if (SUBMENUITEM_3_val > 1f)
{
goto MUSIC;
}
BIP01SND_4 = _world.AcknexObject.GetAcknexObject(371529582);
_world.PlaySound(BIP01SND_4,0.5f, null);
SOUND_VOL_7 = _world.GetObject(ObjectType.Skill,405);
SOUND_VOL_7_val = SOUND_VOL_7.GetFloat(PropertyName.VAL);
if (SOUND_VOL_7_val > 0.05f)
{
SOUND_VOL_9 = _world.GetObject(ObjectType.Skill,405);
SOUND_VOL_9_val = SOUND_VOL_9.GetFloat(PropertyName.VAL);
SOUND_VOL_10 = _world.GetObject(ObjectType.Skill,405);
SOUND_VOL_10.SetFloat(231,SOUND_VOL_9_val + -0.05f);
}
SOUND_VOL_11 = _world.GetObject(ObjectType.Skill,405);
SOUND_VOL_11_val = SOUND_VOL_11.GetFloat(PropertyName.VAL);
SOUND_VOL_BUFFER_12 = _world.GetObject(ObjectType.Skill,299848383);
SOUND_VOL_BUFFER_12.SetFloat(231,SOUND_VOL_11_val);
return false;
MUSIC:
BIP01SND_13 = _world.AcknexObject.GetAcknexObject(371529582);
_world.PlaySound(BIP01SND_13,0.5f, null);
CDAUDIO_VOL_16 = _world.GetObject(ObjectType.Skill,407);
CDAUDIO_VOL_16_val = CDAUDIO_VOL_16.GetFloat(PropertyName.VAL);
if (CDAUDIO_VOL_16_val > 0.05f)
{
CDAUDIO_VOL_18 = _world.GetObject(ObjectType.Skill,407);
CDAUDIO_VOL_18_val = CDAUDIO_VOL_18.GetFloat(PropertyName.VAL);
CDAUDIO_VOL_19 = _world.GetObject(ObjectType.Skill,407);
CDAUDIO_VOL_19.SetFloat(231,CDAUDIO_VOL_18_val + -0.05f);
}
CDAUDIO_VOL_20 = _world.GetObject(ObjectType.Skill,407);
CDAUDIO_VOL_20_val = CDAUDIO_VOL_20.GetFloat(PropertyName.VAL);
CDAUDIO_VOL_BUFFER_21 = _world.GetObject(ObjectType.Skill,2594965391);
CDAUDIO_VOL_BUFFER_21.SetFloat(231,CDAUDIO_VOL_20_val);
return false;
DIFIC:
TOUGHNESS_23 = _world.GetObject(ObjectType.Skill,1295621997);
TOUGHNESS_23_val = TOUGHNESS_23.GetFloat(PropertyName.VAL);
TOUGHNESS_24 = _world.GetObject(ObjectType.Skill,1295621997);
TOUGHNESS_24.SetFloat(231,TOUGHNESS_23_val + -0.1f);
BIP01SND_25 = _world.AcknexObject.GetAcknexObject(371529582);
_world.PlaySound(BIP01SND_25,0.5f, null);
//Unknown keyword: 
      return false;
  }
IAcknexObject SUBMENUITEM_1;
float SUBMENUITEM_1_val;
IAcknexObject SUBMENUITEM_3;
float SUBMENUITEM_3_val;
IAcknexObject BIP01SND_4;
IAcknexObject SOUND_VOL_7;
float SOUND_VOL_7_val;
IAcknexObject SOUND_VOL_9;
float SOUND_VOL_9_val;
IAcknexObject SOUND_VOL_10;
IAcknexObject SOUND_VOL_11;
float SOUND_VOL_11_val;
IAcknexObject SOUND_VOL_BUFFER_12;
IAcknexObject BIP01SND_13;
IAcknexObject CDAUDIO_VOL_16;
float CDAUDIO_VOL_16_val;
IAcknexObject CDAUDIO_VOL_18;
float CDAUDIO_VOL_18_val;
IAcknexObject CDAUDIO_VOL_19;
IAcknexObject CDAUDIO_VOL_20;
float CDAUDIO_VOL_20_val;
IAcknexObject CDAUDIO_VOL_BUFFER_21;
IAcknexObject TOUGHNESS_23;
float TOUGHNESS_23_val;
IAcknexObject TOUGHNESS_24;
IAcknexObject BIP01SND_25;
}
public class HIDEWEAPON : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public HIDEWEAPON() {
  }
 public HIDEWEAPON(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
temp_1 =_world.AcknexObject?.GetAcknexObject(97);
_world.SetSynonymObject(3446392348,temp_1);
temp_5 =_world.AcknexObject?.GetAcknexObject(157);
_world.SetSynonymObject(2082126285,temp_5);
temp_9 =_world.AcknexObject?.GetAcknexObject(158);
_world.SetSynonymObject(2082126286,temp_9);
temp_13 =_world.AcknexObject?.GetAcknexObject(161);
_world.SetSynonymObject(2082126289,temp_13);
temp_16 =_world.AcknexObject?.GetAcknexObject(104);
_world.SetSynonymObject(2360103138,temp_16);
temp_19 =_world.AcknexObject?.GetAcknexObject(39);
_world.SetSynonymObject(2359884416,temp_19);
temp_22 =_world.AcknexObject?.GetAcknexObject(40);
_world.SetSynonymObject(2674522018,temp_22);
temp_25 =_world.AcknexObject?.GetAcknexObject(41);
_world.SetSynonymObject(552731872,temp_25);
temp_28 =_world.AcknexObject?.GetAcknexObject(42);
_world.SetSynonymObject(2359635704,temp_28);
temp_31 =_world.AcknexObject?.GetAcknexObject(43);
_world.SetSynonymObject(2360069548,temp_31);
temp_34 =_world.AcknexObject?.GetAcknexObject(44);
_world.SetSynonymObject(2359983755,temp_34);
MAP_MODE_36 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_36_val = MAP_MODE_36.GetFloat(PropertyName.VAL);
MAPMODE_37 = _world.GetObject(ObjectType.Skill,3363205840);
MAPMODE_37.SetFloat(231,MAP_MODE_36_val);
_world.AcknexObject.SetAcknexObject(97,null);
_world.AcknexObject.SetAcknexObject(78,null);
_world.AcknexObject.SetAcknexObject(157,null);
_world.AcknexObject.SetAcknexObject(158,null);
_world.AcknexObject.SetAcknexObject(161,null);
_world.AcknexObject.SetAcknexObject(104,null);
_world.AcknexObject.SetAcknexObject(39,null);
_world.AcknexObject.SetAcknexObject(92,null);
_world.AcknexObject.SetAcknexObject(40,null);
_world.AcknexObject.SetAcknexObject(41,null);
_world.AcknexObject.SetAcknexObject(42,null);
_world.AcknexObject.SetAcknexObject(43,null);
_world.AcknexObject.SetAcknexObject(44,null);
MAP_MODE_68 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_68.SetFloat(231,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject temp_1;
IAcknexObject temp_5;
IAcknexObject temp_9;
IAcknexObject temp_13;
IAcknexObject temp_16;
IAcknexObject temp_19;
IAcknexObject temp_22;
IAcknexObject temp_25;
IAcknexObject temp_28;
IAcknexObject temp_31;
IAcknexObject temp_34;
IAcknexObject MAP_MODE_36;
float MAP_MODE_36_val;
IAcknexObject MAPMODE_37;
IAcknexObject MAP_MODE_68;
}
public class SHOWWEAPON : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SHOWWEAPON() {
  }
 public SHOWWEAPON(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
FIRE_GUN_0 = _world.GetSynonymObject(3446392348);
_world.AcknexObject.SetAcknexObject(97,FIRE_GUN_0);
FIRE_GUN_2 = _world.GetSynonymObject(3446392348);
_world.AcknexObject.SetAcknexObject(78,FIRE_GUN_2);
LAYER12_4 = _world.GetSynonymObject(2082126285);
_world.AcknexObject.SetAcknexObject(157,LAYER12_4);
LAYER13_7 = _world.GetSynonymObject(2082126286);
_world.AcknexObject.SetAcknexObject(158,LAYER13_7);
LAYER16_10 = _world.GetSynonymObject(2082126289);
_world.AcknexObject.SetAcknexObject(161,LAYER16_10);
SEL_TRIC_13 = _world.GetSynonymObject(2360103138);
_world.AcknexObject.SetAcknexObject(104,SEL_TRIC_13);
SEL_NONE_15 = _world.GetSynonymObject(2359884416);
_world.AcknexObject.SetAcknexObject(39,SEL_NONE_15);
SEL_NONE_17 = _world.GetSynonymObject(2359884416);
_world.AcknexObject.SetAcknexObject(92,SEL_NONE_17);
SEL_MP5_19 = _world.GetSynonymObject(2674522018);
_world.AcknexObject.SetAcknexObject(40,SEL_MP5_19);
SEL_BURST_21 = _world.GetSynonymObject(552731872);
_world.AcknexObject.SetAcknexObject(41,SEL_BURST_21);
SEL_GRAN_23 = _world.GetSynonymObject(2359635704);
_world.AcknexObject.SetAcknexObject(42,SEL_GRAN_23);
SEL_STNG_25 = _world.GetSynonymObject(2360069548);
_world.AcknexObject.SetAcknexObject(43,SEL_STNG_25);
SEL_QGUN_27 = _world.GetSynonymObject(2359983755);
_world.AcknexObject.SetAcknexObject(44,SEL_QGUN_27);
MAPMODE_29 = _world.GetObject(ObjectType.Skill,3363205840);
MAPMODE_29_val = MAPMODE_29.GetFloat(PropertyName.VAL);
MAP_MODE_30 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_30.SetFloat(231,MAPMODE_29_val);
//Unknown keyword: 
      return false;
  }
IAcknexObject FIRE_GUN_0;
IAcknexObject FIRE_GUN_2;
IAcknexObject LAYER12_4;
IAcknexObject LAYER13_7;
IAcknexObject LAYER16_10;
IAcknexObject SEL_TRIC_13;
IAcknexObject SEL_NONE_15;
IAcknexObject SEL_NONE_17;
IAcknexObject SEL_MP5_19;
IAcknexObject SEL_BURST_21;
IAcknexObject SEL_GRAN_23;
IAcknexObject SEL_STNG_25;
IAcknexObject SEL_QGUN_27;
IAcknexObject MAPMODE_29;
float MAPMODE_29_val;
IAcknexObject MAP_MODE_30;
}
public class TYPEGAME : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TYPEGAME() {
  }
 public TYPEGAME(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
SUBMENUITEM_1 = _world.GetObject(ObjectType.Skill,325927899);
SUBMENUITEM_1_val = SUBMENUITEM_1.GetFloat(PropertyName.VAL);
if (SUBMENUITEM_1_val < 1f)
{
return false;
}
SUBMENUITEM_3 = _world.GetObject(ObjectType.Skill,325927899);
SUBMENUITEM_3_val = SUBMENUITEM_3.GetFloat(PropertyName.VAL);
if (SUBMENUITEM_3_val > 4f)
{
return false;
}
BIP02SND_4 = _world.AcknexObject.GetAcknexObject(371565519);
_world.PlaySound(BIP02SND_4,0.5f, null);
_world.AcknexObject.SetAcknexObject(81,null);
temp_9 =_world.AcknexObject?.GetAcknexObject(82);
_world.SetSynonymObject(223318999,temp_9);
_world.AcknexObject.SetAcknexObject(82,null);
HERE_14 = _world.GetSynonymObject(703);
temp_15 =HERE_14?.GetAcknexObject(236);
_world.SetSynonymObject(3158079557,temp_15);
LIFTSOUND_19 = _world.GetSynonymObject(3158079557);
LIFTSOUND_19.SetFloat(285,0f);
MOVE_MODE_21 = _world.GetObject(ObjectType.Skill,362);
MOVE_MODE_21.SetFloat(231,0f);
SUBMENUITEM_23 = _world.GetObject(ObjectType.Skill,325927899);
SUBMENUITEM_23_val = SUBMENUITEM_23.GetFloat(PropertyName.VAL);
if (SUBMENUITEM_23_val == 1f)
{
SAVEDGAME01_24 = _world.AcknexObject.GetAcknexObject(462276091);
_world.ReadInkey(SAVEDGAME01_24);
}
SUBMENUITEM_26 = _world.GetObject(ObjectType.Skill,325927899);
SUBMENUITEM_26_val = SUBMENUITEM_26.GetFloat(PropertyName.VAL);
if (SUBMENUITEM_26_val == 2f)
{
SAVEDGAME02_27 = _world.AcknexObject.GetAcknexObject(462276092);
_world.ReadInkey(SAVEDGAME02_27);
}
SUBMENUITEM_29 = _world.GetObject(ObjectType.Skill,325927899);
SUBMENUITEM_29_val = SUBMENUITEM_29.GetFloat(PropertyName.VAL);
if (SUBMENUITEM_29_val == 3f)
{
SAVEDGAME03_30 = _world.AcknexObject.GetAcknexObject(462276093);
_world.ReadInkey(SAVEDGAME03_30);
}
SUBMENUITEM_32 = _world.GetObject(ObjectType.Skill,325927899);
SUBMENUITEM_32_val = SUBMENUITEM_32.GetFloat(PropertyName.VAL);
if (SUBMENUITEM_32_val == 4f)
{
SAVEDGAME04_33 = _world.AcknexObject.GetAcknexObject(462276094);
_world.ReadInkey(SAVEDGAME04_33);
}
IFESC_34 = _world.GetSynonymObject(223318999);
_world.AcknexObject.SetAcknexObject(82,IFESC_34);
RESULT_37 = _world.GetObject(ObjectType.Skill,446);
RESULT_37_val = RESULT_37.GetFloat(PropertyName.VAL);
if (RESULT_37_val < 0f)
{
{
            var enumerator = new SAVEERRORMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
//Unknown keyword: PLAY_CD

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)16f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
//Unknown keyword: SAVE_INFO
_world.AcknexObject.SetAcknexObject(145,null);
_world.AcknexObject.SetAcknexObject(129,null);
SHOWMAINMENU_45 = _world.AcknexObject.GetAcknexObject(3665306792);
_world.AcknexObject.SetAcknexObject(82,SHOWMAINMENU_45);
_world.AcknexObject.SetAcknexObject(105,null);
_world.AcknexObject.SetAcknexObject(106,null);
_world.AcknexObject.SetAcknexObject(107,null);
_world.AcknexObject.SetAcknexObject(108,null);
FIRE_GUN_55 = _world.GetSynonymObject(3446392348);
_world.AcknexObject.SetAcknexObject(97,FIRE_GUN_55);
FIRE_GUN_57 = _world.GetSynonymObject(3446392348);
_world.AcknexObject.SetAcknexObject(78,FIRE_GUN_57);
LAYER12_59 = _world.GetSynonymObject(2082126285);
_world.AcknexObject.SetAcknexObject(157,LAYER12_59);
LAYER13_62 = _world.GetSynonymObject(2082126286);
_world.AcknexObject.SetAcknexObject(158,LAYER13_62);
LAYER16_65 = _world.GetSynonymObject(2082126289);
_world.AcknexObject.SetAcknexObject(161,LAYER16_65);
SEL_TRIC_68 = _world.GetSynonymObject(2360103138);
_world.AcknexObject.SetAcknexObject(104,SEL_TRIC_68);
SEL_NONE_70 = _world.GetSynonymObject(2359884416);
_world.AcknexObject.SetAcknexObject(39,SEL_NONE_70);
SEL_MP5_72 = _world.GetSynonymObject(2674522018);
_world.AcknexObject.SetAcknexObject(40,SEL_MP5_72);
SEL_BURST_74 = _world.GetSynonymObject(552731872);
_world.AcknexObject.SetAcknexObject(41,SEL_BURST_74);
SEL_GRAN_76 = _world.GetSynonymObject(2359635704);
_world.AcknexObject.SetAcknexObject(42,SEL_GRAN_76);
SEL_STNG_78 = _world.GetSynonymObject(2360069548);
_world.AcknexObject.SetAcknexObject(43,SEL_STNG_78);
SEL_QGUN_80 = _world.GetSynonymObject(2359983755);
_world.AcknexObject.SetAcknexObject(44,SEL_QGUN_80);
MAPMODE_82 = _world.GetObject(ObjectType.Skill,3363205840);
MAPMODE_82_val = MAPMODE_82.GetFloat(PropertyName.VAL);
MAP_MODE_83 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_83.SetFloat(231,MAPMODE_82_val);
SECCOUNTER_85 = _world.GetObject(ObjectType.Skill,2748572712);
SECCOUNTER_85.SetFloat(231,0f);
MOVE_MODE_87 = _world.GetObject(ObjectType.Skill,362);
MOVE_MODE_87.SetFloat(231,1f);
BLACK_88 = _world.AcknexObject.GetAcknexObject(215228298);
_world.FadePal(BLACK_88,0f);
//Unknown keyword: SAVE
//Unknown keyword: 
      return false;
  }
IAcknexObject SUBMENUITEM_1;
float SUBMENUITEM_1_val;
IAcknexObject SUBMENUITEM_3;
float SUBMENUITEM_3_val;
IAcknexObject BIP02SND_4;
IAcknexObject temp_9;
IAcknexObject HERE_14;
IAcknexObject temp_15;
IAcknexObject LIFTSOUND_19;
IAcknexObject MOVE_MODE_21;
IAcknexObject SUBMENUITEM_23;
float SUBMENUITEM_23_val;
IAcknexObject SAVEDGAME01_24;
IAcknexObject SUBMENUITEM_26;
float SUBMENUITEM_26_val;
IAcknexObject SAVEDGAME02_27;
IAcknexObject SUBMENUITEM_29;
float SUBMENUITEM_29_val;
IAcknexObject SAVEDGAME03_30;
IAcknexObject SUBMENUITEM_32;
float SUBMENUITEM_32_val;
IAcknexObject SAVEDGAME04_33;
IAcknexObject IFESC_34;
IAcknexObject RESULT_37;
float RESULT_37_val;
float startTime1;
float endTime1;
IAcknexObject SHOWMAINMENU_45;
IAcknexObject FIRE_GUN_55;
IAcknexObject FIRE_GUN_57;
IAcknexObject LAYER12_59;
IAcknexObject LAYER13_62;
IAcknexObject LAYER16_65;
IAcknexObject SEL_TRIC_68;
IAcknexObject SEL_NONE_70;
IAcknexObject SEL_MP5_72;
IAcknexObject SEL_BURST_74;
IAcknexObject SEL_GRAN_76;
IAcknexObject SEL_STNG_78;
IAcknexObject SEL_QGUN_80;
IAcknexObject MAPMODE_82;
float MAPMODE_82_val;
IAcknexObject MAP_MODE_83;
IAcknexObject SECCOUNTER_85;
IAcknexObject MOVE_MODE_87;
IAcknexObject BLACK_88;
}
public class CHOOSEGAME : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CHOOSEGAME() {
  }
 public CHOOSEGAME(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
SUBMENUITEM_1 = _world.GetObject(ObjectType.Skill,325927899);
SUBMENUITEM_1_val = SUBMENUITEM_1.GetFloat(PropertyName.VAL);
if (SUBMENUITEM_1_val < 1f)
{
return false;
}
SUBMENUITEM_3 = _world.GetObject(ObjectType.Skill,325927899);
SUBMENUITEM_3_val = SUBMENUITEM_3.GetFloat(PropertyName.VAL);
if (SUBMENUITEM_3_val > 4f)
{
return false;
}
BIP02SND_4 = _world.AcknexObject.GetAcknexObject(371565519);
_world.PlaySound(BIP02SND_4,0.5f, null);
_world.AcknexObject.SetAcknexObject(81,null);
{
            var enumerator = new HIDEMENU();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MOVE_MODE_9 = _world.GetObject(ObjectType.Skill,362);
MOVE_MODE_9.SetFloat(231,0f);
//Unknown keyword: PLAY_CD

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)16f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
//Unknown keyword: LOAD
//Unknown keyword: 
      return false;
  }
IAcknexObject SUBMENUITEM_1;
float SUBMENUITEM_1_val;
IAcknexObject SUBMENUITEM_3;
float SUBMENUITEM_3_val;
IAcknexObject BIP02SND_4;
IAcknexObject MOVE_MODE_9;
float startTime1;
float endTime1;
}
public class CHOOSESUBMENU : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CHOOSESUBMENU() {
  }
 public CHOOSESUBMENU(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MENUITEM_1 = _world.GetObject(ObjectType.Skill,118534065);
MENUITEM_1_val = MENUITEM_1.GetFloat(PropertyName.VAL);
if (MENUITEM_1_val < 1f)
{
return false;
}
MENUITEM_3 = _world.GetObject(ObjectType.Skill,118534065);
MENUITEM_3_val = MENUITEM_3.GetFloat(PropertyName.VAL);
if (MENUITEM_3_val > 4f)
{
return false;
}
_world.AcknexObject.SetAcknexObject(81,null);
MENUITEM_7 = _world.GetObject(ObjectType.Skill,118534065);
MENUITEM_7_val = MENUITEM_7.GetFloat(PropertyName.VAL);
if (MENUITEM_7_val == 1f)
{
{
            var enumerator = new SHOWSOUNDVOLUMEMENU();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MENUITEM_9 = _world.GetObject(ObjectType.Skill,118534065);
MENUITEM_9_val = MENUITEM_9.GetFloat(PropertyName.VAL);
if (MENUITEM_9_val == 2f)
{
{
            var enumerator = new SHOWSAVEMENU();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MENUITEM_11 = _world.GetObject(ObjectType.Skill,118534065);
MENUITEM_11_val = MENUITEM_11.GetFloat(PropertyName.VAL);
if (MENUITEM_11_val == 3f)
{
{
            var enumerator = new SHOWLOADMENU();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MENUITEM_13 = _world.GetObject(ObjectType.Skill,118534065);
MENUITEM_13_val = MENUITEM_13.GetFloat(PropertyName.VAL);
if (MENUITEM_13_val == 4f)
{
{
            var enumerator = new ASKFOREXIT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
//Unknown keyword: 
      return false;
  }
IAcknexObject MENUITEM_1;
float MENUITEM_1_val;
IAcknexObject MENUITEM_3;
float MENUITEM_3_val;
IAcknexObject MENUITEM_7;
float MENUITEM_7_val;
IAcknexObject MENUITEM_9;
float MENUITEM_9_val;
IAcknexObject MENUITEM_11;
float MENUITEM_11_val;
IAcknexObject MENUITEM_13;
float MENUITEM_13_val;
}
public class SAVEERRORMESSAGE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SAVEERRORMESSAGE() {
  }
 public SAVEERRORMESSAGE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)2f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
//Unknown keyword: 
      return false;
  }
float startTime1;
float endTime1;
}
public class EXITGAME : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public EXITGAME() {
  }
 public EXITGAME(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
MOVE_MODE_1 = _world.GetObject(ObjectType.Skill,362);
MOVE_MODE_1.SetFloat(231,1f);
//Unknown keyword: PLAY_CD

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)16f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
Application.Quit();
//Unknown keyword: 
      return false;
  }
IAcknexObject MOVE_MODE_1;
float startTime1;
float endTime1;
}
public class RESETANSWER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public RESETANSWER() {
  }
 public RESETANSWER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
BIP02SND_0 = _world.AcknexObject.GetAcknexObject(371565519);
_world.PlaySound(BIP02SND_0,0.5f, null);
_world.AcknexObject.SetAcknexObject(37,null);
_world.AcknexObject.SetAcknexObject(66,null);
{
            var enumerator = new HIDEMENU();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject BIP02SND_0;
}
public class ASKFOREXIT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public ASKFOREXIT() {
  }
 public ASKFOREXIT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
BIP03SND_0 = _world.AcknexObject.GetAcknexObject(371601456);
_world.PlaySound(BIP03SND_0,0.5f, null);
ASKFOREXITTEXT_2 = _world.AcknexObject.GetAcknexObject(91537234);
_world.AcknexObject.SetAcknexObject(129,ASKFOREXITTEXT_2);
_world.AcknexObject.SetAcknexObject(105,null);
_world.AcknexObject.SetAcknexObject(106,null);
_world.AcknexObject.SetAcknexObject(107,null);
_world.AcknexObject.SetAcknexObject(108,null);
EXITGAME_13 = _world.AcknexObject.GetAcknexObject(1339506369);
_world.AcknexObject.SetAcknexObject(66,EXITGAME_13);
EXITGAME_15 = _world.AcknexObject.GetAcknexObject(1339506369);
_world.AcknexObject.SetAcknexObject(71,EXITGAME_15);
RESETANSWER_17 = _world.AcknexObject.GetAcknexObject(192524992);
_world.AcknexObject.SetAcknexObject(61,RESETANSWER_17);
HLP02STR_19 = _world.AcknexObject.GetAcknexObject(2258589740);
_world.SetSynonymObject(361798934,HLP02STR_19);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject BIP03SND_0;
IAcknexObject ASKFOREXITTEXT_2;
IAcknexObject EXITGAME_13;
IAcknexObject EXITGAME_15;
IAcknexObject RESETANSWER_17;
IAcknexObject HLP02STR_19;
}
public class ENDOFLEVEL : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public ENDOFLEVEL() {
  }
 public ENDOFLEVEL(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
     }
MOVE_MODE_1 = _world.GetObject(ObjectType.Skill,362);
MOVE_MODE_1.SetFloat(231,1f);
BLACK_2 = _world.AcknexObject.GetAcknexObject(215228298);
_world.FadePal(BLACK_2,0.4f);
BIP03SND_4 = _world.AcknexObject.GetAcknexObject(371601456);
_world.PlaySound(BIP03SND_4,0.5f, null);
MENUITEM_7 = _world.GetObject(ObjectType.Skill,118534065);
MENUITEM_7.SetFloat(231,3f);
MAXMENUITEM_9 = _world.GetObject(ObjectType.Skill,2770297815);
MAXMENUITEM_9.SetFloat(231,3f);
HIDEMENU_10 = _world.AcknexObject.GetAcknexObject(2235387612);
_world.AcknexObject.SetAcknexObject(82,HIDEMENU_10);
_world.AcknexObject.SetAcknexObject(105,null);
_world.AcknexObject.SetAcknexObject(106,null);
_world.AcknexObject.SetAcknexObject(107,null);
_world.AcknexObject.SetAcknexObject(108,null);
MENUPANEL_20 = _world.AcknexObject.GetAcknexObject(3919220402);
_world.AcknexObject.SetAcknexObject(145,MENUPANEL_20);
PLEASEWAITTEXT_23 = _world.AcknexObject.GetAcknexObject(1780034721);
_world.AcknexObject.SetAcknexObject(129,PLEASEWAITTEXT_23);
LEVEL_STRING_27 = _world.GetSynonymObject(270057211);
if (LEVEL_STRING_27 != null)
{
goto CONT;
}
LOAD08STR_28 = _world.AcknexObject.GetAcknexObject(2634792366);
_world.SetSynonymObject(361798934,LOAD08STR_28);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }PLAYER_HEALTH_31 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_31.SetFloat(231,100f);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)2f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PLAYER_HEALTH_34 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_34.SetFloat(231,100f);
//Unknown keyword: MAP
//Unknown keyword: LOCATE
_world.AcknexObject.SetAcknexObject(145,null);
_world.AcknexObject.SetAcknexObject(129,null);
return false;
CONT:
LOAD_STRING_41 = _world.GetSynonymObject(1876859747);
_world.SetSynonymObject(361798934,LOAD_STRING_41);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }
            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.TicksToTime((int)2f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
Application.Quit();
//Unknown keyword: 
      return false;
  }
IAcknexObject MOVE_MODE_1;
IAcknexObject BLACK_2;
IAcknexObject BIP03SND_4;
IAcknexObject MENUITEM_7;
IAcknexObject MAXMENUITEM_9;
IAcknexObject HIDEMENU_10;
IAcknexObject MENUPANEL_20;
IAcknexObject PLEASEWAITTEXT_23;
IAcknexObject LEVEL_STRING_27;
IAcknexObject LOAD08STR_28;
IAcknexObject PLAYER_HEALTH_31;
float startTime1;
float endTime1;
IAcknexObject PLAYER_HEALTH_34;
IAcknexObject LOAD_STRING_41;
float startTime2;
float endTime2;
}
public class EXPLOSIONSTART : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public EXPLOSIONSTART() {
  }
 public EXPLOSIONSTART(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(189,null);
EXPLOSIONSMOKE_3 = _world.AcknexObject.GetAcknexObject(277450317);
MY_5 = MY;
MY_5.SetAcknexObject(190,EXPLOSIONSMOKE_3);
{
            var enumerator = new FLASHREGION();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject EXPLOSIONSMOKE_3;
IAcknexObject MY_5;
}
public class EXPLOSIONSMOKE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public EXPLOSIONSMOKE() {
  }
 public EXPLOSIONSMOKE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
EXP01ATEX_0 = _world.AcknexObject.GetAcknexObject(269389709);
MY_2 = MY;
MY_2.SetAcknexObject(164,EXP01ATEX_0);
EXPLOSIONEND_3 = _world.AcknexObject.GetAcknexObject(3352602533);
MY_5 = MY;
MY_5.SetAcknexObject(190,EXPLOSIONEND_3);
//Unknown keyword: 
      return false;
  }
IAcknexObject EXP01ATEX_0;
IAcknexObject MY_2;
IAcknexObject EXPLOSIONEND_3;
IAcknexObject MY_5;
}
public class EXPLOSIONEND : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public EXPLOSIONEND() {
  }
 public EXPLOSIONEND(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(190,null);
MY_5 = MY;
MY_5.SetFloat(204,1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
}
public class EXPLODETARGET : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public EXPLODETARGET() {
  }
 public EXPLODETARGET(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2?.GetAcknexObject(199);
if (temp_3 == null)
{
return false;
}
SQRTARGETDIST_4 = _world.GetObject(ObjectType.Skill,4061522718);
SQRTARGETDIST_5 = _world.GetObject(ObjectType.Skill,4061522718);
SQRTARGETDIST_5_val = SQRTARGETDIST_5.GetFloat(PropertyName.VAL);
MY_9 = MY;
temp_10 =MY_9.GetFloat(217);
MY_13 = MY;
temp_14 =MY_13.GetFloat(195);
MY_19 = MY;
temp_20 =MY_19.GetFloat(217);
MY_23 = MY;
temp_24 =MY_23.GetFloat(195);
MY_31 = MY;
temp_32 =MY_31.GetFloat(218);
MY_35 = MY;
temp_36 =MY_35.GetFloat(196);
MY_41 = MY;
temp_42 =MY_41.GetFloat(218);
MY_45 = MY;
temp_46 =MY_45.GetFloat(196);
SQRTARGETDIST_4.SetFloat(231,((temp_10-temp_14)*(temp_20-temp_24))+((temp_32-temp_36)*(temp_42-temp_46)));
SQRTARGETDIST_50 = _world.GetObject(ObjectType.Skill,4061522718);
SQRTARGETDIST_50_val = SQRTARGETDIST_50.GetFloat(PropertyName.VAL);
if (SQRTARGETDIST_50_val > 64f)
{
return false;
}
{
            var enumerator = new EXPLODEMISSILE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject temp_3;
IAcknexObject SQRTARGETDIST_4;
IAcknexObject SQRTARGETDIST_5;
float SQRTARGETDIST_5_val;
IAcknexObject MY_9;
float temp_10;
IAcknexObject MY_13;
float temp_14;
IAcknexObject MY_19;
float temp_20;
IAcknexObject MY_23;
float temp_24;
IAcknexObject MY_31;
float temp_32;
IAcknexObject MY_35;
float temp_36;
IAcknexObject MY_41;
float temp_42;
IAcknexObject MY_45;
float temp_46;
IAcknexObject SQRTARGETDIST_50;
float SQRTARGETDIST_50_val;
}
public class EXPLODEMISSILE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public EXPLODEMISSILE() {
  }
 public EXPLODEMISSILE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
{
            var enumerator = new LOCATEACTOR();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }EXPLOSIONSTART_0 = _world.AcknexObject.GetAcknexObject(277686876);
MY_2 = MY;
MY_2.SetAcknexObject(189,EXPLOSIONSTART_0);
MY_5 = MY;
MY_5.SetAcknexObject(190,null);
MY_8 = MY;
MY_8.SetAcknexObject(191,null);
MY_11 = MY;
MY_11.SetAcknexObject(209,null);
MY_14 = MY;
MY_14.SetAcknexObject(192,null);
MY_17 = MY;
MY_17.SetFloat(206,1f);
MY_18 = MY;
_world.SetSynonymObject(3704223598,MY_18);
EXPLOSION_ON_21 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_21.SetFloat(231,1f);
SHOOT_SECTOR_23 = _world.GetObject(ObjectType.Skill,440);
SHOOT_SECTOR_23.SetFloat(231,6.283f);
SHOOT_RANGE_25 = _world.GetObject(ObjectType.Skill,439);
SHOOT_RANGE_25.SetFloat(231,20f);
SHOOT_FAC_27 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_27.SetFloat(231,10f);
MY_28 = MY;
_world.Explode(MY_28, MY, THERE);
HIT_DIST_30 = _world.GetObject(ObjectType.Skill,444);
HIT_DIST_30_val = HIT_DIST_30.GetFloat(PropertyName.VAL);
if (HIT_DIST_30_val == 0f)
{
goto CONT;
}
RESULT_31 = _world.GetObject(ObjectType.Skill,446);
RESULT_31_val = RESULT_31.GetFloat(PropertyName.VAL);
PLAYER_RESULT_32 = _world.GetObject(ObjectType.Skill,1861765784);
PLAYER_RESULT_32.SetFloat(231,RESULT_31_val);
SHOOT_FAC_34 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_34.SetFloat(231,0f);
SHOOT_RANGE_36 = _world.GetObject(ObjectType.Skill,439);
SHOOT_RANGE_36.SetFloat(231,40f);
MY_37 = MY;
_world.Shoot(MY_37, MY, THERE);
HIT_DIST_39 = _world.GetObject(ObjectType.Skill,444);
HIT_DIST_39_val = HIT_DIST_39.GetFloat(PropertyName.VAL);
if (HIT_DIST_39_val == 0f)
{
goto CONT;
}
{
            var enumerator = new HITPLAYERDELAY();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }CONT:
MY_42 = MY;
MY_42.SetFloat(168,0f);
MY_45 = MY;
MY_45.SetFloat(207,0f);
MY_48 = MY;
MY_48.SetFloat(213,0f);
MY_51 = MY;
MY_51.SetFloat(165,-0.05f);
EXP01TEX_52 = _world.AcknexObject.GetAcknexObject(1569990796);
MY_54 = MY;
MY_54.SetAcknexObject(164,EXP01TEX_52);
MY_57 = MY;
MY_57.SetFloat(221,1f);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)4f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
EXPLOSION_ON_60 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_60.SetFloat(231,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject EXPLOSIONSTART_0;
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_18;
IAcknexObject EXPLOSION_ON_21;
IAcknexObject SHOOT_SECTOR_23;
IAcknexObject SHOOT_RANGE_25;
IAcknexObject SHOOT_FAC_27;
IAcknexObject MY_28;
IAcknexObject HIT_DIST_30;
float HIT_DIST_30_val;
IAcknexObject RESULT_31;
float RESULT_31_val;
IAcknexObject PLAYER_RESULT_32;
IAcknexObject SHOOT_FAC_34;
IAcknexObject SHOOT_RANGE_36;
IAcknexObject MY_37;
IAcknexObject HIT_DIST_39;
float HIT_DIST_39_val;
IAcknexObject MY_42;
IAcknexObject MY_45;
IAcknexObject MY_48;
IAcknexObject MY_51;
IAcknexObject EXP01TEX_52;
IAcknexObject MY_54;
IAcknexObject MY_57;
float startTime1;
float endTime1;
IAcknexObject EXPLOSION_ON_60;
}
public class AIMMISSILE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public AIMMISSILE() {
  }
 public AIMMISSILE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MISSILECOUNTER_1 = _world.GetObject(ObjectType.Skill,3933088227);
MISSILECOUNTER_1_val = MISSILECOUNTER_1.GetFloat(PropertyName.VAL);
MISSILECOUNTER_2 = _world.GetObject(ObjectType.Skill,3933088227);
MISSILECOUNTER_2.SetFloat(231,MISSILECOUNTER_1_val + 1f);
MISSILECOUNTER_4 = _world.GetObject(ObjectType.Skill,3933088227);
MISSILECOUNTER_4_val = MISSILECOUNTER_4.GetFloat(PropertyName.VAL);
if (MISSILECOUNTER_4_val == 16f)
{
MY_7 = MY;
MY_7.SetFloat(206,0f);
}
MISSILECOUNTER_9 = _world.GetObject(ObjectType.Skill,3933088227);
MISSILECOUNTER_9_val = MISSILECOUNTER_9.GetFloat(PropertyName.VAL);
if (MISSILECOUNTER_9_val < 48f)
{
return false;
}
BULLET_10 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_12 = MY;
MY_12.SetAcknexObject(199,BULLET_10);
MISSILECOUNTER_14 = _world.GetObject(ObjectType.Skill,3933088227);
MISSILECOUNTER_14_val = MISSILECOUNTER_14.GetFloat(PropertyName.VAL);
if (MISSILECOUNTER_14_val < 80f)
{
return false;
}
MISSILECOUNTER_16 = _world.GetObject(ObjectType.Skill,3933088227);
MISSILECOUNTER_16.SetFloat(231,0f);
MY_19 = MY;
temp_20 =MY_19.GetFloat(205);
if (temp_20 == 1f)
{
return false;
}
{
            var enumerator = new VANISHSTOP();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MISSILECOUNTER_1;
float MISSILECOUNTER_1_val;
IAcknexObject MISSILECOUNTER_2;
IAcknexObject MISSILECOUNTER_4;
float MISSILECOUNTER_4_val;
IAcknexObject MY_7;
IAcknexObject MISSILECOUNTER_9;
float MISSILECOUNTER_9_val;
IAcknexObject BULLET_10;
IAcknexObject MY_12;
IAcknexObject MISSILECOUNTER_14;
float MISSILECOUNTER_14_val;
IAcknexObject MISSILECOUNTER_16;
IAcknexObject MY_19;
float temp_20;
}
public class IMPLOSIONSTART : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public IMPLOSIONSTART() {
  }
 public IMPLOSIONSTART(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(189,null);
IMPLOSIONCRUSH_3 = _world.AcknexObject.GetAcknexObject(2471910572);
MY_5 = MY;
MY_5.SetAcknexObject(190,IMPLOSIONCRUSH_3);
MY_8 = MY;
MY_8.SetFloat(204,0f);
MY_11 = MY;
MY_11.SetFloat(221,1f);
//Unknown keyword: LOCATE
MY_14 = MY;
MY_14.SetFloat(213,0f);
{
            var enumerator = new FLASHREGION();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject IMPLOSIONCRUSH_3;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject MY_14;
}
public class IMPLOSIONCRUSH : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public IMPLOSIONCRUSH() {
  }
 public IMPLOSIONCRUSH(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
IMPL01ATEX_0 = _world.AcknexObject.GetAcknexObject(2291086482);
MY_2 = MY;
MY_2.SetAcknexObject(164,IMPL01ATEX_0);
IMPLODELIGHT_3 = _world.AcknexObject.GetAcknexObject(1148133871);
_world.AcknexObject.SetAcknexObject(12,IMPLODELIGHT_3);
IMPLOSIONFLARE_6 = _world.AcknexObject.GetAcknexObject(2475230897);
MY_8 = MY;
MY_8.SetAcknexObject(190,IMPLOSIONFLARE_6);
MY_11 = MY;
MY_11.SetFloat(221,1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject IMPL01ATEX_0;
IAcknexObject MY_2;
IAcknexObject IMPLODELIGHT_3;
IAcknexObject IMPLOSIONFLARE_6;
IAcknexObject MY_8;
IAcknexObject MY_11;
}
public class IMPLOSIONFLARE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public IMPLOSIONFLARE() {
  }
 public IMPLOSIONFLARE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
IMPL01BTEX_0 = _world.AcknexObject.GetAcknexObject(2291122419);
MY_2 = MY;
MY_2.SetAcknexObject(164,IMPL01BTEX_0);
IMPLOSIONEND_3 = _world.AcknexObject.GetAcknexObject(3500561246);
MY_5 = MY;
MY_5.SetAcknexObject(190,IMPLOSIONEND_3);
MY_8 = MY;
MY_8.SetFloat(221,1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject IMPL01BTEX_0;
IAcknexObject MY_2;
IAcknexObject IMPLOSIONEND_3;
IAcknexObject MY_5;
IAcknexObject MY_8;
}
public class IMPLOSIONEND : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public IMPLOSIONEND() {
  }
 public IMPLOSIONEND(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
MY_2 = MY;
MY_2.SetAcknexObject(190,null);
MY_3 = MY;
_world.SetSynonymObject(3704223598,MY_3);
FOLLOW_5 = _world.AcknexObject.GetAcknexObject(2968039200);
MY_7 = MY;
temp_8 =MY_7?.GetAcknexObject(199);
if (temp_8 != FOLLOW_5)
{
EXPLOSION_ON_10 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_10.SetFloat(231,2f);
}
SHOOT_RANGE_12 = _world.GetObject(ObjectType.Skill,439);
SHOOT_RANGE_12.SetFloat(231,80f);
SHOOT_FAC_14 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_14.SetFloat(231,0.05f);
MY_15 = MY;
_world.Explode(MY_15, MY, THERE);
MY_18 = MY;
MY_18.SetFloat(204,1f);
MY_21 = MY;
temp_22 =MY_21.GetFloat(205);
if (temp_22 == 1f)
{
RENDER_MODE_24 = _world.GetObject(ObjectType.Skill,361);
RENDER_MODE_24.SetFloat(231,1f);
}

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)4f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
EXPLOSION_ON_27 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_27.SetFloat(231,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_3;
IAcknexObject FOLLOW_5;
IAcknexObject MY_7;
IAcknexObject temp_8;
IAcknexObject EXPLOSION_ON_10;
IAcknexObject SHOOT_RANGE_12;
IAcknexObject SHOOT_FAC_14;
IAcknexObject MY_15;
IAcknexObject MY_18;
IAcknexObject MY_21;
float temp_22;
IAcknexObject RENDER_MODE_24;
float startTime1;
float endTime1;
IAcknexObject EXPLOSION_ON_27;
}
public class IMPLODEPARTICLE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public IMPLODEPARTICLE() {
  }
 public IMPLODEPARTICLE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
MY_2 = MY;
MY_2.SetAcknexObject(191,null);
MY_5 = MY;
MY_5.SetAcknexObject(209,null);
MY_6 = MY;
_world.SetSynonymObject(3704223598,MY_6);
FOLLOW_8 = _world.AcknexObject.GetAcknexObject(2968039200);
MY_10 = MY;
temp_11 =MY_10?.GetAcknexObject(199);
if (temp_11 != FOLLOW_8)
{
EXPLOSION_ON_13 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_13.SetFloat(231,2f);
}
SHOOT_RANGE_15 = _world.GetObject(ObjectType.Skill,439);
SHOOT_RANGE_15.SetFloat(231,10f);
SHOOT_FAC_17 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_17.SetFloat(231,0.05f);
MY_18 = MY;
_world.Explode(MY_18, MY, THERE);
MY_21 = MY;
MY_21.SetFloat(207,0f);
MY_24 = MY;
MY_24.SetFloat(206,1f);
MY_27 = MY;
MY_27.SetFloat(168,0f);
MY_30 = MY;
temp_31 =MY_30.GetFloat(165);
MY_33 = MY;
MY_33.SetFloat(165,temp_31 + -2.5f);
IMPL01TEX_34 = _world.AcknexObject.GetAcknexObject(4234264817);
MY_36 = MY;
MY_36.SetAcknexObject(164,IMPL01TEX_34);
IMPLOSIONSTART_37 = _world.AcknexObject.GetAcknexObject(2490935381);
MY_39 = MY;
MY_39.SetAcknexObject(189,IMPLOSIONSTART_37);
MY_42 = MY;
MY_42.SetFloat(221,1f);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)4f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
EXPLOSION_ON_45 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_45.SetFloat(231,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_6;
IAcknexObject FOLLOW_8;
IAcknexObject MY_10;
IAcknexObject temp_11;
IAcknexObject EXPLOSION_ON_13;
IAcknexObject SHOOT_RANGE_15;
IAcknexObject SHOOT_FAC_17;
IAcknexObject MY_18;
IAcknexObject MY_21;
IAcknexObject MY_24;
IAcknexObject MY_27;
IAcknexObject MY_30;
float temp_31;
IAcknexObject MY_33;
IAcknexObject IMPL01TEX_34;
IAcknexObject MY_36;
IAcknexObject IMPLOSIONSTART_37;
IAcknexObject MY_39;
IAcknexObject MY_42;
float startTime1;
float endTime1;
IAcknexObject EXPLOSION_ON_45;
}
public class BEAMREACT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public BEAMREACT() {
  }
 public BEAMREACT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = new CHOOSEPARTICLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }PARTICLE_1 = _world.GetSynonymObject(2704244193);
if (PARTICLE_1 == null)
{
return false;
}
DISTX_3 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_3_val = DISTX_3.GetFloat(PropertyName.VAL);
if (DISTX_3_val != 0f)
{
PARTICLE_5 = _world.GetSynonymObject(2704244193);
PARTICLE_7 = _world.GetSynonymObject(2704244193);
temp_8 =PARTICLE_7.GetFloat(169);
DISTZ_9 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_9_val = DISTZ_9.GetFloat(PropertyName.VAL);
DISTX_11 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_11_val = DISTX_11.GetFloat(PropertyName.VAL);
PARTICLE_5.SetFloat(169,DISTZ_9_val/DISTX_11_val);
}
PARTICLE_14 = _world.GetSynonymObject(2704244193);
temp_15 =PARTICLE_14.GetFloat(169);
if (temp_15 < 0f)
{
PARTICLE_17 = _world.GetSynonymObject(2704244193);
PARTICLE_19 = _world.GetSynonymObject(2704244193);
temp_20 =PARTICLE_19.GetFloat(169);
PARTICLE_23 = _world.GetSynonymObject(2704244193);
temp_24 =PARTICLE_23.GetFloat(169);
PARTICLE_17.SetFloat(169,-temp_24);
}
MY_27 = MY;
MY_27.SetFloat(220,1f);
PARTICLE_30 = _world.GetSynonymObject(2704244193);
PARTICLE_30.SetFloat(168,2f);
MY_31 = MY;
PARTICLE_33 = _world.GetSynonymObject(2704244193);
PARTICLE_33.SetAcknexObject(199,MY_31);
EXPLOSION_CENTER_35 = _world.GetSynonymObject(3704223598);
temp_36 =EXPLOSION_CENTER_35.GetFloat(195);
PARTICLE_38 = _world.GetSynonymObject(2704244193);
PARTICLE_38.SetFloat(195,temp_36);
EXPLOSION_CENTER_40 = _world.GetSynonymObject(3704223598);
temp_41 =EXPLOSION_CENTER_40.GetFloat(196);
PARTICLE_43 = _world.GetSynonymObject(2704244193);
PARTICLE_43.SetFloat(196,temp_41);
PARTICLE_46 = _world.GetSynonymObject(2704244193);
PARTICLE_46.SetFloat(165,2f);
//Unknown keyword: LOCATE
PARTICLE_49 = _world.GetSynonymObject(2704244193);
PARTICLE_49.SetFloat(213,0f);
PRTCTEX_50 = _world.AcknexObject.GetAcknexObject(3612333943);
PARTICLE_52 = _world.GetSynonymObject(2704244193);
PARTICLE_52.SetAcknexObject(164,PRTCTEX_50);
IMPLODEPARTICLE_53 = _world.AcknexObject.GetAcknexObject(372812267);
PARTICLE_55 = _world.GetSynonymObject(2704244193);
PARTICLE_55.SetAcknexObject(191,IMPLODEPARTICLE_53);
LOCATEPARTICLE_56 = _world.AcknexObject.GetAcknexObject(2894381625);
PARTICLE_58 = _world.GetSynonymObject(2704244193);
PARTICLE_58.SetAcknexObject(190,LOCATEPARTICLE_56);
PARTICLE_61 = _world.GetSynonymObject(2704244193);
PARTICLE_61.SetFloat(204,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject PARTICLE_1;
IAcknexObject DISTX_3;
float DISTX_3_val;
IAcknexObject PARTICLE_5;
IAcknexObject PARTICLE_7;
float temp_8;
IAcknexObject DISTZ_9;
float DISTZ_9_val;
IAcknexObject DISTX_11;
float DISTX_11_val;
IAcknexObject PARTICLE_14;
float temp_15;
IAcknexObject PARTICLE_17;
IAcknexObject PARTICLE_19;
float temp_20;
IAcknexObject PARTICLE_23;
float temp_24;
IAcknexObject MY_27;
IAcknexObject PARTICLE_30;
IAcknexObject MY_31;
IAcknexObject PARTICLE_33;
IAcknexObject EXPLOSION_CENTER_35;
float temp_36;
IAcknexObject PARTICLE_38;
IAcknexObject EXPLOSION_CENTER_40;
float temp_41;
IAcknexObject PARTICLE_43;
IAcknexObject PARTICLE_46;
IAcknexObject PARTICLE_49;
IAcknexObject PRTCTEX_50;
IAcknexObject PARTICLE_52;
IAcknexObject IMPLODEPARTICLE_53;
IAcknexObject PARTICLE_55;
IAcknexObject LOCATEPARTICLE_56;
IAcknexObject PARTICLE_58;
IAcknexObject PARTICLE_61;
}
public class LOCATEPARTICLE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LOCATEPARTICLE() {
  }
 public LOCATEPARTICLE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SHOOT_RANGE_1 = _world.GetObject(ObjectType.Skill,439);
SHOOT_RANGE_1.SetFloat(231,100f);
SHOOT_FAC_3 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_3.SetFloat(231,0f);
MY_4 = MY;
_world.Explode(MY_4, MY, THERE);
HIT_MINDIST_6 = _world.GetObject(ObjectType.Skill,445);
HIT_MINDIST_6_val = HIT_MINDIST_6.GetFloat(PropertyName.VAL);
if (HIT_MINDIST_6_val == 0f)
{
goto VANISH;
}
HIT_9 = _world.GetSynonymObject(704);
temp_10 =HIT_9.GetFloat(205);
if (temp_10 == 0f)
{
return false;
}
HIT_12 = _world.GetSynonymObject(704);
if (HIT_12 == null)
{
return false;
}
HIT_13 = _world.GetSynonymObject(704);
MY_15 = MY;
MY_15.SetAcknexObject(199,HIT_13);
DISTX_16 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_17 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_17_val = DISTX_17.GetFloat(PropertyName.VAL);
HIT_X_19 = _world.GetObject(ObjectType.Skill,448);
HIT_X_19_val = HIT_X_19.GetFloat(PropertyName.VAL);
EXPLOSION_CENTER_22 = _world.GetSynonymObject(3704223598);
temp_23 =EXPLOSION_CENTER_22.GetFloat(195);
HIT_X_27 = _world.GetObject(ObjectType.Skill,448);
HIT_X_27_val = HIT_X_27.GetFloat(PropertyName.VAL);
EXPLOSION_CENTER_30 = _world.GetSynonymObject(3704223598);
temp_31 =EXPLOSION_CENTER_30.GetFloat(195);
HIT_Y_35 = _world.GetObject(ObjectType.Skill,449);
HIT_Y_35_val = HIT_Y_35.GetFloat(PropertyName.VAL);
EXPLOSION_CENTER_38 = _world.GetSynonymObject(3704223598);
temp_39 =EXPLOSION_CENTER_38.GetFloat(196);
HIT_Y_43 = _world.GetObject(ObjectType.Skill,449);
HIT_Y_43_val = HIT_Y_43.GetFloat(PropertyName.VAL);
EXPLOSION_CENTER_46 = _world.GetSynonymObject(3704223598);
temp_47 =EXPLOSION_CENTER_46.GetFloat(196);
DISTX_16.SetFloat(231,(HIT_X_19_val-temp_23)*(HIT_X_27_val-temp_31)+(HIT_Y_35_val-temp_39)*(HIT_Y_43_val-temp_47));
DISTX_49 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_49_val = DISTX_49.GetFloat(PropertyName.VAL);
DISTX_50 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_50.SetFloat(231,MathUtils.Sqrt(DISTX_49_val));
DISTZ_51 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_52 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_52_val = DISTZ_52.GetFloat(PropertyName.VAL);
HIT_54 = _world.GetSynonymObject(704);
temp_55 =HIT_54.GetFloat(200);
MY_58 = MY;
temp_59 =MY_58.GetFloat(200);
DISTZ_51.SetFloat(231,temp_55-temp_59);
DISTX_61 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_61_val = DISTX_61.GetFloat(PropertyName.VAL);
if (DISTX_61_val != 0f)
{
MY_63 = MY;
MY_65 = MY;
temp_66 =MY_65.GetFloat(169);
DISTZ_67 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_67_val = DISTZ_67.GetFloat(PropertyName.VAL);
DISTX_69 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_69_val = DISTX_69.GetFloat(PropertyName.VAL);
MY_63.SetFloat(169,DISTZ_67_val/DISTX_69_val);
}
MY_72 = MY;
temp_73 =MY_72.GetFloat(169);
if (temp_73 < 0f)
{
MY_75 = MY;
MY_77 = MY;
temp_78 =MY_77.GetFloat(169);
MY_81 = MY;
temp_82 =MY_81.GetFloat(169);
MY_75.SetFloat(169,-temp_82);
}
return false;
VANISH:
MY_85 = MY;
temp_86 =MY_85.GetFloat(213);
if (temp_86 == 0f)
{
//Unknown keyword: LOCATE
}
MY_89 = MY;
temp_90 =MY_89.GetFloat(205);
if (temp_90 == 0f)
{
{
            var enumerator = new VANISHSTOP();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }}
//Unknown keyword: 
      return false;
  }
IAcknexObject SHOOT_RANGE_1;
IAcknexObject SHOOT_FAC_3;
IAcknexObject MY_4;
IAcknexObject HIT_MINDIST_6;
float HIT_MINDIST_6_val;
IAcknexObject HIT_9;
float temp_10;
IAcknexObject HIT_12;
IAcknexObject HIT_13;
IAcknexObject MY_15;
IAcknexObject DISTX_16;
IAcknexObject DISTX_17;
float DISTX_17_val;
IAcknexObject HIT_X_19;
float HIT_X_19_val;
IAcknexObject EXPLOSION_CENTER_22;
float temp_23;
IAcknexObject HIT_X_27;
float HIT_X_27_val;
IAcknexObject EXPLOSION_CENTER_30;
float temp_31;
IAcknexObject HIT_Y_35;
float HIT_Y_35_val;
IAcknexObject EXPLOSION_CENTER_38;
float temp_39;
IAcknexObject HIT_Y_43;
float HIT_Y_43_val;
IAcknexObject EXPLOSION_CENTER_46;
float temp_47;
IAcknexObject DISTX_49;
float DISTX_49_val;
IAcknexObject DISTX_50;
IAcknexObject DISTZ_51;
IAcknexObject DISTZ_52;
float DISTZ_52_val;
IAcknexObject HIT_54;
float temp_55;
IAcknexObject MY_58;
float temp_59;
IAcknexObject DISTX_61;
float DISTX_61_val;
IAcknexObject MY_63;
IAcknexObject MY_65;
float temp_66;
IAcknexObject DISTZ_67;
float DISTZ_67_val;
IAcknexObject DISTX_69;
float DISTX_69_val;
IAcknexObject MY_72;
float temp_73;
IAcknexObject MY_75;
IAcknexObject MY_77;
float temp_78;
IAcknexObject MY_81;
float temp_82;
IAcknexObject MY_85;
float temp_86;
IAcknexObject MY_89;
float temp_90;
}
public class LOCATEPLAYERPARTICLE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LOCATEPLAYERPARTICLE() {
  }
 public LOCATEPLAYERPARTICLE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(202);
if (temp_3 > 8f)
{
return false;
}
PLAYER_ARMOUR_4 = _world.GetObject(ObjectType.Skill,1211659215);
PLAYER_ARMOUR_5 = _world.GetObject(ObjectType.Skill,1211659215);
PLAYER_ARMOUR_5_val = PLAYER_ARMOUR_5.GetFloat(PropertyName.VAL);
PLAYER_ARMOUR_6 = _world.GetObject(ObjectType.Skill,1211659215);
PLAYER_ARMOUR_6_val = PLAYER_ARMOUR_6.GetFloat(PropertyName.VAL);
PLAYER_ARMOUR_4.SetFloat(231,PLAYER_ARMOUR_6_val/2f);
PLAYER_RESULT_9 = _world.GetObject(ObjectType.Skill,1861765784);
PLAYER_RESULT_10 = _world.GetObject(ObjectType.Skill,1861765784);
PLAYER_RESULT_10_val = PLAYER_RESULT_10.GetFloat(PropertyName.VAL);
PLAYER_RESULT_9.SetFloat(231,10f*(UnityEngine.Random.value+0.5f));
{
            var enumerator = new FLASHPLAYER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }QGUN04SND_18 = _world.AcknexObject.GetAcknexObject(2622058161);
_world.PlaySound(QGUN04SND_18,0.7f, null);
{
            var enumerator = new VANISHSTOP();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject PLAYER_ARMOUR_4;
IAcknexObject PLAYER_ARMOUR_5;
float PLAYER_ARMOUR_5_val;
IAcknexObject PLAYER_ARMOUR_6;
float PLAYER_ARMOUR_6_val;
IAcknexObject PLAYER_RESULT_9;
IAcknexObject PLAYER_RESULT_10;
float PLAYER_RESULT_10_val;
IAcknexObject QGUN04SND_18;
}
public class TIMEOUTPARTICLE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TIMEOUTPARTICLE() {
  }
 public TIMEOUTPARTICLE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(173);
MY_5 = MY;
MY_5.SetFloat(173,temp_3 + 1f);
MY_8 = MY;
temp_9 =MY_8.GetFloat(173);
if (temp_9 < 8f)
{
return false;
}
MY_12 = MY;
MY_12.SetFloat(173,0f);
{
            var enumerator = new IMPLODEPARTICLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_5;
IAcknexObject MY_8;
float temp_9;
IAcknexObject MY_12;
}
public class CHOOSEGRANADE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CHOOSEGRANADE() {
  }
 public CHOOSEGRANADE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
GRAN1ACT_2 = _world.AcknexObject.GetAcknexObject(1197183582);
temp_3 =GRAN1ACT_2.GetFloat(204);
if (temp_3 != 1f)
{
goto GRANADE1;
}
GRAN1ACT_4 = _world.AcknexObject.GetAcknexObject(1197183582);
_world.SetSynonymObject(556898879,GRAN1ACT_4);
return false;
GRANADE1:
GRAN11ACT_8 = _world.AcknexObject.GetAcknexObject(851742895);
temp_9 =GRAN11ACT_8.GetFloat(204);
if (temp_9 != 1f)
{
goto GRANADE2;
}
GRAN11ACT_10 = _world.AcknexObject.GetAcknexObject(851742895);
_world.SetSynonymObject(556898879,GRAN11ACT_10);
return false;
GRANADE2:
GRAN12ACT_14 = _world.AcknexObject.GetAcknexObject(851778832);
temp_15 =GRAN12ACT_14.GetFloat(204);
if (temp_15 != 1f)
{
goto GRANADE3;
}
GRAN12ACT_16 = _world.AcknexObject.GetAcknexObject(851778832);
_world.SetSynonymObject(556898879,GRAN12ACT_16);
return false;
GRANADE3:
GRAN13ACT_20 = _world.AcknexObject.GetAcknexObject(851814769);
temp_21 =GRAN13ACT_20.GetFloat(204);
if (temp_21 != 1f)
{
goto GRANADE4;
}
GRAN13ACT_22 = _world.AcknexObject.GetAcknexObject(851814769);
_world.SetSynonymObject(556898879,GRAN13ACT_22);
return false;
GRANADE4:
GRAN14ACT_26 = _world.AcknexObject.GetAcknexObject(851850706);
temp_27 =GRAN14ACT_26.GetFloat(204);
if (temp_27 != 1f)
{
goto REFUSE;
}
GRAN14ACT_28 = _world.AcknexObject.GetAcknexObject(851850706);
_world.SetSynonymObject(556898879,GRAN14ACT_28);
return false;
REFUSE:
_world.SetSynonymObject(556898879,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject GRAN1ACT_2;
float temp_3;
IAcknexObject GRAN1ACT_4;
IAcknexObject GRAN11ACT_8;
float temp_9;
IAcknexObject GRAN11ACT_10;
IAcknexObject GRAN12ACT_14;
float temp_15;
IAcknexObject GRAN12ACT_16;
IAcknexObject GRAN13ACT_20;
float temp_21;
IAcknexObject GRAN13ACT_22;
IAcknexObject GRAN14ACT_26;
float temp_27;
IAcknexObject GRAN14ACT_28;
}
public class CHOOSEMISSILE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CHOOSEMISSILE() {
  }
 public CHOOSEMISSILE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MISS1ACT_2 = _world.AcknexObject.GetAcknexObject(1181860530);
temp_3 =MISS1ACT_2.GetFloat(204);
if (temp_3 != 1f)
{
goto MISSILE1;
}
MISS1ACT_4 = _world.AcknexObject.GetAcknexObject(1181860530);
_world.SetSynonymObject(3680056099,MISS1ACT_4);
return false;
MISSILE1:
MISS11ACT_8 = _world.AcknexObject.GetAcknexObject(346082179);
temp_9 =MISS11ACT_8.GetFloat(204);
if (temp_9 != 1f)
{
goto MISSILE2;
}
MISS11ACT_10 = _world.AcknexObject.GetAcknexObject(346082179);
_world.SetSynonymObject(3680056099,MISS11ACT_10);
return false;
MISSILE2:
MISS12ACT_14 = _world.AcknexObject.GetAcknexObject(346118116);
temp_15 =MISS12ACT_14.GetFloat(204);
if (temp_15 != 1f)
{
goto MISSILE3;
}
MISS12ACT_16 = _world.AcknexObject.GetAcknexObject(346118116);
_world.SetSynonymObject(3680056099,MISS12ACT_16);
return false;
MISSILE3:
MISS13ACT_20 = _world.AcknexObject.GetAcknexObject(346154053);
temp_21 =MISS13ACT_20.GetFloat(204);
if (temp_21 != 1f)
{
goto MISSILE4;
}
MISS13ACT_22 = _world.AcknexObject.GetAcknexObject(346154053);
_world.SetSynonymObject(3680056099,MISS13ACT_22);
return false;
MISSILE4:
MISS14ACT_26 = _world.AcknexObject.GetAcknexObject(346189990);
temp_27 =MISS14ACT_26.GetFloat(204);
if (temp_27 != 1f)
{
goto REFUSE;
}
MISS14ACT_28 = _world.AcknexObject.GetAcknexObject(346189990);
_world.SetSynonymObject(3680056099,MISS14ACT_28);
return false;
REFUSE:
_world.SetSynonymObject(3680056099,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject MISS1ACT_2;
float temp_3;
IAcknexObject MISS1ACT_4;
IAcknexObject MISS11ACT_8;
float temp_9;
IAcknexObject MISS11ACT_10;
IAcknexObject MISS12ACT_14;
float temp_15;
IAcknexObject MISS12ACT_16;
IAcknexObject MISS13ACT_20;
float temp_21;
IAcknexObject MISS13ACT_22;
IAcknexObject MISS14ACT_26;
float temp_27;
IAcknexObject MISS14ACT_28;
}
public class CHOOSEPARTICLE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CHOOSEPARTICLE() {
  }
 public CHOOSEPARTICLE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
PARTICLEACT_2 = _world.AcknexObject.GetAcknexObject(162694329);
temp_3 =PARTICLEACT_2.GetFloat(204);
if (temp_3 != 1f)
{
goto PARTICLE1;
}
PARTICLEACT_4 = _world.AcknexObject.GetAcknexObject(162694329);
_world.SetSynonymObject(2704244193,PARTICLEACT_4);
return false;
PARTICLE1:
PARTICLE1ACT_8 = _world.AcknexObject.GetAcknexObject(1073335914);
temp_9 =PARTICLE1ACT_8.GetFloat(204);
if (temp_9 != 1f)
{
goto PARTICLE2;
}
PARTICLE1ACT_10 = _world.AcknexObject.GetAcknexObject(1073335914);
_world.SetSynonymObject(2704244193,PARTICLE1ACT_10);
return false;
PARTICLE2:
PARTICLE2ACT_14 = _world.AcknexObject.GetAcknexObject(1073371851);
temp_15 =PARTICLE2ACT_14.GetFloat(204);
if (temp_15 != 1f)
{
goto PARTICLE3;
}
PARTICLE2ACT_16 = _world.AcknexObject.GetAcknexObject(1073371851);
_world.SetSynonymObject(2704244193,PARTICLE2ACT_16);
return false;
PARTICLE3:
PARTICLE3ACT_20 = _world.AcknexObject.GetAcknexObject(1073407788);
temp_21 =PARTICLE3ACT_20.GetFloat(204);
if (temp_21 != 1f)
{
goto PARTICLE4;
}
PARTICLE3ACT_22 = _world.AcknexObject.GetAcknexObject(1073407788);
_world.SetSynonymObject(2704244193,PARTICLE3ACT_22);
return false;
PARTICLE4:
PARTICLE4ACT_26 = _world.AcknexObject.GetAcknexObject(1073443725);
temp_27 =PARTICLE4ACT_26.GetFloat(204);
if (temp_27 != 1f)
{
goto REFUSE;
}
PARTICLE4ACT_28 = _world.AcknexObject.GetAcknexObject(1073443725);
_world.SetSynonymObject(2704244193,PARTICLE4ACT_28);
return false;
REFUSE:
_world.SetSynonymObject(2704244193,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject PARTICLEACT_2;
float temp_3;
IAcknexObject PARTICLEACT_4;
IAcknexObject PARTICLE1ACT_8;
float temp_9;
IAcknexObject PARTICLE1ACT_10;
IAcknexObject PARTICLE2ACT_14;
float temp_15;
IAcknexObject PARTICLE2ACT_16;
IAcknexObject PARTICLE3ACT_20;
float temp_21;
IAcknexObject PARTICLE3ACT_22;
IAcknexObject PARTICLE4ACT_26;
float temp_27;
IAcknexObject PARTICLE4ACT_28;
}
public class CASTBLOOD : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CASTBLOOD() {
  }
 public CASTBLOOD(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
BLOOD1ACT_2 = _world.AcknexObject.GetAcknexObject(2619845414);
temp_3 =BLOOD1ACT_2.GetFloat(204);
if (temp_3 != 1f)
{
goto BLOOD2;
}
BLOOD1ACT_4 = _world.AcknexObject.GetAcknexObject(2619845414);
_world.SetSynonymObject(215243933,BLOOD1ACT_4);
goto CAST;
BLOOD2:
BLOOD2ACT_8 = _world.AcknexObject.GetAcknexObject(2619881351);
temp_9 =BLOOD2ACT_8.GetFloat(204);
if (temp_9 != 1f)
{
goto BLOOD3;
}
BLOOD2ACT_10 = _world.AcknexObject.GetAcknexObject(2619881351);
_world.SetSynonymObject(215243933,BLOOD2ACT_10);
goto CAST;
BLOOD3:
BLOOD3ACT_14 = _world.AcknexObject.GetAcknexObject(2619917288);
temp_15 =BLOOD3ACT_14.GetFloat(204);
if (temp_15 != 1f)
{
goto BLOOD4;
}
BLOOD3ACT_16 = _world.AcknexObject.GetAcknexObject(2619917288);
_world.SetSynonymObject(215243933,BLOOD3ACT_16);
goto CAST;
BLOOD4:
BLOOD4ACT_20 = _world.AcknexObject.GetAcknexObject(2619953225);
temp_21 =BLOOD4ACT_20.GetFloat(204);
if (temp_21 != 1f)
{
goto REFUSE;
}
BLOOD4ACT_22 = _world.AcknexObject.GetAcknexObject(2619953225);
_world.SetSynonymObject(215243933,BLOOD4ACT_22);
goto CAST;
REFUSE:
_world.SetSynonymObject(215243933,null);
return false;
CAST:
HIT_DIST_26 = _world.GetObject(ObjectType.Skill,444);
HIT_DIST_26_val = HIT_DIST_26.GetFloat(PropertyName.VAL);
BLOOD_28 = _world.GetSynonymObject(215243933);
BLOOD_28.SetFloat(172,HIT_DIST_26_val);
BLOOD_30 = _world.GetSynonymObject(215243933);
BLOOD_32 = _world.GetSynonymObject(215243933);
temp_33 =BLOOD_32.GetFloat(165);
PLAYER_Z_34 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_34_val = PLAYER_Z_34.GetFloat(PropertyName.VAL);
HIT_DIST_38 = _world.GetObject(ObjectType.Skill,444);
HIT_DIST_38_val = HIT_DIST_38.GetFloat(PropertyName.VAL);
PLAYER_TILT_40 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_40_val = PLAYER_TILT_40.GetFloat(PropertyName.VAL);
BLOOD_30.SetFloat(165,PLAYER_Z_34_val-0.728f*HIT_DIST_38_val*PLAYER_TILT_40_val-0.5f);
BLOOD_43 = _world.GetSynonymObject(215243933);
dropped_44 = _world.Drop(BLOOD_43, MY, THERE);
BLOOD_47 = dropped_44;
BLOOD_47.SetFloat(204,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject BLOOD1ACT_2;
float temp_3;
IAcknexObject BLOOD1ACT_4;
IAcknexObject BLOOD2ACT_8;
float temp_9;
IAcknexObject BLOOD2ACT_10;
IAcknexObject BLOOD3ACT_14;
float temp_15;
IAcknexObject BLOOD3ACT_16;
IAcknexObject BLOOD4ACT_20;
float temp_21;
IAcknexObject BLOOD4ACT_22;
IAcknexObject HIT_DIST_26;
float HIT_DIST_26_val;
IAcknexObject BLOOD_28;
IAcknexObject BLOOD_30;
IAcknexObject BLOOD_32;
float temp_33;
IAcknexObject PLAYER_Z_34;
float PLAYER_Z_34_val;
IAcknexObject HIT_DIST_38;
float HIT_DIST_38_val;
IAcknexObject PLAYER_TILT_40;
float PLAYER_TILT_40_val;
IAcknexObject BLOOD_43;
IAcknexObject dropped_44;
IAcknexObject BLOOD_47;
}
public class PICKUPMEDKIT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public PICKUPMEDKIT() {
  }
 public PICKUPMEDKIT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat(PropertyName.VAL);
if (PLAYER_HEALTH_1_val > 98f)
{
return false;
}
PLAYER_HEALTH_3 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_3_val = PLAYER_HEALTH_3.GetFloat(PropertyName.VAL);
PLAYER_HEALTH_4 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_4.SetFloat(231,PLAYER_HEALTH_3_val + 25f);
MY_7 = MY;
MY_7.SetFloat(204,1f);
MP_501SND_8 = _world.AcknexObject.GetAcknexObject(3759925572);
_world.PlaySound(MP_501SND_8,0.5f, null);
GET11STR_10 = _world.AcknexObject.GetAcknexObject(2297170088);
_world.SetSynonymObject(361798934,GET11STR_10);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject PLAYER_HEALTH_1;
float PLAYER_HEALTH_1_val;
IAcknexObject PLAYER_HEALTH_3;
float PLAYER_HEALTH_3_val;
IAcknexObject PLAYER_HEALTH_4;
IAcknexObject MY_7;
IAcknexObject MP_501SND_8;
IAcknexObject GET11STR_10;
}
public class PICKUPARMOUR : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public PICKUPARMOUR() {
  }
 public PICKUPARMOUR(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
PLAYER_ARMOUR_1 = _world.GetObject(ObjectType.Skill,1211659215);
PLAYER_ARMOUR_1_val = PLAYER_ARMOUR_1.GetFloat(PropertyName.VAL);
if (PLAYER_ARMOUR_1_val > 190f)
{
return false;
}
PLAYER_ARMOUR_3 = _world.GetObject(ObjectType.Skill,1211659215);
PLAYER_ARMOUR_3_val = PLAYER_ARMOUR_3.GetFloat(PropertyName.VAL);
PLAYER_ARMOUR_4 = _world.GetObject(ObjectType.Skill,1211659215);
PLAYER_ARMOUR_4.SetFloat(231,PLAYER_ARMOUR_3_val + 50f);
MY_7 = MY;
MY_7.SetFloat(204,1f);
ARMO01SND_8 = _world.AcknexObject.GetAcknexObject(366485954);
_world.PlaySound(ARMO01SND_8,0.5f, null);
GET10STR_10 = _world.AcknexObject.GetAcknexObject(2297134151);
_world.SetSynonymObject(361798934,GET10STR_10);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject PLAYER_ARMOUR_1;
float PLAYER_ARMOUR_1_val;
IAcknexObject PLAYER_ARMOUR_3;
float PLAYER_ARMOUR_3_val;
IAcknexObject PLAYER_ARMOUR_4;
IAcknexObject MY_7;
IAcknexObject ARMO01SND_8;
IAcknexObject GET10STR_10;
}
public class PICKUPMP5 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public PICKUPMP5() {
  }
 public PICKUPMP5(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
HAS_MP5_1 = _world.GetObject(ObjectType.Skill,1205036122);
HAS_MP5_1.SetFloat(231,1f);
AMMO_MP5_3 = _world.GetObject(ObjectType.Skill,1494668136);
AMMO_MP5_3_val = AMMO_MP5_3.GetFloat(PropertyName.VAL);
AMMO_MP5_4 = _world.GetObject(ObjectType.Skill,1494668136);
AMMO_MP5_4.SetFloat(231,AMMO_MP5_3_val + 60f);
WEAPONSEL_6 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_6_val = WEAPONSEL_6.GetFloat(PropertyName.VAL);
if (WEAPONSEL_6_val < 2f)
{
{
            var enumerator = new SELECTMP5();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }}
WEAPONSEL_8 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_8_val = WEAPONSEL_8.GetFloat(PropertyName.VAL);
if (WEAPONSEL_8_val > 1f)
{
AMMO01SND_9 = _world.AcknexObject.GetAcknexObject(2022635869);
_world.PlaySound(AMMO01SND_9,0.3f, null);
}
{
            var enumerator = new SHOWAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_13 = MY;
MY_13.SetFloat(204,1f);
GET02STR_14 = _world.AcknexObject.GetAcknexObject(2296020104);
_world.SetSynonymObject(361798934,GET02STR_14);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject HAS_MP5_1;
IAcknexObject AMMO_MP5_3;
float AMMO_MP5_3_val;
IAcknexObject AMMO_MP5_4;
IAcknexObject WEAPONSEL_6;
float WEAPONSEL_6_val;
IAcknexObject WEAPONSEL_8;
float WEAPONSEL_8_val;
IAcknexObject AMMO01SND_9;
IAcknexObject MY_13;
IAcknexObject GET02STR_14;
}
public class PICKUPSTINGER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public PICKUPSTINGER() {
  }
 public PICKUPSTINGER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
HAS_STINGER_1 = _world.GetObject(ObjectType.Skill,2740601668);
HAS_STINGER_1.SetFloat(231,1f);
AMMO_STINGER_3 = _world.GetObject(ObjectType.Skill,2008713554);
AMMO_STINGER_3_val = AMMO_STINGER_3.GetFloat(PropertyName.VAL);
AMMO_STINGER_4 = _world.GetObject(ObjectType.Skill,2008713554);
AMMO_STINGER_4.SetFloat(231,AMMO_STINGER_3_val + 2f);
WEAPONSEL_6 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_6_val = WEAPONSEL_6.GetFloat(PropertyName.VAL);
if (WEAPONSEL_6_val < 4f)
{
{
            var enumerator = new SELECTSTINGER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }}
{
            var enumerator = new SHOWAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_9 = MY;
MY_9.SetFloat(204,1f);
GET08STR_10 = _world.AcknexObject.GetAcknexObject(2296235726);
_world.SetSynonymObject(361798934,GET08STR_10);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject HAS_STINGER_1;
IAcknexObject AMMO_STINGER_3;
float AMMO_STINGER_3_val;
IAcknexObject AMMO_STINGER_4;
IAcknexObject WEAPONSEL_6;
float WEAPONSEL_6_val;
IAcknexObject MY_9;
IAcknexObject GET08STR_10;
}
public class PICKUPQUANTUM : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public PICKUPQUANTUM() {
  }
 public PICKUPQUANTUM(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
HAS_QUANTUM_1 = _world.GetObject(ObjectType.Skill,187328435);
HAS_QUANTUM_1.SetFloat(231,1f);
AMMO_QUANTUM_3 = _world.GetObject(ObjectType.Skill,3750407617);
AMMO_QUANTUM_3_val = AMMO_QUANTUM_3.GetFloat(PropertyName.VAL);
AMMO_QUANTUM_4 = _world.GetObject(ObjectType.Skill,3750407617);
AMMO_QUANTUM_4.SetFloat(231,AMMO_QUANTUM_3_val + 5f);
WEAPONSEL_6 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_6_val = WEAPONSEL_6.GetFloat(PropertyName.VAL);
if (WEAPONSEL_6_val < 5f)
{
{
            var enumerator = new SELECTQUANTUM();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }}
{
            var enumerator = new SHOWAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_9 = MY;
MY_9.SetFloat(204,1f);
GET09STR_10 = _world.AcknexObject.GetAcknexObject(2296271663);
_world.SetSynonymObject(361798934,GET09STR_10);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject HAS_QUANTUM_1;
IAcknexObject AMMO_QUANTUM_3;
float AMMO_QUANTUM_3_val;
IAcknexObject AMMO_QUANTUM_4;
IAcknexObject WEAPONSEL_6;
float WEAPONSEL_6_val;
IAcknexObject MY_9;
IAcknexObject GET09STR_10;
}
public class PICKAMMO : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public PICKAMMO() {
  }
 public PICKAMMO(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
AMMO_MP5_1 = _world.GetObject(ObjectType.Skill,1494668136);
AMMO_MP5_1_val = AMMO_MP5_1.GetFloat(PropertyName.VAL);
AMMO_MP5_2 = _world.GetObject(ObjectType.Skill,1494668136);
AMMO_MP5_2.SetFloat(231,AMMO_MP5_1_val + 30f);
{
            var enumerator = new SHOWAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_5 = MY;
MY_5.SetFloat(204,1f);
AMMO01SND_6 = _world.AcknexObject.GetAcknexObject(2022635869);
_world.PlaySound(AMMO01SND_6,0.3f, null);
GET01STR_8 = _world.AcknexObject.GetAcknexObject(2295984167);
_world.SetSynonymObject(361798934,GET01STR_8);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject AMMO_MP5_1;
float AMMO_MP5_1_val;
IAcknexObject AMMO_MP5_2;
IAcknexObject MY_5;
IAcknexObject AMMO01SND_6;
IAcknexObject GET01STR_8;
}
public class PICKGRANADE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public PICKGRANADE() {
  }
 public PICKGRANADE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
HAS_GRANADE_1 = _world.GetObject(ObjectType.Skill,40123194);
HAS_GRANADE_1.SetFloat(231,1f);
AMMO_GRANADE_3 = _world.GetObject(ObjectType.Skill,3603202376);
AMMO_GRANADE_3_val = AMMO_GRANADE_3.GetFloat(PropertyName.VAL);
AMMO_GRANADE_4 = _world.GetObject(ObjectType.Skill,3603202376);
AMMO_GRANADE_4.SetFloat(231,AMMO_GRANADE_3_val + 1f);
{
            var enumerator = new SHOWAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_7 = MY;
MY_7.SetFloat(204,1f);
GRAN01SND_8 = _world.AcknexObject.GetAcknexObject(850576923);
_world.PlaySound(GRAN01SND_8,0.5f, null);
GET05STR_10 = _world.AcknexObject.GetAcknexObject(2296127915);
_world.SetSynonymObject(361798934,GET05STR_10);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject HAS_GRANADE_1;
IAcknexObject AMMO_GRANADE_3;
float AMMO_GRANADE_3_val;
IAcknexObject AMMO_GRANADE_4;
IAcknexObject MY_7;
IAcknexObject GRAN01SND_8;
IAcknexObject GET05STR_10;
}
public class PICKSTINGERAMMO : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public PICKSTINGERAMMO() {
  }
 public PICKSTINGERAMMO(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
AMMO_STINGER_1 = _world.GetObject(ObjectType.Skill,2008713554);
AMMO_STINGER_1_val = AMMO_STINGER_1.GetFloat(PropertyName.VAL);
AMMO_STINGER_2 = _world.GetObject(ObjectType.Skill,2008713554);
AMMO_STINGER_2.SetFloat(231,AMMO_STINGER_1_val + 10f);
{
            var enumerator = new SHOWAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_5 = MY;
MY_5.SetFloat(204,1f);
AMMO01SND_6 = _world.AcknexObject.GetAcknexObject(2022635869);
_world.PlaySound(AMMO01SND_6,0.5f, null);
GET06STR_8 = _world.AcknexObject.GetAcknexObject(2296163852);
_world.SetSynonymObject(361798934,GET06STR_8);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject AMMO_STINGER_1;
float AMMO_STINGER_1_val;
IAcknexObject AMMO_STINGER_2;
IAcknexObject MY_5;
IAcknexObject AMMO01SND_6;
IAcknexObject GET06STR_8;
}
public class PICKQUANTUMAMMO : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public PICKQUANTUMAMMO() {
  }
 public PICKQUANTUMAMMO(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
AMMO_QUANTUM_1 = _world.GetObject(ObjectType.Skill,3750407617);
AMMO_QUANTUM_1_val = AMMO_QUANTUM_1.GetFloat(PropertyName.VAL);
AMMO_QUANTUM_2 = _world.GetObject(ObjectType.Skill,3750407617);
AMMO_QUANTUM_2.SetFloat(231,AMMO_QUANTUM_1_val + 1f);
{
            var enumerator = new SHOWAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_5 = MY;
MY_5.SetFloat(204,1f);
QGUN01SND_6 = _world.AcknexObject.GetAcknexObject(2621950350);
_world.PlaySound(QGUN01SND_6,0.2f, null);
GET07STR_8 = _world.AcknexObject.GetAcknexObject(2296199789);
_world.SetSynonymObject(361798934,GET07STR_8);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject AMMO_QUANTUM_1;
float AMMO_QUANTUM_1_val;
IAcknexObject AMMO_QUANTUM_2;
IAcknexObject MY_5;
IAcknexObject QGUN01SND_6;
IAcknexObject GET07STR_8;
}
public class FLASHREGION : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public FLASHREGION() {
  }
 public FLASHREGION(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
LUP_1 = _world.GetObject(ObjectType.Skill,193463646);
LUP_1_val = LUP_1.GetFloat(PropertyName.VAL);
if (LUP_1_val != 0f)
{
goto IMPL1;
}
MY_3 = MY;
temp_4 =MY_3?.GetAcknexObject(198);
_world.SetSynonymObject(161611586,temp_4);
IMPL_REGION_7 = _world.GetSynonymObject(161611586);
temp_8 =IMPL_REGION_7.GetFloat(112);
NAMBIENT_9 = _world.GetObject(ObjectType.Skill,3149682875);
NAMBIENT_9.SetFloat(231,temp_8);
LAMBIENT_10 = _world.GetObject(ObjectType.Skill,3812142841);
LAMBIENT_11 = _world.GetObject(ObjectType.Skill,3812142841);
LAMBIENT_11_val = LAMBIENT_11.GetFloat(PropertyName.VAL);
NAMBIENT_12 = _world.GetObject(ObjectType.Skill,3149682875);
NAMBIENT_12_val = NAMBIENT_12.GetFloat(PropertyName.VAL);
LAMBIENT_10.SetFloat(231,NAMBIENT_12_val+1f);
LUP_16 = _world.GetObject(ObjectType.Skill,193463646);
LUP_16.SetFloat(231,0.04f);
goto GO;
IMPL1:
LUP1_18 = _world.GetObject(ObjectType.Skill,2089301071);
LUP1_18_val = LUP1_18.GetFloat(PropertyName.VAL);
if (LUP1_18_val != 0f)
{
goto IMPL2;
}
MY_20 = MY;
temp_21 =MY_20?.GetAcknexObject(198);
_world.SetSynonymObject(1038183091,temp_21);
IMPL_REGION1_24 = _world.GetSynonymObject(1038183091);
temp_25 =IMPL_REGION1_24.GetFloat(112);
NAMBIENT1_26 = _world.GetObject(ObjectType.Skill,860287820);
NAMBIENT1_26.SetFloat(231,temp_25);
LAMBIENT1_27 = _world.GetObject(ObjectType.Skill,1246630218);
LAMBIENT1_28 = _world.GetObject(ObjectType.Skill,1246630218);
LAMBIENT1_28_val = LAMBIENT1_28.GetFloat(PropertyName.VAL);
NAMBIENT1_29 = _world.GetObject(ObjectType.Skill,860287820);
NAMBIENT1_29_val = NAMBIENT1_29.GetFloat(PropertyName.VAL);
LAMBIENT1_27.SetFloat(231,NAMBIENT1_29_val+1f);
LUP1_33 = _world.GetObject(ObjectType.Skill,2089301071);
LUP1_33.SetFloat(231,0.04f);
goto GO;
IMPL2:
LUP2_35 = _world.GetObject(ObjectType.Skill,2089301072);
LUP2_35_val = LUP2_35.GetFloat(PropertyName.VAL);
if (LUP2_35_val != 0f)
{
goto IMPL3;
}
MY_37 = MY;
temp_38 =MY_37?.GetAcknexObject(198);
_world.SetSynonymObject(1038183092,temp_38);
IMPL_REGION2_41 = _world.GetSynonymObject(1038183092);
temp_42 =IMPL_REGION2_41.GetFloat(112);
NAMBIENT2_43 = _world.GetObject(ObjectType.Skill,860287821);
NAMBIENT2_43.SetFloat(231,temp_42);
LAMBIENT2_44 = _world.GetObject(ObjectType.Skill,1246630219);
LAMBIENT2_45 = _world.GetObject(ObjectType.Skill,1246630219);
LAMBIENT2_45_val = LAMBIENT2_45.GetFloat(PropertyName.VAL);
NAMBIENT2_46 = _world.GetObject(ObjectType.Skill,860287821);
NAMBIENT2_46_val = NAMBIENT2_46.GetFloat(PropertyName.VAL);
LAMBIENT2_44.SetFloat(231,NAMBIENT2_46_val+1f);
LUP2_50 = _world.GetObject(ObjectType.Skill,2089301072);
LUP2_50.SetFloat(231,0.04f);
goto GO;
IMPL3:
LUP3_52 = _world.GetObject(ObjectType.Skill,2089301073);
LUP3_52_val = LUP3_52.GetFloat(PropertyName.VAL);
if (LUP3_52_val != 0f)
{
goto IMPL4;
}
MY_54 = MY;
temp_55 =MY_54?.GetAcknexObject(198);
_world.SetSynonymObject(1038183093,temp_55);
IMPL_REGION3_58 = _world.GetSynonymObject(1038183093);
temp_59 =IMPL_REGION3_58.GetFloat(112);
NAMBIENT3_60 = _world.GetObject(ObjectType.Skill,860287822);
NAMBIENT3_60.SetFloat(231,temp_59);
LAMBIENT3_61 = _world.GetObject(ObjectType.Skill,1246630220);
LAMBIENT3_62 = _world.GetObject(ObjectType.Skill,1246630220);
LAMBIENT3_62_val = LAMBIENT3_62.GetFloat(PropertyName.VAL);
NAMBIENT3_63 = _world.GetObject(ObjectType.Skill,860287822);
NAMBIENT3_63_val = NAMBIENT3_63.GetFloat(PropertyName.VAL);
LAMBIENT3_61.SetFloat(231,NAMBIENT3_63_val+1f);
LUP3_67 = _world.GetObject(ObjectType.Skill,2089301073);
LUP3_67.SetFloat(231,0.04f);
goto GO;
IMPL4:
LUP4_69 = _world.GetObject(ObjectType.Skill,2089301074);
LUP4_69_val = LUP4_69.GetFloat(PropertyName.VAL);
if (LUP4_69_val != 0f)
{
return false;
}
MY_71 = MY;
temp_72 =MY_71?.GetAcknexObject(198);
_world.SetSynonymObject(1038183094,temp_72);
IMPL_REGION4_75 = _world.GetSynonymObject(1038183094);
temp_76 =IMPL_REGION4_75.GetFloat(112);
NAMBIENT4_77 = _world.GetObject(ObjectType.Skill,860287823);
NAMBIENT4_77.SetFloat(231,temp_76);
LAMBIENT4_78 = _world.GetObject(ObjectType.Skill,1246630221);
LAMBIENT4_79 = _world.GetObject(ObjectType.Skill,1246630221);
LAMBIENT4_79_val = LAMBIENT4_79.GetFloat(PropertyName.VAL);
NAMBIENT4_80 = _world.GetObject(ObjectType.Skill,860287823);
NAMBIENT4_80_val = NAMBIENT4_80.GetFloat(PropertyName.VAL);
LAMBIENT4_78.SetFloat(231,NAMBIENT4_80_val+1f);
LUP4_84 = _world.GetObject(ObjectType.Skill,2089301074);
LUP4_84.SetFloat(231,0.04f);
GO:
temp_88 =_world.AcknexObject?.GetAcknexObject(12);
if (temp_88 == null)
{
IMPLODELIGHT_89 = _world.AcknexObject.GetAcknexObject(1148133871);
_world.AcknexObject.SetAcknexObject(12,IMPLODELIGHT_89);
}
//Unknown keyword: 
      return false;
  }
IAcknexObject LUP_1;
float LUP_1_val;
IAcknexObject MY_3;
IAcknexObject temp_4;
IAcknexObject IMPL_REGION_7;
float temp_8;
IAcknexObject NAMBIENT_9;
IAcknexObject LAMBIENT_10;
IAcknexObject LAMBIENT_11;
float LAMBIENT_11_val;
IAcknexObject NAMBIENT_12;
float NAMBIENT_12_val;
IAcknexObject LUP_16;
IAcknexObject LUP1_18;
float LUP1_18_val;
IAcknexObject MY_20;
IAcknexObject temp_21;
IAcknexObject IMPL_REGION1_24;
float temp_25;
IAcknexObject NAMBIENT1_26;
IAcknexObject LAMBIENT1_27;
IAcknexObject LAMBIENT1_28;
float LAMBIENT1_28_val;
IAcknexObject NAMBIENT1_29;
float NAMBIENT1_29_val;
IAcknexObject LUP1_33;
IAcknexObject LUP2_35;
float LUP2_35_val;
IAcknexObject MY_37;
IAcknexObject temp_38;
IAcknexObject IMPL_REGION2_41;
float temp_42;
IAcknexObject NAMBIENT2_43;
IAcknexObject LAMBIENT2_44;
IAcknexObject LAMBIENT2_45;
float LAMBIENT2_45_val;
IAcknexObject NAMBIENT2_46;
float NAMBIENT2_46_val;
IAcknexObject LUP2_50;
IAcknexObject LUP3_52;
float LUP3_52_val;
IAcknexObject MY_54;
IAcknexObject temp_55;
IAcknexObject IMPL_REGION3_58;
float temp_59;
IAcknexObject NAMBIENT3_60;
IAcknexObject LAMBIENT3_61;
IAcknexObject LAMBIENT3_62;
float LAMBIENT3_62_val;
IAcknexObject NAMBIENT3_63;
float NAMBIENT3_63_val;
IAcknexObject LUP3_67;
IAcknexObject LUP4_69;
float LUP4_69_val;
IAcknexObject MY_71;
IAcknexObject temp_72;
IAcknexObject IMPL_REGION4_75;
float temp_76;
IAcknexObject NAMBIENT4_77;
IAcknexObject LAMBIENT4_78;
IAcknexObject LAMBIENT4_79;
float LAMBIENT4_79_val;
IAcknexObject NAMBIENT4_80;
float NAMBIENT4_80_val;
IAcknexObject LUP4_84;
IAcknexObject temp_88;
IAcknexObject IMPLODELIGHT_89;
}
public class IMPLODELIGHT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public IMPLODELIGHT() {
  }
 public IMPLODELIGHT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
LUP_1 = _world.GetObject(ObjectType.Skill,193463646);
LUP_1_val = LUP_1.GetFloat(PropertyName.VAL);
if (LUP_1_val == 0f)
{
goto LIGHT1;
}
LUP_2 = _world.GetObject(ObjectType.Skill,193463646);
LUP_2_val = LUP_2.GetFloat(PropertyName.VAL);
IMPL_REGION_4 = _world.GetSynonymObject(161611586);
temp_5 =IMPL_REGION_4.GetFloat(112);
IMPL_REGION_7 = _world.GetSynonymObject(161611586);
IMPL_REGION_7.SetFloat(112,temp_5 + LUP_2_val);
LAMBIENT_8 = _world.GetObject(ObjectType.Skill,3812142841);
LAMBIENT_8_val = LAMBIENT_8.GetFloat(PropertyName.VAL);
IMPL_REGION_10 = _world.GetSynonymObject(161611586);
temp_11 =IMPL_REGION_10.GetFloat(112);
if (temp_11 > LAMBIENT_8_val)
{
goto REVERSE;
}
NAMBIENT_12 = _world.GetObject(ObjectType.Skill,3149682875);
NAMBIENT_12_val = NAMBIENT_12.GetFloat(PropertyName.VAL);
IMPL_REGION_14 = _world.GetSynonymObject(161611586);
temp_15 =IMPL_REGION_14.GetFloat(112);
if (temp_15 < NAMBIENT_12_val)
{
goto STOP;
}
goto LIGHT1;
REVERSE:
LUP_17 = _world.GetObject(ObjectType.Skill,193463646);
LUP_17.SetFloat(231,-0.1f);
goto LIGHT1;
STOP:
NAMBIENT_18 = _world.GetObject(ObjectType.Skill,3149682875);
NAMBIENT_18_val = NAMBIENT_18.GetFloat(PropertyName.VAL);
IMPL_REGION_20 = _world.GetSynonymObject(161611586);
IMPL_REGION_20.SetFloat(112,NAMBIENT_18_val);
LUP_22 = _world.GetObject(ObjectType.Skill,193463646);
LUP_22.SetFloat(231,0f);
LIGHT1:
LUP1_24 = _world.GetObject(ObjectType.Skill,2089301071);
LUP1_24_val = LUP1_24.GetFloat(PropertyName.VAL);
if (LUP1_24_val == 0f)
{
goto LIGHT2;
}
LUP1_25 = _world.GetObject(ObjectType.Skill,2089301071);
LUP1_25_val = LUP1_25.GetFloat(PropertyName.VAL);
IMPL_REGION1_27 = _world.GetSynonymObject(1038183091);
temp_28 =IMPL_REGION1_27.GetFloat(112);
IMPL_REGION1_30 = _world.GetSynonymObject(1038183091);
IMPL_REGION1_30.SetFloat(112,temp_28 + LUP1_25_val);
LAMBIENT1_31 = _world.GetObject(ObjectType.Skill,1246630218);
LAMBIENT1_31_val = LAMBIENT1_31.GetFloat(PropertyName.VAL);
IMPL_REGION1_33 = _world.GetSynonymObject(1038183091);
temp_34 =IMPL_REGION1_33.GetFloat(112);
if (temp_34 > LAMBIENT1_31_val)
{
goto REVERSE1;
}
NAMBIENT1_35 = _world.GetObject(ObjectType.Skill,860287820);
NAMBIENT1_35_val = NAMBIENT1_35.GetFloat(PropertyName.VAL);
IMPL_REGION1_37 = _world.GetSynonymObject(1038183091);
temp_38 =IMPL_REGION1_37.GetFloat(112);
if (temp_38 < NAMBIENT1_35_val)
{
goto STOP1;
}
goto LIGHT2;
REVERSE1:
LUP1_40 = _world.GetObject(ObjectType.Skill,2089301071);
LUP1_40.SetFloat(231,-0.1f);
goto LIGHT2;
STOP1:
NAMBIENT1_41 = _world.GetObject(ObjectType.Skill,860287820);
NAMBIENT1_41_val = NAMBIENT1_41.GetFloat(PropertyName.VAL);
IMPL_REGION1_43 = _world.GetSynonymObject(1038183091);
IMPL_REGION1_43.SetFloat(112,NAMBIENT1_41_val);
LUP1_45 = _world.GetObject(ObjectType.Skill,2089301071);
LUP1_45.SetFloat(231,0f);
LIGHT2:
LUP2_47 = _world.GetObject(ObjectType.Skill,2089301072);
LUP2_47_val = LUP2_47.GetFloat(PropertyName.VAL);
if (LUP2_47_val == 0f)
{
goto LIGHT3;
}
LUP2_48 = _world.GetObject(ObjectType.Skill,2089301072);
LUP2_48_val = LUP2_48.GetFloat(PropertyName.VAL);
IMPL_REGION2_50 = _world.GetSynonymObject(1038183092);
temp_51 =IMPL_REGION2_50.GetFloat(112);
IMPL_REGION2_53 = _world.GetSynonymObject(1038183092);
IMPL_REGION2_53.SetFloat(112,temp_51 + LUP2_48_val);
LAMBIENT2_54 = _world.GetObject(ObjectType.Skill,1246630219);
LAMBIENT2_54_val = LAMBIENT2_54.GetFloat(PropertyName.VAL);
IMPL_REGION2_56 = _world.GetSynonymObject(1038183092);
temp_57 =IMPL_REGION2_56.GetFloat(112);
if (temp_57 > LAMBIENT2_54_val)
{
goto REVERSE2;
}
NAMBIENT2_58 = _world.GetObject(ObjectType.Skill,860287821);
NAMBIENT2_58_val = NAMBIENT2_58.GetFloat(PropertyName.VAL);
IMPL_REGION2_60 = _world.GetSynonymObject(1038183092);
temp_61 =IMPL_REGION2_60.GetFloat(112);
if (temp_61 < NAMBIENT2_58_val)
{
goto STOP2;
}
goto LIGHT3;
REVERSE2:
LUP2_63 = _world.GetObject(ObjectType.Skill,2089301072);
LUP2_63.SetFloat(231,-0.1f);
goto LIGHT3;
STOP2:
NAMBIENT2_64 = _world.GetObject(ObjectType.Skill,860287821);
NAMBIENT2_64_val = NAMBIENT2_64.GetFloat(PropertyName.VAL);
IMPL_REGION2_66 = _world.GetSynonymObject(1038183092);
IMPL_REGION2_66.SetFloat(112,NAMBIENT2_64_val);
LUP2_68 = _world.GetObject(ObjectType.Skill,2089301072);
LUP2_68.SetFloat(231,0f);
LIGHT3:
LUP3_70 = _world.GetObject(ObjectType.Skill,2089301073);
LUP3_70_val = LUP3_70.GetFloat(PropertyName.VAL);
if (LUP3_70_val == 0f)
{
goto LIGHT4;
}
LUP3_71 = _world.GetObject(ObjectType.Skill,2089301073);
LUP3_71_val = LUP3_71.GetFloat(PropertyName.VAL);
IMPL_REGION3_73 = _world.GetSynonymObject(1038183093);
temp_74 =IMPL_REGION3_73.GetFloat(112);
IMPL_REGION3_76 = _world.GetSynonymObject(1038183093);
IMPL_REGION3_76.SetFloat(112,temp_74 + LUP3_71_val);
LAMBIENT3_77 = _world.GetObject(ObjectType.Skill,1246630220);
LAMBIENT3_77_val = LAMBIENT3_77.GetFloat(PropertyName.VAL);
IMPL_REGION3_79 = _world.GetSynonymObject(1038183093);
temp_80 =IMPL_REGION3_79.GetFloat(112);
if (temp_80 > LAMBIENT3_77_val)
{
goto REVERSE3;
}
NAMBIENT3_81 = _world.GetObject(ObjectType.Skill,860287822);
NAMBIENT3_81_val = NAMBIENT3_81.GetFloat(PropertyName.VAL);
IMPL_REGION3_83 = _world.GetSynonymObject(1038183093);
temp_84 =IMPL_REGION3_83.GetFloat(112);
if (temp_84 < NAMBIENT3_81_val)
{
goto STOP3;
}
goto LIGHT4;
REVERSE3:
LUP3_86 = _world.GetObject(ObjectType.Skill,2089301073);
LUP3_86.SetFloat(231,-0.1f);
goto LIGHT4;
STOP3:
NAMBIENT3_87 = _world.GetObject(ObjectType.Skill,860287822);
NAMBIENT3_87_val = NAMBIENT3_87.GetFloat(PropertyName.VAL);
IMPL_REGION3_89 = _world.GetSynonymObject(1038183093);
IMPL_REGION3_89.SetFloat(112,NAMBIENT3_87_val);
LUP3_91 = _world.GetObject(ObjectType.Skill,2089301073);
LUP3_91.SetFloat(231,0f);
LIGHT4:
LUP4_93 = _world.GetObject(ObjectType.Skill,2089301074);
LUP4_93_val = LUP4_93.GetFloat(PropertyName.VAL);
if (LUP4_93_val == 0f)
{
goto CHECKEND;
}
LUP4_94 = _world.GetObject(ObjectType.Skill,2089301074);
LUP4_94_val = LUP4_94.GetFloat(PropertyName.VAL);
IMPL_REGION4_96 = _world.GetSynonymObject(1038183094);
temp_97 =IMPL_REGION4_96.GetFloat(112);
IMPL_REGION4_99 = _world.GetSynonymObject(1038183094);
IMPL_REGION4_99.SetFloat(112,temp_97 + LUP4_94_val);
LAMBIENT4_100 = _world.GetObject(ObjectType.Skill,1246630221);
LAMBIENT4_100_val = LAMBIENT4_100.GetFloat(PropertyName.VAL);
IMPL_REGION4_102 = _world.GetSynonymObject(1038183094);
temp_103 =IMPL_REGION4_102.GetFloat(112);
if (temp_103 > LAMBIENT4_100_val)
{
goto REVERSE4;
}
NAMBIENT4_104 = _world.GetObject(ObjectType.Skill,860287823);
NAMBIENT4_104_val = NAMBIENT4_104.GetFloat(PropertyName.VAL);
IMPL_REGION4_106 = _world.GetSynonymObject(1038183094);
temp_107 =IMPL_REGION4_106.GetFloat(112);
if (temp_107 < NAMBIENT4_104_val)
{
goto STOP4;
}
goto CHECKEND;
REVERSE4:
LUP4_109 = _world.GetObject(ObjectType.Skill,2089301074);
LUP4_109.SetFloat(231,-0.1f);
goto CHECKEND;
STOP4:
NAMBIENT4_110 = _world.GetObject(ObjectType.Skill,860287823);
NAMBIENT4_110_val = NAMBIENT4_110.GetFloat(PropertyName.VAL);
IMPL_REGION4_112 = _world.GetSynonymObject(1038183094);
IMPL_REGION4_112.SetFloat(112,NAMBIENT4_110_val);
LUP4_114 = _world.GetObject(ObjectType.Skill,2089301074);
LUP4_114.SetFloat(231,0f);
CHECKEND:
CHECKENDFLAG_116 = _world.GetObject(ObjectType.Skill,4017501180);
CHECKENDFLAG_116.SetFloat(231,0f);
LUP_118 = _world.GetObject(ObjectType.Skill,193463646);
LUP_118_val = LUP_118.GetFloat(PropertyName.VAL);
if (LUP_118_val != 0f)
{
CHECKENDFLAG_120 = _world.GetObject(ObjectType.Skill,4017501180);
CHECKENDFLAG_120_val = CHECKENDFLAG_120.GetFloat(PropertyName.VAL);
CHECKENDFLAG_121 = _world.GetObject(ObjectType.Skill,4017501180);
CHECKENDFLAG_121.SetFloat(231,CHECKENDFLAG_120_val + 1f);
}
LUP1_123 = _world.GetObject(ObjectType.Skill,2089301071);
LUP1_123_val = LUP1_123.GetFloat(PropertyName.VAL);
if (LUP1_123_val != 0f)
{
CHECKENDFLAG_125 = _world.GetObject(ObjectType.Skill,4017501180);
CHECKENDFLAG_125_val = CHECKENDFLAG_125.GetFloat(PropertyName.VAL);
CHECKENDFLAG_126 = _world.GetObject(ObjectType.Skill,4017501180);
CHECKENDFLAG_126.SetFloat(231,CHECKENDFLAG_125_val + 1f);
}
LUP2_128 = _world.GetObject(ObjectType.Skill,2089301072);
LUP2_128_val = LUP2_128.GetFloat(PropertyName.VAL);
if (LUP2_128_val != 0f)
{
CHECKENDFLAG_130 = _world.GetObject(ObjectType.Skill,4017501180);
CHECKENDFLAG_130_val = CHECKENDFLAG_130.GetFloat(PropertyName.VAL);
CHECKENDFLAG_131 = _world.GetObject(ObjectType.Skill,4017501180);
CHECKENDFLAG_131.SetFloat(231,CHECKENDFLAG_130_val + 1f);
}
LUP3_133 = _world.GetObject(ObjectType.Skill,2089301073);
LUP3_133_val = LUP3_133.GetFloat(PropertyName.VAL);
if (LUP3_133_val != 0f)
{
CHECKENDFLAG_135 = _world.GetObject(ObjectType.Skill,4017501180);
CHECKENDFLAG_135_val = CHECKENDFLAG_135.GetFloat(PropertyName.VAL);
CHECKENDFLAG_136 = _world.GetObject(ObjectType.Skill,4017501180);
CHECKENDFLAG_136.SetFloat(231,CHECKENDFLAG_135_val + 1f);
}
LUP4_138 = _world.GetObject(ObjectType.Skill,2089301074);
LUP4_138_val = LUP4_138.GetFloat(PropertyName.VAL);
if (LUP4_138_val != 0f)
{
CHECKENDFLAG_140 = _world.GetObject(ObjectType.Skill,4017501180);
CHECKENDFLAG_140_val = CHECKENDFLAG_140.GetFloat(PropertyName.VAL);
CHECKENDFLAG_141 = _world.GetObject(ObjectType.Skill,4017501180);
CHECKENDFLAG_141.SetFloat(231,CHECKENDFLAG_140_val + 1f);
}
CHECKENDFLAG_143 = _world.GetObject(ObjectType.Skill,4017501180);
CHECKENDFLAG_143_val = CHECKENDFLAG_143.GetFloat(PropertyName.VAL);
if (CHECKENDFLAG_143_val == 0f)
{
_world.AcknexObject.SetAcknexObject(12,null);
}
//Unknown keyword: 
      return false;
  }
IAcknexObject LUP_1;
float LUP_1_val;
IAcknexObject LUP_2;
float LUP_2_val;
IAcknexObject IMPL_REGION_4;
float temp_5;
IAcknexObject IMPL_REGION_7;
IAcknexObject LAMBIENT_8;
float LAMBIENT_8_val;
IAcknexObject IMPL_REGION_10;
float temp_11;
IAcknexObject NAMBIENT_12;
float NAMBIENT_12_val;
IAcknexObject IMPL_REGION_14;
float temp_15;
IAcknexObject LUP_17;
IAcknexObject NAMBIENT_18;
float NAMBIENT_18_val;
IAcknexObject IMPL_REGION_20;
IAcknexObject LUP_22;
IAcknexObject LUP1_24;
float LUP1_24_val;
IAcknexObject LUP1_25;
float LUP1_25_val;
IAcknexObject IMPL_REGION1_27;
float temp_28;
IAcknexObject IMPL_REGION1_30;
IAcknexObject LAMBIENT1_31;
float LAMBIENT1_31_val;
IAcknexObject IMPL_REGION1_33;
float temp_34;
IAcknexObject NAMBIENT1_35;
float NAMBIENT1_35_val;
IAcknexObject IMPL_REGION1_37;
float temp_38;
IAcknexObject LUP1_40;
IAcknexObject NAMBIENT1_41;
float NAMBIENT1_41_val;
IAcknexObject IMPL_REGION1_43;
IAcknexObject LUP1_45;
IAcknexObject LUP2_47;
float LUP2_47_val;
IAcknexObject LUP2_48;
float LUP2_48_val;
IAcknexObject IMPL_REGION2_50;
float temp_51;
IAcknexObject IMPL_REGION2_53;
IAcknexObject LAMBIENT2_54;
float LAMBIENT2_54_val;
IAcknexObject IMPL_REGION2_56;
float temp_57;
IAcknexObject NAMBIENT2_58;
float NAMBIENT2_58_val;
IAcknexObject IMPL_REGION2_60;
float temp_61;
IAcknexObject LUP2_63;
IAcknexObject NAMBIENT2_64;
float NAMBIENT2_64_val;
IAcknexObject IMPL_REGION2_66;
IAcknexObject LUP2_68;
IAcknexObject LUP3_70;
float LUP3_70_val;
IAcknexObject LUP3_71;
float LUP3_71_val;
IAcknexObject IMPL_REGION3_73;
float temp_74;
IAcknexObject IMPL_REGION3_76;
IAcknexObject LAMBIENT3_77;
float LAMBIENT3_77_val;
IAcknexObject IMPL_REGION3_79;
float temp_80;
IAcknexObject NAMBIENT3_81;
float NAMBIENT3_81_val;
IAcknexObject IMPL_REGION3_83;
float temp_84;
IAcknexObject LUP3_86;
IAcknexObject NAMBIENT3_87;
float NAMBIENT3_87_val;
IAcknexObject IMPL_REGION3_89;
IAcknexObject LUP3_91;
IAcknexObject LUP4_93;
float LUP4_93_val;
IAcknexObject LUP4_94;
float LUP4_94_val;
IAcknexObject IMPL_REGION4_96;
float temp_97;
IAcknexObject IMPL_REGION4_99;
IAcknexObject LAMBIENT4_100;
float LAMBIENT4_100_val;
IAcknexObject IMPL_REGION4_102;
float temp_103;
IAcknexObject NAMBIENT4_104;
float NAMBIENT4_104_val;
IAcknexObject IMPL_REGION4_106;
float temp_107;
IAcknexObject LUP4_109;
IAcknexObject NAMBIENT4_110;
float NAMBIENT4_110_val;
IAcknexObject IMPL_REGION4_112;
IAcknexObject LUP4_114;
IAcknexObject CHECKENDFLAG_116;
IAcknexObject LUP_118;
float LUP_118_val;
IAcknexObject CHECKENDFLAG_120;
float CHECKENDFLAG_120_val;
IAcknexObject CHECKENDFLAG_121;
IAcknexObject LUP1_123;
float LUP1_123_val;
IAcknexObject CHECKENDFLAG_125;
float CHECKENDFLAG_125_val;
IAcknexObject CHECKENDFLAG_126;
IAcknexObject LUP2_128;
float LUP2_128_val;
IAcknexObject CHECKENDFLAG_130;
float CHECKENDFLAG_130_val;
IAcknexObject CHECKENDFLAG_131;
IAcknexObject LUP3_133;
float LUP3_133_val;
IAcknexObject CHECKENDFLAG_135;
float CHECKENDFLAG_135_val;
IAcknexObject CHECKENDFLAG_136;
IAcknexObject LUP4_138;
float LUP4_138_val;
IAcknexObject CHECKENDFLAG_140;
float CHECKENDFLAG_140_val;
IAcknexObject CHECKENDFLAG_141;
IAcknexObject CHECKENDFLAG_143;
float CHECKENDFLAG_143_val;
}
public class BOUNCE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public BOUNCE() {
  }
 public BOUNCE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(174);
if (temp_3 < -15f)
{
MY_5 = MY;
temp_6 =MY_5.GetFloat(194);
MY_8 = MY;
MY_8.SetFloat(174,temp_6);
}
GRAN02SND_9 = _world.AcknexObject.GetAcknexObject(850612860);
MY_11 = MY;
_world.PlaySound(GRAN02SND_9,0.7f,MY_11);
MY_14 = MY;
temp_15 =MY_14.GetFloat(173);
if (temp_15 == 0f)
{
goto YWALL;
}
MY_17 = MY;
MY_19 = MY;
temp_20 =MY_19.GetFloat(194);
TWO_PI_21 = _world.GetObject(ObjectType.Skill,578);
TWO_PI_21_val = TWO_PI_21.GetFloat(PropertyName.VAL);
MY_24 = MY;
temp_25 =MY_24.GetFloat(174);
MY_17.SetFloat(194,TWO_PI_21_val-temp_25);
MY_28 = MY;
MY_28.SetFloat(173,0f);
return false;
YWALL:
MY_30 = MY;
MY_32 = MY;
temp_33 =MY_32.GetFloat(194);
PI_34 = _world.GetObject(ObjectType.Skill,577);
PI_34_val = PI_34.GetFloat(PropertyName.VAL);
MY_37 = MY;
temp_38 =MY_37.GetFloat(174);
MY_30.SetFloat(194,PI_34_val-temp_38);
MY_41 = MY;
MY_41.SetFloat(173,1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_5;
float temp_6;
IAcknexObject MY_8;
IAcknexObject GRAN02SND_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
float temp_15;
IAcknexObject MY_17;
IAcknexObject MY_19;
float temp_20;
IAcknexObject TWO_PI_21;
float TWO_PI_21_val;
IAcknexObject MY_24;
float temp_25;
IAcknexObject MY_28;
IAcknexObject MY_30;
IAcknexObject MY_32;
float temp_33;
IAcknexObject PI_34;
float PI_34_val;
IAcknexObject MY_37;
float temp_38;
IAcknexObject MY_41;
}
public class FREEFALL : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public FREEFALL() {
  }
 public FREEFALL(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(174);
if (temp_3 < -15f)
{
goto BOUNCED;
}
MY_5 = MY;
MY_7 = MY;
temp_8 =MY_7.GetFloat(174);
MY_10 = MY;
temp_11 =MY_10.GetFloat(174);
TWO_PI_13 = _world.GetObject(ObjectType.Skill,578);
TWO_PI_13_val = TWO_PI_13.GetFloat(PropertyName.VAL);
MY_5.SetFloat(174,temp_11-TWO_PI_13_val);
BOUNCED:
MY_16 = MY;
temp_17 =MY_16.GetFloat(213);
if (temp_17 == 0f)
{
goto COAST;
}
MY_20 = MY;
temp_21 =MY_20.GetFloat(169);
MY_23 = MY;
MY_23.SetFloat(169,temp_21 + (-0.15f * TimeUtils.TicksToTime(1)));
MY_25 = MY;
temp_26 =MY_25.GetFloat(200);
MY_28 = MY;
temp_29 =MY_28.GetFloat(165);
if (temp_29 > temp_26)
{
return false;
}
MY_31 = MY;
temp_32 =MY_31?.GetAcknexObject(198);
_world.SetSynonymObject(2468751347,temp_32);
WATER_REGION_36 = _world.GetSynonymObject(2468751347);
temp_37 =WATER_REGION_36?.GetAcknexObject(242);
if (temp_37 == null)
{
goto CONT;
}
WATER_REGION_39 = _world.GetSynonymObject(2468751347);
temp_40 =WATER_REGION_39?.GetAcknexObject(234);
MY_42 = MY;
MY_42.SetAcknexObject(198,temp_40);
return false;
CONT:
MY_45 = MY;
temp_46 =MY_45.GetFloat(169);
if (temp_46 > -0.5f)
{
goto STOP;
}
GRAN02SND_47 = _world.AcknexObject.GetAcknexObject(850612860);
MY_49 = MY;
_world.PlaySound(GRAN02SND_47,0.7f,MY_49);
MY_51 = MY;
MY_53 = MY;
temp_54 =MY_53.GetFloat(169);
MY_56 = MY;
temp_57 =MY_56.GetFloat(169);
MY_51.SetFloat(169,temp_57*-0.2f);
return false;
STOP:
MY_63 = MY;
MY_63.SetFloat(213,0f);
MY_66 = MY;
MY_66.SetFloat(165,-0.05f);
MY_69 = MY;
MY_69.SetFloat(169,0f);
COAST:
MY_71 = MY;
MY_73 = MY;
temp_74 =MY_73.GetFloat(168);
MY_76 = MY;
temp_77 =MY_76.GetFloat(168);
MY_71.SetFloat(168,temp_77*0.7f);
MY_82 = MY;
temp_83 =MY_82.GetFloat(168);
if (temp_83 < 0.1f)
{
goto FULLSTOP;
}
return false;
FULLSTOP:
GRAN0TEX_84 = _world.AcknexObject.GetAcknexObject(1197168406);
MY_86 = MY;
MY_86.SetAcknexObject(164,GRAN0TEX_84);
MY_89 = MY;
MY_89.SetFloat(168,0f);
MY_92 = MY;
MY_92.SetAcknexObject(209,null);
MY_95 = MY;
MY_95.SetFloat(177,32f);
EXPLOSIONTIMER_96 = _world.AcknexObject.GetAcknexObject(278490127);
MY_98 = MY;
MY_98.SetAcknexObject(189,EXPLOSIONTIMER_96);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_5;
IAcknexObject MY_7;
float temp_8;
IAcknexObject MY_10;
float temp_11;
IAcknexObject TWO_PI_13;
float TWO_PI_13_val;
IAcknexObject MY_16;
float temp_17;
IAcknexObject MY_20;
float temp_21;
IAcknexObject MY_23;
IAcknexObject MY_25;
float temp_26;
IAcknexObject MY_28;
float temp_29;
IAcknexObject MY_31;
IAcknexObject temp_32;
IAcknexObject WATER_REGION_36;
IAcknexObject temp_37;
IAcknexObject WATER_REGION_39;
IAcknexObject temp_40;
IAcknexObject MY_42;
IAcknexObject MY_45;
float temp_46;
IAcknexObject GRAN02SND_47;
IAcknexObject MY_49;
IAcknexObject MY_51;
IAcknexObject MY_53;
float temp_54;
IAcknexObject MY_56;
float temp_57;
IAcknexObject MY_63;
IAcknexObject MY_66;
IAcknexObject MY_69;
IAcknexObject MY_71;
IAcknexObject MY_73;
float temp_74;
IAcknexObject MY_76;
float temp_77;
IAcknexObject MY_82;
float temp_83;
IAcknexObject GRAN0TEX_84;
IAcknexObject MY_86;
IAcknexObject MY_89;
IAcknexObject MY_92;
IAcknexObject MY_95;
IAcknexObject EXPLOSIONTIMER_96;
IAcknexObject MY_98;
}
public class EXPLOSIONTIMER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public EXPLOSIONTIMER() {
  }
 public EXPLOSIONTIMER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(177);
MY_5 = MY;
MY_5.SetFloat(177,temp_3 + (-1f * TimeUtils.TicksToTime(1)));
MY_8 = MY;
temp_9 =MY_8.GetFloat(177);
if (temp_9 > 0f)
{
return false;
}
MY_12 = MY;
MY_12.SetAcknexObject(189,null);
EXPLODEMISSILE_13 = _world.AcknexObject.GetAcknexObject(3869018100);
MY_15 = MY;
MY_15.SetAcknexObject(190,EXPLODEMISSILE_13);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_5;
IAcknexObject MY_8;
float temp_9;
IAcknexObject MY_12;
IAcknexObject EXPLODEMISSILE_13;
IAcknexObject MY_15;
}
public class INIT_MOVE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public INIT_MOVE() {
  }
 public INIT_MOVE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MODE_GEHEN_0 = _world.GetObject(ObjectType.Skill,3270985304);
MODE_GEHEN_0_val = MODE_GEHEN_0.GetFloat(PropertyName.VAL);
MOVING_1 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_1.SetFloat(231,MODE_GEHEN_0_val);
{
            var enumerator = new SET_MOVING();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject MODE_GEHEN_0;
float MODE_GEHEN_0_val;
IAcknexObject MOVING_1;
}
public class MOVE_ME : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public MOVE_ME() {
  }
 public MOVE_ME(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
START:
MODE_GEHEN_0 = _world.GetObject(ObjectType.Skill,3270985304);
MODE_GEHEN_0_val = MODE_GEHEN_0.GetFloat(PropertyName.VAL);
MOVING_1 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_1_val = MOVING_1.GetFloat(PropertyName.VAL);
if (MOVING_1_val == MODE_GEHEN_0_val)
{
PLAYER_SIZE_2 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_3 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_3_val = PLAYER_SIZE_3.GetFloat(PropertyName.VAL);
MY_SIZE_4 = _world.GetObject(ObjectType.Skill,25486605);
MY_SIZE_4_val = MY_SIZE_4.GetFloat(PropertyName.VAL);
WALK_8 = _world.GetObject(ObjectType.Skill,427);
WALK_8_val = WALK_8.GetFloat(PropertyName.VAL);
PLAYER_SIZE_2.SetFloat(231,MY_SIZE_4_val+0.15f*WALK_8_val);
}
MODE_SCHWIMMEN_9 = _world.GetObject(ObjectType.Skill,3755117404);
MODE_SCHWIMMEN_9_val = MODE_SCHWIMMEN_9.GetFloat(PropertyName.VAL);
MOVING_10 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_10_val = MOVING_10.GetFloat(PropertyName.VAL);
if (MOVING_10_val == MODE_SCHWIMMEN_9_val)
{
PLAYER_SIZE_11 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_12 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_12_val = PLAYER_SIZE_12.GetFloat(PropertyName.VAL);
WAVE_17 = _world.GetObject(ObjectType.Skill,428);
WAVE_17_val = WAVE_17.GetFloat(PropertyName.VAL);
PLAYER_SIZE_11.SetFloat(231,1f+0.12f*WAVE_17_val);
}
MODE_TAUCHEN_18 = _world.GetObject(ObjectType.Skill,1042033433);
MODE_TAUCHEN_18_val = MODE_TAUCHEN_18.GetFloat(PropertyName.VAL);
MOVING_19 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_19_val = MOVING_19.GetFloat(PropertyName.VAL);
if (MOVING_19_val == MODE_TAUCHEN_18_val)
{
PLAYER_SIZE_20 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_21 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_21_val = PLAYER_SIZE_21.GetFloat(PropertyName.VAL);
PLAYER_SIZE_20.SetFloat(231,1f);
}
MODE_DEATH_23 = _world.GetObject(ObjectType.Skill,3267420407);
MODE_DEATH_23_val = MODE_DEATH_23.GetFloat(PropertyName.VAL);
MOVING_24 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_24_val = MOVING_24.GetFloat(PropertyName.VAL);
if (MOVING_24_val == MODE_DEATH_23_val)
{
PLAYER_SIZE_25 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_26 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_26_val = PLAYER_SIZE_26.GetFloat(PropertyName.VAL);
PLAYER_SIZE_27 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_27_val = PLAYER_SIZE_27.GetFloat(PropertyName.VAL);
PLAYER_SIZE_25.SetFloat(231,PLAYER_SIZE_27_val*0.9f);
}
MODE_GEHEN_30 = _world.GetObject(ObjectType.Skill,3270985304);
MODE_GEHEN_30_val = MODE_GEHEN_30.GetFloat(PropertyName.VAL);
MOVING_31 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_31_val = MOVING_31.GetFloat(PropertyName.VAL);
if (MOVING_31_val == MODE_GEHEN_30_val)
{
PLAYER_SIZE_32 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_33 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_33_val = PLAYER_SIZE_33.GetFloat(PropertyName.VAL);
PLAYER_SIZE_34 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_34_val = PLAYER_SIZE_34.GetFloat(PropertyName.VAL);
PLAYER_DEPTH_36 = _world.GetObject(ObjectType.Skill,466);
PLAYER_DEPTH_36_val = PLAYER_DEPTH_36.GetFloat(PropertyName.VAL);
PLAYER_SIZE_32.SetFloat(231,PLAYER_SIZE_34_val-PLAYER_DEPTH_36_val);
}
NO_WATEN:
MODE_SCHWIMMEN_37 = _world.GetObject(ObjectType.Skill,3755117404);
MODE_SCHWIMMEN_37_val = MODE_SCHWIMMEN_37.GetFloat(PropertyName.VAL);
MOVING_38 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_38_val = MOVING_38.GetFloat(PropertyName.VAL);
if (MOVING_38_val != MODE_SCHWIMMEN_37_val)
{
goto NO_SWIM;
}
PLAYER_DEPTH_40 = _world.GetObject(ObjectType.Skill,466);
PLAYER_DEPTH_40_val = PLAYER_DEPTH_40.GetFloat(PropertyName.VAL);
if (PLAYER_DEPTH_40_val > 1.5f)
{
goto NO_WATER;
}
{
            var enumerator = new SET_WALKING();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }goto START;
NO_SWIM:
MODE_GEHEN_41 = _world.GetObject(ObjectType.Skill,3270985304);
MODE_GEHEN_41_val = MODE_GEHEN_41.GetFloat(PropertyName.VAL);
MOVING_42 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_42_val = MOVING_42.GetFloat(PropertyName.VAL);
if (MOVING_42_val != MODE_GEHEN_41_val)
{
goto NO_WATER;
}
PLAYER_DEPTH_44 = _world.GetObject(ObjectType.Skill,466);
PLAYER_DEPTH_44_val = PLAYER_DEPTH_44.GetFloat(PropertyName.VAL);
if (PLAYER_DEPTH_44_val < 2.5f)
{
goto NO_WATER;
}
{
            var enumerator = new SET_SWIMMING();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }goto START;
NO_WATER:
MOUSE_MIDDLE_46 = _world.GetObject(ObjectType.Skill,472);
MOUSE_MIDDLE_46_val = MOUSE_MIDDLE_46.GetFloat(PropertyName.VAL);
if (MOUSE_MIDDLE_46_val == 0f)
{
goto NO_MOUSE;
}
KEY_SENSE_47 = _world.GetObject(ObjectType.Skill,475);
KEY_SENSE_47_val = KEY_SENSE_47.GetFloat(PropertyName.VAL);
FORCE_AHEAD_48 = _world.GetObject(ObjectType.Skill,480);
FORCE_AHEAD_48.SetFloat(231,KEY_SENSE_47_val);
FORCE_AHEAD_49 = _world.GetObject(ObjectType.Skill,480);
FORCE_AHEAD_49_val = FORCE_AHEAD_49.GetFloat(PropertyName.VAL);
FORCEFORWARD_50 = _world.GetObject(ObjectType.Skill,590185617);
FORCEFORWARD_50.SetFloat(231,FORCE_AHEAD_49_val);
KEY_SHIFT_52 = _world.GetObject(ObjectType.Skill,554);
KEY_SHIFT_52_val = KEY_SHIFT_52.GetFloat(PropertyName.VAL);
if (KEY_SHIFT_52_val == 1f)
{
FORCE_AHEAD_53 = _world.GetObject(ObjectType.Skill,480);
FORCE_AHEAD_54 = _world.GetObject(ObjectType.Skill,480);
FORCE_AHEAD_54_val = FORCE_AHEAD_54.GetFloat(PropertyName.VAL);
FORCE_AHEAD_55 = _world.GetObject(ObjectType.Skill,480);
FORCE_AHEAD_55_val = FORCE_AHEAD_55.GetFloat(PropertyName.VAL);
SHIFT_SENSE_57 = _world.GetObject(ObjectType.Skill,476);
SHIFT_SENSE_57_val = SHIFT_SENSE_57.GetFloat(PropertyName.VAL);
FORCE_AHEAD_53.SetFloat(231,FORCE_AHEAD_55_val*SHIFT_SENSE_57_val);
}
NO_MOUSE:
FORCE_AHEAD_58 = _world.GetObject(ObjectType.Skill,480);
FORCE_AHEAD_58_val = FORCE_AHEAD_58.GetFloat(PropertyName.VAL);
FORCEFORWARD_59 = _world.GetObject(ObjectType.Skill,590185617);
FORCEFORWARD_59.SetFloat(231,FORCE_AHEAD_58_val);
FORCE_STRAFE_60 = _world.GetObject(ObjectType.Skill,481);
FORCE_STRAFE_60_val = FORCE_STRAFE_60.GetFloat(PropertyName.VAL);
FORCESIDEWARD_61 = _world.GetObject(ObjectType.Skill,2557859023);
FORCESIDEWARD_61.SetFloat(231,FORCE_STRAFE_60_val);
FORCE_ROT_62 = _world.GetObject(ObjectType.Skill,482);
FORCE_ROT_62_val = FORCE_ROT_62.GetFloat(PropertyName.VAL);
FORCEROTATION_63 = _world.GetObject(ObjectType.Skill,2669285644);
FORCEROTATION_63.SetFloat(231,FORCE_ROT_62_val);
MOUSE_RIGHT_65 = _world.GetObject(ObjectType.Skill,473);
MOUSE_RIGHT_65_val = MOUSE_RIGHT_65.GetFloat(PropertyName.VAL);
if (MOUSE_RIGHT_65_val == 1f)
{
FORCEFORWARD_67 = _world.GetObject(ObjectType.Skill,590185617);
FORCEFORWARD_67.SetFloat(231,2f);
}
KEY_ALT_69 = _world.GetObject(ObjectType.Skill,522);
KEY_ALT_69_val = KEY_ALT_69.GetFloat(PropertyName.VAL);
if (KEY_ALT_69_val != 1f)
{
goto NOALT;
}
FORCE_STRAFE_70 = _world.GetObject(ObjectType.Skill,481);
FORCE_STRAFE_70_val = FORCE_STRAFE_70.GetFloat(PropertyName.VAL);
FORCEROTATION_71 = _world.GetObject(ObjectType.Skill,2669285644);
FORCEROTATION_71.SetFloat(231,FORCE_STRAFE_70_val);
FORCESIDEWARD_73 = _world.GetObject(ObjectType.Skill,2557859023);
FORCESIDEWARD_73.SetFloat(231,0f);
FORCEFORWARD_75 = _world.GetObject(ObjectType.Skill,590185617);
FORCEFORWARD_75.SetFloat(231,0f);
NOALT:
BOOSTER_77 = _world.GetObject(ObjectType.Skill,2588890763);
BOOSTER_77.SetFloat(231,1f);
MASS_78 = _world.GetObject(ObjectType.Skill,2089315361);
MASS_78_val = MASS_78.GetFloat(PropertyName.VAL);
INERTIA_79 = _world.GetObject(ObjectType.Skill,438);
INERTIA_79.SetFloat(231,MASS_78_val);
FRICTION_80 = _world.GetObject(ObjectType.Skill,437);
FRICTION_81 = _world.GetObject(ObjectType.Skill,437);
FRICTION_81_val = FRICTION_81.GetFloat(PropertyName.VAL);
FRIC_82 = _world.GetObject(ObjectType.Skill,2089081969);
FRIC_82_val = FRIC_82.GetFloat(PropertyName.VAL);
DEPTH_86 = _world.GetObject(ObjectType.Skill,217365474);
DEPTH_86_val = DEPTH_86.GetFloat(PropertyName.VAL);
FRICTION_80.SetFloat(231,FRIC_82_val+0.1f*DEPTH_86_val);
FORCE_87 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_88 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_88_val = FORCE_88.GetFloat(PropertyName.VAL);
STRENGTH_90 = _world.GetObject(ObjectType.Skill,461037372);
STRENGTH_90_val = STRENGTH_90.GetFloat(PropertyName.VAL);
WAVE_STR_92 = _world.GetObject(ObjectType.Skill,525195384);
WAVE_STR_92_val = WAVE_STR_92.GetFloat(PropertyName.VAL);
WAVE_94 = _world.GetObject(ObjectType.Skill,428);
WAVE_94_val = WAVE_94.GetFloat(PropertyName.VAL);
BOOSTER_97 = _world.GetObject(ObjectType.Skill,2588890763);
BOOSTER_97_val = BOOSTER_97.GetFloat(PropertyName.VAL);
FORCEFORWARD_100 = _world.GetObject(ObjectType.Skill,590185617);
FORCEFORWARD_100_val = FORCEFORWARD_100.GetFloat(PropertyName.VAL);
PLAYER_COS_102 = _world.GetObject(ObjectType.Skill,464);
PLAYER_COS_102_val = PLAYER_COS_102.GetFloat(PropertyName.VAL);
FORCESIDEWARD_106 = _world.GetObject(ObjectType.Skill,2557859023);
FORCESIDEWARD_106_val = FORCESIDEWARD_106.GetFloat(PropertyName.VAL);
PLAYER_SIN_108 = _world.GetObject(ObjectType.Skill,463);
PLAYER_SIN_108_val = PLAYER_SIN_108.GetFloat(PropertyName.VAL);
DRIFT_X_111 = _world.GetObject(ObjectType.Skill,986683741);
DRIFT_X_111_val = DRIFT_X_111.GetFloat(PropertyName.VAL);
FORCE_87.SetFloat(231,(STRENGTH_90_val+WAVE_STR_92_val*WAVE_94_val)*BOOSTER_97_val*(FORCEFORWARD_100_val*PLAYER_COS_102_val-0.5f*FORCESIDEWARD_106_val*PLAYER_SIN_108_val)+DRIFT_X_111_val);
FORCE_112 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_112_val = FORCE_112.GetFloat(PropertyName.VAL);
PLAYER_VX_113 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_113_val = PLAYER_VX_113.GetFloat(PropertyName.VAL);
PLAYER_VX_114 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_114.SetFloat(231,_world.Accelerate(PLAYER_VX_113_val,FORCE_112_val));
FORCE_115 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_116 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_116_val = FORCE_116.GetFloat(PropertyName.VAL);
STRENGTH_118 = _world.GetObject(ObjectType.Skill,461037372);
STRENGTH_118_val = STRENGTH_118.GetFloat(PropertyName.VAL);
WAVE_STR_120 = _world.GetObject(ObjectType.Skill,525195384);
WAVE_STR_120_val = WAVE_STR_120.GetFloat(PropertyName.VAL);
WAVE_122 = _world.GetObject(ObjectType.Skill,428);
WAVE_122_val = WAVE_122.GetFloat(PropertyName.VAL);
BOOSTER_125 = _world.GetObject(ObjectType.Skill,2588890763);
BOOSTER_125_val = BOOSTER_125.GetFloat(PropertyName.VAL);
FORCEFORWARD_128 = _world.GetObject(ObjectType.Skill,590185617);
FORCEFORWARD_128_val = FORCEFORWARD_128.GetFloat(PropertyName.VAL);
PLAYER_SIN_130 = _world.GetObject(ObjectType.Skill,463);
PLAYER_SIN_130_val = PLAYER_SIN_130.GetFloat(PropertyName.VAL);
FORCESIDEWARD_134 = _world.GetObject(ObjectType.Skill,2557859023);
FORCESIDEWARD_134_val = FORCESIDEWARD_134.GetFloat(PropertyName.VAL);
PLAYER_COS_136 = _world.GetObject(ObjectType.Skill,464);
PLAYER_COS_136_val = PLAYER_COS_136.GetFloat(PropertyName.VAL);
DRIFT_Y_139 = _world.GetObject(ObjectType.Skill,986683742);
DRIFT_Y_139_val = DRIFT_Y_139.GetFloat(PropertyName.VAL);
FORCE_115.SetFloat(231,(STRENGTH_118_val+WAVE_STR_120_val*WAVE_122_val)*BOOSTER_125_val*(FORCEFORWARD_128_val*PLAYER_SIN_130_val+0.5f*FORCESIDEWARD_134_val*PLAYER_COS_136_val)+DRIFT_Y_139_val);
FORCE_140 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_140_val = FORCE_140.GetFloat(PropertyName.VAL);
PLAYER_VY_141 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_141_val = PLAYER_VY_141.GetFloat(PropertyName.VAL);
PLAYER_VY_142 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_142.SetFloat(231,_world.Accelerate(PLAYER_VY_141_val,FORCE_140_val));
FRICTION_144 = _world.GetObject(ObjectType.Skill,437);
FRICTION_144.SetFloat(231,0.5f);
MODE_GEHEN_145 = _world.GetObject(ObjectType.Skill,3270985304);
MODE_GEHEN_145_val = MODE_GEHEN_145.GetFloat(PropertyName.VAL);
MOVING_146 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_146_val = MOVING_146.GetFloat(PropertyName.VAL);
if (MOVING_146_val != MODE_GEHEN_145_val)
{
FRICTION_148 = _world.GetObject(ObjectType.Skill,437);
FRICTION_148.SetFloat(231,0.85f);
}
FORCE_149 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_150 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_150_val = FORCE_150.GetFloat(PropertyName.VAL);
FORCEROTATION_153 = _world.GetObject(ObjectType.Skill,2669285644);
FORCEROTATION_153_val = FORCEROTATION_153.GetFloat(PropertyName.VAL);
FORCE_149.SetFloat(231,0.05f*FORCEROTATION_153_val);
FORCE_154 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_154_val = FORCE_154.GetFloat(PropertyName.VAL);
PLAYER_VROT_155 = _world.GetObject(ObjectType.Skill,434);
PLAYER_VROT_155_val = PLAYER_VROT_155.GetFloat(PropertyName.VAL);
PLAYER_VROT_156 = _world.GetObject(ObjectType.Skill,434);
PLAYER_VROT_156.SetFloat(231,_world.Accelerate(PLAYER_VROT_155_val,FORCE_154_val));
WEAPONWAVE_157 = _world.GetObject(ObjectType.Skill,3283454442);
WEAPONWAVE_158 = _world.GetObject(ObjectType.Skill,3283454442);
WEAPONWAVE_158_val = WEAPONWAVE_158.GetFloat(PropertyName.VAL);
WAVE_159 = _world.GetObject(ObjectType.Skill,428);
WAVE_159_val = WAVE_159.GetFloat(PropertyName.VAL);
PLAYER_SPEED_161 = _world.GetObject(ObjectType.Skill,465);
PLAYER_SPEED_161_val = PLAYER_SPEED_161.GetFloat(PropertyName.VAL);
WEAPONWAVE_157.SetFloat(231,WAVE_159_val*PLAYER_SPEED_161_val);
MP5_01OVL_163 = _world.AcknexObject.GetAcknexObject(2701560848);
MP5_01OVL_165 = _world.AcknexObject.GetAcknexObject(2701560848);
temp_166 =MP5_01OVL_165.GetFloat(225);
WEAPONWAVE_171 = _world.GetObject(ObjectType.Skill,3283454442);
WEAPONWAVE_171_val = WEAPONWAVE_171.GetFloat(PropertyName.VAL);
MP5_01OVL_163.SetFloat(225,100f+12f*WEAPONWAVE_171_val);
QGUN00OVL_173 = _world.AcknexObject.GetAcknexObject(2621910329);
QGUN00OVL_175 = _world.AcknexObject.GetAcknexObject(2621910329);
temp_176 =QGUN00OVL_175.GetFloat(225);
WEAPONWAVE_181 = _world.GetObject(ObjectType.Skill,3283454442);
WEAPONWAVE_181_val = WEAPONWAVE_181.GetFloat(PropertyName.VAL);
QGUN00OVL_173.SetFloat(225,190f+6f*WEAPONWAVE_181_val);
GRAN00OVL_183 = _world.AcknexObject.GetAcknexObject(850536902);
GRAN00OVL_185 = _world.AcknexObject.GetAcknexObject(850536902);
temp_186 =GRAN00OVL_185.GetFloat(225);
WEAPONWAVE_191 = _world.GetObject(ObjectType.Skill,3283454442);
WEAPONWAVE_191_val = WEAPONWAVE_191.GetFloat(PropertyName.VAL);
GRAN00OVL_183.SetFloat(225,184f+6f*WEAPONWAVE_191_val);
FORCE_192 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_193 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_193_val = FORCE_193.GetFloat(PropertyName.VAL);
GRAVITY_194 = _world.GetObject(ObjectType.Skill,557195635);
GRAVITY_194_val = GRAVITY_194.GetFloat(PropertyName.VAL);
FLOAT_STR_196 = _world.GetObject(ObjectType.Skill,1319913115);
FLOAT_STR_196_val = FLOAT_STR_196.GetFloat(PropertyName.VAL);
FORCE_UP_198 = _world.GetObject(ObjectType.Skill,484);
FORCE_UP_198_val = FORCE_UP_198.GetFloat(PropertyName.VAL);
FORCE_192.SetFloat(231,GRAVITY_194_val+FLOAT_STR_196_val*FORCE_UP_198_val);
FRIC_AIR_199 = _world.GetObject(ObjectType.Skill,1830104876);
FRIC_AIR_199_val = FRIC_AIR_199.GetFloat(PropertyName.VAL);
FRICTION_200 = _world.GetObject(ObjectType.Skill,437);
FRICTION_200.SetFloat(231,FRIC_AIR_199_val);
PLAYER_HGT_202 = _world.GetObject(ObjectType.Skill,479);
PLAYER_HGT_202_val = PLAYER_HGT_202.GetFloat(PropertyName.VAL);
if (PLAYER_HGT_202_val > 0f)
{
goto AIRBORNE;
}
FRICTION_204 = _world.GetObject(ObjectType.Skill,437);
FRICTION_204.SetFloat(231,0.98f);
FORCE_205 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_206 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_206_val = FORCE_206.GetFloat(PropertyName.VAL);
FORCE_207 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_207_val = FORCE_207.GetFloat(PropertyName.VAL);
PLAYER_HGT_211 = _world.GetObject(ObjectType.Skill,479);
PLAYER_HGT_211_val = PLAYER_HGT_211.GetFloat(PropertyName.VAL);
FORCE_205.SetFloat(231,FORCE_207_val-0.2f*PLAYER_HGT_211_val);
FALLING_HEIGHT_213 = _world.GetObject(ObjectType.Skill,4024852386);
FALLING_HEIGHT_213_val = FALLING_HEIGHT_213.GetFloat(PropertyName.VAL);
if (FALLING_HEIGHT_213_val == 0f)
{
goto AIRBORNE;
}
HERE_216 = _world.GetSynonymObject(703);
temp_217 =HERE_216?.GetAcknexObject(242);
if (temp_217 == null)
{
goto FELL;
}
FALLING_HEIGHT_219 = _world.GetObject(ObjectType.Skill,4024852386);
FALLING_HEIGHT_219.SetFloat(231,0f);
FWT01SND_220 = _world.AcknexObject.GetAcknexObject(103833604);
_world.PlaySound(FWT01SND_220,0.5f, null);
goto AIRBORNE;
FELL:
FALLING_FLOOR_222 = _world.GetObject(ObjectType.Skill,3373615819);
FALLING_FLOOR_222_val = FALLING_FLOOR_222.GetFloat(PropertyName.VAL);
HERE_224 = _world.GetSynonymObject(703);
temp_225 =HERE_224.GetFloat(200);
if (temp_225 > FALLING_FLOOR_222_val)
{
FALLING_HEIGHT_226 = _world.GetObject(ObjectType.Skill,4024852386);
FALLING_HEIGHT_227 = _world.GetObject(ObjectType.Skill,4024852386);
FALLING_HEIGHT_227_val = FALLING_HEIGHT_227.GetFloat(PropertyName.VAL);
FALLING_HEIGHT_228 = _world.GetObject(ObjectType.Skill,4024852386);
FALLING_HEIGHT_228_val = FALLING_HEIGHT_228.GetFloat(PropertyName.VAL);
HERE_231 = _world.GetSynonymObject(703);
temp_232 =HERE_231.GetFloat(200);
FALLING_FLOOR_234 = _world.GetObject(ObjectType.Skill,3373615819);
FALLING_FLOOR_234_val = FALLING_FLOOR_234.GetFloat(PropertyName.VAL);
FALLING_HEIGHT_226.SetFloat(231,FALLING_HEIGHT_228_val-temp_232+FALLING_FLOOR_234_val);
}
FCT01SND_235 = _world.AcknexObject.GetAcknexObject(44278000);
_world.PlaySound(FCT01SND_235,0.5f, null);
PLAYER_RESULT_237 = _world.GetObject(ObjectType.Skill,1861765784);
PLAYER_RESULT_238 = _world.GetObject(ObjectType.Skill,1861765784);
PLAYER_RESULT_238_val = PLAYER_RESULT_238.GetFloat(PropertyName.VAL);
FALLING_HEIGHT_240 = _world.GetObject(ObjectType.Skill,4024852386);
FALLING_HEIGHT_240_val = FALLING_HEIGHT_240.GetFloat(PropertyName.VAL);
PLAYER_RESULT_237.SetFloat(231,(FALLING_HEIGHT_240_val-6f)/2f);
PLAYER_RESULT_247 = _world.GetObject(ObjectType.Skill,1861765784);
PLAYER_RESULT_247_val = PLAYER_RESULT_247.GetFloat(PropertyName.VAL);
if (PLAYER_RESULT_247_val > 0f)
{
{
            var enumerator = new HITPLAYER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }}
FALLING_HEIGHT_249 = _world.GetObject(ObjectType.Skill,4024852386);
FALLING_HEIGHT_249.SetFloat(231,0f);
AIRBORNE:
FORCE_250 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_250_val = FORCE_250.GetFloat(PropertyName.VAL);
PLAYER_VZ_251 = _world.GetObject(ObjectType.Skill,433);
PLAYER_VZ_251_val = PLAYER_VZ_251.GetFloat(PropertyName.VAL);
PLAYER_VZ_252 = _world.GetObject(ObjectType.Skill,433);
PLAYER_VZ_252.SetFloat(231,_world.Accelerate(PLAYER_VZ_251_val,FORCE_250_val));
PLAYER_HGT_254 = _world.GetObject(ObjectType.Skill,479);
PLAYER_HGT_254_val = PLAYER_HGT_254.GetFloat(PropertyName.VAL);
if (PLAYER_HGT_254_val < 2f)
{
goto AIRBORNE2;
}
HERE_257 = _world.GetSynonymObject(703);
temp_258 =HERE_257?.GetAcknexObject(243);
if (temp_258 != null)
{
goto AIRBORNE2;
}
HERE_261 = _world.GetSynonymObject(703);
temp_262 =HERE_261?.GetAcknexObject(242);
if (temp_262 != null)
{
goto AIRBORNE2;
}
FALLING_HEIGHT_263 = _world.GetObject(ObjectType.Skill,4024852386);
FALLING_HEIGHT_263_val = FALLING_HEIGHT_263.GetFloat(PropertyName.VAL);
PLAYER_HGT_264 = _world.GetObject(ObjectType.Skill,479);
PLAYER_HGT_264_val = PLAYER_HGT_264.GetFloat(PropertyName.VAL);
if (PLAYER_HGT_264_val > FALLING_HEIGHT_263_val)
{
goto FALLING;
}
goto AIRBORNE2;
FALLING:
HERE_266 = _world.GetSynonymObject(703);
temp_267 =HERE_266.GetFloat(200);
FALLING_FLOOR_268 = _world.GetObject(ObjectType.Skill,3373615819);
FALLING_FLOOR_268.SetFloat(231,temp_267);
PLAYER_HGT_269 = _world.GetObject(ObjectType.Skill,479);
PLAYER_HGT_269_val = PLAYER_HGT_269.GetFloat(PropertyName.VAL);
FALLING_HEIGHT_270 = _world.GetObject(ObjectType.Skill,4024852386);
FALLING_HEIGHT_270.SetFloat(231,PLAYER_HGT_269_val);
AIRBORNE2:
DUCK_VAL_271 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_272 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_272_val = DUCK_VAL_272.GetFloat(PropertyName.VAL);
DUCK_VAL_275 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_275_val = DUCK_VAL_275.GetFloat(PropertyName.VAL);
DUCK_VAL_271.SetFloat(231,0.8f*DUCK_VAL_275_val);
MODE_SCHWIMMEN_276 = _world.GetObject(ObjectType.Skill,3755117404);
MODE_SCHWIMMEN_276_val = MODE_SCHWIMMEN_276.GetFloat(PropertyName.VAL);
MOVING_277 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_277_val = MOVING_277.GetFloat(PropertyName.VAL);
if (MOVING_277_val == MODE_SCHWIMMEN_276_val)
{
goto DUCK;
}
FORCE_UP_279 = _world.GetObject(ObjectType.Skill,484);
FORCE_UP_279_val = FORCE_UP_279.GetFloat(PropertyName.VAL);
if (FORCE_UP_279_val > 0f)
{
goto NO_DUCK;
}
DUCK:
DUCK_VAL_280 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_281 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_281_val = DUCK_VAL_281.GetFloat(PropertyName.VAL);
DUCK_VAL_282 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_282_val = DUCK_VAL_282.GetFloat(PropertyName.VAL);
DUCK_STR_284 = _world.GetObject(ObjectType.Skill,1846696428);
DUCK_STR_284_val = DUCK_STR_284.GetFloat(PropertyName.VAL);
FORCE_UP_286 = _world.GetObject(ObjectType.Skill,484);
FORCE_UP_286_val = FORCE_UP_286.GetFloat(PropertyName.VAL);
DUCK_VAL_280.SetFloat(231,DUCK_VAL_282_val+DUCK_STR_284_val*FORCE_UP_286_val);
NO_DUCK:
PLAYER_SIZE_287 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_288 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_288_val = PLAYER_SIZE_288.GetFloat(PropertyName.VAL);
PLAYER_SIZE_289 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_289_val = PLAYER_SIZE_289.GetFloat(PropertyName.VAL);
DUCK_VAL_291 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_291_val = DUCK_VAL_291.GetFloat(PropertyName.VAL);
PLAYER_SIZE_287.SetFloat(231,PLAYER_SIZE_289_val+DUCK_VAL_291_val);
MODE_GEHEN_292 = _world.GetObject(ObjectType.Skill,3270985304);
MODE_GEHEN_292_val = MODE_GEHEN_292.GetFloat(PropertyName.VAL);
MOVING_293 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_293_val = MOVING_293.GetFloat(PropertyName.VAL);
if (MOVING_293_val != MODE_GEHEN_292_val)
{
goto NO_JUMP;
}
JUMP_PHASE_295 = _world.GetObject(ObjectType.Skill,259503833);
JUMP_PHASE_295_val = JUMP_PHASE_295.GetFloat(PropertyName.VAL);
if (JUMP_PHASE_295_val > 0f)
{
goto JUMP_1;
}
FORCE_UP_297 = _world.GetObject(ObjectType.Skill,484);
FORCE_UP_297_val = FORCE_UP_297.GetFloat(PropertyName.VAL);
if (FORCE_UP_297_val < 0.1f)
{
goto NO_JUMP;
}
JUMP_PHASE_299 = _world.GetObject(ObjectType.Skill,259503833);
JUMP_PHASE_299.SetFloat(231,1f);
JUMP_1:
JUMP_PHASE_301 = _world.GetObject(ObjectType.Skill,259503833);
JUMP_PHASE_301_val = JUMP_PHASE_301.GetFloat(PropertyName.VAL);
if (JUMP_PHASE_301_val > 1f)
{
goto JUMP_2;
}
DUCK_VAL_302 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_303 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_303_val = DUCK_VAL_303.GetFloat(PropertyName.VAL);
DUCK_VAL_304 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_304_val = DUCK_VAL_304.GetFloat(PropertyName.VAL);
DUCK_VAL_302.SetFloat(231,DUCK_VAL_304_val-0.5f);
DUCK_VAL_308 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_308_val = DUCK_VAL_308.GetFloat(PropertyName.VAL);
if (DUCK_VAL_308_val < -0.7f)
{
JUMP_PHASE_310 = _world.GetObject(ObjectType.Skill,259503833);
JUMP_PHASE_310.SetFloat(231,2f);
}
goto NO_JUMP;
JUMP_2:
JUMP_PHASE_312 = _world.GetObject(ObjectType.Skill,259503833);
JUMP_PHASE_312_val = JUMP_PHASE_312.GetFloat(PropertyName.VAL);
if (JUMP_PHASE_312_val > 2f)
{
goto JUMP_3;
}
DUCK_VAL_314 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_314.SetFloat(231,0f);
PLAYER_Z_315 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_316 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_316_val = PLAYER_Z_316.GetFloat(PropertyName.VAL);
FLOOR_HGT_317 = _world.GetObject(ObjectType.Skill,567);
FLOOR_HGT_317_val = FLOOR_HGT_317.GetFloat(PropertyName.VAL);
MY_SIZE_319 = _world.GetObject(ObjectType.Skill,25486605);
MY_SIZE_319_val = MY_SIZE_319.GetFloat(PropertyName.VAL);
PLAYER_Z_315.SetFloat(231,FLOOR_HGT_317_val+MY_SIZE_319_val);
PLAYER_VZ_321 = _world.GetObject(ObjectType.Skill,433);
PLAYER_VZ_321.SetFloat(231,0.35f);
JUMP_PHASE_323 = _world.GetObject(ObjectType.Skill,259503833);
JUMP_PHASE_323.SetFloat(231,3f);
goto NO_JUMP;
JUMP_3:
PLAYER_VZ_325 = _world.GetObject(ObjectType.Skill,433);
PLAYER_VZ_325_val = PLAYER_VZ_325.GetFloat(PropertyName.VAL);
if (PLAYER_VZ_325_val > 0f)
{
goto NO_JUMP;
}
PLAYER_HGT_327 = _world.GetObject(ObjectType.Skill,479);
PLAYER_HGT_327_val = PLAYER_HGT_327.GetFloat(PropertyName.VAL);
if (PLAYER_HGT_327_val > 0f)
{
goto NO_JUMP;
}
JUMP_PHASE_329 = _world.GetObject(ObjectType.Skill,259503833);
JUMP_PHASE_329.SetFloat(231,0f);
NO_JUMP:
PLAYER_SPEED_SQR_330 = _world.GetObject(ObjectType.Skill,310408863);
PLAYER_SPEED_SQR_331 = _world.GetObject(ObjectType.Skill,310408863);
PLAYER_SPEED_SQR_331_val = PLAYER_SPEED_SQR_331.GetFloat(PropertyName.VAL);
PLAYER_VX_332 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_332_val = PLAYER_VX_332.GetFloat(PropertyName.VAL);
PLAYER_VX_334 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_334_val = PLAYER_VX_334.GetFloat(PropertyName.VAL);
PLAYER_VY_336 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_336_val = PLAYER_VY_336.GetFloat(PropertyName.VAL);
PLAYER_VY_338 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_338_val = PLAYER_VY_338.GetFloat(PropertyName.VAL);
PLAYER_SPEED_SQR_330.SetFloat(231,PLAYER_VX_332_val*PLAYER_VX_334_val+PLAYER_VY_336_val*PLAYER_VY_338_val);
TILT_DECREASE_340 = _world.GetObject(ObjectType.Skill,3051803237);
TILT_DECREASE_340_val = TILT_DECREASE_340.GetFloat(PropertyName.VAL);
if (TILT_DECREASE_340_val != 1f)
{
goto CALC_TILT;
}
MAX_PLAYER_TILT_P_341 = _world.GetObject(ObjectType.Skill,3767657834);
MAX_PLAYER_TILT_P_341_val = MAX_PLAYER_TILT_P_341.GetFloat(PropertyName.VAL);
PLAYER_TILT_342 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_342_val = PLAYER_TILT_342.GetFloat(PropertyName.VAL);
if (PLAYER_TILT_342_val > MAX_PLAYER_TILT_P_341_val)
{
goto CHECK_SPEED_TILT;
}
MAX_PLAYER_TILT_N_343 = _world.GetObject(ObjectType.Skill,3767657832);
MAX_PLAYER_TILT_N_343_val = MAX_PLAYER_TILT_N_343.GetFloat(PropertyName.VAL);
PLAYER_TILT_344 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_344_val = PLAYER_TILT_344.GetFloat(PropertyName.VAL);
if (PLAYER_TILT_344_val > MAX_PLAYER_TILT_N_343_val)
{
goto DECR_TILT;
}
CHECK_SPEED_TILT:
PLAYER_SPEED_SQR_346 = _world.GetObject(ObjectType.Skill,310408863);
PLAYER_SPEED_SQR_346_val = PLAYER_SPEED_SQR_346.GetFloat(PropertyName.VAL);
if (PLAYER_SPEED_SQR_346_val > 0.4f)
{
goto DECR_TILT;
}
PLAYER_VZ_348 = _world.GetObject(ObjectType.Skill,433);
PLAYER_VZ_348_val = PLAYER_VZ_348.GetFloat(PropertyName.VAL);
if (PLAYER_VZ_348_val != 0f)
{
goto DECR_TILT;
}
goto CALC_TILT;
DECR_TILT:
TILT_DECREASE_350 = _world.GetObject(ObjectType.Skill,3051803237);
TILT_DECREASE_350.SetFloat(231,0.8f);
CALC_TILT:
PLAYER_TILT_351 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_352 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_352_val = PLAYER_TILT_352.GetFloat(PropertyName.VAL);
TILT_DECREASE_353 = _world.GetObject(ObjectType.Skill,3051803237);
TILT_DECREASE_353_val = TILT_DECREASE_353.GetFloat(PropertyName.VAL);
PLAYER_TILT_355 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_355_val = PLAYER_TILT_355.GetFloat(PropertyName.VAL);
FORCE_TILT_359 = _world.GetObject(ObjectType.Skill,483);
FORCE_TILT_359_val = FORCE_TILT_359.GetFloat(PropertyName.VAL);
FLOAT_STR_363 = _world.GetObject(ObjectType.Skill,1319913115);
FLOAT_STR_363_val = FLOAT_STR_363.GetFloat(PropertyName.VAL);
FORCE_UP_365 = _world.GetObject(ObjectType.Skill,484);
FORCE_UP_365_val = FORCE_UP_365.GetFloat(PropertyName.VAL);
TIME_CORR_367 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_367_val = TIME_CORR_367.GetFloat(PropertyName.VAL);
FLY_MODE_372 = _world.GetObject(ObjectType.Skill,3329971932);
FLY_MODE_372_val = FLY_MODE_372.GetFloat(PropertyName.VAL);
PLAYER_TILT_351.SetFloat(231,TILT_DECREASE_353_val*PLAYER_TILT_355_val+0.3f*FORCE_TILT_359_val-0.3f*FLOAT_STR_363_val*FORCE_UP_365_val*TIME_CORR_367_val*(1f-FLY_MODE_372_val));
PLAYER_SPEED_SQR_375 = _world.GetObject(ObjectType.Skill,310408863);
PLAYER_SPEED_SQR_375_val = PLAYER_SPEED_SQR_375.GetFloat(PropertyName.VAL);
if (PLAYER_SPEED_SQR_375_val > 0f)
{
goto skip_376;
}
MAX_PLAYER_TILT_P_377 = _world.GetObject(ObjectType.Skill,3767657834);
MAX_PLAYER_TILT_P_377_val = MAX_PLAYER_TILT_P_377.GetFloat(PropertyName.VAL);
PLAYER_TILT_378 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_378_val = PLAYER_TILT_378.GetFloat(PropertyName.VAL);
if (PLAYER_TILT_378_val > MAX_PLAYER_TILT_P_377_val)
{
TILT_DECREASE_380 = _world.GetObject(ObjectType.Skill,3051803237);
TILT_DECREASE_380.SetFloat(231,1f);
}
MAX_PLAYER_TILT_N_381 = _world.GetObject(ObjectType.Skill,3767657832);
MAX_PLAYER_TILT_N_381_val = MAX_PLAYER_TILT_N_381.GetFloat(PropertyName.VAL);
PLAYER_TILT_382 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_382_val = PLAYER_TILT_382.GetFloat(PropertyName.VAL);
if (PLAYER_TILT_382_val < MAX_PLAYER_TILT_N_381_val)
{
TILT_DECREASE_384 = _world.GetObject(ObjectType.Skill,3051803237);
TILT_DECREASE_384.SetFloat(231,1f);
}
skip_376:
MODE_SCHWIMMEN_385 = _world.GetObject(ObjectType.Skill,3755117404);
MODE_SCHWIMMEN_385_val = MODE_SCHWIMMEN_385.GetFloat(PropertyName.VAL);
MOVING_386 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_386_val = MOVING_386.GetFloat(PropertyName.VAL);
if (MOVING_386_val == MODE_SCHWIMMEN_385_val)
{
PLAYER_TILT_387 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_388 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_388_val = PLAYER_TILT_388.GetFloat(PropertyName.VAL);
PLAYER_TILT_389 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_389_val = PLAYER_TILT_389.GetFloat(PropertyName.VAL);
WAVE_393 = _world.GetObject(ObjectType.Skill,428);
WAVE_393_val = WAVE_393.GetFloat(PropertyName.VAL);
PLAYER_TILT_387.SetFloat(231,PLAYER_TILT_389_val+0.01f*WAVE_393_val);
}
MODE_TAUCHEN_394 = _world.GetObject(ObjectType.Skill,1042033433);
MODE_TAUCHEN_394_val = MODE_TAUCHEN_394.GetFloat(PropertyName.VAL);
MOVING_395 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_395_val = MOVING_395.GetFloat(PropertyName.VAL);
if (MOVING_395_val == MODE_TAUCHEN_394_val)
{
goto NO_HTILT;
}
JUMP_PHASE_397 = _world.GetObject(ObjectType.Skill,259503833);
JUMP_PHASE_397_val = JUMP_PHASE_397.GetFloat(PropertyName.VAL);
if (JUMP_PHASE_397_val > 0f)
{
goto NO_HTILT;
}
TILT_DECREASE_399 = _world.GetObject(ObjectType.Skill,3051803237);
TILT_DECREASE_399_val = TILT_DECREASE_399.GetFloat(PropertyName.VAL);
if (TILT_DECREASE_399_val == 1f)
{
goto NO_HTILT;
}
PLAYER_HGT_401 = _world.GetObject(ObjectType.Skill,479);
PLAYER_HGT_401_val = PLAYER_HGT_401.GetFloat(PropertyName.VAL);
if (PLAYER_HGT_401_val > 0f)
{
PLAYER_TILT_402 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_403 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_403_val = PLAYER_TILT_403.GetFloat(PropertyName.VAL);
PLAYER_TILT_404 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_404_val = PLAYER_TILT_404.GetFloat(PropertyName.VAL);
PLAYER_HGT_409 = _world.GetObject(ObjectType.Skill,479);
PLAYER_HGT_409_val = PLAYER_HGT_409.GetFloat(PropertyName.VAL);
PLAYER_TILT_402.SetFloat(231,PLAYER_TILT_404_val+0.03f*(PLAYER_HGT_409_val+0.3f));
}
NO_HTILT:
RICHTER_414 = _world.GetObject(ObjectType.Skill,1528103070);
RICHTER_414_val = RICHTER_414.GetFloat(PropertyName.VAL);
if (RICHTER_414_val == 0f)
{
goto NO_QUAKE;
}
PLAYER_X_415 = _world.GetObject(ObjectType.Skill,459);
PLAYER_X_416 = _world.GetObject(ObjectType.Skill,459);
PLAYER_X_416_val = PLAYER_X_416.GetFloat(PropertyName.VAL);
PLAYER_X_417 = _world.GetObject(ObjectType.Skill,459);
PLAYER_X_417_val = PLAYER_X_417.GetFloat(PropertyName.VAL);
RICHTER_419 = _world.GetObject(ObjectType.Skill,1528103070);
RICHTER_419_val = RICHTER_419.GetFloat(PropertyName.VAL);
PLAYER_X_415.SetFloat(231,PLAYER_X_417_val+RICHTER_419_val*(UnityEngine.Random.value-0.5f));
PLAYER_Y_426 = _world.GetObject(ObjectType.Skill,460);
PLAYER_Y_427 = _world.GetObject(ObjectType.Skill,460);
PLAYER_Y_427_val = PLAYER_Y_427.GetFloat(PropertyName.VAL);
PLAYER_Y_428 = _world.GetObject(ObjectType.Skill,460);
PLAYER_Y_428_val = PLAYER_Y_428.GetFloat(PropertyName.VAL);
RICHTER_430 = _world.GetObject(ObjectType.Skill,1528103070);
RICHTER_430_val = RICHTER_430.GetFloat(PropertyName.VAL);
RANDOM_1_433 = _world.GetObject(ObjectType.Skill,1866495038);
RANDOM_1_433_val = RANDOM_1_433.GetFloat(PropertyName.VAL);
PLAYER_Y_426.SetFloat(231,PLAYER_Y_428_val+RICHTER_430_val*(RANDOM_1_433_val-0.5f));
PLAYER_VX_437 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_438 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_438_val = PLAYER_VX_438.GetFloat(PropertyName.VAL);
PLAYER_VX_439 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_439_val = PLAYER_VX_439.GetFloat(PropertyName.VAL);
RICHTER_443 = _world.GetObject(ObjectType.Skill,1528103070);
RICHTER_443_val = RICHTER_443.GetFloat(PropertyName.VAL);
PLAYER_VX_437.SetFloat(231,PLAYER_VX_439_val+0.2f*RICHTER_443_val*(UnityEngine.Random.value-0.5f));
PLAYER_VY_450 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_451 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_451_val = PLAYER_VY_451.GetFloat(PropertyName.VAL);
PLAYER_VY_452 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_452_val = PLAYER_VY_452.GetFloat(PropertyName.VAL);
RICHTER_456 = _world.GetObject(ObjectType.Skill,1528103070);
RICHTER_456_val = RICHTER_456.GetFloat(PropertyName.VAL);
RANDOM_1_459 = _world.GetObject(ObjectType.Skill,1866495038);
RANDOM_1_459_val = RANDOM_1_459.GetFloat(PropertyName.VAL);
PLAYER_VY_450.SetFloat(231,PLAYER_VY_452_val+0.2f*RICHTER_456_val*(RANDOM_1_459_val-0.5f));
PLAYER_Z_463 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_464 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_464_val = PLAYER_Z_464.GetFloat(PropertyName.VAL);
PLAYER_Z_465 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_465_val = PLAYER_Z_465.GetFloat(PropertyName.VAL);
RICHTER_467 = _world.GetObject(ObjectType.Skill,1528103070);
RICHTER_467_val = RICHTER_467.GetFloat(PropertyName.VAL);
RANDOM_2_470 = _world.GetObject(ObjectType.Skill,1866495039);
RANDOM_2_470_val = RANDOM_2_470.GetFloat(PropertyName.VAL);
PLAYER_Z_463.SetFloat(231,PLAYER_Z_465_val+RICHTER_467_val*(RANDOM_2_470_val-0.5f));
RANDOM_1_474 = _world.GetObject(ObjectType.Skill,1866495038);
RANDOM_1_474_val = RANDOM_1_474.GetFloat(PropertyName.VAL);
RANDOM_2_475 = _world.GetObject(ObjectType.Skill,1866495039);
RANDOM_2_475.SetFloat(231,RANDOM_1_474_val);
RANDOM_1_477 = _world.GetObject(ObjectType.Skill,1866495038);
RANDOM_1_477.SetFloat(231,UnityEngine.Random.value);
NO_QUAKE:
return false;
KEY_INS_479 = _world.GetObject(ObjectType.Skill,541);
KEY_INS_479_val = KEY_INS_479.GetFloat(PropertyName.VAL);
if (KEY_INS_479_val > 0f)
{
PLAYER_ARC_480 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_481 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_481_val = PLAYER_ARC_481.GetFloat(PropertyName.VAL);
PLAYER_ARC_482 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_482_val = PLAYER_ARC_482.GetFloat(PropertyName.VAL);
PLAYER_ARC_480.SetFloat(231,PLAYER_ARC_482_val-0.1f);
}
KEY_DEL_486 = _world.GetObject(ObjectType.Skill,527);
KEY_DEL_486_val = KEY_DEL_486.GetFloat(PropertyName.VAL);
if (KEY_DEL_486_val > 0f)
{
PLAYER_ARC_487 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_488 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_488_val = PLAYER_ARC_488.GetFloat(PropertyName.VAL);
PLAYER_ARC_489 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_489_val = PLAYER_ARC_489.GetFloat(PropertyName.VAL);
PLAYER_ARC_487.SetFloat(231,PLAYER_ARC_489_val+0.1f);
}
//Unknown keyword: 
      return false;
  }
IAcknexObject MODE_GEHEN_0;
float MODE_GEHEN_0_val;
IAcknexObject MOVING_1;
float MOVING_1_val;
IAcknexObject PLAYER_SIZE_2;
IAcknexObject PLAYER_SIZE_3;
float PLAYER_SIZE_3_val;
IAcknexObject MY_SIZE_4;
float MY_SIZE_4_val;
IAcknexObject WALK_8;
float WALK_8_val;
IAcknexObject MODE_SCHWIMMEN_9;
float MODE_SCHWIMMEN_9_val;
IAcknexObject MOVING_10;
float MOVING_10_val;
IAcknexObject PLAYER_SIZE_11;
IAcknexObject PLAYER_SIZE_12;
float PLAYER_SIZE_12_val;
IAcknexObject WAVE_17;
float WAVE_17_val;
IAcknexObject MODE_TAUCHEN_18;
float MODE_TAUCHEN_18_val;
IAcknexObject MOVING_19;
float MOVING_19_val;
IAcknexObject PLAYER_SIZE_20;
IAcknexObject PLAYER_SIZE_21;
float PLAYER_SIZE_21_val;
IAcknexObject MODE_DEATH_23;
float MODE_DEATH_23_val;
IAcknexObject MOVING_24;
float MOVING_24_val;
IAcknexObject PLAYER_SIZE_25;
IAcknexObject PLAYER_SIZE_26;
float PLAYER_SIZE_26_val;
IAcknexObject PLAYER_SIZE_27;
float PLAYER_SIZE_27_val;
IAcknexObject MODE_GEHEN_30;
float MODE_GEHEN_30_val;
IAcknexObject MOVING_31;
float MOVING_31_val;
IAcknexObject PLAYER_SIZE_32;
IAcknexObject PLAYER_SIZE_33;
float PLAYER_SIZE_33_val;
IAcknexObject PLAYER_SIZE_34;
float PLAYER_SIZE_34_val;
IAcknexObject PLAYER_DEPTH_36;
float PLAYER_DEPTH_36_val;
IAcknexObject MODE_SCHWIMMEN_37;
float MODE_SCHWIMMEN_37_val;
IAcknexObject MOVING_38;
float MOVING_38_val;
IAcknexObject PLAYER_DEPTH_40;
float PLAYER_DEPTH_40_val;
IAcknexObject MODE_GEHEN_41;
float MODE_GEHEN_41_val;
IAcknexObject MOVING_42;
float MOVING_42_val;
IAcknexObject PLAYER_DEPTH_44;
float PLAYER_DEPTH_44_val;
IAcknexObject MOUSE_MIDDLE_46;
float MOUSE_MIDDLE_46_val;
IAcknexObject KEY_SENSE_47;
float KEY_SENSE_47_val;
IAcknexObject FORCE_AHEAD_48;
IAcknexObject FORCE_AHEAD_49;
float FORCE_AHEAD_49_val;
IAcknexObject FORCEFORWARD_50;
IAcknexObject KEY_SHIFT_52;
float KEY_SHIFT_52_val;
IAcknexObject FORCE_AHEAD_53;
IAcknexObject FORCE_AHEAD_54;
float FORCE_AHEAD_54_val;
IAcknexObject FORCE_AHEAD_55;
float FORCE_AHEAD_55_val;
IAcknexObject SHIFT_SENSE_57;
float SHIFT_SENSE_57_val;
IAcknexObject FORCE_AHEAD_58;
float FORCE_AHEAD_58_val;
IAcknexObject FORCEFORWARD_59;
IAcknexObject FORCE_STRAFE_60;
float FORCE_STRAFE_60_val;
IAcknexObject FORCESIDEWARD_61;
IAcknexObject FORCE_ROT_62;
float FORCE_ROT_62_val;
IAcknexObject FORCEROTATION_63;
IAcknexObject MOUSE_RIGHT_65;
float MOUSE_RIGHT_65_val;
IAcknexObject FORCEFORWARD_67;
IAcknexObject KEY_ALT_69;
float KEY_ALT_69_val;
IAcknexObject FORCE_STRAFE_70;
float FORCE_STRAFE_70_val;
IAcknexObject FORCEROTATION_71;
IAcknexObject FORCESIDEWARD_73;
IAcknexObject FORCEFORWARD_75;
IAcknexObject BOOSTER_77;
IAcknexObject MASS_78;
float MASS_78_val;
IAcknexObject INERTIA_79;
IAcknexObject FRICTION_80;
IAcknexObject FRICTION_81;
float FRICTION_81_val;
IAcknexObject FRIC_82;
float FRIC_82_val;
IAcknexObject DEPTH_86;
float DEPTH_86_val;
IAcknexObject FORCE_87;
IAcknexObject FORCE_88;
float FORCE_88_val;
IAcknexObject STRENGTH_90;
float STRENGTH_90_val;
IAcknexObject WAVE_STR_92;
float WAVE_STR_92_val;
IAcknexObject WAVE_94;
float WAVE_94_val;
IAcknexObject BOOSTER_97;
float BOOSTER_97_val;
IAcknexObject FORCEFORWARD_100;
float FORCEFORWARD_100_val;
IAcknexObject PLAYER_COS_102;
float PLAYER_COS_102_val;
IAcknexObject FORCESIDEWARD_106;
float FORCESIDEWARD_106_val;
IAcknexObject PLAYER_SIN_108;
float PLAYER_SIN_108_val;
IAcknexObject DRIFT_X_111;
float DRIFT_X_111_val;
IAcknexObject FORCE_112;
float FORCE_112_val;
IAcknexObject PLAYER_VX_113;
float PLAYER_VX_113_val;
IAcknexObject PLAYER_VX_114;
IAcknexObject FORCE_115;
IAcknexObject FORCE_116;
float FORCE_116_val;
IAcknexObject STRENGTH_118;
float STRENGTH_118_val;
IAcknexObject WAVE_STR_120;
float WAVE_STR_120_val;
IAcknexObject WAVE_122;
float WAVE_122_val;
IAcknexObject BOOSTER_125;
float BOOSTER_125_val;
IAcknexObject FORCEFORWARD_128;
float FORCEFORWARD_128_val;
IAcknexObject PLAYER_SIN_130;
float PLAYER_SIN_130_val;
IAcknexObject FORCESIDEWARD_134;
float FORCESIDEWARD_134_val;
IAcknexObject PLAYER_COS_136;
float PLAYER_COS_136_val;
IAcknexObject DRIFT_Y_139;
float DRIFT_Y_139_val;
IAcknexObject FORCE_140;
float FORCE_140_val;
IAcknexObject PLAYER_VY_141;
float PLAYER_VY_141_val;
IAcknexObject PLAYER_VY_142;
IAcknexObject FRICTION_144;
IAcknexObject MODE_GEHEN_145;
float MODE_GEHEN_145_val;
IAcknexObject MOVING_146;
float MOVING_146_val;
IAcknexObject FRICTION_148;
IAcknexObject FORCE_149;
IAcknexObject FORCE_150;
float FORCE_150_val;
IAcknexObject FORCEROTATION_153;
float FORCEROTATION_153_val;
IAcknexObject FORCE_154;
float FORCE_154_val;
IAcknexObject PLAYER_VROT_155;
float PLAYER_VROT_155_val;
IAcknexObject PLAYER_VROT_156;
IAcknexObject WEAPONWAVE_157;
IAcknexObject WEAPONWAVE_158;
float WEAPONWAVE_158_val;
IAcknexObject WAVE_159;
float WAVE_159_val;
IAcknexObject PLAYER_SPEED_161;
float PLAYER_SPEED_161_val;
IAcknexObject MP5_01OVL_163;
IAcknexObject MP5_01OVL_165;
float temp_166;
IAcknexObject WEAPONWAVE_171;
float WEAPONWAVE_171_val;
IAcknexObject QGUN00OVL_173;
IAcknexObject QGUN00OVL_175;
float temp_176;
IAcknexObject WEAPONWAVE_181;
float WEAPONWAVE_181_val;
IAcknexObject GRAN00OVL_183;
IAcknexObject GRAN00OVL_185;
float temp_186;
IAcknexObject WEAPONWAVE_191;
float WEAPONWAVE_191_val;
IAcknexObject FORCE_192;
IAcknexObject FORCE_193;
float FORCE_193_val;
IAcknexObject GRAVITY_194;
float GRAVITY_194_val;
IAcknexObject FLOAT_STR_196;
float FLOAT_STR_196_val;
IAcknexObject FORCE_UP_198;
float FORCE_UP_198_val;
IAcknexObject FRIC_AIR_199;
float FRIC_AIR_199_val;
IAcknexObject FRICTION_200;
IAcknexObject PLAYER_HGT_202;
float PLAYER_HGT_202_val;
IAcknexObject FRICTION_204;
IAcknexObject FORCE_205;
IAcknexObject FORCE_206;
float FORCE_206_val;
IAcknexObject FORCE_207;
float FORCE_207_val;
IAcknexObject PLAYER_HGT_211;
float PLAYER_HGT_211_val;
IAcknexObject FALLING_HEIGHT_213;
float FALLING_HEIGHT_213_val;
IAcknexObject HERE_216;
IAcknexObject temp_217;
IAcknexObject FALLING_HEIGHT_219;
IAcknexObject FWT01SND_220;
IAcknexObject FALLING_FLOOR_222;
float FALLING_FLOOR_222_val;
IAcknexObject HERE_224;
float temp_225;
IAcknexObject FALLING_HEIGHT_226;
IAcknexObject FALLING_HEIGHT_227;
float FALLING_HEIGHT_227_val;
IAcknexObject FALLING_HEIGHT_228;
float FALLING_HEIGHT_228_val;
IAcknexObject HERE_231;
float temp_232;
IAcknexObject FALLING_FLOOR_234;
float FALLING_FLOOR_234_val;
IAcknexObject FCT01SND_235;
IAcknexObject PLAYER_RESULT_237;
IAcknexObject PLAYER_RESULT_238;
float PLAYER_RESULT_238_val;
IAcknexObject FALLING_HEIGHT_240;
float FALLING_HEIGHT_240_val;
IAcknexObject PLAYER_RESULT_247;
float PLAYER_RESULT_247_val;
IAcknexObject FALLING_HEIGHT_249;
IAcknexObject FORCE_250;
float FORCE_250_val;
IAcknexObject PLAYER_VZ_251;
float PLAYER_VZ_251_val;
IAcknexObject PLAYER_VZ_252;
IAcknexObject PLAYER_HGT_254;
float PLAYER_HGT_254_val;
IAcknexObject HERE_257;
IAcknexObject temp_258;
IAcknexObject HERE_261;
IAcknexObject temp_262;
IAcknexObject FALLING_HEIGHT_263;
float FALLING_HEIGHT_263_val;
IAcknexObject PLAYER_HGT_264;
float PLAYER_HGT_264_val;
IAcknexObject HERE_266;
float temp_267;
IAcknexObject FALLING_FLOOR_268;
IAcknexObject PLAYER_HGT_269;
float PLAYER_HGT_269_val;
IAcknexObject FALLING_HEIGHT_270;
IAcknexObject DUCK_VAL_271;
IAcknexObject DUCK_VAL_272;
float DUCK_VAL_272_val;
IAcknexObject DUCK_VAL_275;
float DUCK_VAL_275_val;
IAcknexObject MODE_SCHWIMMEN_276;
float MODE_SCHWIMMEN_276_val;
IAcknexObject MOVING_277;
float MOVING_277_val;
IAcknexObject FORCE_UP_279;
float FORCE_UP_279_val;
IAcknexObject DUCK_VAL_280;
IAcknexObject DUCK_VAL_281;
float DUCK_VAL_281_val;
IAcknexObject DUCK_VAL_282;
float DUCK_VAL_282_val;
IAcknexObject DUCK_STR_284;
float DUCK_STR_284_val;
IAcknexObject FORCE_UP_286;
float FORCE_UP_286_val;
IAcknexObject PLAYER_SIZE_287;
IAcknexObject PLAYER_SIZE_288;
float PLAYER_SIZE_288_val;
IAcknexObject PLAYER_SIZE_289;
float PLAYER_SIZE_289_val;
IAcknexObject DUCK_VAL_291;
float DUCK_VAL_291_val;
IAcknexObject MODE_GEHEN_292;
float MODE_GEHEN_292_val;
IAcknexObject MOVING_293;
float MOVING_293_val;
IAcknexObject JUMP_PHASE_295;
float JUMP_PHASE_295_val;
IAcknexObject FORCE_UP_297;
float FORCE_UP_297_val;
IAcknexObject JUMP_PHASE_299;
IAcknexObject JUMP_PHASE_301;
float JUMP_PHASE_301_val;
IAcknexObject DUCK_VAL_302;
IAcknexObject DUCK_VAL_303;
float DUCK_VAL_303_val;
IAcknexObject DUCK_VAL_304;
float DUCK_VAL_304_val;
IAcknexObject DUCK_VAL_308;
float DUCK_VAL_308_val;
IAcknexObject JUMP_PHASE_310;
IAcknexObject JUMP_PHASE_312;
float JUMP_PHASE_312_val;
IAcknexObject DUCK_VAL_314;
IAcknexObject PLAYER_Z_315;
IAcknexObject PLAYER_Z_316;
float PLAYER_Z_316_val;
IAcknexObject FLOOR_HGT_317;
float FLOOR_HGT_317_val;
IAcknexObject MY_SIZE_319;
float MY_SIZE_319_val;
IAcknexObject PLAYER_VZ_321;
IAcknexObject JUMP_PHASE_323;
IAcknexObject PLAYER_VZ_325;
float PLAYER_VZ_325_val;
IAcknexObject PLAYER_HGT_327;
float PLAYER_HGT_327_val;
IAcknexObject JUMP_PHASE_329;
IAcknexObject PLAYER_SPEED_SQR_330;
IAcknexObject PLAYER_SPEED_SQR_331;
float PLAYER_SPEED_SQR_331_val;
IAcknexObject PLAYER_VX_332;
float PLAYER_VX_332_val;
IAcknexObject PLAYER_VX_334;
float PLAYER_VX_334_val;
IAcknexObject PLAYER_VY_336;
float PLAYER_VY_336_val;
IAcknexObject PLAYER_VY_338;
float PLAYER_VY_338_val;
IAcknexObject TILT_DECREASE_340;
float TILT_DECREASE_340_val;
IAcknexObject MAX_PLAYER_TILT_P_341;
float MAX_PLAYER_TILT_P_341_val;
IAcknexObject PLAYER_TILT_342;
float PLAYER_TILT_342_val;
IAcknexObject MAX_PLAYER_TILT_N_343;
float MAX_PLAYER_TILT_N_343_val;
IAcknexObject PLAYER_TILT_344;
float PLAYER_TILT_344_val;
IAcknexObject PLAYER_SPEED_SQR_346;
float PLAYER_SPEED_SQR_346_val;
IAcknexObject PLAYER_VZ_348;
float PLAYER_VZ_348_val;
IAcknexObject TILT_DECREASE_350;
IAcknexObject PLAYER_TILT_351;
IAcknexObject PLAYER_TILT_352;
float PLAYER_TILT_352_val;
IAcknexObject TILT_DECREASE_353;
float TILT_DECREASE_353_val;
IAcknexObject PLAYER_TILT_355;
float PLAYER_TILT_355_val;
IAcknexObject FORCE_TILT_359;
float FORCE_TILT_359_val;
IAcknexObject FLOAT_STR_363;
float FLOAT_STR_363_val;
IAcknexObject FORCE_UP_365;
float FORCE_UP_365_val;
IAcknexObject TIME_CORR_367;
float TIME_CORR_367_val;
IAcknexObject FLY_MODE_372;
float FLY_MODE_372_val;
IAcknexObject PLAYER_SPEED_SQR_375;
float PLAYER_SPEED_SQR_375_val;
IAcknexObject MAX_PLAYER_TILT_P_377;
float MAX_PLAYER_TILT_P_377_val;
IAcknexObject PLAYER_TILT_378;
float PLAYER_TILT_378_val;
IAcknexObject TILT_DECREASE_380;
IAcknexObject MAX_PLAYER_TILT_N_381;
float MAX_PLAYER_TILT_N_381_val;
IAcknexObject PLAYER_TILT_382;
float PLAYER_TILT_382_val;
IAcknexObject TILT_DECREASE_384;
IAcknexObject MODE_SCHWIMMEN_385;
float MODE_SCHWIMMEN_385_val;
IAcknexObject MOVING_386;
float MOVING_386_val;
IAcknexObject PLAYER_TILT_387;
IAcknexObject PLAYER_TILT_388;
float PLAYER_TILT_388_val;
IAcknexObject PLAYER_TILT_389;
float PLAYER_TILT_389_val;
IAcknexObject WAVE_393;
float WAVE_393_val;
IAcknexObject MODE_TAUCHEN_394;
float MODE_TAUCHEN_394_val;
IAcknexObject MOVING_395;
float MOVING_395_val;
IAcknexObject JUMP_PHASE_397;
float JUMP_PHASE_397_val;
IAcknexObject TILT_DECREASE_399;
float TILT_DECREASE_399_val;
IAcknexObject PLAYER_HGT_401;
float PLAYER_HGT_401_val;
IAcknexObject PLAYER_TILT_402;
IAcknexObject PLAYER_TILT_403;
float PLAYER_TILT_403_val;
IAcknexObject PLAYER_TILT_404;
float PLAYER_TILT_404_val;
IAcknexObject PLAYER_HGT_409;
float PLAYER_HGT_409_val;
IAcknexObject RICHTER_414;
float RICHTER_414_val;
IAcknexObject PLAYER_X_415;
IAcknexObject PLAYER_X_416;
float PLAYER_X_416_val;
IAcknexObject PLAYER_X_417;
float PLAYER_X_417_val;
IAcknexObject RICHTER_419;
float RICHTER_419_val;
IAcknexObject PLAYER_Y_426;
IAcknexObject PLAYER_Y_427;
float PLAYER_Y_427_val;
IAcknexObject PLAYER_Y_428;
float PLAYER_Y_428_val;
IAcknexObject RICHTER_430;
float RICHTER_430_val;
IAcknexObject RANDOM_1_433;
float RANDOM_1_433_val;
IAcknexObject PLAYER_VX_437;
IAcknexObject PLAYER_VX_438;
float PLAYER_VX_438_val;
IAcknexObject PLAYER_VX_439;
float PLAYER_VX_439_val;
IAcknexObject RICHTER_443;
float RICHTER_443_val;
IAcknexObject PLAYER_VY_450;
IAcknexObject PLAYER_VY_451;
float PLAYER_VY_451_val;
IAcknexObject PLAYER_VY_452;
float PLAYER_VY_452_val;
IAcknexObject RICHTER_456;
float RICHTER_456_val;
IAcknexObject RANDOM_1_459;
float RANDOM_1_459_val;
IAcknexObject PLAYER_Z_463;
IAcknexObject PLAYER_Z_464;
float PLAYER_Z_464_val;
IAcknexObject PLAYER_Z_465;
float PLAYER_Z_465_val;
IAcknexObject RICHTER_467;
float RICHTER_467_val;
IAcknexObject RANDOM_2_470;
float RANDOM_2_470_val;
IAcknexObject RANDOM_1_474;
float RANDOM_1_474_val;
IAcknexObject RANDOM_2_475;
IAcknexObject RANDOM_1_477;
IAcknexObject KEY_INS_479;
float KEY_INS_479_val;
IAcknexObject PLAYER_ARC_480;
IAcknexObject PLAYER_ARC_481;
float PLAYER_ARC_481_val;
IAcknexObject PLAYER_ARC_482;
float PLAYER_ARC_482_val;
IAcknexObject KEY_DEL_486;
float KEY_DEL_486_val;
IAcknexObject PLAYER_ARC_487;
IAcknexObject PLAYER_ARC_488;
float PLAYER_ARC_488_val;
IAcknexObject PLAYER_ARC_489;
float PLAYER_ARC_489_val;
}
public class SET_WALKING : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_WALKING() {
  }
 public SET_WALKING(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MODE_GEHEN_0 = _world.GetObject(ObjectType.Skill,3270985304);
MODE_GEHEN_0_val = MODE_GEHEN_0.GetFloat(PropertyName.VAL);
MOVING_1 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_1.SetFloat(231,MODE_GEHEN_0_val);
FRIC_3 = _world.GetObject(ObjectType.Skill,2089081969);
FRIC_3.SetFloat(231,0.2f);
STRENGTH_5 = _world.GetObject(ObjectType.Skill,461037372);
STRENGTH_5.SetFloat(231,0.15f);
WAVE_STR_7 = _world.GetObject(ObjectType.Skill,525195384);
WAVE_STR_7.SetFloat(231,0f);
FLOAT_STR_9 = _world.GetObject(ObjectType.Skill,1319913115);
FLOAT_STR_9.SetFloat(231,0f);
DUCK_STR_11 = _world.GetObject(ObjectType.Skill,1846696428);
DUCK_STR_11.SetFloat(231,0.5f);
FRIC_AIR_13 = _world.GetObject(ObjectType.Skill,1830104876);
FRIC_AIR_13.SetFloat(231,0.04f);
GRAVITY_15 = _world.GetObject(ObjectType.Skill,557195635);
GRAVITY_15.SetFloat(231,-0.15f);
MOVE_ME_16 = _world.AcknexObject.GetAcknexObject(3917947093);
_world.AcknexObject.SetAcknexObject(19,MOVE_ME_16);
//Unknown keyword: 
      return false;
  }
IAcknexObject MODE_GEHEN_0;
float MODE_GEHEN_0_val;
IAcknexObject MOVING_1;
IAcknexObject FRIC_3;
IAcknexObject STRENGTH_5;
IAcknexObject WAVE_STR_7;
IAcknexObject FLOAT_STR_9;
IAcknexObject DUCK_STR_11;
IAcknexObject FRIC_AIR_13;
IAcknexObject GRAVITY_15;
IAcknexObject MOVE_ME_16;
}
public class SET_SWIMMING : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_SWIMMING() {
  }
 public SET_SWIMMING(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
FRIC_1 = _world.GetObject(ObjectType.Skill,2089081969);
FRIC_1.SetFloat(231,0.3f);
MODE_SCHWIMMEN_2 = _world.GetObject(ObjectType.Skill,3755117404);
MODE_SCHWIMMEN_2_val = MODE_SCHWIMMEN_2.GetFloat(PropertyName.VAL);
MOVING_3 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_3.SetFloat(231,MODE_SCHWIMMEN_2_val);
STRENGTH_5 = _world.GetObject(ObjectType.Skill,461037372);
STRENGTH_5.SetFloat(231,0.15f);
WAVE_STR_7 = _world.GetObject(ObjectType.Skill,525195384);
WAVE_STR_7.SetFloat(231,0.08f);
FLOAT_STR_9 = _world.GetObject(ObjectType.Skill,1319913115);
FLOAT_STR_9.SetFloat(231,0f);
DUCK_STR_11 = _world.GetObject(ObjectType.Skill,1846696428);
DUCK_STR_11.SetFloat(231,0.2f);
FRIC_AIR_13 = _world.GetObject(ObjectType.Skill,1830104876);
FRIC_AIR_13.SetFloat(231,0.5f);
GRAVITY_15 = _world.GetObject(ObjectType.Skill,557195635);
GRAVITY_15.SetFloat(231,-0.15f);
MOVE_ME_16 = _world.AcknexObject.GetAcknexObject(3917947093);
_world.AcknexObject.SetAcknexObject(19,MOVE_ME_16);
//Unknown keyword: 
      return false;
  }
IAcknexObject FRIC_1;
IAcknexObject MODE_SCHWIMMEN_2;
float MODE_SCHWIMMEN_2_val;
IAcknexObject MOVING_3;
IAcknexObject STRENGTH_5;
IAcknexObject WAVE_STR_7;
IAcknexObject FLOAT_STR_9;
IAcknexObject DUCK_STR_11;
IAcknexObject FRIC_AIR_13;
IAcknexObject GRAVITY_15;
IAcknexObject MOVE_ME_16;
}
public class SET_DIVING : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_DIVING() {
  }
 public SET_DIVING(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
FRIC_1 = _world.GetObject(ObjectType.Skill,2089081969);
FRIC_1.SetFloat(231,0.3f);
MODE_TAUCHEN_2 = _world.GetObject(ObjectType.Skill,1042033433);
MODE_TAUCHEN_2_val = MODE_TAUCHEN_2.GetFloat(PropertyName.VAL);
MOVING_3 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_3.SetFloat(231,MODE_TAUCHEN_2_val);
STRENGTH_5 = _world.GetObject(ObjectType.Skill,461037372);
STRENGTH_5.SetFloat(231,0.1f);
WAVE_STR_7 = _world.GetObject(ObjectType.Skill,525195384);
WAVE_STR_7.SetFloat(231,0.03f);
FLOAT_STR_9 = _world.GetObject(ObjectType.Skill,1319913115);
FLOAT_STR_9.SetFloat(231,0.05f);
DUCK_STR_11 = _world.GetObject(ObjectType.Skill,1846696428);
DUCK_STR_11.SetFloat(231,0f);
FRIC_AIR_13 = _world.GetObject(ObjectType.Skill,1830104876);
FRIC_AIR_13.SetFloat(231,0.7f);
GRAVITY_15 = _world.GetObject(ObjectType.Skill,557195635);
GRAVITY_15.SetFloat(231,0f);
MOVE_ME_16 = _world.AcknexObject.GetAcknexObject(3917947093);
_world.AcknexObject.SetAcknexObject(19,MOVE_ME_16);
//Unknown keyword: 
      return false;
  }
IAcknexObject FRIC_1;
IAcknexObject MODE_TAUCHEN_2;
float MODE_TAUCHEN_2_val;
IAcknexObject MOVING_3;
IAcknexObject STRENGTH_5;
IAcknexObject WAVE_STR_7;
IAcknexObject FLOAT_STR_9;
IAcknexObject DUCK_STR_11;
IAcknexObject FRIC_AIR_13;
IAcknexObject GRAVITY_15;
IAcknexObject MOVE_ME_16;
}
public class SET_DEATH : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_DEATH() {
  }
 public SET_DEATH(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
FRIC_1 = _world.GetObject(ObjectType.Skill,2089081969);
FRIC_1.SetFloat(231,0.01f);
MODE_DEATH_2 = _world.GetObject(ObjectType.Skill,3267420407);
MODE_DEATH_2_val = MODE_DEATH_2.GetFloat(PropertyName.VAL);
MOVING_3 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_3.SetFloat(231,MODE_DEATH_2_val);
STRENGTH_5 = _world.GetObject(ObjectType.Skill,461037372);
STRENGTH_5.SetFloat(231,0.1f);
WAVE_STR_7 = _world.GetObject(ObjectType.Skill,525195384);
WAVE_STR_7.SetFloat(231,0.03f);
FLOAT_STR_9 = _world.GetObject(ObjectType.Skill,1319913115);
FLOAT_STR_9.SetFloat(231,0.05f);
DUCK_STR_11 = _world.GetObject(ObjectType.Skill,1846696428);
DUCK_STR_11.SetFloat(231,0f);
FRIC_AIR_13 = _world.GetObject(ObjectType.Skill,1830104876);
FRIC_AIR_13.SetFloat(231,0.7f);
GRAVITY_15 = _world.GetObject(ObjectType.Skill,557195635);
GRAVITY_15.SetFloat(231,-0.35f);
MOVE_ME_16 = _world.AcknexObject.GetAcknexObject(3917947093);
_world.AcknexObject.SetAcknexObject(19,MOVE_ME_16);
//Unknown keyword: 
      return false;
  }
IAcknexObject FRIC_1;
IAcknexObject MODE_DEATH_2;
float MODE_DEATH_2_val;
IAcknexObject MOVING_3;
IAcknexObject STRENGTH_5;
IAcknexObject WAVE_STR_7;
IAcknexObject FLOAT_STR_9;
IAcknexObject DUCK_STR_11;
IAcknexObject FRIC_AIR_13;
IAcknexObject GRAVITY_15;
IAcknexObject MOVE_ME_16;
}
public class SET_MOVING : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_MOVING() {
  }
 public SET_MOVING(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MOVING_1 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_1_val = MOVING_1.GetFloat(PropertyName.VAL);
if (MOVING_1_val == 0f)
{
return false;
}
MODE_GEHEN_2 = _world.GetObject(ObjectType.Skill,3270985304);
MODE_GEHEN_2_val = MODE_GEHEN_2.GetFloat(PropertyName.VAL);
MOVING_3 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_3_val = MOVING_3.GetFloat(PropertyName.VAL);
if (MOVING_3_val == MODE_GEHEN_2_val)
{
{
            var enumerator = new SET_WALKING();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MODE_SCHWIMMEN_4 = _world.GetObject(ObjectType.Skill,3755117404);
MODE_SCHWIMMEN_4_val = MODE_SCHWIMMEN_4.GetFloat(PropertyName.VAL);
MOVING_5 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_5_val = MOVING_5.GetFloat(PropertyName.VAL);
if (MOVING_5_val == MODE_SCHWIMMEN_4_val)
{
{
            var enumerator = new SET_SWIMMING();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MODE_TAUCHEN_6 = _world.GetObject(ObjectType.Skill,1042033433);
MODE_TAUCHEN_6_val = MODE_TAUCHEN_6.GetFloat(PropertyName.VAL);
MOVING_7 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_7_val = MOVING_7.GetFloat(PropertyName.VAL);
if (MOVING_7_val == MODE_TAUCHEN_6_val)
{
{
            var enumerator = new SET_DIVING();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
//Unknown keyword: 
      return false;
  }
IAcknexObject MOVING_1;
float MOVING_1_val;
IAcknexObject MODE_GEHEN_2;
float MODE_GEHEN_2_val;
IAcknexObject MOVING_3;
float MOVING_3_val;
IAcknexObject MODE_SCHWIMMEN_4;
float MODE_SCHWIMMEN_4_val;
IAcknexObject MOVING_5;
float MOVING_5_val;
IAcknexObject MODE_TAUCHEN_6;
float MODE_TAUCHEN_6_val;
IAcknexObject MOVING_7;
float MOVING_7_val;
}
public class STOP_MOVING : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public STOP_MOVING() {
  }
 public STOP_MOVING(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
PLAYER_VX_1 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_1.SetFloat(231,0f);
PLAYER_VY_3 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_3.SetFloat(231,0f);
PLAYER_VZ_5 = _world.GetObject(ObjectType.Skill,433);
PLAYER_VZ_5.SetFloat(231,0f);
PLAYER_VROT_7 = _world.GetObject(ObjectType.Skill,434);
PLAYER_VROT_7.SetFloat(231,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject PLAYER_VX_1;
IAcknexObject PLAYER_VY_3;
IAcknexObject PLAYER_VZ_5;
IAcknexObject PLAYER_VROT_7;
}
public class SET_BLUE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_BLUE() {
  }
 public SET_BLUE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
PAL_BLUE_0 = _world.AcknexObject.GetAcknexObject(2482235505);
_world.FadePal(PAL_BLUE_0,0.7f);
//Unknown keyword: 
      return false;
  }
IAcknexObject PAL_BLUE_0;
}
public class RESET_BLUE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public RESET_BLUE() {
  }
 public RESET_BLUE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
PAL_BLUE_0 = _world.AcknexObject.GetAcknexObject(2482235505);
_world.FadePal(PAL_BLUE_0,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject PAL_BLUE_0;
}
public class ENTER_WATER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public ENTER_WATER() {
  }
 public ENTER_WATER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
FWT01SND_0 = _world.AcknexObject.GetAcknexObject(103833604);
_world.PlaySound(FWT01SND_0,0.8f, null);
{
            var enumerator = new SET_SWIMMING();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject FWT01SND_0;
}
public class LEAVE_WATER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LEAVE_WATER() {
  }
 public LEAVE_WATER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = new SET_WALKING();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
}
public class DIVE_UP : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DIVE_UP() {
  }
 public DIVE_UP(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
PLAYERINSPSND_0 = _world.AcknexObject.GetAcknexObject(3374192921);
_world.PlaySound(PLAYERINSPSND_0,0.8f, null);
{
            var enumerator = new RESET_BLUE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject PLAYERINSPSND_0;
}
public class REGIO_DIVE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REGIO_DIVE() {
  }
 public REGIO_DIVE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
UNDERWATER_1 = _world.GetObject(ObjectType.Skill,1369167822);
UNDERWATER_1_val = UNDERWATER_1.GetFloat(PropertyName.VAL);
if (UNDERWATER_1_val == 1f)
{
return false;
}
UNDERWATER_3 = _world.GetObject(ObjectType.Skill,1369167822);
UNDERWATER_3.SetFloat(231,1f);
FWT01SND_4 = _world.AcknexObject.GetAcknexObject(103833604);
_world.PlaySound(FWT01SND_4,0.5f, null);
PLAYER_ARC_6 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_7 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_7_val = PLAYER_ARC_7.GetFloat(PropertyName.VAL);
PLAYER_ARC_8 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_8_val = PLAYER_ARC_8.GetFloat(PropertyName.VAL);
PLAYER_ARC_6.SetFloat(231,PLAYER_ARC_8_val+0.3f);
MY_SIZE_11 = _world.GetObject(ObjectType.Skill,25486605);
MY_SIZE_12 = _world.GetObject(ObjectType.Skill,25486605);
MY_SIZE_12_val = MY_SIZE_12.GetFloat(PropertyName.VAL);
MY_SIZE_13 = _world.GetObject(ObjectType.Skill,25486605);
MY_SIZE_13_val = MY_SIZE_13.GetFloat(PropertyName.VAL);
MY_SIZE_11.SetFloat(231,MY_SIZE_13_val-0.2f);
PLAYER_SIZE_16 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_17 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_17_val = PLAYER_SIZE_17.GetFloat(PropertyName.VAL);
PLAYER_SIZE_18 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_18_val = PLAYER_SIZE_18.GetFloat(PropertyName.VAL);
PLAYER_SIZE_16.SetFloat(231,PLAYER_SIZE_18_val-0.2f);
PLAYER_Z_21 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_22 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_22_val = PLAYER_Z_22.GetFloat(PropertyName.VAL);
PLAYER_Z_23 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_23_val = PLAYER_Z_23.GetFloat(PropertyName.VAL);
PLAYER_Z_21.SetFloat(231,PLAYER_Z_23_val-0.2f);
PLAYER_LIGHT_27 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_27_val = PLAYER_LIGHT_27.GetFloat(PropertyName.VAL);
PLAYER_LIGHT_28 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_28.SetFloat(231,PLAYER_LIGHT_27_val + 0.2f);
{
            var enumerator = _world.CallSynonymAction(1342576697, MY, THERE);
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new SET_DIVING();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject UNDERWATER_1;
float UNDERWATER_1_val;
IAcknexObject UNDERWATER_3;
IAcknexObject FWT01SND_4;
IAcknexObject PLAYER_ARC_6;
IAcknexObject PLAYER_ARC_7;
float PLAYER_ARC_7_val;
IAcknexObject PLAYER_ARC_8;
float PLAYER_ARC_8_val;
IAcknexObject MY_SIZE_11;
IAcknexObject MY_SIZE_12;
float MY_SIZE_12_val;
IAcknexObject MY_SIZE_13;
float MY_SIZE_13_val;
IAcknexObject PLAYER_SIZE_16;
IAcknexObject PLAYER_SIZE_17;
float PLAYER_SIZE_17_val;
IAcknexObject PLAYER_SIZE_18;
float PLAYER_SIZE_18_val;
IAcknexObject PLAYER_Z_21;
IAcknexObject PLAYER_Z_22;
float PLAYER_Z_22_val;
IAcknexObject PLAYER_Z_23;
float PLAYER_Z_23_val;
IAcknexObject PLAYER_LIGHT_27;
float PLAYER_LIGHT_27_val;
IAcknexObject PLAYER_LIGHT_28;
}
public class REGIO_ARISE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REGIO_ARISE() {
  }
 public REGIO_ARISE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
UNDERWATER_1 = _world.GetObject(ObjectType.Skill,1369167822);
UNDERWATER_1_val = UNDERWATER_1.GetFloat(PropertyName.VAL);
if (UNDERWATER_1_val == 0f)
{
return false;
}
UNDERWATER_3 = _world.GetObject(ObjectType.Skill,1369167822);
UNDERWATER_3.SetFloat(231,0f);
PLAYER_ARC_4 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_5 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_5_val = PLAYER_ARC_5.GetFloat(PropertyName.VAL);
PLAYER_ARC_6 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_6_val = PLAYER_ARC_6.GetFloat(PropertyName.VAL);
PLAYER_ARC_4.SetFloat(231,PLAYER_ARC_6_val-0.3f);
MY_SIZE_9 = _world.GetObject(ObjectType.Skill,25486605);
MY_SIZE_10 = _world.GetObject(ObjectType.Skill,25486605);
MY_SIZE_10_val = MY_SIZE_10.GetFloat(PropertyName.VAL);
MY_SIZE_11 = _world.GetObject(ObjectType.Skill,25486605);
MY_SIZE_11_val = MY_SIZE_11.GetFloat(PropertyName.VAL);
MY_SIZE_9.SetFloat(231,MY_SIZE_11_val+0.2f);
PLAYER_SIZE_14 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_15 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_15_val = PLAYER_SIZE_15.GetFloat(PropertyName.VAL);
PLAYER_SIZE_16 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_16_val = PLAYER_SIZE_16.GetFloat(PropertyName.VAL);
PLAYER_SIZE_14.SetFloat(231,PLAYER_SIZE_16_val+0.2f);
PLAYER_Z_19 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_20 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_20_val = PLAYER_Z_20.GetFloat(PropertyName.VAL);
PLAYER_Z_21 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_21_val = PLAYER_Z_21.GetFloat(PropertyName.VAL);
PLAYER_Z_19.SetFloat(231,PLAYER_Z_21_val+0.2f);
PLAYER_LIGHT_25 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_25_val = PLAYER_LIGHT_25.GetFloat(PropertyName.VAL);
PLAYER_LIGHT_26 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_26.SetFloat(231,PLAYER_LIGHT_25_val + -0.2f);
{
            var enumerator = _world.CallSynonymAction(1917066007, MY, THERE);
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new SET_SWIMMING();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new DIVE_UP();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject UNDERWATER_1;
float UNDERWATER_1_val;
IAcknexObject UNDERWATER_3;
IAcknexObject PLAYER_ARC_4;
IAcknexObject PLAYER_ARC_5;
float PLAYER_ARC_5_val;
IAcknexObject PLAYER_ARC_6;
float PLAYER_ARC_6_val;
IAcknexObject MY_SIZE_9;
IAcknexObject MY_SIZE_10;
float MY_SIZE_10_val;
IAcknexObject MY_SIZE_11;
float MY_SIZE_11_val;
IAcknexObject PLAYER_SIZE_14;
IAcknexObject PLAYER_SIZE_15;
float PLAYER_SIZE_15_val;
IAcknexObject PLAYER_SIZE_16;
float PLAYER_SIZE_16_val;
IAcknexObject PLAYER_Z_19;
IAcknexObject PLAYER_Z_20;
float PLAYER_Z_20_val;
IAcknexObject PLAYER_Z_21;
float PLAYER_Z_21_val;
IAcknexObject PLAYER_LIGHT_25;
float PLAYER_LIGHT_25_val;
IAcknexObject PLAYER_LIGHT_26;
}
public class HITPLAYER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public HITPLAYER() {
  }
 public HITPLAYER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MODE_DEATH_0 = _world.GetObject(ObjectType.Skill,3267420407);
MODE_DEATH_0_val = MODE_DEATH_0.GetFloat(PropertyName.VAL);
MOVING_1 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_1_val = MOVING_1.GetFloat(PropertyName.VAL);
if (MOVING_1_val == MODE_DEATH_0_val)
{
return false;
}
GOD_MODE_3 = _world.GetObject(ObjectType.Skill,1756335307);
GOD_MODE_3_val = GOD_MODE_3.GetFloat(PropertyName.VAL);
if (GOD_MODE_3_val > 0f)
{
return false;
}
HITSERIOUSNESS_4 = _world.GetObject(ObjectType.Skill,4168972789);
HITSERIOUSNESS_5 = _world.GetObject(ObjectType.Skill,4168972789);
HITSERIOUSNESS_5_val = HITSERIOUSNESS_5.GetFloat(PropertyName.VAL);
PLAYER_RESULT_6 = _world.GetObject(ObjectType.Skill,1861765784);
PLAYER_RESULT_6_val = PLAYER_RESULT_6.GetFloat(PropertyName.VAL);
TOUGHNESS_11 = _world.GetObject(ObjectType.Skill,1295621997);
TOUGHNESS_11_val = TOUGHNESS_11.GetFloat(PropertyName.VAL);
HITSERIOUSNESS_4.SetFloat(231,PLAYER_RESULT_6_val*-5f*TOUGHNESS_11_val);
PLAYER_ARMOUR_13 = _world.GetObject(ObjectType.Skill,1211659215);
PLAYER_ARMOUR_13_val = PLAYER_ARMOUR_13.GetFloat(PropertyName.VAL);
if (PLAYER_ARMOUR_13_val == 0f)
{
goto CONT;
}
HITSERIOUSNESS_14 = _world.GetObject(ObjectType.Skill,4168972789);
HITSERIOUSNESS_14_val = HITSERIOUSNESS_14.GetFloat(PropertyName.VAL);
PLAYER_ARMOUR_15 = _world.GetObject(ObjectType.Skill,1211659215);
PLAYER_ARMOUR_15_val = PLAYER_ARMOUR_15.GetFloat(PropertyName.VAL);
PLAYER_ARMOUR_16 = _world.GetObject(ObjectType.Skill,1211659215);
PLAYER_ARMOUR_16.SetFloat(231,PLAYER_ARMOUR_15_val + HITSERIOUSNESS_14_val);
HITSERIOUSNESS_17 = _world.GetObject(ObjectType.Skill,4168972789);
HITSERIOUSNESS_18 = _world.GetObject(ObjectType.Skill,4168972789);
HITSERIOUSNESS_18_val = HITSERIOUSNESS_18.GetFloat(PropertyName.VAL);
HITSERIOUSNESS_19 = _world.GetObject(ObjectType.Skill,4168972789);
HITSERIOUSNESS_19_val = HITSERIOUSNESS_19.GetFloat(PropertyName.VAL);
HITSERIOUSNESS_17.SetFloat(231,HITSERIOUSNESS_19_val/4f);
CONT:
PLAYER_ANGLE_22 = _world.GetObject(ObjectType.Skill,462);
PLAYER_ANGLE_23 = _world.GetObject(ObjectType.Skill,462);
PLAYER_ANGLE_23_val = PLAYER_ANGLE_23.GetFloat(PropertyName.VAL);
PLAYER_ANGLE_24 = _world.GetObject(ObjectType.Skill,462);
PLAYER_ANGLE_24_val = PLAYER_ANGLE_24.GetFloat(PropertyName.VAL);
TOUGHNESS_34 = _world.GetObject(ObjectType.Skill,1295621997);
TOUGHNESS_34_val = TOUGHNESS_34.GetFloat(PropertyName.VAL);
PLAYER_ANGLE_22.SetFloat(231,PLAYER_ANGLE_24_val+(UnityEngine.Random.value*0.2f-0.1f)*TOUGHNESS_34_val);
PLAYER_TILT_35 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_36 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_36_val = PLAYER_TILT_36.GetFloat(PropertyName.VAL);
PLAYER_TILT_37 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_37_val = PLAYER_TILT_37.GetFloat(PropertyName.VAL);
TOUGHNESS_47 = _world.GetObject(ObjectType.Skill,1295621997);
TOUGHNESS_47_val = TOUGHNESS_47.GetFloat(PropertyName.VAL);
PLAYER_TILT_35.SetFloat(231,PLAYER_TILT_37_val+(UnityEngine.Random.value*0.2f-0.1f)*TOUGHNESS_47_val);
HITSERIOUSNESS_48 = _world.GetObject(ObjectType.Skill,4168972789);
HITSERIOUSNESS_48_val = HITSERIOUSNESS_48.GetFloat(PropertyName.VAL);
PLAYER_HEALTH_49 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_49_val = PLAYER_HEALTH_49.GetFloat(PropertyName.VAL);
PLAYER_HEALTH_50 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_50.SetFloat(231,PLAYER_HEALTH_49_val + HITSERIOUSNESS_48_val);
PLAYER_HIT_52 = _world.GetObject(ObjectType.Skill,1956124350);
PLAYER_HIT_52_val = PLAYER_HIT_52.GetFloat(PropertyName.VAL);
if (PLAYER_HIT_52_val != 0f)
{
return false;
}
PLAYER_HIT_54 = _world.GetObject(ObjectType.Skill,1956124350);
PLAYER_HIT_54.SetFloat(231,1f);
HITVALUE_55 = _world.GetObject(ObjectType.Skill,2881291151);
HITVALUE_56 = _world.GetObject(ObjectType.Skill,2881291151);
HITVALUE_56_val = HITVALUE_56.GetFloat(PropertyName.VAL);
HITSERIOUSNESS_59 = _world.GetObject(ObjectType.Skill,4168972789);
HITSERIOUSNESS_59_val = HITSERIOUSNESS_59.GetFloat(PropertyName.VAL);
PLAYER_HEALTH_67 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_67_val = PLAYER_HEALTH_67.GetFloat(PropertyName.VAL);
HITVALUE_55.SetFloat(231,0.5f*HITSERIOUSNESS_59_val/-100f+(100f-PLAYER_HEALTH_67_val)/2f);
UNDERWATER_72 = _world.GetObject(ObjectType.Skill,1369167822);
UNDERWATER_72_val = UNDERWATER_72.GetFloat(PropertyName.VAL);
if (UNDERWATER_72_val > 0f)
{
goto BLUB;
}
PLAYER_HEALTH_74 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_74_val = PLAYER_HEALTH_74.GetFloat(PropertyName.VAL);
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
HIT03SND_79 = _world.AcknexObject.GetAcknexObject(2835730426);
_world.PlaySound(HIT03SND_79,0.7f, null);
goto CONT2;
HIT01:
HIT01SND_81 = _world.AcknexObject.GetAcknexObject(2835658552);
_world.PlaySound(HIT01SND_81,0.5f, null);
goto CONT2;
HIT02:
HIT02SND_83 = _world.AcknexObject.GetAcknexObject(2835694489);
_world.PlaySound(HIT02SND_83,0.3f, null);
goto CONT2;
BLUB:
HIT04SND_85 = _world.AcknexObject.GetAcknexObject(2835766363);
_world.PlaySound(HIT04SND_85,0.8f, null);
CONT2:
KILLPLAYER_87 = _world.AcknexObject.GetAcknexObject(1513684550);
temp_90 =_world.AcknexObject?.GetAcknexObject(11);
if (temp_90 != KILLPLAYER_87)
{
REDOUT_91 = _world.AcknexObject.GetAcknexObject(3425520672);
_world.AcknexObject.SetAcknexObject(11,REDOUT_91);
}
//Unknown keyword: 
      return false;
  }
IAcknexObject MODE_DEATH_0;
float MODE_DEATH_0_val;
IAcknexObject MOVING_1;
float MOVING_1_val;
IAcknexObject GOD_MODE_3;
float GOD_MODE_3_val;
IAcknexObject HITSERIOUSNESS_4;
IAcknexObject HITSERIOUSNESS_5;
float HITSERIOUSNESS_5_val;
IAcknexObject PLAYER_RESULT_6;
float PLAYER_RESULT_6_val;
IAcknexObject TOUGHNESS_11;
float TOUGHNESS_11_val;
IAcknexObject PLAYER_ARMOUR_13;
float PLAYER_ARMOUR_13_val;
IAcknexObject HITSERIOUSNESS_14;
float HITSERIOUSNESS_14_val;
IAcknexObject PLAYER_ARMOUR_15;
float PLAYER_ARMOUR_15_val;
IAcknexObject PLAYER_ARMOUR_16;
IAcknexObject HITSERIOUSNESS_17;
IAcknexObject HITSERIOUSNESS_18;
float HITSERIOUSNESS_18_val;
IAcknexObject HITSERIOUSNESS_19;
float HITSERIOUSNESS_19_val;
IAcknexObject PLAYER_ANGLE_22;
IAcknexObject PLAYER_ANGLE_23;
float PLAYER_ANGLE_23_val;
IAcknexObject PLAYER_ANGLE_24;
float PLAYER_ANGLE_24_val;
IAcknexObject TOUGHNESS_34;
float TOUGHNESS_34_val;
IAcknexObject PLAYER_TILT_35;
IAcknexObject PLAYER_TILT_36;
float PLAYER_TILT_36_val;
IAcknexObject PLAYER_TILT_37;
float PLAYER_TILT_37_val;
IAcknexObject TOUGHNESS_47;
float TOUGHNESS_47_val;
IAcknexObject HITSERIOUSNESS_48;
float HITSERIOUSNESS_48_val;
IAcknexObject PLAYER_HEALTH_49;
float PLAYER_HEALTH_49_val;
IAcknexObject PLAYER_HEALTH_50;
IAcknexObject PLAYER_HIT_52;
float PLAYER_HIT_52_val;
IAcknexObject PLAYER_HIT_54;
IAcknexObject HITVALUE_55;
IAcknexObject HITVALUE_56;
float HITVALUE_56_val;
IAcknexObject HITSERIOUSNESS_59;
float HITSERIOUSNESS_59_val;
IAcknexObject PLAYER_HEALTH_67;
float PLAYER_HEALTH_67_val;
IAcknexObject UNDERWATER_72;
float UNDERWATER_72_val;
IAcknexObject PLAYER_HEALTH_74;
float PLAYER_HEALTH_74_val;
IAcknexObject HIT03SND_79;
IAcknexObject HIT01SND_81;
IAcknexObject HIT02SND_83;
IAcknexObject HIT04SND_85;
IAcknexObject KILLPLAYER_87;
IAcknexObject temp_90;
IAcknexObject REDOUT_91;
}
public class REDOUT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REDOUT() {
  }
 public REDOUT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
REDVALUE_1 = _world.GetObject(ObjectType.Skill,2366887749);
REDVALUE_1_val = REDVALUE_1.GetFloat(PropertyName.VAL);
REDVALUE_2 = _world.GetObject(ObjectType.Skill,2366887749);
REDVALUE_2.SetFloat(231,REDVALUE_1_val + 0.1f);
PLAYER_ARC_4 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_4_val = PLAYER_ARC_4.GetFloat(PropertyName.VAL);
PLAYER_ARC_5 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_5.SetFloat(231,PLAYER_ARC_4_val + -0.01f);
PAL_RED_6 = _world.AcknexObject.GetAcknexObject(2938548932);
REDVALUE_7 = _world.GetObject(ObjectType.Skill,2366887749);
REDVALUE_7_val = REDVALUE_7.GetFloat(PropertyName.VAL);
_world.FadePal(PAL_RED_6,REDVALUE_7_val);
HITVALUE_8 = _world.GetObject(ObjectType.Skill,2881291151);
HITVALUE_8_val = HITVALUE_8.GetFloat(PropertyName.VAL);
REDVALUE_9 = _world.GetObject(ObjectType.Skill,2366887749);
REDVALUE_9_val = REDVALUE_9.GetFloat(PropertyName.VAL);
if (REDVALUE_9_val < HITVALUE_8_val)
{
return false;
}
PLAYER_HEALTH_11 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_11_val = PLAYER_HEALTH_11.GetFloat(PropertyName.VAL);
if (PLAYER_HEALTH_11_val < 1f)
{
goto KILL;
}
REDIN_12 = _world.AcknexObject.GetAcknexObject(233954943);
_world.AcknexObject.SetAcknexObject(11,REDIN_12);
return false;
KILL:
KILLPLAYER_15 = _world.AcknexObject.GetAcknexObject(1513684550);
_world.AcknexObject.SetAcknexObject(11,KILLPLAYER_15);
//Unknown keyword: 
      return false;
  }
IAcknexObject REDVALUE_1;
float REDVALUE_1_val;
IAcknexObject REDVALUE_2;
IAcknexObject PLAYER_ARC_4;
float PLAYER_ARC_4_val;
IAcknexObject PLAYER_ARC_5;
IAcknexObject PAL_RED_6;
IAcknexObject REDVALUE_7;
float REDVALUE_7_val;
IAcknexObject HITVALUE_8;
float HITVALUE_8_val;
IAcknexObject REDVALUE_9;
float REDVALUE_9_val;
IAcknexObject PLAYER_HEALTH_11;
float PLAYER_HEALTH_11_val;
IAcknexObject REDIN_12;
IAcknexObject KILLPLAYER_15;
}
public class REDIN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REDIN() {
  }
 public REDIN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
REDVALUE_1 = _world.GetObject(ObjectType.Skill,2366887749);
REDVALUE_1_val = REDVALUE_1.GetFloat(PropertyName.VAL);
REDVALUE_2 = _world.GetObject(ObjectType.Skill,2366887749);
REDVALUE_2.SetFloat(231,REDVALUE_1_val + -0.1f);
PLAYER_ARC_4 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_4_val = PLAYER_ARC_4.GetFloat(PropertyName.VAL);
PLAYER_ARC_5 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_5.SetFloat(231,PLAYER_ARC_4_val + 0.01f);
PAL_RED_6 = _world.AcknexObject.GetAcknexObject(2938548932);
REDVALUE_7 = _world.GetObject(ObjectType.Skill,2366887749);
REDVALUE_7_val = REDVALUE_7.GetFloat(PropertyName.VAL);
_world.FadePal(PAL_RED_6,REDVALUE_7_val);
REDVALUE_9 = _world.GetObject(ObjectType.Skill,2366887749);
REDVALUE_9_val = REDVALUE_9.GetFloat(PropertyName.VAL);
if (REDVALUE_9_val < 0f)
{
REDVALUE_11 = _world.GetObject(ObjectType.Skill,2366887749);
REDVALUE_11.SetFloat(231,0f);
}
REDVALUE_13 = _world.GetObject(ObjectType.Skill,2366887749);
REDVALUE_13_val = REDVALUE_13.GetFloat(PropertyName.VAL);
if (REDVALUE_13_val > 0f)
{
return false;
}
UNDERWATER_15 = _world.GetObject(ObjectType.Skill,1369167822);
UNDERWATER_15_val = UNDERWATER_15.GetFloat(PropertyName.VAL);
if (UNDERWATER_15_val == 0f)
{
goto NOWATER;
}
{
            var enumerator = new SET_BLUE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }PLAYER_ARC_17 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_17.SetFloat(231,1.3f);
goto FINISH;
NOWATER:
PLAYER_ARC_19 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_19.SetFloat(231,1f);
FINISH:
PLAYER_HIT_21 = _world.GetObject(ObjectType.Skill,1956124350);
PLAYER_HIT_21.SetFloat(231,0f);
_world.AcknexObject.SetAcknexObject(11,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject REDVALUE_1;
float REDVALUE_1_val;
IAcknexObject REDVALUE_2;
IAcknexObject PLAYER_ARC_4;
float PLAYER_ARC_4_val;
IAcknexObject PLAYER_ARC_5;
IAcknexObject PAL_RED_6;
IAcknexObject REDVALUE_7;
float REDVALUE_7_val;
IAcknexObject REDVALUE_9;
float REDVALUE_9_val;
IAcknexObject REDVALUE_11;
IAcknexObject REDVALUE_13;
float REDVALUE_13_val;
IAcknexObject UNDERWATER_15;
float UNDERWATER_15_val;
IAcknexObject PLAYER_ARC_17;
IAcknexObject PLAYER_ARC_19;
IAcknexObject PLAYER_HIT_21;
}
public class FLASHPLAYER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public FLASHPLAYER() {
  }
 public FLASHPLAYER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
GOD_MODE_1 = _world.GetObject(ObjectType.Skill,1756335307);
GOD_MODE_1_val = GOD_MODE_1.GetFloat(PropertyName.VAL);
if (GOD_MODE_1_val > 0f)
{
return false;
}
HITSERIOUSNESS_2 = _world.GetObject(ObjectType.Skill,4168972789);
HITSERIOUSNESS_3 = _world.GetObject(ObjectType.Skill,4168972789);
HITSERIOUSNESS_3_val = HITSERIOUSNESS_3.GetFloat(PropertyName.VAL);
PLAYER_RESULT_4 = _world.GetObject(ObjectType.Skill,1861765784);
PLAYER_RESULT_4_val = PLAYER_RESULT_4.GetFloat(PropertyName.VAL);
TOUGHNESS_12 = _world.GetObject(ObjectType.Skill,1295621997);
TOUGHNESS_12_val = TOUGHNESS_12.GetFloat(PropertyName.VAL);
HITSERIOUSNESS_2.SetFloat(231,PLAYER_RESULT_4_val*-5f*(0.5f+TOUGHNESS_12_val/2f));
PLAYER_ARMOUR_17 = _world.GetObject(ObjectType.Skill,1211659215);
PLAYER_ARMOUR_17_val = PLAYER_ARMOUR_17.GetFloat(PropertyName.VAL);
if (PLAYER_ARMOUR_17_val == 0f)
{
goto CONT;
}
HITSERIOUSNESS_18 = _world.GetObject(ObjectType.Skill,4168972789);
HITSERIOUSNESS_18_val = HITSERIOUSNESS_18.GetFloat(PropertyName.VAL);
PLAYER_ARMOUR_19 = _world.GetObject(ObjectType.Skill,1211659215);
PLAYER_ARMOUR_19_val = PLAYER_ARMOUR_19.GetFloat(PropertyName.VAL);
PLAYER_ARMOUR_20 = _world.GetObject(ObjectType.Skill,1211659215);
PLAYER_ARMOUR_20.SetFloat(231,PLAYER_ARMOUR_19_val + HITSERIOUSNESS_18_val);
HITSERIOUSNESS_21 = _world.GetObject(ObjectType.Skill,4168972789);
HITSERIOUSNESS_22 = _world.GetObject(ObjectType.Skill,4168972789);
HITSERIOUSNESS_22_val = HITSERIOUSNESS_22.GetFloat(PropertyName.VAL);
HITSERIOUSNESS_23 = _world.GetObject(ObjectType.Skill,4168972789);
HITSERIOUSNESS_23_val = HITSERIOUSNESS_23.GetFloat(PropertyName.VAL);
HITSERIOUSNESS_21.SetFloat(231,HITSERIOUSNESS_23_val/4f);
CONT:
HITSERIOUSNESS_26 = _world.GetObject(ObjectType.Skill,4168972789);
HITSERIOUSNESS_26_val = HITSERIOUSNESS_26.GetFloat(PropertyName.VAL);
PLAYER_HEALTH_27 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_27_val = PLAYER_HEALTH_27.GetFloat(PropertyName.VAL);
PLAYER_HEALTH_28 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_28.SetFloat(231,PLAYER_HEALTH_27_val + HITSERIOUSNESS_26_val);
PLAYER_HIT_30 = _world.GetObject(ObjectType.Skill,1956124350);
PLAYER_HIT_30_val = PLAYER_HIT_30.GetFloat(PropertyName.VAL);
if (PLAYER_HIT_30_val != 0f)
{
return false;
}
PLAYER_HIT_32 = _world.GetObject(ObjectType.Skill,1956124350);
PLAYER_HIT_32.SetFloat(231,1f);
HITVALUE_33 = _world.GetObject(ObjectType.Skill,2881291151);
HITVALUE_34 = _world.GetObject(ObjectType.Skill,2881291151);
HITVALUE_34_val = HITVALUE_34.GetFloat(PropertyName.VAL);
HITSERIOUSNESS_37 = _world.GetObject(ObjectType.Skill,4168972789);
HITSERIOUSNESS_37_val = HITSERIOUSNESS_37.GetFloat(PropertyName.VAL);
PLAYER_HEALTH_45 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_45_val = PLAYER_HEALTH_45.GetFloat(PropertyName.VAL);
HITVALUE_33.SetFloat(231,0.5f*HITSERIOUSNESS_37_val/-100f+(100f-PLAYER_HEALTH_45_val)/2f);
PLAYER_HEALTH_50 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_50_val = PLAYER_HEALTH_50.GetFloat(PropertyName.VAL);
if (PLAYER_HEALTH_50_val > 0f)
{
HIT01SND_51 = _world.AcknexObject.GetAcknexObject(2835658552);
_world.PlaySound(HIT01SND_51,0.5f, null);
}
FLASHOUT_53 = _world.AcknexObject.GetAcknexObject(2376312339);
_world.AcknexObject.SetAcknexObject(11,FLASHOUT_53);
//Unknown keyword: 
      return false;
  }
IAcknexObject GOD_MODE_1;
float GOD_MODE_1_val;
IAcknexObject HITSERIOUSNESS_2;
IAcknexObject HITSERIOUSNESS_3;
float HITSERIOUSNESS_3_val;
IAcknexObject PLAYER_RESULT_4;
float PLAYER_RESULT_4_val;
IAcknexObject TOUGHNESS_12;
float TOUGHNESS_12_val;
IAcknexObject PLAYER_ARMOUR_17;
float PLAYER_ARMOUR_17_val;
IAcknexObject HITSERIOUSNESS_18;
float HITSERIOUSNESS_18_val;
IAcknexObject PLAYER_ARMOUR_19;
float PLAYER_ARMOUR_19_val;
IAcknexObject PLAYER_ARMOUR_20;
IAcknexObject HITSERIOUSNESS_21;
IAcknexObject HITSERIOUSNESS_22;
float HITSERIOUSNESS_22_val;
IAcknexObject HITSERIOUSNESS_23;
float HITSERIOUSNESS_23_val;
IAcknexObject HITSERIOUSNESS_26;
float HITSERIOUSNESS_26_val;
IAcknexObject PLAYER_HEALTH_27;
float PLAYER_HEALTH_27_val;
IAcknexObject PLAYER_HEALTH_28;
IAcknexObject PLAYER_HIT_30;
float PLAYER_HIT_30_val;
IAcknexObject PLAYER_HIT_32;
IAcknexObject HITVALUE_33;
IAcknexObject HITVALUE_34;
float HITVALUE_34_val;
IAcknexObject HITSERIOUSNESS_37;
float HITSERIOUSNESS_37_val;
IAcknexObject PLAYER_HEALTH_45;
float PLAYER_HEALTH_45_val;
IAcknexObject PLAYER_HEALTH_50;
float PLAYER_HEALTH_50_val;
IAcknexObject HIT01SND_51;
IAcknexObject FLASHOUT_53;
}
public class FLASHOUT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public FLASHOUT() {
  }
 public FLASHOUT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
REDVALUE_1 = _world.GetObject(ObjectType.Skill,2366887749);
REDVALUE_1_val = REDVALUE_1.GetFloat(PropertyName.VAL);
REDVALUE_2 = _world.GetObject(ObjectType.Skill,2366887749);
REDVALUE_2.SetFloat(231,REDVALUE_1_val + 0.1f);
PAL_FLASH_3 = _world.AcknexObject.GetAcknexObject(314083479);
REDVALUE_4 = _world.GetObject(ObjectType.Skill,2366887749);
REDVALUE_4_val = REDVALUE_4.GetFloat(PropertyName.VAL);
_world.FadePal(PAL_FLASH_3,REDVALUE_4_val);
HITVALUE_5 = _world.GetObject(ObjectType.Skill,2881291151);
HITVALUE_5_val = HITVALUE_5.GetFloat(PropertyName.VAL);
REDVALUE_6 = _world.GetObject(ObjectType.Skill,2366887749);
REDVALUE_6_val = REDVALUE_6.GetFloat(PropertyName.VAL);
if (REDVALUE_6_val < HITVALUE_5_val)
{
return false;
}
PLAYER_HEALTH_8 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_8_val = PLAYER_HEALTH_8.GetFloat(PropertyName.VAL);
if (PLAYER_HEALTH_8_val < 1f)
{
goto KILL;
}
FLASHIN_9 = _world.AcknexObject.GetAcknexObject(3325773330);
_world.AcknexObject.SetAcknexObject(11,FLASHIN_9);
return false;
KILL:
KILLPLAYER_12 = _world.AcknexObject.GetAcknexObject(1513684550);
_world.AcknexObject.SetAcknexObject(11,KILLPLAYER_12);
//Unknown keyword: 
      return false;
  }
IAcknexObject REDVALUE_1;
float REDVALUE_1_val;
IAcknexObject REDVALUE_2;
IAcknexObject PAL_FLASH_3;
IAcknexObject REDVALUE_4;
float REDVALUE_4_val;
IAcknexObject HITVALUE_5;
float HITVALUE_5_val;
IAcknexObject REDVALUE_6;
float REDVALUE_6_val;
IAcknexObject PLAYER_HEALTH_8;
float PLAYER_HEALTH_8_val;
IAcknexObject FLASHIN_9;
IAcknexObject KILLPLAYER_12;
}
public class FLASHIN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public FLASHIN() {
  }
 public FLASHIN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
REDVALUE_1 = _world.GetObject(ObjectType.Skill,2366887749);
REDVALUE_1_val = REDVALUE_1.GetFloat(PropertyName.VAL);
REDVALUE_2 = _world.GetObject(ObjectType.Skill,2366887749);
REDVALUE_2.SetFloat(231,REDVALUE_1_val + -0.1f);
PAL_FLASH_3 = _world.AcknexObject.GetAcknexObject(314083479);
REDVALUE_4 = _world.GetObject(ObjectType.Skill,2366887749);
REDVALUE_4_val = REDVALUE_4.GetFloat(PropertyName.VAL);
_world.FadePal(PAL_FLASH_3,REDVALUE_4_val);
REDVALUE_6 = _world.GetObject(ObjectType.Skill,2366887749);
REDVALUE_6_val = REDVALUE_6.GetFloat(PropertyName.VAL);
if (REDVALUE_6_val < 0f)
{
REDVALUE_8 = _world.GetObject(ObjectType.Skill,2366887749);
REDVALUE_8.SetFloat(231,0f);
}
REDVALUE_10 = _world.GetObject(ObjectType.Skill,2366887749);
REDVALUE_10_val = REDVALUE_10.GetFloat(PropertyName.VAL);
if (REDVALUE_10_val > 0f)
{
return false;
}
UNDERWATER_12 = _world.GetObject(ObjectType.Skill,1369167822);
UNDERWATER_12_val = UNDERWATER_12.GetFloat(PropertyName.VAL);
if (UNDERWATER_12_val != 0f)
{
{
            var enumerator = new SET_BLUE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }}
_world.AcknexObject.SetAcknexObject(11,null);
PLAYER_HIT_17 = _world.GetObject(ObjectType.Skill,1956124350);
PLAYER_HIT_17.SetFloat(231,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject REDVALUE_1;
float REDVALUE_1_val;
IAcknexObject REDVALUE_2;
IAcknexObject PAL_FLASH_3;
IAcknexObject REDVALUE_4;
float REDVALUE_4_val;
IAcknexObject REDVALUE_6;
float REDVALUE_6_val;
IAcknexObject REDVALUE_8;
IAcknexObject REDVALUE_10;
float REDVALUE_10_val;
IAcknexObject UNDERWATER_12;
float UNDERWATER_12_val;
IAcknexObject PLAYER_HIT_17;
}
public class HITPLAYERDELAY : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public HITPLAYERDELAY() {
  }
 public HITPLAYERDELAY(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)8f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
{
            var enumerator = new HITPLAYER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
float startTime1;
float endTime1;
}
public class KILLPLAYER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public KILLPLAYER() {
  }
 public KILLPLAYER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MODE_DEATH_0 = _world.GetObject(ObjectType.Skill,3267420407);
MODE_DEATH_0_val = MODE_DEATH_0.GetFloat(PropertyName.VAL);
MOVING_1 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_1_val = MOVING_1.GetFloat(PropertyName.VAL);
if (MOVING_1_val == MODE_DEATH_0_val)
{
goto DEATH;
}
_world.AcknexObject.SetAcknexObject(82,null);
SELECTNONE_4 = _world.AcknexObject.GetAcknexObject(1879623005);
_world.AcknexObject.SetAcknexObject(20,SELECTNONE_4);
PAL_RED_7 = _world.AcknexObject.GetAcknexObject(2938548932);
_world.FadePal(PAL_RED_7,0.5f);
DEATH00SND_9 = _world.AcknexObject.GetAcknexObject(2555225272);
_world.PlaySound(DEATH00SND_9,1f, null);
{
            var enumerator = new SET_DEATH();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }DEATHCOUNTER_12 = _world.GetObject(ObjectType.Skill,3779069139);
DEATHCOUNTER_12.SetFloat(231,0f);
return false;
DEATH:
DEATHCOUNTER_14 = _world.GetObject(ObjectType.Skill,3779069139);
DEATHCOUNTER_14_val = DEATHCOUNTER_14.GetFloat(PropertyName.VAL);
DEATHCOUNTER_15 = _world.GetObject(ObjectType.Skill,3779069139);
DEATHCOUNTER_15.SetFloat(231,DEATHCOUNTER_14_val + 1f);
PLAYER_VX_16 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_17 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_17_val = PLAYER_VX_17.GetFloat(PropertyName.VAL);
PLAYER_VX_18 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_18_val = PLAYER_VX_18.GetFloat(PropertyName.VAL);
PLAYER_VX_16.SetFloat(231,PLAYER_VX_18_val*0.5f);
PLAYER_VY_21 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_22 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_22_val = PLAYER_VY_22.GetFloat(PropertyName.VAL);
PLAYER_VY_23 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_23_val = PLAYER_VY_23.GetFloat(PropertyName.VAL);
PLAYER_VY_21.SetFloat(231,PLAYER_VY_23_val*0.5f);
DEATHCOUNTER_27 = _world.GetObject(ObjectType.Skill,3779069139);
DEATHCOUNTER_27_val = DEATHCOUNTER_27.GetFloat(PropertyName.VAL);
if (DEATHCOUNTER_27_val < 48f)
{
return false;
}
DEATHCOUNTER_29 = _world.GetObject(ObjectType.Skill,3779069139);
DEATHCOUNTER_29.SetFloat(231,0f);
_world.SetSynonymObject(270057211,null);
ENDOFLEVEL_32 = _world.AcknexObject.GetAcknexObject(4126566961);
_world.AcknexObject.SetAcknexObject(20,ENDOFLEVEL_32);
_world.AcknexObject.SetAcknexObject(11,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject MODE_DEATH_0;
float MODE_DEATH_0_val;
IAcknexObject MOVING_1;
float MOVING_1_val;
IAcknexObject SELECTNONE_4;
IAcknexObject PAL_RED_7;
IAcknexObject DEATH00SND_9;
IAcknexObject DEATHCOUNTER_12;
IAcknexObject DEATHCOUNTER_14;
float DEATHCOUNTER_14_val;
IAcknexObject DEATHCOUNTER_15;
IAcknexObject PLAYER_VX_16;
IAcknexObject PLAYER_VX_17;
float PLAYER_VX_17_val;
IAcknexObject PLAYER_VX_18;
float PLAYER_VX_18_val;
IAcknexObject PLAYER_VY_21;
IAcknexObject PLAYER_VY_22;
float PLAYER_VY_22_val;
IAcknexObject PLAYER_VY_23;
float PLAYER_VY_23_val;
IAcknexObject DEATHCOUNTER_27;
float DEATHCOUNTER_27_val;
IAcknexObject DEATHCOUNTER_29;
IAcknexObject ENDOFLEVEL_32;
}
public class FINISHPLAYER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public FINISHPLAYER() {
  }
 public FINISHPLAYER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
KILLPLAYER_3 = _world.AcknexObject.GetAcknexObject(1513684550);
_world.AcknexObject.SetAcknexObject(11,KILLPLAYER_3);
EXP01SND_6 = _world.AcknexObject.GetAcknexObject(1569989984);
_world.PlaySound(EXP01SND_6,0.7f, null);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject KILLPLAYER_3;
IAcknexObject EXP01SND_6;
}
public class TOGGLEGODMODE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TOGGLEGODMODE() {
  }
 public TOGGLEGODMODE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
_world.AcknexObject.SetAcknexObject(51,null);
ALARM03SND_2 = _world.AcknexObject.GetAcknexObject(759955234);
_world.PlaySound(ALARM03SND_2,0.7f, null);
GOD_MODE_5 = _world.GetObject(ObjectType.Skill,1756335307);
GOD_MODE_5_val = GOD_MODE_5.GetFloat(PropertyName.VAL);
if (GOD_MODE_5_val < 1f)
{
goto GODMODE;
}
HLP06STR_6 = _world.AcknexObject.GetAcknexObject(2258733488);
_world.SetSynonymObject(361798934,HLP06STR_6);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }GOD_MODE_9 = _world.GetObject(ObjectType.Skill,1756335307);
GOD_MODE_9.SetFloat(231,0f);
return false;
GODMODE:
HLP05STR_10 = _world.AcknexObject.GetAcknexObject(2258697551);
_world.SetSynonymObject(361798934,HLP05STR_10);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }GOD_MODE_13 = _world.GetObject(ObjectType.Skill,1756335307);
GOD_MODE_13.SetFloat(231,1f);
HAS_MP5_15 = _world.GetObject(ObjectType.Skill,1205036122);
HAS_MP5_15.SetFloat(231,1f);
HAS_GRANADE_17 = _world.GetObject(ObjectType.Skill,40123194);
HAS_GRANADE_17.SetFloat(231,1f);
HAS_STINGER_19 = _world.GetObject(ObjectType.Skill,2740601668);
HAS_STINGER_19.SetFloat(231,1f);
HAS_QUANTUM_21 = _world.GetObject(ObjectType.Skill,187328435);
HAS_QUANTUM_21.SetFloat(231,1f);
HAS_PDA_23 = _world.GetObject(ObjectType.Skill,1205039005);
HAS_PDA_23.SetFloat(231,1f);
AMMO_MP5_25 = _world.GetObject(ObjectType.Skill,1494668136);
AMMO_MP5_25.SetFloat(231,999f);
AMMO_GRANADE_27 = _world.GetObject(ObjectType.Skill,3603202376);
AMMO_GRANADE_27.SetFloat(231,999f);
AMMO_STINGER_29 = _world.GetObject(ObjectType.Skill,2008713554);
AMMO_STINGER_29.SetFloat(231,999f);
AMMO_QUANTUM_31 = _world.GetObject(ObjectType.Skill,3750407617);
AMMO_QUANTUM_31.SetFloat(231,999f);
KEY1_33 = _world.GetObject(ObjectType.Skill,2089248007);
KEY1_33.SetFloat(231,1f);
KEY2_35 = _world.GetObject(ObjectType.Skill,2089248008);
KEY2_35.SetFloat(231,1f);
KEY3_37 = _world.GetObject(ObjectType.Skill,2089248009);
KEY3_37.SetFloat(231,1f);
KEY4_39 = _world.GetObject(ObjectType.Skill,2089248010);
KEY4_39.SetFloat(231,1f);
{
            var enumerator = new SHOWAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject ALARM03SND_2;
IAcknexObject GOD_MODE_5;
float GOD_MODE_5_val;
IAcknexObject HLP06STR_6;
IAcknexObject GOD_MODE_9;
IAcknexObject HLP05STR_10;
IAcknexObject GOD_MODE_13;
IAcknexObject HAS_MP5_15;
IAcknexObject HAS_GRANADE_17;
IAcknexObject HAS_STINGER_19;
IAcknexObject HAS_QUANTUM_21;
IAcknexObject HAS_PDA_23;
IAcknexObject AMMO_MP5_25;
IAcknexObject AMMO_GRANADE_27;
IAcknexObject AMMO_STINGER_29;
IAcknexObject AMMO_QUANTUM_31;
IAcknexObject KEY1_33;
IAcknexObject KEY2_35;
IAcknexObject KEY3_37;
IAcknexObject KEY4_39;
}
public class SETCKEY : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SETCKEY() {
  }
 public SETCKEY(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SETGKEY_0 = _world.AcknexObject.GetAcknexObject(2683144393);
_world.AcknexObject.SetAcknexObject(50,SETGKEY_0);
GODCOUNTER_3 = _world.GetObject(ObjectType.Skill,3966981511);
GODCOUNTER_3.SetFloat(231,3f);
//Unknown keyword: 
      return false;
  }
IAcknexObject SETGKEY_0;
IAcknexObject GODCOUNTER_3;
}
public class SETGKEY : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SETGKEY() {
  }
 public SETGKEY(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
_world.AcknexObject.SetAcknexObject(50,null);
SETOKEY_2 = _world.AcknexObject.GetAcknexObject(2683431889);
_world.AcknexObject.SetAcknexObject(54,SETOKEY_2);
GODCOUNTER_5 = _world.GetObject(ObjectType.Skill,3966981511);
GODCOUNTER_5.SetFloat(231,3f);
//Unknown keyword: 
      return false;
  }
IAcknexObject SETOKEY_2;
IAcknexObject GODCOUNTER_5;
}
public class SETOKEY : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SETOKEY() {
  }
 public SETOKEY(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
_world.AcknexObject.SetAcknexObject(54,null);
SETDKEY_2 = _world.AcknexObject.GetAcknexObject(2683036582);
_world.AcknexObject.SetAcknexObject(62,SETDKEY_2);
GODCOUNTER_5 = _world.GetObject(ObjectType.Skill,3966981511);
GODCOUNTER_5.SetFloat(231,3f);
//Unknown keyword: 
      return false;
  }
IAcknexObject SETDKEY_2;
IAcknexObject GODCOUNTER_5;
}
public class SETDKEY : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SETDKEY() {
  }
 public SETDKEY(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
_world.AcknexObject.SetAcknexObject(62,null);
TOGGLEGODMODE_2 = _world.AcknexObject.GetAcknexObject(138490414);
_world.AcknexObject.SetAcknexObject(51,TOGGLEGODMODE_2);
GODCOUNTER_5 = _world.GetObject(ObjectType.Skill,3966981511);
GODCOUNTER_5.SetFloat(231,3f);
//Unknown keyword: 
      return false;
  }
IAcknexObject TOGGLEGODMODE_2;
IAcknexObject GODCOUNTER_5;
}
public class FIRE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public FIRE() {
  }
 public FIRE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
            case 3:
                goto _coroutine3;
            case 4:
                goto _coroutine4;
            case 5:
                goto _coroutine5;
            case 6:
                goto _coroutine6;
     }
GUNFIRING_1 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_1.SetFloat(231,1f);
_world.AcknexObject.SetAcknexObject(78,null);
_world.AcknexObject.SetAcknexObject(97,null);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)1f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
FIRE:
MP5_02OVL_7 = _world.AcknexObject.GetAcknexObject(2701596785);
_world.AcknexObject.SetAcknexObject(158,MP5_02OVL_7);
AMMO_11 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_11_val = AMMO_11.GetFloat(PropertyName.VAL);
if (AMMO_11_val == 0f)
{
goto NOAMMO;
}
AMMO_12 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_13 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_13_val = AMMO_13.GetFloat(PropertyName.VAL);
AMMO_14 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_14_val = AMMO_14.GetFloat(PropertyName.VAL);
TOUGHNESS_16 = _world.GetObject(ObjectType.Skill,1295621997);
TOUGHNESS_16_val = TOUGHNESS_16.GetFloat(PropertyName.VAL);
AMMO_12.SetFloat(231,AMMO_14_val-TOUGHNESS_16_val);
{
            var enumerator = new DECAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }AMMO_18 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_18_val = AMMO_18.GetFloat(PropertyName.VAL);
if (AMMO_18_val > 20f)
{
goto PLENTY;
}
WRN01STR_19 = _world.AcknexObject.GetAcknexObject(665673790);
PANELTEXT_21 = _world.AcknexObject.GetAcknexObject(1886906754);
PANELTEXT_21_array = PANELTEXT_21.GetObject<List<IAcknexObject>>(293);
PANELTEXT_21_index = PANELTEXT_21.GetInteger(PropertyName.INDEX);
PANELTEXT_21_array[PANELTEXT_21_index-1] = WRN01STR_19;
PANELTEXT_21.IsDirty = true;
PANELTEXT_22 = _world.AcknexObject.GetAcknexObject(1886906754);
_world.AcknexObject.SetAcknexObject(127,PANELTEXT_22);
MSGSECCOUNT_26 = _world.GetObject(ObjectType.Skill,2688150552);
MSGSECCOUNT_26.SetFloat(231,0f);
PLENTY:
PLAYER_LIGHT_28 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_28_val = PLAYER_LIGHT_28.GetFloat(PropertyName.VAL);
PLAYER_LIGHT_29 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_29.SetFloat(231,PLAYER_LIGHT_28_val + 0.5f);
EXPL01OVL_30 = _world.AcknexObject.GetAcknexObject(1363414904);
_world.AcknexObject.SetAcknexObject(157,EXPL01OVL_30);
MP_502SND_33 = _world.AcknexObject.GetAcknexObject(3759961509);
_world.PlaySound(MP_502SND_33,0.4f, null);
SHOT_SOUND_ON_36 = _world.GetObject(ObjectType.Skill,3372273679);
SHOT_SOUND_ON_36.SetFloat(231,1f);
SHOTSECCOUNT_38 = _world.GetObject(ObjectType.Skill,733093231);
SHOTSECCOUNT_38.SetFloat(231,0f);

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.TicksToTime((int)1f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MP5_03OVL_40 = _world.AcknexObject.GetAcknexObject(2701632722);
_world.AcknexObject.SetAcknexObject(158,MP5_03OVL_40);
EXPL02OVL_43 = _world.AcknexObject.GetAcknexObject(1363450841);
_world.AcknexObject.SetAcknexObject(157,EXPL02OVL_43);
SHOOT_SECTOR_47 = _world.GetObject(ObjectType.Skill,440);
SHOOT_SECTOR_47.SetFloat(231,6.283f);
SHOOT_RANGE_49 = _world.GetObject(ObjectType.Skill,439);
SHOOT_RANGE_49.SetFloat(231,200f);
SHOOT_FAC_50 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_51 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_51_val = SHOOT_FAC_51.GetFloat(PropertyName.VAL);
PLAYERSHOOTFACTOR_52 = _world.GetObject(ObjectType.Skill,1090796006);
PLAYERSHOOTFACTOR_52_val = PLAYERSHOOTFACTOR_52.GetFloat(PropertyName.VAL);
SHOOT_FAC_50.SetFloat(231,PLAYERSHOOTFACTOR_52_val);
DSHOOTXPLUS_53 = _world.GetObject(ObjectType.Skill,3730253338);
DSHOOTXPLUS_53_val = DSHOOTXPLUS_53.GetFloat(PropertyName.VAL);
SHOOT_X_54 = _world.GetObject(ObjectType.Skill,442);
SHOOT_X_54.SetFloat(231,DSHOOTXPLUS_53_val);
SVANGLE_55 = _world.GetObject(ObjectType.Skill,3326160989);
SVANGLE_55_val = SVANGLE_55.GetFloat(PropertyName.VAL);
SHOOT_Y_56 = _world.GetObject(ObjectType.Skill,443);
SHOOT_Y_56.SetFloat(231,SVANGLE_55_val);
_world.Shoot(null, MY, THERE);
HIT_DIST_58 = _world.GetObject(ObjectType.Skill,444);
HIT_DIST_58_val = HIT_DIST_58.GetFloat(PropertyName.VAL);
if (HIT_DIST_58_val == 0f)
{
goto SHOOT2;
}
HIT_61 = _world.GetSynonymObject(704);
temp_62 =HIT_61.GetFloat(208);
if (temp_62 == 1f)
{
goto CONTHIT;
}
SHOOT2:
SHOOT_X_64 = _world.GetObject(ObjectType.Skill,442);
SHOOT_X_64.SetFloat(231,0f);
_world.Shoot(null, MY, THERE);
HIT_DIST_66 = _world.GetObject(ObjectType.Skill,444);
HIT_DIST_66_val = HIT_DIST_66.GetFloat(PropertyName.VAL);
if (HIT_DIST_66_val == 0f)
{
goto SHOOT3;
}
HIT_67 = _world.GetSynonymObject(704);
_world.SetSynonymObject(2013386137,HIT_67);
MY_TARGET_71 = _world.GetSynonymObject(2013386137);
MY_TARGET_71.SetFloat(175,1f);
HIT_74 = _world.GetSynonymObject(704);
temp_75 =HIT_74.GetFloat(208);
if (temp_75 == 1f)
{
goto CONTHIT;
}
SHOOT3:
DSHOOTXMINUS_76 = _world.GetObject(ObjectType.Skill,2835570818);
DSHOOTXMINUS_76_val = DSHOOTXMINUS_76.GetFloat(PropertyName.VAL);
SHOOT_X_77 = _world.GetObject(ObjectType.Skill,442);
SHOOT_X_77.SetFloat(231,DSHOOTXMINUS_76_val);
_world.Shoot(null, MY, THERE);
HIT_DIST_79 = _world.GetObject(ObjectType.Skill,444);
HIT_DIST_79_val = HIT_DIST_79.GetFloat(PropertyName.VAL);
if (HIT_DIST_79_val == 0f)
{
goto SHOOT4;
}
HIT_82 = _world.GetSynonymObject(704);
temp_83 =HIT_82.GetFloat(208);
if (temp_83 == 1f)
{
goto CONTHIT;
}
SHOOT4:
SHOOT_X_85 = _world.GetObject(ObjectType.Skill,442);
SHOOT_X_85.SetFloat(231,0f);
DSHOOTYPLUS_86 = _world.GetObject(ObjectType.Skill,3731439259);
DSHOOTYPLUS_86_val = DSHOOTYPLUS_86.GetFloat(PropertyName.VAL);
SHOOT_Y_87 = _world.GetObject(ObjectType.Skill,443);
SHOOT_Y_87.SetFloat(231,DSHOOTYPLUS_86_val);
_world.Shoot(null, MY, THERE);
HIT_DIST_89 = _world.GetObject(ObjectType.Skill,444);
HIT_DIST_89_val = HIT_DIST_89.GetFloat(PropertyName.VAL);
if (HIT_DIST_89_val == 0f)
{
goto SHOOT5;
}
HIT_92 = _world.GetSynonymObject(704);
temp_93 =HIT_92.GetFloat(208);
if (temp_93 == 1f)
{
goto CONTHIT;
}
SHOOT5:
DSHOOTYMINUS_94 = _world.GetObject(ObjectType.Skill,2874706211);
DSHOOTYMINUS_94_val = DSHOOTYMINUS_94.GetFloat(PropertyName.VAL);
SHOOT_Y_95 = _world.GetObject(ObjectType.Skill,443);
SHOOT_Y_95.SetFloat(231,DSHOOTYMINUS_94_val);
_world.Shoot(null, MY, THERE);
HIT_DIST_97 = _world.GetObject(ObjectType.Skill,444);
HIT_DIST_97_val = HIT_DIST_97.GetFloat(PropertyName.VAL);
if (HIT_DIST_97_val == 0f)
{
goto NOHIT;
}
HIT_100 = _world.GetSynonymObject(704);
temp_101 =HIT_100.GetFloat(208);
if (temp_101 != 1f)
{
goto NOHIT;
}
CONTHIT:
{
            var enumerator = new CASTBLOOD();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_TARGET_104 = _world.GetSynonymObject(2013386137);
MY_TARGET_104.SetFloat(175,1f);
NOHIT:

            startTime3 = Time.time;
            endTime3 = startTime3 + TimeUtils.TicksToTime((int)1f);
            _cursor = 3;
            _coroutine3:
            while (Time.time  < endTime3)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
_world.AcknexObject.SetAcknexObject(157,null);
PLAYER_LIGHT_110 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_110_val = PLAYER_LIGHT_110.GetFloat(PropertyName.VAL);
PLAYER_LIGHT_111 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_111.SetFloat(231,PLAYER_LIGHT_110_val + -0.5f);

            startTime4 = Time.time;
            endTime4 = startTime4 + TimeUtils.TicksToTime((int)2f);
            _cursor = 4;
            _coroutine4:
            while (Time.time  < endTime4)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
WEAPONSEL_114 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_114_val = WEAPONSEL_114.GetFloat(PropertyName.VAL);
if (WEAPONSEL_114_val != 2f)
{
goto FINISH;
}
MOUSE_LEFT_116 = _world.GetObject(ObjectType.Skill,471);
MOUSE_LEFT_116_val = MOUSE_LEFT_116.GetFloat(PropertyName.VAL);
if (MOUSE_LEFT_116_val == 1f)
{
goto FIRE;
}
KEY_CTRL_118 = _world.GetObject(ObjectType.Skill,526);
KEY_CTRL_118_val = KEY_CTRL_118.GetFloat(PropertyName.VAL);
if (KEY_CTRL_118_val == 1f)
{
goto FIRE;
}
MP5_02OVL_119 = _world.AcknexObject.GetAcknexObject(2701596785);
_world.AcknexObject.SetAcknexObject(158,MP5_02OVL_119);

            startTime5 = Time.time;
            endTime5 = startTime5 + TimeUtils.TicksToTime((int)1f);
            _cursor = 5;
            _coroutine5:
            while (Time.time  < endTime5)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MP5_01OVL_123 = _world.AcknexObject.GetAcknexObject(2701560848);
_world.AcknexObject.SetAcknexObject(158,MP5_01OVL_123);
goto CONT;
NOAMMO:
WRN02STR_126 = _world.AcknexObject.GetAcknexObject(665709727);
PANELTEXT_128 = _world.AcknexObject.GetAcknexObject(1886906754);
PANELTEXT_128_array = PANELTEXT_128.GetObject<List<IAcknexObject>>(293);
PANELTEXT_128_index = PANELTEXT_128.GetInteger(PropertyName.INDEX);
PANELTEXT_128_array[PANELTEXT_128_index-1] = WRN02STR_126;
PANELTEXT_128.IsDirty = true;
PANELTEXT_129 = _world.AcknexObject.GetAcknexObject(1886906754);
_world.AcknexObject.SetAcknexObject(127,PANELTEXT_129);
MSGSECCOUNT_133 = _world.GetObject(ObjectType.Skill,2688150552);
MSGSECCOUNT_133.SetFloat(231,0f);
MP_504SND_134 = _world.AcknexObject.GetAcknexObject(3760033383);
_world.PlaySound(MP_504SND_134,1f, null);
GUN_ON_137 = _world.GetObject(ObjectType.Skill,3014382675);
GUN_ON_137.SetFloat(231,0f);

            startTime6 = Time.time;
            endTime6 = startTime6 + TimeUtils.TicksToTime((int)2f);
            _cursor = 6;
            _coroutine6:
            while (Time.time  < endTime6)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MP5_01OVL_139 = _world.AcknexObject.GetAcknexObject(2701560848);
_world.AcknexObject.SetAcknexObject(158,MP5_01OVL_139);
CONT:
FIRE_142 = _world.AcknexObject.GetAcknexObject(2089072467);
_world.AcknexObject.SetAcknexObject(78,FIRE_142);
FIRE_144 = _world.AcknexObject.GetAcknexObject(2089072467);
_world.AcknexObject.SetAcknexObject(97,FIRE_144);
FINISH:
GUNFIRING_147 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_147.SetFloat(231,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject GUNFIRING_1;
float startTime1;
float endTime1;
IAcknexObject MP5_02OVL_7;
IAcknexObject AMMO_11;
float AMMO_11_val;
IAcknexObject AMMO_12;
IAcknexObject AMMO_13;
float AMMO_13_val;
IAcknexObject AMMO_14;
float AMMO_14_val;
IAcknexObject TOUGHNESS_16;
float TOUGHNESS_16_val;
IAcknexObject AMMO_18;
float AMMO_18_val;
IAcknexObject WRN01STR_19;
IAcknexObject PANELTEXT_21;
List<IAcknexObject> PANELTEXT_21_array;
int PANELTEXT_21_index;
IAcknexObject PANELTEXT_22;
IAcknexObject MSGSECCOUNT_26;
IAcknexObject PLAYER_LIGHT_28;
float PLAYER_LIGHT_28_val;
IAcknexObject PLAYER_LIGHT_29;
IAcknexObject EXPL01OVL_30;
IAcknexObject MP_502SND_33;
IAcknexObject SHOT_SOUND_ON_36;
IAcknexObject SHOTSECCOUNT_38;
float startTime2;
float endTime2;
IAcknexObject MP5_03OVL_40;
IAcknexObject EXPL02OVL_43;
IAcknexObject SHOOT_SECTOR_47;
IAcknexObject SHOOT_RANGE_49;
IAcknexObject SHOOT_FAC_50;
IAcknexObject SHOOT_FAC_51;
float SHOOT_FAC_51_val;
IAcknexObject PLAYERSHOOTFACTOR_52;
float PLAYERSHOOTFACTOR_52_val;
IAcknexObject DSHOOTXPLUS_53;
float DSHOOTXPLUS_53_val;
IAcknexObject SHOOT_X_54;
IAcknexObject SVANGLE_55;
float SVANGLE_55_val;
IAcknexObject SHOOT_Y_56;
IAcknexObject HIT_DIST_58;
float HIT_DIST_58_val;
IAcknexObject HIT_61;
float temp_62;
IAcknexObject SHOOT_X_64;
IAcknexObject HIT_DIST_66;
float HIT_DIST_66_val;
IAcknexObject HIT_67;
IAcknexObject MY_TARGET_71;
IAcknexObject HIT_74;
float temp_75;
IAcknexObject DSHOOTXMINUS_76;
float DSHOOTXMINUS_76_val;
IAcknexObject SHOOT_X_77;
IAcknexObject HIT_DIST_79;
float HIT_DIST_79_val;
IAcknexObject HIT_82;
float temp_83;
IAcknexObject SHOOT_X_85;
IAcknexObject DSHOOTYPLUS_86;
float DSHOOTYPLUS_86_val;
IAcknexObject SHOOT_Y_87;
IAcknexObject HIT_DIST_89;
float HIT_DIST_89_val;
IAcknexObject HIT_92;
float temp_93;
IAcknexObject DSHOOTYMINUS_94;
float DSHOOTYMINUS_94_val;
IAcknexObject SHOOT_Y_95;
IAcknexObject HIT_DIST_97;
float HIT_DIST_97_val;
IAcknexObject HIT_100;
float temp_101;
IAcknexObject MY_TARGET_104;
float startTime3;
float endTime3;
IAcknexObject PLAYER_LIGHT_110;
float PLAYER_LIGHT_110_val;
IAcknexObject PLAYER_LIGHT_111;
float startTime4;
float endTime4;
IAcknexObject WEAPONSEL_114;
float WEAPONSEL_114_val;
IAcknexObject MOUSE_LEFT_116;
float MOUSE_LEFT_116_val;
IAcknexObject KEY_CTRL_118;
float KEY_CTRL_118_val;
IAcknexObject MP5_02OVL_119;
float startTime5;
float endTime5;
IAcknexObject MP5_01OVL_123;
IAcknexObject WRN02STR_126;
IAcknexObject PANELTEXT_128;
List<IAcknexObject> PANELTEXT_128_array;
int PANELTEXT_128_index;
IAcknexObject PANELTEXT_129;
IAcknexObject MSGSECCOUNT_133;
IAcknexObject MP_504SND_134;
IAcknexObject GUN_ON_137;
float startTime6;
float endTime6;
IAcknexObject MP5_01OVL_139;
IAcknexObject FIRE_142;
IAcknexObject FIRE_144;
IAcknexObject GUNFIRING_147;
}
public class BURST : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public BURST() {
  }
 public BURST(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
            case 3:
                goto _coroutine3;
            case 4:
                goto _coroutine4;
            case 5:
                goto _coroutine5;
            case 6:
                goto _coroutine6;
     }
AMMO_1 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_1_val = AMMO_1.GetFloat(PropertyName.VAL);
if (AMMO_1_val < 3f)
{
{
            var enumerator = new FIRE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
GUNFIRING_3 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_3.SetFloat(231,1f);
_world.AcknexObject.SetAcknexObject(78,null);
_world.AcknexObject.SetAcknexObject(97,null);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)1f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
FIRE:
MP5_02OVL_9 = _world.AcknexObject.GetAcknexObject(2701596785);
_world.AcknexObject.SetAcknexObject(158,MP5_02OVL_9);
AMMO_13 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_13_val = AMMO_13.GetFloat(PropertyName.VAL);
if (AMMO_13_val == 0f)
{
goto NOAMMO;
}
AMMO_14 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_15 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_15_val = AMMO_15.GetFloat(PropertyName.VAL);
AMMO_16 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_16_val = AMMO_16.GetFloat(PropertyName.VAL);
TOUGHNESS_20 = _world.GetObject(ObjectType.Skill,1295621997);
TOUGHNESS_20_val = TOUGHNESS_20.GetFloat(PropertyName.VAL);
AMMO_14.SetFloat(231,AMMO_16_val-3f*TOUGHNESS_20_val);
AMMO_22 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_22_val = AMMO_22.GetFloat(PropertyName.VAL);
if (AMMO_22_val < 0f)
{
AMMO_24 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_24.SetFloat(231,0f);
}
{
            var enumerator = new DECAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }AMMO_26 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_26_val = AMMO_26.GetFloat(PropertyName.VAL);
if (AMMO_26_val > 20f)
{
goto PLENTY;
}
WRN01STR_27 = _world.AcknexObject.GetAcknexObject(665673790);
PANELTEXT_29 = _world.AcknexObject.GetAcknexObject(1886906754);
PANELTEXT_29_array = PANELTEXT_29.GetObject<List<IAcknexObject>>(293);
PANELTEXT_29_index = PANELTEXT_29.GetInteger(PropertyName.INDEX);
PANELTEXT_29_array[PANELTEXT_29_index-1] = WRN01STR_27;
PANELTEXT_29.IsDirty = true;
PANELTEXT_30 = _world.AcknexObject.GetAcknexObject(1886906754);
_world.AcknexObject.SetAcknexObject(127,PANELTEXT_30);
MSGSECCOUNT_34 = _world.GetObject(ObjectType.Skill,2688150552);
MSGSECCOUNT_34.SetFloat(231,0f);
PLENTY:
PLAYER_LIGHT_36 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_36_val = PLAYER_LIGHT_36.GetFloat(PropertyName.VAL);
PLAYER_LIGHT_37 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_37.SetFloat(231,PLAYER_LIGHT_36_val + 0.7f);
EXPL01OVL_38 = _world.AcknexObject.GetAcknexObject(1363414904);
_world.AcknexObject.SetAcknexObject(157,EXPL01OVL_38);
MP_503SND_41 = _world.AcknexObject.GetAcknexObject(3759997446);
_world.PlaySound(MP_503SND_41,0.4f, null);
SHOT_SOUND_ON_44 = _world.GetObject(ObjectType.Skill,3372273679);
SHOT_SOUND_ON_44.SetFloat(231,1f);
SHOTSECCOUNT_46 = _world.GetObject(ObjectType.Skill,733093231);
SHOTSECCOUNT_46.SetFloat(231,0f);

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.TicksToTime((int)1f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MP5_03OVL_48 = _world.AcknexObject.GetAcknexObject(2701632722);
_world.AcknexObject.SetAcknexObject(158,MP5_03OVL_48);
EXPL02OVL_51 = _world.AcknexObject.GetAcknexObject(1363450841);
_world.AcknexObject.SetAcknexObject(157,EXPL02OVL_51);
SHOOT_SECTOR_55 = _world.GetObject(ObjectType.Skill,440);
SHOOT_SECTOR_55.SetFloat(231,6.283f);
SHOOT_RANGE_57 = _world.GetObject(ObjectType.Skill,439);
SHOOT_RANGE_57.SetFloat(231,200f);
SHOOT_FAC_58 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_59 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_59_val = SHOOT_FAC_59.GetFloat(PropertyName.VAL);
PLAYERBURSTFACTOR_60 = _world.GetObject(ObjectType.Skill,2833397193);
PLAYERBURSTFACTOR_60_val = PLAYERBURSTFACTOR_60.GetFloat(PropertyName.VAL);
SHOOT_FAC_58.SetFloat(231,PLAYERBURSTFACTOR_60_val);
DSHOOTXPLUS_61 = _world.GetObject(ObjectType.Skill,3730253338);
DSHOOTXPLUS_61_val = DSHOOTXPLUS_61.GetFloat(PropertyName.VAL);
SHOOT_X_62 = _world.GetObject(ObjectType.Skill,442);
SHOOT_X_62.SetFloat(231,DSHOOTXPLUS_61_val);
SHOOT_Y_64 = _world.GetObject(ObjectType.Skill,443);
SHOOT_Y_64.SetFloat(231,0f);
_world.Shoot(null, MY, THERE);
HIT_DIST_66 = _world.GetObject(ObjectType.Skill,444);
HIT_DIST_66_val = HIT_DIST_66.GetFloat(PropertyName.VAL);
if (HIT_DIST_66_val == 0f)
{
goto SHOOT2;
}
HIT_67 = _world.GetSynonymObject(704);
_world.SetSynonymObject(2013386137,HIT_67);
MY_TARGET_71 = _world.GetSynonymObject(2013386137);
MY_TARGET_71.SetFloat(175,1f);
HIT_74 = _world.GetSynonymObject(704);
temp_75 =HIT_74.GetFloat(208);
if (temp_75 == 1f)
{
{
            var enumerator = new CASTBLOOD();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }}
SHOOT2:
SHOOT_X_77 = _world.GetObject(ObjectType.Skill,442);
SHOOT_X_77.SetFloat(231,0f);
_world.Shoot(null, MY, THERE);
HIT_DIST_79 = _world.GetObject(ObjectType.Skill,444);
HIT_DIST_79_val = HIT_DIST_79.GetFloat(PropertyName.VAL);
if (HIT_DIST_79_val == 0f)
{
goto SHOOT3;
}
HIT_80 = _world.GetSynonymObject(704);
_world.SetSynonymObject(2013386137,HIT_80);
MY_TARGET_84 = _world.GetSynonymObject(2013386137);
MY_TARGET_84.SetFloat(175,1f);
HIT_87 = _world.GetSynonymObject(704);
temp_88 =HIT_87.GetFloat(208);
if (temp_88 == 1f)
{
{
            var enumerator = new CASTBLOOD();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }}
SHOOT3:
DSHOOTXMINUS_89 = _world.GetObject(ObjectType.Skill,2835570818);
DSHOOTXMINUS_89_val = DSHOOTXMINUS_89.GetFloat(PropertyName.VAL);
SHOOT_X_90 = _world.GetObject(ObjectType.Skill,442);
SHOOT_X_90.SetFloat(231,DSHOOTXMINUS_89_val);
_world.Shoot(null, MY, THERE);
HIT_DIST_92 = _world.GetObject(ObjectType.Skill,444);
HIT_DIST_92_val = HIT_DIST_92.GetFloat(PropertyName.VAL);
if (HIT_DIST_92_val == 0f)
{
goto NOHIT;
}
HIT_93 = _world.GetSynonymObject(704);
_world.SetSynonymObject(2013386137,HIT_93);
MY_TARGET_97 = _world.GetSynonymObject(2013386137);
MY_TARGET_97.SetFloat(175,1f);
HIT_100 = _world.GetSynonymObject(704);
temp_101 =HIT_100.GetFloat(208);
if (temp_101 == 1f)
{
{
            var enumerator = new CASTBLOOD();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }}
NOHIT:

            startTime3 = Time.time;
            endTime3 = startTime3 + TimeUtils.TicksToTime((int)1f);
            _cursor = 3;
            _coroutine3:
            while (Time.time  < endTime3)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
_world.AcknexObject.SetAcknexObject(157,null);
PLAYER_LIGHT_107 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_107_val = PLAYER_LIGHT_107.GetFloat(PropertyName.VAL);
PLAYER_LIGHT_108 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_108.SetFloat(231,PLAYER_LIGHT_107_val + -0.7f);

            startTime4 = Time.time;
            endTime4 = startTime4 + TimeUtils.TicksToTime((int)2f);
            _cursor = 4;
            _coroutine4:
            while (Time.time  < endTime4)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
WEAPONSEL_111 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_111_val = WEAPONSEL_111.GetFloat(PropertyName.VAL);
if (WEAPONSEL_111_val != 2f)
{
goto FINISH;
}
MOUSE_LEFT_113 = _world.GetObject(ObjectType.Skill,471);
MOUSE_LEFT_113_val = MOUSE_LEFT_113.GetFloat(PropertyName.VAL);
if (MOUSE_LEFT_113_val == 1f)
{
goto FIRE;
}
KEY_CTRL_115 = _world.GetObject(ObjectType.Skill,526);
KEY_CTRL_115_val = KEY_CTRL_115.GetFloat(PropertyName.VAL);
if (KEY_CTRL_115_val == 1f)
{
goto FIRE;
}
MP5_02OVL_116 = _world.AcknexObject.GetAcknexObject(2701596785);
_world.AcknexObject.SetAcknexObject(158,MP5_02OVL_116);

            startTime5 = Time.time;
            endTime5 = startTime5 + TimeUtils.TicksToTime((int)1f);
            _cursor = 5;
            _coroutine5:
            while (Time.time  < endTime5)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MP5_01OVL_120 = _world.AcknexObject.GetAcknexObject(2701560848);
_world.AcknexObject.SetAcknexObject(158,MP5_01OVL_120);
goto CONT;
NOAMMO:
WRN02STR_123 = _world.AcknexObject.GetAcknexObject(665709727);
PANELTEXT_125 = _world.AcknexObject.GetAcknexObject(1886906754);
PANELTEXT_125_array = PANELTEXT_125.GetObject<List<IAcknexObject>>(293);
PANELTEXT_125_index = PANELTEXT_125.GetInteger(PropertyName.INDEX);
PANELTEXT_125_array[PANELTEXT_125_index-1] = WRN02STR_123;
PANELTEXT_125.IsDirty = true;
PANELTEXT_126 = _world.AcknexObject.GetAcknexObject(1886906754);
_world.AcknexObject.SetAcknexObject(127,PANELTEXT_126);
MSGSECCOUNT_130 = _world.GetObject(ObjectType.Skill,2688150552);
MSGSECCOUNT_130.SetFloat(231,0f);
MP_504SND_131 = _world.AcknexObject.GetAcknexObject(3760033383);
_world.PlaySound(MP_504SND_131,1f, null);
GUN_ON_134 = _world.GetObject(ObjectType.Skill,3014382675);
GUN_ON_134.SetFloat(231,0f);

            startTime6 = Time.time;
            endTime6 = startTime6 + TimeUtils.TicksToTime((int)2f);
            _cursor = 6;
            _coroutine6:
            while (Time.time  < endTime6)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MP5_01OVL_136 = _world.AcknexObject.GetAcknexObject(2701560848);
_world.AcknexObject.SetAcknexObject(158,MP5_01OVL_136);
CONT:
BURST_139 = _world.AcknexObject.GetAcknexObject(215570781);
_world.AcknexObject.SetAcknexObject(78,BURST_139);
BURST_141 = _world.AcknexObject.GetAcknexObject(215570781);
_world.AcknexObject.SetAcknexObject(97,BURST_141);
FINISH:
GUNFIRING_144 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_144.SetFloat(231,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject AMMO_1;
float AMMO_1_val;
IAcknexObject GUNFIRING_3;
float startTime1;
float endTime1;
IAcknexObject MP5_02OVL_9;
IAcknexObject AMMO_13;
float AMMO_13_val;
IAcknexObject AMMO_14;
IAcknexObject AMMO_15;
float AMMO_15_val;
IAcknexObject AMMO_16;
float AMMO_16_val;
IAcknexObject TOUGHNESS_20;
float TOUGHNESS_20_val;
IAcknexObject AMMO_22;
float AMMO_22_val;
IAcknexObject AMMO_24;
IAcknexObject AMMO_26;
float AMMO_26_val;
IAcknexObject WRN01STR_27;
IAcknexObject PANELTEXT_29;
List<IAcknexObject> PANELTEXT_29_array;
int PANELTEXT_29_index;
IAcknexObject PANELTEXT_30;
IAcknexObject MSGSECCOUNT_34;
IAcknexObject PLAYER_LIGHT_36;
float PLAYER_LIGHT_36_val;
IAcknexObject PLAYER_LIGHT_37;
IAcknexObject EXPL01OVL_38;
IAcknexObject MP_503SND_41;
IAcknexObject SHOT_SOUND_ON_44;
IAcknexObject SHOTSECCOUNT_46;
float startTime2;
float endTime2;
IAcknexObject MP5_03OVL_48;
IAcknexObject EXPL02OVL_51;
IAcknexObject SHOOT_SECTOR_55;
IAcknexObject SHOOT_RANGE_57;
IAcknexObject SHOOT_FAC_58;
IAcknexObject SHOOT_FAC_59;
float SHOOT_FAC_59_val;
IAcknexObject PLAYERBURSTFACTOR_60;
float PLAYERBURSTFACTOR_60_val;
IAcknexObject DSHOOTXPLUS_61;
float DSHOOTXPLUS_61_val;
IAcknexObject SHOOT_X_62;
IAcknexObject SHOOT_Y_64;
IAcknexObject HIT_DIST_66;
float HIT_DIST_66_val;
IAcknexObject HIT_67;
IAcknexObject MY_TARGET_71;
IAcknexObject HIT_74;
float temp_75;
IAcknexObject SHOOT_X_77;
IAcknexObject HIT_DIST_79;
float HIT_DIST_79_val;
IAcknexObject HIT_80;
IAcknexObject MY_TARGET_84;
IAcknexObject HIT_87;
float temp_88;
IAcknexObject DSHOOTXMINUS_89;
float DSHOOTXMINUS_89_val;
IAcknexObject SHOOT_X_90;
IAcknexObject HIT_DIST_92;
float HIT_DIST_92_val;
IAcknexObject HIT_93;
IAcknexObject MY_TARGET_97;
IAcknexObject HIT_100;
float temp_101;
float startTime3;
float endTime3;
IAcknexObject PLAYER_LIGHT_107;
float PLAYER_LIGHT_107_val;
IAcknexObject PLAYER_LIGHT_108;
float startTime4;
float endTime4;
IAcknexObject WEAPONSEL_111;
float WEAPONSEL_111_val;
IAcknexObject MOUSE_LEFT_113;
float MOUSE_LEFT_113_val;
IAcknexObject KEY_CTRL_115;
float KEY_CTRL_115_val;
IAcknexObject MP5_02OVL_116;
float startTime5;
float endTime5;
IAcknexObject MP5_01OVL_120;
IAcknexObject WRN02STR_123;
IAcknexObject PANELTEXT_125;
List<IAcknexObject> PANELTEXT_125_array;
int PANELTEXT_125_index;
IAcknexObject PANELTEXT_126;
IAcknexObject MSGSECCOUNT_130;
IAcknexObject MP_504SND_131;
IAcknexObject GUN_ON_134;
float startTime6;
float endTime6;
IAcknexObject MP5_01OVL_136;
IAcknexObject BURST_139;
IAcknexObject BURST_141;
IAcknexObject GUNFIRING_144;
}
public class THROW : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public THROW() {
  }
 public THROW(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
            case 3:
                goto _coroutine3;
            case 4:
                goto _coroutine4;
            case 5:
                goto _coroutine5;
            case 6:
                goto _coroutine6;
            case 7:
                goto _coroutine7;
            case 8:
                goto _coroutine8;
            case 9:
                goto _coroutine9;
     }
AMMO_1 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_1_val = AMMO_1.GetFloat(PropertyName.VAL);
if (AMMO_1_val == 0f)
{
{
            var enumerator = new SELECTNONE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
{
            var enumerator = new CHOOSEGRANADE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }GRANADE_3 = _world.GetSynonymObject(556898879);
if (GRANADE_3 == null)
{
return false;
}
GUNFIRING_5 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_5.SetFloat(231,1f);
_world.AcknexObject.SetAcknexObject(78,null);
_world.AcknexObject.SetAcknexObject(97,null);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)1f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
GRAN01OVL_11 = _world.AcknexObject.GetAcknexObject(850572839);
_world.AcknexObject.SetAcknexObject(157,GRAN01OVL_11);

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.TicksToTime((int)2f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
_world.AcknexObject.SetAcknexObject(157,null);
GRAN02OVL_18 = _world.AcknexObject.GetAcknexObject(850608776);
_world.AcknexObject.SetAcknexObject(158,GRAN02OVL_18);

            startTime3 = Time.time;
            endTime3 = startTime3 + TimeUtils.TicksToTime((int)2f);
            _cursor = 3;
            _coroutine3:
            while (Time.time  < endTime3)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
GRAN01SND_22 = _world.AcknexObject.GetAcknexObject(850576923);
_world.PlaySound(GRAN01SND_22,1f, null);
GRAN03OVL_24 = _world.AcknexObject.GetAcknexObject(850644713);
_world.AcknexObject.SetAcknexObject(157,GRAN03OVL_24);
_world.AcknexObject.SetAcknexObject(158,null);

            startTime4 = Time.time;
            endTime4 = startTime4 + TimeUtils.TicksToTime((int)2f);
            _cursor = 4;
            _coroutine4:
            while (Time.time  < endTime4)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
_world.AcknexObject.SetAcknexObject(157,null);

            startTime5 = Time.time;
            endTime5 = startTime5 + TimeUtils.TicksToTime((int)8f);
            _cursor = 5;
            _coroutine5:
            while (Time.time  < endTime5)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
GRAN04OVL_35 = _world.AcknexObject.GetAcknexObject(850680650);
_world.AcknexObject.SetAcknexObject(158,GRAN04OVL_35);

            startTime6 = Time.time;
            endTime6 = startTime6 + TimeUtils.TicksToTime((int)2f);
            _cursor = 6;
            _coroutine6:
            while (Time.time  < endTime6)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
GRAN05OVL_39 = _world.AcknexObject.GetAcknexObject(850716587);
_world.AcknexObject.SetAcknexObject(158,GRAN05OVL_39);

            startTime7 = Time.time;
            endTime7 = startTime7 + TimeUtils.TicksToTime((int)2f);
            _cursor = 7;
            _coroutine7:
            while (Time.time  < endTime7)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
GRAN06OVL_43 = _world.AcknexObject.GetAcknexObject(850752524);
_world.AcknexObject.SetAcknexObject(158,GRAN06OVL_43);
GRANADE_48 = _world.GetSynonymObject(556898879);
GRANADE_48.SetFloat(213,1f);
GRANADE_51 = _world.GetSynonymObject(556898879);
GRANADE_51.SetFloat(168,2f);
GRANADE_53 = _world.GetSynonymObject(556898879);
GRANADE_55 = _world.GetSynonymObject(556898879);
temp_56 =GRANADE_55.GetFloat(195);
PLAYER_X_57 = _world.GetObject(ObjectType.Skill,459);
PLAYER_X_57_val = PLAYER_X_57.GetFloat(PropertyName.VAL);
PLAYER_COS_59 = _world.GetObject(ObjectType.Skill,464);
PLAYER_COS_59_val = PLAYER_COS_59.GetFloat(PropertyName.VAL);
PLAYER_VX_61 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_61_val = PLAYER_VX_61.GetFloat(PropertyName.VAL);
TIME_CORR_63 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_63_val = TIME_CORR_63.GetFloat(PropertyName.VAL);
GRANADE_53.SetFloat(195,PLAYER_X_57_val+PLAYER_COS_59_val+PLAYER_VX_61_val*TIME_CORR_63_val);
GRANADE_65 = _world.GetSynonymObject(556898879);
GRANADE_67 = _world.GetSynonymObject(556898879);
temp_68 =GRANADE_67.GetFloat(196);
PLAYER_Y_69 = _world.GetObject(ObjectType.Skill,460);
PLAYER_Y_69_val = PLAYER_Y_69.GetFloat(PropertyName.VAL);
PLAYER_SIN_71 = _world.GetObject(ObjectType.Skill,463);
PLAYER_SIN_71_val = PLAYER_SIN_71.GetFloat(PropertyName.VAL);
PLAYER_VY_73 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_73_val = PLAYER_VY_73.GetFloat(PropertyName.VAL);
TIME_CORR_75 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_75_val = TIME_CORR_75.GetFloat(PropertyName.VAL);
GRANADE_65.SetFloat(196,PLAYER_Y_69_val+PLAYER_SIN_71_val+PLAYER_VY_73_val*TIME_CORR_75_val);
GRANADE_77 = _world.GetSynonymObject(556898879);
GRANADE_79 = _world.GetSynonymObject(556898879);
temp_80 =GRANADE_79.GetFloat(165);
PLAYER_SIZE_81 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_81_val = PLAYER_SIZE_81.GetFloat(PropertyName.VAL);
PLAYER_TILT_84 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_84_val = PLAYER_TILT_84.GetFloat(PropertyName.VAL);
PLAYER_HGT_91 = _world.GetObject(ObjectType.Skill,479);
PLAYER_HGT_91_val = PLAYER_HGT_91.GetFloat(PropertyName.VAL);
FLOOR_HGT_93 = _world.GetObject(ObjectType.Skill,567);
FLOOR_HGT_93_val = FLOOR_HGT_93.GetFloat(PropertyName.VAL);
GRANADE_77.SetFloat(165,PLAYER_SIZE_81_val-(PLAYER_TILT_84_val*0.65f)-0.05f+PLAYER_HGT_91_val+FLOOR_HGT_93_val);
FREEFALL_94 = _world.AcknexObject.GetAcknexObject(1675036814);
GRANADE_96 = _world.GetSynonymObject(556898879);
GRANADE_96.SetAcknexObject(189,FREEFALL_94);
BOUNCE_97 = _world.AcknexObject.GetAcknexObject(2811822825);
GRANADE_99 = _world.GetSynonymObject(556898879);
GRANADE_99.SetAcknexObject(209,BOUNCE_97);
//Unknown keyword: LOCATE
GRAN2TEX_100 = _world.AcknexObject.GetAcknexObject(1197240280);
GRANADE_102 = _world.GetSynonymObject(556898879);
GRANADE_102.SetAcknexObject(164,GRAN2TEX_100);
PLAYER_ANGLE_103 = _world.GetObject(ObjectType.Skill,462);
PLAYER_ANGLE_103_val = PLAYER_ANGLE_103.GetFloat(PropertyName.VAL);
GRANADE_105 = _world.GetSynonymObject(556898879);
GRANADE_105.SetFloat(194,PLAYER_ANGLE_103_val);
GRANADE_107 = _world.GetSynonymObject(556898879);
GRANADE_109 = _world.GetSynonymObject(556898879);
temp_110 =GRANADE_109.GetFloat(169);
PLAYER_TILT_112 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_112_val = PLAYER_TILT_112.GetFloat(PropertyName.VAL);
GRANADE_107.SetFloat(169,-PLAYER_TILT_112_val/2f+0.2f);
BULLET_117 = _world.AcknexObject.GetAcknexObject(2818612821);
GRANADE_119 = _world.GetSynonymObject(556898879);
GRANADE_119.SetAcknexObject(199,BULLET_117);
GRANADE_122 = _world.GetSynonymObject(556898879);
GRANADE_122.SetFloat(207,1f);
GRANADE_125 = _world.GetSynonymObject(556898879);
GRANADE_125.SetFloat(204,0f);
AMMO_127 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_127_val = AMMO_127.GetFloat(PropertyName.VAL);
AMMO_128 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_128.SetFloat(231,AMMO_127_val + -1f);
{
            var enumerator = new DECAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }
            startTime8 = Time.time;
            endTime8 = startTime8 + TimeUtils.TicksToTime((int)2f);
            _cursor = 8;
            _coroutine8:
            while (Time.time  < endTime8)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
GRAN2TEX_130 = _world.AcknexObject.GetAcknexObject(1197240280);
GRANADE_132 = _world.GetSynonymObject(556898879);
temp_133 =GRANADE_132?.GetAcknexObject(164);
if (temp_133 == GRAN2TEX_130)
{
GRAN1TEX_134 = _world.AcknexObject.GetAcknexObject(1197204343);
GRANADE_136 = _world.GetSynonymObject(556898879);
GRANADE_136.SetAcknexObject(164,GRAN1TEX_134);
}
_world.AcknexObject.SetAcknexObject(158,null);
AMMO_141 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_141_val = AMMO_141.GetFloat(PropertyName.VAL);
if (AMMO_141_val > 0f)
{
goto MOREGRANADES;
}
HAS_GRANADE_143 = _world.GetObject(ObjectType.Skill,40123194);
HAS_GRANADE_143.SetFloat(231,0f);
_world.SetSynonymObject(3254523708,null);
GUNFIRING_147 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_147.SetFloat(231,0f);
{
            var enumerator = new SELECTNONE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
MOREGRANADES:

            startTime9 = Time.time;
            endTime9 = startTime9 + TimeUtils.TicksToTime((int)8f);
            _cursor = 9;
            _coroutine9:
            while (Time.time  < endTime9)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
GRAN00OVL_149 = _world.AcknexObject.GetAcknexObject(850536902);
_world.AcknexObject.SetAcknexObject(158,GRAN00OVL_149);
WEAPONSEL_153 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_153_val = WEAPONSEL_153.GetFloat(PropertyName.VAL);
if (WEAPONSEL_153_val != 3f)
{
goto FINISH;
}
THROW_154 = _world.AcknexObject.GetAcknexObject(236450049);
_world.AcknexObject.SetAcknexObject(78,THROW_154);
THROW_156 = _world.AcknexObject.GetAcknexObject(236450049);
_world.AcknexObject.SetAcknexObject(97,THROW_156);
FINISH:
GUNFIRING_159 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_159.SetFloat(231,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject AMMO_1;
float AMMO_1_val;
IAcknexObject GRANADE_3;
IAcknexObject GUNFIRING_5;
float startTime1;
float endTime1;
IAcknexObject GRAN01OVL_11;
float startTime2;
float endTime2;
IAcknexObject GRAN02OVL_18;
float startTime3;
float endTime3;
IAcknexObject GRAN01SND_22;
IAcknexObject GRAN03OVL_24;
float startTime4;
float endTime4;
float startTime5;
float endTime5;
IAcknexObject GRAN04OVL_35;
float startTime6;
float endTime6;
IAcknexObject GRAN05OVL_39;
float startTime7;
float endTime7;
IAcknexObject GRAN06OVL_43;
IAcknexObject GRANADE_48;
IAcknexObject GRANADE_51;
IAcknexObject GRANADE_53;
IAcknexObject GRANADE_55;
float temp_56;
IAcknexObject PLAYER_X_57;
float PLAYER_X_57_val;
IAcknexObject PLAYER_COS_59;
float PLAYER_COS_59_val;
IAcknexObject PLAYER_VX_61;
float PLAYER_VX_61_val;
IAcknexObject TIME_CORR_63;
float TIME_CORR_63_val;
IAcknexObject GRANADE_65;
IAcknexObject GRANADE_67;
float temp_68;
IAcknexObject PLAYER_Y_69;
float PLAYER_Y_69_val;
IAcknexObject PLAYER_SIN_71;
float PLAYER_SIN_71_val;
IAcknexObject PLAYER_VY_73;
float PLAYER_VY_73_val;
IAcknexObject TIME_CORR_75;
float TIME_CORR_75_val;
IAcknexObject GRANADE_77;
IAcknexObject GRANADE_79;
float temp_80;
IAcknexObject PLAYER_SIZE_81;
float PLAYER_SIZE_81_val;
IAcknexObject PLAYER_TILT_84;
float PLAYER_TILT_84_val;
IAcknexObject PLAYER_HGT_91;
float PLAYER_HGT_91_val;
IAcknexObject FLOOR_HGT_93;
float FLOOR_HGT_93_val;
IAcknexObject FREEFALL_94;
IAcknexObject GRANADE_96;
IAcknexObject BOUNCE_97;
IAcknexObject GRANADE_99;
IAcknexObject GRAN2TEX_100;
IAcknexObject GRANADE_102;
IAcknexObject PLAYER_ANGLE_103;
float PLAYER_ANGLE_103_val;
IAcknexObject GRANADE_105;
IAcknexObject GRANADE_107;
IAcknexObject GRANADE_109;
float temp_110;
IAcknexObject PLAYER_TILT_112;
float PLAYER_TILT_112_val;
IAcknexObject BULLET_117;
IAcknexObject GRANADE_119;
IAcknexObject GRANADE_122;
IAcknexObject GRANADE_125;
IAcknexObject AMMO_127;
float AMMO_127_val;
IAcknexObject AMMO_128;
float startTime8;
float endTime8;
IAcknexObject GRAN2TEX_130;
IAcknexObject GRANADE_132;
IAcknexObject temp_133;
IAcknexObject GRAN1TEX_134;
IAcknexObject GRANADE_136;
IAcknexObject AMMO_141;
float AMMO_141_val;
IAcknexObject HAS_GRANADE_143;
IAcknexObject GUNFIRING_147;
float startTime9;
float endTime9;
IAcknexObject GRAN00OVL_149;
IAcknexObject WEAPONSEL_153;
float WEAPONSEL_153_val;
IAcknexObject THROW_154;
IAcknexObject THROW_156;
IAcknexObject GUNFIRING_159;
}
public class LAUNCH : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LAUNCH() {
  }
 public LAUNCH(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
            case 3:
                goto _coroutine3;
            case 4:
                goto _coroutine4;
            case 5:
                goto _coroutine5;
            case 6:
                goto _coroutine6;
     }
{
            var enumerator = new CHOOSEMISSILE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MISSILE_1 = _world.GetSynonymObject(3680056099);
if (MISSILE_1 == null)
{
return false;
}
GUNFIRING_3 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_3.SetFloat(231,1f);
_world.AcknexObject.SetAcknexObject(78,null);
_world.AcknexObject.SetAcknexObject(97,null);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)1f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
FIRE:
STNG01OVL_9 = _world.AcknexObject.GetAcknexObject(1500292443);
_world.AcknexObject.SetAcknexObject(158,STNG01OVL_9);
AMMO_13 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_13_val = AMMO_13.GetFloat(PropertyName.VAL);
if (AMMO_13_val == 0f)
{
goto NOAMMO;
}
AMMO_15 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_15_val = AMMO_15.GetFloat(PropertyName.VAL);
AMMO_16 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_16.SetFloat(231,AMMO_15_val + -1f);
{
            var enumerator = new DECAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }AMMO_18 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_18_val = AMMO_18.GetFloat(PropertyName.VAL);
if (AMMO_18_val > 5f)
{
goto PLENTY;
}
WRN01STR_19 = _world.AcknexObject.GetAcknexObject(665673790);
PANELTEXT_21 = _world.AcknexObject.GetAcknexObject(1886906754);
PANELTEXT_21_array = PANELTEXT_21.GetObject<List<IAcknexObject>>(293);
PANELTEXT_21_index = PANELTEXT_21.GetInteger(PropertyName.INDEX);
PANELTEXT_21_array[PANELTEXT_21_index-1] = WRN01STR_19;
PANELTEXT_21.IsDirty = true;
PANELTEXT_22 = _world.AcknexObject.GetAcknexObject(1886906754);
_world.AcknexObject.SetAcknexObject(127,PANELTEXT_22);
MSGSECCOUNT_26 = _world.GetObject(ObjectType.Skill,2688150552);
MSGSECCOUNT_26.SetFloat(231,0f);
PLENTY:
PLAYER_LIGHT_28 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_28_val = PLAYER_LIGHT_28.GetFloat(PropertyName.VAL);
PLAYER_LIGHT_29 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_29.SetFloat(231,PLAYER_LIGHT_28_val + 0.7f);
STNG02SND_30 = _world.AcknexObject.GetAcknexObject(1500332464);
_world.PlaySound(STNG02SND_30,0.8f, null);
SHOT_SOUND_ON_33 = _world.GetObject(ObjectType.Skill,3372273679);
SHOT_SOUND_ON_33.SetFloat(231,1f);
SHOTSECCOUNT_35 = _world.GetObject(ObjectType.Skill,733093231);
SHOTSECCOUNT_35.SetFloat(231,0f);

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.TicksToTime((int)3f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
STNG02OVL_37 = _world.AcknexObject.GetAcknexObject(1500328380);
_world.AcknexObject.SetAcknexObject(158,STNG02OVL_37);
MISSILE_42 = _world.GetSynonymObject(3680056099);
MISSILE_42.SetFloat(213,1f);
MISSILE_45 = _world.GetSynonymObject(3680056099);
MISSILE_45.SetFloat(168,3f);
MISSILE_47 = _world.GetSynonymObject(3680056099);
MISSILE_49 = _world.GetSynonymObject(3680056099);
temp_50 =MISSILE_49.GetFloat(195);
PLAYER_X_51 = _world.GetObject(ObjectType.Skill,459);
PLAYER_X_51_val = PLAYER_X_51.GetFloat(PropertyName.VAL);
PLAYER_COS_53 = _world.GetObject(ObjectType.Skill,464);
PLAYER_COS_53_val = PLAYER_COS_53.GetFloat(PropertyName.VAL);
PLAYER_VX_57 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_57_val = PLAYER_VX_57.GetFloat(PropertyName.VAL);
TIME_CORR_59 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_59_val = TIME_CORR_59.GetFloat(PropertyName.VAL);
MISSILE_47.SetFloat(195,PLAYER_X_51_val+PLAYER_COS_53_val*1.2f+PLAYER_VX_57_val*TIME_CORR_59_val);
MISSILE_61 = _world.GetSynonymObject(3680056099);
MISSILE_63 = _world.GetSynonymObject(3680056099);
temp_64 =MISSILE_63.GetFloat(196);
PLAYER_Y_65 = _world.GetObject(ObjectType.Skill,460);
PLAYER_Y_65_val = PLAYER_Y_65.GetFloat(PropertyName.VAL);
PLAYER_SIN_67 = _world.GetObject(ObjectType.Skill,463);
PLAYER_SIN_67_val = PLAYER_SIN_67.GetFloat(PropertyName.VAL);
PLAYER_VY_71 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_71_val = PLAYER_VY_71.GetFloat(PropertyName.VAL);
TIME_CORR_73 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_73_val = TIME_CORR_73.GetFloat(PropertyName.VAL);
MISSILE_61.SetFloat(196,PLAYER_Y_65_val+PLAYER_SIN_67_val*1.2f+PLAYER_VY_71_val*TIME_CORR_73_val);
MISSILE_75 = _world.GetSynonymObject(3680056099);
MISSILE_77 = _world.GetSynonymObject(3680056099);
temp_78 =MISSILE_77.GetFloat(165);
PLAYER_SIZE_79 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_79_val = PLAYER_SIZE_79.GetFloat(PropertyName.VAL);
PLAYER_TILT_82 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_82_val = PLAYER_TILT_82.GetFloat(PropertyName.VAL);
PLAYER_HGT_89 = _world.GetObject(ObjectType.Skill,479);
PLAYER_HGT_89_val = PLAYER_HGT_89.GetFloat(PropertyName.VAL);
FLOOR_HGT_91 = _world.GetObject(ObjectType.Skill,567);
FLOOR_HGT_91_val = FLOOR_HGT_91.GetFloat(PropertyName.VAL);
MISSILE_75.SetFloat(165,PLAYER_SIZE_79_val-(PLAYER_TILT_82_val*0.65f)-0.05f+PLAYER_HGT_89_val+FLOOR_HGT_91_val);
EXPLODEMISSILE_92 = _world.AcknexObject.GetAcknexObject(3869018100);
MISSILE_94 = _world.GetSynonymObject(3680056099);
MISSILE_94.SetAcknexObject(209,EXPLODEMISSILE_92);
EXPLODETARGET_95 = _world.AcknexObject.GetAcknexObject(3244966725);
MISSILE_97 = _world.GetSynonymObject(3680056099);
MISSILE_97.SetAcknexObject(191,EXPLODETARGET_95);
//Unknown keyword: LOCATE
MISS2TEX_98 = _world.AcknexObject.GetAcknexObject(1181917228);
MISSILE_100 = _world.GetSynonymObject(3680056099);
MISSILE_100.SetAcknexObject(164,MISS2TEX_98);
PLAYER_ANGLE_101 = _world.GetObject(ObjectType.Skill,462);
PLAYER_ANGLE_101_val = PLAYER_ANGLE_101.GetFloat(PropertyName.VAL);
MISSILE_103 = _world.GetSynonymObject(3680056099);
MISSILE_103.SetFloat(194,PLAYER_ANGLE_101_val);
MISSILE_105 = _world.GetSynonymObject(3680056099);
MISSILE_107 = _world.GetSynonymObject(3680056099);
temp_108 =MISSILE_107.GetFloat(169);
PLAYER_TILT_110 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_110_val = PLAYER_TILT_110.GetFloat(PropertyName.VAL);
MISSILE_105.SetFloat(169,-PLAYER_TILT_110_val);
BULLET_111 = _world.AcknexObject.GetAcknexObject(2818612821);
MISSILE_113 = _world.GetSynonymObject(3680056099);
MISSILE_113.SetAcknexObject(199,BULLET_111);
MISSILE_116 = _world.GetSynonymObject(3680056099);
MISSILE_116.SetFloat(207,1f);
MISSILE_119 = _world.GetSynonymObject(3680056099);
MISSILE_119.SetFloat(214,1f);
MISSILE_122 = _world.GetSynonymObject(3680056099);
MISSILE_122.SetFloat(204,0f);
SHOOT_SECTOR_124 = _world.GetObject(ObjectType.Skill,440);
SHOOT_SECTOR_124.SetFloat(231,6.283f);
SHOOT_RANGE_126 = _world.GetObject(ObjectType.Skill,439);
SHOOT_RANGE_126.SetFloat(231,200f);
SHOOT_FAC_128 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_128.SetFloat(231,0f);
SHOOT_X_130 = _world.GetObject(ObjectType.Skill,442);
SHOOT_X_130.SetFloat(231,0f);
SVANGLE_131 = _world.GetObject(ObjectType.Skill,3326160989);
SVANGLE_131_val = SVANGLE_131.GetFloat(PropertyName.VAL);
SHOOT_Y_132 = _world.GetObject(ObjectType.Skill,443);
SHOOT_Y_132.SetFloat(231,SVANGLE_131_val);
_world.Shoot(null, MY, THERE);
HIT_DIST_134 = _world.GetObject(ObjectType.Skill,444);
HIT_DIST_134_val = HIT_DIST_134.GetFloat(PropertyName.VAL);
if (HIT_DIST_134_val == 0f)
{
goto HITWALL;
}
HIT_135 = _world.GetSynonymObject(704);
_world.SetSynonymObject(2013386137,HIT_135);
HIT_139 = _world.GetSynonymObject(704);
temp_140 =HIT_139.GetFloat(208);
if (temp_140 != 1f)
{
goto HITWALL;
}
HIT_143 = _world.GetSynonymObject(704);
temp_144 =HIT_143.GetFloat(202);
if (temp_144 != 0f)
{
MISSILE_146 = _world.GetSynonymObject(3680056099);
MISSILE_148 = _world.GetSynonymObject(3680056099);
temp_149 =MISSILE_148.GetFloat(169);
HIT_152 = _world.GetSynonymObject(704);
temp_153 =HIT_152.GetFloat(200);
FLOOR_HGT_155 = _world.GetObject(ObjectType.Skill,567);
FLOOR_HGT_155_val = FLOOR_HGT_155.GetFloat(PropertyName.VAL);
HIT_159 = _world.GetSynonymObject(704);
temp_160 =HIT_159.GetFloat(202);
MISSILE_146.SetFloat(169,(temp_153-FLOOR_HGT_155_val)/temp_160);
}
MISSILE_163 = _world.GetSynonymObject(3680056099);
temp_164 =MISSILE_163.GetFloat(169);
if (temp_164 < 0f)
{
MISSILE_166 = _world.GetSynonymObject(3680056099);
MISSILE_168 = _world.GetSynonymObject(3680056099);
temp_169 =MISSILE_168.GetFloat(169);
MISSILE_172 = _world.GetSynonymObject(3680056099);
temp_173 =MISSILE_172.GetFloat(169);
MISSILE_166.SetFloat(169,-temp_173);
}
goto CONTHIT;
HITWALL:
MISSILE_175 = _world.GetSynonymObject(3680056099);
MISSILE_177 = _world.GetSynonymObject(3680056099);
temp_178 =MISSILE_177.GetFloat(169);
PLAYER_TILT_180 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_180_val = PLAYER_TILT_180.GetFloat(PropertyName.VAL);
MISSILE_175.SetFloat(169,-PLAYER_TILT_180_val/1.4f);
CONTHIT:
PLAYER_LIGHT_184 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_184_val = PLAYER_LIGHT_184.GetFloat(PropertyName.VAL);
PLAYER_LIGHT_185 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_185.SetFloat(231,PLAYER_LIGHT_184_val + -0.7f);

            startTime3 = Time.time;
            endTime3 = startTime3 + TimeUtils.TicksToTime((int)2f);
            _cursor = 3;
            _coroutine3:
            while (Time.time  < endTime3)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MISS2TEX_187 = _world.AcknexObject.GetAcknexObject(1181917228);
MISSILE_189 = _world.GetSynonymObject(3680056099);
temp_190 =MISSILE_189?.GetAcknexObject(164);
if (temp_190 == MISS2TEX_187)
{
MISS1TEX_191 = _world.AcknexObject.GetAcknexObject(1181881291);
MISSILE_193 = _world.GetSynonymObject(3680056099);
MISSILE_193.SetAcknexObject(164,MISS1TEX_191);
}

            startTime4 = Time.time;
            endTime4 = startTime4 + TimeUtils.TicksToTime((int)2f);
            _cursor = 4;
            _coroutine4:
            while (Time.time  < endTime4)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
//Unknown keyword: LOCATE
STNG01OVL_195 = _world.AcknexObject.GetAcknexObject(1500292443);
_world.AcknexObject.SetAcknexObject(158,STNG01OVL_195);

            startTime5 = Time.time;
            endTime5 = startTime5 + TimeUtils.TicksToTime((int)2f);
            _cursor = 5;
            _coroutine5:
            while (Time.time  < endTime5)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
STNG00OVL_199 = _world.AcknexObject.GetAcknexObject(1500256506);
_world.AcknexObject.SetAcknexObject(158,STNG00OVL_199);
goto CONT;
NOAMMO:
WRN02STR_202 = _world.AcknexObject.GetAcknexObject(665709727);
PANELTEXT_204 = _world.AcknexObject.GetAcknexObject(1886906754);
PANELTEXT_204_array = PANELTEXT_204.GetObject<List<IAcknexObject>>(293);
PANELTEXT_204_index = PANELTEXT_204.GetInteger(PropertyName.INDEX);
PANELTEXT_204_array[PANELTEXT_204_index-1] = WRN02STR_202;
PANELTEXT_204.IsDirty = true;
PANELTEXT_205 = _world.AcknexObject.GetAcknexObject(1886906754);
_world.AcknexObject.SetAcknexObject(127,PANELTEXT_205);
MSGSECCOUNT_209 = _world.GetObject(ObjectType.Skill,2688150552);
MSGSECCOUNT_209.SetFloat(231,0f);
STNG03SND_210 = _world.AcknexObject.GetAcknexObject(1500368401);
_world.PlaySound(STNG03SND_210,1f, null);
GUN_ON_213 = _world.GetObject(ObjectType.Skill,3014382675);
GUN_ON_213.SetFloat(231,0f);

            startTime6 = Time.time;
            endTime6 = startTime6 + TimeUtils.TicksToTime((int)2f);
            _cursor = 6;
            _coroutine6:
            while (Time.time  < endTime6)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
STNG00OVL_215 = _world.AcknexObject.GetAcknexObject(1500256506);
_world.AcknexObject.SetAcknexObject(158,STNG00OVL_215);
CONT:
WEAPONSEL_219 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_219_val = WEAPONSEL_219.GetFloat(PropertyName.VAL);
if (WEAPONSEL_219_val != 4f)
{
goto FINISH;
}
LAUNCH_220 = _world.AcknexObject.GetAcknexObject(3186573864);
_world.AcknexObject.SetAcknexObject(78,LAUNCH_220);
LAUNCH_222 = _world.AcknexObject.GetAcknexObject(3186573864);
_world.AcknexObject.SetAcknexObject(97,LAUNCH_222);
FINISH:
GUNFIRING_225 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_225.SetFloat(231,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MISSILE_1;
IAcknexObject GUNFIRING_3;
float startTime1;
float endTime1;
IAcknexObject STNG01OVL_9;
IAcknexObject AMMO_13;
float AMMO_13_val;
IAcknexObject AMMO_15;
float AMMO_15_val;
IAcknexObject AMMO_16;
IAcknexObject AMMO_18;
float AMMO_18_val;
IAcknexObject WRN01STR_19;
IAcknexObject PANELTEXT_21;
List<IAcknexObject> PANELTEXT_21_array;
int PANELTEXT_21_index;
IAcknexObject PANELTEXT_22;
IAcknexObject MSGSECCOUNT_26;
IAcknexObject PLAYER_LIGHT_28;
float PLAYER_LIGHT_28_val;
IAcknexObject PLAYER_LIGHT_29;
IAcknexObject STNG02SND_30;
IAcknexObject SHOT_SOUND_ON_33;
IAcknexObject SHOTSECCOUNT_35;
float startTime2;
float endTime2;
IAcknexObject STNG02OVL_37;
IAcknexObject MISSILE_42;
IAcknexObject MISSILE_45;
IAcknexObject MISSILE_47;
IAcknexObject MISSILE_49;
float temp_50;
IAcknexObject PLAYER_X_51;
float PLAYER_X_51_val;
IAcknexObject PLAYER_COS_53;
float PLAYER_COS_53_val;
IAcknexObject PLAYER_VX_57;
float PLAYER_VX_57_val;
IAcknexObject TIME_CORR_59;
float TIME_CORR_59_val;
IAcknexObject MISSILE_61;
IAcknexObject MISSILE_63;
float temp_64;
IAcknexObject PLAYER_Y_65;
float PLAYER_Y_65_val;
IAcknexObject PLAYER_SIN_67;
float PLAYER_SIN_67_val;
IAcknexObject PLAYER_VY_71;
float PLAYER_VY_71_val;
IAcknexObject TIME_CORR_73;
float TIME_CORR_73_val;
IAcknexObject MISSILE_75;
IAcknexObject MISSILE_77;
float temp_78;
IAcknexObject PLAYER_SIZE_79;
float PLAYER_SIZE_79_val;
IAcknexObject PLAYER_TILT_82;
float PLAYER_TILT_82_val;
IAcknexObject PLAYER_HGT_89;
float PLAYER_HGT_89_val;
IAcknexObject FLOOR_HGT_91;
float FLOOR_HGT_91_val;
IAcknexObject EXPLODEMISSILE_92;
IAcknexObject MISSILE_94;
IAcknexObject EXPLODETARGET_95;
IAcknexObject MISSILE_97;
IAcknexObject MISS2TEX_98;
IAcknexObject MISSILE_100;
IAcknexObject PLAYER_ANGLE_101;
float PLAYER_ANGLE_101_val;
IAcknexObject MISSILE_103;
IAcknexObject MISSILE_105;
IAcknexObject MISSILE_107;
float temp_108;
IAcknexObject PLAYER_TILT_110;
float PLAYER_TILT_110_val;
IAcknexObject BULLET_111;
IAcknexObject MISSILE_113;
IAcknexObject MISSILE_116;
IAcknexObject MISSILE_119;
IAcknexObject MISSILE_122;
IAcknexObject SHOOT_SECTOR_124;
IAcknexObject SHOOT_RANGE_126;
IAcknexObject SHOOT_FAC_128;
IAcknexObject SHOOT_X_130;
IAcknexObject SVANGLE_131;
float SVANGLE_131_val;
IAcknexObject SHOOT_Y_132;
IAcknexObject HIT_DIST_134;
float HIT_DIST_134_val;
IAcknexObject HIT_135;
IAcknexObject HIT_139;
float temp_140;
IAcknexObject HIT_143;
float temp_144;
IAcknexObject MISSILE_146;
IAcknexObject MISSILE_148;
float temp_149;
IAcknexObject HIT_152;
float temp_153;
IAcknexObject FLOOR_HGT_155;
float FLOOR_HGT_155_val;
IAcknexObject HIT_159;
float temp_160;
IAcknexObject MISSILE_163;
float temp_164;
IAcknexObject MISSILE_166;
IAcknexObject MISSILE_168;
float temp_169;
IAcknexObject MISSILE_172;
float temp_173;
IAcknexObject MISSILE_175;
IAcknexObject MISSILE_177;
float temp_178;
IAcknexObject PLAYER_TILT_180;
float PLAYER_TILT_180_val;
IAcknexObject PLAYER_LIGHT_184;
float PLAYER_LIGHT_184_val;
IAcknexObject PLAYER_LIGHT_185;
float startTime3;
float endTime3;
IAcknexObject MISS2TEX_187;
IAcknexObject MISSILE_189;
IAcknexObject temp_190;
IAcknexObject MISS1TEX_191;
IAcknexObject MISSILE_193;
float startTime4;
float endTime4;
IAcknexObject STNG01OVL_195;
float startTime5;
float endTime5;
IAcknexObject STNG00OVL_199;
IAcknexObject WRN02STR_202;
IAcknexObject PANELTEXT_204;
List<IAcknexObject> PANELTEXT_204_array;
int PANELTEXT_204_index;
IAcknexObject PANELTEXT_205;
IAcknexObject MSGSECCOUNT_209;
IAcknexObject STNG03SND_210;
IAcknexObject GUN_ON_213;
float startTime6;
float endTime6;
IAcknexObject STNG00OVL_215;
IAcknexObject WEAPONSEL_219;
float WEAPONSEL_219_val;
IAcknexObject LAUNCH_220;
IAcknexObject LAUNCH_222;
IAcknexObject GUNFIRING_225;
}
public class BEAM : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public BEAM() {
  }
 public BEAM(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
            case 3:
                goto _coroutine3;
            case 4:
                goto _coroutine4;
     }
{
            var enumerator = new CHOOSEPARTICLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }PARTICLE_1 = _world.GetSynonymObject(2704244193);
if (PARTICLE_1 == null)
{
return false;
}
GUNFIRING_3 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_3.SetFloat(231,1f);
_world.AcknexObject.SetAcknexObject(78,null);
_world.AcknexObject.SetAcknexObject(97,null);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)1f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
FIRE:
QGUN01OVL_9 = _world.AcknexObject.GetAcknexObject(2621946266);
_world.AcknexObject.SetAcknexObject(158,QGUN01OVL_9);
AMMO_13 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_13_val = AMMO_13.GetFloat(PropertyName.VAL);
if (AMMO_13_val == 0f)
{
goto NOAMMO;
}
AMMO_15 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_15_val = AMMO_15.GetFloat(PropertyName.VAL);
AMMO_16 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_16.SetFloat(231,AMMO_15_val + -1f);
{
            var enumerator = new DECAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }AMMO_18 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_18_val = AMMO_18.GetFloat(PropertyName.VAL);
if (AMMO_18_val > 20f)
{
goto PLENTY;
}
WRN01STR_19 = _world.AcknexObject.GetAcknexObject(665673790);
PANELTEXT_21 = _world.AcknexObject.GetAcknexObject(1886906754);
PANELTEXT_21_array = PANELTEXT_21.GetObject<List<IAcknexObject>>(293);
PANELTEXT_21_index = PANELTEXT_21.GetInteger(PropertyName.INDEX);
PANELTEXT_21_array[PANELTEXT_21_index-1] = WRN01STR_19;
PANELTEXT_21.IsDirty = true;
PANELTEXT_22 = _world.AcknexObject.GetAcknexObject(1886906754);
_world.AcknexObject.SetAcknexObject(127,PANELTEXT_22);
MSGSECCOUNT_26 = _world.GetObject(ObjectType.Skill,2688150552);
MSGSECCOUNT_26.SetFloat(231,0f);
PLENTY:
PLAYER_LIGHT_28 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_28_val = PLAYER_LIGHT_28.GetFloat(PropertyName.VAL);
PLAYER_LIGHT_29 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_29.SetFloat(231,PLAYER_LIGHT_28_val + 0.9f);
QGUN02SND_30 = _world.AcknexObject.GetAcknexObject(2621986287);
_world.PlaySound(QGUN02SND_30,0.8f, null);
SHOT_SOUND_ON_33 = _world.GetObject(ObjectType.Skill,3372273679);
SHOT_SOUND_ON_33.SetFloat(231,1f);
SHOTSECCOUNT_35 = _world.GetObject(ObjectType.Skill,733093231);
SHOTSECCOUNT_35.SetFloat(231,0f);
QGUN02OVL_36 = _world.AcknexObject.GetAcknexObject(2621982203);
_world.AcknexObject.SetAcknexObject(158,QGUN02OVL_36);
PARTICLE_41 = _world.GetSynonymObject(2704244193);
PARTICLE_41.SetFloat(213,1f);
PARTICLE_44 = _world.GetSynonymObject(2704244193);
PARTICLE_44.SetFloat(168,2f);
PARTICLE_46 = _world.GetSynonymObject(2704244193);
PARTICLE_48 = _world.GetSynonymObject(2704244193);
temp_49 =PARTICLE_48.GetFloat(195);
PLAYER_X_50 = _world.GetObject(ObjectType.Skill,459);
PLAYER_X_50_val = PLAYER_X_50.GetFloat(PropertyName.VAL);
PLAYER_COS_52 = _world.GetObject(ObjectType.Skill,464);
PLAYER_COS_52_val = PLAYER_COS_52.GetFloat(PropertyName.VAL);
PLAYER_VX_56 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_56_val = PLAYER_VX_56.GetFloat(PropertyName.VAL);
TIME_CORR_58 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_58_val = TIME_CORR_58.GetFloat(PropertyName.VAL);
PARTICLE_46.SetFloat(195,PLAYER_X_50_val+PLAYER_COS_52_val*2f+PLAYER_VX_56_val*TIME_CORR_58_val);
PARTICLE_60 = _world.GetSynonymObject(2704244193);
PARTICLE_62 = _world.GetSynonymObject(2704244193);
temp_63 =PARTICLE_62.GetFloat(196);
PLAYER_Y_64 = _world.GetObject(ObjectType.Skill,460);
PLAYER_Y_64_val = PLAYER_Y_64.GetFloat(PropertyName.VAL);
PLAYER_SIN_66 = _world.GetObject(ObjectType.Skill,463);
PLAYER_SIN_66_val = PLAYER_SIN_66.GetFloat(PropertyName.VAL);
PLAYER_VY_70 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_70_val = PLAYER_VY_70.GetFloat(PropertyName.VAL);
TIME_CORR_72 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_72_val = TIME_CORR_72.GetFloat(PropertyName.VAL);
PARTICLE_60.SetFloat(196,PLAYER_Y_64_val+PLAYER_SIN_66_val*2f+PLAYER_VY_70_val*TIME_CORR_72_val);
PARTICLE_74 = _world.GetSynonymObject(2704244193);
PARTICLE_76 = _world.GetSynonymObject(2704244193);
temp_77 =PARTICLE_76.GetFloat(165);
PLAYER_SIZE_78 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_78_val = PLAYER_SIZE_78.GetFloat(PropertyName.VAL);
PLAYER_TILT_81 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_81_val = PLAYER_TILT_81.GetFloat(PropertyName.VAL);
PLAYER_HGT_88 = _world.GetObject(ObjectType.Skill,479);
PLAYER_HGT_88_val = PLAYER_HGT_88.GetFloat(PropertyName.VAL);
FLOOR_HGT_90 = _world.GetObject(ObjectType.Skill,567);
FLOOR_HGT_90_val = FLOOR_HGT_90.GetFloat(PropertyName.VAL);
PARTICLE_74.SetFloat(165,PLAYER_SIZE_78_val-(PLAYER_TILT_81_val*1.3f)-0.3f+PLAYER_HGT_88_val+FLOOR_HGT_90_val);
PRTCTEX_91 = _world.AcknexObject.GetAcknexObject(3612333943);
PARTICLE_93 = _world.GetSynonymObject(2704244193);
PARTICLE_93.SetAcknexObject(164,PRTCTEX_91);
IMPLODEPARTICLE_94 = _world.AcknexObject.GetAcknexObject(372812267);
PARTICLE_96 = _world.GetSynonymObject(2704244193);
PARTICLE_96.SetAcknexObject(191,IMPLODEPARTICLE_94);
LOCATEPARTICLE_97 = _world.AcknexObject.GetAcknexObject(2894381625);
PARTICLE_99 = _world.GetSynonymObject(2704244193);
PARTICLE_99.SetAcknexObject(190,LOCATEPARTICLE_97);
PARTICLE_102 = _world.GetSynonymObject(2704244193);
PARTICLE_102.SetAcknexObject(189,null);
PLAYER_ANGLE_103 = _world.GetObject(ObjectType.Skill,462);
PLAYER_ANGLE_103_val = PLAYER_ANGLE_103.GetFloat(PropertyName.VAL);
PARTICLE_105 = _world.GetSynonymObject(2704244193);
PARTICLE_105.SetFloat(194,PLAYER_ANGLE_103_val);
BULLET_106 = _world.AcknexObject.GetAcknexObject(2818612821);
PARTICLE_108 = _world.GetSynonymObject(2704244193);
PARTICLE_108.SetAcknexObject(199,BULLET_106);
PARTICLE_111 = _world.GetSynonymObject(2704244193);
PARTICLE_111.SetFloat(204,0f);
SHOOT_SECTOR_113 = _world.GetObject(ObjectType.Skill,440);
SHOOT_SECTOR_113.SetFloat(231,6.283f);
SHOOT_RANGE_115 = _world.GetObject(ObjectType.Skill,439);
SHOOT_RANGE_115.SetFloat(231,200f);
SHOOT_FAC_117 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_117.SetFloat(231,0f);
SHOOT_X_119 = _world.GetObject(ObjectType.Skill,442);
SHOOT_X_119.SetFloat(231,0f);
SHOOT_Y_121 = _world.GetObject(ObjectType.Skill,443);
SHOOT_Y_121.SetFloat(231,0f);
_world.Shoot(null, MY, THERE);
HIT_DIST_123 = _world.GetObject(ObjectType.Skill,444);
HIT_DIST_123_val = HIT_DIST_123.GetFloat(PropertyName.VAL);
if (HIT_DIST_123_val == 0f)
{
goto HITWALL;
}
HIT_124 = _world.GetSynonymObject(704);
PARTICLE_126 = _world.GetSynonymObject(2704244193);
PARTICLE_126.SetAcknexObject(199,HIT_124);
HIT_129 = _world.GetSynonymObject(704);
temp_130 =HIT_129.GetFloat(202);
if (temp_130 != 0f)
{
PARTICLE_132 = _world.GetSynonymObject(2704244193);
PARTICLE_134 = _world.GetSynonymObject(2704244193);
temp_135 =PARTICLE_134.GetFloat(169);
HIT_138 = _world.GetSynonymObject(704);
temp_139 =HIT_138.GetFloat(200);
FLOOR_HGT_141 = _world.GetObject(ObjectType.Skill,567);
FLOOR_HGT_141_val = FLOOR_HGT_141.GetFloat(PropertyName.VAL);
HIT_145 = _world.GetSynonymObject(704);
temp_146 =HIT_145.GetFloat(202);
PARTICLE_132.SetFloat(169,(temp_139-FLOOR_HGT_141_val)/temp_146);
}
PARTICLE_149 = _world.GetSynonymObject(2704244193);
temp_150 =PARTICLE_149.GetFloat(169);
if (temp_150 < 0f)
{
PARTICLE_152 = _world.GetSynonymObject(2704244193);
PARTICLE_154 = _world.GetSynonymObject(2704244193);
temp_155 =PARTICLE_154.GetFloat(169);
PARTICLE_158 = _world.GetSynonymObject(2704244193);
temp_159 =PARTICLE_158.GetFloat(169);
PARTICLE_152.SetFloat(169,-temp_159);
}
goto CONTHIT;
HITWALL:
BULLET_160 = _world.AcknexObject.GetAcknexObject(2818612821);
PARTICLE_162 = _world.GetSynonymObject(2704244193);
PARTICLE_162.SetAcknexObject(199,BULLET_160);
PARTICLE_164 = _world.GetSynonymObject(2704244193);
PARTICLE_166 = _world.GetSynonymObject(2704244193);
temp_167 =PARTICLE_166.GetFloat(169);
PLAYER_TILT_169 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_169_val = PLAYER_TILT_169.GetFloat(PropertyName.VAL);
PARTICLE_164.SetFloat(169,-PLAYER_TILT_169_val/1.4f);
CONTHIT:
PLAYER_LIGHT_173 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_173_val = PLAYER_LIGHT_173.GetFloat(PropertyName.VAL);
PLAYER_LIGHT_174 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_174.SetFloat(231,PLAYER_LIGHT_173_val + -0.9f);

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.TicksToTime((int)4f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
//Unknown keyword: LOCATE
QGUN01OVL_176 = _world.AcknexObject.GetAcknexObject(2621946266);
_world.AcknexObject.SetAcknexObject(158,QGUN01OVL_176);

            startTime3 = Time.time;
            endTime3 = startTime3 + TimeUtils.TicksToTime((int)2f);
            _cursor = 3;
            _coroutine3:
            while (Time.time  < endTime3)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
QGUN00OVL_180 = _world.AcknexObject.GetAcknexObject(2621910329);
_world.AcknexObject.SetAcknexObject(158,QGUN00OVL_180);
goto CONT;
NOAMMO:
WRN02STR_183 = _world.AcknexObject.GetAcknexObject(665709727);
PANELTEXT_185 = _world.AcknexObject.GetAcknexObject(1886906754);
PANELTEXT_185_array = PANELTEXT_185.GetObject<List<IAcknexObject>>(293);
PANELTEXT_185_index = PANELTEXT_185.GetInteger(PropertyName.INDEX);
PANELTEXT_185_array[PANELTEXT_185_index-1] = WRN02STR_183;
PANELTEXT_185.IsDirty = true;
PANELTEXT_186 = _world.AcknexObject.GetAcknexObject(1886906754);
_world.AcknexObject.SetAcknexObject(127,PANELTEXT_186);
MSGSECCOUNT_190 = _world.GetObject(ObjectType.Skill,2688150552);
MSGSECCOUNT_190.SetFloat(231,0f);
GUN_ON_192 = _world.GetObject(ObjectType.Skill,3014382675);
GUN_ON_192.SetFloat(231,0f);
QGUN03SND_193 = _world.AcknexObject.GetAcknexObject(2622022224);
_world.PlaySound(QGUN03SND_193,0.5f, null);

            startTime4 = Time.time;
            endTime4 = startTime4 + TimeUtils.TicksToTime((int)2f);
            _cursor = 4;
            _coroutine4:
            while (Time.time  < endTime4)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
QGUN00OVL_196 = _world.AcknexObject.GetAcknexObject(2621910329);
_world.AcknexObject.SetAcknexObject(158,QGUN00OVL_196);
CONT:
WEAPONSEL_200 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_200_val = WEAPONSEL_200.GetFloat(PropertyName.VAL);
if (WEAPONSEL_200_val != 5f)
{
goto FINISH;
}
BEAM_201 = _world.AcknexObject.GetAcknexObject(2088923810);
_world.AcknexObject.SetAcknexObject(78,BEAM_201);
BEAM_203 = _world.AcknexObject.GetAcknexObject(2088923810);
_world.AcknexObject.SetAcknexObject(97,BEAM_203);
FINISH:
GUNFIRING_206 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_206.SetFloat(231,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject PARTICLE_1;
IAcknexObject GUNFIRING_3;
float startTime1;
float endTime1;
IAcknexObject QGUN01OVL_9;
IAcknexObject AMMO_13;
float AMMO_13_val;
IAcknexObject AMMO_15;
float AMMO_15_val;
IAcknexObject AMMO_16;
IAcknexObject AMMO_18;
float AMMO_18_val;
IAcknexObject WRN01STR_19;
IAcknexObject PANELTEXT_21;
List<IAcknexObject> PANELTEXT_21_array;
int PANELTEXT_21_index;
IAcknexObject PANELTEXT_22;
IAcknexObject MSGSECCOUNT_26;
IAcknexObject PLAYER_LIGHT_28;
float PLAYER_LIGHT_28_val;
IAcknexObject PLAYER_LIGHT_29;
IAcknexObject QGUN02SND_30;
IAcknexObject SHOT_SOUND_ON_33;
IAcknexObject SHOTSECCOUNT_35;
IAcknexObject QGUN02OVL_36;
IAcknexObject PARTICLE_41;
IAcknexObject PARTICLE_44;
IAcknexObject PARTICLE_46;
IAcknexObject PARTICLE_48;
float temp_49;
IAcknexObject PLAYER_X_50;
float PLAYER_X_50_val;
IAcknexObject PLAYER_COS_52;
float PLAYER_COS_52_val;
IAcknexObject PLAYER_VX_56;
float PLAYER_VX_56_val;
IAcknexObject TIME_CORR_58;
float TIME_CORR_58_val;
IAcknexObject PARTICLE_60;
IAcknexObject PARTICLE_62;
float temp_63;
IAcknexObject PLAYER_Y_64;
float PLAYER_Y_64_val;
IAcknexObject PLAYER_SIN_66;
float PLAYER_SIN_66_val;
IAcknexObject PLAYER_VY_70;
float PLAYER_VY_70_val;
IAcknexObject TIME_CORR_72;
float TIME_CORR_72_val;
IAcknexObject PARTICLE_74;
IAcknexObject PARTICLE_76;
float temp_77;
IAcknexObject PLAYER_SIZE_78;
float PLAYER_SIZE_78_val;
IAcknexObject PLAYER_TILT_81;
float PLAYER_TILT_81_val;
IAcknexObject PLAYER_HGT_88;
float PLAYER_HGT_88_val;
IAcknexObject FLOOR_HGT_90;
float FLOOR_HGT_90_val;
IAcknexObject PRTCTEX_91;
IAcknexObject PARTICLE_93;
IAcknexObject IMPLODEPARTICLE_94;
IAcknexObject PARTICLE_96;
IAcknexObject LOCATEPARTICLE_97;
IAcknexObject PARTICLE_99;
IAcknexObject PARTICLE_102;
IAcknexObject PLAYER_ANGLE_103;
float PLAYER_ANGLE_103_val;
IAcknexObject PARTICLE_105;
IAcknexObject BULLET_106;
IAcknexObject PARTICLE_108;
IAcknexObject PARTICLE_111;
IAcknexObject SHOOT_SECTOR_113;
IAcknexObject SHOOT_RANGE_115;
IAcknexObject SHOOT_FAC_117;
IAcknexObject SHOOT_X_119;
IAcknexObject SHOOT_Y_121;
IAcknexObject HIT_DIST_123;
float HIT_DIST_123_val;
IAcknexObject HIT_124;
IAcknexObject PARTICLE_126;
IAcknexObject HIT_129;
float temp_130;
IAcknexObject PARTICLE_132;
IAcknexObject PARTICLE_134;
float temp_135;
IAcknexObject HIT_138;
float temp_139;
IAcknexObject FLOOR_HGT_141;
float FLOOR_HGT_141_val;
IAcknexObject HIT_145;
float temp_146;
IAcknexObject PARTICLE_149;
float temp_150;
IAcknexObject PARTICLE_152;
IAcknexObject PARTICLE_154;
float temp_155;
IAcknexObject PARTICLE_158;
float temp_159;
IAcknexObject BULLET_160;
IAcknexObject PARTICLE_162;
IAcknexObject PARTICLE_164;
IAcknexObject PARTICLE_166;
float temp_167;
IAcknexObject PLAYER_TILT_169;
float PLAYER_TILT_169_val;
IAcknexObject PLAYER_LIGHT_173;
float PLAYER_LIGHT_173_val;
IAcknexObject PLAYER_LIGHT_174;
float startTime2;
float endTime2;
IAcknexObject QGUN01OVL_176;
float startTime3;
float endTime3;
IAcknexObject QGUN00OVL_180;
IAcknexObject WRN02STR_183;
IAcknexObject PANELTEXT_185;
List<IAcknexObject> PANELTEXT_185_array;
int PANELTEXT_185_index;
IAcknexObject PANELTEXT_186;
IAcknexObject MSGSECCOUNT_190;
IAcknexObject GUN_ON_192;
IAcknexObject QGUN03SND_193;
float startTime4;
float endTime4;
IAcknexObject QGUN00OVL_196;
IAcknexObject WEAPONSEL_200;
float WEAPONSEL_200_val;
IAcknexObject BEAM_201;
IAcknexObject BEAM_203;
IAcknexObject GUNFIRING_206;
}
public class RAISE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public RAISE() {
  }
 public RAISE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
            case 3:
                goto _coroutine3;
            case 4:
                goto _coroutine4;
            case 5:
                goto _coroutine5;
     }
MY_GUN_1 = _world.GetSynonymObject(3254523708);
MY_GUN_3 = _world.GetSynonymObject(3254523708);
temp_4 =MY_GUN_3.GetFloat(195);
PLAYER_X_5 = _world.GetObject(ObjectType.Skill,459);
PLAYER_X_5_val = PLAYER_X_5.GetFloat(PropertyName.VAL);
PLAYER_COS_7 = _world.GetObject(ObjectType.Skill,464);
PLAYER_COS_7_val = PLAYER_COS_7.GetFloat(PropertyName.VAL);
PLAYER_VX_11 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_11_val = PLAYER_VX_11.GetFloat(PropertyName.VAL);
TIME_CORR_13 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_13_val = TIME_CORR_13.GetFloat(PropertyName.VAL);
MY_GUN_1.SetFloat(195,PLAYER_X_5_val+PLAYER_COS_7_val*1.16f+PLAYER_VX_11_val*TIME_CORR_13_val);
MY_GUN_15 = _world.GetSynonymObject(3254523708);
MY_GUN_17 = _world.GetSynonymObject(3254523708);
temp_18 =MY_GUN_17.GetFloat(196);
PLAYER_Y_19 = _world.GetObject(ObjectType.Skill,460);
PLAYER_Y_19_val = PLAYER_Y_19.GetFloat(PropertyName.VAL);
PLAYER_SIN_21 = _world.GetObject(ObjectType.Skill,463);
PLAYER_SIN_21_val = PLAYER_SIN_21.GetFloat(PropertyName.VAL);
PLAYER_VY_25 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_25_val = PLAYER_VY_25.GetFloat(PropertyName.VAL);
TIME_CORR_27 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_27_val = TIME_CORR_27.GetFloat(PropertyName.VAL);
MY_GUN_15.SetFloat(196,PLAYER_Y_19_val+PLAYER_SIN_21_val*1.16f+PLAYER_VY_25_val*TIME_CORR_27_val);
MY_GUN_29 = _world.GetSynonymObject(3254523708);
MY_GUN_31 = _world.GetSynonymObject(3254523708);
temp_32 =MY_GUN_31.GetFloat(165);
PLAYER_Z_33 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_33_val = PLAYER_Z_33.GetFloat(PropertyName.VAL);
PLAYER_TILT_36 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_36_val = PLAYER_TILT_36.GetFloat(PropertyName.VAL);
MY_GUN_29.SetFloat(165,PLAYER_Z_33_val-(PLAYER_TILT_36_val-1f)*0.844f-1.9f);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)1f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_46 = _world.GetSynonymObject(3254523708);
MY_GUN_48 = _world.GetSynonymObject(3254523708);
temp_49 =MY_GUN_48.GetFloat(195);
PLAYER_X_50 = _world.GetObject(ObjectType.Skill,459);
PLAYER_X_50_val = PLAYER_X_50.GetFloat(PropertyName.VAL);
PLAYER_COS_52 = _world.GetObject(ObjectType.Skill,464);
PLAYER_COS_52_val = PLAYER_COS_52.GetFloat(PropertyName.VAL);
PLAYER_VX_56 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_56_val = PLAYER_VX_56.GetFloat(PropertyName.VAL);
TIME_CORR_58 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_58_val = TIME_CORR_58.GetFloat(PropertyName.VAL);
MY_GUN_46.SetFloat(195,PLAYER_X_50_val+PLAYER_COS_52_val*1.16f+PLAYER_VX_56_val*TIME_CORR_58_val);
MY_GUN_60 = _world.GetSynonymObject(3254523708);
MY_GUN_62 = _world.GetSynonymObject(3254523708);
temp_63 =MY_GUN_62.GetFloat(196);
PLAYER_Y_64 = _world.GetObject(ObjectType.Skill,460);
PLAYER_Y_64_val = PLAYER_Y_64.GetFloat(PropertyName.VAL);
PLAYER_SIN_66 = _world.GetObject(ObjectType.Skill,463);
PLAYER_SIN_66_val = PLAYER_SIN_66.GetFloat(PropertyName.VAL);
PLAYER_VY_70 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_70_val = PLAYER_VY_70.GetFloat(PropertyName.VAL);
TIME_CORR_72 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_72_val = TIME_CORR_72.GetFloat(PropertyName.VAL);
MY_GUN_60.SetFloat(196,PLAYER_Y_64_val+PLAYER_SIN_66_val*1.16f+PLAYER_VY_70_val*TIME_CORR_72_val);
MY_GUN_74 = _world.GetSynonymObject(3254523708);
MY_GUN_76 = _world.GetSynonymObject(3254523708);
temp_77 =MY_GUN_76.GetFloat(165);
PLAYER_Z_78 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_78_val = PLAYER_Z_78.GetFloat(PropertyName.VAL);
PLAYER_TILT_81 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_81_val = PLAYER_TILT_81.GetFloat(PropertyName.VAL);
MY_GUN_74.SetFloat(165,PLAYER_Z_78_val-(PLAYER_TILT_81_val-1f)*0.844f-1.6f);

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.FramesToTime((int)1f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_91 = _world.GetSynonymObject(3254523708);
MY_GUN_93 = _world.GetSynonymObject(3254523708);
temp_94 =MY_GUN_93.GetFloat(195);
PLAYER_X_95 = _world.GetObject(ObjectType.Skill,459);
PLAYER_X_95_val = PLAYER_X_95.GetFloat(PropertyName.VAL);
PLAYER_COS_97 = _world.GetObject(ObjectType.Skill,464);
PLAYER_COS_97_val = PLAYER_COS_97.GetFloat(PropertyName.VAL);
PLAYER_VX_101 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_101_val = PLAYER_VX_101.GetFloat(PropertyName.VAL);
TIME_CORR_103 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_103_val = TIME_CORR_103.GetFloat(PropertyName.VAL);
MY_GUN_91.SetFloat(195,PLAYER_X_95_val+PLAYER_COS_97_val*1.16f+PLAYER_VX_101_val*TIME_CORR_103_val);
MY_GUN_105 = _world.GetSynonymObject(3254523708);
MY_GUN_107 = _world.GetSynonymObject(3254523708);
temp_108 =MY_GUN_107.GetFloat(196);
PLAYER_Y_109 = _world.GetObject(ObjectType.Skill,460);
PLAYER_Y_109_val = PLAYER_Y_109.GetFloat(PropertyName.VAL);
PLAYER_SIN_111 = _world.GetObject(ObjectType.Skill,463);
PLAYER_SIN_111_val = PLAYER_SIN_111.GetFloat(PropertyName.VAL);
PLAYER_VY_115 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_115_val = PLAYER_VY_115.GetFloat(PropertyName.VAL);
TIME_CORR_117 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_117_val = TIME_CORR_117.GetFloat(PropertyName.VAL);
MY_GUN_105.SetFloat(196,PLAYER_Y_109_val+PLAYER_SIN_111_val*1.16f+PLAYER_VY_115_val*TIME_CORR_117_val);
MY_GUN_119 = _world.GetSynonymObject(3254523708);
MY_GUN_121 = _world.GetSynonymObject(3254523708);
temp_122 =MY_GUN_121.GetFloat(165);
PLAYER_Z_123 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_123_val = PLAYER_Z_123.GetFloat(PropertyName.VAL);
PLAYER_TILT_126 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_126_val = PLAYER_TILT_126.GetFloat(PropertyName.VAL);
MY_GUN_119.SetFloat(165,PLAYER_Z_123_val-(PLAYER_TILT_126_val-1f)*0.844f-1.45f);

            startTime3 = Time.time;
            endTime3 = startTime3 + TimeUtils.FramesToTime((int)1f);
            _cursor = 3;
            _coroutine3:
            while (Time.time  < endTime3)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_136 = _world.GetSynonymObject(3254523708);
MY_GUN_138 = _world.GetSynonymObject(3254523708);
temp_139 =MY_GUN_138.GetFloat(195);
PLAYER_X_140 = _world.GetObject(ObjectType.Skill,459);
PLAYER_X_140_val = PLAYER_X_140.GetFloat(PropertyName.VAL);
PLAYER_COS_142 = _world.GetObject(ObjectType.Skill,464);
PLAYER_COS_142_val = PLAYER_COS_142.GetFloat(PropertyName.VAL);
PLAYER_VX_146 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_146_val = PLAYER_VX_146.GetFloat(PropertyName.VAL);
TIME_CORR_148 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_148_val = TIME_CORR_148.GetFloat(PropertyName.VAL);
MY_GUN_136.SetFloat(195,PLAYER_X_140_val+PLAYER_COS_142_val*1.16f+PLAYER_VX_146_val*TIME_CORR_148_val);
MY_GUN_150 = _world.GetSynonymObject(3254523708);
MY_GUN_152 = _world.GetSynonymObject(3254523708);
temp_153 =MY_GUN_152.GetFloat(196);
PLAYER_Y_154 = _world.GetObject(ObjectType.Skill,460);
PLAYER_Y_154_val = PLAYER_Y_154.GetFloat(PropertyName.VAL);
PLAYER_SIN_156 = _world.GetObject(ObjectType.Skill,463);
PLAYER_SIN_156_val = PLAYER_SIN_156.GetFloat(PropertyName.VAL);
PLAYER_VY_160 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_160_val = PLAYER_VY_160.GetFloat(PropertyName.VAL);
TIME_CORR_162 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_162_val = TIME_CORR_162.GetFloat(PropertyName.VAL);
MY_GUN_150.SetFloat(196,PLAYER_Y_154_val+PLAYER_SIN_156_val*1.16f+PLAYER_VY_160_val*TIME_CORR_162_val);
MY_GUN_164 = _world.GetSynonymObject(3254523708);
MY_GUN_166 = _world.GetSynonymObject(3254523708);
temp_167 =MY_GUN_166.GetFloat(165);
PLAYER_Z_168 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_168_val = PLAYER_Z_168.GetFloat(PropertyName.VAL);
PLAYER_TILT_171 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_171_val = PLAYER_TILT_171.GetFloat(PropertyName.VAL);
MY_GUN_164.SetFloat(165,PLAYER_Z_168_val-(PLAYER_TILT_171_val-1f)*0.844f-1.35f);

            startTime4 = Time.time;
            endTime4 = startTime4 + TimeUtils.FramesToTime((int)1f);
            _cursor = 4;
            _coroutine4:
            while (Time.time  < endTime4)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_182 = _world.GetSynonymObject(3254523708);
MY_GUN_182.SetFloat(165,-20f);
MY_GUN_185 = _world.GetSynonymObject(3254523708);
MY_GUN_185.SetFloat(204,1f);

            startTime5 = Time.time;
            endTime5 = startTime5 + TimeUtils.FramesToTime((int)1f);
            _cursor = 5;
            _coroutine5:
            while (Time.time  < endTime5)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_GUN_1;
IAcknexObject MY_GUN_3;
float temp_4;
IAcknexObject PLAYER_X_5;
float PLAYER_X_5_val;
IAcknexObject PLAYER_COS_7;
float PLAYER_COS_7_val;
IAcknexObject PLAYER_VX_11;
float PLAYER_VX_11_val;
IAcknexObject TIME_CORR_13;
float TIME_CORR_13_val;
IAcknexObject MY_GUN_15;
IAcknexObject MY_GUN_17;
float temp_18;
IAcknexObject PLAYER_Y_19;
float PLAYER_Y_19_val;
IAcknexObject PLAYER_SIN_21;
float PLAYER_SIN_21_val;
IAcknexObject PLAYER_VY_25;
float PLAYER_VY_25_val;
IAcknexObject TIME_CORR_27;
float TIME_CORR_27_val;
IAcknexObject MY_GUN_29;
IAcknexObject MY_GUN_31;
float temp_32;
IAcknexObject PLAYER_Z_33;
float PLAYER_Z_33_val;
IAcknexObject PLAYER_TILT_36;
float PLAYER_TILT_36_val;
float startTime1;
float endTime1;
IAcknexObject MY_GUN_46;
IAcknexObject MY_GUN_48;
float temp_49;
IAcknexObject PLAYER_X_50;
float PLAYER_X_50_val;
IAcknexObject PLAYER_COS_52;
float PLAYER_COS_52_val;
IAcknexObject PLAYER_VX_56;
float PLAYER_VX_56_val;
IAcknexObject TIME_CORR_58;
float TIME_CORR_58_val;
IAcknexObject MY_GUN_60;
IAcknexObject MY_GUN_62;
float temp_63;
IAcknexObject PLAYER_Y_64;
float PLAYER_Y_64_val;
IAcknexObject PLAYER_SIN_66;
float PLAYER_SIN_66_val;
IAcknexObject PLAYER_VY_70;
float PLAYER_VY_70_val;
IAcknexObject TIME_CORR_72;
float TIME_CORR_72_val;
IAcknexObject MY_GUN_74;
IAcknexObject MY_GUN_76;
float temp_77;
IAcknexObject PLAYER_Z_78;
float PLAYER_Z_78_val;
IAcknexObject PLAYER_TILT_81;
float PLAYER_TILT_81_val;
float startTime2;
float endTime2;
IAcknexObject MY_GUN_91;
IAcknexObject MY_GUN_93;
float temp_94;
IAcknexObject PLAYER_X_95;
float PLAYER_X_95_val;
IAcknexObject PLAYER_COS_97;
float PLAYER_COS_97_val;
IAcknexObject PLAYER_VX_101;
float PLAYER_VX_101_val;
IAcknexObject TIME_CORR_103;
float TIME_CORR_103_val;
IAcknexObject MY_GUN_105;
IAcknexObject MY_GUN_107;
float temp_108;
IAcknexObject PLAYER_Y_109;
float PLAYER_Y_109_val;
IAcknexObject PLAYER_SIN_111;
float PLAYER_SIN_111_val;
IAcknexObject PLAYER_VY_115;
float PLAYER_VY_115_val;
IAcknexObject TIME_CORR_117;
float TIME_CORR_117_val;
IAcknexObject MY_GUN_119;
IAcknexObject MY_GUN_121;
float temp_122;
IAcknexObject PLAYER_Z_123;
float PLAYER_Z_123_val;
IAcknexObject PLAYER_TILT_126;
float PLAYER_TILT_126_val;
float startTime3;
float endTime3;
IAcknexObject MY_GUN_136;
IAcknexObject MY_GUN_138;
float temp_139;
IAcknexObject PLAYER_X_140;
float PLAYER_X_140_val;
IAcknexObject PLAYER_COS_142;
float PLAYER_COS_142_val;
IAcknexObject PLAYER_VX_146;
float PLAYER_VX_146_val;
IAcknexObject TIME_CORR_148;
float TIME_CORR_148_val;
IAcknexObject MY_GUN_150;
IAcknexObject MY_GUN_152;
float temp_153;
IAcknexObject PLAYER_Y_154;
float PLAYER_Y_154_val;
IAcknexObject PLAYER_SIN_156;
float PLAYER_SIN_156_val;
IAcknexObject PLAYER_VY_160;
float PLAYER_VY_160_val;
IAcknexObject TIME_CORR_162;
float TIME_CORR_162_val;
IAcknexObject MY_GUN_164;
IAcknexObject MY_GUN_166;
float temp_167;
IAcknexObject PLAYER_Z_168;
float PLAYER_Z_168_val;
IAcknexObject PLAYER_TILT_171;
float PLAYER_TILT_171_val;
float startTime4;
float endTime4;
IAcknexObject MY_GUN_182;
IAcknexObject MY_GUN_185;
float startTime5;
float endTime5;
}
public class LOWER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LOWER() {
  }
 public LOWER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
            case 3:
                goto _coroutine3;
            case 4:
                goto _coroutine4;
            case 5:
                goto _coroutine5;
     }
MY_GUN_1 = _world.GetSynonymObject(3254523708);
MY_GUN_3 = _world.GetSynonymObject(3254523708);
temp_4 =MY_GUN_3.GetFloat(195);
PLAYER_X_5 = _world.GetObject(ObjectType.Skill,459);
PLAYER_X_5_val = PLAYER_X_5.GetFloat(PropertyName.VAL);
PLAYER_COS_7 = _world.GetObject(ObjectType.Skill,464);
PLAYER_COS_7_val = PLAYER_COS_7.GetFloat(PropertyName.VAL);
PLAYER_VX_11 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_11_val = PLAYER_VX_11.GetFloat(PropertyName.VAL);
TIME_CORR_13 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_13_val = TIME_CORR_13.GetFloat(PropertyName.VAL);
MY_GUN_1.SetFloat(195,PLAYER_X_5_val+PLAYER_COS_7_val*1.16f+PLAYER_VX_11_val*TIME_CORR_13_val);
MY_GUN_15 = _world.GetSynonymObject(3254523708);
MY_GUN_17 = _world.GetSynonymObject(3254523708);
temp_18 =MY_GUN_17.GetFloat(196);
PLAYER_Y_19 = _world.GetObject(ObjectType.Skill,460);
PLAYER_Y_19_val = PLAYER_Y_19.GetFloat(PropertyName.VAL);
PLAYER_SIN_21 = _world.GetObject(ObjectType.Skill,463);
PLAYER_SIN_21_val = PLAYER_SIN_21.GetFloat(PropertyName.VAL);
PLAYER_VY_25 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_25_val = PLAYER_VY_25.GetFloat(PropertyName.VAL);
TIME_CORR_27 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_27_val = TIME_CORR_27.GetFloat(PropertyName.VAL);
MY_GUN_15.SetFloat(196,PLAYER_Y_19_val+PLAYER_SIN_21_val*1.16f+PLAYER_VY_25_val*TIME_CORR_27_val);
MY_GUN_29 = _world.GetSynonymObject(3254523708);
MY_GUN_31 = _world.GetSynonymObject(3254523708);
temp_32 =MY_GUN_31.GetFloat(165);
PLAYER_Z_33 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_33_val = PLAYER_Z_33.GetFloat(PropertyName.VAL);
PLAYER_TILT_36 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_36_val = PLAYER_TILT_36.GetFloat(PropertyName.VAL);
MY_GUN_29.SetFloat(165,PLAYER_Z_33_val-(PLAYER_TILT_36_val-1f)*0.844f-1.35f);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)1f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_46 = _world.GetSynonymObject(3254523708);
MY_GUN_48 = _world.GetSynonymObject(3254523708);
temp_49 =MY_GUN_48.GetFloat(195);
PLAYER_X_50 = _world.GetObject(ObjectType.Skill,459);
PLAYER_X_50_val = PLAYER_X_50.GetFloat(PropertyName.VAL);
PLAYER_COS_52 = _world.GetObject(ObjectType.Skill,464);
PLAYER_COS_52_val = PLAYER_COS_52.GetFloat(PropertyName.VAL);
PLAYER_VX_56 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_56_val = PLAYER_VX_56.GetFloat(PropertyName.VAL);
TIME_CORR_58 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_58_val = TIME_CORR_58.GetFloat(PropertyName.VAL);
MY_GUN_46.SetFloat(195,PLAYER_X_50_val+PLAYER_COS_52_val*1.16f+PLAYER_VX_56_val*TIME_CORR_58_val);
MY_GUN_60 = _world.GetSynonymObject(3254523708);
MY_GUN_62 = _world.GetSynonymObject(3254523708);
temp_63 =MY_GUN_62.GetFloat(196);
PLAYER_Y_64 = _world.GetObject(ObjectType.Skill,460);
PLAYER_Y_64_val = PLAYER_Y_64.GetFloat(PropertyName.VAL);
PLAYER_SIN_66 = _world.GetObject(ObjectType.Skill,463);
PLAYER_SIN_66_val = PLAYER_SIN_66.GetFloat(PropertyName.VAL);
PLAYER_VY_70 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_70_val = PLAYER_VY_70.GetFloat(PropertyName.VAL);
TIME_CORR_72 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_72_val = TIME_CORR_72.GetFloat(PropertyName.VAL);
MY_GUN_60.SetFloat(196,PLAYER_Y_64_val+PLAYER_SIN_66_val*1.16f+PLAYER_VY_70_val*TIME_CORR_72_val);
MY_GUN_74 = _world.GetSynonymObject(3254523708);
MY_GUN_76 = _world.GetSynonymObject(3254523708);
temp_77 =MY_GUN_76.GetFloat(165);
PLAYER_Z_78 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_78_val = PLAYER_Z_78.GetFloat(PropertyName.VAL);
PLAYER_TILT_81 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_81_val = PLAYER_TILT_81.GetFloat(PropertyName.VAL);
MY_GUN_74.SetFloat(165,PLAYER_Z_78_val-(PLAYER_TILT_81_val-1f)*0.844f-1.45f);

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.FramesToTime((int)1f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_91 = _world.GetSynonymObject(3254523708);
MY_GUN_93 = _world.GetSynonymObject(3254523708);
temp_94 =MY_GUN_93.GetFloat(195);
PLAYER_X_95 = _world.GetObject(ObjectType.Skill,459);
PLAYER_X_95_val = PLAYER_X_95.GetFloat(PropertyName.VAL);
PLAYER_COS_97 = _world.GetObject(ObjectType.Skill,464);
PLAYER_COS_97_val = PLAYER_COS_97.GetFloat(PropertyName.VAL);
PLAYER_VX_101 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_101_val = PLAYER_VX_101.GetFloat(PropertyName.VAL);
TIME_CORR_103 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_103_val = TIME_CORR_103.GetFloat(PropertyName.VAL);
MY_GUN_91.SetFloat(195,PLAYER_X_95_val+PLAYER_COS_97_val*1.16f+PLAYER_VX_101_val*TIME_CORR_103_val);
MY_GUN_105 = _world.GetSynonymObject(3254523708);
MY_GUN_107 = _world.GetSynonymObject(3254523708);
temp_108 =MY_GUN_107.GetFloat(196);
PLAYER_Y_109 = _world.GetObject(ObjectType.Skill,460);
PLAYER_Y_109_val = PLAYER_Y_109.GetFloat(PropertyName.VAL);
PLAYER_SIN_111 = _world.GetObject(ObjectType.Skill,463);
PLAYER_SIN_111_val = PLAYER_SIN_111.GetFloat(PropertyName.VAL);
PLAYER_VY_115 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_115_val = PLAYER_VY_115.GetFloat(PropertyName.VAL);
TIME_CORR_117 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_117_val = TIME_CORR_117.GetFloat(PropertyName.VAL);
MY_GUN_105.SetFloat(196,PLAYER_Y_109_val+PLAYER_SIN_111_val*1.16f+PLAYER_VY_115_val*TIME_CORR_117_val);
MY_GUN_119 = _world.GetSynonymObject(3254523708);
MY_GUN_121 = _world.GetSynonymObject(3254523708);
temp_122 =MY_GUN_121.GetFloat(165);
PLAYER_Z_123 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_123_val = PLAYER_Z_123.GetFloat(PropertyName.VAL);
PLAYER_TILT_126 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_126_val = PLAYER_TILT_126.GetFloat(PropertyName.VAL);
MY_GUN_119.SetFloat(165,PLAYER_Z_123_val-(PLAYER_TILT_126_val-1f)*0.844f-1.6f);

            startTime3 = Time.time;
            endTime3 = startTime3 + TimeUtils.FramesToTime((int)1f);
            _cursor = 3;
            _coroutine3:
            while (Time.time  < endTime3)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_136 = _world.GetSynonymObject(3254523708);
MY_GUN_138 = _world.GetSynonymObject(3254523708);
temp_139 =MY_GUN_138.GetFloat(195);
PLAYER_X_140 = _world.GetObject(ObjectType.Skill,459);
PLAYER_X_140_val = PLAYER_X_140.GetFloat(PropertyName.VAL);
PLAYER_COS_142 = _world.GetObject(ObjectType.Skill,464);
PLAYER_COS_142_val = PLAYER_COS_142.GetFloat(PropertyName.VAL);
PLAYER_VX_146 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_146_val = PLAYER_VX_146.GetFloat(PropertyName.VAL);
TIME_CORR_148 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_148_val = TIME_CORR_148.GetFloat(PropertyName.VAL);
MY_GUN_136.SetFloat(195,PLAYER_X_140_val+PLAYER_COS_142_val*1.16f+PLAYER_VX_146_val*TIME_CORR_148_val);
MY_GUN_150 = _world.GetSynonymObject(3254523708);
MY_GUN_152 = _world.GetSynonymObject(3254523708);
temp_153 =MY_GUN_152.GetFloat(196);
PLAYER_Y_154 = _world.GetObject(ObjectType.Skill,460);
PLAYER_Y_154_val = PLAYER_Y_154.GetFloat(PropertyName.VAL);
PLAYER_SIN_156 = _world.GetObject(ObjectType.Skill,463);
PLAYER_SIN_156_val = PLAYER_SIN_156.GetFloat(PropertyName.VAL);
PLAYER_VY_160 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_160_val = PLAYER_VY_160.GetFloat(PropertyName.VAL);
TIME_CORR_162 = _world.GetObject(ObjectType.Skill,569);
TIME_CORR_162_val = TIME_CORR_162.GetFloat(PropertyName.VAL);
MY_GUN_150.SetFloat(196,PLAYER_Y_154_val+PLAYER_SIN_156_val*1.16f+PLAYER_VY_160_val*TIME_CORR_162_val);
MY_GUN_164 = _world.GetSynonymObject(3254523708);
MY_GUN_166 = _world.GetSynonymObject(3254523708);
temp_167 =MY_GUN_166.GetFloat(165);
PLAYER_Z_168 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_168_val = PLAYER_Z_168.GetFloat(PropertyName.VAL);
PLAYER_TILT_171 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_171_val = PLAYER_TILT_171.GetFloat(PropertyName.VAL);
MY_GUN_164.SetFloat(165,PLAYER_Z_168_val-(PLAYER_TILT_171_val-1f)*0.844f-1.9f);

            startTime4 = Time.time;
            endTime4 = startTime4 + TimeUtils.FramesToTime((int)1f);
            _cursor = 4;
            _coroutine4:
            while (Time.time  < endTime4)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_182 = _world.GetSynonymObject(3254523708);
MY_GUN_182.SetFloat(165,-20f);
MY_GUN_185 = _world.GetSynonymObject(3254523708);
MY_GUN_185.SetFloat(204,1f);

            startTime5 = Time.time;
            endTime5 = startTime5 + TimeUtils.FramesToTime((int)1f);
            _cursor = 5;
            _coroutine5:
            while (Time.time  < endTime5)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_GUN_1;
IAcknexObject MY_GUN_3;
float temp_4;
IAcknexObject PLAYER_X_5;
float PLAYER_X_5_val;
IAcknexObject PLAYER_COS_7;
float PLAYER_COS_7_val;
IAcknexObject PLAYER_VX_11;
float PLAYER_VX_11_val;
IAcknexObject TIME_CORR_13;
float TIME_CORR_13_val;
IAcknexObject MY_GUN_15;
IAcknexObject MY_GUN_17;
float temp_18;
IAcknexObject PLAYER_Y_19;
float PLAYER_Y_19_val;
IAcknexObject PLAYER_SIN_21;
float PLAYER_SIN_21_val;
IAcknexObject PLAYER_VY_25;
float PLAYER_VY_25_val;
IAcknexObject TIME_CORR_27;
float TIME_CORR_27_val;
IAcknexObject MY_GUN_29;
IAcknexObject MY_GUN_31;
float temp_32;
IAcknexObject PLAYER_Z_33;
float PLAYER_Z_33_val;
IAcknexObject PLAYER_TILT_36;
float PLAYER_TILT_36_val;
float startTime1;
float endTime1;
IAcknexObject MY_GUN_46;
IAcknexObject MY_GUN_48;
float temp_49;
IAcknexObject PLAYER_X_50;
float PLAYER_X_50_val;
IAcknexObject PLAYER_COS_52;
float PLAYER_COS_52_val;
IAcknexObject PLAYER_VX_56;
float PLAYER_VX_56_val;
IAcknexObject TIME_CORR_58;
float TIME_CORR_58_val;
IAcknexObject MY_GUN_60;
IAcknexObject MY_GUN_62;
float temp_63;
IAcknexObject PLAYER_Y_64;
float PLAYER_Y_64_val;
IAcknexObject PLAYER_SIN_66;
float PLAYER_SIN_66_val;
IAcknexObject PLAYER_VY_70;
float PLAYER_VY_70_val;
IAcknexObject TIME_CORR_72;
float TIME_CORR_72_val;
IAcknexObject MY_GUN_74;
IAcknexObject MY_GUN_76;
float temp_77;
IAcknexObject PLAYER_Z_78;
float PLAYER_Z_78_val;
IAcknexObject PLAYER_TILT_81;
float PLAYER_TILT_81_val;
float startTime2;
float endTime2;
IAcknexObject MY_GUN_91;
IAcknexObject MY_GUN_93;
float temp_94;
IAcknexObject PLAYER_X_95;
float PLAYER_X_95_val;
IAcknexObject PLAYER_COS_97;
float PLAYER_COS_97_val;
IAcknexObject PLAYER_VX_101;
float PLAYER_VX_101_val;
IAcknexObject TIME_CORR_103;
float TIME_CORR_103_val;
IAcknexObject MY_GUN_105;
IAcknexObject MY_GUN_107;
float temp_108;
IAcknexObject PLAYER_Y_109;
float PLAYER_Y_109_val;
IAcknexObject PLAYER_SIN_111;
float PLAYER_SIN_111_val;
IAcknexObject PLAYER_VY_115;
float PLAYER_VY_115_val;
IAcknexObject TIME_CORR_117;
float TIME_CORR_117_val;
IAcknexObject MY_GUN_119;
IAcknexObject MY_GUN_121;
float temp_122;
IAcknexObject PLAYER_Z_123;
float PLAYER_Z_123_val;
IAcknexObject PLAYER_TILT_126;
float PLAYER_TILT_126_val;
float startTime3;
float endTime3;
IAcknexObject MY_GUN_136;
IAcknexObject MY_GUN_138;
float temp_139;
IAcknexObject PLAYER_X_140;
float PLAYER_X_140_val;
IAcknexObject PLAYER_COS_142;
float PLAYER_COS_142_val;
IAcknexObject PLAYER_VX_146;
float PLAYER_VX_146_val;
IAcknexObject TIME_CORR_148;
float TIME_CORR_148_val;
IAcknexObject MY_GUN_150;
IAcknexObject MY_GUN_152;
float temp_153;
IAcknexObject PLAYER_Y_154;
float PLAYER_Y_154_val;
IAcknexObject PLAYER_SIN_156;
float PLAYER_SIN_156_val;
IAcknexObject PLAYER_VY_160;
float PLAYER_VY_160_val;
IAcknexObject TIME_CORR_162;
float TIME_CORR_162_val;
IAcknexObject MY_GUN_164;
IAcknexObject MY_GUN_166;
float temp_167;
IAcknexObject PLAYER_Z_168;
float PLAYER_Z_168_val;
IAcknexObject PLAYER_TILT_171;
float PLAYER_TILT_171_val;
float startTime4;
float endTime4;
IAcknexObject MY_GUN_182;
IAcknexObject MY_GUN_185;
float startTime5;
float endTime5;
}
public class TARGETON : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TARGETON() {
  }
 public TARGETON(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
TARGETOVL_0 = _world.AcknexObject.GetAcknexObject(2055106693);
_world.AcknexObject.SetAcknexObject(161,TARGETOVL_0);
//Unknown keyword: 
      return false;
  }
IAcknexObject TARGETOVL_0;
}
public class TARGETOFF : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TARGETOFF() {
  }
 public TARGETOFF(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
_world.AcknexObject.SetAcknexObject(161,null);
//Unknown keyword: 
      return false;
  }
}
public class SELECTNONE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SELECTNONE() {
  }
 public SELECTNONE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
     }
WEAPONSEL_1 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_1.SetFloat(231,1f);
_world.AcknexObject.SetAcknexObject(78,null);
_world.AcknexObject.SetAcknexObject(97,null);
_world.AcknexObject.SetAcknexObject(104,null);
_world.AcknexObject.SetAcknexObject(39,null);
_world.AcknexObject.SetAcknexObject(92,null);
_world.AcknexObject.SetAcknexObject(40,null);
_world.AcknexObject.SetAcknexObject(41,null);
_world.AcknexObject.SetAcknexObject(42,null);
_world.AcknexObject.SetAcknexObject(43,null);
_world.AcknexObject.SetAcknexObject(44,null);
WAITFIRE:

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)4f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
GUNFIRING_24 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_24_val = GUNFIRING_24.GetFloat(PropertyName.VAL);
if (GUNFIRING_24_val != 0f)
{
goto WAITFIRE;
}
MY_GUN_26 = _world.GetSynonymObject(3254523708);
if (MY_GUN_26 == null)
{
goto NOGUN;
}
MY_GUN_29 = _world.GetSynonymObject(3254523708);
temp_30 =MY_GUN_29.GetFloat(204);
if (temp_30 != 1f)
{
goto WAITFIRE;
}
NOGUN:
{
            var enumerator = new TARGETOFF();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new SHOWAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MAP_MODE_32 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_32.SetFloat(231,0f);
PDATEXT_35 = _world.AcknexObject.GetAcknexObject(3042501159);
PDATEXT_35.SetFloat(205,0f);
_world.AcknexObject.SetAcknexObject(158,null);
MY_GUN_40 = _world.GetSynonymObject(3254523708);
if (MY_GUN_40 == null)
{
goto CONT;
}
MY_GUN_43 = _world.GetSynonymObject(3254523708);
MY_GUN_43.SetFloat(204,0f);
{
            var enumerator = new LOWER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WAITING:

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.FramesToTime((int)16f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_47 = _world.GetSynonymObject(3254523708);
temp_48 =MY_GUN_47.GetFloat(204);
if (temp_48 < 1f)
{
goto WAITING;
}
_world.SetSynonymObject(3254523708,null);
RENDER_MODE_52 = _world.GetObject(ObjectType.Skill,361);
RENDER_MODE_52.SetFloat(231,1f);
CONT:
SELECTTRICORDER_53 = _world.AcknexObject.GetAcknexObject(4185607035);
_world.AcknexObject.SetAcknexObject(104,SELECTTRICORDER_53);
SELECTNONE_55 = _world.AcknexObject.GetAcknexObject(1879623005);
_world.AcknexObject.SetAcknexObject(39,SELECTNONE_55);
SELECTNONE_57 = _world.AcknexObject.GetAcknexObject(1879623005);
_world.AcknexObject.SetAcknexObject(92,SELECTNONE_57);
SELECTMP5_59 = _world.AcknexObject.GetAcknexObject(3831323359);
_world.AcknexObject.SetAcknexObject(40,SELECTMP5_59);
SELECTMP5BURST_61 = _world.AcknexObject.GetAcknexObject(120038031);
_world.AcknexObject.SetAcknexObject(41,SELECTMP5BURST_61);
SELECTGRANADE_63 = _world.AcknexObject.GetAcknexObject(677375039);
_world.AcknexObject.SetAcknexObject(42,SELECTGRANADE_63);
SELECTSTINGER_65 = _world.AcknexObject.GetAcknexObject(3377853513);
_world.AcknexObject.SetAcknexObject(43,SELECTSTINGER_65);
SELECTQUANTUM_67 = _world.AcknexObject.GetAcknexObject(824580280);
_world.AcknexObject.SetAcknexObject(44,SELECTQUANTUM_67);
GUN_ON_70 = _world.GetObject(ObjectType.Skill,3014382675);
GUN_ON_70.SetFloat(231,0f);
PLAYER_RESULT_72 = _world.GetObject(ObjectType.Skill,1861765784);
PLAYER_RESULT_72.SetFloat(231,-1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject WEAPONSEL_1;
float startTime1;
float endTime1;
IAcknexObject GUNFIRING_24;
float GUNFIRING_24_val;
IAcknexObject MY_GUN_26;
IAcknexObject MY_GUN_29;
float temp_30;
IAcknexObject MAP_MODE_32;
IAcknexObject PDATEXT_35;
IAcknexObject MY_GUN_40;
IAcknexObject MY_GUN_43;
float startTime2;
float endTime2;
IAcknexObject MY_GUN_47;
float temp_48;
IAcknexObject RENDER_MODE_52;
IAcknexObject SELECTTRICORDER_53;
IAcknexObject SELECTNONE_55;
IAcknexObject SELECTNONE_57;
IAcknexObject SELECTMP5_59;
IAcknexObject SELECTMP5BURST_61;
IAcknexObject SELECTGRANADE_63;
IAcknexObject SELECTSTINGER_65;
IAcknexObject SELECTQUANTUM_67;
IAcknexObject GUN_ON_70;
IAcknexObject PLAYER_RESULT_72;
}
public class SELECTTRICORDER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SELECTTRICORDER() {
  }
 public SELECTTRICORDER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
            case 3:
                goto _coroutine3;
     }
PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat(PropertyName.VAL);
if (PLAYER_HEALTH_1_val < 0.1f)
{
return false;
}
MAP_MODE_3 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_3_val = MAP_MODE_3.GetFloat(PropertyName.VAL);
if (MAP_MODE_3_val > 0f)
{
{
            var enumerator = new SELECTNONE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
HAS_PDA_5 = _world.GetObject(ObjectType.Skill,1205039005);
HAS_PDA_5_val = HAS_PDA_5.GetFloat(PropertyName.VAL);
if (HAS_PDA_5_val != 0f)
{
goto HASGOT;
}
WRN04STR_6 = _world.AcknexObject.GetAcknexObject(665781601);
_world.SetSynonymObject(361798934,WRN04STR_6);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
HASGOT:
WEAPONSEL_9 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_9.SetFloat(231,1f);
_world.AcknexObject.SetAcknexObject(78,null);
_world.AcknexObject.SetAcknexObject(97,null);
_world.AcknexObject.SetAcknexObject(104,null);
_world.AcknexObject.SetAcknexObject(39,null);
_world.AcknexObject.SetAcknexObject(92,null);
_world.AcknexObject.SetAcknexObject(40,null);
_world.AcknexObject.SetAcknexObject(41,null);
_world.AcknexObject.SetAcknexObject(42,null);
_world.AcknexObject.SetAcknexObject(43,null);
_world.AcknexObject.SetAcknexObject(44,null);
WAITFIRE:

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)4f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
GUNFIRING_32 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_32_val = GUNFIRING_32.GetFloat(PropertyName.VAL);
if (GUNFIRING_32_val != 0f)
{
goto WAITFIRE;
}
MY_GUN_34 = _world.GetSynonymObject(3254523708);
if (MY_GUN_34 == null)
{
goto NOGUN;
}
MY_GUN_37 = _world.GetSynonymObject(3254523708);
temp_38 =MY_GUN_37.GetFloat(204);
if (temp_38 != 1f)
{
goto WAITFIRE;
}
NOGUN:
{
            var enumerator = new TARGETOFF();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new SHOWAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MAP_MODE_40 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_40.SetFloat(231,0f);
_world.AcknexObject.SetAcknexObject(158,null);
_world.AcknexObject.SetAcknexObject(78,null);
_world.AcknexObject.SetAcknexObject(97,null);
MY_GUN_49 = _world.GetSynonymObject(3254523708);
if (MY_GUN_49 == null)
{
goto CONT;
}
MY_GUN_52 = _world.GetSynonymObject(3254523708);
MY_GUN_52.SetFloat(204,0f);
{
            var enumerator = new LOWER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WAITING:

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.FramesToTime((int)8f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_56 = _world.GetSynonymObject(3254523708);
temp_57 =MY_GUN_56.GetFloat(204);
if (temp_57 < 1f)
{
goto WAITING;
}
CONT:
TRICACT_58 = _world.AcknexObject.GetAcknexObject(175205335);
_world.SetSynonymObject(3254523708,TRICACT_58);
MY_GUN_62 = _world.GetSynonymObject(3254523708);
MY_GUN_62.SetFloat(204,0f);
{
            var enumerator = new RAISE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WAITING1:

            startTime3 = Time.time;
            endTime3 = startTime3 + TimeUtils.FramesToTime((int)1f);
            _cursor = 3;
            _coroutine3:
            while (Time.time  < endTime3)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_66 = _world.GetSynonymObject(3254523708);
temp_67 =MY_GUN_66.GetFloat(204);
if (temp_67 < 1f)
{
goto WAITING1;
}
TRIC01SND_68 = _world.AcknexObject.GetAcknexObject(1798154821);
_world.PlaySound(TRIC01SND_68,0.5f, null);
MAP_LAYER_71 = _world.GetObject(ObjectType.Skill,381);
MAP_LAYER_71.SetFloat(231,14f);
MAP_EDGE_X1_73 = _world.GetObject(ObjectType.Skill,375);
MAP_EDGE_X1_73.SetFloat(231,77f);
MAP_EDGE_X2_75 = _world.GetObject(ObjectType.Skill,376);
MAP_EDGE_X2_75.SetFloat(231,237f);
MAP_EDGE_Y1_77 = _world.GetObject(ObjectType.Skill,377);
MAP_EDGE_Y1_77.SetFloat(231,69f);
MAP_EDGE_Y2_79 = _world.GetObject(ObjectType.Skill,378);
MAP_EDGE_Y2_79.SetFloat(231,251f);
RENDER_MODE_81 = _world.GetObject(ObjectType.Skill,361);
RENDER_MODE_81.SetFloat(231,1f);
MAP_MODE_83 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_83.SetFloat(231,0.5f);
TRIC01OVL_84 = _world.AcknexObject.GetAcknexObject(1798150737);
_world.AcknexObject.SetAcknexObject(158,TRIC01OVL_84);
SELECTTRICORDER_87 = _world.AcknexObject.GetAcknexObject(4185607035);
_world.AcknexObject.SetAcknexObject(104,SELECTTRICORDER_87);
SELECTNONE_89 = _world.AcknexObject.GetAcknexObject(1879623005);
_world.AcknexObject.SetAcknexObject(39,SELECTNONE_89);
SELECTNONE_91 = _world.AcknexObject.GetAcknexObject(1879623005);
_world.AcknexObject.SetAcknexObject(92,SELECTNONE_91);
SELECTMP5_93 = _world.AcknexObject.GetAcknexObject(3831323359);
_world.AcknexObject.SetAcknexObject(40,SELECTMP5_93);
SELECTMP5BURST_95 = _world.AcknexObject.GetAcknexObject(120038031);
_world.AcknexObject.SetAcknexObject(41,SELECTMP5BURST_95);
SELECTGRANADE_97 = _world.AcknexObject.GetAcknexObject(677375039);
_world.AcknexObject.SetAcknexObject(42,SELECTGRANADE_97);
SELECTSTINGER_99 = _world.AcknexObject.GetAcknexObject(3377853513);
_world.AcknexObject.SetAcknexObject(43,SELECTSTINGER_99);
SELECTQUANTUM_101 = _world.AcknexObject.GetAcknexObject(824580280);
_world.AcknexObject.SetAcknexObject(44,SELECTQUANTUM_101);
GUN_ON_104 = _world.GetObject(ObjectType.Skill,3014382675);
GUN_ON_104.SetFloat(231,1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject PLAYER_HEALTH_1;
float PLAYER_HEALTH_1_val;
IAcknexObject MAP_MODE_3;
float MAP_MODE_3_val;
IAcknexObject HAS_PDA_5;
float HAS_PDA_5_val;
IAcknexObject WRN04STR_6;
IAcknexObject WEAPONSEL_9;
float startTime1;
float endTime1;
IAcknexObject GUNFIRING_32;
float GUNFIRING_32_val;
IAcknexObject MY_GUN_34;
IAcknexObject MY_GUN_37;
float temp_38;
IAcknexObject MAP_MODE_40;
IAcknexObject MY_GUN_49;
IAcknexObject MY_GUN_52;
float startTime2;
float endTime2;
IAcknexObject MY_GUN_56;
float temp_57;
IAcknexObject TRICACT_58;
IAcknexObject MY_GUN_62;
float startTime3;
float endTime3;
IAcknexObject MY_GUN_66;
float temp_67;
IAcknexObject TRIC01SND_68;
IAcknexObject MAP_LAYER_71;
IAcknexObject MAP_EDGE_X1_73;
IAcknexObject MAP_EDGE_X2_75;
IAcknexObject MAP_EDGE_Y1_77;
IAcknexObject MAP_EDGE_Y2_79;
IAcknexObject RENDER_MODE_81;
IAcknexObject MAP_MODE_83;
IAcknexObject TRIC01OVL_84;
IAcknexObject SELECTTRICORDER_87;
IAcknexObject SELECTNONE_89;
IAcknexObject SELECTNONE_91;
IAcknexObject SELECTMP5_93;
IAcknexObject SELECTMP5BURST_95;
IAcknexObject SELECTGRANADE_97;
IAcknexObject SELECTSTINGER_99;
IAcknexObject SELECTQUANTUM_101;
IAcknexObject GUN_ON_104;
}
public class SELECTMP5 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SELECTMP5() {
  }
 public SELECTMP5(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
            case 3:
                goto _coroutine3;
     }
PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat(PropertyName.VAL);
if (PLAYER_HEALTH_1_val < 0.1f)
{
return false;
}
WEAPONSEL_3 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_3_val = WEAPONSEL_3.GetFloat(PropertyName.VAL);
if (WEAPONSEL_3_val == 2f)
{
goto HASGOT;
}
HAS_MP5_5 = _world.GetObject(ObjectType.Skill,1205036122);
HAS_MP5_5_val = HAS_MP5_5.GetFloat(PropertyName.VAL);
if (HAS_MP5_5_val != 0f)
{
goto HASGOT;
}
WRN03STR_6 = _world.AcknexObject.GetAcknexObject(665745664);
_world.SetSynonymObject(361798934,WRN03STR_6);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
HASGOT:
WEAPONSEL_9 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_9.SetFloat(231,2f);
_world.AcknexObject.SetAcknexObject(78,null);
_world.AcknexObject.SetAcknexObject(97,null);
_world.AcknexObject.SetAcknexObject(104,null);
_world.AcknexObject.SetAcknexObject(39,null);
_world.AcknexObject.SetAcknexObject(92,null);
_world.AcknexObject.SetAcknexObject(42,null);
_world.AcknexObject.SetAcknexObject(43,null);
_world.AcknexObject.SetAcknexObject(44,null);
WAITFIRE:

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)4f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
GUNFIRING_28 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_28_val = GUNFIRING_28.GetFloat(PropertyName.VAL);
if (GUNFIRING_28_val != 0f)
{
goto WAITFIRE;
}
MY_GUN_30 = _world.GetSynonymObject(3254523708);
if (MY_GUN_30 == null)
{
goto NOGUN;
}
MY_GUN_33 = _world.GetSynonymObject(3254523708);
temp_34 =MY_GUN_33.GetFloat(204);
if (temp_34 != 1f)
{
goto WAITFIRE;
}
NOGUN:
{
            var enumerator = new TARGETON();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new SHOWAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MAP_MODE_36 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_36.SetFloat(231,0f);
_world.AcknexObject.SetAcknexObject(158,null);
MY_GUN_41 = _world.GetSynonymObject(3254523708);
if (MY_GUN_41 == null)
{
goto CONT;
}
MY_GUN_44 = _world.GetSynonymObject(3254523708);
MY_GUN_44.SetFloat(204,0f);
{
            var enumerator = new LOWER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WAITING:

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.FramesToTime((int)8f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_48 = _world.GetSynonymObject(3254523708);
temp_49 =MY_GUN_48.GetFloat(204);
if (temp_49 < 1f)
{
goto WAITING;
}
CONT:
MP5ACT_50 = _world.AcknexObject.GetAcknexObject(3242333943);
_world.SetSynonymObject(3254523708,MP5ACT_50);
MY_GUN_54 = _world.GetSynonymObject(3254523708);
MY_GUN_54.SetFloat(204,0f);
{
            var enumerator = new RAISE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WAITING1:

            startTime3 = Time.time;
            endTime3 = startTime3 + TimeUtils.FramesToTime((int)1f);
            _cursor = 3;
            _coroutine3:
            while (Time.time  < endTime3)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_58 = _world.GetSynonymObject(3254523708);
temp_59 =MY_GUN_58.GetFloat(204);
if (temp_59 < 1f)
{
goto WAITING1;
}
MP5_01OVL_60 = _world.AcknexObject.GetAcknexObject(2701560848);
_world.AcknexObject.SetAcknexObject(158,MP5_01OVL_60);
RENDER_MODE_64 = _world.GetObject(ObjectType.Skill,361);
RENDER_MODE_64.SetFloat(231,1f);
FIRE_65 = _world.AcknexObject.GetAcknexObject(2089072467);
_world.AcknexObject.SetAcknexObject(78,FIRE_65);
FIRE_67 = _world.AcknexObject.GetAcknexObject(2089072467);
_world.AcknexObject.SetAcknexObject(97,FIRE_67);
GUN_ON_70 = _world.GetObject(ObjectType.Skill,3014382675);
GUN_ON_70.SetFloat(231,1f);
MP_501SND_71 = _world.AcknexObject.GetAcknexObject(3759925572);
_world.PlaySound(MP_501SND_71,0.5f, null);
SELECTTRICORDER_73 = _world.AcknexObject.GetAcknexObject(4185607035);
_world.AcknexObject.SetAcknexObject(104,SELECTTRICORDER_73);
SELECTNONE_75 = _world.AcknexObject.GetAcknexObject(1879623005);
_world.AcknexObject.SetAcknexObject(39,SELECTNONE_75);
SELECTNONE_77 = _world.AcknexObject.GetAcknexObject(1879623005);
_world.AcknexObject.SetAcknexObject(92,SELECTNONE_77);
SELECTMP5_79 = _world.AcknexObject.GetAcknexObject(3831323359);
_world.AcknexObject.SetAcknexObject(40,SELECTMP5_79);
SELECTMP5BURST_81 = _world.AcknexObject.GetAcknexObject(120038031);
_world.AcknexObject.SetAcknexObject(41,SELECTMP5BURST_81);
SELECTGRANADE_83 = _world.AcknexObject.GetAcknexObject(677375039);
_world.AcknexObject.SetAcknexObject(42,SELECTGRANADE_83);
SELECTSTINGER_85 = _world.AcknexObject.GetAcknexObject(3377853513);
_world.AcknexObject.SetAcknexObject(43,SELECTSTINGER_85);
SELECTQUANTUM_87 = _world.AcknexObject.GetAcknexObject(824580280);
_world.AcknexObject.SetAcknexObject(44,SELECTQUANTUM_87);
//Unknown keyword: 
      return false;
  }
IAcknexObject PLAYER_HEALTH_1;
float PLAYER_HEALTH_1_val;
IAcknexObject WEAPONSEL_3;
float WEAPONSEL_3_val;
IAcknexObject HAS_MP5_5;
float HAS_MP5_5_val;
IAcknexObject WRN03STR_6;
IAcknexObject WEAPONSEL_9;
float startTime1;
float endTime1;
IAcknexObject GUNFIRING_28;
float GUNFIRING_28_val;
IAcknexObject MY_GUN_30;
IAcknexObject MY_GUN_33;
float temp_34;
IAcknexObject MAP_MODE_36;
IAcknexObject MY_GUN_41;
IAcknexObject MY_GUN_44;
float startTime2;
float endTime2;
IAcknexObject MY_GUN_48;
float temp_49;
IAcknexObject MP5ACT_50;
IAcknexObject MY_GUN_54;
float startTime3;
float endTime3;
IAcknexObject MY_GUN_58;
float temp_59;
IAcknexObject MP5_01OVL_60;
IAcknexObject RENDER_MODE_64;
IAcknexObject FIRE_65;
IAcknexObject FIRE_67;
IAcknexObject GUN_ON_70;
IAcknexObject MP_501SND_71;
IAcknexObject SELECTTRICORDER_73;
IAcknexObject SELECTNONE_75;
IAcknexObject SELECTNONE_77;
IAcknexObject SELECTMP5_79;
IAcknexObject SELECTMP5BURST_81;
IAcknexObject SELECTGRANADE_83;
IAcknexObject SELECTSTINGER_85;
IAcknexObject SELECTQUANTUM_87;
}
public class SELECTMP5BURST : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SELECTMP5BURST() {
  }
 public SELECTMP5BURST(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
            case 3:
                goto _coroutine3;
     }
PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat(PropertyName.VAL);
if (PLAYER_HEALTH_1_val < 0.1f)
{
return false;
}
WEAPONSEL_3 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_3_val = WEAPONSEL_3.GetFloat(PropertyName.VAL);
if (WEAPONSEL_3_val == 2f)
{
goto HASGOT;
}
HAS_MP5_5 = _world.GetObject(ObjectType.Skill,1205036122);
HAS_MP5_5_val = HAS_MP5_5.GetFloat(PropertyName.VAL);
if (HAS_MP5_5_val != 0f)
{
goto HASGOT;
}
WRN03STR_6 = _world.AcknexObject.GetAcknexObject(665745664);
_world.SetSynonymObject(361798934,WRN03STR_6);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
HASGOT:
WEAPONSEL_9 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_9.SetFloat(231,2f);
_world.AcknexObject.SetAcknexObject(78,null);
_world.AcknexObject.SetAcknexObject(97,null);
_world.AcknexObject.SetAcknexObject(104,null);
_world.AcknexObject.SetAcknexObject(39,null);
_world.AcknexObject.SetAcknexObject(92,null);
_world.AcknexObject.SetAcknexObject(40,null);
_world.AcknexObject.SetAcknexObject(41,null);
_world.AcknexObject.SetAcknexObject(42,null);
_world.AcknexObject.SetAcknexObject(43,null);
_world.AcknexObject.SetAcknexObject(44,null);
WAITFIRE:

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)4f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
GUNFIRING_32 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_32_val = GUNFIRING_32.GetFloat(PropertyName.VAL);
if (GUNFIRING_32_val != 0f)
{
goto WAITFIRE;
}
MY_GUN_34 = _world.GetSynonymObject(3254523708);
if (MY_GUN_34 == null)
{
goto NOGUN;
}
MY_GUN_37 = _world.GetSynonymObject(3254523708);
temp_38 =MY_GUN_37.GetFloat(204);
if (temp_38 != 1f)
{
goto WAITFIRE;
}
NOGUN:
{
            var enumerator = new TARGETON();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new SHOWAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MAP_MODE_40 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_40.SetFloat(231,0f);
_world.AcknexObject.SetAcknexObject(158,null);
MY_GUN_45 = _world.GetSynonymObject(3254523708);
if (MY_GUN_45 == null)
{
goto CONT;
}
MY_GUN_48 = _world.GetSynonymObject(3254523708);
MY_GUN_48.SetFloat(204,0f);
{
            var enumerator = new LOWER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WAITING:

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.FramesToTime((int)8f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_52 = _world.GetSynonymObject(3254523708);
temp_53 =MY_GUN_52.GetFloat(204);
if (temp_53 < 1f)
{
goto WAITING;
}
CONT:
MP5ACT_54 = _world.AcknexObject.GetAcknexObject(3242333943);
_world.SetSynonymObject(3254523708,MP5ACT_54);
MY_GUN_58 = _world.GetSynonymObject(3254523708);
MY_GUN_58.SetFloat(204,0f);
{
            var enumerator = new RAISE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WAITING1:

            startTime3 = Time.time;
            endTime3 = startTime3 + TimeUtils.FramesToTime((int)1f);
            _cursor = 3;
            _coroutine3:
            while (Time.time  < endTime3)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_62 = _world.GetSynonymObject(3254523708);
temp_63 =MY_GUN_62.GetFloat(204);
if (temp_63 < 1f)
{
goto WAITING1;
}
MP5_01OVL_64 = _world.AcknexObject.GetAcknexObject(2701560848);
_world.AcknexObject.SetAcknexObject(158,MP5_01OVL_64);
BURST_67 = _world.AcknexObject.GetAcknexObject(215570781);
_world.AcknexObject.SetAcknexObject(78,BURST_67);
BURST_69 = _world.AcknexObject.GetAcknexObject(215570781);
_world.AcknexObject.SetAcknexObject(97,BURST_69);
GUN_ON_72 = _world.GetObject(ObjectType.Skill,3014382675);
GUN_ON_72.SetFloat(231,1f);
RENDER_MODE_74 = _world.GetObject(ObjectType.Skill,361);
RENDER_MODE_74.SetFloat(231,1f);
MP_501SND_75 = _world.AcknexObject.GetAcknexObject(3759925572);
_world.PlaySound(MP_501SND_75,0.5f, null);
SELECTTRICORDER_77 = _world.AcknexObject.GetAcknexObject(4185607035);
_world.AcknexObject.SetAcknexObject(104,SELECTTRICORDER_77);
SELECTNONE_79 = _world.AcknexObject.GetAcknexObject(1879623005);
_world.AcknexObject.SetAcknexObject(39,SELECTNONE_79);
SELECTNONE_81 = _world.AcknexObject.GetAcknexObject(1879623005);
_world.AcknexObject.SetAcknexObject(92,SELECTNONE_81);
SELECTMP5_83 = _world.AcknexObject.GetAcknexObject(3831323359);
_world.AcknexObject.SetAcknexObject(40,SELECTMP5_83);
SELECTMP5BURST_85 = _world.AcknexObject.GetAcknexObject(120038031);
_world.AcknexObject.SetAcknexObject(41,SELECTMP5BURST_85);
SELECTGRANADE_87 = _world.AcknexObject.GetAcknexObject(677375039);
_world.AcknexObject.SetAcknexObject(42,SELECTGRANADE_87);
SELECTSTINGER_89 = _world.AcknexObject.GetAcknexObject(3377853513);
_world.AcknexObject.SetAcknexObject(43,SELECTSTINGER_89);
SELECTQUANTUM_91 = _world.AcknexObject.GetAcknexObject(824580280);
_world.AcknexObject.SetAcknexObject(44,SELECTQUANTUM_91);
//Unknown keyword: 
      return false;
  }
IAcknexObject PLAYER_HEALTH_1;
float PLAYER_HEALTH_1_val;
IAcknexObject WEAPONSEL_3;
float WEAPONSEL_3_val;
IAcknexObject HAS_MP5_5;
float HAS_MP5_5_val;
IAcknexObject WRN03STR_6;
IAcknexObject WEAPONSEL_9;
float startTime1;
float endTime1;
IAcknexObject GUNFIRING_32;
float GUNFIRING_32_val;
IAcknexObject MY_GUN_34;
IAcknexObject MY_GUN_37;
float temp_38;
IAcknexObject MAP_MODE_40;
IAcknexObject MY_GUN_45;
IAcknexObject MY_GUN_48;
float startTime2;
float endTime2;
IAcknexObject MY_GUN_52;
float temp_53;
IAcknexObject MP5ACT_54;
IAcknexObject MY_GUN_58;
float startTime3;
float endTime3;
IAcknexObject MY_GUN_62;
float temp_63;
IAcknexObject MP5_01OVL_64;
IAcknexObject BURST_67;
IAcknexObject BURST_69;
IAcknexObject GUN_ON_72;
IAcknexObject RENDER_MODE_74;
IAcknexObject MP_501SND_75;
IAcknexObject SELECTTRICORDER_77;
IAcknexObject SELECTNONE_79;
IAcknexObject SELECTNONE_81;
IAcknexObject SELECTMP5_83;
IAcknexObject SELECTMP5BURST_85;
IAcknexObject SELECTGRANADE_87;
IAcknexObject SELECTSTINGER_89;
IAcknexObject SELECTQUANTUM_91;
}
public class SELECTGRANADE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SELECTGRANADE() {
  }
 public SELECTGRANADE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
            case 3:
                goto _coroutine3;
     }
PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat(PropertyName.VAL);
if (PLAYER_HEALTH_1_val < 0.1f)
{
return false;
}
WEAPONSEL_3 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_3_val = WEAPONSEL_3.GetFloat(PropertyName.VAL);
if (WEAPONSEL_3_val == 3f)
{
return false;
}
HAS_GRANADE_5 = _world.GetObject(ObjectType.Skill,40123194);
HAS_GRANADE_5_val = HAS_GRANADE_5.GetFloat(PropertyName.VAL);
if (HAS_GRANADE_5_val != 0f)
{
goto HASGOT;
}
WRN03STR_6 = _world.AcknexObject.GetAcknexObject(665745664);
_world.SetSynonymObject(361798934,WRN03STR_6);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
HASGOT:
WEAPONSEL_9 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_9.SetFloat(231,3f);
_world.AcknexObject.SetAcknexObject(78,null);
_world.AcknexObject.SetAcknexObject(97,null);
_world.AcknexObject.SetAcknexObject(104,null);
_world.AcknexObject.SetAcknexObject(39,null);
_world.AcknexObject.SetAcknexObject(92,null);
_world.AcknexObject.SetAcknexObject(40,null);
_world.AcknexObject.SetAcknexObject(41,null);
_world.AcknexObject.SetAcknexObject(42,null);
_world.AcknexObject.SetAcknexObject(43,null);
_world.AcknexObject.SetAcknexObject(44,null);
WAITFIRE:

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)4f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
GUNFIRING_32 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_32_val = GUNFIRING_32.GetFloat(PropertyName.VAL);
if (GUNFIRING_32_val != 0f)
{
goto WAITFIRE;
}
AMMO_GRANADE_34 = _world.GetObject(ObjectType.Skill,3603202376);
AMMO_GRANADE_34_val = AMMO_GRANADE_34.GetFloat(PropertyName.VAL);
if (AMMO_GRANADE_34_val < 1f)
{
goto EXITGRANADE;
}
MY_GUN_36 = _world.GetSynonymObject(3254523708);
if (MY_GUN_36 == null)
{
goto NOGUN;
}
MY_GUN_39 = _world.GetSynonymObject(3254523708);
temp_40 =MY_GUN_39.GetFloat(204);
if (temp_40 != 1f)
{
goto WAITFIRE;
}
NOGUN:
{
            var enumerator = new TARGETOFF();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new SHOWAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MAP_MODE_42 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_42.SetFloat(231,0f);
_world.AcknexObject.SetAcknexObject(158,null);
MY_GUN_47 = _world.GetSynonymObject(3254523708);
if (MY_GUN_47 == null)
{
goto CONT;
}
MY_GUN_50 = _world.GetSynonymObject(3254523708);
MY_GUN_50.SetFloat(204,0f);
{
            var enumerator = new LOWER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WAITING:

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.FramesToTime((int)2f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_54 = _world.GetSynonymObject(3254523708);
temp_55 =MY_GUN_54.GetFloat(204);
if (temp_55 < 1f)
{
goto WAITING;
}
CONT:
GRANACT_56 = _world.AcknexObject.GetAcknexObject(556898861);
_world.SetSynonymObject(3254523708,GRANACT_56);
MY_GUN_60 = _world.GetSynonymObject(3254523708);
MY_GUN_60.SetFloat(204,0f);
{
            var enumerator = new RAISE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WAITING1:

            startTime3 = Time.time;
            endTime3 = startTime3 + TimeUtils.FramesToTime((int)1f);
            _cursor = 3;
            _coroutine3:
            while (Time.time  < endTime3)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_64 = _world.GetSynonymObject(3254523708);
temp_65 =MY_GUN_64.GetFloat(204);
if (temp_65 < 1f)
{
goto WAITING1;
}
GRAN00OVL_66 = _world.AcknexObject.GetAcknexObject(850536902);
_world.AcknexObject.SetAcknexObject(158,GRAN00OVL_66);
THROW_69 = _world.AcknexObject.GetAcknexObject(236450049);
_world.AcknexObject.SetAcknexObject(78,THROW_69);
THROW_71 = _world.AcknexObject.GetAcknexObject(236450049);
_world.AcknexObject.SetAcknexObject(97,THROW_71);
GUN_ON_74 = _world.GetObject(ObjectType.Skill,3014382675);
GUN_ON_74.SetFloat(231,1f);
RENDER_MODE_76 = _world.GetObject(ObjectType.Skill,361);
RENDER_MODE_76.SetFloat(231,1f);
MP_501SND_77 = _world.AcknexObject.GetAcknexObject(3759925572);
_world.PlaySound(MP_501SND_77,0.5f, null);
EXITGRANADE:
SELECTTRICORDER_79 = _world.AcknexObject.GetAcknexObject(4185607035);
_world.AcknexObject.SetAcknexObject(104,SELECTTRICORDER_79);
SELECTNONE_81 = _world.AcknexObject.GetAcknexObject(1879623005);
_world.AcknexObject.SetAcknexObject(39,SELECTNONE_81);
SELECTNONE_83 = _world.AcknexObject.GetAcknexObject(1879623005);
_world.AcknexObject.SetAcknexObject(92,SELECTNONE_83);
SELECTMP5_85 = _world.AcknexObject.GetAcknexObject(3831323359);
_world.AcknexObject.SetAcknexObject(40,SELECTMP5_85);
SELECTMP5BURST_87 = _world.AcknexObject.GetAcknexObject(120038031);
_world.AcknexObject.SetAcknexObject(41,SELECTMP5BURST_87);
SELECTGRANADE_89 = _world.AcknexObject.GetAcknexObject(677375039);
_world.AcknexObject.SetAcknexObject(42,SELECTGRANADE_89);
SELECTSTINGER_91 = _world.AcknexObject.GetAcknexObject(3377853513);
_world.AcknexObject.SetAcknexObject(43,SELECTSTINGER_91);
SELECTQUANTUM_93 = _world.AcknexObject.GetAcknexObject(824580280);
_world.AcknexObject.SetAcknexObject(44,SELECTQUANTUM_93);
//Unknown keyword: 
      return false;
  }
IAcknexObject PLAYER_HEALTH_1;
float PLAYER_HEALTH_1_val;
IAcknexObject WEAPONSEL_3;
float WEAPONSEL_3_val;
IAcknexObject HAS_GRANADE_5;
float HAS_GRANADE_5_val;
IAcknexObject WRN03STR_6;
IAcknexObject WEAPONSEL_9;
float startTime1;
float endTime1;
IAcknexObject GUNFIRING_32;
float GUNFIRING_32_val;
IAcknexObject AMMO_GRANADE_34;
float AMMO_GRANADE_34_val;
IAcknexObject MY_GUN_36;
IAcknexObject MY_GUN_39;
float temp_40;
IAcknexObject MAP_MODE_42;
IAcknexObject MY_GUN_47;
IAcknexObject MY_GUN_50;
float startTime2;
float endTime2;
IAcknexObject MY_GUN_54;
float temp_55;
IAcknexObject GRANACT_56;
IAcknexObject MY_GUN_60;
float startTime3;
float endTime3;
IAcknexObject MY_GUN_64;
float temp_65;
IAcknexObject GRAN00OVL_66;
IAcknexObject THROW_69;
IAcknexObject THROW_71;
IAcknexObject GUN_ON_74;
IAcknexObject RENDER_MODE_76;
IAcknexObject MP_501SND_77;
IAcknexObject SELECTTRICORDER_79;
IAcknexObject SELECTNONE_81;
IAcknexObject SELECTNONE_83;
IAcknexObject SELECTMP5_85;
IAcknexObject SELECTMP5BURST_87;
IAcknexObject SELECTGRANADE_89;
IAcknexObject SELECTSTINGER_91;
IAcknexObject SELECTQUANTUM_93;
}
public class SELECTSTINGER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SELECTSTINGER() {
  }
 public SELECTSTINGER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
            case 3:
                goto _coroutine3;
     }
PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat(PropertyName.VAL);
if (PLAYER_HEALTH_1_val < 0.1f)
{
return false;
}
WEAPONSEL_3 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_3_val = WEAPONSEL_3.GetFloat(PropertyName.VAL);
if (WEAPONSEL_3_val == 4f)
{
return false;
}
HAS_STINGER_5 = _world.GetObject(ObjectType.Skill,2740601668);
HAS_STINGER_5_val = HAS_STINGER_5.GetFloat(PropertyName.VAL);
if (HAS_STINGER_5_val != 0f)
{
goto HASGOT;
}
WRN03STR_6 = _world.AcknexObject.GetAcknexObject(665745664);
_world.SetSynonymObject(361798934,WRN03STR_6);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
HASGOT:
WEAPONSEL_9 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_9.SetFloat(231,4f);
_world.AcknexObject.SetAcknexObject(78,null);
_world.AcknexObject.SetAcknexObject(97,null);
_world.AcknexObject.SetAcknexObject(104,null);
_world.AcknexObject.SetAcknexObject(39,null);
_world.AcknexObject.SetAcknexObject(92,null);
_world.AcknexObject.SetAcknexObject(40,null);
_world.AcknexObject.SetAcknexObject(41,null);
_world.AcknexObject.SetAcknexObject(42,null);
_world.AcknexObject.SetAcknexObject(43,null);
_world.AcknexObject.SetAcknexObject(44,null);
WAITFIRE:

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)4f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
GUNFIRING_32 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_32_val = GUNFIRING_32.GetFloat(PropertyName.VAL);
if (GUNFIRING_32_val != 0f)
{
goto WAITFIRE;
}
MY_GUN_34 = _world.GetSynonymObject(3254523708);
if (MY_GUN_34 == null)
{
goto NOGUN;
}
MY_GUN_37 = _world.GetSynonymObject(3254523708);
temp_38 =MY_GUN_37.GetFloat(204);
if (temp_38 != 1f)
{
goto WAITFIRE;
}
NOGUN:
{
            var enumerator = new TARGETON();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WEAPONSEL_40 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_40.SetFloat(231,4f);
{
            var enumerator = new SHOWAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MAP_MODE_42 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_42.SetFloat(231,0f);
_world.AcknexObject.SetAcknexObject(158,null);
MY_GUN_47 = _world.GetSynonymObject(3254523708);
if (MY_GUN_47 == null)
{
goto CONT;
}
MY_GUN_50 = _world.GetSynonymObject(3254523708);
MY_GUN_50.SetFloat(204,0f);
{
            var enumerator = new LOWER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WAITING:

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.FramesToTime((int)2f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_54 = _world.GetSynonymObject(3254523708);
temp_55 =MY_GUN_54.GetFloat(204);
if (temp_55 < 1f)
{
goto WAITING;
}
CONT:
STNGACT_56 = _world.AcknexObject.GetAcknexObject(3263048801);
_world.SetSynonymObject(3254523708,STNGACT_56);
MY_GUN_60 = _world.GetSynonymObject(3254523708);
MY_GUN_60.SetFloat(204,0f);
{
            var enumerator = new RAISE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WAITING1:

            startTime3 = Time.time;
            endTime3 = startTime3 + TimeUtils.FramesToTime((int)1f);
            _cursor = 3;
            _coroutine3:
            while (Time.time  < endTime3)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_64 = _world.GetSynonymObject(3254523708);
temp_65 =MY_GUN_64.GetFloat(204);
if (temp_65 < 1f)
{
goto WAITING1;
}
STNG00OVL_66 = _world.AcknexObject.GetAcknexObject(1500256506);
_world.AcknexObject.SetAcknexObject(158,STNG00OVL_66);
LAUNCH_69 = _world.AcknexObject.GetAcknexObject(3186573864);
_world.AcknexObject.SetAcknexObject(78,LAUNCH_69);
LAUNCH_71 = _world.AcknexObject.GetAcknexObject(3186573864);
_world.AcknexObject.SetAcknexObject(97,LAUNCH_71);
GUN_ON_74 = _world.GetObject(ObjectType.Skill,3014382675);
GUN_ON_74.SetFloat(231,1f);
RENDER_MODE_76 = _world.GetObject(ObjectType.Skill,361);
RENDER_MODE_76.SetFloat(231,1f);
STNG01SND_77 = _world.AcknexObject.GetAcknexObject(1500296527);
_world.PlaySound(STNG01SND_77,0.5f, null);
SELECTTRICORDER_79 = _world.AcknexObject.GetAcknexObject(4185607035);
_world.AcknexObject.SetAcknexObject(104,SELECTTRICORDER_79);
SELECTNONE_81 = _world.AcknexObject.GetAcknexObject(1879623005);
_world.AcknexObject.SetAcknexObject(39,SELECTNONE_81);
SELECTNONE_83 = _world.AcknexObject.GetAcknexObject(1879623005);
_world.AcknexObject.SetAcknexObject(92,SELECTNONE_83);
SELECTMP5_85 = _world.AcknexObject.GetAcknexObject(3831323359);
_world.AcknexObject.SetAcknexObject(40,SELECTMP5_85);
SELECTMP5BURST_87 = _world.AcknexObject.GetAcknexObject(120038031);
_world.AcknexObject.SetAcknexObject(41,SELECTMP5BURST_87);
SELECTGRANADE_89 = _world.AcknexObject.GetAcknexObject(677375039);
_world.AcknexObject.SetAcknexObject(42,SELECTGRANADE_89);
SELECTSTINGER_91 = _world.AcknexObject.GetAcknexObject(3377853513);
_world.AcknexObject.SetAcknexObject(43,SELECTSTINGER_91);
SELECTQUANTUM_93 = _world.AcknexObject.GetAcknexObject(824580280);
_world.AcknexObject.SetAcknexObject(44,SELECTQUANTUM_93);
//Unknown keyword: 
      return false;
  }
IAcknexObject PLAYER_HEALTH_1;
float PLAYER_HEALTH_1_val;
IAcknexObject WEAPONSEL_3;
float WEAPONSEL_3_val;
IAcknexObject HAS_STINGER_5;
float HAS_STINGER_5_val;
IAcknexObject WRN03STR_6;
IAcknexObject WEAPONSEL_9;
float startTime1;
float endTime1;
IAcknexObject GUNFIRING_32;
float GUNFIRING_32_val;
IAcknexObject MY_GUN_34;
IAcknexObject MY_GUN_37;
float temp_38;
IAcknexObject WEAPONSEL_40;
IAcknexObject MAP_MODE_42;
IAcknexObject MY_GUN_47;
IAcknexObject MY_GUN_50;
float startTime2;
float endTime2;
IAcknexObject MY_GUN_54;
float temp_55;
IAcknexObject STNGACT_56;
IAcknexObject MY_GUN_60;
float startTime3;
float endTime3;
IAcknexObject MY_GUN_64;
float temp_65;
IAcknexObject STNG00OVL_66;
IAcknexObject LAUNCH_69;
IAcknexObject LAUNCH_71;
IAcknexObject GUN_ON_74;
IAcknexObject RENDER_MODE_76;
IAcknexObject STNG01SND_77;
IAcknexObject SELECTTRICORDER_79;
IAcknexObject SELECTNONE_81;
IAcknexObject SELECTNONE_83;
IAcknexObject SELECTMP5_85;
IAcknexObject SELECTMP5BURST_87;
IAcknexObject SELECTGRANADE_89;
IAcknexObject SELECTSTINGER_91;
IAcknexObject SELECTQUANTUM_93;
}
public class SELECTQUANTUM : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SELECTQUANTUM() {
  }
 public SELECTQUANTUM(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
            case 3:
                goto _coroutine3;
     }
PLAYER_HEALTH_1 = _world.GetObject(ObjectType.Skill,1469755439);
PLAYER_HEALTH_1_val = PLAYER_HEALTH_1.GetFloat(PropertyName.VAL);
if (PLAYER_HEALTH_1_val < 0.1f)
{
return false;
}
WEAPONSEL_3 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_3_val = WEAPONSEL_3.GetFloat(PropertyName.VAL);
if (WEAPONSEL_3_val == 5f)
{
return false;
}
HAS_QUANTUM_5 = _world.GetObject(ObjectType.Skill,187328435);
HAS_QUANTUM_5_val = HAS_QUANTUM_5.GetFloat(PropertyName.VAL);
if (HAS_QUANTUM_5_val != 0f)
{
goto HASGOT;
}
WRN03STR_6 = _world.AcknexObject.GetAcknexObject(665745664);
_world.SetSynonymObject(361798934,WRN03STR_6);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
HASGOT:
WEAPONSEL_9 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_9.SetFloat(231,5f);
_world.AcknexObject.SetAcknexObject(78,null);
_world.AcknexObject.SetAcknexObject(97,null);
_world.AcknexObject.SetAcknexObject(104,null);
_world.AcknexObject.SetAcknexObject(39,null);
_world.AcknexObject.SetAcknexObject(92,null);
_world.AcknexObject.SetAcknexObject(40,null);
_world.AcknexObject.SetAcknexObject(41,null);
_world.AcknexObject.SetAcknexObject(42,null);
_world.AcknexObject.SetAcknexObject(43,null);
_world.AcknexObject.SetAcknexObject(44,null);
WAITFIRE:

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)4f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
GUNFIRING_32 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_32_val = GUNFIRING_32.GetFloat(PropertyName.VAL);
if (GUNFIRING_32_val != 0f)
{
goto WAITFIRE;
}
MY_GUN_34 = _world.GetSynonymObject(3254523708);
if (MY_GUN_34 == null)
{
goto NOGUN;
}
MY_GUN_37 = _world.GetSynonymObject(3254523708);
temp_38 =MY_GUN_37.GetFloat(204);
if (temp_38 != 1f)
{
goto WAITFIRE;
}
NOGUN:
{
            var enumerator = new TARGETON();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WEAPONSEL_40 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_40.SetFloat(231,5f);
{
            var enumerator = new SHOWAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MAP_MODE_42 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_42.SetFloat(231,0f);
_world.AcknexObject.SetAcknexObject(158,null);
MY_GUN_47 = _world.GetSynonymObject(3254523708);
if (MY_GUN_47 == null)
{
goto CONT;
}
MY_GUN_50 = _world.GetSynonymObject(3254523708);
MY_GUN_50.SetFloat(204,0f);
{
            var enumerator = new LOWER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WAITING:

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.FramesToTime((int)2f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_54 = _world.GetSynonymObject(3254523708);
temp_55 =MY_GUN_54.GetFloat(204);
if (temp_55 < 1f)
{
goto WAITING;
}
CONT:
QGUNACT_56 = _world.AcknexObject.GetAcknexObject(179905760);
_world.SetSynonymObject(3254523708,QGUNACT_56);
MY_GUN_60 = _world.GetSynonymObject(3254523708);
MY_GUN_60.SetFloat(204,0f);
{
            var enumerator = new RAISE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WAITING1:

            startTime3 = Time.time;
            endTime3 = startTime3 + TimeUtils.FramesToTime((int)1f);
            _cursor = 3;
            _coroutine3:
            while (Time.time  < endTime3)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_64 = _world.GetSynonymObject(3254523708);
temp_65 =MY_GUN_64.GetFloat(204);
if (temp_65 < 1f)
{
goto WAITING1;
}
QGUN00OVL_66 = _world.AcknexObject.GetAcknexObject(2621910329);
_world.AcknexObject.SetAcknexObject(158,QGUN00OVL_66);
BEAM_69 = _world.AcknexObject.GetAcknexObject(2088923810);
_world.AcknexObject.SetAcknexObject(78,BEAM_69);
BEAM_71 = _world.AcknexObject.GetAcknexObject(2088923810);
_world.AcknexObject.SetAcknexObject(97,BEAM_71);
GUN_ON_74 = _world.GetObject(ObjectType.Skill,3014382675);
GUN_ON_74.SetFloat(231,1f);
RENDER_MODE_76 = _world.GetObject(ObjectType.Skill,361);
RENDER_MODE_76.SetFloat(231,1f);
QGUN01SND_77 = _world.AcknexObject.GetAcknexObject(2621950350);
_world.PlaySound(QGUN01SND_77,0.4f, null);
SELECTTRICORDER_79 = _world.AcknexObject.GetAcknexObject(4185607035);
_world.AcknexObject.SetAcknexObject(104,SELECTTRICORDER_79);
SELECTNONE_81 = _world.AcknexObject.GetAcknexObject(1879623005);
_world.AcknexObject.SetAcknexObject(39,SELECTNONE_81);
SELECTNONE_83 = _world.AcknexObject.GetAcknexObject(1879623005);
_world.AcknexObject.SetAcknexObject(92,SELECTNONE_83);
SELECTMP5_85 = _world.AcknexObject.GetAcknexObject(3831323359);
_world.AcknexObject.SetAcknexObject(40,SELECTMP5_85);
SELECTMP5BURST_87 = _world.AcknexObject.GetAcknexObject(120038031);
_world.AcknexObject.SetAcknexObject(41,SELECTMP5BURST_87);
SELECTGRANADE_89 = _world.AcknexObject.GetAcknexObject(677375039);
_world.AcknexObject.SetAcknexObject(42,SELECTGRANADE_89);
SELECTSTINGER_91 = _world.AcknexObject.GetAcknexObject(3377853513);
_world.AcknexObject.SetAcknexObject(43,SELECTSTINGER_91);
SELECTQUANTUM_93 = _world.AcknexObject.GetAcknexObject(824580280);
_world.AcknexObject.SetAcknexObject(44,SELECTQUANTUM_93);
//Unknown keyword: 
      return false;
  }
IAcknexObject PLAYER_HEALTH_1;
float PLAYER_HEALTH_1_val;
IAcknexObject WEAPONSEL_3;
float WEAPONSEL_3_val;
IAcknexObject HAS_QUANTUM_5;
float HAS_QUANTUM_5_val;
IAcknexObject WRN03STR_6;
IAcknexObject WEAPONSEL_9;
float startTime1;
float endTime1;
IAcknexObject GUNFIRING_32;
float GUNFIRING_32_val;
IAcknexObject MY_GUN_34;
IAcknexObject MY_GUN_37;
float temp_38;
IAcknexObject WEAPONSEL_40;
IAcknexObject MAP_MODE_42;
IAcknexObject MY_GUN_47;
IAcknexObject MY_GUN_50;
float startTime2;
float endTime2;
IAcknexObject MY_GUN_54;
float temp_55;
IAcknexObject QGUNACT_56;
IAcknexObject MY_GUN_60;
float startTime3;
float endTime3;
IAcknexObject MY_GUN_64;
float temp_65;
IAcknexObject QGUN00OVL_66;
IAcknexObject BEAM_69;
IAcknexObject BEAM_71;
IAcknexObject GUN_ON_74;
IAcknexObject RENDER_MODE_76;
IAcknexObject QGUN01SND_77;
IAcknexObject SELECTTRICORDER_79;
IAcknexObject SELECTNONE_81;
IAcknexObject SELECTNONE_83;
IAcknexObject SELECTMP5_85;
IAcknexObject SELECTMP5BURST_87;
IAcknexObject SELECTGRANADE_89;
IAcknexObject SELECTSTINGER_91;
IAcknexObject SELECTQUANTUM_93;
}
public class ZOOMMAPIN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public ZOOMMAPIN() {
  }
 public ZOOMMAPIN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
MAP_MODE_1 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_1_val = MAP_MODE_1.GetFloat(PropertyName.VAL);
if (MAP_MODE_1_val < 0.1f)
{
return false;
}
ZOOM:
MAP_SCALE_3 = _world.GetObject(ObjectType.Skill,379);
MAP_SCALE_3_val = MAP_SCALE_3.GetFloat(PropertyName.VAL);
if (MAP_SCALE_3_val < 20f)
{
MAP_SCALE_4 = _world.GetObject(ObjectType.Skill,379);
MAP_SCALE_5 = _world.GetObject(ObjectType.Skill,379);
MAP_SCALE_5_val = MAP_SCALE_5.GetFloat(PropertyName.VAL);
MAP_SCALE_6 = _world.GetObject(ObjectType.Skill,379);
MAP_SCALE_6_val = MAP_SCALE_6.GetFloat(PropertyName.VAL);
MAP_SCALE_4.SetFloat(231,MAP_SCALE_6_val*1.1f);
}

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)4f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
KEY_INS_11 = _world.GetObject(ObjectType.Skill,541);
KEY_INS_11_val = KEY_INS_11.GetFloat(PropertyName.VAL);
if (KEY_INS_11_val > 0f)
{
goto ZOOM;
}
//Unknown keyword: 
      return false;
  }
IAcknexObject MAP_MODE_1;
float MAP_MODE_1_val;
IAcknexObject MAP_SCALE_3;
float MAP_SCALE_3_val;
IAcknexObject MAP_SCALE_4;
IAcknexObject MAP_SCALE_5;
float MAP_SCALE_5_val;
IAcknexObject MAP_SCALE_6;
float MAP_SCALE_6_val;
float startTime1;
float endTime1;
IAcknexObject KEY_INS_11;
float KEY_INS_11_val;
}
public class ZOOMMAPOUT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public ZOOMMAPOUT() {
  }
 public ZOOMMAPOUT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
MAP_MODE_1 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_1_val = MAP_MODE_1.GetFloat(PropertyName.VAL);
if (MAP_MODE_1_val < 0.1f)
{
return false;
}
ZOOM:
MAP_SCALE_3 = _world.GetObject(ObjectType.Skill,379);
MAP_SCALE_3_val = MAP_SCALE_3.GetFloat(PropertyName.VAL);
if (MAP_SCALE_3_val > 1f)
{
MAP_SCALE_4 = _world.GetObject(ObjectType.Skill,379);
MAP_SCALE_5 = _world.GetObject(ObjectType.Skill,379);
MAP_SCALE_5_val = MAP_SCALE_5.GetFloat(PropertyName.VAL);
MAP_SCALE_6 = _world.GetObject(ObjectType.Skill,379);
MAP_SCALE_6_val = MAP_SCALE_6.GetFloat(PropertyName.VAL);
MAP_SCALE_4.SetFloat(231,MAP_SCALE_6_val*0.9f);
}

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)4f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
KEY_DEL_11 = _world.GetObject(ObjectType.Skill,527);
KEY_DEL_11_val = KEY_DEL_11.GetFloat(PropertyName.VAL);
if (KEY_DEL_11_val > 0f)
{
goto ZOOM;
}
//Unknown keyword: 
      return false;
  }
IAcknexObject MAP_MODE_1;
float MAP_MODE_1_val;
IAcknexObject MAP_SCALE_3;
float MAP_SCALE_3_val;
IAcknexObject MAP_SCALE_4;
IAcknexObject MAP_SCALE_5;
float MAP_SCALE_5_val;
IAcknexObject MAP_SCALE_6;
float MAP_SCALE_6_val;
float startTime1;
float endTime1;
IAcknexObject KEY_DEL_11;
float KEY_DEL_11_val;
}
public class SHOWPDABRIEFING : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SHOWPDABRIEFING() {
  }
 public SHOWPDABRIEFING(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
            case 3:
                goto _coroutine3;
            case 4:
                goto _coroutine4;
     }
{
            var enumerator = new SELECTNONE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WAITING0:

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)2f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
temp_3 =_world.AcknexObject?.GetAcknexObject(40);
if (temp_3 == null)
{
goto WAITING0;
}
GUNFIRING_5 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_5_val = GUNFIRING_5.GetFloat(PropertyName.VAL);
if (GUNFIRING_5_val == 1f)
{
goto WAITING0;
}
{
            var enumerator = new HIDEWEAPON();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WEAPONSEL_7 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_7.SetFloat(231,1f);
{
            var enumerator = new SHOWAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MAP_MODE_9 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_9.SetFloat(231,0f);
_world.AcknexObject.SetAcknexObject(158,null);
_world.AcknexObject.SetAcknexObject(78,null);
_world.AcknexObject.SetAcknexObject(97,null);
_world.AcknexObject.SetAcknexObject(82,null);
_world.AcknexObject.SetAcknexObject(81,null);

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.FramesToTime((int)4f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
TRICACT_22 = _world.AcknexObject.GetAcknexObject(175205335);
_world.SetSynonymObject(3254523708,TRICACT_22);
MY_GUN_26 = _world.GetSynonymObject(3254523708);
MY_GUN_26.SetFloat(204,0f);
{
            var enumerator = new RAISE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WAITING2:

            startTime3 = Time.time;
            endTime3 = startTime3 + TimeUtils.FramesToTime((int)2f);
            _cursor = 3;
            _coroutine3:
            while (Time.time  < endTime3)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_30 = _world.GetSynonymObject(3254523708);
temp_31 =MY_GUN_30.GetFloat(204);
if (temp_31 < 1f)
{
goto WAITING2;
}
TRIC01SND_32 = _world.AcknexObject.GetAcknexObject(1798154821);
_world.PlaySound(TRIC01SND_32,0.5f, null);
BRIEFING_TEXT_34 = _world.GetSynonymObject(155729303);
PDATEXT_36 = _world.AcknexObject.GetAcknexObject(3042501159);
PDATEXT_36_array = PDATEXT_36.GetObject<List<IAcknexObject>>(293);
PDATEXT_36_index = PDATEXT_36.GetInteger(PropertyName.INDEX);
PDATEXT_36_array[PDATEXT_36_index-1] = BRIEFING_TEXT_34;
PDATEXT_36.IsDirty = true;
TRIC01OVL_37 = _world.AcknexObject.GetAcknexObject(1798150737);
_world.AcknexObject.SetAcknexObject(158,TRIC01OVL_37);
PDATEXT_42 = _world.AcknexObject.GetAcknexObject(3042501159);
PDATEXT_42.SetFloat(205,1f);
PDAMESSAGEOFF_43 = _world.AcknexObject.GetAcknexObject(3755623554);
_world.AcknexObject.SetAcknexObject(82,PDAMESSAGEOFF_43);
GUN_ON_46 = _world.GetObject(ObjectType.Skill,3014382675);
GUN_ON_46.SetFloat(231,0f);
HLP03STR_47 = _world.AcknexObject.GetAcknexObject(2258625677);
_world.SetSynonymObject(361798934,HLP03STR_47);
BLACK_49 = _world.AcknexObject.GetAcknexObject(215228298);
_world.FadePal(BLACK_49,0.4f);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }RENDER_MODE_52 = _world.GetObject(ObjectType.Skill,361);
RENDER_MODE_52.SetFloat(231,1f);

            startTime4 = Time.time;
            endTime4 = startTime4 + TimeUtils.FramesToTime((int)1f);
            _cursor = 4;
            _coroutine4:
            while (Time.time  < endTime4)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MOVE_MODE_55 = _world.GetObject(ObjectType.Skill,362);
MOVE_MODE_55.SetFloat(231,0f);
//Unknown keyword: 
      return false;
  }
float startTime1;
float endTime1;
IAcknexObject temp_3;
IAcknexObject GUNFIRING_5;
float GUNFIRING_5_val;
IAcknexObject WEAPONSEL_7;
IAcknexObject MAP_MODE_9;
float startTime2;
float endTime2;
IAcknexObject TRICACT_22;
IAcknexObject MY_GUN_26;
float startTime3;
float endTime3;
IAcknexObject MY_GUN_30;
float temp_31;
IAcknexObject TRIC01SND_32;
IAcknexObject BRIEFING_TEXT_34;
IAcknexObject PDATEXT_36;
List<IAcknexObject> PDATEXT_36_array;
int PDATEXT_36_index;
IAcknexObject TRIC01OVL_37;
IAcknexObject PDATEXT_42;
IAcknexObject PDAMESSAGEOFF_43;
IAcknexObject GUN_ON_46;
IAcknexObject HLP03STR_47;
IAcknexObject BLACK_49;
IAcknexObject RENDER_MODE_52;
float startTime4;
float endTime4;
IAcknexObject MOVE_MODE_55;
}
public class SHOWPDAGAMEOVER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SHOWPDAGAMEOVER() {
  }
 public SHOWPDAGAMEOVER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
            case 3:
                goto _coroutine3;
            case 4:
                goto _coroutine4;
     }
ALARM03SND_0 = _world.AcknexObject.GetAcknexObject(759955234);
_world.PlaySound(ALARM03SND_0,0.7f, null);
{
            var enumerator = new SELECTNONE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WAITING0:

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)2f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
temp_5 =_world.AcknexObject?.GetAcknexObject(40);
if (temp_5 == null)
{
goto WAITING0;
}
GUNFIRING_7 = _world.GetObject(ObjectType.Skill,3478808598);
GUNFIRING_7_val = GUNFIRING_7.GetFloat(PropertyName.VAL);
if (GUNFIRING_7_val == 1f)
{
goto WAITING0;
}
{
            var enumerator = new HIDEWEAPON();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WEAPONSEL_9 = _world.GetObject(ObjectType.Skill,2181903739);
WEAPONSEL_9.SetFloat(231,1f);
{
            var enumerator = new SHOWAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MAP_MODE_11 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_11.SetFloat(231,0f);
_world.AcknexObject.SetAcknexObject(158,null);
_world.AcknexObject.SetAcknexObject(78,null);
_world.AcknexObject.SetAcknexObject(97,null);
_world.AcknexObject.SetAcknexObject(82,null);

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.FramesToTime((int)2f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
TRICACT_22 = _world.AcknexObject.GetAcknexObject(175205335);
_world.SetSynonymObject(3254523708,TRICACT_22);
MY_GUN_26 = _world.GetSynonymObject(3254523708);
MY_GUN_26.SetFloat(204,0f);
{
            var enumerator = new RAISE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }WAITING2:

            startTime3 = Time.time;
            endTime3 = startTime3 + TimeUtils.FramesToTime((int)2f);
            _cursor = 3;
            _coroutine3:
            while (Time.time  < endTime3)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_GUN_30 = _world.GetSynonymObject(3254523708);
temp_31 =MY_GUN_30.GetFloat(204);
if (temp_31 < 1f)
{
goto WAITING2;
}
ALARM03SND_32 = _world.AcknexObject.GetAcknexObject(759955234);
_world.PlaySound(ALARM03SND_32,0.7f, null);
GAMEOVER_TEXT_34 = _world.GetSynonymObject(3892409159);
PDATEXT_36 = _world.AcknexObject.GetAcknexObject(3042501159);
PDATEXT_36_array = PDATEXT_36.GetObject<List<IAcknexObject>>(293);
PDATEXT_36_index = PDATEXT_36.GetInteger(PropertyName.INDEX);
PDATEXT_36_array[PDATEXT_36_index-1] = GAMEOVER_TEXT_34;
PDATEXT_36.IsDirty = true;
_world.SetSynonymObject(270057211,null);
TRIC01OVL_39 = _world.AcknexObject.GetAcknexObject(1798150737);
_world.AcknexObject.SetAcknexObject(158,TRIC01OVL_39);
PDATEXT_44 = _world.AcknexObject.GetAcknexObject(3042501159);
PDATEXT_44.SetFloat(205,1f);
PDAMESSAGEOFF_45 = _world.AcknexObject.GetAcknexObject(3755623554);
_world.AcknexObject.SetAcknexObject(82,PDAMESSAGEOFF_45);
GUN_ON_48 = _world.GetObject(ObjectType.Skill,3014382675);
GUN_ON_48.SetFloat(231,0f);
HLP04STR_49 = _world.AcknexObject.GetAcknexObject(2258661614);
_world.SetSynonymObject(361798934,HLP04STR_49);
BLACK_51 = _world.AcknexObject.GetAcknexObject(215228298);
_world.FadePal(BLACK_51,0.4f);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }RENDER_MODE_54 = _world.GetObject(ObjectType.Skill,361);
RENDER_MODE_54.SetFloat(231,1f);

            startTime4 = Time.time;
            endTime4 = startTime4 + TimeUtils.FramesToTime((int)2f);
            _cursor = 4;
            _coroutine4:
            while (Time.time  < endTime4)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MOVE_MODE_57 = _world.GetObject(ObjectType.Skill,362);
MOVE_MODE_57.SetFloat(231,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject ALARM03SND_0;
float startTime1;
float endTime1;
IAcknexObject temp_5;
IAcknexObject GUNFIRING_7;
float GUNFIRING_7_val;
IAcknexObject WEAPONSEL_9;
IAcknexObject MAP_MODE_11;
float startTime2;
float endTime2;
IAcknexObject TRICACT_22;
IAcknexObject MY_GUN_26;
float startTime3;
float endTime3;
IAcknexObject MY_GUN_30;
float temp_31;
IAcknexObject ALARM03SND_32;
IAcknexObject GAMEOVER_TEXT_34;
IAcknexObject PDATEXT_36;
List<IAcknexObject> PDATEXT_36_array;
int PDATEXT_36_index;
IAcknexObject TRIC01OVL_39;
IAcknexObject PDATEXT_44;
IAcknexObject PDAMESSAGEOFF_45;
IAcknexObject GUN_ON_48;
IAcknexObject HLP04STR_49;
IAcknexObject BLACK_51;
IAcknexObject RENDER_MODE_54;
float startTime4;
float endTime4;
IAcknexObject MOVE_MODE_57;
}
public class PDAMESSAGEOFF : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public PDAMESSAGEOFF() {
  }
 public PDAMESSAGEOFF(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
PDATEXT_2 = _world.AcknexObject.GetAcknexObject(3042501159);
PDATEXT_2.SetFloat(205,0f);
SHOWMAINMENU_3 = _world.AcknexObject.GetAcknexObject(3665306792);
_world.AcknexObject.SetAcknexObject(82,SHOWMAINMENU_3);
SELECTTRICORDER_5 = _world.AcknexObject.GetAcknexObject(4185607035);
_world.AcknexObject.SetAcknexObject(104,SELECTTRICORDER_5);
SELECTNONE_7 = _world.AcknexObject.GetAcknexObject(1879623005);
_world.AcknexObject.SetAcknexObject(39,SELECTNONE_7);
SELECTNONE_9 = _world.AcknexObject.GetAcknexObject(1879623005);
_world.AcknexObject.SetAcknexObject(92,SELECTNONE_9);
SELECTMP5_11 = _world.AcknexObject.GetAcknexObject(3831323359);
_world.AcknexObject.SetAcknexObject(40,SELECTMP5_11);
SELECTMP5BURST_13 = _world.AcknexObject.GetAcknexObject(120038031);
_world.AcknexObject.SetAcknexObject(41,SELECTMP5BURST_13);
SELECTSTINGER_15 = _world.AcknexObject.GetAcknexObject(3377853513);
_world.AcknexObject.SetAcknexObject(43,SELECTSTINGER_15);
SELECTGRANADE_17 = _world.AcknexObject.GetAcknexObject(677375039);
_world.AcknexObject.SetAcknexObject(42,SELECTGRANADE_17);
SELECTQUANTUM_19 = _world.AcknexObject.GetAcknexObject(824580280);
_world.AcknexObject.SetAcknexObject(44,SELECTQUANTUM_19);
_world.AcknexObject.SetAcknexObject(145,null);
{
            var enumerator = new SELECTNONE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }BLANKSTR_24 = _world.AcknexObject.GetAcknexObject(3695414798);
_world.SetSynonymObject(361798934,BLANKSTR_24);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new SHOWWEAPON();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new SELECTNONE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new ENDOFLEVEL();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject PDATEXT_2;
IAcknexObject SHOWMAINMENU_3;
IAcknexObject SELECTTRICORDER_5;
IAcknexObject SELECTNONE_7;
IAcknexObject SELECTNONE_9;
IAcknexObject SELECTMP5_11;
IAcknexObject SELECTMP5BURST_13;
IAcknexObject SELECTSTINGER_15;
IAcknexObject SELECTGRANADE_17;
IAcknexObject SELECTQUANTUM_19;
IAcknexObject BLANKSTR_24;
}
public class REPEATMUSIC : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REPEATMUSIC() {
  }
 public REPEATMUSIC(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SECCOUNTER_1 = _world.GetObject(ObjectType.Skill,2748572712);
SECCOUNTER_1_val = SECCOUNTER_1.GetFloat(PropertyName.VAL);
if (SECCOUNTER_1_val == 0f)
{
//Unknown keyword: PLAY_CD
}
SECCOUNTER_3 = _world.GetObject(ObjectType.Skill,2748572712);
SECCOUNTER_3_val = SECCOUNTER_3.GetFloat(PropertyName.VAL);
SECCOUNTER_4 = _world.GetObject(ObjectType.Skill,2748572712);
SECCOUNTER_4.SetFloat(231,SECCOUNTER_3_val + 1f);
CDTRACKTIME_5 = _world.GetObject(ObjectType.Skill,4172716664);
CDTRACKTIME_5_val = CDTRACKTIME_5.GetFloat(PropertyName.VAL);
SECCOUNTER_6 = _world.GetObject(ObjectType.Skill,2748572712);
SECCOUNTER_6_val = SECCOUNTER_6.GetFloat(PropertyName.VAL);
if (SECCOUNTER_6_val > CDTRACKTIME_5_val)
{
SECCOUNTER_8 = _world.GetObject(ObjectType.Skill,2748572712);
SECCOUNTER_8.SetFloat(231,0f);
}
//Unknown keyword: 
      return false;
  }
IAcknexObject SECCOUNTER_1;
float SECCOUNTER_1_val;
IAcknexObject SECCOUNTER_3;
float SECCOUNTER_3_val;
IAcknexObject SECCOUNTER_4;
IAcknexObject CDTRACKTIME_5;
float CDTRACKTIME_5_val;
IAcknexObject SECCOUNTER_6;
float SECCOUNTER_6_val;
IAcknexObject SECCOUNTER_8;
}
public class SETSOUNDVOL : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SETSOUNDVOL() {
  }
 public SETSOUNDVOL(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SOUND_VOL_BUFFER_0 = _world.GetObject(ObjectType.Skill,299848383);
SOUND_VOL_BUFFER_0_val = SOUND_VOL_BUFFER_0.GetFloat(PropertyName.VAL);
SOUND_VOL_1 = _world.GetObject(ObjectType.Skill,405);
SOUND_VOL_1.SetFloat(231,SOUND_VOL_BUFFER_0_val);
CDAUDIO_VOL_BUFFER_2 = _world.GetObject(ObjectType.Skill,2594965391);
CDAUDIO_VOL_BUFFER_2_val = CDAUDIO_VOL_BUFFER_2.GetFloat(PropertyName.VAL);
CDAUDIO_VOL_3 = _world.GetObject(ObjectType.Skill,407);
CDAUDIO_VOL_3.SetFloat(231,CDAUDIO_VOL_BUFFER_2_val);
//Unknown keyword: 
      return false;
  }
IAcknexObject SOUND_VOL_BUFFER_0;
float SOUND_VOL_BUFFER_0_val;
IAcknexObject SOUND_VOL_1;
IAcknexObject CDAUDIO_VOL_BUFFER_2;
float CDAUDIO_VOL_BUFFER_2_val;
IAcknexObject CDAUDIO_VOL_3;
}
public class PICKKEY1 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public PICKKEY1() {
  }
 public PICKKEY1(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetFloat(204,1f);
TICKETSND_3 = _world.AcknexObject.GetAcknexObject(1664629430);
_world.PlaySound(TICKETSND_3,0.5f, null);
KEY1_6 = _world.GetObject(ObjectType.Skill,2089248007);
KEY1_6.SetFloat(231,1f);
GET03STR_7 = _world.AcknexObject.GetAcknexObject(2296056041);
_world.SetSynonymObject(361798934,GET03STR_7);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject TICKETSND_3;
IAcknexObject KEY1_6;
IAcknexObject GET03STR_7;
}
public class PICKKEY2 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public PICKKEY2() {
  }
 public PICKKEY2(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetFloat(204,1f);
KEYSND_3 = _world.AcknexObject.GetAcknexObject(3152331707);
_world.PlaySound(KEYSND_3,0.5f, null);
KEY2_6 = _world.GetObject(ObjectType.Skill,2089248008);
KEY2_6.SetFloat(231,1f);
GET04STR_7 = _world.AcknexObject.GetAcknexObject(2296091978);
_world.SetSynonymObject(361798934,GET04STR_7);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject KEYSND_3;
IAcknexObject KEY2_6;
IAcknexObject GET04STR_7;
}
public class PICKUPLOCALMP5 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public PICKUPLOCALMP5() {
  }
 public PICKUPLOCALMP5(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = new PICKUPMP5();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
}
public class ENDPHASE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public ENDPHASE() {
  }
 public ENDPHASE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
ENDPHASE_0 = _world.AcknexObject.GetAcknexObject(1109344053);
temp_3 =_world.AcknexObject?.GetAcknexObject(22);
if (temp_3 == ENDPHASE_0)
{
goto CONT;
}
MY_6 = MY;
MY_6.SetAcknexObject(192,null);
ENDPHASE_7 = _world.AcknexObject.GetAcknexObject(1109344053);
_world.AcknexObject.SetAcknexObject(22,ENDPHASE_7);
CONT:
SHOT_SOUND_ON_11 = _world.GetObject(ObjectType.Skill,3372273679);
SHOT_SOUND_ON_11_val = SHOT_SOUND_ON_11.GetFloat(PropertyName.VAL);
if (SHOT_SOUND_ON_11_val > 0f)
{
return false;
}
{
            var enumerator = new SHOWPDABRIEFING();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }_world.AcknexObject.SetAcknexObject(22,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject ENDPHASE_0;
IAcknexObject temp_3;
IAcknexObject MY_6;
IAcknexObject ENDPHASE_7;
IAcknexObject SHOT_SOUND_ON_11;
float SHOT_SOUND_ON_11_val;
}
public class DRKLTURN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DRKLTURN() {
  }
 public DRKLTURN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
WAITTIME_0 = _world.GetObject(ObjectType.Skill,33817649);
WAITTIME_1 = _world.GetObject(ObjectType.Skill,33817649);
WAITTIME_1_val = WAITTIME_1.GetFloat(PropertyName.VAL);
WAITTIME_0.SetFloat(231,64f*UnityEngine.Random.value+16f);
if (UnityEngine.Random.value < 0.07f)
{
{
            var enumerator = new DRKLLISTEN();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
if (UnityEngine.Random.value > 0.95f)
{
RIGHTTURNDRKL_11 = _world.GetObject(ObjectType.Skill,16212225);
RIGHTTURNDRKL_12 = _world.GetObject(ObjectType.Skill,16212225);
RIGHTTURNDRKL_12_val = RIGHTTURNDRKL_12.GetFloat(PropertyName.VAL);
RIGHTTURNDRKL_14 = _world.GetObject(ObjectType.Skill,16212225);
RIGHTTURNDRKL_14_val = RIGHTTURNDRKL_14.GetFloat(PropertyName.VAL);
RIGHTTURNDRKL_20 = _world.GetObject(ObjectType.Skill,16212225);
RIGHTTURNDRKL_20_val = RIGHTTURNDRKL_20.GetFloat(PropertyName.VAL);
RIGHTTURNDRKL_11.SetFloat(231,(RIGHTTURNDRKL_14_val-1f)*(RIGHTTURNDRKL_20_val-1f));
}
RIGHTTURNDRKL_24 = _world.GetObject(ObjectType.Skill,16212225);
RIGHTTURNDRKL_24_val = RIGHTTURNDRKL_24.GetFloat(PropertyName.VAL);
if (RIGHTTURNDRKL_24_val > RIGHTTURNDRKL_24.GetFloat(PropertyName.MAX))
{
{
            var enumerator = new TURNRIGHT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
{
            var enumerator = new TURNLEFT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject WAITTIME_0;
IAcknexObject WAITTIME_1;
float WAITTIME_1_val;
IAcknexObject RIGHTTURNDRKL_11;
IAcknexObject RIGHTTURNDRKL_12;
float RIGHTTURNDRKL_12_val;
IAcknexObject RIGHTTURNDRKL_14;
float RIGHTTURNDRKL_14_val;
IAcknexObject RIGHTTURNDRKL_20;
float RIGHTTURNDRKL_20_val;
IAcknexObject RIGHTTURNDRKL_24;
float RIGHTTURNDRKL_24_val;
}
public class DRKLWAIT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DRKLWAIT() {
  }
 public DRKLWAIT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(176);
if (temp_3 != 4f)
{
goto CONT;
}
MY_6 = MY;
temp_7 =MY_6.GetFloat(205);
if (temp_7 != 1f)
{
goto CONT;
}
return false;
CONT:
MY_10 = MY;
MY_10.SetAcknexObject(189,null);
DRKLJUMP_11 = _world.AcknexObject.GetAcknexObject(2580776150);
MY_13 = MY;
MY_13.SetAcknexObject(192,DRKLJUMP_11);
DRKLFOLLOWATTACK_14 = _world.AcknexObject.GetAcknexObject(908617765);
MY_16 = MY;
MY_16.SetAcknexObject(193,DRKLFOLLOWATTACK_14);
CYCLEDRKLATTACK_17 = _world.AcknexObject.GetAcknexObject(1078179746);
MY_19 = MY;
MY_19.SetAcknexObject(190,CYCLEDRKLATTACK_17);
DRKLHIT_20 = _world.AcknexObject.GetAcknexObject(989257407);
MY_22 = MY;
MY_22.SetAcknexObject(209,DRKLHIT_20);
MY_25 = MY;
MY_25.SetFloat(213,0f);
MY_28 = MY;
MY_28.SetFloat(165,-0.05f);
MY_31 = MY;
MY_31.SetFloat(176,0f);
DRKL0TEX_32 = _world.AcknexObject.GetAcknexObject(2579840443);
MY_34 = MY;
MY_34.SetAcknexObject(164,DRKL0TEX_32);
MY_37 = MY;
MY_37.SetFloat(168,0f);
MY_40 = MY;
MY_40.SetAcknexObject(199,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_6;
float temp_7;
IAcknexObject MY_10;
IAcknexObject DRKLJUMP_11;
IAcknexObject MY_13;
IAcknexObject DRKLFOLLOWATTACK_14;
IAcknexObject MY_16;
IAcknexObject CYCLEDRKLATTACK_17;
IAcknexObject MY_19;
IAcknexObject DRKLHIT_20;
IAcknexObject MY_22;
IAcknexObject MY_25;
IAcknexObject MY_28;
IAcknexObject MY_31;
IAcknexObject DRKL0TEX_32;
IAcknexObject MY_34;
IAcknexObject MY_37;
IAcknexObject MY_40;
}
public class DRKLWANDER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DRKLWANDER() {
  }
 public DRKLWANDER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(189,null);
DRKLJUMP_3 = _world.AcknexObject.GetAcknexObject(2580776150);
MY_5 = MY;
MY_5.SetAcknexObject(192,DRKLJUMP_3);
DRKLFOLLOWATTACK_6 = _world.AcknexObject.GetAcknexObject(908617765);
MY_8 = MY;
MY_8.SetAcknexObject(193,DRKLFOLLOWATTACK_6);
CYCLEDRKLATTACK_9 = _world.AcknexObject.GetAcknexObject(1078179746);
MY_11 = MY;
MY_11.SetAcknexObject(190,CYCLEDRKLATTACK_9);
DRKLHIT_12 = _world.AcknexObject.GetAcknexObject(989257407);
MY_14 = MY;
MY_14.SetAcknexObject(209,DRKLHIT_12);
MY_17 = MY;
MY_17.SetFloat(213,0f);
MY_20 = MY;
MY_20.SetFloat(176,1f);
DRKL1TEX_21 = _world.AcknexObject.GetAcknexObject(2579876380);
MY_23 = MY;
MY_23.SetAcknexObject(164,DRKL1TEX_21);
MY_26 = MY;
MY_26.SetFloat(168,1f);
BULLET_27 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_29 = MY;
MY_29.SetAcknexObject(199,BULLET_27);
{
            var enumerator = new LOCATEACTOR();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject DRKLJUMP_3;
IAcknexObject MY_5;
IAcknexObject DRKLFOLLOWATTACK_6;
IAcknexObject MY_8;
IAcknexObject CYCLEDRKLATTACK_9;
IAcknexObject MY_11;
IAcknexObject DRKLHIT_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject DRKL1TEX_21;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject BULLET_27;
IAcknexObject MY_29;
}
public class DRKLSEARCH : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DRKLSEARCH() {
  }
 public DRKLSEARCH(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(189,null);
MY_5 = MY;
MY_5.SetAcknexObject(192,null);
MY_8 = MY;
MY_8.SetAcknexObject(193,null);
DRKLHIT_9 = _world.AcknexObject.GetAcknexObject(989257407);
MY_11 = MY;
MY_11.SetAcknexObject(209,DRKLHIT_9);
MY_14 = MY;
MY_14.SetFloat(213,0f);
{
            var enumerator = new LOCATEACTOR();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new LOOKPLAYER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_17 = MY;
temp_18 =MY_17.GetFloat(181);
if (temp_18 == 0f)
{
{
            var enumerator = new DRKLWAIT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
{
            var enumerator = new DRKLFOLLOWATTACK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject DRKLHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
float temp_18;
}
public class DRKLHIDE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DRKLHIDE() {
  }
 public DRKLHIDE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
MY_2 = MY;
MY_2.SetFloat(207,1f);
MY_5 = MY;
MY_5.SetAcknexObject(189,null);
DRKLESCAPE_6 = _world.AcknexObject.GetAcknexObject(1357105963);
MY_8 = MY;
MY_8.SetAcknexObject(192,DRKLESCAPE_6);
MY_11 = MY;
MY_11.SetAcknexObject(193,null);
CYCLEDRKLHIDE_12 = _world.AcknexObject.GetAcknexObject(3582341508);
MY_14 = MY;
MY_14.SetAcknexObject(190,CYCLEDRKLHIDE_12);
DRKLHIT_15 = _world.AcknexObject.GetAcknexObject(989257407);
MY_17 = MY;
MY_17.SetAcknexObject(209,DRKLHIT_15);
MY_20 = MY;
MY_20.SetFloat(213,0f);
{
            var enumerator = new LOCATEACTOR();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_23 = MY;
temp_24 =MY_23.GetFloat(176);
if (temp_24 == 4f)
{
goto HIDDING;
}
MY_27 = MY;
MY_27.SetFloat(176,4f);
MY_29 = MY;
MY_31 = MY;
temp_32 =MY_31.GetFloat(194);
PLAYER_ANGLE_33 = _world.GetObject(ObjectType.Skill,462);
PLAYER_ANGLE_33_val = PLAYER_ANGLE_33.GetFloat(PropertyName.VAL);
MY_29.SetFloat(194,PLAYER_ANGLE_33_val+(UnityEngine.Random.value-0.5f)*2.4f);
DRKL1TEX_42 = _world.AcknexObject.GetAcknexObject(2579876380);
MY_44 = MY;
MY_44.SetAcknexObject(164,DRKL1TEX_42);
MY_47 = MY;
MY_47.SetFloat(172,20f);
MY_50 = MY;
MY_50.SetFloat(168,0.6f);
BULLET_51 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_53 = MY;
MY_53.SetAcknexObject(199,BULLET_51);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)384f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_57 = MY;
temp_58 =MY_57.GetFloat(173);
if (temp_58 > 5f)
{
return false;
}
MY_61 = MY;
temp_62 =MY_61.GetFloat(173);
MY_64 = MY;
MY_64.SetFloat(173,temp_62 + -2f);
{
            var enumerator = new DRKLWANDER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
HIDDING:
MY_66 = MY;
MY_68 = MY;
temp_69 =MY_68.GetFloat(194);
PLAYER_ANGLE_70 = _world.GetObject(ObjectType.Skill,462);
PLAYER_ANGLE_70_val = PLAYER_ANGLE_70.GetFloat(PropertyName.VAL);
MY_66.SetFloat(194,PLAYER_ANGLE_70_val+(UnityEngine.Random.value-0.5f)*2.4f);
DRKL1TEX_79 = _world.AcknexObject.GetAcknexObject(2579876380);
MY_81 = MY;
MY_81.SetAcknexObject(164,DRKL1TEX_79);
MY_84 = MY;
MY_84.SetFloat(172,20f);
MY_87 = MY;
MY_87.SetFloat(168,0.6f);
BULLET_88 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_90 = MY;
MY_90.SetAcknexObject(199,BULLET_88);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject DRKLESCAPE_6;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject CYCLEDRKLHIDE_12;
IAcknexObject MY_14;
IAcknexObject DRKLHIT_15;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject MY_23;
float temp_24;
IAcknexObject MY_27;
IAcknexObject MY_29;
IAcknexObject MY_31;
float temp_32;
IAcknexObject PLAYER_ANGLE_33;
float PLAYER_ANGLE_33_val;
IAcknexObject DRKL1TEX_42;
IAcknexObject MY_44;
IAcknexObject MY_47;
IAcknexObject MY_50;
IAcknexObject BULLET_51;
IAcknexObject MY_53;
float startTime1;
float endTime1;
IAcknexObject MY_57;
float temp_58;
IAcknexObject MY_61;
float temp_62;
IAcknexObject MY_64;
IAcknexObject MY_66;
IAcknexObject MY_68;
float temp_69;
IAcknexObject PLAYER_ANGLE_70;
float PLAYER_ANGLE_70_val;
IAcknexObject DRKL1TEX_79;
IAcknexObject MY_81;
IAcknexObject MY_84;
IAcknexObject MY_87;
IAcknexObject BULLET_88;
IAcknexObject MY_90;
}
public class DRKLLISTEN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DRKLLISTEN() {
  }
 public DRKLLISTEN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(176);
if (temp_3 != 4f)
{
goto CONT;
}
MY_6 = MY;
temp_7 =MY_6.GetFloat(205);
if (temp_7 != 1f)
{
goto CONT;
}
return false;
CONT:
MY_10 = MY;
temp_11 =MY_10.GetFloat(202);
if (temp_11 > 100f)
{
goto CONT1;
}
MY_14 = MY;
temp_15 =MY_14.GetFloat(182);
if (temp_15 == 0f)
{
goto CONT1;
}
return false;
CONT1:
MY_18 = MY;
MY_18.SetAcknexObject(192,null);
MY_21 = MY;
MY_21.SetAcknexObject(193,null);
CYCLEDRKLATTACK_22 = _world.AcknexObject.GetAcknexObject(1078179746);
MY_24 = MY;
MY_24.SetAcknexObject(190,CYCLEDRKLATTACK_22);
DRKLHIT_25 = _world.AcknexObject.GetAcknexObject(989257407);
MY_27 = MY;
MY_27.SetAcknexObject(209,DRKLHIT_25);
MY_30 = MY;
MY_30.SetFloat(213,0f);
MY_33 = MY;
MY_33.SetFloat(176,0f);
DRKL0TEX_34 = _world.AcknexObject.GetAcknexObject(2579840443);
MY_36 = MY;
MY_36.SetAcknexObject(164,DRKL0TEX_34);
MY_39 = MY;
MY_39.SetFloat(168,0f);
MY_42 = MY;
MY_42.SetAcknexObject(199,null);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)120f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_46 = MY;
temp_47 =MY_46.GetFloat(173);
if (temp_47 < 9f)
{
{
            var enumerator = new DRKLWANDER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_6;
float temp_7;
IAcknexObject MY_10;
float temp_11;
IAcknexObject MY_14;
float temp_15;
IAcknexObject MY_18;
IAcknexObject MY_21;
IAcknexObject CYCLEDRKLATTACK_22;
IAcknexObject MY_24;
IAcknexObject DRKLHIT_25;
IAcknexObject MY_27;
IAcknexObject MY_30;
IAcknexObject MY_33;
IAcknexObject DRKL0TEX_34;
IAcknexObject MY_36;
IAcknexObject MY_39;
IAcknexObject MY_42;
float startTime1;
float endTime1;
IAcknexObject MY_46;
float temp_47;
}
public class DRKLJUMP : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DRKLJUMP() {
  }
 public DRKLJUMP(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(182);
if (temp_3 == 1f)
{
goto BLOODSMELL;
}
{
            var enumerator = new LOOKPLAYER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_6 = MY;
temp_7 =MY_6.GetFloat(181);
if (temp_7 == 0f)
{
return false;
}
BLOODSMELL:
MY_10 = MY;
MY_10.SetAcknexObject(192,null);
DRKLFOLLOWATTACK_11 = _world.AcknexObject.GetAcknexObject(908617765);
MY_13 = MY;
MY_13.SetAcknexObject(193,DRKLFOLLOWATTACK_11);
CYCLEDRKLSHOOT_14 = _world.AcknexObject.GetAcknexObject(2266142359);
MY_16 = MY;
MY_16.SetAcknexObject(190,CYCLEDRKLSHOOT_14);
ACTORJUMP_17 = _world.AcknexObject.GetAcknexObject(1531531490);
MY_19 = MY;
MY_19.SetAcknexObject(189,ACTORJUMP_17);
MY_22 = MY;
MY_22.SetFloat(176,0f);
DRKL2TEX_23 = _world.AcknexObject.GetAcknexObject(2579912317);
MY_25 = MY;
MY_25.SetAcknexObject(164,DRKL2TEX_23);
if (UnityEngine.Random.value < 0.5f)
{
DRKL2ATEX_28 = _world.AcknexObject.GetAcknexObject(3532028830);
MY_30 = MY;
MY_30.SetAcknexObject(164,DRKL2ATEX_28);
}
MY_33 = MY;
MY_33.SetFloat(168,1.5f);
MY_36 = MY;
MY_36.SetFloat(169,0.5f);
MY_39 = MY;
MY_39.SetFloat(213,1f);
MOVE_40 = _world.AcknexObject.GetAcknexObject(2089330692);
MY_42 = MY;
MY_42.SetAcknexObject(199,MOVE_40);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_6;
float temp_7;
IAcknexObject MY_10;
IAcknexObject DRKLFOLLOWATTACK_11;
IAcknexObject MY_13;
IAcknexObject CYCLEDRKLSHOOT_14;
IAcknexObject MY_16;
IAcknexObject ACTORJUMP_17;
IAcknexObject MY_19;
IAcknexObject MY_22;
IAcknexObject DRKL2TEX_23;
IAcknexObject MY_25;
IAcknexObject DRKL2ATEX_28;
IAcknexObject MY_30;
IAcknexObject MY_33;
IAcknexObject MY_36;
IAcknexObject MY_39;
IAcknexObject MOVE_40;
IAcknexObject MY_42;
}
public class DRKLLOOKFOR : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DRKLLOOKFOR() {
  }
 public DRKLLOOKFOR(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(176);
if (temp_3 == 10f)
{
return false;
}
MY_6 = MY;
temp_7 =MY_6.GetFloat(176);
if (temp_7 == 4f)
{
return false;
}
MY_10 = MY;
temp_11 =MY_10.GetFloat(202);
if (temp_11 > 100f)
{
return false;
}
MY_14 = MY;
temp_15 =MY_14.GetFloat(182);
if (temp_15 == 1f)
{
{
            var enumerator = new DRKLFOLLOWATTACK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
FOLLOW_16 = _world.AcknexObject.GetAcknexObject(2968039200);
MY_18 = MY;
temp_19 =MY_18?.GetAcknexObject(199);
if (temp_19 == FOLLOW_16)
{
return false;
}
MY_22 = MY;
temp_23 =MY_22.GetFloat(173);
if (temp_23 > 5f)
{
return false;
}
DRKLJUMP_24 = _world.AcknexObject.GetAcknexObject(2580776150);
MY_26 = MY;
MY_26.SetAcknexObject(192,DRKLJUMP_24);
DRKLFOLLOWATTACK_27 = _world.AcknexObject.GetAcknexObject(908617765);
MY_29 = MY;
MY_29.SetAcknexObject(193,DRKLFOLLOWATTACK_27);
DRKLHEAR_30 = _world.AcknexObject.GetAcknexObject(2580686458);
MY_32 = MY;
MY_32.SetAcknexObject(190,DRKLHEAR_30);
DRKLHIT_33 = _world.AcknexObject.GetAcknexObject(989257407);
MY_35 = MY;
MY_35.SetAcknexObject(209,DRKLHIT_33);
MY_38 = MY;
MY_38.SetFloat(213,0f);
MY_41 = MY;
MY_41.SetFloat(176,10f);
DRKL0UPTEX_42 = _world.AcknexObject.GetAcknexObject(538122080);
MY_44 = MY;
MY_44.SetAcknexObject(164,DRKL0UPTEX_42);
MY_47 = MY;
MY_47.SetFloat(168,0f);
BULLET_48 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_50 = MY;
MY_50.SetAcknexObject(199,BULLET_48);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_6;
float temp_7;
IAcknexObject MY_10;
float temp_11;
IAcknexObject MY_14;
float temp_15;
IAcknexObject FOLLOW_16;
IAcknexObject MY_18;
IAcknexObject temp_19;
IAcknexObject MY_22;
float temp_23;
IAcknexObject DRKLJUMP_24;
IAcknexObject MY_26;
IAcknexObject DRKLFOLLOWATTACK_27;
IAcknexObject MY_29;
IAcknexObject DRKLHEAR_30;
IAcknexObject MY_32;
IAcknexObject DRKLHIT_33;
IAcknexObject MY_35;
IAcknexObject MY_38;
IAcknexObject MY_41;
IAcknexObject DRKL0UPTEX_42;
IAcknexObject MY_44;
IAcknexObject MY_47;
IAcknexObject BULLET_48;
IAcknexObject MY_50;
}
public class DRKLHEAR : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DRKLHEAR() {
  }
 public DRKLHEAR(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
DRKLJUMP_0 = _world.AcknexObject.GetAcknexObject(2580776150);
MY_2 = MY;
MY_2.SetAcknexObject(192,DRKLJUMP_0);
DRKLFOLLOWATTACK_3 = _world.AcknexObject.GetAcknexObject(908617765);
MY_5 = MY;
MY_5.SetAcknexObject(193,DRKLFOLLOWATTACK_3);
DRKLDOWN_6 = _world.AcknexObject.GetAcknexObject(2580554322);
MY_8 = MY;
MY_8.SetAcknexObject(190,DRKLDOWN_6);
MY_11 = MY;
MY_11.SetFloat(176,10f);
DRKL0TEX_12 = _world.AcknexObject.GetAcknexObject(2579840443);
MY_14 = MY;
MY_14.SetAcknexObject(164,DRKL0TEX_12);
MY_17 = MY;
MY_17.SetFloat(168,0f);
FOLLOW_18 = _world.AcknexObject.GetAcknexObject(2968039200);
MY_20 = MY;
MY_20.SetAcknexObject(199,FOLLOW_18);
MY_23 = MY;
MY_23.SetFloat(213,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject DRKLJUMP_0;
IAcknexObject MY_2;
IAcknexObject DRKLFOLLOWATTACK_3;
IAcknexObject MY_5;
IAcknexObject DRKLDOWN_6;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject DRKL0TEX_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject FOLLOW_18;
IAcknexObject MY_20;
IAcknexObject MY_23;
}
public class DRKLDOWN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DRKLDOWN() {
  }
 public DRKLDOWN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
DRKLJUMP_0 = _world.AcknexObject.GetAcknexObject(2580776150);
MY_2 = MY;
MY_2.SetAcknexObject(192,DRKLJUMP_0);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
DRKLSEARCH_6 = _world.AcknexObject.GetAcknexObject(1888344784);
MY_8 = MY;
MY_8.SetAcknexObject(190,DRKLSEARCH_6);
MY_11 = MY;
MY_11.SetFloat(213,0f);
MY_14 = MY;
MY_14.SetFloat(176,10f);
DRKL0DNTEX_15 = _world.AcknexObject.GetAcknexObject(517889549);
MY_17 = MY;
MY_17.SetAcknexObject(164,DRKL0DNTEX_15);
MY_20 = MY;
MY_20.SetFloat(168,0f);
BULLET_21 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_23 = MY;
MY_23.SetAcknexObject(199,BULLET_21);
//Unknown keyword: 
      return false;
  }
IAcknexObject DRKLJUMP_0;
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject DRKLSEARCH_6;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject DRKL0DNTEX_15;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject BULLET_21;
IAcknexObject MY_23;
}
public class DRKLFOLLOWATTACK : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DRKLFOLLOWATTACK() {
  }
 public DRKLFOLLOWATTACK(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
DRKLJUMP_0 = _world.AcknexObject.GetAcknexObject(2580776150);
MY_2 = MY;
MY_2.SetAcknexObject(192,DRKLJUMP_0);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
CYCLEDRKLSHOOT_6 = _world.AcknexObject.GetAcknexObject(2266142359);
MY_8 = MY;
MY_8.SetAcknexObject(190,CYCLEDRKLSHOOT_6);
DRKLHIT_9 = _world.AcknexObject.GetAcknexObject(989257407);
MY_11 = MY;
MY_11.SetAcknexObject(209,DRKLHIT_9);
MY_14 = MY;
MY_14.SetFloat(213,0f);
MY_17 = MY;
MY_17.SetFloat(176,2f);
DRKL1TEX_18 = _world.AcknexObject.GetAcknexObject(2579876380);
MY_20 = MY;
MY_20.SetAcknexObject(164,DRKL1TEX_18);
MY_23 = MY;
MY_23.SetFloat(168,1.2f);
BULLET_24 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_26 = MY;
MY_26.SetAcknexObject(199,BULLET_24);
{
            var enumerator = new LOCATEACTOR();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new FOLLOWANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject DRKLJUMP_0;
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject CYCLEDRKLSHOOT_6;
IAcknexObject MY_8;
IAcknexObject DRKLHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject DRKL1TEX_18;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject BULLET_24;
IAcknexObject MY_26;
}
public class DRKLSHOOT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DRKLSHOOT() {
  }
 public DRKLSHOOT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
DRKLFOLLOWATTACK_3 = _world.AcknexObject.GetAcknexObject(908617765);
MY_5 = MY;
MY_5.SetAcknexObject(193,DRKLFOLLOWATTACK_3);
CYCLEDRKLSHOOT_6 = _world.AcknexObject.GetAcknexObject(2266142359);
MY_8 = MY;
MY_8.SetAcknexObject(190,CYCLEDRKLSHOOT_6);
DRKLHIT_9 = _world.AcknexObject.GetAcknexObject(989257407);
MY_11 = MY;
MY_11.SetAcknexObject(209,DRKLHIT_9);
MY_14 = MY;
MY_14.SetFloat(213,0f);
MY_17 = MY;
MY_17.SetFloat(176,3f);
DRKL3TEX_18 = _world.AcknexObject.GetAcknexObject(2579948254);
MY_20 = MY;
MY_20.SetAcknexObject(164,DRKL3TEX_18);
MY_23 = MY;
MY_23.SetFloat(168,0f);
FOLLOW_24 = _world.AcknexObject.GetAcknexObject(2968039200);
MY_26 = MY;
MY_26.SetAcknexObject(199,FOLLOW_24);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject DRKLFOLLOWATTACK_3;
IAcknexObject MY_5;
IAcknexObject CYCLEDRKLSHOOT_6;
IAcknexObject MY_8;
IAcknexObject DRKLHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject DRKL3TEX_18;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject FOLLOW_24;
IAcknexObject MY_26;
}
public class DRKLESCAPE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DRKLESCAPE() {
  }
 public DRKLESCAPE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
DRKLHIDE_3 = _world.AcknexObject.GetAcknexObject(2580690900);
MY_5 = MY;
MY_5.SetAcknexObject(193,DRKLHIDE_3);
CYCLEDRKLHIDE_6 = _world.AcknexObject.GetAcknexObject(3582341508);
MY_8 = MY;
MY_8.SetAcknexObject(190,CYCLEDRKLHIDE_6);
DRKLHIT_9 = _world.AcknexObject.GetAcknexObject(989257407);
MY_11 = MY;
MY_11.SetAcknexObject(209,DRKLHIT_9);
MY_14 = MY;
MY_14.SetFloat(213,0f);
{
            var enumerator = new LOCATEACTOR();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_17 = MY;
MY_17.SetFloat(176,4f);
DRKL1TEX_18 = _world.AcknexObject.GetAcknexObject(2579876380);
MY_20 = MY;
MY_20.SetAcknexObject(164,DRKL1TEX_18);
MY_23 = MY;
MY_23.SetFloat(172,30f);
MY_26 = MY;
MY_26.SetFloat(168,0.4f);
BULLET_27 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_29 = MY;
MY_29.SetAcknexObject(199,BULLET_27);
{
            var enumerator = new REPELANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject DRKLHIDE_3;
IAcknexObject MY_5;
IAcknexObject CYCLEDRKLHIDE_6;
IAcknexObject MY_8;
IAcknexObject DRKLHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject DRKL1TEX_18;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject BULLET_27;
IAcknexObject MY_29;
}
public class DRKLDEAD : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DRKLDEAD() {
  }
 public DRKLDEAD(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
MY_8 = MY;
MY_8.SetAcknexObject(209,null);
MY_11 = MY;
MY_11.SetAcknexObject(190,null);
MY_14 = MY;
MY_14.SetFloat(213,0f);
MY_17 = MY;
MY_17.SetFloat(176,9f);
DRKL9TEX_18 = _world.AcknexObject.GetAcknexObject(2580163876);
MY_20 = MY;
MY_20.SetAcknexObject(164,DRKL9TEX_18);
MY_23 = MY;
MY_23.SetFloat(168,0f);
MY_26 = MY;
MY_26.SetAcknexObject(199,null);
MY_29 = MY;
MY_29.SetFloat(206,1f);
MY_32 = MY;
MY_32.SetFloat(207,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject DRKL9TEX_18;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject MY_29;
IAcknexObject MY_32;
}
public class DRKLDIE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DRKLDIE() {
  }
 public DRKLDIE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetFloat(173,10f);
MY_5 = MY;
MY_5.SetAcknexObject(192,null);
MY_8 = MY;
MY_8.SetAcknexObject(193,null);
MY_11 = MY;
MY_11.SetAcknexObject(209,null);
DRKLDEAD_12 = _world.AcknexObject.GetAcknexObject(2580542696);
MY_14 = MY;
MY_14.SetAcknexObject(190,DRKLDEAD_12);
MY_17 = MY;
MY_17.SetFloat(176,8f);
DRKL8TEX_18 = _world.AcknexObject.GetAcknexObject(2580127939);
MY_20 = MY;
MY_20.SetAcknexObject(164,DRKL8TEX_18);
MY_23 = MY;
MY_23.SetFloat(168,0f);
MY_26 = MY;
MY_26.SetFloat(213,0f);
MY_29 = MY;
MY_29.SetFloat(165,-0.05f);
MY_32 = MY;
MY_32.SetAcknexObject(199,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject DRKLDEAD_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject DRKL8TEX_18;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject MY_29;
IAcknexObject MY_32;
}
public class DRKLIMPLODE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DRKLIMPLODE() {
  }
 public DRKLIMPLODE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
DISTX_0 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_1 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_1_val = DISTX_1.GetFloat(PropertyName.VAL);
MY_4 = MY;
temp_5 =MY_4.GetFloat(195);
EXPLOSION_CENTER_8 = _world.GetSynonymObject(3704223598);
temp_9 =EXPLOSION_CENTER_8.GetFloat(195);
MY_14 = MY;
temp_15 =MY_14.GetFloat(195);
EXPLOSION_CENTER_18 = _world.GetSynonymObject(3704223598);
temp_19 =EXPLOSION_CENTER_18.GetFloat(195);
MY_24 = MY;
temp_25 =MY_24.GetFloat(196);
EXPLOSION_CENTER_28 = _world.GetSynonymObject(3704223598);
temp_29 =EXPLOSION_CENTER_28.GetFloat(196);
MY_34 = MY;
temp_35 =MY_34.GetFloat(196);
EXPLOSION_CENTER_38 = _world.GetSynonymObject(3704223598);
temp_39 =EXPLOSION_CENTER_38.GetFloat(196);
DISTX_0.SetFloat(231,(temp_5-temp_9)*(temp_15-temp_19)+(temp_25-temp_29)*(temp_35-temp_39));
DISTX_41 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_41_val = DISTX_41.GetFloat(PropertyName.VAL);
DISTX_42 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_42.SetFloat(231,MathUtils.Sqrt(DISTX_41_val));
DISTZ_43 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_44 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_44_val = DISTZ_44.GetFloat(PropertyName.VAL);
MY_46 = MY;
temp_47 =MY_46.GetFloat(165);
EXPLOSION_CENTER_50 = _world.GetSynonymObject(3704223598);
temp_51 =EXPLOSION_CENTER_50.GetFloat(165);
DISTZ_43.SetFloat(231,temp_47-temp_51);
DISTX_53 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_53_val = DISTX_53.GetFloat(PropertyName.VAL);
if (DISTX_53_val > 10f)
{
{
            var enumerator = new BEAMREACT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MY_56 = MY;
MY_56.SetFloat(206,1f);
MY_59 = MY;
MY_59.SetFloat(207,0f);
MY_62 = MY;
MY_62.SetAcknexObject(192,null);
MY_65 = MY;
MY_65.SetAcknexObject(193,null);
MY_68 = MY;
MY_68.SetAcknexObject(209,null);
VANISHFORGOOD_69 = _world.AcknexObject.GetAcknexObject(1333438470);
MY_71 = MY;
MY_71.SetAcknexObject(190,VANISHFORGOOD_69);
MY_74 = MY;
MY_74.SetFloat(176,8f);
DRKL0ATEX_75 = _world.AcknexObject.GetAcknexObject(3529656988);
MY_77 = MY;
MY_77.SetAcknexObject(164,DRKL0ATEX_75);
MY_80 = MY;
MY_80.SetFloat(168,0f);
MY_83 = MY;
MY_83.SetAcknexObject(199,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject DISTX_0;
IAcknexObject DISTX_1;
float DISTX_1_val;
IAcknexObject MY_4;
float temp_5;
IAcknexObject EXPLOSION_CENTER_8;
float temp_9;
IAcknexObject MY_14;
float temp_15;
IAcknexObject EXPLOSION_CENTER_18;
float temp_19;
IAcknexObject MY_24;
float temp_25;
IAcknexObject EXPLOSION_CENTER_28;
float temp_29;
IAcknexObject MY_34;
float temp_35;
IAcknexObject EXPLOSION_CENTER_38;
float temp_39;
IAcknexObject DISTX_41;
float DISTX_41_val;
IAcknexObject DISTX_42;
IAcknexObject DISTZ_43;
IAcknexObject DISTZ_44;
float DISTZ_44_val;
IAcknexObject MY_46;
float temp_47;
IAcknexObject EXPLOSION_CENTER_50;
float temp_51;
IAcknexObject DISTX_53;
float DISTX_53_val;
IAcknexObject MY_56;
IAcknexObject MY_59;
IAcknexObject MY_62;
IAcknexObject MY_65;
IAcknexObject MY_68;
IAcknexObject VANISHFORGOOD_69;
IAcknexObject MY_71;
IAcknexObject MY_74;
IAcknexObject DRKL0ATEX_75;
IAcknexObject MY_77;
IAcknexObject MY_80;
IAcknexObject MY_83;
}
public class DRKLHIT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DRKLHIT() {
  }
 public DRKLHIT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat(PropertyName.VAL);
if (SHOOT_FAC_1_val == 0f)
{
goto OBSTACLE;
}
MY_2 = MY;
HIT_3 = _world.GetSynonymObject(704);
if (HIT_3 != MY_2)
{
goto EXPLOSION;
}
_world.SetSynonymObject(704,null);
goto CONT;
EXPLOSION:
EXPLOSION_ON_7 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_7_val = EXPLOSION_ON_7.GetFloat(PropertyName.VAL);
if (EXPLOSION_ON_7_val == 0f)
{
goto OBSTACLE;
}
DISTX_8 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_9 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_9_val = DISTX_9.GetFloat(PropertyName.VAL);
MY_12 = MY;
temp_13 =MY_12.GetFloat(195);
EXPLOSION_CENTER_16 = _world.GetSynonymObject(3704223598);
temp_17 =EXPLOSION_CENTER_16.GetFloat(195);
MY_22 = MY;
temp_23 =MY_22.GetFloat(195);
EXPLOSION_CENTER_26 = _world.GetSynonymObject(3704223598);
temp_27 =EXPLOSION_CENTER_26.GetFloat(195);
MY_32 = MY;
temp_33 =MY_32.GetFloat(196);
EXPLOSION_CENTER_36 = _world.GetSynonymObject(3704223598);
temp_37 =EXPLOSION_CENTER_36.GetFloat(196);
MY_42 = MY;
temp_43 =MY_42.GetFloat(196);
EXPLOSION_CENTER_46 = _world.GetSynonymObject(3704223598);
temp_47 =EXPLOSION_CENTER_46.GetFloat(196);
DISTX_8.SetFloat(231,(temp_13-temp_17)*(temp_23-temp_27)+(temp_33-temp_37)*(temp_43-temp_47));
DISTX_49 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_49_val = DISTX_49.GetFloat(PropertyName.VAL);
DISTX_50 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_50.SetFloat(231,MathUtils.Sqrt(DISTX_49_val));
DISTX_52 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_52_val = DISTX_52.GetFloat(PropertyName.VAL);
if (DISTX_52_val > 25f)
{
goto OBSTACLE;
}
HIT:
EXPLOSION_ON_54 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_54_val = EXPLOSION_ON_54.GetFloat(PropertyName.VAL);
if (EXPLOSION_ON_54_val != 2f)
{
goto CONT;
}
MY_57 = MY;
temp_58 =MY_57.GetFloat(205);
if (temp_58 == 1f)
{
{
            var enumerator = new DRKLIMPLODE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
CONT:
MY_60 = MY;
MY_62 = MY;
temp_63 =MY_62.GetFloat(173);
MY_65 = MY;
temp_66 =MY_65.GetFloat(173);
SHOOT_FAC_68 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_68_val = SHOOT_FAC_68.GetFloat(PropertyName.VAL);
MY_60.SetFloat(173,temp_66+SHOOT_FAC_68_val*(UnityEngine.Random.value+2f)/3f);
MY_79 = MY;
temp_80 =MY_79.GetFloat(173);
if (temp_80 > 5f)
{
goto DIE;
}
if (UnityEngine.Random.value < 0.05f)
{
goto DIE;
}
MY_84 = MY;
temp_85 =MY_84?.GetAcknexObject(164);
_world.SetSynonymObject(2581529482,temp_85);
DRKL5TEX_87 = _world.AcknexObject.GetAcknexObject(2580020128);
MY_89 = MY;
MY_89.SetAcknexObject(164,DRKL5TEX_87);
MY_92 = MY;
MY_92.SetAcknexObject(192,null);
MY_95 = MY;
MY_95.SetAcknexObject(193,null);
MY_98 = MY;
MY_98.SetAcknexObject(209,null);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)6f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
DRKLHIT_100 = _world.AcknexObject.GetAcknexObject(989257407);
MY_102 = MY;
MY_102.SetAcknexObject(209,DRKLHIT_100);
DRKL_TEX_103 = _world.GetSynonymObject(2581529482);
MY_105 = MY;
MY_105.SetAcknexObject(164,DRKL_TEX_103);
MY_108 = MY;
temp_109 =MY_108.GetFloat(173);
if (temp_109 > 4f)
{
{
            var enumerator = new DRKLHIDE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MY_112 = MY;
temp_113 =MY_112.GetFloat(176);
if (temp_113 != 4f)
{
{
            var enumerator = new DRKLFOLLOWATTACK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
return false;
DIE:
MY_116 = MY;
MY_116.SetFloat(173,10f);
{
            var enumerator = new DRKLDIE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
return false;
OBSTACLE:
{
            var enumerator = new DRKLTURN();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject SHOOT_FAC_1;
float SHOOT_FAC_1_val;
IAcknexObject MY_2;
IAcknexObject HIT_3;
IAcknexObject EXPLOSION_ON_7;
float EXPLOSION_ON_7_val;
IAcknexObject DISTX_8;
IAcknexObject DISTX_9;
float DISTX_9_val;
IAcknexObject MY_12;
float temp_13;
IAcknexObject EXPLOSION_CENTER_16;
float temp_17;
IAcknexObject MY_22;
float temp_23;
IAcknexObject EXPLOSION_CENTER_26;
float temp_27;
IAcknexObject MY_32;
float temp_33;
IAcknexObject EXPLOSION_CENTER_36;
float temp_37;
IAcknexObject MY_42;
float temp_43;
IAcknexObject EXPLOSION_CENTER_46;
float temp_47;
IAcknexObject DISTX_49;
float DISTX_49_val;
IAcknexObject DISTX_50;
IAcknexObject DISTX_52;
float DISTX_52_val;
IAcknexObject EXPLOSION_ON_54;
float EXPLOSION_ON_54_val;
IAcknexObject MY_57;
float temp_58;
IAcknexObject MY_60;
IAcknexObject MY_62;
float temp_63;
IAcknexObject MY_65;
float temp_66;
IAcknexObject SHOOT_FAC_68;
float SHOOT_FAC_68_val;
IAcknexObject MY_79;
float temp_80;
IAcknexObject MY_84;
IAcknexObject temp_85;
IAcknexObject DRKL5TEX_87;
IAcknexObject MY_89;
IAcknexObject MY_92;
IAcknexObject MY_95;
IAcknexObject MY_98;
float startTime1;
float endTime1;
IAcknexObject DRKLHIT_100;
IAcknexObject MY_102;
IAcknexObject DRKL_TEX_103;
IAcknexObject MY_105;
IAcknexObject MY_108;
float temp_109;
IAcknexObject MY_112;
float temp_113;
IAcknexObject MY_116;
}
public class CYCLEDRKLATTACK : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CYCLEDRKLATTACK() {
  }
 public CYCLEDRKLATTACK(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_2 = MY;
MY_2.SetFloat(213,0f);
MY_5 = MY;
MY_5.SetFloat(165,-0.05f);
MY_8 = MY;
MY_8.SetFloat(169,0f);
MY_11 = MY;
MY_11.SetAcknexObject(189,null);
{
            var enumerator = new DRKLTALK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }SHOT_SOUND_ON_13 = _world.GetObject(ObjectType.Skill,3372273679);
SHOT_SOUND_ON_13_val = SHOT_SOUND_ON_13.GetFloat(PropertyName.VAL);
if (SHOT_SOUND_ON_13_val == 0f)
{
goto CONT;
}
{
            var enumerator = new DRKLLOOKFOR();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }CONT:
{
            var enumerator = new LOOKPLAYER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_16 = MY;
temp_17 =MY_16.GetFloat(181);
if (temp_17 == 0f)
{
return false;
}
MY_20 = MY;
temp_21 =MY_20.GetFloat(182);
if (temp_21 == 1f)
{
goto CONT1;
}
MY_24 = MY;
MY_24.SetFloat(182,1f);
DRKL02SND_25 = _world.AcknexObject.GetAcknexObject(3529117121);
MY_27 = MY;
_world.PlaySound(DRKL02SND_25,0.7f,MY_27);
CONT1:
{
            var enumerator = new DRKLFOLLOWATTACK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject SHOT_SOUND_ON_13;
float SHOT_SOUND_ON_13_val;
IAcknexObject MY_16;
float temp_17;
IAcknexObject MY_20;
float temp_21;
IAcknexObject MY_24;
IAcknexObject DRKL02SND_25;
IAcknexObject MY_27;
}
public class CYCLEDRKLHIDE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CYCLEDRKLHIDE() {
  }
 public CYCLEDRKLHIDE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_2 = MY;
MY_2.SetFloat(213,0f);
MY_5 = MY;
MY_5.SetFloat(165,-0.05f);
MY_8 = MY;
MY_8.SetFloat(169,0f);
MY_11 = MY;
MY_11.SetAcknexObject(189,null);
MY_14 = MY;
temp_15 =MY_14.GetFloat(205);
if (temp_15 == 0f)
{
goto STOP;
}
MY_18 = MY;
MY_18.SetFloat(168,0.6f);
BULLET_19 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_21 = MY;
MY_21.SetAcknexObject(199,BULLET_19);
{
            var enumerator = new REPELANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_23 = MY;
MY_25 = MY;
temp_26 =MY_25.GetFloat(194);
MY_28 = MY;
temp_29 =MY_28.GetFloat(194);
MY_23.SetFloat(194,temp_29+2f*(UnityEngine.Random.value-0.5f));
return false;
STOP:
MY_40 = MY;
MY_40.SetFloat(168,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject MY_14;
float temp_15;
IAcknexObject MY_18;
IAcknexObject BULLET_19;
IAcknexObject MY_21;
IAcknexObject MY_23;
IAcknexObject MY_25;
float temp_26;
IAcknexObject MY_28;
float temp_29;
IAcknexObject MY_40;
}
public class CYCLEDRKLSHOOT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CYCLEDRKLSHOOT() {
  }
 public CYCLEDRKLSHOOT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_2 = MY;
temp_3 =MY_2.GetFloat(173);
if (temp_3 > 9f)
{
{
            var enumerator = new DRKLDIE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MY_6 = MY;
MY_6.SetFloat(213,0f);
MY_9 = MY;
MY_9.SetFloat(165,-0.05f);
MY_12 = MY;
MY_12.SetFloat(169,0f);
MY_15 = MY;
MY_15.SetAcknexObject(189,null);
{
            var enumerator = new LOOKPLAYER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_18 = MY;
temp_19 =MY_18.GetFloat(181);
if (temp_19 == 0f)
{
goto CONTFLAG2;
}
goto PLAYERSEEN;
CONTFLAG2:
MY_22 = MY;
temp_23 =MY_22.GetFloat(182);
if (temp_23 == 1f)
{
goto ATTACK;
}
{
            var enumerator = new DRKLWAIT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
PLAYERSEEN:
MY_26 = MY;
temp_27 =MY_26.GetFloat(202);
if (temp_27 < 5f)
{
goto CONT;
}
DRKLDELTA_28 = _world.GetObject(ObjectType.Skill,3553510916);
DRKLDELTA_29 = _world.GetObject(ObjectType.Skill,3553510916);
DRKLDELTA_29_val = DRKLDELTA_29.GetFloat(PropertyName.VAL);
MY_32 = MY;
temp_33 =MY_32.GetFloat(179);
MY_36 = MY;
temp_37 =MY_36.GetFloat(195);
MY_42 = MY;
temp_43 =MY_42.GetFloat(179);
MY_46 = MY;
temp_47 =MY_46.GetFloat(195);
MY_52 = MY;
temp_53 =MY_52.GetFloat(180);
MY_56 = MY;
temp_57 =MY_56.GetFloat(196);
MY_62 = MY;
temp_63 =MY_62.GetFloat(180);
MY_66 = MY;
temp_67 =MY_66.GetFloat(196);
DRKLDELTA_28.SetFloat(231,(temp_33-temp_37)*(temp_43-temp_47)+(temp_53-temp_57)*(temp_63-temp_67));
MY_70 = MY;
temp_71 =MY_70.GetFloat(195);
MY_73 = MY;
MY_73.SetFloat(179,temp_71);
MY_75 = MY;
temp_76 =MY_75.GetFloat(196);
MY_78 = MY;
MY_78.SetFloat(180,temp_76);
DRKLDELTA_80 = _world.GetObject(ObjectType.Skill,3553510916);
DRKLDELTA_80_val = DRKLDELTA_80.GetFloat(PropertyName.VAL);
if (DRKLDELTA_80_val < 0.25f)
{
{
            var enumerator = new DRKLJUMP();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
CONT:
MY_83 = MY;
temp_84 =MY_83.GetFloat(202);
if (temp_84 > 10f)
{
goto ATTACK;
}
PLAYER_RESULT_85 = _world.GetObject(ObjectType.Skill,1861765784);
PLAYER_RESULT_86 = _world.GetObject(ObjectType.Skill,1861765784);
PLAYER_RESULT_86_val = PLAYER_RESULT_86.GetFloat(PropertyName.VAL);
DRKLSHOOTFACTOR_87 = _world.GetObject(ObjectType.Skill,3769297958);
DRKLSHOOTFACTOR_87_val = DRKLSHOOTFACTOR_87.GetFloat(PropertyName.VAL);
PLAYER_RESULT_85.SetFloat(231,DRKLSHOOTFACTOR_87_val*(1f+UnityEngine.Random.value));
{
            var enumerator = new HITPLAYERDELAY();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new DRKLSHOOT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
ATTACK:
{
            var enumerator = new DRKLFOLLOWATTACK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_6;
IAcknexObject MY_9;
IAcknexObject MY_12;
IAcknexObject MY_15;
IAcknexObject MY_18;
float temp_19;
IAcknexObject MY_22;
float temp_23;
IAcknexObject MY_26;
float temp_27;
IAcknexObject DRKLDELTA_28;
IAcknexObject DRKLDELTA_29;
float DRKLDELTA_29_val;
IAcknexObject MY_32;
float temp_33;
IAcknexObject MY_36;
float temp_37;
IAcknexObject MY_42;
float temp_43;
IAcknexObject MY_46;
float temp_47;
IAcknexObject MY_52;
float temp_53;
IAcknexObject MY_56;
float temp_57;
IAcknexObject MY_62;
float temp_63;
IAcknexObject MY_66;
float temp_67;
IAcknexObject MY_70;
float temp_71;
IAcknexObject MY_73;
IAcknexObject MY_75;
float temp_76;
IAcknexObject MY_78;
IAcknexObject DRKLDELTA_80;
float DRKLDELTA_80_val;
IAcknexObject MY_83;
float temp_84;
IAcknexObject PLAYER_RESULT_85;
IAcknexObject PLAYER_RESULT_86;
float PLAYER_RESULT_86_val;
IAcknexObject DRKLSHOOTFACTOR_87;
float DRKLSHOOTFACTOR_87_val;
}
public class DRKLTALK : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DRKLTALK() {
  }
 public DRKLTALK(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
if (UnityEngine.Random.value > 0.95f)
{
DRKL05SND_2 = _world.AcknexObject.GetAcknexObject(3529224932);
MY_4 = MY;
_world.PlaySound(DRKL05SND_2,0.5f,MY_4);
}
if (UnityEngine.Random.value < 0.07f)
{
DRKL02SND_7 = _world.AcknexObject.GetAcknexObject(3529117121);
MY_9 = MY;
_world.PlaySound(DRKL02SND_7,0.5f,MY_9);
}
//Unknown keyword: 
      return false;
  }
IAcknexObject DRKL05SND_2;
IAcknexObject MY_4;
IAcknexObject DRKL02SND_7;
IAcknexObject MY_9;
}
public class TROPTURN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPTURN() {
  }
 public TROPTURN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
WAITTIME_0 = _world.GetObject(ObjectType.Skill,33817649);
WAITTIME_1 = _world.GetObject(ObjectType.Skill,33817649);
WAITTIME_1_val = WAITTIME_1.GetFloat(PropertyName.VAL);
WAITTIME_0.SetFloat(231,64f*UnityEngine.Random.value+16f);
if (UnityEngine.Random.value < 0.07f)
{
{
            var enumerator = new TROPLISTEN();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
if (UnityEngine.Random.value > 0.95f)
{
RIGHTTURNTROP_11 = _world.GetObject(ObjectType.Skill,16787353);
RIGHTTURNTROP_12 = _world.GetObject(ObjectType.Skill,16787353);
RIGHTTURNTROP_12_val = RIGHTTURNTROP_12.GetFloat(PropertyName.VAL);
RIGHTTURNTROP_14 = _world.GetObject(ObjectType.Skill,16787353);
RIGHTTURNTROP_14_val = RIGHTTURNTROP_14.GetFloat(PropertyName.VAL);
RIGHTTURNTROP_20 = _world.GetObject(ObjectType.Skill,16787353);
RIGHTTURNTROP_20_val = RIGHTTURNTROP_20.GetFloat(PropertyName.VAL);
RIGHTTURNTROP_11.SetFloat(231,(RIGHTTURNTROP_14_val-1f)*(RIGHTTURNTROP_20_val-1f));
}
RIGHTTURNTROP_24 = _world.GetObject(ObjectType.Skill,16787353);
RIGHTTURNTROP_24_val = RIGHTTURNTROP_24.GetFloat(PropertyName.VAL);
if (RIGHTTURNTROP_24_val > RIGHTTURNTROP_24.GetFloat(PropertyName.MAX))
{
{
            var enumerator = new TURNRIGHT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
{
            var enumerator = new TURNLEFT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject WAITTIME_0;
IAcknexObject WAITTIME_1;
float WAITTIME_1_val;
IAcknexObject RIGHTTURNTROP_11;
IAcknexObject RIGHTTURNTROP_12;
float RIGHTTURNTROP_12_val;
IAcknexObject RIGHTTURNTROP_14;
float RIGHTTURNTROP_14_val;
IAcknexObject RIGHTTURNTROP_20;
float RIGHTTURNTROP_20_val;
IAcknexObject RIGHTTURNTROP_24;
float RIGHTTURNTROP_24_val;
}
public class TROPBACKOFF : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPBACKOFF() {
  }
 public TROPBACKOFF(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
MY_2 = MY;
MY_2.SetAcknexObject(189,null);
MY_5 = MY;
MY_5.SetAcknexObject(192,null);
MY_8 = MY;
MY_8.SetAcknexObject(193,null);
CYCLETROPBACK_9 = _world.AcknexObject.GetAcknexObject(2738689971);
MY_11 = MY;
MY_11.SetAcknexObject(190,CYCLETROPBACK_9);
TROPHIT_12 = _world.AcknexObject.GetAcknexObject(182795863);
MY_14 = MY;
MY_14.SetAcknexObject(209,TROPHIT_12);
MY_17 = MY;
MY_17.SetFloat(207,1f);
MY_20 = MY;
MY_20.SetFloat(176,1f);
TROP1TEX_21 = _world.AcknexObject.GetAcknexObject(1736449204);
MY_23 = MY;
MY_23.SetAcknexObject(164,TROP1TEX_21);
MY_26 = MY;
MY_26.SetFloat(168,0.3f);
BULLET_27 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_29 = MY;
MY_29.SetAcknexObject(199,BULLET_27);
{
            var enumerator = new REPELANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_31 = MY;
MY_33 = MY;
temp_34 =MY_33.GetFloat(194);
MY_36 = MY;
temp_37 =MY_36.GetFloat(194);
MY_31.SetFloat(194,temp_37+UnityEngine.Random.value-0.5f);
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }
            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)64f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
{
            var enumerator = new FOLLOWANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_45 = MY;
temp_46 =MY_45.GetFloat(173);
if (temp_46 > 5f)
{
return false;
}
{
            var enumerator = new TROPWAIT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject CYCLETROPBACK_9;
IAcknexObject MY_11;
IAcknexObject TROPHIT_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject TROP1TEX_21;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject BULLET_27;
IAcknexObject MY_29;
IAcknexObject MY_31;
IAcknexObject MY_33;
float temp_34;
IAcknexObject MY_36;
float temp_37;
float startTime1;
float endTime1;
IAcknexObject MY_45;
float temp_46;
}
public class TROPWAIT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPWAIT() {
  }
 public TROPWAIT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(176);
if (temp_3 != 4f)
{
goto CONT;
}
MY_6 = MY;
temp_7 =MY_6.GetFloat(205);
if (temp_7 != 1f)
{
goto CONT;
}
return false;
CONT:
MY_10 = MY;
MY_10.SetAcknexObject(189,null);
MY_13 = MY;
MY_13.SetAcknexObject(192,null);
MY_16 = MY;
MY_16.SetAcknexObject(193,null);
CYCLETROPATTACK_17 = _world.AcknexObject.GetAcknexObject(1708986426);
MY_19 = MY;
MY_19.SetAcknexObject(190,CYCLETROPATTACK_17);
TROPHIT_20 = _world.AcknexObject.GetAcknexObject(182795863);
MY_22 = MY;
MY_22.SetAcknexObject(209,TROPHIT_20);
MY_25 = MY;
MY_25.SetFloat(207,0f);
MY_28 = MY;
MY_28.SetFloat(213,0f);
MY_31 = MY;
MY_31.SetFloat(165,-0.05f);
MY_34 = MY;
MY_34.SetFloat(176,1f);
TROP0TEX_35 = _world.AcknexObject.GetAcknexObject(1736413267);
MY_37 = MY;
MY_37.SetAcknexObject(164,TROP0TEX_35);
MY_40 = MY;
MY_40.SetFloat(168,0f);
MY_43 = MY;
MY_43.SetAcknexObject(199,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_6;
float temp_7;
IAcknexObject MY_10;
IAcknexObject MY_13;
IAcknexObject MY_16;
IAcknexObject CYCLETROPATTACK_17;
IAcknexObject MY_19;
IAcknexObject TROPHIT_20;
IAcknexObject MY_22;
IAcknexObject MY_25;
IAcknexObject MY_28;
IAcknexObject MY_31;
IAcknexObject MY_34;
IAcknexObject TROP0TEX_35;
IAcknexObject MY_37;
IAcknexObject MY_40;
IAcknexObject MY_43;
}
public class TROPWANDER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPWANDER() {
  }
 public TROPWANDER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(189,null);
MY_5 = MY;
MY_5.SetAcknexObject(192,null);
MY_8 = MY;
MY_8.SetAcknexObject(193,null);
CYCLETROPATTACK_9 = _world.AcknexObject.GetAcknexObject(1708986426);
MY_11 = MY;
MY_11.SetAcknexObject(190,CYCLETROPATTACK_9);
TROPHIT_12 = _world.AcknexObject.GetAcknexObject(182795863);
MY_14 = MY;
MY_14.SetAcknexObject(209,TROPHIT_12);
MY_17 = MY;
MY_17.SetFloat(207,1f);
MY_20 = MY;
MY_20.SetFloat(213,0f);
MY_23 = MY;
MY_23.SetFloat(219,0f);
MY_26 = MY;
MY_26.SetFloat(176,1f);
TROP1TEX_27 = _world.AcknexObject.GetAcknexObject(1736449204);
MY_29 = MY;
MY_29.SetAcknexObject(164,TROP1TEX_27);
MY_32 = MY;
MY_32.SetFloat(168,0.3f);
BULLET_33 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_35 = MY;
MY_35.SetAcknexObject(199,BULLET_33);
{
            var enumerator = new LOCATEACTOR();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject CYCLETROPATTACK_9;
IAcknexObject MY_11;
IAcknexObject TROPHIT_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject TROP1TEX_27;
IAcknexObject MY_29;
IAcknexObject MY_32;
IAcknexObject BULLET_33;
IAcknexObject MY_35;
}
public class TROPSEARCH : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPSEARCH() {
  }
 public TROPSEARCH(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(189,null);
MY_5 = MY;
MY_5.SetAcknexObject(192,null);
MY_8 = MY;
MY_8.SetAcknexObject(193,null);
CYCLETROPATTACK_9 = _world.AcknexObject.GetAcknexObject(1708986426);
MY_11 = MY;
MY_11.SetAcknexObject(190,CYCLETROPATTACK_9);
TROPHIT_12 = _world.AcknexObject.GetAcknexObject(182795863);
MY_14 = MY;
MY_14.SetAcknexObject(209,TROPHIT_12);
MY_17 = MY;
MY_17.SetFloat(207,1f);
MY_20 = MY;
MY_20.SetFloat(219,0f);
MY_23 = MY;
MY_23.SetFloat(176,11f);
TROPATEX_24 = _world.AcknexObject.GetAcknexObject(1737024196);
MY_26 = MY;
MY_26.SetAcknexObject(164,TROPATEX_24);
MY_29 = MY;
MY_29.SetFloat(168,0.3f);
BULLET_30 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_32 = MY;
MY_32.SetAcknexObject(199,BULLET_30);
{
            var enumerator = new LOCATEACTOR();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject CYCLETROPATTACK_9;
IAcknexObject MY_11;
IAcknexObject TROPHIT_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject TROPATEX_24;
IAcknexObject MY_26;
IAcknexObject MY_29;
IAcknexObject BULLET_30;
IAcknexObject MY_32;
}
public class TROPHIDE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPHIDE() {
  }
 public TROPHIDE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
MY_2 = MY;
MY_2.SetAcknexObject(189,null);
TROPESCAPE_3 = _world.AcknexObject.GetAcknexObject(1987912643);
MY_5 = MY;
MY_5.SetAcknexObject(192,TROPESCAPE_3);
MY_8 = MY;
MY_8.SetAcknexObject(193,null);
TROPHIDE_9 = _world.AcknexObject.GetAcknexObject(1737263724);
MY_11 = MY;
MY_11.SetAcknexObject(190,TROPHIDE_9);
TROPHIT_12 = _world.AcknexObject.GetAcknexObject(182795863);
MY_14 = MY;
MY_14.SetAcknexObject(209,TROPHIT_12);
MY_17 = MY;
MY_17.SetFloat(207,1f);
MY_20 = MY;
MY_20.SetFloat(219,0f);
MY_23 = MY;
temp_24 =MY_23.GetFloat(176);
if (temp_24 == 4f)
{
goto HIDDING;
}
MY_27 = MY;
MY_27.SetFloat(176,4f);
{
            var enumerator = new REPELANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_29 = MY;
MY_31 = MY;
temp_32 =MY_31.GetFloat(194);
MY_34 = MY;
temp_35 =MY_34.GetFloat(194);
MY_29.SetFloat(194,temp_35+(UnityEngine.Random.value-0.5f)*2.4f);
TROP1TEX_44 = _world.AcknexObject.GetAcknexObject(1736449204);
MY_46 = MY;
MY_46.SetAcknexObject(164,TROP1TEX_44);
MY_49 = MY;
MY_49.SetFloat(172,20f);
MY_52 = MY;
MY_52.SetFloat(168,0.6f);
BULLET_53 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_55 = MY;
MY_55.SetAcknexObject(199,BULLET_53);
{
            var enumerator = new LOCATEACTOR();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }
            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)384f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_59 = MY;
temp_60 =MY_59.GetFloat(173);
if (temp_60 > 5f)
{
return false;
}
MY_63 = MY;
temp_64 =MY_63.GetFloat(173);
MY_66 = MY;
MY_66.SetFloat(173,temp_64 + -2f);
{
            var enumerator = new TROPFOLLOWATTACK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
HIDDING:
{
            var enumerator = new REPELANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_68 = MY;
MY_70 = MY;
temp_71 =MY_70.GetFloat(194);
MY_73 = MY;
temp_74 =MY_73.GetFloat(194);
MY_68.SetFloat(194,temp_74+(UnityEngine.Random.value-0.5f)*2.4f);
TROP1TEX_83 = _world.AcknexObject.GetAcknexObject(1736449204);
MY_85 = MY;
MY_85.SetAcknexObject(164,TROP1TEX_83);
MY_88 = MY;
MY_88.SetFloat(172,20f);
MY_91 = MY;
MY_91.SetFloat(168,0.6f);
BULLET_92 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_94 = MY;
MY_94.SetAcknexObject(199,BULLET_92);
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject TROPESCAPE_3;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject TROPHIDE_9;
IAcknexObject MY_11;
IAcknexObject TROPHIT_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject MY_23;
float temp_24;
IAcknexObject MY_27;
IAcknexObject MY_29;
IAcknexObject MY_31;
float temp_32;
IAcknexObject MY_34;
float temp_35;
IAcknexObject TROP1TEX_44;
IAcknexObject MY_46;
IAcknexObject MY_49;
IAcknexObject MY_52;
IAcknexObject BULLET_53;
IAcknexObject MY_55;
float startTime1;
float endTime1;
IAcknexObject MY_59;
float temp_60;
IAcknexObject MY_63;
float temp_64;
IAcknexObject MY_66;
IAcknexObject MY_68;
IAcknexObject MY_70;
float temp_71;
IAcknexObject MY_73;
float temp_74;
IAcknexObject TROP1TEX_83;
IAcknexObject MY_85;
IAcknexObject MY_88;
IAcknexObject MY_91;
IAcknexObject BULLET_92;
IAcknexObject MY_94;
}
public class TROPLISTEN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPLISTEN() {
  }
 public TROPLISTEN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(176);
if (temp_3 != 4f)
{
goto CONT;
}
MY_6 = MY;
temp_7 =MY_6.GetFloat(205);
if (temp_7 != 1f)
{
goto CONT;
}
return false;
CONT:
MY_10 = MY;
temp_11 =MY_10.GetFloat(202);
if (temp_11 > 100f)
{
goto CONT1;
}
MY_14 = MY;
temp_15 =MY_14.GetFloat(182);
if (temp_15 == 0f)
{
goto CONT1;
}
return false;
CONT1:
MY_18 = MY;
MY_18.SetAcknexObject(192,null);
MY_21 = MY;
MY_21.SetAcknexObject(193,null);
CYCLETROPATTACK_22 = _world.AcknexObject.GetAcknexObject(1708986426);
MY_24 = MY;
MY_24.SetAcknexObject(190,CYCLETROPATTACK_22);
TROPHIT_25 = _world.AcknexObject.GetAcknexObject(182795863);
MY_27 = MY;
MY_27.SetAcknexObject(209,TROPHIT_25);
MY_30 = MY;
MY_30.SetFloat(207,0f);
MY_33 = MY;
MY_33.SetFloat(219,0f);
MY_36 = MY;
MY_36.SetFloat(176,0f);
TROP0TEX_37 = _world.AcknexObject.GetAcknexObject(1736413267);
MY_39 = MY;
MY_39.SetAcknexObject(164,TROP0TEX_37);
MY_42 = MY;
MY_42.SetFloat(168,0f);
MY_45 = MY;
MY_45.SetAcknexObject(199,null);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)120f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_49 = MY;
temp_50 =MY_49.GetFloat(173);
if (temp_50 < 9f)
{
{
            var enumerator = new TROPWANDER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_6;
float temp_7;
IAcknexObject MY_10;
float temp_11;
IAcknexObject MY_14;
float temp_15;
IAcknexObject MY_18;
IAcknexObject MY_21;
IAcknexObject CYCLETROPATTACK_22;
IAcknexObject MY_24;
IAcknexObject TROPHIT_25;
IAcknexObject MY_27;
IAcknexObject MY_30;
IAcknexObject MY_33;
IAcknexObject MY_36;
IAcknexObject TROP0TEX_37;
IAcknexObject MY_39;
IAcknexObject MY_42;
IAcknexObject MY_45;
float startTime1;
float endTime1;
IAcknexObject MY_49;
float temp_50;
}
public class TROPWARNING : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPWARNING() {
  }
 public TROPWARNING(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
TROPBACKOFF_6 = _world.AcknexObject.GetAcknexObject(893060478);
MY_8 = MY;
MY_8.SetAcknexObject(190,TROPBACKOFF_6);
TROPHIT_9 = _world.AcknexObject.GetAcknexObject(182795863);
MY_11 = MY;
MY_11.SetAcknexObject(209,TROPHIT_9);
MY_14 = MY;
MY_14.SetFloat(176,7f);
TROP7TEX_15 = _world.AcknexObject.GetAcknexObject(1736664826);
MY_17 = MY;
MY_17.SetAcknexObject(164,TROP7TEX_15);
if (UnityEngine.Random.value < 0.5f)
{
TROP7ATEX_20 = _world.AcknexObject.GetAcknexObject(1474665403);
MY_22 = MY;
MY_22.SetAcknexObject(164,TROP7ATEX_20);
}
MY_24 = MY;
temp_25 =MY_24?.GetAcknexObject(164);
_world.SetSynonymObject(1738102306,temp_25);
RANDOMTROP_28 = _world.GetObject(ObjectType.Skill,1092120691);
RANDOMTROP_28_val = RANDOMTROP_28.GetFloat(PropertyName.VAL);
RANDOMTROP_29 = _world.GetObject(ObjectType.Skill,1092120691);
RANDOMTROP_29.SetFloat(231,Random.Range(0f, 1f));
RANDOMTROP_31 = _world.GetObject(ObjectType.Skill,1092120691);
RANDOMTROP_31_val = RANDOMTROP_31.GetFloat(PropertyName.VAL);
if (RANDOMTROP_31_val < 0.2f)
{
goto OVERTHERE;
}
RANDOMTROP_33 = _world.GetObject(ObjectType.Skill,1092120691);
RANDOMTROP_33_val = RANDOMTROP_33.GetFloat(PropertyName.VAL);
if (RANDOMTROP_33_val < 0.4f)
{
goto GETDOWN;
}
TROP07SND_34 = _world.AcknexObject.GetAcknexObject(1466003774);
TROP_TEX_36 = _world.GetSynonymObject(1738102306);
TROP_TEX_36.SetAcknexObject(286,TROP07SND_34);
goto CONT;
GETDOWN:
TROP03SND_37 = _world.AcknexObject.GetAcknexObject(1465860026);
TROP_TEX_39 = _world.GetSynonymObject(1738102306);
TROP_TEX_39.SetAcknexObject(286,TROP03SND_37);
goto CONT;
OVERTHERE:
TROP02SND_40 = _world.AcknexObject.GetAcknexObject(1465824089);
TROP_TEX_42 = _world.GetSynonymObject(1738102306);
TROP_TEX_42.SetAcknexObject(286,TROP02SND_40);
goto CONT;
CONT:
MY_45 = MY;
MY_45.SetFloat(168,0f);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)32f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_49 = MY;
temp_50 =MY_49.GetFloat(173);
if (temp_50 > 5f)
{
return false;
}
MY_52 = MY;
MY_54 = MY;
temp_55 =MY_54.GetFloat(194);
MY_57 = MY;
temp_58 =MY_57.GetFloat(194);
MY_52.SetFloat(194,temp_58+2f);
if (UnityEngine.Random.value < 0.5f)
{
MY_64 = MY;
MY_66 = MY;
temp_67 =MY_66.GetFloat(194);
MY_69 = MY;
temp_70 =MY_69.GetFloat(194);
MY_64.SetFloat(194,temp_70-2f);
}
{
            var enumerator = new TROPBACKOFF();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject TROPBACKOFF_6;
IAcknexObject MY_8;
IAcknexObject TROPHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject TROP7TEX_15;
IAcknexObject MY_17;
IAcknexObject TROP7ATEX_20;
IAcknexObject MY_22;
IAcknexObject MY_24;
IAcknexObject temp_25;
IAcknexObject RANDOMTROP_28;
float RANDOMTROP_28_val;
IAcknexObject RANDOMTROP_29;
IAcknexObject RANDOMTROP_31;
float RANDOMTROP_31_val;
IAcknexObject RANDOMTROP_33;
float RANDOMTROP_33_val;
IAcknexObject TROP07SND_34;
IAcknexObject TROP_TEX_36;
IAcknexObject TROP03SND_37;
IAcknexObject TROP_TEX_39;
IAcknexObject TROP02SND_40;
IAcknexObject TROP_TEX_42;
IAcknexObject MY_45;
float startTime1;
float endTime1;
IAcknexObject MY_49;
float temp_50;
IAcknexObject MY_52;
IAcknexObject MY_54;
float temp_55;
IAcknexObject MY_57;
float temp_58;
IAcknexObject MY_64;
IAcknexObject MY_66;
float temp_67;
IAcknexObject MY_69;
float temp_70;
}
public class TROPLOOKFOR : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPLOOKFOR() {
  }
 public TROPLOOKFOR(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(176);
if (temp_3 == 10f)
{
return false;
}
MY_6 = MY;
temp_7 =MY_6.GetFloat(202);
if (temp_7 > 100f)
{
return false;
}
MY_10 = MY;
temp_11 =MY_10.GetFloat(182);
if (temp_11 == 1f)
{
{
            var enumerator = new TROPFOLLOWATTACK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
FOLLOW_12 = _world.AcknexObject.GetAcknexObject(2968039200);
MY_14 = MY;
temp_15 =MY_14?.GetAcknexObject(199);
if (temp_15 == FOLLOW_12)
{
return false;
}
MY_18 = MY;
temp_19 =MY_18.GetFloat(173);
if (temp_19 > 5f)
{
return false;
}
MY_22 = MY;
MY_22.SetAcknexObject(192,null);
MY_25 = MY;
MY_25.SetAcknexObject(193,null);
TROPSEARCH_26 = _world.AcknexObject.GetAcknexObject(2519151464);
MY_28 = MY;
MY_28.SetAcknexObject(190,TROPSEARCH_26);
TROPHIT_29 = _world.AcknexObject.GetAcknexObject(182795863);
MY_31 = MY;
MY_31.SetAcknexObject(209,TROPHIT_29);
MY_34 = MY;
MY_34.SetFloat(207,0f);
MY_37 = MY;
MY_37.SetFloat(219,0f);
MY_40 = MY;
MY_40.SetFloat(176,10f);
TROPATEX_41 = _world.AcknexObject.GetAcknexObject(1737024196);
MY_43 = MY;
MY_43.SetAcknexObject(164,TROPATEX_41);
MY_46 = MY;
MY_46.SetFloat(168,0f);
BULLET_47 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_49 = MY;
MY_49.SetAcknexObject(199,BULLET_47);
MY_52 = MY;
temp_53 =MY_52.GetFloat(202);
if (temp_53 < 100f)
{
TROPFOLLOWATTACK_54 = _world.AcknexObject.GetAcknexObject(603443901);
MY_56 = MY;
MY_56.SetAcknexObject(190,TROPFOLLOWATTACK_54);
}
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_6;
float temp_7;
IAcknexObject MY_10;
float temp_11;
IAcknexObject FOLLOW_12;
IAcknexObject MY_14;
IAcknexObject temp_15;
IAcknexObject MY_18;
float temp_19;
IAcknexObject MY_22;
IAcknexObject MY_25;
IAcknexObject TROPSEARCH_26;
IAcknexObject MY_28;
IAcknexObject TROPHIT_29;
IAcknexObject MY_31;
IAcknexObject MY_34;
IAcknexObject MY_37;
IAcknexObject MY_40;
IAcknexObject TROPATEX_41;
IAcknexObject MY_43;
IAcknexObject MY_46;
IAcknexObject BULLET_47;
IAcknexObject MY_49;
IAcknexObject MY_52;
float temp_53;
IAcknexObject TROPFOLLOWATTACK_54;
IAcknexObject MY_56;
}
public class TROPFOLLOW : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPFOLLOW() {
  }
 public TROPFOLLOW(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
CYCLETROPATTACK_6 = _world.AcknexObject.GetAcknexObject(1708986426);
MY_8 = MY;
MY_8.SetAcknexObject(190,CYCLETROPATTACK_6);
TROPHIT_9 = _world.AcknexObject.GetAcknexObject(182795863);
MY_11 = MY;
MY_11.SetAcknexObject(209,TROPHIT_9);
MY_14 = MY;
MY_14.SetFloat(207,1f);
MY_17 = MY;
MY_17.SetFloat(219,0f);
MY_20 = MY;
MY_20.SetFloat(176,1f);
TROP1TEX_21 = _world.AcknexObject.GetAcknexObject(1736449204);
MY_23 = MY;
MY_23.SetAcknexObject(164,TROP1TEX_21);
MY_26 = MY;
MY_26.SetFloat(168,0.4f);
{
            var enumerator = new FOLLOWANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new LOCATEACTOR();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject CYCLETROPATTACK_6;
IAcknexObject MY_8;
IAcknexObject TROPHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject TROP1TEX_21;
IAcknexObject MY_23;
IAcknexObject MY_26;
}
public class TROPFOLLOWATTACK : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPFOLLOWATTACK() {
  }
 public TROPFOLLOWATTACK(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
CYCLETROPSHOOT_6 = _world.AcknexObject.GetAcknexObject(202849327);
MY_8 = MY;
MY_8.SetAcknexObject(190,CYCLETROPSHOOT_6);
TROPHIT_9 = _world.AcknexObject.GetAcknexObject(182795863);
MY_11 = MY;
MY_11.SetAcknexObject(209,TROPHIT_9);
MY_14 = MY;
MY_14.SetFloat(207,1f);
MY_17 = MY;
MY_17.SetFloat(219,0f);
MY_20 = MY;
MY_20.SetFloat(176,2f);
TROPATEX_21 = _world.AcknexObject.GetAcknexObject(1737024196);
MY_23 = MY;
MY_23.SetAcknexObject(164,TROPATEX_21);
MY_26 = MY;
MY_26.SetFloat(168,0.4f);
BULLET_27 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_29 = MY;
MY_29.SetAcknexObject(199,BULLET_27);
{
            var enumerator = new FOLLOWANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new LOCATEACTOR();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject CYCLETROPSHOOT_6;
IAcknexObject MY_8;
IAcknexObject TROPHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject TROPATEX_21;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject BULLET_27;
IAcknexObject MY_29;
}
public class TROPFOLLOWWARNING : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPFOLLOWWARNING() {
  }
 public TROPFOLLOWWARNING(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
CYCLETROPWARNING_6 = _world.AcknexObject.GetAcknexObject(2458966328);
MY_8 = MY;
MY_8.SetAcknexObject(190,CYCLETROPWARNING_6);
TROPHIT_9 = _world.AcknexObject.GetAcknexObject(182795863);
MY_11 = MY;
MY_11.SetAcknexObject(209,TROPHIT_9);
MY_14 = MY;
MY_14.SetFloat(207,1f);
MY_17 = MY;
MY_17.SetFloat(219,0f);
MY_20 = MY;
MY_20.SetFloat(176,1f);
TROP1TEX_21 = _world.AcknexObject.GetAcknexObject(1736449204);
MY_23 = MY;
MY_23.SetAcknexObject(164,TROP1TEX_21);
MY_26 = MY;
MY_26.SetFloat(168,0.4f);
BULLET_27 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_29 = MY;
MY_29.SetAcknexObject(199,BULLET_27);
{
            var enumerator = new FOLLOWANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new LOCATEACTOR();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject CYCLETROPWARNING_6;
IAcknexObject MY_8;
IAcknexObject TROPHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject TROP1TEX_21;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject BULLET_27;
IAcknexObject MY_29;
}
public class TROPAIM : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPAIM() {
  }
 public TROPAIM(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
TROPSHOOT_6 = _world.AcknexObject.GetAcknexObject(1508117631);
MY_8 = MY;
MY_8.SetAcknexObject(190,TROPSHOOT_6);
TROPHIT_9 = _world.AcknexObject.GetAcknexObject(182795863);
MY_11 = MY;
MY_11.SetAcknexObject(209,TROPHIT_9);
MY_14 = MY;
MY_14.SetFloat(207,0f);
MY_17 = MY;
MY_17.SetFloat(219,0f);
MY_20 = MY;
MY_20.SetFloat(176,3f);
TROP3ATEX_21 = _world.AcknexObject.GetAcknexObject(1469921719);
MY_23 = MY;
MY_23.SetAcknexObject(164,TROP3ATEX_21);
MY_26 = MY;
MY_26.SetFloat(168,0f);
{
            var enumerator = new FOLLOWANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new TROPSHOUT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject TROPSHOOT_6;
IAcknexObject MY_8;
IAcknexObject TROPHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject TROP3ATEX_21;
IAcknexObject MY_23;
IAcknexObject MY_26;
}
public class TROPSHOOT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPSHOOT() {
  }
 public TROPSHOOT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
CYCLETROPSHOOT_6 = _world.AcknexObject.GetAcknexObject(202849327);
MY_8 = MY;
MY_8.SetAcknexObject(190,CYCLETROPSHOOT_6);
TROPHIT_9 = _world.AcknexObject.GetAcknexObject(182795863);
MY_11 = MY;
MY_11.SetAcknexObject(209,TROPHIT_9);
MY_14 = MY;
MY_14.SetFloat(207,0f);
MY_17 = MY;
MY_17.SetFloat(219,0f);
MY_20 = MY;
MY_20.SetFloat(176,3f);
TROP3TEX_21 = _world.AcknexObject.GetAcknexObject(1736521078);
MY_23 = MY;
MY_23.SetAcknexObject(164,TROP3TEX_21);
MY_26 = MY;
MY_26.SetFloat(168,0f);
{
            var enumerator = new FOLLOWANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }SHOOT_SECTOR_28 = _world.GetObject(ObjectType.Skill,440);
SHOOT_SECTOR_28.SetFloat(231,2f);
TROPSHOOTFACTOR_29 = _world.GetObject(ObjectType.Skill,376136638);
TROPSHOOTFACTOR_29_val = TROPSHOOTFACTOR_29.GetFloat(PropertyName.VAL);
SHOOT_FAC_30 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_30.SetFloat(231,TROPSHOOTFACTOR_29_val);
SHOOT_RANGE_32 = _world.GetObject(ObjectType.Skill,439);
SHOOT_RANGE_32.SetFloat(231,100f);
SHOOT_Y_34 = _world.GetObject(ObjectType.Skill,443);
SHOOT_Y_34.SetFloat(231,0f);
MY_35 = MY;
_world.Shoot(MY_35, MY, THERE);
HIT_DIST_37 = _world.GetObject(ObjectType.Skill,444);
HIT_DIST_37_val = HIT_DIST_37.GetFloat(PropertyName.VAL);
if (HIT_DIST_37_val == 0f)
{
goto MISS;
}
RESULT_38 = _world.GetObject(ObjectType.Skill,446);
RESULT_38_val = RESULT_38.GetFloat(PropertyName.VAL);
PLAYER_RESULT_39 = _world.GetObject(ObjectType.Skill,1861765784);
PLAYER_RESULT_39.SetFloat(231,RESULT_38_val);
{
            var enumerator = new HITPLAYERDELAY();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
MISS:
{
            var enumerator = new TROPFOLLOWATTACK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject CYCLETROPSHOOT_6;
IAcknexObject MY_8;
IAcknexObject TROPHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject TROP3TEX_21;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject SHOOT_SECTOR_28;
IAcknexObject TROPSHOOTFACTOR_29;
float TROPSHOOTFACTOR_29_val;
IAcknexObject SHOOT_FAC_30;
IAcknexObject SHOOT_RANGE_32;
IAcknexObject SHOOT_Y_34;
IAcknexObject MY_35;
IAcknexObject HIT_DIST_37;
float HIT_DIST_37_val;
IAcknexObject RESULT_38;
float RESULT_38_val;
IAcknexObject PLAYER_RESULT_39;
}
public class TROPESCAPE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPESCAPE() {
  }
 public TROPESCAPE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
TROPHIDE_3 = _world.AcknexObject.GetAcknexObject(1737263724);
MY_5 = MY;
MY_5.SetAcknexObject(193,TROPHIDE_3);
CYCLETROPHIDE_6 = _world.AcknexObject.GetAcknexObject(2738914332);
MY_8 = MY;
MY_8.SetAcknexObject(190,CYCLETROPHIDE_6);
TROPHIT_9 = _world.AcknexObject.GetAcknexObject(182795863);
MY_11 = MY;
MY_11.SetAcknexObject(209,TROPHIT_9);
MY_14 = MY;
MY_14.SetFloat(207,1f);
MY_17 = MY;
MY_17.SetFloat(219,0f);
MY_20 = MY;
MY_20.SetFloat(176,4f);
TROP1TEX_21 = _world.AcknexObject.GetAcknexObject(1736449204);
MY_23 = MY;
MY_23.SetAcknexObject(164,TROP1TEX_21);
MY_26 = MY;
MY_26.SetFloat(172,30f);
MY_29 = MY;
MY_29.SetFloat(168,0.4f);
{
            var enumerator = new REPELANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_31 = MY;
MY_33 = MY;
temp_34 =MY_33.GetFloat(194);
MY_36 = MY;
temp_37 =MY_36.GetFloat(194);
MY_31.SetFloat(194,temp_37+(UnityEngine.Random.value-0.5f)*2f);
BULLET_46 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_48 = MY;
MY_48.SetAcknexObject(199,BULLET_46);
{
            var enumerator = new LOCATEACTOR();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject TROPHIDE_3;
IAcknexObject MY_5;
IAcknexObject CYCLETROPHIDE_6;
IAcknexObject MY_8;
IAcknexObject TROPHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject TROP1TEX_21;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject MY_29;
IAcknexObject MY_31;
IAcknexObject MY_33;
float temp_34;
IAcknexObject MY_36;
float temp_37;
IAcknexObject BULLET_46;
IAcknexObject MY_48;
}
public class TROPDEAD : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPDEAD() {
  }
 public TROPDEAD(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
MY_8 = MY;
MY_8.SetAcknexObject(209,null);
MY_11 = MY;
MY_11.SetAcknexObject(190,null);
MY_14 = MY;
MY_14.SetFloat(172,0f);
MY_17 = MY;
MY_17.SetFloat(176,9f);
TROP9TEX_18 = _world.AcknexObject.GetAcknexObject(1736736700);
MY_20 = MY;
MY_20.SetAcknexObject(164,TROP9TEX_18);
MY_23 = MY;
MY_23.SetFloat(168,0f);
MY_26 = MY;
MY_26.SetAcknexObject(199,null);
MY_29 = MY;
MY_29.SetFloat(206,1f);
MY_32 = MY;
MY_32.SetFloat(207,0f);
MY_35 = MY;
MY_35.SetFloat(219,1f);
if (UnityEngine.Random.value > 0.4f)
{
return false;
}
if (UnityEngine.Random.value > 0.2f)
{
goto ARMOUR;
}
PICKTROPAMMO_40 = _world.AcknexObject.GetAcknexObject(3341694275);
MY_42 = MY;
MY_42.SetAcknexObject(192,PICKTROPAMMO_40);
MY_45 = MY;
MY_45.SetFloat(172,4f);
return false;
ARMOUR:
PICKTROPARMOUR_46 = _world.AcknexObject.GetAcknexObject(1272610255);
MY_48 = MY;
MY_48.SetAcknexObject(192,PICKTROPARMOUR_46);
MY_51 = MY;
MY_51.SetFloat(172,4f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject TROP9TEX_18;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject MY_29;
IAcknexObject MY_32;
IAcknexObject MY_35;
IAcknexObject PICKTROPAMMO_40;
IAcknexObject MY_42;
IAcknexObject MY_45;
IAcknexObject PICKTROPARMOUR_46;
IAcknexObject MY_48;
IAcknexObject MY_51;
}
public class TROPDIE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPDIE() {
  }
 public TROPDIE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetFloat(173,10f);
MY_5 = MY;
MY_5.SetAcknexObject(192,null);
MY_8 = MY;
MY_8.SetAcknexObject(193,null);
MY_11 = MY;
MY_11.SetAcknexObject(209,null);
TROPDEAD_12 = _world.AcknexObject.GetAcknexObject(1737115520);
MY_14 = MY;
MY_14.SetAcknexObject(190,TROPDEAD_12);
MY_17 = MY;
temp_18 =MY_17.GetFloat(184);
if (temp_18 != 0f)
{
{
            var enumerator = new TROPDROPKEY();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }}
MY_21 = MY;
MY_21.SetFloat(176,8f);
TROP8TEX_22 = _world.AcknexObject.GetAcknexObject(1736700763);
MY_24 = MY;
MY_24.SetAcknexObject(164,TROP8TEX_22);
MY_27 = MY;
MY_27.SetFloat(168,0f);
MY_30 = MY;
MY_30.SetAcknexObject(199,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject TROPDEAD_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
float temp_18;
IAcknexObject MY_21;
IAcknexObject TROP8TEX_22;
IAcknexObject MY_24;
IAcknexObject MY_27;
IAcknexObject MY_30;
}
public class TROPIMPLODE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPIMPLODE() {
  }
 public TROPIMPLODE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
DISTX_0 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_1 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_1_val = DISTX_1.GetFloat(PropertyName.VAL);
MY_4 = MY;
temp_5 =MY_4.GetFloat(195);
EXPLOSION_CENTER_8 = _world.GetSynonymObject(3704223598);
temp_9 =EXPLOSION_CENTER_8.GetFloat(195);
MY_14 = MY;
temp_15 =MY_14.GetFloat(195);
EXPLOSION_CENTER_18 = _world.GetSynonymObject(3704223598);
temp_19 =EXPLOSION_CENTER_18.GetFloat(195);
MY_24 = MY;
temp_25 =MY_24.GetFloat(196);
EXPLOSION_CENTER_28 = _world.GetSynonymObject(3704223598);
temp_29 =EXPLOSION_CENTER_28.GetFloat(196);
MY_34 = MY;
temp_35 =MY_34.GetFloat(196);
EXPLOSION_CENTER_38 = _world.GetSynonymObject(3704223598);
temp_39 =EXPLOSION_CENTER_38.GetFloat(196);
DISTX_0.SetFloat(231,(temp_5-temp_9)*(temp_15-temp_19)+(temp_25-temp_29)*(temp_35-temp_39));
DISTX_41 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_41_val = DISTX_41.GetFloat(PropertyName.VAL);
DISTX_42 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_42.SetFloat(231,MathUtils.Sqrt(DISTX_41_val));
DISTZ_43 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_44 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_44_val = DISTZ_44.GetFloat(PropertyName.VAL);
MY_46 = MY;
temp_47 =MY_46.GetFloat(165);
EXPLOSION_CENTER_50 = _world.GetSynonymObject(3704223598);
temp_51 =EXPLOSION_CENTER_50.GetFloat(165);
DISTZ_43.SetFloat(231,temp_47-temp_51);
DISTX_53 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_53_val = DISTX_53.GetFloat(PropertyName.VAL);
if (DISTX_53_val > 10f)
{
{
            var enumerator = new BEAMREACT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MY_56 = MY;
MY_56.SetFloat(206,1f);
MY_59 = MY;
MY_59.SetFloat(207,0f);
MY_62 = MY;
MY_62.SetAcknexObject(192,null);
MY_65 = MY;
MY_65.SetAcknexObject(193,null);
MY_68 = MY;
MY_68.SetAcknexObject(209,null);
VANISHFORGOOD_69 = _world.AcknexObject.GetAcknexObject(1333438470);
MY_71 = MY;
MY_71.SetAcknexObject(190,VANISHFORGOOD_69);
MY_74 = MY;
MY_74.SetFloat(176,8f);
TROP0ATEX_75 = _world.AcknexObject.GetAcknexObject(1466363956);
MY_77 = MY;
MY_77.SetAcknexObject(164,TROP0ATEX_75);
MY_80 = MY;
MY_80.SetFloat(168,0f);
MY_83 = MY;
MY_83.SetAcknexObject(199,null);
MY_86 = MY;
temp_87 =MY_86.GetFloat(184);
if (temp_87 != 0f)
{
{
            var enumerator = new TROPDROPKEY();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }}
//Unknown keyword: 
      return false;
  }
IAcknexObject DISTX_0;
IAcknexObject DISTX_1;
float DISTX_1_val;
IAcknexObject MY_4;
float temp_5;
IAcknexObject EXPLOSION_CENTER_8;
float temp_9;
IAcknexObject MY_14;
float temp_15;
IAcknexObject EXPLOSION_CENTER_18;
float temp_19;
IAcknexObject MY_24;
float temp_25;
IAcknexObject EXPLOSION_CENTER_28;
float temp_29;
IAcknexObject MY_34;
float temp_35;
IAcknexObject EXPLOSION_CENTER_38;
float temp_39;
IAcknexObject DISTX_41;
float DISTX_41_val;
IAcknexObject DISTX_42;
IAcknexObject DISTZ_43;
IAcknexObject DISTZ_44;
float DISTZ_44_val;
IAcknexObject MY_46;
float temp_47;
IAcknexObject EXPLOSION_CENTER_50;
float temp_51;
IAcknexObject DISTX_53;
float DISTX_53_val;
IAcknexObject MY_56;
IAcknexObject MY_59;
IAcknexObject MY_62;
IAcknexObject MY_65;
IAcknexObject MY_68;
IAcknexObject VANISHFORGOOD_69;
IAcknexObject MY_71;
IAcknexObject MY_74;
IAcknexObject TROP0ATEX_75;
IAcknexObject MY_77;
IAcknexObject MY_80;
IAcknexObject MY_83;
IAcknexObject MY_86;
float temp_87;
}
public class TROPHIT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPHIT() {
  }
 public TROPHIT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat(PropertyName.VAL);
if (SHOOT_FAC_1_val == 0f)
{
goto OBSTACLE;
}
MY_2 = MY;
HIT_3 = _world.GetSynonymObject(704);
if (HIT_3 == MY_2)
{
goto CONT;
}
EXPLOSION_ON_5 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_5_val = EXPLOSION_ON_5.GetFloat(PropertyName.VAL);
if (EXPLOSION_ON_5_val == 0f)
{
goto OBSTACLE;
}
DISTX_6 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_7 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_7_val = DISTX_7.GetFloat(PropertyName.VAL);
MY_10 = MY;
temp_11 =MY_10.GetFloat(195);
EXPLOSION_CENTER_14 = _world.GetSynonymObject(3704223598);
temp_15 =EXPLOSION_CENTER_14.GetFloat(195);
MY_20 = MY;
temp_21 =MY_20.GetFloat(195);
EXPLOSION_CENTER_24 = _world.GetSynonymObject(3704223598);
temp_25 =EXPLOSION_CENTER_24.GetFloat(195);
MY_30 = MY;
temp_31 =MY_30.GetFloat(196);
EXPLOSION_CENTER_34 = _world.GetSynonymObject(3704223598);
temp_35 =EXPLOSION_CENTER_34.GetFloat(196);
MY_40 = MY;
temp_41 =MY_40.GetFloat(196);
EXPLOSION_CENTER_44 = _world.GetSynonymObject(3704223598);
temp_45 =EXPLOSION_CENTER_44.GetFloat(196);
DISTX_6.SetFloat(231,(temp_11-temp_15)*(temp_21-temp_25)+(temp_31-temp_35)*(temp_41-temp_45));
DISTX_47 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_47_val = DISTX_47.GetFloat(PropertyName.VAL);
DISTX_48 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_48.SetFloat(231,MathUtils.Sqrt(DISTX_47_val));
DISTX_50 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_50_val = DISTX_50.GetFloat(PropertyName.VAL);
if (DISTX_50_val > 25f)
{
goto OBSTACLE;
}
HIT:
EXPLOSION_ON_52 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_52_val = EXPLOSION_ON_52.GetFloat(PropertyName.VAL);
if (EXPLOSION_ON_52_val != 2f)
{
goto GRANADE;
}
MY_55 = MY;
temp_56 =MY_55.GetFloat(205);
if (temp_56 == 1f)
{
{
            var enumerator = new TROPIMPLODE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
return false;
GRANADE:
MY_58 = MY;
MY_60 = MY;
temp_61 =MY_60.GetFloat(173);
MY_63 = MY;
temp_64 =MY_63.GetFloat(173);
SHOOT_FAC_66 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_66_val = SHOOT_FAC_66.GetFloat(PropertyName.VAL);
DISTX_71 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_71_val = DISTX_71.GetFloat(PropertyName.VAL);
MY_58.SetFloat(173,temp_64+SHOOT_FAC_66_val*(20f-DISTX_71_val)/20f);
goto EXPLODED;
CONT:
MY_76 = MY;
MY_78 = MY;
temp_79 =MY_78.GetFloat(173);
MY_81 = MY;
temp_82 =MY_81.GetFloat(173);
SHOOT_FAC_84 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_84_val = SHOOT_FAC_84.GetFloat(PropertyName.VAL);
MY_76.SetFloat(173,temp_82+SHOOT_FAC_84_val*(UnityEngine.Random.value+2f)/3f);
EXPLODED:
MY_95 = MY;
temp_96 =MY_95.GetFloat(173);
if (temp_96 > 5f)
{
goto DIE;
}
if (UnityEngine.Random.value < 0.05f)
{
goto DIE;
}
MY_100 = MY;
temp_101 =MY_100?.GetAcknexObject(164);
_world.SetSynonymObject(1738102306,temp_101);
MY_105 = MY;
MY_105.SetAcknexObject(192,null);
MY_108 = MY;
MY_108.SetAcknexObject(193,null);
MY_111 = MY;
MY_111.SetAcknexObject(209,null);
if (UnityEngine.Random.value > 0.7f)
{
goto SONOFA;
}
TROP5TEX_114 = _world.AcknexObject.GetAcknexObject(1736592952);
MY_116 = MY;
MY_116.SetAcknexObject(164,TROP5TEX_114);
TROP05SND_117 = _world.AcknexObject.GetAcknexObject(1465931900);
MY_119 = MY;
_world.PlaySound(TROP05SND_117,0.2f,MY_119);
goto WAIT;
SONOFA:
TROP5ATEX_120 = _world.AcknexObject.GetAcknexObject(1472293561);
MY_122 = MY;
MY_122.SetAcknexObject(164,TROP5ATEX_120);
TROP11SND_123 = _world.AcknexObject.GetAcknexObject(1466974073);
MY_125 = MY;
_world.PlaySound(TROP11SND_123,0.2f,MY_125);
WAIT:

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)4f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
TROPESCAPE_127 = _world.AcknexObject.GetAcknexObject(1987912643);
MY_129 = MY;
MY_129.SetAcknexObject(192,TROPESCAPE_127);
TROPHIDE_130 = _world.AcknexObject.GetAcknexObject(1737263724);
MY_132 = MY;
MY_132.SetAcknexObject(193,TROPHIDE_130);
TROPHIT_133 = _world.AcknexObject.GetAcknexObject(182795863);
MY_135 = MY;
MY_135.SetAcknexObject(209,TROPHIT_133);
TROP_TEX_136 = _world.GetSynonymObject(1738102306);
MY_138 = MY;
MY_138.SetAcknexObject(164,TROP_TEX_136);
MY_141 = MY;
temp_142 =MY_141.GetFloat(173);
if (temp_142 > 4f)
{
{
            var enumerator = new TROPHIDE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MY_145 = MY;
temp_146 =MY_145.GetFloat(176);
if (temp_146 != 4f)
{
{
            var enumerator = new TROPFOLLOWATTACK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
return false;
DIE:
MY_149 = MY;
MY_149.SetFloat(173,10f);
{
            var enumerator = new TROPDIE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
return false;
OBSTACLE:
{
            var enumerator = new TROPTURN();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject SHOOT_FAC_1;
float SHOOT_FAC_1_val;
IAcknexObject MY_2;
IAcknexObject HIT_3;
IAcknexObject EXPLOSION_ON_5;
float EXPLOSION_ON_5_val;
IAcknexObject DISTX_6;
IAcknexObject DISTX_7;
float DISTX_7_val;
IAcknexObject MY_10;
float temp_11;
IAcknexObject EXPLOSION_CENTER_14;
float temp_15;
IAcknexObject MY_20;
float temp_21;
IAcknexObject EXPLOSION_CENTER_24;
float temp_25;
IAcknexObject MY_30;
float temp_31;
IAcknexObject EXPLOSION_CENTER_34;
float temp_35;
IAcknexObject MY_40;
float temp_41;
IAcknexObject EXPLOSION_CENTER_44;
float temp_45;
IAcknexObject DISTX_47;
float DISTX_47_val;
IAcknexObject DISTX_48;
IAcknexObject DISTX_50;
float DISTX_50_val;
IAcknexObject EXPLOSION_ON_52;
float EXPLOSION_ON_52_val;
IAcknexObject MY_55;
float temp_56;
IAcknexObject MY_58;
IAcknexObject MY_60;
float temp_61;
IAcknexObject MY_63;
float temp_64;
IAcknexObject SHOOT_FAC_66;
float SHOOT_FAC_66_val;
IAcknexObject DISTX_71;
float DISTX_71_val;
IAcknexObject MY_76;
IAcknexObject MY_78;
float temp_79;
IAcknexObject MY_81;
float temp_82;
IAcknexObject SHOOT_FAC_84;
float SHOOT_FAC_84_val;
IAcknexObject MY_95;
float temp_96;
IAcknexObject MY_100;
IAcknexObject temp_101;
IAcknexObject MY_105;
IAcknexObject MY_108;
IAcknexObject MY_111;
IAcknexObject TROP5TEX_114;
IAcknexObject MY_116;
IAcknexObject TROP05SND_117;
IAcknexObject MY_119;
IAcknexObject TROP5ATEX_120;
IAcknexObject MY_122;
IAcknexObject TROP11SND_123;
IAcknexObject MY_125;
float startTime1;
float endTime1;
IAcknexObject TROPESCAPE_127;
IAcknexObject MY_129;
IAcknexObject TROPHIDE_130;
IAcknexObject MY_132;
IAcknexObject TROPHIT_133;
IAcknexObject MY_135;
IAcknexObject TROP_TEX_136;
IAcknexObject MY_138;
IAcknexObject MY_141;
float temp_142;
IAcknexObject MY_145;
float temp_146;
IAcknexObject MY_149;
}
public class TROPDROPKEY : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPDROPKEY() {
  }
 public TROPDROPKEY(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
KEY2TNG_1 = _world.AcknexObject.GetAcknexObject(946520241);
KEY2TNG_3 = _world.AcknexObject.GetAcknexObject(946520241);
temp_4 =KEY2TNG_3.GetFloat(195);
MY_6 = MY;
temp_7 =MY_6.GetFloat(195);
KEY2TNG_1.SetFloat(195,temp_7);
KEY2TNG_9 = _world.AcknexObject.GetAcknexObject(946520241);
KEY2TNG_11 = _world.AcknexObject.GetAcknexObject(946520241);
temp_12 =KEY2TNG_11.GetFloat(196);
MY_14 = MY;
temp_15 =MY_14.GetFloat(196);
KEY2TNG_9.SetFloat(196,temp_15);
KEY2TNG_18 = _world.AcknexObject.GetAcknexObject(946520241);
KEY2TNG_18.SetFloat(213,1f);
KEY2TNG_20 = _world.AcknexObject.GetAcknexObject(946520241);
KEY2TNG_22 = _world.AcknexObject.GetAcknexObject(946520241);
temp_23 =KEY2TNG_22.GetFloat(165);
MY_25 = MY;
temp_26 =MY_25.GetFloat(200);
KEY2TNG_20.SetFloat(165,temp_26-0.01f);
KEY2TNG_31 = _world.AcknexObject.GetAcknexObject(946520241);
KEY2TNG_31.SetFloat(204,0f);
//Unknown keyword: LOCATE
KEY2TNG_34 = _world.AcknexObject.GetAcknexObject(946520241);
KEY2TNG_34.SetFloat(213,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject KEY2TNG_1;
IAcknexObject KEY2TNG_3;
float temp_4;
IAcknexObject MY_6;
float temp_7;
IAcknexObject KEY2TNG_9;
IAcknexObject KEY2TNG_11;
float temp_12;
IAcknexObject MY_14;
float temp_15;
IAcknexObject KEY2TNG_18;
IAcknexObject KEY2TNG_20;
IAcknexObject KEY2TNG_22;
float temp_23;
IAcknexObject MY_25;
float temp_26;
IAcknexObject KEY2TNG_31;
IAcknexObject KEY2TNG_34;
}
public class CYCLETROPATTACK : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CYCLETROPATTACK() {
  }
 public CYCLETROPATTACK(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_2 = MY;
temp_3 =MY_2.GetFloat(182);
if (temp_3 != 0f)
{
goto ATTACK;
}
SHOT_SOUND_ON_5 = _world.GetObject(ObjectType.Skill,3372273679);
SHOT_SOUND_ON_5_val = SHOT_SOUND_ON_5.GetFloat(PropertyName.VAL);
if (SHOT_SOUND_ON_5_val == 0f)
{
goto CONT;
}
{
            var enumerator = new TROPLOOKFOR();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }CONT:
{
            var enumerator = new LOOKPLAYER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_8 = MY;
temp_9 =MY_8.GetFloat(181);
if (temp_9 == 0f)
{
return false;
}
GUN_ON_11 = _world.GetObject(ObjectType.Skill,3014382675);
GUN_ON_11_val = GUN_ON_11.GetFloat(PropertyName.VAL);
if (GUN_ON_11_val != 0f)
{
goto ATTACK;
}
MY_14 = MY;
temp_15 =MY_14.GetFloat(202);
if (temp_15 < 20f)
{
{
            var enumerator = new TROPFOLLOWWARNING();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
return false;
ATTACK:
MY_18 = MY;
MY_18.SetFloat(182,1f);
{
            var enumerator = new TROPTALK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_21 = MY;
temp_22 =MY_21.GetFloat(202);
if (temp_22 < 200f)
{
{
            var enumerator = new TROPFOLLOWATTACK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject SHOT_SOUND_ON_5;
float SHOT_SOUND_ON_5_val;
IAcknexObject MY_8;
float temp_9;
IAcknexObject GUN_ON_11;
float GUN_ON_11_val;
IAcknexObject MY_14;
float temp_15;
IAcknexObject MY_18;
IAcknexObject MY_21;
float temp_22;
}
public class CYCLETROPHIDE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CYCLETROPHIDE() {
  }
 public CYCLETROPHIDE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = new REPELANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_1 = MY;
MY_3 = MY;
temp_4 =MY_3.GetFloat(194);
MY_6 = MY;
temp_7 =MY_6.GetFloat(194);
MY_1.SetFloat(194,temp_7+(UnityEngine.Random.value-0.5f)*2f);
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_18 = MY;
temp_19 =MY_18.GetFloat(205);
if (temp_19 == 1f)
{
return false;
}
{
            var enumerator = new LOOKPLAYER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_22 = MY;
temp_23 =MY_22.GetFloat(181);
if (temp_23 == 0f)
{
goto STOP;
}
MY_26 = MY;
MY_26.SetFloat(168,0.6f);
BULLET_27 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_29 = MY;
MY_29.SetAcknexObject(199,BULLET_27);
return false;
STOP:
MY_32 = MY;
MY_32.SetFloat(168,0f);
MY_35 = MY;
MY_35.SetAcknexObject(199,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_1;
IAcknexObject MY_3;
float temp_4;
IAcknexObject MY_6;
float temp_7;
IAcknexObject MY_18;
float temp_19;
IAcknexObject MY_22;
float temp_23;
IAcknexObject MY_26;
IAcknexObject BULLET_27;
IAcknexObject MY_29;
IAcknexObject MY_32;
IAcknexObject MY_35;
}
public class CYCLETROPBACK : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CYCLETROPBACK() {
  }
 public CYCLETROPBACK(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
}
public class CYCLETROPSHOOT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CYCLETROPSHOOT() {
  }
 public CYCLETROPSHOOT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_2 = MY;
temp_3 =MY_2.GetFloat(173);
if (temp_3 > 9f)
{
{
            var enumerator = new TROPDIE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MY_6 = MY;
temp_7 =MY_6.GetFloat(202);
if (temp_7 > 300f)
{
{
            var enumerator = new TROPWAIT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MY_10 = MY;
temp_11 =MY_10.GetFloat(202);
if (temp_11 > 100f)
{
goto ATTACK;
}
{
            var enumerator = new FOLLOWANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new LOOKPLAYER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_14 = MY;
temp_15 =MY_14.GetFloat(181);
if (temp_15 == 0f)
{
goto ATTACK;
}
SHOOT:
SHOT_SOUND_ON_17 = _world.GetObject(ObjectType.Skill,3372273679);
SHOT_SOUND_ON_17.SetFloat(231,1f);
SHOTSECCOUNT_19 = _world.GetObject(ObjectType.Skill,733093231);
SHOTSECCOUNT_19.SetFloat(231,0f);
if (UnityEngine.Random.value > 0.8f)
{
{
            var enumerator = new TROPAIM();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
{
            var enumerator = new TROPSHOOT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
ATTACK:
{
            var enumerator = new TROPFOLLOWATTACK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_6;
float temp_7;
IAcknexObject MY_10;
float temp_11;
IAcknexObject MY_14;
float temp_15;
IAcknexObject SHOT_SOUND_ON_17;
IAcknexObject SHOTSECCOUNT_19;
}
public class CYCLETROPWARNING : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CYCLETROPWARNING() {
  }
 public CYCLETROPWARNING(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }GUN_ON_1 = _world.GetObject(ObjectType.Skill,3014382675);
GUN_ON_1_val = GUN_ON_1.GetFloat(PropertyName.VAL);
if (GUN_ON_1_val != 0f)
{
{
            var enumerator = new TROPFOLLOWATTACK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MY_4 = MY;
temp_5 =MY_4.GetFloat(202);
if (temp_5 > 10f)
{
goto CONT;
}
MY_8 = MY;
MY_8.SetAcknexObject(190,null);
{
            var enumerator = new TROPWARNING();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
CONT:
MY_11 = MY;
temp_12 =MY_11.GetFloat(202);
if (temp_12 > 40f)
{
{
            var enumerator = new TROPWAIT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
{
            var enumerator = new FOLLOWANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject GUN_ON_1;
float GUN_ON_1_val;
IAcknexObject MY_4;
float temp_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
float temp_12;
}
public class TROPTALK : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPTALK() {
  }
 public TROPTALK(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
RANDOMTROP_1 = _world.GetObject(ObjectType.Skill,1092120691);
RANDOMTROP_1_val = RANDOMTROP_1.GetFloat(PropertyName.VAL);
RANDOMTROP_2 = _world.GetObject(ObjectType.Skill,1092120691);
RANDOMTROP_2.SetFloat(231,Random.Range(0f, 1f));
RANDOMTROP_4 = _world.GetObject(ObjectType.Skill,1092120691);
RANDOMTROP_4_val = RANDOMTROP_4.GetFloat(PropertyName.VAL);
if (RANDOMTROP_4_val > 0.9f)
{
goto SND1;
}
RANDOMTROP_6 = _world.GetObject(ObjectType.Skill,1092120691);
RANDOMTROP_6_val = RANDOMTROP_6.GetFloat(PropertyName.VAL);
if (RANDOMTROP_6_val > 0.8f)
{
goto SND2;
}
return false;
SND1:
TROP09SND_7 = _world.AcknexObject.GetAcknexObject(1466075648);
MY_9 = MY;
_world.PlaySound(TROP09SND_7,0.3f,MY_9);
return false;
SND2:
TROP01SND_10 = _world.AcknexObject.GetAcknexObject(1465788152);
MY_12 = MY;
_world.PlaySound(TROP01SND_10,0.3f,MY_12);
//Unknown keyword: 
      return false;
  }
IAcknexObject RANDOMTROP_1;
float RANDOMTROP_1_val;
IAcknexObject RANDOMTROP_2;
IAcknexObject RANDOMTROP_4;
float RANDOMTROP_4_val;
IAcknexObject RANDOMTROP_6;
float RANDOMTROP_6_val;
IAcknexObject TROP09SND_7;
IAcknexObject MY_9;
IAcknexObject TROP01SND_10;
IAcknexObject MY_12;
}
public class TROPSHOUT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPSHOUT() {
  }
 public TROPSHOUT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
RANDOMTROP_1 = _world.GetObject(ObjectType.Skill,1092120691);
RANDOMTROP_1_val = RANDOMTROP_1.GetFloat(PropertyName.VAL);
RANDOMTROP_2 = _world.GetObject(ObjectType.Skill,1092120691);
RANDOMTROP_2.SetFloat(231,Random.Range(0f, 1f));
RANDOMTROP_4 = _world.GetObject(ObjectType.Skill,1092120691);
RANDOMTROP_4_val = RANDOMTROP_4.GetFloat(PropertyName.VAL);
if (RANDOMTROP_4_val > 0.8f)
{
goto SND1;
}
RANDOMTROP_6 = _world.GetObject(ObjectType.Skill,1092120691);
RANDOMTROP_6_val = RANDOMTROP_6.GetFloat(PropertyName.VAL);
if (RANDOMTROP_6_val > 0.4f)
{
goto SND2;
}
RANDOMTROP_8 = _world.GetObject(ObjectType.Skill,1092120691);
RANDOMTROP_8_val = RANDOMTROP_8.GetFloat(PropertyName.VAL);
if (RANDOMTROP_8_val > 0.1f)
{
goto SND3;
}
TROP06SND_9 = _world.AcknexObject.GetAcknexObject(1465967837);
MY_11 = MY;
_world.PlaySound(TROP06SND_9,0.3f,MY_11);
return false;
SND1:
TROP12SND_12 = _world.AcknexObject.GetAcknexObject(1467010010);
MY_14 = MY;
_world.PlaySound(TROP12SND_12,0.4f,MY_14);
return false;
SND2:
TROP10SND_15 = _world.AcknexObject.GetAcknexObject(1466938136);
MY_17 = MY;
_world.PlaySound(TROP10SND_15,0.3f,MY_17);
return false;
SND3:
TROP03SND_18 = _world.AcknexObject.GetAcknexObject(1465860026);
MY_20 = MY;
_world.PlaySound(TROP03SND_18,0.3f,MY_20);
//Unknown keyword: 
      return false;
  }
IAcknexObject RANDOMTROP_1;
float RANDOMTROP_1_val;
IAcknexObject RANDOMTROP_2;
IAcknexObject RANDOMTROP_4;
float RANDOMTROP_4_val;
IAcknexObject RANDOMTROP_6;
float RANDOMTROP_6_val;
IAcknexObject RANDOMTROP_8;
float RANDOMTROP_8_val;
IAcknexObject TROP06SND_9;
IAcknexObject MY_11;
IAcknexObject TROP12SND_12;
IAcknexObject MY_14;
IAcknexObject TROP10SND_15;
IAcknexObject MY_17;
IAcknexObject TROP03SND_18;
IAcknexObject MY_20;
}
public class PICKTROPAMMO : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public PICKTROPAMMO() {
  }
 public PICKTROPAMMO(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
AMMO_MP5_1 = _world.GetObject(ObjectType.Skill,1494668136);
AMMO_MP5_1_val = AMMO_MP5_1.GetFloat(PropertyName.VAL);
AMMO_MP5_2 = _world.GetObject(ObjectType.Skill,1494668136);
AMMO_MP5_2.SetFloat(231,AMMO_MP5_1_val + 30f);
{
            var enumerator = new SHOWAMMO();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_5 = MY;
MY_5.SetAcknexObject(192,null);
AMMO01SND_6 = _world.AcknexObject.GetAcknexObject(2022635869);
_world.PlaySound(AMMO01SND_6,0.3f, null);
GET01STR_8 = _world.AcknexObject.GetAcknexObject(2295984167);
_world.SetSynonymObject(361798934,GET01STR_8);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject AMMO_MP5_1;
float AMMO_MP5_1_val;
IAcknexObject AMMO_MP5_2;
IAcknexObject MY_5;
IAcknexObject AMMO01SND_6;
IAcknexObject GET01STR_8;
}
public class PICKTROPARMOUR : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public PICKTROPARMOUR() {
  }
 public PICKTROPARMOUR(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
PLAYER_ARMOUR_1 = _world.GetObject(ObjectType.Skill,1211659215);
PLAYER_ARMOUR_1_val = PLAYER_ARMOUR_1.GetFloat(PropertyName.VAL);
if (PLAYER_ARMOUR_1_val > 190f)
{
return false;
}
PLAYER_ARMOUR_3 = _world.GetObject(ObjectType.Skill,1211659215);
PLAYER_ARMOUR_3_val = PLAYER_ARMOUR_3.GetFloat(PropertyName.VAL);
PLAYER_ARMOUR_4 = _world.GetObject(ObjectType.Skill,1211659215);
PLAYER_ARMOUR_4.SetFloat(231,PLAYER_ARMOUR_3_val + 20f);
MY_7 = MY;
MY_7.SetAcknexObject(192,null);
ARMO01SND_8 = _world.AcknexObject.GetAcknexObject(366485954);
_world.PlaySound(ARMO01SND_8,0.5f, null);
GET10STR_10 = _world.AcknexObject.GetAcknexObject(2297134151);
_world.SetSynonymObject(361798934,GET10STR_10);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject PLAYER_ARMOUR_1;
float PLAYER_ARMOUR_1_val;
IAcknexObject PLAYER_ARMOUR_3;
float PLAYER_ARMOUR_3_val;
IAcknexObject PLAYER_ARMOUR_4;
IAcknexObject MY_7;
IAcknexObject ARMO01SND_8;
IAcknexObject GET10STR_10;
}
public class HUMMERHIT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public HUMMERHIT() {
  }
 public HUMMERHIT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat(PropertyName.VAL);
if (SHOOT_FAC_1_val == 0f)
{
return false;
}
MY_2 = MY;
HIT_3 = _world.GetSynonymObject(704);
if (HIT_3 == MY_2)
{
goto HIT;
}
EXPLOSION_ON_5 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_5_val = EXPLOSION_ON_5.GetFloat(PropertyName.VAL);
if (EXPLOSION_ON_5_val == 0f)
{
return false;
}
DISTX_6 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_7 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_7_val = DISTX_7.GetFloat(PropertyName.VAL);
MY_10 = MY;
temp_11 =MY_10.GetFloat(195);
EXPLOSION_CENTER_14 = _world.GetSynonymObject(3704223598);
temp_15 =EXPLOSION_CENTER_14.GetFloat(195);
MY_20 = MY;
temp_21 =MY_20.GetFloat(195);
EXPLOSION_CENTER_24 = _world.GetSynonymObject(3704223598);
temp_25 =EXPLOSION_CENTER_24.GetFloat(195);
MY_30 = MY;
temp_31 =MY_30.GetFloat(196);
EXPLOSION_CENTER_34 = _world.GetSynonymObject(3704223598);
temp_35 =EXPLOSION_CENTER_34.GetFloat(196);
MY_40 = MY;
temp_41 =MY_40.GetFloat(196);
EXPLOSION_CENTER_44 = _world.GetSynonymObject(3704223598);
temp_45 =EXPLOSION_CENTER_44.GetFloat(196);
DISTX_6.SetFloat(231,(temp_11-temp_15)*(temp_21-temp_25)+(temp_31-temp_35)*(temp_41-temp_45));
DISTX_47 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_47_val = DISTX_47.GetFloat(PropertyName.VAL);
DISTX_48 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_48.SetFloat(231,MathUtils.Sqrt(DISTX_47_val));
DISTX_50 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_50_val = DISTX_50.GetFloat(PropertyName.VAL);
if (DISTX_50_val > 25f)
{
return false;
}
HIT:
SHOOT_FAC_52 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_52_val = SHOOT_FAC_52.GetFloat(PropertyName.VAL);
if (SHOOT_FAC_52_val < 9f)
{
return false;
}
MY_55 = MY;
MY_55.SetAcknexObject(191,null);
MOVE_56 = _world.AcknexObject.GetAcknexObject(2089330692);
MY_58 = MY;
MY_58.SetAcknexObject(199,MOVE_56);
MY_61 = MY;
MY_61.SetFloat(169,0.5f);
MY_64 = MY;
MY_64.SetAcknexObject(209,null);
HUMM04SND_65 = _world.AcknexObject.GetAcknexObject(89918285);
MY_67 = MY;
_world.PlaySound(HUMM04SND_65,0.5f,MY_67);
MY_70 = MY;
MY_70.SetFloat(213,1f);
ACTORJUMPSTOP_71 = _world.AcknexObject.GetAcknexObject(1223307560);
MY_73 = MY;
MY_73.SetAcknexObject(189,ACTORJUMPSTOP_71);
//Unknown keyword: 
      return false;
  }
IAcknexObject SHOOT_FAC_1;
float SHOOT_FAC_1_val;
IAcknexObject MY_2;
IAcknexObject HIT_3;
IAcknexObject EXPLOSION_ON_5;
float EXPLOSION_ON_5_val;
IAcknexObject DISTX_6;
IAcknexObject DISTX_7;
float DISTX_7_val;
IAcknexObject MY_10;
float temp_11;
IAcknexObject EXPLOSION_CENTER_14;
float temp_15;
IAcknexObject MY_20;
float temp_21;
IAcknexObject EXPLOSION_CENTER_24;
float temp_25;
IAcknexObject MY_30;
float temp_31;
IAcknexObject EXPLOSION_CENTER_34;
float temp_35;
IAcknexObject MY_40;
float temp_41;
IAcknexObject EXPLOSION_CENTER_44;
float temp_45;
IAcknexObject DISTX_47;
float DISTX_47_val;
IAcknexObject DISTX_48;
IAcknexObject DISTX_50;
float DISTX_50_val;
IAcknexObject SHOOT_FAC_52;
float SHOOT_FAC_52_val;
IAcknexObject MY_55;
IAcknexObject MOVE_56;
IAcknexObject MY_58;
IAcknexObject MY_61;
IAcknexObject MY_64;
IAcknexObject HUMM04SND_65;
IAcknexObject MY_67;
IAcknexObject MY_70;
IAcknexObject ACTORJUMPSTOP_71;
IAcknexObject MY_73;
}
public class LNCHTURN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LNCHTURN() {
  }
 public LNCHTURN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
WAITTIME_0 = _world.GetObject(ObjectType.Skill,33817649);
WAITTIME_1 = _world.GetObject(ObjectType.Skill,33817649);
WAITTIME_1_val = WAITTIME_1.GetFloat(PropertyName.VAL);
WAITTIME_0.SetFloat(231,64f*UnityEngine.Random.value+16f);
if (UnityEngine.Random.value < 0.07f)
{
{
            var enumerator = new LNCHLISTEN();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
if (UnityEngine.Random.value > 0.95f)
{
RIGHTTURNLNCH_11 = _world.GetObject(ObjectType.Skill,16495097);
RIGHTTURNLNCH_12 = _world.GetObject(ObjectType.Skill,16495097);
RIGHTTURNLNCH_12_val = RIGHTTURNLNCH_12.GetFloat(PropertyName.VAL);
RIGHTTURNLNCH_14 = _world.GetObject(ObjectType.Skill,16495097);
RIGHTTURNLNCH_14_val = RIGHTTURNLNCH_14.GetFloat(PropertyName.VAL);
RIGHTTURNLNCH_20 = _world.GetObject(ObjectType.Skill,16495097);
RIGHTTURNLNCH_20_val = RIGHTTURNLNCH_20.GetFloat(PropertyName.VAL);
RIGHTTURNLNCH_11.SetFloat(231,(RIGHTTURNLNCH_14_val-1f)*(RIGHTTURNLNCH_20_val-1f));
}
RIGHTTURNLNCH_24 = _world.GetObject(ObjectType.Skill,16495097);
RIGHTTURNLNCH_24_val = RIGHTTURNLNCH_24.GetFloat(PropertyName.VAL);
if (RIGHTTURNLNCH_24_val > RIGHTTURNLNCH_24.GetFloat(PropertyName.MAX))
{
{
            var enumerator = new TURNRIGHT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
{
            var enumerator = new TURNLEFT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject WAITTIME_0;
IAcknexObject WAITTIME_1;
float WAITTIME_1_val;
IAcknexObject RIGHTTURNLNCH_11;
IAcknexObject RIGHTTURNLNCH_12;
float RIGHTTURNLNCH_12_val;
IAcknexObject RIGHTTURNLNCH_14;
float RIGHTTURNLNCH_14_val;
IAcknexObject RIGHTTURNLNCH_20;
float RIGHTTURNLNCH_20_val;
IAcknexObject RIGHTTURNLNCH_24;
float RIGHTTURNLNCH_24_val;
}
public class LNCHBACKOFF : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LNCHBACKOFF() {
  }
 public LNCHBACKOFF(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
     }
MY_2 = MY;
MY_2.SetAcknexObject(189,null);
MY_5 = MY;
MY_5.SetAcknexObject(192,null);
MY_8 = MY;
MY_8.SetAcknexObject(193,null);
CYCLELNCHBACK_9 = _world.AcknexObject.GetAcknexObject(4038513171);
MY_11 = MY;
MY_11.SetAcknexObject(190,CYCLELNCHBACK_9);
LNCHHIT_12 = _world.AcknexObject.GetAcknexObject(2564893879);
MY_14 = MY;
MY_14.SetAcknexObject(209,LNCHHIT_12);
MY_17 = MY;
MY_17.SetFloat(207,1f);
MY_20 = MY;
MY_20.SetFloat(176,1f);
LNCH1TEX_21 = _world.AcknexObject.GetAcknexObject(3036272404);
MY_23 = MY;
MY_23.SetAcknexObject(164,LNCH1TEX_21);
MY_26 = MY;
MY_26.SetFloat(168,0.5f);
BULLET_27 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_29 = MY;
MY_29.SetAcknexObject(199,BULLET_27);
{
            var enumerator = new REPELANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_31 = MY;
MY_33 = MY;
temp_34 =MY_33.GetFloat(194);
MY_36 = MY;
temp_37 =MY_36.GetFloat(194);
MY_31.SetFloat(194,temp_37+UnityEngine.Random.value-0.5f);
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }
            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)48f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_45 = MY;
temp_46 =MY_45.GetFloat(173);
if (temp_46 > 5f)
{
return false;
}
{
            var enumerator = new LNCHWANDER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }
            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.FramesToTime((int)48f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_50 = MY;
temp_51 =MY_50.GetFloat(173);
if (temp_51 > 5f)
{
return false;
}
{
            var enumerator = new LNCHFOLLOWATTACK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject CYCLELNCHBACK_9;
IAcknexObject MY_11;
IAcknexObject LNCHHIT_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject LNCH1TEX_21;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject BULLET_27;
IAcknexObject MY_29;
IAcknexObject MY_31;
IAcknexObject MY_33;
float temp_34;
IAcknexObject MY_36;
float temp_37;
float startTime1;
float endTime1;
IAcknexObject MY_45;
float temp_46;
float startTime2;
float endTime2;
IAcknexObject MY_50;
float temp_51;
}
public class LNCHWAIT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LNCHWAIT() {
  }
 public LNCHWAIT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(189,null);
MY_5 = MY;
MY_5.SetAcknexObject(192,null);
MY_8 = MY;
MY_8.SetAcknexObject(193,null);
CYCLELNCHATTACK_9 = _world.AcknexObject.GetAcknexObject(4172210842);
MY_11 = MY;
MY_11.SetAcknexObject(190,CYCLELNCHATTACK_9);
LNCHHIT_12 = _world.AcknexObject.GetAcknexObject(2564893879);
MY_14 = MY;
MY_14.SetAcknexObject(209,LNCHHIT_12);
MY_17 = MY;
MY_17.SetFloat(207,0f);
MY_20 = MY;
MY_20.SetFloat(213,0f);
MY_23 = MY;
MY_23.SetFloat(165,-0.05f);
MY_26 = MY;
MY_26.SetFloat(176,1f);
LNCH0TEX_27 = _world.AcknexObject.GetAcknexObject(3036236467);
MY_29 = MY;
MY_29.SetAcknexObject(164,LNCH0TEX_27);
MY_32 = MY;
MY_32.SetFloat(168,0f);
MY_35 = MY;
MY_35.SetAcknexObject(199,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject CYCLELNCHATTACK_9;
IAcknexObject MY_11;
IAcknexObject LNCHHIT_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject LNCH0TEX_27;
IAcknexObject MY_29;
IAcknexObject MY_32;
IAcknexObject MY_35;
}
public class LNCHWANDER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LNCHWANDER() {
  }
 public LNCHWANDER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(189,null);
MY_5 = MY;
MY_5.SetAcknexObject(192,null);
MY_8 = MY;
MY_8.SetAcknexObject(193,null);
CYCLELNCHATTACK_9 = _world.AcknexObject.GetAcknexObject(4172210842);
MY_11 = MY;
MY_11.SetAcknexObject(190,CYCLELNCHATTACK_9);
LNCHHIT_12 = _world.AcknexObject.GetAcknexObject(2564893879);
MY_14 = MY;
MY_14.SetAcknexObject(209,LNCHHIT_12);
MY_17 = MY;
MY_17.SetFloat(207,1f);
MY_20 = MY;
MY_20.SetFloat(219,0f);
MY_23 = MY;
MY_23.SetFloat(176,1f);
LNCH1TEX_24 = _world.AcknexObject.GetAcknexObject(3036272404);
MY_26 = MY;
MY_26.SetAcknexObject(164,LNCH1TEX_24);
MY_29 = MY;
MY_29.SetFloat(168,0.3f);
BULLET_30 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_32 = MY;
MY_32.SetAcknexObject(199,BULLET_30);
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject CYCLELNCHATTACK_9;
IAcknexObject MY_11;
IAcknexObject LNCHHIT_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject LNCH1TEX_24;
IAcknexObject MY_26;
IAcknexObject MY_29;
IAcknexObject BULLET_30;
IAcknexObject MY_32;
}
public class LNCHSEARCH : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LNCHSEARCH() {
  }
 public LNCHSEARCH(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(189,null);
MY_5 = MY;
MY_5.SetAcknexObject(192,null);
MY_8 = MY;
MY_8.SetAcknexObject(193,null);
CYCLELNCHATTACK_9 = _world.AcknexObject.GetAcknexObject(4172210842);
MY_11 = MY;
MY_11.SetAcknexObject(190,CYCLELNCHATTACK_9);
LNCHHIT_12 = _world.AcknexObject.GetAcknexObject(2564893879);
MY_14 = MY;
MY_14.SetAcknexObject(209,LNCHHIT_12);
MY_17 = MY;
MY_17.SetFloat(207,1f);
MY_20 = MY;
MY_20.SetFloat(219,0f);
LNCH1TEX_21 = _world.AcknexObject.GetAcknexObject(3036272404);
MY_23 = MY;
MY_23.SetAcknexObject(164,LNCH1TEX_21);
MY_26 = MY;
MY_26.SetFloat(168,0.3f);
BULLET_27 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_29 = MY;
MY_29.SetAcknexObject(199,BULLET_27);
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject CYCLELNCHATTACK_9;
IAcknexObject MY_11;
IAcknexObject LNCHHIT_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject LNCH1TEX_21;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject BULLET_27;
IAcknexObject MY_29;
}
public class LNCHHIDE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LNCHHIDE() {
  }
 public LNCHHIDE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
MY_2 = MY;
MY_2.SetAcknexObject(189,null);
LNCHESCAPE_3 = _world.AcknexObject.GetAcknexObject(156169763);
MY_5 = MY;
MY_5.SetAcknexObject(192,LNCHESCAPE_3);
MY_8 = MY;
MY_8.SetAcknexObject(193,null);
CYCLELNCHHIDE_9 = _world.AcknexObject.GetAcknexObject(4038737532);
MY_11 = MY;
MY_11.SetAcknexObject(190,CYCLELNCHHIDE_9);
LNCHHIT_12 = _world.AcknexObject.GetAcknexObject(2564893879);
MY_14 = MY;
MY_14.SetAcknexObject(209,LNCHHIT_12);
MY_17 = MY;
MY_17.SetFloat(207,1f);
MY_20 = MY;
MY_20.SetFloat(219,0f);
MY_23 = MY;
MY_23.SetFloat(176,4f);
MY_25 = MY;
MY_27 = MY;
temp_28 =MY_27.GetFloat(194);
PLAYER_ANGLE_29 = _world.GetObject(ObjectType.Skill,462);
PLAYER_ANGLE_29_val = PLAYER_ANGLE_29.GetFloat(PropertyName.VAL);
MY_25.SetFloat(194,PLAYER_ANGLE_29_val+(UnityEngine.Random.value-0.5f)*2.4f);
LNCH1TEX_38 = _world.AcknexObject.GetAcknexObject(3036272404);
MY_40 = MY;
MY_40.SetAcknexObject(164,LNCH1TEX_38);
MY_43 = MY;
MY_43.SetFloat(172,20f);
MY_46 = MY;
MY_46.SetFloat(168,0.6f);
BULLET_47 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_49 = MY;
MY_49.SetAcknexObject(199,BULLET_47);
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }
            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)384f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_53 = MY;
temp_54 =MY_53.GetFloat(173);
if (temp_54 < 9f)
{
{
            var enumerator = new LNCHWANDER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject LNCHESCAPE_3;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject CYCLELNCHHIDE_9;
IAcknexObject MY_11;
IAcknexObject LNCHHIT_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject MY_25;
IAcknexObject MY_27;
float temp_28;
IAcknexObject PLAYER_ANGLE_29;
float PLAYER_ANGLE_29_val;
IAcknexObject LNCH1TEX_38;
IAcknexObject MY_40;
IAcknexObject MY_43;
IAcknexObject MY_46;
IAcknexObject BULLET_47;
IAcknexObject MY_49;
float startTime1;
float endTime1;
IAcknexObject MY_53;
float temp_54;
}
public class LNCHLISTEN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LNCHLISTEN() {
  }
 public LNCHLISTEN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
CYCLELNCHATTACK_6 = _world.AcknexObject.GetAcknexObject(4172210842);
MY_8 = MY;
MY_8.SetAcknexObject(190,CYCLELNCHATTACK_6);
LNCHHIT_9 = _world.AcknexObject.GetAcknexObject(2564893879);
MY_11 = MY;
MY_11.SetAcknexObject(209,LNCHHIT_9);
MY_14 = MY;
MY_14.SetFloat(207,0f);
MY_17 = MY;
MY_17.SetFloat(219,0f);
MY_20 = MY;
MY_20.SetFloat(176,0f);
LNCH0TEX_21 = _world.AcknexObject.GetAcknexObject(3036236467);
MY_23 = MY;
MY_23.SetAcknexObject(164,LNCH0TEX_21);
MY_26 = MY;
MY_26.SetFloat(168,0f);
MY_29 = MY;
MY_29.SetAcknexObject(199,null);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)120f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_33 = MY;
temp_34 =MY_33.GetFloat(173);
if (temp_34 < 9f)
{
{
            var enumerator = new LNCHWANDER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject CYCLELNCHATTACK_6;
IAcknexObject MY_8;
IAcknexObject LNCHHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject LNCH0TEX_21;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject MY_29;
float startTime1;
float endTime1;
IAcknexObject MY_33;
float temp_34;
}
public class LNCHLOOKFOR : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LNCHLOOKFOR() {
  }
 public LNCHLOOKFOR(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(176);
if (temp_3 == 10f)
{
return false;
}
MY_6 = MY;
temp_7 =MY_6.GetFloat(202);
if (temp_7 > 100f)
{
return false;
}
FOLLOW_8 = _world.AcknexObject.GetAcknexObject(2968039200);
MY_10 = MY;
temp_11 =MY_10?.GetAcknexObject(199);
if (temp_11 == FOLLOW_8)
{
return false;
}
MY_14 = MY;
temp_15 =MY_14.GetFloat(173);
if (temp_15 > 5f)
{
return false;
}
MY_18 = MY;
MY_18.SetAcknexObject(192,null);
MY_21 = MY;
MY_21.SetAcknexObject(193,null);
LNCHSEARCH_22 = _world.AcknexObject.GetAcknexObject(687408584);
MY_24 = MY;
MY_24.SetAcknexObject(190,LNCHSEARCH_22);
MY_27 = MY;
MY_27.SetFloat(207,0f);
MY_30 = MY;
MY_30.SetFloat(219,0f);
MY_33 = MY;
temp_34 =MY_33.GetFloat(202);
if (temp_34 < 40f)
{
LNCHFOLLOWATTACK_35 = _world.AcknexObject.GetAcknexObject(4080397597);
MY_37 = MY;
MY_37.SetAcknexObject(190,LNCHFOLLOWATTACK_35);
}
MY_40 = MY;
MY_40.SetFloat(176,10f);
LNCH1TEX_41 = _world.AcknexObject.GetAcknexObject(3036272404);
MY_43 = MY;
MY_43.SetAcknexObject(164,LNCH1TEX_41);
MY_46 = MY;
MY_46.SetFloat(168,0f);
BULLET_47 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_49 = MY;
MY_49.SetAcknexObject(199,BULLET_47);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_6;
float temp_7;
IAcknexObject FOLLOW_8;
IAcknexObject MY_10;
IAcknexObject temp_11;
IAcknexObject MY_14;
float temp_15;
IAcknexObject MY_18;
IAcknexObject MY_21;
IAcknexObject LNCHSEARCH_22;
IAcknexObject MY_24;
IAcknexObject MY_27;
IAcknexObject MY_30;
IAcknexObject MY_33;
float temp_34;
IAcknexObject LNCHFOLLOWATTACK_35;
IAcknexObject MY_37;
IAcknexObject MY_40;
IAcknexObject LNCH1TEX_41;
IAcknexObject MY_43;
IAcknexObject MY_46;
IAcknexObject BULLET_47;
IAcknexObject MY_49;
}
public class LNCHFOLLOW : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LNCHFOLLOW() {
  }
 public LNCHFOLLOW(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
CYCLELNCHATTACK_6 = _world.AcknexObject.GetAcknexObject(4172210842);
MY_8 = MY;
MY_8.SetAcknexObject(190,CYCLELNCHATTACK_6);
LNCHHIT_9 = _world.AcknexObject.GetAcknexObject(2564893879);
MY_11 = MY;
MY_11.SetAcknexObject(209,LNCHHIT_9);
MY_14 = MY;
MY_14.SetFloat(207,1f);
MY_17 = MY;
MY_17.SetFloat(219,0f);
MY_20 = MY;
MY_20.SetFloat(176,1f);
LNCH1TEX_21 = _world.AcknexObject.GetAcknexObject(3036272404);
MY_23 = MY;
MY_23.SetAcknexObject(164,LNCH1TEX_21);
MY_26 = MY;
MY_26.SetFloat(168,0.4f);
FOLLOW_27 = _world.AcknexObject.GetAcknexObject(2968039200);
MY_29 = MY;
MY_29.SetAcknexObject(199,FOLLOW_27);
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject CYCLELNCHATTACK_6;
IAcknexObject MY_8;
IAcknexObject LNCHHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject LNCH1TEX_21;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject FOLLOW_27;
IAcknexObject MY_29;
}
public class LNCHFOLLOWATTACK : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LNCHFOLLOWATTACK() {
  }
 public LNCHFOLLOWATTACK(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
CYCLELNCHSHOOT_6 = _world.AcknexObject.GetAcknexObject(147341967);
MY_8 = MY;
MY_8.SetAcknexObject(190,CYCLELNCHSHOOT_6);
LNCHHIT_9 = _world.AcknexObject.GetAcknexObject(2564893879);
MY_11 = MY;
MY_11.SetAcknexObject(209,LNCHHIT_9);
MY_14 = MY;
MY_14.SetFloat(207,1f);
MY_17 = MY;
MY_17.SetFloat(219,0f);
MY_20 = MY;
MY_20.SetFloat(176,2f);
LNCH1TEX_21 = _world.AcknexObject.GetAcknexObject(3036272404);
MY_23 = MY;
MY_23.SetAcknexObject(164,LNCH1TEX_21);
MY_26 = MY;
MY_26.SetFloat(168,0.4f);
FOLLOW_27 = _world.AcknexObject.GetAcknexObject(2968039200);
MY_29 = MY;
MY_29.SetAcknexObject(199,FOLLOW_27);
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject CYCLELNCHSHOOT_6;
IAcknexObject MY_8;
IAcknexObject LNCHHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject LNCH1TEX_21;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject FOLLOW_27;
IAcknexObject MY_29;
}
public class LNCHAIM : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LNCHAIM() {
  }
 public LNCHAIM(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
LNCHSHOOT_6 = _world.AcknexObject.GetAcknexObject(1452610271);
MY_8 = MY;
MY_8.SetAcknexObject(190,LNCHSHOOT_6);
LNCHHIT_9 = _world.AcknexObject.GetAcknexObject(2564893879);
MY_11 = MY;
MY_11.SetAcknexObject(209,LNCHHIT_9);
MY_14 = MY;
MY_14.SetFloat(207,0f);
MY_17 = MY;
MY_17.SetFloat(219,0f);
MY_20 = MY;
MY_20.SetFloat(176,3f);
LNCH3ATEX_21 = _world.AcknexObject.GetAcknexObject(1414414359);
MY_23 = MY;
MY_23.SetAcknexObject(164,LNCH3ATEX_21);
MY_26 = MY;
MY_26.SetFloat(168,0f);
FOLLOW_27 = _world.AcknexObject.GetAcknexObject(2968039200);
MY_29 = MY;
MY_29.SetAcknexObject(199,FOLLOW_27);
{
            var enumerator = new LNCHSHOUT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject LNCHSHOOT_6;
IAcknexObject MY_8;
IAcknexObject LNCHHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject LNCH3ATEX_21;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject FOLLOW_27;
IAcknexObject MY_29;
}
public class LNCHSHOOT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LNCHSHOOT() {
  }
 public LNCHSHOOT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
LNCHBACKOFF_6 = _world.AcknexObject.GetAcknexObject(575087582);
MY_8 = MY;
MY_8.SetAcknexObject(190,LNCHBACKOFF_6);
LNCHHIT_9 = _world.AcknexObject.GetAcknexObject(2564893879);
MY_11 = MY;
MY_11.SetAcknexObject(209,LNCHHIT_9);
MY_14 = MY;
MY_14.SetFloat(207,0f);
MY_17 = MY;
MY_17.SetFloat(219,0f);
{
            var enumerator = new CHOOSEMISSILE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MISSILE_19 = _world.GetSynonymObject(3680056099);
if (MISSILE_19 == null)
{
return false;
}
MY_22 = MY;
MY_22.SetFloat(176,3f);
LNCH3TEX_23 = _world.AcknexObject.GetAcknexObject(3036344278);
MY_25 = MY;
MY_25.SetAcknexObject(164,LNCH3TEX_23);
MY_28 = MY;
MY_28.SetFloat(168,0f);
{
            var enumerator = new FOLLOWANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }FOLLOW_29 = _world.AcknexObject.GetAcknexObject(2968039200);
MY_31 = MY;
MY_31.SetAcknexObject(199,FOLLOW_29);
{
            var enumerator = new LOOKPLAYER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_34 = MY;
temp_35 =MY_34.GetFloat(181);
if (temp_35 == 0f)
{
goto MISS;
}
DISTZ_36 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_37 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_37_val = DISTZ_37.GetFloat(PropertyName.VAL);
FLOOR_HGT_38 = _world.GetObject(ObjectType.Skill,567);
FLOOR_HGT_38_val = FLOOR_HGT_38.GetFloat(PropertyName.VAL);
MY_41 = MY;
temp_42 =MY_41.GetFloat(200);
DISTZ_36.SetFloat(231,FLOOR_HGT_38_val-temp_42);
MISSILE_45 = _world.GetSynonymObject(3680056099);
MISSILE_45.SetFloat(213,1f);
MISSILE_48 = _world.GetSynonymObject(3680056099);
MISSILE_48.SetFloat(168,3f);
MISSILE_51 = _world.GetSynonymObject(3680056099);
MISSILE_51.SetFloat(169,0.1f);
MY_54 = MY;
temp_55 =MY_54.GetFloat(202);
if (temp_55 != 0f)
{
MISSILE_57 = _world.GetSynonymObject(3680056099);
MISSILE_59 = _world.GetSynonymObject(3680056099);
temp_60 =MISSILE_59.GetFloat(169);
DISTZ_61 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_61_val = DISTZ_61.GetFloat(PropertyName.VAL);
MY_64 = MY;
temp_65 =MY_64.GetFloat(202);
MISSILE_57.SetFloat(169,DISTZ_61_val/temp_65);
}
MY_67 = MY;
temp_68 =MY_67.GetFloat(195);
MISSILE_70 = _world.GetSynonymObject(3680056099);
MISSILE_70.SetFloat(195,temp_68);
MY_72 = MY;
temp_73 =MY_72.GetFloat(196);
MISSILE_75 = _world.GetSynonymObject(3680056099);
MISSILE_75.SetFloat(196,temp_73);
MY_77 = MY;
temp_78 =MY_77.GetFloat(194);
MISSILE_80 = _world.GetSynonymObject(3680056099);
MISSILE_80.SetFloat(194,temp_78);
MISSILE_82 = _world.GetSynonymObject(3680056099);
MISSILE_84 = _world.GetSynonymObject(3680056099);
temp_85 =MISSILE_84.GetFloat(165);
MY_87 = MY;
temp_88 =MY_87.GetFloat(200);
MISSILE_82.SetFloat(165,temp_88+3.2f);
MISS1TEX_91 = _world.AcknexObject.GetAcknexObject(1181881291);
MISSILE_93 = _world.GetSynonymObject(3680056099);
MISSILE_93.SetAcknexObject(164,MISS1TEX_91);
EXPLODEMISSILE_94 = _world.AcknexObject.GetAcknexObject(3869018100);
MISSILE_96 = _world.GetSynonymObject(3680056099);
MISSILE_96.SetAcknexObject(209,EXPLODEMISSILE_94);
EXPLODEMISSILE_97 = _world.AcknexObject.GetAcknexObject(3869018100);
MISSILE_99 = _world.GetSynonymObject(3680056099);
MISSILE_99.SetAcknexObject(192,EXPLODEMISSILE_97);
EXPLODETARGET_100 = _world.AcknexObject.GetAcknexObject(3244966725);
MISSILE_102 = _world.GetSynonymObject(3680056099);
MISSILE_102.SetAcknexObject(191,EXPLODETARGET_100);
AIMMISSILE_103 = _world.AcknexObject.GetAcknexObject(1530892122);
MISSILE_105 = _world.GetSynonymObject(3680056099);
MISSILE_105.SetAcknexObject(189,AIMMISSILE_103);
MISSILE_108 = _world.GetSynonymObject(3680056099);
MISSILE_108.SetFloat(204,0f);
BULLET_109 = _world.AcknexObject.GetAcknexObject(2818612821);
MISSILE_111 = _world.GetSynonymObject(3680056099);
MISSILE_111.SetAcknexObject(199,BULLET_109);
MISSILE_114 = _world.GetSynonymObject(3680056099);
MISSILE_114.SetFloat(206,1f);
//Unknown keyword: LOCATE
return false;
MISS:
{
            var enumerator = new LNCHFOLLOWATTACK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject LNCHBACKOFF_6;
IAcknexObject MY_8;
IAcknexObject LNCHHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MISSILE_19;
IAcknexObject MY_22;
IAcknexObject LNCH3TEX_23;
IAcknexObject MY_25;
IAcknexObject MY_28;
IAcknexObject FOLLOW_29;
IAcknexObject MY_31;
IAcknexObject MY_34;
float temp_35;
IAcknexObject DISTZ_36;
IAcknexObject DISTZ_37;
float DISTZ_37_val;
IAcknexObject FLOOR_HGT_38;
float FLOOR_HGT_38_val;
IAcknexObject MY_41;
float temp_42;
IAcknexObject MISSILE_45;
IAcknexObject MISSILE_48;
IAcknexObject MISSILE_51;
IAcknexObject MY_54;
float temp_55;
IAcknexObject MISSILE_57;
IAcknexObject MISSILE_59;
float temp_60;
IAcknexObject DISTZ_61;
float DISTZ_61_val;
IAcknexObject MY_64;
float temp_65;
IAcknexObject MY_67;
float temp_68;
IAcknexObject MISSILE_70;
IAcknexObject MY_72;
float temp_73;
IAcknexObject MISSILE_75;
IAcknexObject MY_77;
float temp_78;
IAcknexObject MISSILE_80;
IAcknexObject MISSILE_82;
IAcknexObject MISSILE_84;
float temp_85;
IAcknexObject MY_87;
float temp_88;
IAcknexObject MISS1TEX_91;
IAcknexObject MISSILE_93;
IAcknexObject EXPLODEMISSILE_94;
IAcknexObject MISSILE_96;
IAcknexObject EXPLODEMISSILE_97;
IAcknexObject MISSILE_99;
IAcknexObject EXPLODETARGET_100;
IAcknexObject MISSILE_102;
IAcknexObject AIMMISSILE_103;
IAcknexObject MISSILE_105;
IAcknexObject MISSILE_108;
IAcknexObject BULLET_109;
IAcknexObject MISSILE_111;
IAcknexObject MISSILE_114;
}
public class LNCHESCAPE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LNCHESCAPE() {
  }
 public LNCHESCAPE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
LNCHHIDE_3 = _world.AcknexObject.GetAcknexObject(3037086924);
MY_5 = MY;
MY_5.SetAcknexObject(193,LNCHHIDE_3);
CYCLELNCHHIDE_6 = _world.AcknexObject.GetAcknexObject(4038737532);
MY_8 = MY;
MY_8.SetAcknexObject(190,CYCLELNCHHIDE_6);
LNCHHIT_9 = _world.AcknexObject.GetAcknexObject(2564893879);
MY_11 = MY;
MY_11.SetAcknexObject(209,LNCHHIT_9);
MY_14 = MY;
MY_14.SetFloat(207,1f);
MY_17 = MY;
MY_17.SetFloat(219,0f);
MY_20 = MY;
MY_20.SetFloat(176,4f);
LNCH1TEX_21 = _world.AcknexObject.GetAcknexObject(3036272404);
MY_23 = MY;
MY_23.SetAcknexObject(164,LNCH1TEX_21);
MY_26 = MY;
MY_26.SetFloat(172,30f);
MY_29 = MY;
MY_29.SetFloat(168,0.4f);
REPEL_30 = _world.AcknexObject.GetAcknexObject(233967877);
MY_32 = MY;
MY_32.SetAcknexObject(199,REPEL_30);
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject LNCHHIDE_3;
IAcknexObject MY_5;
IAcknexObject CYCLELNCHHIDE_6;
IAcknexObject MY_8;
IAcknexObject LNCHHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject LNCH1TEX_21;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject MY_29;
IAcknexObject REPEL_30;
IAcknexObject MY_32;
}
public class LNCHDEAD : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LNCHDEAD() {
  }
 public LNCHDEAD(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
MY_8 = MY;
MY_8.SetAcknexObject(209,null);
MY_11 = MY;
MY_11.SetAcknexObject(190,null);
MY_14 = MY;
MY_14.SetFloat(176,9f);
LNCH9TEX_15 = _world.AcknexObject.GetAcknexObject(3036559900);
MY_17 = MY;
MY_17.SetAcknexObject(164,LNCH9TEX_15);
MY_20 = MY;
MY_20.SetFloat(168,0f);
MY_23 = MY;
MY_23.SetAcknexObject(199,null);
MY_26 = MY;
MY_26.SetFloat(206,1f);
MY_29 = MY;
MY_29.SetFloat(207,0f);
MY_32 = MY;
MY_32.SetFloat(219,1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject LNCH9TEX_15;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject MY_29;
IAcknexObject MY_32;
}
public class LNCHDIE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LNCHDIE() {
  }
 public LNCHDIE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetFloat(173,10f);
MY_5 = MY;
MY_5.SetAcknexObject(192,null);
MY_8 = MY;
MY_8.SetAcknexObject(193,null);
MY_11 = MY;
MY_11.SetAcknexObject(209,null);
LNCHDEAD_12 = _world.AcknexObject.GetAcknexObject(3036938720);
MY_14 = MY;
MY_14.SetAcknexObject(190,LNCHDEAD_12);
MY_17 = MY;
temp_18 =MY_17.GetFloat(184);
if (temp_18 != 0f)
{
{
            var enumerator = new LNCHDROPKEY();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }}
MY_21 = MY;
MY_21.SetFloat(176,8f);
LNCH8TEX_22 = _world.AcknexObject.GetAcknexObject(3036523963);
MY_24 = MY;
MY_24.SetAcknexObject(164,LNCH8TEX_22);
MY_27 = MY;
MY_27.SetFloat(168,0f);
MY_30 = MY;
MY_30.SetAcknexObject(199,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject LNCHDEAD_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
float temp_18;
IAcknexObject MY_21;
IAcknexObject LNCH8TEX_22;
IAcknexObject MY_24;
IAcknexObject MY_27;
IAcknexObject MY_30;
}
public class LNCHIMPLODE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LNCHIMPLODE() {
  }
 public LNCHIMPLODE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
DISTX_0 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_1 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_1_val = DISTX_1.GetFloat(PropertyName.VAL);
MY_4 = MY;
temp_5 =MY_4.GetFloat(195);
EXPLOSION_CENTER_8 = _world.GetSynonymObject(3704223598);
temp_9 =EXPLOSION_CENTER_8.GetFloat(195);
MY_14 = MY;
temp_15 =MY_14.GetFloat(195);
EXPLOSION_CENTER_18 = _world.GetSynonymObject(3704223598);
temp_19 =EXPLOSION_CENTER_18.GetFloat(195);
MY_24 = MY;
temp_25 =MY_24.GetFloat(196);
EXPLOSION_CENTER_28 = _world.GetSynonymObject(3704223598);
temp_29 =EXPLOSION_CENTER_28.GetFloat(196);
MY_34 = MY;
temp_35 =MY_34.GetFloat(196);
EXPLOSION_CENTER_38 = _world.GetSynonymObject(3704223598);
temp_39 =EXPLOSION_CENTER_38.GetFloat(196);
DISTX_0.SetFloat(231,(temp_5-temp_9)*(temp_15-temp_19)+(temp_25-temp_29)*(temp_35-temp_39));
DISTX_41 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_41_val = DISTX_41.GetFloat(PropertyName.VAL);
DISTX_42 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_42.SetFloat(231,MathUtils.Sqrt(DISTX_41_val));
DISTZ_43 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_44 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_44_val = DISTZ_44.GetFloat(PropertyName.VAL);
MY_46 = MY;
temp_47 =MY_46.GetFloat(165);
EXPLOSION_CENTER_50 = _world.GetSynonymObject(3704223598);
temp_51 =EXPLOSION_CENTER_50.GetFloat(165);
DISTZ_43.SetFloat(231,temp_47-temp_51);
DISTX_53 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_53_val = DISTX_53.GetFloat(PropertyName.VAL);
if (DISTX_53_val > 10f)
{
{
            var enumerator = new BEAMREACT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MY_56 = MY;
MY_56.SetFloat(206,1f);
MY_59 = MY;
MY_59.SetFloat(207,0f);
MY_62 = MY;
MY_62.SetAcknexObject(192,null);
MY_65 = MY;
MY_65.SetAcknexObject(193,null);
MY_68 = MY;
MY_68.SetAcknexObject(209,null);
VANISHFORGOOD_69 = _world.AcknexObject.GetAcknexObject(1333438470);
MY_71 = MY;
MY_71.SetAcknexObject(190,VANISHFORGOOD_69);
MY_74 = MY;
MY_74.SetFloat(176,8f);
LNCH0ATEX_75 = _world.AcknexObject.GetAcknexObject(1410856596);
MY_77 = MY;
MY_77.SetAcknexObject(164,LNCH0ATEX_75);
MY_80 = MY;
MY_80.SetFloat(168,0f);
MY_83 = MY;
MY_83.SetAcknexObject(199,null);
MY_86 = MY;
temp_87 =MY_86.GetFloat(184);
if (temp_87 != 0f)
{
{
            var enumerator = new LNCHDROPKEY();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }}
//Unknown keyword: 
      return false;
  }
IAcknexObject DISTX_0;
IAcknexObject DISTX_1;
float DISTX_1_val;
IAcknexObject MY_4;
float temp_5;
IAcknexObject EXPLOSION_CENTER_8;
float temp_9;
IAcknexObject MY_14;
float temp_15;
IAcknexObject EXPLOSION_CENTER_18;
float temp_19;
IAcknexObject MY_24;
float temp_25;
IAcknexObject EXPLOSION_CENTER_28;
float temp_29;
IAcknexObject MY_34;
float temp_35;
IAcknexObject EXPLOSION_CENTER_38;
float temp_39;
IAcknexObject DISTX_41;
float DISTX_41_val;
IAcknexObject DISTX_42;
IAcknexObject DISTZ_43;
IAcknexObject DISTZ_44;
float DISTZ_44_val;
IAcknexObject MY_46;
float temp_47;
IAcknexObject EXPLOSION_CENTER_50;
float temp_51;
IAcknexObject DISTX_53;
float DISTX_53_val;
IAcknexObject MY_56;
IAcknexObject MY_59;
IAcknexObject MY_62;
IAcknexObject MY_65;
IAcknexObject MY_68;
IAcknexObject VANISHFORGOOD_69;
IAcknexObject MY_71;
IAcknexObject MY_74;
IAcknexObject LNCH0ATEX_75;
IAcknexObject MY_77;
IAcknexObject MY_80;
IAcknexObject MY_83;
IAcknexObject MY_86;
float temp_87;
}
public class LNCHHIT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LNCHHIT() {
  }
 public LNCHHIT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat(PropertyName.VAL);
if (SHOOT_FAC_1_val == 0f)
{
goto OBSTACLE;
}
MY_2 = MY;
HIT_3 = _world.GetSynonymObject(704);
if (HIT_3 == MY_2)
{
goto HIT;
}
EXPLOSION_ON_5 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_5_val = EXPLOSION_ON_5.GetFloat(PropertyName.VAL);
if (EXPLOSION_ON_5_val == 0f)
{
goto OBSTACLE;
}
DISTX_6 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_7 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_7_val = DISTX_7.GetFloat(PropertyName.VAL);
MY_10 = MY;
temp_11 =MY_10.GetFloat(195);
EXPLOSION_CENTER_14 = _world.GetSynonymObject(3704223598);
temp_15 =EXPLOSION_CENTER_14.GetFloat(195);
MY_20 = MY;
temp_21 =MY_20.GetFloat(195);
EXPLOSION_CENTER_24 = _world.GetSynonymObject(3704223598);
temp_25 =EXPLOSION_CENTER_24.GetFloat(195);
MY_30 = MY;
temp_31 =MY_30.GetFloat(196);
EXPLOSION_CENTER_34 = _world.GetSynonymObject(3704223598);
temp_35 =EXPLOSION_CENTER_34.GetFloat(196);
MY_40 = MY;
temp_41 =MY_40.GetFloat(196);
EXPLOSION_CENTER_44 = _world.GetSynonymObject(3704223598);
temp_45 =EXPLOSION_CENTER_44.GetFloat(196);
DISTX_6.SetFloat(231,(temp_11-temp_15)*(temp_21-temp_25)+(temp_31-temp_35)*(temp_41-temp_45));
DISTX_47 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_47_val = DISTX_47.GetFloat(PropertyName.VAL);
DISTX_48 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_48.SetFloat(231,MathUtils.Sqrt(DISTX_47_val));
DISTX_50 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_50_val = DISTX_50.GetFloat(PropertyName.VAL);
if (DISTX_50_val > 25f)
{
goto OBSTACLE;
}
HIT:
EXPLOSION_ON_52 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_52_val = EXPLOSION_ON_52.GetFloat(PropertyName.VAL);
if (EXPLOSION_ON_52_val != 2f)
{
goto CONT;
}
MY_55 = MY;
temp_56 =MY_55.GetFloat(205);
if (temp_56 == 1f)
{
{
            var enumerator = new LNCHIMPLODE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
CONT:
MY_58 = MY;
MY_60 = MY;
temp_61 =MY_60.GetFloat(173);
MY_63 = MY;
temp_64 =MY_63.GetFloat(173);
SHOOT_FAC_66 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_66_val = SHOOT_FAC_66.GetFloat(PropertyName.VAL);
MY_58.SetFloat(173,temp_64+SHOOT_FAC_66_val*(UnityEngine.Random.value+2f)/3f);
MY_77 = MY;
temp_78 =MY_77.GetFloat(173);
if (temp_78 > 5f)
{
goto DIE;
}
if (UnityEngine.Random.value < 0.05f)
{
goto DIE;
}
MY_82 = MY;
temp_83 =MY_82?.GetAcknexObject(164);
_world.SetSynonymObject(3037925506,temp_83);
LNCH5TEX_85 = _world.AcknexObject.GetAcknexObject(3036416152);
MY_87 = MY;
MY_87.SetAcknexObject(164,LNCH5TEX_85);
MY_90 = MY;
MY_90.SetAcknexObject(192,null);
MY_93 = MY;
MY_93.SetAcknexObject(193,null);
MY_96 = MY;
MY_96.SetAcknexObject(209,null);
if (UnityEngine.Random.value > 0.8f)
{
goto SONOFA;
}
TROP05SND_99 = _world.AcknexObject.GetAcknexObject(1465931900);
MY_101 = MY;
_world.PlaySound(TROP05SND_99,0.2f,MY_101);
goto WAIT;
SONOFA:
TROP11SND_102 = _world.AcknexObject.GetAcknexObject(1466974073);
MY_104 = MY;
_world.PlaySound(TROP11SND_102,0.2f,MY_104);
WAIT:

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)4f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
LNCHESCAPE_106 = _world.AcknexObject.GetAcknexObject(156169763);
MY_108 = MY;
MY_108.SetAcknexObject(192,LNCHESCAPE_106);
LNCHHIDE_109 = _world.AcknexObject.GetAcknexObject(3037086924);
MY_111 = MY;
MY_111.SetAcknexObject(193,LNCHHIDE_109);
LNCHHIT_112 = _world.AcknexObject.GetAcknexObject(2564893879);
MY_114 = MY;
MY_114.SetAcknexObject(209,LNCHHIT_112);
LNCH_TEX_115 = _world.GetSynonymObject(3037925506);
MY_117 = MY;
MY_117.SetAcknexObject(164,LNCH_TEX_115);
MY_120 = MY;
temp_121 =MY_120.GetFloat(173);
if (temp_121 > 4f)
{
{
            var enumerator = new LNCHHIDE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MY_124 = MY;
temp_125 =MY_124.GetFloat(176);
if (temp_125 != 4f)
{
{
            var enumerator = new LNCHFOLLOWATTACK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
return false;
DIE:
MY_128 = MY;
MY_128.SetFloat(173,10f);
{
            var enumerator = new LNCHDIE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
return false;
OBSTACLE:
{
            var enumerator = new LNCHTURN();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject SHOOT_FAC_1;
float SHOOT_FAC_1_val;
IAcknexObject MY_2;
IAcknexObject HIT_3;
IAcknexObject EXPLOSION_ON_5;
float EXPLOSION_ON_5_val;
IAcknexObject DISTX_6;
IAcknexObject DISTX_7;
float DISTX_7_val;
IAcknexObject MY_10;
float temp_11;
IAcknexObject EXPLOSION_CENTER_14;
float temp_15;
IAcknexObject MY_20;
float temp_21;
IAcknexObject EXPLOSION_CENTER_24;
float temp_25;
IAcknexObject MY_30;
float temp_31;
IAcknexObject EXPLOSION_CENTER_34;
float temp_35;
IAcknexObject MY_40;
float temp_41;
IAcknexObject EXPLOSION_CENTER_44;
float temp_45;
IAcknexObject DISTX_47;
float DISTX_47_val;
IAcknexObject DISTX_48;
IAcknexObject DISTX_50;
float DISTX_50_val;
IAcknexObject EXPLOSION_ON_52;
float EXPLOSION_ON_52_val;
IAcknexObject MY_55;
float temp_56;
IAcknexObject MY_58;
IAcknexObject MY_60;
float temp_61;
IAcknexObject MY_63;
float temp_64;
IAcknexObject SHOOT_FAC_66;
float SHOOT_FAC_66_val;
IAcknexObject MY_77;
float temp_78;
IAcknexObject MY_82;
IAcknexObject temp_83;
IAcknexObject LNCH5TEX_85;
IAcknexObject MY_87;
IAcknexObject MY_90;
IAcknexObject MY_93;
IAcknexObject MY_96;
IAcknexObject TROP05SND_99;
IAcknexObject MY_101;
IAcknexObject TROP11SND_102;
IAcknexObject MY_104;
float startTime1;
float endTime1;
IAcknexObject LNCHESCAPE_106;
IAcknexObject MY_108;
IAcknexObject LNCHHIDE_109;
IAcknexObject MY_111;
IAcknexObject LNCHHIT_112;
IAcknexObject MY_114;
IAcknexObject LNCH_TEX_115;
IAcknexObject MY_117;
IAcknexObject MY_120;
float temp_121;
IAcknexObject MY_124;
float temp_125;
IAcknexObject MY_128;
}
public class LNCHDROPKEY : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LNCHDROPKEY() {
  }
 public LNCHDROPKEY(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
KEY2TNG_1 = _world.AcknexObject.GetAcknexObject(946520241);
KEY2TNG_3 = _world.AcknexObject.GetAcknexObject(946520241);
temp_4 =KEY2TNG_3.GetFloat(195);
MY_6 = MY;
temp_7 =MY_6.GetFloat(195);
KEY2TNG_1.SetFloat(195,temp_7);
KEY2TNG_9 = _world.AcknexObject.GetAcknexObject(946520241);
KEY2TNG_11 = _world.AcknexObject.GetAcknexObject(946520241);
temp_12 =KEY2TNG_11.GetFloat(196);
MY_14 = MY;
temp_15 =MY_14.GetFloat(196);
KEY2TNG_9.SetFloat(196,temp_15);
KEY2TNG_18 = _world.AcknexObject.GetAcknexObject(946520241);
KEY2TNG_18.SetFloat(213,1f);
KEY2TNG_20 = _world.AcknexObject.GetAcknexObject(946520241);
KEY2TNG_22 = _world.AcknexObject.GetAcknexObject(946520241);
temp_23 =KEY2TNG_22.GetFloat(165);
MY_25 = MY;
temp_26 =MY_25.GetFloat(200);
KEY2TNG_20.SetFloat(165,temp_26-0.01f);
KEY2TNG_31 = _world.AcknexObject.GetAcknexObject(946520241);
KEY2TNG_31.SetFloat(204,0f);
//Unknown keyword: LOCATE
KEY2TNG_34 = _world.AcknexObject.GetAcknexObject(946520241);
KEY2TNG_34.SetFloat(213,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject KEY2TNG_1;
IAcknexObject KEY2TNG_3;
float temp_4;
IAcknexObject MY_6;
float temp_7;
IAcknexObject KEY2TNG_9;
IAcknexObject KEY2TNG_11;
float temp_12;
IAcknexObject MY_14;
float temp_15;
IAcknexObject KEY2TNG_18;
IAcknexObject KEY2TNG_20;
IAcknexObject KEY2TNG_22;
float temp_23;
IAcknexObject MY_25;
float temp_26;
IAcknexObject KEY2TNG_31;
IAcknexObject KEY2TNG_34;
}
public class CYCLELNCHATTACK : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CYCLELNCHATTACK() {
  }
 public CYCLELNCHATTACK(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }SHOT_SOUND_ON_1 = _world.GetObject(ObjectType.Skill,3372273679);
SHOT_SOUND_ON_1_val = SHOT_SOUND_ON_1.GetFloat(PropertyName.VAL);
if (SHOT_SOUND_ON_1_val == 0f)
{
goto CONT;
}
{
            var enumerator = new LNCHLOOKFOR();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }CONT:
{
            var enumerator = new LOOKPLAYER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_4 = MY;
temp_5 =MY_4.GetFloat(181);
if (temp_5 == 0f)
{
return false;
}
MY_8 = MY;
temp_9 =MY_8.GetFloat(182);
if (temp_9 != 0f)
{
goto ATTACK;
}
GUN_ON_11 = _world.GetObject(ObjectType.Skill,3014382675);
GUN_ON_11_val = GUN_ON_11.GetFloat(PropertyName.VAL);
if (GUN_ON_11_val != 0f)
{
goto ATTACK;
}
return false;
ATTACK:
MY_14 = MY;
MY_14.SetFloat(182,1f);
{
            var enumerator = new LNCHTALK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new LNCHFOLLOWATTACK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject SHOT_SOUND_ON_1;
float SHOT_SOUND_ON_1_val;
IAcknexObject MY_4;
float temp_5;
IAcknexObject MY_8;
float temp_9;
IAcknexObject GUN_ON_11;
float GUN_ON_11_val;
IAcknexObject MY_14;
}
public class CYCLELNCHHIDE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CYCLELNCHHIDE() {
  }
 public CYCLELNCHHIDE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(205);
if (temp_3 == 0f)
{
goto STOP;
}
{
            var enumerator = new REPELANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_5 = MY;
MY_7 = MY;
temp_8 =MY_7.GetFloat(194);
MY_10 = MY;
temp_11 =MY_10.GetFloat(194);
MY_5.SetFloat(194,temp_11+2f*(UnityEngine.Random.value-0.5f));
MY_22 = MY;
MY_22.SetFloat(168,0.6f);
BULLET_23 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_25 = MY;
MY_25.SetAcknexObject(199,BULLET_23);
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
STOP:
MY_28 = MY;
MY_28.SetFloat(168,0f);
MY_31 = MY;
MY_31.SetAcknexObject(199,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_5;
IAcknexObject MY_7;
float temp_8;
IAcknexObject MY_10;
float temp_11;
IAcknexObject MY_22;
IAcknexObject BULLET_23;
IAcknexObject MY_25;
IAcknexObject MY_28;
IAcknexObject MY_31;
}
public class CYCLELNCHBACK : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CYCLELNCHBACK() {
  }
 public CYCLELNCHBACK(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
}
public class CYCLELNCHSHOOT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CYCLELNCHSHOOT() {
  }
 public CYCLELNCHSHOOT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_2 = MY;
temp_3 =MY_2.GetFloat(173);
if (temp_3 > 9f)
{
{
            var enumerator = new LNCHDIE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MY_6 = MY;
temp_7 =MY_6.GetFloat(202);
if (temp_7 < 25f)
{
{
            var enumerator = new LNCHBACKOFF();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
{
            var enumerator = new LOOKPLAYER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_10 = MY;
temp_11 =MY_10.GetFloat(181);
if (temp_11 == 0f)
{
goto ATTACK;
}
SHOOT:
SHOT_SOUND_ON_13 = _world.GetObject(ObjectType.Skill,3372273679);
SHOT_SOUND_ON_13.SetFloat(231,1f);
SHOTSECCOUNT_15 = _world.GetObject(ObjectType.Skill,733093231);
SHOTSECCOUNT_15.SetFloat(231,0f);
{
            var enumerator = new LNCHAIM();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
ATTACK:
{
            var enumerator = new LNCHFOLLOWATTACK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_6;
float temp_7;
IAcknexObject MY_10;
float temp_11;
IAcknexObject SHOT_SOUND_ON_13;
IAcknexObject SHOTSECCOUNT_15;
}
public class LNCHTALK : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LNCHTALK() {
  }
 public LNCHTALK(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
if (UnityEngine.Random.value > 0.9f)
{
goto TALK2;
}
if (UnityEngine.Random.value > 0.8f)
{
goto TALK1;
}
return false;
TALK1:
TROP12SND_4 = _world.AcknexObject.GetAcknexObject(1467010010);
MY_6 = MY;
_world.PlaySound(TROP12SND_4,0.3f,MY_6);
return false;
TALK2:
TROP09SND_7 = _world.AcknexObject.GetAcknexObject(1466075648);
MY_9 = MY;
_world.PlaySound(TROP09SND_7,0.3f,MY_9);
//Unknown keyword: 
      return false;
  }
IAcknexObject TROP12SND_4;
IAcknexObject MY_6;
IAcknexObject TROP09SND_7;
IAcknexObject MY_9;
}
public class LNCHSHOUT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LNCHSHOUT() {
  }
 public LNCHSHOUT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
if (UnityEngine.Random.value > 0.8f)
{
goto TALK;
}
TROP03SND_2 = _world.AcknexObject.GetAcknexObject(1465860026);
MY_4 = MY;
_world.PlaySound(TROP03SND_2,0.3f,MY_4);
return false;
TALK:
TROP12SND_5 = _world.AcknexObject.GetAcknexObject(1467010010);
MY_7 = MY;
_world.PlaySound(TROP12SND_5,0.3f,MY_7);
//Unknown keyword: 
      return false;
  }
IAcknexObject TROP03SND_2;
IAcknexObject MY_4;
IAcknexObject TROP12SND_5;
IAcknexObject MY_7;
}
public class REPTTURN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REPTTURN() {
  }
 public REPTTURN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
WAITTIME_0 = _world.GetObject(ObjectType.Skill,33817649);
WAITTIME_1 = _world.GetObject(ObjectType.Skill,33817649);
WAITTIME_1_val = WAITTIME_1.GetFloat(PropertyName.VAL);
WAITTIME_0.SetFloat(231,64f*UnityEngine.Random.value+16f);
if (UnityEngine.Random.value < 0.07f)
{
{
            var enumerator = new REPTLISTEN();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
if (UnityEngine.Random.value > 0.95f)
{
RIGHTTURNREPT_11 = _world.GetObject(ObjectType.Skill,16701359);
RIGHTTURNREPT_12 = _world.GetObject(ObjectType.Skill,16701359);
RIGHTTURNREPT_12_val = RIGHTTURNREPT_12.GetFloat(PropertyName.VAL);
RIGHTTURNREPT_14 = _world.GetObject(ObjectType.Skill,16701359);
RIGHTTURNREPT_14_val = RIGHTTURNREPT_14.GetFloat(PropertyName.VAL);
RIGHTTURNREPT_20 = _world.GetObject(ObjectType.Skill,16701359);
RIGHTTURNREPT_20_val = RIGHTTURNREPT_20.GetFloat(PropertyName.VAL);
RIGHTTURNREPT_11.SetFloat(231,(RIGHTTURNREPT_14_val-1f)*(RIGHTTURNREPT_20_val-1f));
}
RIGHTTURNREPT_24 = _world.GetObject(ObjectType.Skill,16701359);
RIGHTTURNREPT_24_val = RIGHTTURNREPT_24.GetFloat(PropertyName.VAL);
if (RIGHTTURNREPT_24_val > RIGHTTURNREPT_24.GetFloat(PropertyName.MAX))
{
{
            var enumerator = new TURNRIGHT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
{
            var enumerator = new TURNLEFT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject WAITTIME_0;
IAcknexObject WAITTIME_1;
float WAITTIME_1_val;
IAcknexObject RIGHTTURNREPT_11;
IAcknexObject RIGHTTURNREPT_12;
float RIGHTTURNREPT_12_val;
IAcknexObject RIGHTTURNREPT_14;
float RIGHTTURNREPT_14_val;
IAcknexObject RIGHTTURNREPT_20;
float RIGHTTURNREPT_20_val;
IAcknexObject RIGHTTURNREPT_24;
float RIGHTTURNREPT_24_val;
}
public class REPTWAIT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REPTWAIT() {
  }
 public REPTWAIT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(189,null);
REPTJUMP_3 = _world.AcknexObject.GetAcknexObject(2834473604);
MY_5 = MY;
MY_5.SetAcknexObject(192,REPTJUMP_3);
REPTFOLLOWATTACK_6 = _world.AcknexObject.GetAcknexObject(967398355);
MY_8 = MY;
MY_8.SetAcknexObject(193,REPTFOLLOWATTACK_6);
CYCLEREPTATTACK_9 = _world.AcknexObject.GetAcknexObject(2476800208);
MY_11 = MY;
MY_11.SetAcknexObject(190,CYCLEREPTATTACK_9);
REPTHIT_12 = _world.AcknexObject.GetAcknexObject(1387396781);
MY_14 = MY;
MY_14.SetAcknexObject(209,REPTHIT_12);
MY_17 = MY;
MY_17.SetFloat(213,0f);
MY_20 = MY;
MY_20.SetFloat(165,-0.05f);
MY_23 = MY;
MY_23.SetFloat(176,0f);
REPT0TEX_24 = _world.AcknexObject.GetAcknexObject(2833537897);
MY_26 = MY;
MY_26.SetAcknexObject(164,REPT0TEX_24);
MY_29 = MY;
MY_29.SetFloat(168,0f);
MY_32 = MY;
MY_32.SetAcknexObject(199,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject REPTJUMP_3;
IAcknexObject MY_5;
IAcknexObject REPTFOLLOWATTACK_6;
IAcknexObject MY_8;
IAcknexObject CYCLEREPTATTACK_9;
IAcknexObject MY_11;
IAcknexObject REPTHIT_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject REPT0TEX_24;
IAcknexObject MY_26;
IAcknexObject MY_29;
IAcknexObject MY_32;
}
public class REPTWANDER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REPTWANDER() {
  }
 public REPTWANDER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(189,null);
REPTJUMP_3 = _world.AcknexObject.GetAcknexObject(2834473604);
MY_5 = MY;
MY_5.SetAcknexObject(192,REPTJUMP_3);
REPTFOLLOWATTACK_6 = _world.AcknexObject.GetAcknexObject(967398355);
MY_8 = MY;
MY_8.SetAcknexObject(193,REPTFOLLOWATTACK_6);
CYCLEREPTATTACK_9 = _world.AcknexObject.GetAcknexObject(2476800208);
MY_11 = MY;
MY_11.SetAcknexObject(190,CYCLEREPTATTACK_9);
REPTHIT_12 = _world.AcknexObject.GetAcknexObject(1387396781);
MY_14 = MY;
MY_14.SetAcknexObject(209,REPTHIT_12);
MY_17 = MY;
MY_17.SetFloat(176,1f);
REPT1TEX_18 = _world.AcknexObject.GetAcknexObject(2833573834);
MY_20 = MY;
MY_20.SetAcknexObject(164,REPT1TEX_18);
MY_23 = MY;
MY_23.SetFloat(168,0.3f);
BULLET_24 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_26 = MY;
MY_26.SetAcknexObject(199,BULLET_24);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject REPTJUMP_3;
IAcknexObject MY_5;
IAcknexObject REPTFOLLOWATTACK_6;
IAcknexObject MY_8;
IAcknexObject CYCLEREPTATTACK_9;
IAcknexObject MY_11;
IAcknexObject REPTHIT_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject REPT1TEX_18;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject BULLET_24;
IAcknexObject MY_26;
}
public class REPTSEARCH : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REPTSEARCH() {
  }
 public REPTSEARCH(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(189,null);
MY_5 = MY;
MY_5.SetAcknexObject(192,null);
MY_8 = MY;
MY_8.SetAcknexObject(193,null);
REPTHIT_9 = _world.AcknexObject.GetAcknexObject(1387396781);
MY_11 = MY;
MY_11.SetAcknexObject(209,REPTHIT_9);
{
            var enumerator = new LOOKPLAYER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_14 = MY;
temp_15 =MY_14.GetFloat(181);
if (temp_15 == 0f)
{
{
            var enumerator = new REPTWAIT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
{
            var enumerator = new REPTFOLLOWATTACK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject REPTHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
float temp_15;
}
public class REPTHIDE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REPTHIDE() {
  }
 public REPTHIDE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
MY_2 = MY;
MY_2.SetFloat(207,1f);
MY_5 = MY;
MY_5.SetAcknexObject(189,null);
REPTESCAPE_6 = _world.AcknexObject.GetAcknexObject(2755726425);
MY_8 = MY;
MY_8.SetAcknexObject(192,REPTESCAPE_6);
MY_11 = MY;
MY_11.SetAcknexObject(193,null);
MY_14 = MY;
MY_14.SetAcknexObject(190,null);
REPTHIT_15 = _world.AcknexObject.GetAcknexObject(1387396781);
MY_17 = MY;
MY_17.SetAcknexObject(209,REPTHIT_15);
MY_20 = MY;
MY_20.SetFloat(176,4f);
{
            var enumerator = new REPELANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_22 = MY;
MY_24 = MY;
temp_25 =MY_24.GetFloat(194);
MY_27 = MY;
temp_28 =MY_27.GetFloat(194);
MY_22.SetFloat(194,temp_28+(UnityEngine.Random.value-0.5f)*2.4f);
REPT1TEX_37 = _world.AcknexObject.GetAcknexObject(2833573834);
MY_39 = MY;
MY_39.SetAcknexObject(164,REPT1TEX_37);
MY_42 = MY;
MY_42.SetFloat(172,20f);
MY_45 = MY;
MY_45.SetFloat(168,0.5f);
BULLET_46 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_48 = MY;
MY_48.SetAcknexObject(199,BULLET_46);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)384f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_52 = MY;
temp_53 =MY_52.GetFloat(173);
if (temp_53 > 5f)
{
return false;
}
MY_56 = MY;
temp_57 =MY_56.GetFloat(173);
MY_59 = MY;
MY_59.SetFloat(173,temp_57 + -2f);
{
            var enumerator = new REPTWANDER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject REPTESCAPE_6;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject REPTHIT_15;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject MY_22;
IAcknexObject MY_24;
float temp_25;
IAcknexObject MY_27;
float temp_28;
IAcknexObject REPT1TEX_37;
IAcknexObject MY_39;
IAcknexObject MY_42;
IAcknexObject MY_45;
IAcknexObject BULLET_46;
IAcknexObject MY_48;
float startTime1;
float endTime1;
IAcknexObject MY_52;
float temp_53;
IAcknexObject MY_56;
float temp_57;
IAcknexObject MY_59;
}
public class REPTLISTEN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REPTLISTEN() {
  }
 public REPTLISTEN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
CYCLEREPTATTACK_6 = _world.AcknexObject.GetAcknexObject(2476800208);
MY_8 = MY;
MY_8.SetAcknexObject(190,CYCLEREPTATTACK_6);
REPTHIT_9 = _world.AcknexObject.GetAcknexObject(1387396781);
MY_11 = MY;
MY_11.SetAcknexObject(209,REPTHIT_9);
MY_14 = MY;
MY_14.SetFloat(176,0f);
REPT0TEX_15 = _world.AcknexObject.GetAcknexObject(2833537897);
MY_17 = MY;
MY_17.SetAcknexObject(164,REPT0TEX_15);
MY_20 = MY;
MY_20.SetFloat(168,0f);
MY_23 = MY;
MY_23.SetAcknexObject(199,null);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)120f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_27 = MY;
temp_28 =MY_27.GetFloat(173);
if (temp_28 < 9f)
{
{
            var enumerator = new REPTWANDER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject CYCLEREPTATTACK_6;
IAcknexObject MY_8;
IAcknexObject REPTHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject REPT0TEX_15;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject MY_23;
float startTime1;
float endTime1;
IAcknexObject MY_27;
float temp_28;
}
public class REPTJUMP : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REPTJUMP() {
  }
 public REPTJUMP(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(182);
if (temp_3 == 1f)
{
goto BLOODSMELL;
}
{
            var enumerator = new LOOKPLAYER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_6 = MY;
temp_7 =MY_6.GetFloat(181);
if (temp_7 == 0f)
{
return false;
}
BLOODSMELL:
{
            var enumerator = new REPTTALK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_6;
float temp_7;
}
public class REPTLOOKFOR : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REPTLOOKFOR() {
  }
 public REPTLOOKFOR(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(176);
if (temp_3 == 0f)
{
return false;
}
MY_6 = MY;
temp_7 =MY_6.GetFloat(176);
if (temp_7 == 4f)
{
return false;
}
MY_10 = MY;
temp_11 =MY_10.GetFloat(202);
if (temp_11 > 100f)
{
return false;
}
MY_14 = MY;
temp_15 =MY_14.GetFloat(176);
if (temp_15 == 10f)
{
return false;
}
FOLLOW_16 = _world.AcknexObject.GetAcknexObject(2968039200);
MY_18 = MY;
temp_19 =MY_18?.GetAcknexObject(199);
if (temp_19 == FOLLOW_16)
{
return false;
}
MY_22 = MY;
temp_23 =MY_22.GetFloat(173);
if (temp_23 > 5f)
{
return false;
}
REPTJUMP_24 = _world.AcknexObject.GetAcknexObject(2834473604);
MY_26 = MY;
MY_26.SetAcknexObject(192,REPTJUMP_24);
REPTFOLLOWATTACK_27 = _world.AcknexObject.GetAcknexObject(967398355);
MY_29 = MY;
MY_29.SetAcknexObject(193,REPTFOLLOWATTACK_27);
REPTHEAR_30 = _world.AcknexObject.GetAcknexObject(2834383912);
MY_32 = MY;
MY_32.SetAcknexObject(190,REPTHEAR_30);
REPTHIT_33 = _world.AcknexObject.GetAcknexObject(1387396781);
MY_35 = MY;
MY_35.SetAcknexObject(209,REPTHIT_33);
MY_38 = MY;
MY_38.SetFloat(176,0f);
REPTADNTEX_39 = _world.AcknexObject.GetAcknexObject(2581811692);
MY_41 = MY;
MY_41.SetAcknexObject(164,REPTADNTEX_39);
MY_44 = MY;
MY_44.SetFloat(168,0f);
BULLET_45 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_47 = MY;
MY_47.SetAcknexObject(199,BULLET_45);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_6;
float temp_7;
IAcknexObject MY_10;
float temp_11;
IAcknexObject MY_14;
float temp_15;
IAcknexObject FOLLOW_16;
IAcknexObject MY_18;
IAcknexObject temp_19;
IAcknexObject MY_22;
float temp_23;
IAcknexObject REPTJUMP_24;
IAcknexObject MY_26;
IAcknexObject REPTFOLLOWATTACK_27;
IAcknexObject MY_29;
IAcknexObject REPTHEAR_30;
IAcknexObject MY_32;
IAcknexObject REPTHIT_33;
IAcknexObject MY_35;
IAcknexObject MY_38;
IAcknexObject REPTADNTEX_39;
IAcknexObject MY_41;
IAcknexObject MY_44;
IAcknexObject BULLET_45;
IAcknexObject MY_47;
}
public class REPTHEAR : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REPTHEAR() {
  }
 public REPTHEAR(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
REPTJUMP_0 = _world.AcknexObject.GetAcknexObject(2834473604);
MY_2 = MY;
MY_2.SetAcknexObject(192,REPTJUMP_0);
REPTFOLLOWATTACK_3 = _world.AcknexObject.GetAcknexObject(967398355);
MY_5 = MY;
MY_5.SetAcknexObject(193,REPTFOLLOWATTACK_3);
REPTDOWN_6 = _world.AcknexObject.GetAcknexObject(2834251776);
MY_8 = MY;
MY_8.SetAcknexObject(190,REPTDOWN_6);
MY_11 = MY;
MY_11.SetFloat(176,0f);
REPT0TEX_12 = _world.AcknexObject.GetAcknexObject(2833537897);
MY_14 = MY;
MY_14.SetAcknexObject(164,REPT0TEX_12);
MY_17 = MY;
MY_17.SetFloat(168,0f);
FOLLOW_18 = _world.AcknexObject.GetAcknexObject(2968039200);
MY_20 = MY;
MY_20.SetAcknexObject(199,FOLLOW_18);
//Unknown keyword: 
      return false;
  }
IAcknexObject REPTJUMP_0;
IAcknexObject MY_2;
IAcknexObject REPTFOLLOWATTACK_3;
IAcknexObject MY_5;
IAcknexObject REPTDOWN_6;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject REPT0TEX_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject FOLLOW_18;
IAcknexObject MY_20;
}
public class REPTDOWN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REPTDOWN() {
  }
 public REPTDOWN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
REPTJUMP_0 = _world.AcknexObject.GetAcknexObject(2834473604);
MY_2 = MY;
MY_2.SetAcknexObject(192,REPTJUMP_0);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
REPTSEARCH_6 = _world.AcknexObject.GetAcknexObject(3286965246);
MY_8 = MY;
MY_8.SetAcknexObject(190,REPTSEARCH_6);
MY_11 = MY;
MY_11.SetFloat(176,0f);
REPTAUPTEX_12 = _world.AcknexObject.GetAcknexObject(2602044223);
MY_14 = MY;
MY_14.SetAcknexObject(164,REPTAUPTEX_12);
MY_17 = MY;
MY_17.SetFloat(168,0f);
BULLET_18 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_20 = MY;
MY_20.SetAcknexObject(199,BULLET_18);
//Unknown keyword: 
      return false;
  }
IAcknexObject REPTJUMP_0;
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject REPTSEARCH_6;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject REPTAUPTEX_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject BULLET_18;
IAcknexObject MY_20;
}
public class REPTFOLLOWATTACK : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REPTFOLLOWATTACK() {
  }
 public REPTFOLLOWATTACK(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
REPTJUMP_0 = _world.AcknexObject.GetAcknexObject(2834473604);
MY_2 = MY;
MY_2.SetAcknexObject(192,REPTJUMP_0);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
CYCLEREPTSHOOT_6 = _world.AcknexObject.GetAcknexObject(2048223749);
MY_8 = MY;
MY_8.SetAcknexObject(190,CYCLEREPTSHOOT_6);
REPTHIT_9 = _world.AcknexObject.GetAcknexObject(1387396781);
MY_11 = MY;
MY_11.SetAcknexObject(209,REPTHIT_9);
MY_14 = MY;
MY_14.SetFloat(176,2f);
REPT1TEX_15 = _world.AcknexObject.GetAcknexObject(2833573834);
MY_17 = MY;
MY_17.SetAcknexObject(164,REPT1TEX_15);
MY_20 = MY;
MY_20.SetFloat(168,0.4f);
FOLLOW_21 = _world.AcknexObject.GetAcknexObject(2968039200);
MY_23 = MY;
MY_23.SetAcknexObject(199,FOLLOW_21);
//Unknown keyword: 
      return false;
  }
IAcknexObject REPTJUMP_0;
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject CYCLEREPTSHOOT_6;
IAcknexObject MY_8;
IAcknexObject REPTHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject REPT1TEX_15;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject FOLLOW_21;
IAcknexObject MY_23;
}
public class REPTSHOOT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REPTSHOOT() {
  }
 public REPTSHOOT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
REPTFOLLOWATTACK_3 = _world.AcknexObject.GetAcknexObject(967398355);
MY_5 = MY;
MY_5.SetAcknexObject(193,REPTFOLLOWATTACK_3);
REPTHIDE_6 = _world.AcknexObject.GetAcknexObject(2834388354);
MY_8 = MY;
MY_8.SetAcknexObject(190,REPTHIDE_6);
REPTHIT_9 = _world.AcknexObject.GetAcknexObject(1387396781);
MY_11 = MY;
MY_11.SetAcknexObject(209,REPTHIT_9);
MY_14 = MY;
MY_14.SetFloat(176,3f);
REPT0TEX_15 = _world.AcknexObject.GetAcknexObject(2833537897);
MY_17 = MY;
MY_17.SetAcknexObject(164,REPT0TEX_15);
MY_20 = MY;
MY_20.SetFloat(168,0f);
FOLLOW_21 = _world.AcknexObject.GetAcknexObject(2968039200);
MY_23 = MY;
MY_23.SetAcknexObject(199,FOLLOW_21);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject REPTFOLLOWATTACK_3;
IAcknexObject MY_5;
IAcknexObject REPTHIDE_6;
IAcknexObject MY_8;
IAcknexObject REPTHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject REPT0TEX_15;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject FOLLOW_21;
IAcknexObject MY_23;
}
public class REPTESCAPE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REPTESCAPE() {
  }
 public REPTESCAPE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
REPTHIDE_3 = _world.AcknexObject.GetAcknexObject(2834388354);
MY_5 = MY;
MY_5.SetAcknexObject(193,REPTHIDE_3);
CYCLEREPTHIDE_6 = _world.AcknexObject.GetAcknexObject(3836038962);
MY_8 = MY;
MY_8.SetAcknexObject(190,CYCLEREPTHIDE_6);
REPTHIT_9 = _world.AcknexObject.GetAcknexObject(1387396781);
MY_11 = MY;
MY_11.SetAcknexObject(209,REPTHIT_9);
MY_14 = MY;
MY_14.SetFloat(176,4f);
REPT1TEX_15 = _world.AcknexObject.GetAcknexObject(2833573834);
MY_17 = MY;
MY_17.SetAcknexObject(164,REPT1TEX_15);
MY_20 = MY;
MY_20.SetFloat(172,30f);
MY_23 = MY;
MY_23.SetFloat(168,0.4f);
REPEL_24 = _world.AcknexObject.GetAcknexObject(233967877);
MY_26 = MY;
MY_26.SetAcknexObject(199,REPEL_24);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject REPTHIDE_3;
IAcknexObject MY_5;
IAcknexObject CYCLEREPTHIDE_6;
IAcknexObject MY_8;
IAcknexObject REPTHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject REPT1TEX_15;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject REPEL_24;
IAcknexObject MY_26;
}
public class REPTDEAD : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REPTDEAD() {
  }
 public REPTDEAD(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
MY_8 = MY;
MY_8.SetAcknexObject(209,null);
MY_11 = MY;
MY_11.SetAcknexObject(190,null);
MY_14 = MY;
MY_14.SetFloat(176,9f);
REPT9TEX_15 = _world.AcknexObject.GetAcknexObject(2833861330);
MY_17 = MY;
MY_17.SetAcknexObject(164,REPT9TEX_15);
MY_20 = MY;
MY_20.SetFloat(168,0f);
MY_23 = MY;
MY_23.SetAcknexObject(199,null);
MY_26 = MY;
MY_26.SetFloat(206,1f);
MY_29 = MY;
MY_29.SetFloat(207,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject REPT9TEX_15;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject MY_29;
}
public class REPTDIE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REPTDIE() {
  }
 public REPTDIE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetFloat(173,10f);
MY_5 = MY;
MY_5.SetAcknexObject(192,null);
MY_8 = MY;
MY_8.SetAcknexObject(193,null);
MY_11 = MY;
MY_11.SetAcknexObject(209,null);
REPTDEAD_12 = _world.AcknexObject.GetAcknexObject(2834240150);
MY_14 = MY;
MY_14.SetAcknexObject(190,REPTDEAD_12);
MY_17 = MY;
MY_17.SetFloat(176,8f);
REPT8TEX_18 = _world.AcknexObject.GetAcknexObject(2833825393);
MY_20 = MY;
MY_20.SetAcknexObject(164,REPT8TEX_18);
MY_23 = MY;
MY_23.SetFloat(168,0f);
MY_26 = MY;
MY_26.SetFloat(213,0f);
MY_29 = MY;
MY_29.SetFloat(165,-0.05f);
MY_32 = MY;
MY_32.SetAcknexObject(199,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject REPTDEAD_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject REPT8TEX_18;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject MY_29;
IAcknexObject MY_32;
}
public class REPTIMPLODE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REPTIMPLODE() {
  }
 public REPTIMPLODE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
DISTX_0 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_1 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_1_val = DISTX_1.GetFloat(PropertyName.VAL);
MY_4 = MY;
temp_5 =MY_4.GetFloat(195);
EXPLOSION_CENTER_8 = _world.GetSynonymObject(3704223598);
temp_9 =EXPLOSION_CENTER_8.GetFloat(195);
MY_14 = MY;
temp_15 =MY_14.GetFloat(195);
EXPLOSION_CENTER_18 = _world.GetSynonymObject(3704223598);
temp_19 =EXPLOSION_CENTER_18.GetFloat(195);
MY_24 = MY;
temp_25 =MY_24.GetFloat(196);
EXPLOSION_CENTER_28 = _world.GetSynonymObject(3704223598);
temp_29 =EXPLOSION_CENTER_28.GetFloat(196);
MY_34 = MY;
temp_35 =MY_34.GetFloat(196);
EXPLOSION_CENTER_38 = _world.GetSynonymObject(3704223598);
temp_39 =EXPLOSION_CENTER_38.GetFloat(196);
DISTX_0.SetFloat(231,(temp_5-temp_9)*(temp_15-temp_19)+(temp_25-temp_29)*(temp_35-temp_39));
DISTX_41 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_41_val = DISTX_41.GetFloat(PropertyName.VAL);
DISTX_42 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_42.SetFloat(231,MathUtils.Sqrt(DISTX_41_val));
DISTZ_43 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_44 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_44_val = DISTZ_44.GetFloat(PropertyName.VAL);
MY_46 = MY;
temp_47 =MY_46.GetFloat(165);
EXPLOSION_CENTER_50 = _world.GetSynonymObject(3704223598);
temp_51 =EXPLOSION_CENTER_50.GetFloat(165);
DISTZ_43.SetFloat(231,temp_47-temp_51);
DISTX_53 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_53_val = DISTX_53.GetFloat(PropertyName.VAL);
if (DISTX_53_val > 10f)
{
{
            var enumerator = new BEAMREACT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MY_56 = MY;
MY_56.SetFloat(206,1f);
MY_59 = MY;
MY_59.SetFloat(207,0f);
MY_62 = MY;
MY_62.SetAcknexObject(192,null);
MY_65 = MY;
MY_65.SetAcknexObject(193,null);
MY_68 = MY;
MY_68.SetAcknexObject(209,null);
VANISHFORGOOD_69 = _world.AcknexObject.GetAcknexObject(1333438470);
MY_71 = MY;
MY_71.SetAcknexObject(190,VANISHFORGOOD_69);
MY_74 = MY;
MY_74.SetFloat(176,9f);
REPT0ATEX_75 = _world.AcknexObject.GetAcknexObject(3311738378);
MY_77 = MY;
MY_77.SetAcknexObject(164,REPT0ATEX_75);
MY_80 = MY;
MY_80.SetFloat(168,0f);
MY_83 = MY;
MY_83.SetAcknexObject(199,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject DISTX_0;
IAcknexObject DISTX_1;
float DISTX_1_val;
IAcknexObject MY_4;
float temp_5;
IAcknexObject EXPLOSION_CENTER_8;
float temp_9;
IAcknexObject MY_14;
float temp_15;
IAcknexObject EXPLOSION_CENTER_18;
float temp_19;
IAcknexObject MY_24;
float temp_25;
IAcknexObject EXPLOSION_CENTER_28;
float temp_29;
IAcknexObject MY_34;
float temp_35;
IAcknexObject EXPLOSION_CENTER_38;
float temp_39;
IAcknexObject DISTX_41;
float DISTX_41_val;
IAcknexObject DISTX_42;
IAcknexObject DISTZ_43;
IAcknexObject DISTZ_44;
float DISTZ_44_val;
IAcknexObject MY_46;
float temp_47;
IAcknexObject EXPLOSION_CENTER_50;
float temp_51;
IAcknexObject DISTX_53;
float DISTX_53_val;
IAcknexObject MY_56;
IAcknexObject MY_59;
IAcknexObject MY_62;
IAcknexObject MY_65;
IAcknexObject MY_68;
IAcknexObject VANISHFORGOOD_69;
IAcknexObject MY_71;
IAcknexObject MY_74;
IAcknexObject REPT0ATEX_75;
IAcknexObject MY_77;
IAcknexObject MY_80;
IAcknexObject MY_83;
}
public class REPTHIT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REPTHIT() {
  }
 public REPTHIT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat(PropertyName.VAL);
if (SHOOT_FAC_1_val == 0f)
{
goto OBSTACLE;
}
MY_2 = MY;
HIT_3 = _world.GetSynonymObject(704);
if (HIT_3 == MY_2)
{
goto HIT;
}
EXPLOSION_ON_5 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_5_val = EXPLOSION_ON_5.GetFloat(PropertyName.VAL);
if (EXPLOSION_ON_5_val == 0f)
{
goto OBSTACLE;
}
HIT:
EXPLOSION_ON_7 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_7_val = EXPLOSION_ON_7.GetFloat(PropertyName.VAL);
if (EXPLOSION_ON_7_val != 2f)
{
goto CONT;
}
MY_10 = MY;
temp_11 =MY_10.GetFloat(205);
if (temp_11 == 1f)
{
{
            var enumerator = new REPTIMPLODE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
CONT:
SHOOT_FAC_12 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_12_val = SHOOT_FAC_12.GetFloat(PropertyName.VAL);
MY_14 = MY;
temp_15 =MY_14.GetFloat(173);
MY_17 = MY;
MY_17.SetFloat(173,temp_15 + SHOOT_FAC_12_val);
MY_20 = MY;
temp_21 =MY_20.GetFloat(173);
if (temp_21 > 5f)
{
goto DIE;
}
if (UnityEngine.Random.value < 0.05f)
{
goto DIE;
}
MY_25 = MY;
temp_26 =MY_25?.GetAcknexObject(164);
_world.SetSynonymObject(2835226936,temp_26);
REPT5TEX_28 = _world.AcknexObject.GetAcknexObject(2833717582);
MY_30 = MY;
MY_30.SetAcknexObject(164,REPT5TEX_28);
MY_33 = MY;
MY_33.SetAcknexObject(192,null);
MY_36 = MY;
MY_36.SetAcknexObject(193,null);
MY_39 = MY;
MY_39.SetAcknexObject(209,null);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)6f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
REPTHIT_41 = _world.AcknexObject.GetAcknexObject(1387396781);
MY_43 = MY;
MY_43.SetAcknexObject(209,REPTHIT_41);
REPT_TEX_44 = _world.GetSynonymObject(2835226936);
MY_46 = MY;
MY_46.SetAcknexObject(164,REPT_TEX_44);
REPT02SND_47 = _world.AcknexObject.GetAcknexObject(3311198511);
MY_49 = MY;
_world.PlaySound(REPT02SND_47,0.7f,MY_49);
{
            var enumerator = new REPTHIDE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
DIE:
MY_52 = MY;
MY_52.SetFloat(173,10f);
{
            var enumerator = new REPTDIE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
return false;
OBSTACLE:
{
            var enumerator = new REPTTALK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new REPTTURN();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject SHOOT_FAC_1;
float SHOOT_FAC_1_val;
IAcknexObject MY_2;
IAcknexObject HIT_3;
IAcknexObject EXPLOSION_ON_5;
float EXPLOSION_ON_5_val;
IAcknexObject EXPLOSION_ON_7;
float EXPLOSION_ON_7_val;
IAcknexObject MY_10;
float temp_11;
IAcknexObject SHOOT_FAC_12;
float SHOOT_FAC_12_val;
IAcknexObject MY_14;
float temp_15;
IAcknexObject MY_17;
IAcknexObject MY_20;
float temp_21;
IAcknexObject MY_25;
IAcknexObject temp_26;
IAcknexObject REPT5TEX_28;
IAcknexObject MY_30;
IAcknexObject MY_33;
IAcknexObject MY_36;
IAcknexObject MY_39;
float startTime1;
float endTime1;
IAcknexObject REPTHIT_41;
IAcknexObject MY_43;
IAcknexObject REPT_TEX_44;
IAcknexObject MY_46;
IAcknexObject REPT02SND_47;
IAcknexObject MY_49;
IAcknexObject MY_52;
}
public class CYCLEREPTATTACK : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CYCLEREPTATTACK() {
  }
 public CYCLEREPTATTACK(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = new LOCATEACTOR();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_2 = MY;
MY_2.SetFloat(213,0f);
MY_5 = MY;
MY_5.SetFloat(165,-0.05f);
MY_8 = MY;
MY_8.SetFloat(169,0f);
MY_11 = MY;
MY_11.SetAcknexObject(189,null);
{
            var enumerator = new REPTTALK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }SHOT_SOUND_ON_13 = _world.GetObject(ObjectType.Skill,3372273679);
SHOT_SOUND_ON_13_val = SHOT_SOUND_ON_13.GetFloat(PropertyName.VAL);
if (SHOT_SOUND_ON_13_val == 0f)
{
goto CONT;
}
{
            var enumerator = new REPTLOOKFOR();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }CONT:
{
            var enumerator = new LOOKPLAYER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_16 = MY;
temp_17 =MY_16.GetFloat(181);
if (temp_17 == 0f)
{
return false;
}
MY_20 = MY;
temp_21 =MY_20.GetFloat(182);
if (temp_21 == 1f)
{
goto CONT1;
}
MY_24 = MY;
MY_24.SetFloat(182,1f);
REPT02SND_25 = _world.AcknexObject.GetAcknexObject(3311198511);
MY_27 = MY;
_world.PlaySound(REPT02SND_25,0.7f,MY_27);
CONT1:
{
            var enumerator = new REPTFOLLOWATTACK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject SHOT_SOUND_ON_13;
float SHOT_SOUND_ON_13_val;
IAcknexObject MY_16;
float temp_17;
IAcknexObject MY_20;
float temp_21;
IAcknexObject MY_24;
IAcknexObject REPT02SND_25;
IAcknexObject MY_27;
}
public class CYCLEREPTHIDE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CYCLEREPTHIDE() {
  }
 public CYCLEREPTHIDE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = new LOCATEACTOR();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_2 = MY;
MY_2.SetFloat(213,0f);
MY_5 = MY;
MY_5.SetFloat(165,-0.05f);
MY_8 = MY;
MY_8.SetFloat(169,0f);
MY_11 = MY;
MY_11.SetAcknexObject(189,null);
MY_14 = MY;
temp_15 =MY_14.GetFloat(205);
if (temp_15 == 0f)
{
goto STOP;
}
MY_18 = MY;
MY_18.SetFloat(168,0.6f);
BULLET_19 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_21 = MY;
MY_21.SetAcknexObject(199,BULLET_19);
return false;
STOP:
MY_24 = MY;
MY_24.SetFloat(168,0f);
MY_27 = MY;
MY_27.SetAcknexObject(199,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject MY_14;
float temp_15;
IAcknexObject MY_18;
IAcknexObject BULLET_19;
IAcknexObject MY_21;
IAcknexObject MY_24;
IAcknexObject MY_27;
}
public class CYCLEREPTSHOOT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CYCLEREPTSHOOT() {
  }
 public CYCLEREPTSHOOT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = new LOCATEACTOR();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_2 = MY;
temp_3 =MY_2.GetFloat(173);
if (temp_3 > 9f)
{
{
            var enumerator = new REPTDIE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MY_6 = MY;
MY_6.SetFloat(213,0f);
MY_9 = MY;
MY_9.SetFloat(165,-0.05f);
MY_12 = MY;
MY_12.SetFloat(169,0f);
MY_15 = MY;
MY_15.SetAcknexObject(189,null);
{
            var enumerator = new LOOKPLAYER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_18 = MY;
temp_19 =MY_18.GetFloat(181);
if (temp_19 == 0f)
{
goto CONTFLAG2;
}
goto PLAYERSEEN;
CONTFLAG2:
MY_22 = MY;
temp_23 =MY_22.GetFloat(182);
if (temp_23 == 1f)
{
goto ATTACK;
}
{
            var enumerator = new REPTWAIT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
PLAYERSEEN:
MY_26 = MY;
MY_26.SetFloat(182,1f);
CONT:
MY_29 = MY;
temp_30 =MY_29.GetFloat(202);
if (temp_30 > 10f)
{
goto ATTACK;
}
{
            var enumerator = new REPTSHOOT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
ATTACK:
{
            var enumerator = new REPTFOLLOWATTACK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_6;
IAcknexObject MY_9;
IAcknexObject MY_12;
IAcknexObject MY_15;
IAcknexObject MY_18;
float temp_19;
IAcknexObject MY_22;
float temp_23;
IAcknexObject MY_26;
IAcknexObject MY_29;
float temp_30;
}
public class REPTTALK : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public REPTTALK() {
  }
 public REPTTALK(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
if (UnityEngine.Random.value > 0.9f)
{
REPT01SND_2 = _world.AcknexObject.GetAcknexObject(3311162574);
MY_4 = MY;
_world.PlaySound(REPT01SND_2,0.5f,MY_4);
}
if (UnityEngine.Random.value < 0.1f)
{
REPT02SND_7 = _world.AcknexObject.GetAcknexObject(3311198511);
MY_9 = MY;
_world.PlaySound(REPT02SND_7,0.5f,MY_9);
}
//Unknown keyword: 
      return false;
  }
IAcknexObject REPT01SND_2;
IAcknexObject MY_4;
IAcknexObject REPT02SND_7;
IAcknexObject MY_9;
}
public class NURSTURN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public NURSTURN() {
  }
 public NURSTURN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
WAITTIME_0 = _world.GetObject(ObjectType.Skill,33817649);
WAITTIME_1 = _world.GetObject(ObjectType.Skill,33817649);
WAITTIME_1_val = WAITTIME_1.GetFloat(PropertyName.VAL);
WAITTIME_0.SetFloat(231,64f*UnityEngine.Random.value+16f);
if (UnityEngine.Random.value > 0.95f)
{
RIGHTTURNNURS_9 = _world.GetObject(ObjectType.Skill,16575100);
RIGHTTURNNURS_10 = _world.GetObject(ObjectType.Skill,16575100);
RIGHTTURNNURS_10_val = RIGHTTURNNURS_10.GetFloat(PropertyName.VAL);
RIGHTTURNNURS_12 = _world.GetObject(ObjectType.Skill,16575100);
RIGHTTURNNURS_12_val = RIGHTTURNNURS_12.GetFloat(PropertyName.VAL);
RIGHTTURNNURS_18 = _world.GetObject(ObjectType.Skill,16575100);
RIGHTTURNNURS_18_val = RIGHTTURNNURS_18.GetFloat(PropertyName.VAL);
RIGHTTURNNURS_9.SetFloat(231,(RIGHTTURNNURS_12_val-1f)*(RIGHTTURNNURS_18_val-1f));
}
RIGHTTURNNURS_22 = _world.GetObject(ObjectType.Skill,16575100);
RIGHTTURNNURS_22_val = RIGHTTURNNURS_22.GetFloat(PropertyName.VAL);
if (RIGHTTURNNURS_22_val > RIGHTTURNNURS_22.GetFloat(PropertyName.MAX))
{
{
            var enumerator = new TURNRIGHT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
{
            var enumerator = new TURNLEFT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject WAITTIME_0;
IAcknexObject WAITTIME_1;
float WAITTIME_1_val;
IAcknexObject RIGHTTURNNURS_9;
IAcknexObject RIGHTTURNNURS_10;
float RIGHTTURNNURS_10_val;
IAcknexObject RIGHTTURNNURS_12;
float RIGHTTURNNURS_12_val;
IAcknexObject RIGHTTURNNURS_18;
float RIGHTTURNNURS_18_val;
IAcknexObject RIGHTTURNNURS_22;
float RIGHTTURNNURS_22_val;
}
public class NURSWAIT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public NURSWAIT() {
  }
 public NURSWAIT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetFloat(207,0f);
MY_5 = MY;
MY_5.SetAcknexObject(189,null);
MY_8 = MY;
MY_8.SetAcknexObject(193,null);
NURSHIT_9 = _world.AcknexObject.GetAcknexObject(1144994394);
MY_11 = MY;
MY_11.SetAcknexObject(209,NURSHIT_9);
NURSTALK_12 = _world.AcknexObject.GetAcknexObject(3425466977);
MY_14 = MY;
MY_14.SetAcknexObject(192,NURSTALK_12);
NURSCYCLE_15 = _world.AcknexObject.GetAcknexObject(1351920677);
MY_17 = MY;
MY_17.SetAcknexObject(190,NURSCYCLE_15);
MY_20 = MY;
MY_20.SetFloat(213,0f);
MY_23 = MY;
MY_23.SetFloat(165,-0.05f);
NURS0TEX_24 = _world.AcknexObject.GetAcknexObject(3424193718);
MY_26 = MY;
MY_26.SetAcknexObject(164,NURS0TEX_24);
MY_29 = MY;
MY_29.SetFloat(168,0f);
MY_32 = MY;
MY_32.SetAcknexObject(199,null);
MY_35 = MY;
MY_35.SetFloat(176,1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject NURSHIT_9;
IAcknexObject MY_11;
IAcknexObject NURSTALK_12;
IAcknexObject MY_14;
IAcknexObject NURSCYCLE_15;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject NURS0TEX_24;
IAcknexObject MY_26;
IAcknexObject MY_29;
IAcknexObject MY_32;
IAcknexObject MY_35;
}
public class NURSWANDER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public NURSWANDER() {
  }
 public NURSWANDER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetFloat(207,1f);
MY_5 = MY;
MY_5.SetAcknexObject(189,null);
MY_8 = MY;
MY_8.SetAcknexObject(193,null);
NURSHIT_9 = _world.AcknexObject.GetAcknexObject(1144994394);
MY_11 = MY;
MY_11.SetAcknexObject(209,NURSHIT_9);
MY_14 = MY;
MY_14.SetAcknexObject(192,null);
NURSCYCLE_15 = _world.AcknexObject.GetAcknexObject(1351920677);
MY_17 = MY;
MY_17.SetAcknexObject(190,NURSCYCLE_15);
MY_20 = MY;
MY_20.SetFloat(213,0f);
NURS1TEX_21 = _world.AcknexObject.GetAcknexObject(3424229655);
MY_23 = MY;
MY_23.SetAcknexObject(164,NURS1TEX_21);
MY_26 = MY;
MY_26.SetFloat(168,0.4f);
BULLET_27 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_29 = MY;
MY_29.SetAcknexObject(199,BULLET_27);
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_32 = MY;
MY_32.SetFloat(176,1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject NURSHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject NURSCYCLE_15;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject NURS1TEX_21;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject BULLET_27;
IAcknexObject MY_29;
IAcknexObject MY_32;
}
public class NURSHIDE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public NURSHIDE() {
  }
 public NURSHIDE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
MY_2 = MY;
MY_2.SetFloat(207,1f);
MY_5 = MY;
MY_5.SetAcknexObject(189,null);
MY_8 = MY;
MY_8.SetAcknexObject(192,null);
MY_11 = MY;
MY_11.SetAcknexObject(193,null);
NURSCYCLE_12 = _world.AcknexObject.GetAcknexObject(1351920677);
MY_14 = MY;
MY_14.SetAcknexObject(190,NURSCYCLE_12);
NURSHIT_15 = _world.AcknexObject.GetAcknexObject(1144994394);
MY_17 = MY;
MY_17.SetAcknexObject(209,NURSHIT_15);
{
            var enumerator = new NURSSCREAM();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_19 = MY;
MY_21 = MY;
temp_22 =MY_21.GetFloat(194);
PLAYER_ANGLE_23 = _world.GetObject(ObjectType.Skill,462);
PLAYER_ANGLE_23_val = PLAYER_ANGLE_23.GetFloat(PropertyName.VAL);
MY_19.SetFloat(194,PLAYER_ANGLE_23_val+(0.5f-UnityEngine.Random.value)*2.4f);
NURS1TEX_32 = _world.AcknexObject.GetAcknexObject(3424229655);
MY_34 = MY;
MY_34.SetAcknexObject(164,NURS1TEX_32);
MY_37 = MY;
MY_37.SetFloat(168,0.6f);
MY_40 = MY;
MY_40.SetFloat(172,20f);
BULLET_41 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_43 = MY;
MY_43.SetAcknexObject(199,BULLET_41);
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_46 = MY;
MY_46.SetFloat(176,4f);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)480f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_50 = MY;
temp_51 =MY_50.GetFloat(173);
if (temp_51 < 2f)
{
{
            var enumerator = new NURSWANDER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject NURSCYCLE_12;
IAcknexObject MY_14;
IAcknexObject NURSHIT_15;
IAcknexObject MY_17;
IAcknexObject MY_19;
IAcknexObject MY_21;
float temp_22;
IAcknexObject PLAYER_ANGLE_23;
float PLAYER_ANGLE_23_val;
IAcknexObject NURS1TEX_32;
IAcknexObject MY_34;
IAcknexObject MY_37;
IAcknexObject MY_40;
IAcknexObject BULLET_41;
IAcknexObject MY_43;
IAcknexObject MY_46;
float startTime1;
float endTime1;
IAcknexObject MY_50;
float temp_51;
}
public class NURSDEAD : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public NURSDEAD() {
  }
 public NURSDEAD(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
MY_8 = MY;
MY_8.SetAcknexObject(209,null);
MY_11 = MY;
MY_11.SetAcknexObject(190,null);
{
            var enumerator = new INNOCENTKILLED();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }NURS9TEX_12 = _world.AcknexObject.GetAcknexObject(3424517151);
MY_14 = MY;
MY_14.SetAcknexObject(164,NURS9TEX_12);
MY_17 = MY;
MY_17.SetFloat(168,0f);
MY_20 = MY;
MY_20.SetAcknexObject(199,null);
MY_23 = MY;
MY_23.SetFloat(206,1f);
MY_26 = MY;
MY_26.SetFloat(207,0f);
MY_29 = MY;
MY_29.SetFloat(176,8f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject NURS9TEX_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject MY_29;
}
public class NURSDIE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public NURSDIE() {
  }
 public NURSDIE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetFloat(173,10f);
MY_5 = MY;
MY_5.SetFloat(206,1f);
MY_8 = MY;
MY_8.SetFloat(207,0f);
MY_11 = MY;
MY_11.SetAcknexObject(192,null);
MY_14 = MY;
MY_14.SetAcknexObject(193,null);
MY_17 = MY;
MY_17.SetAcknexObject(209,null);
NURSDEAD_18 = _world.AcknexObject.GetAcknexObject(3424895971);
MY_20 = MY;
MY_20.SetAcknexObject(190,NURSDEAD_18);
NURS8TEX_21 = _world.AcknexObject.GetAcknexObject(3424481214);
MY_23 = MY;
MY_23.SetAcknexObject(164,NURS8TEX_21);
MY_26 = MY;
MY_26.SetFloat(168,0f);
MY_29 = MY;
MY_29.SetAcknexObject(199,null);
NURS04SND_30 = _world.AcknexObject.GetAcknexObject(1328075998);
MY_32 = MY;
_world.PlaySound(NURS04SND_30,0.4f,MY_32);
MY_35 = MY;
MY_35.SetFloat(176,8f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject NURSDEAD_18;
IAcknexObject MY_20;
IAcknexObject NURS8TEX_21;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject MY_29;
IAcknexObject NURS04SND_30;
IAcknexObject MY_32;
IAcknexObject MY_35;
}
public class NURSIMPLODE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public NURSIMPLODE() {
  }
 public NURSIMPLODE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
DISTX_0 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_1 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_1_val = DISTX_1.GetFloat(PropertyName.VAL);
MY_4 = MY;
temp_5 =MY_4.GetFloat(195);
EXPLOSION_CENTER_8 = _world.GetSynonymObject(3704223598);
temp_9 =EXPLOSION_CENTER_8.GetFloat(195);
MY_14 = MY;
temp_15 =MY_14.GetFloat(195);
EXPLOSION_CENTER_18 = _world.GetSynonymObject(3704223598);
temp_19 =EXPLOSION_CENTER_18.GetFloat(195);
MY_24 = MY;
temp_25 =MY_24.GetFloat(196);
EXPLOSION_CENTER_28 = _world.GetSynonymObject(3704223598);
temp_29 =EXPLOSION_CENTER_28.GetFloat(196);
MY_34 = MY;
temp_35 =MY_34.GetFloat(196);
EXPLOSION_CENTER_38 = _world.GetSynonymObject(3704223598);
temp_39 =EXPLOSION_CENTER_38.GetFloat(196);
DISTX_0.SetFloat(231,(temp_5-temp_9)*(temp_15-temp_19)+(temp_25-temp_29)*(temp_35-temp_39));
DISTX_41 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_41_val = DISTX_41.GetFloat(PropertyName.VAL);
DISTX_42 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_42.SetFloat(231,MathUtils.Sqrt(DISTX_41_val));
DISTZ_43 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_44 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_44_val = DISTZ_44.GetFloat(PropertyName.VAL);
MY_46 = MY;
temp_47 =MY_46.GetFloat(200);
EXPLOSION_CENTER_50 = _world.GetSynonymObject(3704223598);
temp_51 =EXPLOSION_CENTER_50.GetFloat(200);
DISTZ_43.SetFloat(231,temp_47-temp_51);
DISTX_53 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_53_val = DISTX_53.GetFloat(PropertyName.VAL);
if (DISTX_53_val > 10f)
{
{
            var enumerator = new BEAMREACT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MY_56 = MY;
MY_56.SetFloat(206,1f);
MY_59 = MY;
MY_59.SetFloat(207,0f);
MY_62 = MY;
MY_62.SetAcknexObject(192,null);
MY_65 = MY;
MY_65.SetAcknexObject(193,null);
MY_68 = MY;
MY_68.SetAcknexObject(209,null);
VANISHFORGOOD_69 = _world.AcknexObject.GetAcknexObject(1333438470);
MY_71 = MY;
MY_71.SetAcknexObject(190,VANISHFORGOOD_69);
NURS0ATEX_72 = _world.AcknexObject.GetAcknexObject(1328543991);
MY_74 = MY;
MY_74.SetAcknexObject(164,NURS0ATEX_72);
MY_77 = MY;
MY_77.SetFloat(168,0f);
MY_80 = MY;
MY_80.SetAcknexObject(199,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject DISTX_0;
IAcknexObject DISTX_1;
float DISTX_1_val;
IAcknexObject MY_4;
float temp_5;
IAcknexObject EXPLOSION_CENTER_8;
float temp_9;
IAcknexObject MY_14;
float temp_15;
IAcknexObject EXPLOSION_CENTER_18;
float temp_19;
IAcknexObject MY_24;
float temp_25;
IAcknexObject EXPLOSION_CENTER_28;
float temp_29;
IAcknexObject MY_34;
float temp_35;
IAcknexObject EXPLOSION_CENTER_38;
float temp_39;
IAcknexObject DISTX_41;
float DISTX_41_val;
IAcknexObject DISTX_42;
IAcknexObject DISTZ_43;
IAcknexObject DISTZ_44;
float DISTZ_44_val;
IAcknexObject MY_46;
float temp_47;
IAcknexObject EXPLOSION_CENTER_50;
float temp_51;
IAcknexObject DISTX_53;
float DISTX_53_val;
IAcknexObject MY_56;
IAcknexObject MY_59;
IAcknexObject MY_62;
IAcknexObject MY_65;
IAcknexObject MY_68;
IAcknexObject VANISHFORGOOD_69;
IAcknexObject MY_71;
IAcknexObject NURS0ATEX_72;
IAcknexObject MY_74;
IAcknexObject MY_77;
IAcknexObject MY_80;
}
public class NURSHIT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public NURSHIT() {
  }
 public NURSHIT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat(PropertyName.VAL);
if (SHOOT_FAC_1_val == 0f)
{
goto OBSTACLE;
}
MY_2 = MY;
HIT_3 = _world.GetSynonymObject(704);
if (HIT_3 == MY_2)
{
goto HIT;
}
EXPLOSION_ON_5 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_5_val = EXPLOSION_ON_5.GetFloat(PropertyName.VAL);
if (EXPLOSION_ON_5_val == 0f)
{
goto OBSTACLE;
}
DISTX_6 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_7 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_7_val = DISTX_7.GetFloat(PropertyName.VAL);
MY_10 = MY;
temp_11 =MY_10.GetFloat(195);
EXPLOSION_CENTER_14 = _world.GetSynonymObject(3704223598);
temp_15 =EXPLOSION_CENTER_14.GetFloat(195);
MY_20 = MY;
temp_21 =MY_20.GetFloat(195);
EXPLOSION_CENTER_24 = _world.GetSynonymObject(3704223598);
temp_25 =EXPLOSION_CENTER_24.GetFloat(195);
MY_30 = MY;
temp_31 =MY_30.GetFloat(196);
EXPLOSION_CENTER_34 = _world.GetSynonymObject(3704223598);
temp_35 =EXPLOSION_CENTER_34.GetFloat(196);
MY_40 = MY;
temp_41 =MY_40.GetFloat(196);
EXPLOSION_CENTER_44 = _world.GetSynonymObject(3704223598);
temp_45 =EXPLOSION_CENTER_44.GetFloat(196);
DISTX_6.SetFloat(231,(temp_11-temp_15)*(temp_21-temp_25)+(temp_31-temp_35)*(temp_41-temp_45));
DISTX_47 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_47_val = DISTX_47.GetFloat(PropertyName.VAL);
DISTX_48 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_48.SetFloat(231,MathUtils.Sqrt(DISTX_47_val));
DISTX_50 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_50_val = DISTX_50.GetFloat(PropertyName.VAL);
if (DISTX_50_val > 25f)
{
goto OBSTACLE;
}
HIT:
EXPLOSION_ON_52 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_52_val = EXPLOSION_ON_52.GetFloat(PropertyName.VAL);
if (EXPLOSION_ON_52_val != 2f)
{
goto CONT;
}
MY_55 = MY;
temp_56 =MY_55.GetFloat(205);
if (temp_56 == 1f)
{
{
            var enumerator = new NURSIMPLODE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
CONT:
SHOOT_FAC_57 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_57_val = SHOOT_FAC_57.GetFloat(PropertyName.VAL);
MY_59 = MY;
temp_60 =MY_59.GetFloat(173);
MY_62 = MY;
MY_62.SetFloat(173,temp_60 + SHOOT_FAC_57_val);
MY_65 = MY;
temp_66 =MY_65.GetFloat(173);
if (temp_66 > 2f)
{
goto DIE;
}
if (UnityEngine.Random.value < 0.3f)
{
goto DIE;
}
MY_70 = MY;
temp_71 =MY_70?.GetAcknexObject(164);
_world.SetSynonymObject(1354526442,temp_71);
NURS5TEX_73 = _world.AcknexObject.GetAcknexObject(3424373403);
MY_75 = MY;
MY_75.SetAcknexObject(164,NURS5TEX_73);
MY_78 = MY;
MY_78.SetAcknexObject(192,null);
MY_81 = MY;
MY_81.SetAcknexObject(193,null);
MY_84 = MY;
MY_84.SetAcknexObject(209,null);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)4f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_88 = MY;
MY_88.SetAcknexObject(192,null);
MY_91 = MY;
MY_91.SetAcknexObject(193,null);
NURSHIT_92 = _world.AcknexObject.GetAcknexObject(1144994394);
MY_94 = MY;
MY_94.SetAcknexObject(209,NURSHIT_92);
NURSE_TEX_95 = _world.GetSynonymObject(1354526442);
MY_97 = MY;
MY_97.SetAcknexObject(164,NURSE_TEX_95);
{
            var enumerator = new NURSHIDE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
DIE:
MY_100 = MY;
MY_100.SetFloat(173,10f);
{
            var enumerator = new NURSDIE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
return false;
OBSTACLE:
MY_103 = MY;
temp_104 =MY_103.GetFloat(176);
if (temp_104 != 1f)
{
goto JUMP;
}
if (UnityEngine.Random.value > 0.97f)
{
NURS02SND_107 = _world.AcknexObject.GetAcknexObject(1328004124);
MY_109 = MY;
_world.PlaySound(NURS02SND_107,0.3f,MY_109);
}
JUMP:
{
            var enumerator = new NURSTURN();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject SHOOT_FAC_1;
float SHOOT_FAC_1_val;
IAcknexObject MY_2;
IAcknexObject HIT_3;
IAcknexObject EXPLOSION_ON_5;
float EXPLOSION_ON_5_val;
IAcknexObject DISTX_6;
IAcknexObject DISTX_7;
float DISTX_7_val;
IAcknexObject MY_10;
float temp_11;
IAcknexObject EXPLOSION_CENTER_14;
float temp_15;
IAcknexObject MY_20;
float temp_21;
IAcknexObject EXPLOSION_CENTER_24;
float temp_25;
IAcknexObject MY_30;
float temp_31;
IAcknexObject EXPLOSION_CENTER_34;
float temp_35;
IAcknexObject MY_40;
float temp_41;
IAcknexObject EXPLOSION_CENTER_44;
float temp_45;
IAcknexObject DISTX_47;
float DISTX_47_val;
IAcknexObject DISTX_48;
IAcknexObject DISTX_50;
float DISTX_50_val;
IAcknexObject EXPLOSION_ON_52;
float EXPLOSION_ON_52_val;
IAcknexObject MY_55;
float temp_56;
IAcknexObject SHOOT_FAC_57;
float SHOOT_FAC_57_val;
IAcknexObject MY_59;
float temp_60;
IAcknexObject MY_62;
IAcknexObject MY_65;
float temp_66;
IAcknexObject MY_70;
IAcknexObject temp_71;
IAcknexObject NURS5TEX_73;
IAcknexObject MY_75;
IAcknexObject MY_78;
IAcknexObject MY_81;
IAcknexObject MY_84;
float startTime1;
float endTime1;
IAcknexObject MY_88;
IAcknexObject MY_91;
IAcknexObject NURSHIT_92;
IAcknexObject MY_94;
IAcknexObject NURSE_TEX_95;
IAcknexObject MY_97;
IAcknexObject MY_100;
IAcknexObject MY_103;
float temp_104;
IAcknexObject NURS02SND_107;
IAcknexObject MY_109;
}
public class NURSCYCLE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public NURSCYCLE() {
  }
 public NURSCYCLE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(176);
if (temp_3 != 4f)
{
goto CONT;
}
{
            var enumerator = new REPELANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_5 = MY;
MY_7 = MY;
temp_8 =MY_7.GetFloat(194);
MY_10 = MY;
temp_11 =MY_10.GetFloat(194);
MY_5.SetFloat(194,temp_11+UnityEngine.Random.value-0.5f);
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
CONT:
MY_18 = MY;
temp_19 =MY_18.GetFloat(202);
if (temp_19 > 4f)
{
goto CONT1;
}
MY_22 = MY;
temp_23 =MY_22.GetFloat(168);
if (temp_23 == 0f)
{
goto CONT1;
}
{
            var enumerator = new REPELANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_25 = MY;
MY_27 = MY;
temp_28 =MY_27.GetFloat(194);
MY_30 = MY;
temp_31 =MY_30.GetFloat(194);
MY_25.SetFloat(194,temp_31+UnityEngine.Random.value-0.5f);
CONT1:
GUN_ON_37 = _world.GetObject(ObjectType.Skill,3014382675);
GUN_ON_37_val = GUN_ON_37.GetFloat(PropertyName.VAL);
if (GUN_ON_37_val != 0f)
{
goto HIDE;
}
SHOT_SOUND_ON_39 = _world.GetObject(ObjectType.Skill,3372273679);
SHOT_SOUND_ON_39_val = SHOT_SOUND_ON_39.GetFloat(PropertyName.VAL);
if (SHOT_SOUND_ON_39_val != 0f)
{
goto HIDE;
}
EXPLOSION_ON_41 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_41_val = EXPLOSION_ON_41.GetFloat(PropertyName.VAL);
if (EXPLOSION_ON_41_val != 0f)
{
goto HIDE;
}
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
HIDE:
{
            var enumerator = new NURSSCREAM();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new NURSHIDE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_5;
IAcknexObject MY_7;
float temp_8;
IAcknexObject MY_10;
float temp_11;
IAcknexObject MY_18;
float temp_19;
IAcknexObject MY_22;
float temp_23;
IAcknexObject MY_25;
IAcknexObject MY_27;
float temp_28;
IAcknexObject MY_30;
float temp_31;
IAcknexObject GUN_ON_37;
float GUN_ON_37_val;
IAcknexObject SHOT_SOUND_ON_39;
float SHOT_SOUND_ON_39_val;
IAcknexObject EXPLOSION_ON_41;
float EXPLOSION_ON_41_val;
}
public class NURSSCREAM : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public NURSSCREAM() {
  }
 public NURSSCREAM(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
if (UnityEngine.Random.value < 0.4f)
{
goto NONO;
}
NURS03SND_2 = _world.AcknexObject.GetAcknexObject(1328040061);
MY_4 = MY;
_world.PlaySound(NURS03SND_2,0.3f,MY_4);
return false;
NONO:
NURS05SND_5 = _world.AcknexObject.GetAcknexObject(1328111935);
MY_7 = MY;
_world.PlaySound(NURS05SND_5,0.3f,MY_7);
//Unknown keyword: 
      return false;
  }
IAcknexObject NURS03SND_2;
IAcknexObject MY_4;
IAcknexObject NURS05SND_5;
IAcknexObject MY_7;
}
public class NURSTALK : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public NURSTALK() {
  }
 public NURSTALK(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(205);
if (temp_3 != 1f)
{
return false;
}
MY_6 = MY;
temp_7 =MY_6.GetFloat(176);
if (temp_7 == 4f)
{
return false;
}
TALKNURS_9 = _world.GetObject(ObjectType.Skill,1134038113);
TALKNURS_9_val = TALKNURS_9.GetFloat(PropertyName.VAL);
if (TALKNURS_9_val != 0f)
{
return false;
}
TALKNURS_11 = _world.GetObject(ObjectType.Skill,1134038113);
TALKNURS_11.SetFloat(231,1f);
FOLLOW_12 = _world.AcknexObject.GetAcknexObject(2968039200);
MY_14 = MY;
MY_14.SetAcknexObject(199,FOLLOW_12);
MY_17 = MY;
MY_17.SetFloat(168,0.05f);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)4f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_21 = MY;
MY_21.SetFloat(168,0f);
if (UnityEngine.Random.value < 0.3f)
{
goto MAYIHELP;
}
NURS01SND_24 = _world.AcknexObject.GetAcknexObject(1327968187);
MY_26 = MY;
_world.PlaySound(NURS01SND_24,0.25f,MY_26);
goto TIMER;
MAYIHELP:
NURS02SND_27 = _world.AcknexObject.GetAcknexObject(1328004124);
MY_29 = MY;
_world.PlaySound(NURS02SND_27,0.25f,MY_29);
TIMER:

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.FramesToTime((int)128f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
TALKNURS_32 = _world.GetObject(ObjectType.Skill,1134038113);
TALKNURS_32.SetFloat(231,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_6;
float temp_7;
IAcknexObject TALKNURS_9;
float TALKNURS_9_val;
IAcknexObject TALKNURS_11;
IAcknexObject FOLLOW_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
float startTime1;
float endTime1;
IAcknexObject MY_21;
IAcknexObject NURS01SND_24;
IAcknexObject MY_26;
IAcknexObject NURS02SND_27;
IAcknexObject MY_29;
float startTime2;
float endTime2;
IAcknexObject TALKNURS_32;
}
public class DOCTTURN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DOCTTURN() {
  }
 public DOCTTURN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
WAITTIME_0 = _world.GetObject(ObjectType.Skill,33817649);
WAITTIME_1 = _world.GetObject(ObjectType.Skill,33817649);
WAITTIME_1_val = WAITTIME_1.GetFloat(PropertyName.VAL);
WAITTIME_0.SetFloat(231,64f*UnityEngine.Random.value+16f);
if (UnityEngine.Random.value > 0.95f)
{
RIGHTTURNDOCT_9 = _world.GetObject(ObjectType.Skill,16208702);
RIGHTTURNDOCT_10 = _world.GetObject(ObjectType.Skill,16208702);
RIGHTTURNDOCT_10_val = RIGHTTURNDOCT_10.GetFloat(PropertyName.VAL);
RIGHTTURNDOCT_12 = _world.GetObject(ObjectType.Skill,16208702);
RIGHTTURNDOCT_12_val = RIGHTTURNDOCT_12.GetFloat(PropertyName.VAL);
RIGHTTURNDOCT_18 = _world.GetObject(ObjectType.Skill,16208702);
RIGHTTURNDOCT_18_val = RIGHTTURNDOCT_18.GetFloat(PropertyName.VAL);
RIGHTTURNDOCT_9.SetFloat(231,(RIGHTTURNDOCT_12_val-1f)*(RIGHTTURNDOCT_18_val-1f));
}
RIGHTTURNDOCT_22 = _world.GetObject(ObjectType.Skill,16208702);
RIGHTTURNDOCT_22_val = RIGHTTURNDOCT_22.GetFloat(PropertyName.VAL);
if (RIGHTTURNDOCT_22_val > RIGHTTURNDOCT_22.GetFloat(PropertyName.MAX))
{
{
            var enumerator = new TURNRIGHT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
{
            var enumerator = new TURNLEFT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject WAITTIME_0;
IAcknexObject WAITTIME_1;
float WAITTIME_1_val;
IAcknexObject RIGHTTURNDOCT_9;
IAcknexObject RIGHTTURNDOCT_10;
float RIGHTTURNDOCT_10_val;
IAcknexObject RIGHTTURNDOCT_12;
float RIGHTTURNDOCT_12_val;
IAcknexObject RIGHTTURNDOCT_18;
float RIGHTTURNDOCT_18_val;
IAcknexObject RIGHTTURNDOCT_22;
float RIGHTTURNDOCT_22_val;
}
public class DOCTWAIT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DOCTWAIT() {
  }
 public DOCTWAIT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetFloat(207,0f);
MY_5 = MY;
MY_5.SetAcknexObject(189,null);
MY_8 = MY;
MY_8.SetAcknexObject(193,null);
DOCTHIT_9 = _world.AcknexObject.GetAcknexObject(862651356);
MY_11 = MY;
MY_11.SetAcknexObject(209,DOCTHIT_9);
DOCTTALK_12 = _world.AcknexObject.GetAcknexObject(2698081315);
MY_14 = MY;
MY_14.SetAcknexObject(192,DOCTTALK_12);
DOCTCYCLE_15 = _world.AcknexObject.GetAcknexObject(3117997607);
MY_17 = MY;
MY_17.SetAcknexObject(190,DOCTCYCLE_15);
MY_20 = MY;
MY_20.SetFloat(213,0f);
MY_23 = MY;
MY_23.SetFloat(165,-0.05f);
DOCT0TEX_24 = _world.AcknexObject.GetAcknexObject(2696808056);
MY_26 = MY;
MY_26.SetAcknexObject(164,DOCT0TEX_24);
MY_29 = MY;
MY_29.SetFloat(168,0f);
MY_32 = MY;
MY_32.SetAcknexObject(199,null);
MY_35 = MY;
MY_35.SetFloat(176,1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject DOCTHIT_9;
IAcknexObject MY_11;
IAcknexObject DOCTTALK_12;
IAcknexObject MY_14;
IAcknexObject DOCTCYCLE_15;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject DOCT0TEX_24;
IAcknexObject MY_26;
IAcknexObject MY_29;
IAcknexObject MY_32;
IAcknexObject MY_35;
}
public class DOCTWANDER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DOCTWANDER() {
  }
 public DOCTWANDER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetFloat(207,1f);
MY_5 = MY;
MY_5.SetAcknexObject(189,null);
MY_8 = MY;
MY_8.SetAcknexObject(193,null);
DOCTHIT_9 = _world.AcknexObject.GetAcknexObject(862651356);
MY_11 = MY;
MY_11.SetAcknexObject(209,DOCTHIT_9);
MY_14 = MY;
MY_14.SetAcknexObject(192,null);
DOCTCYCLE_15 = _world.AcknexObject.GetAcknexObject(3117997607);
MY_17 = MY;
MY_17.SetAcknexObject(190,DOCTCYCLE_15);
MY_20 = MY;
MY_20.SetFloat(213,0f);
DOCT1TEX_21 = _world.AcknexObject.GetAcknexObject(2696843993);
MY_23 = MY;
MY_23.SetAcknexObject(164,DOCT1TEX_21);
MY_26 = MY;
MY_26.SetFloat(168,0.4f);
BULLET_27 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_29 = MY;
MY_29.SetAcknexObject(199,BULLET_27);
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_32 = MY;
MY_32.SetFloat(176,1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject DOCTHIT_9;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject DOCTCYCLE_15;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject DOCT1TEX_21;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject BULLET_27;
IAcknexObject MY_29;
IAcknexObject MY_32;
}
public class DOCTHIDE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DOCTHIDE() {
  }
 public DOCTHIDE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
MY_2 = MY;
MY_2.SetFloat(207,1f);
MY_5 = MY;
MY_5.SetAcknexObject(189,null);
MY_8 = MY;
MY_8.SetAcknexObject(192,null);
MY_11 = MY;
MY_11.SetAcknexObject(193,null);
DOCTCYCLE_12 = _world.AcknexObject.GetAcknexObject(3117997607);
MY_14 = MY;
MY_14.SetAcknexObject(190,DOCTCYCLE_12);
DOCTHIT_15 = _world.AcknexObject.GetAcknexObject(862651356);
MY_17 = MY;
MY_17.SetAcknexObject(209,DOCTHIT_15);
{
            var enumerator = new DOCTSCREAM();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_19 = MY;
MY_21 = MY;
temp_22 =MY_21.GetFloat(194);
PLAYER_ANGLE_23 = _world.GetObject(ObjectType.Skill,462);
PLAYER_ANGLE_23_val = PLAYER_ANGLE_23.GetFloat(PropertyName.VAL);
MY_19.SetFloat(194,PLAYER_ANGLE_23_val+(0.5f-UnityEngine.Random.value)*2.4f);
DOCT1TEX_32 = _world.AcknexObject.GetAcknexObject(2696843993);
MY_34 = MY;
MY_34.SetAcknexObject(164,DOCT1TEX_32);
MY_37 = MY;
MY_37.SetFloat(168,0.6f);
MY_40 = MY;
MY_40.SetFloat(172,20f);
BULLET_41 = _world.AcknexObject.GetAcknexObject(2818612821);
MY_43 = MY;
MY_43.SetAcknexObject(199,BULLET_41);
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_46 = MY;
MY_46.SetFloat(176,4f);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)480f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_50 = MY;
temp_51 =MY_50.GetFloat(173);
if (temp_51 < 2f)
{
{
            var enumerator = new DOCTWANDER();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject DOCTCYCLE_12;
IAcknexObject MY_14;
IAcknexObject DOCTHIT_15;
IAcknexObject MY_17;
IAcknexObject MY_19;
IAcknexObject MY_21;
float temp_22;
IAcknexObject PLAYER_ANGLE_23;
float PLAYER_ANGLE_23_val;
IAcknexObject DOCT1TEX_32;
IAcknexObject MY_34;
IAcknexObject MY_37;
IAcknexObject MY_40;
IAcknexObject BULLET_41;
IAcknexObject MY_43;
IAcknexObject MY_46;
float startTime1;
float endTime1;
IAcknexObject MY_50;
float temp_51;
}
public class DOCTDEAD : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DOCTDEAD() {
  }
 public DOCTDEAD(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(192,null);
MY_5 = MY;
MY_5.SetAcknexObject(193,null);
MY_8 = MY;
MY_8.SetAcknexObject(209,null);
MY_11 = MY;
MY_11.SetAcknexObject(190,null);
{
            var enumerator = new INNOCENTKILLED();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }DOCT9TEX_12 = _world.AcknexObject.GetAcknexObject(2697131489);
MY_14 = MY;
MY_14.SetAcknexObject(164,DOCT9TEX_12);
MY_17 = MY;
MY_17.SetFloat(168,0f);
MY_20 = MY;
MY_20.SetAcknexObject(199,null);
MY_23 = MY;
MY_23.SetFloat(206,1f);
MY_26 = MY;
MY_26.SetFloat(207,0f);
MY_29 = MY;
MY_29.SetFloat(176,8f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject DOCT9TEX_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject MY_20;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject MY_29;
}
public class DOCTDIE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DOCTDIE() {
  }
 public DOCTDIE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetFloat(173,10f);
MY_5 = MY;
MY_5.SetFloat(206,1f);
MY_8 = MY;
MY_8.SetFloat(207,0f);
MY_11 = MY;
MY_11.SetAcknexObject(192,null);
MY_14 = MY;
MY_14.SetAcknexObject(193,null);
MY_17 = MY;
MY_17.SetAcknexObject(209,null);
DOCTDEAD_18 = _world.AcknexObject.GetAcknexObject(2697510309);
MY_20 = MY;
MY_20.SetAcknexObject(190,DOCTDEAD_18);
DOCT8TEX_21 = _world.AcknexObject.GetAcknexObject(2697095552);
MY_23 = MY;
MY_23.SetAcknexObject(164,DOCT8TEX_21);
MY_26 = MY;
MY_26.SetFloat(168,0f);
MY_29 = MY;
MY_29.SetAcknexObject(199,null);
DOCT04SND_30 = _world.AcknexObject.GetAcknexObject(3094152928);
MY_32 = MY;
_world.PlaySound(DOCT04SND_30,0.4f,MY_32);
MY_35 = MY;
MY_35.SetFloat(176,8f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject MY_11;
IAcknexObject MY_14;
IAcknexObject MY_17;
IAcknexObject DOCTDEAD_18;
IAcknexObject MY_20;
IAcknexObject DOCT8TEX_21;
IAcknexObject MY_23;
IAcknexObject MY_26;
IAcknexObject MY_29;
IAcknexObject DOCT04SND_30;
IAcknexObject MY_32;
IAcknexObject MY_35;
}
public class DOCTIMPLODE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DOCTIMPLODE() {
  }
 public DOCTIMPLODE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
DISTX_0 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_1 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_1_val = DISTX_1.GetFloat(PropertyName.VAL);
MY_4 = MY;
temp_5 =MY_4.GetFloat(195);
EXPLOSION_CENTER_8 = _world.GetSynonymObject(3704223598);
temp_9 =EXPLOSION_CENTER_8.GetFloat(195);
MY_14 = MY;
temp_15 =MY_14.GetFloat(195);
EXPLOSION_CENTER_18 = _world.GetSynonymObject(3704223598);
temp_19 =EXPLOSION_CENTER_18.GetFloat(195);
MY_24 = MY;
temp_25 =MY_24.GetFloat(196);
EXPLOSION_CENTER_28 = _world.GetSynonymObject(3704223598);
temp_29 =EXPLOSION_CENTER_28.GetFloat(196);
MY_34 = MY;
temp_35 =MY_34.GetFloat(196);
EXPLOSION_CENTER_38 = _world.GetSynonymObject(3704223598);
temp_39 =EXPLOSION_CENTER_38.GetFloat(196);
DISTX_0.SetFloat(231,(temp_5-temp_9)*(temp_15-temp_19)+(temp_25-temp_29)*(temp_35-temp_39));
DISTX_41 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_41_val = DISTX_41.GetFloat(PropertyName.VAL);
DISTX_42 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_42.SetFloat(231,MathUtils.Sqrt(DISTX_41_val));
DISTZ_43 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_44 = _world.GetObject(ObjectType.Skill,217512507);
DISTZ_44_val = DISTZ_44.GetFloat(PropertyName.VAL);
MY_46 = MY;
temp_47 =MY_46.GetFloat(200);
EXPLOSION_CENTER_50 = _world.GetSynonymObject(3704223598);
temp_51 =EXPLOSION_CENTER_50.GetFloat(200);
DISTZ_43.SetFloat(231,temp_47-temp_51);
DISTX_53 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_53_val = DISTX_53.GetFloat(PropertyName.VAL);
if (DISTX_53_val > 10f)
{
{
            var enumerator = new BEAMREACT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MY_56 = MY;
MY_56.SetFloat(206,1f);
MY_59 = MY;
MY_59.SetFloat(207,0f);
MY_62 = MY;
MY_62.SetAcknexObject(192,null);
MY_65 = MY;
MY_65.SetAcknexObject(193,null);
MY_68 = MY;
MY_68.SetAcknexObject(209,null);
VANISHFORGOOD_69 = _world.AcknexObject.GetAcknexObject(1333438470);
MY_71 = MY;
MY_71.SetAcknexObject(190,VANISHFORGOOD_69);
DOCT0ATEX_72 = _world.AcknexObject.GetAcknexObject(3094620921);
MY_74 = MY;
MY_74.SetAcknexObject(164,DOCT0ATEX_72);
MY_77 = MY;
MY_77.SetFloat(168,0f);
MY_80 = MY;
MY_80.SetAcknexObject(199,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject DISTX_0;
IAcknexObject DISTX_1;
float DISTX_1_val;
IAcknexObject MY_4;
float temp_5;
IAcknexObject EXPLOSION_CENTER_8;
float temp_9;
IAcknexObject MY_14;
float temp_15;
IAcknexObject EXPLOSION_CENTER_18;
float temp_19;
IAcknexObject MY_24;
float temp_25;
IAcknexObject EXPLOSION_CENTER_28;
float temp_29;
IAcknexObject MY_34;
float temp_35;
IAcknexObject EXPLOSION_CENTER_38;
float temp_39;
IAcknexObject DISTX_41;
float DISTX_41_val;
IAcknexObject DISTX_42;
IAcknexObject DISTZ_43;
IAcknexObject DISTZ_44;
float DISTZ_44_val;
IAcknexObject MY_46;
float temp_47;
IAcknexObject EXPLOSION_CENTER_50;
float temp_51;
IAcknexObject DISTX_53;
float DISTX_53_val;
IAcknexObject MY_56;
IAcknexObject MY_59;
IAcknexObject MY_62;
IAcknexObject MY_65;
IAcknexObject MY_68;
IAcknexObject VANISHFORGOOD_69;
IAcknexObject MY_71;
IAcknexObject DOCT0ATEX_72;
IAcknexObject MY_74;
IAcknexObject MY_77;
IAcknexObject MY_80;
}
public class DOCTHIT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DOCTHIT() {
  }
 public DOCTHIT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat(PropertyName.VAL);
if (SHOOT_FAC_1_val == 0f)
{
goto OBSTACLE;
}
MY_2 = MY;
HIT_3 = _world.GetSynonymObject(704);
if (HIT_3 == MY_2)
{
goto HIT;
}
EXPLOSION_ON_5 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_5_val = EXPLOSION_ON_5.GetFloat(PropertyName.VAL);
if (EXPLOSION_ON_5_val == 0f)
{
goto OBSTACLE;
}
DISTX_6 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_7 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_7_val = DISTX_7.GetFloat(PropertyName.VAL);
MY_10 = MY;
temp_11 =MY_10.GetFloat(195);
EXPLOSION_CENTER_14 = _world.GetSynonymObject(3704223598);
temp_15 =EXPLOSION_CENTER_14.GetFloat(195);
MY_20 = MY;
temp_21 =MY_20.GetFloat(195);
EXPLOSION_CENTER_24 = _world.GetSynonymObject(3704223598);
temp_25 =EXPLOSION_CENTER_24.GetFloat(195);
MY_30 = MY;
temp_31 =MY_30.GetFloat(196);
EXPLOSION_CENTER_34 = _world.GetSynonymObject(3704223598);
temp_35 =EXPLOSION_CENTER_34.GetFloat(196);
MY_40 = MY;
temp_41 =MY_40.GetFloat(196);
EXPLOSION_CENTER_44 = _world.GetSynonymObject(3704223598);
temp_45 =EXPLOSION_CENTER_44.GetFloat(196);
DISTX_6.SetFloat(231,(temp_11-temp_15)*(temp_21-temp_25)+(temp_31-temp_35)*(temp_41-temp_45));
DISTX_47 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_47_val = DISTX_47.GetFloat(PropertyName.VAL);
DISTX_48 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_48.SetFloat(231,MathUtils.Sqrt(DISTX_47_val));
DISTX_50 = _world.GetObject(ObjectType.Skill,217512505);
DISTX_50_val = DISTX_50.GetFloat(PropertyName.VAL);
if (DISTX_50_val > 25f)
{
goto OBSTACLE;
}
HIT:
EXPLOSION_ON_52 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_52_val = EXPLOSION_ON_52.GetFloat(PropertyName.VAL);
if (EXPLOSION_ON_52_val != 2f)
{
goto CONT;
}
MY_55 = MY;
temp_56 =MY_55.GetFloat(205);
if (temp_56 == 1f)
{
{
            var enumerator = new DOCTIMPLODE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
CONT:
SHOOT_FAC_57 = _world.GetObject(ObjectType.Skill,441);
SHOOT_FAC_57_val = SHOOT_FAC_57.GetFloat(PropertyName.VAL);
MY_59 = MY;
temp_60 =MY_59.GetFloat(173);
MY_62 = MY;
MY_62.SetFloat(173,temp_60 + SHOOT_FAC_57_val);
MY_65 = MY;
temp_66 =MY_65.GetFloat(173);
if (temp_66 > 2f)
{
goto DIE;
}
if (UnityEngine.Random.value < 0.3f)
{
goto DIE;
}
MY_70 = MY;
temp_71 =MY_70?.GetAcknexObject(164);
_world.SetSynonymObject(3120603372,temp_71);
DOCT5TEX_73 = _world.AcknexObject.GetAcknexObject(2696987741);
MY_75 = MY;
MY_75.SetAcknexObject(164,DOCT5TEX_73);
MY_78 = MY;
MY_78.SetAcknexObject(192,null);
MY_81 = MY;
MY_81.SetAcknexObject(193,null);
MY_84 = MY;
MY_84.SetAcknexObject(209,null);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)4f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_88 = MY;
MY_88.SetAcknexObject(192,null);
MY_91 = MY;
MY_91.SetAcknexObject(193,null);
DOCTHIT_92 = _world.AcknexObject.GetAcknexObject(862651356);
MY_94 = MY;
MY_94.SetAcknexObject(209,DOCTHIT_92);
DOCTE_TEX_95 = _world.GetSynonymObject(3120603372);
MY_97 = MY;
MY_97.SetAcknexObject(164,DOCTE_TEX_95);
{
            var enumerator = new DOCTHIDE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
DIE:
MY_100 = MY;
MY_100.SetFloat(173,10f);
{
            var enumerator = new DOCTDIE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
return false;
OBSTACLE:
MY_103 = MY;
temp_104 =MY_103.GetFloat(176);
if (temp_104 != 1f)
{
goto JUMP;
}
if (UnityEngine.Random.value > 0.97f)
{
DOCT02SND_107 = _world.AcknexObject.GetAcknexObject(3094081054);
MY_109 = MY;
_world.PlaySound(DOCT02SND_107,0.3f,MY_109);
}
JUMP:
{
            var enumerator = new DOCTTURN();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject SHOOT_FAC_1;
float SHOOT_FAC_1_val;
IAcknexObject MY_2;
IAcknexObject HIT_3;
IAcknexObject EXPLOSION_ON_5;
float EXPLOSION_ON_5_val;
IAcknexObject DISTX_6;
IAcknexObject DISTX_7;
float DISTX_7_val;
IAcknexObject MY_10;
float temp_11;
IAcknexObject EXPLOSION_CENTER_14;
float temp_15;
IAcknexObject MY_20;
float temp_21;
IAcknexObject EXPLOSION_CENTER_24;
float temp_25;
IAcknexObject MY_30;
float temp_31;
IAcknexObject EXPLOSION_CENTER_34;
float temp_35;
IAcknexObject MY_40;
float temp_41;
IAcknexObject EXPLOSION_CENTER_44;
float temp_45;
IAcknexObject DISTX_47;
float DISTX_47_val;
IAcknexObject DISTX_48;
IAcknexObject DISTX_50;
float DISTX_50_val;
IAcknexObject EXPLOSION_ON_52;
float EXPLOSION_ON_52_val;
IAcknexObject MY_55;
float temp_56;
IAcknexObject SHOOT_FAC_57;
float SHOOT_FAC_57_val;
IAcknexObject MY_59;
float temp_60;
IAcknexObject MY_62;
IAcknexObject MY_65;
float temp_66;
IAcknexObject MY_70;
IAcknexObject temp_71;
IAcknexObject DOCT5TEX_73;
IAcknexObject MY_75;
IAcknexObject MY_78;
IAcknexObject MY_81;
IAcknexObject MY_84;
float startTime1;
float endTime1;
IAcknexObject MY_88;
IAcknexObject MY_91;
IAcknexObject DOCTHIT_92;
IAcknexObject MY_94;
IAcknexObject DOCTE_TEX_95;
IAcknexObject MY_97;
IAcknexObject MY_100;
IAcknexObject MY_103;
float temp_104;
IAcknexObject DOCT02SND_107;
IAcknexObject MY_109;
}
public class DOCTCYCLE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DOCTCYCLE() {
  }
 public DOCTCYCLE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(176);
if (temp_3 != 4f)
{
goto CONT;
}
{
            var enumerator = new REPELANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_5 = MY;
MY_7 = MY;
temp_8 =MY_7.GetFloat(194);
MY_10 = MY;
temp_11 =MY_10.GetFloat(194);
MY_5.SetFloat(194,temp_11+UnityEngine.Random.value-0.5f);
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
CONT:
MY_18 = MY;
temp_19 =MY_18.GetFloat(202);
if (temp_19 > 4f)
{
goto CONT1;
}
MY_22 = MY;
temp_23 =MY_22.GetFloat(168);
if (temp_23 == 0f)
{
goto CONT1;
}
{
            var enumerator = new REPELANGLE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_25 = MY;
MY_27 = MY;
temp_28 =MY_27.GetFloat(194);
MY_30 = MY;
temp_31 =MY_30.GetFloat(194);
MY_25.SetFloat(194,temp_31+UnityEngine.Random.value-0.5f);
CONT1:
GUN_ON_37 = _world.GetObject(ObjectType.Skill,3014382675);
GUN_ON_37_val = GUN_ON_37.GetFloat(PropertyName.VAL);
if (GUN_ON_37_val != 0f)
{
goto HIDE;
}
SHOT_SOUND_ON_39 = _world.GetObject(ObjectType.Skill,3372273679);
SHOT_SOUND_ON_39_val = SHOT_SOUND_ON_39.GetFloat(PropertyName.VAL);
if (SHOT_SOUND_ON_39_val != 0f)
{
goto HIDE;
}
EXPLOSION_ON_41 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_41_val = EXPLOSION_ON_41.GetFloat(PropertyName.VAL);
if (EXPLOSION_ON_41_val != 0f)
{
goto HIDE;
}
{
            var enumerator = new PROBE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
HIDE:
{
            var enumerator = new DOCTSCREAM();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new DOCTHIDE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_5;
IAcknexObject MY_7;
float temp_8;
IAcknexObject MY_10;
float temp_11;
IAcknexObject MY_18;
float temp_19;
IAcknexObject MY_22;
float temp_23;
IAcknexObject MY_25;
IAcknexObject MY_27;
float temp_28;
IAcknexObject MY_30;
float temp_31;
IAcknexObject GUN_ON_37;
float GUN_ON_37_val;
IAcknexObject SHOT_SOUND_ON_39;
float SHOT_SOUND_ON_39_val;
IAcknexObject EXPLOSION_ON_41;
float EXPLOSION_ON_41_val;
}
public class DOCTSCREAM : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DOCTSCREAM() {
  }
 public DOCTSCREAM(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
DOCT05SND_0 = _world.AcknexObject.GetAcknexObject(3094188865);
MY_2 = MY;
_world.PlaySound(DOCT05SND_0,0.3f,MY_2);
//Unknown keyword: 
      return false;
  }
IAcknexObject DOCT05SND_0;
IAcknexObject MY_2;
}
public class DOCTTALK : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DOCTTALK() {
  }
 public DOCTTALK(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
     }
MY_2 = MY;
temp_3 =MY_2.GetFloat(205);
if (temp_3 != 1f)
{
return false;
}
MY_6 = MY;
temp_7 =MY_6.GetFloat(176);
if (temp_7 == 4f)
{
return false;
}
TALKDOCT_9 = _world.GetObject(ObjectType.Skill,1133671715);
TALKDOCT_9_val = TALKDOCT_9.GetFloat(PropertyName.VAL);
if (TALKDOCT_9_val != 0f)
{
return false;
}
TALKDOCT_11 = _world.GetObject(ObjectType.Skill,1133671715);
TALKDOCT_11.SetFloat(231,1f);
FOLLOW_12 = _world.AcknexObject.GetAcknexObject(2968039200);
MY_14 = MY;
MY_14.SetAcknexObject(199,FOLLOW_12);
MY_17 = MY;
MY_17.SetFloat(168,0.05f);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)4f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_21 = MY;
MY_21.SetFloat(168,0f);
if (UnityEngine.Random.value < 0.3f)
{
goto LOSTCASE;
}
if (UnityEngine.Random.value < 0.5f)
{
goto NURSE;
}
DOCT03SND_26 = _world.AcknexObject.GetAcknexObject(3094116991);
MY_28 = MY;
_world.PlaySound(DOCT03SND_26,0.25f,MY_28);
goto TIMER;
NURSE:
DOCT02SND_29 = _world.AcknexObject.GetAcknexObject(3094081054);
MY_31 = MY;
_world.PlaySound(DOCT02SND_29,0.25f,MY_31);
goto TIMER;
LOSTCASE:
DOCT01SND_32 = _world.AcknexObject.GetAcknexObject(3094045117);
MY_34 = MY;
_world.PlaySound(DOCT01SND_32,0.25f,MY_34);
TIMER:

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.FramesToTime((int)128f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
TALKDOCT_37 = _world.GetObject(ObjectType.Skill,1133671715);
TALKDOCT_37.SetFloat(231,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_6;
float temp_7;
IAcknexObject TALKDOCT_9;
float TALKDOCT_9_val;
IAcknexObject TALKDOCT_11;
IAcknexObject FOLLOW_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
float startTime1;
float endTime1;
IAcknexObject MY_21;
IAcknexObject DOCT03SND_26;
IAcknexObject MY_28;
IAcknexObject DOCT02SND_29;
IAcknexObject MY_31;
IAcknexObject DOCT01SND_32;
IAcknexObject MY_34;
float startTime2;
float endTime2;
IAcknexObject TALKDOCT_37;
}
public class SETFORCE1 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SETFORCE1() {
  }
 public SETFORCE1(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
TROPU2ACT_2 = _world.AcknexObject.GetAcknexObject(1509683217);
TROPU2ACT_2.SetFloatAll(204,0f);
LNCHU2ACT_5 = _world.AcknexObject.GetAcknexObject(1454175857);
LNCHU2ACT_5.SetFloatAll(204,0f);
ENGINEROOMRGN_8 = _world.AcknexObject.GetAcknexObject(1901199751);
ENGINEROOMRGN_8.SetAcknexObjectAll(81,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject TROPU2ACT_2;
IAcknexObject LNCHU2ACT_5;
IAcknexObject ENGINEROOMRGN_8;
}
public class TROPASSAULT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TROPASSAULT() {
  }
 public TROPASSAULT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetAcknexObject(189,null);
MY_5 = MY;
MY_5.SetAcknexObject(192,null);
MY_8 = MY;
MY_8.SetAcknexObject(193,null);
CYCLETROPATTACK_9 = _world.AcknexObject.GetAcknexObject(1708986426);
MY_11 = MY;
MY_11.SetAcknexObject(190,CYCLETROPATTACK_9);
TROPATEX_12 = _world.AcknexObject.GetAcknexObject(1737024196);
MY_14 = MY;
MY_14.SetAcknexObject(164,TROPATEX_12);
MY_17 = MY;
MY_17.SetFloat(168,0.7f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject MY_5;
IAcknexObject MY_8;
IAcknexObject CYCLETROPATTACK_9;
IAcknexObject MY_11;
IAcknexObject TROPATEX_12;
IAcknexObject MY_14;
IAcknexObject MY_17;
}
public class WAYGUARD2 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public WAYGUARD2() {
  }
 public WAYGUARD2(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = new TROPTALK();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_2 = MY;
temp_3 =MY_2.GetFloat(171);
if (temp_3 != 4f)
{
return false;
}
MY_6 = MY;
MY_6.SetAcknexObject(191,null);
TROPATEX_7 = _world.AcknexObject.GetAcknexObject(1737024196);
MY_9 = MY;
MY_9.SetAcknexObject(164,TROPATEX_7);
GUARD2WAY_10 = _world.AcknexObject.GetAcknexObject(37186851);
MY_12 = MY;
MY_12.SetAcknexObject(199,GUARD2WAY_10);
MY_15 = MY;
MY_15.SetFloat(168,0.5f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
float temp_3;
IAcknexObject MY_6;
IAcknexObject TROPATEX_7;
IAcknexObject MY_9;
IAcknexObject GUARD2WAY_10;
IAcknexObject MY_12;
IAcknexObject MY_15;
}
public class DROPTROOPS2 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DROPTROOPS2() {
  }
 public DROPTROOPS2(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
     }
DROPPED_1 = _world.GetObject(ObjectType.Skill,994153403);
DROPPED_1_val = DROPPED_1.GetFloat(PropertyName.VAL);
if (DROPPED_1_val == 1f)
{
return false;
}
MY_4 = MY;
temp_5 =MY_4.GetFloat(171);
if (temp_5 != 13f)
{
return false;
}
DROPPED_7 = _world.GetObject(ObjectType.Skill,994153403);
DROPPED_7.SetFloat(231,1f);
MY_10 = MY;
MY_10.SetFloat(168,0f);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)4f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
TROPASSAULT2ACT_14 = _world.AcknexObject.GetAcknexObject(620387993);
TROPASSAULT2ACT_14.SetFloatAll(204,0f);
ASSAULT2WAY_15 = _world.AcknexObject.GetAcknexObject(517716845);
TROPASSAULT2ACT_17 = _world.AcknexObject.GetAcknexObject(620387993);
TROPASSAULT2ACT_17.SetAcknexObjectAll(199,ASSAULT2WAY_15);
TROPASSAULT2ACT_20 = _world.AcknexObject.GetAcknexObject(620387993);
TROPASSAULT2ACT_20.SetFloatAll(172,40f);

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.FramesToTime((int)160f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MY_24 = MY;
MY_24.SetFloat(168,2f);
//Unknown keyword: 
      return false;
  }
IAcknexObject DROPPED_1;
float DROPPED_1_val;
IAcknexObject MY_4;
float temp_5;
IAcknexObject DROPPED_7;
IAcknexObject MY_10;
float startTime1;
float endTime1;
IAcknexObject TROPASSAULT2ACT_14;
IAcknexObject ASSAULT2WAY_15;
IAcknexObject TROPASSAULT2ACT_17;
IAcknexObject TROPASSAULT2ACT_20;
float startTime2;
float endTime2;
IAcknexObject MY_24;
}
public class WARNPLAYER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public WARNPLAYER() {
  }
 public WARNPLAYER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetFloat(172,20f);
WRN22STR_3 = _world.AcknexObject.GetAcknexObject(668081569);
_world.SetSynonymObject(361798934,WRN22STR_3);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
IAcknexObject WRN22STR_3;
}
public class RESETWARN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public RESETWARN() {
  }
 public RESETWARN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MY_2 = MY;
MY_2.SetFloat(172,5f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MY_2;
}
public class SELECTOR : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SELECTOR() {
  }
 public SELECTOR(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
TOUCHKEY_1 = _world.GetObject(ObjectType.Skill,2377224729);
TOUCHKEY_1_val = TOUCHKEY_1.GetFloat(PropertyName.VAL);
if (TOUCHKEY_1_val == 1f)
{
{
            var enumerator = new OPENDOOR1();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
TOUCHKEY_3 = _world.GetObject(ObjectType.Skill,2377224729);
TOUCHKEY_3_val = TOUCHKEY_3.GetFloat(PropertyName.VAL);
if (TOUCHKEY_3_val == 2f)
{
{
            var enumerator = new OPENDOOR2();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
TOUCHKEY_5 = _world.GetObject(ObjectType.Skill,2377224729);
TOUCHKEY_5_val = TOUCHKEY_5.GetFloat(PropertyName.VAL);
if (TOUCHKEY_5_val == 4f)
{
{
            var enumerator = new OPENHATCH();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
TOUCHKEY_7 = _world.GetObject(ObjectType.Skill,2377224729);
TOUCHKEY_7_val = TOUCHKEY_7.GetFloat(PropertyName.VAL);
if (TOUCHKEY_7_val == 5f)
{
{
            var enumerator = new OPENMJ3();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
TOUCHKEY_9 = _world.GetObject(ObjectType.Skill,2377224729);
TOUCHKEY_9_val = TOUCHKEY_9.GetFloat(PropertyName.VAL);
if (TOUCHKEY_9_val == 6f)
{
{
            var enumerator = new NOTOPEN();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
TOUCHKEY_11 = _world.GetObject(ObjectType.Skill,2377224729);
TOUCHKEY_11_val = TOUCHKEY_11.GetFloat(PropertyName.VAL);
if (TOUCHKEY_11_val == 7f)
{
{
            var enumerator = new OPENHATCHA();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
TOUCHKEY_13 = _world.GetObject(ObjectType.Skill,2377224729);
TOUCHKEY_13_val = TOUCHKEY_13.GetFloat(PropertyName.VAL);
if (TOUCHKEY_13_val == 8f)
{
{
            var enumerator = new OPENHATCHB();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
//Unknown keyword: 
      return false;
  }
IAcknexObject TOUCHKEY_1;
float TOUCHKEY_1_val;
IAcknexObject TOUCHKEY_3;
float TOUCHKEY_3_val;
IAcknexObject TOUCHKEY_5;
float TOUCHKEY_5_val;
IAcknexObject TOUCHKEY_7;
float TOUCHKEY_7_val;
IAcknexObject TOUCHKEY_9;
float TOUCHKEY_9_val;
IAcknexObject TOUCHKEY_11;
float TOUCHKEY_11_val;
IAcknexObject TOUCHKEY_13;
float TOUCHKEY_13_val;
}
public class RESETTOUCH : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public RESETTOUCH() {
  }
 public RESETTOUCH(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
TOUCHKEY_1 = _world.GetObject(ObjectType.Skill,2377224729);
TOUCHKEY_1.SetFloat(231,0f);
//Unknown keyword: 
      return false;
  }
IAcknexObject TOUCHKEY_1;
}
public class SETTOUCH1 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SETTOUCH1() {
  }
 public SETTOUCH1(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
TOUCHKEY_1 = _world.GetObject(ObjectType.Skill,2377224729);
TOUCHKEY_1.SetFloat(231,1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject TOUCHKEY_1;
}
public class SETTOUCH2 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SETTOUCH2() {
  }
 public SETTOUCH2(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
TOUCHKEY_1 = _world.GetObject(ObjectType.Skill,2377224729);
TOUCHKEY_1.SetFloat(231,2f);
//Unknown keyword: 
      return false;
  }
IAcknexObject TOUCHKEY_1;
}
public class SETTOUCH4 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SETTOUCH4() {
  }
 public SETTOUCH4(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
TOUCHKEY_1 = _world.GetObject(ObjectType.Skill,2377224729);
TOUCHKEY_1.SetFloat(231,4f);
//Unknown keyword: 
      return false;
  }
IAcknexObject TOUCHKEY_1;
}
public class SETTOUCH5 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SETTOUCH5() {
  }
 public SETTOUCH5(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
TOUCHKEY_1 = _world.GetObject(ObjectType.Skill,2377224729);
TOUCHKEY_1.SetFloat(231,5f);
//Unknown keyword: 
      return false;
  }
IAcknexObject TOUCHKEY_1;
}
public class SETTOUCH6 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SETTOUCH6() {
  }
 public SETTOUCH6(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
TOUCHKEY_1 = _world.GetObject(ObjectType.Skill,2377224729);
TOUCHKEY_1.SetFloat(231,6f);
//Unknown keyword: 
      return false;
  }
IAcknexObject TOUCHKEY_1;
}
public class SETTOUCH7 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SETTOUCH7() {
  }
 public SETTOUCH7(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
TOUCHKEY_1 = _world.GetObject(ObjectType.Skill,2377224729);
TOUCHKEY_1.SetFloat(231,7f);
//Unknown keyword: 
      return false;
  }
IAcknexObject TOUCHKEY_1;
}
public class SETTOUCH8 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SETTOUCH8() {
  }
 public SETTOUCH8(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
TOUCHKEY_1 = _world.GetObject(ObjectType.Skill,2377224729);
TOUCHKEY_1.SetFloat(231,8f);
//Unknown keyword: 
      return false;
  }
IAcknexObject TOUCHKEY_1;
}
public class OPENDOOR1 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public OPENDOOR1() {
  }
 public OPENDOOR1(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
LOCKSND_0 = _world.AcknexObject.GetAcknexObject(2604149211);
_world.PlaySound(LOCKSND_0,0.3f, null);
KEYOPENWBR02TEX_2 = _world.AcknexObject.GetAcknexObject(1106095366);
LOCK01WALL_4 = _world.AcknexObject.GetAcknexObject(828472871);
LOCK01WALL_4.SetAcknexObjectAll(164,KEYOPENWBR02TEX_2);
LOCK01WALL_7 = _world.AcknexObject.GetAcknexObject(828472871);
LOCK01WALL_7.SetAcknexObjectAll(192,null);
NULLTEX_8 = _world.AcknexObject.GetAcknexObject(1137640249);
WGR01WALL_10 = _world.AcknexObject.GetAcknexObject(711956622);
WGR01WALL_10.SetAcknexObjectAll(164,NULLTEX_8);
WGR01WALL_13 = _world.AcknexObject.GetAcknexObject(711956622);
WGR01WALL_13.SetFloatAll(206,1f);
WGR01WALL_16 = _world.AcknexObject.GetAcknexObject(711956622);
WGR01WALL_16.SetFloatAll(204,1f);
DROPTROOPS2_17 = _world.AcknexObject.GetAcknexObject(1904936731);
HUMM1ACT_19 = _world.AcknexObject.GetAcknexObject(913829005);
HUMM1ACT_19.SetAcknexObject(191,DROPTROOPS2_17);
TROPASSAULT1ACT_22 = _world.AcknexObject.GetAcknexObject(620352056);
TROPASSAULT1ACT_22.SetFloatAll(204,0f);
WRN15STR_23 = _world.AcknexObject.GetAcknexObject(667003459);
_world.SetSynonymObject(361798934,WRN15STR_23);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
LOCK01WALL_27 = _world.AcknexObject.GetAcknexObject(828472871);
LOCK01WALL_27.SetAcknexObject(192,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject LOCKSND_0;
IAcknexObject KEYOPENWBR02TEX_2;
IAcknexObject LOCK01WALL_4;
IAcknexObject LOCK01WALL_7;
IAcknexObject NULLTEX_8;
IAcknexObject WGR01WALL_10;
IAcknexObject WGR01WALL_13;
IAcknexObject WGR01WALL_16;
IAcknexObject DROPTROOPS2_17;
IAcknexObject HUMM1ACT_19;
IAcknexObject TROPASSAULT1ACT_22;
IAcknexObject WRN15STR_23;
IAcknexObject LOCK01WALL_27;
}
public class OPENDOOR2 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public OPENDOOR2() {
  }
 public OPENDOOR2(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
LOCKSND_0 = _world.AcknexObject.GetAcknexObject(2604149211);
_world.PlaySound(LOCKSND_0,0.3f, null);
KEYOPENWPL03TEX_2 = _world.AcknexObject.GetAcknexObject(1772001327);
LOCK02WALL_4 = _world.AcknexObject.GetAcknexObject(829658792);
LOCK02WALL_4.SetAcknexObjectAll(164,KEYOPENWPL03TEX_2);
LOCK02WALL_7 = _world.AcknexObject.GetAcknexObject(829658792);
LOCK02WALL_7.SetAcknexObjectAll(192,null);
NULLTEX_8 = _world.AcknexObject.GetAcknexObject(1137640249);
WTUNELWALL_10 = _world.AcknexObject.GetAcknexObject(1522043004);
WTUNELWALL_10.SetAcknexObjectAll(164,NULLTEX_8);
WTUNELWALL_13 = _world.AcknexObject.GetAcknexObject(1522043004);
WTUNELWALL_13.SetFloatAll(206,1f);
WTUNELWALL_16 = _world.AcknexObject.GetAcknexObject(1522043004);
WTUNELWALL_16.SetFloatAll(204,1f);
UDRKLACT_19 = _world.AcknexObject.GetAcknexObject(616962951);
UDRKLACT_19.SetFloatAll(204,0f);
TROPU1ACT_22 = _world.AcknexObject.GetAcknexObject(1509647280);
TROPU1ACT_22.SetFloatAll(204,0f);
TROPACT_25 = _world.AcknexObject.GetAcknexObject(182788042);
TROPACT_25.SetFloatAll(182,1f);
TROPASSAULT3ACT_28 = _world.AcknexObject.GetAcknexObject(620423930);
TROPASSAULT3ACT_28.SetFloatAll(204,0f);
WRN23STR_29 = _world.AcknexObject.GetAcknexObject(668117506);
_world.SetSynonymObject(361798934,WRN23STR_29);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
LOCK02WALL_33 = _world.AcknexObject.GetAcknexObject(829658792);
LOCK02WALL_33.SetAcknexObject(192,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject LOCKSND_0;
IAcknexObject KEYOPENWPL03TEX_2;
IAcknexObject LOCK02WALL_4;
IAcknexObject LOCK02WALL_7;
IAcknexObject NULLTEX_8;
IAcknexObject WTUNELWALL_10;
IAcknexObject WTUNELWALL_13;
IAcknexObject WTUNELWALL_16;
IAcknexObject UDRKLACT_19;
IAcknexObject TROPU1ACT_22;
IAcknexObject TROPACT_25;
IAcknexObject TROPASSAULT3ACT_28;
IAcknexObject WRN23STR_29;
IAcknexObject LOCK02WALL_33;
}
public class OPENHATCH : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public OPENHATCH() {
  }
 public OPENHATCH(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
TROPU3ACT_2 = _world.AcknexObject.GetAcknexObject(1509719154);
TROPU3ACT_2.SetFloatAll(204,0f);
DOOR03SND_3 = _world.AcknexObject.GetAcknexObject(1333592649);
OPENFAL01WALL_5 = _world.AcknexObject.GetAcknexObject(2302191587);
_world.PlaySound(DOOR03SND_3,0.3f,OPENFAL01WALL_5);
OPENFAL01WALL_8 = _world.AcknexObject.GetAcknexObject(2302191587);
OPENFAL01WALL_8.SetAcknexObjectAll(192,null);
OPENLOOP:
OPENFAL01WALL_11 = _world.AcknexObject.GetAcknexObject(2302191587);
temp_12 =OPENFAL01WALL_11.GetFloat(270);
if (temp_12 < 68f)
{
return false;
}
OPENFAL01WALL_15 = _world.AcknexObject.GetAcknexObject(2302191587);
temp_16 =OPENFAL01WALL_15.GetFloat(270);
OPENFAL01WALL_18 = _world.AcknexObject.GetAcknexObject(2302191587);
OPENFAL01WALL_18.SetFloat(270,temp_16 + -0.1f);
OPENFAL01WALL_21 = _world.AcknexObject.GetAcknexObject(2302191587);
temp_22 =OPENFAL01WALL_21.GetFloat(272);
OPENFAL01WALL_24 = _world.AcknexObject.GetAcknexObject(2302191587);
OPENFAL01WALL_24.SetFloat(272,temp_22 + -0.1f);
RENDER_MODE_26 = _world.GetObject(ObjectType.Skill,361);
RENDER_MODE_26.SetFloat(231,1f);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)1f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
goto OPENLOOP;
//Unknown keyword: 
      return false;
  }
IAcknexObject TROPU3ACT_2;
IAcknexObject DOOR03SND_3;
IAcknexObject OPENFAL01WALL_5;
IAcknexObject OPENFAL01WALL_8;
IAcknexObject OPENFAL01WALL_11;
float temp_12;
IAcknexObject OPENFAL01WALL_15;
float temp_16;
IAcknexObject OPENFAL01WALL_18;
IAcknexObject OPENFAL01WALL_21;
float temp_22;
IAcknexObject OPENFAL01WALL_24;
IAcknexObject RENDER_MODE_26;
float startTime1;
float endTime1;
}
public class OPENHATCHA : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public OPENHATCHA() {
  }
 public OPENHATCHA(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
DOOR03SND_0 = _world.AcknexObject.GetAcknexObject(1333592649);
OPENFAL01AWALL_2 = _world.AcknexObject.GetAcknexObject(2932534788);
_world.PlaySound(DOOR03SND_0,0.3f,OPENFAL01AWALL_2);
OPENFAL01AWALL_5 = _world.AcknexObject.GetAcknexObject(2932534788);
OPENFAL01AWALL_5.SetAcknexObjectAll(192,null);
OPENLOOP:
OPENFAL01AWALL_8 = _world.AcknexObject.GetAcknexObject(2932534788);
temp_9 =OPENFAL01AWALL_8.GetFloat(269);
if (temp_9 < 319f)
{
return false;
}
OPENFAL01AWALL_12 = _world.AcknexObject.GetAcknexObject(2932534788);
temp_13 =OPENFAL01AWALL_12.GetFloat(269);
OPENFAL01AWALL_15 = _world.AcknexObject.GetAcknexObject(2932534788);
OPENFAL01AWALL_15.SetFloat(269,temp_13 + -0.1f);
OPENFAL01AWALL_18 = _world.AcknexObject.GetAcknexObject(2932534788);
temp_19 =OPENFAL01AWALL_18.GetFloat(271);
OPENFAL01AWALL_21 = _world.AcknexObject.GetAcknexObject(2932534788);
OPENFAL01AWALL_21.SetFloat(271,temp_19 + -0.1f);
RENDER_MODE_23 = _world.GetObject(ObjectType.Skill,361);
RENDER_MODE_23.SetFloat(231,1f);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)1f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
goto OPENLOOP;
//Unknown keyword: 
      return false;
  }
IAcknexObject DOOR03SND_0;
IAcknexObject OPENFAL01AWALL_2;
IAcknexObject OPENFAL01AWALL_5;
IAcknexObject OPENFAL01AWALL_8;
float temp_9;
IAcknexObject OPENFAL01AWALL_12;
float temp_13;
IAcknexObject OPENFAL01AWALL_15;
IAcknexObject OPENFAL01AWALL_18;
float temp_19;
IAcknexObject OPENFAL01AWALL_21;
IAcknexObject RENDER_MODE_23;
float startTime1;
float endTime1;
}
public class OPENHATCHB : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public OPENHATCHB() {
  }
 public OPENHATCHB(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
DOOR03SND_0 = _world.AcknexObject.GetAcknexObject(1333592649);
OPENFAL01BWALL_2 = _world.AcknexObject.GetAcknexObject(2933720709);
_world.PlaySound(DOOR03SND_0,0.3f,OPENFAL01BWALL_2);
OPENFAL01BWALL_5 = _world.AcknexObject.GetAcknexObject(2933720709);
OPENFAL01BWALL_5.SetAcknexObjectAll(192,null);
OPENLOOP:
OPENFAL01BWALL_8 = _world.AcknexObject.GetAcknexObject(2933720709);
temp_9 =OPENFAL01BWALL_8.GetFloat(270);
if (temp_9 < 81f)
{
return false;
}
OPENFAL01BWALL_12 = _world.AcknexObject.GetAcknexObject(2933720709);
temp_13 =OPENFAL01BWALL_12.GetFloat(270);
OPENFAL01BWALL_15 = _world.AcknexObject.GetAcknexObject(2933720709);
OPENFAL01BWALL_15.SetFloat(270,temp_13 + -0.1f);
OPENFAL01BWALL_18 = _world.AcknexObject.GetAcknexObject(2933720709);
temp_19 =OPENFAL01BWALL_18.GetFloat(272);
OPENFAL01BWALL_21 = _world.AcknexObject.GetAcknexObject(2933720709);
OPENFAL01BWALL_21.SetFloat(272,temp_19 + -0.1f);
RENDER_MODE_23 = _world.GetObject(ObjectType.Skill,361);
RENDER_MODE_23.SetFloat(231,1f);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)1f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
goto OPENLOOP;
//Unknown keyword: 
      return false;
  }
IAcknexObject DOOR03SND_0;
IAcknexObject OPENFAL01BWALL_2;
IAcknexObject OPENFAL01BWALL_5;
IAcknexObject OPENFAL01BWALL_8;
float temp_9;
IAcknexObject OPENFAL01BWALL_12;
float temp_13;
IAcknexObject OPENFAL01BWALL_15;
IAcknexObject OPENFAL01BWALL_18;
float temp_19;
IAcknexObject OPENFAL01BWALL_21;
IAcknexObject RENDER_MODE_23;
float startTime1;
float endTime1;
}
public class OPENMJ3 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public OPENMJ3() {
  }
 public OPENMJ3(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
DOOR02SND_0 = _world.AcknexObject.GetAcknexObject(1333556712);
WFB03AWALL_2 = _world.AcknexObject.GetAcknexObject(1123059264);
_world.PlaySound(DOOR02SND_0,0.3f,WFB03AWALL_2);
DOORHANGARRGN_5 = _world.AcknexObject.GetAcknexObject(4004269785);
DOORHANGARRGN_5.SetFloat(201,12f);
KEYOPENFCT01TEX_6 = _world.AcknexObject.GetAcknexObject(3811740599);
MJ3GATEWALL_8 = _world.AcknexObject.GetAcknexObject(1123221928);
MJ3GATEWALL_8.SetAcknexObjectAll(164,KEYOPENFCT01TEX_6);
MJ3GATEWALL_11 = _world.AcknexObject.GetAcknexObject(1123221928);
MJ3GATEWALL_11.SetAcknexObject(192,null);
TROPU4ACT_14 = _world.AcknexObject.GetAcknexObject(1509755091);
TROPU4ACT_14.SetFloatAll(204,0f);
LNCHU4ACT_17 = _world.AcknexObject.GetAcknexObject(1454247731);
LNCHU4ACT_17.SetFloatAll(204,0f);
REPTUACT_20 = _world.AcknexObject.GetAcknexObject(2834846805);
REPTUACT_20.SetFloatAll(204,0f);
NURSUACT_23 = _world.AcknexObject.GetAcknexObject(3425502626);
NURSUACT_23.SetFloatAll(204,0f);
DOCTUACT_26 = _world.AcknexObject.GetAcknexObject(2698116964);
DOCTUACT_26.SetFloatAll(204,0f);
WRN15STR_27 = _world.AcknexObject.GetAcknexObject(667003459);
_world.SetSynonymObject(361798934,WRN15STR_27);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject DOOR02SND_0;
IAcknexObject WFB03AWALL_2;
IAcknexObject DOORHANGARRGN_5;
IAcknexObject KEYOPENFCT01TEX_6;
IAcknexObject MJ3GATEWALL_8;
IAcknexObject MJ3GATEWALL_11;
IAcknexObject TROPU4ACT_14;
IAcknexObject LNCHU4ACT_17;
IAcknexObject REPTUACT_20;
IAcknexObject NURSUACT_23;
IAcknexObject DOCTUACT_26;
IAcknexObject WRN15STR_27;
}
public class OPENBLASTDOOR : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public OPENBLASTDOOR() {
  }
 public OPENBLASTDOOR(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
DOOR02SND_0 = _world.AcknexObject.GetAcknexObject(1333556712);
OPENBLASTDOORWALL_2 = _world.AcknexObject.GetAcknexObject(1298919865);
_world.PlaySound(DOOR02SND_0,0.3f,OPENBLASTDOORWALL_2);
OPENBLASTDOORWALL_5 = _world.AcknexObject.GetAcknexObject(1298919865);
OPENBLASTDOORWALL_5.SetAcknexObject(192,null);
TROPU5ACT_8 = _world.AcknexObject.GetAcknexObject(1509791028);
TROPU5ACT_8.SetFloatAll(204,0f);
OPEN:
BLASTDOORRGN_11 = _world.AcknexObject.GetAcknexObject(269196126);
temp_12 =BLASTDOORRGN_11.GetFloat(201);
BLASTDOORRGN_14 = _world.AcknexObject.GetAcknexObject(269196126);
BLASTDOORRGN_14.SetFloat(201,temp_12 + 0.1f);
RENDER_MODE_16 = _world.GetObject(ObjectType.Skill,361);
RENDER_MODE_16.SetFloat(231,1f);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)1f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
BLASTDOORRGN_20 = _world.AcknexObject.GetAcknexObject(269196126);
temp_21 =BLASTDOORRGN_20.GetFloat(201);
if (temp_21 < 11f)
{
goto OPEN;
}
//Unknown keyword: 
      return false;
  }
IAcknexObject DOOR02SND_0;
IAcknexObject OPENBLASTDOORWALL_2;
IAcknexObject OPENBLASTDOORWALL_5;
IAcknexObject TROPU5ACT_8;
IAcknexObject BLASTDOORRGN_11;
float temp_12;
IAcknexObject BLASTDOORRGN_14;
IAcknexObject RENDER_MODE_16;
float startTime1;
float endTime1;
IAcknexObject BLASTDOORRGN_20;
float temp_21;
}
public class NOTOPEN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public NOTOPEN() {
  }
 public NOTOPEN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
WRN18STR_0 = _world.AcknexObject.GetAcknexObject(667111270);
_world.SetSynonymObject(361798934,WRN18STR_0);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject WRN18STR_0;
}
public class DEFENSE1 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DEFENSE1() {
  }
 public DEFENSE1(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
UDRKL2ACT_2 = _world.AcknexObject.GetAcknexObject(3179334489);
UDRKL2ACT_2.SetFloatAll(204,0f);
POOL2RGN_5 = _world.AcknexObject.GetAcknexObject(3477222656);
POOL2RGN_5.SetAcknexObjectAll(81,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject UDRKL2ACT_2;
IAcknexObject POOL2RGN_5;
}
public class STARTLEVEL : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public STARTLEVEL() {
  }
 public STARTLEVEL(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SCREEN_HGT_1 = _world.GetObject(ObjectType.Skill,352);
SCREEN_HGT_1.SetFloat(231,358f);
SKY_OFFS_Y_3 = _world.GetObject(ObjectType.Skill,358);
SKY_OFFS_Y_3.SetFloat(231,140f);
MAP_SCALE_5 = _world.GetObject(ObjectType.Skill,379);
MAP_SCALE_5.SetFloat(231,5f);
MAP_ROT_7 = _world.GetObject(ObjectType.Skill,382);
MAP_ROT_7.SetFloat(231,1f);
COLOR_PLAYER_9 = _world.GetObject(ObjectType.Skill,383);
COLOR_PLAYER_9.SetFloat(231,101f);
COLOR_ACTORS_11 = _world.GetObject(ObjectType.Skill,384);
COLOR_ACTORS_11.SetFloat(231,164f);
COLOR_THINGS_13 = _world.GetObject(ObjectType.Skill,385);
COLOR_THINGS_13.SetFloat(231,176f);
COLOR_WALLS_15 = _world.GetObject(ObjectType.Skill,386);
COLOR_WALLS_15.SetFloat(231,193f);
COLOR_BORDER_17 = _world.GetObject(ObjectType.Skill,387);
COLOR_BORDER_17.SetFloat(231,195f);
PLAYER_LIGHT_19 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_19.SetFloat(231,0.15f);
ACTOR_CLIMB_21 = _world.GetObject(ObjectType.Skill,451);
ACTOR_CLIMB_21.SetFloat(231,1.5f);
MOTION_BLUR_23 = _world.GetObject(ObjectType.Skill,359);
MOTION_BLUR_23.SetFloat(231,0f);
SECCOUNTER_25 = _world.GetObject(ObjectType.Skill,2748572712);
SECCOUNTER_25.SetFloat(231,0f);
CONTROLMESSAGEDISPLAY_26 = _world.AcknexObject.GetAcknexObject(1473177801);
_world.AcknexObject.SetAcknexObject(21,CONTROLMESSAGEDISPLAY_26);
CONTROLUNDERWATERTIME_29 = _world.AcknexObject.GetAcknexObject(1954955294);
_world.AcknexObject.SetAcknexObject(22,CONTROLUNDERWATERTIME_29);
INFOPANEL_32 = _world.AcknexObject.GetAcknexObject(4029181129);
_world.AcknexObject.SetAcknexObject(144,INFOPANEL_32);
PNLMSKOVL_35 = _world.AcknexObject.GetAcknexObject(3908987603);
_world.AcknexObject.SetAcknexObject(160,PNLMSKOVL_35);
{
            var enumerator = new SET_WALKING();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }DROPPED_39 = _world.GetObject(ObjectType.Skill,994153403);
DROPPED_39.SetFloat(231,0f);
AMMO_41 = _world.GetObject(ObjectType.Skill,2088896983);
AMMO_41.SetFloat(231,0f);
KEY1_43 = _world.GetObject(ObjectType.Skill,2089248007);
KEY1_43.SetFloat(231,2f);
KEY2_45 = _world.GetObject(ObjectType.Skill,2089248008);
KEY2_45.SetFloat(231,2f);
KEY3_47 = _world.GetObject(ObjectType.Skill,2089248009);
KEY3_47.SetFloat(231,2f);
KEY4_49 = _world.GetObject(ObjectType.Skill,2089248010);
KEY4_49.SetFloat(231,2f);
END01STR_50 = _world.AcknexObject.GetAcknexObject(1070587678);
_world.SetSynonymObject(3892409159,END01STR_50);
BRF01STR_52 = _world.AcknexObject.GetAcknexObject(3013452993);
_world.SetSynonymObject(155729303,BRF01STR_52);
LOAD02STR_54 = _world.AcknexObject.GetAcknexObject(2634576744);
_world.SetSynonymObject(1876859747,LOAD02STR_54);
LEVEL02STR_56 = _world.AcknexObject.GetAcknexObject(2696204544);
_world.SetSynonymObject(270057211,LEVEL02STR_56);
INNOCENTS_59 = _world.GetObject(ObjectType.Skill,1460750270);
INNOCENTS_59.SetFloat(231,20f);
UNDERWATER_61 = _world.GetObject(ObjectType.Skill,1369167822);
UNDERWATER_61.SetFloat(231,0f);
PLAYER_ARC_63 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_63.SetFloat(231,1f);
CDTRACK_65 = _world.GetObject(ObjectType.Skill,3455742313);
CDTRACK_65.SetFloat(231,2f);
CDTRACKTIME_67 = _world.GetObject(ObjectType.Skill,4172716664);
CDTRACKTIME_67.SetFloat(231,308f);
PLAYER_HIT_69 = _world.GetObject(ObjectType.Skill,1956124350);
PLAYER_HIT_69.SetFloat(231,0f);
GUN_ON_71 = _world.GetObject(ObjectType.Skill,3014382675);
GUN_ON_71.SetFloat(231,0f);
SHOT_SOUND_ON_73 = _world.GetObject(ObjectType.Skill,3372273679);
SHOT_SOUND_ON_73.SetFloat(231,0f);
EXPLOSION_ON_75 = _world.GetObject(ObjectType.Skill,3352630890);
EXPLOSION_ON_75.SetFloat(231,0f);
MISS14ACT_76 = _world.AcknexObject.GetAcknexObject(346189990);
_world.SetSynonymObject(3680056099,MISS14ACT_76);
ASSAULTSTARTED_79 = _world.GetObject(ObjectType.Skill,3202169889);
ASSAULTSTARTED_79.SetFloat(231,0f);
STARTASSAULT_80 = _world.AcknexObject.GetAcknexObject(692261144);
_world.SetSynonymObject(1697496190,STARTASSAULT_80);
GOLCOUNTER_83 = _world.GetObject(ObjectType.Skill,1317141647);
GOLCOUNTER_83.SetFloat(231,0f);
{
            var enumerator = new STARTASSAULT();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = new FADEIN();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject SCREEN_HGT_1;
IAcknexObject SKY_OFFS_Y_3;
IAcknexObject MAP_SCALE_5;
IAcknexObject MAP_ROT_7;
IAcknexObject COLOR_PLAYER_9;
IAcknexObject COLOR_ACTORS_11;
IAcknexObject COLOR_THINGS_13;
IAcknexObject COLOR_WALLS_15;
IAcknexObject COLOR_BORDER_17;
IAcknexObject PLAYER_LIGHT_19;
IAcknexObject ACTOR_CLIMB_21;
IAcknexObject MOTION_BLUR_23;
IAcknexObject SECCOUNTER_25;
IAcknexObject CONTROLMESSAGEDISPLAY_26;
IAcknexObject CONTROLUNDERWATERTIME_29;
IAcknexObject INFOPANEL_32;
IAcknexObject PNLMSKOVL_35;
IAcknexObject DROPPED_39;
IAcknexObject AMMO_41;
IAcknexObject KEY1_43;
IAcknexObject KEY2_45;
IAcknexObject KEY3_47;
IAcknexObject KEY4_49;
IAcknexObject END01STR_50;
IAcknexObject BRF01STR_52;
IAcknexObject LOAD02STR_54;
IAcknexObject LEVEL02STR_56;
IAcknexObject INNOCENTS_59;
IAcknexObject UNDERWATER_61;
IAcknexObject PLAYER_ARC_63;
IAcknexObject CDTRACK_65;
IAcknexObject CDTRACKTIME_67;
IAcknexObject PLAYER_HIT_69;
IAcknexObject GUN_ON_71;
IAcknexObject SHOT_SOUND_ON_73;
IAcknexObject EXPLOSION_ON_75;
IAcknexObject MISS14ACT_76;
IAcknexObject ASSAULTSTARTED_79;
IAcknexObject STARTASSAULT_80;
IAcknexObject GOLCOUNTER_83;
}
public class LAUNCHMISSILES : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LAUNCHMISSILES() {
  }
 public LAUNCHMISSILES(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
     }
MISSILE_2 = _world.GetSynonymObject(3680056099);
MISSILE_2.SetFloat(213,1f);
MISSILE_5 = _world.GetSynonymObject(3680056099);
MISSILE_5.SetFloat(168,4f);
MISSILE_7 = _world.GetSynonymObject(3680056099);
MISSILE_9 = _world.GetSynonymObject(3680056099);
temp_10 =MISSILE_9.GetFloat(195);
MISSILE_7.SetFloat(195,-170f);
MISSILE_14 = _world.GetSynonymObject(3680056099);
MISSILE_16 = _world.GetSynonymObject(3680056099);
temp_17 =MISSILE_16.GetFloat(196);
MISSILE_14.SetFloat(196,180f);
MISSILE_20 = _world.GetSynonymObject(3680056099);
MISSILE_22 = _world.GetSynonymObject(3680056099);
temp_23 =MISSILE_22.GetFloat(165);
MISSILE_20.SetFloat(165,5f);
MISSILE_27 = _world.GetSynonymObject(3680056099);
MISSILE_27.SetFloat(217,-30f);
MISSILE_30 = _world.GetSynonymObject(3680056099);
MISSILE_30.SetFloat(218,57f);
MISS1TEX_31 = _world.AcknexObject.GetAcknexObject(1181881291);
MISSILE_33 = _world.GetSynonymObject(3680056099);
MISSILE_33.SetAcknexObject(164,MISS1TEX_31);
EXPLODEMISSILE_34 = _world.AcknexObject.GetAcknexObject(3869018100);
MISSILE_36 = _world.GetSynonymObject(3680056099);
MISSILE_36.SetAcknexObject(191,EXPLODEMISSILE_34);
EXPLODEMISSILE_37 = _world.AcknexObject.GetAcknexObject(3869018100);
MISSILE_39 = _world.GetSynonymObject(3680056099);
MISSILE_39.SetAcknexObject(209,EXPLODEMISSILE_37);
PLAYER_ANGLE_40 = _world.GetObject(ObjectType.Skill,462);
PLAYER_ANGLE_40_val = PLAYER_ANGLE_40.GetFloat(PropertyName.VAL);
MISSILE_42 = _world.GetSynonymObject(3680056099);
MISSILE_42.SetFloat(194,PLAYER_ANGLE_40_val);
VERTEX_43 = _world.AcknexObject.GetAcknexObject(3582570283);
MISSILE_45 = _world.GetSynonymObject(3680056099);
MISSILE_45.SetAcknexObject(199,VERTEX_43);
MISSILE_48 = _world.GetSynonymObject(3680056099);
MISSILE_48.SetFloat(204,0f);
WAITING:

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)16f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MISSILE_52 = _world.GetSynonymObject(3680056099);
temp_53 =MISSILE_52.GetFloat(204);
if (temp_53 < 1f)
{
goto WAITING;
}
MISSILE_56 = _world.GetSynonymObject(3680056099);
MISSILE_56.SetFloat(213,1f);
MISSILE_59 = _world.GetSynonymObject(3680056099);
MISSILE_59.SetFloat(168,4f);
MISSILE_61 = _world.GetSynonymObject(3680056099);
MISSILE_63 = _world.GetSynonymObject(3680056099);
temp_64 =MISSILE_63.GetFloat(195);
MISSILE_61.SetFloat(195,-150f);
MISSILE_68 = _world.GetSynonymObject(3680056099);
MISSILE_70 = _world.GetSynonymObject(3680056099);
temp_71 =MISSILE_70.GetFloat(196);
MISSILE_68.SetFloat(196,50f);
MISSILE_74 = _world.GetSynonymObject(3680056099);
MISSILE_76 = _world.GetSynonymObject(3680056099);
temp_77 =MISSILE_76.GetFloat(165);
MISSILE_74.SetFloat(165,5f);
MISSILE_81 = _world.GetSynonymObject(3680056099);
MISSILE_81.SetFloat(217,-100f);
MISSILE_84 = _world.GetSynonymObject(3680056099);
MISSILE_84.SetFloat(218,0f);
MISS1TEX_85 = _world.AcknexObject.GetAcknexObject(1181881291);
MISSILE_87 = _world.GetSynonymObject(3680056099);
MISSILE_87.SetAcknexObject(164,MISS1TEX_85);
EXPLODEMISSILE_88 = _world.AcknexObject.GetAcknexObject(3869018100);
MISSILE_90 = _world.GetSynonymObject(3680056099);
MISSILE_90.SetAcknexObject(191,EXPLODEMISSILE_88);
EXPLODEMISSILE_91 = _world.AcknexObject.GetAcknexObject(3869018100);
MISSILE_93 = _world.GetSynonymObject(3680056099);
MISSILE_93.SetAcknexObject(209,EXPLODEMISSILE_91);
PLAYER_ANGLE_94 = _world.GetObject(ObjectType.Skill,462);
PLAYER_ANGLE_94_val = PLAYER_ANGLE_94.GetFloat(PropertyName.VAL);
MISSILE_96 = _world.GetSynonymObject(3680056099);
MISSILE_96.SetFloat(194,PLAYER_ANGLE_94_val);
VERTEX_97 = _world.AcknexObject.GetAcknexObject(3582570283);
MISSILE_99 = _world.GetSynonymObject(3680056099);
MISSILE_99.SetAcknexObject(199,VERTEX_97);
MISSILE_102 = _world.GetSynonymObject(3680056099);
MISSILE_102.SetFloat(204,0f);
WAITING1:

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.FramesToTime((int)16f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MISSILE_106 = _world.GetSynonymObject(3680056099);
temp_107 =MISSILE_106.GetFloat(204);
if (temp_107 < 1f)
{
goto WAITING1;
}
MISSILE_110 = _world.GetSynonymObject(3680056099);
MISSILE_110.SetFloat(213,1f);
MISSILE_113 = _world.GetSynonymObject(3680056099);
MISSILE_113.SetFloat(168,4f);
MISSILE_115 = _world.GetSynonymObject(3680056099);
MISSILE_117 = _world.GetSynonymObject(3680056099);
temp_118 =MISSILE_117.GetFloat(195);
MISSILE_115.SetFloat(195,-50f);
MISSILE_122 = _world.GetSynonymObject(3680056099);
MISSILE_124 = _world.GetSynonymObject(3680056099);
temp_125 =MISSILE_124.GetFloat(196);
MISSILE_122.SetFloat(196,0f);
MISSILE_128 = _world.GetSynonymObject(3680056099);
MISSILE_130 = _world.GetSynonymObject(3680056099);
temp_131 =MISSILE_130.GetFloat(165);
MISSILE_128.SetFloat(165,5f);
MISSILE_135 = _world.GetSynonymObject(3680056099);
MISSILE_135.SetFloat(217,-10f);
MISSILE_138 = _world.GetSynonymObject(3680056099);
MISSILE_138.SetFloat(218,0f);
MISS1TEX_139 = _world.AcknexObject.GetAcknexObject(1181881291);
MISSILE_141 = _world.GetSynonymObject(3680056099);
MISSILE_141.SetAcknexObject(164,MISS1TEX_139);
EXPLODEMISSILE_142 = _world.AcknexObject.GetAcknexObject(3869018100);
MISSILE_144 = _world.GetSynonymObject(3680056099);
MISSILE_144.SetAcknexObject(191,EXPLODEMISSILE_142);
EXPLODEMISSILE_145 = _world.AcknexObject.GetAcknexObject(3869018100);
MISSILE_147 = _world.GetSynonymObject(3680056099);
MISSILE_147.SetAcknexObject(209,EXPLODEMISSILE_145);
PLAYER_ANGLE_148 = _world.GetObject(ObjectType.Skill,462);
PLAYER_ANGLE_148_val = PLAYER_ANGLE_148.GetFloat(PropertyName.VAL);
MISSILE_150 = _world.GetSynonymObject(3680056099);
MISSILE_150.SetFloat(194,PLAYER_ANGLE_148_val);
VERTEX_151 = _world.AcknexObject.GetAcknexObject(3582570283);
MISSILE_153 = _world.GetSynonymObject(3680056099);
MISSILE_153.SetAcknexObject(199,VERTEX_151);
MISSILE_156 = _world.GetSynonymObject(3680056099);
MISSILE_156.SetFloat(204,0f);
WRN17STR_157 = _world.AcknexObject.GetAcknexObject(667075333);
_world.SetSynonymObject(361798934,WRN17STR_157);
{
            var enumerator = new DISPLAYMESSAGE();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }SHOT_SOUND_ON_160 = _world.GetObject(ObjectType.Skill,3372273679);
SHOT_SOUND_ON_160.SetFloat(231,1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MISSILE_2;
IAcknexObject MISSILE_5;
IAcknexObject MISSILE_7;
IAcknexObject MISSILE_9;
float temp_10;
IAcknexObject MISSILE_14;
IAcknexObject MISSILE_16;
float temp_17;
IAcknexObject MISSILE_20;
IAcknexObject MISSILE_22;
float temp_23;
IAcknexObject MISSILE_27;
IAcknexObject MISSILE_30;
IAcknexObject MISS1TEX_31;
IAcknexObject MISSILE_33;
IAcknexObject EXPLODEMISSILE_34;
IAcknexObject MISSILE_36;
IAcknexObject EXPLODEMISSILE_37;
IAcknexObject MISSILE_39;
IAcknexObject PLAYER_ANGLE_40;
float PLAYER_ANGLE_40_val;
IAcknexObject MISSILE_42;
IAcknexObject VERTEX_43;
IAcknexObject MISSILE_45;
IAcknexObject MISSILE_48;
float startTime1;
float endTime1;
IAcknexObject MISSILE_52;
float temp_53;
IAcknexObject MISSILE_56;
IAcknexObject MISSILE_59;
IAcknexObject MISSILE_61;
IAcknexObject MISSILE_63;
float temp_64;
IAcknexObject MISSILE_68;
IAcknexObject MISSILE_70;
float temp_71;
IAcknexObject MISSILE_74;
IAcknexObject MISSILE_76;
float temp_77;
IAcknexObject MISSILE_81;
IAcknexObject MISSILE_84;
IAcknexObject MISS1TEX_85;
IAcknexObject MISSILE_87;
IAcknexObject EXPLODEMISSILE_88;
IAcknexObject MISSILE_90;
IAcknexObject EXPLODEMISSILE_91;
IAcknexObject MISSILE_93;
IAcknexObject PLAYER_ANGLE_94;
float PLAYER_ANGLE_94_val;
IAcknexObject MISSILE_96;
IAcknexObject VERTEX_97;
IAcknexObject MISSILE_99;
IAcknexObject MISSILE_102;
float startTime2;
float endTime2;
IAcknexObject MISSILE_106;
float temp_107;
IAcknexObject MISSILE_110;
IAcknexObject MISSILE_113;
IAcknexObject MISSILE_115;
IAcknexObject MISSILE_117;
float temp_118;
IAcknexObject MISSILE_122;
IAcknexObject MISSILE_124;
float temp_125;
IAcknexObject MISSILE_128;
IAcknexObject MISSILE_130;
float temp_131;
IAcknexObject MISSILE_135;
IAcknexObject MISSILE_138;
IAcknexObject MISS1TEX_139;
IAcknexObject MISSILE_141;
IAcknexObject EXPLODEMISSILE_142;
IAcknexObject MISSILE_144;
IAcknexObject EXPLODEMISSILE_145;
IAcknexObject MISSILE_147;
IAcknexObject PLAYER_ANGLE_148;
float PLAYER_ANGLE_148_val;
IAcknexObject MISSILE_150;
IAcknexObject VERTEX_151;
IAcknexObject MISSILE_153;
IAcknexObject MISSILE_156;
IAcknexObject WRN17STR_157;
IAcknexObject SHOT_SOUND_ON_160;
}
public class STARTASSAULT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public STARTASSAULT() {
  }
 public STARTASSAULT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
ASSAULTSTARTED_1 = _world.GetObject(ObjectType.Skill,3202169889);
ASSAULTSTARTED_1_val = ASSAULTSTARTED_1.GetFloat(PropertyName.VAL);
if (ASSAULTSTARTED_1_val > 0f)
{
return false;
}
//Unknown keyword: 
      return false;
  }
IAcknexObject ASSAULTSTARTED_1;
float ASSAULTSTARTED_1_val;
}
public class FADEIN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public FADEIN() {
  }
 public FADEIN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
            case 2:
                goto _coroutine2;
            case 3:
                goto _coroutine3;
            case 4:
                goto _coroutine4;
            case 5:
                goto _coroutine5;
            case 6:
                goto _coroutine6;
            case 7:
                goto _coroutine7;
            case 8:
                goto _coroutine8;
            case 9:
                goto _coroutine9;
            case 10:
                goto _coroutine10;
            case 11:
                goto _coroutine11;
            case 12:
                goto _coroutine12;
            case 13:
                goto _coroutine13;
            case 14:
                goto _coroutine14;
            case 15:
                goto _coroutine15;
            case 16:
                goto _coroutine16;
            case 17:
                goto _coroutine17;
            case 18:
                goto _coroutine18;
            case 19:
                goto _coroutine19;
            case 20:
                goto _coroutine20;
     }
BLACK_0 = _world.AcknexObject.GetAcknexObject(215228298);
_world.FadePal(BLACK_0,2f);

            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)8f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PAL1_3 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_3,0.05f);

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.FramesToTime((int)1f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PAL1_6 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_6,0.1f);

            startTime3 = Time.time;
            endTime3 = startTime3 + TimeUtils.FramesToTime((int)1f);
            _cursor = 3;
            _coroutine3:
            while (Time.time  < endTime3)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PAL1_9 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_9,0.15f);

            startTime4 = Time.time;
            endTime4 = startTime4 + TimeUtils.FramesToTime((int)1f);
            _cursor = 4;
            _coroutine4:
            while (Time.time  < endTime4)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PAL1_12 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_12,0.2f);

            startTime5 = Time.time;
            endTime5 = startTime5 + TimeUtils.FramesToTime((int)1f);
            _cursor = 5;
            _coroutine5:
            while (Time.time  < endTime5)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PAL1_15 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_15,0.25f);

            startTime6 = Time.time;
            endTime6 = startTime6 + TimeUtils.FramesToTime((int)1f);
            _cursor = 6;
            _coroutine6:
            while (Time.time  < endTime6)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PAL1_18 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_18,0.3f);

            startTime7 = Time.time;
            endTime7 = startTime7 + TimeUtils.FramesToTime((int)1f);
            _cursor = 7;
            _coroutine7:
            while (Time.time  < endTime7)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PAL1_21 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_21,0.35f);

            startTime8 = Time.time;
            endTime8 = startTime8 + TimeUtils.FramesToTime((int)1f);
            _cursor = 8;
            _coroutine8:
            while (Time.time  < endTime8)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PAL1_24 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_24,0.4f);

            startTime9 = Time.time;
            endTime9 = startTime9 + TimeUtils.FramesToTime((int)1f);
            _cursor = 9;
            _coroutine9:
            while (Time.time  < endTime9)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PAL1_27 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_27,0.45f);

            startTime10 = Time.time;
            endTime10 = startTime10 + TimeUtils.FramesToTime((int)1f);
            _cursor = 10;
            _coroutine10:
            while (Time.time  < endTime10)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PAL1_30 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_30,0.5f);

            startTime11 = Time.time;
            endTime11 = startTime11 + TimeUtils.FramesToTime((int)1f);
            _cursor = 11;
            _coroutine11:
            while (Time.time  < endTime11)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PAL1_33 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_33,0.55f);

            startTime12 = Time.time;
            endTime12 = startTime12 + TimeUtils.FramesToTime((int)1f);
            _cursor = 12;
            _coroutine12:
            while (Time.time  < endTime12)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PAL1_36 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_36,0.6f);

            startTime13 = Time.time;
            endTime13 = startTime13 + TimeUtils.FramesToTime((int)1f);
            _cursor = 13;
            _coroutine13:
            while (Time.time  < endTime13)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PAL1_39 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_39,0.65f);

            startTime14 = Time.time;
            endTime14 = startTime14 + TimeUtils.FramesToTime((int)1f);
            _cursor = 14;
            _coroutine14:
            while (Time.time  < endTime14)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PAL1_42 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_42,0.7f);

            startTime15 = Time.time;
            endTime15 = startTime15 + TimeUtils.FramesToTime((int)1f);
            _cursor = 15;
            _coroutine15:
            while (Time.time  < endTime15)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PAL1_45 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_45,0.75f);

            startTime16 = Time.time;
            endTime16 = startTime16 + TimeUtils.FramesToTime((int)1f);
            _cursor = 16;
            _coroutine16:
            while (Time.time  < endTime16)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PAL1_48 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_48,0.8f);

            startTime17 = Time.time;
            endTime17 = startTime17 + TimeUtils.FramesToTime((int)1f);
            _cursor = 17;
            _coroutine17:
            while (Time.time  < endTime17)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PAL1_51 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_51,0.85f);

            startTime18 = Time.time;
            endTime18 = startTime18 + TimeUtils.FramesToTime((int)1f);
            _cursor = 18;
            _coroutine18:
            while (Time.time  < endTime18)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PAL1_54 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_54,0.9f);

            startTime19 = Time.time;
            endTime19 = startTime19 + TimeUtils.FramesToTime((int)1f);
            _cursor = 19;
            _coroutine19:
            while (Time.time  < endTime19)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PAL1_57 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_57,0.95f);

            startTime20 = Time.time;
            endTime20 = startTime20 + TimeUtils.FramesToTime((int)1f);
            _cursor = 20;
            _coroutine20:
            while (Time.time  < endTime20)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
PAL1_60 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_60,2f);
REPEATMUSIC_62 = _world.AcknexObject.GetAcknexObject(598921487);
_world.AcknexObject.SetAcknexObject(20,REPEATMUSIC_62);
//Unknown keyword: 
      return false;
  }
IAcknexObject BLACK_0;
float startTime1;
float endTime1;
IAcknexObject PAL1_3;
float startTime2;
float endTime2;
IAcknexObject PAL1_6;
float startTime3;
float endTime3;
IAcknexObject PAL1_9;
float startTime4;
float endTime4;
IAcknexObject PAL1_12;
float startTime5;
float endTime5;
IAcknexObject PAL1_15;
float startTime6;
float endTime6;
IAcknexObject PAL1_18;
float startTime7;
float endTime7;
IAcknexObject PAL1_21;
float startTime8;
float endTime8;
IAcknexObject PAL1_24;
float startTime9;
float endTime9;
IAcknexObject PAL1_27;
float startTime10;
float endTime10;
IAcknexObject PAL1_30;
float startTime11;
float endTime11;
IAcknexObject PAL1_33;
float startTime12;
float endTime12;
IAcknexObject PAL1_36;
float startTime13;
float endTime13;
IAcknexObject PAL1_39;
float startTime14;
float endTime14;
IAcknexObject PAL1_42;
float startTime15;
float endTime15;
IAcknexObject PAL1_45;
float startTime16;
float endTime16;
IAcknexObject PAL1_48;
float startTime17;
float endTime17;
IAcknexObject PAL1_51;
float startTime18;
float endTime18;
IAcknexObject PAL1_54;
float startTime19;
float endTime19;
IAcknexObject PAL1_57;
float startTime20;
float endTime20;
IAcknexObject PAL1_60;
IAcknexObject REPEATMUSIC_62;
}
    }
}
