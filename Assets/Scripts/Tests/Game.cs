using Acknex.Interfaces;
using System.Collections;
using UnityEngine;
namespace Tests
{
    public class Game
    {
        private IAcknexWorld _world;
        public void SetWorld(IAcknexWorld world)
        {
            _world = world;
        }
        public IEnumerator ADJUST_XMINUS()
        {
            yield return GET_ADJX();
            var ADJUST_X_1 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            var temp_2 = ADJUST_X_1.GetFloat("VAL");
            var ADJUST_X_3 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            ADJUST_X_3.SetFloat("VAL", temp_2 + -1f);
            yield return SET_ADJX();
            yield return new WaitForTicks(8f);
            AGAIN:
            var KEY_5_6 = _world.GetObject(ObjectType.Skill, "KEY_5");
            var temp_7 = KEY_5_6.GetFloat("VAL");
            if (temp_7 == 0f)
            {
                yield break;
            }
            yield return GET_ADJX();
            var ADJUST_X_9 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            var temp_10 = ADJUST_X_9.GetFloat("VAL");
            var ADJUST_X_11 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            ADJUST_X_11.SetFloat("VAL", temp_10 + -1f);
            yield return SET_ADJX();
            yield return new WaitForTicks(2f);
            goto AGAIN;
            yield break;
        }
        public IEnumerator ADJUST_XPLUS()
        {
            yield return GET_ADJX();
            var ADJUST_X_1 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            var temp_2 = ADJUST_X_1.GetFloat("VAL");
            var ADJUST_X_3 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            ADJUST_X_3.SetFloat("VAL", temp_2 + 1f);
            yield return SET_ADJX();
            yield return new WaitForTicks(8f);
            AGAIN:
            var KEY_6_6 = _world.GetObject(ObjectType.Skill, "KEY_6");
            var temp_7 = KEY_6_6.GetFloat("VAL");
            if (temp_7 == 0f)
            {
                yield break;
            }
            yield return GET_ADJX();
            var ADJUST_X_9 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            var temp_10 = ADJUST_X_9.GetFloat("VAL");
            var ADJUST_X_11 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            ADJUST_X_11.SetFloat("VAL", temp_10 + 1f);
            yield return SET_ADJX();
            yield return new WaitForTicks(2f);
            goto AGAIN;
            yield break;
        }
        public IEnumerator ADJUST_YMINUS()
        {
            yield return GET_ADJY();
            var ADJUST_Y_1 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            var temp_2 = ADJUST_Y_1.GetFloat("VAL");
            var ADJUST_Y_3 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            ADJUST_Y_3.SetFloat("VAL", temp_2 + -1f);
            yield return SET_ADJY();
            yield return new WaitForTicks(8f);
            AGAIN:
            var KEY_7_6 = _world.GetObject(ObjectType.Skill, "KEY_7");
            var temp_7 = KEY_7_6.GetFloat("VAL");
            if (temp_7 == 0f)
            {
                yield break;
            }
            yield return GET_ADJY();
            var ADJUST_Y_9 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            var temp_10 = ADJUST_Y_9.GetFloat("VAL");
            var ADJUST_Y_11 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            ADJUST_Y_11.SetFloat("VAL", temp_10 + -1f);
            yield return SET_ADJY();
            yield return new WaitForTicks(2f);
            goto AGAIN;
            yield break;
        }
        public IEnumerator ADJUST_YPLUS()
        {
            yield return GET_ADJY();
            var ADJUST_Y_1 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            var temp_2 = ADJUST_Y_1.GetFloat("VAL");
            var ADJUST_Y_3 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            ADJUST_Y_3.SetFloat("VAL", temp_2 + 1f);
            yield return SET_ADJY();
            yield return new WaitForTicks(8f);
            AGAIN:
            var KEY_8_6 = _world.GetObject(ObjectType.Skill, "KEY_8");
            var temp_7 = KEY_8_6.GetFloat("VAL");
            if (temp_7 == 0f)
            {
                yield break;
            }
            yield return GET_ADJY();
            var ADJUST_Y_9 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            var temp_10 = ADJUST_Y_9.GetFloat("VAL");
            var ADJUST_Y_11 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            ADJUST_Y_11.SetFloat("VAL", temp_10 + 1f);
            yield return SET_ADJY();
            yield return new WaitForTicks(2f);
            goto AGAIN;
            yield break;
        }
        public IEnumerator ARSCHTRITT()
        {
            var LIFT_UP_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LIFT_UP");
            var RUMPELKAMMERSOCKEL_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            RUMPELKAMMERSOCKEL_2.SetString("EACH_TICK", LIFT_UP_0.GetString("NAME"));
            yield break;
        }
        public IEnumerator AUFGEH()
        {
            var GEHEIMTUER_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"GEHEIMTUER");
            var temp_3 = GEHEIMTUER_2.GetFloat("CEIL_HGT");
            var GEHEIMTUER_5 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"GEHEIMTUER");
            GEHEIMTUER_5.SetFloat("CEIL_HGT", temp_3 + 0.3f);
            var RENDER_MODE_7 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_7.SetFloat("VAL", 1f);
            var GEHEIMTUER_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"GEHEIMTUER");
            var temp_11 = GEHEIMTUER_10.GetFloat("CEIL_HGT");
            if (temp_11 > 12f)
            {
                _world.AcknexObject.SetString("EACH_TICK.11", null);
            }
            yield break;
        }
        public IEnumerator CHECK_OPEN()
        {
            var SECRET_DOOR_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"SECRET_DOOR");
            var temp_3 = SECRET_DOOR_2.GetFloat("CEIL_HGT");
            if (temp_3 < 8f)
            {
                var OPENDOOR_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"OPENDOOR");
                _world.AcknexObject.SetString("EACH_TICK.10", OPENDOOR_4.GetString("NAME"));
            }
            var SECRET_DOOR_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"SECRET_DOOR");
            var temp_10 = SECRET_DOOR_9.GetFloat("CEIL_HGT");
            if (temp_10 < 5.1f)
            {
                //Unknown keyword: PLAY_SOUND
            }
            yield break;
        }
        public IEnumerator CLEAR_MENU()
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
            var MENU1_TXT_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU1_TXT");
            MENU1_TXT_14.SetAcknexObject("STRING", EMPTY_12);
            var EMPTY_15 = _world.AcknexObject.GetAcknexObject("EMPTY");
            var MENU2_TXT_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU2_TXT");
            MENU2_TXT_17.SetAcknexObject("STRING", EMPTY_15);
            var EMPTY_18 = _world.AcknexObject.GetAcknexObject("EMPTY");
            var MENU3_TXT_20 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU3_TXT");
            MENU3_TXT_20.SetAcknexObject("STRING", EMPTY_18);
            var EMPTY_21 = _world.AcknexObject.GetAcknexObject("EMPTY");
            var MENU4_TXT_23 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU4_TXT");
            MENU4_TXT_23.SetAcknexObject("STRING", EMPTY_21);
            var EMPTY_24 = _world.AcknexObject.GetAcknexObject("EMPTY");
            var MENU5_TXT_26 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU5_TXT");
            MENU5_TXT_26.SetAcknexObject("STRING", EMPTY_24);
            var EMPTY_27 = _world.AcknexObject.GetAcknexObject("EMPTY");
            var MENU6_TXT_29 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU6_TXT");
            MENU6_TXT_29.SetAcknexObject("STRING", EMPTY_27);
            _world.AcknexObject.SetAcknexObject("MESSAGES.10", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.11", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.12", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.13", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.15", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", null);
            var MENU_POS_53 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            MENU_POS_53.SetFloat("MIN", 0f);
            var MENU_POS_55 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            MENU_POS_55.SetFloat("VAL", 0f);
            var MAIN_MENU_56 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MAIN_MENU");
            _world.AcknexObject.SetString("IF_ESC", MAIN_MENU_56.GetString("NAME"));
            _world.AcknexObject.SetString("IF_CUU", null);
            _world.AcknexObject.SetString("IF_CUD", null);
            _world.AcknexObject.SetString("IF_ENTER", null);
            var MOVE_MODE_65 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_65.SetFloat("VAL", 1f);
            yield break;
        }
        public IEnumerator CLEAR_YESNO()
        {
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", null);
            var MOVE_MODE_4 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_4.SetFloat("VAL", 1f);
            _world.AcknexObject.SetString("IF_J", null);
            _world.AcknexObject.SetString("IF_Y", null);
            _world.AcknexObject.SetString("IF_Z", null);
            _world.AcknexObject.SetString("IF_N", null);
            var MAIN_MENU_13 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MAIN_MENU");
            _world.AcknexObject.SetString("IF_ESC", MAIN_MENU_13.GetString("NAME"));
            yield break;
        }
        public IEnumerator DECREASE_VOL()
        {
            var SOUND_VOL_1 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            var temp_2 = SOUND_VOL_1.GetFloat("VAL");
            var SOUND_VOL_3 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            SOUND_VOL_3.SetFloat("VAL", temp_2 + -0.2f);
            var MUSIC_VOL_5 = _world.GetObject(ObjectType.Skill, "MUSIC_VOL");
            var temp_6 = MUSIC_VOL_5.GetFloat("VAL");
            var MUSIC_VOL_7 = _world.GetObject(ObjectType.Skill, "MUSIC_VOL");
            MUSIC_VOL_7.SetFloat("VAL", temp_6 + -0.1f);
            var VOL_MINUS_8 = _world.AcknexObject.GetAcknexObject("VOL_MINUS");
            var SCREEN_TXT_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            SCREEN_TXT_10.SetAcknexObject("STRING", VOL_MINUS_8);
            yield return SHOW_MESSAGE();
            yield break;
            yield break;
        }
        public IEnumerator DIFF_MENU()
        {
            yield return CLEAR_MENU();
            var DIFFICULT1_STR_0 = _world.AcknexObject.GetAcknexObject("DIFFICULT1_STR");
            _world.SetSynonymObject("MENU1_STR", DIFFICULT1_STR_0);
            var DIFFICULT2_STR_2 = _world.AcknexObject.GetAcknexObject("DIFFICULT2_STR");
            _world.SetSynonymObject("MENU2_STR", DIFFICULT2_STR_2);
            var DIFFICULT3_STR_4 = _world.AcknexObject.GetAcknexObject("DIFFICULT3_STR");
            _world.SetSynonymObject("MENU3_STR", DIFFICULT3_STR_4);
            var DIFFICULT4_STR_6 = _world.AcknexObject.GetAcknexObject("DIFFICULT4_STR");
            _world.SetSynonymObject("MENU4_STR", DIFFICULT4_STR_6);
            var SET_DIFF1_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_DIFF1");
            _world.SetSynonymObject("MENU1_ACT", SET_DIFF1_8);
            var SET_DIFF2_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_DIFF2");
            _world.SetSynonymObject("MENU2_ACT", SET_DIFF2_10);
            var SET_DIFF3_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_DIFF3");
            _world.SetSynonymObject("MENU3_ACT", SET_DIFF3_12);
            var SET_DIFF4_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_DIFF4");
            _world.SetSynonymObject("MENU4_ACT", SET_DIFF4_14);
            var MENU_POS_18 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            MENU_POS_18.SetFloat("MAX", 5f);
            yield return SHOW_MENU();
            yield break;
            yield break;
        }
        public IEnumerator DIVE_UP()
        {
            //Unknown keyword: PLAY_SOUND
            yield return RESET_BLUE();
            yield break;
        }
        public IEnumerator ENTER_WATER()
        {
            //Unknown keyword: PLAY_SOUND
            yield return SET_SWIMMING();
            yield break;
        }
        public IEnumerator EXIT_GAME()
        {
            Application.Quit();
            yield break;
        }
        public IEnumerator EXIT_YESNO()
        {
            yield return CLEAR_MENU();
            var QUIT_YESNO_0 = _world.AcknexObject.GetAcknexObject("QUIT_YESNO");
            var SCREEN_TXT_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            SCREEN_TXT_2.SetAcknexObject("STRING", QUIT_YESNO_0);
            var EXIT_GAME_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXIT_GAME");
            _world.AcknexObject.SetString("IF_J", EXIT_GAME_3.GetString("NAME"));
            var EXIT_GAME_5 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXIT_GAME");
            _world.AcknexObject.SetString("IF_Y", EXIT_GAME_5.GetString("NAME"));
            var EXIT_GAME_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXIT_GAME");
            _world.AcknexObject.SetString("IF_Z", EXIT_GAME_7.GetString("NAME"));
            yield return WAIT_YESNO();
            yield break;
        }
        public IEnumerator FADE_IN()
        {
            var FADE_1 = _world.GetObject(ObjectType.Skill, "FADE");
            FADE_1.SetFloat("VAL", 0f);
            LOOP:
            var FADE_3 = _world.GetObject(ObjectType.Skill, "FADE");
            var temp_4 = FADE_3.GetFloat("VAL");
            var FADE_5 = _world.GetObject(ObjectType.Skill, "FADE");
            FADE_5.SetFloat("VAL", temp_4 + 0.1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForCycles(1f);
            var FADE_8 = _world.GetObject(ObjectType.Skill, "FADE");
            var temp_9 = FADE_8.GetFloat("VAL");
            if (temp_9 < 1f)
            {
                goto LOOP;
            }
            //Unknown keyword: FADE_PAL
            yield break;
        }
        public IEnumerator FADE_OUT()
        {
            var FADE_1 = _world.GetObject(ObjectType.Skill, "FADE");
            FADE_1.SetFloat("VAL", 1f);
            LOOP:
            var FADE_3 = _world.GetObject(ObjectType.Skill, "FADE");
            var temp_4 = FADE_3.GetFloat("VAL");
            var FADE_5 = _world.GetObject(ObjectType.Skill, "FADE");
            FADE_5.SetFloat("VAL", temp_4 + 0.1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForCycles(1f);
            var FADE_8 = _world.GetObject(ObjectType.Skill, "FADE");
            var temp_9 = FADE_8.GetFloat("VAL");
            if (temp_9 < 1f)
            {
                goto LOOP;
            }
            //Unknown keyword: FADE_PAL
            Application.Quit();
            yield break;
        }
        public IEnumerator FALLTUER()
        {
            var LIFT_DOWN_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LIFT_DOWN");
            var RUMPELKAMMERSOCKEL_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            RUMPELKAMMERSOCKEL_2.SetString("EACH_TICK", LIFT_DOWN_0.GetString("NAME"));
            yield break;
        }
        public IEnumerator GET_ADJX()
        {
            var ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_2 = ADJUST_MODE_1.GetFloat("VAL");
            if (temp_2 == 0f)
            {
                var ADJUST_WALL_4 = _world.GetSynonymObject("ADJUST_WALL");
                var temp_5 = ADJUST_WALL_4.GetFloat("OFFSET_X");
                var ADJUST_X_6 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                ADJUST_X_6.SetFloat("VAL", temp_5);
            }
            var ADJUST_MODE_8 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_9 = ADJUST_MODE_8.GetFloat("VAL");
            if (temp_9 == 1f)
            {
                var ADJUST_REG_11 = _world.GetSynonymObject("ADJUST_REG");
                var temp_12 = ADJUST_REG_11.GetFloat("FLOOR_OFFS_X");
                var ADJUST_X_13 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                ADJUST_X_13.SetFloat("VAL", temp_12);
            }
            var ADJUST_MODE_15 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_16 = ADJUST_MODE_15.GetFloat("VAL");
            if (temp_16 == 2f)
            {
                var ADJUST_REG_18 = _world.GetSynonymObject("ADJUST_REG");
                var temp_19 = ADJUST_REG_18.GetFloat("CEIL_OFFS_X");
                var ADJUST_X_20 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                ADJUST_X_20.SetFloat("VAL", temp_19);
            }
            var ADJUST_MODE_22 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_23 = ADJUST_MODE_22.GetFloat("VAL");
            if (temp_23 == 3f)
            {
                var ADJUST_X_24 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var ADJUST_REG_26 = _world.GetSynonymObject("ADJUST_REG");
                var temp_27 = ADJUST_REG_26.GetFloat("FLOOR_HGT");
                ADJUST_X_24.SetFloat("VAL", temp_27 * 10f);
            }
            var ADJUST_MODE_31 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_32 = ADJUST_MODE_31.GetFloat("VAL");
            if (temp_32 == 4f)
            {
                var ADJUST_TEX_34 = _world.GetSynonymObject("ADJUST_TEX");
                var temp_35 = ADJUST_TEX_34.GetFloat("POS_X");
                var ADJUST_X_36 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                ADJUST_X_36.SetFloat("VAL", temp_35);
            }
            var ADJUST_MODE_38 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_39 = ADJUST_MODE_38.GetFloat("VAL");
            if (temp_39 == 5f)
            {
                var ADJUST_X_40 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var ADJUST_TEX_42 = _world.GetSynonymObject("ADJUST_TEX");
                var temp_43 = ADJUST_TEX_42.GetFloat("SCALE_X");
                ADJUST_X_40.SetFloat("VAL", temp_43 * 10f);
            }
            var ADJUST_MODE_47 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_48 = ADJUST_MODE_47.GetFloat("VAL");
            if (temp_48 == 6f)
            {
                var ADJUST_WALL_50 = _world.GetSynonymObject("ADJUST_WALL");
                var temp_51 = ADJUST_WALL_50.GetFloat("OFFSET_X");
                var ADJUST_X_52 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                ADJUST_X_52.SetFloat("VAL", temp_51);
            }
            var ADJUST_MODE_54 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_55 = ADJUST_MODE_54.GetFloat("VAL");
            if (temp_55 == 7f)
            {
                var ADJUST_X_56 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var ADJUST_TEX_58 = _world.GetSynonymObject("ADJUST_TEX");
                var temp_59 = ADJUST_TEX_58.GetFloat("AMBIENT");
                ADJUST_X_56.SetFloat("VAL", temp_59 * 10f);
            }
            var ADJUST_MODE_63 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_64 = ADJUST_MODE_63.GetFloat("VAL");
            if (temp_64 == 8f)
            {
                var ADJUST_X_65 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var ADJUST_REG_67 = _world.GetSynonymObject("ADJUST_REG");
                var temp_68 = ADJUST_REG_67.GetFloat("AMBIENT");
                ADJUST_X_65.SetFloat("VAL", temp_68 * 10f);
            }
            yield break;
        }
        public IEnumerator GET_ADJY()
        {
            var ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_2 = ADJUST_MODE_1.GetFloat("VAL");
            if (temp_2 == 0f)
            {
                var ADJUST_WALL_4 = _world.GetSynonymObject("ADJUST_WALL");
                var temp_5 = ADJUST_WALL_4.GetFloat("OFFSET_Y");
                var ADJUST_Y_6 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                ADJUST_Y_6.SetFloat("VAL", temp_5);
            }
            var ADJUST_MODE_8 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_9 = ADJUST_MODE_8.GetFloat("VAL");
            if (temp_9 == 1f)
            {
                var ADJUST_REG_11 = _world.GetSynonymObject("ADJUST_REG");
                var temp_12 = ADJUST_REG_11.GetFloat("FLOOR_OFFS_Y");
                var ADJUST_Y_13 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                ADJUST_Y_13.SetFloat("VAL", temp_12);
            }
            var ADJUST_MODE_15 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_16 = ADJUST_MODE_15.GetFloat("VAL");
            if (temp_16 == 2f)
            {
                var ADJUST_REG_18 = _world.GetSynonymObject("ADJUST_REG");
                var temp_19 = ADJUST_REG_18.GetFloat("CEIL_OFFS_Y");
                var ADJUST_Y_20 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                ADJUST_Y_20.SetFloat("VAL", temp_19);
            }
            var ADJUST_MODE_22 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_23 = ADJUST_MODE_22.GetFloat("VAL");
            if (temp_23 == 3f)
            {
                var ADJUST_Y_24 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var ADJUST_REG_26 = _world.GetSynonymObject("ADJUST_REG");
                var temp_27 = ADJUST_REG_26.GetFloat("CEIL_HGT");
                ADJUST_Y_24.SetFloat("VAL", temp_27 * 10f);
            }
            var ADJUST_MODE_31 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_32 = ADJUST_MODE_31.GetFloat("VAL");
            if (temp_32 == 4f)
            {
                var ADJUST_TEX_34 = _world.GetSynonymObject("ADJUST_TEX");
                var temp_35 = ADJUST_TEX_34.GetFloat("POS_Y");
                var ADJUST_Y_36 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                ADJUST_Y_36.SetFloat("VAL", temp_35);
            }
            var ADJUST_MODE_38 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_39 = ADJUST_MODE_38.GetFloat("VAL");
            if (temp_39 == 5f)
            {
                var ADJUST_Y_40 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var ADJUST_TEX_42 = _world.GetSynonymObject("ADJUST_TEX");
                var temp_43 = ADJUST_TEX_42.GetFloat("SCALE_Y");
                ADJUST_Y_40.SetFloat("VAL", temp_43 * 10f);
            }
            var ADJUST_MODE_47 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_48 = ADJUST_MODE_47.GetFloat("VAL");
            if (temp_48 == 6f)
            {
                var ADJUST_Y_49 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var ADJUST_WALL_51 = _world.GetSynonymObject("ADJUST_WALL");
                var temp_52 = ADJUST_WALL_51.GetFloat("POSITION");
                ADJUST_Y_49.SetFloat("VAL", temp_52 * 10f);
            }
            var ADJUST_MODE_56 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_57 = ADJUST_MODE_56.GetFloat("VAL");
            if (temp_57 == 7f)
            {
                var ADJUST_Y_58 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var ADJUST_TEX_60 = _world.GetSynonymObject("ADJUST_TEX");
                var temp_61 = ADJUST_TEX_60.GetFloat("ALBEDO");
                ADJUST_Y_58.SetFloat("VAL", temp_61 * 10f);
            }
            var ADJUST_MODE_65 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_66 = ADJUST_MODE_65.GetFloat("VAL");
            if (temp_66 == 8f)
            {
                var ADJUST_Y_68 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                ADJUST_Y_68.SetFloat("VAL", 0f);
            }
            yield break;
        }
        public IEnumerator INCREASE_VOL()
        {
            var SOUND_VOL_1 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            var temp_2 = SOUND_VOL_1.GetFloat("VAL");
            var SOUND_VOL_3 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            SOUND_VOL_3.SetFloat("VAL", temp_2 + 0.2f);
            var MUSIC_VOL_5 = _world.GetObject(ObjectType.Skill, "MUSIC_VOL");
            var temp_6 = MUSIC_VOL_5.GetFloat("VAL");
            var MUSIC_VOL_7 = _world.GetObject(ObjectType.Skill, "MUSIC_VOL");
            MUSIC_VOL_7.SetFloat("VAL", temp_6 + 0.1f);
            var VOL_PLUS_8 = _world.AcknexObject.GetAcknexObject("VOL_PLUS");
            var SCREEN_TXT_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            SCREEN_TXT_10.SetAcknexObject("STRING", VOL_PLUS_8);
            yield return SHOW_MESSAGE();
            yield break;
            yield break;
        }
        public IEnumerator INIT_GLOBALS()
        {
            //Unknown keyword: LOAD_INFO
            yield break;
        }
        public IEnumerator INIT_MOVE()
        {
            var MODE_GEHEN_0 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var temp_1 = MODE_GEHEN_0.GetFloat("VAL");
            var MOVING_2 = _world.GetObject(ObjectType.Skill, "MOVING");
            MOVING_2.SetFloat("VAL", temp_1);
            yield return SET_MOVING();
            yield break;
        }
        public IEnumerator IST_OPEN()
        {
            var GEHEIMTUER_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"GEHEIMTUER");
            var temp_3 = GEHEIMTUER_2.GetFloat("CEIL_HGT");
            if (temp_3 < 8f)
            {
                var AUFGEH_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"AUFGEH");
                _world.AcknexObject.SetString("EACH_TICK.11", AUFGEH_4.GetString("NAME"));
            }
            var GEHEIMTUER_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"GEHEIMTUER");
            var temp_10 = GEHEIMTUER_9.GetFloat("CEIL_HGT");
            if (temp_10 < 2.7f)
            {
                //Unknown keyword: PLAY_SOUND
            }
            yield break;
        }
        public IEnumerator LEAVE_WATER()
        {
            yield return SET_WALKING();
            yield break;
        }
        public IEnumerator LEVEL_MENU()
        {
            yield return CLEAR_MENU();
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
            var START_LEVEL1_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"START_LEVEL1");
            _world.SetSynonymObject("MENU1_ACT", START_LEVEL1_10);
            var START_LEVEL2_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"START_LEVEL2");
            _world.SetSynonymObject("MENU2_ACT", START_LEVEL2_12);
            var START_LEVEL3_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"START_LEVEL3");
            _world.SetSynonymObject("MENU3_ACT", START_LEVEL3_14);
            var START_LEVEL4_16 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"START_LEVEL4");
            _world.SetSynonymObject("MENU4_ACT", START_LEVEL4_16);
            var START_LEVEL5_18 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"START_LEVEL5");
            _world.SetSynonymObject("MENU5_ACT", START_LEVEL5_18);
            var MENU_POS_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            MENU_POS_22.SetFloat("MAX", 6f);
            yield return SHOW_MENU();
            yield break;
            yield break;
        }
        public IEnumerator LIFT_DOWN()
        {
            var RUMPELKAMMERSOCKEL_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            var temp_3 = RUMPELKAMMERSOCKEL_2.GetFloat("FLOOR_HGT");
            var RUMPELKAMMERSOCKEL_5 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            RUMPELKAMMERSOCKEL_5.SetFloat("FLOOR_HGT", temp_3 + -0.3f);
            //Unknown keyword: PLAY_SOUND
            var PLAYER_Z_7 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var temp_8 = PLAYER_Z_7.GetFloat("VAL");
            var PLAYER_Z_9 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            PLAYER_Z_9.SetFloat("VAL", temp_8 + -0.3f);
            var RENDER_MODE_11 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_11.SetFloat("VAL", 1f);
            var RUMPELKAMMERSOCKEL_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            var temp_15 = RUMPELKAMMERSOCKEL_14.GetFloat("FLOOR_HGT");
            if (temp_15 > 0f)
            {
                yield break;
            }
            var RUMPELKAMMERSOCKEL_18 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            RUMPELKAMMERSOCKEL_18.SetFloat("FLOOR_HGT", 0f);
            var RUMPELKAMMERSOCKEL_21 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            RUMPELKAMMERSOCKEL_21.SetString("EACH_TICK", null);
            var ARSCHTRITT_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"ARSCHTRITT");
            var RUMPELKAMMERSOCKEL_24 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            RUMPELKAMMERSOCKEL_24.SetString("IF_ENTER", ARSCHTRITT_22.GetString("NAME"));
            var DUNKELGANGSPERRE_27 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"DUNKELGANGSPERRE");
            DUNKELGANGSPERRE_27.SetFloat("CEIL_HGT", 6f);
            yield break;
        }
        public IEnumerator LIFT_UP()
        {
            var RUMPELKAMMERSOCKEL_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            var temp_3 = RUMPELKAMMERSOCKEL_2.GetFloat("FLOOR_HGT");
            var RUMPELKAMMERSOCKEL_5 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            RUMPELKAMMERSOCKEL_5.SetFloat("FLOOR_HGT", temp_3 + 0.3f);
            var PLAYER_Z_7 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var temp_8 = PLAYER_Z_7.GetFloat("VAL");
            var PLAYER_Z_9 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            PLAYER_Z_9.SetFloat("VAL", temp_8 + 0.3f);
            var RENDER_MODE_11 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_11.SetFloat("VAL", 1f);
            //Unknown keyword: PLAY_SOUND
            var RUMPELKAMMERSOCKEL_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            var temp_15 = RUMPELKAMMERSOCKEL_14.GetFloat("FLOOR_HGT");
            if (temp_15 < 15.5f)
            {
                yield break;
            }
            var RUMPELKAMMERSOCKEL_18 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            RUMPELKAMMERSOCKEL_18.SetFloat("FLOOR_HGT", 15.5f);
            var RUMPELKAMMERSOCKEL_21 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            RUMPELKAMMERSOCKEL_21.SetString("EACH_TICK", null);
            var FALLTUER_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"FALLTUER");
            var RUMPELKAMMERSOCKEL_24 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            RUMPELKAMMERSOCKEL_24.SetString("IF_ENTER", FALLTUER_22.GetString("NAME"));
            yield break;
        }
        public IEnumerator LOAD_GAME()
        {
            var WAIT_TXT_0 = _world.AcknexObject.GetAcknexObject("WAIT_TXT");
            var SCREEN_TXT_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            SCREEN_TXT_2.SetAcknexObject("STRING", WAIT_TXT_0);
            var SCREEN_TXT_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", SCREEN_TXT_3);
            yield return new WaitForCycles(1f);
            //Unknown keyword: LOAD
            var LOAD_NIX_7 = _world.AcknexObject.GetAcknexObject("LOAD_NIX");
            var SCREEN_TXT_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            SCREEN_TXT_9.SetAcknexObject("STRING", LOAD_NIX_7);
            yield return SHOW_MESSAGE();
            yield break;
            yield break;
        }
        public IEnumerator LOAD_MENU()
        {
            //Unknown keyword: LOAD_INFO
            yield return CLEAR_MENU();
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
            var LOAD_NAME1_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_NAME1");
            _world.SetSynonymObject("MENU1_ACT", LOAD_NAME1_10);
            var LOAD_NAME2_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_NAME2");
            _world.SetSynonymObject("MENU2_ACT", LOAD_NAME2_12);
            var LOAD_NAME3_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_NAME3");
            _world.SetSynonymObject("MENU3_ACT", LOAD_NAME3_14);
            var LOAD_NAME4_16 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_NAME4");
            _world.SetSynonymObject("MENU4_ACT", LOAD_NAME4_16);
            var LOAD_NAME5_18 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_NAME5");
            _world.SetSynonymObject("MENU5_ACT", LOAD_NAME5_18);
            var MENU_POS_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            MENU_POS_22.SetFloat("MAX", 6f);
            yield return SHOW_MENU();
            yield break;
            yield break;
        }
        public IEnumerator LOAD_NAME1()
        {
            var SLOT_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            SLOT_1.SetFloat("VAL", 1f);
            yield return CLEAR_MENU();
            yield return LOAD_GAME();
            yield break;
            yield break;
        }
        public IEnumerator LOAD_NAME2()
        {
            var SLOT_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            SLOT_1.SetFloat("VAL", 2f);
            yield return CLEAR_MENU();
            yield return LOAD_GAME();
            yield break;
            yield break;
        }
        public IEnumerator LOAD_NAME3()
        {
            var SLOT_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            SLOT_1.SetFloat("VAL", 3f);
            yield return CLEAR_MENU();
            yield return LOAD_GAME();
            yield break;
            yield break;
        }
        public IEnumerator LOAD_NAME4()
        {
            var SLOT_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            SLOT_1.SetFloat("VAL", 4f);
            yield return CLEAR_MENU();
            yield return LOAD_GAME();
            yield break;
            yield break;
        }
        public IEnumerator LOAD_NAME5()
        {
            var SLOT_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            SLOT_1.SetFloat("VAL", 5f);
            yield return CLEAR_MENU();
            yield return LOAD_GAME();
            yield break;
            yield break;
        }
        public IEnumerator LOAD_QUICK()
        {
            var SLOT_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            var temp_2 = SLOT_1.GetFloat("VAL");
            if (temp_2 == 0f)
            {
                yield return LOAD_MENU();
                yield break;
            }
            yield return CLEAR_MENU();
            var QLOAD_YESNO_3 = _world.AcknexObject.GetAcknexObject("QLOAD_YESNO");
            var SCREEN_TXT_5 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            SCREEN_TXT_5.SetAcknexObject("STRING", QLOAD_YESNO_3);
            var LOAD_GAME_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_GAME");
            _world.AcknexObject.SetString("IF_J", LOAD_GAME_6.GetString("NAME"));
            var LOAD_GAME_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_GAME");
            _world.AcknexObject.SetString("IF_Y", LOAD_GAME_8.GetString("NAME"));
            var LOAD_GAME_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_GAME");
            _world.AcknexObject.SetString("IF_Z", LOAD_GAME_10.GetString("NAME"));
            yield return WAIT_YESNO();
            yield break;
        }
        public IEnumerator LOAD_STATUS()
        {
            yield return new WaitForCycles(1f);
            //Unknown keyword: LOAD_INFO
            _world.AcknexObject.SetString("EACH_TICK.10", null);
            var MOVE_MODE_5 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_5.SetFloat("VAL", 1f);
            yield break;
        }
        public IEnumerator MAIN_MENU()
        {
            yield return CLEAR_MENU();
            var SHOW_OPTION_STR_0 = _world.AcknexObject.GetAcknexObject("SHOW_OPTION_STR");
            _world.SetSynonymObject("MENU1_STR", SHOW_OPTION_STR_0);
            var LOAD_GAME_STR_2 = _world.AcknexObject.GetAcknexObject("LOAD_GAME_STR");
            _world.SetSynonymObject("MENU2_STR", LOAD_GAME_STR_2);
            var SAVE_GAME_STR_4 = _world.AcknexObject.GetAcknexObject("SAVE_GAME_STR");
            _world.SetSynonymObject("MENU3_STR", SAVE_GAME_STR_4);
            var QUIT_GAME_STR_6 = _world.AcknexObject.GetAcknexObject("QUIT_GAME_STR");
            _world.SetSynonymObject("MENU4_STR", QUIT_GAME_STR_6);
            var SHOW_OPTIONS_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SHOW_OPTIONS");
            _world.SetSynonymObject("MENU1_ACT", SHOW_OPTIONS_8);
            var LOAD_MENU_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_MENU");
            _world.SetSynonymObject("MENU2_ACT", LOAD_MENU_10);
            var SAVE_MENU_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_MENU");
            _world.SetSynonymObject("MENU3_ACT", SAVE_MENU_12);
            var EXIT_YESNO_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXIT_YESNO");
            _world.SetSynonymObject("MENU4_ACT", EXIT_YESNO_14);
            var MENU_POS_18 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            MENU_POS_18.SetFloat("MAX", 5f);
            yield return SHOW_MENU();
            yield break;
            yield break;
        }
        public IEnumerator MENU_DOWN()
        {
            //Unknown keyword: PLAY_SOUND
            yield return SET_MENU();
            var MENU_POS_1 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_2 = MENU_POS_1.GetFloat("VAL");
            var MENU_POS_3 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            MENU_POS_3.SetFloat("VAL", temp_2 + 1f);
            yield break;
        }
        public IEnumerator MENU_EXEC()
        {
            //Unknown keyword: PLAY_SOUND
            var MENU_POS_0 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_1 = MENU_POS_0.GetFloat("VAL");
            if (temp_1 > MENU_POS_0.GetFloat("MAX"))
            {
                yield return CLEAR_MENU();
                yield break;
            }
            var MENU_POS_3 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_4 = MENU_POS_3.GetFloat("VAL");
            if (temp_4 == 1f)
            {
                yield return _world.CallSynonymAction("MENU1_ACT");
                yield break;
            }
            var MENU_POS_6 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_7 = MENU_POS_6.GetFloat("VAL");
            if (temp_7 == 2f)
            {
                yield return _world.CallSynonymAction("MENU2_ACT");
                yield break;
            }
            var MENU_POS_9 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_10 = MENU_POS_9.GetFloat("VAL");
            if (temp_10 == 3f)
            {
                yield return _world.CallSynonymAction("MENU3_ACT");
                yield break;
            }
            var MENU_POS_12 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_13 = MENU_POS_12.GetFloat("VAL");
            if (temp_13 == 4f)
            {
                yield return _world.CallSynonymAction("MENU4_ACT");
                yield break;
            }
            var MENU_POS_15 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_16 = MENU_POS_15.GetFloat("VAL");
            if (temp_16 == 5f)
            {
                yield return _world.CallSynonymAction("MENU5_ACT");
                yield break;
            }
            var MENU_POS_18 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_19 = MENU_POS_18.GetFloat("VAL");
            if (temp_19 == 6f)
            {
                yield return _world.CallSynonymAction("MENU6_ACT");
                yield break;
            }
            yield break;
        }
        public IEnumerator MENU_UP()
        {
            //Unknown keyword: PLAY_SOUND
            yield return SET_MENU();
            var MENU_POS_1 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_2 = MENU_POS_1.GetFloat("VAL");
            var MENU_POS_3 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            MENU_POS_3.SetFloat("VAL", temp_2 + -1f);
            yield break;
        }
        public IEnumerator MOVE_ME()
        {
            START:
            var MODE_GEHEN_0 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var temp_1 = MODE_GEHEN_0.GetFloat("VAL");
            var MOVING_2 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_3 = MOVING_2.GetFloat("VAL");
            if (temp_3 == temp_1)
            {
                var PLAYER_SIZE_4 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var MY_SIZE_5 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
                var temp_6 = MY_SIZE_5.GetFloat("VAL");
                var WALK_10 = _world.GetObject(ObjectType.Skill, "WALK");
                var temp_11 = WALK_10.GetFloat("VAL");
                PLAYER_SIZE_4.SetFloat("VAL", temp_6 + 0.2f * temp_11);
            }
            var MODE_SCHWIMMEN_12 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var temp_13 = MODE_SCHWIMMEN_12.GetFloat("VAL");
            var MOVING_14 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_15 = MOVING_14.GetFloat("VAL");
            if (temp_15 == temp_13)
            {
                var PLAYER_SIZE_16 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var WAVE_21 = _world.GetObject(ObjectType.Skill, "WAVE");
                var temp_22 = WAVE_21.GetFloat("VAL");
                PLAYER_SIZE_16.SetFloat("VAL", 1f + 0.12f * temp_22);
            }
            var MODE_TAUCHEN_23 = _world.GetObject(ObjectType.Skill, "MODE_TAUCHEN");
            var temp_24 = MODE_TAUCHEN_23.GetFloat("VAL");
            var MOVING_25 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_26 = MOVING_25.GetFloat("VAL");
            if (temp_26 == temp_24)
            {
                var PLAYER_SIZE_27 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                PLAYER_SIZE_27.SetFloat("VAL", 1f);
            }
            var MODE_GEHEN_29 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var temp_30 = MODE_GEHEN_29.GetFloat("VAL");
            var MOVING_31 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_32 = MOVING_31.GetFloat("VAL");
            if (temp_32 == temp_30)
            {
                var PLAYER_SIZE_33 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var PLAYER_SIZE_34 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var temp_35 = PLAYER_SIZE_34.GetFloat("VAL");
                var PLAYER_DEPTH_37 = _world.GetObject(ObjectType.Skill, "PLAYER_DEPTH");
                var temp_38 = PLAYER_DEPTH_37.GetFloat("VAL");
                PLAYER_SIZE_33.SetFloat("VAL", temp_35 - temp_38);
            }
            NO_WATEN:
            var MODE_SCHWIMMEN_39 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var temp_40 = MODE_SCHWIMMEN_39.GetFloat("VAL");
            var MOVING_41 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_42 = MOVING_41.GetFloat("VAL");
            if (temp_42 != temp_40)
            {
                goto NO_SWIM;
            }
            var PLAYER_DEPTH_44 = _world.GetObject(ObjectType.Skill, "PLAYER_DEPTH");
            var temp_45 = PLAYER_DEPTH_44.GetFloat("VAL");
            if (temp_45 > 1.5f)
            {
                goto NO_WATER;
            }
            yield return SET_WALKING();
            goto START;
            NO_SWIM:
            var MODE_GEHEN_46 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var temp_47 = MODE_GEHEN_46.GetFloat("VAL");
            var MOVING_48 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_49 = MOVING_48.GetFloat("VAL");
            if (temp_49 != temp_47)
            {
                goto NO_WATER;
            }
            var PLAYER_DEPTH_51 = _world.GetObject(ObjectType.Skill, "PLAYER_DEPTH");
            var temp_52 = PLAYER_DEPTH_51.GetFloat("VAL");
            if (temp_52 < 2.5f)
            {
                goto NO_WATER;
            }
            yield return SET_SWIMMING();
            goto START;
            NO_WATER:
            var MOUSE_MIDDLE_54 = _world.GetObject(ObjectType.Skill, "MOUSE_MIDDLE");
            var temp_55 = MOUSE_MIDDLE_54.GetFloat("VAL");
            if (temp_55 == 0f)
            {
                goto NO_MOUSE;
            }
            var KEY_SENSE_56 = _world.GetObject(ObjectType.Skill, "KEY_SENSE");
            var temp_57 = KEY_SENSE_56.GetFloat("VAL");
            var FORCE_AHEAD_58 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
            FORCE_AHEAD_58.SetFloat("VAL", temp_57);
            var KEY_SHIFT_60 = _world.GetObject(ObjectType.Skill, "KEY_SHIFT");
            var temp_61 = KEY_SHIFT_60.GetFloat("VAL");
            if (temp_61 == 1f)
            {
                var FORCE_AHEAD_62 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
                var FORCE_AHEAD_63 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
                var temp_64 = FORCE_AHEAD_63.GetFloat("VAL");
                var SHIFT_SENSE_66 = _world.GetObject(ObjectType.Skill, "SHIFT_SENSE");
                var temp_67 = SHIFT_SENSE_66.GetFloat("VAL");
                FORCE_AHEAD_62.SetFloat("VAL", temp_64 * temp_67);
            }
            NO_MOUSE:
            var BOOSTER_69 = _world.GetObject(ObjectType.Skill, "BOOSTER");
            BOOSTER_69.SetFloat("VAL", 1f);
            var MASS_70 = _world.GetObject(ObjectType.Skill, "MASS");
            var temp_71 = MASS_70.GetFloat("VAL");
            var INERTIA_72 = _world.GetObject(ObjectType.Skill, "INERTIA");
            INERTIA_72.SetFloat("VAL", temp_71);
            var FRICTION_73 = _world.GetObject(ObjectType.Skill, "FRICTION");
            var FRIC_74 = _world.GetObject(ObjectType.Skill, "FRIC");
            var temp_75 = FRIC_74.GetFloat("VAL");
            var DEPTH_79 = _world.GetObject(ObjectType.Skill, "DEPTH");
            var temp_80 = DEPTH_79.GetFloat("VAL");
            FRICTION_73.SetFloat("VAL", temp_75 + 0.1f * temp_80);
            var FORCE_81 = _world.GetObject(ObjectType.Skill, "FORCE");
            var STRENGTH_83 = _world.GetObject(ObjectType.Skill, "STRENGTH");
            var temp_84 = STRENGTH_83.GetFloat("VAL");
            var WAVE_STR_86 = _world.GetObject(ObjectType.Skill, "WAVE_STR");
            var temp_87 = WAVE_STR_86.GetFloat("VAL");
            var WAVE_89 = _world.GetObject(ObjectType.Skill, "WAVE");
            var temp_90 = WAVE_89.GetFloat("VAL");
            var BOOSTER_93 = _world.GetObject(ObjectType.Skill, "BOOSTER");
            var temp_94 = BOOSTER_93.GetFloat("VAL");
            var FORCE_AHEAD_97 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
            var temp_98 = FORCE_AHEAD_97.GetFloat("VAL");
            var PLAYER_COS_100 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var temp_101 = PLAYER_COS_100.GetFloat("VAL");
            var FORCE_STRAFE_105 = _world.GetObject(ObjectType.Skill, "FORCE_STRAFE");
            var temp_106 = FORCE_STRAFE_105.GetFloat("VAL");
            var PLAYER_SIN_108 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var temp_109 = PLAYER_SIN_108.GetFloat("VAL");
            var DRIFT_X_112 = _world.GetObject(ObjectType.Skill, "DRIFT_X");
            var temp_113 = DRIFT_X_112.GetFloat("VAL");
            FORCE_81.SetFloat("VAL", (temp_84 + temp_87 * temp_90) * temp_94 * (temp_98 * temp_101 - 0.5f * temp_106 * temp_109) + temp_113);
            var FORCE_114 = _world.GetObject(ObjectType.Skill, "FORCE");
            var temp_115 = FORCE_114.GetFloat("VAL");
            var PLAYER_VX_116 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var temp_117 = PLAYER_VX_116.GetFloat("VAL");
            var PLAYER_VX_118 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            PLAYER_VX_118.SetFloat("VAL", _world.Accelerate(temp_117, temp_115));
            var FORCE_119 = _world.GetObject(ObjectType.Skill, "FORCE");
            var STRENGTH_121 = _world.GetObject(ObjectType.Skill, "STRENGTH");
            var temp_122 = STRENGTH_121.GetFloat("VAL");
            var WAVE_STR_124 = _world.GetObject(ObjectType.Skill, "WAVE_STR");
            var temp_125 = WAVE_STR_124.GetFloat("VAL");
            var WAVE_127 = _world.GetObject(ObjectType.Skill, "WAVE");
            var temp_128 = WAVE_127.GetFloat("VAL");
            var BOOSTER_131 = _world.GetObject(ObjectType.Skill, "BOOSTER");
            var temp_132 = BOOSTER_131.GetFloat("VAL");
            var FORCE_AHEAD_135 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
            var temp_136 = FORCE_AHEAD_135.GetFloat("VAL");
            var PLAYER_SIN_138 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var temp_139 = PLAYER_SIN_138.GetFloat("VAL");
            var FORCE_STRAFE_143 = _world.GetObject(ObjectType.Skill, "FORCE_STRAFE");
            var temp_144 = FORCE_STRAFE_143.GetFloat("VAL");
            var PLAYER_COS_146 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var temp_147 = PLAYER_COS_146.GetFloat("VAL");
            var DRIFT_Y_150 = _world.GetObject(ObjectType.Skill, "DRIFT_Y");
            var temp_151 = DRIFT_Y_150.GetFloat("VAL");
            FORCE_119.SetFloat("VAL", (temp_122 + temp_125 * temp_128) * temp_132 * (temp_136 * temp_139 + 0.5f * temp_144 * temp_147) + temp_151);
            var FORCE_152 = _world.GetObject(ObjectType.Skill, "FORCE");
            var temp_153 = FORCE_152.GetFloat("VAL");
            var PLAYER_VY_154 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var temp_155 = PLAYER_VY_154.GetFloat("VAL");
            var PLAYER_VY_156 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            PLAYER_VY_156.SetFloat("VAL", _world.Accelerate(temp_155, temp_153));
            var FRICTION_158 = _world.GetObject(ObjectType.Skill, "FRICTION");
            FRICTION_158.SetFloat("VAL", 0.5f);
            var MODE_GEHEN_159 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var temp_160 = MODE_GEHEN_159.GetFloat("VAL");
            var MOVING_161 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_162 = MOVING_161.GetFloat("VAL");
            if (temp_162 != temp_160)
            {
                var FRICTION_164 = _world.GetObject(ObjectType.Skill, "FRICTION");
                FRICTION_164.SetFloat("VAL", 0.85f);
            }
            var FORCE_165 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_ROT_168 = _world.GetObject(ObjectType.Skill, "FORCE_ROT");
            var temp_169 = FORCE_ROT_168.GetFloat("VAL");
            FORCE_165.SetFloat("VAL", 0.05f * temp_169);
            var FORCE_170 = _world.GetObject(ObjectType.Skill, "FORCE");
            var temp_171 = FORCE_170.GetFloat("VAL");
            var PLAYER_VROT_172 = _world.GetObject(ObjectType.Skill, "PLAYER_VROT");
            var temp_173 = PLAYER_VROT_172.GetFloat("VAL");
            var PLAYER_VROT_174 = _world.GetObject(ObjectType.Skill, "PLAYER_VROT");
            PLAYER_VROT_174.SetFloat("VAL", _world.Accelerate(temp_173, temp_171));
            var FORCE_175 = _world.GetObject(ObjectType.Skill, "FORCE");
            var GRAVITY_176 = _world.GetObject(ObjectType.Skill, "GRAVITY");
            var temp_177 = GRAVITY_176.GetFloat("VAL");
            var FLOAT_STR_179 = _world.GetObject(ObjectType.Skill, "FLOAT_STR");
            var temp_180 = FLOAT_STR_179.GetFloat("VAL");
            var FORCE_UP_182 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var temp_183 = FORCE_UP_182.GetFloat("VAL");
            FORCE_175.SetFloat("VAL", temp_177 + temp_180 * temp_183);
            var FRIC_AIR_184 = _world.GetObject(ObjectType.Skill, "FRIC_AIR");
            var temp_185 = FRIC_AIR_184.GetFloat("VAL");
            var FRICTION_186 = _world.GetObject(ObjectType.Skill, "FRICTION");
            FRICTION_186.SetFloat("VAL", temp_185);
            var PLAYER_HGT_188 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var temp_189 = PLAYER_HGT_188.GetFloat("VAL");
            if (temp_189 > 0f)
            {
                goto AIRBORNE;
            }
            var FRICTION_191 = _world.GetObject(ObjectType.Skill, "FRICTION");
            FRICTION_191.SetFloat("VAL", 0.98f);
            var FORCE_192 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_193 = _world.GetObject(ObjectType.Skill, "FORCE");
            var temp_194 = FORCE_193.GetFloat("VAL");
            var PLAYER_HGT_198 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var temp_199 = PLAYER_HGT_198.GetFloat("VAL");
            FORCE_192.SetFloat("VAL", temp_194 - 0.2f * temp_199);
            AIRBORNE:
            var FORCE_200 = _world.GetObject(ObjectType.Skill, "FORCE");
            var temp_201 = FORCE_200.GetFloat("VAL");
            var PLAYER_VZ_202 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            var temp_203 = PLAYER_VZ_202.GetFloat("VAL");
            var PLAYER_VZ_204 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            PLAYER_VZ_204.SetFloat("VAL", _world.Accelerate(temp_203, temp_201));
            var DUCK_VAL_205 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_208 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var temp_209 = DUCK_VAL_208.GetFloat("VAL");
            DUCK_VAL_205.SetFloat("VAL", 0.8f * temp_209);
            var MODE_SCHWIMMEN_210 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var temp_211 = MODE_SCHWIMMEN_210.GetFloat("VAL");
            var MOVING_212 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_213 = MOVING_212.GetFloat("VAL");
            if (temp_213 == temp_211)
            {
                goto DUCK;
            }
            var FORCE_UP_215 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var temp_216 = FORCE_UP_215.GetFloat("VAL");
            if (temp_216 > 0f)
            {
                goto NO_DUCK;
            }
            DUCK:
            var DUCK_VAL_217 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_218 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var temp_219 = DUCK_VAL_218.GetFloat("VAL");
            var DUCK_STR_221 = _world.GetObject(ObjectType.Skill, "DUCK_STR");
            var temp_222 = DUCK_STR_221.GetFloat("VAL");
            var FORCE_UP_224 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var temp_225 = FORCE_UP_224.GetFloat("VAL");
            DUCK_VAL_217.SetFloat("VAL", temp_219 + temp_222 * temp_225);
            NO_DUCK:
            var PLAYER_SIZE_226 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_227 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var temp_228 = PLAYER_SIZE_227.GetFloat("VAL");
            var DUCK_VAL_230 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var temp_231 = DUCK_VAL_230.GetFloat("VAL");
            PLAYER_SIZE_226.SetFloat("VAL", temp_228 + temp_231);
            var MODE_GEHEN_232 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var temp_233 = MODE_GEHEN_232.GetFloat("VAL");
            var MOVING_234 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_235 = MOVING_234.GetFloat("VAL");
            if (temp_235 != temp_233)
            {
                goto NO_JUMP;
            }
            var JUMP_PHASE_237 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            var temp_238 = JUMP_PHASE_237.GetFloat("VAL");
            if (temp_238 > 0f)
            {
                goto JUMP_1;
            }
            var FORCE_UP_240 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var temp_241 = FORCE_UP_240.GetFloat("VAL");
            if (temp_241 < 0.1f)
            {
                goto NO_JUMP;
            }
            var JUMP_PHASE_243 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            JUMP_PHASE_243.SetFloat("VAL", 1f);
            JUMP_1:
            var JUMP_PHASE_245 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            var temp_246 = JUMP_PHASE_245.GetFloat("VAL");
            if (temp_246 > 1f)
            {
                goto JUMP_2;
            }
            var DUCK_VAL_247 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_248 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var temp_249 = DUCK_VAL_248.GetFloat("VAL");
            DUCK_VAL_247.SetFloat("VAL", temp_249 - 0.5f);
            var DUCK_VAL_253 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var temp_254 = DUCK_VAL_253.GetFloat("VAL");
            if (temp_254 < -0.7f)
            {
                var JUMP_PHASE_256 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
                JUMP_PHASE_256.SetFloat("VAL", 2f);
            }
            goto NO_JUMP;
            JUMP_2:
            var JUMP_PHASE_258 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            var temp_259 = JUMP_PHASE_258.GetFloat("VAL");
            if (temp_259 > 2f)
            {
                goto JUMP_3;
            }
            var DUCK_VAL_261 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            DUCK_VAL_261.SetFloat("VAL", 0f);
            var PLAYER_Z_262 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var FLOOR_HGT_263 = _world.GetObject(ObjectType.Skill, "FLOOR_HGT");
            var temp_264 = FLOOR_HGT_263.GetFloat("VAL");
            var MY_SIZE_266 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var temp_267 = MY_SIZE_266.GetFloat("VAL");
            PLAYER_Z_262.SetFloat("VAL", temp_264 + temp_267);
            var PLAYER_VZ_269 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            PLAYER_VZ_269.SetFloat("VAL", 0.5f);
            var JUMP_PHASE_271 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            JUMP_PHASE_271.SetFloat("VAL", 3f);
            goto NO_JUMP;
            JUMP_3:
            var PLAYER_VZ_273 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            var temp_274 = PLAYER_VZ_273.GetFloat("VAL");
            if (temp_274 > 0f)
            {
                goto NO_JUMP;
            }
            var PLAYER_HGT_276 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var temp_277 = PLAYER_HGT_276.GetFloat("VAL");
            if (temp_277 > 0f)
            {
                goto NO_JUMP;
            }
            var JUMP_PHASE_279 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            JUMP_PHASE_279.SetFloat("VAL", 0f);
            NO_JUMP:
            var PLAYER_SPEED_SQR_280 = _world.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
            var PLAYER_VX_281 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var temp_282 = PLAYER_VX_281.GetFloat("VAL");
            var PLAYER_VX_284 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var temp_285 = PLAYER_VX_284.GetFloat("VAL");
            var PLAYER_VY_287 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var temp_288 = PLAYER_VY_287.GetFloat("VAL");
            var PLAYER_VY_290 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var temp_291 = PLAYER_VY_290.GetFloat("VAL");
            PLAYER_SPEED_SQR_280.SetFloat("VAL", temp_282 * temp_285 + temp_288 * temp_291);
            var TILT_DECREASE_293 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
            var temp_294 = TILT_DECREASE_293.GetFloat("VAL");
            if (temp_294 != 1f)
            {
                goto CALC_TILT;
            }
            var MAX_PLAYER_TILT_P_295 = _world.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_P");
            var temp_296 = MAX_PLAYER_TILT_P_295.GetFloat("VAL");
            var PLAYER_TILT_297 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var temp_298 = PLAYER_TILT_297.GetFloat("VAL");
            if (temp_298 > temp_296)
            {
                goto CHECK_SPEED_TILT;
            }
            var MAX_PLAYER_TILT_N_299 = _world.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_N");
            var temp_300 = MAX_PLAYER_TILT_N_299.GetFloat("VAL");
            var PLAYER_TILT_301 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var temp_302 = PLAYER_TILT_301.GetFloat("VAL");
            if (temp_302 > temp_300)
            {
                goto DECR_TILT;
            }
            CHECK_SPEED_TILT:
            var PLAYER_SPEED_SQR_304 = _world.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
            var temp_305 = PLAYER_SPEED_SQR_304.GetFloat("VAL");
            if (temp_305 > 0.4f)
            {
                goto DECR_TILT;
            }
            var PLAYER_VZ_307 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            var temp_308 = PLAYER_VZ_307.GetFloat("VAL");
            if (temp_308 != 0f)
            {
                goto DECR_TILT;
            }
            goto CALC_TILT;
            DECR_TILT:
            var TILT_DECREASE_310 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
            TILT_DECREASE_310.SetFloat("VAL", 0.8f);
            CALC_TILT:
            var PLAYER_TILT_311 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var TILT_DECREASE_312 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
            var temp_313 = TILT_DECREASE_312.GetFloat("VAL");
            var PLAYER_TILT_315 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var temp_316 = PLAYER_TILT_315.GetFloat("VAL");
            var FORCE_TILT_320 = _world.GetObject(ObjectType.Skill, "FORCE_TILT");
            var temp_321 = FORCE_TILT_320.GetFloat("VAL");
            var FLOAT_STR_325 = _world.GetObject(ObjectType.Skill, "FLOAT_STR");
            var temp_326 = FLOAT_STR_325.GetFloat("VAL");
            var FORCE_UP_328 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var temp_329 = FORCE_UP_328.GetFloat("VAL");
            var FLY_MODE_334 = _world.GetObject(ObjectType.Skill, "FLY_MODE");
            var temp_335 = FLY_MODE_334.GetFloat("VAL");
            PLAYER_TILT_311.SetFloat("VAL", temp_313 * temp_316 + 0.3f * temp_321 - 0.3f * temp_326 * temp_329 * (1f - temp_335));
            var PLAYER_SPEED_SQR_338 = _world.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
            var temp_339 = PLAYER_SPEED_SQR_338.GetFloat("VAL");
            if (temp_339 > 0f)
            {
                //Unknown keyword: SKIP
            }
            var MAX_PLAYER_TILT_P_340 = _world.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_P");
            var temp_341 = MAX_PLAYER_TILT_P_340.GetFloat("VAL");
            var PLAYER_TILT_342 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var temp_343 = PLAYER_TILT_342.GetFloat("VAL");
            if (temp_343 > temp_341)
            {
                var TILT_DECREASE_345 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
                TILT_DECREASE_345.SetFloat("VAL", 1f);
            }
            var MAX_PLAYER_TILT_N_346 = _world.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_N");
            var temp_347 = MAX_PLAYER_TILT_N_346.GetFloat("VAL");
            var PLAYER_TILT_348 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var temp_349 = PLAYER_TILT_348.GetFloat("VAL");
            if (temp_349 < temp_347)
            {
                var TILT_DECREASE_351 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
                TILT_DECREASE_351.SetFloat("VAL", 1f);
            }
            var MODE_SCHWIMMEN_352 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var temp_353 = MODE_SCHWIMMEN_352.GetFloat("VAL");
            var MOVING_354 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_355 = MOVING_354.GetFloat("VAL");
            if (temp_355 == temp_353)
            {
                var PLAYER_TILT_356 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var PLAYER_TILT_357 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var temp_358 = PLAYER_TILT_357.GetFloat("VAL");
                var WAVE_362 = _world.GetObject(ObjectType.Skill, "WAVE");
                var temp_363 = WAVE_362.GetFloat("VAL");
                PLAYER_TILT_356.SetFloat("VAL", temp_358 + 0.01f * temp_363);
            }
            var MODE_TAUCHEN_364 = _world.GetObject(ObjectType.Skill, "MODE_TAUCHEN");
            var temp_365 = MODE_TAUCHEN_364.GetFloat("VAL");
            var MOVING_366 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_367 = MOVING_366.GetFloat("VAL");
            if (temp_367 == temp_365)
            {
                goto NO_HTILT;
            }
            var JUMP_PHASE_369 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            var temp_370 = JUMP_PHASE_369.GetFloat("VAL");
            if (temp_370 > 0f)
            {
                goto NO_HTILT;
            }
            var TILT_DECREASE_372 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
            var temp_373 = TILT_DECREASE_372.GetFloat("VAL");
            if (temp_373 < 1f)
            {
                var PLAYER_TILT_374 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var PLAYER_TILT_375 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var temp_376 = PLAYER_TILT_375.GetFloat("VAL");
                var PLAYER_HGT_381 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
                var temp_382 = PLAYER_HGT_381.GetFloat("VAL");
                PLAYER_TILT_374.SetFloat("VAL", temp_376 + 0.03f * (temp_382 + 0.3f));
            }
            NO_HTILT:
            var RICHTER_387 = _world.GetObject(ObjectType.Skill, "RICHTER");
            var temp_388 = RICHTER_387.GetFloat("VAL");
            if (temp_388 == 0f)
            {
                goto NO_QUAKE;
            }
            var PLAYER_Z_389 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_390 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var temp_391 = PLAYER_Z_390.GetFloat("VAL");
            var RICHTER_393 = _world.GetObject(ObjectType.Skill, "RICHTER");
            var temp_394 = RICHTER_393.GetFloat("VAL");
            var RANDOM_2_397 = _world.GetObject(ObjectType.Skill, "RANDOM_2");
            var temp_398 = RANDOM_2_397.GetFloat("VAL");
            PLAYER_Z_389.SetFloat("VAL", temp_391 + temp_394 * (temp_398 - 0.5f));
            var RANDOM_1_402 = _world.GetObject(ObjectType.Skill, "RANDOM_1");
            var temp_403 = RANDOM_1_402.GetFloat("VAL");
            var RANDOM_2_404 = _world.GetObject(ObjectType.Skill, "RANDOM_2");
            RANDOM_2_404.SetFloat("VAL", temp_403);
            var RANDOM_1_406 = _world.GetObject(ObjectType.Skill, "RANDOM_1");
            RANDOM_1_406.SetFloat("VAL", UnityEngine.Random.value);
            NO_QUAKE:
            yield break;
            var KEY_INS_408 = _world.GetObject(ObjectType.Skill, "KEY_INS");
            var temp_409 = KEY_INS_408.GetFloat("VAL");
            if (temp_409 > 0f)
            {
                var PLAYER_ARC_410 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var PLAYER_ARC_411 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var temp_412 = PLAYER_ARC_411.GetFloat("VAL");
                PLAYER_ARC_410.SetFloat("VAL", temp_412 - 0.1f);
            }
            var KEY_DEL_416 = _world.GetObject(ObjectType.Skill, "KEY_DEL");
            var temp_417 = KEY_DEL_416.GetFloat("VAL");
            if (temp_417 > 0f)
            {
                var PLAYER_ARC_418 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var PLAYER_ARC_419 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var temp_420 = PLAYER_ARC_419.GetFloat("VAL");
                PLAYER_ARC_418.SetFloat("VAL", temp_420 + 0.1f);
            }
            yield break;
        }
        public IEnumerator MSCALE_MINUS()
        {
            var MAP_MODE_1 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            var temp_2 = MAP_MODE_1.GetFloat("VAL");
            if (temp_2 == 0f)
            {
                yield break;
            }
            var MAP_SCALE_3 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
            var MAP_SCALE_4 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
            var temp_5 = MAP_SCALE_4.GetFloat("VAL");
            MAP_SCALE_3.SetFloat("VAL", temp_5 * 0.9f);
            yield break;
        }
        public IEnumerator MSCALE_PLUS()
        {
            var MAP_MODE_1 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            var temp_2 = MAP_MODE_1.GetFloat("VAL");
            if (temp_2 == 0f)
            {
                yield break;
            }
            var MAP_SCALE_3 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
            var MAP_SCALE_4 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
            var temp_5 = MAP_SCALE_4.GetFloat("VAL");
            MAP_SCALE_3.SetFloat("VAL", temp_5 * 1.1f);
            yield break;
        }
        public IEnumerator OPENDOOR()
        {
            var SECRET_DOOR_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"SECRET_DOOR");
            var temp_3 = SECRET_DOOR_2.GetFloat("CEIL_HGT");
            var SECRET_DOOR_5 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"SECRET_DOOR");
            SECRET_DOOR_5.SetFloat("CEIL_HGT", temp_3 + 0.3f);
            var RENDER_MODE_7 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_7.SetFloat("VAL", 1f);
            var SECRET_DOOR_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"SECRET_DOOR");
            var temp_11 = SECRET_DOOR_10.GetFloat("CEIL_HGT");
            if (temp_11 > 16f)
            {
                _world.AcknexObject.SetString("EACH_TICK.10", null);
            }
            yield break;
        }
        public IEnumerator PULSDOWN()
        {
            var SPHERE_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
            var temp_3 = SPHERE_2.GetFloat("AMBIENT");
            var SPHERE_5 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
            SPHERE_5.SetFloat("AMBIENT", temp_3 + -0.1f);
            var SPHERE_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
            var temp_9 = SPHERE_8.GetFloat("AMBIENT");
            if (temp_9 < 0f)
            {
                var PULSUP_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"PULSUP");
                var SPHERE_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
                SPHERE_12.SetString("EACH_TICK", PULSUP_10.GetString("NAME"));
            }
            yield break;
        }
        public IEnumerator PULSUP()
        {
            var SPHERE_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
            var temp_3 = SPHERE_2.GetFloat("AMBIENT");
            var SPHERE_5 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
            SPHERE_5.SetFloat("AMBIENT", temp_3 + 0.1f);
            var SPHERE_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
            var temp_9 = SPHERE_8.GetFloat("AMBIENT");
            if (temp_9 > 1f)
            {
                var PULSDOWN_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"PULSDOWN");
                var SPHERE_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
                SPHERE_12.SetString("EACH_TICK", PULSDOWN_10.GetString("NAME"));
            }
            yield break;
        }
        public IEnumerator QUAKE()
        {
            var QUAKE_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"QUAKE");
            _world.AcknexObject.SetString("EACH_TICK.9", QUAKE_0.GetString("NAME"));
            var RICHTER_4 = _world.GetObject(ObjectType.Skill, "RICHTER");
            RICHTER_4.SetFloat("VAL", 0.1f);
            yield return new WaitForTicks(16f);
            var RICHTER_7 = _world.GetObject(ObjectType.Skill, "RICHTER");
            RICHTER_7.SetFloat("VAL", 0.3f);
            yield return new WaitForTicks(32f);
            var RICHTER_10 = _world.GetObject(ObjectType.Skill, "RICHTER");
            RICHTER_10.SetFloat("VAL", 0.5f);
            yield return new WaitForTicks(48f);
            var RICHTER_13 = _world.GetObject(ObjectType.Skill, "RICHTER");
            RICHTER_13.SetFloat("VAL", 0.2f);
            yield return new WaitForTicks(80f);
            var RICHTER_16 = _world.GetObject(ObjectType.Skill, "RICHTER");
            RICHTER_16.SetFloat("VAL", 0.6f);
            yield return new WaitForTicks(32f);
            var RICHTER_19 = _world.GetObject(ObjectType.Skill, "RICHTER");
            RICHTER_19.SetFloat("VAL", 0.1f);
            yield return new WaitForTicks(16f);
            var RICHTER_22 = _world.GetObject(ObjectType.Skill, "RICHTER");
            RICHTER_22.SetFloat("VAL", 0f);
            _world.AcknexObject.SetString("EACH_TICK.9", null);
            yield break;
        }
        public IEnumerator REGIO_ARISE()
        {
            var UNDERWATER_1 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            var temp_2 = UNDERWATER_1.GetFloat("VAL");
            if (temp_2 == 0f)
            {
                yield break;
            }
            var UNDERWATER_4 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            UNDERWATER_4.SetFloat("VAL", 0f);
            var PLAYER_ARC_5 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var PLAYER_ARC_6 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var temp_7 = PLAYER_ARC_6.GetFloat("VAL");
            PLAYER_ARC_5.SetFloat("VAL", temp_7 - 0.3f);
            var MY_SIZE_10 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var MY_SIZE_11 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var temp_12 = MY_SIZE_11.GetFloat("VAL");
            MY_SIZE_10.SetFloat("VAL", temp_12 + 0.2f);
            var PLAYER_SIZE_15 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_16 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var temp_17 = PLAYER_SIZE_16.GetFloat("VAL");
            PLAYER_SIZE_15.SetFloat("VAL", temp_17 + 0.2f);
            var PLAYER_Z_20 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_21 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var temp_22 = PLAYER_Z_21.GetFloat("VAL");
            PLAYER_Z_20.SetFloat("VAL", temp_22 + 0.2f);
            yield return _world.CallSynonymAction("SET_OVERWATER");
            yield return SET_SWIMMING();
            yield break;
        }
        public IEnumerator REGIO_DIVE()
        {
            var UNDERWATER_1 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            var temp_2 = UNDERWATER_1.GetFloat("VAL");
            if (temp_2 == 1f)
            {
                yield break;
            }
            var UNDERWATER_4 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            UNDERWATER_4.SetFloat("VAL", 1f);
            var PLAYER_ARC_5 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var PLAYER_ARC_6 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var temp_7 = PLAYER_ARC_6.GetFloat("VAL");
            PLAYER_ARC_5.SetFloat("VAL", temp_7 + 0.3f);
            var MY_SIZE_10 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var MY_SIZE_11 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var temp_12 = MY_SIZE_11.GetFloat("VAL");
            MY_SIZE_10.SetFloat("VAL", temp_12 - 0.2f);
            var PLAYER_SIZE_15 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_16 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var temp_17 = PLAYER_SIZE_16.GetFloat("VAL");
            PLAYER_SIZE_15.SetFloat("VAL", temp_17 - 0.2f);
            var PLAYER_Z_20 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_21 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var temp_22 = PLAYER_Z_21.GetFloat("VAL");
            PLAYER_Z_20.SetFloat("VAL", temp_22 - 0.2f);
            yield return _world.CallSynonymAction("SET_UNDERWATER");
            yield return SET_DIVING();
            yield break;
        }
        public IEnumerator RESET_BLUE()
        {
            //Unknown keyword: FADE_PAL
            yield break;
        }
        public IEnumerator SAVE_GAME()
        {
            var MOVE_MODE_1 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_1.SetFloat("VAL", 1f);
            //Unknown keyword: SAVE_INFO
            var LOAD_STATUS_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_STATUS");
            _world.AcknexObject.SetString("EACH_TICK.10", LOAD_STATUS_2.GetString("NAME"));
            var RESULT_6 = _world.GetObject(ObjectType.Skill, "RESULT");
            RESULT_6.SetFloat("VAL", 0f);
            var OK_7 = _world.AcknexObject.GetAcknexObject("OK");
            var SCREEN_TXT_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            SCREEN_TXT_9.SetAcknexObject("STRING", OK_7);
            yield return SHOW_MESSAGE();
            //Unknown keyword: SAVE
            _world.AcknexObject.SetString("EACH_TICK.10", null);
            var RESULT_14 = _world.GetObject(ObjectType.Skill, "RESULT");
            var temp_15 = RESULT_14.GetFloat("VAL");
            if (temp_15 < 0f)
            {
                var SAVE_NIX_16 = _world.AcknexObject.GetAcknexObject("SAVE_NIX");
                var SCREEN_TXT_18 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
                SCREEN_TXT_18.SetAcknexObject("STRING", SAVE_NIX_16);
            }
            yield break;
        }
        public IEnumerator SAVE_MENU()
        {
            //Unknown keyword: LOAD_INFO
            yield return CLEAR_MENU();
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
            var SAVE_NAME1_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_NAME1");
            _world.SetSynonymObject("MENU1_ACT", SAVE_NAME1_10);
            var SAVE_NAME2_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_NAME2");
            _world.SetSynonymObject("MENU2_ACT", SAVE_NAME2_12);
            var SAVE_NAME3_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_NAME3");
            _world.SetSynonymObject("MENU3_ACT", SAVE_NAME3_14);
            var SAVE_NAME4_16 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_NAME4");
            _world.SetSynonymObject("MENU4_ACT", SAVE_NAME4_16);
            var SAVE_NAME5_18 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_NAME5");
            _world.SetSynonymObject("MENU5_ACT", SAVE_NAME5_18);
            var MENU_POS_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            MENU_POS_22.SetFloat("MAX", 6f);
            yield return SHOW_MENU();
            yield break;
            yield break;
        }
        public IEnumerator SAVE_NAME1()
        {
            var MENU_POS_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            MENU_POS_2.SetFloat("MIN", 0f);
            var MENU_POS_4 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            MENU_POS_4.SetFloat("VAL", 0f);
            var SLOT_6 = _world.GetObject(ObjectType.Skill, "SLOT");
            SLOT_6.SetFloat("VAL", 1f);
            _world.ReadInkey("NAME1_STR");
            yield return CLEAR_MENU();
            yield return SAVE_GAME();
            yield break;
            yield break;
        }
        public IEnumerator SAVE_NAME2()
        {
            var MENU_POS_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            MENU_POS_2.SetFloat("MIN", 0f);
            var MENU_POS_4 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            MENU_POS_4.SetFloat("VAL", 0f);
            var SLOT_6 = _world.GetObject(ObjectType.Skill, "SLOT");
            SLOT_6.SetFloat("VAL", 2f);
            _world.ReadInkey("NAME2_STR");
            yield return CLEAR_MENU();
            yield return SAVE_GAME();
            yield break;
            yield break;
        }
        public IEnumerator SAVE_NAME3()
        {
            var MENU_POS_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            MENU_POS_2.SetFloat("MIN", 0f);
            var MENU_POS_4 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            MENU_POS_4.SetFloat("VAL", 0f);
            var SLOT_6 = _world.GetObject(ObjectType.Skill, "SLOT");
            SLOT_6.SetFloat("VAL", 3f);
            _world.ReadInkey("NAME3_STR");
            yield return CLEAR_MENU();
            yield return SAVE_GAME();
            yield break;
            yield break;
        }
        public IEnumerator SAVE_NAME4()
        {
            var MENU_POS_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            MENU_POS_2.SetFloat("MIN", 0f);
            var MENU_POS_4 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            MENU_POS_4.SetFloat("VAL", 0f);
            var SLOT_6 = _world.GetObject(ObjectType.Skill, "SLOT");
            SLOT_6.SetFloat("VAL", 4f);
            _world.ReadInkey("NAME4_STR");
            yield return CLEAR_MENU();
            yield return SAVE_GAME();
            yield break;
            yield break;
        }
        public IEnumerator SAVE_NAME5()
        {
            var MENU_POS_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            MENU_POS_2.SetFloat("MIN", 0f);
            var MENU_POS_4 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            MENU_POS_4.SetFloat("VAL", 0f);
            var SLOT_6 = _world.GetObject(ObjectType.Skill, "SLOT");
            SLOT_6.SetFloat("VAL", 5f);
            _world.ReadInkey("NAME5_STR");
            yield return CLEAR_MENU();
            yield return SAVE_GAME();
            yield break;
            yield break;
        }
        public IEnumerator SAVE_QUICK()
        {
            var SLOT_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            var temp_2 = SLOT_1.GetFloat("VAL");
            if (temp_2 == 0f)
            {
                yield return SAVE_MENU();
                yield break;
            }
            yield return CLEAR_MENU();
            var QSAV_YESNO_3 = _world.AcknexObject.GetAcknexObject("QSAV_YESNO");
            var SCREEN_TXT_5 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            SCREEN_TXT_5.SetAcknexObject("STRING", QSAV_YESNO_3);
            var SAVE_GAME_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_GAME");
            _world.AcknexObject.SetString("IF_J", SAVE_GAME_6.GetString("NAME"));
            var SAVE_GAME_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_GAME");
            _world.AcknexObject.SetString("IF_Y", SAVE_GAME_8.GetString("NAME"));
            var SAVE_GAME_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_GAME");
            _world.AcknexObject.SetString("IF_Z", SAVE_GAME_10.GetString("NAME"));
            yield return WAIT_YESNO();
            yield break;
        }
        public IEnumerator SET_ADJUST()
        {
            var ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_2 = ADJUST_MODE_1.GetFloat("VAL");
            if (temp_2 > -1f)
            {
                goto DISABLE;
            }
            var SCREEN_HGT_3 = _world.GetObject(ObjectType.Skill, "SCREEN_HGT");
            var temp_4 = SCREEN_HGT_3.GetFloat("VAL");
            var ADJUST_PANEL_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            ADJUST_PANEL_6.SetFloat("POS_Y", temp_4);
            var ADJUST_PANEL_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            var temp_10 = ADJUST_PANEL_9.GetFloat("POS_Y");
            var ADJUST_PANEL_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            ADJUST_PANEL_12.SetFloat("POS_Y", temp_10 + -12f);
            var SCREEN_HGT_13 = _world.GetObject(ObjectType.Skill, "SCREEN_HGT");
            var temp_14 = SCREEN_HGT_13.GetFloat("VAL");
            var ADJUST_TEXT_16 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            ADJUST_TEXT_16.SetFloat("POS_Y", temp_14);
            var ADJUST_TEXT_19 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            var temp_20 = ADJUST_TEXT_19.GetFloat("POS_Y");
            var ADJUST_TEXT_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            ADJUST_TEXT_22.SetFloat("POS_Y", temp_20 + -100f);
            var ADJUST_HELP_23 = _world.AcknexObject.GetAcknexObject("ADJUST_HELP");
            var ADJUST_TEXT_25 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            ADJUST_TEXT_25.SetAcknexObject("STRING", ADJUST_HELP_23);
            var ADJUST_TEXT_26 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.9", ADJUST_TEXT_26);
            var ADJUST_MODE_30 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_30.SetFloat("VAL", 99f);
            var temp_32 = _world.AcknexObject.GetAcknexObject("IF_W");
            _world.SetSynonymObject("AW_OLD", temp_32);
            var SET_WMODE_34 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_WMODE");
            _world.AcknexObject.SetString("IF_W", SET_WMODE_34.GetString("NAME"));
            var temp_37 = _world.AcknexObject.GetAcknexObject("IF_F");
            _world.SetSynonymObject("AF_OLD", temp_37);
            var SET_FMODE_39 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_FMODE");
            _world.AcknexObject.SetString("IF_F", SET_FMODE_39.GetString("NAME"));
            var temp_42 = _world.AcknexObject.GetAcknexObject("IF_C");
            _world.SetSynonymObject("AC_OLD", temp_42);
            var SET_CMODE_44 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_CMODE");
            _world.AcknexObject.SetString("IF_C", SET_CMODE_44.GetString("NAME"));
            var temp_47 = _world.AcknexObject.GetAcknexObject("IF_R");
            _world.SetSynonymObject("AR_OLD", temp_47);
            var SET_RMODE_49 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_RMODE");
            _world.AcknexObject.SetString("IF_R", SET_RMODE_49.GetString("NAME"));
            var temp_52 = _world.AcknexObject.GetAcknexObject("IF_A");
            _world.SetSynonymObject("AA_OLD", temp_52);
            var SET_AMODE_54 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_AMODE");
            _world.AcknexObject.SetString("IF_A", SET_AMODE_54.GetString("NAME"));
            var temp_57 = _world.AcknexObject.GetAcknexObject("IF_S");
            _world.SetSynonymObject("AS_OLD", temp_57);
            var SET_SMODE_59 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_SMODE");
            _world.AcknexObject.SetString("IF_S", SET_SMODE_59.GetString("NAME"));
            var temp_62 = _world.AcknexObject.GetAcknexObject("IF_B");
            _world.SetSynonymObject("AB_OLD", temp_62);
            var SET_BMODE_64 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_BMODE");
            _world.AcknexObject.SetString("IF_B", SET_BMODE_64.GetString("NAME"));
            var temp_67 = _world.AcknexObject.GetAcknexObject("IF_V");
            _world.SetSynonymObject("AV_OLD", temp_67);
            var SET_VMODE_69 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_VMODE");
            _world.AcknexObject.SetString("IF_V", SET_VMODE_69.GetString("NAME"));
            var temp_72 = _world.AcknexObject.GetAcknexObject("IF_Q");
            _world.SetSynonymObject("AQ_OLD", temp_72);
            var temp_75 = _world.AcknexObject.GetAcknexObject("IF_X");
            _world.SetSynonymObject("AX_OLD", temp_75);
            var temp_78 = _world.AcknexObject.GetAcknexObject("IF_5");
            _world.SetSynonymObject("A5_OLD", temp_78);
            var ADJUST_XMINUS_80 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"ADJUST_XMINUS");
            _world.AcknexObject.SetString("IF_5", ADJUST_XMINUS_80.GetString("NAME"));
            var temp_83 = _world.AcknexObject.GetAcknexObject("IF_6");
            _world.SetSynonymObject("A6_OLD", temp_83);
            var ADJUST_XPLUS_85 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"ADJUST_XPLUS");
            _world.AcknexObject.SetString("IF_6", ADJUST_XPLUS_85.GetString("NAME"));
            var temp_88 = _world.AcknexObject.GetAcknexObject("IF_7");
            _world.SetSynonymObject("A7_OLD", temp_88);
            var ADJUST_YMINUS_90 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"ADJUST_YMINUS");
            _world.AcknexObject.SetString("IF_7", ADJUST_YMINUS_90.GetString("NAME"));
            var temp_93 = _world.AcknexObject.GetAcknexObject("IF_8");
            _world.SetSynonymObject("A8_OLD", temp_93);
            var ADJUST_YPLUS_95 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"ADJUST_YPLUS");
            _world.AcknexObject.SetString("IF_8", ADJUST_YPLUS_95.GetString("NAME"));
            //Unknown keyword: BEEP
            yield break;
            DISABLE:
            _world.AcknexObject.SetAcknexObject("MESSAGES.9", null);
            //Unknown Property Type: World.PANELS.9
            var ADJUST_MODE_104 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_104.SetFloat("VAL", -1f);
            var AW_OLD_105 = _world.GetSynonymObject("AW_OLD");
            _world.AcknexObject.SetString("IF_W", AW_OLD_105.GetString("NAME"));
            var AF_OLD_107 = _world.GetSynonymObject("AF_OLD");
            _world.AcknexObject.SetString("IF_F", AF_OLD_107.GetString("NAME"));
            var AC_OLD_109 = _world.GetSynonymObject("AC_OLD");
            _world.AcknexObject.SetString("IF_C", AC_OLD_109.GetString("NAME"));
            var AR_OLD_111 = _world.GetSynonymObject("AR_OLD");
            _world.AcknexObject.SetString("IF_R", AR_OLD_111.GetString("NAME"));
            var AA_OLD_113 = _world.GetSynonymObject("AA_OLD");
            _world.AcknexObject.SetString("IF_A", AA_OLD_113.GetString("NAME"));
            var AS_OLD_115 = _world.GetSynonymObject("AS_OLD");
            _world.AcknexObject.SetString("IF_S", AS_OLD_115.GetString("NAME"));
            var AB_OLD_117 = _world.GetSynonymObject("AB_OLD");
            _world.AcknexObject.SetString("IF_B", AB_OLD_117.GetString("NAME"));
            var AV_OLD_119 = _world.GetSynonymObject("AV_OLD");
            _world.AcknexObject.SetString("IF_V", AV_OLD_119.GetString("NAME"));
            var AQ_OLD_121 = _world.GetSynonymObject("AQ_OLD");
            _world.AcknexObject.SetString("IF_Q", AQ_OLD_121.GetString("NAME"));
            var AX_OLD_123 = _world.GetSynonymObject("AX_OLD");
            _world.AcknexObject.SetString("IF_X", AX_OLD_123.GetString("NAME"));
            var A5_OLD_125 = _world.GetSynonymObject("A5_OLD");
            _world.AcknexObject.SetString("IF_5", A5_OLD_125.GetString("NAME"));
            var A6_OLD_127 = _world.GetSynonymObject("A6_OLD");
            _world.AcknexObject.SetString("IF_6", A6_OLD_127.GetString("NAME"));
            var A7_OLD_129 = _world.GetSynonymObject("A7_OLD");
            _world.AcknexObject.SetString("IF_7", A7_OLD_129.GetString("NAME"));
            var A8_OLD_131 = _world.GetSynonymObject("A8_OLD");
            _world.AcknexObject.SetString("IF_8", A8_OLD_131.GetString("NAME"));
            //Unknown keyword: BEEP
            yield break;
            yield break;
        }
        public IEnumerator SET_ADJX()
        {
            var ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_2 = ADJUST_MODE_1.GetFloat("VAL");
            if (temp_2 == 0f)
            {
                var ADJUST_X_3 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var temp_4 = ADJUST_X_3.GetFloat("VAL");
                var ADJUST_WALL_6 = _world.GetSynonymObject("ADJUST_WALL");
                ADJUST_WALL_6.SetFloat("OFFSET_X", temp_4);
            }
            var ADJUST_MODE_8 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_9 = ADJUST_MODE_8.GetFloat("VAL");
            if (temp_9 == 1f)
            {
                var ADJUST_X_10 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var temp_11 = ADJUST_X_10.GetFloat("VAL");
                var ADJUST_REG_13 = _world.GetSynonymObject("ADJUST_REG");
                ADJUST_REG_13.SetFloat("FLOOR_OFFS_X", temp_11);
            }
            var ADJUST_MODE_15 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_16 = ADJUST_MODE_15.GetFloat("VAL");
            if (temp_16 == 2f)
            {
                var ADJUST_X_17 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var temp_18 = ADJUST_X_17.GetFloat("VAL");
                var ADJUST_REG_20 = _world.GetSynonymObject("ADJUST_REG");
                ADJUST_REG_20.SetFloat("CEIL_OFFS_X", temp_18);
            }
            var ADJUST_MODE_22 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_23 = ADJUST_MODE_22.GetFloat("VAL");
            if (temp_23 == 3f)
            {
                var ADJUST_REG_25 = _world.GetSynonymObject("ADJUST_REG");
                var ADJUST_X_26 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var temp_27 = ADJUST_X_26.GetFloat("VAL");
                ADJUST_REG_25.SetFloat("FLOOR_HGT", temp_27 / 10f);
            }
            var ADJUST_MODE_31 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_32 = ADJUST_MODE_31.GetFloat("VAL");
            if (temp_32 == 4f)
            {
                var ADJUST_X_33 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var temp_34 = ADJUST_X_33.GetFloat("VAL");
                var ADJUST_TEX_36 = _world.GetSynonymObject("ADJUST_TEX");
                ADJUST_TEX_36.SetFloat("POS_X", temp_34);
            }
            var ADJUST_MODE_38 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_39 = ADJUST_MODE_38.GetFloat("VAL");
            if (temp_39 != 5f)
            {
                //Unknown keyword: SKIP
            }
            var ADJUST_TEX_41 = _world.GetSynonymObject("ADJUST_TEX");
            var ADJUST_X_42 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            var temp_43 = ADJUST_X_42.GetFloat("VAL");
            ADJUST_TEX_41.SetFloat("SCALE_X", temp_43 / 10f);
            //Unknown keyword: SET_ALL
            var ADJUST_MODE_47 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_48 = ADJUST_MODE_47.GetFloat("VAL");
            if (temp_48 == 6f)
            {
                var ADJUST_X_49 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var temp_50 = ADJUST_X_49.GetFloat("VAL");
                var ADJUST_WALL_52 = _world.GetSynonymObject("ADJUST_WALL");
                ADJUST_WALL_52.SetFloat("OFFSET_X", temp_50);
            }
            var ADJUST_MODE_54 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_55 = ADJUST_MODE_54.GetFloat("VAL");
            if (temp_55 != 7f)
            {
                //Unknown keyword: SKIP
            }
            var ADJUST_TEX_57 = _world.GetSynonymObject("ADJUST_TEX");
            var ADJUST_X_58 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            var temp_59 = ADJUST_X_58.GetFloat("VAL");
            ADJUST_TEX_57.SetFloat("AMBIENT", temp_59 / 10f);
            //Unknown keyword: SET_ALL
            var ADJUST_MODE_63 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_64 = ADJUST_MODE_63.GetFloat("VAL");
            if (temp_64 == 8f)
            {
                var ADJUST_REG_66 = _world.GetSynonymObject("ADJUST_REG");
                var ADJUST_X_67 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var temp_68 = ADJUST_X_67.GetFloat("VAL");
                ADJUST_REG_66.SetFloat("AMBIENT", temp_68 / 10f);
            }
            var RENDER_MODE_72 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_72.SetFloat("VAL", 1f);
            yield break;
        }
        public IEnumerator SET_ADJY()
        {
            var ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_2 = ADJUST_MODE_1.GetFloat("VAL");
            if (temp_2 == 0f)
            {
                var ADJUST_Y_3 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var temp_4 = ADJUST_Y_3.GetFloat("VAL");
                var ADJUST_WALL_6 = _world.GetSynonymObject("ADJUST_WALL");
                ADJUST_WALL_6.SetFloat("OFFSET_Y", temp_4);
            }
            var ADJUST_MODE_8 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_9 = ADJUST_MODE_8.GetFloat("VAL");
            if (temp_9 == 1f)
            {
                var ADJUST_Y_10 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var temp_11 = ADJUST_Y_10.GetFloat("VAL");
                var ADJUST_REG_13 = _world.GetSynonymObject("ADJUST_REG");
                ADJUST_REG_13.SetFloat("FLOOR_OFFS_Y", temp_11);
            }
            var ADJUST_MODE_15 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_16 = ADJUST_MODE_15.GetFloat("VAL");
            if (temp_16 == 2f)
            {
                var ADJUST_Y_17 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var temp_18 = ADJUST_Y_17.GetFloat("VAL");
                var ADJUST_REG_20 = _world.GetSynonymObject("ADJUST_REG");
                ADJUST_REG_20.SetFloat("CEIL_OFFS_Y", temp_18);
            }
            var ADJUST_MODE_22 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_23 = ADJUST_MODE_22.GetFloat("VAL");
            if (temp_23 == 3f)
            {
                var ADJUST_REG_25 = _world.GetSynonymObject("ADJUST_REG");
                var ADJUST_Y_26 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var temp_27 = ADJUST_Y_26.GetFloat("VAL");
                ADJUST_REG_25.SetFloat("CEIL_HGT", temp_27 / 10f);
            }
            var ADJUST_MODE_31 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_32 = ADJUST_MODE_31.GetFloat("VAL");
            if (temp_32 == 4f)
            {
                var ADJUST_Y_33 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var temp_34 = ADJUST_Y_33.GetFloat("VAL");
                var ADJUST_TEX_36 = _world.GetSynonymObject("ADJUST_TEX");
                ADJUST_TEX_36.SetFloat("POS_Y", temp_34);
            }
            var ADJUST_MODE_38 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_39 = ADJUST_MODE_38.GetFloat("VAL");
            if (temp_39 != 5f)
            {
                //Unknown keyword: SKIP
            }
            var ADJUST_TEX_41 = _world.GetSynonymObject("ADJUST_TEX");
            var ADJUST_Y_42 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            var temp_43 = ADJUST_Y_42.GetFloat("VAL");
            ADJUST_TEX_41.SetFloat("SCALE_Y", temp_43 / 10f);
            //Unknown keyword: SET_ALL
            var ADJUST_MODE_47 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_48 = ADJUST_MODE_47.GetFloat("VAL");
            if (temp_48 == 6f)
            {
                var ADJUST_WALL_50 = _world.GetSynonymObject("ADJUST_WALL");
                var ADJUST_Y_51 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var temp_52 = ADJUST_Y_51.GetFloat("VAL");
                ADJUST_WALL_50.SetFloat("POSITION", temp_52 / 10f);
            }
            var ADJUST_MODE_56 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_57 = ADJUST_MODE_56.GetFloat("VAL");
            if (temp_57 != 7f)
            {
                //Unknown keyword: SKIP
            }
            var ADJUST_TEX_59 = _world.GetSynonymObject("ADJUST_TEX");
            var ADJUST_Y_60 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            var temp_61 = ADJUST_Y_60.GetFloat("VAL");
            ADJUST_TEX_59.SetFloat("ALBEDO", temp_61 / 10f);
            //Unknown keyword: SET_ALL
            var RENDER_MODE_65 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_65.SetFloat("VAL", 1f);
            yield break;
        }
        public IEnumerator SET_AMODE()
        {
            var ADJUST_PANEL_1 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            var temp_2 = ADJUST_PANEL_1.GetFloat("POS_Y");
            var ADJUST_TEXT_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            ADJUST_TEXT_4.SetFloat("POS_Y", temp_2);
            var ADJUST_MODE_6 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_7 = ADJUST_MODE_6.GetFloat("VAL");
            if (temp_7 == 4f)
            {
                goto NEXT_TEX;
            }
            _world.Shoot();
            var HIT_DIST_9 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var temp_10 = HIT_DIST_9.GetFloat("VAL");
            if (temp_10 == 0f)
            {
                yield break;
            }
            var ADJUST_MODE_12 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_12.SetFloat("VAL", 4f);
            var ATTACH_MODE_13 = _world.AcknexObject.GetAcknexObject("ATTACH_MODE");
            var ADJUST_TEXT_15 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            ADJUST_TEXT_15.SetAcknexObject("STRING", ATTACH_MODE_13);
            var ADJUST_PANEL_16 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            //Unknown Property Type: World.PANELS.9
            var HIT_20 = _world.GetSynonymObject("HIT");
            var temp_21 = HIT_20.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("ADJUST_TEX", temp_21);
            NEXT_TEX:
            var ADJUST_TEX_25 = _world.GetSynonymObject("ADJUST_TEX");
            var temp_26 = ADJUST_TEX_25.GetAcknexObject("ATTACH");
            if (temp_26 != null)
            {
                goto SET_TEX;
            }
            var HIT_28 = _world.GetSynonymObject("HIT");
            var temp_29 = HIT_28.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("ADJUST_TEX", temp_29);
            var ADJUST_TEX_33 = _world.GetSynonymObject("ADJUST_TEX");
            var temp_34 = ADJUST_TEX_33.GetAcknexObject("ATTACH");
            if (temp_34 == null)
            {
                yield break;
            }
            SET_TEX:
            var ADJUST_TEX_36 = _world.GetSynonymObject("ADJUST_TEX");
            var temp_37 = ADJUST_TEX_36.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("ADJUST_TEX", temp_37);
            yield return GET_ADJX();
            yield return GET_ADJY();
            yield break;
        }
        public IEnumerator SET_BLUE()
        {
            //Unknown keyword: FADE_PAL
            yield break;
        }
        public IEnumerator SET_BMODE()
        {
            var ADJUST_PANEL_1 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            var temp_2 = ADJUST_PANEL_1.GetFloat("POS_Y");
            var ADJUST_TEXT_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            ADJUST_TEXT_4.SetFloat("POS_Y", temp_2);
            _world.Shoot();
            var HIT_DIST_6 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var temp_7 = HIT_DIST_6.GetFloat("VAL");
            if (temp_7 == 0f)
            {
                yield break;
            }
            var ADJUST_PANEL_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            //Unknown Property Type: World.PANELS.9
            var HIT_12 = _world.GetSynonymObject("HIT");
            var temp_13 = HIT_12.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("ADJUST_TEX", temp_13);
            var HIT_15 = _world.GetSynonymObject("HIT");
            _world.SetSynonymObject("ADJUST_WALL", HIT_15);
            var ADJUST_MODE_18 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_18.SetFloat("VAL", 7f);
            var AMBIENT_MODE_19 = _world.AcknexObject.GetAcknexObject("AMBIENT_MODE");
            var ADJUST_TEXT_21 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            ADJUST_TEXT_21.SetAcknexObject("STRING", AMBIENT_MODE_19);
            yield return GET_ADJX();
            yield return GET_ADJY();
            yield break;
        }
        public IEnumerator SET_CMODE()
        {
            var ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_1.SetFloat("VAL", 2f);
            var ADJUST_PANEL_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            var temp_4 = ADJUST_PANEL_3.GetFloat("POS_Y");
            var ADJUST_TEXT_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            ADJUST_TEXT_6.SetFloat("POS_Y", temp_4);
            var CEIL_MODE_7 = _world.AcknexObject.GetAcknexObject("CEIL_MODE");
            var ADJUST_TEXT_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            ADJUST_TEXT_9.SetAcknexObject("STRING", CEIL_MODE_7);
            var HERE_10 = _world.GetSynonymObject("HERE");
            _world.SetSynonymObject("ADJUST_REG", HERE_10);
            var ADJUST_PANEL_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            //Unknown Property Type: World.PANELS.9
            yield return GET_ADJX();
            yield return GET_ADJY();
            yield break;
        }
        public IEnumerator SET_DEBUG()
        {
            var UPDATE_DBPANEL_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"UPDATE_DBPANEL");
            _world.AcknexObject.SetString("EACH_TICK.10", UPDATE_DBPANEL_0.GetString("NAME"));
            var DEBUG_PANEL_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"DEBUG_PANEL");
            //Unknown Property Type: World.PANELS.10
            var DEBUG_TEXT_1_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"DEBUG_TEXT_1");
            _world.AcknexObject.SetAcknexObject("MESSAGES.10", DEBUG_TEXT_1_6);
            yield break;
        }
        public IEnumerator SET_DIFF1()
        {
            var DIFFICULTY_1 = _world.GetObject(ObjectType.Skill, "DIFFICULTY");
            DIFFICULTY_1.SetFloat("VAL", 1f);
            yield return LEVEL_MENU();
            yield break;
            yield break;
        }
        public IEnumerator SET_DIFF2()
        {
            var DIFFICULTY_1 = _world.GetObject(ObjectType.Skill, "DIFFICULTY");
            DIFFICULTY_1.SetFloat("VAL", 2f);
            yield return LEVEL_MENU();
            yield break;
            yield break;
        }
        public IEnumerator SET_DIFF3()
        {
            var DIFFICULTY_1 = _world.GetObject(ObjectType.Skill, "DIFFICULTY");
            DIFFICULTY_1.SetFloat("VAL", 3f);
            yield return LEVEL_MENU();
            yield break;
            yield break;
        }
        public IEnumerator SET_DIFF4()
        {
            var DIFFICULTY_1 = _world.GetObject(ObjectType.Skill, "DIFFICULTY");
            DIFFICULTY_1.SetFloat("VAL", 4f);
            yield return LEVEL_MENU();
            yield break;
            yield break;
        }
        public IEnumerator SET_DIVING()
        {
            var FRIC_1 = _world.GetObject(ObjectType.Skill, "FRIC");
            FRIC_1.SetFloat("VAL", 0.3f);
            var MODE_TAUCHEN_2 = _world.GetObject(ObjectType.Skill, "MODE_TAUCHEN");
            var temp_3 = MODE_TAUCHEN_2.GetFloat("VAL");
            var MOVING_4 = _world.GetObject(ObjectType.Skill, "MOVING");
            MOVING_4.SetFloat("VAL", temp_3);
            var STRENGTH_6 = _world.GetObject(ObjectType.Skill, "STRENGTH");
            STRENGTH_6.SetFloat("VAL", 0.1f);
            var WAVE_STR_8 = _world.GetObject(ObjectType.Skill, "WAVE_STR");
            WAVE_STR_8.SetFloat("VAL", 0.03f);
            var FLOAT_STR_10 = _world.GetObject(ObjectType.Skill, "FLOAT_STR");
            FLOAT_STR_10.SetFloat("VAL", 0.05f);
            var DUCK_STR_12 = _world.GetObject(ObjectType.Skill, "DUCK_STR");
            DUCK_STR_12.SetFloat("VAL", 0f);
            var FRIC_AIR_14 = _world.GetObject(ObjectType.Skill, "FRIC_AIR");
            FRIC_AIR_14.SetFloat("VAL", 0.7f);
            var GRAVITY_16 = _world.GetObject(ObjectType.Skill, "GRAVITY");
            GRAVITY_16.SetFloat("VAL", 0f);
            var MOVE_ME_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MOVE_ME");
            _world.AcknexObject.SetString("EACH_TICK.16", MOVE_ME_17.GetString("NAME"));
            yield break;
        }
        public IEnumerator SET_FMODE()
        {
            var ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_1.SetFloat("VAL", 1f);
            var ADJUST_PANEL_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            var temp_4 = ADJUST_PANEL_3.GetFloat("POS_Y");
            var ADJUST_TEXT_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            ADJUST_TEXT_6.SetFloat("POS_Y", temp_4);
            var FLO_MODE_7 = _world.AcknexObject.GetAcknexObject("FLO_MODE");
            var ADJUST_TEXT_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            ADJUST_TEXT_9.SetAcknexObject("STRING", FLO_MODE_7);
            var HERE_10 = _world.GetSynonymObject("HERE");
            _world.SetSynonymObject("ADJUST_REG", HERE_10);
            var ADJUST_PANEL_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            //Unknown Property Type: World.PANELS.9
            yield return GET_ADJX();
            yield return GET_ADJY();
            yield break;
        }
        public IEnumerator SET_MENU()
        {
            var MENU1_STR_0 = _world.GetSynonymObject("MENU1_STR");
            var MENU1_TXT_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU1_TXT");
            MENU1_TXT_2.SetAcknexObject("STRING", MENU1_STR_0);
            var MENU2_STR_3 = _world.GetSynonymObject("MENU2_STR");
            var MENU2_TXT_5 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU2_TXT");
            MENU2_TXT_5.SetAcknexObject("STRING", MENU2_STR_3);
            var MENU3_STR_6 = _world.GetSynonymObject("MENU3_STR");
            var MENU3_TXT_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU3_TXT");
            MENU3_TXT_8.SetAcknexObject("STRING", MENU3_STR_6);
            var MENU4_STR_9 = _world.GetSynonymObject("MENU4_STR");
            var MENU4_TXT_11 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU4_TXT");
            MENU4_TXT_11.SetAcknexObject("STRING", MENU4_STR_9);
            var MENU5_STR_12 = _world.GetSynonymObject("MENU5_STR");
            var MENU5_TXT_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU5_TXT");
            MENU5_TXT_14.SetAcknexObject("STRING", MENU5_STR_12);
            var MENU6_STR_15 = _world.GetSynonymObject("MENU6_STR");
            var MENU6_TXT_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU6_TXT");
            MENU6_TXT_17.SetAcknexObject("STRING", MENU6_STR_15);
            var EXIT_STR_18 = _world.AcknexObject.GetAcknexObject("EXIT_STR");
            var MENUEXIT_TXT_20 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENUEXIT_TXT");
            MENUEXIT_TXT_20.SetAcknexObject("STRING", EXIT_STR_18);
            yield break;
        }
        public IEnumerator SET_MOVING()
        {
            var MOVING_1 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_2 = MOVING_1.GetFloat("VAL");
            if (temp_2 == 0f)
            {
                yield break;
            }
            var MODE_GEHEN_3 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var temp_4 = MODE_GEHEN_3.GetFloat("VAL");
            var MOVING_5 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_6 = MOVING_5.GetFloat("VAL");
            if (temp_6 == temp_4)
            {
                yield return SET_WALKING();
                yield break;
            }
            var MODE_SCHWIMMEN_7 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var temp_8 = MODE_SCHWIMMEN_7.GetFloat("VAL");
            var MOVING_9 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_10 = MOVING_9.GetFloat("VAL");
            if (temp_10 == temp_8)
            {
                yield return SET_SWIMMING();
                yield break;
            }
            var MODE_TAUCHEN_11 = _world.GetObject(ObjectType.Skill, "MODE_TAUCHEN");
            var temp_12 = MODE_TAUCHEN_11.GetFloat("VAL");
            var MOVING_13 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_14 = MOVING_13.GetFloat("VAL");
            if (temp_14 == temp_12)
            {
                yield return SET_DIVING();
                yield break;
            }
            yield break;
        }
        public IEnumerator SET_RMODE()
        {
            var ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_1.SetFloat("VAL", 3f);
            var ADJUST_PANEL_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            var temp_4 = ADJUST_PANEL_3.GetFloat("POS_Y");
            var ADJUST_TEXT_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            ADJUST_TEXT_6.SetFloat("POS_Y", temp_4);
            var REGIO_MODE_7 = _world.AcknexObject.GetAcknexObject("REGIO_MODE");
            var ADJUST_TEXT_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            ADJUST_TEXT_9.SetAcknexObject("STRING", REGIO_MODE_7);
            var HERE_10 = _world.GetSynonymObject("HERE");
            _world.SetSynonymObject("ADJUST_REG", HERE_10);
            var ADJUST_PANEL_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            //Unknown Property Type: World.PANELS.9
            yield return GET_ADJX();
            yield return GET_ADJY();
            yield break;
        }
        public IEnumerator SET_SMODE()
        {
            var ADJUST_PANEL_1 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            var temp_2 = ADJUST_PANEL_1.GetFloat("POS_Y");
            var ADJUST_TEXT_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            ADJUST_TEXT_4.SetFloat("POS_Y", temp_2);
            _world.Shoot();
            var HIT_DIST_6 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var temp_7 = HIT_DIST_6.GetFloat("VAL");
            if (temp_7 == 0f)
            {
                yield break;
            }
            var ADJUST_PANEL_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            //Unknown Property Type: World.PANELS.9
            var HIT_12 = _world.GetSynonymObject("HIT");
            var temp_13 = HIT_12.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("ADJUST_TEX", temp_13);
            var HIT_15 = _world.GetSynonymObject("HIT");
            _world.SetSynonymObject("ADJUST_WALL", HIT_15);
            var ADJUST_MODE_18 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_18.SetFloat("VAL", 5f);
            var SCALE_MODE_19 = _world.AcknexObject.GetAcknexObject("SCALE_MODE");
            var ADJUST_TEXT_21 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            ADJUST_TEXT_21.SetAcknexObject("STRING", SCALE_MODE_19);
            yield return GET_ADJX();
            yield return GET_ADJY();
            yield break;
        }
        public IEnumerator SET_SWIMMING()
        {
            var FRIC_1 = _world.GetObject(ObjectType.Skill, "FRIC");
            FRIC_1.SetFloat("VAL", 0.3f);
            var MODE_SCHWIMMEN_2 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var temp_3 = MODE_SCHWIMMEN_2.GetFloat("VAL");
            var MOVING_4 = _world.GetObject(ObjectType.Skill, "MOVING");
            MOVING_4.SetFloat("VAL", temp_3);
            var STRENGTH_6 = _world.GetObject(ObjectType.Skill, "STRENGTH");
            STRENGTH_6.SetFloat("VAL", 0.15f);
            var WAVE_STR_8 = _world.GetObject(ObjectType.Skill, "WAVE_STR");
            WAVE_STR_8.SetFloat("VAL", 0.08f);
            var FLOAT_STR_10 = _world.GetObject(ObjectType.Skill, "FLOAT_STR");
            FLOAT_STR_10.SetFloat("VAL", 0f);
            var DUCK_STR_12 = _world.GetObject(ObjectType.Skill, "DUCK_STR");
            DUCK_STR_12.SetFloat("VAL", 0.2f);
            var FRIC_AIR_14 = _world.GetObject(ObjectType.Skill, "FRIC_AIR");
            FRIC_AIR_14.SetFloat("VAL", 0.5f);
            var GRAVITY_16 = _world.GetObject(ObjectType.Skill, "GRAVITY");
            GRAVITY_16.SetFloat("VAL", -0.05f);
            var MOVE_ME_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MOVE_ME");
            _world.AcknexObject.SetString("EACH_TICK.16", MOVE_ME_17.GetString("NAME"));
            yield break;
        }
        public IEnumerator SET_VMODE()
        {
            var ADJUST_MODE_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_1.SetFloat("VAL", 8f);
            var ADJUST_PANEL_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            var temp_4 = ADJUST_PANEL_3.GetFloat("POS_Y");
            var ADJUST_TEXT_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            ADJUST_TEXT_6.SetFloat("POS_Y", temp_4);
            var REGAMB_MODE_7 = _world.AcknexObject.GetAcknexObject("REGAMB_MODE");
            var ADJUST_TEXT_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            ADJUST_TEXT_9.SetAcknexObject("STRING", REGAMB_MODE_7);
            var HERE_10 = _world.GetSynonymObject("HERE");
            _world.SetSynonymObject("ADJUST_REG", HERE_10);
            var ADJUST_PANEL_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            //Unknown Property Type: World.PANELS.9
            yield return GET_ADJX();
            yield return GET_ADJY();
            yield break;
        }
        public IEnumerator SET_WALKING()
        {
            var MODE_GEHEN_0 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var temp_1 = MODE_GEHEN_0.GetFloat("VAL");
            var MOVING_2 = _world.GetObject(ObjectType.Skill, "MOVING");
            MOVING_2.SetFloat("VAL", temp_1);
            var FRIC_4 = _world.GetObject(ObjectType.Skill, "FRIC");
            FRIC_4.SetFloat("VAL", 0.2f);
            var STRENGTH_6 = _world.GetObject(ObjectType.Skill, "STRENGTH");
            STRENGTH_6.SetFloat("VAL", 0.15f);
            var WAVE_STR_8 = _world.GetObject(ObjectType.Skill, "WAVE_STR");
            WAVE_STR_8.SetFloat("VAL", 0f);
            var FLOAT_STR_10 = _world.GetObject(ObjectType.Skill, "FLOAT_STR");
            FLOAT_STR_10.SetFloat("VAL", 0f);
            var DUCK_STR_12 = _world.GetObject(ObjectType.Skill, "DUCK_STR");
            DUCK_STR_12.SetFloat("VAL", 0.5f);
            var FRIC_AIR_14 = _world.GetObject(ObjectType.Skill, "FRIC_AIR");
            FRIC_AIR_14.SetFloat("VAL", 0.04f);
            var GRAVITY_16 = _world.GetObject(ObjectType.Skill, "GRAVITY");
            GRAVITY_16.SetFloat("VAL", -0.13f);
            var MOVE_ME_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MOVE_ME");
            _world.AcknexObject.SetString("EACH_TICK.16", MOVE_ME_17.GetString("NAME"));
            yield break;
        }
        public IEnumerator SET_WMODE()
        {
            var ADJUST_PANEL_1 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            var temp_2 = ADJUST_PANEL_1.GetFloat("POS_Y");
            var ADJUST_TEXT_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            ADJUST_TEXT_4.SetFloat("POS_Y", temp_2);
            _world.Shoot();
            var HIT_DIST_6 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var temp_7 = HIT_DIST_6.GetFloat("VAL");
            if (temp_7 == 0f)
            {
                yield break;
            }
            var ADJUST_PANEL_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            //Unknown Property Type: World.PANELS.9
            var HIT_11 = _world.GetSynonymObject("HIT");
            _world.SetSynonymObject("ADJUST_WALL", HIT_11);
            var ADJUST_WALL_15 = _world.GetSynonymObject("ADJUST_WALL");
            var temp_16 = ADJUST_WALL_15.GetFloat("FENCE");
            if (temp_16 == 1f)
            {
                goto SET_POSMODE;
            }
            var ADJUST_MODE_18 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_18.SetFloat("VAL", 0f);
            var WALL_MODE_19 = _world.AcknexObject.GetAcknexObject("WALL_MODE");
            var ADJUST_TEXT_21 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            ADJUST_TEXT_21.SetAcknexObject("STRING", WALL_MODE_19);
            yield return GET_ADJX();
            yield return GET_ADJY();
            yield break;
            SET_POSMODE:
            var ADJUST_MODE_23 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            ADJUST_MODE_23.SetFloat("VAL", 6f);
            var POS_MODE_24 = _world.AcknexObject.GetAcknexObject("POS_MODE");
            var ADJUST_TEXT_26 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            ADJUST_TEXT_26.SetAcknexObject("STRING", POS_MODE_24);
            yield return GET_ADJX();
            yield return GET_ADJY();
            yield break;
        }
        public IEnumerator SHOW_MENU()
        {
            var MENU_EXEC_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MENU_EXEC");
            _world.AcknexObject.SetString("IF_ENTER", MENU_EXEC_0.GetString("NAME"));
            var CLEAR_MENU_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CLEAR_MENU");
            _world.AcknexObject.SetString("IF_ESC", CLEAR_MENU_2.GetString("NAME"));
            var MENU_UP_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MENU_UP");
            _world.AcknexObject.SetString("IF_CUU", MENU_UP_4.GetString("NAME"));
            var MENU_DOWN_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MENU_DOWN");
            _world.AcknexObject.SetString("IF_CUD", MENU_DOWN_6.GetString("NAME"));
            var MOVE_MODE_9 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_9.SetFloat("VAL", 0f);
            var MENU_POS_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            MENU_POS_12.SetFloat("MIN", 1f);
            var MENU_POS_14 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_15 = MENU_POS_14.GetFloat("VAL");
            if (temp_15 == 0f)
            {
                var MENU_POS_17 = _world.GetObject(ObjectType.Skill, "MENU_POS");
                MENU_POS_17.SetFloat("VAL", 1f);
            }
            var MENUEXIT_TXT_19 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENUEXIT_TXT");
            var MENU1_TXT_21 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU1_TXT");
            var temp_22 = MENU1_TXT_21.GetFloat("POS_Y");
            var MENU_POS_25 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            var temp_26 = MENU_POS_25.GetFloat("MAX");
            MENUEXIT_TXT_19.SetFloat("POS_Y", temp_22 + temp_26 * 16f - 8f);
            var MENU1_TXT_31 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU1_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.10", MENU1_TXT_31);
            var MENU2_TXT_34 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU2_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.11", MENU2_TXT_34);
            var MENU3_TXT_37 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU3_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.12", MENU3_TXT_37);
            var MENU4_TXT_40 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU4_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.13", MENU4_TXT_40);
            var MENU5_TXT_43 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU5_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", MENU5_TXT_43);
            var MENU6_TXT_46 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU6_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.15", MENU6_TXT_46);
            var MENUEXIT_TXT_49 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENUEXIT_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", MENUEXIT_TXT_49);
            BLINK:
            yield return SET_MENU();
            yield return new WaitForTicks(3f);
            var MENU_POS_53 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_54 = MENU_POS_53.GetFloat("VAL");
            if (temp_54 > MENU_POS_53.GetFloat("MAX"))
            {
                var EMPTY_55 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var MENUEXIT_TXT_57 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENUEXIT_TXT");
                MENUEXIT_TXT_57.SetAcknexObject("STRING", EMPTY_55);
            }
            var MENU_POS_59 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_60 = MENU_POS_59.GetFloat("VAL");
            if (temp_60 == 1f)
            {
                var EMPTY_61 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var MENU1_TXT_63 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU1_TXT");
                MENU1_TXT_63.SetAcknexObject("STRING", EMPTY_61);
            }
            var MENU_POS_65 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_66 = MENU_POS_65.GetFloat("VAL");
            if (temp_66 == 2f)
            {
                var EMPTY_67 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var MENU2_TXT_69 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU2_TXT");
                MENU2_TXT_69.SetAcknexObject("STRING", EMPTY_67);
            }
            var MENU_POS_71 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_72 = MENU_POS_71.GetFloat("VAL");
            if (temp_72 == 3f)
            {
                var EMPTY_73 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var MENU3_TXT_75 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU3_TXT");
                MENU3_TXT_75.SetAcknexObject("STRING", EMPTY_73);
            }
            var MENU_POS_77 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_78 = MENU_POS_77.GetFloat("VAL");
            if (temp_78 == 4f)
            {
                var EMPTY_79 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var MENU4_TXT_81 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU4_TXT");
                MENU4_TXT_81.SetAcknexObject("STRING", EMPTY_79);
            }
            var MENU_POS_83 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_84 = MENU_POS_83.GetFloat("VAL");
            if (temp_84 == 5f)
            {
                var EMPTY_85 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var MENU5_TXT_87 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU5_TXT");
                MENU5_TXT_87.SetAcknexObject("STRING", EMPTY_85);
            }
            var MENU_POS_89 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_90 = MENU_POS_89.GetFloat("VAL");
            if (temp_90 == 6f)
            {
                var EMPTY_91 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var MENU6_TXT_93 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU6_TXT");
                MENU6_TXT_93.SetAcknexObject("STRING", EMPTY_91);
            }
            var MENU_POS_95 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_96 = MENU_POS_95.GetFloat("VAL");
            if (temp_96 == 0f)
            {
                yield break;
            }
            yield return new WaitForTicks(3f);
            goto BLINK;
            yield break;
        }
        public IEnumerator SHOW_MESSAGE()
        {
            var SCREEN_TXT_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", SCREEN_TXT_0);
            yield return new WaitForTicks(48f);
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", null);
            yield break;
        }
        public IEnumerator SHOW_OPTIONS()
        {
            yield return CLEAR_MENU();
            var OPTION_STR_0 = _world.AcknexObject.GetAcknexObject("OPTION_STR");
            var SCREEN_TXT_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            SCREEN_TXT_2.SetAcknexObject("STRING", OPTION_STR_0);
            yield return WAIT_YESNO();
            yield break;
        }
        public IEnumerator START_LEVEL1()
        {
            //Unknown keyword: SAVE_INFO
            yield break;
        }
        public IEnumerator START_LEVEL2()
        {
            //Unknown keyword: SAVE_INFO
            yield break;
        }
        public IEnumerator START_LEVEL3()
        {
            //Unknown keyword: SAVE_INFO
            yield break;
        }
        public IEnumerator START_LEVEL4()
        {
            //Unknown keyword: SAVE_INFO
            yield break;
        }
        public IEnumerator START_LEVEL5()
        {
            //Unknown keyword: SAVE_INFO
            yield break;
        }
        public IEnumerator START_QUAKE()
        {
            yield return QUAKE();
            yield break;
            yield break;
        }
        public IEnumerator STOP_MOVING()
        {
            var PLAYER_VX_1 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            PLAYER_VX_1.SetFloat("VAL", 0f);
            var PLAYER_VY_3 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            PLAYER_VY_3.SetFloat("VAL", 0f);
            var PLAYER_VZ_5 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            PLAYER_VZ_5.SetFloat("VAL", 0f);
            var PLAYER_VROT_7 = _world.GetObject(ObjectType.Skill, "PLAYER_VROT");
            PLAYER_VROT_7.SetFloat("VAL", 0f);
            yield break;
        }
        public IEnumerator TOGGLE_MAP()
        {
            var MAP_ROT_1 = _world.GetObject(ObjectType.Skill, "MAP_ROT");
            MAP_ROT_1.SetFloat("VAL", 1f);
            var MAP_MODE_3 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            var temp_4 = MAP_MODE_3.GetFloat("VAL");
            var MAP_MODE_5 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            MAP_MODE_5.SetFloat("VAL", temp_4 + 0.5f);
            var MAP_MODE_7 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            var temp_8 = MAP_MODE_7.GetFloat("VAL");
            if (temp_8 > 0.5f)
            {
                var MAP_MODE_10 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
                MAP_MODE_10.SetFloat("VAL", 0f);
            }
            yield break;
        }
        public IEnumerator TOGGLE_MBLUR()
        {
            var MOTION_BLUR_1 = _world.GetObject(ObjectType.Skill, "MOTION_BLUR");
            var temp_2 = MOTION_BLUR_1.GetFloat("VAL");
            var MOTION_BLUR_3 = _world.GetObject(ObjectType.Skill, "MOTION_BLUR");
            MOTION_BLUR_3.SetFloat("VAL", temp_2 + 0.5f);
            var MOTION_BLUR_5 = _world.GetObject(ObjectType.Skill, "MOTION_BLUR");
            var temp_6 = MOTION_BLUR_5.GetFloat("VAL");
            if (temp_6 > 0.5f)
            {
                var MOTION_BLUR_8 = _world.GetObject(ObjectType.Skill, "MOTION_BLUR");
                MOTION_BLUR_8.SetFloat("VAL", 0f);
            }
            var MBLUR_ON_9 = _world.AcknexObject.GetAcknexObject("MBLUR_ON");
            var SCREEN_TXT_11 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            SCREEN_TXT_11.SetAcknexObject("STRING", MBLUR_ON_9);
            var MOTION_BLUR_13 = _world.GetObject(ObjectType.Skill, "MOTION_BLUR");
            var temp_14 = MOTION_BLUR_13.GetFloat("VAL");
            if (temp_14 == 0f)
            {
                var MBLUR_OFF_15 = _world.AcknexObject.GetAcknexObject("MBLUR_OFF");
                var SCREEN_TXT_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
                SCREEN_TXT_17.SetAcknexObject("STRING", MBLUR_OFF_15);
            }
            yield return SHOW_MESSAGE();
            yield break;
            yield break;
        }
        public IEnumerator TUNIX()
        {
            yield break;
            yield break;
        }
        public IEnumerator UPDATE_DBPANEL()
        {
            var FPS_0 = _world.GetObject(ObjectType.Skill, "FPS");
            var FPS_3 = _world.GetObject(ObjectType.Skill, "FPS");
            var temp_4 = FPS_3.GetFloat("VAL");
            var TIME_FAC_8 = _world.GetObject(ObjectType.Skill, "TIME_FAC");
            var temp_9 = TIME_FAC_8.GetFloat("VAL");
            FPS_0.SetFloat("VAL", 0.9f * temp_4 + 0.1f * temp_9);
            yield break;
        }
        public IEnumerator VRDEMO_START()
        {
            //Unknown keyword: PLAY_SONG
            yield return SET_WALKING();
            var MY_SIZE_1 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            MY_SIZE_1.SetFloat("VAL", 5f);
            var DIVE_UP_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"DIVE_UP");
            _world.SetSynonymObject("SET_OVERWATER", DIVE_UP_2);
            yield break;
        }
        public IEnumerator WAIT_YESNO()
        {
            var SCREEN_TXT_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", SCREEN_TXT_0);
            var MOVE_MODE_4 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_4.SetFloat("VAL", 0f);
            var CLEAR_YESNO_5 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CLEAR_YESNO");
            _world.AcknexObject.SetString("IF_N", CLEAR_YESNO_5.GetString("NAME"));
            var CLEAR_YESNO_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CLEAR_YESNO");
            _world.AcknexObject.SetString("IF_ESC", CLEAR_YESNO_7.GetString("NAME"));
            yield break;
        }
    }
}
