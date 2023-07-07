
        using System;
        using Acknex.Interfaces;
        using System.Collections;
        using System.Collections.Generic;
        using UnityEngine;
        using Random = UnityEngine.Random;
        using PropertyName = Acknex.Interfaces.PropertyName;
        namespace Game {
            public class INTRO01 : IAcknexRuntime {
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
                    }public INTRO01() {_callbacks.Add("ENDOFLEVEL", new ENDOFLEVEL());
_callbacks.Add("STARTLEVEL", new STARTLEVEL());
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
BIP03SND_0 = _world.AcknexObject.GetAcknexObject(371601456);
_world.PlaySound(BIP03SND_0,0.5f, null);
_world.AcknexObject.SetAcknexObject(105,null);
_world.AcknexObject.SetAcknexObject(106,null);
_world.AcknexObject.SetAcknexObject(107,null);
_world.AcknexObject.SetAcknexObject(108,null);

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
        
_world.LoadLevel("CONTATO.WDL","game.wrs");

            startTime2 = Time.time;
            endTime2 = startTime2 + TimeUtils.FramesToTime((int)320f);
            _cursor = 2;
            _coroutine2:
            while (Time.time  < endTime2)
            {
                Current = Game.WaitForEndOfFrame;
                return true;
            }
            Current = null;
        
//Unknown keyword: 
      return false;
  }
IAcknexObject BIP03SND_0;
float startTime1;
float endTime1;
float startTime2;
float endTime2;
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
            case 1:
                goto _coroutine1;
     }
SCREEN_HGT_1 = _world.GetObject(ObjectType.Skill,352);
SCREEN_HGT_1.SetFloat(231,400f);
MAP_SCALE_3 = _world.GetObject(ObjectType.Skill,379);
MAP_SCALE_3.SetFloat(231,5f);
COLOR_PLAYER_5 = _world.GetObject(ObjectType.Skill,383);
COLOR_PLAYER_5.SetFloat(231,101f);
COLOR_ACTORS_7 = _world.GetObject(ObjectType.Skill,384);
COLOR_ACTORS_7.SetFloat(231,164f);
COLOR_THINGS_9 = _world.GetObject(ObjectType.Skill,385);
COLOR_THINGS_9.SetFloat(231,176f);
COLOR_WALLS_11 = _world.GetObject(ObjectType.Skill,386);
COLOR_WALLS_11.SetFloat(231,193f);
COLOR_BORDER_13 = _world.GetObject(ObjectType.Skill,387);
COLOR_BORDER_13.SetFloat(231,195f);
PLAYER_LIGHT_15 = _world.GetObject(ObjectType.Skill,418);
PLAYER_LIGHT_15.SetFloat(231,0.15f);
ACTOR_CLIMB_17 = _world.GetObject(ObjectType.Skill,451);
ACTOR_CLIMB_17.SetFloat(231,1.5f);
MOTION_BLUR_19 = _world.GetObject(ObjectType.Skill,359);
MOTION_BLUR_19.SetFloat(231,0f);
MOVE_MODE_21 = _world.GetObject(ObjectType.Skill,362);
MOVE_MODE_21.SetFloat(231,0f);
INTRO01OVL_22 = _world.AcknexObject.GetAcknexObject(3290783595);
_world.AcknexObject.SetAcknexObject(158,INTRO01OVL_22);
PLAYER_ARC_26 = _world.GetObject(ObjectType.Skill,436);
PLAYER_ARC_26.SetFloat(231,1f);
_world.AcknexObject.SetAcknexObject(82,null);
BLACK_29 = _world.AcknexObject.GetAcknexObject(215228298);
_world.FadePal(BLACK_29,0.4f);
PLEASEWAITTEXT_33 = _world.AcknexObject.GetAcknexObject(1780034721);
PLEASEWAITTEXT_33.SetFloat(205,1f);
PANELTEXT_36 = _world.AcknexObject.GetAcknexObject(1886906754);
PANELTEXT_36.SetFloat(205,1f);

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
            var enumerator = new ENDOFLEVEL();
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }//Unknown keyword: 
      return false;
  }
IAcknexObject SCREEN_HGT_1;
IAcknexObject MAP_SCALE_3;
IAcknexObject COLOR_PLAYER_5;
IAcknexObject COLOR_ACTORS_7;
IAcknexObject COLOR_THINGS_9;
IAcknexObject COLOR_WALLS_11;
IAcknexObject COLOR_BORDER_13;
IAcknexObject PLAYER_LIGHT_15;
IAcknexObject ACTOR_CLIMB_17;
IAcknexObject MOTION_BLUR_19;
IAcknexObject MOVE_MODE_21;
IAcknexObject INTRO01OVL_22;
IAcknexObject PLAYER_ARC_26;
IAcknexObject BLACK_29;
IAcknexObject PLEASEWAITTEXT_33;
IAcknexObject PANELTEXT_36;
float startTime1;
float endTime1;
}
    }
}
