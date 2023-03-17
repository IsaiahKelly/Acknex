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
            var lhs_1 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            var temp_2 = lhs_1.GetFloat("VAL");
            var lhs_3 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            lhs_3.SetFloat("VAL", temp_2 + -1f);
            yield return SET_ADJX();
            yield return new WaitForTicks(8f);
            AGAIN:
            var lhs_6 = _world.GetObject(ObjectType.Skill, "KEY_5");
            var temp_7 = lhs_6.GetFloat("VAL");
            if (temp_7 == 0f)
            {
                yield break;
            }
            yield return GET_ADJX();
            var lhs_9 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            var temp_10 = lhs_9.GetFloat("VAL");
            var lhs_11 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            lhs_11.SetFloat("VAL", temp_10 + -1f);
            yield return SET_ADJX();
            yield return new WaitForTicks(2f);
            goto AGAIN;
            yield break;
        }
        public IEnumerator ADJUST_XPLUS()
        {
            yield return GET_ADJX();
            var lhs_1 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            var temp_2 = lhs_1.GetFloat("VAL");
            var lhs_3 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            lhs_3.SetFloat("VAL", temp_2 + 1f);
            yield return SET_ADJX();
            yield return new WaitForTicks(8f);
            AGAIN:
            var lhs_6 = _world.GetObject(ObjectType.Skill, "KEY_6");
            var temp_7 = lhs_6.GetFloat("VAL");
            if (temp_7 == 0f)
            {
                yield break;
            }
            yield return GET_ADJX();
            var lhs_9 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            var temp_10 = lhs_9.GetFloat("VAL");
            var lhs_11 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            lhs_11.SetFloat("VAL", temp_10 + 1f);
            yield return SET_ADJX();
            yield return new WaitForTicks(2f);
            goto AGAIN;
            yield break;
        }
        public IEnumerator ADJUST_YMINUS()
        {
            yield return GET_ADJY();
            var lhs_1 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            var temp_2 = lhs_1.GetFloat("VAL");
            var lhs_3 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            lhs_3.SetFloat("VAL", temp_2 + -1f);
            yield return SET_ADJY();
            yield return new WaitForTicks(8f);
            AGAIN:
            var lhs_6 = _world.GetObject(ObjectType.Skill, "KEY_7");
            var temp_7 = lhs_6.GetFloat("VAL");
            if (temp_7 == 0f)
            {
                yield break;
            }
            yield return GET_ADJY();
            var lhs_9 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            var temp_10 = lhs_9.GetFloat("VAL");
            var lhs_11 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            lhs_11.SetFloat("VAL", temp_10 + -1f);
            yield return SET_ADJY();
            yield return new WaitForTicks(2f);
            goto AGAIN;
            yield break;
        }
        public IEnumerator ADJUST_YPLUS()
        {
            yield return GET_ADJY();
            var lhs_1 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            var temp_2 = lhs_1.GetFloat("VAL");
            var lhs_3 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            lhs_3.SetFloat("VAL", temp_2 + 1f);
            yield return SET_ADJY();
            yield return new WaitForTicks(8f);
            AGAIN:
            var lhs_6 = _world.GetObject(ObjectType.Skill, "KEY_8");
            var temp_7 = lhs_6.GetFloat("VAL");
            if (temp_7 == 0f)
            {
                yield break;
            }
            yield return GET_ADJY();
            var lhs_9 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            var temp_10 = lhs_9.GetFloat("VAL");
            var lhs_11 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            lhs_11.SetFloat("VAL", temp_10 + 1f);
            yield return SET_ADJY();
            yield return new WaitForTicks(2f);
            goto AGAIN;
            yield break;
        }
        public IEnumerator ARSCHTRITT()
        {
            var rhs_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LIFT_UP");
            var acknexObject_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            acknexObject_2.SetString("EACH_TICK", rhs_0.GetString("NAME"));
            yield break;
        }
        public IEnumerator AUFGEH()
        {
            var acknexObject_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"GEHEIMTUER");
            var temp_2 = acknexObject_2.GetFloat("CEIL_HGT");
            var acknexObject_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"GEHEIMTUER");
            acknexObject_4.SetFloat("CEIL_HGT", temp_2 + 0.3f);
            var lhs_5 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            lhs_5.SetFloat("VAL", 1f);
            var acknexObject_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"GEHEIMTUER");
            var temp_8 = acknexObject_8.GetFloat("CEIL_HGT");
            if (temp_8 > 12f)
            {
                _world.AcknexObject.SetString("EACH_TICK.11", null);
            }
            yield break;
        }
        public IEnumerator CHECK_OPEN()
        {
            var acknexObject_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"SECRET_DOOR");
            var temp_2 = acknexObject_2.GetFloat("CEIL_HGT");
            if (temp_2 < 8f)
            {
                var rhs_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"OPENDOOR");
                _world.AcknexObject.SetString("EACH_TICK.10", rhs_3.GetString("NAME"));
            }
            var acknexObject_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"SECRET_DOOR");
            var temp_7 = acknexObject_7.GetFloat("CEIL_HGT");
            if (temp_7 < 5.1f)
            {
                //Unknown keyword: PLAY_SOUND
            }
            yield break;
        }
        public IEnumerator CLEAR_MENU()
        {
            var rhs_0 = _world.AcknexObject.GetAcknexObject("EMPTY");
            _world.SetSynonymObject("MENU1_STR", rhs_0);
            var rhs_2 = _world.AcknexObject.GetAcknexObject("EMPTY");
            _world.SetSynonymObject("MENU2_STR", rhs_2);
            var rhs_4 = _world.AcknexObject.GetAcknexObject("EMPTY");
            _world.SetSynonymObject("MENU3_STR", rhs_4);
            var rhs_6 = _world.AcknexObject.GetAcknexObject("EMPTY");
            _world.SetSynonymObject("MENU4_STR", rhs_6);
            var rhs_8 = _world.AcknexObject.GetAcknexObject("EMPTY");
            _world.SetSynonymObject("MENU5_STR", rhs_8);
            var rhs_10 = _world.AcknexObject.GetAcknexObject("EMPTY");
            _world.SetSynonymObject("MENU6_STR", rhs_10);
            var rhs_12 = _world.AcknexObject.GetAcknexObject("EMPTY");
            var acknexObject_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU1_TXT");
            acknexObject_14.SetAcknexObject("STRING", rhs_12);
            var rhs_14 = _world.AcknexObject.GetAcknexObject("EMPTY");
            var acknexObject_16 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU2_TXT");
            acknexObject_16.SetAcknexObject("STRING", rhs_14);
            var rhs_16 = _world.AcknexObject.GetAcknexObject("EMPTY");
            var acknexObject_18 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU3_TXT");
            acknexObject_18.SetAcknexObject("STRING", rhs_16);
            var rhs_18 = _world.AcknexObject.GetAcknexObject("EMPTY");
            var acknexObject_20 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU4_TXT");
            acknexObject_20.SetAcknexObject("STRING", rhs_18);
            var rhs_20 = _world.AcknexObject.GetAcknexObject("EMPTY");
            var acknexObject_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU5_TXT");
            acknexObject_22.SetAcknexObject("STRING", rhs_20);
            var rhs_22 = _world.AcknexObject.GetAcknexObject("EMPTY");
            var acknexObject_24 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU6_TXT");
            acknexObject_24.SetAcknexObject("STRING", rhs_22);
            _world.AcknexObject.SetAcknexObject("MESSAGES.10", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.11", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.12", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.13", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.15", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", null);
            var acknexObject_40 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            acknexObject_40.SetFloat("MIN", 0f);
            var lhs_41 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            lhs_41.SetFloat("VAL", 0f);
            var rhs_42 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MAIN_MENU");
            _world.AcknexObject.SetString("IF_ESC", rhs_42.GetString("NAME"));
            _world.AcknexObject.SetString("IF_CUU", null);
            _world.AcknexObject.SetString("IF_CUD", null);
            _world.AcknexObject.SetString("IF_ENTER", null);
            var lhs_51 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            lhs_51.SetFloat("VAL", 1f);
            yield break;
        }
        public IEnumerator CLEAR_YESNO()
        {
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", null);
            var lhs_3 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            lhs_3.SetFloat("VAL", 1f);
            _world.AcknexObject.SetString("IF_J", null);
            _world.AcknexObject.SetString("IF_Y", null);
            _world.AcknexObject.SetString("IF_Z", null);
            _world.AcknexObject.SetString("IF_N", null);
            var rhs_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MAIN_MENU");
            _world.AcknexObject.SetString("IF_ESC", rhs_12.GetString("NAME"));
            yield break;
        }
        public IEnumerator DECREASE_VOL()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            var temp_2 = lhs_1.GetFloat("VAL");
            var lhs_3 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            lhs_3.SetFloat("VAL", temp_2 + -0.2f);
            var lhs_5 = _world.GetObject(ObjectType.Skill, "MUSIC_VOL");
            var temp_6 = lhs_5.GetFloat("VAL");
            var lhs_7 = _world.GetObject(ObjectType.Skill, "MUSIC_VOL");
            lhs_7.SetFloat("VAL", temp_6 + -0.1f);
            var rhs_8 = _world.AcknexObject.GetAcknexObject("VOL_MINUS");
            var acknexObject_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            acknexObject_10.SetAcknexObject("STRING", rhs_8);
            yield return SHOW_MESSAGE();
            yield break;
            yield break;
        }
        public IEnumerator DIFF_MENU()
        {
            yield return CLEAR_MENU();
            var rhs_0 = _world.AcknexObject.GetAcknexObject("DIFFICULT1_STR");
            _world.SetSynonymObject("MENU1_STR", rhs_0);
            var rhs_2 = _world.AcknexObject.GetAcknexObject("DIFFICULT2_STR");
            _world.SetSynonymObject("MENU2_STR", rhs_2);
            var rhs_4 = _world.AcknexObject.GetAcknexObject("DIFFICULT3_STR");
            _world.SetSynonymObject("MENU3_STR", rhs_4);
            var rhs_6 = _world.AcknexObject.GetAcknexObject("DIFFICULT4_STR");
            _world.SetSynonymObject("MENU4_STR", rhs_6);
            var rhs_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_DIFF1");
            _world.SetSynonymObject("MENU1_ACT", rhs_8);
            var rhs_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_DIFF2");
            _world.SetSynonymObject("MENU2_ACT", rhs_10);
            var rhs_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_DIFF3");
            _world.SetSynonymObject("MENU3_ACT", rhs_12);
            var rhs_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_DIFF4");
            _world.SetSynonymObject("MENU4_ACT", rhs_14);
            var acknexObject_18 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            acknexObject_18.SetFloat("MAX", 5f);
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
            var rhs_0 = _world.AcknexObject.GetAcknexObject("QUIT_YESNO");
            var acknexObject_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            acknexObject_2.SetAcknexObject("STRING", rhs_0);
            var rhs_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXIT_GAME");
            _world.AcknexObject.SetString("IF_J", rhs_2.GetString("NAME"));
            var rhs_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXIT_GAME");
            _world.AcknexObject.SetString("IF_Y", rhs_4.GetString("NAME"));
            var rhs_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXIT_GAME");
            _world.AcknexObject.SetString("IF_Z", rhs_6.GetString("NAME"));
            yield return WAIT_YESNO();
            yield break;
        }
        public IEnumerator FADE_IN()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "FADE");
            lhs_1.SetFloat("VAL", 0f);
            LOOP:
            var lhs_3 = _world.GetObject(ObjectType.Skill, "FADE");
            var temp_4 = lhs_3.GetFloat("VAL");
            var lhs_5 = _world.GetObject(ObjectType.Skill, "FADE");
            lhs_5.SetFloat("VAL", temp_4 + 0.1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForCycles(1f);
            var lhs_8 = _world.GetObject(ObjectType.Skill, "FADE");
            var temp_9 = lhs_8.GetFloat("VAL");
            if (temp_9 < 1f)
            {
                goto LOOP;
            }
            //Unknown keyword: FADE_PAL
            yield break;
        }
        public IEnumerator FADE_OUT()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "FADE");
            lhs_1.SetFloat("VAL", 1f);
            LOOP:
            var lhs_3 = _world.GetObject(ObjectType.Skill, "FADE");
            var temp_4 = lhs_3.GetFloat("VAL");
            var lhs_5 = _world.GetObject(ObjectType.Skill, "FADE");
            lhs_5.SetFloat("VAL", temp_4 + 0.1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForCycles(1f);
            var lhs_8 = _world.GetObject(ObjectType.Skill, "FADE");
            var temp_9 = lhs_8.GetFloat("VAL");
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
            var rhs_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LIFT_DOWN");
            var acknexObject_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            acknexObject_2.SetString("EACH_TICK", rhs_0.GetString("NAME"));
            yield break;
        }
        public IEnumerator GET_ADJX()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_2 = lhs_1.GetFloat("VAL");
            if (temp_2 == 0f)
            {
                var acknexObject_4 = _world.GetSynonymObject("ADJUST_WALL");
                var temp_4 = acknexObject_4.GetFloat("OFFSET_X");
                var lhs_5 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                lhs_5.SetFloat("VAL", temp_4);
            }
            var lhs_7 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_8 = lhs_7.GetFloat("VAL");
            if (temp_8 == 1f)
            {
                var acknexObject_10 = _world.GetSynonymObject("ADJUST_REG");
                var temp_10 = acknexObject_10.GetFloat("FLOOR_OFFS_X");
                var lhs_11 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                lhs_11.SetFloat("VAL", temp_10);
            }
            var lhs_13 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_14 = lhs_13.GetFloat("VAL");
            if (temp_14 == 2f)
            {
                var acknexObject_16 = _world.GetSynonymObject("ADJUST_REG");
                var temp_16 = acknexObject_16.GetFloat("CEIL_OFFS_X");
                var lhs_17 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                lhs_17.SetFloat("VAL", temp_16);
            }
            var lhs_19 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_20 = lhs_19.GetFloat("VAL");
            if (temp_20 == 3f)
            {
                var lhs_21 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var acknexObject_23 = _world.GetSynonymObject("ADJUST_REG");
                var temp_23 = acknexObject_23.GetFloat("FLOOR_HGT");
                lhs_21.SetFloat("VAL", temp_23 * 10f);
            }
            var lhs_27 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_28 = lhs_27.GetFloat("VAL");
            if (temp_28 == 4f)
            {
                var acknexObject_30 = _world.GetSynonymObject("ADJUST_TEX");
                var temp_30 = acknexObject_30.GetFloat("POS_X");
                var lhs_31 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                lhs_31.SetFloat("VAL", temp_30);
            }
            var lhs_33 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_34 = lhs_33.GetFloat("VAL");
            if (temp_34 == 5f)
            {
                var lhs_35 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var acknexObject_37 = _world.GetSynonymObject("ADJUST_TEX");
                var temp_37 = acknexObject_37.GetFloat("SCALE_X");
                lhs_35.SetFloat("VAL", temp_37 * 10f);
            }
            var lhs_41 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_42 = lhs_41.GetFloat("VAL");
            if (temp_42 == 6f)
            {
                var acknexObject_44 = _world.GetSynonymObject("ADJUST_WALL");
                var temp_44 = acknexObject_44.GetFloat("OFFSET_X");
                var lhs_45 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                lhs_45.SetFloat("VAL", temp_44);
            }
            var lhs_47 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_48 = lhs_47.GetFloat("VAL");
            if (temp_48 == 7f)
            {
                var lhs_49 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var acknexObject_51 = _world.GetSynonymObject("ADJUST_TEX");
                var temp_51 = acknexObject_51.GetFloat("AMBIENT");
                lhs_49.SetFloat("VAL", temp_51 * 10f);
            }
            var lhs_55 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_56 = lhs_55.GetFloat("VAL");
            if (temp_56 == 8f)
            {
                var lhs_57 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var acknexObject_59 = _world.GetSynonymObject("ADJUST_REG");
                var temp_59 = acknexObject_59.GetFloat("AMBIENT");
                lhs_57.SetFloat("VAL", temp_59 * 10f);
            }
            yield break;
        }
        public IEnumerator GET_ADJY()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_2 = lhs_1.GetFloat("VAL");
            if (temp_2 == 0f)
            {
                var acknexObject_4 = _world.GetSynonymObject("ADJUST_WALL");
                var temp_4 = acknexObject_4.GetFloat("OFFSET_Y");
                var lhs_5 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                lhs_5.SetFloat("VAL", temp_4);
            }
            var lhs_7 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_8 = lhs_7.GetFloat("VAL");
            if (temp_8 == 1f)
            {
                var acknexObject_10 = _world.GetSynonymObject("ADJUST_REG");
                var temp_10 = acknexObject_10.GetFloat("FLOOR_OFFS_Y");
                var lhs_11 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                lhs_11.SetFloat("VAL", temp_10);
            }
            var lhs_13 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_14 = lhs_13.GetFloat("VAL");
            if (temp_14 == 2f)
            {
                var acknexObject_16 = _world.GetSynonymObject("ADJUST_REG");
                var temp_16 = acknexObject_16.GetFloat("CEIL_OFFS_Y");
                var lhs_17 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                lhs_17.SetFloat("VAL", temp_16);
            }
            var lhs_19 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_20 = lhs_19.GetFloat("VAL");
            if (temp_20 == 3f)
            {
                var lhs_21 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var acknexObject_23 = _world.GetSynonymObject("ADJUST_REG");
                var temp_23 = acknexObject_23.GetFloat("CEIL_HGT");
                lhs_21.SetFloat("VAL", temp_23 * 10f);
            }
            var lhs_27 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_28 = lhs_27.GetFloat("VAL");
            if (temp_28 == 4f)
            {
                var acknexObject_30 = _world.GetSynonymObject("ADJUST_TEX");
                var temp_30 = acknexObject_30.GetFloat("POS_Y");
                var lhs_31 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                lhs_31.SetFloat("VAL", temp_30);
            }
            var lhs_33 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_34 = lhs_33.GetFloat("VAL");
            if (temp_34 == 5f)
            {
                var lhs_35 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var acknexObject_37 = _world.GetSynonymObject("ADJUST_TEX");
                var temp_37 = acknexObject_37.GetFloat("SCALE_Y");
                lhs_35.SetFloat("VAL", temp_37 * 10f);
            }
            var lhs_41 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_42 = lhs_41.GetFloat("VAL");
            if (temp_42 == 6f)
            {
                var lhs_43 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var acknexObject_45 = _world.GetSynonymObject("ADJUST_WALL");
                var temp_45 = acknexObject_45.GetFloat("POSITION");
                lhs_43.SetFloat("VAL", temp_45 * 10f);
            }
            var lhs_49 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_50 = lhs_49.GetFloat("VAL");
            if (temp_50 == 7f)
            {
                var lhs_51 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var acknexObject_53 = _world.GetSynonymObject("ADJUST_TEX");
                var temp_53 = acknexObject_53.GetFloat("ALBEDO");
                lhs_51.SetFloat("VAL", temp_53 * 10f);
            }
            var lhs_57 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_58 = lhs_57.GetFloat("VAL");
            if (temp_58 == 8f)
            {
                var lhs_60 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                lhs_60.SetFloat("VAL", 0f);
            }
            yield break;
        }
        public IEnumerator INCREASE_VOL()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            var temp_2 = lhs_1.GetFloat("VAL");
            var lhs_3 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            lhs_3.SetFloat("VAL", temp_2 + 0.2f);
            var lhs_5 = _world.GetObject(ObjectType.Skill, "MUSIC_VOL");
            var temp_6 = lhs_5.GetFloat("VAL");
            var lhs_7 = _world.GetObject(ObjectType.Skill, "MUSIC_VOL");
            lhs_7.SetFloat("VAL", temp_6 + 0.1f);
            var rhs_8 = _world.AcknexObject.GetAcknexObject("VOL_PLUS");
            var acknexObject_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            acknexObject_10.SetAcknexObject("STRING", rhs_8);
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
            var rhs_0 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var temp_1 = rhs_0.GetFloat("VAL");
            var lhs_2 = _world.GetObject(ObjectType.Skill, "MOVING");
            lhs_2.SetFloat("VAL", temp_1);
            yield return SET_MOVING();
            yield break;
        }
        public IEnumerator IST_OPEN()
        {
            var acknexObject_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"GEHEIMTUER");
            var temp_2 = acknexObject_2.GetFloat("CEIL_HGT");
            if (temp_2 < 8f)
            {
                var rhs_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"AUFGEH");
                _world.AcknexObject.SetString("EACH_TICK.11", rhs_3.GetString("NAME"));
            }
            var acknexObject_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"GEHEIMTUER");
            var temp_7 = acknexObject_7.GetFloat("CEIL_HGT");
            if (temp_7 < 2.7f)
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
            var rhs_0 = _world.AcknexObject.GetAcknexObject("LEVEL1_STR");
            _world.SetSynonymObject("MENU1_STR", rhs_0);
            var rhs_2 = _world.AcknexObject.GetAcknexObject("LEVEL2_STR");
            _world.SetSynonymObject("MENU2_STR", rhs_2);
            var rhs_4 = _world.AcknexObject.GetAcknexObject("LEVEL3_STR");
            _world.SetSynonymObject("MENU3_STR", rhs_4);
            var rhs_6 = _world.AcknexObject.GetAcknexObject("LEVEL4_STR");
            _world.SetSynonymObject("MENU4_STR", rhs_6);
            var rhs_8 = _world.AcknexObject.GetAcknexObject("LEVEL5_STR");
            _world.SetSynonymObject("MENU5_STR", rhs_8);
            var rhs_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"START_LEVEL1");
            _world.SetSynonymObject("MENU1_ACT", rhs_10);
            var rhs_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"START_LEVEL2");
            _world.SetSynonymObject("MENU2_ACT", rhs_12);
            var rhs_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"START_LEVEL3");
            _world.SetSynonymObject("MENU3_ACT", rhs_14);
            var rhs_16 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"START_LEVEL4");
            _world.SetSynonymObject("MENU4_ACT", rhs_16);
            var rhs_18 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"START_LEVEL5");
            _world.SetSynonymObject("MENU5_ACT", rhs_18);
            var acknexObject_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            acknexObject_22.SetFloat("MAX", 6f);
            yield return SHOW_MENU();
            yield break;
            yield break;
        }
        public IEnumerator LIFT_DOWN()
        {
            var acknexObject_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            var temp_2 = acknexObject_2.GetFloat("FLOOR_HGT");
            var acknexObject_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            acknexObject_4.SetFloat("FLOOR_HGT", temp_2 + -0.3f);
            //Unknown keyword: PLAY_SOUND
            var lhs_5 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var temp_6 = lhs_5.GetFloat("VAL");
            var lhs_7 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            lhs_7.SetFloat("VAL", temp_6 + -0.3f);
            var lhs_9 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            lhs_9.SetFloat("VAL", 1f);
            var acknexObject_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            var temp_12 = acknexObject_12.GetFloat("FLOOR_HGT");
            if (temp_12 > 0f)
            {
                yield break;
            }
            var acknexObject_15 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            acknexObject_15.SetFloat("FLOOR_HGT", 0f);
            var acknexObject_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            acknexObject_17.SetString("EACH_TICK", null);
            var rhs_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"ARSCHTRITT");
            var acknexObject_19 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            acknexObject_19.SetString("IF_ENTER", rhs_17.GetString("NAME"));
            var acknexObject_21 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"DUNKELGANGSPERRE");
            acknexObject_21.SetFloat("CEIL_HGT", 6f);
            yield break;
        }
        public IEnumerator LIFT_UP()
        {
            var acknexObject_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            var temp_2 = acknexObject_2.GetFloat("FLOOR_HGT");
            var acknexObject_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            acknexObject_4.SetFloat("FLOOR_HGT", temp_2 + 0.3f);
            var lhs_5 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var temp_6 = lhs_5.GetFloat("VAL");
            var lhs_7 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            lhs_7.SetFloat("VAL", temp_6 + 0.3f);
            var lhs_9 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            lhs_9.SetFloat("VAL", 1f);
            //Unknown keyword: PLAY_SOUND
            var acknexObject_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            var temp_12 = acknexObject_12.GetFloat("FLOOR_HGT");
            if (temp_12 < 15.5f)
            {
                yield break;
            }
            var acknexObject_15 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            acknexObject_15.SetFloat("FLOOR_HGT", 15.5f);
            var acknexObject_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            acknexObject_17.SetString("EACH_TICK", null);
            var rhs_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"FALLTUER");
            var acknexObject_19 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
            acknexObject_19.SetString("IF_ENTER", rhs_17.GetString("NAME"));
            yield break;
        }
        public IEnumerator LOAD_GAME()
        {
            var rhs_0 = _world.AcknexObject.GetAcknexObject("WAIT_TXT");
            var acknexObject_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            acknexObject_2.SetAcknexObject("STRING", rhs_0);
            var rhs_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", rhs_2);
            yield return new WaitForCycles(1f);
            //Unknown keyword: LOAD
            var rhs_5 = _world.AcknexObject.GetAcknexObject("LOAD_NIX");
            var acknexObject_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            acknexObject_7.SetAcknexObject("STRING", rhs_5);
            yield return SHOW_MESSAGE();
            yield break;
            yield break;
        }
        public IEnumerator LOAD_MENU()
        {
            //Unknown keyword: LOAD_INFO
            yield return CLEAR_MENU();
            var rhs_0 = _world.AcknexObject.GetAcknexObject("NAME1_STR");
            _world.SetSynonymObject("MENU1_STR", rhs_0);
            var rhs_2 = _world.AcknexObject.GetAcknexObject("NAME2_STR");
            _world.SetSynonymObject("MENU2_STR", rhs_2);
            var rhs_4 = _world.AcknexObject.GetAcknexObject("NAME3_STR");
            _world.SetSynonymObject("MENU3_STR", rhs_4);
            var rhs_6 = _world.AcknexObject.GetAcknexObject("NAME4_STR");
            _world.SetSynonymObject("MENU4_STR", rhs_6);
            var rhs_8 = _world.AcknexObject.GetAcknexObject("NAME5_STR");
            _world.SetSynonymObject("MENU5_STR", rhs_8);
            var rhs_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_NAME1");
            _world.SetSynonymObject("MENU1_ACT", rhs_10);
            var rhs_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_NAME2");
            _world.SetSynonymObject("MENU2_ACT", rhs_12);
            var rhs_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_NAME3");
            _world.SetSynonymObject("MENU3_ACT", rhs_14);
            var rhs_16 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_NAME4");
            _world.SetSynonymObject("MENU4_ACT", rhs_16);
            var rhs_18 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_NAME5");
            _world.SetSynonymObject("MENU5_ACT", rhs_18);
            var acknexObject_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            acknexObject_22.SetFloat("MAX", 6f);
            yield return SHOW_MENU();
            yield break;
            yield break;
        }
        public IEnumerator LOAD_NAME1()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            lhs_1.SetFloat("VAL", 1f);
            yield return CLEAR_MENU();
            yield return LOAD_GAME();
            yield break;
            yield break;
        }
        public IEnumerator LOAD_NAME2()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            lhs_1.SetFloat("VAL", 2f);
            yield return CLEAR_MENU();
            yield return LOAD_GAME();
            yield break;
            yield break;
        }
        public IEnumerator LOAD_NAME3()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            lhs_1.SetFloat("VAL", 3f);
            yield return CLEAR_MENU();
            yield return LOAD_GAME();
            yield break;
            yield break;
        }
        public IEnumerator LOAD_NAME4()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            lhs_1.SetFloat("VAL", 4f);
            yield return CLEAR_MENU();
            yield return LOAD_GAME();
            yield break;
            yield break;
        }
        public IEnumerator LOAD_NAME5()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            lhs_1.SetFloat("VAL", 5f);
            yield return CLEAR_MENU();
            yield return LOAD_GAME();
            yield break;
            yield break;
        }
        public IEnumerator LOAD_QUICK()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            var temp_2 = lhs_1.GetFloat("VAL");
            if (temp_2 == 0f)
            {
                yield return LOAD_MENU();
                yield break;
            }
            yield return CLEAR_MENU();
            var rhs_3 = _world.AcknexObject.GetAcknexObject("QLOAD_YESNO");
            var acknexObject_5 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            acknexObject_5.SetAcknexObject("STRING", rhs_3);
            var rhs_5 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_GAME");
            _world.AcknexObject.SetString("IF_J", rhs_5.GetString("NAME"));
            var rhs_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_GAME");
            _world.AcknexObject.SetString("IF_Y", rhs_7.GetString("NAME"));
            var rhs_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_GAME");
            _world.AcknexObject.SetString("IF_Z", rhs_9.GetString("NAME"));
            yield return WAIT_YESNO();
            yield break;
        }
        public IEnumerator LOAD_STATUS()
        {
            yield return new WaitForCycles(1f);
            //Unknown keyword: LOAD_INFO
            _world.AcknexObject.SetString("EACH_TICK.10", null);
            var lhs_4 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            lhs_4.SetFloat("VAL", 1f);
            yield break;
        }
        public IEnumerator MAIN_MENU()
        {
            yield return CLEAR_MENU();
            var rhs_0 = _world.AcknexObject.GetAcknexObject("SHOW_OPTION_STR");
            _world.SetSynonymObject("MENU1_STR", rhs_0);
            var rhs_2 = _world.AcknexObject.GetAcknexObject("LOAD_GAME_STR");
            _world.SetSynonymObject("MENU2_STR", rhs_2);
            var rhs_4 = _world.AcknexObject.GetAcknexObject("SAVE_GAME_STR");
            _world.SetSynonymObject("MENU3_STR", rhs_4);
            var rhs_6 = _world.AcknexObject.GetAcknexObject("QUIT_GAME_STR");
            _world.SetSynonymObject("MENU4_STR", rhs_6);
            var rhs_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SHOW_OPTIONS");
            _world.SetSynonymObject("MENU1_ACT", rhs_8);
            var rhs_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_MENU");
            _world.SetSynonymObject("MENU2_ACT", rhs_10);
            var rhs_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_MENU");
            _world.SetSynonymObject("MENU3_ACT", rhs_12);
            var rhs_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXIT_YESNO");
            _world.SetSynonymObject("MENU4_ACT", rhs_14);
            var acknexObject_18 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            acknexObject_18.SetFloat("MAX", 5f);
            yield return SHOW_MENU();
            yield break;
            yield break;
        }
        public IEnumerator MENU_DOWN()
        {
            //Unknown keyword: PLAY_SOUND
            yield return SET_MENU();
            var lhs_1 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_2 = lhs_1.GetFloat("VAL");
            var lhs_3 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            lhs_3.SetFloat("VAL", temp_2 + 1f);
            yield break;
        }
        public IEnumerator MENU_EXEC()
        {
            //Unknown keyword: PLAY_SOUND
            var lhs_0 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_1 = lhs_0.GetFloat("VAL");
            if (temp_1 > lhs_0.GetFloat("MAX"))
            {
                yield return CLEAR_MENU();
                yield break;
            }
            var lhs_3 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_4 = lhs_3.GetFloat("VAL");
            if (temp_4 == 1f)
            {
                yield return _world.CallSynonymAction("MENU1_ACT");
                yield break;
            }
            var lhs_6 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_7 = lhs_6.GetFloat("VAL");
            if (temp_7 == 2f)
            {
                yield return _world.CallSynonymAction("MENU2_ACT");
                yield break;
            }
            var lhs_9 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_10 = lhs_9.GetFloat("VAL");
            if (temp_10 == 3f)
            {
                yield return _world.CallSynonymAction("MENU3_ACT");
                yield break;
            }
            var lhs_12 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_13 = lhs_12.GetFloat("VAL");
            if (temp_13 == 4f)
            {
                yield return _world.CallSynonymAction("MENU4_ACT");
                yield break;
            }
            var lhs_15 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_16 = lhs_15.GetFloat("VAL");
            if (temp_16 == 5f)
            {
                yield return _world.CallSynonymAction("MENU5_ACT");
                yield break;
            }
            var lhs_18 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_19 = lhs_18.GetFloat("VAL");
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
            var lhs_1 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_2 = lhs_1.GetFloat("VAL");
            var lhs_3 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            lhs_3.SetFloat("VAL", temp_2 + -1f);
            yield break;
        }
        public IEnumerator MOVE_ME()
        {
            START:
            var rhs_0 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var temp_1 = rhs_0.GetFloat("VAL");
            var lhs_2 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_3 = lhs_2.GetFloat("VAL");
            if (temp_3 == temp_1)
            {
                var lhs_4 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var temp_5 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
                var temp_6 = temp_5.GetFloat("VAL");
                var temp_10 = _world.GetObject(ObjectType.Skill, "WALK");
                var temp_11 = temp_10.GetFloat("VAL");
                lhs_4.SetFloat("VAL", temp_6 + 0.2f * temp_11);
            }
            var rhs_12 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var temp_13 = rhs_12.GetFloat("VAL");
            var lhs_14 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_15 = lhs_14.GetFloat("VAL");
            if (temp_15 == temp_13)
            {
                var lhs_16 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var temp_21 = _world.GetObject(ObjectType.Skill, "WAVE");
                var temp_22 = temp_21.GetFloat("VAL");
                lhs_16.SetFloat("VAL", 1f + 0.12f * temp_22);
            }
            var rhs_23 = _world.GetObject(ObjectType.Skill, "MODE_TAUCHEN");
            var temp_24 = rhs_23.GetFloat("VAL");
            var lhs_25 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_26 = lhs_25.GetFloat("VAL");
            if (temp_26 == temp_24)
            {
                var lhs_27 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                lhs_27.SetFloat("VAL", 1f);
            }
            var rhs_29 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var temp_30 = rhs_29.GetFloat("VAL");
            var lhs_31 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_32 = lhs_31.GetFloat("VAL");
            if (temp_32 == temp_30)
            {
                var lhs_33 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var temp_34 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
                var temp_35 = temp_34.GetFloat("VAL");
                var temp_37 = _world.GetObject(ObjectType.Skill, "PLAYER_DEPTH");
                var temp_38 = temp_37.GetFloat("VAL");
                lhs_33.SetFloat("VAL", temp_35 - temp_38);
            }
            NO_WATEN:
            var rhs_39 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var temp_40 = rhs_39.GetFloat("VAL");
            var lhs_41 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_42 = lhs_41.GetFloat("VAL");
            if (temp_42 != temp_40)
            {
                goto NO_SWIM;
            }
            var lhs_44 = _world.GetObject(ObjectType.Skill, "PLAYER_DEPTH");
            var temp_45 = lhs_44.GetFloat("VAL");
            if (temp_45 > 1.5f)
            {
                goto NO_WATER;
            }
            yield return SET_WALKING();
            goto START;
            NO_SWIM:
            var rhs_46 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var temp_47 = rhs_46.GetFloat("VAL");
            var lhs_48 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_49 = lhs_48.GetFloat("VAL");
            if (temp_49 != temp_47)
            {
                goto NO_WATER;
            }
            var lhs_51 = _world.GetObject(ObjectType.Skill, "PLAYER_DEPTH");
            var temp_52 = lhs_51.GetFloat("VAL");
            if (temp_52 < 2.5f)
            {
                goto NO_WATER;
            }
            yield return SET_SWIMMING();
            goto START;
            NO_WATER:
            var lhs_54 = _world.GetObject(ObjectType.Skill, "MOUSE_MIDDLE");
            var temp_55 = lhs_54.GetFloat("VAL");
            if (temp_55 == 0f)
            {
                goto NO_MOUSE;
            }
            var rhs_56 = _world.GetObject(ObjectType.Skill, "KEY_SENSE");
            var temp_57 = rhs_56.GetFloat("VAL");
            var lhs_58 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
            lhs_58.SetFloat("VAL", temp_57);
            var lhs_60 = _world.GetObject(ObjectType.Skill, "KEY_SHIFT");
            var temp_61 = lhs_60.GetFloat("VAL");
            if (temp_61 == 1f)
            {
                var lhs_62 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
                var temp_63 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
                var temp_64 = temp_63.GetFloat("VAL");
                var temp_66 = _world.GetObject(ObjectType.Skill, "SHIFT_SENSE");
                var temp_67 = temp_66.GetFloat("VAL");
                lhs_62.SetFloat("VAL", temp_64 * temp_67);
            }
            NO_MOUSE:
            var lhs_69 = _world.GetObject(ObjectType.Skill, "BOOSTER");
            lhs_69.SetFloat("VAL", 1f);
            var rhs_70 = _world.GetObject(ObjectType.Skill, "MASS");
            var temp_71 = rhs_70.GetFloat("VAL");
            var lhs_72 = _world.GetObject(ObjectType.Skill, "INERTIA");
            lhs_72.SetFloat("VAL", temp_71);
            var lhs_73 = _world.GetObject(ObjectType.Skill, "FRICTION");
            var temp_74 = _world.GetObject(ObjectType.Skill, "FRIC");
            var temp_75 = temp_74.GetFloat("VAL");
            var temp_79 = _world.GetObject(ObjectType.Skill, "DEPTH");
            var temp_80 = temp_79.GetFloat("VAL");
            lhs_73.SetFloat("VAL", temp_75 + 0.1f * temp_80);
            var lhs_81 = _world.GetObject(ObjectType.Skill, "FORCE");
            var temp_83 = _world.GetObject(ObjectType.Skill, "STRENGTH");
            var temp_84 = temp_83.GetFloat("VAL");
            var temp_86 = _world.GetObject(ObjectType.Skill, "WAVE_STR");
            var temp_87 = temp_86.GetFloat("VAL");
            var temp_89 = _world.GetObject(ObjectType.Skill, "WAVE");
            var temp_90 = temp_89.GetFloat("VAL");
            var temp_93 = _world.GetObject(ObjectType.Skill, "BOOSTER");
            var temp_94 = temp_93.GetFloat("VAL");
            var temp_97 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
            var temp_98 = temp_97.GetFloat("VAL");
            var temp_100 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var temp_101 = temp_100.GetFloat("VAL");
            var temp_105 = _world.GetObject(ObjectType.Skill, "FORCE_STRAFE");
            var temp_106 = temp_105.GetFloat("VAL");
            var temp_108 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var temp_109 = temp_108.GetFloat("VAL");
            var temp_112 = _world.GetObject(ObjectType.Skill, "DRIFT_X");
            var temp_113 = temp_112.GetFloat("VAL");
            lhs_81.SetFloat("VAL", (temp_84 + temp_87 * temp_90) * temp_94 * (temp_98 * temp_101 - 0.5f * temp_106 * temp_109) + temp_113);
            var rhs_114 = _world.GetObject(ObjectType.Skill, "FORCE");
            var temp_115 = rhs_114.GetFloat("VAL");
            var lhs_116 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var temp_117 = lhs_116.GetFloat("VAL");
            var lhs_118 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            lhs_118.SetFloat("VAL", _world.Accelerate(temp_117, temp_115));
            var lhs_119 = _world.GetObject(ObjectType.Skill, "FORCE");
            var temp_121 = _world.GetObject(ObjectType.Skill, "STRENGTH");
            var temp_122 = temp_121.GetFloat("VAL");
            var temp_124 = _world.GetObject(ObjectType.Skill, "WAVE_STR");
            var temp_125 = temp_124.GetFloat("VAL");
            var temp_127 = _world.GetObject(ObjectType.Skill, "WAVE");
            var temp_128 = temp_127.GetFloat("VAL");
            var temp_131 = _world.GetObject(ObjectType.Skill, "BOOSTER");
            var temp_132 = temp_131.GetFloat("VAL");
            var temp_135 = _world.GetObject(ObjectType.Skill, "FORCE_AHEAD");
            var temp_136 = temp_135.GetFloat("VAL");
            var temp_138 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var temp_139 = temp_138.GetFloat("VAL");
            var temp_143 = _world.GetObject(ObjectType.Skill, "FORCE_STRAFE");
            var temp_144 = temp_143.GetFloat("VAL");
            var temp_146 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var temp_147 = temp_146.GetFloat("VAL");
            var temp_150 = _world.GetObject(ObjectType.Skill, "DRIFT_Y");
            var temp_151 = temp_150.GetFloat("VAL");
            lhs_119.SetFloat("VAL", (temp_122 + temp_125 * temp_128) * temp_132 * (temp_136 * temp_139 + 0.5f * temp_144 * temp_147) + temp_151);
            var rhs_152 = _world.GetObject(ObjectType.Skill, "FORCE");
            var temp_153 = rhs_152.GetFloat("VAL");
            var lhs_154 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var temp_155 = lhs_154.GetFloat("VAL");
            var lhs_156 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            lhs_156.SetFloat("VAL", _world.Accelerate(temp_155, temp_153));
            var lhs_158 = _world.GetObject(ObjectType.Skill, "FRICTION");
            lhs_158.SetFloat("VAL", 0.5f);
            var rhs_159 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var temp_160 = rhs_159.GetFloat("VAL");
            var lhs_161 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_162 = lhs_161.GetFloat("VAL");
            if (temp_162 != temp_160)
            {
                var lhs_164 = _world.GetObject(ObjectType.Skill, "FRICTION");
                lhs_164.SetFloat("VAL", 0.85f);
            }
            var lhs_165 = _world.GetObject(ObjectType.Skill, "FORCE");
            var temp_168 = _world.GetObject(ObjectType.Skill, "FORCE_ROT");
            var temp_169 = temp_168.GetFloat("VAL");
            lhs_165.SetFloat("VAL", 0.05f * temp_169);
            var rhs_170 = _world.GetObject(ObjectType.Skill, "FORCE");
            var temp_171 = rhs_170.GetFloat("VAL");
            var lhs_172 = _world.GetObject(ObjectType.Skill, "PLAYER_VROT");
            var temp_173 = lhs_172.GetFloat("VAL");
            var lhs_174 = _world.GetObject(ObjectType.Skill, "PLAYER_VROT");
            lhs_174.SetFloat("VAL", _world.Accelerate(temp_173, temp_171));
            var lhs_175 = _world.GetObject(ObjectType.Skill, "FORCE");
            var temp_176 = _world.GetObject(ObjectType.Skill, "GRAVITY");
            var temp_177 = temp_176.GetFloat("VAL");
            var temp_179 = _world.GetObject(ObjectType.Skill, "FLOAT_STR");
            var temp_180 = temp_179.GetFloat("VAL");
            var temp_182 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var temp_183 = temp_182.GetFloat("VAL");
            lhs_175.SetFloat("VAL", temp_177 + temp_180 * temp_183);
            var rhs_184 = _world.GetObject(ObjectType.Skill, "FRIC_AIR");
            var temp_185 = rhs_184.GetFloat("VAL");
            var lhs_186 = _world.GetObject(ObjectType.Skill, "FRICTION");
            lhs_186.SetFloat("VAL", temp_185);
            var lhs_188 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var temp_189 = lhs_188.GetFloat("VAL");
            if (temp_189 > 0f)
            {
                goto AIRBORNE;
            }
            var lhs_191 = _world.GetObject(ObjectType.Skill, "FRICTION");
            lhs_191.SetFloat("VAL", 0.98f);
            var lhs_192 = _world.GetObject(ObjectType.Skill, "FORCE");
            var temp_193 = _world.GetObject(ObjectType.Skill, "FORCE");
            var temp_194 = temp_193.GetFloat("VAL");
            var temp_198 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var temp_199 = temp_198.GetFloat("VAL");
            lhs_192.SetFloat("VAL", temp_194 - 0.2f * temp_199);
            AIRBORNE:
            var rhs_200 = _world.GetObject(ObjectType.Skill, "FORCE");
            var temp_201 = rhs_200.GetFloat("VAL");
            var lhs_202 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            var temp_203 = lhs_202.GetFloat("VAL");
            var lhs_204 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            lhs_204.SetFloat("VAL", _world.Accelerate(temp_203, temp_201));
            var lhs_205 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var temp_208 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var temp_209 = temp_208.GetFloat("VAL");
            lhs_205.SetFloat("VAL", 0.8f * temp_209);
            var rhs_210 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var temp_211 = rhs_210.GetFloat("VAL");
            var lhs_212 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_213 = lhs_212.GetFloat("VAL");
            if (temp_213 == temp_211)
            {
                goto DUCK;
            }
            var lhs_215 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var temp_216 = lhs_215.GetFloat("VAL");
            if (temp_216 > 0f)
            {
                goto NO_DUCK;
            }
            DUCK:
            var lhs_217 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var temp_218 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var temp_219 = temp_218.GetFloat("VAL");
            var temp_221 = _world.GetObject(ObjectType.Skill, "DUCK_STR");
            var temp_222 = temp_221.GetFloat("VAL");
            var temp_224 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var temp_225 = temp_224.GetFloat("VAL");
            lhs_217.SetFloat("VAL", temp_219 + temp_222 * temp_225);
            NO_DUCK:
            var lhs_226 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var temp_227 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var temp_228 = temp_227.GetFloat("VAL");
            var temp_230 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var temp_231 = temp_230.GetFloat("VAL");
            lhs_226.SetFloat("VAL", temp_228 + temp_231);
            var rhs_232 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var temp_233 = rhs_232.GetFloat("VAL");
            var lhs_234 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_235 = lhs_234.GetFloat("VAL");
            if (temp_235 != temp_233)
            {
                goto NO_JUMP;
            }
            var lhs_237 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            var temp_238 = lhs_237.GetFloat("VAL");
            if (temp_238 > 0f)
            {
                goto JUMP_1;
            }
            var lhs_240 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var temp_241 = lhs_240.GetFloat("VAL");
            if (temp_241 < 0.1f)
            {
                goto NO_JUMP;
            }
            var lhs_243 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            lhs_243.SetFloat("VAL", 1f);
            JUMP_1:
            var lhs_245 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            var temp_246 = lhs_245.GetFloat("VAL");
            if (temp_246 > 1f)
            {
                goto JUMP_2;
            }
            var lhs_247 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var temp_248 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var temp_249 = temp_248.GetFloat("VAL");
            lhs_247.SetFloat("VAL", temp_249 - 0.5f);
            var lhs_253 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var temp_254 = lhs_253.GetFloat("VAL");
            if (temp_254 < -0.7f)
            {
                var lhs_256 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
                lhs_256.SetFloat("VAL", 2f);
            }
            goto NO_JUMP;
            JUMP_2:
            var lhs_258 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            var temp_259 = lhs_258.GetFloat("VAL");
            if (temp_259 > 2f)
            {
                goto JUMP_3;
            }
            var lhs_261 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            lhs_261.SetFloat("VAL", 0f);
            var lhs_262 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var temp_263 = _world.GetObject(ObjectType.Skill, "FLOOR_HGT");
            var temp_264 = temp_263.GetFloat("VAL");
            var temp_266 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var temp_267 = temp_266.GetFloat("VAL");
            lhs_262.SetFloat("VAL", temp_264 + temp_267);
            var lhs_269 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            lhs_269.SetFloat("VAL", 0.5f);
            var lhs_271 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            lhs_271.SetFloat("VAL", 3f);
            goto NO_JUMP;
            JUMP_3:
            var lhs_273 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            var temp_274 = lhs_273.GetFloat("VAL");
            if (temp_274 > 0f)
            {
                goto NO_JUMP;
            }
            var lhs_276 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var temp_277 = lhs_276.GetFloat("VAL");
            if (temp_277 > 0f)
            {
                goto NO_JUMP;
            }
            var lhs_279 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            lhs_279.SetFloat("VAL", 0f);
            NO_JUMP:
            var lhs_280 = _world.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
            var temp_281 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var temp_282 = temp_281.GetFloat("VAL");
            var temp_284 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var temp_285 = temp_284.GetFloat("VAL");
            var temp_287 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var temp_288 = temp_287.GetFloat("VAL");
            var temp_290 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var temp_291 = temp_290.GetFloat("VAL");
            lhs_280.SetFloat("VAL", temp_282 * temp_285 + temp_288 * temp_291);
            var lhs_293 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
            var temp_294 = lhs_293.GetFloat("VAL");
            if (temp_294 != 1f)
            {
                goto CALC_TILT;
            }
            var rhs_295 = _world.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_P");
            var temp_296 = rhs_295.GetFloat("VAL");
            var lhs_297 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var temp_298 = lhs_297.GetFloat("VAL");
            if (temp_298 > temp_296)
            {
                goto CHECK_SPEED_TILT;
            }
            var rhs_299 = _world.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_N");
            var temp_300 = rhs_299.GetFloat("VAL");
            var lhs_301 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var temp_302 = lhs_301.GetFloat("VAL");
            if (temp_302 > temp_300)
            {
                goto DECR_TILT;
            }
            CHECK_SPEED_TILT:
            var lhs_304 = _world.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
            var temp_305 = lhs_304.GetFloat("VAL");
            if (temp_305 > 0.4f)
            {
                goto DECR_TILT;
            }
            var lhs_307 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            var temp_308 = lhs_307.GetFloat("VAL");
            if (temp_308 != 0f)
            {
                goto DECR_TILT;
            }
            goto CALC_TILT;
            DECR_TILT:
            var lhs_310 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
            lhs_310.SetFloat("VAL", 0.8f);
            CALC_TILT:
            var lhs_311 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var temp_312 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
            var temp_313 = temp_312.GetFloat("VAL");
            var temp_315 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var temp_316 = temp_315.GetFloat("VAL");
            var temp_320 = _world.GetObject(ObjectType.Skill, "FORCE_TILT");
            var temp_321 = temp_320.GetFloat("VAL");
            var temp_325 = _world.GetObject(ObjectType.Skill, "FLOAT_STR");
            var temp_326 = temp_325.GetFloat("VAL");
            var temp_328 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var temp_329 = temp_328.GetFloat("VAL");
            var temp_334 = _world.GetObject(ObjectType.Skill, "FLY_MODE");
            var temp_335 = temp_334.GetFloat("VAL");
            lhs_311.SetFloat("VAL", temp_313 * temp_316 + 0.3f * temp_321 - 0.3f * temp_326 * temp_329 * (1f - temp_335));
            var lhs_338 = _world.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
            var temp_339 = lhs_338.GetFloat("VAL");
            if (temp_339 > 0f)
            {
                //Unknown keyword: SKIP
            }
            var rhs_340 = _world.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_P");
            var temp_341 = rhs_340.GetFloat("VAL");
            var lhs_342 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var temp_343 = lhs_342.GetFloat("VAL");
            if (temp_343 > temp_341)
            {
                var lhs_345 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
                lhs_345.SetFloat("VAL", 1f);
            }
            var rhs_346 = _world.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_N");
            var temp_347 = rhs_346.GetFloat("VAL");
            var lhs_348 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var temp_349 = lhs_348.GetFloat("VAL");
            if (temp_349 < temp_347)
            {
                var lhs_351 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
                lhs_351.SetFloat("VAL", 1f);
            }
            var rhs_352 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var temp_353 = rhs_352.GetFloat("VAL");
            var lhs_354 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_355 = lhs_354.GetFloat("VAL");
            if (temp_355 == temp_353)
            {
                var lhs_356 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var temp_357 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var temp_358 = temp_357.GetFloat("VAL");
                var temp_362 = _world.GetObject(ObjectType.Skill, "WAVE");
                var temp_363 = temp_362.GetFloat("VAL");
                lhs_356.SetFloat("VAL", temp_358 + 0.01f * temp_363);
            }
            var rhs_364 = _world.GetObject(ObjectType.Skill, "MODE_TAUCHEN");
            var temp_365 = rhs_364.GetFloat("VAL");
            var lhs_366 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_367 = lhs_366.GetFloat("VAL");
            if (temp_367 == temp_365)
            {
                goto NO_HTILT;
            }
            var lhs_369 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            var temp_370 = lhs_369.GetFloat("VAL");
            if (temp_370 > 0f)
            {
                goto NO_HTILT;
            }
            var lhs_372 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
            var temp_373 = lhs_372.GetFloat("VAL");
            if (temp_373 < 1f)
            {
                var lhs_374 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var temp_375 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var temp_376 = temp_375.GetFloat("VAL");
                var temp_381 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
                var temp_382 = temp_381.GetFloat("VAL");
                lhs_374.SetFloat("VAL", temp_376 + 0.03f * (temp_382 + 0.3f));
            }
            NO_HTILT:
            var lhs_387 = _world.GetObject(ObjectType.Skill, "RICHTER");
            var temp_388 = lhs_387.GetFloat("VAL");
            if (temp_388 == 0f)
            {
                goto NO_QUAKE;
            }
            var lhs_389 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var temp_390 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var temp_391 = temp_390.GetFloat("VAL");
            var temp_393 = _world.GetObject(ObjectType.Skill, "RICHTER");
            var temp_394 = temp_393.GetFloat("VAL");
            var temp_397 = _world.GetObject(ObjectType.Skill, "RANDOM_2");
            var temp_398 = temp_397.GetFloat("VAL");
            lhs_389.SetFloat("VAL", temp_391 + temp_394 * (temp_398 - 0.5f));
            var rhs_402 = _world.GetObject(ObjectType.Skill, "RANDOM_1");
            var temp_403 = rhs_402.GetFloat("VAL");
            var lhs_404 = _world.GetObject(ObjectType.Skill, "RANDOM_2");
            lhs_404.SetFloat("VAL", temp_403);
            var lhs_406 = _world.GetObject(ObjectType.Skill, "RANDOM_1");
            lhs_406.SetFloat("VAL", UnityEngine.Random.value);
            NO_QUAKE:
            yield break;
            var lhs_408 = _world.GetObject(ObjectType.Skill, "KEY_INS");
            var temp_409 = lhs_408.GetFloat("VAL");
            if (temp_409 > 0f)
            {
                var lhs_410 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var temp_411 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var temp_412 = temp_411.GetFloat("VAL");
                lhs_410.SetFloat("VAL", temp_412 - 0.1f);
            }
            var lhs_416 = _world.GetObject(ObjectType.Skill, "KEY_DEL");
            var temp_417 = lhs_416.GetFloat("VAL");
            if (temp_417 > 0f)
            {
                var lhs_418 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var temp_419 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var temp_420 = temp_419.GetFloat("VAL");
                lhs_418.SetFloat("VAL", temp_420 + 0.1f);
            }
            yield break;
        }
        public IEnumerator MSCALE_MINUS()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            var temp_2 = lhs_1.GetFloat("VAL");
            if (temp_2 == 0f)
            {
                yield break;
            }
            var lhs_3 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
            var temp_4 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
            var temp_5 = temp_4.GetFloat("VAL");
            lhs_3.SetFloat("VAL", temp_5 * 0.9f);
            yield break;
        }
        public IEnumerator MSCALE_PLUS()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            var temp_2 = lhs_1.GetFloat("VAL");
            if (temp_2 == 0f)
            {
                yield break;
            }
            var lhs_3 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
            var temp_4 = _world.GetObject(ObjectType.Skill, "MAP_SCALE");
            var temp_5 = temp_4.GetFloat("VAL");
            lhs_3.SetFloat("VAL", temp_5 * 1.1f);
            yield break;
        }
        public IEnumerator OPENDOOR()
        {
            var acknexObject_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"SECRET_DOOR");
            var temp_2 = acknexObject_2.GetFloat("CEIL_HGT");
            var acknexObject_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"SECRET_DOOR");
            acknexObject_4.SetFloat("CEIL_HGT", temp_2 + 0.3f);
            var lhs_5 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            lhs_5.SetFloat("VAL", 1f);
            var acknexObject_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"SECRET_DOOR");
            var temp_8 = acknexObject_8.GetFloat("CEIL_HGT");
            if (temp_8 > 16f)
            {
                _world.AcknexObject.SetString("EACH_TICK.10", null);
            }
            yield break;
        }
        public IEnumerator PULSDOWN()
        {
            var acknexObject_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
            var temp_2 = acknexObject_2.GetFloat("AMBIENT");
            var acknexObject_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
            acknexObject_4.SetFloat("AMBIENT", temp_2 + -0.1f);
            var acknexObject_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
            var temp_6 = acknexObject_6.GetFloat("AMBIENT");
            if (temp_6 < 0f)
            {
                var rhs_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"PULSUP");
                var acknexObject_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
                acknexObject_9.SetString("EACH_TICK", rhs_7.GetString("NAME"));
            }
            yield break;
        }
        public IEnumerator PULSUP()
        {
            var acknexObject_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
            var temp_2 = acknexObject_2.GetFloat("AMBIENT");
            var acknexObject_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
            acknexObject_4.SetFloat("AMBIENT", temp_2 + 0.1f);
            var acknexObject_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
            var temp_6 = acknexObject_6.GetFloat("AMBIENT");
            if (temp_6 > 1f)
            {
                var rhs_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"PULSDOWN");
                var acknexObject_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
                acknexObject_9.SetString("EACH_TICK", rhs_7.GetString("NAME"));
            }
            yield break;
        }
        public IEnumerator QUAKE()
        {
            var rhs_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"QUAKE");
            _world.AcknexObject.SetString("EACH_TICK.9", rhs_0.GetString("NAME"));
            var lhs_3 = _world.GetObject(ObjectType.Skill, "RICHTER");
            lhs_3.SetFloat("VAL", 0.1f);
            yield return new WaitForTicks(16f);
            var lhs_6 = _world.GetObject(ObjectType.Skill, "RICHTER");
            lhs_6.SetFloat("VAL", 0.3f);
            yield return new WaitForTicks(32f);
            var lhs_9 = _world.GetObject(ObjectType.Skill, "RICHTER");
            lhs_9.SetFloat("VAL", 0.5f);
            yield return new WaitForTicks(48f);
            var lhs_12 = _world.GetObject(ObjectType.Skill, "RICHTER");
            lhs_12.SetFloat("VAL", 0.2f);
            yield return new WaitForTicks(80f);
            var lhs_15 = _world.GetObject(ObjectType.Skill, "RICHTER");
            lhs_15.SetFloat("VAL", 0.6f);
            yield return new WaitForTicks(32f);
            var lhs_18 = _world.GetObject(ObjectType.Skill, "RICHTER");
            lhs_18.SetFloat("VAL", 0.1f);
            yield return new WaitForTicks(16f);
            var lhs_21 = _world.GetObject(ObjectType.Skill, "RICHTER");
            lhs_21.SetFloat("VAL", 0f);
            _world.AcknexObject.SetString("EACH_TICK.9", null);
            yield break;
        }
        public IEnumerator REGIO_ARISE()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            var temp_2 = lhs_1.GetFloat("VAL");
            if (temp_2 == 0f)
            {
                yield break;
            }
            var lhs_4 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            lhs_4.SetFloat("VAL", 0f);
            var lhs_5 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var temp_6 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var temp_7 = temp_6.GetFloat("VAL");
            lhs_5.SetFloat("VAL", temp_7 - 0.3f);
            var lhs_10 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var temp_11 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var temp_12 = temp_11.GetFloat("VAL");
            lhs_10.SetFloat("VAL", temp_12 + 0.2f);
            var lhs_15 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var temp_16 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var temp_17 = temp_16.GetFloat("VAL");
            lhs_15.SetFloat("VAL", temp_17 + 0.2f);
            var lhs_20 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var temp_21 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var temp_22 = temp_21.GetFloat("VAL");
            lhs_20.SetFloat("VAL", temp_22 + 0.2f);
            yield return _world.CallSynonymAction("SET_OVERWATER");
            yield return SET_SWIMMING();
            yield break;
        }
        public IEnumerator REGIO_DIVE()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            var temp_2 = lhs_1.GetFloat("VAL");
            if (temp_2 == 1f)
            {
                yield break;
            }
            var lhs_4 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            lhs_4.SetFloat("VAL", 1f);
            var lhs_5 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var temp_6 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var temp_7 = temp_6.GetFloat("VAL");
            lhs_5.SetFloat("VAL", temp_7 + 0.3f);
            var lhs_10 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var temp_11 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var temp_12 = temp_11.GetFloat("VAL");
            lhs_10.SetFloat("VAL", temp_12 - 0.2f);
            var lhs_15 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var temp_16 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var temp_17 = temp_16.GetFloat("VAL");
            lhs_15.SetFloat("VAL", temp_17 - 0.2f);
            var lhs_20 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var temp_21 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var temp_22 = temp_21.GetFloat("VAL");
            lhs_20.SetFloat("VAL", temp_22 - 0.2f);
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
            var lhs_1 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            lhs_1.SetFloat("VAL", 1f);
            //Unknown keyword: SAVE_INFO
            var rhs_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_STATUS");
            _world.AcknexObject.SetString("EACH_TICK.10", rhs_2.GetString("NAME"));
            var lhs_5 = _world.GetObject(ObjectType.Skill, "RESULT");
            lhs_5.SetFloat("VAL", 0f);
            var rhs_6 = _world.AcknexObject.GetAcknexObject("OK");
            var acknexObject_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            acknexObject_8.SetAcknexObject("STRING", rhs_6);
            yield return SHOW_MESSAGE();
            //Unknown keyword: SAVE
            _world.AcknexObject.SetString("EACH_TICK.10", null);
            var lhs_11 = _world.GetObject(ObjectType.Skill, "RESULT");
            var temp_12 = lhs_11.GetFloat("VAL");
            if (temp_12 < 0f)
            {
                var rhs_13 = _world.AcknexObject.GetAcknexObject("SAVE_NIX");
                var acknexObject_15 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
                acknexObject_15.SetAcknexObject("STRING", rhs_13);
            }
            yield break;
        }
        public IEnumerator SAVE_MENU()
        {
            //Unknown keyword: LOAD_INFO
            yield return CLEAR_MENU();
            var rhs_0 = _world.AcknexObject.GetAcknexObject("NAME1_STR");
            _world.SetSynonymObject("MENU1_STR", rhs_0);
            var rhs_2 = _world.AcknexObject.GetAcknexObject("NAME2_STR");
            _world.SetSynonymObject("MENU2_STR", rhs_2);
            var rhs_4 = _world.AcknexObject.GetAcknexObject("NAME3_STR");
            _world.SetSynonymObject("MENU3_STR", rhs_4);
            var rhs_6 = _world.AcknexObject.GetAcknexObject("NAME4_STR");
            _world.SetSynonymObject("MENU4_STR", rhs_6);
            var rhs_8 = _world.AcknexObject.GetAcknexObject("NAME5_STR");
            _world.SetSynonymObject("MENU5_STR", rhs_8);
            var rhs_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_NAME1");
            _world.SetSynonymObject("MENU1_ACT", rhs_10);
            var rhs_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_NAME2");
            _world.SetSynonymObject("MENU2_ACT", rhs_12);
            var rhs_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_NAME3");
            _world.SetSynonymObject("MENU3_ACT", rhs_14);
            var rhs_16 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_NAME4");
            _world.SetSynonymObject("MENU4_ACT", rhs_16);
            var rhs_18 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_NAME5");
            _world.SetSynonymObject("MENU5_ACT", rhs_18);
            var acknexObject_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            acknexObject_22.SetFloat("MAX", 6f);
            yield return SHOW_MENU();
            yield break;
            yield break;
        }
        public IEnumerator SAVE_NAME1()
        {
            var acknexObject_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            acknexObject_2.SetFloat("MIN", 0f);
            var lhs_3 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            lhs_3.SetFloat("VAL", 0f);
            var lhs_5 = _world.GetObject(ObjectType.Skill, "SLOT");
            lhs_5.SetFloat("VAL", 1f);
            _world.ReadInkey("NAME1_STR");
            yield return CLEAR_MENU();
            yield return SAVE_GAME();
            yield break;
            yield break;
        }
        public IEnumerator SAVE_NAME2()
        {
            var acknexObject_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            acknexObject_2.SetFloat("MIN", 0f);
            var lhs_3 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            lhs_3.SetFloat("VAL", 0f);
            var lhs_5 = _world.GetObject(ObjectType.Skill, "SLOT");
            lhs_5.SetFloat("VAL", 2f);
            _world.ReadInkey("NAME2_STR");
            yield return CLEAR_MENU();
            yield return SAVE_GAME();
            yield break;
            yield break;
        }
        public IEnumerator SAVE_NAME3()
        {
            var acknexObject_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            acknexObject_2.SetFloat("MIN", 0f);
            var lhs_3 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            lhs_3.SetFloat("VAL", 0f);
            var lhs_5 = _world.GetObject(ObjectType.Skill, "SLOT");
            lhs_5.SetFloat("VAL", 3f);
            _world.ReadInkey("NAME3_STR");
            yield return CLEAR_MENU();
            yield return SAVE_GAME();
            yield break;
            yield break;
        }
        public IEnumerator SAVE_NAME4()
        {
            var acknexObject_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            acknexObject_2.SetFloat("MIN", 0f);
            var lhs_3 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            lhs_3.SetFloat("VAL", 0f);
            var lhs_5 = _world.GetObject(ObjectType.Skill, "SLOT");
            lhs_5.SetFloat("VAL", 4f);
            _world.ReadInkey("NAME4_STR");
            yield return CLEAR_MENU();
            yield return SAVE_GAME();
            yield break;
            yield break;
        }
        public IEnumerator SAVE_NAME5()
        {
            var acknexObject_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            acknexObject_2.SetFloat("MIN", 0f);
            var lhs_3 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            lhs_3.SetFloat("VAL", 0f);
            var lhs_5 = _world.GetObject(ObjectType.Skill, "SLOT");
            lhs_5.SetFloat("VAL", 5f);
            _world.ReadInkey("NAME5_STR");
            yield return CLEAR_MENU();
            yield return SAVE_GAME();
            yield break;
            yield break;
        }
        public IEnumerator SAVE_QUICK()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "SLOT");
            var temp_2 = lhs_1.GetFloat("VAL");
            if (temp_2 == 0f)
            {
                yield return SAVE_MENU();
                yield break;
            }
            yield return CLEAR_MENU();
            var rhs_3 = _world.AcknexObject.GetAcknexObject("QSAV_YESNO");
            var acknexObject_5 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            acknexObject_5.SetAcknexObject("STRING", rhs_3);
            var rhs_5 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_GAME");
            _world.AcknexObject.SetString("IF_J", rhs_5.GetString("NAME"));
            var rhs_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_GAME");
            _world.AcknexObject.SetString("IF_Y", rhs_7.GetString("NAME"));
            var rhs_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_GAME");
            _world.AcknexObject.SetString("IF_Z", rhs_9.GetString("NAME"));
            yield return WAIT_YESNO();
            yield break;
        }
        public IEnumerator SET_ADJUST()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_2 = lhs_1.GetFloat("VAL");
            if (temp_2 > -1f)
            {
                goto DISABLE;
            }
            var rhs_3 = _world.GetObject(ObjectType.Skill, "SCREEN_HGT");
            var temp_4 = rhs_3.GetFloat("VAL");
            var acknexObject_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            acknexObject_6.SetFloat("POS_Y", temp_4);
            var acknexObject_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            var temp_8 = acknexObject_8.GetFloat("POS_Y");
            var acknexObject_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            acknexObject_10.SetFloat("POS_Y", temp_8 + -12f);
            var rhs_10 = _world.GetObject(ObjectType.Skill, "SCREEN_HGT");
            var temp_11 = rhs_10.GetFloat("VAL");
            var acknexObject_13 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            acknexObject_13.SetFloat("POS_Y", temp_11);
            var acknexObject_15 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            var temp_15 = acknexObject_15.GetFloat("POS_Y");
            var acknexObject_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            acknexObject_17.SetFloat("POS_Y", temp_15 + -100f);
            var rhs_17 = _world.AcknexObject.GetAcknexObject("ADJUST_HELP");
            var acknexObject_19 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            acknexObject_19.SetAcknexObject("STRING", rhs_17);
            var rhs_19 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.9", rhs_19);
            var lhs_22 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            lhs_22.SetFloat("VAL", 99f);
            var temp_24 = _world.AcknexObject.GetAcknexObject("IF_W");
            _world.SetSynonymObject("AW_OLD", temp_24);
            var rhs_26 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_WMODE");
            _world.AcknexObject.SetString("IF_W", rhs_26.GetString("NAME"));
            var temp_29 = _world.AcknexObject.GetAcknexObject("IF_F");
            _world.SetSynonymObject("AF_OLD", temp_29);
            var rhs_31 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_FMODE");
            _world.AcknexObject.SetString("IF_F", rhs_31.GetString("NAME"));
            var temp_34 = _world.AcknexObject.GetAcknexObject("IF_C");
            _world.SetSynonymObject("AC_OLD", temp_34);
            var rhs_36 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_CMODE");
            _world.AcknexObject.SetString("IF_C", rhs_36.GetString("NAME"));
            var temp_39 = _world.AcknexObject.GetAcknexObject("IF_R");
            _world.SetSynonymObject("AR_OLD", temp_39);
            var rhs_41 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_RMODE");
            _world.AcknexObject.SetString("IF_R", rhs_41.GetString("NAME"));
            var temp_44 = _world.AcknexObject.GetAcknexObject("IF_A");
            _world.SetSynonymObject("AA_OLD", temp_44);
            var rhs_46 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_AMODE");
            _world.AcknexObject.SetString("IF_A", rhs_46.GetString("NAME"));
            var temp_49 = _world.AcknexObject.GetAcknexObject("IF_S");
            _world.SetSynonymObject("AS_OLD", temp_49);
            var rhs_51 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_SMODE");
            _world.AcknexObject.SetString("IF_S", rhs_51.GetString("NAME"));
            var temp_54 = _world.AcknexObject.GetAcknexObject("IF_B");
            _world.SetSynonymObject("AB_OLD", temp_54);
            var rhs_56 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_BMODE");
            _world.AcknexObject.SetString("IF_B", rhs_56.GetString("NAME"));
            var temp_59 = _world.AcknexObject.GetAcknexObject("IF_V");
            _world.SetSynonymObject("AV_OLD", temp_59);
            var rhs_61 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_VMODE");
            _world.AcknexObject.SetString("IF_V", rhs_61.GetString("NAME"));
            var temp_64 = _world.AcknexObject.GetAcknexObject("IF_Q");
            _world.SetSynonymObject("AQ_OLD", temp_64);
            var temp_67 = _world.AcknexObject.GetAcknexObject("IF_X");
            _world.SetSynonymObject("AX_OLD", temp_67);
            var temp_70 = _world.AcknexObject.GetAcknexObject("IF_5");
            _world.SetSynonymObject("A5_OLD", temp_70);
            var rhs_72 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"ADJUST_XMINUS");
            _world.AcknexObject.SetString("IF_5", rhs_72.GetString("NAME"));
            var temp_75 = _world.AcknexObject.GetAcknexObject("IF_6");
            _world.SetSynonymObject("A6_OLD", temp_75);
            var rhs_77 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"ADJUST_XPLUS");
            _world.AcknexObject.SetString("IF_6", rhs_77.GetString("NAME"));
            var temp_80 = _world.AcknexObject.GetAcknexObject("IF_7");
            _world.SetSynonymObject("A7_OLD", temp_80);
            var rhs_82 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"ADJUST_YMINUS");
            _world.AcknexObject.SetString("IF_7", rhs_82.GetString("NAME"));
            var temp_85 = _world.AcknexObject.GetAcknexObject("IF_8");
            _world.SetSynonymObject("A8_OLD", temp_85);
            var rhs_87 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"ADJUST_YPLUS");
            _world.AcknexObject.SetString("IF_8", rhs_87.GetString("NAME"));
            //Unknown keyword: BEEP
            yield break;
            DISABLE:
            _world.AcknexObject.SetAcknexObject("MESSAGES.9", null);
            //Unknown Property Type: World.PANELS.9
            var lhs_94 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            lhs_94.SetFloat("VAL", -1f);
            var rhs_95 = _world.GetSynonymObject("AW_OLD");
            _world.AcknexObject.SetString("IF_W", rhs_95.GetString("NAME"));
            var rhs_97 = _world.GetSynonymObject("AF_OLD");
            _world.AcknexObject.SetString("IF_F", rhs_97.GetString("NAME"));
            var rhs_99 = _world.GetSynonymObject("AC_OLD");
            _world.AcknexObject.SetString("IF_C", rhs_99.GetString("NAME"));
            var rhs_101 = _world.GetSynonymObject("AR_OLD");
            _world.AcknexObject.SetString("IF_R", rhs_101.GetString("NAME"));
            var rhs_103 = _world.GetSynonymObject("AA_OLD");
            _world.AcknexObject.SetString("IF_A", rhs_103.GetString("NAME"));
            var rhs_105 = _world.GetSynonymObject("AS_OLD");
            _world.AcknexObject.SetString("IF_S", rhs_105.GetString("NAME"));
            var rhs_107 = _world.GetSynonymObject("AB_OLD");
            _world.AcknexObject.SetString("IF_B", rhs_107.GetString("NAME"));
            var rhs_109 = _world.GetSynonymObject("AV_OLD");
            _world.AcknexObject.SetString("IF_V", rhs_109.GetString("NAME"));
            var rhs_111 = _world.GetSynonymObject("AQ_OLD");
            _world.AcknexObject.SetString("IF_Q", rhs_111.GetString("NAME"));
            var rhs_113 = _world.GetSynonymObject("AX_OLD");
            _world.AcknexObject.SetString("IF_X", rhs_113.GetString("NAME"));
            var rhs_115 = _world.GetSynonymObject("A5_OLD");
            _world.AcknexObject.SetString("IF_5", rhs_115.GetString("NAME"));
            var rhs_117 = _world.GetSynonymObject("A6_OLD");
            _world.AcknexObject.SetString("IF_6", rhs_117.GetString("NAME"));
            var rhs_119 = _world.GetSynonymObject("A7_OLD");
            _world.AcknexObject.SetString("IF_7", rhs_119.GetString("NAME"));
            var rhs_121 = _world.GetSynonymObject("A8_OLD");
            _world.AcknexObject.SetString("IF_8", rhs_121.GetString("NAME"));
            //Unknown keyword: BEEP
            yield break;
            yield break;
        }
        public IEnumerator SET_ADJX()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_2 = lhs_1.GetFloat("VAL");
            if (temp_2 == 0f)
            {
                var rhs_3 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var temp_4 = rhs_3.GetFloat("VAL");
                var acknexObject_6 = _world.GetSynonymObject("ADJUST_WALL");
                acknexObject_6.SetFloat("OFFSET_X", temp_4);
            }
            var lhs_7 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_8 = lhs_7.GetFloat("VAL");
            if (temp_8 == 1f)
            {
                var rhs_9 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var temp_10 = rhs_9.GetFloat("VAL");
                var acknexObject_12 = _world.GetSynonymObject("ADJUST_REG");
                acknexObject_12.SetFloat("FLOOR_OFFS_X", temp_10);
            }
            var lhs_13 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_14 = lhs_13.GetFloat("VAL");
            if (temp_14 == 2f)
            {
                var rhs_15 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var temp_16 = rhs_15.GetFloat("VAL");
                var acknexObject_18 = _world.GetSynonymObject("ADJUST_REG");
                acknexObject_18.SetFloat("CEIL_OFFS_X", temp_16);
            }
            var lhs_19 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_20 = lhs_19.GetFloat("VAL");
            if (temp_20 == 3f)
            {
                var acknexObject_22 = _world.GetSynonymObject("ADJUST_REG");
                var temp_22 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var temp_23 = temp_22.GetFloat("VAL");
                acknexObject_22.SetFloat("FLOOR_HGT", temp_23 / 10f);
            }
            var lhs_27 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_28 = lhs_27.GetFloat("VAL");
            if (temp_28 == 4f)
            {
                var rhs_29 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var temp_30 = rhs_29.GetFloat("VAL");
                var acknexObject_32 = _world.GetSynonymObject("ADJUST_TEX");
                acknexObject_32.SetFloat("POS_X", temp_30);
            }
            var lhs_33 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_34 = lhs_33.GetFloat("VAL");
            if (temp_34 != 5f)
            {
                //Unknown keyword: SKIP
            }
            var acknexObject_36 = _world.GetSynonymObject("ADJUST_TEX");
            var temp_36 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            var temp_37 = temp_36.GetFloat("VAL");
            acknexObject_36.SetFloat("SCALE_X", temp_37 / 10f);
            //Unknown keyword: SET_ALL
            var lhs_41 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_42 = lhs_41.GetFloat("VAL");
            if (temp_42 == 6f)
            {
                var rhs_43 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var temp_44 = rhs_43.GetFloat("VAL");
                var acknexObject_46 = _world.GetSynonymObject("ADJUST_WALL");
                acknexObject_46.SetFloat("OFFSET_X", temp_44);
            }
            var lhs_47 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_48 = lhs_47.GetFloat("VAL");
            if (temp_48 != 7f)
            {
                //Unknown keyword: SKIP
            }
            var acknexObject_50 = _world.GetSynonymObject("ADJUST_TEX");
            var temp_50 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
            var temp_51 = temp_50.GetFloat("VAL");
            acknexObject_50.SetFloat("AMBIENT", temp_51 / 10f);
            //Unknown keyword: SET_ALL
            var lhs_55 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_56 = lhs_55.GetFloat("VAL");
            if (temp_56 == 8f)
            {
                var acknexObject_58 = _world.GetSynonymObject("ADJUST_REG");
                var temp_58 = _world.GetObject(ObjectType.Skill, "ADJUST_X");
                var temp_59 = temp_58.GetFloat("VAL");
                acknexObject_58.SetFloat("AMBIENT", temp_59 / 10f);
            }
            var lhs_63 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            lhs_63.SetFloat("VAL", 1f);
            yield break;
        }
        public IEnumerator SET_ADJY()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_2 = lhs_1.GetFloat("VAL");
            if (temp_2 == 0f)
            {
                var rhs_3 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var temp_4 = rhs_3.GetFloat("VAL");
                var acknexObject_6 = _world.GetSynonymObject("ADJUST_WALL");
                acknexObject_6.SetFloat("OFFSET_Y", temp_4);
            }
            var lhs_7 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_8 = lhs_7.GetFloat("VAL");
            if (temp_8 == 1f)
            {
                var rhs_9 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var temp_10 = rhs_9.GetFloat("VAL");
                var acknexObject_12 = _world.GetSynonymObject("ADJUST_REG");
                acknexObject_12.SetFloat("FLOOR_OFFS_Y", temp_10);
            }
            var lhs_13 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_14 = lhs_13.GetFloat("VAL");
            if (temp_14 == 2f)
            {
                var rhs_15 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var temp_16 = rhs_15.GetFloat("VAL");
                var acknexObject_18 = _world.GetSynonymObject("ADJUST_REG");
                acknexObject_18.SetFloat("CEIL_OFFS_Y", temp_16);
            }
            var lhs_19 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_20 = lhs_19.GetFloat("VAL");
            if (temp_20 == 3f)
            {
                var acknexObject_22 = _world.GetSynonymObject("ADJUST_REG");
                var temp_22 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var temp_23 = temp_22.GetFloat("VAL");
                acknexObject_22.SetFloat("CEIL_HGT", temp_23 / 10f);
            }
            var lhs_27 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_28 = lhs_27.GetFloat("VAL");
            if (temp_28 == 4f)
            {
                var rhs_29 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var temp_30 = rhs_29.GetFloat("VAL");
                var acknexObject_32 = _world.GetSynonymObject("ADJUST_TEX");
                acknexObject_32.SetFloat("POS_Y", temp_30);
            }
            var lhs_33 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_34 = lhs_33.GetFloat("VAL");
            if (temp_34 != 5f)
            {
                //Unknown keyword: SKIP
            }
            var acknexObject_36 = _world.GetSynonymObject("ADJUST_TEX");
            var temp_36 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            var temp_37 = temp_36.GetFloat("VAL");
            acknexObject_36.SetFloat("SCALE_Y", temp_37 / 10f);
            //Unknown keyword: SET_ALL
            var lhs_41 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_42 = lhs_41.GetFloat("VAL");
            if (temp_42 == 6f)
            {
                var acknexObject_44 = _world.GetSynonymObject("ADJUST_WALL");
                var temp_44 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
                var temp_45 = temp_44.GetFloat("VAL");
                acknexObject_44.SetFloat("POSITION", temp_45 / 10f);
            }
            var lhs_49 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_50 = lhs_49.GetFloat("VAL");
            if (temp_50 != 7f)
            {
                //Unknown keyword: SKIP
            }
            var acknexObject_52 = _world.GetSynonymObject("ADJUST_TEX");
            var temp_52 = _world.GetObject(ObjectType.Skill, "ADJUST_Y");
            var temp_53 = temp_52.GetFloat("VAL");
            acknexObject_52.SetFloat("ALBEDO", temp_53 / 10f);
            //Unknown keyword: SET_ALL
            var lhs_57 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            lhs_57.SetFloat("VAL", 1f);
            yield break;
        }
        public IEnumerator SET_AMODE()
        {
            var acknexObject_1 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            var temp_1 = acknexObject_1.GetFloat("POS_Y");
            var acknexObject_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            acknexObject_3.SetFloat("POS_Y", temp_1);
            var lhs_4 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            var temp_5 = lhs_4.GetFloat("VAL");
            if (temp_5 == 4f)
            {
                goto NEXT_TEX;
            }
            _world.Shoot();
            var lhs_7 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var temp_8 = lhs_7.GetFloat("VAL");
            if (temp_8 == 0f)
            {
                yield break;
            }
            var lhs_10 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            lhs_10.SetFloat("VAL", 4f);
            var rhs_11 = _world.AcknexObject.GetAcknexObject("ATTACH_MODE");
            var acknexObject_13 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            acknexObject_13.SetAcknexObject("STRING", rhs_11);
            var rhs_13 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            //Unknown Property Type: World.PANELS.9
            var acknexObject_16 = _world.GetSynonymObject("HIT");
            var temp_16 = acknexObject_16.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("ADJUST_TEX", temp_16);
            NEXT_TEX:
            var acknexObject_20 = _world.GetSynonymObject("ADJUST_TEX");
            var temp_20 = acknexObject_20.GetAcknexObject("ATTACH");
            if (temp_20 != null)
            {
                goto SET_TEX;
            }
            var acknexObject_22 = _world.GetSynonymObject("HIT");
            var temp_22 = acknexObject_22.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("ADJUST_TEX", temp_22);
            var acknexObject_26 = _world.GetSynonymObject("ADJUST_TEX");
            var temp_26 = acknexObject_26.GetAcknexObject("ATTACH");
            if (temp_26 == null)
            {
                yield break;
            }
            SET_TEX:
            var acknexObject_28 = _world.GetSynonymObject("ADJUST_TEX");
            var temp_28 = acknexObject_28.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("ADJUST_TEX", temp_28);
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
            var acknexObject_1 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            var temp_1 = acknexObject_1.GetFloat("POS_Y");
            var acknexObject_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            acknexObject_3.SetFloat("POS_Y", temp_1);
            _world.Shoot();
            var lhs_4 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var temp_5 = lhs_4.GetFloat("VAL");
            if (temp_5 == 0f)
            {
                yield break;
            }
            var rhs_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            //Unknown Property Type: World.PANELS.9
            var acknexObject_9 = _world.GetSynonymObject("HIT");
            var temp_9 = acknexObject_9.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("ADJUST_TEX", temp_9);
            var rhs_11 = _world.GetSynonymObject("HIT");
            _world.SetSynonymObject("ADJUST_WALL", rhs_11);
            var lhs_14 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            lhs_14.SetFloat("VAL", 7f);
            var rhs_15 = _world.AcknexObject.GetAcknexObject("AMBIENT_MODE");
            var acknexObject_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            acknexObject_17.SetAcknexObject("STRING", rhs_15);
            yield return GET_ADJX();
            yield return GET_ADJY();
            yield break;
        }
        public IEnumerator SET_CMODE()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            lhs_1.SetFloat("VAL", 2f);
            var acknexObject_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            var temp_3 = acknexObject_3.GetFloat("POS_Y");
            var acknexObject_5 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            acknexObject_5.SetFloat("POS_Y", temp_3);
            var rhs_5 = _world.AcknexObject.GetAcknexObject("CEIL_MODE");
            var acknexObject_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            acknexObject_7.SetAcknexObject("STRING", rhs_5);
            var rhs_7 = _world.GetSynonymObject("HERE");
            _world.SetSynonymObject("ADJUST_REG", rhs_7);
            var rhs_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            //Unknown Property Type: World.PANELS.9
            yield return GET_ADJX();
            yield return GET_ADJY();
            yield break;
        }
        public IEnumerator SET_DEBUG()
        {
            var rhs_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"UPDATE_DBPANEL");
            _world.AcknexObject.SetString("EACH_TICK.10", rhs_0.GetString("NAME"));
            var rhs_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"DEBUG_PANEL");
            //Unknown Property Type: World.PANELS.10
            var rhs_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"DEBUG_TEXT_1");
            _world.AcknexObject.SetAcknexObject("MESSAGES.10", rhs_4);
            yield break;
        }
        public IEnumerator SET_DIFF1()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "DIFFICULTY");
            lhs_1.SetFloat("VAL", 1f);
            yield return LEVEL_MENU();
            yield break;
            yield break;
        }
        public IEnumerator SET_DIFF2()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "DIFFICULTY");
            lhs_1.SetFloat("VAL", 2f);
            yield return LEVEL_MENU();
            yield break;
            yield break;
        }
        public IEnumerator SET_DIFF3()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "DIFFICULTY");
            lhs_1.SetFloat("VAL", 3f);
            yield return LEVEL_MENU();
            yield break;
            yield break;
        }
        public IEnumerator SET_DIFF4()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "DIFFICULTY");
            lhs_1.SetFloat("VAL", 4f);
            yield return LEVEL_MENU();
            yield break;
            yield break;
        }
        public IEnumerator SET_DIVING()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "FRIC");
            lhs_1.SetFloat("VAL", 0.3f);
            var rhs_2 = _world.GetObject(ObjectType.Skill, "MODE_TAUCHEN");
            var temp_3 = rhs_2.GetFloat("VAL");
            var lhs_4 = _world.GetObject(ObjectType.Skill, "MOVING");
            lhs_4.SetFloat("VAL", temp_3);
            var lhs_6 = _world.GetObject(ObjectType.Skill, "STRENGTH");
            lhs_6.SetFloat("VAL", 0.1f);
            var lhs_8 = _world.GetObject(ObjectType.Skill, "WAVE_STR");
            lhs_8.SetFloat("VAL", 0.03f);
            var lhs_10 = _world.GetObject(ObjectType.Skill, "FLOAT_STR");
            lhs_10.SetFloat("VAL", 0.05f);
            var lhs_12 = _world.GetObject(ObjectType.Skill, "DUCK_STR");
            lhs_12.SetFloat("VAL", 0f);
            var lhs_14 = _world.GetObject(ObjectType.Skill, "FRIC_AIR");
            lhs_14.SetFloat("VAL", 0.7f);
            var lhs_16 = _world.GetObject(ObjectType.Skill, "GRAVITY");
            lhs_16.SetFloat("VAL", 0f);
            var rhs_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MOVE_ME");
            _world.AcknexObject.SetString("EACH_TICK.16", rhs_17.GetString("NAME"));
            yield break;
        }
        public IEnumerator SET_FMODE()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            lhs_1.SetFloat("VAL", 1f);
            var acknexObject_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            var temp_3 = acknexObject_3.GetFloat("POS_Y");
            var acknexObject_5 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            acknexObject_5.SetFloat("POS_Y", temp_3);
            var rhs_5 = _world.AcknexObject.GetAcknexObject("FLO_MODE");
            var acknexObject_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            acknexObject_7.SetAcknexObject("STRING", rhs_5);
            var rhs_7 = _world.GetSynonymObject("HERE");
            _world.SetSynonymObject("ADJUST_REG", rhs_7);
            var rhs_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            //Unknown Property Type: World.PANELS.9
            yield return GET_ADJX();
            yield return GET_ADJY();
            yield break;
        }
        public IEnumerator SET_MENU()
        {
            var rhs_0 = _world.GetSynonymObject("MENU1_STR");
            var acknexObject_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU1_TXT");
            acknexObject_2.SetAcknexObject("STRING", rhs_0);
            var rhs_2 = _world.GetSynonymObject("MENU2_STR");
            var acknexObject_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU2_TXT");
            acknexObject_4.SetAcknexObject("STRING", rhs_2);
            var rhs_4 = _world.GetSynonymObject("MENU3_STR");
            var acknexObject_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU3_TXT");
            acknexObject_6.SetAcknexObject("STRING", rhs_4);
            var rhs_6 = _world.GetSynonymObject("MENU4_STR");
            var acknexObject_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU4_TXT");
            acknexObject_8.SetAcknexObject("STRING", rhs_6);
            var rhs_8 = _world.GetSynonymObject("MENU5_STR");
            var acknexObject_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU5_TXT");
            acknexObject_10.SetAcknexObject("STRING", rhs_8);
            var rhs_10 = _world.GetSynonymObject("MENU6_STR");
            var acknexObject_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU6_TXT");
            acknexObject_12.SetAcknexObject("STRING", rhs_10);
            var rhs_12 = _world.AcknexObject.GetAcknexObject("EXIT_STR");
            var acknexObject_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENUEXIT_TXT");
            acknexObject_14.SetAcknexObject("STRING", rhs_12);
            yield break;
        }
        public IEnumerator SET_MOVING()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_2 = lhs_1.GetFloat("VAL");
            if (temp_2 == 0f)
            {
                yield break;
            }
            var rhs_3 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var temp_4 = rhs_3.GetFloat("VAL");
            var lhs_5 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_6 = lhs_5.GetFloat("VAL");
            if (temp_6 == temp_4)
            {
                yield return SET_WALKING();
                yield break;
            }
            var rhs_7 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var temp_8 = rhs_7.GetFloat("VAL");
            var lhs_9 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_10 = lhs_9.GetFloat("VAL");
            if (temp_10 == temp_8)
            {
                yield return SET_SWIMMING();
                yield break;
            }
            var rhs_11 = _world.GetObject(ObjectType.Skill, "MODE_TAUCHEN");
            var temp_12 = rhs_11.GetFloat("VAL");
            var lhs_13 = _world.GetObject(ObjectType.Skill, "MOVING");
            var temp_14 = lhs_13.GetFloat("VAL");
            if (temp_14 == temp_12)
            {
                yield return SET_DIVING();
                yield break;
            }
            yield break;
        }
        public IEnumerator SET_RMODE()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            lhs_1.SetFloat("VAL", 3f);
            var acknexObject_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            var temp_3 = acknexObject_3.GetFloat("POS_Y");
            var acknexObject_5 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            acknexObject_5.SetFloat("POS_Y", temp_3);
            var rhs_5 = _world.AcknexObject.GetAcknexObject("REGIO_MODE");
            var acknexObject_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            acknexObject_7.SetAcknexObject("STRING", rhs_5);
            var rhs_7 = _world.GetSynonymObject("HERE");
            _world.SetSynonymObject("ADJUST_REG", rhs_7);
            var rhs_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            //Unknown Property Type: World.PANELS.9
            yield return GET_ADJX();
            yield return GET_ADJY();
            yield break;
        }
        public IEnumerator SET_SMODE()
        {
            var acknexObject_1 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            var temp_1 = acknexObject_1.GetFloat("POS_Y");
            var acknexObject_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            acknexObject_3.SetFloat("POS_Y", temp_1);
            _world.Shoot();
            var lhs_4 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var temp_5 = lhs_4.GetFloat("VAL");
            if (temp_5 == 0f)
            {
                yield break;
            }
            var rhs_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            //Unknown Property Type: World.PANELS.9
            var acknexObject_9 = _world.GetSynonymObject("HIT");
            var temp_9 = acknexObject_9.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("ADJUST_TEX", temp_9);
            var rhs_11 = _world.GetSynonymObject("HIT");
            _world.SetSynonymObject("ADJUST_WALL", rhs_11);
            var lhs_14 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            lhs_14.SetFloat("VAL", 5f);
            var rhs_15 = _world.AcknexObject.GetAcknexObject("SCALE_MODE");
            var acknexObject_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            acknexObject_17.SetAcknexObject("STRING", rhs_15);
            yield return GET_ADJX();
            yield return GET_ADJY();
            yield break;
        }
        public IEnumerator SET_SWIMMING()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "FRIC");
            lhs_1.SetFloat("VAL", 0.3f);
            var rhs_2 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var temp_3 = rhs_2.GetFloat("VAL");
            var lhs_4 = _world.GetObject(ObjectType.Skill, "MOVING");
            lhs_4.SetFloat("VAL", temp_3);
            var lhs_6 = _world.GetObject(ObjectType.Skill, "STRENGTH");
            lhs_6.SetFloat("VAL", 0.15f);
            var lhs_8 = _world.GetObject(ObjectType.Skill, "WAVE_STR");
            lhs_8.SetFloat("VAL", 0.08f);
            var lhs_10 = _world.GetObject(ObjectType.Skill, "FLOAT_STR");
            lhs_10.SetFloat("VAL", 0f);
            var lhs_12 = _world.GetObject(ObjectType.Skill, "DUCK_STR");
            lhs_12.SetFloat("VAL", 0.2f);
            var lhs_14 = _world.GetObject(ObjectType.Skill, "FRIC_AIR");
            lhs_14.SetFloat("VAL", 0.5f);
            var lhs_16 = _world.GetObject(ObjectType.Skill, "GRAVITY");
            lhs_16.SetFloat("VAL", -0.05f);
            var rhs_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MOVE_ME");
            _world.AcknexObject.SetString("EACH_TICK.16", rhs_17.GetString("NAME"));
            yield break;
        }
        public IEnumerator SET_VMODE()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            lhs_1.SetFloat("VAL", 8f);
            var acknexObject_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            var temp_3 = acknexObject_3.GetFloat("POS_Y");
            var acknexObject_5 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            acknexObject_5.SetFloat("POS_Y", temp_3);
            var rhs_5 = _world.AcknexObject.GetAcknexObject("REGAMB_MODE");
            var acknexObject_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            acknexObject_7.SetAcknexObject("STRING", rhs_5);
            var rhs_7 = _world.GetSynonymObject("HERE");
            _world.SetSynonymObject("ADJUST_REG", rhs_7);
            var rhs_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            //Unknown Property Type: World.PANELS.9
            yield return GET_ADJX();
            yield return GET_ADJY();
            yield break;
        }
        public IEnumerator SET_WALKING()
        {
            var rhs_0 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var temp_1 = rhs_0.GetFloat("VAL");
            var lhs_2 = _world.GetObject(ObjectType.Skill, "MOVING");
            lhs_2.SetFloat("VAL", temp_1);
            var lhs_4 = _world.GetObject(ObjectType.Skill, "FRIC");
            lhs_4.SetFloat("VAL", 0.2f);
            var lhs_6 = _world.GetObject(ObjectType.Skill, "STRENGTH");
            lhs_6.SetFloat("VAL", 0.15f);
            var lhs_8 = _world.GetObject(ObjectType.Skill, "WAVE_STR");
            lhs_8.SetFloat("VAL", 0f);
            var lhs_10 = _world.GetObject(ObjectType.Skill, "FLOAT_STR");
            lhs_10.SetFloat("VAL", 0f);
            var lhs_12 = _world.GetObject(ObjectType.Skill, "DUCK_STR");
            lhs_12.SetFloat("VAL", 0.5f);
            var lhs_14 = _world.GetObject(ObjectType.Skill, "FRIC_AIR");
            lhs_14.SetFloat("VAL", 0.04f);
            var lhs_16 = _world.GetObject(ObjectType.Skill, "GRAVITY");
            lhs_16.SetFloat("VAL", -0.13f);
            var rhs_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MOVE_ME");
            _world.AcknexObject.SetString("EACH_TICK.16", rhs_17.GetString("NAME"));
            yield break;
        }
        public IEnumerator SET_WMODE()
        {
            var acknexObject_1 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            var temp_1 = acknexObject_1.GetFloat("POS_Y");
            var acknexObject_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            acknexObject_3.SetFloat("POS_Y", temp_1);
            _world.Shoot();
            var lhs_4 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var temp_5 = lhs_4.GetFloat("VAL");
            if (temp_5 == 0f)
            {
                yield break;
            }
            var rhs_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
            //Unknown Property Type: World.PANELS.9
            var rhs_8 = _world.GetSynonymObject("HIT");
            _world.SetSynonymObject("ADJUST_WALL", rhs_8);
            var acknexObject_12 = _world.GetSynonymObject("ADJUST_WALL");
            var temp_12 = acknexObject_12.GetFloat("FENCE");
            if (temp_12 == 1f)
            {
                goto SET_POSMODE;
            }
            var lhs_14 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            lhs_14.SetFloat("VAL", 0f);
            var rhs_15 = _world.AcknexObject.GetAcknexObject("WALL_MODE");
            var acknexObject_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            acknexObject_17.SetAcknexObject("STRING", rhs_15);
            yield return GET_ADJX();
            yield return GET_ADJY();
            yield break;
            SET_POSMODE:
            var lhs_18 = _world.GetObject(ObjectType.Skill, "ADJUST_MODE");
            lhs_18.SetFloat("VAL", 6f);
            var rhs_19 = _world.AcknexObject.GetAcknexObject("POS_MODE");
            var acknexObject_21 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
            acknexObject_21.SetAcknexObject("STRING", rhs_19);
            yield return GET_ADJX();
            yield return GET_ADJY();
            yield break;
        }
        public IEnumerator SHOW_MENU()
        {
            var rhs_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MENU_EXEC");
            _world.AcknexObject.SetString("IF_ENTER", rhs_0.GetString("NAME"));
            var rhs_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CLEAR_MENU");
            _world.AcknexObject.SetString("IF_ESC", rhs_2.GetString("NAME"));
            var rhs_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MENU_UP");
            _world.AcknexObject.SetString("IF_CUU", rhs_4.GetString("NAME"));
            var rhs_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MENU_DOWN");
            _world.AcknexObject.SetString("IF_CUD", rhs_6.GetString("NAME"));
            var lhs_9 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            lhs_9.SetFloat("VAL", 0f);
            var acknexObject_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            acknexObject_12.SetFloat("MIN", 1f);
            var lhs_13 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_14 = lhs_13.GetFloat("VAL");
            if (temp_14 == 0f)
            {
                var lhs_16 = _world.GetObject(ObjectType.Skill, "MENU_POS");
                lhs_16.SetFloat("VAL", 1f);
            }
            var acknexObject_18 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENUEXIT_TXT");
            var acknexObject_19 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU1_TXT");
            var temp_19 = acknexObject_19.GetFloat("POS_Y");
            var acknexObject_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
            var temp_22 = acknexObject_22.GetFloat("MAX");
            acknexObject_18.SetFloat("POS_Y", temp_19 + temp_22 * 16f - 8f);
            var rhs_27 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU1_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.10", rhs_27);
            var rhs_29 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU2_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.11", rhs_29);
            var rhs_31 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU3_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.12", rhs_31);
            var rhs_33 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU4_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.13", rhs_33);
            var rhs_35 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU5_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", rhs_35);
            var rhs_37 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU6_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.15", rhs_37);
            var rhs_39 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENUEXIT_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", rhs_39);
            BLINK:
            yield return SET_MENU();
            yield return new WaitForTicks(3f);
            var lhs_42 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_43 = lhs_42.GetFloat("VAL");
            if (temp_43 > lhs_42.GetFloat("MAX"))
            {
                var rhs_44 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var acknexObject_46 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENUEXIT_TXT");
                acknexObject_46.SetAcknexObject("STRING", rhs_44);
            }
            var lhs_47 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_48 = lhs_47.GetFloat("VAL");
            if (temp_48 == 1f)
            {
                var rhs_49 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var acknexObject_51 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU1_TXT");
                acknexObject_51.SetAcknexObject("STRING", rhs_49);
            }
            var lhs_52 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_53 = lhs_52.GetFloat("VAL");
            if (temp_53 == 2f)
            {
                var rhs_54 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var acknexObject_56 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU2_TXT");
                acknexObject_56.SetAcknexObject("STRING", rhs_54);
            }
            var lhs_57 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_58 = lhs_57.GetFloat("VAL");
            if (temp_58 == 3f)
            {
                var rhs_59 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var acknexObject_61 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU3_TXT");
                acknexObject_61.SetAcknexObject("STRING", rhs_59);
            }
            var lhs_62 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_63 = lhs_62.GetFloat("VAL");
            if (temp_63 == 4f)
            {
                var rhs_64 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var acknexObject_66 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU4_TXT");
                acknexObject_66.SetAcknexObject("STRING", rhs_64);
            }
            var lhs_67 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_68 = lhs_67.GetFloat("VAL");
            if (temp_68 == 5f)
            {
                var rhs_69 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var acknexObject_71 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU5_TXT");
                acknexObject_71.SetAcknexObject("STRING", rhs_69);
            }
            var lhs_72 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_73 = lhs_72.GetFloat("VAL");
            if (temp_73 == 6f)
            {
                var rhs_74 = _world.AcknexObject.GetAcknexObject("EMPTY");
                var acknexObject_76 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU6_TXT");
                acknexObject_76.SetAcknexObject("STRING", rhs_74);
            }
            var lhs_77 = _world.GetObject(ObjectType.Skill, "MENU_POS");
            var temp_78 = lhs_77.GetFloat("VAL");
            if (temp_78 == 0f)
            {
                yield break;
            }
            yield return new WaitForTicks(3f);
            goto BLINK;
            yield break;
        }
        public IEnumerator SHOW_MESSAGE()
        {
            var rhs_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", rhs_0);
            yield return new WaitForTicks(48f);
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", null);
            yield break;
        }
        public IEnumerator SHOW_OPTIONS()
        {
            yield return CLEAR_MENU();
            var rhs_0 = _world.AcknexObject.GetAcknexObject("OPTION_STR");
            var acknexObject_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            acknexObject_2.SetAcknexObject("STRING", rhs_0);
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
            var lhs_1 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            lhs_1.SetFloat("VAL", 0f);
            var lhs_3 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            lhs_3.SetFloat("VAL", 0f);
            var lhs_5 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            lhs_5.SetFloat("VAL", 0f);
            var lhs_7 = _world.GetObject(ObjectType.Skill, "PLAYER_VROT");
            lhs_7.SetFloat("VAL", 0f);
            yield break;
        }
        public IEnumerator TOGGLE_MAP()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "MAP_ROT");
            lhs_1.SetFloat("VAL", 1f);
            var lhs_3 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            var temp_4 = lhs_3.GetFloat("VAL");
            var lhs_5 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            lhs_5.SetFloat("VAL", temp_4 + 0.5f);
            var lhs_7 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            var temp_8 = lhs_7.GetFloat("VAL");
            if (temp_8 > 0.5f)
            {
                var lhs_10 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
                lhs_10.SetFloat("VAL", 0f);
            }
            yield break;
        }
        public IEnumerator TOGGLE_MBLUR()
        {
            var lhs_1 = _world.GetObject(ObjectType.Skill, "MOTION_BLUR");
            var temp_2 = lhs_1.GetFloat("VAL");
            var lhs_3 = _world.GetObject(ObjectType.Skill, "MOTION_BLUR");
            lhs_3.SetFloat("VAL", temp_2 + 0.5f);
            var lhs_5 = _world.GetObject(ObjectType.Skill, "MOTION_BLUR");
            var temp_6 = lhs_5.GetFloat("VAL");
            if (temp_6 > 0.5f)
            {
                var lhs_8 = _world.GetObject(ObjectType.Skill, "MOTION_BLUR");
                lhs_8.SetFloat("VAL", 0f);
            }
            var rhs_9 = _world.AcknexObject.GetAcknexObject("MBLUR_ON");
            var acknexObject_11 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            acknexObject_11.SetAcknexObject("STRING", rhs_9);
            var lhs_12 = _world.GetObject(ObjectType.Skill, "MOTION_BLUR");
            var temp_13 = lhs_12.GetFloat("VAL");
            if (temp_13 == 0f)
            {
                var rhs_14 = _world.AcknexObject.GetAcknexObject("MBLUR_OFF");
                var acknexObject_16 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
                acknexObject_16.SetAcknexObject("STRING", rhs_14);
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
            var lhs_0 = _world.GetObject(ObjectType.Skill, "FPS");
            var temp_3 = _world.GetObject(ObjectType.Skill, "FPS");
            var temp_4 = temp_3.GetFloat("VAL");
            var temp_8 = _world.GetObject(ObjectType.Skill, "TIME_FAC");
            var temp_9 = temp_8.GetFloat("VAL");
            lhs_0.SetFloat("VAL", 0.9f * temp_4 + 0.1f * temp_9);
            yield break;
        }
        public IEnumerator VRDEMO_START()
        {
            //Unknown keyword: PLAY_SONG
            yield return SET_WALKING();
            var lhs_1 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            lhs_1.SetFloat("VAL", 5f);
            var rhs_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"DIVE_UP");
            _world.SetSynonymObject("SET_OVERWATER", rhs_2);
            yield break;
        }
        public IEnumerator WAIT_YESNO()
        {
            var rhs_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", rhs_0);
            var lhs_3 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            lhs_3.SetFloat("VAL", 0f);
            var rhs_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CLEAR_YESNO");
            _world.AcknexObject.SetString("IF_N", rhs_4.GetString("NAME"));
            var rhs_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CLEAR_YESNO");
            _world.AcknexObject.SetString("IF_ESC", rhs_6.GetString("NAME"));
            yield break;
        }
    }
}
