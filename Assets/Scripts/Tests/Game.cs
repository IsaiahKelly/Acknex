﻿
using System;
using Acknex.Interfaces;
using System.Collections;
using UnityEngine;
using Random = UnityEngine.Random;
using System.Collections.Generic;

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
            _callbacks.Add("INIT_MOVE", INIT_MOVE);
            _callbacks.Add("MOVE_ME", MOVE_ME);
            _callbacks.Add("SET_WALKING", SET_WALKING);
            _callbacks.Add("SET_SWIMMING", SET_SWIMMING);
            _callbacks.Add("SET_DIVING", SET_DIVING);
            _callbacks.Add("SET_MOVING", SET_MOVING);
            _callbacks.Add("STOP_MOVING", STOP_MOVING);
            _callbacks.Add("SET_BLUE", SET_BLUE);
            _callbacks.Add("RESET_BLUE", RESET_BLUE);
            _callbacks.Add("REGIO_DIVE", REGIO_DIVE);
            _callbacks.Add("REGIO_ARISE", REGIO_ARISE);
            _callbacks.Add("START_QUAKE", START_QUAKE);
            _callbacks.Add("QUAKE", QUAKE);
            _callbacks.Add("TUNIX", TUNIX);
            _callbacks.Add("SET_MENU", SET_MENU);
            _callbacks.Add("SHOW_MENU", SHOW_MENU);
            _callbacks.Add("CLEAR_MENU", CLEAR_MENU);
            _callbacks.Add("MENU_UP", MENU_UP);
            _callbacks.Add("MENU_DOWN", MENU_DOWN);
            _callbacks.Add("MENU_EXEC", MENU_EXEC);
            _callbacks.Add("SHOW_MESSAGE", SHOW_MESSAGE);
            _callbacks.Add("WAIT_YESNO", WAIT_YESNO);
            _callbacks.Add("CLEAR_YESNO", CLEAR_YESNO);
            _callbacks.Add("SAVE_GAME", SAVE_GAME);
            _callbacks.Add("LOAD_GAME", LOAD_GAME);
            _callbacks.Add("SAVE_QUICK", SAVE_QUICK);
            _callbacks.Add("LOAD_QUICK", LOAD_QUICK);
            _callbacks.Add("LOAD_STATUS", LOAD_STATUS);
            _callbacks.Add("EXIT_YESNO", EXIT_YESNO);
            _callbacks.Add("EXIT_GAME", EXIT_GAME);
            _callbacks.Add("TOGGLE_MAP", TOGGLE_MAP);
            _callbacks.Add("MSCALE_PLUS", MSCALE_PLUS);
            _callbacks.Add("MSCALE_MINUS", MSCALE_MINUS);
            _callbacks.Add("TOGGLE_MBLUR", TOGGLE_MBLUR);
            _callbacks.Add("INCREASE_VOL", INCREASE_VOL);
            _callbacks.Add("DECREASE_VOL", DECREASE_VOL);
            _callbacks.Add("SHOW_OPTIONS", SHOW_OPTIONS);
            _callbacks.Add("MAIN_MENU", MAIN_MENU);
            _callbacks.Add("DIFF_MENU", DIFF_MENU);
            _callbacks.Add("LEVEL_MENU", LEVEL_MENU);
            _callbacks.Add("SAVE_MENU", SAVE_MENU);
            _callbacks.Add("LOAD_MENU", LOAD_MENU);
            _callbacks.Add("SAVE_NAME1", SAVE_NAME1);
            _callbacks.Add("SAVE_NAME2", SAVE_NAME2);
            _callbacks.Add("SAVE_NAME3", SAVE_NAME3);
            _callbacks.Add("SAVE_NAME4", SAVE_NAME4);
            _callbacks.Add("SAVE_NAME5", SAVE_NAME5);
            _callbacks.Add("LOAD_NAME1", LOAD_NAME1);
            _callbacks.Add("LOAD_NAME2", LOAD_NAME2);
            _callbacks.Add("LOAD_NAME3", LOAD_NAME3);
            _callbacks.Add("LOAD_NAME4", LOAD_NAME4);
            _callbacks.Add("LOAD_NAME5", LOAD_NAME5);
            _callbacks.Add("SET_DIFF1", SET_DIFF1);
            _callbacks.Add("SET_DIFF2", SET_DIFF2);
            _callbacks.Add("SET_DIFF3", SET_DIFF3);
            _callbacks.Add("SET_DIFF4", SET_DIFF4);
            _callbacks.Add("START_LEVEL1", START_LEVEL1);
            _callbacks.Add("START_LEVEL2", START_LEVEL2);
            _callbacks.Add("START_LEVEL3", START_LEVEL3);
            _callbacks.Add("START_LEVEL4", START_LEVEL4);
            _callbacks.Add("START_LEVEL5", START_LEVEL5);
            _callbacks.Add("INIT_GLOBALS", INIT_GLOBALS);
            _callbacks.Add("UPDATE_DBPANEL", UPDATE_DBPANEL);
            _callbacks.Add("SET_DEBUG", SET_DEBUG);
            _callbacks.Add("SET_ADJUST", SET_ADJUST);
            _callbacks.Add("GET_ADJX", GET_ADJX);
            _callbacks.Add("GET_ADJY", GET_ADJY);
            _callbacks.Add("SET_ADJX", SET_ADJX);
            _callbacks.Add("SET_ADJY", SET_ADJY);
            _callbacks.Add("ADJUST_XPLUS", ADJUST_XPLUS);
            _callbacks.Add("ADJUST_XMINUS", ADJUST_XMINUS);
            _callbacks.Add("ADJUST_YPLUS", ADJUST_YPLUS);
            _callbacks.Add("ADJUST_YMINUS", ADJUST_YMINUS);
            _callbacks.Add("SET_WMODE", SET_WMODE);
            _callbacks.Add("SET_FMODE", SET_FMODE);
            _callbacks.Add("SET_CMODE", SET_CMODE);
            _callbacks.Add("SET_RMODE", SET_RMODE);
            _callbacks.Add("SET_VMODE", SET_VMODE);
            _callbacks.Add("SET_AMODE", SET_AMODE);
            _callbacks.Add("SET_SMODE", SET_SMODE);
            _callbacks.Add("SET_BMODE", SET_BMODE);
            _callbacks.Add("FADE_IN", FADE_IN);
            _callbacks.Add("FADE_OUT", FADE_OUT);
            _callbacks.Add("VRDEMO_START", VRDEMO_START);
            _callbacks.Add("ENTER_WATER", ENTER_WATER);
            _callbacks.Add("LEAVE_WATER", LEAVE_WATER);
            _callbacks.Add("DIVE_UP", DIVE_UP);
            _callbacks.Add("PULSUP", PULSUP);
            _callbacks.Add("PULSDOWN", PULSDOWN);
            _callbacks.Add("FALLTUER", FALLTUER);
            _callbacks.Add("ARSCHTRITT", ARSCHTRITT);
            _callbacks.Add("LIFT_DOWN", LIFT_DOWN);
            _callbacks.Add("LIFT_UP", LIFT_UP);
            _callbacks.Add("CHECK_OPEN", CHECK_OPEN);
            _callbacks.Add("OPENDOOR", OPENDOOR);
            _callbacks.Add("IST_OPEN", IST_OPEN);
            _callbacks.Add("AUFGEH", AUFGEH);
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
                PLAYER_SIZE_2.SetFloat("VAL", MY_SIZE_4_val + 0.2f * WALK_8_val);
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
            var MODE_GEHEN_23 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var MODE_GEHEN_23_val = MODE_GEHEN_23.GetFloat("VAL");
            var MOVING_24 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_24_val = MOVING_24.GetFloat("VAL");
            if (MOVING_24_val == MODE_GEHEN_23_val)
            {
                var PLAYER_SIZE_25 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var PLAYER_SIZE_26 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var PLAYER_SIZE_26_val = PLAYER_SIZE_26.GetFloat("VAL");
                var PLAYER_SIZE_27 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var PLAYER_SIZE_27_val = PLAYER_SIZE_27.GetFloat("VAL");
                var PLAYER_DEPTH_29 = _world.GetObject(ObjectType.Skill, "PLAYER_DEPTH");
                var PLAYER_DEPTH_29_val = PLAYER_DEPTH_29.GetFloat("VAL");
                PLAYER_SIZE_25.SetFloat("VAL", PLAYER_SIZE_27_val - PLAYER_DEPTH_29_val);
            }
            NO_WATEN:
            var MODE_SCHWIMMEN_30 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var MODE_SCHWIMMEN_30_val = MODE_SCHWIMMEN_30.GetFloat("VAL");
            var MOVING_31 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_31_val = MOVING_31.GetFloat("VAL");
            if (MOVING_31_val != MODE_SCHWIMMEN_30_val)
            {
                goto NO_SWIM;
            }
            var PLAYER_DEPTH_33 = _world.GetObject(ObjectType.Skill, "PLAYER_DEPTH");
            var PLAYER_DEPTH_33_val = PLAYER_DEPTH_33.GetFloat("VAL");
            if (PLAYER_DEPTH_33_val > 1.5f)
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
            var MODE_GEHEN_34 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var MODE_GEHEN_34_val = MODE_GEHEN_34.GetFloat("VAL");
            var MOVING_35 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_35_val = MOVING_35.GetFloat("VAL");
            if (MOVING_35_val != MODE_GEHEN_34_val)
            {
                goto NO_WATER;
            }
            var PLAYER_DEPTH_37 = _world.GetObject(ObjectType.Skill, "PLAYER_DEPTH");
            var PLAYER_DEPTH_37_val = PLAYER_DEPTH_37.GetFloat("VAL");
            if (PLAYER_DEPTH_37_val < 2.5f)
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
            var MOUSE_MIDDLE_39 = _world.GetObject(ObjectType.Skill, "MOUSE_MIDDLE");
            var MOUSE_MIDDLE_39_val = MOUSE_MIDDLE_39.GetFloat("VAL");
            if (MOUSE_MIDDLE_39_val == 0f)
            {
                goto NO_MOUSE;
            }
            var KEY_SENSE_40 = _world.GetObject(ObjectType.Skill, "KEY_SENSE");
            var KEY_SENSE_40_val = KEY_SENSE_40.GetFloat("VAL");
            var FORCE_AHEAD_41 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
            FORCE_AHEAD_41.SetFloat("VAL", KEY_SENSE_40_val);
            var KEY_SHIFT_43 = _world.GetObject(ObjectType.Skill, "KEY_SHIFT");
            var KEY_SHIFT_43_val = KEY_SHIFT_43.GetFloat("VAL");
            if (KEY_SHIFT_43_val == 1f)
            {
                var FORCE_AHEAD_44 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
                var FORCE_AHEAD_45 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
                var FORCE_AHEAD_45_val = FORCE_AHEAD_45.GetFloat("VAL");
                var FORCE_AHEAD_46 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
                var FORCE_AHEAD_46_val = FORCE_AHEAD_46.GetFloat("VAL");
                var SHIFT_SENSE_48 = _world.GetObject(ObjectType.Skill, "SHIFT_SENSE");
                var SHIFT_SENSE_48_val = SHIFT_SENSE_48.GetFloat("VAL");
                FORCE_AHEAD_44.SetFloat("VAL", FORCE_AHEAD_46_val * SHIFT_SENSE_48_val);
            }
            NO_MOUSE:
            var BOOSTER_50 = _world.GetObject(ObjectType.Skill, "BOOSTER");
            BOOSTER_50.SetFloat("VAL", 1f);
            var MASS_51 = _world.GetObject(ObjectType.Skill, "MASS");
            var MASS_51_val = MASS_51.GetFloat("VAL");
            var INERTIA_52 = _world.GetObject(ObjectType.Skill, "INERTIA");
            INERTIA_52.SetFloat("VAL", MASS_51_val);
            var FRICTION_53 = _world.GetObject(ObjectType.Skill, "FRICTION");
            var FRICTION_54 = _world.GetObject(ObjectType.Skill, "FRICTION");
            var FRICTION_54_val = FRICTION_54.GetFloat("VAL");
            var FRIC_55 = _world.GetObject(ObjectType.Skill, "FRIC");
            var FRIC_55_val = FRIC_55.GetFloat("VAL");
            var DEPTH_59 = _world.GetObject(ObjectType.Skill, "DEPTH");
            var DEPTH_59_val = DEPTH_59.GetFloat("VAL");
            FRICTION_53.SetFloat("VAL", FRIC_55_val + 0.1f * DEPTH_59_val);
            var FORCE_60 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_61 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_61_val = FORCE_61.GetFloat("VAL");
            var STRENGTH_63 = _world.GetObject(ObjectType.Skill, "STRENGTH");
            var STRENGTH_63_val = STRENGTH_63.GetFloat("VAL");
            var WAVE_STR_65 = _world.GetObject(ObjectType.Skill, "WAVE_STR");
            var WAVE_STR_65_val = WAVE_STR_65.GetFloat("VAL");
            var WAVE_67 = _world.GetObject(ObjectType.Skill, "WAVE");
            var WAVE_67_val = WAVE_67.GetFloat("VAL");
            var BOOSTER_70 = _world.GetObject(ObjectType.Skill, "BOOSTER");
            var BOOSTER_70_val = BOOSTER_70.GetFloat("VAL");
            var FORCE_AHEAD_73 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
            var FORCE_AHEAD_73_val = FORCE_AHEAD_73.GetFloat("VAL");
            var PLAYER_COS_75 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var PLAYER_COS_75_val = PLAYER_COS_75.GetFloat("VAL");
            var FORCE_STRAFE_79 = _world.GetObject(ObjectType.Skill, "FORCE_STRAFE");
            var FORCE_STRAFE_79_val = FORCE_STRAFE_79.GetFloat("VAL");
            var PLAYER_SIN_81 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var PLAYER_SIN_81_val = PLAYER_SIN_81.GetFloat("VAL");
            var DRIFT_X_84 = _world.GetObject(ObjectType.Skill, "DRIFT_X");
            var DRIFT_X_84_val = DRIFT_X_84.GetFloat("VAL");
            FORCE_60.SetFloat("VAL", (STRENGTH_63_val + WAVE_STR_65_val * WAVE_67_val) * BOOSTER_70_val * (FORCE_AHEAD_73_val * PLAYER_COS_75_val - 0.5f * FORCE_STRAFE_79_val * PLAYER_SIN_81_val) + DRIFT_X_84_val);
            var FORCE_85 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_85_val = FORCE_85.GetFloat("VAL");
            var PLAYER_VX_86 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_86_val = PLAYER_VX_86.GetFloat("VAL");
            var PLAYER_VX_87 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            PLAYER_VX_87.SetFloat("VAL", _world.Accelerate(PLAYER_VX_86_val, FORCE_85_val));
            var FORCE_88 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_89 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_89_val = FORCE_89.GetFloat("VAL");
            var STRENGTH_91 = _world.GetObject(ObjectType.Skill, "STRENGTH");
            var STRENGTH_91_val = STRENGTH_91.GetFloat("VAL");
            var WAVE_STR_93 = _world.GetObject(ObjectType.Skill, "WAVE_STR");
            var WAVE_STR_93_val = WAVE_STR_93.GetFloat("VAL");
            var WAVE_95 = _world.GetObject(ObjectType.Skill, "WAVE");
            var WAVE_95_val = WAVE_95.GetFloat("VAL");
            var BOOSTER_98 = _world.GetObject(ObjectType.Skill, "BOOSTER");
            var BOOSTER_98_val = BOOSTER_98.GetFloat("VAL");
            var FORCE_AHEAD_101 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
            var FORCE_AHEAD_101_val = FORCE_AHEAD_101.GetFloat("VAL");
            var PLAYER_SIN_103 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var PLAYER_SIN_103_val = PLAYER_SIN_103.GetFloat("VAL");
            var FORCE_STRAFE_107 = _world.GetObject(ObjectType.Skill, "FORCE_STRAFE");
            var FORCE_STRAFE_107_val = FORCE_STRAFE_107.GetFloat("VAL");
            var PLAYER_COS_109 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var PLAYER_COS_109_val = PLAYER_COS_109.GetFloat("VAL");
            var DRIFT_Y_112 = _world.GetObject(ObjectType.Skill, "DRIFT_Y");
            var DRIFT_Y_112_val = DRIFT_Y_112.GetFloat("VAL");
            FORCE_88.SetFloat("VAL", (STRENGTH_91_val + WAVE_STR_93_val * WAVE_95_val) * BOOSTER_98_val * (FORCE_AHEAD_101_val * PLAYER_SIN_103_val + 0.5f * FORCE_STRAFE_107_val * PLAYER_COS_109_val) + DRIFT_Y_112_val);
            var FORCE_113 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_113_val = FORCE_113.GetFloat("VAL");
            var PLAYER_VY_114 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_114_val = PLAYER_VY_114.GetFloat("VAL");
            var PLAYER_VY_115 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            PLAYER_VY_115.SetFloat("VAL", _world.Accelerate(PLAYER_VY_114_val, FORCE_113_val));
            var FRICTION_117 = _world.GetObject(ObjectType.Skill, "FRICTION");
            FRICTION_117.SetFloat("VAL", 0.5f);
            var MODE_GEHEN_118 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var MODE_GEHEN_118_val = MODE_GEHEN_118.GetFloat("VAL");
            var MOVING_119 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_119_val = MOVING_119.GetFloat("VAL");
            if (MOVING_119_val != MODE_GEHEN_118_val)
            {
                var FRICTION_121 = _world.GetObject(ObjectType.Skill, "FRICTION");
                FRICTION_121.SetFloat("VAL", 0.85f);
            }
            var FORCE_122 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_123 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_123_val = FORCE_123.GetFloat("VAL");
            var FORCE_ROT_126 = _world.GetObject(ObjectType.Skill, "FORCE_ROT");
            var FORCE_ROT_126_val = FORCE_ROT_126.GetFloat("VAL");
            FORCE_122.SetFloat("VAL", 0.05f * FORCE_ROT_126_val);
            var FORCE_127 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_127_val = FORCE_127.GetFloat("VAL");
            var PLAYER_VROT_128 = _world.GetObject(ObjectType.Skill, "PLAYER_VROT");
            var PLAYER_VROT_128_val = PLAYER_VROT_128.GetFloat("VAL");
            var PLAYER_VROT_129 = _world.GetObject(ObjectType.Skill, "PLAYER_VROT");
            PLAYER_VROT_129.SetFloat("VAL", _world.Accelerate(PLAYER_VROT_128_val, FORCE_127_val));
            var FORCE_130 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_131 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_131_val = FORCE_131.GetFloat("VAL");
            var GRAVITY_132 = _world.GetObject(ObjectType.Skill, "GRAVITY");
            var GRAVITY_132_val = GRAVITY_132.GetFloat("VAL");
            var FLOAT_STR_134 = _world.GetObject(ObjectType.Skill, "FLOAT_STR");
            var FLOAT_STR_134_val = FLOAT_STR_134.GetFloat("VAL");
            var FORCE_UP_136 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var FORCE_UP_136_val = FORCE_UP_136.GetFloat("VAL");
            FORCE_130.SetFloat("VAL", GRAVITY_132_val + FLOAT_STR_134_val * FORCE_UP_136_val);
            var FRIC_AIR_137 = _world.GetObject(ObjectType.Skill, "FRIC_AIR");
            var FRIC_AIR_137_val = FRIC_AIR_137.GetFloat("VAL");
            var FRICTION_138 = _world.GetObject(ObjectType.Skill, "FRICTION");
            FRICTION_138.SetFloat("VAL", FRIC_AIR_137_val);
            var PLAYER_HGT_140 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_140_val = PLAYER_HGT_140.GetFloat("VAL");
            if (PLAYER_HGT_140_val > 0f)
            {
                goto AIRBORNE;
            }
            var FRICTION_142 = _world.GetObject(ObjectType.Skill, "FRICTION");
            FRICTION_142.SetFloat("VAL", 0.98f);
            var FORCE_143 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_144 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_144_val = FORCE_144.GetFloat("VAL");
            var FORCE_145 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_145_val = FORCE_145.GetFloat("VAL");
            var PLAYER_HGT_149 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_149_val = PLAYER_HGT_149.GetFloat("VAL");
            FORCE_143.SetFloat("VAL", FORCE_145_val - 0.2f * PLAYER_HGT_149_val);
            AIRBORNE:
            var FORCE_150 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_150_val = FORCE_150.GetFloat("VAL");
            var PLAYER_VZ_151 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            var PLAYER_VZ_151_val = PLAYER_VZ_151.GetFloat("VAL");
            var PLAYER_VZ_152 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            PLAYER_VZ_152.SetFloat("VAL", _world.Accelerate(PLAYER_VZ_151_val, FORCE_150_val));
            var DUCK_VAL_153 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_154 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_154_val = DUCK_VAL_154.GetFloat("VAL");
            var DUCK_VAL_157 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_157_val = DUCK_VAL_157.GetFloat("VAL");
            DUCK_VAL_153.SetFloat("VAL", 0.8f * DUCK_VAL_157_val);
            var MODE_SCHWIMMEN_158 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var MODE_SCHWIMMEN_158_val = MODE_SCHWIMMEN_158.GetFloat("VAL");
            var MOVING_159 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_159_val = MOVING_159.GetFloat("VAL");
            if (MOVING_159_val == MODE_SCHWIMMEN_158_val)
            {
                goto DUCK;
            }
            var FORCE_UP_161 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var FORCE_UP_161_val = FORCE_UP_161.GetFloat("VAL");
            if (FORCE_UP_161_val > 0f)
            {
                goto NO_DUCK;
            }
            DUCK:
            var DUCK_VAL_162 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_163 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_163_val = DUCK_VAL_163.GetFloat("VAL");
            var DUCK_VAL_164 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_164_val = DUCK_VAL_164.GetFloat("VAL");
            var DUCK_STR_166 = _world.GetObject(ObjectType.Skill, "DUCK_STR");
            var DUCK_STR_166_val = DUCK_STR_166.GetFloat("VAL");
            var FORCE_UP_168 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var FORCE_UP_168_val = FORCE_UP_168.GetFloat("VAL");
            DUCK_VAL_162.SetFloat("VAL", DUCK_VAL_164_val + DUCK_STR_166_val * FORCE_UP_168_val);
            NO_DUCK:
            var PLAYER_SIZE_169 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_170 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_170_val = PLAYER_SIZE_170.GetFloat("VAL");
            var PLAYER_SIZE_171 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_171_val = PLAYER_SIZE_171.GetFloat("VAL");
            var DUCK_VAL_173 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_173_val = DUCK_VAL_173.GetFloat("VAL");
            PLAYER_SIZE_169.SetFloat("VAL", PLAYER_SIZE_171_val + DUCK_VAL_173_val);
            var MODE_GEHEN_174 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var MODE_GEHEN_174_val = MODE_GEHEN_174.GetFloat("VAL");
            var MOVING_175 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_175_val = MOVING_175.GetFloat("VAL");
            if (MOVING_175_val != MODE_GEHEN_174_val)
            {
                goto NO_JUMP;
            }
            var JUMP_PHASE_177 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            var JUMP_PHASE_177_val = JUMP_PHASE_177.GetFloat("VAL");
            if (JUMP_PHASE_177_val > 0f)
            {
                goto JUMP_1;
            }
            var FORCE_UP_179 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var FORCE_UP_179_val = FORCE_UP_179.GetFloat("VAL");
            if (FORCE_UP_179_val < 0.1f)
            {
                goto NO_JUMP;
            }
            var JUMP_PHASE_181 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            JUMP_PHASE_181.SetFloat("VAL", 1f);
            JUMP_1:
            var JUMP_PHASE_183 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            var JUMP_PHASE_183_val = JUMP_PHASE_183.GetFloat("VAL");
            if (JUMP_PHASE_183_val > 1f)
            {
                goto JUMP_2;
            }
            var DUCK_VAL_184 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_185 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_185_val = DUCK_VAL_185.GetFloat("VAL");
            var DUCK_VAL_186 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_186_val = DUCK_VAL_186.GetFloat("VAL");
            DUCK_VAL_184.SetFloat("VAL", DUCK_VAL_186_val - 0.5f);
            var DUCK_VAL_190 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_190_val = DUCK_VAL_190.GetFloat("VAL");
            if (DUCK_VAL_190_val < -0.7f)
            {
                var JUMP_PHASE_192 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
                JUMP_PHASE_192.SetFloat("VAL", 2f);
            }
            goto NO_JUMP;
            JUMP_2:
            var JUMP_PHASE_194 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            var JUMP_PHASE_194_val = JUMP_PHASE_194.GetFloat("VAL");
            if (JUMP_PHASE_194_val > 2f)
            {
                goto JUMP_3;
            }
            var DUCK_VAL_196 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            DUCK_VAL_196.SetFloat("VAL", 0f);
            var PLAYER_Z_197 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_198 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_198_val = PLAYER_Z_198.GetFloat("VAL");
            var FLOOR_HGT_199 = _world.GetObject(ObjectType.Skill, "FLOOR_HGT");
            var FLOOR_HGT_199_val = FLOOR_HGT_199.GetFloat("VAL");
            var MY_SIZE_201 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var MY_SIZE_201_val = MY_SIZE_201.GetFloat("VAL");
            PLAYER_Z_197.SetFloat("VAL", FLOOR_HGT_199_val + MY_SIZE_201_val);
            var PLAYER_VZ_203 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            PLAYER_VZ_203.SetFloat("VAL", 0.5f);
            var JUMP_PHASE_205 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            JUMP_PHASE_205.SetFloat("VAL", 3f);
            goto NO_JUMP;
            JUMP_3:
            var PLAYER_VZ_207 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            var PLAYER_VZ_207_val = PLAYER_VZ_207.GetFloat("VAL");
            if (PLAYER_VZ_207_val > 0f)
            {
                goto NO_JUMP;
            }
            var PLAYER_HGT_209 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_209_val = PLAYER_HGT_209.GetFloat("VAL");
            if (PLAYER_HGT_209_val > 0f)
            {
                goto NO_JUMP;
            }
            var JUMP_PHASE_211 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            JUMP_PHASE_211.SetFloat("VAL", 0f);
            NO_JUMP:
            var PLAYER_SPEED_SQR_212 = _world.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
            var PLAYER_SPEED_SQR_213 = _world.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
            var PLAYER_SPEED_SQR_213_val = PLAYER_SPEED_SQR_213.GetFloat("VAL");
            var PLAYER_VX_214 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_214_val = PLAYER_VX_214.GetFloat("VAL");
            var PLAYER_VX_216 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_216_val = PLAYER_VX_216.GetFloat("VAL");
            var PLAYER_VY_218 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_218_val = PLAYER_VY_218.GetFloat("VAL");
            var PLAYER_VY_220 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_220_val = PLAYER_VY_220.GetFloat("VAL");
            PLAYER_SPEED_SQR_212.SetFloat("VAL", PLAYER_VX_214_val * PLAYER_VX_216_val + PLAYER_VY_218_val * PLAYER_VY_220_val);
            var TILT_DECREASE_222 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
            var TILT_DECREASE_222_val = TILT_DECREASE_222.GetFloat("VAL");
            if (TILT_DECREASE_222_val != 1f)
            {
                goto CALC_TILT;
            }
            var MAX_PLAYER_TILT_P_223 = _world.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_P");
            var MAX_PLAYER_TILT_P_223_val = MAX_PLAYER_TILT_P_223.GetFloat("VAL");
            var PLAYER_TILT_224 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_224_val = PLAYER_TILT_224.GetFloat("VAL");
            if (PLAYER_TILT_224_val > MAX_PLAYER_TILT_P_223_val)
            {
                goto CHECK_SPEED_TILT;
            }
            var MAX_PLAYER_TILT_N_225 = _world.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_N");
            var MAX_PLAYER_TILT_N_225_val = MAX_PLAYER_TILT_N_225.GetFloat("VAL");
            var PLAYER_TILT_226 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_226_val = PLAYER_TILT_226.GetFloat("VAL");
            if (PLAYER_TILT_226_val > MAX_PLAYER_TILT_N_225_val)
            {
                goto DECR_TILT;
            }
            CHECK_SPEED_TILT:
            var PLAYER_SPEED_SQR_228 = _world.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
            var PLAYER_SPEED_SQR_228_val = PLAYER_SPEED_SQR_228.GetFloat("VAL");
            if (PLAYER_SPEED_SQR_228_val > 0.4f)
            {
                goto DECR_TILT;
            }
            var PLAYER_VZ_230 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            var PLAYER_VZ_230_val = PLAYER_VZ_230.GetFloat("VAL");
            if (PLAYER_VZ_230_val != 0f)
            {
                goto DECR_TILT;
            }
            goto CALC_TILT;
            DECR_TILT:
            var TILT_DECREASE_232 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
            TILT_DECREASE_232.SetFloat("VAL", 0.8f);
            CALC_TILT:
            var PLAYER_TILT_233 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_234 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_234_val = PLAYER_TILT_234.GetFloat("VAL");
            var TILT_DECREASE_235 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
            var TILT_DECREASE_235_val = TILT_DECREASE_235.GetFloat("VAL");
            var PLAYER_TILT_237 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_237_val = PLAYER_TILT_237.GetFloat("VAL");
            var FORCE_TILT_241 = _world.GetObject(ObjectType.Skill, "FORCE_TILT");
            var FORCE_TILT_241_val = FORCE_TILT_241.GetFloat("VAL");
            var FLOAT_STR_245 = _world.GetObject(ObjectType.Skill, "FLOAT_STR");
            var FLOAT_STR_245_val = FLOAT_STR_245.GetFloat("VAL");
            var FORCE_UP_247 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var FORCE_UP_247_val = FORCE_UP_247.GetFloat("VAL");
            var FLY_MODE_252 = _world.GetObject(ObjectType.Skill, "FLY_MODE");
            var FLY_MODE_252_val = FLY_MODE_252.GetFloat("VAL");
            PLAYER_TILT_233.SetFloat("VAL", TILT_DECREASE_235_val * PLAYER_TILT_237_val + 0.3f * FORCE_TILT_241_val - 0.3f * FLOAT_STR_245_val * FORCE_UP_247_val * (1f - FLY_MODE_252_val));
            var PLAYER_SPEED_SQR_255 = _world.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
            var PLAYER_SPEED_SQR_255_val = PLAYER_SPEED_SQR_255.GetFloat("VAL");
            if (PLAYER_SPEED_SQR_255_val > 0f)
            {
                goto skip_256;
            }
            var MAX_PLAYER_TILT_P_257 = _world.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_P");
            var MAX_PLAYER_TILT_P_257_val = MAX_PLAYER_TILT_P_257.GetFloat("VAL");
            var PLAYER_TILT_258 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_258_val = PLAYER_TILT_258.GetFloat("VAL");
            if (PLAYER_TILT_258_val > MAX_PLAYER_TILT_P_257_val)
            {
                var TILT_DECREASE_260 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
                TILT_DECREASE_260.SetFloat("VAL", 1f);
            }
            var MAX_PLAYER_TILT_N_261 = _world.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_N");
            var MAX_PLAYER_TILT_N_261_val = MAX_PLAYER_TILT_N_261.GetFloat("VAL");
            var PLAYER_TILT_262 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_262_val = PLAYER_TILT_262.GetFloat("VAL");
            if (PLAYER_TILT_262_val < MAX_PLAYER_TILT_N_261_val)
            {
                var TILT_DECREASE_264 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
                TILT_DECREASE_264.SetFloat("VAL", 1f);
            }
            skip_256:
            var MODE_SCHWIMMEN_265 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var MODE_SCHWIMMEN_265_val = MODE_SCHWIMMEN_265.GetFloat("VAL");
            var MOVING_266 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_266_val = MOVING_266.GetFloat("VAL");
            if (MOVING_266_val == MODE_SCHWIMMEN_265_val)
            {
                var PLAYER_TILT_267 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var PLAYER_TILT_268 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var PLAYER_TILT_268_val = PLAYER_TILT_268.GetFloat("VAL");
                var PLAYER_TILT_269 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var PLAYER_TILT_269_val = PLAYER_TILT_269.GetFloat("VAL");
                var WAVE_273 = _world.GetObject(ObjectType.Skill, "WAVE");
                var WAVE_273_val = WAVE_273.GetFloat("VAL");
                PLAYER_TILT_267.SetFloat("VAL", PLAYER_TILT_269_val + 0.01f * WAVE_273_val);
            }
            var MODE_TAUCHEN_274 = _world.GetObject(ObjectType.Skill, "MODE_TAUCHEN");
            var MODE_TAUCHEN_274_val = MODE_TAUCHEN_274.GetFloat("VAL");
            var MOVING_275 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_275_val = MOVING_275.GetFloat("VAL");
            if (MOVING_275_val == MODE_TAUCHEN_274_val)
            {
                goto NO_HTILT;
            }
            var JUMP_PHASE_277 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            var JUMP_PHASE_277_val = JUMP_PHASE_277.GetFloat("VAL");
            if (JUMP_PHASE_277_val > 0f)
            {
                goto NO_HTILT;
            }
            var TILT_DECREASE_279 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
            var TILT_DECREASE_279_val = TILT_DECREASE_279.GetFloat("VAL");
            if (TILT_DECREASE_279_val < 1f)
            {
                var PLAYER_TILT_280 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var PLAYER_TILT_281 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var PLAYER_TILT_281_val = PLAYER_TILT_281.GetFloat("VAL");
                var PLAYER_TILT_282 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var PLAYER_TILT_282_val = PLAYER_TILT_282.GetFloat("VAL");
                var PLAYER_HGT_287 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
                var PLAYER_HGT_287_val = PLAYER_HGT_287.GetFloat("VAL");
                PLAYER_TILT_280.SetFloat("VAL", PLAYER_TILT_282_val + 0.03f * (PLAYER_HGT_287_val + 0.3f));
            }
            NO_HTILT:
            var RICHTER_292 = _world.GetObject(ObjectType.Skill, "RICHTER");
            var RICHTER_292_val = RICHTER_292.GetFloat("VAL");
            if (RICHTER_292_val == 0f)
            {
                goto NO_QUAKE;
            }
            var PLAYER_Z_293 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_294 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_294_val = PLAYER_Z_294.GetFloat("VAL");
            var PLAYER_Z_295 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_295_val = PLAYER_Z_295.GetFloat("VAL");
            var RICHTER_297 = _world.GetObject(ObjectType.Skill, "RICHTER");
            var RICHTER_297_val = RICHTER_297.GetFloat("VAL");
            var RANDOM_2_300 = _world.GetObject(ObjectType.Skill, "RANDOM_2");
            var RANDOM_2_300_val = RANDOM_2_300.GetFloat("VAL");
            PLAYER_Z_293.SetFloat("VAL", PLAYER_Z_295_val + RICHTER_297_val * (RANDOM_2_300_val - 0.5f));
            var RANDOM_1_304 = _world.GetObject(ObjectType.Skill, "RANDOM_1");
            var RANDOM_1_304_val = RANDOM_1_304.GetFloat("VAL");
            var RANDOM_2_305 = _world.GetObject(ObjectType.Skill, "RANDOM_2");
            RANDOM_2_305.SetFloat("VAL", RANDOM_1_304_val);
            var RANDOM_1_307 = _world.GetObject(ObjectType.Skill, "RANDOM_1");
            RANDOM_1_307.SetFloat("VAL", UnityEngine.Random.value);
            NO_QUAKE:
            yield break;
            var KEY_INS_309 = _world.GetObject(ObjectType.Skill, "KEY_INS");
            var KEY_INS_309_val = KEY_INS_309.GetFloat("VAL");
            if (KEY_INS_309_val > 0f)
            {
                var PLAYER_ARC_310 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var PLAYER_ARC_311 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var PLAYER_ARC_311_val = PLAYER_ARC_311.GetFloat("VAL");
                var PLAYER_ARC_312 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var PLAYER_ARC_312_val = PLAYER_ARC_312.GetFloat("VAL");
                PLAYER_ARC_310.SetFloat("VAL", PLAYER_ARC_312_val - 0.1f);
            }
            var KEY_DEL_316 = _world.GetObject(ObjectType.Skill, "KEY_DEL");
            var KEY_DEL_316_val = KEY_DEL_316.GetFloat("VAL");
            if (KEY_DEL_316_val > 0f)
            {
                var PLAYER_ARC_317 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var PLAYER_ARC_318 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var PLAYER_ARC_318_val = PLAYER_ARC_318.GetFloat("VAL");
                var PLAYER_ARC_319 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var PLAYER_ARC_319_val = PLAYER_ARC_319.GetFloat("VAL");
                PLAYER_ARC_317.SetFloat("VAL", PLAYER_ARC_319_val + 0.1f);
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
            GRAVITY_15.SetFloat("VAL", -0.13f);
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
            GRAVITY_15.SetFloat("VAL", -0.05f);
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
        public IEnumerator REGIO_DIVE(IAcknexObject MY, IAcknexObject THERE)
        {
            //Unknown keyword: MAP
            var UNDERWATER_1 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            var UNDERWATER_1_val = UNDERWATER_1.GetFloat("VAL");
            if (UNDERWATER_1_val == 1f)
            {
                yield break;
            }
            var UNDERWATER_3 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            UNDERWATER_3.SetFloat("VAL", 1f);
            var PLAYER_ARC_4 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var PLAYER_ARC_5 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var PLAYER_ARC_5_val = PLAYER_ARC_5.GetFloat("VAL");
            var PLAYER_ARC_6 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var PLAYER_ARC_6_val = PLAYER_ARC_6.GetFloat("VAL");
            PLAYER_ARC_4.SetFloat("VAL", PLAYER_ARC_6_val + 0.3f);
            var MY_SIZE_9 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var MY_SIZE_10 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var MY_SIZE_10_val = MY_SIZE_10.GetFloat("VAL");
            var MY_SIZE_11 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var MY_SIZE_11_val = MY_SIZE_11.GetFloat("VAL");
            MY_SIZE_9.SetFloat("VAL", MY_SIZE_11_val - 0.2f);
            var PLAYER_SIZE_14 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_15 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_15_val = PLAYER_SIZE_15.GetFloat("VAL");
            var PLAYER_SIZE_16 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_16_val = PLAYER_SIZE_16.GetFloat("VAL");
            PLAYER_SIZE_14.SetFloat("VAL", PLAYER_SIZE_16_val - 0.2f);
            var PLAYER_Z_19 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_20 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_20_val = PLAYER_Z_20.GetFloat("VAL");
            var PLAYER_Z_21 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_21_val = PLAYER_Z_21.GetFloat("VAL");
            PLAYER_Z_19.SetFloat("VAL", PLAYER_Z_21_val - 0.2f);
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
            }//Unknown keyword: 
            yield break;
        }
        public IEnumerator START_QUAKE(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = QUAKE(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator QUAKE(IAcknexObject MY, IAcknexObject THERE)
        {
            var QUAKE_0 = _world.AcknexObject.GetAcknexObject("QUAKE");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.9", QUAKE_0);
            var RICHTER_4 = _world.GetObject(ObjectType.Skill, "RICHTER");
            RICHTER_4.SetFloat("VAL", 0.1f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)16f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var RICHTER_7 = _world.GetObject(ObjectType.Skill, "RICHTER");
            RICHTER_7.SetFloat("VAL", 0.3f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)32f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var RICHTER_10 = _world.GetObject(ObjectType.Skill, "RICHTER");
            RICHTER_10.SetFloat("VAL", 0.5f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)48f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var RICHTER_13 = _world.GetObject(ObjectType.Skill, "RICHTER");
            RICHTER_13.SetFloat("VAL", 0.2f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)80f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var RICHTER_16 = _world.GetObject(ObjectType.Skill, "RICHTER");
            RICHTER_16.SetFloat("VAL", 0.6f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)32f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var RICHTER_19 = _world.GetObject(ObjectType.Skill, "RICHTER");
            RICHTER_19.SetFloat("VAL", 0.1f);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)16f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var RICHTER_22 = _world.GetObject(ObjectType.Skill, "RICHTER");
            RICHTER_22.SetFloat("VAL", 0f);
            _world.AcknexObject.SetAcknexObject("EACH_TICK.9", null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator TUNIX(IAcknexObject MY, IAcknexObject THERE)
        {
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SET_MENU(IAcknexObject MY, IAcknexObject THERE)
        {
            var MENU1_STR_0 = _world.GetSynonymObject("MENU1_STR");
            var MENU1_TXT_2 = _world.AcknexObject.GetAcknexObject("MENU1_TXT");
            MENU1_TXT_2.SetAcknexObject("STRING", MENU1_STR_0);
            var MENU2_STR_3 = _world.GetSynonymObject("MENU2_STR");
            var MENU2_TXT_5 = _world.AcknexObject.GetAcknexObject("MENU2_TXT");
            MENU2_TXT_5.SetAcknexObject("STRING", MENU2_STR_3);
            var MENU3_STR_6 = _world.GetSynonymObject("MENU3_STR");
            var MENU3_TXT_8 = _world.AcknexObject.GetAcknexObject("MENU3_TXT");
            MENU3_TXT_8.SetAcknexObject("STRING", MENU3_STR_6);
            var MENU4_STR_9 = _world.GetSynonymObject("MENU4_STR");
            var MENU4_TXT_11 = _world.AcknexObject.GetAcknexObject("MENU4_TXT");
            MENU4_TXT_11.SetAcknexObject("STRING", MENU4_STR_9);
            var MENU5_STR_12 = _world.GetSynonymObject("MENU5_STR");
            var MENU5_TXT_14 = _world.AcknexObject.GetAcknexObject("MENU5_TXT");
            MENU5_TXT_14.SetAcknexObject("STRING", MENU5_STR_12);
            var MENU6_STR_15 = _world.GetSynonymObject("MENU6_STR");
            var MENU6_TXT_17 = _world.AcknexObject.GetAcknexObject("MENU6_TXT");
            MENU6_TXT_17.SetAcknexObject("STRING", MENU6_STR_15);
            var EXIT_STR_18 = _world.AcknexObject.GetAcknexObject("EXIT_STR");
            var MENUEXIT_TXT_20 = _world.AcknexObject.GetAcknexObject("MENUEXIT_TXT");
            MENUEXIT_TXT_20.SetAcknexObject("STRING", EXIT_STR_18);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SHOW_MENU(IAcknexObject MY, IAcknexObject THERE)
        {
            var MENU_EXEC_0 = _world.AcknexObject.GetAcknexObject("MENU_EXEC");
            _world.AcknexObject.SetAcknexObject("IF_ENTER", MENU_EXEC_0);
            var CLEAR_MENU_2 = _world.AcknexObject.GetAcknexObject("CLEAR_MENU");
            _world.AcknexObject.SetAcknexObject("IF_ESC", CLEAR_MENU_2);
            var MENU_UP_4 = _world.AcknexObject.GetAcknexObject("MENU_UP");
            _world.AcknexObject.SetAcknexObject("IF_CUU", MENU_UP_4);
            var MENU_DOWN_6 = _world.AcknexObject.GetAcknexObject("MENU_DOWN");
            _world.AcknexObject.SetAcknexObject("IF_CUD", MENU_DOWN_6);
            var MOVE_MODE_9 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_9.SetFloat("VAL", 0f);
            var MENU_POS_12 = _world.AcknexObject.GetAcknexObject("MENU_POS");
            MENU_POS_12.SetFloat("MIN", 1f);
            var MENU_POS_14 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var MENU_POS_14_val = MENU_POS_14.GetFloat("VAL");
            if (MENU_POS_14_val == 0f)
            {
                var MENU_POS_16 = _world.GetObject(ObjectType.Skill, "MENU_POS");
                MENU_POS_16.SetFloat("VAL", 1f);
            }
            var MENUEXIT_TXT_18 = _world.AcknexObject.GetAcknexObject("MENUEXIT_TXT");
            var MENUEXIT_TXT_20 = _world.AcknexObject.GetAcknexObject("MENUEXIT_TXT");
            var temp_21 = MENUEXIT_TXT_20.GetFloat("POS_Y");
            var MENU1_TXT_23 = _world.AcknexObject.GetAcknexObject("MENU1_TXT");
            var temp_24 = MENU1_TXT_23.GetFloat("POS_Y");
            var MENU_POS_27 = _world.AcknexObject.GetAcknexObject("MENU_POS");
            var temp_28 = MENU_POS_27.GetFloat("MAX");
            MENUEXIT_TXT_18.SetFloat("POS_Y", temp_24 + temp_28 * 16f - 8f);
            var MENU1_TXT_33 = _world.AcknexObject.GetAcknexObject("MENU1_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.10", MENU1_TXT_33);
            var MENU2_TXT_36 = _world.AcknexObject.GetAcknexObject("MENU2_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.11", MENU2_TXT_36);
            var MENU3_TXT_39 = _world.AcknexObject.GetAcknexObject("MENU3_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.12", MENU3_TXT_39);
            var MENU4_TXT_42 = _world.AcknexObject.GetAcknexObject("MENU4_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.13", MENU4_TXT_42);
            var MENU5_TXT_45 = _world.AcknexObject.GetAcknexObject("MENU5_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", MENU5_TXT_45);
            var MENU6_TXT_48 = _world.AcknexObject.GetAcknexObject("MENU6_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.15", MENU6_TXT_48);
            var MENUEXIT_TXT_51 = _world.AcknexObject.GetAcknexObject("MENUEXIT_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", MENUEXIT_TXT_51);
            BLINK:
            {
                var enumerator = SET_MENU(MY, THERE);
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
                var endTime = startTime + TimeUtils.FramesToTime((int)3f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var MENU_POS_55 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var MENU_POS_55_val = MENU_POS_55.GetFloat("VAL");
            if (MENU_POS_55_val > MENU_POS_55.GetFloat("MAX"))
            {
                var EMPTY_56 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var MENUEXIT_TXT_58 = _world.AcknexObject.GetAcknexObject("MENUEXIT_TXT");
                MENUEXIT_TXT_58.SetAcknexObject("STRING", EMPTY_56);
            }
            var MENU_POS_60 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var MENU_POS_60_val = MENU_POS_60.GetFloat("VAL");
            if (MENU_POS_60_val == 1f)
            {
                var EMPTY_61 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var MENU1_TXT_63 = _world.AcknexObject.GetAcknexObject("MENU1_TXT");
                MENU1_TXT_63.SetAcknexObject("STRING", EMPTY_61);
            }
            var MENU_POS_65 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var MENU_POS_65_val = MENU_POS_65.GetFloat("VAL");
            if (MENU_POS_65_val == 2f)
            {
                var EMPTY_66 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var MENU2_TXT_68 = _world.AcknexObject.GetAcknexObject("MENU2_TXT");
                MENU2_TXT_68.SetAcknexObject("STRING", EMPTY_66);
            }
            var MENU_POS_70 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var MENU_POS_70_val = MENU_POS_70.GetFloat("VAL");
            if (MENU_POS_70_val == 3f)
            {
                var EMPTY_71 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var MENU3_TXT_73 = _world.AcknexObject.GetAcknexObject("MENU3_TXT");
                MENU3_TXT_73.SetAcknexObject("STRING", EMPTY_71);
            }
            var MENU_POS_75 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var MENU_POS_75_val = MENU_POS_75.GetFloat("VAL");
            if (MENU_POS_75_val == 4f)
            {
                var EMPTY_76 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var MENU4_TXT_78 = _world.AcknexObject.GetAcknexObject("MENU4_TXT");
                MENU4_TXT_78.SetAcknexObject("STRING", EMPTY_76);
            }
            var MENU_POS_80 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var MENU_POS_80_val = MENU_POS_80.GetFloat("VAL");
            if (MENU_POS_80_val == 5f)
            {
                var EMPTY_81 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var MENU5_TXT_83 = _world.AcknexObject.GetAcknexObject("MENU5_TXT");
                MENU5_TXT_83.SetAcknexObject("STRING", EMPTY_81);
            }
            var MENU_POS_85 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var MENU_POS_85_val = MENU_POS_85.GetFloat("VAL");
            if (MENU_POS_85_val == 6f)
            {
                var EMPTY_86 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var MENU6_TXT_88 = _world.AcknexObject.GetAcknexObject("MENU6_TXT");
                MENU6_TXT_88.SetAcknexObject("STRING", EMPTY_86);
            }
            var MENU_POS_90 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var MENU_POS_90_val = MENU_POS_90.GetFloat("VAL");
            if (MENU_POS_90_val == 0f)
            {
                yield break;
            }
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)3f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            goto BLINK;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CLEAR_MENU(IAcknexObject MY, IAcknexObject THERE)
        {
            var EMPTY_0 = _world.AcknexObject.GetAcknexObject("EMPTY");
            _world.SetSynonymObject("MENU1_STR", EMPTY_0);
            var EMPTY_2 = _world.AcknexObject.GetAcknexObject("EMPTY");
            _world.SetSynonymObject("MENU2_STR", EMPTY_2);
            var EMPTY_4 = _world.AcknexObject.GetAcknexObject("EMPTY");
            _world.SetSynonymObject("MENU3_STR", EMPTY_4);
            var EMPTY_6 = _world.AcknexObject.GetAcknexObject("EMPTY");
            _world.SetSynonymObject("MENU4_STR", EMPTY_6);
            var EMPTY_8 = _world.AcknexObject.GetAcknexObject("EMPTY");
            _world.SetSynonymObject("MENU5_STR", EMPTY_8);
            var EMPTY_10 = _world.AcknexObject.GetAcknexObject("EMPTY");
            _world.SetSynonymObject("MENU6_STR", EMPTY_10);
            var EMPTY_12 = _world.AcknexObject.GetAcknexObject("EMPTY");
            var MENU1_TXT_14 = _world.AcknexObject.GetAcknexObject("MENU1_TXT");
            MENU1_TXT_14.SetAcknexObject("STRING", EMPTY_12);
            var EMPTY_15 = _world.AcknexObject.GetAcknexObject("EMPTY");
            var MENU2_TXT_17 = _world.AcknexObject.GetAcknexObject("MENU2_TXT");
            MENU2_TXT_17.SetAcknexObject("STRING", EMPTY_15);
            var EMPTY_18 = _world.AcknexObject.GetAcknexObject("EMPTY");
            var MENU3_TXT_20 = _world.AcknexObject.GetAcknexObject("MENU3_TXT");
            MENU3_TXT_20.SetAcknexObject("STRING", EMPTY_18);
            var EMPTY_21 = _world.AcknexObject.GetAcknexObject("EMPTY");
            var MENU4_TXT_23 = _world.AcknexObject.GetAcknexObject("MENU4_TXT");
            MENU4_TXT_23.SetAcknexObject("STRING", EMPTY_21);
            var EMPTY_24 = _world.AcknexObject.GetAcknexObject("EMPTY");
            var MENU5_TXT_26 = _world.AcknexObject.GetAcknexObject("MENU5_TXT");
            MENU5_TXT_26.SetAcknexObject("STRING", EMPTY_24);
            var EMPTY_27 = _world.AcknexObject.GetAcknexObject("EMPTY");
            var MENU6_TXT_29 = _world.AcknexObject.GetAcknexObject("MENU6_TXT");
            MENU6_TXT_29.SetAcknexObject("STRING", EMPTY_27);
            _world.AcknexObject.SetAcknexObject("MESSAGES.10", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.11", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.12", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.13", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.15", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", null);
            var MENU_POS_53 = _world.AcknexObject.GetAcknexObject("MENU_POS");
            MENU_POS_53.SetFloat("MIN", 0f);
            var MENU_POS_55 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            MENU_POS_55.SetFloat("VAL", 0f);
            var MAIN_MENU_56 = _world.AcknexObject.GetAcknexObject("MAIN_MENU");
            _world.AcknexObject.SetAcknexObject("IF_ESC", MAIN_MENU_56);
            _world.AcknexObject.SetAcknexObject("IF_CUU", null);
            _world.AcknexObject.SetAcknexObject("IF_CUD", null);
            _world.AcknexObject.SetAcknexObject("IF_ENTER", null);
            var MOVE_MODE_65 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_65.SetFloat("VAL", 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MENU_UP(IAcknexObject MY, IAcknexObject THERE)
        {
            var KLICK_0 = _world.AcknexObject.GetAcknexObject("KLICK");
            _world.PlaySound(KLICK_0, 0.5f, null);
            {
                var enumerator = SET_MENU(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MENU_POS_3 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var MENU_POS_3_val = MENU_POS_3.GetFloat("VAL");
            var MENU_POS_4 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            MENU_POS_4.SetFloat("VAL", MENU_POS_3_val + -1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MENU_DOWN(IAcknexObject MY, IAcknexObject THERE)
        {
            var KLICK_0 = _world.AcknexObject.GetAcknexObject("KLICK");
            _world.PlaySound(KLICK_0, 0.5f, null);
            {
                var enumerator = SET_MENU(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MENU_POS_3 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var MENU_POS_3_val = MENU_POS_3.GetFloat("VAL");
            var MENU_POS_4 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            MENU_POS_4.SetFloat("VAL", MENU_POS_3_val + 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MENU_EXEC(IAcknexObject MY, IAcknexObject THERE)
        {
            var KLICK_0 = _world.AcknexObject.GetAcknexObject("KLICK");
            _world.PlaySound(KLICK_0, 0.5f, null);
            var MENU_POS_2 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var MENU_POS_2_val = MENU_POS_2.GetFloat("VAL");
            if (MENU_POS_2_val > MENU_POS_2.GetFloat("MAX"))
            {
                {
                    var enumerator = CLEAR_MENU(MY, THERE);
                    while (enumerator.MoveNext())
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
            var MENU_POS_4 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var MENU_POS_4_val = MENU_POS_4.GetFloat("VAL");
            if (MENU_POS_4_val == 1f)
            {
                {
                    var enumerator = _world.CallSynonymAction("MENU1_ACT", MY, THERE);
                    while (enumerator.MoveNext())
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
            var MENU_POS_6 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var MENU_POS_6_val = MENU_POS_6.GetFloat("VAL");
            if (MENU_POS_6_val == 2f)
            {
                {
                    var enumerator = _world.CallSynonymAction("MENU2_ACT", MY, THERE);
                    while (enumerator.MoveNext())
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
            var MENU_POS_8 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var MENU_POS_8_val = MENU_POS_8.GetFloat("VAL");
            if (MENU_POS_8_val == 3f)
            {
                {
                    var enumerator = _world.CallSynonymAction("MENU3_ACT", MY, THERE);
                    while (enumerator.MoveNext())
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
            var MENU_POS_10 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var MENU_POS_10_val = MENU_POS_10.GetFloat("VAL");
            if (MENU_POS_10_val == 4f)
            {
                {
                    var enumerator = _world.CallSynonymAction("MENU4_ACT", MY, THERE);
                    while (enumerator.MoveNext())
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
            var MENU_POS_12 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var MENU_POS_12_val = MENU_POS_12.GetFloat("VAL");
            if (MENU_POS_12_val == 5f)
            {
                {
                    var enumerator = _world.CallSynonymAction("MENU5_ACT", MY, THERE);
                    while (enumerator.MoveNext())
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
            var MENU_POS_14 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var MENU_POS_14_val = MENU_POS_14.GetFloat("VAL");
            if (MENU_POS_14_val == 6f)
            {
                {
                    var enumerator = _world.CallSynonymAction("MENU6_ACT", MY, THERE);
                    while (enumerator.MoveNext())
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
        public IEnumerator SHOW_MESSAGE(IAcknexObject MY, IAcknexObject THERE)
        {
            var SCREEN_TXT_0 = _world.AcknexObject.GetAcknexObject("SCREEN_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", SCREEN_TXT_0);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.FramesToTime((int)48f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", null);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator WAIT_YESNO(IAcknexObject MY, IAcknexObject THERE)
        {
            var SCREEN_TXT_0 = _world.AcknexObject.GetAcknexObject("SCREEN_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", SCREEN_TXT_0);
            var MOVE_MODE_4 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_4.SetFloat("VAL", 0f);
            var CLEAR_YESNO_5 = _world.AcknexObject.GetAcknexObject("CLEAR_YESNO");
            _world.AcknexObject.SetAcknexObject("IF_N", CLEAR_YESNO_5);
            var CLEAR_YESNO_7 = _world.AcknexObject.GetAcknexObject("CLEAR_YESNO");
            _world.AcknexObject.SetAcknexObject("IF_ESC", CLEAR_YESNO_7);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CLEAR_YESNO(IAcknexObject MY, IAcknexObject THERE)
        {
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", null);
            var MOVE_MODE_4 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_4.SetFloat("VAL", 1f);
            _world.AcknexObject.SetAcknexObject("IF_J", null);
            _world.AcknexObject.SetAcknexObject("IF_Y", null);
            _world.AcknexObject.SetAcknexObject("IF_Z", null);
            _world.AcknexObject.SetAcknexObject("IF_N", null);
            var MAIN_MENU_13 = _world.AcknexObject.GetAcknexObject("MAIN_MENU");
            _world.AcknexObject.SetAcknexObject("IF_ESC", MAIN_MENU_13);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SAVE_GAME(IAcknexObject MY, IAcknexObject THERE)
        {
            var MOVE_MODE_1 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_1.SetFloat("VAL", 1f);
            //Unknown keyword: SAVE_INFO
            var LOAD_STATUS_2 = _world.AcknexObject.GetAcknexObject("LOAD_STATUS");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.10", LOAD_STATUS_2);
            var RESULT_6 = _world.GetObject(ObjectType.Skill, "RESULT");
            RESULT_6.SetFloat("VAL", 0f);
            var OK_7 = _world.AcknexObject.GetAcknexObject("OK");
            var SCREEN_TXT_9 = _world.AcknexObject.GetAcknexObject("SCREEN_TXT");
            SCREEN_TXT_9.SetAcknexObject("STRING", OK_7);
            {
                var enumerator = SHOW_MESSAGE(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: SAVE
            _world.AcknexObject.SetAcknexObject("EACH_TICK.10", null);
            var RESULT_14 = _world.GetObject(ObjectType.Skill, "RESULT");
            var RESULT_14_val = RESULT_14.GetFloat("VAL");
            if (RESULT_14_val < 0f)
            {
                var SAVE_NIX_15 = _world.AcknexObject.GetAcknexObject("SAVE_NIX");
                var SCREEN_TXT_17 = _world.AcknexObject.GetAcknexObject("SCREEN_TXT");
                SCREEN_TXT_17.SetAcknexObject("STRING", SAVE_NIX_15);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator LOAD_GAME(IAcknexObject MY, IAcknexObject THERE)
        {
            var WAIT_TXT_0 = _world.AcknexObject.GetAcknexObject("WAIT_TXT");
            var SCREEN_TXT_2 = _world.AcknexObject.GetAcknexObject("SCREEN_TXT");
            SCREEN_TXT_2.SetAcknexObject("STRING", WAIT_TXT_0);
            var SCREEN_TXT_3 = _world.AcknexObject.GetAcknexObject("SCREEN_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", SCREEN_TXT_3);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            //Unknown keyword: LOAD
            var LOAD_NIX_7 = _world.AcknexObject.GetAcknexObject("LOAD_NIX");
            var SCREEN_TXT_9 = _world.AcknexObject.GetAcknexObject("SCREEN_TXT");
            SCREEN_TXT_9.SetAcknexObject("STRING", LOAD_NIX_7);
            {
                var enumerator = SHOW_MESSAGE(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator SAVE_QUICK(IAcknexObject MY, IAcknexObject THERE)
        {
            var SLOT_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            var SLOT_1_val = SLOT_1.GetFloat("VAL");
            if (SLOT_1_val == 0f)
            {
                {
                    var enumerator = SAVE_MENU(MY, THERE);
                    while (enumerator.MoveNext())
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
                var enumerator = CLEAR_MENU(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var QSAV_YESNO_2 = _world.AcknexObject.GetAcknexObject("QSAV_YESNO");
            var SCREEN_TXT_4 = _world.AcknexObject.GetAcknexObject("SCREEN_TXT");
            SCREEN_TXT_4.SetAcknexObject("STRING", QSAV_YESNO_2);
            var SAVE_GAME_5 = _world.AcknexObject.GetAcknexObject("SAVE_GAME");
            _world.AcknexObject.SetAcknexObject("IF_J", SAVE_GAME_5);
            var SAVE_GAME_7 = _world.AcknexObject.GetAcknexObject("SAVE_GAME");
            _world.AcknexObject.SetAcknexObject("IF_Y", SAVE_GAME_7);
            var SAVE_GAME_9 = _world.AcknexObject.GetAcknexObject("SAVE_GAME");
            _world.AcknexObject.SetAcknexObject("IF_Z", SAVE_GAME_9);
            {
                var enumerator = WAIT_YESNO(MY, THERE);
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
        public IEnumerator LOAD_QUICK(IAcknexObject MY, IAcknexObject THERE)
        {
            var SLOT_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            var SLOT_1_val = SLOT_1.GetFloat("VAL");
            if (SLOT_1_val == 0f)
            {
                {
                    var enumerator = LOAD_MENU(MY, THERE);
                    while (enumerator.MoveNext())
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
                var enumerator = CLEAR_MENU(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var QLOAD_YESNO_2 = _world.AcknexObject.GetAcknexObject("QLOAD_YESNO");
            var SCREEN_TXT_4 = _world.AcknexObject.GetAcknexObject("SCREEN_TXT");
            SCREEN_TXT_4.SetAcknexObject("STRING", QLOAD_YESNO_2);
            var LOAD_GAME_5 = _world.AcknexObject.GetAcknexObject("LOAD_GAME");
            _world.AcknexObject.SetAcknexObject("IF_J", LOAD_GAME_5);
            var LOAD_GAME_7 = _world.AcknexObject.GetAcknexObject("LOAD_GAME");
            _world.AcknexObject.SetAcknexObject("IF_Y", LOAD_GAME_7);
            var LOAD_GAME_9 = _world.AcknexObject.GetAcknexObject("LOAD_GAME");
            _world.AcknexObject.SetAcknexObject("IF_Z", LOAD_GAME_9);
            {
                var enumerator = WAIT_YESNO(MY, THERE);
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
        public IEnumerator LOAD_STATUS(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            //Unknown keyword: LOAD_INFO
            _world.AcknexObject.SetAcknexObject("EACH_TICK.10", null);
            var MOVE_MODE_5 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_5.SetFloat("VAL", 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator EXIT_YESNO(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = CLEAR_MENU(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var QUIT_YESNO_0 = _world.AcknexObject.GetAcknexObject("QUIT_YESNO");
            var SCREEN_TXT_2 = _world.AcknexObject.GetAcknexObject("SCREEN_TXT");
            SCREEN_TXT_2.SetAcknexObject("STRING", QUIT_YESNO_0);
            var EXIT_GAME_3 = _world.AcknexObject.GetAcknexObject("EXIT_GAME");
            _world.AcknexObject.SetAcknexObject("IF_J", EXIT_GAME_3);
            var EXIT_GAME_5 = _world.AcknexObject.GetAcknexObject("EXIT_GAME");
            _world.AcknexObject.SetAcknexObject("IF_Y", EXIT_GAME_5);
            var EXIT_GAME_7 = _world.AcknexObject.GetAcknexObject("EXIT_GAME");
            _world.AcknexObject.SetAcknexObject("IF_Z", EXIT_GAME_7);
            {
                var enumerator = WAIT_YESNO(MY, THERE);
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
        public IEnumerator EXIT_GAME(IAcknexObject MY, IAcknexObject THERE)
        {
            Application.Quit();
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator TOGGLE_MAP(IAcknexObject MY, IAcknexObject THERE)
        {
            var MAP_ROT_1 = _world.GetObject(ObjectType.Skill, "MAP_ROT");
            MAP_ROT_1.SetFloat("VAL", 1f);
            var MAP_MODE_3 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            var MAP_MODE_3_val = MAP_MODE_3.GetFloat("VAL");
            var MAP_MODE_4 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            MAP_MODE_4.SetFloat("VAL", MAP_MODE_3_val + 0.5f);
            var MAP_MODE_6 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            var MAP_MODE_6_val = MAP_MODE_6.GetFloat("VAL");
            if (MAP_MODE_6_val > 0.5f)
            {
                var MAP_MODE_8 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
                MAP_MODE_8.SetFloat("VAL", 0f);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MSCALE_PLUS(IAcknexObject MY, IAcknexObject THERE)
        {
            var MAP_MODE_1 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            var MAP_MODE_1_val = MAP_MODE_1.GetFloat("VAL");
            if (MAP_MODE_1_val == 0f)
            {
                yield break;
            }
            var MAP_SCALE_2 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
            var MAP_SCALE_3 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
            var MAP_SCALE_3_val = MAP_SCALE_3.GetFloat("VAL");
            var MAP_SCALE_4 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
            var MAP_SCALE_4_val = MAP_SCALE_4.GetFloat("VAL");
            MAP_SCALE_2.SetFloat("VAL", MAP_SCALE_4_val * 1.1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator MSCALE_MINUS(IAcknexObject MY, IAcknexObject THERE)
        {
            var MAP_MODE_1 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            var MAP_MODE_1_val = MAP_MODE_1.GetFloat("VAL");
            if (MAP_MODE_1_val == 0f)
            {
                yield break;
            }
            var MAP_SCALE_2 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
            var MAP_SCALE_3 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
            var MAP_SCALE_3_val = MAP_SCALE_3.GetFloat("VAL");
            var MAP_SCALE_4 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
            var MAP_SCALE_4_val = MAP_SCALE_4.GetFloat("VAL");
            MAP_SCALE_2.SetFloat("VAL", MAP_SCALE_4_val * 0.9f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator TOGGLE_MBLUR(IAcknexObject MY, IAcknexObject THERE)
        {
            var MOTION_BLUR_1 = _world.GetObject(ObjectType.Skill, "MOTION_BLUR");
            var MOTION_BLUR_1_val = MOTION_BLUR_1.GetFloat("VAL");
            var MOTION_BLUR_2 = _world.GetObject(ObjectType.Skill, "MOTION_BLUR");
            MOTION_BLUR_2.SetFloat("VAL", MOTION_BLUR_1_val + 0.5f);
            var MOTION_BLUR_4 = _world.GetObject(ObjectType.Skill, "MOTION_BLUR");
            var MOTION_BLUR_4_val = MOTION_BLUR_4.GetFloat("VAL");
            if (MOTION_BLUR_4_val > 0.5f)
            {
                var MOTION_BLUR_6 = _world.GetObject(ObjectType.Skill, "MOTION_BLUR");
                MOTION_BLUR_6.SetFloat("VAL", 0f);
            }
            var MBLUR_ON_7 = _world.AcknexObject.GetAcknexObject("MBLUR_ON");
            var SCREEN_TXT_9 = _world.AcknexObject.GetAcknexObject("SCREEN_TXT");
            SCREEN_TXT_9.SetAcknexObject("STRING", MBLUR_ON_7);
            var MOTION_BLUR_11 = _world.GetObject(ObjectType.Skill, "MOTION_BLUR");
            var MOTION_BLUR_11_val = MOTION_BLUR_11.GetFloat("VAL");
            if (MOTION_BLUR_11_val == 0f)
            {
                var MBLUR_OFF_12 = _world.AcknexObject.GetAcknexObject("MBLUR_OFF");
                var SCREEN_TXT_14 = _world.AcknexObject.GetAcknexObject("SCREEN_TXT");
                SCREEN_TXT_14.SetAcknexObject("STRING", MBLUR_OFF_12);
            }
            {
                var enumerator = SHOW_MESSAGE(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator INCREASE_VOL(IAcknexObject MY, IAcknexObject THERE)
        {
            var SOUND_VOL_1 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            var SOUND_VOL_1_val = SOUND_VOL_1.GetFloat("VAL");
            var SOUND_VOL_2 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            SOUND_VOL_2.SetFloat("VAL", SOUND_VOL_1_val + 0.2f);
            var MUSIC_VOL_4 = _world.GetObject(ObjectType.Skill, "MUSIC_VOL");
            var MUSIC_VOL_4_val = MUSIC_VOL_4.GetFloat("VAL");
            var MUSIC_VOL_5 = _world.GetObject(ObjectType.Skill, "MUSIC_VOL");
            MUSIC_VOL_5.SetFloat("VAL", MUSIC_VOL_4_val + 0.1f);
            var VOL_PLUS_6 = _world.AcknexObject.GetAcknexObject("VOL_PLUS");
            var SCREEN_TXT_8 = _world.AcknexObject.GetAcknexObject("SCREEN_TXT");
            SCREEN_TXT_8.SetAcknexObject("STRING", VOL_PLUS_6);
            {
                var enumerator = SHOW_MESSAGE(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator DECREASE_VOL(IAcknexObject MY, IAcknexObject THERE)
        {
            var SOUND_VOL_1 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            var SOUND_VOL_1_val = SOUND_VOL_1.GetFloat("VAL");
            var SOUND_VOL_2 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            SOUND_VOL_2.SetFloat("VAL", SOUND_VOL_1_val + -0.2f);
            var MUSIC_VOL_4 = _world.GetObject(ObjectType.Skill, "MUSIC_VOL");
            var MUSIC_VOL_4_val = MUSIC_VOL_4.GetFloat("VAL");
            var MUSIC_VOL_5 = _world.GetObject(ObjectType.Skill, "MUSIC_VOL");
            MUSIC_VOL_5.SetFloat("VAL", MUSIC_VOL_4_val + -0.1f);
            var VOL_MINUS_6 = _world.AcknexObject.GetAcknexObject("VOL_MINUS");
            var SCREEN_TXT_8 = _world.AcknexObject.GetAcknexObject("SCREEN_TXT");
            SCREEN_TXT_8.SetAcknexObject("STRING", VOL_MINUS_6);
            {
                var enumerator = SHOW_MESSAGE(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator SHOW_OPTIONS(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = CLEAR_MENU(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var OPTION_STR_0 = _world.AcknexObject.GetAcknexObject("OPTION_STR");
            var SCREEN_TXT_2 = _world.AcknexObject.GetAcknexObject("SCREEN_TXT");
            SCREEN_TXT_2.SetAcknexObject("STRING", OPTION_STR_0);
            {
                var enumerator = WAIT_YESNO(MY, THERE);
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
        public IEnumerator MAIN_MENU(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = CLEAR_MENU(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var SHOW_OPTION_STR_0 = _world.AcknexObject.GetAcknexObject("SHOW_OPTION_STR");
            _world.SetSynonymObject("MENU1_STR", SHOW_OPTION_STR_0);
            var LOAD_GAME_STR_2 = _world.AcknexObject.GetAcknexObject("LOAD_GAME_STR");
            _world.SetSynonymObject("MENU2_STR", LOAD_GAME_STR_2);
            var SAVE_GAME_STR_4 = _world.AcknexObject.GetAcknexObject("SAVE_GAME_STR");
            _world.SetSynonymObject("MENU3_STR", SAVE_GAME_STR_4);
            var QUIT_GAME_STR_6 = _world.AcknexObject.GetAcknexObject("QUIT_GAME_STR");
            _world.SetSynonymObject("MENU4_STR", QUIT_GAME_STR_6);
            var SHOW_OPTIONS_8 = _world.AcknexObject.GetAcknexObject("SHOW_OPTIONS");
            _world.SetSynonymObject("MENU1_ACT", SHOW_OPTIONS_8);
            var LOAD_MENU_10 = _world.AcknexObject.GetAcknexObject("LOAD_MENU");
            _world.SetSynonymObject("MENU2_ACT", LOAD_MENU_10);
            var SAVE_MENU_12 = _world.AcknexObject.GetAcknexObject("SAVE_MENU");
            _world.SetSynonymObject("MENU3_ACT", SAVE_MENU_12);
            var EXIT_YESNO_14 = _world.AcknexObject.GetAcknexObject("EXIT_YESNO");
            _world.SetSynonymObject("MENU4_ACT", EXIT_YESNO_14);
            var MENU_POS_18 = _world.AcknexObject.GetAcknexObject("MENU_POS");
            MENU_POS_18.SetFloat("MAX", 5f);
            {
                var enumerator = SHOW_MENU(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator DIFF_MENU(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = CLEAR_MENU(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var DIFFICULT1_STR_0 = _world.AcknexObject.GetAcknexObject("DIFFICULT1_STR");
            _world.SetSynonymObject("MENU1_STR", DIFFICULT1_STR_0);
            var DIFFICULT2_STR_2 = _world.AcknexObject.GetAcknexObject("DIFFICULT2_STR");
            _world.SetSynonymObject("MENU2_STR", DIFFICULT2_STR_2);
            var DIFFICULT3_STR_4 = _world.AcknexObject.GetAcknexObject("DIFFICULT3_STR");
            _world.SetSynonymObject("MENU3_STR", DIFFICULT3_STR_4);
            var DIFFICULT4_STR_6 = _world.AcknexObject.GetAcknexObject("DIFFICULT4_STR");
            _world.SetSynonymObject("MENU4_STR", DIFFICULT4_STR_6);
            var SET_DIFF1_8 = _world.AcknexObject.GetAcknexObject("SET_DIFF1");
            _world.SetSynonymObject("MENU1_ACT", SET_DIFF1_8);
            var SET_DIFF2_10 = _world.AcknexObject.GetAcknexObject("SET_DIFF2");
            _world.SetSynonymObject("MENU2_ACT", SET_DIFF2_10);
            var SET_DIFF3_12 = _world.AcknexObject.GetAcknexObject("SET_DIFF3");
            _world.SetSynonymObject("MENU3_ACT", SET_DIFF3_12);
            var SET_DIFF4_14 = _world.AcknexObject.GetAcknexObject("SET_DIFF4");
            _world.SetSynonymObject("MENU4_ACT", SET_DIFF4_14);
            var MENU_POS_18 = _world.AcknexObject.GetAcknexObject("MENU_POS");
            MENU_POS_18.SetFloat("MAX", 5f);
            {
                var enumerator = SHOW_MENU(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator LEVEL_MENU(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = CLEAR_MENU(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var LEVEL1_STR_0 = _world.AcknexObject.GetAcknexObject("LEVEL1_STR");
            _world.SetSynonymObject("MENU1_STR", LEVEL1_STR_0);
            var LEVEL2_STR_2 = _world.AcknexObject.GetAcknexObject("LEVEL2_STR");
            _world.SetSynonymObject("MENU2_STR", LEVEL2_STR_2);
            var LEVEL3_STR_4 = _world.AcknexObject.GetAcknexObject("LEVEL3_STR");
            _world.SetSynonymObject("MENU3_STR", LEVEL3_STR_4);
            var LEVEL4_STR_6 = _world.AcknexObject.GetAcknexObject("LEVEL4_STR");
            _world.SetSynonymObject("MENU4_STR", LEVEL4_STR_6);
            var LEVEL5_STR_8 = _world.AcknexObject.GetAcknexObject("LEVEL5_STR");
            _world.SetSynonymObject("MENU5_STR", LEVEL5_STR_8);
            var START_LEVEL1_10 = _world.AcknexObject.GetAcknexObject("START_LEVEL1");
            _world.SetSynonymObject("MENU1_ACT", START_LEVEL1_10);
            var START_LEVEL2_12 = _world.AcknexObject.GetAcknexObject("START_LEVEL2");
            _world.SetSynonymObject("MENU2_ACT", START_LEVEL2_12);
            var START_LEVEL3_14 = _world.AcknexObject.GetAcknexObject("START_LEVEL3");
            _world.SetSynonymObject("MENU3_ACT", START_LEVEL3_14);
            var START_LEVEL4_16 = _world.AcknexObject.GetAcknexObject("START_LEVEL4");
            _world.SetSynonymObject("MENU4_ACT", START_LEVEL4_16);
            var START_LEVEL5_18 = _world.AcknexObject.GetAcknexObject("START_LEVEL5");
            _world.SetSynonymObject("MENU5_ACT", START_LEVEL5_18);
            var MENU_POS_22 = _world.AcknexObject.GetAcknexObject("MENU_POS");
            MENU_POS_22.SetFloat("MAX", 6f);
            {
                var enumerator = SHOW_MENU(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator SAVE_MENU(IAcknexObject MY, IAcknexObject THERE)
        {
            //Unknown keyword: LOAD_INFO
            {
                var enumerator = CLEAR_MENU(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var NAME1_STR_0 = _world.AcknexObject.GetAcknexObject("NAME1_STR");
            _world.SetSynonymObject("MENU1_STR", NAME1_STR_0);
            var NAME2_STR_2 = _world.AcknexObject.GetAcknexObject("NAME2_STR");
            _world.SetSynonymObject("MENU2_STR", NAME2_STR_2);
            var NAME3_STR_4 = _world.AcknexObject.GetAcknexObject("NAME3_STR");
            _world.SetSynonymObject("MENU3_STR", NAME3_STR_4);
            var NAME4_STR_6 = _world.AcknexObject.GetAcknexObject("NAME4_STR");
            _world.SetSynonymObject("MENU4_STR", NAME4_STR_6);
            var NAME5_STR_8 = _world.AcknexObject.GetAcknexObject("NAME5_STR");
            _world.SetSynonymObject("MENU5_STR", NAME5_STR_8);
            var SAVE_NAME1_10 = _world.AcknexObject.GetAcknexObject("SAVE_NAME1");
            _world.SetSynonymObject("MENU1_ACT", SAVE_NAME1_10);
            var SAVE_NAME2_12 = _world.AcknexObject.GetAcknexObject("SAVE_NAME2");
            _world.SetSynonymObject("MENU2_ACT", SAVE_NAME2_12);
            var SAVE_NAME3_14 = _world.AcknexObject.GetAcknexObject("SAVE_NAME3");
            _world.SetSynonymObject("MENU3_ACT", SAVE_NAME3_14);
            var SAVE_NAME4_16 = _world.AcknexObject.GetAcknexObject("SAVE_NAME4");
            _world.SetSynonymObject("MENU4_ACT", SAVE_NAME4_16);
            var SAVE_NAME5_18 = _world.AcknexObject.GetAcknexObject("SAVE_NAME5");
            _world.SetSynonymObject("MENU5_ACT", SAVE_NAME5_18);
            var MENU_POS_22 = _world.AcknexObject.GetAcknexObject("MENU_POS");
            MENU_POS_22.SetFloat("MAX", 6f);
            {
                var enumerator = SHOW_MENU(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator LOAD_MENU(IAcknexObject MY, IAcknexObject THERE)
        {
            //Unknown keyword: LOAD_INFO
            {
                var enumerator = CLEAR_MENU(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var NAME1_STR_0 = _world.AcknexObject.GetAcknexObject("NAME1_STR");
            _world.SetSynonymObject("MENU1_STR", NAME1_STR_0);
            var NAME2_STR_2 = _world.AcknexObject.GetAcknexObject("NAME2_STR");
            _world.SetSynonymObject("MENU2_STR", NAME2_STR_2);
            var NAME3_STR_4 = _world.AcknexObject.GetAcknexObject("NAME3_STR");
            _world.SetSynonymObject("MENU3_STR", NAME3_STR_4);
            var NAME4_STR_6 = _world.AcknexObject.GetAcknexObject("NAME4_STR");
            _world.SetSynonymObject("MENU4_STR", NAME4_STR_6);
            var NAME5_STR_8 = _world.AcknexObject.GetAcknexObject("NAME5_STR");
            _world.SetSynonymObject("MENU5_STR", NAME5_STR_8);
            var LOAD_NAME1_10 = _world.AcknexObject.GetAcknexObject("LOAD_NAME1");
            _world.SetSynonymObject("MENU1_ACT", LOAD_NAME1_10);
            var LOAD_NAME2_12 = _world.AcknexObject.GetAcknexObject("LOAD_NAME2");
            _world.SetSynonymObject("MENU2_ACT", LOAD_NAME2_12);
            var LOAD_NAME3_14 = _world.AcknexObject.GetAcknexObject("LOAD_NAME3");
            _world.SetSynonymObject("MENU3_ACT", LOAD_NAME3_14);
            var LOAD_NAME4_16 = _world.AcknexObject.GetAcknexObject("LOAD_NAME4");
            _world.SetSynonymObject("MENU4_ACT", LOAD_NAME4_16);
            var LOAD_NAME5_18 = _world.AcknexObject.GetAcknexObject("LOAD_NAME5");
            _world.SetSynonymObject("MENU5_ACT", LOAD_NAME5_18);
            var MENU_POS_22 = _world.AcknexObject.GetAcknexObject("MENU_POS");
            MENU_POS_22.SetFloat("MAX", 6f);
            {
                var enumerator = SHOW_MENU(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator SAVE_NAME1(IAcknexObject MY, IAcknexObject THERE)
        {
            var MENU_POS_2 = _world.AcknexObject.GetAcknexObject("MENU_POS");
            MENU_POS_2.SetFloat("MIN", 0f);
            var MENU_POS_4 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            MENU_POS_4.SetFloat("VAL", 0f);
            var SLOT_6 = _world.GetObject(ObjectType.Skill, "SLOT");
            SLOT_6.SetFloat("VAL", 1f);
            _world.ReadInkey("NAME1_STR");
            {
                var enumerator = CLEAR_MENU(MY, THERE);
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
                var enumerator = SAVE_GAME(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator SAVE_NAME2(IAcknexObject MY, IAcknexObject THERE)
        {
            var MENU_POS_2 = _world.AcknexObject.GetAcknexObject("MENU_POS");
            MENU_POS_2.SetFloat("MIN", 0f);
            var MENU_POS_4 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            MENU_POS_4.SetFloat("VAL", 0f);
            var SLOT_6 = _world.GetObject(ObjectType.Skill, "SLOT");
            SLOT_6.SetFloat("VAL", 2f);
            _world.ReadInkey("NAME2_STR");
            {
                var enumerator = CLEAR_MENU(MY, THERE);
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
                var enumerator = SAVE_GAME(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator SAVE_NAME3(IAcknexObject MY, IAcknexObject THERE)
        {
            var MENU_POS_2 = _world.AcknexObject.GetAcknexObject("MENU_POS");
            MENU_POS_2.SetFloat("MIN", 0f);
            var MENU_POS_4 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            MENU_POS_4.SetFloat("VAL", 0f);
            var SLOT_6 = _world.GetObject(ObjectType.Skill, "SLOT");
            SLOT_6.SetFloat("VAL", 3f);
            _world.ReadInkey("NAME3_STR");
            {
                var enumerator = CLEAR_MENU(MY, THERE);
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
                var enumerator = SAVE_GAME(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator SAVE_NAME4(IAcknexObject MY, IAcknexObject THERE)
        {
            var MENU_POS_2 = _world.AcknexObject.GetAcknexObject("MENU_POS");
            MENU_POS_2.SetFloat("MIN", 0f);
            var MENU_POS_4 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            MENU_POS_4.SetFloat("VAL", 0f);
            var SLOT_6 = _world.GetObject(ObjectType.Skill, "SLOT");
            SLOT_6.SetFloat("VAL", 4f);
            _world.ReadInkey("NAME4_STR");
            {
                var enumerator = CLEAR_MENU(MY, THERE);
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
                var enumerator = SAVE_GAME(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator SAVE_NAME5(IAcknexObject MY, IAcknexObject THERE)
        {
            var MENU_POS_2 = _world.AcknexObject.GetAcknexObject("MENU_POS");
            MENU_POS_2.SetFloat("MIN", 0f);
            var MENU_POS_4 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            MENU_POS_4.SetFloat("VAL", 0f);
            var SLOT_6 = _world.GetObject(ObjectType.Skill, "SLOT");
            SLOT_6.SetFloat("VAL", 5f);
            _world.ReadInkey("NAME5_STR");
            {
                var enumerator = CLEAR_MENU(MY, THERE);
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
                var enumerator = SAVE_GAME(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator LOAD_NAME1(IAcknexObject MY, IAcknexObject THERE)
        {
            var SLOT_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            SLOT_1.SetFloat("VAL", 1f);
            {
                var enumerator = CLEAR_MENU(MY, THERE);
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
                var enumerator = LOAD_GAME(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator LOAD_NAME2(IAcknexObject MY, IAcknexObject THERE)
        {
            var SLOT_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            SLOT_1.SetFloat("VAL", 2f);
            {
                var enumerator = CLEAR_MENU(MY, THERE);
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
                var enumerator = LOAD_GAME(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator LOAD_NAME3(IAcknexObject MY, IAcknexObject THERE)
        {
            var SLOT_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            SLOT_1.SetFloat("VAL", 3f);
            {
                var enumerator = CLEAR_MENU(MY, THERE);
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
                var enumerator = LOAD_GAME(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator LOAD_NAME4(IAcknexObject MY, IAcknexObject THERE)
        {
            var SLOT_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            SLOT_1.SetFloat("VAL", 4f);
            {
                var enumerator = CLEAR_MENU(MY, THERE);
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
                var enumerator = LOAD_GAME(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator LOAD_NAME5(IAcknexObject MY, IAcknexObject THERE)
        {
            var SLOT_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            SLOT_1.SetFloat("VAL", 5f);
            {
                var enumerator = CLEAR_MENU(MY, THERE);
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
                var enumerator = LOAD_GAME(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator SET_DIFF1(IAcknexObject MY, IAcknexObject THERE)
        {
            var DIFFICULTY_1 = _world.GetObject(ObjectType.Skill, "DIFFICULTY");
            DIFFICULTY_1.SetFloat("VAL", 1f);
            {
                var enumerator = LEVEL_MENU(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator SET_DIFF2(IAcknexObject MY, IAcknexObject THERE)
        {
            var DIFFICULTY_1 = _world.GetObject(ObjectType.Skill, "DIFFICULTY");
            DIFFICULTY_1.SetFloat("VAL", 2f);
            {
                var enumerator = LEVEL_MENU(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator SET_DIFF3(IAcknexObject MY, IAcknexObject THERE)
        {
            var DIFFICULTY_1 = _world.GetObject(ObjectType.Skill, "DIFFICULTY");
            DIFFICULTY_1.SetFloat("VAL", 3f);
            {
                var enumerator = LEVEL_MENU(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator SET_DIFF4(IAcknexObject MY, IAcknexObject THERE)
        {
            var DIFFICULTY_1 = _world.GetObject(ObjectType.Skill, "DIFFICULTY");
            DIFFICULTY_1.SetFloat("VAL", 4f);
            {
                var enumerator = LEVEL_MENU(MY, THERE);
                while (enumerator.MoveNext())
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
        public IEnumerator START_LEVEL1(IAcknexObject MY, IAcknexObject THERE)
        {
            //Unknown keyword: SAVE_INFO
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator START_LEVEL2(IAcknexObject MY, IAcknexObject THERE)
        {
            //Unknown keyword: SAVE_INFO
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator START_LEVEL3(IAcknexObject MY, IAcknexObject THERE)
        {
            //Unknown keyword: SAVE_INFO
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator START_LEVEL4(IAcknexObject MY, IAcknexObject THERE)
        {
            //Unknown keyword: SAVE_INFO
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator START_LEVEL5(IAcknexObject MY, IAcknexObject THERE)
        {
            //Unknown keyword: SAVE_INFO
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator INIT_GLOBALS(IAcknexObject MY, IAcknexObject THERE)
        {
            //Unknown keyword: LOAD_INFO
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator UPDATE_DBPANEL(IAcknexObject MY, IAcknexObject THERE)
        {
            var FPS_0 = _world.GetObject(ObjectType.Skill, "FPS");
            var FPS_1 = _world.GetObject(ObjectType.Skill, "FPS");
            var FPS_1_val = FPS_1.GetFloat("VAL");
            var FPS_4 = _world.GetObject(ObjectType.Skill, "FPS");
            var FPS_4_val = FPS_4.GetFloat("VAL");
            var TIME_FAC_8 = _world.GetObject(ObjectType.Skill, "TIME_FAC");
            var TIME_FAC_8_val = TIME_FAC_8.GetFloat("VAL");
            FPS_0.SetFloat("VAL", 0.9f * FPS_4_val + 0.1f * TIME_FAC_8_val);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SET_DEBUG(IAcknexObject MY, IAcknexObject THERE)
        {
            var UPDATE_DBPANEL_0 = _world.AcknexObject.GetAcknexObject("UPDATE_DBPANEL");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.10", UPDATE_DBPANEL_0);
            var DEBUG_PANEL_3 = _world.AcknexObject.GetAcknexObject("DEBUG_PANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.10", DEBUG_PANEL_3);
            var DEBUG_TEXT_1_6 = _world.AcknexObject.GetAcknexObject("DEBUG_TEXT_1");
            _world.AcknexObject.SetAcknexObject("MESSAGES.10", DEBUG_TEXT_1_6);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SET_ADJUST(IAcknexObject MY, IAcknexObject THERE)
        {
            var ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_1_val = ADJUST_MODE_1.GetFloat("VAL");
            if (ADJUST_MODE_1_val > -1f)
            {
                goto DISABLE;
            }
            var SCREEN_HGT_2 = _world.GetObject(ObjectType.Skill, "SCREEN_HGT");
            var SCREEN_HGT_2_val = SCREEN_HGT_2.GetFloat("VAL");
            var ADJUST_PANEL_4 = _world.AcknexObject.GetAcknexObject("ADJUST_PANEL");
            ADJUST_PANEL_4.SetFloat("POS_Y", SCREEN_HGT_2_val);
            var ADJUST_PANEL_7 = _world.AcknexObject.GetAcknexObject("ADJUST_PANEL");
            var temp_8 = ADJUST_PANEL_7.GetFloat("POS_Y");
            var ADJUST_PANEL_10 = _world.AcknexObject.GetAcknexObject("ADJUST_PANEL");
            ADJUST_PANEL_10.SetFloat("POS_Y", temp_8 + -12f);
            var SCREEN_HGT_11 = _world.GetObject(ObjectType.Skill, "SCREEN_HGT");
            var SCREEN_HGT_11_val = SCREEN_HGT_11.GetFloat("VAL");
            var ADJUST_TEXT_13 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            ADJUST_TEXT_13.SetFloat("POS_Y", SCREEN_HGT_11_val);
            var ADJUST_TEXT_16 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            var temp_17 = ADJUST_TEXT_16.GetFloat("POS_Y");
            var ADJUST_TEXT_19 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            ADJUST_TEXT_19.SetFloat("POS_Y", temp_17 + -100f);
            var ADJUST_HELP_20 = _world.AcknexObject.GetAcknexObject("ADJUST_HELP");
            var ADJUST_TEXT_22 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            ADJUST_TEXT_22.SetAcknexObject("STRING", ADJUST_HELP_20);
            var ADJUST_TEXT_23 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.9", ADJUST_TEXT_23);
            var ADJUST_MODE_27 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_27.SetFloat("VAL", 99f);
            var temp_29 = _world.AcknexObject?.GetAcknexObject("IF_W");
            _world.SetSynonymObject("AW_OLD", temp_29);
            var SET_WMODE_31 = _world.AcknexObject.GetAcknexObject("SET_WMODE");
            _world.AcknexObject.SetAcknexObject("IF_W", SET_WMODE_31);
            var temp_34 = _world.AcknexObject?.GetAcknexObject("IF_F");
            _world.SetSynonymObject("AF_OLD", temp_34);
            var SET_FMODE_36 = _world.AcknexObject.GetAcknexObject("SET_FMODE");
            _world.AcknexObject.SetAcknexObject("IF_F", SET_FMODE_36);
            var temp_39 = _world.AcknexObject?.GetAcknexObject("IF_C");
            _world.SetSynonymObject("AC_OLD", temp_39);
            var SET_CMODE_41 = _world.AcknexObject.GetAcknexObject("SET_CMODE");
            _world.AcknexObject.SetAcknexObject("IF_C", SET_CMODE_41);
            var temp_44 = _world.AcknexObject?.GetAcknexObject("IF_R");
            _world.SetSynonymObject("AR_OLD", temp_44);
            var SET_RMODE_46 = _world.AcknexObject.GetAcknexObject("SET_RMODE");
            _world.AcknexObject.SetAcknexObject("IF_R", SET_RMODE_46);
            var temp_49 = _world.AcknexObject?.GetAcknexObject("IF_A");
            _world.SetSynonymObject("AA_OLD", temp_49);
            var SET_AMODE_51 = _world.AcknexObject.GetAcknexObject("SET_AMODE");
            _world.AcknexObject.SetAcknexObject("IF_A", SET_AMODE_51);
            var temp_54 = _world.AcknexObject?.GetAcknexObject("IF_S");
            _world.SetSynonymObject("AS_OLD", temp_54);
            var SET_SMODE_56 = _world.AcknexObject.GetAcknexObject("SET_SMODE");
            _world.AcknexObject.SetAcknexObject("IF_S", SET_SMODE_56);
            var temp_59 = _world.AcknexObject?.GetAcknexObject("IF_B");
            _world.SetSynonymObject("AB_OLD", temp_59);
            var SET_BMODE_61 = _world.AcknexObject.GetAcknexObject("SET_BMODE");
            _world.AcknexObject.SetAcknexObject("IF_B", SET_BMODE_61);
            var temp_64 = _world.AcknexObject?.GetAcknexObject("IF_V");
            _world.SetSynonymObject("AV_OLD", temp_64);
            var SET_VMODE_66 = _world.AcknexObject.GetAcknexObject("SET_VMODE");
            _world.AcknexObject.SetAcknexObject("IF_V", SET_VMODE_66);
            var temp_69 = _world.AcknexObject?.GetAcknexObject("IF_Q");
            _world.SetSynonymObject("AQ_OLD", temp_69);
            var temp_72 = _world.AcknexObject?.GetAcknexObject("IF_X");
            _world.SetSynonymObject("AX_OLD", temp_72);
            var temp_75 = _world.AcknexObject?.GetAcknexObject("IF_5");
            _world.SetSynonymObject("A5_OLD", temp_75);
            var ADJUST_XMINUS_77 = _world.AcknexObject.GetAcknexObject("ADJUST_XMINUS");
            _world.AcknexObject.SetAcknexObject("IF_5", ADJUST_XMINUS_77);
            var temp_80 = _world.AcknexObject?.GetAcknexObject("IF_6");
            _world.SetSynonymObject("A6_OLD", temp_80);
            var ADJUST_XPLUS_82 = _world.AcknexObject.GetAcknexObject("ADJUST_XPLUS");
            _world.AcknexObject.SetAcknexObject("IF_6", ADJUST_XPLUS_82);
            var temp_85 = _world.AcknexObject?.GetAcknexObject("IF_7");
            _world.SetSynonymObject("A7_OLD", temp_85);
            var ADJUST_YMINUS_87 = _world.AcknexObject.GetAcknexObject("ADJUST_YMINUS");
            _world.AcknexObject.SetAcknexObject("IF_7", ADJUST_YMINUS_87);
            var temp_90 = _world.AcknexObject?.GetAcknexObject("IF_8");
            _world.SetSynonymObject("A8_OLD", temp_90);
            var ADJUST_YPLUS_92 = _world.AcknexObject.GetAcknexObject("ADJUST_YPLUS");
            _world.AcknexObject.SetAcknexObject("IF_8", ADJUST_YPLUS_92);
            //Unknown keyword: BEEP
            yield break;
            DISABLE:
            _world.AcknexObject.SetAcknexObject("MESSAGES.9", null);
            _world.AcknexObject.SetAcknexObject("PANELS.9", null);
            var ADJUST_MODE_101 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_101.SetFloat("VAL", -1f);
            var AW_OLD_102 = _world.GetSynonymObject("AW_OLD");
            _world.AcknexObject.SetAcknexObject("IF_W", AW_OLD_102);
            var AF_OLD_104 = _world.GetSynonymObject("AF_OLD");
            _world.AcknexObject.SetAcknexObject("IF_F", AF_OLD_104);
            var AC_OLD_106 = _world.GetSynonymObject("AC_OLD");
            _world.AcknexObject.SetAcknexObject("IF_C", AC_OLD_106);
            var AR_OLD_108 = _world.GetSynonymObject("AR_OLD");
            _world.AcknexObject.SetAcknexObject("IF_R", AR_OLD_108);
            var AA_OLD_110 = _world.GetSynonymObject("AA_OLD");
            _world.AcknexObject.SetAcknexObject("IF_A", AA_OLD_110);
            var AS_OLD_112 = _world.GetSynonymObject("AS_OLD");
            _world.AcknexObject.SetAcknexObject("IF_S", AS_OLD_112);
            var AB_OLD_114 = _world.GetSynonymObject("AB_OLD");
            _world.AcknexObject.SetAcknexObject("IF_B", AB_OLD_114);
            var AV_OLD_116 = _world.GetSynonymObject("AV_OLD");
            _world.AcknexObject.SetAcknexObject("IF_V", AV_OLD_116);
            var AQ_OLD_118 = _world.GetSynonymObject("AQ_OLD");
            _world.AcknexObject.SetAcknexObject("IF_Q", AQ_OLD_118);
            var AX_OLD_120 = _world.GetSynonymObject("AX_OLD");
            _world.AcknexObject.SetAcknexObject("IF_X", AX_OLD_120);
            var A5_OLD_122 = _world.GetSynonymObject("A5_OLD");
            _world.AcknexObject.SetAcknexObject("IF_5", A5_OLD_122);
            var A6_OLD_124 = _world.GetSynonymObject("A6_OLD");
            _world.AcknexObject.SetAcknexObject("IF_6", A6_OLD_124);
            var A7_OLD_126 = _world.GetSynonymObject("A7_OLD");
            _world.AcknexObject.SetAcknexObject("IF_7", A7_OLD_126);
            var A8_OLD_128 = _world.GetSynonymObject("A8_OLD");
            _world.AcknexObject.SetAcknexObject("IF_8", A8_OLD_128);
            //Unknown keyword: BEEP
            yield break;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator GET_ADJX(IAcknexObject MY, IAcknexObject THERE)
        {
            var ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_1_val = ADJUST_MODE_1.GetFloat("VAL");
            if (ADJUST_MODE_1_val == 0f)
            {
                var ADJUST_WALL_3 = _world.GetSynonymObject("ADJUST_WALL");
                var temp_4 = ADJUST_WALL_3.GetFloat("OFFSET_X");
                var ADJUST_X_5 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                ADJUST_X_5.SetFloat("VAL", temp_4);
            }
            var ADJUST_MODE_7 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_7_val = ADJUST_MODE_7.GetFloat("VAL");
            if (ADJUST_MODE_7_val == 1f)
            {
                var ADJUST_REG_9 = _world.GetSynonymObject("ADJUST_REG");
                var temp_10 = ADJUST_REG_9.GetFloat("FLOOR_OFFS_X");
                var ADJUST_X_11 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                ADJUST_X_11.SetFloat("VAL", temp_10);
            }
            var ADJUST_MODE_13 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_13_val = ADJUST_MODE_13.GetFloat("VAL");
            if (ADJUST_MODE_13_val == 2f)
            {
                var ADJUST_REG_15 = _world.GetSynonymObject("ADJUST_REG");
                var temp_16 = ADJUST_REG_15.GetFloat("CEIL_OFFS_X");
                var ADJUST_X_17 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                ADJUST_X_17.SetFloat("VAL", temp_16);
            }
            var ADJUST_MODE_19 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_19_val = ADJUST_MODE_19.GetFloat("VAL");
            if (ADJUST_MODE_19_val == 3f)
            {
                var ADJUST_X_20 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var ADJUST_X_21 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var ADJUST_X_21_val = ADJUST_X_21.GetFloat("VAL");
                var ADJUST_REG_23 = _world.GetSynonymObject("ADJUST_REG");
                var temp_24 = ADJUST_REG_23.GetFloat("FLOOR_HGT");
                ADJUST_X_20.SetFloat("VAL", temp_24 * 10f);
            }
            var ADJUST_MODE_28 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_28_val = ADJUST_MODE_28.GetFloat("VAL");
            if (ADJUST_MODE_28_val == 4f)
            {
                var ADJUST_TEX_30 = _world.GetSynonymObject("ADJUST_TEX");
                var temp_31 = ADJUST_TEX_30.GetFloat("POS_X");
                var ADJUST_X_32 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                ADJUST_X_32.SetFloat("VAL", temp_31);
            }
            var ADJUST_MODE_34 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_34_val = ADJUST_MODE_34.GetFloat("VAL");
            if (ADJUST_MODE_34_val == 5f)
            {
                var ADJUST_X_35 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var ADJUST_X_36 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var ADJUST_X_36_val = ADJUST_X_36.GetFloat("VAL");
                var ADJUST_TEX_38 = _world.GetSynonymObject("ADJUST_TEX");
                var temp_39 = ADJUST_TEX_38.GetFloat("SCALE_X");
                ADJUST_X_35.SetFloat("VAL", temp_39 * 10f);
            }
            var ADJUST_MODE_43 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_43_val = ADJUST_MODE_43.GetFloat("VAL");
            if (ADJUST_MODE_43_val == 6f)
            {
                var ADJUST_WALL_45 = _world.GetSynonymObject("ADJUST_WALL");
                var temp_46 = ADJUST_WALL_45.GetFloat("OFFSET_X");
                var ADJUST_X_47 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                ADJUST_X_47.SetFloat("VAL", temp_46);
            }
            var ADJUST_MODE_49 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_49_val = ADJUST_MODE_49.GetFloat("VAL");
            if (ADJUST_MODE_49_val == 7f)
            {
                var ADJUST_X_50 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var ADJUST_X_51 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var ADJUST_X_51_val = ADJUST_X_51.GetFloat("VAL");
                var ADJUST_TEX_53 = _world.GetSynonymObject("ADJUST_TEX");
                var temp_54 = ADJUST_TEX_53.GetFloat("AMBIENT");
                ADJUST_X_50.SetFloat("VAL", temp_54 * 10f);
            }
            var ADJUST_MODE_58 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_58_val = ADJUST_MODE_58.GetFloat("VAL");
            if (ADJUST_MODE_58_val == 8f)
            {
                var ADJUST_X_59 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var ADJUST_X_60 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var ADJUST_X_60_val = ADJUST_X_60.GetFloat("VAL");
                var ADJUST_REG_62 = _world.GetSynonymObject("ADJUST_REG");
                var temp_63 = ADJUST_REG_62.GetFloat("AMBIENT");
                ADJUST_X_59.SetFloat("VAL", temp_63 * 10f);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator GET_ADJY(IAcknexObject MY, IAcknexObject THERE)
        {
            var ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_1_val = ADJUST_MODE_1.GetFloat("VAL");
            if (ADJUST_MODE_1_val == 0f)
            {
                var ADJUST_WALL_3 = _world.GetSynonymObject("ADJUST_WALL");
                var temp_4 = ADJUST_WALL_3.GetFloat("OFFSET_Y");
                var ADJUST_Y_5 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                ADJUST_Y_5.SetFloat("VAL", temp_4);
            }
            var ADJUST_MODE_7 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_7_val = ADJUST_MODE_7.GetFloat("VAL");
            if (ADJUST_MODE_7_val == 1f)
            {
                var ADJUST_REG_9 = _world.GetSynonymObject("ADJUST_REG");
                var temp_10 = ADJUST_REG_9.GetFloat("FLOOR_OFFS_Y");
                var ADJUST_Y_11 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                ADJUST_Y_11.SetFloat("VAL", temp_10);
            }
            var ADJUST_MODE_13 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_13_val = ADJUST_MODE_13.GetFloat("VAL");
            if (ADJUST_MODE_13_val == 2f)
            {
                var ADJUST_REG_15 = _world.GetSynonymObject("ADJUST_REG");
                var temp_16 = ADJUST_REG_15.GetFloat("CEIL_OFFS_Y");
                var ADJUST_Y_17 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                ADJUST_Y_17.SetFloat("VAL", temp_16);
            }
            var ADJUST_MODE_19 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_19_val = ADJUST_MODE_19.GetFloat("VAL");
            if (ADJUST_MODE_19_val == 3f)
            {
                var ADJUST_Y_20 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var ADJUST_Y_21 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var ADJUST_Y_21_val = ADJUST_Y_21.GetFloat("VAL");
                var ADJUST_REG_23 = _world.GetSynonymObject("ADJUST_REG");
                var temp_24 = ADJUST_REG_23.GetFloat("CEIL_HGT");
                ADJUST_Y_20.SetFloat("VAL", temp_24 * 10f);
            }
            var ADJUST_MODE_28 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_28_val = ADJUST_MODE_28.GetFloat("VAL");
            if (ADJUST_MODE_28_val == 4f)
            {
                var ADJUST_TEX_30 = _world.GetSynonymObject("ADJUST_TEX");
                var temp_31 = ADJUST_TEX_30.GetFloat("POS_Y");
                var ADJUST_Y_32 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                ADJUST_Y_32.SetFloat("VAL", temp_31);
            }
            var ADJUST_MODE_34 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_34_val = ADJUST_MODE_34.GetFloat("VAL");
            if (ADJUST_MODE_34_val == 5f)
            {
                var ADJUST_Y_35 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var ADJUST_Y_36 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var ADJUST_Y_36_val = ADJUST_Y_36.GetFloat("VAL");
                var ADJUST_TEX_38 = _world.GetSynonymObject("ADJUST_TEX");
                var temp_39 = ADJUST_TEX_38.GetFloat("SCALE_Y");
                ADJUST_Y_35.SetFloat("VAL", temp_39 * 10f);
            }
            var ADJUST_MODE_43 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_43_val = ADJUST_MODE_43.GetFloat("VAL");
            if (ADJUST_MODE_43_val == 6f)
            {
                var ADJUST_Y_44 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var ADJUST_Y_45 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var ADJUST_Y_45_val = ADJUST_Y_45.GetFloat("VAL");
                var ADJUST_WALL_47 = _world.GetSynonymObject("ADJUST_WALL");
                var temp_48 = ADJUST_WALL_47.GetFloat("POSITION");
                ADJUST_Y_44.SetFloat("VAL", temp_48 * 10f);
            }
            var ADJUST_MODE_52 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_52_val = ADJUST_MODE_52.GetFloat("VAL");
            if (ADJUST_MODE_52_val == 7f)
            {
                var ADJUST_Y_53 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var ADJUST_Y_54 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var ADJUST_Y_54_val = ADJUST_Y_54.GetFloat("VAL");
                var ADJUST_TEX_56 = _world.GetSynonymObject("ADJUST_TEX");
                var temp_57 = ADJUST_TEX_56.GetFloat("ALBEDO");
                ADJUST_Y_53.SetFloat("VAL", temp_57 * 10f);
            }
            var ADJUST_MODE_61 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_61_val = ADJUST_MODE_61.GetFloat("VAL");
            if (ADJUST_MODE_61_val == 8f)
            {
                var ADJUST_Y_63 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                ADJUST_Y_63.SetFloat("VAL", 0f);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SET_ADJX(IAcknexObject MY, IAcknexObject THERE)
        {
            var ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_1_val = ADJUST_MODE_1.GetFloat("VAL");
            if (ADJUST_MODE_1_val == 0f)
            {
                var ADJUST_X_2 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var ADJUST_X_2_val = ADJUST_X_2.GetFloat("VAL");
                var ADJUST_WALL_4 = _world.GetSynonymObject("ADJUST_WALL");
                ADJUST_WALL_4.SetFloat("OFFSET_X", ADJUST_X_2_val);
            }
            var ADJUST_MODE_6 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_6_val = ADJUST_MODE_6.GetFloat("VAL");
            if (ADJUST_MODE_6_val == 1f)
            {
                var ADJUST_X_7 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var ADJUST_X_7_val = ADJUST_X_7.GetFloat("VAL");
                var ADJUST_REG_9 = _world.GetSynonymObject("ADJUST_REG");
                ADJUST_REG_9.SetFloat("FLOOR_OFFS_X", ADJUST_X_7_val);
            }
            var ADJUST_MODE_11 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_11_val = ADJUST_MODE_11.GetFloat("VAL");
            if (ADJUST_MODE_11_val == 2f)
            {
                var ADJUST_X_12 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var ADJUST_X_12_val = ADJUST_X_12.GetFloat("VAL");
                var ADJUST_REG_14 = _world.GetSynonymObject("ADJUST_REG");
                ADJUST_REG_14.SetFloat("CEIL_OFFS_X", ADJUST_X_12_val);
            }
            var ADJUST_MODE_16 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_16_val = ADJUST_MODE_16.GetFloat("VAL");
            if (ADJUST_MODE_16_val == 3f)
            {
                var ADJUST_REG_18 = _world.GetSynonymObject("ADJUST_REG");
                var ADJUST_REG_20 = _world.GetSynonymObject("ADJUST_REG");
                var temp_21 = ADJUST_REG_20.GetFloat("FLOOR_HGT");
                var ADJUST_X_22 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var ADJUST_X_22_val = ADJUST_X_22.GetFloat("VAL");
                ADJUST_REG_18.SetFloat("FLOOR_HGT", ADJUST_X_22_val / 10f);
            }
            var ADJUST_MODE_26 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_26_val = ADJUST_MODE_26.GetFloat("VAL");
            if (ADJUST_MODE_26_val == 4f)
            {
                var ADJUST_X_27 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var ADJUST_X_27_val = ADJUST_X_27.GetFloat("VAL");
                var ADJUST_TEX_29 = _world.GetSynonymObject("ADJUST_TEX");
                ADJUST_TEX_29.SetFloat("POS_X", ADJUST_X_27_val);
            }
            var ADJUST_MODE_31 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_31_val = ADJUST_MODE_31.GetFloat("VAL");
            if (ADJUST_MODE_31_val != 5f)
            {
                goto skip_32;
            }
            var ADJUST_TEX_34 = _world.GetSynonymObject("ADJUST_TEX");
            var ADJUST_TEX_36 = _world.GetSynonymObject("ADJUST_TEX");
            var temp_37 = ADJUST_TEX_36.GetFloat("SCALE_X");
            var ADJUST_X_38 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            var ADJUST_X_38_val = ADJUST_X_38.GetFloat("VAL");
            ADJUST_TEX_34.SetFloat("SCALE_X", ADJUST_X_38_val / 10f);
            var ADJUST_TEX_41 = _world.GetSynonymObject("ADJUST_TEX");
            var ADJUST_WALL_43 = _world.GetSynonymObject("ADJUST_WALL");
            ADJUST_WALL_43.SetAcknexObjectAll("TEXTURE", ADJUST_TEX_41);
            skip_32:
            var ADJUST_MODE_45 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_45_val = ADJUST_MODE_45.GetFloat("VAL");
            if (ADJUST_MODE_45_val == 6f)
            {
                var ADJUST_X_46 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var ADJUST_X_46_val = ADJUST_X_46.GetFloat("VAL");
                var ADJUST_WALL_48 = _world.GetSynonymObject("ADJUST_WALL");
                ADJUST_WALL_48.SetFloat("OFFSET_X", ADJUST_X_46_val);
            }
            var ADJUST_MODE_50 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_50_val = ADJUST_MODE_50.GetFloat("VAL");
            if (ADJUST_MODE_50_val != 7f)
            {
                goto skip_51;
            }
            var ADJUST_TEX_53 = _world.GetSynonymObject("ADJUST_TEX");
            var ADJUST_TEX_55 = _world.GetSynonymObject("ADJUST_TEX");
            var temp_56 = ADJUST_TEX_55.GetFloat("AMBIENT");
            var ADJUST_X_57 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            var ADJUST_X_57_val = ADJUST_X_57.GetFloat("VAL");
            ADJUST_TEX_53.SetFloat("AMBIENT", ADJUST_X_57_val / 10f);
            var ADJUST_TEX_60 = _world.GetSynonymObject("ADJUST_TEX");
            var ADJUST_WALL_62 = _world.GetSynonymObject("ADJUST_WALL");
            ADJUST_WALL_62.SetAcknexObjectAll("TEXTURE", ADJUST_TEX_60);
            skip_51:
            var ADJUST_MODE_64 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_64_val = ADJUST_MODE_64.GetFloat("VAL");
            if (ADJUST_MODE_64_val == 8f)
            {
                var ADJUST_REG_66 = _world.GetSynonymObject("ADJUST_REG");
                var ADJUST_REG_68 = _world.GetSynonymObject("ADJUST_REG");
                var temp_69 = ADJUST_REG_68.GetFloat("AMBIENT");
                var ADJUST_X_70 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var ADJUST_X_70_val = ADJUST_X_70.GetFloat("VAL");
                ADJUST_REG_66.SetFloat("AMBIENT", ADJUST_X_70_val / 10f);
            }
            var RENDER_MODE_74 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_74.SetFloat("VAL", 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SET_ADJY(IAcknexObject MY, IAcknexObject THERE)
        {
            var ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_1_val = ADJUST_MODE_1.GetFloat("VAL");
            if (ADJUST_MODE_1_val == 0f)
            {
                var ADJUST_Y_2 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var ADJUST_Y_2_val = ADJUST_Y_2.GetFloat("VAL");
                var ADJUST_WALL_4 = _world.GetSynonymObject("ADJUST_WALL");
                ADJUST_WALL_4.SetFloat("OFFSET_Y", ADJUST_Y_2_val);
            }
            var ADJUST_MODE_6 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_6_val = ADJUST_MODE_6.GetFloat("VAL");
            if (ADJUST_MODE_6_val == 1f)
            {
                var ADJUST_Y_7 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var ADJUST_Y_7_val = ADJUST_Y_7.GetFloat("VAL");
                var ADJUST_REG_9 = _world.GetSynonymObject("ADJUST_REG");
                ADJUST_REG_9.SetFloat("FLOOR_OFFS_Y", ADJUST_Y_7_val);
            }
            var ADJUST_MODE_11 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_11_val = ADJUST_MODE_11.GetFloat("VAL");
            if (ADJUST_MODE_11_val == 2f)
            {
                var ADJUST_Y_12 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var ADJUST_Y_12_val = ADJUST_Y_12.GetFloat("VAL");
                var ADJUST_REG_14 = _world.GetSynonymObject("ADJUST_REG");
                ADJUST_REG_14.SetFloat("CEIL_OFFS_Y", ADJUST_Y_12_val);
            }
            var ADJUST_MODE_16 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_16_val = ADJUST_MODE_16.GetFloat("VAL");
            if (ADJUST_MODE_16_val == 3f)
            {
                var ADJUST_REG_18 = _world.GetSynonymObject("ADJUST_REG");
                var ADJUST_REG_20 = _world.GetSynonymObject("ADJUST_REG");
                var temp_21 = ADJUST_REG_20.GetFloat("CEIL_HGT");
                var ADJUST_Y_22 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var ADJUST_Y_22_val = ADJUST_Y_22.GetFloat("VAL");
                ADJUST_REG_18.SetFloat("CEIL_HGT", ADJUST_Y_22_val / 10f);
            }
            var ADJUST_MODE_26 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_26_val = ADJUST_MODE_26.GetFloat("VAL");
            if (ADJUST_MODE_26_val == 4f)
            {
                var ADJUST_Y_27 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var ADJUST_Y_27_val = ADJUST_Y_27.GetFloat("VAL");
                var ADJUST_TEX_29 = _world.GetSynonymObject("ADJUST_TEX");
                ADJUST_TEX_29.SetFloat("POS_Y", ADJUST_Y_27_val);
            }
            var ADJUST_MODE_31 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_31_val = ADJUST_MODE_31.GetFloat("VAL");
            if (ADJUST_MODE_31_val != 5f)
            {
                goto skip_32;
            }
            var ADJUST_TEX_34 = _world.GetSynonymObject("ADJUST_TEX");
            var ADJUST_TEX_36 = _world.GetSynonymObject("ADJUST_TEX");
            var temp_37 = ADJUST_TEX_36.GetFloat("SCALE_Y");
            var ADJUST_Y_38 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            var ADJUST_Y_38_val = ADJUST_Y_38.GetFloat("VAL");
            ADJUST_TEX_34.SetFloat("SCALE_Y", ADJUST_Y_38_val / 10f);
            var ADJUST_TEX_41 = _world.GetSynonymObject("ADJUST_TEX");
            var ADJUST_WALL_43 = _world.GetSynonymObject("ADJUST_WALL");
            ADJUST_WALL_43.SetAcknexObjectAll("TEXTURE", ADJUST_TEX_41);
            skip_32:
            var ADJUST_MODE_45 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_45_val = ADJUST_MODE_45.GetFloat("VAL");
            if (ADJUST_MODE_45_val == 6f)
            {
                var ADJUST_WALL_47 = _world.GetSynonymObject("ADJUST_WALL");
                var ADJUST_WALL_49 = _world.GetSynonymObject("ADJUST_WALL");
                var temp_50 = ADJUST_WALL_49.GetFloat("POSITION");
                var ADJUST_Y_51 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var ADJUST_Y_51_val = ADJUST_Y_51.GetFloat("VAL");
                ADJUST_WALL_47.SetFloat("POSITION", ADJUST_Y_51_val / 10f);
            }
            var ADJUST_MODE_55 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_55_val = ADJUST_MODE_55.GetFloat("VAL");
            if (ADJUST_MODE_55_val != 7f)
            {
                goto skip_56;
            }
            var ADJUST_TEX_58 = _world.GetSynonymObject("ADJUST_TEX");
            var ADJUST_TEX_60 = _world.GetSynonymObject("ADJUST_TEX");
            var temp_61 = ADJUST_TEX_60.GetFloat("ALBEDO");
            var ADJUST_Y_62 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            var ADJUST_Y_62_val = ADJUST_Y_62.GetFloat("VAL");
            ADJUST_TEX_58.SetFloat("ALBEDO", ADJUST_Y_62_val / 10f);
            var ADJUST_TEX_65 = _world.GetSynonymObject("ADJUST_TEX");
            var ADJUST_WALL_67 = _world.GetSynonymObject("ADJUST_WALL");
            ADJUST_WALL_67.SetAcknexObjectAll("TEXTURE", ADJUST_TEX_65);
            skip_56:
            var RENDER_MODE_69 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_69.SetFloat("VAL", 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator ADJUST_XPLUS(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = GET_ADJX(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var ADJUST_X_1 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            var ADJUST_X_1_val = ADJUST_X_1.GetFloat("VAL");
            var ADJUST_X_2 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            ADJUST_X_2.SetFloat("VAL", ADJUST_X_1_val + 1f);
            {
                var enumerator = SET_ADJX(MY, THERE);
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
                var endTime = startTime + TimeUtils.FramesToTime((int)8f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            AGAIN:
            var KEY_6_5 = _world.GetObject(ObjectType.Skill, "KEY_6");
            var KEY_6_5_val = KEY_6_5.GetFloat("VAL");
            if (KEY_6_5_val == 0f)
            {
                yield break;
            }
            {
                var enumerator = GET_ADJX(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var ADJUST_X_7 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            var ADJUST_X_7_val = ADJUST_X_7.GetFloat("VAL");
            var ADJUST_X_8 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            ADJUST_X_8.SetFloat("VAL", ADJUST_X_7_val + 1f);
            {
                var enumerator = SET_ADJX(MY, THERE);
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
                var endTime = startTime + TimeUtils.FramesToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            goto AGAIN;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator ADJUST_XMINUS(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = GET_ADJX(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var ADJUST_X_1 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            var ADJUST_X_1_val = ADJUST_X_1.GetFloat("VAL");
            var ADJUST_X_2 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            ADJUST_X_2.SetFloat("VAL", ADJUST_X_1_val + -1f);
            {
                var enumerator = SET_ADJX(MY, THERE);
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
                var endTime = startTime + TimeUtils.FramesToTime((int)8f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            AGAIN:
            var KEY_5_5 = _world.GetObject(ObjectType.Skill, "KEY_5");
            var KEY_5_5_val = KEY_5_5.GetFloat("VAL");
            if (KEY_5_5_val == 0f)
            {
                yield break;
            }
            {
                var enumerator = GET_ADJX(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var ADJUST_X_7 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            var ADJUST_X_7_val = ADJUST_X_7.GetFloat("VAL");
            var ADJUST_X_8 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            ADJUST_X_8.SetFloat("VAL", ADJUST_X_7_val + -1f);
            {
                var enumerator = SET_ADJX(MY, THERE);
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
                var endTime = startTime + TimeUtils.FramesToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            goto AGAIN;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator ADJUST_YPLUS(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = GET_ADJY(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var ADJUST_Y_1 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            var ADJUST_Y_1_val = ADJUST_Y_1.GetFloat("VAL");
            var ADJUST_Y_2 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            ADJUST_Y_2.SetFloat("VAL", ADJUST_Y_1_val + 1f);
            {
                var enumerator = SET_ADJY(MY, THERE);
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
                var endTime = startTime + TimeUtils.FramesToTime((int)8f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            AGAIN:
            var KEY_8_5 = _world.GetObject(ObjectType.Skill, "KEY_8");
            var KEY_8_5_val = KEY_8_5.GetFloat("VAL");
            if (KEY_8_5_val == 0f)
            {
                yield break;
            }
            {
                var enumerator = GET_ADJY(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var ADJUST_Y_7 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            var ADJUST_Y_7_val = ADJUST_Y_7.GetFloat("VAL");
            var ADJUST_Y_8 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            ADJUST_Y_8.SetFloat("VAL", ADJUST_Y_7_val + 1f);
            {
                var enumerator = SET_ADJY(MY, THERE);
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
                var endTime = startTime + TimeUtils.FramesToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            goto AGAIN;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator ADJUST_YMINUS(IAcknexObject MY, IAcknexObject THERE)
        {
            {
                var enumerator = GET_ADJY(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var ADJUST_Y_1 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            var ADJUST_Y_1_val = ADJUST_Y_1.GetFloat("VAL");
            var ADJUST_Y_2 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            ADJUST_Y_2.SetFloat("VAL", ADJUST_Y_1_val + -1f);
            {
                var enumerator = SET_ADJY(MY, THERE);
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
                var endTime = startTime + TimeUtils.FramesToTime((int)8f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            AGAIN:
            var KEY_7_5 = _world.GetObject(ObjectType.Skill, "KEY_7");
            var KEY_7_5_val = KEY_7_5.GetFloat("VAL");
            if (KEY_7_5_val == 0f)
            {
                yield break;
            }
            {
                var enumerator = GET_ADJY(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var ADJUST_Y_7 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            var ADJUST_Y_7_val = ADJUST_Y_7.GetFloat("VAL");
            var ADJUST_Y_8 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            ADJUST_Y_8.SetFloat("VAL", ADJUST_Y_7_val + -1f);
            {
                var enumerator = SET_ADJY(MY, THERE);
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
                var endTime = startTime + TimeUtils.FramesToTime((int)2f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            goto AGAIN;
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator SET_WMODE(IAcknexObject MY, IAcknexObject THERE)
        {
            var ADJUST_PANEL_1 = _world.AcknexObject.GetAcknexObject("ADJUST_PANEL");
            var temp_2 = ADJUST_PANEL_1.GetFloat("POS_Y");
            var ADJUST_TEXT_4 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            ADJUST_TEXT_4.SetFloat("POS_Y", temp_2);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_6 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_6_val = HIT_DIST_6.GetFloat("VAL");
            if (HIT_DIST_6_val == 0f)
            {
                yield break;
            }
            var ADJUST_PANEL_7 = _world.AcknexObject.GetAcknexObject("ADJUST_PANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.9", ADJUST_PANEL_7);
            var HIT_10 = _world.GetSynonymObject("HIT");
            _world.SetSynonymObject("ADJUST_WALL", HIT_10);
            var ADJUST_WALL_14 = _world.GetSynonymObject("ADJUST_WALL");
            var temp_15 = ADJUST_WALL_14.GetFloat("FENCE");
            if (temp_15 == 1f)
            {
                goto SET_POSMODE;
            }
            var ADJUST_MODE_17 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_17.SetFloat("VAL", 0f);
            var WALL_MODE_18 = _world.AcknexObject.GetAcknexObject("WALL_MODE");
            var ADJUST_TEXT_20 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            ADJUST_TEXT_20.SetAcknexObject("STRING", WALL_MODE_18);
            {
                var enumerator = GET_ADJX(MY, THERE);
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
                var enumerator = GET_ADJY(MY, THERE);
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield break;
            SET_POSMODE:
            var ADJUST_MODE_22 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_22.SetFloat("VAL", 6f);
            var POS_MODE_23 = _world.AcknexObject.GetAcknexObject("POS_MODE");
            var ADJUST_TEXT_25 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            ADJUST_TEXT_25.SetAcknexObject("STRING", POS_MODE_23);
            {
                var enumerator = GET_ADJX(MY, THERE);
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
                var enumerator = GET_ADJY(MY, THERE);
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
        public IEnumerator SET_FMODE(IAcknexObject MY, IAcknexObject THERE)
        {
            var ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_1.SetFloat("VAL", 1f);
            var ADJUST_PANEL_3 = _world.AcknexObject.GetAcknexObject("ADJUST_PANEL");
            var temp_4 = ADJUST_PANEL_3.GetFloat("POS_Y");
            var ADJUST_TEXT_6 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            ADJUST_TEXT_6.SetFloat("POS_Y", temp_4);
            var FLO_MODE_7 = _world.AcknexObject.GetAcknexObject("FLO_MODE");
            var ADJUST_TEXT_9 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            ADJUST_TEXT_9.SetAcknexObject("STRING", FLO_MODE_7);
            var HERE_10 = _world.GetSynonymObject("HERE");
            _world.SetSynonymObject("ADJUST_REG", HERE_10);
            var ADJUST_PANEL_12 = _world.AcknexObject.GetAcknexObject("ADJUST_PANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.9", ADJUST_PANEL_12);
            {
                var enumerator = GET_ADJX(MY, THERE);
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
                var enumerator = GET_ADJY(MY, THERE);
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
        public IEnumerator SET_CMODE(IAcknexObject MY, IAcknexObject THERE)
        {
            var ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_1.SetFloat("VAL", 2f);
            var ADJUST_PANEL_3 = _world.AcknexObject.GetAcknexObject("ADJUST_PANEL");
            var temp_4 = ADJUST_PANEL_3.GetFloat("POS_Y");
            var ADJUST_TEXT_6 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            ADJUST_TEXT_6.SetFloat("POS_Y", temp_4);
            var CEIL_MODE_7 = _world.AcknexObject.GetAcknexObject("CEIL_MODE");
            var ADJUST_TEXT_9 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            ADJUST_TEXT_9.SetAcknexObject("STRING", CEIL_MODE_7);
            var HERE_10 = _world.GetSynonymObject("HERE");
            _world.SetSynonymObject("ADJUST_REG", HERE_10);
            var ADJUST_PANEL_12 = _world.AcknexObject.GetAcknexObject("ADJUST_PANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.9", ADJUST_PANEL_12);
            {
                var enumerator = GET_ADJX(MY, THERE);
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
                var enumerator = GET_ADJY(MY, THERE);
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
        public IEnumerator SET_RMODE(IAcknexObject MY, IAcknexObject THERE)
        {
            var ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_1.SetFloat("VAL", 3f);
            var ADJUST_PANEL_3 = _world.AcknexObject.GetAcknexObject("ADJUST_PANEL");
            var temp_4 = ADJUST_PANEL_3.GetFloat("POS_Y");
            var ADJUST_TEXT_6 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            ADJUST_TEXT_6.SetFloat("POS_Y", temp_4);
            var REGIO_MODE_7 = _world.AcknexObject.GetAcknexObject("REGIO_MODE");
            var ADJUST_TEXT_9 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            ADJUST_TEXT_9.SetAcknexObject("STRING", REGIO_MODE_7);
            var HERE_10 = _world.GetSynonymObject("HERE");
            _world.SetSynonymObject("ADJUST_REG", HERE_10);
            var ADJUST_PANEL_12 = _world.AcknexObject.GetAcknexObject("ADJUST_PANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.9", ADJUST_PANEL_12);
            {
                var enumerator = GET_ADJX(MY, THERE);
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
                var enumerator = GET_ADJY(MY, THERE);
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
        public IEnumerator SET_VMODE(IAcknexObject MY, IAcknexObject THERE)
        {
            var ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_1.SetFloat("VAL", 8f);
            var ADJUST_PANEL_3 = _world.AcknexObject.GetAcknexObject("ADJUST_PANEL");
            var temp_4 = ADJUST_PANEL_3.GetFloat("POS_Y");
            var ADJUST_TEXT_6 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            ADJUST_TEXT_6.SetFloat("POS_Y", temp_4);
            var REGAMB_MODE_7 = _world.AcknexObject.GetAcknexObject("REGAMB_MODE");
            var ADJUST_TEXT_9 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            ADJUST_TEXT_9.SetAcknexObject("STRING", REGAMB_MODE_7);
            var HERE_10 = _world.GetSynonymObject("HERE");
            _world.SetSynonymObject("ADJUST_REG", HERE_10);
            var ADJUST_PANEL_12 = _world.AcknexObject.GetAcknexObject("ADJUST_PANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.9", ADJUST_PANEL_12);
            {
                var enumerator = GET_ADJX(MY, THERE);
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
                var enumerator = GET_ADJY(MY, THERE);
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
        public IEnumerator SET_AMODE(IAcknexObject MY, IAcknexObject THERE)
        {
            var ADJUST_PANEL_1 = _world.AcknexObject.GetAcknexObject("ADJUST_PANEL");
            var temp_2 = ADJUST_PANEL_1.GetFloat("POS_Y");
            var ADJUST_TEXT_4 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            ADJUST_TEXT_4.SetFloat("POS_Y", temp_2);
            var ADJUST_MODE_6 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var ADJUST_MODE_6_val = ADJUST_MODE_6.GetFloat("VAL");
            if (ADJUST_MODE_6_val == 4f)
            {
                goto NEXT_TEX;
            }
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_8 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_8_val = HIT_DIST_8.GetFloat("VAL");
            if (HIT_DIST_8_val == 0f)
            {
                yield break;
            }
            var ADJUST_MODE_10 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_10.SetFloat("VAL", 4f);
            var ATTACH_MODE_11 = _world.AcknexObject.GetAcknexObject("ATTACH_MODE");
            var ADJUST_TEXT_13 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            ADJUST_TEXT_13.SetAcknexObject("STRING", ATTACH_MODE_11);
            var ADJUST_PANEL_14 = _world.AcknexObject.GetAcknexObject("ADJUST_PANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.9", ADJUST_PANEL_14);
            var HIT_18 = _world.GetSynonymObject("HIT");
            var temp_19 = HIT_18?.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("ADJUST_TEX", temp_19);
            NEXT_TEX:
            var ADJUST_TEX_23 = _world.GetSynonymObject("ADJUST_TEX");
            var temp_24 = ADJUST_TEX_23?.GetAcknexObject("ATTACH");
            if (temp_24 != null)
            {
                goto SET_TEX;
            }
            var HIT_26 = _world.GetSynonymObject("HIT");
            var temp_27 = HIT_26?.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("ADJUST_TEX", temp_27);
            var ADJUST_TEX_31 = _world.GetSynonymObject("ADJUST_TEX");
            var temp_32 = ADJUST_TEX_31?.GetAcknexObject("ATTACH");
            if (temp_32 == null)
            {
                yield break;
            }
            SET_TEX:
            var ADJUST_TEX_34 = _world.GetSynonymObject("ADJUST_TEX");
            var temp_35 = ADJUST_TEX_34?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("ADJUST_TEX", temp_35);
            {
                var enumerator = GET_ADJX(MY, THERE);
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
                var enumerator = GET_ADJY(MY, THERE);
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
        public IEnumerator SET_SMODE(IAcknexObject MY, IAcknexObject THERE)
        {
            var ADJUST_PANEL_1 = _world.AcknexObject.GetAcknexObject("ADJUST_PANEL");
            var temp_2 = ADJUST_PANEL_1.GetFloat("POS_Y");
            var ADJUST_TEXT_4 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            ADJUST_TEXT_4.SetFloat("POS_Y", temp_2);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_6 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_6_val = HIT_DIST_6.GetFloat("VAL");
            if (HIT_DIST_6_val == 0f)
            {
                yield break;
            }
            var ADJUST_PANEL_7 = _world.AcknexObject.GetAcknexObject("ADJUST_PANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.9", ADJUST_PANEL_7);
            var HIT_11 = _world.GetSynonymObject("HIT");
            var temp_12 = HIT_11?.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("ADJUST_TEX", temp_12);
            var HIT_14 = _world.GetSynonymObject("HIT");
            _world.SetSynonymObject("ADJUST_WALL", HIT_14);
            var ADJUST_MODE_17 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_17.SetFloat("VAL", 5f);
            var SCALE_MODE_18 = _world.AcknexObject.GetAcknexObject("SCALE_MODE");
            var ADJUST_TEXT_20 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            ADJUST_TEXT_20.SetAcknexObject("STRING", SCALE_MODE_18);
            {
                var enumerator = GET_ADJX(MY, THERE);
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
                var enumerator = GET_ADJY(MY, THERE);
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
        public IEnumerator SET_BMODE(IAcknexObject MY, IAcknexObject THERE)
        {
            var ADJUST_PANEL_1 = _world.AcknexObject.GetAcknexObject("ADJUST_PANEL");
            var temp_2 = ADJUST_PANEL_1.GetFloat("POS_Y");
            var ADJUST_TEXT_4 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            ADJUST_TEXT_4.SetFloat("POS_Y", temp_2);
            _world.Shoot(null, MY, THERE);
            var HIT_DIST_6 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_6_val = HIT_DIST_6.GetFloat("VAL");
            if (HIT_DIST_6_val == 0f)
            {
                yield break;
            }
            var ADJUST_PANEL_7 = _world.AcknexObject.GetAcknexObject("ADJUST_PANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.9", ADJUST_PANEL_7);
            var HIT_11 = _world.GetSynonymObject("HIT");
            var temp_12 = HIT_11?.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("ADJUST_TEX", temp_12);
            var HIT_14 = _world.GetSynonymObject("HIT");
            _world.SetSynonymObject("ADJUST_WALL", HIT_14);
            var ADJUST_MODE_17 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_17.SetFloat("VAL", 7f);
            var AMBIENT_MODE_18 = _world.AcknexObject.GetAcknexObject("AMBIENT_MODE");
            var ADJUST_TEXT_20 = _world.AcknexObject.GetAcknexObject("ADJUST_TEXT");
            ADJUST_TEXT_20.SetAcknexObject("STRING", AMBIENT_MODE_18);
            {
                var enumerator = GET_ADJX(MY, THERE);
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
                var enumerator = GET_ADJY(MY, THERE);
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
        public IEnumerator FADE_IN(IAcknexObject MY, IAcknexObject THERE)
        {
            var FADE_1 = _world.GetObject(ObjectType.Skill, "FADE");
            FADE_1.SetFloat("VAL", 0f);
            LOOP:
            var FADE_3 = _world.GetObject(ObjectType.Skill, "FADE");
            var FADE_3_val = FADE_3.GetFloat("VAL");
            var FADE_4 = _world.GetObject(ObjectType.Skill, "FADE");
            FADE_4.SetFloat("VAL", FADE_3_val + 0.1f);
            var PAL1_5 = _world.AcknexObject.GetAcknexObject("PAL1");
            var FADE_6 = _world.GetObject(ObjectType.Skill, "FADE");
            var FADE_6_val = FADE_6.GetFloat("VAL");
            _world.FadePal(PAL1_5, FADE_6_val);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var FADE_9 = _world.GetObject(ObjectType.Skill, "FADE");
            var FADE_9_val = FADE_9.GetFloat("VAL");
            if (FADE_9_val < 1f)
            {
                goto LOOP;
            }
            var PAL1_10 = _world.AcknexObject.GetAcknexObject("PAL1");
            _world.FadePal(PAL1_10, 1f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator FADE_OUT(IAcknexObject MY, IAcknexObject THERE)
        {
            var FADE_1 = _world.GetObject(ObjectType.Skill, "FADE");
            FADE_1.SetFloat("VAL", 1f);
            LOOP:
            var FADE_3 = _world.GetObject(ObjectType.Skill, "FADE");
            var FADE_3_val = FADE_3.GetFloat("VAL");
            var FADE_4 = _world.GetObject(ObjectType.Skill, "FADE");
            FADE_4.SetFloat("VAL", FADE_3_val + 0.1f);
            var BLACK_PAL_5 = _world.AcknexObject.GetAcknexObject("BLACK_PAL");
            var FADE_6 = _world.GetObject(ObjectType.Skill, "FADE");
            var FADE_6_val = FADE_6.GetFloat("VAL");
            _world.FadePal(BLACK_PAL_5, FADE_6_val);
            {
                var startTime = Time.time;
                var endTime = startTime + TimeUtils.TicksToTime((int)1f);
                while (Time.time < endTime)
                {
                    yield return _waitForEndOfFrame;
                }
            }
            var FADE_9 = _world.GetObject(ObjectType.Skill, "FADE");
            var FADE_9_val = FADE_9.GetFloat("VAL");
            if (FADE_9_val < 1f)
            {
                goto LOOP;
            }
            var BLACK_PAL_10 = _world.AcknexObject.GetAcknexObject("BLACK_PAL");
            _world.FadePal(BLACK_PAL_10, 1f);
            Application.Quit();
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator VRDEMO_START(IAcknexObject MY, IAcknexObject THERE)
        {
            //Unknown Property Type: World.DEMOSONG
            //_world.PlaySong(temp_1, 1f);
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
            var MY_SIZE_4 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            MY_SIZE_4.SetFloat("VAL", 5f);
            var DIVE_UP_5 = _world.AcknexObject.GetAcknexObject("DIVE_UP");
            _world.SetSynonymObject("SET_OVERWATER", DIVE_UP_5);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator ENTER_WATER(IAcknexObject MY, IAcknexObject THERE)
        {
            var WASSERNORM_0 = _world.AcknexObject.GetAcknexObject("WASSERNORM");
            _world.PlaySound(WASSERNORM_0, 0.8f, null);
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
            var AUFTAUCH_0 = _world.AcknexObject.GetAcknexObject("AUFTAUCH");
            _world.PlaySound(AUFTAUCH_0, 0.8f, null);
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
        public IEnumerator PULSUP(IAcknexObject MY, IAcknexObject THERE)
        {
            var SPHERE_2 = _world.AcknexObject.GetAcknexObject("SPHERE");
            var temp_3 = SPHERE_2.GetFloat("AMBIENT");
            var SPHERE_5 = _world.AcknexObject.GetAcknexObject("SPHERE");
            SPHERE_5.SetFloat("AMBIENT", temp_3 + 0.1f);
            var SPHERE_8 = _world.AcknexObject.GetAcknexObject("SPHERE");
            var temp_9 = SPHERE_8.GetFloat("AMBIENT");
            if (temp_9 > 1f)
            {
                var PULSDOWN_10 = _world.AcknexObject.GetAcknexObject("PULSDOWN");
                var SPHERE_12 = _world.AcknexObject.GetAcknexObject("SPHERE");
                SPHERE_12.SetAcknexObject("EACH_TICK", PULSDOWN_10);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator PULSDOWN(IAcknexObject MY, IAcknexObject THERE)
        {
            var SPHERE_2 = _world.AcknexObject.GetAcknexObject("SPHERE");
            var temp_3 = SPHERE_2.GetFloat("AMBIENT");
            var SPHERE_5 = _world.AcknexObject.GetAcknexObject("SPHERE");
            SPHERE_5.SetFloat("AMBIENT", temp_3 + -0.1f);
            var SPHERE_8 = _world.AcknexObject.GetAcknexObject("SPHERE");
            var temp_9 = SPHERE_8.GetFloat("AMBIENT");
            if (temp_9 < 0f)
            {
                var PULSUP_10 = _world.AcknexObject.GetAcknexObject("PULSUP");
                var SPHERE_12 = _world.AcknexObject.GetAcknexObject("SPHERE");
                SPHERE_12.SetAcknexObject("EACH_TICK", PULSUP_10);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator FALLTUER(IAcknexObject MY, IAcknexObject THERE)
        {
            var LIFT_DOWN_0 = _world.AcknexObject.GetAcknexObject("LIFT_DOWN");
            var RUMPELKAMMERSOCKEL_2 = _world.AcknexObject.GetAcknexObject("RUMPELKAMMERSOCKEL");
            RUMPELKAMMERSOCKEL_2.SetAcknexObject("EACH_TICK", LIFT_DOWN_0);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator ARSCHTRITT(IAcknexObject MY, IAcknexObject THERE)
        {
            var LIFT_UP_0 = _world.AcknexObject.GetAcknexObject("LIFT_UP");
            var RUMPELKAMMERSOCKEL_2 = _world.AcknexObject.GetAcknexObject("RUMPELKAMMERSOCKEL");
            RUMPELKAMMERSOCKEL_2.SetAcknexObject("EACH_TICK", LIFT_UP_0);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator LIFT_DOWN(IAcknexObject MY, IAcknexObject THERE)
        {
            var RUMPELKAMMERSOCKEL_2 = _world.AcknexObject.GetAcknexObject("RUMPELKAMMERSOCKEL");
            var temp_3 = RUMPELKAMMERSOCKEL_2.GetFloat("FLOOR_HGT");
            var RUMPELKAMMERSOCKEL_5 = _world.AcknexObject.GetAcknexObject("RUMPELKAMMERSOCKEL");
            RUMPELKAMMERSOCKEL_5.SetFloat("FLOOR_HGT", temp_3 + -0.3f);
            var STONELIFT_6 = _world.AcknexObject.GetAcknexObject("STONELIFT");
            _world.PlaySound(STONELIFT_6, 0.3f, null);
            var PLAYER_Z_9 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_9_val = PLAYER_Z_9.GetFloat("VAL");
            var PLAYER_Z_10 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            PLAYER_Z_10.SetFloat("VAL", PLAYER_Z_9_val + -0.3f);
            var RENDER_MODE_12 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_12.SetFloat("VAL", 1f);
            var RUMPELKAMMERSOCKEL_15 = _world.AcknexObject.GetAcknexObject("RUMPELKAMMERSOCKEL");
            var temp_16 = RUMPELKAMMERSOCKEL_15.GetFloat("FLOOR_HGT");
            if (temp_16 > 0f)
            {
                yield break;
            }
            var RUMPELKAMMERSOCKEL_19 = _world.AcknexObject.GetAcknexObject("RUMPELKAMMERSOCKEL");
            RUMPELKAMMERSOCKEL_19.SetFloat("FLOOR_HGT", 0f);
            var RUMPELKAMMERSOCKEL_22 = _world.AcknexObject.GetAcknexObject("RUMPELKAMMERSOCKEL");
            RUMPELKAMMERSOCKEL_22.SetAcknexObject("EACH_TICK", null);
            var ARSCHTRITT_23 = _world.AcknexObject.GetAcknexObject("ARSCHTRITT");
            var RUMPELKAMMERSOCKEL_25 = _world.AcknexObject.GetAcknexObject("RUMPELKAMMERSOCKEL");
            RUMPELKAMMERSOCKEL_25.SetAcknexObject("IF_ENTER", ARSCHTRITT_23);
            var DUNKELGANGSPERRE_28 = _world.AcknexObject.GetAcknexObject("DUNKELGANGSPERRE");
            DUNKELGANGSPERRE_28.SetFloat("CEIL_HGT", 6f);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator LIFT_UP(IAcknexObject MY, IAcknexObject THERE)
        {
            var RUMPELKAMMERSOCKEL_2 = _world.AcknexObject.GetAcknexObject("RUMPELKAMMERSOCKEL");
            var temp_3 = RUMPELKAMMERSOCKEL_2.GetFloat("FLOOR_HGT");
            var RUMPELKAMMERSOCKEL_5 = _world.AcknexObject.GetAcknexObject("RUMPELKAMMERSOCKEL");
            RUMPELKAMMERSOCKEL_5.SetFloat("FLOOR_HGT", temp_3 + 0.3f);
            var PLAYER_Z_7 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_7_val = PLAYER_Z_7.GetFloat("VAL");
            var PLAYER_Z_8 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            PLAYER_Z_8.SetFloat("VAL", PLAYER_Z_7_val + 0.3f);
            var RENDER_MODE_10 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_10.SetFloat("VAL", 1f);
            var STONELIFT_11 = _world.AcknexObject.GetAcknexObject("STONELIFT");
            _world.PlaySound(STONELIFT_11, 0.3f, null);
            var RUMPELKAMMERSOCKEL_15 = _world.AcknexObject.GetAcknexObject("RUMPELKAMMERSOCKEL");
            var temp_16 = RUMPELKAMMERSOCKEL_15.GetFloat("FLOOR_HGT");
            if (temp_16 < 15.5f)
            {
                yield break;
            }
            var RUMPELKAMMERSOCKEL_19 = _world.AcknexObject.GetAcknexObject("RUMPELKAMMERSOCKEL");
            RUMPELKAMMERSOCKEL_19.SetFloat("FLOOR_HGT", 15.5f);
            var RUMPELKAMMERSOCKEL_22 = _world.AcknexObject.GetAcknexObject("RUMPELKAMMERSOCKEL");
            RUMPELKAMMERSOCKEL_22.SetAcknexObject("EACH_TICK", null);
            var FALLTUER_23 = _world.AcknexObject.GetAcknexObject("FALLTUER");
            var RUMPELKAMMERSOCKEL_25 = _world.AcknexObject.GetAcknexObject("RUMPELKAMMERSOCKEL");
            RUMPELKAMMERSOCKEL_25.SetAcknexObject("IF_ENTER", FALLTUER_23);
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator CHECK_OPEN(IAcknexObject MY, IAcknexObject THERE)
        {
            var SECRET_DOOR_2 = _world.AcknexObject.GetAcknexObject("SECRET_DOOR");
            var temp_3 = SECRET_DOOR_2.GetFloat("CEIL_HGT");
            if (temp_3 < 8f)
            {
                var OPENDOOR_4 = _world.AcknexObject.GetAcknexObject("OPENDOOR");
                _world.AcknexObject.SetAcknexObject("EACH_TICK.10", OPENDOOR_4);
            }
            var SECRET_DOOR_9 = _world.AcknexObject.GetAcknexObject("SECRET_DOOR");
            var temp_10 = SECRET_DOOR_9.GetFloat("CEIL_HGT");
            if (temp_10 < 5.1f)
            {
                var STONEDOOR_11 = _world.AcknexObject.GetAcknexObject("STONEDOOR");
                _world.PlaySound(STONEDOOR_11, 0.7f, null);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator OPENDOOR(IAcknexObject MY, IAcknexObject THERE)
        {
            var SECRET_DOOR_2 = _world.AcknexObject.GetAcknexObject("SECRET_DOOR");
            var temp_3 = SECRET_DOOR_2.GetFloat("CEIL_HGT");
            var SECRET_DOOR_5 = _world.AcknexObject.GetAcknexObject("SECRET_DOOR");
            SECRET_DOOR_5.SetFloat("CEIL_HGT", temp_3 + 0.3f);
            var RENDER_MODE_7 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_7.SetFloat("VAL", 1f);
            var SECRET_DOOR_10 = _world.AcknexObject.GetAcknexObject("SECRET_DOOR");
            var temp_11 = SECRET_DOOR_10.GetFloat("CEIL_HGT");
            if (temp_11 > 16f)
            {
                _world.AcknexObject.SetAcknexObject("EACH_TICK.10", null);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator IST_OPEN(IAcknexObject MY, IAcknexObject THERE)
        {
            var GEHEIMTUER_2 = _world.AcknexObject.GetAcknexObject("GEHEIMTUER");
            var temp_3 = GEHEIMTUER_2.GetFloat("CEIL_HGT");
            if (temp_3 < 8f)
            {
                var AUFGEH_4 = _world.AcknexObject.GetAcknexObject("AUFGEH");
                _world.AcknexObject.SetAcknexObject("EACH_TICK.11", AUFGEH_4);
            }
            var GEHEIMTUER_9 = _world.AcknexObject.GetAcknexObject("GEHEIMTUER");
            var temp_10 = GEHEIMTUER_9.GetFloat("CEIL_HGT");
            if (temp_10 < 2.7f)
            {
                var STONEDOOR_11 = _world.AcknexObject.GetAcknexObject("STONEDOOR");
                _world.PlaySound(STONEDOOR_11, 0.5f, null);
            }
            //Unknown keyword: 
            yield break;
        }
        public IEnumerator AUFGEH(IAcknexObject MY, IAcknexObject THERE)
        {
            var GEHEIMTUER_2 = _world.AcknexObject.GetAcknexObject("GEHEIMTUER");
            var temp_3 = GEHEIMTUER_2.GetFloat("CEIL_HGT");
            var GEHEIMTUER_5 = _world.AcknexObject.GetAcknexObject("GEHEIMTUER");
            GEHEIMTUER_5.SetFloat("CEIL_HGT", temp_3 + 0.3f);
            var RENDER_MODE_7 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_7.SetFloat("VAL", 1f);
            var GEHEIMTUER_10 = _world.AcknexObject.GetAcknexObject("GEHEIMTUER");
            var temp_11 = GEHEIMTUER_10.GetFloat("CEIL_HGT");
            if (temp_11 > 12f)
            {
                _world.AcknexObject.SetAcknexObject("EACH_TICK.11", null);
            }
            //Unknown keyword: 
            yield break;
        }
    }
}
