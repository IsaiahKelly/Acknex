
        using System;
        using Common;
        using Acknex.Interfaces;
        using System.Collections;
        using System.Collections.Generic;
        using UnityEngine;
        using Random = UnityEngine.Random;
        using PropertyName = Acknex.Interfaces.PropertyName;
        namespace Game {
            public class VRDEMO : IAcknexRuntime {
                private IAcknexWorld _world;
                public void SetWorld(IAcknexWorld world) {
                    _world = world;
                }
        //
                private Dictionary<string, Type> _callbacks = new Dictionary<string, Type>();
                public IEnumerator CallAction(string name, IAcknexObject MY, IAcknexObject THERE)
                {
                    reset:
                    if (name != null) {
                        if (_callbacks.TryGetValue(name, out var callback)) {
                            var enumerator = (ICompiledAction)CoroutinePool.Get(callback);
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
                    }public VRDEMO() {_callbacks.Add("INIT_MOVE", typeof(INIT_MOVE));
CoroutinePool.TryToRegister<INIT_MOVE>(out _, out _);
_callbacks.Add("MOVE_ME", typeof(MOVE_ME));
CoroutinePool.TryToRegister<MOVE_ME>(out _, out _);
_callbacks.Add("SET_WALKING", typeof(SET_WALKING));
CoroutinePool.TryToRegister<SET_WALKING>(out _, out _);
_callbacks.Add("SET_SWIMMING", typeof(SET_SWIMMING));
CoroutinePool.TryToRegister<SET_SWIMMING>(out _, out _);
_callbacks.Add("SET_DIVING", typeof(SET_DIVING));
CoroutinePool.TryToRegister<SET_DIVING>(out _, out _);
_callbacks.Add("SET_MOVING", typeof(SET_MOVING));
CoroutinePool.TryToRegister<SET_MOVING>(out _, out _);
_callbacks.Add("STOP_MOVING", typeof(STOP_MOVING));
CoroutinePool.TryToRegister<STOP_MOVING>(out _, out _);
_callbacks.Add("SET_BLUE", typeof(SET_BLUE));
CoroutinePool.TryToRegister<SET_BLUE>(out _, out _);
_callbacks.Add("RESET_BLUE", typeof(RESET_BLUE));
CoroutinePool.TryToRegister<RESET_BLUE>(out _, out _);
_callbacks.Add("REGIO_DIVE", typeof(REGIO_DIVE));
CoroutinePool.TryToRegister<REGIO_DIVE>(out _, out _);
_callbacks.Add("REGIO_ARISE", typeof(REGIO_ARISE));
CoroutinePool.TryToRegister<REGIO_ARISE>(out _, out _);
_callbacks.Add("START_QUAKE", typeof(START_QUAKE));
CoroutinePool.TryToRegister<START_QUAKE>(out _, out _);
_callbacks.Add("QUAKE", typeof(QUAKE));
CoroutinePool.TryToRegister<QUAKE>(out _, out _);
_callbacks.Add("TUNIX", typeof(TUNIX));
CoroutinePool.TryToRegister<TUNIX>(out _, out _);
_callbacks.Add("SET_MENU", typeof(SET_MENU));
CoroutinePool.TryToRegister<SET_MENU>(out _, out _);
_callbacks.Add("SHOW_MENU", typeof(SHOW_MENU));
CoroutinePool.TryToRegister<SHOW_MENU>(out _, out _);
_callbacks.Add("CLEAR_MENU", typeof(CLEAR_MENU));
CoroutinePool.TryToRegister<CLEAR_MENU>(out _, out _);
_callbacks.Add("MENU_UP", typeof(MENU_UP));
CoroutinePool.TryToRegister<MENU_UP>(out _, out _);
_callbacks.Add("MENU_DOWN", typeof(MENU_DOWN));
CoroutinePool.TryToRegister<MENU_DOWN>(out _, out _);
_callbacks.Add("MENU_EXEC", typeof(MENU_EXEC));
CoroutinePool.TryToRegister<MENU_EXEC>(out _, out _);
_callbacks.Add("SHOW_MESSAGE", typeof(SHOW_MESSAGE));
CoroutinePool.TryToRegister<SHOW_MESSAGE>(out _, out _);
_callbacks.Add("WAIT_YESNO", typeof(WAIT_YESNO));
CoroutinePool.TryToRegister<WAIT_YESNO>(out _, out _);
_callbacks.Add("CLEAR_YESNO", typeof(CLEAR_YESNO));
CoroutinePool.TryToRegister<CLEAR_YESNO>(out _, out _);
_callbacks.Add("SAVE_GAME", typeof(SAVE_GAME));
CoroutinePool.TryToRegister<SAVE_GAME>(out _, out _);
_callbacks.Add("LOAD_GAME", typeof(LOAD_GAME));
CoroutinePool.TryToRegister<LOAD_GAME>(out _, out _);
_callbacks.Add("SAVE_QUICK", typeof(SAVE_QUICK));
CoroutinePool.TryToRegister<SAVE_QUICK>(out _, out _);
_callbacks.Add("LOAD_QUICK", typeof(LOAD_QUICK));
CoroutinePool.TryToRegister<LOAD_QUICK>(out _, out _);
_callbacks.Add("LOAD_STATUS", typeof(LOAD_STATUS));
CoroutinePool.TryToRegister<LOAD_STATUS>(out _, out _);
_callbacks.Add("EXIT_YESNO", typeof(EXIT_YESNO));
CoroutinePool.TryToRegister<EXIT_YESNO>(out _, out _);
_callbacks.Add("EXIT_GAME", typeof(EXIT_GAME));
CoroutinePool.TryToRegister<EXIT_GAME>(out _, out _);
_callbacks.Add("TOGGLE_MAP", typeof(TOGGLE_MAP));
CoroutinePool.TryToRegister<TOGGLE_MAP>(out _, out _);
_callbacks.Add("MSCALE_PLUS", typeof(MSCALE_PLUS));
CoroutinePool.TryToRegister<MSCALE_PLUS>(out _, out _);
_callbacks.Add("MSCALE_MINUS", typeof(MSCALE_MINUS));
CoroutinePool.TryToRegister<MSCALE_MINUS>(out _, out _);
_callbacks.Add("TOGGLE_MBLUR", typeof(TOGGLE_MBLUR));
CoroutinePool.TryToRegister<TOGGLE_MBLUR>(out _, out _);
_callbacks.Add("INCREASE_VOL", typeof(INCREASE_VOL));
CoroutinePool.TryToRegister<INCREASE_VOL>(out _, out _);
_callbacks.Add("DECREASE_VOL", typeof(DECREASE_VOL));
CoroutinePool.TryToRegister<DECREASE_VOL>(out _, out _);
_callbacks.Add("SHOW_OPTIONS", typeof(SHOW_OPTIONS));
CoroutinePool.TryToRegister<SHOW_OPTIONS>(out _, out _);
_callbacks.Add("MAIN_MENU", typeof(MAIN_MENU));
CoroutinePool.TryToRegister<MAIN_MENU>(out _, out _);
_callbacks.Add("DIFF_MENU", typeof(DIFF_MENU));
CoroutinePool.TryToRegister<DIFF_MENU>(out _, out _);
_callbacks.Add("LEVEL_MENU", typeof(LEVEL_MENU));
CoroutinePool.TryToRegister<LEVEL_MENU>(out _, out _);
_callbacks.Add("SAVE_MENU", typeof(SAVE_MENU));
CoroutinePool.TryToRegister<SAVE_MENU>(out _, out _);
_callbacks.Add("LOAD_MENU", typeof(LOAD_MENU));
CoroutinePool.TryToRegister<LOAD_MENU>(out _, out _);
_callbacks.Add("SAVE_NAME1", typeof(SAVE_NAME1));
CoroutinePool.TryToRegister<SAVE_NAME1>(out _, out _);
_callbacks.Add("SAVE_NAME2", typeof(SAVE_NAME2));
CoroutinePool.TryToRegister<SAVE_NAME2>(out _, out _);
_callbacks.Add("SAVE_NAME3", typeof(SAVE_NAME3));
CoroutinePool.TryToRegister<SAVE_NAME3>(out _, out _);
_callbacks.Add("SAVE_NAME4", typeof(SAVE_NAME4));
CoroutinePool.TryToRegister<SAVE_NAME4>(out _, out _);
_callbacks.Add("SAVE_NAME5", typeof(SAVE_NAME5));
CoroutinePool.TryToRegister<SAVE_NAME5>(out _, out _);
_callbacks.Add("LOAD_NAME1", typeof(LOAD_NAME1));
CoroutinePool.TryToRegister<LOAD_NAME1>(out _, out _);
_callbacks.Add("LOAD_NAME2", typeof(LOAD_NAME2));
CoroutinePool.TryToRegister<LOAD_NAME2>(out _, out _);
_callbacks.Add("LOAD_NAME3", typeof(LOAD_NAME3));
CoroutinePool.TryToRegister<LOAD_NAME3>(out _, out _);
_callbacks.Add("LOAD_NAME4", typeof(LOAD_NAME4));
CoroutinePool.TryToRegister<LOAD_NAME4>(out _, out _);
_callbacks.Add("LOAD_NAME5", typeof(LOAD_NAME5));
CoroutinePool.TryToRegister<LOAD_NAME5>(out _, out _);
_callbacks.Add("SET_DIFF1", typeof(SET_DIFF1));
CoroutinePool.TryToRegister<SET_DIFF1>(out _, out _);
_callbacks.Add("SET_DIFF2", typeof(SET_DIFF2));
CoroutinePool.TryToRegister<SET_DIFF2>(out _, out _);
_callbacks.Add("SET_DIFF3", typeof(SET_DIFF3));
CoroutinePool.TryToRegister<SET_DIFF3>(out _, out _);
_callbacks.Add("SET_DIFF4", typeof(SET_DIFF4));
CoroutinePool.TryToRegister<SET_DIFF4>(out _, out _);
_callbacks.Add("START_LEVEL1", typeof(START_LEVEL1));
CoroutinePool.TryToRegister<START_LEVEL1>(out _, out _);
_callbacks.Add("START_LEVEL2", typeof(START_LEVEL2));
CoroutinePool.TryToRegister<START_LEVEL2>(out _, out _);
_callbacks.Add("START_LEVEL3", typeof(START_LEVEL3));
CoroutinePool.TryToRegister<START_LEVEL3>(out _, out _);
_callbacks.Add("START_LEVEL4", typeof(START_LEVEL4));
CoroutinePool.TryToRegister<START_LEVEL4>(out _, out _);
_callbacks.Add("START_LEVEL5", typeof(START_LEVEL5));
CoroutinePool.TryToRegister<START_LEVEL5>(out _, out _);
_callbacks.Add("INIT_GLOBALS", typeof(INIT_GLOBALS));
CoroutinePool.TryToRegister<INIT_GLOBALS>(out _, out _);
_callbacks.Add("UPDATE_DBPANEL", typeof(UPDATE_DBPANEL));
CoroutinePool.TryToRegister<UPDATE_DBPANEL>(out _, out _);
_callbacks.Add("SET_DEBUG", typeof(SET_DEBUG));
CoroutinePool.TryToRegister<SET_DEBUG>(out _, out _);
_callbacks.Add("SET_ADJUST", typeof(SET_ADJUST));
CoroutinePool.TryToRegister<SET_ADJUST>(out _, out _);
_callbacks.Add("GET_ADJX", typeof(GET_ADJX));
CoroutinePool.TryToRegister<GET_ADJX>(out _, out _);
_callbacks.Add("GET_ADJY", typeof(GET_ADJY));
CoroutinePool.TryToRegister<GET_ADJY>(out _, out _);
_callbacks.Add("SET_ADJX", typeof(SET_ADJX));
CoroutinePool.TryToRegister<SET_ADJX>(out _, out _);
_callbacks.Add("SET_ADJY", typeof(SET_ADJY));
CoroutinePool.TryToRegister<SET_ADJY>(out _, out _);
_callbacks.Add("ADJUST_XPLUS", typeof(ADJUST_XPLUS));
CoroutinePool.TryToRegister<ADJUST_XPLUS>(out _, out _);
_callbacks.Add("ADJUST_XMINUS", typeof(ADJUST_XMINUS));
CoroutinePool.TryToRegister<ADJUST_XMINUS>(out _, out _);
_callbacks.Add("ADJUST_YPLUS", typeof(ADJUST_YPLUS));
CoroutinePool.TryToRegister<ADJUST_YPLUS>(out _, out _);
_callbacks.Add("ADJUST_YMINUS", typeof(ADJUST_YMINUS));
CoroutinePool.TryToRegister<ADJUST_YMINUS>(out _, out _);
_callbacks.Add("SET_WMODE", typeof(SET_WMODE));
CoroutinePool.TryToRegister<SET_WMODE>(out _, out _);
_callbacks.Add("SET_FMODE", typeof(SET_FMODE));
CoroutinePool.TryToRegister<SET_FMODE>(out _, out _);
_callbacks.Add("SET_CMODE", typeof(SET_CMODE));
CoroutinePool.TryToRegister<SET_CMODE>(out _, out _);
_callbacks.Add("SET_RMODE", typeof(SET_RMODE));
CoroutinePool.TryToRegister<SET_RMODE>(out _, out _);
_callbacks.Add("SET_VMODE", typeof(SET_VMODE));
CoroutinePool.TryToRegister<SET_VMODE>(out _, out _);
_callbacks.Add("SET_AMODE", typeof(SET_AMODE));
CoroutinePool.TryToRegister<SET_AMODE>(out _, out _);
_callbacks.Add("SET_SMODE", typeof(SET_SMODE));
CoroutinePool.TryToRegister<SET_SMODE>(out _, out _);
_callbacks.Add("SET_BMODE", typeof(SET_BMODE));
CoroutinePool.TryToRegister<SET_BMODE>(out _, out _);
_callbacks.Add("FADE_IN", typeof(FADE_IN));
CoroutinePool.TryToRegister<FADE_IN>(out _, out _);
_callbacks.Add("FADE_OUT", typeof(FADE_OUT));
CoroutinePool.TryToRegister<FADE_OUT>(out _, out _);
_callbacks.Add("VRDEMO_START", typeof(VRDEMO_START));
CoroutinePool.TryToRegister<VRDEMO_START>(out _, out _);
_callbacks.Add("ENTER_WATER", typeof(ENTER_WATER));
CoroutinePool.TryToRegister<ENTER_WATER>(out _, out _);
_callbacks.Add("LEAVE_WATER", typeof(LEAVE_WATER));
CoroutinePool.TryToRegister<LEAVE_WATER>(out _, out _);
_callbacks.Add("DIVE_UP", typeof(DIVE_UP));
CoroutinePool.TryToRegister<DIVE_UP>(out _, out _);
_callbacks.Add("PULSUP", typeof(PULSUP));
CoroutinePool.TryToRegister<PULSUP>(out _, out _);
_callbacks.Add("PULSDOWN", typeof(PULSDOWN));
CoroutinePool.TryToRegister<PULSDOWN>(out _, out _);
_callbacks.Add("FALLTUER", typeof(FALLTUER));
CoroutinePool.TryToRegister<FALLTUER>(out _, out _);
_callbacks.Add("ARSCHTRITT", typeof(ARSCHTRITT));
CoroutinePool.TryToRegister<ARSCHTRITT>(out _, out _);
_callbacks.Add("LIFT_DOWN", typeof(LIFT_DOWN));
CoroutinePool.TryToRegister<LIFT_DOWN>(out _, out _);
_callbacks.Add("LIFT_UP", typeof(LIFT_UP));
CoroutinePool.TryToRegister<LIFT_UP>(out _, out _);
_callbacks.Add("CHECK_OPEN", typeof(CHECK_OPEN));
CoroutinePool.TryToRegister<CHECK_OPEN>(out _, out _);
_callbacks.Add("OPENDOOR", typeof(OPENDOOR));
CoroutinePool.TryToRegister<OPENDOOR>(out _, out _);
_callbacks.Add("IST_OPEN", typeof(IST_OPEN));
CoroutinePool.TryToRegister<IST_OPEN>(out _, out _);
_callbacks.Add("AUFGEH", typeof(AUFGEH));
CoroutinePool.TryToRegister<AUFGEH>(out _, out _);
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
            var enumerator = CoroutinePool.Get<SET_MOVING>();
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
if (Game.CheckEquals(MOVING_1_val , MODE_GEHEN_0_val))
{
PLAYER_SIZE_2 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_3 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_3_val = PLAYER_SIZE_3.GetFloat(PropertyName.VAL);
MY_SIZE_4 = _world.GetObject(ObjectType.Skill,25486605);
MY_SIZE_4_val = MY_SIZE_4.GetFloat(PropertyName.VAL);
WALK_8 = _world.GetObject(ObjectType.Skill,427);
WALK_8_val = WALK_8.GetFloat(PropertyName.VAL);
PLAYER_SIZE_2.SetFloat(231,MY_SIZE_4_val+0.2f*WALK_8_val);
}
MODE_SCHWIMMEN_9 = _world.GetObject(ObjectType.Skill,3755117404);
MODE_SCHWIMMEN_9_val = MODE_SCHWIMMEN_9.GetFloat(PropertyName.VAL);
MOVING_10 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_10_val = MOVING_10.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MOVING_10_val , MODE_SCHWIMMEN_9_val))
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
if (Game.CheckEquals(MOVING_19_val , MODE_TAUCHEN_18_val))
{
PLAYER_SIZE_20 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_21 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_21_val = PLAYER_SIZE_21.GetFloat(PropertyName.VAL);
PLAYER_SIZE_20.SetFloat(231,1f);
}
MODE_GEHEN_23 = _world.GetObject(ObjectType.Skill,3270985304);
MODE_GEHEN_23_val = MODE_GEHEN_23.GetFloat(PropertyName.VAL);
MOVING_24 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_24_val = MOVING_24.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MOVING_24_val , MODE_GEHEN_23_val))
{
PLAYER_SIZE_25 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_26 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_26_val = PLAYER_SIZE_26.GetFloat(PropertyName.VAL);
PLAYER_SIZE_27 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_27_val = PLAYER_SIZE_27.GetFloat(PropertyName.VAL);
PLAYER_DEPTH_29 = _world.GetObject(ObjectType.Skill,466);
PLAYER_DEPTH_29_val = PLAYER_DEPTH_29.GetFloat(PropertyName.VAL);
PLAYER_SIZE_25.SetFloat(231,PLAYER_SIZE_27_val-PLAYER_DEPTH_29_val);
}
NO_WATEN:
MODE_SCHWIMMEN_30 = _world.GetObject(ObjectType.Skill,3755117404);
MODE_SCHWIMMEN_30_val = MODE_SCHWIMMEN_30.GetFloat(PropertyName.VAL);
MOVING_31 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_31_val = MOVING_31.GetFloat(PropertyName.VAL);
if (!Game.CheckEquals(MOVING_31_val , MODE_SCHWIMMEN_30_val))
{
goto NO_SWIM;
}
PLAYER_DEPTH_33 = _world.GetObject(ObjectType.Skill,466);
PLAYER_DEPTH_33_val = PLAYER_DEPTH_33.GetFloat(PropertyName.VAL);
if (MathUtils.CheckGreater(PLAYER_DEPTH_33_val , 1.5f))
{
goto NO_WATER;
}
{
            var enumerator = CoroutinePool.Get<SET_WALKING>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }goto START;
NO_SWIM:
MODE_GEHEN_34 = _world.GetObject(ObjectType.Skill,3270985304);
MODE_GEHEN_34_val = MODE_GEHEN_34.GetFloat(PropertyName.VAL);
MOVING_35 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_35_val = MOVING_35.GetFloat(PropertyName.VAL);
if (!Game.CheckEquals(MOVING_35_val , MODE_GEHEN_34_val))
{
goto NO_WATER;
}
PLAYER_DEPTH_37 = _world.GetObject(ObjectType.Skill,466);
PLAYER_DEPTH_37_val = PLAYER_DEPTH_37.GetFloat(PropertyName.VAL);
if (MathUtils.CheckLower(PLAYER_DEPTH_37_val , 2.5f))
{
goto NO_WATER;
}
{
            var enumerator = CoroutinePool.Get<SET_SWIMMING>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }goto START;
NO_WATER:
MOUSE_MIDDLE_39 = _world.GetObject(ObjectType.Skill,472);
MOUSE_MIDDLE_39_val = MOUSE_MIDDLE_39.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MOUSE_MIDDLE_39_val , 0f))
{
goto NO_MOUSE;
}
KEY_SENSE_40 = _world.GetObject(ObjectType.Skill,475);
KEY_SENSE_40_val = KEY_SENSE_40.GetFloat(PropertyName.VAL);
FORCE_AHEAD_41 = _world.GetObject(ObjectType.Skill,480);
FORCE_AHEAD_41.SetFloat(231,KEY_SENSE_40_val);
KEY_SHIFT_43 = _world.GetObject(ObjectType.Skill,554);
KEY_SHIFT_43_val = KEY_SHIFT_43.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(KEY_SHIFT_43_val , 1f))
{
FORCE_AHEAD_44 = _world.GetObject(ObjectType.Skill,480);
FORCE_AHEAD_45 = _world.GetObject(ObjectType.Skill,480);
FORCE_AHEAD_45_val = FORCE_AHEAD_45.GetFloat(PropertyName.VAL);
FORCE_AHEAD_46 = _world.GetObject(ObjectType.Skill,480);
FORCE_AHEAD_46_val = FORCE_AHEAD_46.GetFloat(PropertyName.VAL);
SHIFT_SENSE_48 = _world.GetObject(ObjectType.Skill,476);
SHIFT_SENSE_48_val = SHIFT_SENSE_48.GetFloat(PropertyName.VAL);
FORCE_AHEAD_44.SetFloat(231,FORCE_AHEAD_46_val*SHIFT_SENSE_48_val);
}
NO_MOUSE:
BOOSTER_50 = _world.GetObject(ObjectType.Skill,2588890763);
BOOSTER_50.SetFloat(231,1f);
MASS_51 = _world.GetObject(ObjectType.Skill,2089315361);
MASS_51_val = MASS_51.GetFloat(PropertyName.VAL);
INERTIA_52 = _world.GetObject(ObjectType.Skill,438);
INERTIA_52.SetFloat(231,MASS_51_val);
FRICTION_53 = _world.GetObject(ObjectType.Skill,437);
FRICTION_54 = _world.GetObject(ObjectType.Skill,437);
FRICTION_54_val = FRICTION_54.GetFloat(PropertyName.VAL);
FRIC_55 = _world.GetObject(ObjectType.Skill,2089081969);
FRIC_55_val = FRIC_55.GetFloat(PropertyName.VAL);
DEPTH_59 = _world.GetObject(ObjectType.Skill,217365474);
DEPTH_59_val = DEPTH_59.GetFloat(PropertyName.VAL);
FRICTION_53.SetFloat(231,FRIC_55_val+0.1f*DEPTH_59_val);
FORCE_60 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_61 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_61_val = FORCE_61.GetFloat(PropertyName.VAL);
STRENGTH_63 = _world.GetObject(ObjectType.Skill,461037372);
STRENGTH_63_val = STRENGTH_63.GetFloat(PropertyName.VAL);
WAVE_STR_65 = _world.GetObject(ObjectType.Skill,525195384);
WAVE_STR_65_val = WAVE_STR_65.GetFloat(PropertyName.VAL);
WAVE_67 = _world.GetObject(ObjectType.Skill,428);
WAVE_67_val = WAVE_67.GetFloat(PropertyName.VAL);
BOOSTER_70 = _world.GetObject(ObjectType.Skill,2588890763);
BOOSTER_70_val = BOOSTER_70.GetFloat(PropertyName.VAL);
FORCE_AHEAD_73 = _world.GetObject(ObjectType.Skill,480);
FORCE_AHEAD_73_val = FORCE_AHEAD_73.GetFloat(PropertyName.VAL);
PLAYER_COS_75 = _world.GetObject(ObjectType.Skill,464);
PLAYER_COS_75_val = PLAYER_COS_75.GetFloat(PropertyName.VAL);
FORCE_STRAFE_79 = _world.GetObject(ObjectType.Skill,481);
FORCE_STRAFE_79_val = FORCE_STRAFE_79.GetFloat(PropertyName.VAL);
PLAYER_SIN_81 = _world.GetObject(ObjectType.Skill,463);
PLAYER_SIN_81_val = PLAYER_SIN_81.GetFloat(PropertyName.VAL);
DRIFT_X_84 = _world.GetObject(ObjectType.Skill,986683741);
DRIFT_X_84_val = DRIFT_X_84.GetFloat(PropertyName.VAL);
FORCE_60.SetFloat(231,(STRENGTH_63_val+WAVE_STR_65_val*WAVE_67_val)*BOOSTER_70_val*(FORCE_AHEAD_73_val*PLAYER_COS_75_val-0.5f*FORCE_STRAFE_79_val*PLAYER_SIN_81_val)+DRIFT_X_84_val);
FORCE_85 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_85_val = FORCE_85.GetFloat(PropertyName.VAL);
PLAYER_VX_86 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_86_val = PLAYER_VX_86.GetFloat(PropertyName.VAL);
PLAYER_VX_87 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_87.SetFloat(231,_world.Accelerate(PLAYER_VX_86_val,FORCE_85_val));
FORCE_88 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_89 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_89_val = FORCE_89.GetFloat(PropertyName.VAL);
STRENGTH_91 = _world.GetObject(ObjectType.Skill,461037372);
STRENGTH_91_val = STRENGTH_91.GetFloat(PropertyName.VAL);
WAVE_STR_93 = _world.GetObject(ObjectType.Skill,525195384);
WAVE_STR_93_val = WAVE_STR_93.GetFloat(PropertyName.VAL);
WAVE_95 = _world.GetObject(ObjectType.Skill,428);
WAVE_95_val = WAVE_95.GetFloat(PropertyName.VAL);
BOOSTER_98 = _world.GetObject(ObjectType.Skill,2588890763);
BOOSTER_98_val = BOOSTER_98.GetFloat(PropertyName.VAL);
FORCE_AHEAD_101 = _world.GetObject(ObjectType.Skill,480);
FORCE_AHEAD_101_val = FORCE_AHEAD_101.GetFloat(PropertyName.VAL);
PLAYER_SIN_103 = _world.GetObject(ObjectType.Skill,463);
PLAYER_SIN_103_val = PLAYER_SIN_103.GetFloat(PropertyName.VAL);
FORCE_STRAFE_107 = _world.GetObject(ObjectType.Skill,481);
FORCE_STRAFE_107_val = FORCE_STRAFE_107.GetFloat(PropertyName.VAL);
PLAYER_COS_109 = _world.GetObject(ObjectType.Skill,464);
PLAYER_COS_109_val = PLAYER_COS_109.GetFloat(PropertyName.VAL);
DRIFT_Y_112 = _world.GetObject(ObjectType.Skill,986683742);
DRIFT_Y_112_val = DRIFT_Y_112.GetFloat(PropertyName.VAL);
FORCE_88.SetFloat(231,(STRENGTH_91_val+WAVE_STR_93_val*WAVE_95_val)*BOOSTER_98_val*(FORCE_AHEAD_101_val*PLAYER_SIN_103_val+0.5f*FORCE_STRAFE_107_val*PLAYER_COS_109_val)+DRIFT_Y_112_val);
FORCE_113 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_113_val = FORCE_113.GetFloat(PropertyName.VAL);
PLAYER_VY_114 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_114_val = PLAYER_VY_114.GetFloat(PropertyName.VAL);
PLAYER_VY_115 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_115.SetFloat(231,_world.Accelerate(PLAYER_VY_114_val,FORCE_113_val));
FRICTION_117 = _world.GetObject(ObjectType.Skill,437);
FRICTION_117.SetFloat(231,0.5f);
MODE_GEHEN_118 = _world.GetObject(ObjectType.Skill,3270985304);
MODE_GEHEN_118_val = MODE_GEHEN_118.GetFloat(PropertyName.VAL);
MOVING_119 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_119_val = MOVING_119.GetFloat(PropertyName.VAL);
if (!Game.CheckEquals(MOVING_119_val , MODE_GEHEN_118_val))
{
FRICTION_121 = _world.GetObject(ObjectType.Skill,437);
FRICTION_121.SetFloat(231,0.85f);
}
FORCE_122 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_123 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_123_val = FORCE_123.GetFloat(PropertyName.VAL);
FORCE_ROT_126 = _world.GetObject(ObjectType.Skill,482);
FORCE_ROT_126_val = FORCE_ROT_126.GetFloat(PropertyName.VAL);
FORCE_122.SetFloat(231,0.05f*FORCE_ROT_126_val);
FORCE_127 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_127_val = FORCE_127.GetFloat(PropertyName.VAL);
PLAYER_VROT_128 = _world.GetObject(ObjectType.Skill,434);
PLAYER_VROT_128_val = PLAYER_VROT_128.GetFloat(PropertyName.VAL);
PLAYER_VROT_129 = _world.GetObject(ObjectType.Skill,434);
PLAYER_VROT_129.SetFloat(231,_world.Accelerate(PLAYER_VROT_128_val,FORCE_127_val));
FORCE_130 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_131 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_131_val = FORCE_131.GetFloat(PropertyName.VAL);
GRAVITY_132 = _world.GetObject(ObjectType.Skill,557195635);
GRAVITY_132_val = GRAVITY_132.GetFloat(PropertyName.VAL);
FLOAT_STR_134 = _world.GetObject(ObjectType.Skill,1319913115);
FLOAT_STR_134_val = FLOAT_STR_134.GetFloat(PropertyName.VAL);
FORCE_UP_136 = _world.GetObject(ObjectType.Skill,484);
FORCE_UP_136_val = FORCE_UP_136.GetFloat(PropertyName.VAL);
FORCE_130.SetFloat(231,GRAVITY_132_val+FLOAT_STR_134_val*FORCE_UP_136_val);
FRIC_AIR_137 = _world.GetObject(ObjectType.Skill,1830104876);
FRIC_AIR_137_val = FRIC_AIR_137.GetFloat(PropertyName.VAL);
FRICTION_138 = _world.GetObject(ObjectType.Skill,437);
FRICTION_138.SetFloat(231,FRIC_AIR_137_val);
PLAYER_HGT_140 = _world.GetObject(ObjectType.Skill,479);
PLAYER_HGT_140_val = PLAYER_HGT_140.GetFloat(PropertyName.VAL);
if (MathUtils.CheckGreater(PLAYER_HGT_140_val , 0f))
{
goto AIRBORNE;
}
FRICTION_142 = _world.GetObject(ObjectType.Skill,437);
FRICTION_142.SetFloat(231,0.98f);
FORCE_143 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_144 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_144_val = FORCE_144.GetFloat(PropertyName.VAL);
FORCE_145 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_145_val = FORCE_145.GetFloat(PropertyName.VAL);
PLAYER_HGT_149 = _world.GetObject(ObjectType.Skill,479);
PLAYER_HGT_149_val = PLAYER_HGT_149.GetFloat(PropertyName.VAL);
FORCE_143.SetFloat(231,FORCE_145_val-0.2f*PLAYER_HGT_149_val);
AIRBORNE:
FORCE_150 = _world.GetObject(ObjectType.Skill,220098300);
FORCE_150_val = FORCE_150.GetFloat(PropertyName.VAL);
PLAYER_VZ_151 = _world.GetObject(ObjectType.Skill,433);
PLAYER_VZ_151_val = PLAYER_VZ_151.GetFloat(PropertyName.VAL);
PLAYER_VZ_152 = _world.GetObject(ObjectType.Skill,433);
PLAYER_VZ_152.SetFloat(231,_world.Accelerate(PLAYER_VZ_151_val,FORCE_150_val));
DUCK_VAL_153 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_154 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_154_val = DUCK_VAL_154.GetFloat(PropertyName.VAL);
DUCK_VAL_157 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_157_val = DUCK_VAL_157.GetFloat(PropertyName.VAL);
DUCK_VAL_153.SetFloat(231,0.8f*DUCK_VAL_157_val);
MODE_SCHWIMMEN_158 = _world.GetObject(ObjectType.Skill,3755117404);
MODE_SCHWIMMEN_158_val = MODE_SCHWIMMEN_158.GetFloat(PropertyName.VAL);
MOVING_159 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_159_val = MOVING_159.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MOVING_159_val , MODE_SCHWIMMEN_158_val))
{
goto DUCK;
}
FORCE_UP_161 = _world.GetObject(ObjectType.Skill,484);
FORCE_UP_161_val = FORCE_UP_161.GetFloat(PropertyName.VAL);
if (MathUtils.CheckGreater(FORCE_UP_161_val , 0f))
{
goto NO_DUCK;
}
DUCK:
DUCK_VAL_162 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_163 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_163_val = DUCK_VAL_163.GetFloat(PropertyName.VAL);
DUCK_VAL_164 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_164_val = DUCK_VAL_164.GetFloat(PropertyName.VAL);
DUCK_STR_166 = _world.GetObject(ObjectType.Skill,1846696428);
DUCK_STR_166_val = DUCK_STR_166.GetFloat(PropertyName.VAL);
FORCE_UP_168 = _world.GetObject(ObjectType.Skill,484);
FORCE_UP_168_val = FORCE_UP_168.GetFloat(PropertyName.VAL);
DUCK_VAL_162.SetFloat(231,DUCK_VAL_164_val+DUCK_STR_166_val*FORCE_UP_168_val);
NO_DUCK:
PLAYER_SIZE_169 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_170 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_170_val = PLAYER_SIZE_170.GetFloat(PropertyName.VAL);
PLAYER_SIZE_171 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_171_val = PLAYER_SIZE_171.GetFloat(PropertyName.VAL);
DUCK_VAL_173 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_173_val = DUCK_VAL_173.GetFloat(PropertyName.VAL);
PLAYER_SIZE_169.SetFloat(231,PLAYER_SIZE_171_val+DUCK_VAL_173_val);
MODE_GEHEN_174 = _world.GetObject(ObjectType.Skill,3270985304);
MODE_GEHEN_174_val = MODE_GEHEN_174.GetFloat(PropertyName.VAL);
MOVING_175 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_175_val = MOVING_175.GetFloat(PropertyName.VAL);
if (!Game.CheckEquals(MOVING_175_val , MODE_GEHEN_174_val))
{
goto NO_JUMP;
}
JUMP_PHASE_177 = _world.GetObject(ObjectType.Skill,259503833);
JUMP_PHASE_177_val = JUMP_PHASE_177.GetFloat(PropertyName.VAL);
if (MathUtils.CheckGreater(JUMP_PHASE_177_val , 0f))
{
goto JUMP_1;
}
FORCE_UP_179 = _world.GetObject(ObjectType.Skill,484);
FORCE_UP_179_val = FORCE_UP_179.GetFloat(PropertyName.VAL);
if (MathUtils.CheckLower(FORCE_UP_179_val , 0.1f))
{
goto NO_JUMP;
}
JUMP_PHASE_181 = _world.GetObject(ObjectType.Skill,259503833);
JUMP_PHASE_181.SetFloat(231,1f);
JUMP_1:
JUMP_PHASE_183 = _world.GetObject(ObjectType.Skill,259503833);
JUMP_PHASE_183_val = JUMP_PHASE_183.GetFloat(PropertyName.VAL);
if (MathUtils.CheckGreater(JUMP_PHASE_183_val , 1f))
{
goto JUMP_2;
}
DUCK_VAL_184 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_185 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_185_val = DUCK_VAL_185.GetFloat(PropertyName.VAL);
DUCK_VAL_186 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_186_val = DUCK_VAL_186.GetFloat(PropertyName.VAL);
DUCK_VAL_184.SetFloat(231,DUCK_VAL_186_val-0.5f);
DUCK_VAL_190 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_190_val = DUCK_VAL_190.GetFloat(PropertyName.VAL);
if (MathUtils.CheckLower(DUCK_VAL_190_val , -0.7f))
{
JUMP_PHASE_192 = _world.GetObject(ObjectType.Skill,259503833);
JUMP_PHASE_192.SetFloat(231,2f);
}
goto NO_JUMP;
JUMP_2:
JUMP_PHASE_194 = _world.GetObject(ObjectType.Skill,259503833);
JUMP_PHASE_194_val = JUMP_PHASE_194.GetFloat(PropertyName.VAL);
if (MathUtils.CheckGreater(JUMP_PHASE_194_val , 2f))
{
goto JUMP_3;
}
DUCK_VAL_196 = _world.GetObject(ObjectType.Skill,1846699062);
DUCK_VAL_196.SetFloat(231,0f);
PLAYER_Z_197 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_198 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_198_val = PLAYER_Z_198.GetFloat(PropertyName.VAL);
FLOOR_HGT_199 = _world.GetObject(ObjectType.Skill,567);
FLOOR_HGT_199_val = FLOOR_HGT_199.GetFloat(PropertyName.VAL);
MY_SIZE_201 = _world.GetObject(ObjectType.Skill,25486605);
MY_SIZE_201_val = MY_SIZE_201.GetFloat(PropertyName.VAL);
PLAYER_Z_197.SetFloat(231,FLOOR_HGT_199_val+MY_SIZE_201_val);
PLAYER_VZ_203 = _world.GetObject(ObjectType.Skill,433);
PLAYER_VZ_203.SetFloat(231,0.5f);
JUMP_PHASE_205 = _world.GetObject(ObjectType.Skill,259503833);
JUMP_PHASE_205.SetFloat(231,3f);
goto NO_JUMP;
JUMP_3:
PLAYER_VZ_207 = _world.GetObject(ObjectType.Skill,433);
PLAYER_VZ_207_val = PLAYER_VZ_207.GetFloat(PropertyName.VAL);
if (MathUtils.CheckGreater(PLAYER_VZ_207_val , 0f))
{
goto NO_JUMP;
}
PLAYER_HGT_209 = _world.GetObject(ObjectType.Skill,479);
PLAYER_HGT_209_val = PLAYER_HGT_209.GetFloat(PropertyName.VAL);
if (MathUtils.CheckGreater(PLAYER_HGT_209_val , 0f))
{
goto NO_JUMP;
}
JUMP_PHASE_211 = _world.GetObject(ObjectType.Skill,259503833);
JUMP_PHASE_211.SetFloat(231,0f);
NO_JUMP:
PLAYER_SPEED_SQR_212 = _world.GetObject(ObjectType.Skill,310408863);
PLAYER_SPEED_SQR_213 = _world.GetObject(ObjectType.Skill,310408863);
PLAYER_SPEED_SQR_213_val = PLAYER_SPEED_SQR_213.GetFloat(PropertyName.VAL);
PLAYER_VX_214 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_214_val = PLAYER_VX_214.GetFloat(PropertyName.VAL);
PLAYER_VX_216 = _world.GetObject(ObjectType.Skill,431);
PLAYER_VX_216_val = PLAYER_VX_216.GetFloat(PropertyName.VAL);
PLAYER_VY_218 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_218_val = PLAYER_VY_218.GetFloat(PropertyName.VAL);
PLAYER_VY_220 = _world.GetObject(ObjectType.Skill,432);
PLAYER_VY_220_val = PLAYER_VY_220.GetFloat(PropertyName.VAL);
PLAYER_SPEED_SQR_212.SetFloat(231,PLAYER_VX_214_val*PLAYER_VX_216_val+PLAYER_VY_218_val*PLAYER_VY_220_val);
TILT_DECREASE_222 = _world.GetObject(ObjectType.Skill,3051803237);
TILT_DECREASE_222_val = TILT_DECREASE_222.GetFloat(PropertyName.VAL);
if (!Game.CheckEquals(TILT_DECREASE_222_val , 1f))
{
goto CALC_TILT;
}
MAX_PLAYER_TILT_P_223 = _world.GetObject(ObjectType.Skill,3767657834);
MAX_PLAYER_TILT_P_223_val = MAX_PLAYER_TILT_P_223.GetFloat(PropertyName.VAL);
PLAYER_TILT_224 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_224_val = PLAYER_TILT_224.GetFloat(PropertyName.VAL);
if (MathUtils.CheckGreater(PLAYER_TILT_224_val , MAX_PLAYER_TILT_P_223_val))
{
goto CHECK_SPEED_TILT;
}
MAX_PLAYER_TILT_N_225 = _world.GetObject(ObjectType.Skill,3767657832);
MAX_PLAYER_TILT_N_225_val = MAX_PLAYER_TILT_N_225.GetFloat(PropertyName.VAL);
PLAYER_TILT_226 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_226_val = PLAYER_TILT_226.GetFloat(PropertyName.VAL);
if (MathUtils.CheckGreater(PLAYER_TILT_226_val , MAX_PLAYER_TILT_N_225_val))
{
goto DECR_TILT;
}
CHECK_SPEED_TILT:
PLAYER_SPEED_SQR_228 = _world.GetObject(ObjectType.Skill,310408863);
PLAYER_SPEED_SQR_228_val = PLAYER_SPEED_SQR_228.GetFloat(PropertyName.VAL);
if (MathUtils.CheckGreater(PLAYER_SPEED_SQR_228_val , 0.4f))
{
goto DECR_TILT;
}
PLAYER_VZ_230 = _world.GetObject(ObjectType.Skill,433);
PLAYER_VZ_230_val = PLAYER_VZ_230.GetFloat(PropertyName.VAL);
if (!Game.CheckEquals(PLAYER_VZ_230_val , 0f))
{
goto DECR_TILT;
}
goto CALC_TILT;
DECR_TILT:
TILT_DECREASE_232 = _world.GetObject(ObjectType.Skill,3051803237);
TILT_DECREASE_232.SetFloat(231,0.8f);
CALC_TILT:
PLAYER_TILT_233 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_234 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_234_val = PLAYER_TILT_234.GetFloat(PropertyName.VAL);
TILT_DECREASE_235 = _world.GetObject(ObjectType.Skill,3051803237);
TILT_DECREASE_235_val = TILT_DECREASE_235.GetFloat(PropertyName.VAL);
PLAYER_TILT_237 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_237_val = PLAYER_TILT_237.GetFloat(PropertyName.VAL);
FORCE_TILT_241 = _world.GetObject(ObjectType.Skill,483);
FORCE_TILT_241_val = FORCE_TILT_241.GetFloat(PropertyName.VAL);
FLOAT_STR_245 = _world.GetObject(ObjectType.Skill,1319913115);
FLOAT_STR_245_val = FLOAT_STR_245.GetFloat(PropertyName.VAL);
FORCE_UP_247 = _world.GetObject(ObjectType.Skill,484);
FORCE_UP_247_val = FORCE_UP_247.GetFloat(PropertyName.VAL);
FLY_MODE_252 = _world.GetObject(ObjectType.Skill,3329971932);
FLY_MODE_252_val = FLY_MODE_252.GetFloat(PropertyName.VAL);
PLAYER_TILT_233.SetFloat(231,TILT_DECREASE_235_val*PLAYER_TILT_237_val+0.3f*FORCE_TILT_241_val-0.3f*FLOAT_STR_245_val*FORCE_UP_247_val*(1f-FLY_MODE_252_val));
PLAYER_SPEED_SQR_255 = _world.GetObject(ObjectType.Skill,310408863);
PLAYER_SPEED_SQR_255_val = PLAYER_SPEED_SQR_255.GetFloat(PropertyName.VAL);
if (MathUtils.CheckGreater(PLAYER_SPEED_SQR_255_val , 0f))
{
goto skip_256;
}
MAX_PLAYER_TILT_P_257 = _world.GetObject(ObjectType.Skill,3767657834);
MAX_PLAYER_TILT_P_257_val = MAX_PLAYER_TILT_P_257.GetFloat(PropertyName.VAL);
PLAYER_TILT_258 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_258_val = PLAYER_TILT_258.GetFloat(PropertyName.VAL);
if (MathUtils.CheckGreater(PLAYER_TILT_258_val , MAX_PLAYER_TILT_P_257_val))
{
TILT_DECREASE_260 = _world.GetObject(ObjectType.Skill,3051803237);
TILT_DECREASE_260.SetFloat(231,1f);
}
MAX_PLAYER_TILT_N_261 = _world.GetObject(ObjectType.Skill,3767657832);
MAX_PLAYER_TILT_N_261_val = MAX_PLAYER_TILT_N_261.GetFloat(PropertyName.VAL);
PLAYER_TILT_262 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_262_val = PLAYER_TILT_262.GetFloat(PropertyName.VAL);
if (MathUtils.CheckLower(PLAYER_TILT_262_val , MAX_PLAYER_TILT_N_261_val))
{
TILT_DECREASE_264 = _world.GetObject(ObjectType.Skill,3051803237);
TILT_DECREASE_264.SetFloat(231,1f);
}
skip_256:
MODE_SCHWIMMEN_265 = _world.GetObject(ObjectType.Skill,3755117404);
MODE_SCHWIMMEN_265_val = MODE_SCHWIMMEN_265.GetFloat(PropertyName.VAL);
MOVING_266 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_266_val = MOVING_266.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MOVING_266_val , MODE_SCHWIMMEN_265_val))
{
PLAYER_TILT_267 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_268 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_268_val = PLAYER_TILT_268.GetFloat(PropertyName.VAL);
PLAYER_TILT_269 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_269_val = PLAYER_TILT_269.GetFloat(PropertyName.VAL);
WAVE_273 = _world.GetObject(ObjectType.Skill,428);
WAVE_273_val = WAVE_273.GetFloat(PropertyName.VAL);
PLAYER_TILT_267.SetFloat(231,PLAYER_TILT_269_val+0.01f*WAVE_273_val);
}
MODE_TAUCHEN_274 = _world.GetObject(ObjectType.Skill,1042033433);
MODE_TAUCHEN_274_val = MODE_TAUCHEN_274.GetFloat(PropertyName.VAL);
MOVING_275 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_275_val = MOVING_275.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MOVING_275_val , MODE_TAUCHEN_274_val))
{
goto NO_HTILT;
}
JUMP_PHASE_277 = _world.GetObject(ObjectType.Skill,259503833);
JUMP_PHASE_277_val = JUMP_PHASE_277.GetFloat(PropertyName.VAL);
if (MathUtils.CheckGreater(JUMP_PHASE_277_val , 0f))
{
goto NO_HTILT;
}
TILT_DECREASE_279 = _world.GetObject(ObjectType.Skill,3051803237);
TILT_DECREASE_279_val = TILT_DECREASE_279.GetFloat(PropertyName.VAL);
if (MathUtils.CheckLower(TILT_DECREASE_279_val , 1f))
{
PLAYER_TILT_280 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_281 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_281_val = PLAYER_TILT_281.GetFloat(PropertyName.VAL);
PLAYER_TILT_282 = _world.GetObject(ObjectType.Skill,435);
PLAYER_TILT_282_val = PLAYER_TILT_282.GetFloat(PropertyName.VAL);
PLAYER_HGT_287 = _world.GetObject(ObjectType.Skill,479);
PLAYER_HGT_287_val = PLAYER_HGT_287.GetFloat(PropertyName.VAL);
PLAYER_TILT_280.SetFloat(231,PLAYER_TILT_282_val+0.03f*(PLAYER_HGT_287_val+0.3f));
}
NO_HTILT:
RICHTER_292 = _world.GetObject(ObjectType.Skill,1528103070);
RICHTER_292_val = RICHTER_292.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(RICHTER_292_val , 0f))
{
goto NO_QUAKE;
}
PLAYER_Z_293 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_294 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_294_val = PLAYER_Z_294.GetFloat(PropertyName.VAL);
PLAYER_Z_295 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_295_val = PLAYER_Z_295.GetFloat(PropertyName.VAL);
RICHTER_297 = _world.GetObject(ObjectType.Skill,1528103070);
RICHTER_297_val = RICHTER_297.GetFloat(PropertyName.VAL);
RANDOM_2_300 = _world.GetObject(ObjectType.Skill,1866495039);
RANDOM_2_300_val = RANDOM_2_300.GetFloat(PropertyName.VAL);
PLAYER_Z_293.SetFloat(231,PLAYER_Z_295_val+RICHTER_297_val*(RANDOM_2_300_val-0.5f));
RANDOM_1_304 = _world.GetObject(ObjectType.Skill,1866495038);
RANDOM_1_304_val = RANDOM_1_304.GetFloat(PropertyName.VAL);
RANDOM_2_305 = _world.GetObject(ObjectType.Skill,1866495039);
RANDOM_2_305.SetFloat(231,RANDOM_1_304_val);
RANDOM_1_307 = _world.GetObject(ObjectType.Skill,1866495038);
RANDOM_1_307.SetFloat(231,UnityEngine.Random.value);
NO_QUAKE:
return false;
KEY_INS_309 = _world.GetObject(ObjectType.Skill,541);
KEY_INS_309_val = KEY_INS_309.GetFloat(PropertyName.VAL);
if (MathUtils.CheckGreater(KEY_INS_309_val , 0f))
{
PLAYER_ARC_310 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_311 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_311_val = PLAYER_ARC_311.GetFloat(PropertyName.VAL);
PLAYER_ARC_312 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_312_val = PLAYER_ARC_312.GetFloat(PropertyName.VAL);
PLAYER_ARC_310.SetFloat(231,PLAYER_ARC_312_val-0.1f);
}
KEY_DEL_316 = _world.GetObject(ObjectType.Skill,527);
KEY_DEL_316_val = KEY_DEL_316.GetFloat(PropertyName.VAL);
if (MathUtils.CheckGreater(KEY_DEL_316_val , 0f))
{
PLAYER_ARC_317 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_318 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_318_val = PLAYER_ARC_318.GetFloat(PropertyName.VAL);
PLAYER_ARC_319 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_319_val = PLAYER_ARC_319.GetFloat(PropertyName.VAL);
PLAYER_ARC_317.SetFloat(231,PLAYER_ARC_319_val+0.1f);
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
IAcknexObject MODE_GEHEN_23;
float MODE_GEHEN_23_val;
IAcknexObject MOVING_24;
float MOVING_24_val;
IAcknexObject PLAYER_SIZE_25;
IAcknexObject PLAYER_SIZE_26;
float PLAYER_SIZE_26_val;
IAcknexObject PLAYER_SIZE_27;
float PLAYER_SIZE_27_val;
IAcknexObject PLAYER_DEPTH_29;
float PLAYER_DEPTH_29_val;
IAcknexObject MODE_SCHWIMMEN_30;
float MODE_SCHWIMMEN_30_val;
IAcknexObject MOVING_31;
float MOVING_31_val;
IAcknexObject PLAYER_DEPTH_33;
float PLAYER_DEPTH_33_val;
IAcknexObject MODE_GEHEN_34;
float MODE_GEHEN_34_val;
IAcknexObject MOVING_35;
float MOVING_35_val;
IAcknexObject PLAYER_DEPTH_37;
float PLAYER_DEPTH_37_val;
IAcknexObject MOUSE_MIDDLE_39;
float MOUSE_MIDDLE_39_val;
IAcknexObject KEY_SENSE_40;
float KEY_SENSE_40_val;
IAcknexObject FORCE_AHEAD_41;
IAcknexObject KEY_SHIFT_43;
float KEY_SHIFT_43_val;
IAcknexObject FORCE_AHEAD_44;
IAcknexObject FORCE_AHEAD_45;
float FORCE_AHEAD_45_val;
IAcknexObject FORCE_AHEAD_46;
float FORCE_AHEAD_46_val;
IAcknexObject SHIFT_SENSE_48;
float SHIFT_SENSE_48_val;
IAcknexObject BOOSTER_50;
IAcknexObject MASS_51;
float MASS_51_val;
IAcknexObject INERTIA_52;
IAcknexObject FRICTION_53;
IAcknexObject FRICTION_54;
float FRICTION_54_val;
IAcknexObject FRIC_55;
float FRIC_55_val;
IAcknexObject DEPTH_59;
float DEPTH_59_val;
IAcknexObject FORCE_60;
IAcknexObject FORCE_61;
float FORCE_61_val;
IAcknexObject STRENGTH_63;
float STRENGTH_63_val;
IAcknexObject WAVE_STR_65;
float WAVE_STR_65_val;
IAcknexObject WAVE_67;
float WAVE_67_val;
IAcknexObject BOOSTER_70;
float BOOSTER_70_val;
IAcknexObject FORCE_AHEAD_73;
float FORCE_AHEAD_73_val;
IAcknexObject PLAYER_COS_75;
float PLAYER_COS_75_val;
IAcknexObject FORCE_STRAFE_79;
float FORCE_STRAFE_79_val;
IAcknexObject PLAYER_SIN_81;
float PLAYER_SIN_81_val;
IAcknexObject DRIFT_X_84;
float DRIFT_X_84_val;
IAcknexObject FORCE_85;
float FORCE_85_val;
IAcknexObject PLAYER_VX_86;
float PLAYER_VX_86_val;
IAcknexObject PLAYER_VX_87;
IAcknexObject FORCE_88;
IAcknexObject FORCE_89;
float FORCE_89_val;
IAcknexObject STRENGTH_91;
float STRENGTH_91_val;
IAcknexObject WAVE_STR_93;
float WAVE_STR_93_val;
IAcknexObject WAVE_95;
float WAVE_95_val;
IAcknexObject BOOSTER_98;
float BOOSTER_98_val;
IAcknexObject FORCE_AHEAD_101;
float FORCE_AHEAD_101_val;
IAcknexObject PLAYER_SIN_103;
float PLAYER_SIN_103_val;
IAcknexObject FORCE_STRAFE_107;
float FORCE_STRAFE_107_val;
IAcknexObject PLAYER_COS_109;
float PLAYER_COS_109_val;
IAcknexObject DRIFT_Y_112;
float DRIFT_Y_112_val;
IAcknexObject FORCE_113;
float FORCE_113_val;
IAcknexObject PLAYER_VY_114;
float PLAYER_VY_114_val;
IAcknexObject PLAYER_VY_115;
IAcknexObject FRICTION_117;
IAcknexObject MODE_GEHEN_118;
float MODE_GEHEN_118_val;
IAcknexObject MOVING_119;
float MOVING_119_val;
IAcknexObject FRICTION_121;
IAcknexObject FORCE_122;
IAcknexObject FORCE_123;
float FORCE_123_val;
IAcknexObject FORCE_ROT_126;
float FORCE_ROT_126_val;
IAcknexObject FORCE_127;
float FORCE_127_val;
IAcknexObject PLAYER_VROT_128;
float PLAYER_VROT_128_val;
IAcknexObject PLAYER_VROT_129;
IAcknexObject FORCE_130;
IAcknexObject FORCE_131;
float FORCE_131_val;
IAcknexObject GRAVITY_132;
float GRAVITY_132_val;
IAcknexObject FLOAT_STR_134;
float FLOAT_STR_134_val;
IAcknexObject FORCE_UP_136;
float FORCE_UP_136_val;
IAcknexObject FRIC_AIR_137;
float FRIC_AIR_137_val;
IAcknexObject FRICTION_138;
IAcknexObject PLAYER_HGT_140;
float PLAYER_HGT_140_val;
IAcknexObject FRICTION_142;
IAcknexObject FORCE_143;
IAcknexObject FORCE_144;
float FORCE_144_val;
IAcknexObject FORCE_145;
float FORCE_145_val;
IAcknexObject PLAYER_HGT_149;
float PLAYER_HGT_149_val;
IAcknexObject FORCE_150;
float FORCE_150_val;
IAcknexObject PLAYER_VZ_151;
float PLAYER_VZ_151_val;
IAcknexObject PLAYER_VZ_152;
IAcknexObject DUCK_VAL_153;
IAcknexObject DUCK_VAL_154;
float DUCK_VAL_154_val;
IAcknexObject DUCK_VAL_157;
float DUCK_VAL_157_val;
IAcknexObject MODE_SCHWIMMEN_158;
float MODE_SCHWIMMEN_158_val;
IAcknexObject MOVING_159;
float MOVING_159_val;
IAcknexObject FORCE_UP_161;
float FORCE_UP_161_val;
IAcknexObject DUCK_VAL_162;
IAcknexObject DUCK_VAL_163;
float DUCK_VAL_163_val;
IAcknexObject DUCK_VAL_164;
float DUCK_VAL_164_val;
IAcknexObject DUCK_STR_166;
float DUCK_STR_166_val;
IAcknexObject FORCE_UP_168;
float FORCE_UP_168_val;
IAcknexObject PLAYER_SIZE_169;
IAcknexObject PLAYER_SIZE_170;
float PLAYER_SIZE_170_val;
IAcknexObject PLAYER_SIZE_171;
float PLAYER_SIZE_171_val;
IAcknexObject DUCK_VAL_173;
float DUCK_VAL_173_val;
IAcknexObject MODE_GEHEN_174;
float MODE_GEHEN_174_val;
IAcknexObject MOVING_175;
float MOVING_175_val;
IAcknexObject JUMP_PHASE_177;
float JUMP_PHASE_177_val;
IAcknexObject FORCE_UP_179;
float FORCE_UP_179_val;
IAcknexObject JUMP_PHASE_181;
IAcknexObject JUMP_PHASE_183;
float JUMP_PHASE_183_val;
IAcknexObject DUCK_VAL_184;
IAcknexObject DUCK_VAL_185;
float DUCK_VAL_185_val;
IAcknexObject DUCK_VAL_186;
float DUCK_VAL_186_val;
IAcknexObject DUCK_VAL_190;
float DUCK_VAL_190_val;
IAcknexObject JUMP_PHASE_192;
IAcknexObject JUMP_PHASE_194;
float JUMP_PHASE_194_val;
IAcknexObject DUCK_VAL_196;
IAcknexObject PLAYER_Z_197;
IAcknexObject PLAYER_Z_198;
float PLAYER_Z_198_val;
IAcknexObject FLOOR_HGT_199;
float FLOOR_HGT_199_val;
IAcknexObject MY_SIZE_201;
float MY_SIZE_201_val;
IAcknexObject PLAYER_VZ_203;
IAcknexObject JUMP_PHASE_205;
IAcknexObject PLAYER_VZ_207;
float PLAYER_VZ_207_val;
IAcknexObject PLAYER_HGT_209;
float PLAYER_HGT_209_val;
IAcknexObject JUMP_PHASE_211;
IAcknexObject PLAYER_SPEED_SQR_212;
IAcknexObject PLAYER_SPEED_SQR_213;
float PLAYER_SPEED_SQR_213_val;
IAcknexObject PLAYER_VX_214;
float PLAYER_VX_214_val;
IAcknexObject PLAYER_VX_216;
float PLAYER_VX_216_val;
IAcknexObject PLAYER_VY_218;
float PLAYER_VY_218_val;
IAcknexObject PLAYER_VY_220;
float PLAYER_VY_220_val;
IAcknexObject TILT_DECREASE_222;
float TILT_DECREASE_222_val;
IAcknexObject MAX_PLAYER_TILT_P_223;
float MAX_PLAYER_TILT_P_223_val;
IAcknexObject PLAYER_TILT_224;
float PLAYER_TILT_224_val;
IAcknexObject MAX_PLAYER_TILT_N_225;
float MAX_PLAYER_TILT_N_225_val;
IAcknexObject PLAYER_TILT_226;
float PLAYER_TILT_226_val;
IAcknexObject PLAYER_SPEED_SQR_228;
float PLAYER_SPEED_SQR_228_val;
IAcknexObject PLAYER_VZ_230;
float PLAYER_VZ_230_val;
IAcknexObject TILT_DECREASE_232;
IAcknexObject PLAYER_TILT_233;
IAcknexObject PLAYER_TILT_234;
float PLAYER_TILT_234_val;
IAcknexObject TILT_DECREASE_235;
float TILT_DECREASE_235_val;
IAcknexObject PLAYER_TILT_237;
float PLAYER_TILT_237_val;
IAcknexObject FORCE_TILT_241;
float FORCE_TILT_241_val;
IAcknexObject FLOAT_STR_245;
float FLOAT_STR_245_val;
IAcknexObject FORCE_UP_247;
float FORCE_UP_247_val;
IAcknexObject FLY_MODE_252;
float FLY_MODE_252_val;
IAcknexObject PLAYER_SPEED_SQR_255;
float PLAYER_SPEED_SQR_255_val;
IAcknexObject MAX_PLAYER_TILT_P_257;
float MAX_PLAYER_TILT_P_257_val;
IAcknexObject PLAYER_TILT_258;
float PLAYER_TILT_258_val;
IAcknexObject TILT_DECREASE_260;
IAcknexObject MAX_PLAYER_TILT_N_261;
float MAX_PLAYER_TILT_N_261_val;
IAcknexObject PLAYER_TILT_262;
float PLAYER_TILT_262_val;
IAcknexObject TILT_DECREASE_264;
IAcknexObject MODE_SCHWIMMEN_265;
float MODE_SCHWIMMEN_265_val;
IAcknexObject MOVING_266;
float MOVING_266_val;
IAcknexObject PLAYER_TILT_267;
IAcknexObject PLAYER_TILT_268;
float PLAYER_TILT_268_val;
IAcknexObject PLAYER_TILT_269;
float PLAYER_TILT_269_val;
IAcknexObject WAVE_273;
float WAVE_273_val;
IAcknexObject MODE_TAUCHEN_274;
float MODE_TAUCHEN_274_val;
IAcknexObject MOVING_275;
float MOVING_275_val;
IAcknexObject JUMP_PHASE_277;
float JUMP_PHASE_277_val;
IAcknexObject TILT_DECREASE_279;
float TILT_DECREASE_279_val;
IAcknexObject PLAYER_TILT_280;
IAcknexObject PLAYER_TILT_281;
float PLAYER_TILT_281_val;
IAcknexObject PLAYER_TILT_282;
float PLAYER_TILT_282_val;
IAcknexObject PLAYER_HGT_287;
float PLAYER_HGT_287_val;
IAcknexObject RICHTER_292;
float RICHTER_292_val;
IAcknexObject PLAYER_Z_293;
IAcknexObject PLAYER_Z_294;
float PLAYER_Z_294_val;
IAcknexObject PLAYER_Z_295;
float PLAYER_Z_295_val;
IAcknexObject RICHTER_297;
float RICHTER_297_val;
IAcknexObject RANDOM_2_300;
float RANDOM_2_300_val;
IAcknexObject RANDOM_1_304;
float RANDOM_1_304_val;
IAcknexObject RANDOM_2_305;
IAcknexObject RANDOM_1_307;
IAcknexObject KEY_INS_309;
float KEY_INS_309_val;
IAcknexObject PLAYER_ARC_310;
IAcknexObject PLAYER_ARC_311;
float PLAYER_ARC_311_val;
IAcknexObject PLAYER_ARC_312;
float PLAYER_ARC_312_val;
IAcknexObject KEY_DEL_316;
float KEY_DEL_316_val;
IAcknexObject PLAYER_ARC_317;
IAcknexObject PLAYER_ARC_318;
float PLAYER_ARC_318_val;
IAcknexObject PLAYER_ARC_319;
float PLAYER_ARC_319_val;
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
GRAVITY_15.SetFloat(231,-0.13f);
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
GRAVITY_15.SetFloat(231,-0.05f);
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
if (Game.CheckEquals(MOVING_1_val , 0f))
{
return false;
}
MODE_GEHEN_2 = _world.GetObject(ObjectType.Skill,3270985304);
MODE_GEHEN_2_val = MODE_GEHEN_2.GetFloat(PropertyName.VAL);
MOVING_3 = _world.GetObject(ObjectType.Skill,3242343005);
MOVING_3_val = MOVING_3.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MOVING_3_val , MODE_GEHEN_2_val))
{
{
            var enumerator = CoroutinePool.Get<SET_WALKING>();
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
if (Game.CheckEquals(MOVING_5_val , MODE_SCHWIMMEN_4_val))
{
{
            var enumerator = CoroutinePool.Get<SET_SWIMMING>();
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
if (Game.CheckEquals(MOVING_7_val , MODE_TAUCHEN_6_val))
{
{
            var enumerator = CoroutinePool.Get<SET_DIVING>();
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
if (Game.CheckEquals(UNDERWATER_1_val , 1f))
{
return false;
}
UNDERWATER_3 = _world.GetObject(ObjectType.Skill,1369167822);
UNDERWATER_3.SetFloat(231,1f);
PLAYER_ARC_4 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_5 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_5_val = PLAYER_ARC_5.GetFloat(PropertyName.VAL);
PLAYER_ARC_6 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_6_val = PLAYER_ARC_6.GetFloat(PropertyName.VAL);
PLAYER_ARC_4.SetFloat(231,PLAYER_ARC_6_val+0.3f);
MY_SIZE_9 = _world.GetObject(ObjectType.Skill,25486605);
MY_SIZE_10 = _world.GetObject(ObjectType.Skill,25486605);
MY_SIZE_10_val = MY_SIZE_10.GetFloat(PropertyName.VAL);
MY_SIZE_11 = _world.GetObject(ObjectType.Skill,25486605);
MY_SIZE_11_val = MY_SIZE_11.GetFloat(PropertyName.VAL);
MY_SIZE_9.SetFloat(231,MY_SIZE_11_val-0.2f);
PLAYER_SIZE_14 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_15 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_15_val = PLAYER_SIZE_15.GetFloat(PropertyName.VAL);
PLAYER_SIZE_16 = _world.GetObject(ObjectType.Skill,422);
PLAYER_SIZE_16_val = PLAYER_SIZE_16.GetFloat(PropertyName.VAL);
PLAYER_SIZE_14.SetFloat(231,PLAYER_SIZE_16_val-0.2f);
PLAYER_Z_19 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_20 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_20_val = PLAYER_Z_20.GetFloat(PropertyName.VAL);
PLAYER_Z_21 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_21_val = PLAYER_Z_21.GetFloat(PropertyName.VAL);
PLAYER_Z_19.SetFloat(231,PLAYER_Z_21_val-0.2f);
{
            var enumerator = _world.CallSynonymAction(1342576697, MY, THERE);
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<SET_DIVING>();
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
if (Game.CheckEquals(UNDERWATER_1_val , 0f))
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
{
            var enumerator = _world.CallSynonymAction(1917066007, MY, THERE);
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<SET_SWIMMING>();
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
}
public class START_QUAKE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public START_QUAKE() {
  }
 public START_QUAKE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = CoroutinePool.Get<QUAKE>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
}
public class QUAKE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public QUAKE() {
  }
 public QUAKE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
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
QUAKE_0 = _world.AcknexObject.GetAcknexObject(233340804);
_world.AcknexObject.SetAcknexObject(12,QUAKE_0);
RICHTER_4 = _world.GetObject(ObjectType.Skill,1528103070);
RICHTER_4.SetFloat(231,0.1f);

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
        
RICHTER_7 = _world.GetObject(ObjectType.Skill,1528103070);
RICHTER_7.SetFloat(231,0.3f);

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.FramesToTime((int)32f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
RICHTER_10 = _world.GetObject(ObjectType.Skill,1528103070);
RICHTER_10.SetFloat(231,0.5f);

            startTime3 = Time.time;
            endTime3 = startTime3 + TimeUtils.FramesToTime((int)48f);
            _cursor = 3;
            _coroutine3:
            while (Time.time  < endTime3)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
RICHTER_13 = _world.GetObject(ObjectType.Skill,1528103070);
RICHTER_13.SetFloat(231,0.2f);

            startTime4 = Time.time;
            endTime4 = startTime4 + TimeUtils.FramesToTime((int)80f);
            _cursor = 4;
            _coroutine4:
            while (Time.time  < endTime4)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
RICHTER_16 = _world.GetObject(ObjectType.Skill,1528103070);
RICHTER_16.SetFloat(231,0.6f);

            startTime5 = Time.time;
            endTime5 = startTime5 + TimeUtils.FramesToTime((int)32f);
            _cursor = 5;
            _coroutine5:
            while (Time.time  < endTime5)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
RICHTER_19 = _world.GetObject(ObjectType.Skill,1528103070);
RICHTER_19.SetFloat(231,0.1f);

            startTime6 = Time.time;
            endTime6 = startTime6 + TimeUtils.FramesToTime((int)16f);
            _cursor = 6;
            _coroutine6:
            while (Time.time  < endTime6)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
RICHTER_22 = _world.GetObject(ObjectType.Skill,1528103070);
RICHTER_22.SetFloat(231,0f);
_world.AcknexObject.SetAcknexObject(12,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject QUAKE_0;
IAcknexObject RICHTER_4;
float startTime1;
float endTime1;
IAcknexObject RICHTER_7;
float startTime2;
float endTime2;
IAcknexObject RICHTER_10;
float startTime3;
float endTime3;
IAcknexObject RICHTER_13;
float startTime4;
float endTime4;
IAcknexObject RICHTER_16;
float startTime5;
float endTime5;
IAcknexObject RICHTER_19;
float startTime6;
float endTime6;
IAcknexObject RICHTER_22;
}
public class TUNIX : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TUNIX() {
  }
 public TUNIX(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
return false;
//Unknown keyword: 
      return false;
  }
}
public class SET_MENU : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_MENU() {
  }
 public SET_MENU(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MENU1_STR_0 = _world.GetSynonymObject(3883540907);
MENU1_TXT_2 = _world.AcknexObject.GetAcknexObject(3883542130);
MENU1_TXT_2_array = MENU1_TXT_2.GetObject<List<IAcknexObject>>(293);
MENU1_TXT_2_index = MENU1_TXT_2.GetInteger(PropertyName.INDEX);
MENU1_TXT_2_array[MENU1_TXT_2_index-1] = MENU1_STR_0;
MENU1_TXT_2.IsDirty = true;
MENU2_STR_3 = _world.GetSynonymObject(3884726828);
MENU2_TXT_5 = _world.AcknexObject.GetAcknexObject(3884728051);
MENU2_TXT_5_array = MENU2_TXT_5.GetObject<List<IAcknexObject>>(293);
MENU2_TXT_5_index = MENU2_TXT_5.GetInteger(PropertyName.INDEX);
MENU2_TXT_5_array[MENU2_TXT_5_index-1] = MENU2_STR_3;
MENU2_TXT_5.IsDirty = true;
MENU3_STR_6 = _world.GetSynonymObject(3885912749);
MENU3_TXT_8 = _world.AcknexObject.GetAcknexObject(3885913972);
MENU3_TXT_8_array = MENU3_TXT_8.GetObject<List<IAcknexObject>>(293);
MENU3_TXT_8_index = MENU3_TXT_8.GetInteger(PropertyName.INDEX);
MENU3_TXT_8_array[MENU3_TXT_8_index-1] = MENU3_STR_6;
MENU3_TXT_8.IsDirty = true;
MENU4_STR_9 = _world.GetSynonymObject(3887098670);
MENU4_TXT_11 = _world.AcknexObject.GetAcknexObject(3887099893);
MENU4_TXT_11_array = MENU4_TXT_11.GetObject<List<IAcknexObject>>(293);
MENU4_TXT_11_index = MENU4_TXT_11.GetInteger(PropertyName.INDEX);
MENU4_TXT_11_array[MENU4_TXT_11_index-1] = MENU4_STR_9;
MENU4_TXT_11.IsDirty = true;
MENU5_STR_12 = _world.GetSynonymObject(3888284591);
MENU5_TXT_14 = _world.AcknexObject.GetAcknexObject(3888285814);
MENU5_TXT_14_array = MENU5_TXT_14.GetObject<List<IAcknexObject>>(293);
MENU5_TXT_14_index = MENU5_TXT_14.GetInteger(PropertyName.INDEX);
MENU5_TXT_14_array[MENU5_TXT_14_index-1] = MENU5_STR_12;
MENU5_TXT_14.IsDirty = true;
MENU6_STR_15 = _world.GetSynonymObject(3889470512);
MENU6_TXT_17 = _world.AcknexObject.GetAcknexObject(3889471735);
MENU6_TXT_17_array = MENU6_TXT_17.GetObject<List<IAcknexObject>>(293);
MENU6_TXT_17_index = MENU6_TXT_17.GetInteger(PropertyName.INDEX);
MENU6_TXT_17_array[MENU6_TXT_17_index-1] = MENU6_STR_15;
MENU6_TXT_17.IsDirty = true;
EXIT_STR_18 = _world.AcknexObject.GetAcknexObject(1340388703);
MENUEXIT_TXT_20 = _world.AcknexObject.GetAcknexObject(3230524091);
MENUEXIT_TXT_20_array = MENUEXIT_TXT_20.GetObject<List<IAcknexObject>>(293);
MENUEXIT_TXT_20_index = MENUEXIT_TXT_20.GetInteger(PropertyName.INDEX);
MENUEXIT_TXT_20_array[MENUEXIT_TXT_20_index-1] = EXIT_STR_18;
MENUEXIT_TXT_20.IsDirty = true;
//Unknown keyword: 
      return false;
  }
IAcknexObject MENU1_STR_0;
IAcknexObject MENU1_TXT_2;
List<IAcknexObject> MENU1_TXT_2_array;
int MENU1_TXT_2_index;
IAcknexObject MENU2_STR_3;
IAcknexObject MENU2_TXT_5;
List<IAcknexObject> MENU2_TXT_5_array;
int MENU2_TXT_5_index;
IAcknexObject MENU3_STR_6;
IAcknexObject MENU3_TXT_8;
List<IAcknexObject> MENU3_TXT_8_array;
int MENU3_TXT_8_index;
IAcknexObject MENU4_STR_9;
IAcknexObject MENU4_TXT_11;
List<IAcknexObject> MENU4_TXT_11_array;
int MENU4_TXT_11_index;
IAcknexObject MENU5_STR_12;
IAcknexObject MENU5_TXT_14;
List<IAcknexObject> MENU5_TXT_14_array;
int MENU5_TXT_14_index;
IAcknexObject MENU6_STR_15;
IAcknexObject MENU6_TXT_17;
List<IAcknexObject> MENU6_TXT_17_array;
int MENU6_TXT_17_index;
IAcknexObject EXIT_STR_18;
IAcknexObject MENUEXIT_TXT_20;
List<IAcknexObject> MENUEXIT_TXT_20_array;
int MENUEXIT_TXT_20_index;
}
public class SHOW_MENU : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SHOW_MENU() {
  }
 public SHOW_MENU(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
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
MENU_EXEC_0 = _world.AcknexObject.GetAcknexObject(3937163846);
_world.AcknexObject.SetAcknexObject(81,MENU_EXEC_0);
CLEAR_MENU_2 = _world.AcknexObject.GetAcknexObject(3637820744);
_world.AcknexObject.SetAcknexObject(82,CLEAR_MENU_2);
MENU_UP_4 = _world.AcknexObject.GetAcknexObject(3517681062);
_world.AcknexObject.SetAcknexObject(105,MENU_UP_4);
MENU_DOWN_6 = _world.AcknexObject.GetAcknexObject(3937118713);
_world.AcknexObject.SetAcknexObject(106,MENU_DOWN_6);
MOVE_MODE_9 = _world.GetObject(ObjectType.Skill,362);
MOVE_MODE_9.SetFloat(231,0f);
MENU_POS_12 = _world.AcknexObject.GetAcknexObject(119320659);
MENU_POS_12.SetFloat(232,1f);
MENU_POS_14 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_14_val = MENU_POS_14.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MENU_POS_14_val , 0f))
{
MENU_POS_16 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_16.SetFloat(231,1f);
}
MENUEXIT_TXT_18 = _world.AcknexObject.GetAcknexObject(3230524091);
MENUEXIT_TXT_20 = _world.AcknexObject.GetAcknexObject(3230524091);
temp_21 =MENUEXIT_TXT_20.GetFloat(226);
MENU1_TXT_23 = _world.AcknexObject.GetAcknexObject(3883542130);
temp_24 =MENU1_TXT_23.GetFloat(226);
MENU_POS_27 = _world.AcknexObject.GetAcknexObject(119320659);
temp_28 =MENU_POS_27.GetFloat(233);
MENUEXIT_TXT_18.SetFloat(226,temp_24+temp_28*16f-8f);
MENU1_TXT_33 = _world.AcknexObject.GetAcknexObject(3883542130);
_world.AcknexObject.SetAcknexObject(123,MENU1_TXT_33);
MENU2_TXT_36 = _world.AcknexObject.GetAcknexObject(3884728051);
_world.AcknexObject.SetAcknexObject(124,MENU2_TXT_36);
MENU3_TXT_39 = _world.AcknexObject.GetAcknexObject(3885913972);
_world.AcknexObject.SetAcknexObject(125,MENU3_TXT_39);
MENU4_TXT_42 = _world.AcknexObject.GetAcknexObject(3887099893);
_world.AcknexObject.SetAcknexObject(126,MENU4_TXT_42);
MENU5_TXT_45 = _world.AcknexObject.GetAcknexObject(3888285814);
_world.AcknexObject.SetAcknexObject(127,MENU5_TXT_45);
MENU6_TXT_48 = _world.AcknexObject.GetAcknexObject(3889471735);
_world.AcknexObject.SetAcknexObject(128,MENU6_TXT_48);
MENUEXIT_TXT_51 = _world.AcknexObject.GetAcknexObject(3230524091);
_world.AcknexObject.SetAcknexObject(129,MENUEXIT_TXT_51);
BLINK:
{
            var enumerator = CoroutinePool.Get<SET_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }
            startTime1 = Time.time;
            endTime1 = startTime1 + TimeUtils.FramesToTime((int)3f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
MENU_POS_55 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_55_val = MENU_POS_55.GetFloat(PropertyName.VAL);
if (MENU_POS_55_val > MENU_POS_55.GetFloat(PropertyName.MAX))
{
EMPTY_56 = _world.AcknexObject.GetAcknexObject(218838908);
MENUEXIT_TXT_58 = _world.AcknexObject.GetAcknexObject(3230524091);
MENUEXIT_TXT_58_array = MENUEXIT_TXT_58.GetObject<List<IAcknexObject>>(293);
MENUEXIT_TXT_58_index = MENUEXIT_TXT_58.GetInteger(PropertyName.INDEX);
MENUEXIT_TXT_58_array[MENUEXIT_TXT_58_index-1] = EMPTY_56;
MENUEXIT_TXT_58.IsDirty = true;
}
MENU_POS_60 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_60_val = MENU_POS_60.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MENU_POS_60_val , 1f))
{
EMPTY_61 = _world.AcknexObject.GetAcknexObject(218838908);
MENU1_TXT_63 = _world.AcknexObject.GetAcknexObject(3883542130);
MENU1_TXT_63_array = MENU1_TXT_63.GetObject<List<IAcknexObject>>(293);
MENU1_TXT_63_index = MENU1_TXT_63.GetInteger(PropertyName.INDEX);
MENU1_TXT_63_array[MENU1_TXT_63_index-1] = EMPTY_61;
MENU1_TXT_63.IsDirty = true;
}
MENU_POS_65 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_65_val = MENU_POS_65.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MENU_POS_65_val , 2f))
{
EMPTY_66 = _world.AcknexObject.GetAcknexObject(218838908);
MENU2_TXT_68 = _world.AcknexObject.GetAcknexObject(3884728051);
MENU2_TXT_68_array = MENU2_TXT_68.GetObject<List<IAcknexObject>>(293);
MENU2_TXT_68_index = MENU2_TXT_68.GetInteger(PropertyName.INDEX);
MENU2_TXT_68_array[MENU2_TXT_68_index-1] = EMPTY_66;
MENU2_TXT_68.IsDirty = true;
}
MENU_POS_70 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_70_val = MENU_POS_70.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MENU_POS_70_val , 3f))
{
EMPTY_71 = _world.AcknexObject.GetAcknexObject(218838908);
MENU3_TXT_73 = _world.AcknexObject.GetAcknexObject(3885913972);
MENU3_TXT_73_array = MENU3_TXT_73.GetObject<List<IAcknexObject>>(293);
MENU3_TXT_73_index = MENU3_TXT_73.GetInteger(PropertyName.INDEX);
MENU3_TXT_73_array[MENU3_TXT_73_index-1] = EMPTY_71;
MENU3_TXT_73.IsDirty = true;
}
MENU_POS_75 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_75_val = MENU_POS_75.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MENU_POS_75_val , 4f))
{
EMPTY_76 = _world.AcknexObject.GetAcknexObject(218838908);
MENU4_TXT_78 = _world.AcknexObject.GetAcknexObject(3887099893);
MENU4_TXT_78_array = MENU4_TXT_78.GetObject<List<IAcknexObject>>(293);
MENU4_TXT_78_index = MENU4_TXT_78.GetInteger(PropertyName.INDEX);
MENU4_TXT_78_array[MENU4_TXT_78_index-1] = EMPTY_76;
MENU4_TXT_78.IsDirty = true;
}
MENU_POS_80 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_80_val = MENU_POS_80.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MENU_POS_80_val , 5f))
{
EMPTY_81 = _world.AcknexObject.GetAcknexObject(218838908);
MENU5_TXT_83 = _world.AcknexObject.GetAcknexObject(3888285814);
MENU5_TXT_83_array = MENU5_TXT_83.GetObject<List<IAcknexObject>>(293);
MENU5_TXT_83_index = MENU5_TXT_83.GetInteger(PropertyName.INDEX);
MENU5_TXT_83_array[MENU5_TXT_83_index-1] = EMPTY_81;
MENU5_TXT_83.IsDirty = true;
}
MENU_POS_85 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_85_val = MENU_POS_85.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MENU_POS_85_val , 6f))
{
EMPTY_86 = _world.AcknexObject.GetAcknexObject(218838908);
MENU6_TXT_88 = _world.AcknexObject.GetAcknexObject(3889471735);
MENU6_TXT_88_array = MENU6_TXT_88.GetObject<List<IAcknexObject>>(293);
MENU6_TXT_88_index = MENU6_TXT_88.GetInteger(PropertyName.INDEX);
MENU6_TXT_88_array[MENU6_TXT_88_index-1] = EMPTY_86;
MENU6_TXT_88.IsDirty = true;
}
MENU_POS_90 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_90_val = MENU_POS_90.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MENU_POS_90_val , 0f))
{
return false;
}

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.FramesToTime((int)3f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
goto BLINK;
//Unknown keyword: 
      return false;
  }
IAcknexObject MENU_EXEC_0;
IAcknexObject CLEAR_MENU_2;
IAcknexObject MENU_UP_4;
IAcknexObject MENU_DOWN_6;
IAcknexObject MOVE_MODE_9;
IAcknexObject MENU_POS_12;
IAcknexObject MENU_POS_14;
float MENU_POS_14_val;
IAcknexObject MENU_POS_16;
IAcknexObject MENUEXIT_TXT_18;
IAcknexObject MENUEXIT_TXT_20;
float temp_21;
IAcknexObject MENU1_TXT_23;
float temp_24;
IAcknexObject MENU_POS_27;
float temp_28;
IAcknexObject MENU1_TXT_33;
IAcknexObject MENU2_TXT_36;
IAcknexObject MENU3_TXT_39;
IAcknexObject MENU4_TXT_42;
IAcknexObject MENU5_TXT_45;
IAcknexObject MENU6_TXT_48;
IAcknexObject MENUEXIT_TXT_51;
float startTime1;
float endTime1;
IAcknexObject MENU_POS_55;
float MENU_POS_55_val;
IAcknexObject EMPTY_56;
IAcknexObject MENUEXIT_TXT_58;
List<IAcknexObject> MENUEXIT_TXT_58_array;
int MENUEXIT_TXT_58_index;
IAcknexObject MENU_POS_60;
float MENU_POS_60_val;
IAcknexObject EMPTY_61;
IAcknexObject MENU1_TXT_63;
List<IAcknexObject> MENU1_TXT_63_array;
int MENU1_TXT_63_index;
IAcknexObject MENU_POS_65;
float MENU_POS_65_val;
IAcknexObject EMPTY_66;
IAcknexObject MENU2_TXT_68;
List<IAcknexObject> MENU2_TXT_68_array;
int MENU2_TXT_68_index;
IAcknexObject MENU_POS_70;
float MENU_POS_70_val;
IAcknexObject EMPTY_71;
IAcknexObject MENU3_TXT_73;
List<IAcknexObject> MENU3_TXT_73_array;
int MENU3_TXT_73_index;
IAcknexObject MENU_POS_75;
float MENU_POS_75_val;
IAcknexObject EMPTY_76;
IAcknexObject MENU4_TXT_78;
List<IAcknexObject> MENU4_TXT_78_array;
int MENU4_TXT_78_index;
IAcknexObject MENU_POS_80;
float MENU_POS_80_val;
IAcknexObject EMPTY_81;
IAcknexObject MENU5_TXT_83;
List<IAcknexObject> MENU5_TXT_83_array;
int MENU5_TXT_83_index;
IAcknexObject MENU_POS_85;
float MENU_POS_85_val;
IAcknexObject EMPTY_86;
IAcknexObject MENU6_TXT_88;
List<IAcknexObject> MENU6_TXT_88_array;
int MENU6_TXT_88_index;
IAcknexObject MENU_POS_90;
float MENU_POS_90_val;
float startTime2;
float endTime2;
}
public class CLEAR_MENU : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CLEAR_MENU() {
  }
 public CLEAR_MENU(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
EMPTY_0 = _world.AcknexObject.GetAcknexObject(218838908);
_world.SetSynonymObject(3883540907,EMPTY_0);
EMPTY_2 = _world.AcknexObject.GetAcknexObject(218838908);
_world.SetSynonymObject(3884726828,EMPTY_2);
EMPTY_4 = _world.AcknexObject.GetAcknexObject(218838908);
_world.SetSynonymObject(3885912749,EMPTY_4);
EMPTY_6 = _world.AcknexObject.GetAcknexObject(218838908);
_world.SetSynonymObject(3887098670,EMPTY_6);
EMPTY_8 = _world.AcknexObject.GetAcknexObject(218838908);
_world.SetSynonymObject(3888284591,EMPTY_8);
EMPTY_10 = _world.AcknexObject.GetAcknexObject(218838908);
_world.SetSynonymObject(3889470512,EMPTY_10);
EMPTY_12 = _world.AcknexObject.GetAcknexObject(218838908);
MENU1_TXT_14 = _world.AcknexObject.GetAcknexObject(3883542130);
MENU1_TXT_14_array = MENU1_TXT_14.GetObject<List<IAcknexObject>>(293);
MENU1_TXT_14_index = MENU1_TXT_14.GetInteger(PropertyName.INDEX);
MENU1_TXT_14_array[MENU1_TXT_14_index-1] = EMPTY_12;
MENU1_TXT_14.IsDirty = true;
EMPTY_15 = _world.AcknexObject.GetAcknexObject(218838908);
MENU2_TXT_17 = _world.AcknexObject.GetAcknexObject(3884728051);
MENU2_TXT_17_array = MENU2_TXT_17.GetObject<List<IAcknexObject>>(293);
MENU2_TXT_17_index = MENU2_TXT_17.GetInteger(PropertyName.INDEX);
MENU2_TXT_17_array[MENU2_TXT_17_index-1] = EMPTY_15;
MENU2_TXT_17.IsDirty = true;
EMPTY_18 = _world.AcknexObject.GetAcknexObject(218838908);
MENU3_TXT_20 = _world.AcknexObject.GetAcknexObject(3885913972);
MENU3_TXT_20_array = MENU3_TXT_20.GetObject<List<IAcknexObject>>(293);
MENU3_TXT_20_index = MENU3_TXT_20.GetInteger(PropertyName.INDEX);
MENU3_TXT_20_array[MENU3_TXT_20_index-1] = EMPTY_18;
MENU3_TXT_20.IsDirty = true;
EMPTY_21 = _world.AcknexObject.GetAcknexObject(218838908);
MENU4_TXT_23 = _world.AcknexObject.GetAcknexObject(3887099893);
MENU4_TXT_23_array = MENU4_TXT_23.GetObject<List<IAcknexObject>>(293);
MENU4_TXT_23_index = MENU4_TXT_23.GetInteger(PropertyName.INDEX);
MENU4_TXT_23_array[MENU4_TXT_23_index-1] = EMPTY_21;
MENU4_TXT_23.IsDirty = true;
EMPTY_24 = _world.AcknexObject.GetAcknexObject(218838908);
MENU5_TXT_26 = _world.AcknexObject.GetAcknexObject(3888285814);
MENU5_TXT_26_array = MENU5_TXT_26.GetObject<List<IAcknexObject>>(293);
MENU5_TXT_26_index = MENU5_TXT_26.GetInteger(PropertyName.INDEX);
MENU5_TXT_26_array[MENU5_TXT_26_index-1] = EMPTY_24;
MENU5_TXT_26.IsDirty = true;
EMPTY_27 = _world.AcknexObject.GetAcknexObject(218838908);
MENU6_TXT_29 = _world.AcknexObject.GetAcknexObject(3889471735);
MENU6_TXT_29_array = MENU6_TXT_29.GetObject<List<IAcknexObject>>(293);
MENU6_TXT_29_index = MENU6_TXT_29.GetInteger(PropertyName.INDEX);
MENU6_TXT_29_array[MENU6_TXT_29_index-1] = EMPTY_27;
MENU6_TXT_29.IsDirty = true;
_world.AcknexObject.SetAcknexObject(123,null);
_world.AcknexObject.SetAcknexObject(124,null);
_world.AcknexObject.SetAcknexObject(125,null);
_world.AcknexObject.SetAcknexObject(126,null);
_world.AcknexObject.SetAcknexObject(127,null);
_world.AcknexObject.SetAcknexObject(128,null);
_world.AcknexObject.SetAcknexObject(129,null);
MENU_POS_53 = _world.AcknexObject.GetAcknexObject(119320659);
MENU_POS_53.SetFloat(232,0f);
MENU_POS_55 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_55.SetFloat(231,0f);
MAIN_MENU_56 = _world.AcknexObject.GetAcknexObject(2826030598);
_world.AcknexObject.SetAcknexObject(82,MAIN_MENU_56);
_world.AcknexObject.SetAcknexObject(105,null);
_world.AcknexObject.SetAcknexObject(106,null);
_world.AcknexObject.SetAcknexObject(81,null);
MOVE_MODE_65 = _world.GetObject(ObjectType.Skill,362);
MOVE_MODE_65.SetFloat(231,1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject EMPTY_0;
IAcknexObject EMPTY_2;
IAcknexObject EMPTY_4;
IAcknexObject EMPTY_6;
IAcknexObject EMPTY_8;
IAcknexObject EMPTY_10;
IAcknexObject EMPTY_12;
IAcknexObject MENU1_TXT_14;
List<IAcknexObject> MENU1_TXT_14_array;
int MENU1_TXT_14_index;
IAcknexObject EMPTY_15;
IAcknexObject MENU2_TXT_17;
List<IAcknexObject> MENU2_TXT_17_array;
int MENU2_TXT_17_index;
IAcknexObject EMPTY_18;
IAcknexObject MENU3_TXT_20;
List<IAcknexObject> MENU3_TXT_20_array;
int MENU3_TXT_20_index;
IAcknexObject EMPTY_21;
IAcknexObject MENU4_TXT_23;
List<IAcknexObject> MENU4_TXT_23_array;
int MENU4_TXT_23_index;
IAcknexObject EMPTY_24;
IAcknexObject MENU5_TXT_26;
List<IAcknexObject> MENU5_TXT_26_array;
int MENU5_TXT_26_index;
IAcknexObject EMPTY_27;
IAcknexObject MENU6_TXT_29;
List<IAcknexObject> MENU6_TXT_29_array;
int MENU6_TXT_29_index;
IAcknexObject MENU_POS_53;
IAcknexObject MENU_POS_55;
IAcknexObject MAIN_MENU_56;
IAcknexObject MOVE_MODE_65;
}
public class MENU_UP : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public MENU_UP() {
  }
 public MENU_UP(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
KLICK_0 = _world.AcknexObject.GetAcknexObject(225910299);
_world.PlaySound(KLICK_0,0.5f, null);
{
            var enumerator = CoroutinePool.Get<SET_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MENU_POS_3 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_3_val = MENU_POS_3.GetFloat(PropertyName.VAL);
MENU_POS_4 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_4.SetFloat(231,MENU_POS_3_val + -1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject KLICK_0;
IAcknexObject MENU_POS_3;
float MENU_POS_3_val;
IAcknexObject MENU_POS_4;
}
public class MENU_DOWN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public MENU_DOWN() {
  }
 public MENU_DOWN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
KLICK_0 = _world.AcknexObject.GetAcknexObject(225910299);
_world.PlaySound(KLICK_0,0.5f, null);
{
            var enumerator = CoroutinePool.Get<SET_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MENU_POS_3 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_3_val = MENU_POS_3.GetFloat(PropertyName.VAL);
MENU_POS_4 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_4.SetFloat(231,MENU_POS_3_val + 1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject KLICK_0;
IAcknexObject MENU_POS_3;
float MENU_POS_3_val;
IAcknexObject MENU_POS_4;
}
public class MENU_EXEC : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public MENU_EXEC() {
  }
 public MENU_EXEC(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
KLICK_0 = _world.AcknexObject.GetAcknexObject(225910299);
_world.PlaySound(KLICK_0,0.5f, null);
MENU_POS_2 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_2_val = MENU_POS_2.GetFloat(PropertyName.VAL);
if (MENU_POS_2_val > MENU_POS_2.GetFloat(PropertyName.MAX))
{
{
            var enumerator = CoroutinePool.Get<CLEAR_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MENU_POS_4 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_4_val = MENU_POS_4.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MENU_POS_4_val , 1f))
{
{
            var enumerator = _world.CallSynonymAction(3883520746, MY, THERE);
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MENU_POS_6 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_6_val = MENU_POS_6.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MENU_POS_6_val , 2f))
{
{
            var enumerator = _world.CallSynonymAction(3884706667, MY, THERE);
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MENU_POS_8 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_8_val = MENU_POS_8.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MENU_POS_8_val , 3f))
{
{
            var enumerator = _world.CallSynonymAction(3885892588, MY, THERE);
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MENU_POS_10 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_10_val = MENU_POS_10.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MENU_POS_10_val , 4f))
{
{
            var enumerator = _world.CallSynonymAction(3887078509, MY, THERE);
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MENU_POS_12 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_12_val = MENU_POS_12.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MENU_POS_12_val , 5f))
{
{
            var enumerator = _world.CallSynonymAction(3888264430, MY, THERE);
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
MENU_POS_14 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_14_val = MENU_POS_14.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MENU_POS_14_val , 6f))
{
{
            var enumerator = _world.CallSynonymAction(3889450351, MY, THERE);
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
//Unknown keyword: 
      return false;
  }
IAcknexObject KLICK_0;
IAcknexObject MENU_POS_2;
float MENU_POS_2_val;
IAcknexObject MENU_POS_4;
float MENU_POS_4_val;
IAcknexObject MENU_POS_6;
float MENU_POS_6_val;
IAcknexObject MENU_POS_8;
float MENU_POS_8_val;
IAcknexObject MENU_POS_10;
float MENU_POS_10_val;
IAcknexObject MENU_POS_12;
float MENU_POS_12_val;
IAcknexObject MENU_POS_14;
float MENU_POS_14_val;
}
public class SHOW_MESSAGE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SHOW_MESSAGE() {
  }
 public SHOW_MESSAGE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
SCREEN_TXT_0 = _world.AcknexObject.GetAcknexObject(350357484);
_world.AcknexObject.SetAcknexObject(127,SCREEN_TXT_0);

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
        
_world.AcknexObject.SetAcknexObject(127,null);
//Unknown keyword: 
      return false;
  }
IAcknexObject SCREEN_TXT_0;
float startTime1;
float endTime1;
}
public class WAIT_YESNO : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public WAIT_YESNO() {
  }
 public WAIT_YESNO(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SCREEN_TXT_0 = _world.AcknexObject.GetAcknexObject(350357484);
_world.AcknexObject.SetAcknexObject(127,SCREEN_TXT_0);
MOVE_MODE_4 = _world.GetObject(ObjectType.Skill,362);
MOVE_MODE_4.SetFloat(231,0f);
CLEAR_YESNO_5 = _world.AcknexObject.GetAcknexObject(4098171905);
_world.AcknexObject.SetAcknexObject(61,CLEAR_YESNO_5);
CLEAR_YESNO_7 = _world.AcknexObject.GetAcknexObject(4098171905);
_world.AcknexObject.SetAcknexObject(82,CLEAR_YESNO_7);
//Unknown keyword: 
      return false;
  }
IAcknexObject SCREEN_TXT_0;
IAcknexObject MOVE_MODE_4;
IAcknexObject CLEAR_YESNO_5;
IAcknexObject CLEAR_YESNO_7;
}
public class CLEAR_YESNO : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CLEAR_YESNO() {
  }
 public CLEAR_YESNO(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
_world.AcknexObject.SetAcknexObject(127,null);
MOVE_MODE_4 = _world.GetObject(ObjectType.Skill,362);
MOVE_MODE_4.SetFloat(231,1f);
_world.AcknexObject.SetAcknexObject(57,null);
_world.AcknexObject.SetAcknexObject(71,null);
_world.AcknexObject.SetAcknexObject(72,null);
_world.AcknexObject.SetAcknexObject(61,null);
MAIN_MENU_13 = _world.AcknexObject.GetAcknexObject(2826030598);
_world.AcknexObject.SetAcknexObject(82,MAIN_MENU_13);
//Unknown keyword: 
      return false;
  }
IAcknexObject MOVE_MODE_4;
IAcknexObject MAIN_MENU_13;
}
public class SAVE_GAME : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SAVE_GAME() {
  }
 public SAVE_GAME(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MOVE_MODE_1 = _world.GetObject(ObjectType.Skill,362);
MOVE_MODE_1.SetFloat(231,1f);
//Unknown keyword: SAVE_INFO
LOAD_STATUS_2 = _world.AcknexObject.GetAcknexObject(1876261040);
_world.AcknexObject.SetAcknexObject(13,LOAD_STATUS_2);
RESULT_6 = _world.GetObject(ObjectType.Skill,446);
RESULT_6.SetFloat(231,0f);
OK_7 = _world.AcknexObject.GetAcknexObject(5863591);
SCREEN_TXT_9 = _world.AcknexObject.GetAcknexObject(350357484);
SCREEN_TXT_9_array = SCREEN_TXT_9.GetObject<List<IAcknexObject>>(293);
SCREEN_TXT_9_index = SCREEN_TXT_9.GetInteger(PropertyName.INDEX);
SCREEN_TXT_9_array[SCREEN_TXT_9_index-1] = OK_7;
SCREEN_TXT_9.IsDirty = true;
{
            var enumerator = CoroutinePool.Get<SHOW_MESSAGE>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: SAVE
_world.AcknexObject.SetAcknexObject(13,null);
RESULT_14 = _world.GetObject(ObjectType.Skill,446);
RESULT_14_val = RESULT_14.GetFloat(PropertyName.VAL);
if (MathUtils.CheckLower(RESULT_14_val , 0f))
{
SAVE_NIX_15 = _world.AcknexObject.GetAcknexObject(1850109514);
SCREEN_TXT_17 = _world.AcknexObject.GetAcknexObject(350357484);
SCREEN_TXT_17_array = SCREEN_TXT_17.GetObject<List<IAcknexObject>>(293);
SCREEN_TXT_17_index = SCREEN_TXT_17.GetInteger(PropertyName.INDEX);
SCREEN_TXT_17_array[SCREEN_TXT_17_index-1] = SAVE_NIX_15;
SCREEN_TXT_17.IsDirty = true;
}
//Unknown keyword: 
      return false;
  }
IAcknexObject MOVE_MODE_1;
IAcknexObject LOAD_STATUS_2;
IAcknexObject RESULT_6;
IAcknexObject OK_7;
IAcknexObject SCREEN_TXT_9;
List<IAcknexObject> SCREEN_TXT_9_array;
int SCREEN_TXT_9_index;
IAcknexObject RESULT_14;
float RESULT_14_val;
IAcknexObject SAVE_NIX_15;
IAcknexObject SCREEN_TXT_17;
List<IAcknexObject> SCREEN_TXT_17_array;
int SCREEN_TXT_17_index;
}
public class LOAD_GAME : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LOAD_GAME() {
  }
 public LOAD_GAME(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
WAIT_TXT_0 = _world.AcknexObject.GetAcknexObject(34225313);
SCREEN_TXT_2 = _world.AcknexObject.GetAcknexObject(350357484);
SCREEN_TXT_2_array = SCREEN_TXT_2.GetObject<List<IAcknexObject>>(293);
SCREEN_TXT_2_index = SCREEN_TXT_2.GetInteger(PropertyName.INDEX);
SCREEN_TXT_2_array[SCREEN_TXT_2_index-1] = WAIT_TXT_0;
SCREEN_TXT_2.IsDirty = true;
SCREEN_TXT_3 = _world.AcknexObject.GetAcknexObject(350357484);
_world.AcknexObject.SetAcknexObject(127,SCREEN_TXT_3);

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
        
//Unknown keyword: LOAD
LOAD_NIX_7 = _world.AcknexObject.GetAcknexObject(4246372603);
SCREEN_TXT_9 = _world.AcknexObject.GetAcknexObject(350357484);
SCREEN_TXT_9_array = SCREEN_TXT_9.GetObject<List<IAcknexObject>>(293);
SCREEN_TXT_9_index = SCREEN_TXT_9.GetInteger(PropertyName.INDEX);
SCREEN_TXT_9_array[SCREEN_TXT_9_index-1] = LOAD_NIX_7;
SCREEN_TXT_9.IsDirty = true;
{
            var enumerator = CoroutinePool.Get<SHOW_MESSAGE>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject WAIT_TXT_0;
IAcknexObject SCREEN_TXT_2;
List<IAcknexObject> SCREEN_TXT_2_array;
int SCREEN_TXT_2_index;
IAcknexObject SCREEN_TXT_3;
float startTime1;
float endTime1;
IAcknexObject LOAD_NIX_7;
IAcknexObject SCREEN_TXT_9;
List<IAcknexObject> SCREEN_TXT_9_array;
int SCREEN_TXT_9_index;
}
public class SAVE_QUICK : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SAVE_QUICK() {
  }
 public SAVE_QUICK(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SLOT_1 = _world.GetObject(ObjectType.Skill,2089542831);
SLOT_1_val = SLOT_1.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(SLOT_1_val , 0f))
{
{
            var enumerator = CoroutinePool.Get<SAVE_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
{
            var enumerator = CoroutinePool.Get<CLEAR_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }QSAV_YESNO_2 = _world.AcknexObject.GetAcknexObject(4264673813);
SCREEN_TXT_4 = _world.AcknexObject.GetAcknexObject(350357484);
SCREEN_TXT_4_array = SCREEN_TXT_4.GetObject<List<IAcknexObject>>(293);
SCREEN_TXT_4_index = SCREEN_TXT_4.GetInteger(PropertyName.INDEX);
SCREEN_TXT_4_array[SCREEN_TXT_4_index-1] = QSAV_YESNO_2;
SCREEN_TXT_4.IsDirty = true;
SAVE_GAME_5 = _world.AcknexObject.GetAcknexObject(923779253);
_world.AcknexObject.SetAcknexObject(57,SAVE_GAME_5);
SAVE_GAME_7 = _world.AcknexObject.GetAcknexObject(923779253);
_world.AcknexObject.SetAcknexObject(71,SAVE_GAME_7);
SAVE_GAME_9 = _world.AcknexObject.GetAcknexObject(923779253);
_world.AcknexObject.SetAcknexObject(72,SAVE_GAME_9);
{
            var enumerator = CoroutinePool.Get<WAIT_YESNO>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject SLOT_1;
float SLOT_1_val;
IAcknexObject QSAV_YESNO_2;
IAcknexObject SCREEN_TXT_4;
List<IAcknexObject> SCREEN_TXT_4_array;
int SCREEN_TXT_4_index;
IAcknexObject SAVE_GAME_5;
IAcknexObject SAVE_GAME_7;
IAcknexObject SAVE_GAME_9;
}
public class LOAD_QUICK : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LOAD_QUICK() {
  }
 public LOAD_QUICK(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SLOT_1 = _world.GetObject(ObjectType.Skill,2089542831);
SLOT_1_val = SLOT_1.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(SLOT_1_val , 0f))
{
{
            var enumerator = CoroutinePool.Get<LOAD_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
}
{
            var enumerator = CoroutinePool.Get<CLEAR_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }QLOAD_YESNO_2 = _world.AcknexObject.GetAcknexObject(2525242635);
SCREEN_TXT_4 = _world.AcknexObject.GetAcknexObject(350357484);
SCREEN_TXT_4_array = SCREEN_TXT_4.GetObject<List<IAcknexObject>>(293);
SCREEN_TXT_4_index = SCREEN_TXT_4.GetInteger(PropertyName.INDEX);
SCREEN_TXT_4_array[SCREEN_TXT_4_index-1] = QLOAD_YESNO_2;
SCREEN_TXT_4.IsDirty = true;
LOAD_GAME_5 = _world.AcknexObject.GetAcknexObject(2691049862);
_world.AcknexObject.SetAcknexObject(57,LOAD_GAME_5);
LOAD_GAME_7 = _world.AcknexObject.GetAcknexObject(2691049862);
_world.AcknexObject.SetAcknexObject(71,LOAD_GAME_7);
LOAD_GAME_9 = _world.AcknexObject.GetAcknexObject(2691049862);
_world.AcknexObject.SetAcknexObject(72,LOAD_GAME_9);
{
            var enumerator = CoroutinePool.Get<WAIT_YESNO>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject SLOT_1;
float SLOT_1_val;
IAcknexObject QLOAD_YESNO_2;
IAcknexObject SCREEN_TXT_4;
List<IAcknexObject> SCREEN_TXT_4_array;
int SCREEN_TXT_4_index;
IAcknexObject LOAD_GAME_5;
IAcknexObject LOAD_GAME_7;
IAcknexObject LOAD_GAME_9;
}
public class LOAD_STATUS : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LOAD_STATUS() {
  }
 public LOAD_STATUS(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
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
            endTime1 = startTime1 + TimeUtils.TicksToTime((int)1f);
            _cursor = 1;
            _coroutine1:
            while (Time.time  < endTime1)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
//Unknown keyword: LOAD_INFO
_world.AcknexObject.SetAcknexObject(13,null);
MOVE_MODE_5 = _world.GetObject(ObjectType.Skill,362);
MOVE_MODE_5.SetFloat(231,1f);
//Unknown keyword: 
      return false;
  }
float startTime1;
float endTime1;
IAcknexObject MOVE_MODE_5;
}
public class EXIT_YESNO : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public EXIT_YESNO() {
  }
 public EXIT_YESNO(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = CoroutinePool.Get<CLEAR_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }QUIT_YESNO_0 = _world.AcknexObject.GetAcknexObject(2940522909);
SCREEN_TXT_2 = _world.AcknexObject.GetAcknexObject(350357484);
SCREEN_TXT_2_array = SCREEN_TXT_2.GetObject<List<IAcknexObject>>(293);
SCREEN_TXT_2_index = SCREEN_TXT_2.GetInteger(PropertyName.INDEX);
SCREEN_TXT_2_array[SCREEN_TXT_2_index-1] = QUIT_YESNO_0;
SCREEN_TXT_2.IsDirty = true;
EXIT_GAME_3 = _world.AcknexObject.GetAcknexObject(1282670208);
_world.AcknexObject.SetAcknexObject(57,EXIT_GAME_3);
EXIT_GAME_5 = _world.AcknexObject.GetAcknexObject(1282670208);
_world.AcknexObject.SetAcknexObject(71,EXIT_GAME_5);
EXIT_GAME_7 = _world.AcknexObject.GetAcknexObject(1282670208);
_world.AcknexObject.SetAcknexObject(72,EXIT_GAME_7);
{
            var enumerator = CoroutinePool.Get<WAIT_YESNO>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject QUIT_YESNO_0;
IAcknexObject SCREEN_TXT_2;
List<IAcknexObject> SCREEN_TXT_2_array;
int SCREEN_TXT_2_index;
IAcknexObject EXIT_GAME_3;
IAcknexObject EXIT_GAME_5;
IAcknexObject EXIT_GAME_7;
}
public class EXIT_GAME : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public EXIT_GAME() {
  }
 public EXIT_GAME(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
Application.Quit();
//Unknown keyword: 
      return false;
  }
}
public class TOGGLE_MAP : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TOGGLE_MAP() {
  }
 public TOGGLE_MAP(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MAP_ROT_1 = _world.GetObject(ObjectType.Skill,382);
MAP_ROT_1.SetFloat(231,1f);
MAP_MODE_3 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_3_val = MAP_MODE_3.GetFloat(PropertyName.VAL);
MAP_MODE_4 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_4.SetFloat(231,MAP_MODE_3_val + 0.5f);
MAP_MODE_6 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_6_val = MAP_MODE_6.GetFloat(PropertyName.VAL);
if (MathUtils.CheckGreater(MAP_MODE_6_val , 0.5f))
{
MAP_MODE_8 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_8.SetFloat(231,0f);
}
//Unknown keyword: 
      return false;
  }
IAcknexObject MAP_ROT_1;
IAcknexObject MAP_MODE_3;
float MAP_MODE_3_val;
IAcknexObject MAP_MODE_4;
IAcknexObject MAP_MODE_6;
float MAP_MODE_6_val;
IAcknexObject MAP_MODE_8;
}
public class MSCALE_PLUS : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public MSCALE_PLUS() {
  }
 public MSCALE_PLUS(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MAP_MODE_1 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_1_val = MAP_MODE_1.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MAP_MODE_1_val , 0f))
{
return false;
}
MAP_SCALE_2 = _world.GetObject(ObjectType.Skill,379);
MAP_SCALE_3 = _world.GetObject(ObjectType.Skill,379);
MAP_SCALE_3_val = MAP_SCALE_3.GetFloat(PropertyName.VAL);
MAP_SCALE_4 = _world.GetObject(ObjectType.Skill,379);
MAP_SCALE_4_val = MAP_SCALE_4.GetFloat(PropertyName.VAL);
MAP_SCALE_2.SetFloat(231,MAP_SCALE_4_val*1.1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MAP_MODE_1;
float MAP_MODE_1_val;
IAcknexObject MAP_SCALE_2;
IAcknexObject MAP_SCALE_3;
float MAP_SCALE_3_val;
IAcknexObject MAP_SCALE_4;
float MAP_SCALE_4_val;
}
public class MSCALE_MINUS : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public MSCALE_MINUS() {
  }
 public MSCALE_MINUS(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MAP_MODE_1 = _world.GetObject(ObjectType.Skill,380);
MAP_MODE_1_val = MAP_MODE_1.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MAP_MODE_1_val , 0f))
{
return false;
}
MAP_SCALE_2 = _world.GetObject(ObjectType.Skill,379);
MAP_SCALE_3 = _world.GetObject(ObjectType.Skill,379);
MAP_SCALE_3_val = MAP_SCALE_3.GetFloat(PropertyName.VAL);
MAP_SCALE_4 = _world.GetObject(ObjectType.Skill,379);
MAP_SCALE_4_val = MAP_SCALE_4.GetFloat(PropertyName.VAL);
MAP_SCALE_2.SetFloat(231,MAP_SCALE_4_val*0.9f);
//Unknown keyword: 
      return false;
  }
IAcknexObject MAP_MODE_1;
float MAP_MODE_1_val;
IAcknexObject MAP_SCALE_2;
IAcknexObject MAP_SCALE_3;
float MAP_SCALE_3_val;
IAcknexObject MAP_SCALE_4;
float MAP_SCALE_4_val;
}
public class TOGGLE_MBLUR : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public TOGGLE_MBLUR() {
  }
 public TOGGLE_MBLUR(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MOTION_BLUR_1 = _world.GetObject(ObjectType.Skill,359);
MOTION_BLUR_1_val = MOTION_BLUR_1.GetFloat(PropertyName.VAL);
MOTION_BLUR_2 = _world.GetObject(ObjectType.Skill,359);
MOTION_BLUR_2.SetFloat(231,MOTION_BLUR_1_val + 0.5f);
MOTION_BLUR_4 = _world.GetObject(ObjectType.Skill,359);
MOTION_BLUR_4_val = MOTION_BLUR_4.GetFloat(PropertyName.VAL);
if (MathUtils.CheckGreater(MOTION_BLUR_4_val , 0.5f))
{
MOTION_BLUR_6 = _world.GetObject(ObjectType.Skill,359);
MOTION_BLUR_6.SetFloat(231,0f);
}
MBLUR_ON_7 = _world.AcknexObject.GetAcknexObject(461162411);
SCREEN_TXT_9 = _world.AcknexObject.GetAcknexObject(350357484);
SCREEN_TXT_9_array = SCREEN_TXT_9.GetObject<List<IAcknexObject>>(293);
SCREEN_TXT_9_index = SCREEN_TXT_9.GetInteger(PropertyName.INDEX);
SCREEN_TXT_9_array[SCREEN_TXT_9_index-1] = MBLUR_ON_7;
SCREEN_TXT_9.IsDirty = true;
MOTION_BLUR_11 = _world.GetObject(ObjectType.Skill,359);
MOTION_BLUR_11_val = MOTION_BLUR_11.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(MOTION_BLUR_11_val , 0f))
{
MBLUR_OFF_12 = _world.AcknexObject.GetAcknexObject(2333425481);
SCREEN_TXT_14 = _world.AcknexObject.GetAcknexObject(350357484);
SCREEN_TXT_14_array = SCREEN_TXT_14.GetObject<List<IAcknexObject>>(293);
SCREEN_TXT_14_index = SCREEN_TXT_14.GetInteger(PropertyName.INDEX);
SCREEN_TXT_14_array[SCREEN_TXT_14_index-1] = MBLUR_OFF_12;
SCREEN_TXT_14.IsDirty = true;
}
{
            var enumerator = CoroutinePool.Get<SHOW_MESSAGE>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MOTION_BLUR_1;
float MOTION_BLUR_1_val;
IAcknexObject MOTION_BLUR_2;
IAcknexObject MOTION_BLUR_4;
float MOTION_BLUR_4_val;
IAcknexObject MOTION_BLUR_6;
IAcknexObject MBLUR_ON_7;
IAcknexObject SCREEN_TXT_9;
List<IAcknexObject> SCREEN_TXT_9_array;
int SCREEN_TXT_9_index;
IAcknexObject MOTION_BLUR_11;
float MOTION_BLUR_11_val;
IAcknexObject MBLUR_OFF_12;
IAcknexObject SCREEN_TXT_14;
List<IAcknexObject> SCREEN_TXT_14_array;
int SCREEN_TXT_14_index;
}
public class INCREASE_VOL : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public INCREASE_VOL() {
  }
 public INCREASE_VOL(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SOUND_VOL_1 = _world.GetObject(ObjectType.Skill,405);
SOUND_VOL_1_val = SOUND_VOL_1.GetFloat(PropertyName.VAL);
SOUND_VOL_2 = _world.GetObject(ObjectType.Skill,405);
SOUND_VOL_2.SetFloat(231,SOUND_VOL_1_val + 0.2f);
MUSIC_VOL_4 = _world.GetObject(ObjectType.Skill,406);
MUSIC_VOL_4_val = MUSIC_VOL_4.GetFloat(PropertyName.VAL);
MUSIC_VOL_5 = _world.GetObject(ObjectType.Skill,406);
MUSIC_VOL_5.SetFloat(231,MUSIC_VOL_4_val + 0.1f);
VOL_PLUS_6 = _world.AcknexObject.GetAcknexObject(1396041121);
SCREEN_TXT_8 = _world.AcknexObject.GetAcknexObject(350357484);
SCREEN_TXT_8_array = SCREEN_TXT_8.GetObject<List<IAcknexObject>>(293);
SCREEN_TXT_8_index = SCREEN_TXT_8.GetInteger(PropertyName.INDEX);
SCREEN_TXT_8_array[SCREEN_TXT_8_index-1] = VOL_PLUS_6;
SCREEN_TXT_8.IsDirty = true;
{
            var enumerator = CoroutinePool.Get<SHOW_MESSAGE>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject SOUND_VOL_1;
float SOUND_VOL_1_val;
IAcknexObject SOUND_VOL_2;
IAcknexObject MUSIC_VOL_4;
float MUSIC_VOL_4_val;
IAcknexObject MUSIC_VOL_5;
IAcknexObject VOL_PLUS_6;
IAcknexObject SCREEN_TXT_8;
List<IAcknexObject> SCREEN_TXT_8_array;
int SCREEN_TXT_8_index;
}
public class DECREASE_VOL : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DECREASE_VOL() {
  }
 public DECREASE_VOL(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SOUND_VOL_1 = _world.GetObject(ObjectType.Skill,405);
SOUND_VOL_1_val = SOUND_VOL_1.GetFloat(PropertyName.VAL);
SOUND_VOL_2 = _world.GetObject(ObjectType.Skill,405);
SOUND_VOL_2.SetFloat(231,SOUND_VOL_1_val + -0.2f);
MUSIC_VOL_4 = _world.GetObject(ObjectType.Skill,406);
MUSIC_VOL_4_val = MUSIC_VOL_4.GetFloat(PropertyName.VAL);
MUSIC_VOL_5 = _world.GetObject(ObjectType.Skill,406);
MUSIC_VOL_5.SetFloat(231,MUSIC_VOL_4_val + -0.1f);
VOL_MINUS_6 = _world.AcknexObject.GetAcknexObject(3115978985);
SCREEN_TXT_8 = _world.AcknexObject.GetAcknexObject(350357484);
SCREEN_TXT_8_array = SCREEN_TXT_8.GetObject<List<IAcknexObject>>(293);
SCREEN_TXT_8_index = SCREEN_TXT_8.GetInteger(PropertyName.INDEX);
SCREEN_TXT_8_array[SCREEN_TXT_8_index-1] = VOL_MINUS_6;
SCREEN_TXT_8.IsDirty = true;
{
            var enumerator = CoroutinePool.Get<SHOW_MESSAGE>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject SOUND_VOL_1;
float SOUND_VOL_1_val;
IAcknexObject SOUND_VOL_2;
IAcknexObject MUSIC_VOL_4;
float MUSIC_VOL_4_val;
IAcknexObject MUSIC_VOL_5;
IAcknexObject VOL_MINUS_6;
IAcknexObject SCREEN_TXT_8;
List<IAcknexObject> SCREEN_TXT_8_array;
int SCREEN_TXT_8_index;
}
public class SHOW_OPTIONS : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SHOW_OPTIONS() {
  }
 public SHOW_OPTIONS(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = CoroutinePool.Get<CLEAR_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }OPTION_STR_0 = _world.AcknexObject.GetAcknexObject(315207358);
SCREEN_TXT_2 = _world.AcknexObject.GetAcknexObject(350357484);
SCREEN_TXT_2_array = SCREEN_TXT_2.GetObject<List<IAcknexObject>>(293);
SCREEN_TXT_2_index = SCREEN_TXT_2.GetInteger(PropertyName.INDEX);
SCREEN_TXT_2_array[SCREEN_TXT_2_index-1] = OPTION_STR_0;
SCREEN_TXT_2.IsDirty = true;
{
            var enumerator = CoroutinePool.Get<WAIT_YESNO>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject OPTION_STR_0;
IAcknexObject SCREEN_TXT_2;
List<IAcknexObject> SCREEN_TXT_2_array;
int SCREEN_TXT_2_index;
}
public class MAIN_MENU : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public MAIN_MENU() {
  }
 public MAIN_MENU(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = CoroutinePool.Get<CLEAR_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }SHOW_OPTION_STR_0 = _world.AcknexObject.GetAcknexObject(2934553246);
_world.SetSynonymObject(3883540907,SHOW_OPTION_STR_0);
LOAD_GAME_STR_2 = _world.AcknexObject.GetAcknexObject(206654654);
_world.SetSynonymObject(3884726828,LOAD_GAME_STR_2);
SAVE_GAME_STR_4 = _world.AcknexObject.GetAcknexObject(2134958957);
_world.SetSynonymObject(3885912749,SAVE_GAME_STR_4);
QUIT_GAME_STR_6 = _world.AcknexObject.GetAcknexObject(711944353);
_world.SetSynonymObject(3887098670,QUIT_GAME_STR_6);
SHOW_OPTIONS_8 = _world.AcknexObject.GetAcknexObject(3179747193);
_world.SetSynonymObject(3883520746,SHOW_OPTIONS_8);
LOAD_MENU_10 = _world.AcknexObject.GetAcknexObject(2691269889);
_world.SetSynonymObject(3884706667,LOAD_MENU_10);
SAVE_MENU_12 = _world.AcknexObject.GetAcknexObject(923999280);
_world.SetSynonymObject(3885892588,SAVE_MENU_12);
EXIT_YESNO_14 = _world.AcknexObject.GetAcknexObject(3694876436);
_world.SetSynonymObject(3887078509,EXIT_YESNO_14);
MENU_POS_18 = _world.AcknexObject.GetAcknexObject(119320659);
MENU_POS_18.SetFloat(233,5f);
{
            var enumerator = CoroutinePool.Get<SHOW_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject SHOW_OPTION_STR_0;
IAcknexObject LOAD_GAME_STR_2;
IAcknexObject SAVE_GAME_STR_4;
IAcknexObject QUIT_GAME_STR_6;
IAcknexObject SHOW_OPTIONS_8;
IAcknexObject LOAD_MENU_10;
IAcknexObject SAVE_MENU_12;
IAcknexObject EXIT_YESNO_14;
IAcknexObject MENU_POS_18;
}
public class DIFF_MENU : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public DIFF_MENU() {
  }
 public DIFF_MENU(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = CoroutinePool.Get<CLEAR_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }DIFFICULT1_STR_0 = _world.AcknexObject.GetAcknexObject(4241248752);
_world.SetSynonymObject(3883540907,DIFFICULT1_STR_0);
DIFFICULT2_STR_2 = _world.AcknexObject.GetAcknexObject(4242434673);
_world.SetSynonymObject(3884726828,DIFFICULT2_STR_2);
DIFFICULT3_STR_4 = _world.AcknexObject.GetAcknexObject(4243620594);
_world.SetSynonymObject(3885912749,DIFFICULT3_STR_4);
DIFFICULT4_STR_6 = _world.AcknexObject.GetAcknexObject(4244806515);
_world.SetSynonymObject(3887098670,DIFFICULT4_STR_6);
SET_DIFF1_8 = _world.AcknexObject.GetAcknexObject(2296468098);
_world.SetSynonymObject(3883520746,SET_DIFF1_8);
SET_DIFF2_10 = _world.AcknexObject.GetAcknexObject(2296468099);
_world.SetSynonymObject(3884706667,SET_DIFF2_10);
SET_DIFF3_12 = _world.AcknexObject.GetAcknexObject(2296468100);
_world.SetSynonymObject(3885892588,SET_DIFF3_12);
SET_DIFF4_14 = _world.AcknexObject.GetAcknexObject(2296468101);
_world.SetSynonymObject(3887078509,SET_DIFF4_14);
MENU_POS_18 = _world.AcknexObject.GetAcknexObject(119320659);
MENU_POS_18.SetFloat(233,5f);
{
            var enumerator = CoroutinePool.Get<SHOW_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject DIFFICULT1_STR_0;
IAcknexObject DIFFICULT2_STR_2;
IAcknexObject DIFFICULT3_STR_4;
IAcknexObject DIFFICULT4_STR_6;
IAcknexObject SET_DIFF1_8;
IAcknexObject SET_DIFF2_10;
IAcknexObject SET_DIFF3_12;
IAcknexObject SET_DIFF4_14;
IAcknexObject MENU_POS_18;
}
public class LEVEL_MENU : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LEVEL_MENU() {
  }
 public LEVEL_MENU(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
{
            var enumerator = CoroutinePool.Get<CLEAR_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }LEVEL1_STR_0 = _world.AcknexObject.GetAcknexObject(2699007630);
_world.SetSynonymObject(3883540907,LEVEL1_STR_0);
LEVEL2_STR_2 = _world.AcknexObject.GetAcknexObject(2700193551);
_world.SetSynonymObject(3884726828,LEVEL2_STR_2);
LEVEL3_STR_4 = _world.AcknexObject.GetAcknexObject(2701379472);
_world.SetSynonymObject(3885912749,LEVEL3_STR_4);
LEVEL4_STR_6 = _world.AcknexObject.GetAcknexObject(2702565393);
_world.SetSynonymObject(3887098670,LEVEL4_STR_6);
LEVEL5_STR_8 = _world.AcknexObject.GetAcknexObject(2703751314);
_world.SetSynonymObject(3888284591,LEVEL5_STR_8);
START_LEVEL1_10 = _world.AcknexObject.GetAcknexObject(491781123);
_world.SetSynonymObject(3883520746,START_LEVEL1_10);
START_LEVEL2_12 = _world.AcknexObject.GetAcknexObject(491781124);
_world.SetSynonymObject(3884706667,START_LEVEL2_12);
START_LEVEL3_14 = _world.AcknexObject.GetAcknexObject(491781125);
_world.SetSynonymObject(3885892588,START_LEVEL3_14);
START_LEVEL4_16 = _world.AcknexObject.GetAcknexObject(491781126);
_world.SetSynonymObject(3887078509,START_LEVEL4_16);
START_LEVEL5_18 = _world.AcknexObject.GetAcknexObject(491781127);
_world.SetSynonymObject(3888264430,START_LEVEL5_18);
MENU_POS_22 = _world.AcknexObject.GetAcknexObject(119320659);
MENU_POS_22.SetFloat(233,6f);
{
            var enumerator = CoroutinePool.Get<SHOW_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject LEVEL1_STR_0;
IAcknexObject LEVEL2_STR_2;
IAcknexObject LEVEL3_STR_4;
IAcknexObject LEVEL4_STR_6;
IAcknexObject LEVEL5_STR_8;
IAcknexObject START_LEVEL1_10;
IAcknexObject START_LEVEL2_12;
IAcknexObject START_LEVEL3_14;
IAcknexObject START_LEVEL4_16;
IAcknexObject START_LEVEL5_18;
IAcknexObject MENU_POS_22;
}
public class SAVE_MENU : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SAVE_MENU() {
  }
 public SAVE_MENU(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
//Unknown keyword: LOAD_INFO
{
            var enumerator = CoroutinePool.Get<CLEAR_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }NAME1_STR_0 = _world.AcknexObject.GetAcknexObject(950171735);
_world.SetSynonymObject(3883540907,NAME1_STR_0);
NAME2_STR_2 = _world.AcknexObject.GetAcknexObject(951357656);
_world.SetSynonymObject(3884726828,NAME2_STR_2);
NAME3_STR_4 = _world.AcknexObject.GetAcknexObject(952543577);
_world.SetSynonymObject(3885912749,NAME3_STR_4);
NAME4_STR_6 = _world.AcknexObject.GetAcknexObject(953729498);
_world.SetSynonymObject(3887098670,NAME4_STR_6);
NAME5_STR_8 = _world.AcknexObject.GetAcknexObject(954915419);
_world.SetSynonymObject(3888284591,NAME5_STR_8);
SAVE_NAME1_10 = _world.AcknexObject.GetAcknexObject(428213773);
_world.SetSynonymObject(3883520746,SAVE_NAME1_10);
SAVE_NAME2_12 = _world.AcknexObject.GetAcknexObject(428213774);
_world.SetSynonymObject(3884706667,SAVE_NAME2_12);
SAVE_NAME3_14 = _world.AcknexObject.GetAcknexObject(428213775);
_world.SetSynonymObject(3885892588,SAVE_NAME3_14);
SAVE_NAME4_16 = _world.AcknexObject.GetAcknexObject(428213776);
_world.SetSynonymObject(3887078509,SAVE_NAME4_16);
SAVE_NAME5_18 = _world.AcknexObject.GetAcknexObject(428213777);
_world.SetSynonymObject(3888264430,SAVE_NAME5_18);
MENU_POS_22 = _world.AcknexObject.GetAcknexObject(119320659);
MENU_POS_22.SetFloat(233,6f);
{
            var enumerator = CoroutinePool.Get<SHOW_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject NAME1_STR_0;
IAcknexObject NAME2_STR_2;
IAcknexObject NAME3_STR_4;
IAcknexObject NAME4_STR_6;
IAcknexObject NAME5_STR_8;
IAcknexObject SAVE_NAME1_10;
IAcknexObject SAVE_NAME2_12;
IAcknexObject SAVE_NAME3_14;
IAcknexObject SAVE_NAME4_16;
IAcknexObject SAVE_NAME5_18;
IAcknexObject MENU_POS_22;
}
public class LOAD_MENU : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LOAD_MENU() {
  }
 public LOAD_MENU(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
//Unknown keyword: LOAD_INFO
{
            var enumerator = CoroutinePool.Get<CLEAR_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }NAME1_STR_0 = _world.AcknexObject.GetAcknexObject(950171735);
_world.SetSynonymObject(3883540907,NAME1_STR_0);
NAME2_STR_2 = _world.AcknexObject.GetAcknexObject(951357656);
_world.SetSynonymObject(3884726828,NAME2_STR_2);
NAME3_STR_4 = _world.AcknexObject.GetAcknexObject(952543577);
_world.SetSynonymObject(3885912749,NAME3_STR_4);
NAME4_STR_6 = _world.AcknexObject.GetAcknexObject(953729498);
_world.SetSynonymObject(3887098670,NAME4_STR_6);
NAME5_STR_8 = _world.AcknexObject.GetAcknexObject(954915419);
_world.SetSynonymObject(3888284591,NAME5_STR_8);
LOAD_NAME1_10 = _world.AcknexObject.GetAcknexObject(2913569022);
_world.SetSynonymObject(3883520746,LOAD_NAME1_10);
LOAD_NAME2_12 = _world.AcknexObject.GetAcknexObject(2913569023);
_world.SetSynonymObject(3884706667,LOAD_NAME2_12);
LOAD_NAME3_14 = _world.AcknexObject.GetAcknexObject(2913569024);
_world.SetSynonymObject(3885892588,LOAD_NAME3_14);
LOAD_NAME4_16 = _world.AcknexObject.GetAcknexObject(2913569025);
_world.SetSynonymObject(3887078509,LOAD_NAME4_16);
LOAD_NAME5_18 = _world.AcknexObject.GetAcknexObject(2913569026);
_world.SetSynonymObject(3888264430,LOAD_NAME5_18);
MENU_POS_22 = _world.AcknexObject.GetAcknexObject(119320659);
MENU_POS_22.SetFloat(233,6f);
{
            var enumerator = CoroutinePool.Get<SHOW_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject NAME1_STR_0;
IAcknexObject NAME2_STR_2;
IAcknexObject NAME3_STR_4;
IAcknexObject NAME4_STR_6;
IAcknexObject NAME5_STR_8;
IAcknexObject LOAD_NAME1_10;
IAcknexObject LOAD_NAME2_12;
IAcknexObject LOAD_NAME3_14;
IAcknexObject LOAD_NAME4_16;
IAcknexObject LOAD_NAME5_18;
IAcknexObject MENU_POS_22;
}
public class SAVE_NAME1 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SAVE_NAME1() {
  }
 public SAVE_NAME1(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MENU_POS_2 = _world.AcknexObject.GetAcknexObject(119320659);
MENU_POS_2.SetFloat(232,0f);
MENU_POS_4 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_4.SetFloat(231,0f);
SLOT_6 = _world.GetObject(ObjectType.Skill,2089542831);
SLOT_6.SetFloat(231,1f);
NAME1_STR_7 = _world.AcknexObject.GetAcknexObject(950171735);
_world.ReadInkey(NAME1_STR_7);
{
            var enumerator = CoroutinePool.Get<CLEAR_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<SAVE_GAME>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MENU_POS_2;
IAcknexObject MENU_POS_4;
IAcknexObject SLOT_6;
IAcknexObject NAME1_STR_7;
}
public class SAVE_NAME2 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SAVE_NAME2() {
  }
 public SAVE_NAME2(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MENU_POS_2 = _world.AcknexObject.GetAcknexObject(119320659);
MENU_POS_2.SetFloat(232,0f);
MENU_POS_4 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_4.SetFloat(231,0f);
SLOT_6 = _world.GetObject(ObjectType.Skill,2089542831);
SLOT_6.SetFloat(231,2f);
NAME2_STR_7 = _world.AcknexObject.GetAcknexObject(951357656);
_world.ReadInkey(NAME2_STR_7);
{
            var enumerator = CoroutinePool.Get<CLEAR_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<SAVE_GAME>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MENU_POS_2;
IAcknexObject MENU_POS_4;
IAcknexObject SLOT_6;
IAcknexObject NAME2_STR_7;
}
public class SAVE_NAME3 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SAVE_NAME3() {
  }
 public SAVE_NAME3(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MENU_POS_2 = _world.AcknexObject.GetAcknexObject(119320659);
MENU_POS_2.SetFloat(232,0f);
MENU_POS_4 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_4.SetFloat(231,0f);
SLOT_6 = _world.GetObject(ObjectType.Skill,2089542831);
SLOT_6.SetFloat(231,3f);
NAME3_STR_7 = _world.AcknexObject.GetAcknexObject(952543577);
_world.ReadInkey(NAME3_STR_7);
{
            var enumerator = CoroutinePool.Get<CLEAR_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<SAVE_GAME>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MENU_POS_2;
IAcknexObject MENU_POS_4;
IAcknexObject SLOT_6;
IAcknexObject NAME3_STR_7;
}
public class SAVE_NAME4 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SAVE_NAME4() {
  }
 public SAVE_NAME4(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MENU_POS_2 = _world.AcknexObject.GetAcknexObject(119320659);
MENU_POS_2.SetFloat(232,0f);
MENU_POS_4 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_4.SetFloat(231,0f);
SLOT_6 = _world.GetObject(ObjectType.Skill,2089542831);
SLOT_6.SetFloat(231,4f);
NAME4_STR_7 = _world.AcknexObject.GetAcknexObject(953729498);
_world.ReadInkey(NAME4_STR_7);
{
            var enumerator = CoroutinePool.Get<CLEAR_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<SAVE_GAME>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MENU_POS_2;
IAcknexObject MENU_POS_4;
IAcknexObject SLOT_6;
IAcknexObject NAME4_STR_7;
}
public class SAVE_NAME5 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SAVE_NAME5() {
  }
 public SAVE_NAME5(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
MENU_POS_2 = _world.AcknexObject.GetAcknexObject(119320659);
MENU_POS_2.SetFloat(232,0f);
MENU_POS_4 = _world.GetObject(ObjectType.Skill,119320659);
MENU_POS_4.SetFloat(231,0f);
SLOT_6 = _world.GetObject(ObjectType.Skill,2089542831);
SLOT_6.SetFloat(231,5f);
NAME5_STR_7 = _world.AcknexObject.GetAcknexObject(954915419);
_world.ReadInkey(NAME5_STR_7);
{
            var enumerator = CoroutinePool.Get<CLEAR_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<SAVE_GAME>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject MENU_POS_2;
IAcknexObject MENU_POS_4;
IAcknexObject SLOT_6;
IAcknexObject NAME5_STR_7;
}
public class LOAD_NAME1 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LOAD_NAME1() {
  }
 public LOAD_NAME1(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SLOT_1 = _world.GetObject(ObjectType.Skill,2089542831);
SLOT_1.SetFloat(231,1f);
{
            var enumerator = CoroutinePool.Get<CLEAR_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<LOAD_GAME>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject SLOT_1;
}
public class LOAD_NAME2 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LOAD_NAME2() {
  }
 public LOAD_NAME2(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SLOT_1 = _world.GetObject(ObjectType.Skill,2089542831);
SLOT_1.SetFloat(231,2f);
{
            var enumerator = CoroutinePool.Get<CLEAR_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<LOAD_GAME>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject SLOT_1;
}
public class LOAD_NAME3 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LOAD_NAME3() {
  }
 public LOAD_NAME3(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SLOT_1 = _world.GetObject(ObjectType.Skill,2089542831);
SLOT_1.SetFloat(231,3f);
{
            var enumerator = CoroutinePool.Get<CLEAR_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<LOAD_GAME>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject SLOT_1;
}
public class LOAD_NAME4 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LOAD_NAME4() {
  }
 public LOAD_NAME4(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SLOT_1 = _world.GetObject(ObjectType.Skill,2089542831);
SLOT_1.SetFloat(231,4f);
{
            var enumerator = CoroutinePool.Get<CLEAR_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<LOAD_GAME>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject SLOT_1;
}
public class LOAD_NAME5 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LOAD_NAME5() {
  }
 public LOAD_NAME5(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SLOT_1 = _world.GetObject(ObjectType.Skill,2089542831);
SLOT_1.SetFloat(231,5f);
{
            var enumerator = CoroutinePool.Get<CLEAR_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<LOAD_GAME>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject SLOT_1;
}
public class SET_DIFF1 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_DIFF1() {
  }
 public SET_DIFF1(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
DIFFICULTY_1 = _world.GetObject(ObjectType.Skill,3583665632);
DIFFICULTY_1.SetFloat(231,1f);
{
            var enumerator = CoroutinePool.Get<LEVEL_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject DIFFICULTY_1;
}
public class SET_DIFF2 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_DIFF2() {
  }
 public SET_DIFF2(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
DIFFICULTY_1 = _world.GetObject(ObjectType.Skill,3583665632);
DIFFICULTY_1.SetFloat(231,2f);
{
            var enumerator = CoroutinePool.Get<LEVEL_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject DIFFICULTY_1;
}
public class SET_DIFF3 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_DIFF3() {
  }
 public SET_DIFF3(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
DIFFICULTY_1 = _world.GetObject(ObjectType.Skill,3583665632);
DIFFICULTY_1.SetFloat(231,3f);
{
            var enumerator = CoroutinePool.Get<LEVEL_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject DIFFICULTY_1;
}
public class SET_DIFF4 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_DIFF4() {
  }
 public SET_DIFF4(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
DIFFICULTY_1 = _world.GetObject(ObjectType.Skill,3583665632);
DIFFICULTY_1.SetFloat(231,4f);
{
            var enumerator = CoroutinePool.Get<LEVEL_MENU>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject DIFFICULTY_1;
}
public class START_LEVEL1 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public START_LEVEL1() {
  }
 public START_LEVEL1(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
//Unknown keyword: SAVE_INFO
//Unknown keyword: 
      return false;
  }
}
public class START_LEVEL2 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public START_LEVEL2() {
  }
 public START_LEVEL2(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
//Unknown keyword: SAVE_INFO
//Unknown keyword: 
      return false;
  }
}
public class START_LEVEL3 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public START_LEVEL3() {
  }
 public START_LEVEL3(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
//Unknown keyword: SAVE_INFO
//Unknown keyword: 
      return false;
  }
}
public class START_LEVEL4 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public START_LEVEL4() {
  }
 public START_LEVEL4(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
//Unknown keyword: SAVE_INFO
//Unknown keyword: 
      return false;
  }
}
public class START_LEVEL5 : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public START_LEVEL5() {
  }
 public START_LEVEL5(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
//Unknown keyword: SAVE_INFO
//Unknown keyword: 
      return false;
  }
}
public class INIT_GLOBALS : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public INIT_GLOBALS() {
  }
 public INIT_GLOBALS(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
//Unknown keyword: LOAD_INFO
//Unknown keyword: 
      return false;
  }
}
public class UPDATE_DBPANEL : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public UPDATE_DBPANEL() {
  }
 public UPDATE_DBPANEL(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
FPS_0 = _world.GetObject(ObjectType.Skill,193456950);
FPS_1 = _world.GetObject(ObjectType.Skill,193456950);
FPS_1_val = FPS_1.GetFloat(PropertyName.VAL);
FPS_4 = _world.GetObject(ObjectType.Skill,193456950);
FPS_4_val = FPS_4.GetFloat(PropertyName.VAL);
TIME_FAC_8 = _world.GetObject(ObjectType.Skill,570);
TIME_FAC_8_val = TIME_FAC_8.GetFloat(PropertyName.VAL);
FPS_0.SetFloat(231,0.9f*FPS_4_val+0.1f*TIME_FAC_8_val);
//Unknown keyword: 
      return false;
  }
IAcknexObject FPS_0;
IAcknexObject FPS_1;
float FPS_1_val;
IAcknexObject FPS_4;
float FPS_4_val;
IAcknexObject TIME_FAC_8;
float TIME_FAC_8_val;
}
public class SET_DEBUG : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_DEBUG() {
  }
 public SET_DEBUG(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
UPDATE_DBPANEL_0 = _world.AcknexObject.GetAcknexObject(3678682629);
_world.AcknexObject.SetAcknexObject(13,UPDATE_DBPANEL_0);
DEBUG_PANEL_3 = _world.AcknexObject.GetAcknexObject(631336739);
_world.AcknexObject.SetAcknexObject(139,DEBUG_PANEL_3);
DEBUG_TEXT_1_6 = _world.AcknexObject.GetAcknexObject(3815872840);
_world.AcknexObject.SetAcknexObject(123,DEBUG_TEXT_1_6);
//Unknown keyword: 
      return false;
  }
IAcknexObject UPDATE_DBPANEL_0;
IAcknexObject DEBUG_PANEL_3;
IAcknexObject DEBUG_TEXT_1_6;
}
public class SET_ADJUST : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_ADJUST() {
  }
 public SET_ADJUST(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_1_val = ADJUST_MODE_1.GetFloat(PropertyName.VAL);
if (MathUtils.CheckGreater(ADJUST_MODE_1_val , -1f))
{
goto DISABLE;
}
SCREEN_HGT_2 = _world.GetObject(ObjectType.Skill,352);
SCREEN_HGT_2_val = SCREEN_HGT_2.GetFloat(PropertyName.VAL);
ADJUST_PANEL_4 = _world.AcknexObject.GetAcknexObject(3393701415);
ADJUST_PANEL_4.SetFloat(226,SCREEN_HGT_2_val);
ADJUST_PANEL_7 = _world.AcknexObject.GetAcknexObject(3393701415);
temp_8 =ADJUST_PANEL_7.GetFloat(226);
ADJUST_PANEL_10 = _world.AcknexObject.GetAcknexObject(3393701415);
ADJUST_PANEL_10.SetFloat(226,temp_8 + -12f);
SCREEN_HGT_11 = _world.GetObject(ObjectType.Skill,352);
SCREEN_HGT_11_val = SCREEN_HGT_11.GetFloat(PropertyName.VAL);
ADJUST_TEXT_13 = _world.AcknexObject.GetAcknexObject(3096450908);
ADJUST_TEXT_13.SetFloat(226,SCREEN_HGT_11_val);
ADJUST_TEXT_16 = _world.AcknexObject.GetAcknexObject(3096450908);
temp_17 =ADJUST_TEXT_16.GetFloat(226);
ADJUST_TEXT_19 = _world.AcknexObject.GetAcknexObject(3096450908);
ADJUST_TEXT_19.SetFloat(226,temp_17 + -100f);
ADJUST_HELP_20 = _world.AcknexObject.GetAcknexObject(3096019264);
ADJUST_TEXT_22 = _world.AcknexObject.GetAcknexObject(3096450908);
ADJUST_TEXT_22_array = ADJUST_TEXT_22.GetObject<List<IAcknexObject>>(293);
ADJUST_TEXT_22_index = ADJUST_TEXT_22.GetInteger(PropertyName.INDEX);
ADJUST_TEXT_22_array[ADJUST_TEXT_22_index-1] = ADJUST_HELP_20;
ADJUST_TEXT_22.IsDirty = true;
ADJUST_TEXT_23 = _world.AcknexObject.GetAcknexObject(3096450908);
_world.AcknexObject.SetAcknexObject(122,ADJUST_TEXT_23);
ADJUST_MODE_27 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_27.SetFloat(231,99f);
temp_29 =_world.AcknexObject?.GetAcknexObject(73);
_world.SetSynonymObject(2782535555,temp_29);
SET_WMODE_31 = _world.AcknexObject.GetAcknexObject(2319154100);
_world.AcknexObject.SetAcknexObject(73,SET_WMODE_31);
temp_34 =_world.AcknexObject?.GetAcknexObject(53);
_world.SetSynonymObject(2762374898,temp_34);
SET_FMODE_36 = _world.AcknexObject.GetAcknexObject(2298993443);
_world.AcknexObject.SetAcknexObject(53,SET_FMODE_36);
temp_39 =_world.AcknexObject?.GetAcknexObject(50);
_world.SetSynonymObject(2758817135,temp_39);
SET_CMODE_41 = _world.AcknexObject.GetAcknexObject(2295435680);
_world.AcknexObject.SetAcknexObject(50,SET_CMODE_41);
temp_44 =_world.AcknexObject?.GetAcknexObject(65);
_world.SetSynonymObject(2776605950,temp_44);
SET_RMODE_46 = _world.AcknexObject.GetAcknexObject(2313224495);
_world.AcknexObject.SetAcknexObject(65,SET_RMODE_46);
temp_49 =_world.AcknexObject?.GetAcknexObject(48);
_world.SetSynonymObject(2756445293,temp_49);
SET_AMODE_51 = _world.AcknexObject.GetAcknexObject(2293063838);
_world.AcknexObject.SetAcknexObject(48,SET_AMODE_51);
temp_54 =_world.AcknexObject?.GetAcknexObject(66);
_world.SetSynonymObject(2777791871,temp_54);
SET_SMODE_56 = _world.AcknexObject.GetAcknexObject(2314410416);
_world.AcknexObject.SetAcknexObject(66,SET_SMODE_56);
temp_59 =_world.AcknexObject?.GetAcknexObject(49);
_world.SetSynonymObject(2757631214,temp_59);
SET_BMODE_61 = _world.AcknexObject.GetAcknexObject(2294249759);
_world.AcknexObject.SetAcknexObject(49,SET_BMODE_61);
temp_64 =_world.AcknexObject?.GetAcknexObject(69);
_world.SetSynonymObject(2781349634,temp_64);
SET_VMODE_66 = _world.AcknexObject.GetAcknexObject(2317968179);
_world.AcknexObject.SetAcknexObject(69,SET_VMODE_66);
temp_69 =_world.AcknexObject?.GetAcknexObject(64);
_world.SetSynonymObject(2775420029,temp_69);
temp_72 =_world.AcknexObject?.GetAcknexObject(70);
_world.SetSynonymObject(2783721476,temp_72);
temp_75 =_world.AcknexObject?.GetAcknexObject(43);
_world.SetSynonymObject(2742214241,temp_75);
ADJUST_XMINUS_77 = _world.AcknexObject.GetAcknexObject(650109691);
_world.AcknexObject.SetAcknexObject(43,ADJUST_XMINUS_77);
temp_80 =_world.AcknexObject?.GetAcknexObject(44);
_world.SetSynonymObject(2743400162,temp_80);
ADJUST_XPLUS_82 = _world.AcknexObject.GetAcknexObject(3403726195);
_world.AcknexObject.SetAcknexObject(44,ADJUST_XPLUS_82);
temp_85 =_world.AcknexObject?.GetAcknexObject(45);
_world.SetSynonymObject(2744586083,temp_85);
ADJUST_YMINUS_87 = _world.AcknexObject.GetAcknexObject(689245084);
_world.AcknexObject.SetAcknexObject(45,ADJUST_YMINUS_87);
temp_90 =_world.AcknexObject?.GetAcknexObject(46);
_world.SetSynonymObject(2745772004,temp_90);
ADJUST_YPLUS_92 = _world.AcknexObject.GetAcknexObject(3404912116);
_world.AcknexObject.SetAcknexObject(46,ADJUST_YPLUS_92);
//Unknown keyword: BEEP
return false;
DISABLE:
_world.AcknexObject.SetAcknexObject(122,null);
_world.AcknexObject.SetAcknexObject(138,null);
ADJUST_MODE_101 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_101.SetFloat(231,-1f);
AW_OLD_102 = _world.GetSynonymObject(2782535555);
_world.AcknexObject.SetAcknexObject(73,AW_OLD_102);
AF_OLD_104 = _world.GetSynonymObject(2762374898);
_world.AcknexObject.SetAcknexObject(53,AF_OLD_104);
AC_OLD_106 = _world.GetSynonymObject(2758817135);
_world.AcknexObject.SetAcknexObject(50,AC_OLD_106);
AR_OLD_108 = _world.GetSynonymObject(2776605950);
_world.AcknexObject.SetAcknexObject(65,AR_OLD_108);
AA_OLD_110 = _world.GetSynonymObject(2756445293);
_world.AcknexObject.SetAcknexObject(48,AA_OLD_110);
AS_OLD_112 = _world.GetSynonymObject(2777791871);
_world.AcknexObject.SetAcknexObject(66,AS_OLD_112);
AB_OLD_114 = _world.GetSynonymObject(2757631214);
_world.AcknexObject.SetAcknexObject(49,AB_OLD_114);
AV_OLD_116 = _world.GetSynonymObject(2781349634);
_world.AcknexObject.SetAcknexObject(69,AV_OLD_116);
AQ_OLD_118 = _world.GetSynonymObject(2775420029);
_world.AcknexObject.SetAcknexObject(64,AQ_OLD_118);
AX_OLD_120 = _world.GetSynonymObject(2783721476);
_world.AcknexObject.SetAcknexObject(70,AX_OLD_120);
A5_OLD_122 = _world.GetSynonymObject(2742214241);
_world.AcknexObject.SetAcknexObject(43,A5_OLD_122);
A6_OLD_124 = _world.GetSynonymObject(2743400162);
_world.AcknexObject.SetAcknexObject(44,A6_OLD_124);
A7_OLD_126 = _world.GetSynonymObject(2744586083);
_world.AcknexObject.SetAcknexObject(45,A7_OLD_126);
A8_OLD_128 = _world.GetSynonymObject(2745772004);
_world.AcknexObject.SetAcknexObject(46,A8_OLD_128);
//Unknown keyword: BEEP
return false;
//Unknown keyword: 
      return false;
  }
IAcknexObject ADJUST_MODE_1;
float ADJUST_MODE_1_val;
IAcknexObject SCREEN_HGT_2;
float SCREEN_HGT_2_val;
IAcknexObject ADJUST_PANEL_4;
IAcknexObject ADJUST_PANEL_7;
float temp_8;
IAcknexObject ADJUST_PANEL_10;
IAcknexObject SCREEN_HGT_11;
float SCREEN_HGT_11_val;
IAcknexObject ADJUST_TEXT_13;
IAcknexObject ADJUST_TEXT_16;
float temp_17;
IAcknexObject ADJUST_TEXT_19;
IAcknexObject ADJUST_HELP_20;
IAcknexObject ADJUST_TEXT_22;
List<IAcknexObject> ADJUST_TEXT_22_array;
int ADJUST_TEXT_22_index;
IAcknexObject ADJUST_TEXT_23;
IAcknexObject ADJUST_MODE_27;
IAcknexObject temp_29;
IAcknexObject SET_WMODE_31;
IAcknexObject temp_34;
IAcknexObject SET_FMODE_36;
IAcknexObject temp_39;
IAcknexObject SET_CMODE_41;
IAcknexObject temp_44;
IAcknexObject SET_RMODE_46;
IAcknexObject temp_49;
IAcknexObject SET_AMODE_51;
IAcknexObject temp_54;
IAcknexObject SET_SMODE_56;
IAcknexObject temp_59;
IAcknexObject SET_BMODE_61;
IAcknexObject temp_64;
IAcknexObject SET_VMODE_66;
IAcknexObject temp_69;
IAcknexObject temp_72;
IAcknexObject temp_75;
IAcknexObject ADJUST_XMINUS_77;
IAcknexObject temp_80;
IAcknexObject ADJUST_XPLUS_82;
IAcknexObject temp_85;
IAcknexObject ADJUST_YMINUS_87;
IAcknexObject temp_90;
IAcknexObject ADJUST_YPLUS_92;
IAcknexObject ADJUST_MODE_101;
IAcknexObject AW_OLD_102;
IAcknexObject AF_OLD_104;
IAcknexObject AC_OLD_106;
IAcknexObject AR_OLD_108;
IAcknexObject AA_OLD_110;
IAcknexObject AS_OLD_112;
IAcknexObject AB_OLD_114;
IAcknexObject AV_OLD_116;
IAcknexObject AQ_OLD_118;
IAcknexObject AX_OLD_120;
IAcknexObject A5_OLD_122;
IAcknexObject A6_OLD_124;
IAcknexObject A7_OLD_126;
IAcknexObject A8_OLD_128;
}
public class GET_ADJX : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public GET_ADJX() {
  }
 public GET_ADJX(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_1_val = ADJUST_MODE_1.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_1_val , 0f))
{
ADJUST_WALL_3 = _world.GetSynonymObject(3096553959);
temp_4 =ADJUST_WALL_3.GetFloat(210);
ADJUST_X_5 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_5.SetFloat(231,temp_4);
}
ADJUST_MODE_7 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_7_val = ADJUST_MODE_7.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_7_val , 1f))
{
ADJUST_REG_9 = _world.GetSynonymObject(3477744245);
temp_10 =ADJUST_REG_9.GetFloat(237);
ADJUST_X_11 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_11.SetFloat(231,temp_10);
}
ADJUST_MODE_13 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_13_val = ADJUST_MODE_13.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_13_val , 2f))
{
ADJUST_REG_15 = _world.GetSynonymObject(3477744245);
temp_16 =ADJUST_REG_15.GetFloat(238);
ADJUST_X_17 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_17.SetFloat(231,temp_16);
}
ADJUST_MODE_19 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_19_val = ADJUST_MODE_19.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_19_val , 3f))
{
ADJUST_X_20 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_21 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_21_val = ADJUST_X_21.GetFloat(PropertyName.VAL);
ADJUST_REG_23 = _world.GetSynonymObject(3477744245);
temp_24 =ADJUST_REG_23.GetFloat(200);
ADJUST_X_20.SetFloat(231,temp_24*10f);
}
ADJUST_MODE_28 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_28_val = ADJUST_MODE_28.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_28_val , 4f))
{
ADJUST_TEX_30 = _world.GetSynonymObject(3477746440);
temp_31 =ADJUST_TEX_30.GetFloat(225);
ADJUST_X_32 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_32.SetFloat(231,temp_31);
}
ADJUST_MODE_34 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_34_val = ADJUST_MODE_34.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_34_val , 5f))
{
ADJUST_X_35 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_36 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_36_val = ADJUST_X_36.GetFloat(PropertyName.VAL);
ADJUST_TEX_38 = _world.GetSynonymObject(3477746440);
temp_39 =ADJUST_TEX_38.GetFloat(275);
ADJUST_X_35.SetFloat(231,temp_39*10f);
}
ADJUST_MODE_43 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_43_val = ADJUST_MODE_43.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_43_val , 6f))
{
ADJUST_WALL_45 = _world.GetSynonymObject(3096553959);
temp_46 =ADJUST_WALL_45.GetFloat(210);
ADJUST_X_47 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_47.SetFloat(231,temp_46);
}
ADJUST_MODE_49 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_49_val = ADJUST_MODE_49.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_49_val , 7f))
{
ADJUST_X_50 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_51 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_51_val = ADJUST_X_51.GetFloat(PropertyName.VAL);
ADJUST_TEX_53 = _world.GetSynonymObject(3477746440);
temp_54 =ADJUST_TEX_53.GetFloat(112);
ADJUST_X_50.SetFloat(231,temp_54*10f);
}
ADJUST_MODE_58 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_58_val = ADJUST_MODE_58.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_58_val , 8f))
{
ADJUST_X_59 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_60 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_60_val = ADJUST_X_60.GetFloat(PropertyName.VAL);
ADJUST_REG_62 = _world.GetSynonymObject(3477744245);
temp_63 =ADJUST_REG_62.GetFloat(112);
ADJUST_X_59.SetFloat(231,temp_63*10f);
}
//Unknown keyword: 
      return false;
  }
IAcknexObject ADJUST_MODE_1;
float ADJUST_MODE_1_val;
IAcknexObject ADJUST_WALL_3;
float temp_4;
IAcknexObject ADJUST_X_5;
IAcknexObject ADJUST_MODE_7;
float ADJUST_MODE_7_val;
IAcknexObject ADJUST_REG_9;
float temp_10;
IAcknexObject ADJUST_X_11;
IAcknexObject ADJUST_MODE_13;
float ADJUST_MODE_13_val;
IAcknexObject ADJUST_REG_15;
float temp_16;
IAcknexObject ADJUST_X_17;
IAcknexObject ADJUST_MODE_19;
float ADJUST_MODE_19_val;
IAcknexObject ADJUST_X_20;
IAcknexObject ADJUST_X_21;
float ADJUST_X_21_val;
IAcknexObject ADJUST_REG_23;
float temp_24;
IAcknexObject ADJUST_MODE_28;
float ADJUST_MODE_28_val;
IAcknexObject ADJUST_TEX_30;
float temp_31;
IAcknexObject ADJUST_X_32;
IAcknexObject ADJUST_MODE_34;
float ADJUST_MODE_34_val;
IAcknexObject ADJUST_X_35;
IAcknexObject ADJUST_X_36;
float ADJUST_X_36_val;
IAcknexObject ADJUST_TEX_38;
float temp_39;
IAcknexObject ADJUST_MODE_43;
float ADJUST_MODE_43_val;
IAcknexObject ADJUST_WALL_45;
float temp_46;
IAcknexObject ADJUST_X_47;
IAcknexObject ADJUST_MODE_49;
float ADJUST_MODE_49_val;
IAcknexObject ADJUST_X_50;
IAcknexObject ADJUST_X_51;
float ADJUST_X_51_val;
IAcknexObject ADJUST_TEX_53;
float temp_54;
IAcknexObject ADJUST_MODE_58;
float ADJUST_MODE_58_val;
IAcknexObject ADJUST_X_59;
IAcknexObject ADJUST_X_60;
float ADJUST_X_60_val;
IAcknexObject ADJUST_REG_62;
float temp_63;
}
public class GET_ADJY : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public GET_ADJY() {
  }
 public GET_ADJY(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_1_val = ADJUST_MODE_1.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_1_val , 0f))
{
ADJUST_WALL_3 = _world.GetSynonymObject(3096553959);
temp_4 =ADJUST_WALL_3.GetFloat(211);
ADJUST_Y_5 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_5.SetFloat(231,temp_4);
}
ADJUST_MODE_7 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_7_val = ADJUST_MODE_7.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_7_val , 1f))
{
ADJUST_REG_9 = _world.GetSynonymObject(3477744245);
temp_10 =ADJUST_REG_9.GetFloat(239);
ADJUST_Y_11 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_11.SetFloat(231,temp_10);
}
ADJUST_MODE_13 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_13_val = ADJUST_MODE_13.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_13_val , 2f))
{
ADJUST_REG_15 = _world.GetSynonymObject(3477744245);
temp_16 =ADJUST_REG_15.GetFloat(240);
ADJUST_Y_17 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_17.SetFloat(231,temp_16);
}
ADJUST_MODE_19 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_19_val = ADJUST_MODE_19.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_19_val , 3f))
{
ADJUST_Y_20 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_21 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_21_val = ADJUST_Y_21.GetFloat(PropertyName.VAL);
ADJUST_REG_23 = _world.GetSynonymObject(3477744245);
temp_24 =ADJUST_REG_23.GetFloat(201);
ADJUST_Y_20.SetFloat(231,temp_24*10f);
}
ADJUST_MODE_28 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_28_val = ADJUST_MODE_28.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_28_val , 4f))
{
ADJUST_TEX_30 = _world.GetSynonymObject(3477746440);
temp_31 =ADJUST_TEX_30.GetFloat(226);
ADJUST_Y_32 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_32.SetFloat(231,temp_31);
}
ADJUST_MODE_34 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_34_val = ADJUST_MODE_34.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_34_val , 5f))
{
ADJUST_Y_35 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_36 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_36_val = ADJUST_Y_36.GetFloat(PropertyName.VAL);
ADJUST_TEX_38 = _world.GetSynonymObject(3477746440);
temp_39 =ADJUST_TEX_38.GetFloat(276);
ADJUST_Y_35.SetFloat(231,temp_39*10f);
}
ADJUST_MODE_43 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_43_val = ADJUST_MODE_43.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_43_val , 6f))
{
ADJUST_Y_44 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_45 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_45_val = ADJUST_Y_45.GetFloat(PropertyName.VAL);
ADJUST_WALL_47 = _world.GetSynonymObject(3096553959);
temp_48 =ADJUST_WALL_47.GetFloat(267);
ADJUST_Y_44.SetFloat(231,temp_48*10f);
}
ADJUST_MODE_52 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_52_val = ADJUST_MODE_52.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_52_val , 7f))
{
ADJUST_Y_53 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_54 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_54_val = ADJUST_Y_54.GetFloat(PropertyName.VAL);
ADJUST_TEX_56 = _world.GetSynonymObject(3477746440);
temp_57 =ADJUST_TEX_56.GetFloat(284);
ADJUST_Y_53.SetFloat(231,temp_57*10f);
}
ADJUST_MODE_61 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_61_val = ADJUST_MODE_61.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_61_val , 8f))
{
ADJUST_Y_63 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_63.SetFloat(231,0f);
}
//Unknown keyword: 
      return false;
  }
IAcknexObject ADJUST_MODE_1;
float ADJUST_MODE_1_val;
IAcknexObject ADJUST_WALL_3;
float temp_4;
IAcknexObject ADJUST_Y_5;
IAcknexObject ADJUST_MODE_7;
float ADJUST_MODE_7_val;
IAcknexObject ADJUST_REG_9;
float temp_10;
IAcknexObject ADJUST_Y_11;
IAcknexObject ADJUST_MODE_13;
float ADJUST_MODE_13_val;
IAcknexObject ADJUST_REG_15;
float temp_16;
IAcknexObject ADJUST_Y_17;
IAcknexObject ADJUST_MODE_19;
float ADJUST_MODE_19_val;
IAcknexObject ADJUST_Y_20;
IAcknexObject ADJUST_Y_21;
float ADJUST_Y_21_val;
IAcknexObject ADJUST_REG_23;
float temp_24;
IAcknexObject ADJUST_MODE_28;
float ADJUST_MODE_28_val;
IAcknexObject ADJUST_TEX_30;
float temp_31;
IAcknexObject ADJUST_Y_32;
IAcknexObject ADJUST_MODE_34;
float ADJUST_MODE_34_val;
IAcknexObject ADJUST_Y_35;
IAcknexObject ADJUST_Y_36;
float ADJUST_Y_36_val;
IAcknexObject ADJUST_TEX_38;
float temp_39;
IAcknexObject ADJUST_MODE_43;
float ADJUST_MODE_43_val;
IAcknexObject ADJUST_Y_44;
IAcknexObject ADJUST_Y_45;
float ADJUST_Y_45_val;
IAcknexObject ADJUST_WALL_47;
float temp_48;
IAcknexObject ADJUST_MODE_52;
float ADJUST_MODE_52_val;
IAcknexObject ADJUST_Y_53;
IAcknexObject ADJUST_Y_54;
float ADJUST_Y_54_val;
IAcknexObject ADJUST_TEX_56;
float temp_57;
IAcknexObject ADJUST_MODE_61;
float ADJUST_MODE_61_val;
IAcknexObject ADJUST_Y_63;
}
public class SET_ADJX : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_ADJX() {
  }
 public SET_ADJX(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_1_val = ADJUST_MODE_1.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_1_val , 0f))
{
ADJUST_X_2 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_2_val = ADJUST_X_2.GetFloat(PropertyName.VAL);
ADJUST_WALL_4 = _world.GetSynonymObject(3096553959);
ADJUST_WALL_4.SetFloat(210,ADJUST_X_2_val);
}
ADJUST_MODE_6 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_6_val = ADJUST_MODE_6.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_6_val , 1f))
{
ADJUST_X_7 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_7_val = ADJUST_X_7.GetFloat(PropertyName.VAL);
ADJUST_REG_9 = _world.GetSynonymObject(3477744245);
ADJUST_REG_9.SetFloat(237,ADJUST_X_7_val);
}
ADJUST_MODE_11 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_11_val = ADJUST_MODE_11.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_11_val , 2f))
{
ADJUST_X_12 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_12_val = ADJUST_X_12.GetFloat(PropertyName.VAL);
ADJUST_REG_14 = _world.GetSynonymObject(3477744245);
ADJUST_REG_14.SetFloat(238,ADJUST_X_12_val);
}
ADJUST_MODE_16 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_16_val = ADJUST_MODE_16.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_16_val , 3f))
{
ADJUST_REG_18 = _world.GetSynonymObject(3477744245);
ADJUST_REG_20 = _world.GetSynonymObject(3477744245);
temp_21 =ADJUST_REG_20.GetFloat(200);
ADJUST_X_22 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_22_val = ADJUST_X_22.GetFloat(PropertyName.VAL);
ADJUST_REG_18.SetFloat(200,ADJUST_X_22_val/10f);
}
ADJUST_MODE_26 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_26_val = ADJUST_MODE_26.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_26_val , 4f))
{
ADJUST_X_27 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_27_val = ADJUST_X_27.GetFloat(PropertyName.VAL);
ADJUST_TEX_29 = _world.GetSynonymObject(3477746440);
ADJUST_TEX_29.SetFloat(225,ADJUST_X_27_val);
}
ADJUST_MODE_31 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_31_val = ADJUST_MODE_31.GetFloat(PropertyName.VAL);
if (!Game.CheckEquals(ADJUST_MODE_31_val , 5f))
{
goto skip_32;
}
ADJUST_TEX_34 = _world.GetSynonymObject(3477746440);
ADJUST_TEX_36 = _world.GetSynonymObject(3477746440);
temp_37 =ADJUST_TEX_36.GetFloat(275);
ADJUST_X_38 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_38_val = ADJUST_X_38.GetFloat(PropertyName.VAL);
ADJUST_TEX_34.SetFloat(275,ADJUST_X_38_val/10f);
ADJUST_TEX_41 = _world.GetSynonymObject(3477746440);
ADJUST_WALL_43 = _world.GetSynonymObject(3096553959);
ADJUST_WALL_43.SetAcknexObjectAll(164,ADJUST_TEX_41);
skip_32:
ADJUST_MODE_45 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_45_val = ADJUST_MODE_45.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_45_val , 6f))
{
ADJUST_X_46 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_46_val = ADJUST_X_46.GetFloat(PropertyName.VAL);
ADJUST_WALL_48 = _world.GetSynonymObject(3096553959);
ADJUST_WALL_48.SetFloat(210,ADJUST_X_46_val);
}
ADJUST_MODE_50 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_50_val = ADJUST_MODE_50.GetFloat(PropertyName.VAL);
if (!Game.CheckEquals(ADJUST_MODE_50_val , 7f))
{
goto skip_51;
}
ADJUST_TEX_53 = _world.GetSynonymObject(3477746440);
ADJUST_TEX_55 = _world.GetSynonymObject(3477746440);
temp_56 =ADJUST_TEX_55.GetFloat(112);
ADJUST_X_57 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_57_val = ADJUST_X_57.GetFloat(PropertyName.VAL);
ADJUST_TEX_53.SetFloat(112,ADJUST_X_57_val/10f);
ADJUST_TEX_60 = _world.GetSynonymObject(3477746440);
ADJUST_WALL_62 = _world.GetSynonymObject(3096553959);
ADJUST_WALL_62.SetAcknexObjectAll(164,ADJUST_TEX_60);
skip_51:
ADJUST_MODE_64 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_64_val = ADJUST_MODE_64.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_64_val , 8f))
{
ADJUST_REG_66 = _world.GetSynonymObject(3477744245);
ADJUST_REG_68 = _world.GetSynonymObject(3477744245);
temp_69 =ADJUST_REG_68.GetFloat(112);
ADJUST_X_70 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_70_val = ADJUST_X_70.GetFloat(PropertyName.VAL);
ADJUST_REG_66.SetFloat(112,ADJUST_X_70_val/10f);
}
RENDER_MODE_74 = _world.GetObject(ObjectType.Skill,361);
RENDER_MODE_74.SetFloat(231,1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject ADJUST_MODE_1;
float ADJUST_MODE_1_val;
IAcknexObject ADJUST_X_2;
float ADJUST_X_2_val;
IAcknexObject ADJUST_WALL_4;
IAcknexObject ADJUST_MODE_6;
float ADJUST_MODE_6_val;
IAcknexObject ADJUST_X_7;
float ADJUST_X_7_val;
IAcknexObject ADJUST_REG_9;
IAcknexObject ADJUST_MODE_11;
float ADJUST_MODE_11_val;
IAcknexObject ADJUST_X_12;
float ADJUST_X_12_val;
IAcknexObject ADJUST_REG_14;
IAcknexObject ADJUST_MODE_16;
float ADJUST_MODE_16_val;
IAcknexObject ADJUST_REG_18;
IAcknexObject ADJUST_REG_20;
float temp_21;
IAcknexObject ADJUST_X_22;
float ADJUST_X_22_val;
IAcknexObject ADJUST_MODE_26;
float ADJUST_MODE_26_val;
IAcknexObject ADJUST_X_27;
float ADJUST_X_27_val;
IAcknexObject ADJUST_TEX_29;
IAcknexObject ADJUST_MODE_31;
float ADJUST_MODE_31_val;
IAcknexObject ADJUST_TEX_34;
IAcknexObject ADJUST_TEX_36;
float temp_37;
IAcknexObject ADJUST_X_38;
float ADJUST_X_38_val;
IAcknexObject ADJUST_TEX_41;
IAcknexObject ADJUST_WALL_43;
IAcknexObject ADJUST_MODE_45;
float ADJUST_MODE_45_val;
IAcknexObject ADJUST_X_46;
float ADJUST_X_46_val;
IAcknexObject ADJUST_WALL_48;
IAcknexObject ADJUST_MODE_50;
float ADJUST_MODE_50_val;
IAcknexObject ADJUST_TEX_53;
IAcknexObject ADJUST_TEX_55;
float temp_56;
IAcknexObject ADJUST_X_57;
float ADJUST_X_57_val;
IAcknexObject ADJUST_TEX_60;
IAcknexObject ADJUST_WALL_62;
IAcknexObject ADJUST_MODE_64;
float ADJUST_MODE_64_val;
IAcknexObject ADJUST_REG_66;
IAcknexObject ADJUST_REG_68;
float temp_69;
IAcknexObject ADJUST_X_70;
float ADJUST_X_70_val;
IAcknexObject RENDER_MODE_74;
}
public class SET_ADJY : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_ADJY() {
  }
 public SET_ADJY(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_1_val = ADJUST_MODE_1.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_1_val , 0f))
{
ADJUST_Y_2 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_2_val = ADJUST_Y_2.GetFloat(PropertyName.VAL);
ADJUST_WALL_4 = _world.GetSynonymObject(3096553959);
ADJUST_WALL_4.SetFloat(211,ADJUST_Y_2_val);
}
ADJUST_MODE_6 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_6_val = ADJUST_MODE_6.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_6_val , 1f))
{
ADJUST_Y_7 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_7_val = ADJUST_Y_7.GetFloat(PropertyName.VAL);
ADJUST_REG_9 = _world.GetSynonymObject(3477744245);
ADJUST_REG_9.SetFloat(239,ADJUST_Y_7_val);
}
ADJUST_MODE_11 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_11_val = ADJUST_MODE_11.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_11_val , 2f))
{
ADJUST_Y_12 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_12_val = ADJUST_Y_12.GetFloat(PropertyName.VAL);
ADJUST_REG_14 = _world.GetSynonymObject(3477744245);
ADJUST_REG_14.SetFloat(240,ADJUST_Y_12_val);
}
ADJUST_MODE_16 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_16_val = ADJUST_MODE_16.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_16_val , 3f))
{
ADJUST_REG_18 = _world.GetSynonymObject(3477744245);
ADJUST_REG_20 = _world.GetSynonymObject(3477744245);
temp_21 =ADJUST_REG_20.GetFloat(201);
ADJUST_Y_22 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_22_val = ADJUST_Y_22.GetFloat(PropertyName.VAL);
ADJUST_REG_18.SetFloat(201,ADJUST_Y_22_val/10f);
}
ADJUST_MODE_26 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_26_val = ADJUST_MODE_26.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_26_val , 4f))
{
ADJUST_Y_27 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_27_val = ADJUST_Y_27.GetFloat(PropertyName.VAL);
ADJUST_TEX_29 = _world.GetSynonymObject(3477746440);
ADJUST_TEX_29.SetFloat(226,ADJUST_Y_27_val);
}
ADJUST_MODE_31 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_31_val = ADJUST_MODE_31.GetFloat(PropertyName.VAL);
if (!Game.CheckEquals(ADJUST_MODE_31_val , 5f))
{
goto skip_32;
}
ADJUST_TEX_34 = _world.GetSynonymObject(3477746440);
ADJUST_TEX_36 = _world.GetSynonymObject(3477746440);
temp_37 =ADJUST_TEX_36.GetFloat(276);
ADJUST_Y_38 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_38_val = ADJUST_Y_38.GetFloat(PropertyName.VAL);
ADJUST_TEX_34.SetFloat(276,ADJUST_Y_38_val/10f);
ADJUST_TEX_41 = _world.GetSynonymObject(3477746440);
ADJUST_WALL_43 = _world.GetSynonymObject(3096553959);
ADJUST_WALL_43.SetAcknexObjectAll(164,ADJUST_TEX_41);
skip_32:
ADJUST_MODE_45 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_45_val = ADJUST_MODE_45.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_45_val , 6f))
{
ADJUST_WALL_47 = _world.GetSynonymObject(3096553959);
ADJUST_WALL_49 = _world.GetSynonymObject(3096553959);
temp_50 =ADJUST_WALL_49.GetFloat(267);
ADJUST_Y_51 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_51_val = ADJUST_Y_51.GetFloat(PropertyName.VAL);
ADJUST_WALL_47.SetFloat(267,ADJUST_Y_51_val/10f);
}
ADJUST_MODE_55 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_55_val = ADJUST_MODE_55.GetFloat(PropertyName.VAL);
if (!Game.CheckEquals(ADJUST_MODE_55_val , 7f))
{
goto skip_56;
}
ADJUST_TEX_58 = _world.GetSynonymObject(3477746440);
ADJUST_TEX_60 = _world.GetSynonymObject(3477746440);
temp_61 =ADJUST_TEX_60.GetFloat(284);
ADJUST_Y_62 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_62_val = ADJUST_Y_62.GetFloat(PropertyName.VAL);
ADJUST_TEX_58.SetFloat(284,ADJUST_Y_62_val/10f);
ADJUST_TEX_65 = _world.GetSynonymObject(3477746440);
ADJUST_WALL_67 = _world.GetSynonymObject(3096553959);
ADJUST_WALL_67.SetAcknexObjectAll(164,ADJUST_TEX_65);
skip_56:
RENDER_MODE_69 = _world.GetObject(ObjectType.Skill,361);
RENDER_MODE_69.SetFloat(231,1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject ADJUST_MODE_1;
float ADJUST_MODE_1_val;
IAcknexObject ADJUST_Y_2;
float ADJUST_Y_2_val;
IAcknexObject ADJUST_WALL_4;
IAcknexObject ADJUST_MODE_6;
float ADJUST_MODE_6_val;
IAcknexObject ADJUST_Y_7;
float ADJUST_Y_7_val;
IAcknexObject ADJUST_REG_9;
IAcknexObject ADJUST_MODE_11;
float ADJUST_MODE_11_val;
IAcknexObject ADJUST_Y_12;
float ADJUST_Y_12_val;
IAcknexObject ADJUST_REG_14;
IAcknexObject ADJUST_MODE_16;
float ADJUST_MODE_16_val;
IAcknexObject ADJUST_REG_18;
IAcknexObject ADJUST_REG_20;
float temp_21;
IAcknexObject ADJUST_Y_22;
float ADJUST_Y_22_val;
IAcknexObject ADJUST_MODE_26;
float ADJUST_MODE_26_val;
IAcknexObject ADJUST_Y_27;
float ADJUST_Y_27_val;
IAcknexObject ADJUST_TEX_29;
IAcknexObject ADJUST_MODE_31;
float ADJUST_MODE_31_val;
IAcknexObject ADJUST_TEX_34;
IAcknexObject ADJUST_TEX_36;
float temp_37;
IAcknexObject ADJUST_Y_38;
float ADJUST_Y_38_val;
IAcknexObject ADJUST_TEX_41;
IAcknexObject ADJUST_WALL_43;
IAcknexObject ADJUST_MODE_45;
float ADJUST_MODE_45_val;
IAcknexObject ADJUST_WALL_47;
IAcknexObject ADJUST_WALL_49;
float temp_50;
IAcknexObject ADJUST_Y_51;
float ADJUST_Y_51_val;
IAcknexObject ADJUST_MODE_55;
float ADJUST_MODE_55_val;
IAcknexObject ADJUST_TEX_58;
IAcknexObject ADJUST_TEX_60;
float temp_61;
IAcknexObject ADJUST_Y_62;
float ADJUST_Y_62_val;
IAcknexObject ADJUST_TEX_65;
IAcknexObject ADJUST_WALL_67;
IAcknexObject RENDER_MODE_69;
}
public class ADJUST_XPLUS : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public ADJUST_XPLUS() {
  }
 public ADJUST_XPLUS(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
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
{
            var enumerator = CoroutinePool.Get<GET_ADJX>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }ADJUST_X_1 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_1_val = ADJUST_X_1.GetFloat(PropertyName.VAL);
ADJUST_X_2 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_2.SetFloat(231,ADJUST_X_1_val + 1f);
{
            var enumerator = CoroutinePool.Get<SET_ADJX>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
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
        
AGAIN:
KEY_6_5 = _world.GetObject(ObjectType.Skill,492);
KEY_6_5_val = KEY_6_5.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(KEY_6_5_val , 0f))
{
return false;
}
{
            var enumerator = CoroutinePool.Get<GET_ADJX>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }ADJUST_X_7 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_7_val = ADJUST_X_7.GetFloat(PropertyName.VAL);
ADJUST_X_8 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_8.SetFloat(231,ADJUST_X_7_val + 1f);
{
            var enumerator = CoroutinePool.Get<SET_ADJX>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }
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
        
goto AGAIN;
//Unknown keyword: 
      return false;
  }
IAcknexObject ADJUST_X_1;
float ADJUST_X_1_val;
IAcknexObject ADJUST_X_2;
float startTime1;
float endTime1;
IAcknexObject KEY_6_5;
float KEY_6_5_val;
IAcknexObject ADJUST_X_7;
float ADJUST_X_7_val;
IAcknexObject ADJUST_X_8;
float startTime2;
float endTime2;
}
public class ADJUST_XMINUS : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public ADJUST_XMINUS() {
  }
 public ADJUST_XMINUS(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
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
{
            var enumerator = CoroutinePool.Get<GET_ADJX>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }ADJUST_X_1 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_1_val = ADJUST_X_1.GetFloat(PropertyName.VAL);
ADJUST_X_2 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_2.SetFloat(231,ADJUST_X_1_val + -1f);
{
            var enumerator = CoroutinePool.Get<SET_ADJX>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
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
        
AGAIN:
KEY_5_5 = _world.GetObject(ObjectType.Skill,491);
KEY_5_5_val = KEY_5_5.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(KEY_5_5_val , 0f))
{
return false;
}
{
            var enumerator = CoroutinePool.Get<GET_ADJX>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }ADJUST_X_7 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_7_val = ADJUST_X_7.GetFloat(PropertyName.VAL);
ADJUST_X_8 = _world.GetObject(ObjectType.Skill,2645644559);
ADJUST_X_8.SetFloat(231,ADJUST_X_7_val + -1f);
{
            var enumerator = CoroutinePool.Get<SET_ADJX>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }
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
        
goto AGAIN;
//Unknown keyword: 
      return false;
  }
IAcknexObject ADJUST_X_1;
float ADJUST_X_1_val;
IAcknexObject ADJUST_X_2;
float startTime1;
float endTime1;
IAcknexObject KEY_5_5;
float KEY_5_5_val;
IAcknexObject ADJUST_X_7;
float ADJUST_X_7_val;
IAcknexObject ADJUST_X_8;
float startTime2;
float endTime2;
}
public class ADJUST_YPLUS : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public ADJUST_YPLUS() {
  }
 public ADJUST_YPLUS(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
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
{
            var enumerator = CoroutinePool.Get<GET_ADJY>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }ADJUST_Y_1 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_1_val = ADJUST_Y_1.GetFloat(PropertyName.VAL);
ADJUST_Y_2 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_2.SetFloat(231,ADJUST_Y_1_val + 1f);
{
            var enumerator = CoroutinePool.Get<SET_ADJY>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
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
        
AGAIN:
KEY_8_5 = _world.GetObject(ObjectType.Skill,494);
KEY_8_5_val = KEY_8_5.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(KEY_8_5_val , 0f))
{
return false;
}
{
            var enumerator = CoroutinePool.Get<GET_ADJY>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }ADJUST_Y_7 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_7_val = ADJUST_Y_7.GetFloat(PropertyName.VAL);
ADJUST_Y_8 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_8.SetFloat(231,ADJUST_Y_7_val + 1f);
{
            var enumerator = CoroutinePool.Get<SET_ADJY>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }
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
        
goto AGAIN;
//Unknown keyword: 
      return false;
  }
IAcknexObject ADJUST_Y_1;
float ADJUST_Y_1_val;
IAcknexObject ADJUST_Y_2;
float startTime1;
float endTime1;
IAcknexObject KEY_8_5;
float KEY_8_5_val;
IAcknexObject ADJUST_Y_7;
float ADJUST_Y_7_val;
IAcknexObject ADJUST_Y_8;
float startTime2;
float endTime2;
}
public class ADJUST_YMINUS : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public ADJUST_YMINUS() {
  }
 public ADJUST_YMINUS(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
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
{
            var enumerator = CoroutinePool.Get<GET_ADJY>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }ADJUST_Y_1 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_1_val = ADJUST_Y_1.GetFloat(PropertyName.VAL);
ADJUST_Y_2 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_2.SetFloat(231,ADJUST_Y_1_val + -1f);
{
            var enumerator = CoroutinePool.Get<SET_ADJY>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
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
        
AGAIN:
KEY_7_5 = _world.GetObject(ObjectType.Skill,493);
KEY_7_5_val = KEY_7_5.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(KEY_7_5_val , 0f))
{
return false;
}
{
            var enumerator = CoroutinePool.Get<GET_ADJY>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }ADJUST_Y_7 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_7_val = ADJUST_Y_7.GetFloat(PropertyName.VAL);
ADJUST_Y_8 = _world.GetObject(ObjectType.Skill,2645644560);
ADJUST_Y_8.SetFloat(231,ADJUST_Y_7_val + -1f);
{
            var enumerator = CoroutinePool.Get<SET_ADJY>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }
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
        
goto AGAIN;
//Unknown keyword: 
      return false;
  }
IAcknexObject ADJUST_Y_1;
float ADJUST_Y_1_val;
IAcknexObject ADJUST_Y_2;
float startTime1;
float endTime1;
IAcknexObject KEY_7_5;
float KEY_7_5_val;
IAcknexObject ADJUST_Y_7;
float ADJUST_Y_7_val;
IAcknexObject ADJUST_Y_8;
float startTime2;
float endTime2;
}
public class SET_WMODE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_WMODE() {
  }
 public SET_WMODE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
ADJUST_PANEL_1 = _world.AcknexObject.GetAcknexObject(3393701415);
temp_2 =ADJUST_PANEL_1.GetFloat(226);
ADJUST_TEXT_4 = _world.AcknexObject.GetAcknexObject(3096450908);
ADJUST_TEXT_4.SetFloat(226,temp_2);
_world.Shoot(null, MY, THERE);
HIT_DIST_6 = _world.GetObject(ObjectType.Skill,444);
HIT_DIST_6_val = HIT_DIST_6.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(HIT_DIST_6_val , 0f))
{
return false;
}
ADJUST_PANEL_7 = _world.AcknexObject.GetAcknexObject(3393701415);
_world.AcknexObject.SetAcknexObject(138,ADJUST_PANEL_7);
HIT_10 = _world.GetSynonymObject(704);
_world.SetSynonymObject(3096553959,HIT_10);
ADJUST_WALL_14 = _world.GetSynonymObject(3096553959);
temp_15 =ADJUST_WALL_14.GetFloat(268);
if (Game.CheckEquals(temp_15 , 1f))
{
goto SET_POSMODE;
}
ADJUST_MODE_17 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_17.SetFloat(231,0f);
WALL_MODE_18 = _world.AcknexObject.GetAcknexObject(395494977);
ADJUST_TEXT_20 = _world.AcknexObject.GetAcknexObject(3096450908);
ADJUST_TEXT_20_array = ADJUST_TEXT_20.GetObject<List<IAcknexObject>>(293);
ADJUST_TEXT_20_index = ADJUST_TEXT_20.GetInteger(PropertyName.INDEX);
ADJUST_TEXT_20_array[ADJUST_TEXT_20_index-1] = WALL_MODE_18;
ADJUST_TEXT_20.IsDirty = true;
{
            var enumerator = CoroutinePool.Get<GET_ADJX>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<GET_ADJY>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }return false;
SET_POSMODE:
ADJUST_MODE_22 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_22.SetFloat(231,6f);
POS_MODE_23 = _world.AcknexObject.GetAcknexObject(3657263651);
ADJUST_TEXT_25 = _world.AcknexObject.GetAcknexObject(3096450908);
ADJUST_TEXT_25_array = ADJUST_TEXT_25.GetObject<List<IAcknexObject>>(293);
ADJUST_TEXT_25_index = ADJUST_TEXT_25.GetInteger(PropertyName.INDEX);
ADJUST_TEXT_25_array[ADJUST_TEXT_25_index-1] = POS_MODE_23;
ADJUST_TEXT_25.IsDirty = true;
{
            var enumerator = CoroutinePool.Get<GET_ADJX>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<GET_ADJY>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject ADJUST_PANEL_1;
float temp_2;
IAcknexObject ADJUST_TEXT_4;
IAcknexObject HIT_DIST_6;
float HIT_DIST_6_val;
IAcknexObject ADJUST_PANEL_7;
IAcknexObject HIT_10;
IAcknexObject ADJUST_WALL_14;
float temp_15;
IAcknexObject ADJUST_MODE_17;
IAcknexObject WALL_MODE_18;
IAcknexObject ADJUST_TEXT_20;
List<IAcknexObject> ADJUST_TEXT_20_array;
int ADJUST_TEXT_20_index;
IAcknexObject ADJUST_MODE_22;
IAcknexObject POS_MODE_23;
IAcknexObject ADJUST_TEXT_25;
List<IAcknexObject> ADJUST_TEXT_25_array;
int ADJUST_TEXT_25_index;
}
public class SET_FMODE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_FMODE() {
  }
 public SET_FMODE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_1.SetFloat(231,1f);
ADJUST_PANEL_3 = _world.AcknexObject.GetAcknexObject(3393701415);
temp_4 =ADJUST_PANEL_3.GetFloat(226);
ADJUST_TEXT_6 = _world.AcknexObject.GetAcknexObject(3096450908);
ADJUST_TEXT_6.SetFloat(226,temp_4);
FLO_MODE_7 = _world.AcknexObject.GetAcknexObject(2938618002);
ADJUST_TEXT_9 = _world.AcknexObject.GetAcknexObject(3096450908);
ADJUST_TEXT_9_array = ADJUST_TEXT_9.GetObject<List<IAcknexObject>>(293);
ADJUST_TEXT_9_index = ADJUST_TEXT_9.GetInteger(PropertyName.INDEX);
ADJUST_TEXT_9_array[ADJUST_TEXT_9_index-1] = FLO_MODE_7;
ADJUST_TEXT_9.IsDirty = true;
HERE_10 = _world.GetSynonymObject(703);
_world.SetSynonymObject(3477744245,HERE_10);
ADJUST_PANEL_12 = _world.AcknexObject.GetAcknexObject(3393701415);
_world.AcknexObject.SetAcknexObject(138,ADJUST_PANEL_12);
{
            var enumerator = CoroutinePool.Get<GET_ADJX>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<GET_ADJY>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject ADJUST_MODE_1;
IAcknexObject ADJUST_PANEL_3;
float temp_4;
IAcknexObject ADJUST_TEXT_6;
IAcknexObject FLO_MODE_7;
IAcknexObject ADJUST_TEXT_9;
List<IAcknexObject> ADJUST_TEXT_9_array;
int ADJUST_TEXT_9_index;
IAcknexObject HERE_10;
IAcknexObject ADJUST_PANEL_12;
}
public class SET_CMODE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_CMODE() {
  }
 public SET_CMODE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_1.SetFloat(231,2f);
ADJUST_PANEL_3 = _world.AcknexObject.GetAcknexObject(3393701415);
temp_4 =ADJUST_PANEL_3.GetFloat(226);
ADJUST_TEXT_6 = _world.AcknexObject.GetAcknexObject(3096450908);
ADJUST_TEXT_6.SetFloat(226,temp_4);
CEIL_MODE_7 = _world.AcknexObject.GetAcknexObject(3354562414);
ADJUST_TEXT_9 = _world.AcknexObject.GetAcknexObject(3096450908);
ADJUST_TEXT_9_array = ADJUST_TEXT_9.GetObject<List<IAcknexObject>>(293);
ADJUST_TEXT_9_index = ADJUST_TEXT_9.GetInteger(PropertyName.INDEX);
ADJUST_TEXT_9_array[ADJUST_TEXT_9_index-1] = CEIL_MODE_7;
ADJUST_TEXT_9.IsDirty = true;
HERE_10 = _world.GetSynonymObject(703);
_world.SetSynonymObject(3477744245,HERE_10);
ADJUST_PANEL_12 = _world.AcknexObject.GetAcknexObject(3393701415);
_world.AcknexObject.SetAcknexObject(138,ADJUST_PANEL_12);
{
            var enumerator = CoroutinePool.Get<GET_ADJX>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<GET_ADJY>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject ADJUST_MODE_1;
IAcknexObject ADJUST_PANEL_3;
float temp_4;
IAcknexObject ADJUST_TEXT_6;
IAcknexObject CEIL_MODE_7;
IAcknexObject ADJUST_TEXT_9;
List<IAcknexObject> ADJUST_TEXT_9_array;
int ADJUST_TEXT_9_index;
IAcknexObject HERE_10;
IAcknexObject ADJUST_PANEL_12;
}
public class SET_RMODE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_RMODE() {
  }
 public SET_RMODE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_1.SetFloat(231,3f);
ADJUST_PANEL_3 = _world.AcknexObject.GetAcknexObject(3393701415);
temp_4 =ADJUST_PANEL_3.GetFloat(226);
ADJUST_TEXT_6 = _world.AcknexObject.GetAcknexObject(3096450908);
ADJUST_TEXT_6.SetFloat(226,temp_4);
REGIO_MODE_7 = _world.AcknexObject.GetAcknexObject(526542407);
ADJUST_TEXT_9 = _world.AcknexObject.GetAcknexObject(3096450908);
ADJUST_TEXT_9_array = ADJUST_TEXT_9.GetObject<List<IAcknexObject>>(293);
ADJUST_TEXT_9_index = ADJUST_TEXT_9.GetInteger(PropertyName.INDEX);
ADJUST_TEXT_9_array[ADJUST_TEXT_9_index-1] = REGIO_MODE_7;
ADJUST_TEXT_9.IsDirty = true;
HERE_10 = _world.GetSynonymObject(703);
_world.SetSynonymObject(3477744245,HERE_10);
ADJUST_PANEL_12 = _world.AcknexObject.GetAcknexObject(3393701415);
_world.AcknexObject.SetAcknexObject(138,ADJUST_PANEL_12);
{
            var enumerator = CoroutinePool.Get<GET_ADJX>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<GET_ADJY>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject ADJUST_MODE_1;
IAcknexObject ADJUST_PANEL_3;
float temp_4;
IAcknexObject ADJUST_TEXT_6;
IAcknexObject REGIO_MODE_7;
IAcknexObject ADJUST_TEXT_9;
List<IAcknexObject> ADJUST_TEXT_9_array;
int ADJUST_TEXT_9_index;
IAcknexObject HERE_10;
IAcknexObject ADJUST_PANEL_12;
}
public class SET_VMODE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_VMODE() {
  }
 public SET_VMODE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_1.SetFloat(231,8f);
ADJUST_PANEL_3 = _world.AcknexObject.GetAcknexObject(3393701415);
temp_4 =ADJUST_PANEL_3.GetFloat(226);
ADJUST_TEXT_6 = _world.AcknexObject.GetAcknexObject(3096450908);
ADJUST_TEXT_6.SetFloat(226,temp_4);
REGAMB_MODE_7 = _world.AcknexObject.GetAcknexObject(3444229791);
ADJUST_TEXT_9 = _world.AcknexObject.GetAcknexObject(3096450908);
ADJUST_TEXT_9_array = ADJUST_TEXT_9.GetObject<List<IAcknexObject>>(293);
ADJUST_TEXT_9_index = ADJUST_TEXT_9.GetInteger(PropertyName.INDEX);
ADJUST_TEXT_9_array[ADJUST_TEXT_9_index-1] = REGAMB_MODE_7;
ADJUST_TEXT_9.IsDirty = true;
HERE_10 = _world.GetSynonymObject(703);
_world.SetSynonymObject(3477744245,HERE_10);
ADJUST_PANEL_12 = _world.AcknexObject.GetAcknexObject(3393701415);
_world.AcknexObject.SetAcknexObject(138,ADJUST_PANEL_12);
{
            var enumerator = CoroutinePool.Get<GET_ADJX>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<GET_ADJY>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject ADJUST_MODE_1;
IAcknexObject ADJUST_PANEL_3;
float temp_4;
IAcknexObject ADJUST_TEXT_6;
IAcknexObject REGAMB_MODE_7;
IAcknexObject ADJUST_TEXT_9;
List<IAcknexObject> ADJUST_TEXT_9_array;
int ADJUST_TEXT_9_index;
IAcknexObject HERE_10;
IAcknexObject ADJUST_PANEL_12;
}
public class SET_AMODE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_AMODE() {
  }
 public SET_AMODE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
ADJUST_PANEL_1 = _world.AcknexObject.GetAcknexObject(3393701415);
temp_2 =ADJUST_PANEL_1.GetFloat(226);
ADJUST_TEXT_4 = _world.AcknexObject.GetAcknexObject(3096450908);
ADJUST_TEXT_4.SetFloat(226,temp_2);
ADJUST_MODE_6 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_6_val = ADJUST_MODE_6.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(ADJUST_MODE_6_val , 4f))
{
goto NEXT_TEX;
}
_world.Shoot(null, MY, THERE);
HIT_DIST_8 = _world.GetObject(ObjectType.Skill,444);
HIT_DIST_8_val = HIT_DIST_8.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(HIT_DIST_8_val , 0f))
{
return false;
}
ADJUST_MODE_10 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_10.SetFloat(231,4f);
ATTACH_MODE_11 = _world.AcknexObject.GetAcknexObject(625708934);
ADJUST_TEXT_13 = _world.AcknexObject.GetAcknexObject(3096450908);
ADJUST_TEXT_13_array = ADJUST_TEXT_13.GetObject<List<IAcknexObject>>(293);
ADJUST_TEXT_13_index = ADJUST_TEXT_13.GetInteger(PropertyName.INDEX);
ADJUST_TEXT_13_array[ADJUST_TEXT_13_index-1] = ATTACH_MODE_11;
ADJUST_TEXT_13.IsDirty = true;
ADJUST_PANEL_14 = _world.AcknexObject.GetAcknexObject(3393701415);
_world.AcknexObject.SetAcknexObject(138,ADJUST_PANEL_14);
HIT_18 = _world.GetSynonymObject(704);
temp_19 =HIT_18?.GetAcknexObject(164);
_world.SetSynonymObject(3477746440,temp_19);
NEXT_TEX:
ADJUST_TEX_23 = _world.GetSynonymObject(3477746440);
temp_24 =ADJUST_TEX_23?.GetAcknexObject(166);
if (!Game.CheckEquals(temp_24 , null))
{
goto SET_TEX;
}
HIT_26 = _world.GetSynonymObject(704);
temp_27 =HIT_26?.GetAcknexObject(164);
_world.SetSynonymObject(3477746440,temp_27);
ADJUST_TEX_31 = _world.GetSynonymObject(3477746440);
temp_32 =ADJUST_TEX_31?.GetAcknexObject(166);
if (Game.CheckEquals(temp_32 , null))
{
return false;
}
SET_TEX:
ADJUST_TEX_34 = _world.GetSynonymObject(3477746440);
temp_35 =ADJUST_TEX_34?.GetAcknexObject(166);
_world.SetSynonymObject(3477746440,temp_35);
{
            var enumerator = CoroutinePool.Get<GET_ADJX>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<GET_ADJY>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject ADJUST_PANEL_1;
float temp_2;
IAcknexObject ADJUST_TEXT_4;
IAcknexObject ADJUST_MODE_6;
float ADJUST_MODE_6_val;
IAcknexObject HIT_DIST_8;
float HIT_DIST_8_val;
IAcknexObject ADJUST_MODE_10;
IAcknexObject ATTACH_MODE_11;
IAcknexObject ADJUST_TEXT_13;
List<IAcknexObject> ADJUST_TEXT_13_array;
int ADJUST_TEXT_13_index;
IAcknexObject ADJUST_PANEL_14;
IAcknexObject HIT_18;
IAcknexObject temp_19;
IAcknexObject ADJUST_TEX_23;
IAcknexObject temp_24;
IAcknexObject HIT_26;
IAcknexObject temp_27;
IAcknexObject ADJUST_TEX_31;
IAcknexObject temp_32;
IAcknexObject ADJUST_TEX_34;
IAcknexObject temp_35;
}
public class SET_SMODE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_SMODE() {
  }
 public SET_SMODE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
ADJUST_PANEL_1 = _world.AcknexObject.GetAcknexObject(3393701415);
temp_2 =ADJUST_PANEL_1.GetFloat(226);
ADJUST_TEXT_4 = _world.AcknexObject.GetAcknexObject(3096450908);
ADJUST_TEXT_4.SetFloat(226,temp_2);
_world.Shoot(null, MY, THERE);
HIT_DIST_6 = _world.GetObject(ObjectType.Skill,444);
HIT_DIST_6_val = HIT_DIST_6.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(HIT_DIST_6_val , 0f))
{
return false;
}
ADJUST_PANEL_7 = _world.AcknexObject.GetAcknexObject(3393701415);
_world.AcknexObject.SetAcknexObject(138,ADJUST_PANEL_7);
HIT_11 = _world.GetSynonymObject(704);
temp_12 =HIT_11?.GetAcknexObject(164);
_world.SetSynonymObject(3477746440,temp_12);
HIT_14 = _world.GetSynonymObject(704);
_world.SetSynonymObject(3096553959,HIT_14);
ADJUST_MODE_17 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_17.SetFloat(231,5f);
SCALE_MODE_18 = _world.AcknexObject.GetAcknexObject(2156148761);
ADJUST_TEXT_20 = _world.AcknexObject.GetAcknexObject(3096450908);
ADJUST_TEXT_20_array = ADJUST_TEXT_20.GetObject<List<IAcknexObject>>(293);
ADJUST_TEXT_20_index = ADJUST_TEXT_20.GetInteger(PropertyName.INDEX);
ADJUST_TEXT_20_array[ADJUST_TEXT_20_index-1] = SCALE_MODE_18;
ADJUST_TEXT_20.IsDirty = true;
{
            var enumerator = CoroutinePool.Get<GET_ADJX>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<GET_ADJY>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject ADJUST_PANEL_1;
float temp_2;
IAcknexObject ADJUST_TEXT_4;
IAcknexObject HIT_DIST_6;
float HIT_DIST_6_val;
IAcknexObject ADJUST_PANEL_7;
IAcknexObject HIT_11;
IAcknexObject temp_12;
IAcknexObject HIT_14;
IAcknexObject ADJUST_MODE_17;
IAcknexObject SCALE_MODE_18;
IAcknexObject ADJUST_TEXT_20;
List<IAcknexObject> ADJUST_TEXT_20_array;
int ADJUST_TEXT_20_index;
}
public class SET_BMODE : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public SET_BMODE() {
  }
 public SET_BMODE(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
ADJUST_PANEL_1 = _world.AcknexObject.GetAcknexObject(3393701415);
temp_2 =ADJUST_PANEL_1.GetFloat(226);
ADJUST_TEXT_4 = _world.AcknexObject.GetAcknexObject(3096450908);
ADJUST_TEXT_4.SetFloat(226,temp_2);
_world.Shoot(null, MY, THERE);
HIT_DIST_6 = _world.GetObject(ObjectType.Skill,444);
HIT_DIST_6_val = HIT_DIST_6.GetFloat(PropertyName.VAL);
if (Game.CheckEquals(HIT_DIST_6_val , 0f))
{
return false;
}
ADJUST_PANEL_7 = _world.AcknexObject.GetAcknexObject(3393701415);
_world.AcknexObject.SetAcknexObject(138,ADJUST_PANEL_7);
HIT_11 = _world.GetSynonymObject(704);
temp_12 =HIT_11?.GetAcknexObject(164);
_world.SetSynonymObject(3477746440,temp_12);
HIT_14 = _world.GetSynonymObject(704);
_world.SetSynonymObject(3096553959,HIT_14);
ADJUST_MODE_17 = _world.GetObject(ObjectType.Skill,3096209564);
ADJUST_MODE_17.SetFloat(231,7f);
AMBIENT_MODE_18 = _world.AcknexObject.GetAcknexObject(307661009);
ADJUST_TEXT_20 = _world.AcknexObject.GetAcknexObject(3096450908);
ADJUST_TEXT_20_array = ADJUST_TEXT_20.GetObject<List<IAcknexObject>>(293);
ADJUST_TEXT_20_index = ADJUST_TEXT_20.GetInteger(PropertyName.INDEX);
ADJUST_TEXT_20_array[ADJUST_TEXT_20_index-1] = AMBIENT_MODE_18;
ADJUST_TEXT_20.IsDirty = true;
{
            var enumerator = CoroutinePool.Get<GET_ADJX>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }{
            var enumerator = CoroutinePool.Get<GET_ADJY>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject ADJUST_PANEL_1;
float temp_2;
IAcknexObject ADJUST_TEXT_4;
IAcknexObject HIT_DIST_6;
float HIT_DIST_6_val;
IAcknexObject ADJUST_PANEL_7;
IAcknexObject HIT_11;
IAcknexObject temp_12;
IAcknexObject HIT_14;
IAcknexObject ADJUST_MODE_17;
IAcknexObject AMBIENT_MODE_18;
IAcknexObject ADJUST_TEXT_20;
List<IAcknexObject> ADJUST_TEXT_20_array;
int ADJUST_TEXT_20_index;
}
public class FADE_IN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public FADE_IN() {
  }
 public FADE_IN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
FADE_1 = _world.GetObject(ObjectType.Skill,2089063293);
FADE_1.SetFloat(231,0f);
LOOP:
FADE_3 = _world.GetObject(ObjectType.Skill,2089063293);
FADE_3_val = FADE_3.GetFloat(PropertyName.VAL);
FADE_4 = _world.GetObject(ObjectType.Skill,2089063293);
FADE_4.SetFloat(231,FADE_3_val + 0.1f);
PAL1_5 = _world.AcknexObject.GetAcknexObject(2089422907);
FADE_6 = _world.GetObject(ObjectType.Skill,2089063293);
FADE_6_val = FADE_6.GetFloat(PropertyName.VAL);
_world.FadePal(PAL1_5,FADE_6_val);

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
        
FADE_9 = _world.GetObject(ObjectType.Skill,2089063293);
FADE_9_val = FADE_9.GetFloat(PropertyName.VAL);
if (MathUtils.CheckLower(FADE_9_val , 1f))
{
goto LOOP;
}
PAL1_10 = _world.AcknexObject.GetAcknexObject(2089422907);
_world.FadePal(PAL1_10,1f);
//Unknown keyword: 
      return false;
  }
IAcknexObject FADE_1;
IAcknexObject FADE_3;
float FADE_3_val;
IAcknexObject FADE_4;
IAcknexObject PAL1_5;
IAcknexObject FADE_6;
float FADE_6_val;
float startTime1;
float endTime1;
IAcknexObject FADE_9;
float FADE_9_val;
IAcknexObject PAL1_10;
}
public class FADE_OUT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public FADE_OUT() {
  }
 public FADE_OUT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
            case 1:
                goto _coroutine1;
     }
FADE_1 = _world.GetObject(ObjectType.Skill,2089063293);
FADE_1.SetFloat(231,1f);
LOOP:
FADE_3 = _world.GetObject(ObjectType.Skill,2089063293);
FADE_3_val = FADE_3.GetFloat(PropertyName.VAL);
FADE_4 = _world.GetObject(ObjectType.Skill,2089063293);
FADE_4.SetFloat(231,FADE_3_val + 0.1f);
BLACK_PAL_5 = _world.AcknexObject.GetAcknexObject(1259509126);
FADE_6 = _world.GetObject(ObjectType.Skill,2089063293);
FADE_6_val = FADE_6.GetFloat(PropertyName.VAL);
_world.FadePal(BLACK_PAL_5,FADE_6_val);

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
        
FADE_9 = _world.GetObject(ObjectType.Skill,2089063293);
FADE_9_val = FADE_9.GetFloat(PropertyName.VAL);
if (MathUtils.CheckLower(FADE_9_val , 1f))
{
goto LOOP;
}
BLACK_PAL_10 = _world.AcknexObject.GetAcknexObject(1259509126);
_world.FadePal(BLACK_PAL_10,1f);
Application.Quit();
//Unknown keyword: 
      return false;
  }
IAcknexObject FADE_1;
IAcknexObject FADE_3;
float FADE_3_val;
IAcknexObject FADE_4;
IAcknexObject BLACK_PAL_5;
IAcknexObject FADE_6;
float FADE_6_val;
float startTime1;
float endTime1;
IAcknexObject FADE_9;
float FADE_9_val;
IAcknexObject BLACK_PAL_10;
}
public class VRDEMO_START : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public VRDEMO_START() {
  }
 public VRDEMO_START(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
DEMOSONG_0 = _world.AcknexObject.GetAcknexObject(3053707209);
_world.PlaySong(DEMOSONG_0,1f);
{
            var enumerator = CoroutinePool.Get<SET_WALKING>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }MY_SIZE_3 = _world.GetObject(ObjectType.Skill,25486605);
MY_SIZE_3.SetFloat(231,5f);
DIVE_UP_4 = _world.AcknexObject.GetAcknexObject(649857881);
_world.SetSynonymObject(1917066007,DIVE_UP_4);
//Unknown keyword: 
      return false;
  }
IAcknexObject DEMOSONG_0;
IAcknexObject MY_SIZE_3;
IAcknexObject DIVE_UP_4;
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
WASSERNORM_0 = _world.AcknexObject.GetAcknexObject(1581484894);
_world.PlaySound(WASSERNORM_0,0.8f, null);
{
            var enumerator = CoroutinePool.Get<SET_SWIMMING>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject WASSERNORM_0;
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
            var enumerator = CoroutinePool.Get<SET_WALKING>();
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
AUFTAUCH_0 = _world.AcknexObject.GetAcknexObject(2967389342);
_world.PlaySound(AUFTAUCH_0,0.8f, null);
{
            var enumerator = CoroutinePool.Get<RESET_BLUE>();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject AUFTAUCH_0;
}
public class PULSUP : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public PULSUP() {
  }
 public PULSUP(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SPHERE_2 = _world.AcknexObject.GetAcknexObject(3477833940);
temp_3 =SPHERE_2.GetFloat(112);
SPHERE_5 = _world.AcknexObject.GetAcknexObject(3477833940);
SPHERE_5.SetFloat(112,temp_3 + 0.1f);
SPHERE_8 = _world.AcknexObject.GetAcknexObject(3477833940);
temp_9 =SPHERE_8.GetFloat(112);
if (MathUtils.CheckGreater(temp_9 , 1f))
{
PULSDOWN_10 = _world.AcknexObject.GetAcknexObject(2527635273);
SPHERE_12 = _world.AcknexObject.GetAcknexObject(3477833940);
SPHERE_12.SetAcknexObject(189,PULSDOWN_10);
}
//Unknown keyword: 
      return false;
  }
IAcknexObject SPHERE_2;
float temp_3;
IAcknexObject SPHERE_5;
IAcknexObject SPHERE_8;
float temp_9;
IAcknexObject PULSDOWN_10;
IAcknexObject SPHERE_12;
}
public class PULSDOWN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public PULSDOWN() {
  }
 public PULSDOWN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SPHERE_2 = _world.AcknexObject.GetAcknexObject(3477833940);
temp_3 =SPHERE_2.GetFloat(112);
SPHERE_5 = _world.AcknexObject.GetAcknexObject(3477833940);
SPHERE_5.SetFloat(112,temp_3 + -0.1f);
SPHERE_8 = _world.AcknexObject.GetAcknexObject(3477833940);
temp_9 =SPHERE_8.GetFloat(112);
if (MathUtils.CheckLower(temp_9 , 0f))
{
PULSUP_10 = _world.AcknexObject.GetAcknexObject(3366516470);
SPHERE_12 = _world.AcknexObject.GetAcknexObject(3477833940);
SPHERE_12.SetAcknexObject(189,PULSUP_10);
}
//Unknown keyword: 
      return false;
  }
IAcknexObject SPHERE_2;
float temp_3;
IAcknexObject SPHERE_5;
IAcknexObject SPHERE_8;
float temp_9;
IAcknexObject PULSUP_10;
IAcknexObject SPHERE_12;
}
public class FALLTUER : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public FALLTUER() {
  }
 public FALLTUER(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
LIFT_DOWN_0 = _world.AcknexObject.GetAcknexObject(3171909075);
RUMPELKAMMERSOCKEL_2 = _world.AcknexObject.GetAcknexObject(815462912);
RUMPELKAMMERSOCKEL_2.SetAcknexObject(189,LIFT_DOWN_0);
//Unknown keyword: 
      return false;
  }
IAcknexObject LIFT_DOWN_0;
IAcknexObject RUMPELKAMMERSOCKEL_2;
}
public class ARSCHTRITT : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public ARSCHTRITT() {
  }
 public ARSCHTRITT(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
LIFT_UP_0 = _world.AcknexObject.GetAcknexObject(2373231360);
RUMPELKAMMERSOCKEL_2 = _world.AcknexObject.GetAcknexObject(815462912);
RUMPELKAMMERSOCKEL_2.SetAcknexObject(189,LIFT_UP_0);
//Unknown keyword: 
      return false;
  }
IAcknexObject LIFT_UP_0;
IAcknexObject RUMPELKAMMERSOCKEL_2;
}
public class LIFT_DOWN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LIFT_DOWN() {
  }
 public LIFT_DOWN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
RUMPELKAMMERSOCKEL_2 = _world.AcknexObject.GetAcknexObject(815462912);
temp_3 =RUMPELKAMMERSOCKEL_2.GetFloat(200);
RUMPELKAMMERSOCKEL_5 = _world.AcknexObject.GetAcknexObject(815462912);
RUMPELKAMMERSOCKEL_5.SetFloat(200,temp_3 + -0.3f);
STONELIFT_6 = _world.AcknexObject.GetAcknexObject(3091575749);
_world.PlaySound(STONELIFT_6,0.3f, null);
PLAYER_Z_9 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_9_val = PLAYER_Z_9.GetFloat(PropertyName.VAL);
PLAYER_Z_10 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_10.SetFloat(231,PLAYER_Z_9_val + -0.3f);
RENDER_MODE_12 = _world.GetObject(ObjectType.Skill,361);
RENDER_MODE_12.SetFloat(231,1f);
RUMPELKAMMERSOCKEL_15 = _world.AcknexObject.GetAcknexObject(815462912);
temp_16 =RUMPELKAMMERSOCKEL_15.GetFloat(200);
if (MathUtils.CheckGreater(temp_16 , 0f))
{
return false;
}
RUMPELKAMMERSOCKEL_19 = _world.AcknexObject.GetAcknexObject(815462912);
RUMPELKAMMERSOCKEL_19.SetFloat(200,0f);
RUMPELKAMMERSOCKEL_22 = _world.AcknexObject.GetAcknexObject(815462912);
RUMPELKAMMERSOCKEL_22.SetAcknexObject(189,null);
ARSCHTRITT_23 = _world.AcknexObject.GetAcknexObject(4179659445);
RUMPELKAMMERSOCKEL_25 = _world.AcknexObject.GetAcknexObject(815462912);
RUMPELKAMMERSOCKEL_25.SetAcknexObject(81,ARSCHTRITT_23);
DUNKELGANGSPERRE_28 = _world.AcknexObject.GetAcknexObject(428871646);
DUNKELGANGSPERRE_28.SetFloat(201,6f);
//Unknown keyword: 
      return false;
  }
IAcknexObject RUMPELKAMMERSOCKEL_2;
float temp_3;
IAcknexObject RUMPELKAMMERSOCKEL_5;
IAcknexObject STONELIFT_6;
IAcknexObject PLAYER_Z_9;
float PLAYER_Z_9_val;
IAcknexObject PLAYER_Z_10;
IAcknexObject RENDER_MODE_12;
IAcknexObject RUMPELKAMMERSOCKEL_15;
float temp_16;
IAcknexObject RUMPELKAMMERSOCKEL_19;
IAcknexObject RUMPELKAMMERSOCKEL_22;
IAcknexObject ARSCHTRITT_23;
IAcknexObject RUMPELKAMMERSOCKEL_25;
IAcknexObject DUNKELGANGSPERRE_28;
}
public class LIFT_UP : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public LIFT_UP() {
  }
 public LIFT_UP(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
RUMPELKAMMERSOCKEL_2 = _world.AcknexObject.GetAcknexObject(815462912);
temp_3 =RUMPELKAMMERSOCKEL_2.GetFloat(200);
RUMPELKAMMERSOCKEL_5 = _world.AcknexObject.GetAcknexObject(815462912);
RUMPELKAMMERSOCKEL_5.SetFloat(200,temp_3 + 0.3f);
PLAYER_Z_7 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_7_val = PLAYER_Z_7.GetFloat(PropertyName.VAL);
PLAYER_Z_8 = _world.GetObject(ObjectType.Skill,461);
PLAYER_Z_8.SetFloat(231,PLAYER_Z_7_val + 0.3f);
RENDER_MODE_10 = _world.GetObject(ObjectType.Skill,361);
RENDER_MODE_10.SetFloat(231,1f);
STONELIFT_11 = _world.AcknexObject.GetAcknexObject(3091575749);
_world.PlaySound(STONELIFT_11,0.3f, null);
RUMPELKAMMERSOCKEL_15 = _world.AcknexObject.GetAcknexObject(815462912);
temp_16 =RUMPELKAMMERSOCKEL_15.GetFloat(200);
if (MathUtils.CheckLower(temp_16 , 15.5f))
{
return false;
}
RUMPELKAMMERSOCKEL_19 = _world.AcknexObject.GetAcknexObject(815462912);
RUMPELKAMMERSOCKEL_19.SetFloat(200,15.5f);
RUMPELKAMMERSOCKEL_22 = _world.AcknexObject.GetAcknexObject(815462912);
RUMPELKAMMERSOCKEL_22.SetAcknexObject(189,null);
FALLTUER_23 = _world.AcknexObject.GetAcknexObject(1477691692);
RUMPELKAMMERSOCKEL_25 = _world.AcknexObject.GetAcknexObject(815462912);
RUMPELKAMMERSOCKEL_25.SetAcknexObject(81,FALLTUER_23);
//Unknown keyword: 
      return false;
  }
IAcknexObject RUMPELKAMMERSOCKEL_2;
float temp_3;
IAcknexObject RUMPELKAMMERSOCKEL_5;
IAcknexObject PLAYER_Z_7;
float PLAYER_Z_7_val;
IAcknexObject PLAYER_Z_8;
IAcknexObject RENDER_MODE_10;
IAcknexObject STONELIFT_11;
IAcknexObject RUMPELKAMMERSOCKEL_15;
float temp_16;
IAcknexObject RUMPELKAMMERSOCKEL_19;
IAcknexObject RUMPELKAMMERSOCKEL_22;
IAcknexObject FALLTUER_23;
IAcknexObject RUMPELKAMMERSOCKEL_25;
}
public class CHECK_OPEN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public CHECK_OPEN() {
  }
 public CHECK_OPEN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SECRET_DOOR_2 = _world.AcknexObject.GetAcknexObject(4080722470);
temp_3 =SECRET_DOOR_2.GetFloat(201);
if (MathUtils.CheckLower(temp_3 , 8f))
{
OPENDOOR_4 = _world.AcknexObject.GetAcknexObject(416615091);
_world.AcknexObject.SetAcknexObject(13,OPENDOOR_4);
}
SECRET_DOOR_9 = _world.AcknexObject.GetAcknexObject(4080722470);
temp_10 =SECRET_DOOR_9.GetFloat(201);
if (MathUtils.CheckLower(temp_10 , 5.1f))
{
STONEDOOR_11 = _world.AcknexObject.GetAcknexObject(3091295082);
_world.PlaySound(STONEDOOR_11,0.7f, null);
}
//Unknown keyword: 
      return false;
  }
IAcknexObject SECRET_DOOR_2;
float temp_3;
IAcknexObject OPENDOOR_4;
IAcknexObject SECRET_DOOR_9;
float temp_10;
IAcknexObject STONEDOOR_11;
}
public class OPENDOOR : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public OPENDOOR() {
  }
 public OPENDOOR(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
SECRET_DOOR_2 = _world.AcknexObject.GetAcknexObject(4080722470);
temp_3 =SECRET_DOOR_2.GetFloat(201);
SECRET_DOOR_5 = _world.AcknexObject.GetAcknexObject(4080722470);
SECRET_DOOR_5.SetFloat(201,temp_3 + 0.3f);
RENDER_MODE_7 = _world.GetObject(ObjectType.Skill,361);
RENDER_MODE_7.SetFloat(231,1f);
SECRET_DOOR_10 = _world.AcknexObject.GetAcknexObject(4080722470);
temp_11 =SECRET_DOOR_10.GetFloat(201);
if (MathUtils.CheckGreater(temp_11 , 16f))
{
_world.AcknexObject.SetAcknexObject(13,null);
}
//Unknown keyword: 
      return false;
  }
IAcknexObject SECRET_DOOR_2;
float temp_3;
IAcknexObject SECRET_DOOR_5;
IAcknexObject RENDER_MODE_7;
IAcknexObject SECRET_DOOR_10;
float temp_11;
}
public class IST_OPEN : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public IST_OPEN() {
  }
 public IST_OPEN(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
GEHEIMTUER_2 = _world.AcknexObject.GetAcknexObject(2617659196);
temp_3 =GEHEIMTUER_2.GetFloat(201);
if (MathUtils.CheckLower(temp_3 , 8f))
{
AUFGEH_4 = _world.AcknexObject.GetAcknexObject(2779256349);
_world.AcknexObject.SetAcknexObject(14,AUFGEH_4);
}
GEHEIMTUER_9 = _world.AcknexObject.GetAcknexObject(2617659196);
temp_10 =GEHEIMTUER_9.GetFloat(201);
if (MathUtils.CheckLower(temp_10 , 2.7f))
{
STONEDOOR_11 = _world.AcknexObject.GetAcknexObject(3091295082);
_world.PlaySound(STONEDOOR_11,0.5f, null);
}
//Unknown keyword: 
      return false;
  }
IAcknexObject GEHEIMTUER_2;
float temp_3;
IAcknexObject AUFGEH_4;
IAcknexObject GEHEIMTUER_9;
float temp_10;
IAcknexObject STONEDOOR_11;
}
public class AUFGEH : ICompiledAction {
  private int _cursor;
  public IAcknexObject MY {get; set;}
  public IAcknexObject THERE {get; set;}
  public IAcknexWorld _world {get; set;}
  public object Current { get; set; }
  public void Reset() {
      _cursor = 0;
  }
 public AUFGEH() {
  }
 public AUFGEH(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {
      this.MY = MY;
      this.THERE = THERE;
      this._world = world;
  }
  public bool MoveNext() {
     switch (_cursor){
     }
GEHEIMTUER_2 = _world.AcknexObject.GetAcknexObject(2617659196);
temp_3 =GEHEIMTUER_2.GetFloat(201);
GEHEIMTUER_5 = _world.AcknexObject.GetAcknexObject(2617659196);
GEHEIMTUER_5.SetFloat(201,temp_3 + 0.3f);
RENDER_MODE_7 = _world.GetObject(ObjectType.Skill,361);
RENDER_MODE_7.SetFloat(231,1f);
GEHEIMTUER_10 = _world.AcknexObject.GetAcknexObject(2617659196);
temp_11 =GEHEIMTUER_10.GetFloat(201);
if (MathUtils.CheckGreater(temp_11 , 12f))
{
_world.AcknexObject.SetAcknexObject(14,null);
}
//Unknown keyword: 
      return false;
  }
IAcknexObject GEHEIMTUER_2;
float temp_3;
IAcknexObject GEHEIMTUER_5;
IAcknexObject RENDER_MODE_7;
IAcknexObject GEHEIMTUER_10;
float temp_11;
}
    }
}
