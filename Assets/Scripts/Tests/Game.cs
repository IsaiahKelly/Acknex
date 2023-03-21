using Acknex.Interfaces;
using System.Collections;
using UnityEngine;
namespace Tests
{
    public class Game : IAcknexRuntime
    {
        private IAcknexWorld _world;
        public void SetWorld(IAcknexWorld world)
        {
            _world = world;
        }
        public IEnumerator CallAction(string name)
        {
            if (name == null)
            {
                yield break;
            }
            var method = this.GetType().GetMethod(name);
            if (method != null)
            {
                var result = method.Invoke(this, null);
                yield return (IEnumerator)result;
            }
            yield break;
        }
        public IEnumerator ACTORJUMP()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("VSPEED");
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetFloat("VSPEED", temp_3 + (-0.1f * TimeUtils.TicksToTime(1)));
            var MY_7 = _world.GetSynonymObject("MY");
            var temp_8 = MY_7.GetFloat("FLOOR_HGT");
            var MY_10 = _world.GetSynonymObject("MY");
            var temp_11 = MY_10.GetFloat("HEIGHT");
            if (temp_11 > temp_8)
            {
                yield break;
            }
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetFloat("GROUND", 0f);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("HEIGHT", -0.05f);
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetFloat("VSPEED", 0f);
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetAcknexObject("EACH_TICK", null);
            yield break;
            yield break;
        }
        public IEnumerator ACTORJUMPSTOP()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("VSPEED");
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetFloat("VSPEED", temp_3 + -0.1f);
            var MY_7 = _world.GetSynonymObject("MY");
            var temp_8 = MY_7.GetFloat("FLOOR_HGT");
            var MY_10 = _world.GetSynonymObject("MY");
            var temp_11 = MY_10.GetFloat("HEIGHT");
            if (temp_11 > temp_8)
            {
                yield break;
            }
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetFloat("GROUND", 0f);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("HEIGHT", -0.05f);
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetFloat("VSPEED", 0f);
            var MY_23 = _world.GetSynonymObject("MY");
            var temp_24 = MY_23.GetFloat("SPEED");
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetFloat("SPEED", temp_24 + -0.1f);
            var MY_29 = _world.GetSynonymObject("MY");
            var temp_30 = MY_29.GetFloat("ANGLE");
            var MY_32 = _world.GetSynonymObject("MY");
            MY_32.SetFloat("ANGLE", temp_30 + 0.05f);
            var MY_35 = _world.GetSynonymObject("MY");
            var temp_36 = MY_35.GetFloat("SPEED");
            if (temp_36 > 0.1f)
            {
                yield break;
            }
            var MY_39 = _world.GetSynonymObject("MY");
            MY_39.SetAcknexObject("EACH_TICK", null);
            var MY_42 = _world.GetSynonymObject("MY");
            MY_42.SetFloat("SPEED", 0f);
            var MY_45 = _world.GetSynonymObject("MY");
            MY_45.SetFloat("CAREFULLY", 0f);
            var MY_48 = _world.GetSynonymObject("MY");
            MY_48.SetAcknexObject("TARGET", null);
            yield break;
        }
        public IEnumerator AIMMISSILE()
        {
            var MISSILECOUNTER_1 = _world.GetObject(ObjectType.Skill, "MISSILECOUNTER");
            var MISSILECOUNTER_1_val = MISSILECOUNTER_1.GetFloat("VAL");
            var MISSILECOUNTER_2 = _world.GetObject(ObjectType.Skill, "MISSILECOUNTER");
            MISSILECOUNTER_2.SetFloat("VAL", MISSILECOUNTER_1_val + 1f);
            var MISSILECOUNTER_4 = _world.GetObject(ObjectType.Skill, "MISSILECOUNTER");
            var MISSILECOUNTER_4_val = MISSILECOUNTER_4.GetFloat("VAL");
            if (MISSILECOUNTER_4_val == 16f)
            {
                var MY_7 = _world.GetSynonymObject("MY");
                MY_7.SetFloat("PASSABLE", 0f);
            }
            var MISSILECOUNTER_9 = _world.GetObject(ObjectType.Skill, "MISSILECOUNTER");
            var MISSILECOUNTER_9_val = MISSILECOUNTER_9.GetFloat("VAL");
            if (MISSILECOUNTER_9_val < 48f)
            {
                yield break;
            }
            var BULLET_10 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_12 = _world.GetSynonymObject("MY");
            MY_12.SetAcknexObject("TARGET", BULLET_10);
            var MISSILECOUNTER_14 = _world.GetObject(ObjectType.Skill, "MISSILECOUNTER");
            var MISSILECOUNTER_14_val = MISSILECOUNTER_14.GetFloat("VAL");
            if (MISSILECOUNTER_14_val < 80f)
            {
                yield break;
            }
            var MISSILECOUNTER_16 = _world.GetObject(ObjectType.Skill, "MISSILECOUNTER");
            MISSILECOUNTER_16.SetFloat("VAL", 0f);
            var MY_19 = _world.GetSynonymObject("MY");
            var temp_20 = MY_19.GetFloat("VISIBLE");
            if (temp_20 == 1f)
            {
                yield break;
            }
            {
                var enumerator = VANISHSTOP();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator ASKFOREXIT()
        {
            _world.PlaySound("BIP03SND", 0.5f);
            var ASKFOREXITTEXT_1 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ASKFOREXITTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", ASKFOREXITTEXT_1);
            _world.AcknexObject.SetAcknexObject("IF_CUU", null);
            _world.AcknexObject.SetAcknexObject("IF_CUD", null);
            _world.AcknexObject.SetAcknexObject("IF_CUR", null);
            _world.AcknexObject.SetAcknexObject("IF_CUL", null);
            var EXITGAME_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXITGAME");
            _world.AcknexObject.SetAcknexObject("IF_S", EXITGAME_12);
            var EXITGAME_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXITGAME");
            _world.AcknexObject.SetAcknexObject("IF_Y", EXITGAME_14);
            var RESETANSWER_16 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"RESETANSWER");
            _world.AcknexObject.SetAcknexObject("IF_N", RESETANSWER_16);
            var HLP02STR_18 = _world.AcknexObject.GetAcknexObject("HLP02STR");
            _world.SetSynonymObject("MESSAGE_TEXT", HLP02STR_18);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
        public IEnumerator BEAM()
        {
            {
                var enumerator = CHOOSEPARTICLE();
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
            yield return new WaitForCycles(1f);
            FIRE:
            var QGUN01OVL_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"QGUN01OVL");
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
                var enumerator = DECAMMO();
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
            var PANELTEXT_21 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            PANELTEXT_21.SetAcknexObject("STRING", WRN01STR_19);
            var PANELTEXT_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", PANELTEXT_22);
            var MSGSECCOUNT_26 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_26.SetFloat("VAL", 0f);
            PLENTY:
            var PLAYER_LIGHT_28 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            var PLAYER_LIGHT_28_val = PLAYER_LIGHT_28.GetFloat("VAL");
            var PLAYER_LIGHT_29 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            PLAYER_LIGHT_29.SetFloat("VAL", PLAYER_LIGHT_28_val + 0.9f);
            _world.PlaySound("QGUN02SND", 0.8f);
            var SHOT_SOUND_ON_32 = _world.GetObject(ObjectType.Skill, "SHOT_SOUND_ON");
            SHOT_SOUND_ON_32.SetFloat("VAL", 1f);
            var SHOTSECCOUNT_34 = _world.GetObject(ObjectType.Skill, "SHOTSECCOUNT");
            SHOTSECCOUNT_34.SetFloat("VAL", 0f);
            var QGUN02OVL_35 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"QGUN02OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", QGUN02OVL_35);
            var PARTICLE_40 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_40.SetFloat("GROUND", 1f);
            var PARTICLE_43 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_43.SetFloat("SPEED", 2f);
            var PARTICLE_45 = _world.GetSynonymObject("PARTICLE");
            var PARTICLE_47 = _world.GetSynonymObject("PARTICLE");
            var temp_48 = PARTICLE_47.GetFloat("X");
            var PLAYER_X_49 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_49_val = PLAYER_X_49.GetFloat("VAL");
            var PLAYER_COS_51 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var PLAYER_COS_51_val = PLAYER_COS_51.GetFloat("VAL");
            var PLAYER_VX_55 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_55_val = PLAYER_VX_55.GetFloat("VAL");
            var TIME_CORR_57 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_57_val = TIME_CORR_57.GetFloat("VAL");
            PARTICLE_45.SetFloat("X", PLAYER_X_49_val + PLAYER_COS_51_val * 2f + PLAYER_VX_55_val * TIME_CORR_57_val);
            var PARTICLE_59 = _world.GetSynonymObject("PARTICLE");
            var PARTICLE_61 = _world.GetSynonymObject("PARTICLE");
            var temp_62 = PARTICLE_61.GetFloat("Y");
            var PLAYER_Y_63 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_63_val = PLAYER_Y_63.GetFloat("VAL");
            var PLAYER_SIN_65 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var PLAYER_SIN_65_val = PLAYER_SIN_65.GetFloat("VAL");
            var PLAYER_VY_69 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_69_val = PLAYER_VY_69.GetFloat("VAL");
            var TIME_CORR_71 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_71_val = TIME_CORR_71.GetFloat("VAL");
            PARTICLE_59.SetFloat("Y", PLAYER_Y_63_val + PLAYER_SIN_65_val * 2f + PLAYER_VY_69_val * TIME_CORR_71_val);
            var PARTICLE_73 = _world.GetSynonymObject("PARTICLE");
            var PARTICLE_75 = _world.GetSynonymObject("PARTICLE");
            var temp_76 = PARTICLE_75.GetFloat("HEIGHT");
            var PLAYER_SIZE_77 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_77_val = PLAYER_SIZE_77.GetFloat("VAL");
            var PLAYER_TILT_80 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_80_val = PLAYER_TILT_80.GetFloat("VAL");
            var PLAYER_HGT_87 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_87_val = PLAYER_HGT_87.GetFloat("VAL");
            var FLOOR_HGT_89 = _world.GetObject(ObjectType.Skill, "FLOOR_HGT");
            var FLOOR_HGT_89_val = FLOOR_HGT_89.GetFloat("VAL");
            PARTICLE_73.SetFloat("HEIGHT", PLAYER_SIZE_77_val - (PLAYER_TILT_80_val * 1.3f) - 0.3f + PLAYER_HGT_87_val + FLOOR_HGT_89_val);
            var PRTCTEX_90 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"PRTCTEX");
            var PARTICLE_92 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_92.SetAcknexObject("TEXTURE", PRTCTEX_90);
            var IMPLODEPARTICLE_93 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"IMPLODEPARTICLE");
            var PARTICLE_95 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_95.SetAcknexObject("IF_ARRIVED", IMPLODEPARTICLE_93);
            var LOCATEPARTICLE_96 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOCATEPARTICLE");
            var PARTICLE_98 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_98.SetAcknexObject("EACH_CYCLE", LOCATEPARTICLE_96);
            var PARTICLE_101 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_101.SetAcknexObject("EACH_TICK", null);
            var PLAYER_ANGLE_102 = _world.GetObject(ObjectType.Skill, "PLAYER_ANGLE");
            var PLAYER_ANGLE_102_val = PLAYER_ANGLE_102.GetFloat("VAL");
            var PARTICLE_104 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_104.SetFloat("ANGLE", PLAYER_ANGLE_102_val);
            var BULLET_105 = _world.AcknexObject.GetAcknexObject("BULLET");
            var PARTICLE_107 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_107.SetAcknexObject("TARGET", BULLET_105);
            var PARTICLE_110 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_110.SetFloat("INVISIBLE", 0f);
            var SHOOT_SECTOR_112 = _world.GetObject(ObjectType.Skill, "SHOOT_SECTOR");
            SHOOT_SECTOR_112.SetFloat("VAL", 6.283f);
            var SHOOT_RANGE_114 = _world.GetObject(ObjectType.Skill, "SHOOT_RANGE");
            SHOOT_RANGE_114.SetFloat("VAL", 200f);
            var SHOOT_FAC_116 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            SHOOT_FAC_116.SetFloat("VAL", 0f);
            var SHOOT_X_118 = _world.GetObject(ObjectType.Skill, "SHOOT_X");
            SHOOT_X_118.SetFloat("VAL", 0f);
            var SHOOT_Y_120 = _world.GetObject(ObjectType.Skill, "SHOOT_Y");
            SHOOT_Y_120.SetFloat("VAL", 0f);
            _world.Shoot();
            var HIT_DIST_122 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_122_val = HIT_DIST_122.GetFloat("VAL");
            if (HIT_DIST_122_val == 0f)
            {
                goto HITWALL;
            }
            var HIT_123 = _world.GetSynonymObject("HIT");
            var PARTICLE_125 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_125.SetAcknexObject("TARGET", HIT_123);
            var HIT_128 = _world.GetSynonymObject("HIT");
            var temp_129 = HIT_128.GetFloat("DISTANCE");
            if (temp_129 != 0f)
            {
                var PARTICLE_131 = _world.GetSynonymObject("PARTICLE");
                var PARTICLE_133 = _world.GetSynonymObject("PARTICLE");
                var temp_134 = PARTICLE_133.GetFloat("VSPEED");
                var HIT_137 = _world.GetSynonymObject("HIT");
                var temp_138 = HIT_137.GetFloat("FLOOR_HGT");
                var FLOOR_HGT_140 = _world.GetObject(ObjectType.Skill, "FLOOR_HGT");
                var FLOOR_HGT_140_val = FLOOR_HGT_140.GetFloat("VAL");
                var HIT_144 = _world.GetSynonymObject("HIT");
                var temp_145 = HIT_144.GetFloat("DISTANCE");
                PARTICLE_131.SetFloat("VSPEED", (temp_138 - FLOOR_HGT_140_val) / temp_145);
            }
            var PARTICLE_148 = _world.GetSynonymObject("PARTICLE");
            var temp_149 = PARTICLE_148.GetFloat("VSPEED");
            if (temp_149 < 0f)
            {
                var PARTICLE_151 = _world.GetSynonymObject("PARTICLE");
                var PARTICLE_153 = _world.GetSynonymObject("PARTICLE");
                var temp_154 = PARTICLE_153.GetFloat("VSPEED");
                var PARTICLE_157 = _world.GetSynonymObject("PARTICLE");
                var temp_158 = PARTICLE_157.GetFloat("VSPEED");
                PARTICLE_151.SetFloat("VSPEED", -temp_158);
            }
            goto CONTHIT;
            HITWALL:
            var BULLET_159 = _world.AcknexObject.GetAcknexObject("BULLET");
            var PARTICLE_161 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_161.SetAcknexObject("TARGET", BULLET_159);
            var PARTICLE_163 = _world.GetSynonymObject("PARTICLE");
            var PARTICLE_165 = _world.GetSynonymObject("PARTICLE");
            var temp_166 = PARTICLE_165.GetFloat("VSPEED");
            var PLAYER_TILT_168 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_168_val = PLAYER_TILT_168.GetFloat("VAL");
            PARTICLE_163.SetFloat("VSPEED", -PLAYER_TILT_168_val / 1.4f);
            CONTHIT:
            var PLAYER_LIGHT_172 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            var PLAYER_LIGHT_172_val = PLAYER_LIGHT_172.GetFloat("VAL");
            var PLAYER_LIGHT_173 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            PLAYER_LIGHT_173.SetFloat("VAL", PLAYER_LIGHT_172_val + -0.9f);
            yield return new WaitForCycles(4f);
            //Unknown keyword: LOCATE
            var QGUN01OVL_175 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"QGUN01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", QGUN01OVL_175);
            yield return new WaitForCycles(2f);
            var QGUN00OVL_179 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"QGUN00OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", QGUN00OVL_179);
            goto CONT;
            NOAMMO:
            var WRN02STR_182 = _world.AcknexObject.GetAcknexObject("WRN02STR");
            var PANELTEXT_184 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            PANELTEXT_184.SetAcknexObject("STRING", WRN02STR_182);
            var PANELTEXT_185 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", PANELTEXT_185);
            var MSGSECCOUNT_189 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_189.SetFloat("VAL", 0f);
            var GUN_ON_191 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_191.SetFloat("VAL", 0f);
            _world.PlaySound("QGUN03SND", 0.5f);
            yield return new WaitForCycles(2f);
            var QGUN00OVL_194 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"QGUN00OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", QGUN00OVL_194);
            CONT:
            var WEAPONSEL_198 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_198_val = WEAPONSEL_198.GetFloat("VAL");
            if (WEAPONSEL_198_val != 5f)
            {
                goto FINISH;
            }
            var BEAM_199 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"BEAM");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", BEAM_199);
            var BEAM_201 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"BEAM");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", BEAM_201);
            FINISH:
            var GUNFIRING_204 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            GUNFIRING_204.SetFloat("VAL", 0f);
            yield break;
        }
        public IEnumerator BEAMREACT()
        {
            {
                var enumerator = CHOOSEPARTICLE();
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
            var MY_27 = _world.GetSynonymObject("MY");
            MY_27.SetFloat("IMMATERIAL", 1f);
            var PARTICLE_30 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_30.SetFloat("SPEED", 2f);
            var MY_31 = _world.GetSynonymObject("MY");
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
            var PRTCTEX_50 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"PRTCTEX");
            var PARTICLE_52 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_52.SetAcknexObject("TEXTURE", PRTCTEX_50);
            var IMPLODEPARTICLE_53 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"IMPLODEPARTICLE");
            var PARTICLE_55 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_55.SetAcknexObject("IF_ARRIVED", IMPLODEPARTICLE_53);
            var LOCATEPARTICLE_56 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOCATEPARTICLE");
            var PARTICLE_58 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_58.SetAcknexObject("EACH_CYCLE", LOCATEPARTICLE_56);
            var PARTICLE_61 = _world.GetSynonymObject("PARTICLE");
            PARTICLE_61.SetFloat("INVISIBLE", 0f);
            yield break;
        }
        public IEnumerator BOUNCE()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("SKILL2");
            if (temp_3 < -15f)
            {
                var MY_5 = _world.GetSynonymObject("MY");
                var temp_6 = MY_5.GetFloat("ANGLE");
                var MY_8 = _world.GetSynonymObject("MY");
                MY_8.SetFloat("SKILL2", temp_6);
            }
            _world.PlaySound("GRAN02SND", 0.7f, "MY");
            var MY_12 = _world.GetSynonymObject("MY");
            var temp_13 = MY_12.GetFloat("SKILL1");
            if (temp_13 == 0f)
            {
                goto YWALL;
            }
            var MY_15 = _world.GetSynonymObject("MY");
            var MY_17 = _world.GetSynonymObject("MY");
            var temp_18 = MY_17.GetFloat("ANGLE");
            var TWO_PI_19 = _world.GetObject(ObjectType.Skill, "TWO_PI");
            var TWO_PI_19_val = TWO_PI_19.GetFloat("VAL");
            var MY_22 = _world.GetSynonymObject("MY");
            var temp_23 = MY_22.GetFloat("SKILL2");
            MY_15.SetFloat("ANGLE", TWO_PI_19_val - temp_23);
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetFloat("SKILL1", 0f);
            yield break;
            YWALL:
            var MY_28 = _world.GetSynonymObject("MY");
            var MY_30 = _world.GetSynonymObject("MY");
            var temp_31 = MY_30.GetFloat("ANGLE");
            var PI_32 = _world.GetObject(ObjectType.Skill, "PI");
            var PI_32_val = PI_32.GetFloat("VAL");
            var MY_35 = _world.GetSynonymObject("MY");
            var temp_36 = MY_35.GetFloat("SKILL2");
            MY_28.SetFloat("ANGLE", PI_32_val - temp_36);
            var MY_39 = _world.GetSynonymObject("MY");
            MY_39.SetFloat("SKILL1", 1f);
            yield break;
        }
        public IEnumerator BURST()
        {
            var AMMO_1 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_1_val = AMMO_1.GetFloat("VAL");
            if (AMMO_1_val < 3f)
            {
                {
                    var enumerator = FIRE();
                    while (enumerator.MoveNext())
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
            yield return new WaitForCycles(1f);
            FIRE:
            var MP5_02OVL_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"MP5_02OVL");
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
                var enumerator = DECAMMO();
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
            var PANELTEXT_29 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            PANELTEXT_29.SetAcknexObject("STRING", WRN01STR_27);
            var PANELTEXT_30 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", PANELTEXT_30);
            var MSGSECCOUNT_34 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_34.SetFloat("VAL", 0f);
            PLENTY:
            var PLAYER_LIGHT_36 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            var PLAYER_LIGHT_36_val = PLAYER_LIGHT_36.GetFloat("VAL");
            var PLAYER_LIGHT_37 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            PLAYER_LIGHT_37.SetFloat("VAL", PLAYER_LIGHT_36_val + 0.7f);
            var EXPL01OVL_38 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"EXPL01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.12", EXPL01OVL_38);
            _world.PlaySound("MP_503SND", 0.4f);
            var SHOT_SOUND_ON_43 = _world.GetObject(ObjectType.Skill, "SHOT_SOUND_ON");
            SHOT_SOUND_ON_43.SetFloat("VAL", 1f);
            var SHOTSECCOUNT_45 = _world.GetObject(ObjectType.Skill, "SHOTSECCOUNT");
            SHOTSECCOUNT_45.SetFloat("VAL", 0f);
            yield return new WaitForCycles(1f);
            var MP5_03OVL_47 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"MP5_03OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_03OVL_47);
            var EXPL02OVL_50 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"EXPL02OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.12", EXPL02OVL_50);
            var SHOOT_SECTOR_54 = _world.GetObject(ObjectType.Skill, "SHOOT_SECTOR");
            SHOOT_SECTOR_54.SetFloat("VAL", 6.283f);
            var SHOOT_RANGE_56 = _world.GetObject(ObjectType.Skill, "SHOOT_RANGE");
            SHOOT_RANGE_56.SetFloat("VAL", 200f);
            var SHOOT_FAC_57 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_58 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_58_val = SHOOT_FAC_58.GetFloat("VAL");
            var PLAYERBURSTFACTOR_59 = _world.GetObject(ObjectType.Skill, "PLAYERBURSTFACTOR");
            var PLAYERBURSTFACTOR_59_val = PLAYERBURSTFACTOR_59.GetFloat("VAL");
            SHOOT_FAC_57.SetFloat("VAL", PLAYERBURSTFACTOR_59_val);
            var DSHOOTXPLUS_60 = _world.GetObject(ObjectType.Skill, "DSHOOTXPLUS");
            var DSHOOTXPLUS_60_val = DSHOOTXPLUS_60.GetFloat("VAL");
            var SHOOT_X_61 = _world.GetObject(ObjectType.Skill, "SHOOT_X");
            SHOOT_X_61.SetFloat("VAL", DSHOOTXPLUS_60_val);
            var SHOOT_Y_63 = _world.GetObject(ObjectType.Skill, "SHOOT_Y");
            SHOOT_Y_63.SetFloat("VAL", 0f);
            _world.Shoot();
            var HIT_DIST_65 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_65_val = HIT_DIST_65.GetFloat("VAL");
            if (HIT_DIST_65_val == 0f)
            {
                goto SHOOT2;
            }
            var HIT_66 = _world.GetSynonymObject("HIT");
            _world.SetSynonymObject("MY_TARGET", HIT_66);
            var MY_TARGET_70 = _world.GetSynonymObject("MY_TARGET");
            MY_TARGET_70.SetFloat("SKILL3", 1f);
            var HIT_73 = _world.GetSynonymObject("HIT");
            var temp_74 = HIT_73.GetFloat("FRAGILE");
            if (temp_74 == 1f)
            {
                {
                    var enumerator = CASTBLOOD();
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
            var SHOOT_X_76 = _world.GetObject(ObjectType.Skill, "SHOOT_X");
            SHOOT_X_76.SetFloat("VAL", 0f);
            _world.Shoot();
            var HIT_DIST_78 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_78_val = HIT_DIST_78.GetFloat("VAL");
            if (HIT_DIST_78_val == 0f)
            {
                goto SHOOT3;
            }
            var HIT_79 = _world.GetSynonymObject("HIT");
            _world.SetSynonymObject("MY_TARGET", HIT_79);
            var MY_TARGET_83 = _world.GetSynonymObject("MY_TARGET");
            MY_TARGET_83.SetFloat("SKILL3", 1f);
            var HIT_86 = _world.GetSynonymObject("HIT");
            var temp_87 = HIT_86.GetFloat("FRAGILE");
            if (temp_87 == 1f)
            {
                {
                    var enumerator = CASTBLOOD();
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
            var DSHOOTXMINUS_88 = _world.GetObject(ObjectType.Skill, "DSHOOTXMINUS");
            var DSHOOTXMINUS_88_val = DSHOOTXMINUS_88.GetFloat("VAL");
            var SHOOT_X_89 = _world.GetObject(ObjectType.Skill, "SHOOT_X");
            SHOOT_X_89.SetFloat("VAL", DSHOOTXMINUS_88_val);
            _world.Shoot();
            var HIT_DIST_91 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_91_val = HIT_DIST_91.GetFloat("VAL");
            if (HIT_DIST_91_val == 0f)
            {
                goto NOHIT;
            }
            var HIT_92 = _world.GetSynonymObject("HIT");
            _world.SetSynonymObject("MY_TARGET", HIT_92);
            var MY_TARGET_96 = _world.GetSynonymObject("MY_TARGET");
            MY_TARGET_96.SetFloat("SKILL3", 1f);
            var HIT_99 = _world.GetSynonymObject("HIT");
            var temp_100 = HIT_99.GetFloat("FRAGILE");
            if (temp_100 == 1f)
            {
                {
                    var enumerator = CASTBLOOD();
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
            yield return new WaitForCycles(1f);
            _world.AcknexObject.SetAcknexObject("LAYERS.12", null);
            var PLAYER_LIGHT_106 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            var PLAYER_LIGHT_106_val = PLAYER_LIGHT_106.GetFloat("VAL");
            var PLAYER_LIGHT_107 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            PLAYER_LIGHT_107.SetFloat("VAL", PLAYER_LIGHT_106_val + -0.7f);
            yield return new WaitForCycles(2f);
            var WEAPONSEL_110 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_110_val = WEAPONSEL_110.GetFloat("VAL");
            if (WEAPONSEL_110_val != 2f)
            {
                goto FINISH;
            }
            var MOUSE_LEFT_112 = _world.GetObject(ObjectType.Skill, "MOUSE_LEFT");
            var MOUSE_LEFT_112_val = MOUSE_LEFT_112.GetFloat("VAL");
            if (MOUSE_LEFT_112_val == 1f)
            {
                goto FIRE;
            }
            var KEY_CTRL_114 = _world.GetObject(ObjectType.Skill, "KEY_CTRL");
            var KEY_CTRL_114_val = KEY_CTRL_114.GetFloat("VAL");
            if (KEY_CTRL_114_val == 1f)
            {
                goto FIRE;
            }
            var MP5_02OVL_115 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"MP5_02OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_02OVL_115);
            yield return new WaitForCycles(1f);
            var MP5_01OVL_119 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"MP5_01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_01OVL_119);
            goto CONT;
            NOAMMO:
            var WRN02STR_122 = _world.AcknexObject.GetAcknexObject("WRN02STR");
            var PANELTEXT_124 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            PANELTEXT_124.SetAcknexObject("STRING", WRN02STR_122);
            var PANELTEXT_125 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", PANELTEXT_125);
            var MSGSECCOUNT_129 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_129.SetFloat("VAL", 0f);
            _world.PlaySound("MP_504SND", 1f);
            var GUN_ON_132 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_132.SetFloat("VAL", 0f);
            yield return new WaitForCycles(2f);
            var MP5_01OVL_134 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"MP5_01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_01OVL_134);
            CONT:
            var BURST_137 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"BURST");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", BURST_137);
            var BURST_139 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"BURST");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", BURST_139);
            FINISH:
            var GUNFIRING_142 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            GUNFIRING_142.SetFloat("VAL", 0f);
            yield break;
        }
        public IEnumerator CASTBLOOD()
        {
            var BLOOD1ACT_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"BLOOD1ACT");
            var temp_3 = BLOOD1ACT_2.GetFloat("INVISIBLE");
            if (temp_3 != 1f)
            {
                goto BLOOD2;
            }
            var BLOOD1ACT_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"BLOOD1ACT");
            _world.SetSynonymObject("BLOOD", BLOOD1ACT_4);
            goto CAST;
            BLOOD2:
            var BLOOD2ACT_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"BLOOD2ACT");
            var temp_9 = BLOOD2ACT_8.GetFloat("INVISIBLE");
            if (temp_9 != 1f)
            {
                goto BLOOD3;
            }
            var BLOOD2ACT_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"BLOOD2ACT");
            _world.SetSynonymObject("BLOOD", BLOOD2ACT_10);
            goto CAST;
            BLOOD3:
            var BLOOD3ACT_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"BLOOD3ACT");
            var temp_15 = BLOOD3ACT_14.GetFloat("INVISIBLE");
            if (temp_15 != 1f)
            {
                goto BLOOD4;
            }
            var BLOOD3ACT_16 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"BLOOD3ACT");
            _world.SetSynonymObject("BLOOD", BLOOD3ACT_16);
            goto CAST;
            BLOOD4:
            var BLOOD4ACT_20 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"BLOOD4ACT");
            var temp_21 = BLOOD4ACT_20.GetFloat("INVISIBLE");
            if (temp_21 != 1f)
            {
                goto REFUSE;
            }
            var BLOOD4ACT_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"BLOOD4ACT");
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
            _world.Drop("BLOOD");
            var BLOOD_45 = _world.GetSynonymObject("BLOOD");
            BLOOD_45.SetFloat("INVISIBLE", 0f);
            yield break;
        }
        public IEnumerator CHOOSEGAME()
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
            _world.PlaySound("BIP02SND", 0.5f);
            _world.AcknexObject.SetAcknexObject("IF_ENTER", null);
            {
                var enumerator = HIDEMENU();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MOVE_MODE_8 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_8.SetFloat("VAL", 0f);
            //Unknown keyword: PLAY_CD
            yield return new WaitForCycles(16f);
            //Unknown keyword: LOAD
            yield break;
        }
        public IEnumerator CHOOSEGRANADE()
        {
            var GRAN1ACT_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"GRAN1ACT");
            var temp_3 = GRAN1ACT_2.GetFloat("INVISIBLE");
            if (temp_3 != 1f)
            {
                goto GRANADE1;
            }
            var GRAN1ACT_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"GRAN1ACT");
            _world.SetSynonymObject("GRANADE", GRAN1ACT_4);
            yield break;
            GRANADE1:
            var GRAN11ACT_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"GRAN11ACT");
            var temp_9 = GRAN11ACT_8.GetFloat("INVISIBLE");
            if (temp_9 != 1f)
            {
                goto GRANADE2;
            }
            var GRAN11ACT_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"GRAN11ACT");
            _world.SetSynonymObject("GRANADE", GRAN11ACT_10);
            yield break;
            GRANADE2:
            var GRAN12ACT_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"GRAN12ACT");
            var temp_15 = GRAN12ACT_14.GetFloat("INVISIBLE");
            if (temp_15 != 1f)
            {
                goto GRANADE3;
            }
            var GRAN12ACT_16 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"GRAN12ACT");
            _world.SetSynonymObject("GRANADE", GRAN12ACT_16);
            yield break;
            GRANADE3:
            var GRAN13ACT_20 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"GRAN13ACT");
            var temp_21 = GRAN13ACT_20.GetFloat("INVISIBLE");
            if (temp_21 != 1f)
            {
                goto GRANADE4;
            }
            var GRAN13ACT_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"GRAN13ACT");
            _world.SetSynonymObject("GRANADE", GRAN13ACT_22);
            yield break;
            GRANADE4:
            var GRAN14ACT_26 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"GRAN14ACT");
            var temp_27 = GRAN14ACT_26.GetFloat("INVISIBLE");
            if (temp_27 != 1f)
            {
                goto REFUSE;
            }
            var GRAN14ACT_28 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"GRAN14ACT");
            _world.SetSynonymObject("GRANADE", GRAN14ACT_28);
            yield break;
            REFUSE:
            _world.SetSynonymObject("GRANADE", null);
            yield break;
        }
        public IEnumerator CHOOSEMISSILE()
        {
            var MISS1ACT_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"MISS1ACT");
            var temp_3 = MISS1ACT_2.GetFloat("INVISIBLE");
            if (temp_3 != 1f)
            {
                goto MISSILE1;
            }
            var MISS1ACT_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"MISS1ACT");
            _world.SetSynonymObject("MISSILE", MISS1ACT_4);
            yield break;
            MISSILE1:
            var MISS11ACT_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"MISS11ACT");
            var temp_9 = MISS11ACT_8.GetFloat("INVISIBLE");
            if (temp_9 != 1f)
            {
                goto MISSILE2;
            }
            var MISS11ACT_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"MISS11ACT");
            _world.SetSynonymObject("MISSILE", MISS11ACT_10);
            yield break;
            MISSILE2:
            var MISS12ACT_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"MISS12ACT");
            var temp_15 = MISS12ACT_14.GetFloat("INVISIBLE");
            if (temp_15 != 1f)
            {
                goto MISSILE3;
            }
            var MISS12ACT_16 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"MISS12ACT");
            _world.SetSynonymObject("MISSILE", MISS12ACT_16);
            yield break;
            MISSILE3:
            var MISS13ACT_20 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"MISS13ACT");
            var temp_21 = MISS13ACT_20.GetFloat("INVISIBLE");
            if (temp_21 != 1f)
            {
                goto MISSILE4;
            }
            var MISS13ACT_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"MISS13ACT");
            _world.SetSynonymObject("MISSILE", MISS13ACT_22);
            yield break;
            MISSILE4:
            var MISS14ACT_26 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"MISS14ACT");
            var temp_27 = MISS14ACT_26.GetFloat("INVISIBLE");
            if (temp_27 != 1f)
            {
                goto REFUSE;
            }
            var MISS14ACT_28 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"MISS14ACT");
            _world.SetSynonymObject("MISSILE", MISS14ACT_28);
            yield break;
            REFUSE:
            _world.SetSynonymObject("MISSILE", null);
            yield break;
        }
        public IEnumerator CHOOSEPARTICLE()
        {
            var PARTICLEACT_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"PARTICLEACT");
            var temp_3 = PARTICLEACT_2.GetFloat("INVISIBLE");
            if (temp_3 != 1f)
            {
                goto PARTICLE1;
            }
            var PARTICLEACT_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"PARTICLEACT");
            _world.SetSynonymObject("PARTICLE", PARTICLEACT_4);
            yield break;
            PARTICLE1:
            var PARTICLE1ACT_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"PARTICLE1ACT");
            var temp_9 = PARTICLE1ACT_8.GetFloat("INVISIBLE");
            if (temp_9 != 1f)
            {
                goto PARTICLE2;
            }
            var PARTICLE1ACT_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"PARTICLE1ACT");
            _world.SetSynonymObject("PARTICLE", PARTICLE1ACT_10);
            yield break;
            PARTICLE2:
            var PARTICLE2ACT_14 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"PARTICLE2ACT");
            var temp_15 = PARTICLE2ACT_14.GetFloat("INVISIBLE");
            if (temp_15 != 1f)
            {
                goto PARTICLE3;
            }
            var PARTICLE2ACT_16 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"PARTICLE2ACT");
            _world.SetSynonymObject("PARTICLE", PARTICLE2ACT_16);
            yield break;
            PARTICLE3:
            var PARTICLE3ACT_20 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"PARTICLE3ACT");
            var temp_21 = PARTICLE3ACT_20.GetFloat("INVISIBLE");
            if (temp_21 != 1f)
            {
                goto PARTICLE4;
            }
            var PARTICLE3ACT_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"PARTICLE3ACT");
            _world.SetSynonymObject("PARTICLE", PARTICLE3ACT_22);
            yield break;
            PARTICLE4:
            var PARTICLE4ACT_26 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"PARTICLE4ACT");
            var temp_27 = PARTICLE4ACT_26.GetFloat("INVISIBLE");
            if (temp_27 != 1f)
            {
                goto REFUSE;
            }
            var PARTICLE4ACT_28 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"PARTICLE4ACT");
            _world.SetSynonymObject("PARTICLE", PARTICLE4ACT_28);
            yield break;
            REFUSE:
            _world.SetSynonymObject("PARTICLE", null);
            yield break;
        }
        public IEnumerator CHOOSESUBMENU()
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
                    var enumerator = SHOWSOUNDVOLUMEMENU();
                    while (enumerator.MoveNext())
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
                    var enumerator = SHOWSAVEMENU();
                    while (enumerator.MoveNext())
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
                    var enumerator = SHOWLOADMENU();
                    while (enumerator.MoveNext())
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
                    var enumerator = ASKFOREXIT();
                    while (enumerator.MoveNext())
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
        }
        public IEnumerator CONTROLMESSAGEDISPLAY()
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
                var enumerator = REGIO_ARISE();
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
            var PANELTEXT_45 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            var temp_46 = PANELTEXT_45?.GetAcknexObject("STRING");
            if (temp_46 == BLANKSTR_43)
            {
                goto NULLMESSAGE;
            }
            var BLANKSTR_47 = _world.AcknexObject.GetAcknexObject("BLANKSTR");
            var PANELTEXT_49 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            PANELTEXT_49.SetAcknexObject("STRING", BLANKSTR_47);
            var PANELTEXT_50 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", PANELTEXT_50);
            yield break;
            NULLMESSAGE:
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", null);
            var MSGSECCOUNT_57 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_57.SetFloat("VAL", -1f);
            yield break;
        }
        public IEnumerator CONTROLUNDERWATERTIME()
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
                var enumerator = HITPLAYER();
                while (enumerator.MoveNext())
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
        public IEnumerator CYCLEREPTATTACK()
        {
            {
                var enumerator = LOCATEACTOR();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetFloat("GROUND", 0f);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetFloat("HEIGHT", -0.05f);
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetFloat("VSPEED", 0f);
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("EACH_TICK", null);
            {
                var enumerator = REPTTALK();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var SHOT_SOUND_ON_13 = _world.GetObject(ObjectType.Skill, "SHOT_SOUND_ON");
            var SHOT_SOUND_ON_13_val = SHOT_SOUND_ON_13.GetFloat("VAL");
            if (SHOT_SOUND_ON_13_val == 0f)
            {
                goto CONT;
            }
            {
                var enumerator = REPTLOOKFOR();
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
                var enumerator = LOOKPLAYER();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_16 = _world.GetSynonymObject("MY");
            var temp_17 = MY_16.GetFloat("FLAG1");
            if (temp_17 == 0f)
            {
                yield break;
            }
            var MY_20 = _world.GetSynonymObject("MY");
            var temp_21 = MY_20.GetFloat("FLAG2");
            if (temp_21 == 1f)
            {
                goto CONT1;
            }
            var MY_24 = _world.GetSynonymObject("MY");
            MY_24.SetFloat("FLAG2", 1f);
            _world.PlaySound("REPT02SND", 0.7f, "MY");
            CONT1:
            {
                var enumerator = REPTFOLLOWATTACK();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator CYCLEREPTHIDE()
        {
            {
                var enumerator = LOCATEACTOR();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetFloat("GROUND", 0f);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetFloat("HEIGHT", -0.05f);
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetFloat("VSPEED", 0f);
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("EACH_TICK", null);
            var MY_14 = _world.GetSynonymObject("MY");
            var temp_15 = MY_14.GetFloat("VISIBLE");
            if (temp_15 == 0f)
            {
                goto STOP;
            }
            var MY_18 = _world.GetSynonymObject("MY");
            MY_18.SetFloat("SPEED", 0.6f);
            var BULLET_19 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_21 = _world.GetSynonymObject("MY");
            MY_21.SetAcknexObject("TARGET", BULLET_19);
            yield break;
            STOP:
            var MY_24 = _world.GetSynonymObject("MY");
            MY_24.SetFloat("SPEED", 0f);
            var MY_27 = _world.GetSynonymObject("MY");
            MY_27.SetAcknexObject("TARGET", null);
            yield break;
        }
        public IEnumerator CYCLEREPTSHOOT()
        {
            {
                var enumerator = LOCATEACTOR();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("SKILL1");
            if (temp_3 > 9f)
            {
                {
                    var enumerator = REPTDIE();
                    while (enumerator.MoveNext())
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
            var MY_6 = _world.GetSynonymObject("MY");
            MY_6.SetFloat("GROUND", 0f);
            var MY_9 = _world.GetSynonymObject("MY");
            MY_9.SetFloat("HEIGHT", -0.05f);
            var MY_12 = _world.GetSynonymObject("MY");
            MY_12.SetFloat("VSPEED", 0f);
            var MY_15 = _world.GetSynonymObject("MY");
            MY_15.SetAcknexObject("EACH_TICK", null);
            {
                var enumerator = LOOKPLAYER();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_18 = _world.GetSynonymObject("MY");
            var temp_19 = MY_18.GetFloat("FLAG1");
            if (temp_19 == 0f)
            {
                goto CONTFLAG2;
            }
            goto PLAYERSEEN;
            CONTFLAG2:
            var MY_22 = _world.GetSynonymObject("MY");
            var temp_23 = MY_22.GetFloat("FLAG2");
            if (temp_23 == 1f)
            {
                goto ATTACK;
            }
            {
                var enumerator = REPTWAIT();
                while (enumerator.MoveNext())
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
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetFloat("FLAG2", 1f);
            CONT:
            var MY_29 = _world.GetSynonymObject("MY");
            var temp_30 = MY_29.GetFloat("DISTANCE");
            if (temp_30 > 10f)
            {
                goto ATTACK;
            }
            {
                var enumerator = REPTSHOOT();
                while (enumerator.MoveNext())
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
                var enumerator = REPTFOLLOWATTACK();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator CYCLETROPATTACK()
        {
            {
                var enumerator = PROBE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("FLAG2");
            if (temp_3 != 0f)
            {
                goto ATTACK;
            }
            var SHOT_SOUND_ON_5 = _world.GetObject(ObjectType.Skill, "SHOT_SOUND_ON");
            var SHOT_SOUND_ON_5_val = SHOT_SOUND_ON_5.GetFloat("VAL");
            if (SHOT_SOUND_ON_5_val == 0f)
            {
                goto CONT;
            }
            {
                var enumerator = TROPLOOKFOR();
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
                var enumerator = LOOKPLAYER();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_8 = _world.GetSynonymObject("MY");
            var temp_9 = MY_8.GetFloat("FLAG1");
            if (temp_9 == 0f)
            {
                yield break;
            }
            var GUN_ON_11 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            var GUN_ON_11_val = GUN_ON_11.GetFloat("VAL");
            if (GUN_ON_11_val != 0f)
            {
                goto ATTACK;
            }
            var MY_14 = _world.GetSynonymObject("MY");
            var temp_15 = MY_14.GetFloat("DISTANCE");
            if (temp_15 < 20f)
            {
                {
                    var enumerator = TROPFOLLOWWARNING();
                    while (enumerator.MoveNext())
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
            var MY_18 = _world.GetSynonymObject("MY");
            MY_18.SetFloat("FLAG2", 1f);
            {
                var enumerator = TROPTALK();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_21 = _world.GetSynonymObject("MY");
            var temp_22 = MY_21.GetFloat("DISTANCE");
            if (temp_22 < 200f)
            {
                {
                    var enumerator = TROPFOLLOWATTACK();
                    while (enumerator.MoveNext())
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
        }
        public IEnumerator CYCLETROPBACK()
        {
            {
                var enumerator = PROBE();
                while (enumerator.MoveNext())
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
        public IEnumerator CYCLETROPHIDE()
        {
            {
                var enumerator = REPELANGLE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_1 = _world.GetSynonymObject("MY");
            var MY_3 = _world.GetSynonymObject("MY");
            var temp_4 = MY_3.GetFloat("ANGLE");
            var MY_6 = _world.GetSynonymObject("MY");
            var temp_7 = MY_6.GetFloat("ANGLE");
            MY_1.SetFloat("ANGLE", temp_7 + (UnityEngine.Random.value - 0.5f) * 2f);
            {
                var enumerator = PROBE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_18 = _world.GetSynonymObject("MY");
            var temp_19 = MY_18.GetFloat("VISIBLE");
            if (temp_19 == 1f)
            {
                yield break;
            }
            {
                var enumerator = LOOKPLAYER();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_22 = _world.GetSynonymObject("MY");
            var temp_23 = MY_22.GetFloat("FLAG1");
            if (temp_23 == 0f)
            {
                goto STOP;
            }
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetFloat("SPEED", 0.6f);
            var BULLET_27 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_29 = _world.GetSynonymObject("MY");
            MY_29.SetAcknexObject("TARGET", BULLET_27);
            yield break;
            STOP:
            var MY_32 = _world.GetSynonymObject("MY");
            MY_32.SetFloat("SPEED", 0f);
            var MY_35 = _world.GetSynonymObject("MY");
            MY_35.SetAcknexObject("TARGET", null);
            yield break;
        }
        public IEnumerator CYCLETROPSHOOT()
        {
            {
                var enumerator = PROBE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("SKILL1");
            if (temp_3 > 9f)
            {
                {
                    var enumerator = TROPDIE();
                    while (enumerator.MoveNext())
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
            var MY_6 = _world.GetSynonymObject("MY");
            var temp_7 = MY_6.GetFloat("DISTANCE");
            if (temp_7 > 300f)
            {
                {
                    var enumerator = TROPWAIT();
                    while (enumerator.MoveNext())
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
            var MY_10 = _world.GetSynonymObject("MY");
            var temp_11 = MY_10.GetFloat("DISTANCE");
            if (temp_11 > 100f)
            {
                goto ATTACK;
            }
            {
                var enumerator = FOLLOWANGLE();
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
                var enumerator = LOOKPLAYER();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_14 = _world.GetSynonymObject("MY");
            var temp_15 = MY_14.GetFloat("FLAG1");
            if (temp_15 == 0f)
            {
                goto ATTACK;
            }
            SHOOT:
            var SHOT_SOUND_ON_17 = _world.GetObject(ObjectType.Skill, "SHOT_SOUND_ON");
            SHOT_SOUND_ON_17.SetFloat("VAL", 1f);
            var SHOTSECCOUNT_19 = _world.GetObject(ObjectType.Skill, "SHOTSECCOUNT");
            SHOTSECCOUNT_19.SetFloat("VAL", 0f);
            if (UnityEngine.Random.value > 0.8f)
            {
                {
                    var enumerator = TROPAIM();
                    while (enumerator.MoveNext())
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
                var enumerator = TROPSHOOT();
                while (enumerator.MoveNext())
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
                var enumerator = TROPFOLLOWATTACK();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator CYCLETROPWARNING()
        {
            {
                var enumerator = PROBE();
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
                    var enumerator = TROPFOLLOWATTACK();
                    while (enumerator.MoveNext())
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
            var MY_4 = _world.GetSynonymObject("MY");
            var temp_5 = MY_4.GetFloat("DISTANCE");
            if (temp_5 > 10f)
            {
                goto CONT;
            }
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("EACH_CYCLE", null);
            {
                var enumerator = TROPWARNING();
                while (enumerator.MoveNext())
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
            var MY_11 = _world.GetSynonymObject("MY");
            var temp_12 = MY_11.GetFloat("DISTANCE");
            if (temp_12 > 40f)
            {
                {
                    var enumerator = TROPWAIT();
                    while (enumerator.MoveNext())
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
                var enumerator = FOLLOWANGLE();
                while (enumerator.MoveNext())
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
        public IEnumerator DECAMMO()
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
            yield break;
        }
        public IEnumerator DISPLAYMESSAGE()
        {
            var MESSAGE_TEXT_0 = _world.GetSynonymObject("MESSAGE_TEXT");
            var PANELTEXT_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            PANELTEXT_2.SetAcknexObject("STRING", MESSAGE_TEXT_0);
            var PANELTEXT_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", PANELTEXT_3);
            var MSGSECCOUNT_7 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_7.SetFloat("VAL", 0f);
            yield break;
        }
        public IEnumerator DIVE_UP()
        {
            _world.PlaySound("PLAYERINSPSND", 0.8f);
            {
                var enumerator = RESET_BLUE();
                while (enumerator.MoveNext())
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
        public IEnumerator DRILLHOLE()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("SKILL3");
            if (temp_3 == 0f)
            {
                yield break;
            }
            var MY_6 = _world.GetSynonymObject("MY");
            MY_6.SetFloat("SKILL3", 0f);
            var MY_8 = _world.GetSynonymObject("MY");
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
            var MY_43 = _world.GetSynonymObject("MY");
            var temp_44 = MY_43?.GetAcknexObject("ATTACH");
            if (temp_44 != null)
            {
                goto SECOND;
            }
            var MHL01TEX_45 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"MHL01TEX");
            var MY_47 = _world.GetSynonymObject("MY");
            MY_47.SetAcknexObject("ATTACH", MHL01TEX_45);
            var MY_49 = _world.GetSynonymObject("MY");
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
            var MY_68 = _world.GetSynonymObject("MY");
            var temp_69 = MY_68?.GetAcknexObject("ATTACH");
            _world.SetSynonymObject("MY_TEX", temp_69);
            var MY_TEX_73 = _world.GetSynonymObject("MY_TEX");
            var temp_74 = MY_TEX_73?.GetAcknexObject("ATTACH");
            if (temp_74 != null)
            {
                goto THIRD;
            }
            var MHL02TEX_75 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"MHL02TEX");
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
            var MHL03TEX_105 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"MHL03TEX");
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
            var MHL04TEX_135 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"MHL04TEX");
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
            var MHL05TEX_165 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"MHL05TEX");
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
            var MHL06TEX_195 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"MHL06TEX");
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
            var MHL07TEX_225 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"MHL07TEX");
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
            var MHL08TEX_255 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"MHL08TEX");
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
            var MHL09TEX_285 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"MHL09TEX");
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
            var MHL10TEX_315 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"MHL10TEX");
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
            yield break;
        }
        public IEnumerator DROPTROOPS2()
        {
            var DROPPED_1 = _world.GetObject(ObjectType.Skill, "DROPPED");
            var DROPPED_1_val = DROPPED_1.GetFloat("VAL");
            if (DROPPED_1_val == 1f)
            {
                yield break;
            }
            var MY_4 = _world.GetSynonymObject("MY");
            var temp_5 = MY_4.GetFloat("WAYPOINT");
            if (temp_5 != 13f)
            {
                yield break;
            }
            var DROPPED_7 = _world.GetObject(ObjectType.Skill, "DROPPED");
            DROPPED_7.SetFloat("VAL", 1f);
            var MY_10 = _world.GetSynonymObject("MY");
            MY_10.SetFloat("SPEED", 0f);
            yield return new WaitForTicks(4f);
            //Unknown keyword: SET_ALL
            //Unknown keyword: SET_ALL
            //Unknown keyword: SET_ALL
            yield return new WaitForTicks(160f);
            var MY_15 = _world.GetSynonymObject("MY");
            MY_15.SetFloat("SPEED", 2f);
            yield break;
        }
        public IEnumerator DROPTROOPS3()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("WAYPOINT");
            if (temp_3 != 1f)
            {
                yield break;
            }
            var MY_6 = _world.GetSynonymObject("MY");
            MY_6.SetFloat("SPEED", 0f);
            var HUMM1ATEX_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"HUMM1ATEX");
            var MY_9 = _world.GetSynonymObject("MY");
            MY_9.SetAcknexObject("TEXTURE", HUMM1ATEX_7);
            var MY_12 = _world.GetSynonymObject("MY");
            MY_12.SetAcknexObject("IF_ARRIVED", null);
            yield return new WaitForTicks(4f);
            //Unknown keyword: SET_ALL
            //Unknown keyword: SET_ALL
            //Unknown keyword: SET_ALL
            var MY_16 = _world.GetSynonymObject("MY");
            MY_16.SetAcknexObject("TARGET", null);
            yield break;
        }
        public IEnumerator ENDOFLEVEL()
        {
            var MOVE_MODE_1 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_1.SetFloat("VAL", 1f);
            //Unknown keyword: FADE_PAL
            _world.PlaySound("BIP03SND", 0.5f);
            var MENUITEM_4 = _world.GetObject(ObjectType.Skill, "MENUITEM");
            MENUITEM_4.SetFloat("VAL", 3f);
            var MAXMENUITEM_6 = _world.GetObject(ObjectType.Skill, "MAXMENUITEM");
            MAXMENUITEM_6.SetFloat("VAL", 3f);
            var HIDEMENU_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"HIDEMENU");
            _world.AcknexObject.SetAcknexObject("IF_ESC", HIDEMENU_7);
            _world.AcknexObject.SetAcknexObject("IF_CUU", null);
            _world.AcknexObject.SetAcknexObject("IF_CUD", null);
            _world.AcknexObject.SetAcknexObject("IF_CUR", null);
            _world.AcknexObject.SetAcknexObject("IF_CUL", null);
            var MENUPANEL_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"MENUPANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.16", MENUPANEL_17);
            var PLEASEWAITTEXT_20 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PLEASEWAITTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", PLEASEWAITTEXT_20);
            var LEVEL_STRING_24 = _world.GetSynonymObject("LEVEL_STRING");
            if (LEVEL_STRING_24 != null)
            {
                goto CONT;
            }
            var LOAD08STR_25 = _world.AcknexObject.GetAcknexObject("LOAD08STR");
            _world.SetSynonymObject("MESSAGE_TEXT", LOAD08STR_25);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var PLAYER_HEALTH_28 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            PLAYER_HEALTH_28.SetFloat("VAL", 100f);
            //Unknown keyword: PLAY_CD
            yield return new WaitForCycles(16f);
            //Unknown keyword: MAP
            //Unknown keyword: LOCATE
            _world.AcknexObject.SetAcknexObject("PANELS.16", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", null);
            yield break;
            CONT:
            var LOAD_STRING_36 = _world.GetSynonymObject("LOAD_STRING");
            _world.SetSynonymObject("MESSAGE_TEXT", LOAD_STRING_36);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: PLAY_CD
            yield return new WaitForCycles(16f);
            Application.Quit();
            yield break;
        }
        public IEnumerator ENTER_WATER()
        {
            _world.PlaySound("FWT01SND", 0.8f);
            {
                var enumerator = SET_SWIMMING();
                while (enumerator.MoveNext())
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
        public IEnumerator EXITGAME()
        {
            var MOVE_MODE_1 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_1.SetFloat("VAL", 1f);
            //Unknown keyword: PLAY_CD
            yield return new WaitForCycles(16f);
            Application.Quit();
            yield break;
        }
        public IEnumerator EXPLODEMISSILE()
        {
            {
                var enumerator = LOCATEACTOR();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var EXPLOSIONSTART_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXPLOSIONSTART");
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("EACH_TICK", EXPLOSIONSTART_0);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("EACH_CYCLE", null);
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("IF_ARRIVED", null);
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("IF_HIT", null);
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetAcknexObject("IF_NEAR", null);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("PASSABLE", 1f);
            var MY_18 = _world.GetSynonymObject("MY");
            _world.SetSynonymObject("EXPLOSION_CENTER", MY_18);
            var EXPLOSION_ON_21 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            EXPLOSION_ON_21.SetFloat("VAL", 1f);
            var SHOOT_SECTOR_23 = _world.GetObject(ObjectType.Skill, "SHOOT_SECTOR");
            SHOOT_SECTOR_23.SetFloat("VAL", 6.283f);
            var SHOOT_RANGE_25 = _world.GetObject(ObjectType.Skill, "SHOOT_RANGE");
            SHOOT_RANGE_25.SetFloat("VAL", 20f);
            var SHOOT_FAC_27 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            SHOOT_FAC_27.SetFloat("VAL", 10f);
            //Unknown keyword: EXPLODE
            var HIT_DIST_29 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_29_val = HIT_DIST_29.GetFloat("VAL");
            if (HIT_DIST_29_val == 0f)
            {
                goto CONT;
            }
            var RESULT_30 = _world.GetObject(ObjectType.Skill, "RESULT");
            var RESULT_30_val = RESULT_30.GetFloat("VAL");
            var PLAYER_RESULT_31 = _world.GetObject(ObjectType.Skill, "PLAYER_RESULT");
            PLAYER_RESULT_31.SetFloat("VAL", RESULT_30_val);
            var SHOOT_FAC_33 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            SHOOT_FAC_33.SetFloat("VAL", 0f);
            var SHOOT_RANGE_35 = _world.GetObject(ObjectType.Skill, "SHOOT_RANGE");
            SHOOT_RANGE_35.SetFloat("VAL", 40f);
            _world.Shoot("MY");
            var HIT_DIST_37 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_37_val = HIT_DIST_37.GetFloat("VAL");
            if (HIT_DIST_37_val == 0f)
            {
                goto CONT;
            }
            {
                var enumerator = HITPLAYERDELAY();
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
            var MY_40 = _world.GetSynonymObject("MY");
            MY_40.SetFloat("SPEED", 0f);
            var MY_43 = _world.GetSynonymObject("MY");
            MY_43.SetFloat("CAREFULLY", 0f);
            var MY_46 = _world.GetSynonymObject("MY");
            MY_46.SetFloat("GROUND", 0f);
            var MY_49 = _world.GetSynonymObject("MY");
            MY_49.SetFloat("HEIGHT", -0.05f);
            var EXP01TEX_50 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"EXP01TEX");
            var MY_52 = _world.GetSynonymObject("MY");
            MY_52.SetAcknexObject("TEXTURE", EXP01TEX_50);
            var MY_55 = _world.GetSynonymObject("MY");
            //Unknown Property Type: Thing.PLAY
            yield return new WaitForTicks(4f);
            var EXPLOSION_ON_58 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            EXPLOSION_ON_58.SetFloat("VAL", 0f);
            yield break;
        }
        public IEnumerator EXPLODETARGET()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2?.GetAcknexObject("TARGET");
            if (temp_3 == null)
            {
                yield break;
            }
            var SQRTARGETDIST_4 = _world.GetObject(ObjectType.Skill, "SQRTARGETDIST");
            var SQRTARGETDIST_5 = _world.GetObject(ObjectType.Skill, "SQRTARGETDIST");
            var SQRTARGETDIST_5_val = SQRTARGETDIST_5.GetFloat("VAL");
            var MY_9 = _world.GetSynonymObject("MY");
            var temp_10 = MY_9.GetFloat("TARGET_X");
            var MY_13 = _world.GetSynonymObject("MY");
            var temp_14 = MY_13.GetFloat("X");
            var MY_19 = _world.GetSynonymObject("MY");
            var temp_20 = MY_19.GetFloat("TARGET_X");
            var MY_23 = _world.GetSynonymObject("MY");
            var temp_24 = MY_23.GetFloat("X");
            var MY_31 = _world.GetSynonymObject("MY");
            var temp_32 = MY_31.GetFloat("TARGET_Y");
            var MY_35 = _world.GetSynonymObject("MY");
            var temp_36 = MY_35.GetFloat("Y");
            var MY_41 = _world.GetSynonymObject("MY");
            var temp_42 = MY_41.GetFloat("TARGET_Y");
            var MY_45 = _world.GetSynonymObject("MY");
            var temp_46 = MY_45.GetFloat("Y");
            SQRTARGETDIST_4.SetFloat("VAL", ((temp_10 - temp_14) * (temp_20 - temp_24)) + ((temp_32 - temp_36) * (temp_42 - temp_46)));
            var SQRTARGETDIST_50 = _world.GetObject(ObjectType.Skill, "SQRTARGETDIST");
            var SQRTARGETDIST_50_val = SQRTARGETDIST_50.GetFloat("VAL");
            if (SQRTARGETDIST_50_val > 64f)
            {
                yield break;
            }
            {
                var enumerator = EXPLODEMISSILE();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator EXPLOSIONEND()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("EACH_CYCLE", null);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetFloat("INVISIBLE", 1f);
            yield break;
        }
        public IEnumerator EXPLOSIONSMOKE()
        {
            var EXP01ATEX_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"EXP01ATEX");
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("TEXTURE", EXP01ATEX_0);
            var EXPLOSIONEND_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXPLOSIONEND");
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("EACH_CYCLE", EXPLOSIONEND_3);
            yield break;
        }
        public IEnumerator EXPLOSIONSTART()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("EACH_TICK", null);
            var EXPLOSIONSMOKE_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXPLOSIONSMOKE");
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("EACH_CYCLE", EXPLOSIONSMOKE_3);
            {
                var enumerator = FLASHREGION();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator EXPLOSIONTIMER()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("SKILL5");
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetFloat("SKILL5", temp_3 + (-1f * TimeUtils.TicksToTime(1)));
            var MY_8 = _world.GetSynonymObject("MY");
            var temp_9 = MY_8.GetFloat("SKILL5");
            if (temp_9 > 0f)
            {
                yield break;
            }
            var MY_12 = _world.GetSynonymObject("MY");
            MY_12.SetAcknexObject("EACH_TICK", null);
            var EXPLODEMISSILE_13 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXPLODEMISSILE");
            var MY_15 = _world.GetSynonymObject("MY");
            MY_15.SetAcknexObject("EACH_CYCLE", EXPLODEMISSILE_13);
            yield break;
        }
        public IEnumerator FADEIN()
        {
            //Unknown keyword: FADE_PAL
            yield return new WaitForTicks(8f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForTicks(1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForTicks(1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForTicks(1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForTicks(1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForTicks(1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForTicks(1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForTicks(1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForTicks(1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForTicks(1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForTicks(1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForTicks(1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForTicks(1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForTicks(1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForTicks(1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForTicks(1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForTicks(1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForTicks(1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForTicks(1f);
            //Unknown keyword: FADE_PAL
            yield return new WaitForTicks(1f);
            //Unknown keyword: FADE_PAL
            var REPEATMUSIC_20 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPEATMUSIC");
            _world.AcknexObject.SetAcknexObject("EACH_SEC.1", REPEATMUSIC_20);
            yield break;
        }
        public IEnumerator FINISHPLAYER()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("IF_NEAR", null);
            var KILLPLAYER_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"KILLPLAYER");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.8", KILLPLAYER_3);
            _world.PlaySound("EXP01SND", 0.7f);
            yield break;
        }
        public IEnumerator FIRE()
        {
            var GUNFIRING_1 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            GUNFIRING_1.SetFloat("VAL", 1f);
            _world.AcknexObject.SetAcknexObject("IF_CTRL", null);
            _world.AcknexObject.SetAcknexObject("IF_LEFT", null);
            yield return new WaitForCycles(1f);
            FIRE:
            var MP5_02OVL_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"MP5_02OVL");
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
                var enumerator = DECAMMO();
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
            var PANELTEXT_21 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            PANELTEXT_21.SetAcknexObject("STRING", WRN01STR_19);
            var PANELTEXT_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", PANELTEXT_22);
            var MSGSECCOUNT_26 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_26.SetFloat("VAL", 0f);
            PLENTY:
            var PLAYER_LIGHT_28 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            var PLAYER_LIGHT_28_val = PLAYER_LIGHT_28.GetFloat("VAL");
            var PLAYER_LIGHT_29 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            PLAYER_LIGHT_29.SetFloat("VAL", PLAYER_LIGHT_28_val + 0.5f);
            var EXPL01OVL_30 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"EXPL01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.12", EXPL01OVL_30);
            _world.PlaySound("MP_502SND", 0.4f);
            var SHOT_SOUND_ON_35 = _world.GetObject(ObjectType.Skill, "SHOT_SOUND_ON");
            SHOT_SOUND_ON_35.SetFloat("VAL", 1f);
            var SHOTSECCOUNT_37 = _world.GetObject(ObjectType.Skill, "SHOTSECCOUNT");
            SHOTSECCOUNT_37.SetFloat("VAL", 0f);
            yield return new WaitForCycles(1f);
            var MP5_03OVL_39 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"MP5_03OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_03OVL_39);
            var EXPL02OVL_42 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"EXPL02OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.12", EXPL02OVL_42);
            var SHOOT_SECTOR_46 = _world.GetObject(ObjectType.Skill, "SHOOT_SECTOR");
            SHOOT_SECTOR_46.SetFloat("VAL", 6.283f);
            var SHOOT_RANGE_48 = _world.GetObject(ObjectType.Skill, "SHOOT_RANGE");
            SHOOT_RANGE_48.SetFloat("VAL", 200f);
            var SHOOT_FAC_49 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_50 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_50_val = SHOOT_FAC_50.GetFloat("VAL");
            var PLAYERSHOOTFACTOR_51 = _world.GetObject(ObjectType.Skill, "PLAYERSHOOTFACTOR");
            var PLAYERSHOOTFACTOR_51_val = PLAYERSHOOTFACTOR_51.GetFloat("VAL");
            SHOOT_FAC_49.SetFloat("VAL", PLAYERSHOOTFACTOR_51_val);
            var DSHOOTXPLUS_52 = _world.GetObject(ObjectType.Skill, "DSHOOTXPLUS");
            var DSHOOTXPLUS_52_val = DSHOOTXPLUS_52.GetFloat("VAL");
            var SHOOT_X_53 = _world.GetObject(ObjectType.Skill, "SHOOT_X");
            SHOOT_X_53.SetFloat("VAL", DSHOOTXPLUS_52_val);
            var SVANGLE_54 = _world.GetObject(ObjectType.Skill, "SVANGLE");
            var SVANGLE_54_val = SVANGLE_54.GetFloat("VAL");
            var SHOOT_Y_55 = _world.GetObject(ObjectType.Skill, "SHOOT_Y");
            SHOOT_Y_55.SetFloat("VAL", SVANGLE_54_val);
            _world.Shoot();
            var HIT_DIST_57 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_57_val = HIT_DIST_57.GetFloat("VAL");
            if (HIT_DIST_57_val == 0f)
            {
                goto SHOOT2;
            }
            var HIT_60 = _world.GetSynonymObject("HIT");
            var temp_61 = HIT_60.GetFloat("FRAGILE");
            if (temp_61 == 1f)
            {
                goto CONTHIT;
            }
            SHOOT2:
            var SHOOT_X_63 = _world.GetObject(ObjectType.Skill, "SHOOT_X");
            SHOOT_X_63.SetFloat("VAL", 0f);
            _world.Shoot();
            var HIT_DIST_65 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_65_val = HIT_DIST_65.GetFloat("VAL");
            if (HIT_DIST_65_val == 0f)
            {
                goto SHOOT3;
            }
            var HIT_66 = _world.GetSynonymObject("HIT");
            _world.SetSynonymObject("MY_TARGET", HIT_66);
            var MY_TARGET_70 = _world.GetSynonymObject("MY_TARGET");
            MY_TARGET_70.SetFloat("SKILL3", 1f);
            var HIT_73 = _world.GetSynonymObject("HIT");
            var temp_74 = HIT_73.GetFloat("FRAGILE");
            if (temp_74 == 1f)
            {
                goto CONTHIT;
            }
            SHOOT3:
            var DSHOOTXMINUS_75 = _world.GetObject(ObjectType.Skill, "DSHOOTXMINUS");
            var DSHOOTXMINUS_75_val = DSHOOTXMINUS_75.GetFloat("VAL");
            var SHOOT_X_76 = _world.GetObject(ObjectType.Skill, "SHOOT_X");
            SHOOT_X_76.SetFloat("VAL", DSHOOTXMINUS_75_val);
            _world.Shoot();
            var HIT_DIST_78 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_78_val = HIT_DIST_78.GetFloat("VAL");
            if (HIT_DIST_78_val == 0f)
            {
                goto SHOOT4;
            }
            var HIT_81 = _world.GetSynonymObject("HIT");
            var temp_82 = HIT_81.GetFloat("FRAGILE");
            if (temp_82 == 1f)
            {
                goto CONTHIT;
            }
            SHOOT4:
            var SHOOT_X_84 = _world.GetObject(ObjectType.Skill, "SHOOT_X");
            SHOOT_X_84.SetFloat("VAL", 0f);
            var DSHOOTYPLUS_85 = _world.GetObject(ObjectType.Skill, "DSHOOTYPLUS");
            var DSHOOTYPLUS_85_val = DSHOOTYPLUS_85.GetFloat("VAL");
            var SHOOT_Y_86 = _world.GetObject(ObjectType.Skill, "SHOOT_Y");
            SHOOT_Y_86.SetFloat("VAL", DSHOOTYPLUS_85_val);
            _world.Shoot();
            var HIT_DIST_88 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_88_val = HIT_DIST_88.GetFloat("VAL");
            if (HIT_DIST_88_val == 0f)
            {
                goto SHOOT5;
            }
            var HIT_91 = _world.GetSynonymObject("HIT");
            var temp_92 = HIT_91.GetFloat("FRAGILE");
            if (temp_92 == 1f)
            {
                goto CONTHIT;
            }
            SHOOT5:
            var DSHOOTYMINUS_93 = _world.GetObject(ObjectType.Skill, "DSHOOTYMINUS");
            var DSHOOTYMINUS_93_val = DSHOOTYMINUS_93.GetFloat("VAL");
            var SHOOT_Y_94 = _world.GetObject(ObjectType.Skill, "SHOOT_Y");
            SHOOT_Y_94.SetFloat("VAL", DSHOOTYMINUS_93_val);
            _world.Shoot();
            var HIT_DIST_96 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_96_val = HIT_DIST_96.GetFloat("VAL");
            if (HIT_DIST_96_val == 0f)
            {
                goto NOHIT;
            }
            var HIT_99 = _world.GetSynonymObject("HIT");
            var temp_100 = HIT_99.GetFloat("FRAGILE");
            if (temp_100 != 1f)
            {
                goto NOHIT;
            }
            CONTHIT:
            {
                var enumerator = CASTBLOOD();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_TARGET_103 = _world.GetSynonymObject("MY_TARGET");
            MY_TARGET_103.SetFloat("SKILL3", 1f);
            NOHIT:
            yield return new WaitForCycles(1f);
            _world.AcknexObject.SetAcknexObject("LAYERS.12", null);
            var PLAYER_LIGHT_109 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            var PLAYER_LIGHT_109_val = PLAYER_LIGHT_109.GetFloat("VAL");
            var PLAYER_LIGHT_110 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            PLAYER_LIGHT_110.SetFloat("VAL", PLAYER_LIGHT_109_val + -0.5f);
            yield return new WaitForCycles(2f);
            var WEAPONSEL_113 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_113_val = WEAPONSEL_113.GetFloat("VAL");
            if (WEAPONSEL_113_val != 2f)
            {
                goto FINISH;
            }
            var MOUSE_LEFT_115 = _world.GetObject(ObjectType.Skill, "MOUSE_LEFT");
            var MOUSE_LEFT_115_val = MOUSE_LEFT_115.GetFloat("VAL");
            if (MOUSE_LEFT_115_val == 1f)
            {
                goto FIRE;
            }
            var KEY_CTRL_117 = _world.GetObject(ObjectType.Skill, "KEY_CTRL");
            var KEY_CTRL_117_val = KEY_CTRL_117.GetFloat("VAL");
            if (KEY_CTRL_117_val == 1f)
            {
                goto FIRE;
            }
            var MP5_02OVL_118 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"MP5_02OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_02OVL_118);
            yield return new WaitForCycles(1f);
            var MP5_01OVL_122 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"MP5_01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_01OVL_122);
            goto CONT;
            NOAMMO:
            var WRN02STR_125 = _world.AcknexObject.GetAcknexObject("WRN02STR");
            var PANELTEXT_127 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            PANELTEXT_127.SetAcknexObject("STRING", WRN02STR_125);
            var PANELTEXT_128 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", PANELTEXT_128);
            var MSGSECCOUNT_132 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_132.SetFloat("VAL", 0f);
            _world.PlaySound("MP_504SND", 1f);
            var GUN_ON_135 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_135.SetFloat("VAL", 0f);
            yield return new WaitForCycles(2f);
            var MP5_01OVL_137 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"MP5_01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_01OVL_137);
            CONT:
            var FIRE_140 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"FIRE");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", FIRE_140);
            var FIRE_142 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"FIRE");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", FIRE_142);
            FINISH:
            var GUNFIRING_145 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            GUNFIRING_145.SetFloat("VAL", 0f);
            yield break;
        }
        public IEnumerator FLASHIN()
        {
            var REDVALUE_1 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_1_val = REDVALUE_1.GetFloat("VAL");
            var REDVALUE_2 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            REDVALUE_2.SetFloat("VAL", REDVALUE_1_val + -0.1f);
            //Unknown keyword: FADE_PAL
            var REDVALUE_4 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_4_val = REDVALUE_4.GetFloat("VAL");
            if (REDVALUE_4_val < 0f)
            {
                var REDVALUE_6 = _world.GetObject(ObjectType.Skill, "REDVALUE");
                REDVALUE_6.SetFloat("VAL", 0f);
            }
            var REDVALUE_8 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_8_val = REDVALUE_8.GetFloat("VAL");
            if (REDVALUE_8_val > 0f)
            {
                yield break;
            }
            var UNDERWATER_10 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            var UNDERWATER_10_val = UNDERWATER_10.GetFloat("VAL");
            if (UNDERWATER_10_val != 0f)
            {
                {
                    var enumerator = SET_BLUE();
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
            var PLAYER_HIT_15 = _world.GetObject(ObjectType.Skill, "PLAYER_HIT");
            PLAYER_HIT_15.SetFloat("VAL", 0f);
            yield break;
        }
        public IEnumerator FLASHOUT()
        {
            var REDVALUE_1 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_1_val = REDVALUE_1.GetFloat("VAL");
            var REDVALUE_2 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            REDVALUE_2.SetFloat("VAL", REDVALUE_1_val + 0.1f);
            //Unknown keyword: FADE_PAL
            var HITVALUE_3 = _world.GetObject(ObjectType.Skill, "HITVALUE");
            var HITVALUE_3_val = HITVALUE_3.GetFloat("VAL");
            var REDVALUE_4 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_4_val = REDVALUE_4.GetFloat("VAL");
            if (REDVALUE_4_val < HITVALUE_3_val)
            {
                yield break;
            }
            var PLAYER_HEALTH_6 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            var PLAYER_HEALTH_6_val = PLAYER_HEALTH_6.GetFloat("VAL");
            if (PLAYER_HEALTH_6_val < 1f)
            {
                goto KILL;
            }
            var FLASHIN_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"FLASHIN");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.8", FLASHIN_7);
            yield break;
            KILL:
            var KILLPLAYER_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"KILLPLAYER");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.8", KILLPLAYER_10);
            yield break;
        }
        public IEnumerator FLASHPLAYER()
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
                _world.PlaySound("HIT01SND", 0.5f);
            }
            var FLASHOUT_52 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"FLASHOUT");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.8", FLASHOUT_52);
            yield break;
        }
        public IEnumerator FLASHREGION()
        {
            var LUP_1 = _world.GetObject(ObjectType.Skill, "LUP");
            var LUP_1_val = LUP_1.GetFloat("VAL");
            if (LUP_1_val != 0f)
            {
                goto IMPL1;
            }
            var MY_3 = _world.GetSynonymObject("MY");
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
            var MY_20 = _world.GetSynonymObject("MY");
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
            var MY_37 = _world.GetSynonymObject("MY");
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
            var MY_54 = _world.GetSynonymObject("MY");
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
            var MY_71 = _world.GetSynonymObject("MY");
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
                var IMPLODELIGHT_89 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"IMPLODELIGHT");
                _world.AcknexObject.SetAcknexObject("EACH_TICK.9", IMPLODELIGHT_89);
            }
            yield break;
        }
        public IEnumerator FOLLOWANGLE()
        {
            var DISTZ_0 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_1 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_1_val = DISTZ_1.GetFloat("VAL");
            var PLAYER_X_3 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_3_val = PLAYER_X_3.GetFloat("VAL");
            var MY_6 = _world.GetSynonymObject("MY");
            var temp_7 = MY_6.GetFloat("X");
            DISTZ_0.SetFloat("VAL", (PLAYER_X_3_val - temp_7));
            var DISTY_9 = _world.GetObject(ObjectType.Skill, "DISTY");
            var DISTY_10 = _world.GetObject(ObjectType.Skill, "DISTY");
            var DISTY_10_val = DISTY_10.GetFloat("VAL");
            var PLAYER_Y_12 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_12_val = PLAYER_Y_12.GetFloat("VAL");
            var MY_15 = _world.GetSynonymObject("MY");
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
            DISTX_32.SetFloat("VAL", Mathf.Sqrt(DISTX_31_val));
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
            var MY_42 = _world.GetSynonymObject("MY");
            MY_42.SetFloat("ANGLE", Mathf.Asin(DISTY_40_val));
            var DISTZ_44 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_44_val = DISTZ_44.GetFloat("VAL");
            if (DISTZ_44_val > 0f)
            {
                yield break;
            }
            var MY_46 = _world.GetSynonymObject("MY");
            var MY_48 = _world.GetSynonymObject("MY");
            var temp_49 = MY_48.GetFloat("ANGLE");
            var PI_50 = _world.GetObject(ObjectType.Skill, "PI");
            var PI_50_val = PI_50.GetFloat("VAL");
            var MY_53 = _world.GetSynonymObject("MY");
            var temp_54 = MY_53.GetFloat("ANGLE");
            MY_46.SetFloat("ANGLE", PI_50_val - temp_54);
            yield break;
        }
        public IEnumerator FREEFALL()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("SKILL2");
            if (temp_3 < -15f)
            {
                goto BOUNCED;
            }
            var MY_5 = _world.GetSynonymObject("MY");
            var MY_7 = _world.GetSynonymObject("MY");
            var temp_8 = MY_7.GetFloat("SKILL2");
            var MY_10 = _world.GetSynonymObject("MY");
            var temp_11 = MY_10.GetFloat("SKILL2");
            var TWO_PI_13 = _world.GetObject(ObjectType.Skill, "TWO_PI");
            var TWO_PI_13_val = TWO_PI_13.GetFloat("VAL");
            MY_5.SetFloat("SKILL2", temp_11 - TWO_PI_13_val);
            BOUNCED:
            var MY_16 = _world.GetSynonymObject("MY");
            var temp_17 = MY_16.GetFloat("GROUND");
            if (temp_17 == 0f)
            {
                goto COAST;
            }
            var MY_20 = _world.GetSynonymObject("MY");
            var temp_21 = MY_20.GetFloat("VSPEED");
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetFloat("VSPEED", temp_21 + (-0.15f * TimeUtils.TicksToTime(1)));
            var MY_25 = _world.GetSynonymObject("MY");
            var temp_26 = MY_25.GetFloat("FLOOR_HGT");
            var MY_28 = _world.GetSynonymObject("MY");
            var temp_29 = MY_28.GetFloat("HEIGHT");
            if (temp_29 > temp_26)
            {
                yield break;
            }
            var MY_31 = _world.GetSynonymObject("MY");
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
            var MY_42 = _world.GetSynonymObject("MY");
            MY_42.SetAcknexObject("REGION", temp_40);
            yield break;
            CONT:
            var MY_45 = _world.GetSynonymObject("MY");
            var temp_46 = MY_45.GetFloat("VSPEED");
            if (temp_46 > -0.5f)
            {
                goto STOP;
            }
            _world.PlaySound("GRAN02SND", 0.7f, "MY");
            var MY_49 = _world.GetSynonymObject("MY");
            var MY_51 = _world.GetSynonymObject("MY");
            var temp_52 = MY_51.GetFloat("VSPEED");
            var MY_54 = _world.GetSynonymObject("MY");
            var temp_55 = MY_54.GetFloat("VSPEED");
            MY_49.SetFloat("VSPEED", temp_55 * -0.2f);
            yield break;
            STOP:
            var MY_61 = _world.GetSynonymObject("MY");
            MY_61.SetFloat("GROUND", 0f);
            var MY_64 = _world.GetSynonymObject("MY");
            MY_64.SetFloat("HEIGHT", -0.05f);
            var MY_67 = _world.GetSynonymObject("MY");
            MY_67.SetFloat("VSPEED", 0f);
            COAST:
            var MY_69 = _world.GetSynonymObject("MY");
            var MY_71 = _world.GetSynonymObject("MY");
            var temp_72 = MY_71.GetFloat("SPEED");
            var MY_74 = _world.GetSynonymObject("MY");
            var temp_75 = MY_74.GetFloat("SPEED");
            MY_69.SetFloat("SPEED", temp_75 * 0.7f);
            var MY_80 = _world.GetSynonymObject("MY");
            var temp_81 = MY_80.GetFloat("SPEED");
            if (temp_81 < 0.1f)
            {
                goto FULLSTOP;
            }
            yield break;
            FULLSTOP:
            var GRAN0TEX_82 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"GRAN0TEX");
            var MY_84 = _world.GetSynonymObject("MY");
            MY_84.SetAcknexObject("TEXTURE", GRAN0TEX_82);
            var MY_87 = _world.GetSynonymObject("MY");
            MY_87.SetFloat("SPEED", 0f);
            var MY_90 = _world.GetSynonymObject("MY");
            MY_90.SetAcknexObject("IF_HIT", null);
            var MY_93 = _world.GetSynonymObject("MY");
            MY_93.SetFloat("SKILL5", 32f);
            var EXPLOSIONTIMER_94 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXPLOSIONTIMER");
            var MY_96 = _world.GetSynonymObject("MY");
            MY_96.SetAcknexObject("EACH_TICK", EXPLOSIONTIMER_94);
            yield break;
        }
        public IEnumerator HIDEMENU()
        {
            _world.AcknexObject.SetAcknexObject("PANELS.16", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", null);
            var SHOWMAINMENU_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SHOWMAINMENU");
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
                var enumerator = SET_BLUE();
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
            //Unknown keyword: FADE_PAL
            CONT:
            {
                var enumerator = SHOWWEAPON();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MOVE_MODE_19 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_19.SetFloat("VAL", 1f);
            yield break;
        }
        public IEnumerator HIDEWEAPON()
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
            yield break;
        }
        public IEnumerator HITPLAYER()
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
            _world.PlaySound("HIT03SND", 0.7f);
            goto CONT2;
            HIT01:
            _world.PlaySound("HIT01SND", 0.5f);
            goto CONT2;
            HIT02:
            _world.PlaySound("HIT02SND", 0.3f);
            goto CONT2;
            BLUB:
            _world.PlaySound("HIT04SND", 0.8f);
            CONT2:
            var KILLPLAYER_83 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"KILLPLAYER");
            var temp_86 = _world.AcknexObject?.GetAcknexObject("EACH_TICK.8");
            if (temp_86 != KILLPLAYER_83)
            {
                var REDOUT_87 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REDOUT");
                _world.AcknexObject.SetAcknexObject("EACH_TICK.8", REDOUT_87);
            }
            yield break;
        }
        public IEnumerator HITPLAYERDELAY()
        {
            yield return new WaitForTicks(8f);
            {
                var enumerator = HITPLAYER();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator HUMMERHIT()
        {
            var SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat("VAL");
            if (SHOOT_FAC_1_val == 0f)
            {
                yield break;
            }
            var MY_2 = _world.GetSynonymObject("MY");
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
            var MY_10 = _world.GetSynonymObject("MY");
            var temp_11 = MY_10.GetFloat("X");
            var EXPLOSION_CENTER_14 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_15 = EXPLOSION_CENTER_14.GetFloat("X");
            var MY_20 = _world.GetSynonymObject("MY");
            var temp_21 = MY_20.GetFloat("X");
            var EXPLOSION_CENTER_24 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_25 = EXPLOSION_CENTER_24.GetFloat("X");
            var MY_30 = _world.GetSynonymObject("MY");
            var temp_31 = MY_30.GetFloat("Y");
            var EXPLOSION_CENTER_34 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_35 = EXPLOSION_CENTER_34.GetFloat("Y");
            var MY_40 = _world.GetSynonymObject("MY");
            var temp_41 = MY_40.GetFloat("Y");
            var EXPLOSION_CENTER_44 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_45 = EXPLOSION_CENTER_44.GetFloat("Y");
            DISTX_6.SetFloat("VAL", (temp_11 - temp_15) * (temp_21 - temp_25) + (temp_31 - temp_35) * (temp_41 - temp_45));
            var DISTX_47 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_47_val = DISTX_47.GetFloat("VAL");
            var DISTX_48 = _world.GetObject(ObjectType.Skill, "DISTX");
            DISTX_48.SetFloat("VAL", Mathf.Sqrt(DISTX_47_val));
            var DISTX_50 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_50_val = DISTX_50.GetFloat("VAL");
            if (DISTX_50_val > 25f)
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
            var MY_55 = _world.GetSynonymObject("MY");
            MY_55.SetAcknexObject("IF_ARRIVED", null);
            var MOVE_56 = _world.AcknexObject.GetAcknexObject("MOVE");
            var MY_58 = _world.GetSynonymObject("MY");
            MY_58.SetAcknexObject("TARGET", MOVE_56);
            var MY_61 = _world.GetSynonymObject("MY");
            MY_61.SetFloat("VSPEED", 0.5f);
            var MY_64 = _world.GetSynonymObject("MY");
            MY_64.SetAcknexObject("IF_HIT", null);
            _world.PlaySound("HUMM04SND", 0.5f, "MY");
            var MY_68 = _world.GetSynonymObject("MY");
            MY_68.SetFloat("GROUND", 1f);
            var ACTORJUMPSTOP_69 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"ACTORJUMPSTOP");
            var MY_71 = _world.GetSynonymObject("MY");
            MY_71.SetAcknexObject("EACH_TICK", ACTORJUMPSTOP_69);
            yield break;
        }
        public IEnumerator IMPLODELIGHT()
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
            yield break;
        }
        public IEnumerator IMPLODEPARTICLE()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("IF_ARRIVED", null);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_HIT", null);
            var MY_6 = _world.GetSynonymObject("MY");
            _world.SetSynonymObject("EXPLOSION_CENTER", MY_6);
            var FOLLOW_8 = _world.AcknexObject.GetAcknexObject("FOLLOW");
            var MY_10 = _world.GetSynonymObject("MY");
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
            //Unknown keyword: EXPLODE
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetFloat("CAREFULLY", 0f);
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetFloat("PASSABLE", 1f);
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetFloat("SPEED", 0f);
            var MY_29 = _world.GetSynonymObject("MY");
            var temp_30 = MY_29.GetFloat("HEIGHT");
            var MY_32 = _world.GetSynonymObject("MY");
            MY_32.SetFloat("HEIGHT", temp_30 + -2.5f);
            var IMPL01TEX_33 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"IMPL01TEX");
            var MY_35 = _world.GetSynonymObject("MY");
            MY_35.SetAcknexObject("TEXTURE", IMPL01TEX_33);
            var IMPLOSIONSTART_36 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"IMPLOSIONSTART");
            var MY_38 = _world.GetSynonymObject("MY");
            MY_38.SetAcknexObject("EACH_TICK", IMPLOSIONSTART_36);
            var MY_41 = _world.GetSynonymObject("MY");
            //Unknown Property Type: Thing.PLAY
            yield return new WaitForTicks(4f);
            var EXPLOSION_ON_44 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            EXPLOSION_ON_44.SetFloat("VAL", 0f);
            yield break;
        }
        public IEnumerator IMPLOSIONCRUSH()
        {
            var IMPL01ATEX_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"IMPL01ATEX");
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("TEXTURE", IMPL01ATEX_0);
            var IMPLODELIGHT_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"IMPLODELIGHT");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.9", IMPLODELIGHT_3);
            var IMPLOSIONFLARE_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"IMPLOSIONFLARE");
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("EACH_CYCLE", IMPLOSIONFLARE_6);
            var MY_11 = _world.GetSynonymObject("MY");
            //Unknown Property Type: Thing.PLAY
            yield break;
        }
        public IEnumerator IMPLOSIONEND()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("EACH_CYCLE", null);
            var MY_3 = _world.GetSynonymObject("MY");
            _world.SetSynonymObject("EXPLOSION_CENTER", MY_3);
            var FOLLOW_5 = _world.AcknexObject.GetAcknexObject("FOLLOW");
            var MY_7 = _world.GetSynonymObject("MY");
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
            //Unknown keyword: EXPLODE
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("INVISIBLE", 1f);
            var MY_20 = _world.GetSynonymObject("MY");
            var temp_21 = MY_20.GetFloat("VISIBLE");
            if (temp_21 == 1f)
            {
                var RENDER_MODE_23 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
                RENDER_MODE_23.SetFloat("VAL", 1f);
            }
            yield return new WaitForTicks(4f);
            var EXPLOSION_ON_26 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            EXPLOSION_ON_26.SetFloat("VAL", 0f);
            yield break;
        }
        public IEnumerator IMPLOSIONFLARE()
        {
            var IMPL01BTEX_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"IMPL01BTEX");
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("TEXTURE", IMPL01BTEX_0);
            var IMPLOSIONEND_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"IMPLOSIONEND");
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("EACH_CYCLE", IMPLOSIONEND_3);
            var MY_8 = _world.GetSynonymObject("MY");
            //Unknown Property Type: Thing.PLAY
            yield break;
        }
        public IEnumerator IMPLOSIONSTART()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("EACH_TICK", null);
            var IMPLOSIONCRUSH_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"IMPLOSIONCRUSH");
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("EACH_CYCLE", IMPLOSIONCRUSH_3);
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetFloat("INVISIBLE", 0f);
            var MY_11 = _world.GetSynonymObject("MY");
            //Unknown Property Type: Thing.PLAY
            //Unknown keyword: LOCATE
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetFloat("GROUND", 0f);
            {
                var enumerator = FLASHREGION();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator INIT_MOVE()
        {
            var MODE_GEHEN_0 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var MODE_GEHEN_0_val = MODE_GEHEN_0.GetFloat("VAL");
            var MOVING_1 = _world.GetObject(ObjectType.Skill, "MOVING");
            MOVING_1.SetFloat("VAL", MODE_GEHEN_0_val);
            {
                var enumerator = SET_MOVING();
                while (enumerator.MoveNext())
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
        public IEnumerator INNOCENTKILLED()
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
            yield return new WaitForTicks(320f);
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
                var enumerator = SHOWPDAGAMEOVER();
                while (enumerator.MoveNext())
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
        public IEnumerator KILLPLAYER()
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
            var SELECTNONE_4 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTNONE");
            _world.AcknexObject.SetAcknexObject("EACH_SEC.1", SELECTNONE_4);
            //Unknown keyword: FADE_PAL
            _world.PlaySound("DEATH00SND", 1f);
            {
                var enumerator = SET_DEATH();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var DEATHCOUNTER_9 = _world.GetObject(ObjectType.Skill, "DEATHCOUNTER");
            DEATHCOUNTER_9.SetFloat("VAL", 0f);
            yield break;
            DEATH:
            var DEATHCOUNTER_11 = _world.GetObject(ObjectType.Skill, "DEATHCOUNTER");
            var DEATHCOUNTER_11_val = DEATHCOUNTER_11.GetFloat("VAL");
            var DEATHCOUNTER_12 = _world.GetObject(ObjectType.Skill, "DEATHCOUNTER");
            DEATHCOUNTER_12.SetFloat("VAL", DEATHCOUNTER_11_val + 1f);
            var PLAYER_VX_13 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_14 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_14_val = PLAYER_VX_14.GetFloat("VAL");
            var PLAYER_VX_15 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_15_val = PLAYER_VX_15.GetFloat("VAL");
            PLAYER_VX_13.SetFloat("VAL", PLAYER_VX_15_val * 0.5f);
            var PLAYER_VY_18 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_19 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_19_val = PLAYER_VY_19.GetFloat("VAL");
            var PLAYER_VY_20 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_20_val = PLAYER_VY_20.GetFloat("VAL");
            PLAYER_VY_18.SetFloat("VAL", PLAYER_VY_20_val * 0.5f);
            var DEATHCOUNTER_24 = _world.GetObject(ObjectType.Skill, "DEATHCOUNTER");
            var DEATHCOUNTER_24_val = DEATHCOUNTER_24.GetFloat("VAL");
            if (DEATHCOUNTER_24_val < 48f)
            {
                yield break;
            }
            var DEATHCOUNTER_26 = _world.GetObject(ObjectType.Skill, "DEATHCOUNTER");
            DEATHCOUNTER_26.SetFloat("VAL", 0f);
            _world.SetSynonymObject("LEVEL_STRING", null);
            var ENDOFLEVEL_29 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"ENDOFLEVEL");
            _world.AcknexObject.SetAcknexObject("EACH_SEC.1", ENDOFLEVEL_29);
            _world.AcknexObject.SetAcknexObject("EACH_TICK.8", null);
            yield break;
        }
        public IEnumerator LAUNCH()
        {
            {
                var enumerator = CHOOSEMISSILE();
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
            yield return new WaitForCycles(1f);
            FIRE:
            var STNG01OVL_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"STNG01OVL");
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
                var enumerator = DECAMMO();
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
            var PANELTEXT_21 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            PANELTEXT_21.SetAcknexObject("STRING", WRN01STR_19);
            var PANELTEXT_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", PANELTEXT_22);
            var MSGSECCOUNT_26 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_26.SetFloat("VAL", 0f);
            PLENTY:
            var PLAYER_LIGHT_28 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            var PLAYER_LIGHT_28_val = PLAYER_LIGHT_28.GetFloat("VAL");
            var PLAYER_LIGHT_29 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            PLAYER_LIGHT_29.SetFloat("VAL", PLAYER_LIGHT_28_val + 0.7f);
            _world.PlaySound("STNG02SND", 0.8f);
            var SHOT_SOUND_ON_32 = _world.GetObject(ObjectType.Skill, "SHOT_SOUND_ON");
            SHOT_SOUND_ON_32.SetFloat("VAL", 1f);
            var SHOTSECCOUNT_34 = _world.GetObject(ObjectType.Skill, "SHOTSECCOUNT");
            SHOTSECCOUNT_34.SetFloat("VAL", 0f);
            yield return new WaitForCycles(3f);
            var STNG02OVL_36 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"STNG02OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", STNG02OVL_36);
            var MISSILE_41 = _world.GetSynonymObject("MISSILE");
            MISSILE_41.SetFloat("GROUND", 1f);
            var MISSILE_44 = _world.GetSynonymObject("MISSILE");
            MISSILE_44.SetFloat("SPEED", 3f);
            var MISSILE_46 = _world.GetSynonymObject("MISSILE");
            var MISSILE_48 = _world.GetSynonymObject("MISSILE");
            var temp_49 = MISSILE_48.GetFloat("X");
            var PLAYER_X_50 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_50_val = PLAYER_X_50.GetFloat("VAL");
            var PLAYER_COS_52 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var PLAYER_COS_52_val = PLAYER_COS_52.GetFloat("VAL");
            var PLAYER_VX_56 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_56_val = PLAYER_VX_56.GetFloat("VAL");
            var TIME_CORR_58 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_58_val = TIME_CORR_58.GetFloat("VAL");
            MISSILE_46.SetFloat("X", PLAYER_X_50_val + PLAYER_COS_52_val * 1.2f + PLAYER_VX_56_val * TIME_CORR_58_val);
            var MISSILE_60 = _world.GetSynonymObject("MISSILE");
            var MISSILE_62 = _world.GetSynonymObject("MISSILE");
            var temp_63 = MISSILE_62.GetFloat("Y");
            var PLAYER_Y_64 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_64_val = PLAYER_Y_64.GetFloat("VAL");
            var PLAYER_SIN_66 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var PLAYER_SIN_66_val = PLAYER_SIN_66.GetFloat("VAL");
            var PLAYER_VY_70 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_70_val = PLAYER_VY_70.GetFloat("VAL");
            var TIME_CORR_72 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_72_val = TIME_CORR_72.GetFloat("VAL");
            MISSILE_60.SetFloat("Y", PLAYER_Y_64_val + PLAYER_SIN_66_val * 1.2f + PLAYER_VY_70_val * TIME_CORR_72_val);
            var MISSILE_74 = _world.GetSynonymObject("MISSILE");
            var MISSILE_76 = _world.GetSynonymObject("MISSILE");
            var temp_77 = MISSILE_76.GetFloat("HEIGHT");
            var PLAYER_SIZE_78 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_78_val = PLAYER_SIZE_78.GetFloat("VAL");
            var PLAYER_TILT_81 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_81_val = PLAYER_TILT_81.GetFloat("VAL");
            var PLAYER_HGT_88 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_88_val = PLAYER_HGT_88.GetFloat("VAL");
            var FLOOR_HGT_90 = _world.GetObject(ObjectType.Skill, "FLOOR_HGT");
            var FLOOR_HGT_90_val = FLOOR_HGT_90.GetFloat("VAL");
            MISSILE_74.SetFloat("HEIGHT", PLAYER_SIZE_78_val - (PLAYER_TILT_81_val * 0.65f) - 0.05f + PLAYER_HGT_88_val + FLOOR_HGT_90_val);
            var EXPLODEMISSILE_91 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXPLODEMISSILE");
            var MISSILE_93 = _world.GetSynonymObject("MISSILE");
            MISSILE_93.SetAcknexObject("IF_HIT", EXPLODEMISSILE_91);
            var EXPLODETARGET_94 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXPLODETARGET");
            var MISSILE_96 = _world.GetSynonymObject("MISSILE");
            MISSILE_96.SetAcknexObject("IF_ARRIVED", EXPLODETARGET_94);
            //Unknown keyword: LOCATE
            var MISS2TEX_97 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"MISS2TEX");
            var MISSILE_99 = _world.GetSynonymObject("MISSILE");
            MISSILE_99.SetAcknexObject("TEXTURE", MISS2TEX_97);
            var PLAYER_ANGLE_100 = _world.GetObject(ObjectType.Skill, "PLAYER_ANGLE");
            var PLAYER_ANGLE_100_val = PLAYER_ANGLE_100.GetFloat("VAL");
            var MISSILE_102 = _world.GetSynonymObject("MISSILE");
            MISSILE_102.SetFloat("ANGLE", PLAYER_ANGLE_100_val);
            var MISSILE_104 = _world.GetSynonymObject("MISSILE");
            var MISSILE_106 = _world.GetSynonymObject("MISSILE");
            var temp_107 = MISSILE_106.GetFloat("VSPEED");
            var PLAYER_TILT_109 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_109_val = PLAYER_TILT_109.GetFloat("VAL");
            MISSILE_104.SetFloat("VSPEED", -PLAYER_TILT_109_val);
            var BULLET_110 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MISSILE_112 = _world.GetSynonymObject("MISSILE");
            MISSILE_112.SetAcknexObject("TARGET", BULLET_110);
            var MISSILE_115 = _world.GetSynonymObject("MISSILE");
            MISSILE_115.SetFloat("CAREFULLY", 1f);
            var MISSILE_118 = _world.GetSynonymObject("MISSILE");
            MISSILE_118.SetFloat("SENSITIVE", 1f);
            var MISSILE_121 = _world.GetSynonymObject("MISSILE");
            MISSILE_121.SetFloat("INVISIBLE", 0f);
            var SHOOT_SECTOR_123 = _world.GetObject(ObjectType.Skill, "SHOOT_SECTOR");
            SHOOT_SECTOR_123.SetFloat("VAL", 6.283f);
            var SHOOT_RANGE_125 = _world.GetObject(ObjectType.Skill, "SHOOT_RANGE");
            SHOOT_RANGE_125.SetFloat("VAL", 200f);
            var SHOOT_FAC_127 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            SHOOT_FAC_127.SetFloat("VAL", 0f);
            var SHOOT_X_129 = _world.GetObject(ObjectType.Skill, "SHOOT_X");
            SHOOT_X_129.SetFloat("VAL", 0f);
            var SVANGLE_130 = _world.GetObject(ObjectType.Skill, "SVANGLE");
            var SVANGLE_130_val = SVANGLE_130.GetFloat("VAL");
            var SHOOT_Y_131 = _world.GetObject(ObjectType.Skill, "SHOOT_Y");
            SHOOT_Y_131.SetFloat("VAL", SVANGLE_130_val);
            _world.Shoot();
            var HIT_DIST_133 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_133_val = HIT_DIST_133.GetFloat("VAL");
            if (HIT_DIST_133_val == 0f)
            {
                goto HITWALL;
            }
            var HIT_134 = _world.GetSynonymObject("HIT");
            _world.SetSynonymObject("MY_TARGET", HIT_134);
            var HIT_138 = _world.GetSynonymObject("HIT");
            var temp_139 = HIT_138.GetFloat("FRAGILE");
            if (temp_139 != 1f)
            {
                goto HITWALL;
            }
            var HIT_142 = _world.GetSynonymObject("HIT");
            var temp_143 = HIT_142.GetFloat("DISTANCE");
            if (temp_143 != 0f)
            {
                var MISSILE_145 = _world.GetSynonymObject("MISSILE");
                var MISSILE_147 = _world.GetSynonymObject("MISSILE");
                var temp_148 = MISSILE_147.GetFloat("VSPEED");
                var HIT_151 = _world.GetSynonymObject("HIT");
                var temp_152 = HIT_151.GetFloat("FLOOR_HGT");
                var FLOOR_HGT_154 = _world.GetObject(ObjectType.Skill, "FLOOR_HGT");
                var FLOOR_HGT_154_val = FLOOR_HGT_154.GetFloat("VAL");
                var HIT_158 = _world.GetSynonymObject("HIT");
                var temp_159 = HIT_158.GetFloat("DISTANCE");
                MISSILE_145.SetFloat("VSPEED", (temp_152 - FLOOR_HGT_154_val) / temp_159);
            }
            var MISSILE_162 = _world.GetSynonymObject("MISSILE");
            var temp_163 = MISSILE_162.GetFloat("VSPEED");
            if (temp_163 < 0f)
            {
                var MISSILE_165 = _world.GetSynonymObject("MISSILE");
                var MISSILE_167 = _world.GetSynonymObject("MISSILE");
                var temp_168 = MISSILE_167.GetFloat("VSPEED");
                var MISSILE_171 = _world.GetSynonymObject("MISSILE");
                var temp_172 = MISSILE_171.GetFloat("VSPEED");
                MISSILE_165.SetFloat("VSPEED", -temp_172);
            }
            goto CONTHIT;
            HITWALL:
            var MISSILE_174 = _world.GetSynonymObject("MISSILE");
            var MISSILE_176 = _world.GetSynonymObject("MISSILE");
            var temp_177 = MISSILE_176.GetFloat("VSPEED");
            var PLAYER_TILT_179 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_179_val = PLAYER_TILT_179.GetFloat("VAL");
            MISSILE_174.SetFloat("VSPEED", -PLAYER_TILT_179_val / 1.4f);
            CONTHIT:
            var PLAYER_LIGHT_183 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            var PLAYER_LIGHT_183_val = PLAYER_LIGHT_183.GetFloat("VAL");
            var PLAYER_LIGHT_184 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            PLAYER_LIGHT_184.SetFloat("VAL", PLAYER_LIGHT_183_val + -0.7f);
            yield return new WaitForCycles(2f);
            var MISS2TEX_186 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"MISS2TEX");
            var MISSILE_188 = _world.GetSynonymObject("MISSILE");
            var temp_189 = MISSILE_188?.GetAcknexObject("TEXTURE");
            if (temp_189 == MISS2TEX_186)
            {
                var MISS1TEX_190 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"MISS1TEX");
                var MISSILE_192 = _world.GetSynonymObject("MISSILE");
                MISSILE_192.SetAcknexObject("TEXTURE", MISS1TEX_190);
            }
            yield return new WaitForCycles(2f);
            //Unknown keyword: LOCATE
            var STNG01OVL_194 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"STNG01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", STNG01OVL_194);
            yield return new WaitForCycles(2f);
            var STNG00OVL_198 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"STNG00OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", STNG00OVL_198);
            goto CONT;
            NOAMMO:
            var WRN02STR_201 = _world.AcknexObject.GetAcknexObject("WRN02STR");
            var PANELTEXT_203 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            PANELTEXT_203.SetAcknexObject("STRING", WRN02STR_201);
            var PANELTEXT_204 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PANELTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.14", PANELTEXT_204);
            var MSGSECCOUNT_208 = _world.GetObject(ObjectType.Skill, "MSGSECCOUNT");
            MSGSECCOUNT_208.SetFloat("VAL", 0f);
            _world.PlaySound("STNG03SND", 1f);
            var GUN_ON_211 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_211.SetFloat("VAL", 0f);
            yield return new WaitForCycles(2f);
            var STNG00OVL_213 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"STNG00OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", STNG00OVL_213);
            CONT:
            var WEAPONSEL_217 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_217_val = WEAPONSEL_217.GetFloat("VAL");
            if (WEAPONSEL_217_val != 4f)
            {
                goto FINISH;
            }
            var LAUNCH_218 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LAUNCH");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", LAUNCH_218);
            var LAUNCH_220 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LAUNCH");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", LAUNCH_220);
            FINISH:
            var GUNFIRING_223 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            GUNFIRING_223.SetFloat("VAL", 0f);
            yield break;
        }
        public IEnumerator LAUNCHMISSILES()
        {
            var MISSILE_2 = _world.GetSynonymObject("MISSILE");
            MISSILE_2.SetFloat("GROUND", 1f);
            var MISSILE_5 = _world.GetSynonymObject("MISSILE");
            MISSILE_5.SetFloat("SPEED", 4f);
            var MISSILE_7 = _world.GetSynonymObject("MISSILE");
            var MISSILE_9 = _world.GetSynonymObject("MISSILE");
            var temp_10 = MISSILE_9.GetFloat("X");
            MISSILE_7.SetFloat("X", -170f);
            var MISSILE_14 = _world.GetSynonymObject("MISSILE");
            var MISSILE_16 = _world.GetSynonymObject("MISSILE");
            var temp_17 = MISSILE_16.GetFloat("Y");
            MISSILE_14.SetFloat("Y", 180f);
            var MISSILE_20 = _world.GetSynonymObject("MISSILE");
            var MISSILE_22 = _world.GetSynonymObject("MISSILE");
            var temp_23 = MISSILE_22.GetFloat("HEIGHT");
            MISSILE_20.SetFloat("HEIGHT", 5f);
            var MISSILE_27 = _world.GetSynonymObject("MISSILE");
            MISSILE_27.SetFloat("TARGET_X", -30f);
            var MISSILE_30 = _world.GetSynonymObject("MISSILE");
            MISSILE_30.SetFloat("TARGET_Y", 57f);
            var MISS1TEX_31 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"MISS1TEX");
            var MISSILE_33 = _world.GetSynonymObject("MISSILE");
            MISSILE_33.SetAcknexObject("TEXTURE", MISS1TEX_31);
            var EXPLODEMISSILE_34 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXPLODEMISSILE");
            var MISSILE_36 = _world.GetSynonymObject("MISSILE");
            MISSILE_36.SetAcknexObject("IF_ARRIVED", EXPLODEMISSILE_34);
            var EXPLODEMISSILE_37 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXPLODEMISSILE");
            var MISSILE_39 = _world.GetSynonymObject("MISSILE");
            MISSILE_39.SetAcknexObject("IF_HIT", EXPLODEMISSILE_37);
            var PLAYER_ANGLE_40 = _world.GetObject(ObjectType.Skill, "PLAYER_ANGLE");
            var PLAYER_ANGLE_40_val = PLAYER_ANGLE_40.GetFloat("VAL");
            var MISSILE_42 = _world.GetSynonymObject("MISSILE");
            MISSILE_42.SetFloat("ANGLE", PLAYER_ANGLE_40_val);
            var VERTEX_43 = _world.AcknexObject.GetAcknexObject("VERTEX");
            var MISSILE_45 = _world.GetSynonymObject("MISSILE");
            MISSILE_45.SetAcknexObject("TARGET", VERTEX_43);
            var MISSILE_48 = _world.GetSynonymObject("MISSILE");
            MISSILE_48.SetFloat("INVISIBLE", 0f);
            WAITING:
            yield return new WaitForTicks(16f);
            var MISSILE_52 = _world.GetSynonymObject("MISSILE");
            var temp_53 = MISSILE_52.GetFloat("INVISIBLE");
            if (temp_53 < 1f)
            {
                goto WAITING;
            }
            var MISSILE_56 = _world.GetSynonymObject("MISSILE");
            MISSILE_56.SetFloat("GROUND", 1f);
            var MISSILE_59 = _world.GetSynonymObject("MISSILE");
            MISSILE_59.SetFloat("SPEED", 4f);
            var MISSILE_61 = _world.GetSynonymObject("MISSILE");
            var MISSILE_63 = _world.GetSynonymObject("MISSILE");
            var temp_64 = MISSILE_63.GetFloat("X");
            MISSILE_61.SetFloat("X", -150f);
            var MISSILE_68 = _world.GetSynonymObject("MISSILE");
            var MISSILE_70 = _world.GetSynonymObject("MISSILE");
            var temp_71 = MISSILE_70.GetFloat("Y");
            MISSILE_68.SetFloat("Y", 50f);
            var MISSILE_74 = _world.GetSynonymObject("MISSILE");
            var MISSILE_76 = _world.GetSynonymObject("MISSILE");
            var temp_77 = MISSILE_76.GetFloat("HEIGHT");
            MISSILE_74.SetFloat("HEIGHT", 5f);
            var MISSILE_81 = _world.GetSynonymObject("MISSILE");
            MISSILE_81.SetFloat("TARGET_X", -100f);
            var MISSILE_84 = _world.GetSynonymObject("MISSILE");
            MISSILE_84.SetFloat("TARGET_Y", 0f);
            var MISS1TEX_85 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"MISS1TEX");
            var MISSILE_87 = _world.GetSynonymObject("MISSILE");
            MISSILE_87.SetAcknexObject("TEXTURE", MISS1TEX_85);
            var EXPLODEMISSILE_88 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXPLODEMISSILE");
            var MISSILE_90 = _world.GetSynonymObject("MISSILE");
            MISSILE_90.SetAcknexObject("IF_ARRIVED", EXPLODEMISSILE_88);
            var EXPLODEMISSILE_91 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXPLODEMISSILE");
            var MISSILE_93 = _world.GetSynonymObject("MISSILE");
            MISSILE_93.SetAcknexObject("IF_HIT", EXPLODEMISSILE_91);
            var PLAYER_ANGLE_94 = _world.GetObject(ObjectType.Skill, "PLAYER_ANGLE");
            var PLAYER_ANGLE_94_val = PLAYER_ANGLE_94.GetFloat("VAL");
            var MISSILE_96 = _world.GetSynonymObject("MISSILE");
            MISSILE_96.SetFloat("ANGLE", PLAYER_ANGLE_94_val);
            var VERTEX_97 = _world.AcknexObject.GetAcknexObject("VERTEX");
            var MISSILE_99 = _world.GetSynonymObject("MISSILE");
            MISSILE_99.SetAcknexObject("TARGET", VERTEX_97);
            var MISSILE_102 = _world.GetSynonymObject("MISSILE");
            MISSILE_102.SetFloat("INVISIBLE", 0f);
            WAITING1:
            yield return new WaitForTicks(16f);
            var MISSILE_106 = _world.GetSynonymObject("MISSILE");
            var temp_107 = MISSILE_106.GetFloat("INVISIBLE");
            if (temp_107 < 1f)
            {
                goto WAITING1;
            }
            var MISSILE_110 = _world.GetSynonymObject("MISSILE");
            MISSILE_110.SetFloat("GROUND", 1f);
            var MISSILE_113 = _world.GetSynonymObject("MISSILE");
            MISSILE_113.SetFloat("SPEED", 4f);
            var MISSILE_115 = _world.GetSynonymObject("MISSILE");
            var MISSILE_117 = _world.GetSynonymObject("MISSILE");
            var temp_118 = MISSILE_117.GetFloat("X");
            MISSILE_115.SetFloat("X", -50f);
            var MISSILE_122 = _world.GetSynonymObject("MISSILE");
            var MISSILE_124 = _world.GetSynonymObject("MISSILE");
            var temp_125 = MISSILE_124.GetFloat("Y");
            MISSILE_122.SetFloat("Y", 0f);
            var MISSILE_128 = _world.GetSynonymObject("MISSILE");
            var MISSILE_130 = _world.GetSynonymObject("MISSILE");
            var temp_131 = MISSILE_130.GetFloat("HEIGHT");
            MISSILE_128.SetFloat("HEIGHT", 5f);
            var MISSILE_135 = _world.GetSynonymObject("MISSILE");
            MISSILE_135.SetFloat("TARGET_X", -10f);
            var MISSILE_138 = _world.GetSynonymObject("MISSILE");
            MISSILE_138.SetFloat("TARGET_Y", 0f);
            var MISS1TEX_139 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"MISS1TEX");
            var MISSILE_141 = _world.GetSynonymObject("MISSILE");
            MISSILE_141.SetAcknexObject("TEXTURE", MISS1TEX_139);
            var EXPLODEMISSILE_142 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXPLODEMISSILE");
            var MISSILE_144 = _world.GetSynonymObject("MISSILE");
            MISSILE_144.SetAcknexObject("IF_ARRIVED", EXPLODEMISSILE_142);
            var EXPLODEMISSILE_145 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXPLODEMISSILE");
            var MISSILE_147 = _world.GetSynonymObject("MISSILE");
            MISSILE_147.SetAcknexObject("IF_HIT", EXPLODEMISSILE_145);
            var PLAYER_ANGLE_148 = _world.GetObject(ObjectType.Skill, "PLAYER_ANGLE");
            var PLAYER_ANGLE_148_val = PLAYER_ANGLE_148.GetFloat("VAL");
            var MISSILE_150 = _world.GetSynonymObject("MISSILE");
            MISSILE_150.SetFloat("ANGLE", PLAYER_ANGLE_148_val);
            var VERTEX_151 = _world.AcknexObject.GetAcknexObject("VERTEX");
            var MISSILE_153 = _world.GetSynonymObject("MISSILE");
            MISSILE_153.SetAcknexObject("TARGET", VERTEX_151);
            var MISSILE_156 = _world.GetSynonymObject("MISSILE");
            MISSILE_156.SetFloat("INVISIBLE", 0f);
            var WRN17STR_157 = _world.AcknexObject.GetAcknexObject("WRN17STR");
            _world.SetSynonymObject("MESSAGE_TEXT", WRN17STR_157);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: SET_ALL
             //Unknown keyword: SET_ALL
            var SHOT_SOUND_ON_160 = _world.GetObject(ObjectType.Skill, "SHOT_SOUND_ON");
            SHOT_SOUND_ON_160.SetFloat("VAL", 1f);
            yield break;
        }
        public IEnumerator LEAVE_WATER()
        {
            {
                var enumerator = SET_WALKING();
                while (enumerator.MoveNext())
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
        public IEnumerator LOCATEACTOR()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("GROUND");
            if (temp_3 == 0f)
            {
                goto CONT;
            }
            //Unknown keyword: LOCATE
            yield break;
            CONT:
            var MY_6 = _world.GetSynonymObject("MY");
            MY_6.SetFloat("HEIGHT", 0f);
            var MY_9 = _world.GetSynonymObject("MY");
            MY_9.SetFloat("GROUND", 1f);
            //Unknown keyword: LOCATE
            var MY_12 = _world.GetSynonymObject("MY");
            MY_12.SetFloat("GROUND", 0f);
            var MY_15 = _world.GetSynonymObject("MY");
            MY_15.SetFloat("HEIGHT", -0.05f);
            WATER:
            var MY_17 = _world.GetSynonymObject("MY");
            var temp_18 = MY_17?.GetAcknexObject("REGION");
            _world.SetSynonymObject("WATER_REGION", temp_18);
            var WATER_REGION_22 = _world.GetSynonymObject("WATER_REGION");
            var temp_23 = WATER_REGION_22?.GetAcknexObject("IF_DIVE");
            if (temp_23 == null)
            {
                yield break;
            }
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetFloat("HEIGHT", -2.5f);
            yield break;
        }
        public IEnumerator LOCATEPARTICLE()
        {
            var SHOOT_RANGE_1 = _world.GetObject(ObjectType.Skill, "SHOOT_RANGE");
            SHOOT_RANGE_1.SetFloat("VAL", 100f);
            var SHOOT_FAC_3 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            SHOOT_FAC_3.SetFloat("VAL", 0f);
            //Unknown keyword: EXPLODE
            var HIT_MINDIST_5 = _world.GetObject(ObjectType.Skill, "HIT_MINDIST");
            var HIT_MINDIST_5_val = HIT_MINDIST_5.GetFloat("VAL");
            if (HIT_MINDIST_5_val == 0f)
            {
                goto VANISH;
            }
            var HIT_8 = _world.GetSynonymObject("HIT");
            var temp_9 = HIT_8.GetFloat("VISIBLE");
            if (temp_9 == 0f)
            {
                yield break;
            }
            var HIT_11 = _world.GetSynonymObject("HIT");
            if (HIT_11 == null)
            {
                yield break;
            }
            var HIT_12 = _world.GetSynonymObject("HIT");
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetAcknexObject("TARGET", HIT_12);
            var DISTX_15 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_16 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_16_val = DISTX_16.GetFloat("VAL");
            var HIT_19 = _world.GetSynonymObject("HIT");
            var temp_20 = HIT_19.GetFloat("X");
            var EXPLOSION_CENTER_23 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_24 = EXPLOSION_CENTER_23.GetFloat("X");
            var HIT_29 = _world.GetSynonymObject("HIT");
            var temp_30 = HIT_29.GetFloat("X");
            var EXPLOSION_CENTER_33 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_34 = EXPLOSION_CENTER_33.GetFloat("X");
            var HIT_39 = _world.GetSynonymObject("HIT");
            var temp_40 = HIT_39.GetFloat("Y");
            var EXPLOSION_CENTER_43 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_44 = EXPLOSION_CENTER_43.GetFloat("Y");
            var HIT_49 = _world.GetSynonymObject("HIT");
            var temp_50 = HIT_49.GetFloat("Y");
            var EXPLOSION_CENTER_53 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_54 = EXPLOSION_CENTER_53.GetFloat("Y");
            DISTX_15.SetFloat("VAL", (temp_20 - temp_24) * (temp_30 - temp_34) + (temp_40 - temp_44) * (temp_50 - temp_54));
            var DISTX_56 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_56_val = DISTX_56.GetFloat("VAL");
            var DISTX_57 = _world.GetObject(ObjectType.Skill, "DISTX");
            DISTX_57.SetFloat("VAL", Mathf.Sqrt(DISTX_56_val));
            var DISTZ_58 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_59 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_59_val = DISTZ_59.GetFloat("VAL");
            var HIT_61 = _world.GetSynonymObject("HIT");
            var temp_62 = HIT_61.GetFloat("FLOOR_HGT");
            var MY_65 = _world.GetSynonymObject("MY");
            var temp_66 = MY_65.GetFloat("FLOOR_HGT");
            DISTZ_58.SetFloat("VAL", temp_62 - temp_66);
            var DISTX_68 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_68_val = DISTX_68.GetFloat("VAL");
            if (DISTX_68_val != 0f)
            {
                var MY_70 = _world.GetSynonymObject("MY");
                var MY_72 = _world.GetSynonymObject("MY");
                var temp_73 = MY_72.GetFloat("VSPEED");
                var DISTZ_74 = _world.GetObject(ObjectType.Skill, "DISTZ");
                var DISTZ_74_val = DISTZ_74.GetFloat("VAL");
                var DISTX_76 = _world.GetObject(ObjectType.Skill, "DISTX");
                var DISTX_76_val = DISTX_76.GetFloat("VAL");
                MY_70.SetFloat("VSPEED", DISTZ_74_val / DISTX_76_val);
            }
            var MY_79 = _world.GetSynonymObject("MY");
            var temp_80 = MY_79.GetFloat("VSPEED");
            if (temp_80 < 0f)
            {
                var MY_82 = _world.GetSynonymObject("MY");
                var MY_84 = _world.GetSynonymObject("MY");
                var temp_85 = MY_84.GetFloat("VSPEED");
                var MY_88 = _world.GetSynonymObject("MY");
                var temp_89 = MY_88.GetFloat("VSPEED");
                MY_82.SetFloat("VSPEED", -temp_89);
            }
            yield break;
            VANISH:
            var MY_92 = _world.GetSynonymObject("MY");
            var temp_93 = MY_92.GetFloat("GROUND");
            if (temp_93 == 0f)
            {
                //Unknown keyword: LOCATE
            }
            var MY_96 = _world.GetSynonymObject("MY");
            var temp_97 = MY_96.GetFloat("VISIBLE");
            if (temp_97 == 0f)
            {
                {
                    var enumerator = VANISHSTOP();
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
            yield break;
        }
        public IEnumerator LOCATEPLAYERPARTICLE()
        {
            var MY_2 = _world.GetSynonymObject("MY");
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
                var enumerator = FLASHPLAYER();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            _world.PlaySound("QGUN04SND", 0.7f);
            {
                var enumerator = VANISHSTOP();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator LOCATEREPT()
        {
            {
                var enumerator = LOCATEACTOR();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("WAYPOINT");
            if (temp_3 < 11f)
            {
                yield break;
            }
            var GOLCOUNTER_5 = _world.GetObject(ObjectType.Skill, "GOLCOUNTER");
            GOLCOUNTER_5.SetFloat("VAL", 0f);
            var WALLTIMER_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"WALLTIMER");
            _world.AcknexObject.SetAcknexObject("EACH_SEC.4", WALLTIMER_6);
            {
                var enumerator = VANISHSTOP();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator LOOKPLAYER()
        {
            var MY_2 = _world.GetSynonymObject("MY");
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
            var MY_9 = _world.GetSynonymObject("MY");
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
            var MY_19 = _world.GetSynonymObject("MY");
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
            _world.Shoot("MY");
            var HIT_DIST_28 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_28_val = HIT_DIST_28.GetFloat("VAL");
            if (HIT_DIST_28_val == 0f)
            {
                goto NOTVISIBLE;
            }
            ISVISIBLE:
            var MY_31 = _world.GetSynonymObject("MY");
            MY_31.SetFloat("FLAG1", 1f);
            yield break;
            MAYBEVISIBLE:
            var MY_34 = _world.GetSynonymObject("MY");
            var temp_35 = MY_34.GetFloat("VISIBLE");
            if (temp_35 == 1f)
            {
                goto ISVISIBLE;
            }
            NOTVISIBLE:
            var MY_38 = _world.GetSynonymObject("MY");
            MY_38.SetFloat("FLAG1", 0f);
            yield break;
        }
        public IEnumerator LOWER()
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
            yield return new WaitForTicks(1f);
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
            yield return new WaitForTicks(1f);
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
            yield return new WaitForTicks(1f);
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
            yield return new WaitForTicks(1f);
            var MY_GUN_182 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_182.SetFloat("HEIGHT", -20f);
            var MY_GUN_185 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_185.SetFloat("INVISIBLE", 1f);
            yield return new WaitForTicks(1f);
            yield break;
        }
        public IEnumerator MENUDOWN()
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
            _world.PlaySound("BIP01SND", 0.5f);
            yield break;
        }
        public IEnumerator MENUUP()
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
            _world.PlaySound("BIP01SND", 0.5f);
            yield break;
        }
        public IEnumerator MOVE_ME()
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
                var enumerator = SET_WALKING();
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
                var enumerator = SET_SWIMMING();
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
            var MP5_01OVL_169 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"MP5_01OVL");
            var MP5_01OVL_171 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"MP5_01OVL");
            var temp_172 = MP5_01OVL_171.GetFloat("POS_X");
            var WEAPONWAVE_177 = _world.GetObject(ObjectType.Skill, "WEAPONWAVE");
            var WEAPONWAVE_177_val = WEAPONWAVE_177.GetFloat("VAL");
            MP5_01OVL_169.SetFloat("POS_X", 100f + 12f * WEAPONWAVE_177_val);
            var QGUN00OVL_179 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"QGUN00OVL");
            var QGUN00OVL_181 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"QGUN00OVL");
            var temp_182 = QGUN00OVL_181.GetFloat("POS_X");
            var WEAPONWAVE_187 = _world.GetObject(ObjectType.Skill, "WEAPONWAVE");
            var WEAPONWAVE_187_val = WEAPONWAVE_187.GetFloat("VAL");
            QGUN00OVL_179.SetFloat("POS_X", 190f + 6f * WEAPONWAVE_187_val);
            var GRAN00OVL_189 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"GRAN00OVL");
            var GRAN00OVL_191 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"GRAN00OVL");
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
            _world.PlaySound("FWT01SND", 0.5f);
            goto AIRBORNE;
            FELL:
            var FALLING_FLOOR_227 = _world.GetObject(ObjectType.Skill, "FALLING_FLOOR");
            var FALLING_FLOOR_227_val = FALLING_FLOOR_227.GetFloat("VAL");
            var HERE_229 = _world.GetSynonymObject("HERE");
            var temp_230 = HERE_229.GetFloat("FLOOR_HGT");
            if (temp_230 > FALLING_FLOOR_227_val)
            {
                var FALLING_HEIGHT_231 = _world.GetObject(ObjectType.Skill, "FALLING_HEIGHT");
                var FALLING_HEIGHT_232 = _world.GetObject(ObjectType.Skill, "FALLING_HEIGHT");
                var FALLING_HEIGHT_232_val = FALLING_HEIGHT_232.GetFloat("VAL");
                var FALLING_HEIGHT_233 = _world.GetObject(ObjectType.Skill, "FALLING_HEIGHT");
                var FALLING_HEIGHT_233_val = FALLING_HEIGHT_233.GetFloat("VAL");
                var HERE_236 = _world.GetSynonymObject("HERE");
                var temp_237 = HERE_236.GetFloat("FLOOR_HGT");
                var FALLING_FLOOR_239 = _world.GetObject(ObjectType.Skill, "FALLING_FLOOR");
                var FALLING_FLOOR_239_val = FALLING_FLOOR_239.GetFloat("VAL");
                FALLING_HEIGHT_231.SetFloat("VAL", FALLING_HEIGHT_233_val - temp_237 + FALLING_FLOOR_239_val);
            }
            _world.PlaySound("FCT01SND", 0.5f);
            var PLAYER_RESULT_241 = _world.GetObject(ObjectType.Skill, "PLAYER_RESULT");
            var PLAYER_RESULT_242 = _world.GetObject(ObjectType.Skill, "PLAYER_RESULT");
            var PLAYER_RESULT_242_val = PLAYER_RESULT_242.GetFloat("VAL");
            var FALLING_HEIGHT_244 = _world.GetObject(ObjectType.Skill, "FALLING_HEIGHT");
            var FALLING_HEIGHT_244_val = FALLING_HEIGHT_244.GetFloat("VAL");
            PLAYER_RESULT_241.SetFloat("VAL", (FALLING_HEIGHT_244_val - 6f) / 2f);
            var PLAYER_RESULT_251 = _world.GetObject(ObjectType.Skill, "PLAYER_RESULT");
            var PLAYER_RESULT_251_val = PLAYER_RESULT_251.GetFloat("VAL");
            if (PLAYER_RESULT_251_val > 0f)
            {
                {
                    var enumerator = HITPLAYER();
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
            var FALLING_HEIGHT_253 = _world.GetObject(ObjectType.Skill, "FALLING_HEIGHT");
            FALLING_HEIGHT_253.SetFloat("VAL", 0f);
            AIRBORNE:
            var FORCE_254 = _world.GetObject(ObjectType.Skill, "FORCE");
            var FORCE_254_val = FORCE_254.GetFloat("VAL");
            var PLAYER_VZ_255 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            var PLAYER_VZ_255_val = PLAYER_VZ_255.GetFloat("VAL");
            var PLAYER_VZ_256 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            PLAYER_VZ_256.SetFloat("VAL", _world.Accelerate(PLAYER_VZ_255_val, FORCE_254_val));
            var PLAYER_HGT_258 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_258_val = PLAYER_HGT_258.GetFloat("VAL");
            if (PLAYER_HGT_258_val < 2f)
            {
                goto AIRBORNE2;
            }
            var HERE_261 = _world.GetSynonymObject("HERE");
            var temp_262 = HERE_261?.GetAcknexObject("IF_ARISE");
            if (temp_262 != null)
            {
                goto AIRBORNE2;
            }
            var HERE_265 = _world.GetSynonymObject("HERE");
            var temp_266 = HERE_265?.GetAcknexObject("IF_DIVE");
            if (temp_266 != null)
            {
                goto AIRBORNE2;
            }
            var FALLING_HEIGHT_267 = _world.GetObject(ObjectType.Skill, "FALLING_HEIGHT");
            var FALLING_HEIGHT_267_val = FALLING_HEIGHT_267.GetFloat("VAL");
            var PLAYER_HGT_268 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_268_val = PLAYER_HGT_268.GetFloat("VAL");
            if (PLAYER_HGT_268_val > FALLING_HEIGHT_267_val)
            {
                goto FALLING;
            }
            goto AIRBORNE2;
            FALLING:
            var HERE_270 = _world.GetSynonymObject("HERE");
            var temp_271 = HERE_270.GetFloat("FLOOR_HGT");
            var FALLING_FLOOR_272 = _world.GetObject(ObjectType.Skill, "FALLING_FLOOR");
            FALLING_FLOOR_272.SetFloat("VAL", temp_271);
            var PLAYER_HGT_273 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_273_val = PLAYER_HGT_273.GetFloat("VAL");
            var FALLING_HEIGHT_274 = _world.GetObject(ObjectType.Skill, "FALLING_HEIGHT");
            FALLING_HEIGHT_274.SetFloat("VAL", PLAYER_HGT_273_val);
            AIRBORNE2:
            var DUCK_VAL_275 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_276 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_276_val = DUCK_VAL_276.GetFloat("VAL");
            var DUCK_VAL_279 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_279_val = DUCK_VAL_279.GetFloat("VAL");
            DUCK_VAL_275.SetFloat("VAL", 0.8f * DUCK_VAL_279_val);
            var MODE_SCHWIMMEN_280 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var MODE_SCHWIMMEN_280_val = MODE_SCHWIMMEN_280.GetFloat("VAL");
            var MOVING_281 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_281_val = MOVING_281.GetFloat("VAL");
            if (MOVING_281_val == MODE_SCHWIMMEN_280_val)
            {
                goto DUCK;
            }
            var FORCE_UP_283 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var FORCE_UP_283_val = FORCE_UP_283.GetFloat("VAL");
            if (FORCE_UP_283_val > 0f)
            {
                goto NO_DUCK;
            }
            DUCK:
            var DUCK_VAL_284 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_285 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_285_val = DUCK_VAL_285.GetFloat("VAL");
            var DUCK_VAL_286 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_286_val = DUCK_VAL_286.GetFloat("VAL");
            var DUCK_STR_288 = _world.GetObject(ObjectType.Skill, "DUCK_STR");
            var DUCK_STR_288_val = DUCK_STR_288.GetFloat("VAL");
            var FORCE_UP_290 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var FORCE_UP_290_val = FORCE_UP_290.GetFloat("VAL");
            DUCK_VAL_284.SetFloat("VAL", DUCK_VAL_286_val + DUCK_STR_288_val * FORCE_UP_290_val);
            NO_DUCK:
            var PLAYER_SIZE_291 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_292 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_292_val = PLAYER_SIZE_292.GetFloat("VAL");
            var PLAYER_SIZE_293 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_293_val = PLAYER_SIZE_293.GetFloat("VAL");
            var DUCK_VAL_295 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_295_val = DUCK_VAL_295.GetFloat("VAL");
            PLAYER_SIZE_291.SetFloat("VAL", PLAYER_SIZE_293_val + DUCK_VAL_295_val);
            var MODE_GEHEN_296 = _world.GetObject(ObjectType.Skill, "MODE_GEHEN");
            var MODE_GEHEN_296_val = MODE_GEHEN_296.GetFloat("VAL");
            var MOVING_297 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_297_val = MOVING_297.GetFloat("VAL");
            if (MOVING_297_val != MODE_GEHEN_296_val)
            {
                goto NO_JUMP;
            }
            var JUMP_PHASE_299 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            var JUMP_PHASE_299_val = JUMP_PHASE_299.GetFloat("VAL");
            if (JUMP_PHASE_299_val > 0f)
            {
                goto JUMP_1;
            }
            var FORCE_UP_301 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var FORCE_UP_301_val = FORCE_UP_301.GetFloat("VAL");
            if (FORCE_UP_301_val < 0.1f)
            {
                goto NO_JUMP;
            }
            var JUMP_PHASE_303 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            JUMP_PHASE_303.SetFloat("VAL", 1f);
            JUMP_1:
            var JUMP_PHASE_305 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            var JUMP_PHASE_305_val = JUMP_PHASE_305.GetFloat("VAL");
            if (JUMP_PHASE_305_val > 1f)
            {
                goto JUMP_2;
            }
            var DUCK_VAL_306 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_307 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_307_val = DUCK_VAL_307.GetFloat("VAL");
            var DUCK_VAL_308 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_308_val = DUCK_VAL_308.GetFloat("VAL");
            DUCK_VAL_306.SetFloat("VAL", DUCK_VAL_308_val - 0.5f);
            var DUCK_VAL_312 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            var DUCK_VAL_312_val = DUCK_VAL_312.GetFloat("VAL");
            if (DUCK_VAL_312_val < -0.7f)
            {
                var JUMP_PHASE_314 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
                JUMP_PHASE_314.SetFloat("VAL", 2f);
            }
            goto NO_JUMP;
            JUMP_2:
            var JUMP_PHASE_316 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            var JUMP_PHASE_316_val = JUMP_PHASE_316.GetFloat("VAL");
            if (JUMP_PHASE_316_val > 2f)
            {
                goto JUMP_3;
            }
            var DUCK_VAL_318 = _world.GetObject(ObjectType.Skill, "DUCK_VAL");
            DUCK_VAL_318.SetFloat("VAL", 0f);
            var PLAYER_Z_319 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_320 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_320_val = PLAYER_Z_320.GetFloat("VAL");
            var FLOOR_HGT_321 = _world.GetObject(ObjectType.Skill, "FLOOR_HGT");
            var FLOOR_HGT_321_val = FLOOR_HGT_321.GetFloat("VAL");
            var MY_SIZE_323 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var MY_SIZE_323_val = MY_SIZE_323.GetFloat("VAL");
            PLAYER_Z_319.SetFloat("VAL", FLOOR_HGT_321_val + MY_SIZE_323_val);
            var PLAYER_VZ_325 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            PLAYER_VZ_325.SetFloat("VAL", 0.35f);
            var JUMP_PHASE_327 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            JUMP_PHASE_327.SetFloat("VAL", 3f);
            goto NO_JUMP;
            JUMP_3:
            var PLAYER_VZ_329 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            var PLAYER_VZ_329_val = PLAYER_VZ_329.GetFloat("VAL");
            if (PLAYER_VZ_329_val > 0f)
            {
                goto NO_JUMP;
            }
            var PLAYER_HGT_331 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_331_val = PLAYER_HGT_331.GetFloat("VAL");
            if (PLAYER_HGT_331_val > 0f)
            {
                goto NO_JUMP;
            }
            var JUMP_PHASE_333 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            JUMP_PHASE_333.SetFloat("VAL", 0f);
            NO_JUMP:
            var PLAYER_SPEED_SQR_334 = _world.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
            var PLAYER_SPEED_SQR_335 = _world.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
            var PLAYER_SPEED_SQR_335_val = PLAYER_SPEED_SQR_335.GetFloat("VAL");
            var PLAYER_VX_336 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_336_val = PLAYER_VX_336.GetFloat("VAL");
            var PLAYER_VX_338 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_338_val = PLAYER_VX_338.GetFloat("VAL");
            var PLAYER_VY_340 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_340_val = PLAYER_VY_340.GetFloat("VAL");
            var PLAYER_VY_342 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_342_val = PLAYER_VY_342.GetFloat("VAL");
            PLAYER_SPEED_SQR_334.SetFloat("VAL", PLAYER_VX_336_val * PLAYER_VX_338_val + PLAYER_VY_340_val * PLAYER_VY_342_val);
            var TILT_DECREASE_344 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
            var TILT_DECREASE_344_val = TILT_DECREASE_344.GetFloat("VAL");
            if (TILT_DECREASE_344_val != 1f)
            {
                goto CALC_TILT;
            }
            var MAX_PLAYER_TILT_P_345 = _world.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_P");
            var MAX_PLAYER_TILT_P_345_val = MAX_PLAYER_TILT_P_345.GetFloat("VAL");
            var PLAYER_TILT_346 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_346_val = PLAYER_TILT_346.GetFloat("VAL");
            if (PLAYER_TILT_346_val > MAX_PLAYER_TILT_P_345_val)
            {
                goto CHECK_SPEED_TILT;
            }
            var MAX_PLAYER_TILT_N_347 = _world.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_N");
            var MAX_PLAYER_TILT_N_347_val = MAX_PLAYER_TILT_N_347.GetFloat("VAL");
            var PLAYER_TILT_348 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_348_val = PLAYER_TILT_348.GetFloat("VAL");
            if (PLAYER_TILT_348_val > MAX_PLAYER_TILT_N_347_val)
            {
                goto DECR_TILT;
            }
            CHECK_SPEED_TILT:
            var PLAYER_SPEED_SQR_350 = _world.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
            var PLAYER_SPEED_SQR_350_val = PLAYER_SPEED_SQR_350.GetFloat("VAL");
            if (PLAYER_SPEED_SQR_350_val > 0.4f)
            {
                goto DECR_TILT;
            }
            var PLAYER_VZ_352 = _world.GetObject(ObjectType.Skill, "PLAYER_VZ");
            var PLAYER_VZ_352_val = PLAYER_VZ_352.GetFloat("VAL");
            if (PLAYER_VZ_352_val != 0f)
            {
                goto DECR_TILT;
            }
            goto CALC_TILT;
            DECR_TILT:
            var TILT_DECREASE_354 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
            TILT_DECREASE_354.SetFloat("VAL", 0.8f);
            CALC_TILT:
            var PLAYER_TILT_355 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_356 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_356_val = PLAYER_TILT_356.GetFloat("VAL");
            var TILT_DECREASE_357 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
            var TILT_DECREASE_357_val = TILT_DECREASE_357.GetFloat("VAL");
            var PLAYER_TILT_359 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_359_val = PLAYER_TILT_359.GetFloat("VAL");
            var FORCE_TILT_363 = _world.GetObject(ObjectType.Skill, "FORCE_TILT");
            var FORCE_TILT_363_val = FORCE_TILT_363.GetFloat("VAL");
            var FLOAT_STR_367 = _world.GetObject(ObjectType.Skill, "FLOAT_STR");
            var FLOAT_STR_367_val = FLOAT_STR_367.GetFloat("VAL");
            var FORCE_UP_369 = _world.GetObject(ObjectType.Skill, "FORCE_UP");
            var FORCE_UP_369_val = FORCE_UP_369.GetFloat("VAL");
            var TIME_CORR_371 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_371_val = TIME_CORR_371.GetFloat("VAL");
            var FLY_MODE_376 = _world.GetObject(ObjectType.Skill, "FLY_MODE");
            var FLY_MODE_376_val = FLY_MODE_376.GetFloat("VAL");
            PLAYER_TILT_355.SetFloat("VAL", TILT_DECREASE_357_val * PLAYER_TILT_359_val + 0.3f * FORCE_TILT_363_val - 0.3f * FLOAT_STR_367_val * FORCE_UP_369_val * TIME_CORR_371_val * (1f - FLY_MODE_376_val));
            var PLAYER_SPEED_SQR_379 = _world.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
            var PLAYER_SPEED_SQR_379_val = PLAYER_SPEED_SQR_379.GetFloat("VAL");
            if (PLAYER_SPEED_SQR_379_val > 0f)
            {
                goto skip_380;
            }
            var MAX_PLAYER_TILT_P_381 = _world.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_P");
            var MAX_PLAYER_TILT_P_381_val = MAX_PLAYER_TILT_P_381.GetFloat("VAL");
            var PLAYER_TILT_382 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_382_val = PLAYER_TILT_382.GetFloat("VAL");
            if (PLAYER_TILT_382_val > MAX_PLAYER_TILT_P_381_val)
            {
                var TILT_DECREASE_384 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
                TILT_DECREASE_384.SetFloat("VAL", 1f);
            }
            var MAX_PLAYER_TILT_N_385 = _world.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_N");
            var MAX_PLAYER_TILT_N_385_val = MAX_PLAYER_TILT_N_385.GetFloat("VAL");
            var PLAYER_TILT_386 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_386_val = PLAYER_TILT_386.GetFloat("VAL");
            if (PLAYER_TILT_386_val < MAX_PLAYER_TILT_N_385_val)
            {
                var TILT_DECREASE_388 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
                TILT_DECREASE_388.SetFloat("VAL", 1f);
            }
            skip_380:
            var MODE_SCHWIMMEN_389 = _world.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
            var MODE_SCHWIMMEN_389_val = MODE_SCHWIMMEN_389.GetFloat("VAL");
            var MOVING_390 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_390_val = MOVING_390.GetFloat("VAL");
            if (MOVING_390_val == MODE_SCHWIMMEN_389_val)
            {
                var PLAYER_TILT_391 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var PLAYER_TILT_392 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var PLAYER_TILT_392_val = PLAYER_TILT_392.GetFloat("VAL");
                var PLAYER_TILT_393 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var PLAYER_TILT_393_val = PLAYER_TILT_393.GetFloat("VAL");
                var WAVE_397 = _world.GetObject(ObjectType.Skill, "WAVE");
                var WAVE_397_val = WAVE_397.GetFloat("VAL");
                PLAYER_TILT_391.SetFloat("VAL", PLAYER_TILT_393_val + 0.01f * WAVE_397_val);
            }
            var MODE_TAUCHEN_398 = _world.GetObject(ObjectType.Skill, "MODE_TAUCHEN");
            var MODE_TAUCHEN_398_val = MODE_TAUCHEN_398.GetFloat("VAL");
            var MOVING_399 = _world.GetObject(ObjectType.Skill, "MOVING");
            var MOVING_399_val = MOVING_399.GetFloat("VAL");
            if (MOVING_399_val == MODE_TAUCHEN_398_val)
            {
                goto NO_HTILT;
            }
            var JUMP_PHASE_401 = _world.GetObject(ObjectType.Skill, "JUMP_PHASE");
            var JUMP_PHASE_401_val = JUMP_PHASE_401.GetFloat("VAL");
            if (JUMP_PHASE_401_val > 0f)
            {
                goto NO_HTILT;
            }
            var TILT_DECREASE_403 = _world.GetObject(ObjectType.Skill, "TILT_DECREASE");
            var TILT_DECREASE_403_val = TILT_DECREASE_403.GetFloat("VAL");
            if (TILT_DECREASE_403_val == 1f)
            {
                goto NO_HTILT;
            }
            var PLAYER_HGT_405 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_405_val = PLAYER_HGT_405.GetFloat("VAL");
            if (PLAYER_HGT_405_val > 0f)
            {
                var PLAYER_TILT_406 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var PLAYER_TILT_407 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var PLAYER_TILT_407_val = PLAYER_TILT_407.GetFloat("VAL");
                var PLAYER_TILT_408 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
                var PLAYER_TILT_408_val = PLAYER_TILT_408.GetFloat("VAL");
                var PLAYER_HGT_413 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
                var PLAYER_HGT_413_val = PLAYER_HGT_413.GetFloat("VAL");
                PLAYER_TILT_406.SetFloat("VAL", PLAYER_TILT_408_val + 0.03f * (PLAYER_HGT_413_val + 0.3f));
            }
            NO_HTILT:
            var RICHTER_418 = _world.GetObject(ObjectType.Skill, "RICHTER");
            var RICHTER_418_val = RICHTER_418.GetFloat("VAL");
            if (RICHTER_418_val == 0f)
            {
                goto NO_QUAKE;
            }
            var PLAYER_X_419 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_420 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_420_val = PLAYER_X_420.GetFloat("VAL");
            var PLAYER_X_421 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_421_val = PLAYER_X_421.GetFloat("VAL");
            var RICHTER_423 = _world.GetObject(ObjectType.Skill, "RICHTER");
            var RICHTER_423_val = RICHTER_423.GetFloat("VAL");
            PLAYER_X_419.SetFloat("VAL", PLAYER_X_421_val + RICHTER_423_val * (UnityEngine.Random.value - 0.5f));
            var PLAYER_Y_430 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_431 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_431_val = PLAYER_Y_431.GetFloat("VAL");
            var PLAYER_Y_432 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_432_val = PLAYER_Y_432.GetFloat("VAL");
            var RICHTER_434 = _world.GetObject(ObjectType.Skill, "RICHTER");
            var RICHTER_434_val = RICHTER_434.GetFloat("VAL");
            var RANDOM_1_437 = _world.GetObject(ObjectType.Skill, "RANDOM_1");
            var RANDOM_1_437_val = RANDOM_1_437.GetFloat("VAL");
            PLAYER_Y_430.SetFloat("VAL", PLAYER_Y_432_val + RICHTER_434_val * (RANDOM_1_437_val - 0.5f));
            var PLAYER_VX_441 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_442 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_442_val = PLAYER_VX_442.GetFloat("VAL");
            var PLAYER_VX_443 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_443_val = PLAYER_VX_443.GetFloat("VAL");
            var RICHTER_447 = _world.GetObject(ObjectType.Skill, "RICHTER");
            var RICHTER_447_val = RICHTER_447.GetFloat("VAL");
            PLAYER_VX_441.SetFloat("VAL", PLAYER_VX_443_val + 0.2f * RICHTER_447_val * (UnityEngine.Random.value - 0.5f));
            var PLAYER_VY_454 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_455 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_455_val = PLAYER_VY_455.GetFloat("VAL");
            var PLAYER_VY_456 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_456_val = PLAYER_VY_456.GetFloat("VAL");
            var RICHTER_460 = _world.GetObject(ObjectType.Skill, "RICHTER");
            var RICHTER_460_val = RICHTER_460.GetFloat("VAL");
            var RANDOM_1_463 = _world.GetObject(ObjectType.Skill, "RANDOM_1");
            var RANDOM_1_463_val = RANDOM_1_463.GetFloat("VAL");
            PLAYER_VY_454.SetFloat("VAL", PLAYER_VY_456_val + 0.2f * RICHTER_460_val * (RANDOM_1_463_val - 0.5f));
            var PLAYER_Z_467 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_468 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_468_val = PLAYER_Z_468.GetFloat("VAL");
            var PLAYER_Z_469 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_469_val = PLAYER_Z_469.GetFloat("VAL");
            var RICHTER_471 = _world.GetObject(ObjectType.Skill, "RICHTER");
            var RICHTER_471_val = RICHTER_471.GetFloat("VAL");
            var RANDOM_2_474 = _world.GetObject(ObjectType.Skill, "RANDOM_2");
            var RANDOM_2_474_val = RANDOM_2_474.GetFloat("VAL");
            PLAYER_Z_467.SetFloat("VAL", PLAYER_Z_469_val + RICHTER_471_val * (RANDOM_2_474_val - 0.5f));
            var RANDOM_1_478 = _world.GetObject(ObjectType.Skill, "RANDOM_1");
            var RANDOM_1_478_val = RANDOM_1_478.GetFloat("VAL");
            var RANDOM_2_479 = _world.GetObject(ObjectType.Skill, "RANDOM_2");
            RANDOM_2_479.SetFloat("VAL", RANDOM_1_478_val);
            var RANDOM_1_481 = _world.GetObject(ObjectType.Skill, "RANDOM_1");
            RANDOM_1_481.SetFloat("VAL", UnityEngine.Random.value);
            NO_QUAKE:
            yield break;
            var KEY_INS_483 = _world.GetObject(ObjectType.Skill, "KEY_INS");
            var KEY_INS_483_val = KEY_INS_483.GetFloat("VAL");
            if (KEY_INS_483_val > 0f)
            {
                var PLAYER_ARC_484 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var PLAYER_ARC_485 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var PLAYER_ARC_485_val = PLAYER_ARC_485.GetFloat("VAL");
                var PLAYER_ARC_486 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var PLAYER_ARC_486_val = PLAYER_ARC_486.GetFloat("VAL");
                PLAYER_ARC_484.SetFloat("VAL", PLAYER_ARC_486_val - 0.1f);
            }
            var KEY_DEL_490 = _world.GetObject(ObjectType.Skill, "KEY_DEL");
            var KEY_DEL_490_val = KEY_DEL_490.GetFloat("VAL");
            if (KEY_DEL_490_val > 0f)
            {
                var PLAYER_ARC_491 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var PLAYER_ARC_492 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var PLAYER_ARC_492_val = PLAYER_ARC_492.GetFloat("VAL");
                var PLAYER_ARC_493 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
                var PLAYER_ARC_493_val = PLAYER_ARC_493.GetFloat("VAL");
                PLAYER_ARC_491.SetFloat("VAL", PLAYER_ARC_493_val + 0.1f);
            }
            yield break;
        }
        public IEnumerator PDAMESSAGEOFF()
        {
            var PDATEXT_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PDATEXT");
            PDATEXT_2.SetFloat("VISIBLE", 0f);
            var SHOWMAINMENU_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SHOWMAINMENU");
            _world.AcknexObject.SetAcknexObject("IF_ESC", SHOWMAINMENU_3);
            var SELECTTRICORDER_5 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTTRICORDER");
            _world.AcknexObject.SetAcknexObject("IF_TAB", SELECTTRICORDER_5);
            var SELECTNONE_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_1", SELECTNONE_7);
            var SELECTNONE_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_F10", SELECTNONE_9);
            var SELECTMP5_11 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTMP5");
            _world.AcknexObject.SetAcknexObject("IF_2", SELECTMP5_11);
            var SELECTMP5BURST_13 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTMP5BURST");
            _world.AcknexObject.SetAcknexObject("IF_3", SELECTMP5BURST_13);
            var SELECTSTINGER_15 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTSTINGER");
            _world.AcknexObject.SetAcknexObject("IF_5", SELECTSTINGER_15);
            var SELECTGRANADE_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTGRANADE");
            _world.AcknexObject.SetAcknexObject("IF_4", SELECTGRANADE_17);
            var SELECTQUANTUM_19 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTQUANTUM");
            _world.AcknexObject.SetAcknexObject("IF_6", SELECTQUANTUM_19);
            _world.AcknexObject.SetAcknexObject("PANELS.16", null);
            {
                var enumerator = SELECTNONE();
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
                var enumerator = DISPLAYMESSAGE();
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
                var enumerator = SHOWWEAPON();
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
                var enumerator = SELECTNONE();
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
                var enumerator = ENDOFLEVEL();
                while (enumerator.MoveNext())
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
        public IEnumerator PICKAMMO()
        {
            var AMMO_MP5_1 = _world.GetObject(ObjectType.Skill, "AMMO_MP5");
            var AMMO_MP5_1_val = AMMO_MP5_1.GetFloat("VAL");
            var AMMO_MP5_2 = _world.GetObject(ObjectType.Skill, "AMMO_MP5");
            AMMO_MP5_2.SetFloat("VAL", AMMO_MP5_1_val + 30f);
            {
                var enumerator = SHOWAMMO();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetFloat("INVISIBLE", 1f);
            _world.PlaySound("AMMO01SND", 0.3f);
            var GET01STR_7 = _world.AcknexObject.GetAcknexObject("GET01STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET01STR_7);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator PICKGRANADE()
        {
            var HAS_GRANADE_1 = _world.GetObject(ObjectType.Skill, "HAS_GRANADE");
            HAS_GRANADE_1.SetFloat("VAL", 1f);
            var AMMO_GRANADE_3 = _world.GetObject(ObjectType.Skill, "AMMO_GRANADE");
            var AMMO_GRANADE_3_val = AMMO_GRANADE_3.GetFloat("VAL");
            var AMMO_GRANADE_4 = _world.GetObject(ObjectType.Skill, "AMMO_GRANADE");
            AMMO_GRANADE_4.SetFloat("VAL", AMMO_GRANADE_3_val + 1f);
            {
                var enumerator = SHOWAMMO();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_7 = _world.GetSynonymObject("MY");
            MY_7.SetFloat("INVISIBLE", 1f);
            _world.PlaySound("GRAN01SND", 0.5f);
            var GET05STR_9 = _world.AcknexObject.GetAcknexObject("GET05STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET05STR_9);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator PICKKEY1()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetFloat("INVISIBLE", 1f);
            _world.PlaySound("TICKETSND", 0.5f);
            var KEY1_5 = _world.GetObject(ObjectType.Skill, "KEY1");
            KEY1_5.SetFloat("VAL", 1f);
            var GET03STR_6 = _world.AcknexObject.GetAcknexObject("GET03STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET03STR_6);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator PICKKEY2()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetFloat("INVISIBLE", 1f);
            _world.PlaySound("KEYSND", 0.5f);
            var KEY2_5 = _world.GetObject(ObjectType.Skill, "KEY2");
            KEY2_5.SetFloat("VAL", 1f);
            var GET04STR_6 = _world.AcknexObject.GetAcknexObject("GET04STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET04STR_6);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator PICKQUANTUMAMMO()
        {
            var AMMO_QUANTUM_1 = _world.GetObject(ObjectType.Skill, "AMMO_QUANTUM");
            var AMMO_QUANTUM_1_val = AMMO_QUANTUM_1.GetFloat("VAL");
            var AMMO_QUANTUM_2 = _world.GetObject(ObjectType.Skill, "AMMO_QUANTUM");
            AMMO_QUANTUM_2.SetFloat("VAL", AMMO_QUANTUM_1_val + 1f);
            {
                var enumerator = SHOWAMMO();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetFloat("INVISIBLE", 1f);
            _world.PlaySound("QGUN01SND", 0.2f);
            var GET07STR_7 = _world.AcknexObject.GetAcknexObject("GET07STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET07STR_7);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator PICKSTINGERAMMO()
        {
            var AMMO_STINGER_1 = _world.GetObject(ObjectType.Skill, "AMMO_STINGER");
            var AMMO_STINGER_1_val = AMMO_STINGER_1.GetFloat("VAL");
            var AMMO_STINGER_2 = _world.GetObject(ObjectType.Skill, "AMMO_STINGER");
            AMMO_STINGER_2.SetFloat("VAL", AMMO_STINGER_1_val + 10f);
            {
                var enumerator = SHOWAMMO();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetFloat("INVISIBLE", 1f);
            _world.PlaySound("AMMO01SND", 0.5f);
            var GET06STR_7 = _world.AcknexObject.GetAcknexObject("GET06STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET06STR_7);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator PICKTROPAMMO()
        {
            var AMMO_MP5_1 = _world.GetObject(ObjectType.Skill, "AMMO_MP5");
            var AMMO_MP5_1_val = AMMO_MP5_1.GetFloat("VAL");
            var AMMO_MP5_2 = _world.GetObject(ObjectType.Skill, "AMMO_MP5");
            AMMO_MP5_2.SetFloat("VAL", AMMO_MP5_1_val + 30f);
            {
                var enumerator = SHOWAMMO();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_NEAR", null);
            _world.PlaySound("AMMO01SND", 0.3f);
            var GET01STR_7 = _world.AcknexObject.GetAcknexObject("GET01STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET01STR_7);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator PICKTROPARMOUR()
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
            PLAYER_ARMOUR_4.SetFloat("VAL", PLAYER_ARMOUR_3_val + 20f);
            var MY_7 = _world.GetSynonymObject("MY");
            MY_7.SetAcknexObject("IF_NEAR", null);
            _world.PlaySound("ARMO01SND", 0.5f);
            var GET10STR_9 = _world.AcknexObject.GetAcknexObject("GET10STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET10STR_9);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
        public IEnumerator PICKUPARMOUR()
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
            var MY_7 = _world.GetSynonymObject("MY");
            MY_7.SetFloat("INVISIBLE", 1f);
            _world.PlaySound("ARMO01SND", 0.5f);
            var GET10STR_9 = _world.AcknexObject.GetAcknexObject("GET10STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET10STR_9);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
        public IEnumerator PICKUPLOCALMP5()
        {
            {
                var enumerator = PICKUPMP5();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }//Unknown keyword: SAVE_INFO
             //Unknown keyword: SAVE_INFO
            yield return new WaitForTicks(32f);
            Application.Quit();
            yield break;
        }
        public IEnumerator PICKUPMEDKIT()
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
            var MY_7 = _world.GetSynonymObject("MY");
            MY_7.SetFloat("INVISIBLE", 1f);
            _world.PlaySound("MP_501SND", 0.5f);
            var GET11STR_9 = _world.AcknexObject.GetAcknexObject("GET11STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET11STR_9);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
        public IEnumerator PICKUPMP5()
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
                    var enumerator = SELECTMP5();
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
                _world.PlaySound("AMMO01SND", 0.3f);
            }
            {
                var enumerator = SHOWAMMO();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_12 = _world.GetSynonymObject("MY");
            MY_12.SetFloat("INVISIBLE", 1f);
            var GET02STR_13 = _world.AcknexObject.GetAcknexObject("GET02STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET02STR_13);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
        public IEnumerator PICKUPQUANTUM()
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
                    var enumerator = SELECTQUANTUM();
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
                var enumerator = SHOWAMMO();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_9 = _world.GetSynonymObject("MY");
            MY_9.SetFloat("INVISIBLE", 1f);
            var GET09STR_10 = _world.AcknexObject.GetAcknexObject("GET09STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET09STR_10);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
        public IEnumerator PICKUPSTINGER()
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
                    var enumerator = SELECTSTINGER();
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
                var enumerator = SHOWAMMO();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_9 = _world.GetSynonymObject("MY");
            MY_9.SetFloat("INVISIBLE", 1f);
            var GET08STR_10 = _world.AcknexObject.GetAcknexObject("GET08STR");
            _world.SetSynonymObject("MESSAGE_TEXT", GET08STR_10);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
        public IEnumerator PROBE()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("SPEED");
            if (temp_3 < 0.05f)
            {
                yield break;
            }
            var MY_6 = _world.GetSynonymObject("MY");
            var temp_7 = MY_6.GetFloat("GROUND");
            if (temp_7 == 0f)
            {
                goto CONT;
            }
            //Unknown keyword: LOCATE
            yield break;
            CONT:
            var MY_10 = _world.GetSynonymObject("MY");
            MY_10.SetFloat("HEIGHT", -0.05f);
            WATER:
            var MY_12 = _world.GetSynonymObject("MY");
            var temp_13 = MY_12?.GetAcknexObject("REGION");
            _world.SetSynonymObject("WATER_REGION", temp_13);
            var WATER_REGION_17 = _world.GetSynonymObject("WATER_REGION");
            var temp_18 = WATER_REGION_17?.GetAcknexObject("IF_DIVE");
            if (temp_18 == null)
            {
                goto PROBELOOP;
            }
            var MY_21 = _world.GetSynonymObject("MY");
            MY_21.SetFloat("HEIGHT", -2.5f);
            PROBELOOP:
            var WATER_REGION_24 = _world.GetSynonymObject("WATER_REGION");
            var temp_25 = WATER_REGION_24.GetFloat("FLAG2");
            if (temp_25 == 1f)
            {
                {
                    var enumerator = VANISHFORGOOD();
                    while (enumerator.MoveNext())
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
            var MY_33 = _world.GetSynonymObject("MY");
            var temp_34 = MY_33.GetFloat("ANGLE");
            var ANGLEOUT_35 = _world.GetObject(ObjectType.Skill, "ANGLEOUT");
            ANGLEOUT_35.SetFloat("VAL", temp_34);
            PROBEAGAIN:
            var ANGLEOUT_36 = _world.GetObject(ObjectType.Skill, "ANGLEOUT");
            var ANGLEOUT_36_val = ANGLEOUT_36.GetFloat("VAL");
            var DISTY_37 = _world.GetObject(ObjectType.Skill, "DISTY");
            DISTY_37.SetFloat("VAL", Mathf.Sin(ANGLEOUT_36_val));
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
            DISTX_44.SetFloat("VAL", Mathf.Sin(DISTX_43_val));
            var PROBETNG_46 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Thing,*/"PROBETNG");
            var PROBETNG_48 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Thing,*/"PROBETNG");
            var temp_49 = PROBETNG_48.GetFloat("X");
            var MY_51 = _world.GetSynonymObject("MY");
            var temp_52 = MY_51.GetFloat("X");
            var DISTX_54 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_54_val = DISTX_54.GetFloat("VAL");
            PROBETNG_46.SetFloat("X", temp_52 + DISTX_54_val * 12f);
            var PROBETNG_58 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Thing,*/"PROBETNG");
            var PROBETNG_60 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Thing,*/"PROBETNG");
            var temp_61 = PROBETNG_60.GetFloat("Y");
            var MY_63 = _world.GetSynonymObject("MY");
            var temp_64 = MY_63.GetFloat("Y");
            var DISTY_66 = _world.GetObject(ObjectType.Skill, "DISTY");
            var DISTY_66_val = DISTY_66.GetFloat("VAL");
            PROBETNG_58.SetFloat("Y", temp_64 + DISTY_66_val * 12f);
            var PROBETNG_71 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Thing,*/"PROBETNG");
            PROBETNG_71.SetFloat("GROUND", 1f);
            var WATER_REGION_73 = _world.GetSynonymObject("WATER_REGION");
            var temp_74 = WATER_REGION_73.GetFloat("FLOOR_HGT");
            var PROBETNG_76 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Thing,*/"PROBETNG");
            PROBETNG_76.SetFloat("HEIGHT", temp_74);
            //Unknown keyword: LOCATE
            var PROBETNG_79 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Thing,*/"PROBETNG");
            PROBETNG_79.SetFloat("GROUND", 0f);
            var PROBETNG_81 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Thing,*/"PROBETNG");
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
            var MY_109 = _world.GetSynonymObject("MY");
            var temp_110 = MY_109.GetFloat("ANGLE");
            var STEPCOUNTER_112 = _world.GetObject(ObjectType.Skill, "STEPCOUNTER");
            var STEPCOUNTER_112_val = STEPCOUNTER_112.GetFloat("VAL");
            var ANGLESTEP_114 = _world.GetObject(ObjectType.Skill, "ANGLESTEP");
            var ANGLESTEP_114_val = ANGLESTEP_114.GetFloat("VAL");
            ANGLEOUT_106.SetFloat("VAL", temp_110 + STEPCOUNTER_112_val * ANGLESTEP_114_val);
            goto PROBEAGAIN;
            END:
            var BULLET_115 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_117 = _world.GetSynonymObject("MY");
            MY_117.SetAcknexObject("TARGET", BULLET_115);
            var ANGLEOUT_118 = _world.GetObject(ObjectType.Skill, "ANGLEOUT");
            var ANGLEOUT_118_val = ANGLEOUT_118.GetFloat("VAL");
            var MY_120 = _world.GetSynonymObject("MY");
            MY_120.SetFloat("ANGLE", ANGLEOUT_118_val);
            yield break;
        }
        public IEnumerator RAISE()
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
            yield return new WaitForTicks(1f);
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
            yield return new WaitForTicks(1f);
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
            yield return new WaitForTicks(1f);
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
            yield return new WaitForTicks(1f);
            var MY_GUN_182 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_182.SetFloat("HEIGHT", -20f);
            var MY_GUN_185 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_185.SetFloat("INVISIBLE", 1f);
            yield return new WaitForTicks(1f);
            yield break;
        }
        public IEnumerator REDIN()
        {
            var REDVALUE_1 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_1_val = REDVALUE_1.GetFloat("VAL");
            var REDVALUE_2 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            REDVALUE_2.SetFloat("VAL", REDVALUE_1_val + -0.1f);
            var PLAYER_ARC_4 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var PLAYER_ARC_4_val = PLAYER_ARC_4.GetFloat("VAL");
            var PLAYER_ARC_5 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            PLAYER_ARC_5.SetFloat("VAL", PLAYER_ARC_4_val + 0.01f);
            //Unknown keyword: FADE_PAL
            var REDVALUE_7 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_7_val = REDVALUE_7.GetFloat("VAL");
            if (REDVALUE_7_val < 0f)
            {
                var REDVALUE_9 = _world.GetObject(ObjectType.Skill, "REDVALUE");
                REDVALUE_9.SetFloat("VAL", 0f);
            }
            var REDVALUE_11 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_11_val = REDVALUE_11.GetFloat("VAL");
            if (REDVALUE_11_val > 0f)
            {
                yield break;
            }
            var UNDERWATER_13 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            var UNDERWATER_13_val = UNDERWATER_13.GetFloat("VAL");
            if (UNDERWATER_13_val == 0f)
            {
                goto NOWATER;
            }
            {
                var enumerator = SET_BLUE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var PLAYER_ARC_15 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            PLAYER_ARC_15.SetFloat("VAL", 1.3f);
            goto FINISH;
            NOWATER:
            var PLAYER_ARC_17 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            PLAYER_ARC_17.SetFloat("VAL", 1f);
            FINISH:
            var PLAYER_HIT_19 = _world.GetObject(ObjectType.Skill, "PLAYER_HIT");
            PLAYER_HIT_19.SetFloat("VAL", 0f);
            _world.AcknexObject.SetAcknexObject("EACH_TICK.8", null);
            yield break;
        }
        public IEnumerator REDOUT()
        {
            var REDVALUE_1 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_1_val = REDVALUE_1.GetFloat("VAL");
            var REDVALUE_2 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            REDVALUE_2.SetFloat("VAL", REDVALUE_1_val + 0.1f);
            var PLAYER_ARC_4 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var PLAYER_ARC_4_val = PLAYER_ARC_4.GetFloat("VAL");
            var PLAYER_ARC_5 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            PLAYER_ARC_5.SetFloat("VAL", PLAYER_ARC_4_val + -0.01f);
            //Unknown keyword: FADE_PAL
            var HITVALUE_6 = _world.GetObject(ObjectType.Skill, "HITVALUE");
            var HITVALUE_6_val = HITVALUE_6.GetFloat("VAL");
            var REDVALUE_7 = _world.GetObject(ObjectType.Skill, "REDVALUE");
            var REDVALUE_7_val = REDVALUE_7.GetFloat("VAL");
            if (REDVALUE_7_val < HITVALUE_6_val)
            {
                yield break;
            }
            var PLAYER_HEALTH_9 = _world.GetObject(ObjectType.Skill, "PLAYER_HEALTH");
            var PLAYER_HEALTH_9_val = PLAYER_HEALTH_9.GetFloat("VAL");
            if (PLAYER_HEALTH_9_val < 1f)
            {
                goto KILL;
            }
            var REDIN_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REDIN");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.8", REDIN_10);
            yield break;
            KILL:
            var KILLPLAYER_13 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"KILLPLAYER");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.8", KILLPLAYER_13);
            yield break;
        }
        public IEnumerator REGIO_ARISE()
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
                var enumerator = _world.CallSynonymAction("SET_OVERWATER");
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
                var enumerator = SET_SWIMMING();
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
                var enumerator = DIVE_UP();
                while (enumerator.MoveNext())
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
        public IEnumerator REGIO_DIVE()
        {
            var UNDERWATER_1 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            var UNDERWATER_1_val = UNDERWATER_1.GetFloat("VAL");
            if (UNDERWATER_1_val == 1f)
            {
                yield break;
            }
            var UNDERWATER_3 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            UNDERWATER_3.SetFloat("VAL", 1f);
            _world.PlaySound("FWT01SND", 0.5f);
            var PLAYER_ARC_5 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var PLAYER_ARC_6 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var PLAYER_ARC_6_val = PLAYER_ARC_6.GetFloat("VAL");
            var PLAYER_ARC_7 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var PLAYER_ARC_7_val = PLAYER_ARC_7.GetFloat("VAL");
            PLAYER_ARC_5.SetFloat("VAL", PLAYER_ARC_7_val + 0.3f);
            var MY_SIZE_10 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var MY_SIZE_11 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var MY_SIZE_11_val = MY_SIZE_11.GetFloat("VAL");
            var MY_SIZE_12 = _world.GetObject(ObjectType.Skill, "MY_SIZE");
            var MY_SIZE_12_val = MY_SIZE_12.GetFloat("VAL");
            MY_SIZE_10.SetFloat("VAL", MY_SIZE_12_val - 0.2f);
            var PLAYER_SIZE_15 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_16 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_16_val = PLAYER_SIZE_16.GetFloat("VAL");
            var PLAYER_SIZE_17 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_17_val = PLAYER_SIZE_17.GetFloat("VAL");
            PLAYER_SIZE_15.SetFloat("VAL", PLAYER_SIZE_17_val - 0.2f);
            var PLAYER_Z_20 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_21 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_21_val = PLAYER_Z_21.GetFloat("VAL");
            var PLAYER_Z_22 = _world.GetObject(ObjectType.Skill, "PLAYER_Z");
            var PLAYER_Z_22_val = PLAYER_Z_22.GetFloat("VAL");
            PLAYER_Z_20.SetFloat("VAL", PLAYER_Z_22_val - 0.2f);
            var PLAYER_LIGHT_26 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            var PLAYER_LIGHT_26_val = PLAYER_LIGHT_26.GetFloat("VAL");
            var PLAYER_LIGHT_27 = _world.GetObject(ObjectType.Skill, "PLAYER_LIGHT");
            PLAYER_LIGHT_27.SetFloat("VAL", PLAYER_LIGHT_26_val + 0.2f);
            {
                var enumerator = _world.CallSynonymAction("SET_UNDERWATER");
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
                var enumerator = SET_DIVING();
                while (enumerator.MoveNext())
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
        public IEnumerator REPEATMUSIC()
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
            yield break;
        }
        public IEnumerator REPELANGLE()
        {
            {
                var enumerator = FOLLOWANGLE();
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
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("ANGLE");
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetFloat("ANGLE", temp_3 + PI_0_val);
            yield break;
        }
        public IEnumerator REPTDEAD()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("IF_NEAR", null);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_FAR", null);
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("IF_HIT", null);
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("EACH_CYCLE", null);
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetFloat("SKILL4", 9f);
            var REPT9TEX_15 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"REPT9TEX");
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetAcknexObject("TEXTURE", REPT9TEX_15);
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetFloat("SPEED", 0f);
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetAcknexObject("TARGET", null);
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetFloat("PASSABLE", 1f);
            var MY_29 = _world.GetSynonymObject("MY");
            MY_29.SetFloat("CAREFULLY", 0f);
            yield break;
        }
        public IEnumerator REPTDIE()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetFloat("SKILL1", 10f);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_NEAR", null);
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("IF_FAR", null);
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("IF_HIT", null);
            var REPTDEAD_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTDEAD");
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetAcknexObject("EACH_CYCLE", REPTDEAD_12);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("SKILL4", 8f);
            var REPT8TEX_18 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"REPT8TEX");
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetAcknexObject("TEXTURE", REPT8TEX_18);
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetFloat("SPEED", 0f);
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetFloat("GROUND", 0f);
            var MY_29 = _world.GetSynonymObject("MY");
            MY_29.SetFloat("HEIGHT", -0.05f);
            var MY_32 = _world.GetSynonymObject("MY");
            MY_32.SetAcknexObject("TARGET", null);
            yield break;
        }
        public IEnumerator REPTDOWN()
        {
            var REPTJUMP_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTJUMP");
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("IF_NEAR", REPTJUMP_0);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_FAR", null);
            var REPTSEARCH_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTSEARCH");
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("EACH_CYCLE", REPTSEARCH_6);
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetFloat("SKILL4", 0f);
            var REPTAUPTEX_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"REPTAUPTEX");
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetAcknexObject("TEXTURE", REPTAUPTEX_12);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("SPEED", 0f);
            var BULLET_18 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetAcknexObject("TARGET", BULLET_18);
            yield break;
        }
        public IEnumerator REPTESCAPE()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("IF_NEAR", null);
            var REPTHIDE_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTHIDE");
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_FAR", REPTHIDE_3);
            var CYCLEREPTHIDE_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CYCLEREPTHIDE");
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("EACH_CYCLE", CYCLEREPTHIDE_6);
            var REPTHIT_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTHIT");
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("IF_HIT", REPTHIT_9);
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetFloat("SKILL4", 4f);
            var REPT1TEX_15 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"REPT1TEX");
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetAcknexObject("TEXTURE", REPT1TEX_15);
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetFloat("DIST", 30f);
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetFloat("SPEED", 0.4f);
            var REPEL_24 = _world.AcknexObject.GetAcknexObject("REPEL");
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetAcknexObject("TARGET", REPEL_24);
            yield break;
        }
        public IEnumerator REPTFLEE()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("EACH_TICK", null);
            var MY_5 = _world.GetSynonymObject("MY");
            var temp_6 = MY_5.GetFloat("SKILL4");
            if (temp_6 > 7f)
            {
                yield break;
            }
            var REPT1TEX_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"REPT1TEX");
            var MY_9 = _world.GetSynonymObject("MY");
            MY_9.SetAcknexObject("TEXTURE", REPT1TEX_7);
            var MY_12 = _world.GetSynonymObject("MY");
            MY_12.SetFloat("SPEED", 0.9f);
            var ESCAPEWAY_13 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Way,*/"ESCAPEWAY");
            var MY_15 = _world.GetSynonymObject("MY");
            MY_15.SetAcknexObject("TARGET", ESCAPEWAY_13);
            var MY_18 = _world.GetSynonymObject("MY");
            MY_18.SetFloat("CAREFULLY", 0f);
            var MY_21 = _world.GetSynonymObject("MY");
            MY_21.SetAcknexObject("IF_NEAR", null);
            var MY_24 = _world.GetSynonymObject("MY");
            MY_24.SetAcknexObject("IF_FAR", null);
            var LOCATEREPT_25 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOCATEREPT");
            var MY_27 = _world.GetSynonymObject("MY");
            MY_27.SetAcknexObject("EACH_CYCLE", LOCATEREPT_25);
            var MY_30 = _world.GetSynonymObject("MY");
            MY_30.SetAcknexObject("IF_HIT", null);
            var MY_33 = _world.GetSynonymObject("MY");
            MY_33.SetAcknexObject("IF_ARRIVED", null);
            _world.PlaySound("REPT02SND", 0.5f, "MY");
            yield break;
        }
        public IEnumerator REPTFOLLOWATTACK()
        {
            var REPTJUMP_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTJUMP");
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("IF_NEAR", REPTJUMP_0);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_FAR", null);
            var CYCLEREPTSHOOT_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CYCLEREPTSHOOT");
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("EACH_CYCLE", CYCLEREPTSHOOT_6);
            var REPTHIT_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTHIT");
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("IF_HIT", REPTHIT_9);
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetFloat("SKILL4", 2f);
            var REPT1TEX_15 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"REPT1TEX");
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetAcknexObject("TEXTURE", REPT1TEX_15);
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetFloat("SPEED", 0.4f);
            var FOLLOW_21 = _world.AcknexObject.GetAcknexObject("FOLLOW");
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetAcknexObject("TARGET", FOLLOW_21);
            yield break;
        }
        public IEnumerator REPTHEAR()
        {
            var REPTJUMP_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTJUMP");
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("IF_NEAR", REPTJUMP_0);
            var REPTFOLLOWATTACK_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTFOLLOWATTACK");
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_FAR", REPTFOLLOWATTACK_3);
            var REPTDOWN_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTDOWN");
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("EACH_CYCLE", REPTDOWN_6);
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetFloat("SKILL4", 0f);
            var REPT0TEX_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"REPT0TEX");
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetAcknexObject("TEXTURE", REPT0TEX_12);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("SPEED", 0f);
            var FOLLOW_18 = _world.AcknexObject.GetAcknexObject("FOLLOW");
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetAcknexObject("TARGET", FOLLOW_18);
            yield break;
        }
        public IEnumerator REPTHIDE()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetFloat("CAREFULLY", 1f);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("EACH_TICK", null);
            var REPTESCAPE_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTESCAPE");
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("IF_NEAR", REPTESCAPE_6);
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("IF_FAR", null);
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetAcknexObject("EACH_CYCLE", null);
            var REPTHIT_15 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTHIT");
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetAcknexObject("IF_HIT", REPTHIT_15);
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetFloat("SKILL4", 4f);
            {
                var enumerator = REPELANGLE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_22 = _world.GetSynonymObject("MY");
            var MY_24 = _world.GetSynonymObject("MY");
            var temp_25 = MY_24.GetFloat("ANGLE");
            var MY_27 = _world.GetSynonymObject("MY");
            var temp_28 = MY_27.GetFloat("ANGLE");
            MY_22.SetFloat("ANGLE", temp_28 + (UnityEngine.Random.value - 0.5f) * 2.4f);
            var REPT1TEX_37 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"REPT1TEX");
            var MY_39 = _world.GetSynonymObject("MY");
            MY_39.SetAcknexObject("TEXTURE", REPT1TEX_37);
            var MY_42 = _world.GetSynonymObject("MY");
            MY_42.SetFloat("DIST", 20f);
            var MY_45 = _world.GetSynonymObject("MY");
            MY_45.SetFloat("SPEED", 0.5f);
            var BULLET_46 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_48 = _world.GetSynonymObject("MY");
            MY_48.SetAcknexObject("TARGET", BULLET_46);
            yield return new WaitForTicks(384f);
            var MY_52 = _world.GetSynonymObject("MY");
            var temp_53 = MY_52.GetFloat("SKILL1");
            if (temp_53 > 5f)
            {
                yield break;
            }
            var MY_56 = _world.GetSynonymObject("MY");
            var temp_57 = MY_56.GetFloat("SKILL1");
            var MY_59 = _world.GetSynonymObject("MY");
            MY_59.SetFloat("SKILL1", temp_57 + -2f);
            {
                var enumerator = REPTWANDER();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator REPTHIT()
        {
            var SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat("VAL");
            if (SHOOT_FAC_1_val == 0f)
            {
                goto OBSTACLE;
            }
            var MY_2 = _world.GetSynonymObject("MY");
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
            HIT:
            var EXPLOSION_ON_7 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            var EXPLOSION_ON_7_val = EXPLOSION_ON_7.GetFloat("VAL");
            if (EXPLOSION_ON_7_val != 2f)
            {
                goto CONT;
            }
            var MY_10 = _world.GetSynonymObject("MY");
            var temp_11 = MY_10.GetFloat("VISIBLE");
            if (temp_11 == 1f)
            {
                {
                    var enumerator = REPTIMPLODE();
                    while (enumerator.MoveNext())
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
            var SHOOT_FAC_12 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_12_val = SHOOT_FAC_12.GetFloat("VAL");
            var MY_14 = _world.GetSynonymObject("MY");
            var temp_15 = MY_14.GetFloat("SKILL1");
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("SKILL1", temp_15 + SHOOT_FAC_12_val);
            var MY_20 = _world.GetSynonymObject("MY");
            var temp_21 = MY_20.GetFloat("SKILL1");
            if (temp_21 > 5f)
            {
                goto DIE;
            }
            if (UnityEngine.Random.value < 0.05f)
            {
                goto DIE;
            }
            var MY_25 = _world.GetSynonymObject("MY");
            var temp_26 = MY_25?.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("REPT_TEX", temp_26);
            var REPT5TEX_28 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"REPT5TEX");
            var MY_30 = _world.GetSynonymObject("MY");
            MY_30.SetAcknexObject("TEXTURE", REPT5TEX_28);
            var MY_33 = _world.GetSynonymObject("MY");
            MY_33.SetAcknexObject("IF_NEAR", null);
            var MY_36 = _world.GetSynonymObject("MY");
            MY_36.SetAcknexObject("IF_FAR", null);
            var MY_39 = _world.GetSynonymObject("MY");
            MY_39.SetAcknexObject("IF_HIT", null);
            yield return new WaitForTicks(6f);
            var REPTHIT_41 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTHIT");
            var MY_43 = _world.GetSynonymObject("MY");
            MY_43.SetAcknexObject("IF_HIT", REPTHIT_41);
            var REPT_TEX_44 = _world.GetSynonymObject("REPT_TEX");
            var MY_46 = _world.GetSynonymObject("MY");
            MY_46.SetAcknexObject("TEXTURE", REPT_TEX_44);
            _world.PlaySound("REPT02SND", 0.7f, "MY");
            {
                var enumerator = REPTHIDE();
                while (enumerator.MoveNext())
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
            var MY_50 = _world.GetSynonymObject("MY");
            MY_50.SetFloat("SKILL1", 10f);
            {
                var enumerator = REPTDIE();
                while (enumerator.MoveNext())
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
                var enumerator = REPTTALK();
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
                var enumerator = REPTTURN();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator REPTIMPLODE()
        {
            var DISTX_0 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_1 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_1_val = DISTX_1.GetFloat("VAL");
            var MY_4 = _world.GetSynonymObject("MY");
            var temp_5 = MY_4.GetFloat("X");
            var EXPLOSION_CENTER_8 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_9 = EXPLOSION_CENTER_8.GetFloat("X");
            var MY_14 = _world.GetSynonymObject("MY");
            var temp_15 = MY_14.GetFloat("X");
            var EXPLOSION_CENTER_18 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_19 = EXPLOSION_CENTER_18.GetFloat("X");
            var MY_24 = _world.GetSynonymObject("MY");
            var temp_25 = MY_24.GetFloat("Y");
            var EXPLOSION_CENTER_28 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_29 = EXPLOSION_CENTER_28.GetFloat("Y");
            var MY_34 = _world.GetSynonymObject("MY");
            var temp_35 = MY_34.GetFloat("Y");
            var EXPLOSION_CENTER_38 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_39 = EXPLOSION_CENTER_38.GetFloat("Y");
            DISTX_0.SetFloat("VAL", (temp_5 - temp_9) * (temp_15 - temp_19) + (temp_25 - temp_29) * (temp_35 - temp_39));
            var DISTX_41 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_41_val = DISTX_41.GetFloat("VAL");
            var DISTX_42 = _world.GetObject(ObjectType.Skill, "DISTX");
            DISTX_42.SetFloat("VAL", Mathf.Sqrt(DISTX_41_val));
            var DISTZ_43 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_44 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_44_val = DISTZ_44.GetFloat("VAL");
            var MY_46 = _world.GetSynonymObject("MY");
            var temp_47 = MY_46.GetFloat("HEIGHT");
            var EXPLOSION_CENTER_50 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_51 = EXPLOSION_CENTER_50.GetFloat("HEIGHT");
            DISTZ_43.SetFloat("VAL", temp_47 - temp_51);
            var DISTX_53 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_53_val = DISTX_53.GetFloat("VAL");
            if (DISTX_53_val > 10f)
            {
                {
                    var enumerator = BEAMREACT();
                    while (enumerator.MoveNext())
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
            var MY_56 = _world.GetSynonymObject("MY");
            MY_56.SetFloat("PASSABLE", 1f);
            var MY_59 = _world.GetSynonymObject("MY");
            MY_59.SetFloat("CAREFULLY", 0f);
            var MY_62 = _world.GetSynonymObject("MY");
            MY_62.SetAcknexObject("IF_NEAR", null);
            var MY_65 = _world.GetSynonymObject("MY");
            MY_65.SetAcknexObject("IF_FAR", null);
            var MY_68 = _world.GetSynonymObject("MY");
            MY_68.SetAcknexObject("IF_HIT", null);
            var VANISHFORGOOD_69 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"VANISHFORGOOD");
            var MY_71 = _world.GetSynonymObject("MY");
            MY_71.SetAcknexObject("EACH_CYCLE", VANISHFORGOOD_69);
            var MY_74 = _world.GetSynonymObject("MY");
            MY_74.SetFloat("SKILL4", 9f);
            var REPT0ATEX_75 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"REPT0ATEX");
            var MY_77 = _world.GetSynonymObject("MY");
            MY_77.SetAcknexObject("TEXTURE", REPT0ATEX_75);
            var MY_80 = _world.GetSynonymObject("MY");
            MY_80.SetFloat("SPEED", 0f);
            var MY_83 = _world.GetSynonymObject("MY");
            MY_83.SetAcknexObject("TARGET", null);
            yield break;
        }
        public IEnumerator REPTJUMP()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("FLAG2");
            if (temp_3 == 1f)
            {
                goto BLOODSMELL;
            }
            {
                var enumerator = LOOKPLAYER();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_6 = _world.GetSynonymObject("MY");
            var temp_7 = MY_6.GetFloat("FLAG1");
            if (temp_7 == 0f)
            {
                yield break;
            }
            BLOODSMELL:
            {
                var enumerator = REPTTALK();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator REPTLISTEN()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("IF_NEAR", null);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_FAR", null);
            var CYCLEREPTATTACK_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CYCLEREPTATTACK");
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("EACH_CYCLE", CYCLEREPTATTACK_6);
            var REPTHIT_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTHIT");
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("IF_HIT", REPTHIT_9);
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetFloat("SKILL4", 0f);
            var REPT0TEX_15 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"REPT0TEX");
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetAcknexObject("TEXTURE", REPT0TEX_15);
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetFloat("SPEED", 0f);
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetAcknexObject("TARGET", null);
            yield return new WaitForTicks(120f);
            var MY_27 = _world.GetSynonymObject("MY");
            var temp_28 = MY_27.GetFloat("SKILL1");
            if (temp_28 < 9f)
            {
                {
                    var enumerator = REPTWANDER();
                    while (enumerator.MoveNext())
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
        }
        public IEnumerator REPTLOOKFOR()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("SKILL4");
            if (temp_3 == 0f)
            {
                yield break;
            }
            var MY_6 = _world.GetSynonymObject("MY");
            var temp_7 = MY_6.GetFloat("SKILL4");
            if (temp_7 == 4f)
            {
                yield break;
            }
            var MY_10 = _world.GetSynonymObject("MY");
            var temp_11 = MY_10.GetFloat("DISTANCE");
            if (temp_11 > 100f)
            {
                yield break;
            }
            var MY_14 = _world.GetSynonymObject("MY");
            var temp_15 = MY_14.GetFloat("SKILL4");
            if (temp_15 == 10f)
            {
                yield break;
            }
            var FOLLOW_16 = _world.AcknexObject.GetAcknexObject("FOLLOW");
            var MY_18 = _world.GetSynonymObject("MY");
            var temp_19 = MY_18?.GetAcknexObject("TARGET");
            if (temp_19 == FOLLOW_16)
            {
                yield break;
            }
            var MY_22 = _world.GetSynonymObject("MY");
            var temp_23 = MY_22.GetFloat("SKILL1");
            if (temp_23 > 5f)
            {
                yield break;
            }
            var REPTJUMP_24 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTJUMP");
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetAcknexObject("IF_NEAR", REPTJUMP_24);
            var REPTFOLLOWATTACK_27 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTFOLLOWATTACK");
            var MY_29 = _world.GetSynonymObject("MY");
            MY_29.SetAcknexObject("IF_FAR", REPTFOLLOWATTACK_27);
            var REPTHEAR_30 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTHEAR");
            var MY_32 = _world.GetSynonymObject("MY");
            MY_32.SetAcknexObject("EACH_CYCLE", REPTHEAR_30);
            var REPTHIT_33 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTHIT");
            var MY_35 = _world.GetSynonymObject("MY");
            MY_35.SetAcknexObject("IF_HIT", REPTHIT_33);
            var MY_38 = _world.GetSynonymObject("MY");
            MY_38.SetFloat("SKILL4", 0f);
            var REPTADNTEX_39 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"REPTADNTEX");
            var MY_41 = _world.GetSynonymObject("MY");
            MY_41.SetAcknexObject("TEXTURE", REPTADNTEX_39);
            var MY_44 = _world.GetSynonymObject("MY");
            MY_44.SetFloat("SPEED", 0f);
            var BULLET_45 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_47 = _world.GetSynonymObject("MY");
            MY_47.SetAcknexObject("TARGET", BULLET_45);
            yield break;
        }
        public IEnumerator REPTSEARCH()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("EACH_TICK", null);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_NEAR", null);
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("IF_FAR", null);
            var REPTHIT_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTHIT");
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("IF_HIT", REPTHIT_9);
            {
                var enumerator = LOOKPLAYER();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_14 = _world.GetSynonymObject("MY");
            var temp_15 = MY_14.GetFloat("FLAG1");
            if (temp_15 == 0f)
            {
                {
                    var enumerator = REPTWAIT();
                    while (enumerator.MoveNext())
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
                var enumerator = REPTFOLLOWATTACK();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator REPTSHOOT()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("IF_NEAR", null);
            var REPTFOLLOWATTACK_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTFOLLOWATTACK");
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_FAR", REPTFOLLOWATTACK_3);
            var REPTHIDE_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTHIDE");
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("EACH_CYCLE", REPTHIDE_6);
            var REPTHIT_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTHIT");
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("IF_HIT", REPTHIT_9);
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetFloat("SKILL4", 3f);
            var REPT0TEX_15 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"REPT0TEX");
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetAcknexObject("TEXTURE", REPT0TEX_15);
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetFloat("SPEED", 0f);
            var FOLLOW_21 = _world.AcknexObject.GetAcknexObject("FOLLOW");
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetAcknexObject("TARGET", FOLLOW_21);
            yield break;
        }
        public IEnumerator REPTTALK()
        {
            if (UnityEngine.Random.value > 0.9f)
            {
                _world.PlaySound("REPT01SND", 0.5f, "MY");
            }
            if (UnityEngine.Random.value < 0.1f)
            {
                _world.PlaySound("REPT02SND", 0.5f, "MY");
            }
            yield break;
        }
        public IEnumerator REPTTURN()
        {
            var WAITTIME_0 = _world.GetObject(ObjectType.Skill, "WAITTIME");
            var WAITTIME_1 = _world.GetObject(ObjectType.Skill, "WAITTIME");
            var WAITTIME_1_val = WAITTIME_1.GetFloat("VAL");
            WAITTIME_0.SetFloat("VAL", 64f * UnityEngine.Random.value + 16f);
            if (UnityEngine.Random.value < 0.07f)
            {
                {
                    var enumerator = REPTLISTEN();
                    while (enumerator.MoveNext())
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
                var RIGHTTURNREPT_11 = _world.GetObject(ObjectType.Skill, "RIGHTTURNREPT");
                var RIGHTTURNREPT_12 = _world.GetObject(ObjectType.Skill, "RIGHTTURNREPT");
                var RIGHTTURNREPT_12_val = RIGHTTURNREPT_12.GetFloat("VAL");
                var RIGHTTURNREPT_14 = _world.GetObject(ObjectType.Skill, "RIGHTTURNREPT");
                var RIGHTTURNREPT_14_val = RIGHTTURNREPT_14.GetFloat("VAL");
                var RIGHTTURNREPT_20 = _world.GetObject(ObjectType.Skill, "RIGHTTURNREPT");
                var RIGHTTURNREPT_20_val = RIGHTTURNREPT_20.GetFloat("VAL");
                RIGHTTURNREPT_11.SetFloat("VAL", (RIGHTTURNREPT_14_val - 1f) * (RIGHTTURNREPT_20_val - 1f));
            }
            var RIGHTTURNREPT_24 = _world.GetObject(ObjectType.Skill, "RIGHTTURNREPT");
            var RIGHTTURNREPT_24_val = RIGHTTURNREPT_24.GetFloat("VAL");
            if (RIGHTTURNREPT_24_val > RIGHTTURNREPT_24.GetFloat("MAX"))
            {
                {
                    var enumerator = TURNRIGHT();
                    while (enumerator.MoveNext())
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
                var enumerator = TURNLEFT();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator REPTWAIT()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("EACH_TICK", null);
            var REPTJUMP_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTJUMP");
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_NEAR", REPTJUMP_3);
            var REPTFOLLOWATTACK_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTFOLLOWATTACK");
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("IF_FAR", REPTFOLLOWATTACK_6);
            var CYCLEREPTATTACK_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CYCLEREPTATTACK");
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("EACH_CYCLE", CYCLEREPTATTACK_9);
            var REPTHIT_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTHIT");
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetAcknexObject("IF_HIT", REPTHIT_12);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("GROUND", 0f);
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetFloat("HEIGHT", -0.05f);
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetFloat("SKILL4", 0f);
            var REPT0TEX_24 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"REPT0TEX");
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetAcknexObject("TEXTURE", REPT0TEX_24);
            var MY_29 = _world.GetSynonymObject("MY");
            MY_29.SetFloat("SPEED", 0f);
            var MY_32 = _world.GetSynonymObject("MY");
            MY_32.SetAcknexObject("TARGET", null);
            yield break;
        }
        public IEnumerator REPTWANDER()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("EACH_TICK", null);
            var REPTJUMP_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTJUMP");
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_NEAR", REPTJUMP_3);
            var REPTFOLLOWATTACK_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTFOLLOWATTACK");
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("IF_FAR", REPTFOLLOWATTACK_6);
            var CYCLEREPTATTACK_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CYCLEREPTATTACK");
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("EACH_CYCLE", CYCLEREPTATTACK_9);
            var REPTHIT_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"REPTHIT");
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetAcknexObject("IF_HIT", REPTHIT_12);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("SKILL4", 1f);
            var REPT1TEX_18 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"REPT1TEX");
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetAcknexObject("TEXTURE", REPT1TEX_18);
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetFloat("SPEED", 0.3f);
            var BULLET_24 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetAcknexObject("TARGET", BULLET_24);
            yield break;
        }
        public IEnumerator RESET_BLUE()
        {
            //Unknown keyword: FADE_PAL
            yield break;
        }
        public IEnumerator RESETANSWER()
        {
            _world.PlaySound("BIP02SND", 0.5f);
            _world.AcknexObject.SetAcknexObject("IF_TAST", null);
            _world.AcknexObject.SetAcknexObject("IF_S", null);
            {
                var enumerator = HIDEMENU();
                while (enumerator.MoveNext())
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
        public IEnumerator RESETWARN()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetFloat("DIST", 5f);
            yield break;
        }
        public IEnumerator SAVEERRORMESSAGE()
        {
            yield return new WaitForTicks(2f);
            yield break;
        }
        public IEnumerator SELECTGRANADE()
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
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
            yield return new WaitForCycles(4f);
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
                var enumerator = TARGETOFF();
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
                var enumerator = SHOWAMMO();
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
                var enumerator = LOWER();
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
            yield return new WaitForTicks(2f);
            var MY_GUN_54 = _world.GetSynonymObject("MY_GUN");
            var temp_55 = MY_GUN_54.GetFloat("INVISIBLE");
            if (temp_55 < 1f)
            {
                goto WAITING;
            }
            CONT:
            var GRANACT_56 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"GRANACT");
            _world.SetSynonymObject("MY_GUN", GRANACT_56);
            var MY_GUN_60 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_60.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = RAISE();
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
            yield return new WaitForTicks(1f);
            var MY_GUN_64 = _world.GetSynonymObject("MY_GUN");
            var temp_65 = MY_GUN_64.GetFloat("INVISIBLE");
            if (temp_65 < 1f)
            {
                goto WAITING1;
            }
            var GRAN00OVL_66 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"GRAN00OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", GRAN00OVL_66);
            var THROW_69 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"THROW");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", THROW_69);
            var THROW_71 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"THROW");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", THROW_71);
            var GUN_ON_74 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_74.SetFloat("VAL", 1f);
            var RENDER_MODE_76 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_76.SetFloat("VAL", 1f);
            _world.PlaySound("MP_501SND", 0.5f);
            EXITGRANADE:
            var SELECTTRICORDER_78 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTTRICORDER");
            _world.AcknexObject.SetAcknexObject("IF_TAB", SELECTTRICORDER_78);
            var SELECTNONE_80 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_1", SELECTNONE_80);
            var SELECTNONE_82 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_F10", SELECTNONE_82);
            var SELECTMP5_84 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTMP5");
            _world.AcknexObject.SetAcknexObject("IF_2", SELECTMP5_84);
            var SELECTMP5BURST_86 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTMP5BURST");
            _world.AcknexObject.SetAcknexObject("IF_3", SELECTMP5BURST_86);
            var SELECTGRANADE_88 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTGRANADE");
            _world.AcknexObject.SetAcknexObject("IF_4", SELECTGRANADE_88);
            var SELECTSTINGER_90 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTSTINGER");
            _world.AcknexObject.SetAcknexObject("IF_5", SELECTSTINGER_90);
            var SELECTQUANTUM_92 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTQUANTUM");
            _world.AcknexObject.SetAcknexObject("IF_6", SELECTQUANTUM_92);
            yield break;
        }
        public IEnumerator SELECTMP5()
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
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
            yield return new WaitForCycles(4f);
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
                var enumerator = TARGETON();
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
                var enumerator = SHOWAMMO();
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
                var enumerator = LOWER();
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
            yield return new WaitForTicks(8f);
            var MY_GUN_48 = _world.GetSynonymObject("MY_GUN");
            var temp_49 = MY_GUN_48.GetFloat("INVISIBLE");
            if (temp_49 < 1f)
            {
                goto WAITING;
            }
            CONT:
            var MP5ACT_50 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"MP5ACT");
            _world.SetSynonymObject("MY_GUN", MP5ACT_50);
            var MY_GUN_54 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_54.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = RAISE();
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
            yield return new WaitForTicks(1f);
            var MY_GUN_58 = _world.GetSynonymObject("MY_GUN");
            var temp_59 = MY_GUN_58.GetFloat("INVISIBLE");
            if (temp_59 < 1f)
            {
                goto WAITING1;
            }
            var MP5_01OVL_60 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"MP5_01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_01OVL_60);
            var RENDER_MODE_64 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_64.SetFloat("VAL", 1f);
            var FIRE_65 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"FIRE");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", FIRE_65);
            var FIRE_67 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"FIRE");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", FIRE_67);
            var GUN_ON_70 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_70.SetFloat("VAL", 1f);
            _world.PlaySound("MP_501SND", 0.5f);
            var SELECTTRICORDER_72 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTTRICORDER");
            _world.AcknexObject.SetAcknexObject("IF_TAB", SELECTTRICORDER_72);
            var SELECTNONE_74 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_1", SELECTNONE_74);
            var SELECTNONE_76 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_F10", SELECTNONE_76);
            var SELECTMP5_78 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTMP5");
            _world.AcknexObject.SetAcknexObject("IF_2", SELECTMP5_78);
            var SELECTMP5BURST_80 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTMP5BURST");
            _world.AcknexObject.SetAcknexObject("IF_3", SELECTMP5BURST_80);
            var SELECTGRANADE_82 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTGRANADE");
            _world.AcknexObject.SetAcknexObject("IF_4", SELECTGRANADE_82);
            var SELECTSTINGER_84 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTSTINGER");
            _world.AcknexObject.SetAcknexObject("IF_5", SELECTSTINGER_84);
            var SELECTQUANTUM_86 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTQUANTUM");
            _world.AcknexObject.SetAcknexObject("IF_6", SELECTQUANTUM_86);
            yield break;
        }
        public IEnumerator SELECTMP5BURST()
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
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
            yield return new WaitForCycles(4f);
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
                var enumerator = TARGETON();
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
                var enumerator = SHOWAMMO();
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
                var enumerator = LOWER();
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
            yield return new WaitForTicks(8f);
            var MY_GUN_52 = _world.GetSynonymObject("MY_GUN");
            var temp_53 = MY_GUN_52.GetFloat("INVISIBLE");
            if (temp_53 < 1f)
            {
                goto WAITING;
            }
            CONT:
            var MP5ACT_54 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"MP5ACT");
            _world.SetSynonymObject("MY_GUN", MP5ACT_54);
            var MY_GUN_58 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_58.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = RAISE();
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
            yield return new WaitForTicks(1f);
            var MY_GUN_62 = _world.GetSynonymObject("MY_GUN");
            var temp_63 = MY_GUN_62.GetFloat("INVISIBLE");
            if (temp_63 < 1f)
            {
                goto WAITING1;
            }
            var MP5_01OVL_64 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"MP5_01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", MP5_01OVL_64);
            var BURST_67 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"BURST");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", BURST_67);
            var BURST_69 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"BURST");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", BURST_69);
            var GUN_ON_72 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_72.SetFloat("VAL", 1f);
            var RENDER_MODE_74 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_74.SetFloat("VAL", 1f);
            _world.PlaySound("MP_501SND", 0.5f);
            var SELECTTRICORDER_76 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTTRICORDER");
            _world.AcknexObject.SetAcknexObject("IF_TAB", SELECTTRICORDER_76);
            var SELECTNONE_78 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_1", SELECTNONE_78);
            var SELECTNONE_80 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_F10", SELECTNONE_80);
            var SELECTMP5_82 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTMP5");
            _world.AcknexObject.SetAcknexObject("IF_2", SELECTMP5_82);
            var SELECTMP5BURST_84 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTMP5BURST");
            _world.AcknexObject.SetAcknexObject("IF_3", SELECTMP5BURST_84);
            var SELECTGRANADE_86 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTGRANADE");
            _world.AcknexObject.SetAcknexObject("IF_4", SELECTGRANADE_86);
            var SELECTSTINGER_88 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTSTINGER");
            _world.AcknexObject.SetAcknexObject("IF_5", SELECTSTINGER_88);
            var SELECTQUANTUM_90 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTQUANTUM");
            _world.AcknexObject.SetAcknexObject("IF_6", SELECTQUANTUM_90);
            yield break;
        }
        public IEnumerator SELECTNONE()
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
            yield return new WaitForCycles(4f);
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
                var enumerator = TARGETOFF();
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
                var enumerator = SHOWAMMO();
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
            var PDATEXT_35 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PDATEXT");
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
                var enumerator = LOWER();
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
            yield return new WaitForTicks(16f);
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
            var SELECTTRICORDER_53 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTTRICORDER");
            _world.AcknexObject.SetAcknexObject("IF_TAB", SELECTTRICORDER_53);
            var SELECTNONE_55 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_1", SELECTNONE_55);
            var SELECTNONE_57 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_F10", SELECTNONE_57);
            var SELECTMP5_59 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTMP5");
            _world.AcknexObject.SetAcknexObject("IF_2", SELECTMP5_59);
            var SELECTMP5BURST_61 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTMP5BURST");
            _world.AcknexObject.SetAcknexObject("IF_3", SELECTMP5BURST_61);
            var SELECTGRANADE_63 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTGRANADE");
            _world.AcknexObject.SetAcknexObject("IF_4", SELECTGRANADE_63);
            var SELECTSTINGER_65 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTSTINGER");
            _world.AcknexObject.SetAcknexObject("IF_5", SELECTSTINGER_65);
            var SELECTQUANTUM_67 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTQUANTUM");
            _world.AcknexObject.SetAcknexObject("IF_6", SELECTQUANTUM_67);
            var GUN_ON_70 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_70.SetFloat("VAL", 0f);
            var PLAYER_RESULT_72 = _world.GetObject(ObjectType.Skill, "PLAYER_RESULT");
            PLAYER_RESULT_72.SetFloat("VAL", -1f);
            yield break;
        }
        public IEnumerator SELECTQUANTUM()
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
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
            yield return new WaitForCycles(4f);
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
                var enumerator = TARGETON();
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
                var enumerator = SHOWAMMO();
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
                var enumerator = LOWER();
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
            yield return new WaitForTicks(2f);
            var MY_GUN_54 = _world.GetSynonymObject("MY_GUN");
            var temp_55 = MY_GUN_54.GetFloat("INVISIBLE");
            if (temp_55 < 1f)
            {
                goto WAITING;
            }
            CONT:
            var QGUNACT_56 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"QGUNACT");
            _world.SetSynonymObject("MY_GUN", QGUNACT_56);
            var MY_GUN_60 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_60.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = RAISE();
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
            yield return new WaitForTicks(1f);
            var MY_GUN_64 = _world.GetSynonymObject("MY_GUN");
            var temp_65 = MY_GUN_64.GetFloat("INVISIBLE");
            if (temp_65 < 1f)
            {
                goto WAITING1;
            }
            var QGUN00OVL_66 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"QGUN00OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", QGUN00OVL_66);
            var BEAM_69 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"BEAM");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", BEAM_69);
            var BEAM_71 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"BEAM");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", BEAM_71);
            var GUN_ON_74 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_74.SetFloat("VAL", 1f);
            var RENDER_MODE_76 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_76.SetFloat("VAL", 1f);
            _world.PlaySound("QGUN01SND", 0.4f);
            var SELECTTRICORDER_78 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTTRICORDER");
            _world.AcknexObject.SetAcknexObject("IF_TAB", SELECTTRICORDER_78);
            var SELECTNONE_80 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_1", SELECTNONE_80);
            var SELECTNONE_82 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_F10", SELECTNONE_82);
            var SELECTMP5_84 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTMP5");
            _world.AcknexObject.SetAcknexObject("IF_2", SELECTMP5_84);
            var SELECTMP5BURST_86 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTMP5BURST");
            _world.AcknexObject.SetAcknexObject("IF_3", SELECTMP5BURST_86);
            var SELECTGRANADE_88 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTGRANADE");
            _world.AcknexObject.SetAcknexObject("IF_4", SELECTGRANADE_88);
            var SELECTSTINGER_90 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTSTINGER");
            _world.AcknexObject.SetAcknexObject("IF_5", SELECTSTINGER_90);
            var SELECTQUANTUM_92 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTQUANTUM");
            _world.AcknexObject.SetAcknexObject("IF_6", SELECTQUANTUM_92);
            yield break;
        }
        public IEnumerator SELECTSTINGER()
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
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
            yield return new WaitForCycles(4f);
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
                var enumerator = TARGETON();
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
                var enumerator = SHOWAMMO();
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
                var enumerator = LOWER();
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
            yield return new WaitForTicks(2f);
            var MY_GUN_54 = _world.GetSynonymObject("MY_GUN");
            var temp_55 = MY_GUN_54.GetFloat("INVISIBLE");
            if (temp_55 < 1f)
            {
                goto WAITING;
            }
            CONT:
            var STNGACT_56 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"STNGACT");
            _world.SetSynonymObject("MY_GUN", STNGACT_56);
            var MY_GUN_60 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_60.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = RAISE();
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
            yield return new WaitForTicks(1f);
            var MY_GUN_64 = _world.GetSynonymObject("MY_GUN");
            var temp_65 = MY_GUN_64.GetFloat("INVISIBLE");
            if (temp_65 < 1f)
            {
                goto WAITING1;
            }
            var STNG00OVL_66 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"STNG00OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", STNG00OVL_66);
            var LAUNCH_69 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LAUNCH");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", LAUNCH_69);
            var LAUNCH_71 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LAUNCH");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", LAUNCH_71);
            var GUN_ON_74 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_74.SetFloat("VAL", 1f);
            var RENDER_MODE_76 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_76.SetFloat("VAL", 1f);
            _world.PlaySound("STNG01SND", 0.5f);
            var SELECTTRICORDER_78 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTTRICORDER");
            _world.AcknexObject.SetAcknexObject("IF_TAB", SELECTTRICORDER_78);
            var SELECTNONE_80 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_1", SELECTNONE_80);
            var SELECTNONE_82 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_F10", SELECTNONE_82);
            var SELECTMP5_84 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTMP5");
            _world.AcknexObject.SetAcknexObject("IF_2", SELECTMP5_84);
            var SELECTMP5BURST_86 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTMP5BURST");
            _world.AcknexObject.SetAcknexObject("IF_3", SELECTMP5BURST_86);
            var SELECTGRANADE_88 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTGRANADE");
            _world.AcknexObject.SetAcknexObject("IF_4", SELECTGRANADE_88);
            var SELECTSTINGER_90 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTSTINGER");
            _world.AcknexObject.SetAcknexObject("IF_5", SELECTSTINGER_90);
            var SELECTQUANTUM_92 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTQUANTUM");
            _world.AcknexObject.SetAcknexObject("IF_6", SELECTQUANTUM_92);
            yield break;
        }
        public IEnumerator SELECTTRICORDER()
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
                    var enumerator = SELECTNONE();
                    while (enumerator.MoveNext())
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
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
            yield return new WaitForCycles(4f);
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
                var enumerator = TARGETOFF();
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
                var enumerator = SHOWAMMO();
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
                var enumerator = LOWER();
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
            yield return new WaitForTicks(8f);
            var MY_GUN_56 = _world.GetSynonymObject("MY_GUN");
            var temp_57 = MY_GUN_56.GetFloat("INVISIBLE");
            if (temp_57 < 1f)
            {
                goto WAITING;
            }
            CONT:
            var TRICACT_58 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"TRICACT");
            _world.SetSynonymObject("MY_GUN", TRICACT_58);
            var MY_GUN_62 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_62.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = RAISE();
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
            yield return new WaitForTicks(1f);
            var MY_GUN_66 = _world.GetSynonymObject("MY_GUN");
            var temp_67 = MY_GUN_66.GetFloat("INVISIBLE");
            if (temp_67 < 1f)
            {
                goto WAITING1;
            }
            _world.PlaySound("TRIC01SND", 0.5f);
            var MAP_LAYER_70 = _world.GetObject(ObjectType.Skill, "MAP_LAYER");
            MAP_LAYER_70.SetFloat("VAL", 14f);
            var MAP_EDGE_X1_72 = _world.GetObject(ObjectType.Skill, "MAP_EDGE_X1");
            MAP_EDGE_X1_72.SetFloat("VAL", 77f);
            var MAP_EDGE_X2_74 = _world.GetObject(ObjectType.Skill, "MAP_EDGE_X2");
            MAP_EDGE_X2_74.SetFloat("VAL", 237f);
            var MAP_EDGE_Y1_76 = _world.GetObject(ObjectType.Skill, "MAP_EDGE_Y1");
            MAP_EDGE_Y1_76.SetFloat("VAL", 69f);
            var MAP_EDGE_Y2_78 = _world.GetObject(ObjectType.Skill, "MAP_EDGE_Y2");
            MAP_EDGE_Y2_78.SetFloat("VAL", 251f);
            var RENDER_MODE_80 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_80.SetFloat("VAL", 1f);
            var MAP_MODE_82 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            MAP_MODE_82.SetFloat("VAL", 0.5f);
            var TRIC01OVL_83 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"TRIC01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", TRIC01OVL_83);
            var SELECTTRICORDER_86 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTTRICORDER");
            _world.AcknexObject.SetAcknexObject("IF_TAB", SELECTTRICORDER_86);
            var SELECTNONE_88 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_1", SELECTNONE_88);
            var SELECTNONE_90 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTNONE");
            _world.AcknexObject.SetAcknexObject("IF_F10", SELECTNONE_90);
            var SELECTMP5_92 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTMP5");
            _world.AcknexObject.SetAcknexObject("IF_2", SELECTMP5_92);
            var SELECTMP5BURST_94 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTMP5BURST");
            _world.AcknexObject.SetAcknexObject("IF_3", SELECTMP5BURST_94);
            var SELECTGRANADE_96 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTGRANADE");
            _world.AcknexObject.SetAcknexObject("IF_4", SELECTGRANADE_96);
            var SELECTSTINGER_98 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTSTINGER");
            _world.AcknexObject.SetAcknexObject("IF_5", SELECTSTINGER_98);
            var SELECTQUANTUM_100 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SELECTQUANTUM");
            _world.AcknexObject.SetAcknexObject("IF_6", SELECTQUANTUM_100);
            var GUN_ON_103 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_103.SetFloat("VAL", 1f);
            yield break;
        }
        public IEnumerator SET_BLUE()
        {
            //Unknown keyword: FADE_PAL
            yield break;
        }
        public IEnumerator SET_DEATH()
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
            var MOVE_ME_16 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MOVE_ME");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.16", MOVE_ME_16);
            yield break;
        }
        public IEnumerator SET_DIVING()
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
            var MOVE_ME_16 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MOVE_ME");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.16", MOVE_ME_16);
            yield break;
        }
        public IEnumerator SET_MOVING()
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
                    var enumerator = SET_WALKING();
                    while (enumerator.MoveNext())
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
                    var enumerator = SET_SWIMMING();
                    while (enumerator.MoveNext())
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
                    var enumerator = SET_DIVING();
                    while (enumerator.MoveNext())
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
        }
        public IEnumerator SET_SWIMMING()
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
            var MOVE_ME_16 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MOVE_ME");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.16", MOVE_ME_16);
            yield break;
        }
        public IEnumerator SET_WALKING()
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
            var MOVE_ME_16 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MOVE_ME");
            _world.AcknexObject.SetAcknexObject("EACH_TICK.16", MOVE_ME_16);
            yield break;
        }
        public IEnumerator SETCKEY()
        {
            var SETGKEY_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SETGKEY");
            _world.AcknexObject.SetAcknexObject("IF_C", SETGKEY_0);
            var GODCOUNTER_3 = _world.GetObject(ObjectType.Skill, "GODCOUNTER");
            GODCOUNTER_3.SetFloat("VAL", 3f);
            yield break;
        }
        public IEnumerator SETDKEY()
        {
            _world.AcknexObject.SetAcknexObject("IF_O", null);
            var TOGGLEGODMODE_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TOGGLEGODMODE");
            _world.AcknexObject.SetAcknexObject("IF_D", TOGGLEGODMODE_2);
            var GODCOUNTER_5 = _world.GetObject(ObjectType.Skill, "GODCOUNTER");
            GODCOUNTER_5.SetFloat("VAL", 3f);
            yield break;
        }
        public IEnumerator SETGKEY()
        {
            _world.AcknexObject.SetAcknexObject("IF_C", null);
            var SETOKEY_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SETOKEY");
            _world.AcknexObject.SetAcknexObject("IF_G", SETOKEY_2);
            var GODCOUNTER_5 = _world.GetObject(ObjectType.Skill, "GODCOUNTER");
            GODCOUNTER_5.SetFloat("VAL", 3f);
            yield break;
        }
        public IEnumerator SETOKEY()
        {
            _world.AcknexObject.SetAcknexObject("IF_G", null);
            var SETDKEY_2 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SETDKEY");
            _world.AcknexObject.SetAcknexObject("IF_O", SETDKEY_2);
            var GODCOUNTER_5 = _world.GetObject(ObjectType.Skill, "GODCOUNTER");
            GODCOUNTER_5.SetFloat("VAL", 3f);
            yield break;
        }
        public IEnumerator SETSOUNDVOL()
        {
            var SOUND_VOL_BUFFER_0 = _world.GetObject(ObjectType.Skill, "SOUND_VOL_BUFFER");
            var SOUND_VOL_BUFFER_0_val = SOUND_VOL_BUFFER_0.GetFloat("VAL");
            var SOUND_VOL_1 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            SOUND_VOL_1.SetFloat("VAL", SOUND_VOL_BUFFER_0_val);
            var CDAUDIO_VOL_BUFFER_2 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL_BUFFER");
            var CDAUDIO_VOL_BUFFER_2_val = CDAUDIO_VOL_BUFFER_2.GetFloat("VAL");
            var CDAUDIO_VOL_3 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL");
            CDAUDIO_VOL_3.SetFloat("VAL", CDAUDIO_VOL_BUFFER_2_val);
            yield break;
        }
        public IEnumerator SHOWAMMO()
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
            yield break;
        }
        public IEnumerator SHOWLOADMENU()
        {
            var HIDEMENU_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"HIDEMENU");
            _world.AcknexObject.SetAcknexObject("IF_ESC", HIDEMENU_0);
            var MOVE_MODE_3 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_3.SetFloat("VAL", -0.5f);
            var MAXMENUITEM_5 = _world.GetObject(ObjectType.Skill, "MAXMENUITEM");
            MAXMENUITEM_5.SetFloat("VAL", 4f);
            var SUBMENUUP_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SUBMENUUP");
            _world.AcknexObject.SetAcknexObject("IF_CUU", SUBMENUUP_6);
            var SUBMENUDOWN_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SUBMENUDOWN");
            _world.AcknexObject.SetAcknexObject("IF_CUD", SUBMENUDOWN_8);
            var SUBMENUUP_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SUBMENUUP");
            _world.AcknexObject.SetAcknexObject("IF_CUR", SUBMENUUP_10);
            var SUBMENUDOWN_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SUBMENUDOWN");
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
            _world.PlaySound("BIP02SND", 0.5f);
            var LOADSAVETEXT_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"LOADSAVETEXT");
            LOADSAVETEXT_17.SetFloat("INDEX", 1f);
            var SAVEDGAME01_18 = _world.AcknexObject.GetAcknexObject("SAVEDGAME01");
            var LOADSAVETEXT_20 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"LOADSAVETEXT");
            LOADSAVETEXT_20.SetAcknexObject("STRING", SAVEDGAME01_18);
            var LOADSAVETEXT_23 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"LOADSAVETEXT");
            LOADSAVETEXT_23.SetFloat("INDEX", 2f);
            var SAVEDGAME02_24 = _world.AcknexObject.GetAcknexObject("SAVEDGAME02");
            var LOADSAVETEXT_26 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"LOADSAVETEXT");
            LOADSAVETEXT_26.SetAcknexObject("STRING", SAVEDGAME02_24);
            var LOADSAVETEXT_29 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"LOADSAVETEXT");
            LOADSAVETEXT_29.SetFloat("INDEX", 3f);
            var SAVEDGAME03_30 = _world.AcknexObject.GetAcknexObject("SAVEDGAME03");
            var LOADSAVETEXT_32 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"LOADSAVETEXT");
            LOADSAVETEXT_32.SetAcknexObject("STRING", SAVEDGAME03_30);
            var LOADSAVETEXT_35 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"LOADSAVETEXT");
            LOADSAVETEXT_35.SetFloat("INDEX", 4f);
            var SAVEDGAME04_36 = _world.AcknexObject.GetAcknexObject("SAVEDGAME04");
            var LOADSAVETEXT_38 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"LOADSAVETEXT");
            LOADSAVETEXT_38.SetAcknexObject("STRING", SAVEDGAME04_36);
            var CHOOSEGAME_39 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CHOOSEGAME");
            _world.AcknexObject.SetAcknexObject("IF_ENTER", CHOOSEGAME_39);
            var SUBMENUPANEL_41 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"SUBMENUPANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.16", SUBMENUPANEL_41);
            var LOADSAVETEXT_44 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"LOADSAVETEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", LOADSAVETEXT_44);
            var HLP01STR_47 = _world.AcknexObject.GetAcknexObject("HLP01STR");
            _world.SetSynonymObject("MESSAGE_TEXT", HLP01STR_47);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
        public IEnumerator SHOWMAINMENU()
        {
            WAITING:
            yield return new WaitForTicks(1f);
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
            //Unknown keyword: FADE_PAL
            _world.PlaySound("BIP03SND", 0.5f);
            var HIDEMENU_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"HIDEMENU");
            _world.AcknexObject.SetAcknexObject("IF_ESC", HIDEMENU_7);
            var MOVE_MODE_10 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_10.SetFloat("VAL", -0.5f);
            var MAXMENUITEM_12 = _world.GetObject(ObjectType.Skill, "MAXMENUITEM");
            MAXMENUITEM_12.SetFloat("VAL", 4f);
            var MENUUP_13 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MENUUP");
            _world.AcknexObject.SetAcknexObject("IF_CUU", MENUUP_13);
            var MENUDOWN_15 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MENUDOWN");
            _world.AcknexObject.SetAcknexObject("IF_CUD", MENUDOWN_15);
            var MENUUP_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MENUUP");
            _world.AcknexObject.SetAcknexObject("IF_CUR", MENUUP_17);
            var MENUDOWN_19 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MENUDOWN");
            _world.AcknexObject.SetAcknexObject("IF_CUL", MENUDOWN_19);
            {
                var enumerator = HIDEWEAPON();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var CHOOSESUBMENU_21 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CHOOSESUBMENU");
            _world.AcknexObject.SetAcknexObject("IF_ENTER", CHOOSESUBMENU_21);
            var MENUPANEL_23 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"MENUPANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.16", MENUPANEL_23);
            var MAINMENUTEXT_26 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MAINMENUTEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", MAINMENUTEXT_26);
            var HLP01STR_29 = _world.AcknexObject.GetAcknexObject("HLP01STR");
            _world.SetSynonymObject("MESSAGE_TEXT", HLP01STR_29);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
        public IEnumerator SHOWPDABRIEFING()
        {
            {
                var enumerator = SELECTNONE();
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
            yield return new WaitForTicks(2f);
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
                var enumerator = HIDEWEAPON();
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
                var enumerator = SHOWAMMO();
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
            yield return new WaitForTicks(4f);
            var TRICACT_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"TRICACT");
            _world.SetSynonymObject("MY_GUN", TRICACT_22);
            var MY_GUN_26 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_26.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = RAISE();
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
            yield return new WaitForTicks(2f);
            var MY_GUN_30 = _world.GetSynonymObject("MY_GUN");
            var temp_31 = MY_GUN_30.GetFloat("INVISIBLE");
            if (temp_31 < 1f)
            {
                goto WAITING2;
            }
            _world.PlaySound("TRIC01SND", 0.5f);
            var BRIEFING_TEXT_33 = _world.GetSynonymObject("BRIEFING_TEXT");
            var PDATEXT_35 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PDATEXT");
            PDATEXT_35.SetAcknexObject("STRING", BRIEFING_TEXT_33);
            var TRIC01OVL_36 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"TRIC01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", TRIC01OVL_36);
            var PDATEXT_41 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PDATEXT");
            PDATEXT_41.SetFloat("VISIBLE", 1f);
            var PDAMESSAGEOFF_42 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"PDAMESSAGEOFF");
            _world.AcknexObject.SetAcknexObject("IF_ESC", PDAMESSAGEOFF_42);
            var GUN_ON_45 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_45.SetFloat("VAL", 0f);
            var HLP03STR_46 = _world.AcknexObject.GetAcknexObject("HLP03STR");
            _world.SetSynonymObject("MESSAGE_TEXT", HLP03STR_46);
            //Unknown keyword: FADE_PAL
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var RENDER_MODE_49 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_49.SetFloat("VAL", 1f);
            yield return new WaitForTicks(1f);
            var MOVE_MODE_52 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_52.SetFloat("VAL", 0f);
            yield break;
        }
        public IEnumerator SHOWPDAGAMEOVER()
        {
            _world.PlaySound("ALARM03SND", 0.7f);
            {
                var enumerator = SELECTNONE();
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
            yield return new WaitForTicks(2f);
            var temp_4 = _world.AcknexObject?.GetAcknexObject("IF_2");
            if (temp_4 == null)
            {
                goto WAITING0;
            }
            var GUNFIRING_6 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            var GUNFIRING_6_val = GUNFIRING_6.GetFloat("VAL");
            if (GUNFIRING_6_val == 1f)
            {
                goto WAITING0;
            }
            {
                var enumerator = HIDEWEAPON();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var WEAPONSEL_8 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            WEAPONSEL_8.SetFloat("VAL", 1f);
            {
                var enumerator = SHOWAMMO();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MAP_MODE_10 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            MAP_MODE_10.SetFloat("VAL", 0f);
            _world.AcknexObject.SetAcknexObject("LAYERS.13", null);
            _world.AcknexObject.SetAcknexObject("IF_CTRL", null);
            _world.AcknexObject.SetAcknexObject("IF_LEFT", null);
            _world.AcknexObject.SetAcknexObject("IF_ESC", null);
            yield return new WaitForTicks(2f);
            var TRICACT_21 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"TRICACT");
            _world.SetSynonymObject("MY_GUN", TRICACT_21);
            var MY_GUN_25 = _world.GetSynonymObject("MY_GUN");
            MY_GUN_25.SetFloat("INVISIBLE", 0f);
            {
                var enumerator = RAISE();
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
            yield return new WaitForTicks(2f);
            var MY_GUN_29 = _world.GetSynonymObject("MY_GUN");
            var temp_30 = MY_GUN_29.GetFloat("INVISIBLE");
            if (temp_30 < 1f)
            {
                goto WAITING2;
            }
            _world.PlaySound("ALARM03SND", 0.7f);
            var GAMEOVER_TEXT_32 = _world.GetSynonymObject("GAMEOVER_TEXT");
            var PDATEXT_34 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PDATEXT");
            PDATEXT_34.SetAcknexObject("STRING", GAMEOVER_TEXT_32);
            _world.SetSynonymObject("LEVEL_STRING", null);
            var TRIC01OVL_37 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"TRIC01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", TRIC01OVL_37);
            var PDATEXT_42 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"PDATEXT");
            PDATEXT_42.SetFloat("VISIBLE", 1f);
            var PDAMESSAGEOFF_43 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"PDAMESSAGEOFF");
            _world.AcknexObject.SetAcknexObject("IF_ESC", PDAMESSAGEOFF_43);
            var GUN_ON_46 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_46.SetFloat("VAL", 0f);
            var HLP04STR_47 = _world.AcknexObject.GetAcknexObject("HLP04STR");
            _world.SetSynonymObject("MESSAGE_TEXT", HLP04STR_47);
            //Unknown keyword: FADE_PAL
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var RENDER_MODE_50 = _world.GetObject(ObjectType.Skill, "RENDER_MODE");
            RENDER_MODE_50.SetFloat("VAL", 1f);
            yield return new WaitForTicks(2f);
            var MOVE_MODE_53 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_53.SetFloat("VAL", 0f);
            yield break;
        }
        public IEnumerator SHOWSAVEMENU()
        {
            var HIDEMENU_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"HIDEMENU");
            _world.AcknexObject.SetAcknexObject("IF_ESC", HIDEMENU_0);
            var MOVE_MODE_3 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_3.SetFloat("VAL", -0.5f);
            var MAXMENUITEM_5 = _world.GetObject(ObjectType.Skill, "MAXMENUITEM");
            MAXMENUITEM_5.SetFloat("VAL", 4f);
            var SUBMENUUP_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SUBMENUUP");
            _world.AcknexObject.SetAcknexObject("IF_CUU", SUBMENUUP_6);
            var SUBMENUDOWN_8 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SUBMENUDOWN");
            _world.AcknexObject.SetAcknexObject("IF_CUD", SUBMENUDOWN_8);
            var SUBMENUUP_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SUBMENUUP");
            _world.AcknexObject.SetAcknexObject("IF_CUR", SUBMENUUP_10);
            var SUBMENUDOWN_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SUBMENUDOWN");
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
            _world.PlaySound("BIP02SND", 0.5f);
            var LOADSAVETEXT_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"LOADSAVETEXT");
            LOADSAVETEXT_17.SetFloat("INDEX", 1f);
            var SAVEDGAME01_18 = _world.AcknexObject.GetAcknexObject("SAVEDGAME01");
            var LOADSAVETEXT_20 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"LOADSAVETEXT");
            LOADSAVETEXT_20.SetAcknexObject("STRING", SAVEDGAME01_18);
            var LOADSAVETEXT_23 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"LOADSAVETEXT");
            LOADSAVETEXT_23.SetFloat("INDEX", 2f);
            var SAVEDGAME02_24 = _world.AcknexObject.GetAcknexObject("SAVEDGAME02");
            var LOADSAVETEXT_26 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"LOADSAVETEXT");
            LOADSAVETEXT_26.SetAcknexObject("STRING", SAVEDGAME02_24);
            var LOADSAVETEXT_29 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"LOADSAVETEXT");
            LOADSAVETEXT_29.SetFloat("INDEX", 3f);
            var SAVEDGAME03_30 = _world.AcknexObject.GetAcknexObject("SAVEDGAME03");
            var LOADSAVETEXT_32 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"LOADSAVETEXT");
            LOADSAVETEXT_32.SetAcknexObject("STRING", SAVEDGAME03_30);
            var LOADSAVETEXT_35 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"LOADSAVETEXT");
            LOADSAVETEXT_35.SetFloat("INDEX", 4f);
            var SAVEDGAME04_36 = _world.AcknexObject.GetAcknexObject("SAVEDGAME04");
            var LOADSAVETEXT_38 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"LOADSAVETEXT");
            LOADSAVETEXT_38.SetAcknexObject("STRING", SAVEDGAME04_36);
            var TYPEGAME_39 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TYPEGAME");
            _world.AcknexObject.SetAcknexObject("IF_ENTER", TYPEGAME_39);
            var SUBMENUPANEL_41 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"SUBMENUPANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.16", SUBMENUPANEL_41);
            var LOADSAVETEXT_44 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"LOADSAVETEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", LOADSAVETEXT_44);
            var HLP01STR_47 = _world.AcknexObject.GetAcknexObject("HLP01STR");
            _world.SetSynonymObject("MESSAGE_TEXT", HLP01STR_47);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
        public IEnumerator SHOWSOUNDVOLUMEMENU()
        {
            _world.PlaySound("BIP02SND", 0.5f);
            var HIDEMENU_1 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"HIDEMENU");
            _world.AcknexObject.SetAcknexObject("IF_ESC", HIDEMENU_1);
            var MOVE_MODE_4 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_4.SetFloat("VAL", -0.5f);
            var MAXMENUITEM_6 = _world.GetObject(ObjectType.Skill, "MAXMENUITEM");
            MAXMENUITEM_6.SetFloat("VAL", 3f);
            var SUBMENUUP_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SUBMENUUP");
            _world.AcknexObject.SetAcknexObject("IF_CUU", SUBMENUUP_7);
            var SUBMENUDOWN_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SUBMENUDOWN");
            _world.AcknexObject.SetAcknexObject("IF_CUD", SUBMENUDOWN_9);
            var VOLUMEUP_11 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"VOLUMEUP");
            _world.AcknexObject.SetAcknexObject("IF_CUR", VOLUMEUP_11);
            var VOLUMEDOWN_13 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"VOLUMEDOWN");
            _world.AcknexObject.SetAcknexObject("IF_CUL", VOLUMEDOWN_13);
            var HIDEMENU_15 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"HIDEMENU");
            _world.AcknexObject.SetAcknexObject("IF_ENTER", HIDEMENU_15);
            var SOUNDVOLUMEPANEL_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"SOUNDVOLUMEPANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.16", SOUNDVOLUMEPANEL_17);
            var SOUNDVOLUMETEXT_20 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SOUNDVOLUMETEXT");
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", SOUNDVOLUMETEXT_20);
            var HLP01STR_23 = _world.AcknexObject.GetAcknexObject("HLP01STR");
            _world.SetSynonymObject("MESSAGE_TEXT", HLP01STR_23);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
        public IEnumerator SHOWWEAPON()
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
            yield break;
        }
        public IEnumerator STARTASSAULT()
        {
            var ASSAULTSTARTED_1 = _world.GetObject(ObjectType.Skill, "ASSAULTSTARTED");
            var ASSAULTSTARTED_1_val = ASSAULTSTARTED_1.GetFloat("VAL");
            if (ASSAULTSTARTED_1_val > 0f)
            {
                yield break;
            }
            var ASSAULTSTARTED_3 = _world.GetObject(ObjectType.Skill, "ASSAULTSTARTED");
            ASSAULTSTARTED_3.SetFloat("VAL", 1f);
            {
                var enumerator = LAUNCHMISSILES();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield return new WaitForTicks(64f);
            var HUMM1ACT_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"HUMM1ACT");
            HUMM1ACT_7.SetFloat("INVISIBLE", 0f);
            var HUMM2ACT_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"HUMM2ACT");
            HUMM2ACT_10.SetFloat("INVISIBLE", 0f);
            //Unknown keyword: SET_ALL
            //Unknown keyword: SET_ALL
            yield break;
        }
        public IEnumerator STARTLEVEL()
        {
            var SCREEN_HGT_1 = _world.GetObject(ObjectType.Skill, "SCREEN_HGT");
            SCREEN_HGT_1.SetFloat("VAL", 358f);
            var SKY_OFFS_Y_3 = _world.GetObject(ObjectType.Skill, "SKY_OFFS_Y");
            SKY_OFFS_Y_3.SetFloat("VAL", 140f);
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
            var CONTROLMESSAGEDISPLAY_30 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CONTROLMESSAGEDISPLAY");
            _world.AcknexObject.SetAcknexObject("EACH_SEC.2", CONTROLMESSAGEDISPLAY_30);
            var CONTROLUNDERWATERTIME_33 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CONTROLUNDERWATERTIME");
            _world.AcknexObject.SetAcknexObject("EACH_SEC.3", CONTROLUNDERWATERTIME_33);
            var INFOPANEL_36 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"INFOPANEL");
            _world.AcknexObject.SetAcknexObject("PANELS.15", INFOPANEL_36);
            var PNLMSKOVL_39 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"PNLMSKOVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.15", PNLMSKOVL_39);
            {
                var enumerator = SET_WALKING();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var DROPPED_43 = _world.GetObject(ObjectType.Skill, "DROPPED");
            DROPPED_43.SetFloat("VAL", 0f);
            var AMMO_45 = _world.GetObject(ObjectType.Skill, "AMMO");
            AMMO_45.SetFloat("VAL", 0f);
            var KEY1_47 = _world.GetObject(ObjectType.Skill, "KEY1");
            KEY1_47.SetFloat("VAL", 2f);
            var KEY2_49 = _world.GetObject(ObjectType.Skill, "KEY2");
            KEY2_49.SetFloat("VAL", 2f);
            var KEY3_51 = _world.GetObject(ObjectType.Skill, "KEY3");
            KEY3_51.SetFloat("VAL", 2f);
            var KEY4_53 = _world.GetObject(ObjectType.Skill, "KEY4");
            KEY4_53.SetFloat("VAL", 2f);
            var END01STR_54 = _world.AcknexObject.GetAcknexObject("END01STR");
            _world.SetSynonymObject("GAMEOVER_TEXT", END01STR_54);
            var BRF01STR_56 = _world.AcknexObject.GetAcknexObject("BRF01STR");
            _world.SetSynonymObject("BRIEFING_TEXT", BRF01STR_56);
            var LOAD02STR_58 = _world.AcknexObject.GetAcknexObject("LOAD02STR");
            _world.SetSynonymObject("LOAD_STRING", LOAD02STR_58);
            var LEVEL02STR_60 = _world.AcknexObject.GetAcknexObject("LEVEL02STR");
            _world.SetSynonymObject("LEVEL_STRING", LEVEL02STR_60);
            var INNOCENTS_63 = _world.GetObject(ObjectType.Skill, "INNOCENTS");
            INNOCENTS_63.SetFloat("VAL", 0f);
            var UNDERWATER_65 = _world.GetObject(ObjectType.Skill, "UNDERWATER");
            UNDERWATER_65.SetFloat("VAL", 0f);
            var PLAYER_ARC_67 = _world.GetObject(ObjectType.Skill, "PLAYER_ARC");
            PLAYER_ARC_67.SetFloat("VAL", 1f);
            var CDTRACK_69 = _world.GetObject(ObjectType.Skill, "CDTRACK");
            CDTRACK_69.SetFloat("VAL", 2f);
            var CDTRACKTIME_71 = _world.GetObject(ObjectType.Skill, "CDTRACKTIME");
            CDTRACKTIME_71.SetFloat("VAL", 308f);
            var PLAYER_HIT_73 = _world.GetObject(ObjectType.Skill, "PLAYER_HIT");
            PLAYER_HIT_73.SetFloat("VAL", 0f);
            var GUN_ON_75 = _world.GetObject(ObjectType.Skill, "GUN_ON");
            GUN_ON_75.SetFloat("VAL", 0f);
            var SHOT_SOUND_ON_77 = _world.GetObject(ObjectType.Skill, "SHOT_SOUND_ON");
            SHOT_SOUND_ON_77.SetFloat("VAL", 0f);
            var EXPLOSION_ON_79 = _world.GetObject(ObjectType.Skill, "EXPLOSION_ON");
            EXPLOSION_ON_79.SetFloat("VAL", 0f);
            var MISS14ACT_80 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"MISS14ACT");
            _world.SetSynonymObject("MISSILE", MISS14ACT_80);
            var ASSAULTSTARTED_83 = _world.GetObject(ObjectType.Skill, "ASSAULTSTARTED");
            ASSAULTSTARTED_83.SetFloat("VAL", 0f);
            var STARTASSAULT_84 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"STARTASSAULT");
            _world.SetSynonymObject("ACTION_TRIGGER", STARTASSAULT_84);
            var GOLCOUNTER_87 = _world.GetObject(ObjectType.Skill, "GOLCOUNTER");
            GOLCOUNTER_87.SetFloat("VAL", 0f);
            {
                var enumerator = FADEIN();
                while (enumerator.MoveNext())
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
        public IEnumerator SUBMENUDOWN()
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
            _world.PlaySound("BIP01SND", 0.5f);
            yield break;
        }
        public IEnumerator SUBMENUUP()
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
            _world.PlaySound("BIP01SND", 0.5f);
            yield break;
        }
        public IEnumerator TARGETOFF()
        {
            _world.AcknexObject.SetAcknexObject("LAYERS.16", null);
            yield break;
        }
        public IEnumerator TARGETON()
        {
            var TARGETOVL_0 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"TARGETOVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.16", TARGETOVL_0);
            yield break;
        }
        public IEnumerator THROW()
        {
            var AMMO_1 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_1_val = AMMO_1.GetFloat("VAL");
            if (AMMO_1_val == 0f)
            {
                {
                    var enumerator = SELECTNONE();
                    while (enumerator.MoveNext())
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
                var enumerator = CHOOSEGRANADE();
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
            yield return new WaitForCycles(1f);
            var GRAN01OVL_11 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"GRAN01OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.12", GRAN01OVL_11);
            yield return new WaitForCycles(2f);
            _world.AcknexObject.SetAcknexObject("LAYERS.12", null);
            var GRAN02OVL_18 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"GRAN02OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", GRAN02OVL_18);
            yield return new WaitForCycles(2f);
            _world.PlaySound("GRAN01SND", 1f);
            var GRAN03OVL_23 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"GRAN03OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.12", GRAN03OVL_23);
            _world.AcknexObject.SetAcknexObject("LAYERS.13", null);
            yield return new WaitForCycles(2f);
            _world.AcknexObject.SetAcknexObject("LAYERS.12", null);
            yield return new WaitForCycles(8f);
            var GRAN04OVL_34 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"GRAN04OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", GRAN04OVL_34);
            yield return new WaitForCycles(2f);
            var GRAN05OVL_38 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"GRAN05OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", GRAN05OVL_38);
            yield return new WaitForCycles(2f);
            var GRAN06OVL_42 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"GRAN06OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", GRAN06OVL_42);
            var GRANADE_47 = _world.GetSynonymObject("GRANADE");
            GRANADE_47.SetFloat("GROUND", 1f);
            var GRANADE_50 = _world.GetSynonymObject("GRANADE");
            GRANADE_50.SetFloat("SPEED", 2f);
            var GRANADE_52 = _world.GetSynonymObject("GRANADE");
            var GRANADE_54 = _world.GetSynonymObject("GRANADE");
            var temp_55 = GRANADE_54.GetFloat("X");
            var PLAYER_X_56 = _world.GetObject(ObjectType.Skill, "PLAYER_X");
            var PLAYER_X_56_val = PLAYER_X_56.GetFloat("VAL");
            var PLAYER_COS_58 = _world.GetObject(ObjectType.Skill, "PLAYER_COS");
            var PLAYER_COS_58_val = PLAYER_COS_58.GetFloat("VAL");
            var PLAYER_VX_60 = _world.GetObject(ObjectType.Skill, "PLAYER_VX");
            var PLAYER_VX_60_val = PLAYER_VX_60.GetFloat("VAL");
            var TIME_CORR_62 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_62_val = TIME_CORR_62.GetFloat("VAL");
            GRANADE_52.SetFloat("X", PLAYER_X_56_val + PLAYER_COS_58_val + PLAYER_VX_60_val * TIME_CORR_62_val);
            var GRANADE_64 = _world.GetSynonymObject("GRANADE");
            var GRANADE_66 = _world.GetSynonymObject("GRANADE");
            var temp_67 = GRANADE_66.GetFloat("Y");
            var PLAYER_Y_68 = _world.GetObject(ObjectType.Skill, "PLAYER_Y");
            var PLAYER_Y_68_val = PLAYER_Y_68.GetFloat("VAL");
            var PLAYER_SIN_70 = _world.GetObject(ObjectType.Skill, "PLAYER_SIN");
            var PLAYER_SIN_70_val = PLAYER_SIN_70.GetFloat("VAL");
            var PLAYER_VY_72 = _world.GetObject(ObjectType.Skill, "PLAYER_VY");
            var PLAYER_VY_72_val = PLAYER_VY_72.GetFloat("VAL");
            var TIME_CORR_74 = _world.GetObject(ObjectType.Skill, "TIME_CORR");
            var TIME_CORR_74_val = TIME_CORR_74.GetFloat("VAL");
            GRANADE_64.SetFloat("Y", PLAYER_Y_68_val + PLAYER_SIN_70_val + PLAYER_VY_72_val * TIME_CORR_74_val);
            var GRANADE_76 = _world.GetSynonymObject("GRANADE");
            var GRANADE_78 = _world.GetSynonymObject("GRANADE");
            var temp_79 = GRANADE_78.GetFloat("HEIGHT");
            var PLAYER_SIZE_80 = _world.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var PLAYER_SIZE_80_val = PLAYER_SIZE_80.GetFloat("VAL");
            var PLAYER_TILT_83 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_83_val = PLAYER_TILT_83.GetFloat("VAL");
            var PLAYER_HGT_90 = _world.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var PLAYER_HGT_90_val = PLAYER_HGT_90.GetFloat("VAL");
            var FLOOR_HGT_92 = _world.GetObject(ObjectType.Skill, "FLOOR_HGT");
            var FLOOR_HGT_92_val = FLOOR_HGT_92.GetFloat("VAL");
            GRANADE_76.SetFloat("HEIGHT", PLAYER_SIZE_80_val - (PLAYER_TILT_83_val * 0.65f) - 0.05f + PLAYER_HGT_90_val + FLOOR_HGT_92_val);
            var FREEFALL_93 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"FREEFALL");
            var GRANADE_95 = _world.GetSynonymObject("GRANADE");
            GRANADE_95.SetAcknexObject("EACH_TICK", FREEFALL_93);
            var BOUNCE_96 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"BOUNCE");
            var GRANADE_98 = _world.GetSynonymObject("GRANADE");
            GRANADE_98.SetAcknexObject("IF_HIT", BOUNCE_96);
            //Unknown keyword: LOCATE
            var GRAN2TEX_99 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"GRAN2TEX");
            var GRANADE_101 = _world.GetSynonymObject("GRANADE");
            GRANADE_101.SetAcknexObject("TEXTURE", GRAN2TEX_99);
            var PLAYER_ANGLE_102 = _world.GetObject(ObjectType.Skill, "PLAYER_ANGLE");
            var PLAYER_ANGLE_102_val = PLAYER_ANGLE_102.GetFloat("VAL");
            var GRANADE_104 = _world.GetSynonymObject("GRANADE");
            GRANADE_104.SetFloat("ANGLE", PLAYER_ANGLE_102_val);
            var GRANADE_106 = _world.GetSynonymObject("GRANADE");
            var GRANADE_108 = _world.GetSynonymObject("GRANADE");
            var temp_109 = GRANADE_108.GetFloat("VSPEED");
            var PLAYER_TILT_111 = _world.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var PLAYER_TILT_111_val = PLAYER_TILT_111.GetFloat("VAL");
            GRANADE_106.SetFloat("VSPEED", -PLAYER_TILT_111_val / 2f + 0.2f);
            var BULLET_116 = _world.AcknexObject.GetAcknexObject("BULLET");
            var GRANADE_118 = _world.GetSynonymObject("GRANADE");
            GRANADE_118.SetAcknexObject("TARGET", BULLET_116);
            var GRANADE_121 = _world.GetSynonymObject("GRANADE");
            GRANADE_121.SetFloat("CAREFULLY", 1f);
            var GRANADE_124 = _world.GetSynonymObject("GRANADE");
            GRANADE_124.SetFloat("INVISIBLE", 0f);
            var AMMO_126 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_126_val = AMMO_126.GetFloat("VAL");
            var AMMO_127 = _world.GetObject(ObjectType.Skill, "AMMO");
            AMMO_127.SetFloat("VAL", AMMO_126_val + -1f);
            {
                var enumerator = DECAMMO();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield return new WaitForCycles(2f);
            var GRAN2TEX_129 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"GRAN2TEX");
            var GRANADE_131 = _world.GetSynonymObject("GRANADE");
            var temp_132 = GRANADE_131?.GetAcknexObject("TEXTURE");
            if (temp_132 == GRAN2TEX_129)
            {
                var GRAN1TEX_133 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"GRAN1TEX");
                var GRANADE_135 = _world.GetSynonymObject("GRANADE");
                GRANADE_135.SetAcknexObject("TEXTURE", GRAN1TEX_133);
            }
            _world.AcknexObject.SetAcknexObject("LAYERS.13", null);
            var AMMO_140 = _world.GetObject(ObjectType.Skill, "AMMO");
            var AMMO_140_val = AMMO_140.GetFloat("VAL");
            if (AMMO_140_val > 0f)
            {
                goto MOREGRANADES;
            }
            var HAS_GRANADE_142 = _world.GetObject(ObjectType.Skill, "HAS_GRANADE");
            HAS_GRANADE_142.SetFloat("VAL", 0f);
            _world.SetSynonymObject("MY_GUN", null);
            var GUNFIRING_146 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            GUNFIRING_146.SetFloat("VAL", 0f);
            {
                var enumerator = SELECTNONE();
                while (enumerator.MoveNext())
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
            yield return new WaitForCycles(8f);
            var GRAN00OVL_148 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Overlay,*/"GRAN00OVL");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", GRAN00OVL_148);
            var WEAPONSEL_152 = _world.GetObject(ObjectType.Skill, "WEAPONSEL");
            var WEAPONSEL_152_val = WEAPONSEL_152.GetFloat("VAL");
            if (WEAPONSEL_152_val != 3f)
            {
                goto FINISH;
            }
            var THROW_153 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"THROW");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", THROW_153);
            var THROW_155 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"THROW");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", THROW_155);
            FINISH:
            var GUNFIRING_158 = _world.GetObject(ObjectType.Skill, "GUNFIRING");
            GUNFIRING_158.SetFloat("VAL", 0f);
            yield break;
        }
        public IEnumerator TIMEOUTPARTICLE()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("SKILL1");
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetFloat("SKILL1", temp_3 + 1f);
            var MY_8 = _world.GetSynonymObject("MY");
            var temp_9 = MY_8.GetFloat("SKILL1");
            if (temp_9 < 8f)
            {
                yield break;
            }
            var MY_12 = _world.GetSynonymObject("MY");
            MY_12.SetFloat("SKILL1", 0f);
            {
                var enumerator = IMPLODEPARTICLE();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator TOGGLEGODMODE()
        {
            _world.AcknexObject.SetAcknexObject("IF_D", null);
            _world.PlaySound("ALARM03SND", 0.7f);
            var GOD_MODE_4 = _world.GetObject(ObjectType.Skill, "GOD_MODE");
            var GOD_MODE_4_val = GOD_MODE_4.GetFloat("VAL");
            if (GOD_MODE_4_val < 1f)
            {
                goto GODMODE;
            }
            var HLP06STR_5 = _world.AcknexObject.GetAcknexObject("HLP06STR");
            _world.SetSynonymObject("MESSAGE_TEXT", HLP06STR_5);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var GOD_MODE_8 = _world.GetObject(ObjectType.Skill, "GOD_MODE");
            GOD_MODE_8.SetFloat("VAL", 0f);
            yield break;
            GODMODE:
            var HLP05STR_9 = _world.AcknexObject.GetAcknexObject("HLP05STR");
            _world.SetSynonymObject("MESSAGE_TEXT", HLP05STR_9);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var GOD_MODE_12 = _world.GetObject(ObjectType.Skill, "GOD_MODE");
            GOD_MODE_12.SetFloat("VAL", 1f);
            var HAS_MP5_14 = _world.GetObject(ObjectType.Skill, "HAS_MP5");
            HAS_MP5_14.SetFloat("VAL", 1f);
            var HAS_GRANADE_16 = _world.GetObject(ObjectType.Skill, "HAS_GRANADE");
            HAS_GRANADE_16.SetFloat("VAL", 1f);
            var HAS_STINGER_18 = _world.GetObject(ObjectType.Skill, "HAS_STINGER");
            HAS_STINGER_18.SetFloat("VAL", 1f);
            var HAS_QUANTUM_20 = _world.GetObject(ObjectType.Skill, "HAS_QUANTUM");
            HAS_QUANTUM_20.SetFloat("VAL", 1f);
            var HAS_PDA_22 = _world.GetObject(ObjectType.Skill, "HAS_PDA");
            HAS_PDA_22.SetFloat("VAL", 1f);
            var AMMO_MP5_24 = _world.GetObject(ObjectType.Skill, "AMMO_MP5");
            AMMO_MP5_24.SetFloat("VAL", 999f);
            var AMMO_GRANADE_26 = _world.GetObject(ObjectType.Skill, "AMMO_GRANADE");
            AMMO_GRANADE_26.SetFloat("VAL", 999f);
            var AMMO_STINGER_28 = _world.GetObject(ObjectType.Skill, "AMMO_STINGER");
            AMMO_STINGER_28.SetFloat("VAL", 999f);
            var AMMO_QUANTUM_30 = _world.GetObject(ObjectType.Skill, "AMMO_QUANTUM");
            AMMO_QUANTUM_30.SetFloat("VAL", 999f);
            var KEY1_32 = _world.GetObject(ObjectType.Skill, "KEY1");
            KEY1_32.SetFloat("VAL", 1f);
            var KEY2_34 = _world.GetObject(ObjectType.Skill, "KEY2");
            KEY2_34.SetFloat("VAL", 1f);
            var KEY3_36 = _world.GetObject(ObjectType.Skill, "KEY3");
            KEY3_36.SetFloat("VAL", 1f);
            var KEY4_38 = _world.GetObject(ObjectType.Skill, "KEY4");
            KEY4_38.SetFloat("VAL", 1f);
            {
                var enumerator = SHOWAMMO();
                while (enumerator.MoveNext())
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
        public IEnumerator TROPAIM()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("IF_NEAR", null);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_FAR", null);
            var TROPSHOOT_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPSHOOT");
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("EACH_CYCLE", TROPSHOOT_6);
            var TROPHIT_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPHIT");
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("IF_HIT", TROPHIT_9);
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetFloat("CAREFULLY", 0f);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("BERKELEY", 0f);
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetFloat("SKILL4", 3f);
            var TROP3ATEX_21 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROP3ATEX");
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetAcknexObject("TEXTURE", TROP3ATEX_21);
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetFloat("SPEED", 0f);
            {
                var enumerator = FOLLOWANGLE();
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
                var enumerator = TROPSHOUT();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator TROPASSAULT()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("EACH_TICK", null);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_NEAR", null);
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("IF_FAR", null);
            var CYCLETROPATTACK_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CYCLETROPATTACK");
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("EACH_CYCLE", CYCLETROPATTACK_9);
            var TROPATEX_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROPATEX");
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetAcknexObject("TEXTURE", TROPATEX_12);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("SPEED", 0.7f);
            yield break;
        }
        public IEnumerator TROPBACKOFF()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("EACH_TICK", null);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_NEAR", null);
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("IF_FAR", null);
            var CYCLETROPBACK_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CYCLETROPBACK");
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("EACH_CYCLE", CYCLETROPBACK_9);
            var TROPHIT_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPHIT");
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetAcknexObject("IF_HIT", TROPHIT_12);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("CAREFULLY", 1f);
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetFloat("SKILL4", 1f);
            var TROP1TEX_21 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROP1TEX");
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetAcknexObject("TEXTURE", TROP1TEX_21);
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetFloat("SPEED", 0.3f);
            var BULLET_27 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_29 = _world.GetSynonymObject("MY");
            MY_29.SetAcknexObject("TARGET", BULLET_27);
            {
                var enumerator = REPELANGLE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_31 = _world.GetSynonymObject("MY");
            var MY_33 = _world.GetSynonymObject("MY");
            var temp_34 = MY_33.GetFloat("ANGLE");
            var MY_36 = _world.GetSynonymObject("MY");
            var temp_37 = MY_36.GetFloat("ANGLE");
            MY_31.SetFloat("ANGLE", temp_37 + UnityEngine.Random.value - 0.5f);
            {
                var enumerator = PROBE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield return new WaitForTicks(64f);
            {
                var enumerator = FOLLOWANGLE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_45 = _world.GetSynonymObject("MY");
            var temp_46 = MY_45.GetFloat("SKILL1");
            if (temp_46 > 5f)
            {
                yield break;
            }
            {
                var enumerator = TROPWAIT();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator TROPDEAD()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("IF_NEAR", null);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_FAR", null);
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("IF_HIT", null);
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("EACH_CYCLE", null);
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetFloat("DIST", 0f);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("SKILL4", 9f);
            var TROP9TEX_18 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROP9TEX");
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetAcknexObject("TEXTURE", TROP9TEX_18);
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetFloat("SPEED", 0f);
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetAcknexObject("TARGET", null);
            var MY_29 = _world.GetSynonymObject("MY");
            MY_29.SetFloat("PASSABLE", 1f);
            var MY_32 = _world.GetSynonymObject("MY");
            MY_32.SetFloat("CAREFULLY", 0f);
            var MY_35 = _world.GetSynonymObject("MY");
            MY_35.SetFloat("BERKELEY", 1f);
            if (UnityEngine.Random.value > 0.4f)
            {
                yield break;
            }
            if (UnityEngine.Random.value > 0.2f)
            {
                goto ARMOUR;
            }
            var PICKTROPAMMO_40 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"PICKTROPAMMO");
            var MY_42 = _world.GetSynonymObject("MY");
            MY_42.SetAcknexObject("IF_NEAR", PICKTROPAMMO_40);
            var MY_45 = _world.GetSynonymObject("MY");
            MY_45.SetFloat("DIST", 4f);
            yield break;
            ARMOUR:
            var PICKTROPARMOUR_46 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"PICKTROPARMOUR");
            var MY_48 = _world.GetSynonymObject("MY");
            MY_48.SetAcknexObject("IF_NEAR", PICKTROPARMOUR_46);
            var MY_51 = _world.GetSynonymObject("MY");
            MY_51.SetFloat("DIST", 4f);
            yield break;
        }
        public IEnumerator TROPDIE()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetFloat("SKILL1", 10f);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_NEAR", null);
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("IF_FAR", null);
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("IF_HIT", null);
            var TROPDEAD_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPDEAD");
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetAcknexObject("EACH_CYCLE", TROPDEAD_12);
            var MY_17 = _world.GetSynonymObject("MY");
            var temp_18 = MY_17.GetFloat("FLAG4");
            if (temp_18 != 0f)
            {
                {
                    var enumerator = TROPDROPKEY();
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
            var MY_21 = _world.GetSynonymObject("MY");
            MY_21.SetFloat("SKILL4", 8f);
            var TROP8TEX_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROP8TEX");
            var MY_24 = _world.GetSynonymObject("MY");
            MY_24.SetAcknexObject("TEXTURE", TROP8TEX_22);
            var MY_27 = _world.GetSynonymObject("MY");
            MY_27.SetFloat("SPEED", 0f);
            var MY_30 = _world.GetSynonymObject("MY");
            MY_30.SetAcknexObject("TARGET", null);
            yield break;
        }
        public IEnumerator TROPDROPKEY()
        {
            var KEY2TNG_1 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Thing,*/"KEY2TNG");
            var KEY2TNG_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Thing,*/"KEY2TNG");
            var temp_4 = KEY2TNG_3.GetFloat("X");
            var MY_6 = _world.GetSynonymObject("MY");
            var temp_7 = MY_6.GetFloat("X");
            KEY2TNG_1.SetFloat("X", temp_7);
            var KEY2TNG_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Thing,*/"KEY2TNG");
            var KEY2TNG_11 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Thing,*/"KEY2TNG");
            var temp_12 = KEY2TNG_11.GetFloat("Y");
            var MY_14 = _world.GetSynonymObject("MY");
            var temp_15 = MY_14.GetFloat("Y");
            KEY2TNG_9.SetFloat("Y", temp_15);
            var KEY2TNG_18 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Thing,*/"KEY2TNG");
            KEY2TNG_18.SetFloat("GROUND", 1f);
            var KEY2TNG_20 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Thing,*/"KEY2TNG");
            var KEY2TNG_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Thing,*/"KEY2TNG");
            var temp_23 = KEY2TNG_22.GetFloat("HEIGHT");
            var MY_25 = _world.GetSynonymObject("MY");
            var temp_26 = MY_25.GetFloat("FLOOR_HGT");
            KEY2TNG_20.SetFloat("HEIGHT", temp_26 - 0.01f);
            var KEY2TNG_31 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Thing,*/"KEY2TNG");
            KEY2TNG_31.SetFloat("INVISIBLE", 0f);
            //Unknown keyword: LOCATE
            var KEY2TNG_34 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Thing,*/"KEY2TNG");
            KEY2TNG_34.SetFloat("GROUND", 0f);
            yield break;
        }
        public IEnumerator TROPESCAPE()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("IF_NEAR", null);
            var TROPHIDE_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPHIDE");
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_FAR", TROPHIDE_3);
            var CYCLETROPHIDE_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CYCLETROPHIDE");
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("EACH_CYCLE", CYCLETROPHIDE_6);
            var TROPHIT_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPHIT");
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("IF_HIT", TROPHIT_9);
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetFloat("CAREFULLY", 1f);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("BERKELEY", 0f);
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetFloat("SKILL4", 4f);
            var TROP1TEX_21 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROP1TEX");
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetAcknexObject("TEXTURE", TROP1TEX_21);
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetFloat("DIST", 30f);
            var MY_29 = _world.GetSynonymObject("MY");
            MY_29.SetFloat("SPEED", 0.4f);
            {
                var enumerator = REPELANGLE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_31 = _world.GetSynonymObject("MY");
            var MY_33 = _world.GetSynonymObject("MY");
            var temp_34 = MY_33.GetFloat("ANGLE");
            var MY_36 = _world.GetSynonymObject("MY");
            var temp_37 = MY_36.GetFloat("ANGLE");
            MY_31.SetFloat("ANGLE", temp_37 + (UnityEngine.Random.value - 0.5f) * 2f);
            var BULLET_46 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_48 = _world.GetSynonymObject("MY");
            MY_48.SetAcknexObject("TARGET", BULLET_46);
            {
                var enumerator = LOCATEACTOR();
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
                var enumerator = PROBE();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator TROPFOLLOW()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("IF_NEAR", null);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_FAR", null);
            var CYCLETROPATTACK_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CYCLETROPATTACK");
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("EACH_CYCLE", CYCLETROPATTACK_6);
            var TROPHIT_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPHIT");
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("IF_HIT", TROPHIT_9);
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetFloat("CAREFULLY", 1f);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("BERKELEY", 0f);
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetFloat("SKILL4", 1f);
            var TROP1TEX_21 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROP1TEX");
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetAcknexObject("TEXTURE", TROP1TEX_21);
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetFloat("SPEED", 0.4f);
            {
                var enumerator = FOLLOWANGLE();
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
                var enumerator = LOCATEACTOR();
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
                var enumerator = PROBE();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator TROPFOLLOWATTACK()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("IF_NEAR", null);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_FAR", null);
            var CYCLETROPSHOOT_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CYCLETROPSHOOT");
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("EACH_CYCLE", CYCLETROPSHOOT_6);
            var TROPHIT_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPHIT");
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("IF_HIT", TROPHIT_9);
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetFloat("CAREFULLY", 1f);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("BERKELEY", 0f);
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetFloat("SKILL4", 2f);
            var TROPATEX_21 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROPATEX");
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetAcknexObject("TEXTURE", TROPATEX_21);
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetFloat("SPEED", 0.4f);
            var BULLET_27 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_29 = _world.GetSynonymObject("MY");
            MY_29.SetAcknexObject("TARGET", BULLET_27);
            {
                var enumerator = FOLLOWANGLE();
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
                var enumerator = LOCATEACTOR();
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
                var enumerator = PROBE();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator TROPFOLLOWWARNING()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("IF_NEAR", null);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_FAR", null);
            var CYCLETROPWARNING_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CYCLETROPWARNING");
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("EACH_CYCLE", CYCLETROPWARNING_6);
            var TROPHIT_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPHIT");
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("IF_HIT", TROPHIT_9);
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetFloat("CAREFULLY", 1f);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("BERKELEY", 0f);
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetFloat("SKILL4", 1f);
            var TROP1TEX_21 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROP1TEX");
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetAcknexObject("TEXTURE", TROP1TEX_21);
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetFloat("SPEED", 0.4f);
            var BULLET_27 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_29 = _world.GetSynonymObject("MY");
            MY_29.SetAcknexObject("TARGET", BULLET_27);
            {
                var enumerator = FOLLOWANGLE();
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
                var enumerator = LOCATEACTOR();
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
                var enumerator = PROBE();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator TROPHIDE()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("EACH_TICK", null);
            var TROPESCAPE_3 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPESCAPE");
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_NEAR", TROPESCAPE_3);
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("IF_FAR", null);
            var TROPHIDE_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPHIDE");
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("EACH_CYCLE", TROPHIDE_9);
            var TROPHIT_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPHIT");
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetAcknexObject("IF_HIT", TROPHIT_12);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("CAREFULLY", 1f);
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetFloat("BERKELEY", 0f);
            var MY_23 = _world.GetSynonymObject("MY");
            var temp_24 = MY_23.GetFloat("SKILL4");
            if (temp_24 == 4f)
            {
                goto HIDDING;
            }
            var MY_27 = _world.GetSynonymObject("MY");
            MY_27.SetFloat("SKILL4", 4f);
            {
                var enumerator = REPELANGLE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_29 = _world.GetSynonymObject("MY");
            var MY_31 = _world.GetSynonymObject("MY");
            var temp_32 = MY_31.GetFloat("ANGLE");
            var MY_34 = _world.GetSynonymObject("MY");
            var temp_35 = MY_34.GetFloat("ANGLE");
            MY_29.SetFloat("ANGLE", temp_35 + (UnityEngine.Random.value - 0.5f) * 2.4f);
            var TROP1TEX_44 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROP1TEX");
            var MY_46 = _world.GetSynonymObject("MY");
            MY_46.SetAcknexObject("TEXTURE", TROP1TEX_44);
            var MY_49 = _world.GetSynonymObject("MY");
            MY_49.SetFloat("DIST", 20f);
            var MY_52 = _world.GetSynonymObject("MY");
            MY_52.SetFloat("SPEED", 0.6f);
            var BULLET_53 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_55 = _world.GetSynonymObject("MY");
            MY_55.SetAcknexObject("TARGET", BULLET_53);
            {
                var enumerator = LOCATEACTOR();
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
                var enumerator = PROBE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            yield return new WaitForTicks(384f);
            var MY_59 = _world.GetSynonymObject("MY");
            var temp_60 = MY_59.GetFloat("SKILL1");
            if (temp_60 > 5f)
            {
                yield break;
            }
            var MY_63 = _world.GetSynonymObject("MY");
            var temp_64 = MY_63.GetFloat("SKILL1");
            var MY_66 = _world.GetSynonymObject("MY");
            MY_66.SetFloat("SKILL1", temp_64 + -2f);
            {
                var enumerator = TROPFOLLOWATTACK();
                while (enumerator.MoveNext())
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
                var enumerator = REPELANGLE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_68 = _world.GetSynonymObject("MY");
            var MY_70 = _world.GetSynonymObject("MY");
            var temp_71 = MY_70.GetFloat("ANGLE");
            var MY_73 = _world.GetSynonymObject("MY");
            var temp_74 = MY_73.GetFloat("ANGLE");
            MY_68.SetFloat("ANGLE", temp_74 + (UnityEngine.Random.value - 0.5f) * 2.4f);
            var TROP1TEX_83 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROP1TEX");
            var MY_85 = _world.GetSynonymObject("MY");
            MY_85.SetAcknexObject("TEXTURE", TROP1TEX_83);
            var MY_88 = _world.GetSynonymObject("MY");
            MY_88.SetFloat("DIST", 20f);
            var MY_91 = _world.GetSynonymObject("MY");
            MY_91.SetFloat("SPEED", 0.6f);
            var BULLET_92 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_94 = _world.GetSynonymObject("MY");
            MY_94.SetAcknexObject("TARGET", BULLET_92);
            {
                var enumerator = PROBE();
                while (enumerator.MoveNext())
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
        public IEnumerator TROPHIT()
        {
            var SHOOT_FAC_1 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_1_val = SHOOT_FAC_1.GetFloat("VAL");
            if (SHOOT_FAC_1_val == 0f)
            {
                goto OBSTACLE;
            }
            var MY_2 = _world.GetSynonymObject("MY");
            var HIT_3 = _world.GetSynonymObject("HIT");
            if (HIT_3 == MY_2)
            {
                goto CONT;
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
            var MY_10 = _world.GetSynonymObject("MY");
            var temp_11 = MY_10.GetFloat("X");
            var EXPLOSION_CENTER_14 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_15 = EXPLOSION_CENTER_14.GetFloat("X");
            var MY_20 = _world.GetSynonymObject("MY");
            var temp_21 = MY_20.GetFloat("X");
            var EXPLOSION_CENTER_24 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_25 = EXPLOSION_CENTER_24.GetFloat("X");
            var MY_30 = _world.GetSynonymObject("MY");
            var temp_31 = MY_30.GetFloat("Y");
            var EXPLOSION_CENTER_34 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_35 = EXPLOSION_CENTER_34.GetFloat("Y");
            var MY_40 = _world.GetSynonymObject("MY");
            var temp_41 = MY_40.GetFloat("Y");
            var EXPLOSION_CENTER_44 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_45 = EXPLOSION_CENTER_44.GetFloat("Y");
            DISTX_6.SetFloat("VAL", (temp_11 - temp_15) * (temp_21 - temp_25) + (temp_31 - temp_35) * (temp_41 - temp_45));
            var DISTX_47 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_47_val = DISTX_47.GetFloat("VAL");
            var DISTX_48 = _world.GetObject(ObjectType.Skill, "DISTX");
            DISTX_48.SetFloat("VAL", Mathf.Sqrt(DISTX_47_val));
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
                goto GRANADE;
            }
            var MY_55 = _world.GetSynonymObject("MY");
            var temp_56 = MY_55.GetFloat("VISIBLE");
            if (temp_56 == 1f)
            {
                {
                    var enumerator = TROPIMPLODE();
                    while (enumerator.MoveNext())
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
            var MY_58 = _world.GetSynonymObject("MY");
            var MY_60 = _world.GetSynonymObject("MY");
            var temp_61 = MY_60.GetFloat("SKILL1");
            var MY_63 = _world.GetSynonymObject("MY");
            var temp_64 = MY_63.GetFloat("SKILL1");
            var SHOOT_FAC_66 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_66_val = SHOOT_FAC_66.GetFloat("VAL");
            var DISTX_71 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_71_val = DISTX_71.GetFloat("VAL");
            MY_58.SetFloat("SKILL1", temp_64 + SHOOT_FAC_66_val * (20f - DISTX_71_val) / 20f);
            goto EXPLODED;
            CONT:
            var MY_76 = _world.GetSynonymObject("MY");
            var MY_78 = _world.GetSynonymObject("MY");
            var temp_79 = MY_78.GetFloat("SKILL1");
            var MY_81 = _world.GetSynonymObject("MY");
            var temp_82 = MY_81.GetFloat("SKILL1");
            var SHOOT_FAC_84 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            var SHOOT_FAC_84_val = SHOOT_FAC_84.GetFloat("VAL");
            MY_76.SetFloat("SKILL1", temp_82 + SHOOT_FAC_84_val * (UnityEngine.Random.value + 2f) / 3f);
            EXPLODED:
            var MY_95 = _world.GetSynonymObject("MY");
            var temp_96 = MY_95.GetFloat("SKILL1");
            if (temp_96 > 5f)
            {
                goto DIE;
            }
            if (UnityEngine.Random.value < 0.05f)
            {
                goto DIE;
            }
            var MY_100 = _world.GetSynonymObject("MY");
            var temp_101 = MY_100?.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("TROP_TEX", temp_101);
            var MY_105 = _world.GetSynonymObject("MY");
            MY_105.SetAcknexObject("IF_NEAR", null);
            var MY_108 = _world.GetSynonymObject("MY");
            MY_108.SetAcknexObject("IF_FAR", null);
            var MY_111 = _world.GetSynonymObject("MY");
            MY_111.SetAcknexObject("IF_HIT", null);
            if (UnityEngine.Random.value > 0.7f)
            {
                goto SONOFA;
            }
            var TROP5TEX_114 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROP5TEX");
            var MY_116 = _world.GetSynonymObject("MY");
            MY_116.SetAcknexObject("TEXTURE", TROP5TEX_114);
            _world.PlaySound("TROP05SND", 0.2f, "MY");
            goto WAIT;
            SONOFA:
            var TROP5ATEX_118 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROP5ATEX");
            var MY_120 = _world.GetSynonymObject("MY");
            MY_120.SetAcknexObject("TEXTURE", TROP5ATEX_118);
            _world.PlaySound("TROP11SND", 0.2f, "MY");
            WAIT:
            yield return new WaitForTicks(4f);
            var TROPESCAPE_123 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPESCAPE");
            var MY_125 = _world.GetSynonymObject("MY");
            MY_125.SetAcknexObject("IF_NEAR", TROPESCAPE_123);
            var TROPHIDE_126 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPHIDE");
            var MY_128 = _world.GetSynonymObject("MY");
            MY_128.SetAcknexObject("IF_FAR", TROPHIDE_126);
            var TROPHIT_129 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPHIT");
            var MY_131 = _world.GetSynonymObject("MY");
            MY_131.SetAcknexObject("IF_HIT", TROPHIT_129);
            var TROP_TEX_132 = _world.GetSynonymObject("TROP_TEX");
            var MY_134 = _world.GetSynonymObject("MY");
            MY_134.SetAcknexObject("TEXTURE", TROP_TEX_132);
            var MY_137 = _world.GetSynonymObject("MY");
            var temp_138 = MY_137.GetFloat("SKILL1");
            if (temp_138 > 4f)
            {
                {
                    var enumerator = TROPHIDE();
                    while (enumerator.MoveNext())
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
            var MY_141 = _world.GetSynonymObject("MY");
            var temp_142 = MY_141.GetFloat("SKILL4");
            if (temp_142 != 4f)
            {
                {
                    var enumerator = TROPFOLLOWATTACK();
                    while (enumerator.MoveNext())
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
            var MY_145 = _world.GetSynonymObject("MY");
            MY_145.SetFloat("SKILL1", 10f);
            {
                var enumerator = TROPDIE();
                while (enumerator.MoveNext())
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
                var enumerator = TROPTURN();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator TROPIMPLODE()
        {
            var DISTX_0 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_1 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_1_val = DISTX_1.GetFloat("VAL");
            var MY_4 = _world.GetSynonymObject("MY");
            var temp_5 = MY_4.GetFloat("X");
            var EXPLOSION_CENTER_8 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_9 = EXPLOSION_CENTER_8.GetFloat("X");
            var MY_14 = _world.GetSynonymObject("MY");
            var temp_15 = MY_14.GetFloat("X");
            var EXPLOSION_CENTER_18 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_19 = EXPLOSION_CENTER_18.GetFloat("X");
            var MY_24 = _world.GetSynonymObject("MY");
            var temp_25 = MY_24.GetFloat("Y");
            var EXPLOSION_CENTER_28 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_29 = EXPLOSION_CENTER_28.GetFloat("Y");
            var MY_34 = _world.GetSynonymObject("MY");
            var temp_35 = MY_34.GetFloat("Y");
            var EXPLOSION_CENTER_38 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_39 = EXPLOSION_CENTER_38.GetFloat("Y");
            DISTX_0.SetFloat("VAL", (temp_5 - temp_9) * (temp_15 - temp_19) + (temp_25 - temp_29) * (temp_35 - temp_39));
            var DISTX_41 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_41_val = DISTX_41.GetFloat("VAL");
            var DISTX_42 = _world.GetObject(ObjectType.Skill, "DISTX");
            DISTX_42.SetFloat("VAL", Mathf.Sqrt(DISTX_41_val));
            var DISTZ_43 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_44 = _world.GetObject(ObjectType.Skill, "DISTZ");
            var DISTZ_44_val = DISTZ_44.GetFloat("VAL");
            var MY_46 = _world.GetSynonymObject("MY");
            var temp_47 = MY_46.GetFloat("HEIGHT");
            var EXPLOSION_CENTER_50 = _world.GetSynonymObject("EXPLOSION_CENTER");
            var temp_51 = EXPLOSION_CENTER_50.GetFloat("HEIGHT");
            DISTZ_43.SetFloat("VAL", temp_47 - temp_51);
            var DISTX_53 = _world.GetObject(ObjectType.Skill, "DISTX");
            var DISTX_53_val = DISTX_53.GetFloat("VAL");
            if (DISTX_53_val > 10f)
            {
                {
                    var enumerator = BEAMREACT();
                    while (enumerator.MoveNext())
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
            var MY_56 = _world.GetSynonymObject("MY");
            MY_56.SetFloat("PASSABLE", 1f);
            var MY_59 = _world.GetSynonymObject("MY");
            MY_59.SetFloat("CAREFULLY", 0f);
            var MY_62 = _world.GetSynonymObject("MY");
            MY_62.SetAcknexObject("IF_NEAR", null);
            var MY_65 = _world.GetSynonymObject("MY");
            MY_65.SetAcknexObject("IF_FAR", null);
            var MY_68 = _world.GetSynonymObject("MY");
            MY_68.SetAcknexObject("IF_HIT", null);
            var VANISHFORGOOD_69 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"VANISHFORGOOD");
            var MY_71 = _world.GetSynonymObject("MY");
            MY_71.SetAcknexObject("EACH_CYCLE", VANISHFORGOOD_69);
            var MY_74 = _world.GetSynonymObject("MY");
            MY_74.SetFloat("SKILL4", 8f);
            var TROP0ATEX_75 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROP0ATEX");
            var MY_77 = _world.GetSynonymObject("MY");
            MY_77.SetAcknexObject("TEXTURE", TROP0ATEX_75);
            var MY_80 = _world.GetSynonymObject("MY");
            MY_80.SetFloat("SPEED", 0f);
            var MY_83 = _world.GetSynonymObject("MY");
            MY_83.SetAcknexObject("TARGET", null);
            var MY_86 = _world.GetSynonymObject("MY");
            var temp_87 = MY_86.GetFloat("FLAG4");
            if (temp_87 != 0f)
            {
                {
                    var enumerator = TROPDROPKEY();
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
            yield break;
        }
        public IEnumerator TROPLISTEN()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("SKILL4");
            if (temp_3 != 4f)
            {
                goto CONT;
            }
            var MY_6 = _world.GetSynonymObject("MY");
            var temp_7 = MY_6.GetFloat("VISIBLE");
            if (temp_7 != 1f)
            {
                goto CONT;
            }
            yield break;
            CONT:
            var MY_10 = _world.GetSynonymObject("MY");
            var temp_11 = MY_10.GetFloat("DISTANCE");
            if (temp_11 > 100f)
            {
                goto CONT1;
            }
            var MY_14 = _world.GetSynonymObject("MY");
            var temp_15 = MY_14.GetFloat("FLAG2");
            if (temp_15 == 0f)
            {
                goto CONT1;
            }
            yield break;
            CONT1:
            var MY_18 = _world.GetSynonymObject("MY");
            MY_18.SetAcknexObject("IF_NEAR", null);
            var MY_21 = _world.GetSynonymObject("MY");
            MY_21.SetAcknexObject("IF_FAR", null);
            var CYCLETROPATTACK_22 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CYCLETROPATTACK");
            var MY_24 = _world.GetSynonymObject("MY");
            MY_24.SetAcknexObject("EACH_CYCLE", CYCLETROPATTACK_22);
            var TROPHIT_25 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPHIT");
            var MY_27 = _world.GetSynonymObject("MY");
            MY_27.SetAcknexObject("IF_HIT", TROPHIT_25);
            var MY_30 = _world.GetSynonymObject("MY");
            MY_30.SetFloat("CAREFULLY", 0f);
            var MY_33 = _world.GetSynonymObject("MY");
            MY_33.SetFloat("BERKELEY", 0f);
            var MY_36 = _world.GetSynonymObject("MY");
            MY_36.SetFloat("SKILL4", 0f);
            var TROP0TEX_37 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROP0TEX");
            var MY_39 = _world.GetSynonymObject("MY");
            MY_39.SetAcknexObject("TEXTURE", TROP0TEX_37);
            var MY_42 = _world.GetSynonymObject("MY");
            MY_42.SetFloat("SPEED", 0f);
            var MY_45 = _world.GetSynonymObject("MY");
            MY_45.SetAcknexObject("TARGET", null);
            yield return new WaitForTicks(120f);
            var MY_49 = _world.GetSynonymObject("MY");
            var temp_50 = MY_49.GetFloat("SKILL1");
            if (temp_50 < 9f)
            {
                {
                    var enumerator = TROPWANDER();
                    while (enumerator.MoveNext())
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
        }
        public IEnumerator TROPLOOKFOR()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("SKILL4");
            if (temp_3 == 10f)
            {
                yield break;
            }
            var MY_6 = _world.GetSynonymObject("MY");
            var temp_7 = MY_6.GetFloat("DISTANCE");
            if (temp_7 > 100f)
            {
                yield break;
            }
            var MY_10 = _world.GetSynonymObject("MY");
            var temp_11 = MY_10.GetFloat("FLAG2");
            if (temp_11 == 1f)
            {
                {
                    var enumerator = TROPFOLLOWATTACK();
                    while (enumerator.MoveNext())
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
            var MY_14 = _world.GetSynonymObject("MY");
            var temp_15 = MY_14?.GetAcknexObject("TARGET");
            if (temp_15 == FOLLOW_12)
            {
                yield break;
            }
            var MY_18 = _world.GetSynonymObject("MY");
            var temp_19 = MY_18.GetFloat("SKILL1");
            if (temp_19 > 5f)
            {
                yield break;
            }
            var MY_22 = _world.GetSynonymObject("MY");
            MY_22.SetAcknexObject("IF_NEAR", null);
            var MY_25 = _world.GetSynonymObject("MY");
            MY_25.SetAcknexObject("IF_FAR", null);
            var TROPSEARCH_26 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPSEARCH");
            var MY_28 = _world.GetSynonymObject("MY");
            MY_28.SetAcknexObject("EACH_CYCLE", TROPSEARCH_26);
            var TROPHIT_29 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPHIT");
            var MY_31 = _world.GetSynonymObject("MY");
            MY_31.SetAcknexObject("IF_HIT", TROPHIT_29);
            var MY_34 = _world.GetSynonymObject("MY");
            MY_34.SetFloat("CAREFULLY", 0f);
            var MY_37 = _world.GetSynonymObject("MY");
            MY_37.SetFloat("BERKELEY", 0f);
            var MY_40 = _world.GetSynonymObject("MY");
            MY_40.SetFloat("SKILL4", 10f);
            var TROPATEX_41 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROPATEX");
            var MY_43 = _world.GetSynonymObject("MY");
            MY_43.SetAcknexObject("TEXTURE", TROPATEX_41);
            var MY_46 = _world.GetSynonymObject("MY");
            MY_46.SetFloat("SPEED", 0f);
            var BULLET_47 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_49 = _world.GetSynonymObject("MY");
            MY_49.SetAcknexObject("TARGET", BULLET_47);
            var MY_52 = _world.GetSynonymObject("MY");
            var temp_53 = MY_52.GetFloat("DISTANCE");
            if (temp_53 < 100f)
            {
                var TROPFOLLOWATTACK_54 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPFOLLOWATTACK");
                var MY_56 = _world.GetSynonymObject("MY");
                MY_56.SetAcknexObject("EACH_CYCLE", TROPFOLLOWATTACK_54);
            }
            yield break;
        }
        public IEnumerator TROPSEARCH()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("EACH_TICK", null);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_NEAR", null);
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("IF_FAR", null);
            var CYCLETROPATTACK_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CYCLETROPATTACK");
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("EACH_CYCLE", CYCLETROPATTACK_9);
            var TROPHIT_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPHIT");
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetAcknexObject("IF_HIT", TROPHIT_12);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("CAREFULLY", 1f);
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetFloat("BERKELEY", 0f);
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetFloat("SKILL4", 11f);
            var TROPATEX_24 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROPATEX");
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetAcknexObject("TEXTURE", TROPATEX_24);
            var MY_29 = _world.GetSynonymObject("MY");
            MY_29.SetFloat("SPEED", 0.3f);
            var BULLET_30 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_32 = _world.GetSynonymObject("MY");
            MY_32.SetAcknexObject("TARGET", BULLET_30);
            {
                var enumerator = LOCATEACTOR();
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
                var enumerator = PROBE();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator TROPSHOOT()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("IF_NEAR", null);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_FAR", null);
            var CYCLETROPSHOOT_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CYCLETROPSHOOT");
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("EACH_CYCLE", CYCLETROPSHOOT_6);
            var TROPHIT_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPHIT");
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("IF_HIT", TROPHIT_9);
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetFloat("CAREFULLY", 0f);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("BERKELEY", 0f);
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetFloat("SKILL4", 3f);
            var TROP3TEX_21 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROP3TEX");
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetAcknexObject("TEXTURE", TROP3TEX_21);
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetFloat("SPEED", 0f);
            {
                var enumerator = FOLLOWANGLE();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var SHOOT_SECTOR_28 = _world.GetObject(ObjectType.Skill, "SHOOT_SECTOR");
            SHOOT_SECTOR_28.SetFloat("VAL", 2f);
            var TROPSHOOTFACTOR_29 = _world.GetObject(ObjectType.Skill, "TROPSHOOTFACTOR");
            var TROPSHOOTFACTOR_29_val = TROPSHOOTFACTOR_29.GetFloat("VAL");
            var SHOOT_FAC_30 = _world.GetObject(ObjectType.Skill, "SHOOT_FAC");
            SHOOT_FAC_30.SetFloat("VAL", TROPSHOOTFACTOR_29_val);
            var SHOOT_RANGE_32 = _world.GetObject(ObjectType.Skill, "SHOOT_RANGE");
            SHOOT_RANGE_32.SetFloat("VAL", 100f);
            var SHOOT_Y_34 = _world.GetObject(ObjectType.Skill, "SHOOT_Y");
            SHOOT_Y_34.SetFloat("VAL", 0f);
            _world.Shoot("MY");
            var HIT_DIST_36 = _world.GetObject(ObjectType.Skill, "HIT_DIST");
            var HIT_DIST_36_val = HIT_DIST_36.GetFloat("VAL");
            if (HIT_DIST_36_val == 0f)
            {
                goto MISS;
            }
            var RESULT_37 = _world.GetObject(ObjectType.Skill, "RESULT");
            var RESULT_37_val = RESULT_37.GetFloat("VAL");
            var PLAYER_RESULT_38 = _world.GetObject(ObjectType.Skill, "PLAYER_RESULT");
            PLAYER_RESULT_38.SetFloat("VAL", RESULT_37_val);
            {
                var enumerator = HITPLAYERDELAY();
                while (enumerator.MoveNext())
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
                var enumerator = TROPFOLLOWATTACK();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator TROPSHOUT()
        {
            //Unknown keyword: RANDOMIZE
            var RANDOMTROP_1 = _world.GetObject(ObjectType.Skill, "RANDOMTROP");
            var RANDOMTROP_1_val = RANDOMTROP_1.GetFloat("VAL");
            if (RANDOMTROP_1_val > 0.8f)
            {
                goto SND1;
            }
            var RANDOMTROP_3 = _world.GetObject(ObjectType.Skill, "RANDOMTROP");
            var RANDOMTROP_3_val = RANDOMTROP_3.GetFloat("VAL");
            if (RANDOMTROP_3_val > 0.4f)
            {
                goto SND2;
            }
            var RANDOMTROP_5 = _world.GetObject(ObjectType.Skill, "RANDOMTROP");
            var RANDOMTROP_5_val = RANDOMTROP_5.GetFloat("VAL");
            if (RANDOMTROP_5_val > 0.1f)
            {
                goto SND3;
            }
            _world.PlaySound("TROP06SND", 0.3f, "MY");
            yield break;
            SND1:
            _world.PlaySound("TROP12SND", 0.4f, "MY");
            yield break;
            SND2:
            _world.PlaySound("TROP10SND", 0.3f, "MY");
            yield break;
            SND3:
            _world.PlaySound("TROP03SND", 0.3f, "MY");
            yield break;
        }
        public IEnumerator TROPTALK()
        {
            //Unknown keyword: RANDOMIZE
            var RANDOMTROP_1 = _world.GetObject(ObjectType.Skill, "RANDOMTROP");
            var RANDOMTROP_1_val = RANDOMTROP_1.GetFloat("VAL");
            if (RANDOMTROP_1_val > 0.9f)
            {
                goto SND1;
            }
            var RANDOMTROP_3 = _world.GetObject(ObjectType.Skill, "RANDOMTROP");
            var RANDOMTROP_3_val = RANDOMTROP_3.GetFloat("VAL");
            if (RANDOMTROP_3_val > 0.8f)
            {
                goto SND2;
            }
            yield break;
            SND1:
            _world.PlaySound("TROP09SND", 0.3f, "MY");
            yield break;
            SND2:
            _world.PlaySound("TROP01SND", 0.3f, "MY");
            yield break;
        }
        public IEnumerator TROPTURN()
        {
            var WAITTIME_0 = _world.GetObject(ObjectType.Skill, "WAITTIME");
            var WAITTIME_1 = _world.GetObject(ObjectType.Skill, "WAITTIME");
            var WAITTIME_1_val = WAITTIME_1.GetFloat("VAL");
            WAITTIME_0.SetFloat("VAL", 64f * UnityEngine.Random.value + 16f);
            if (UnityEngine.Random.value < 0.07f)
            {
                {
                    var enumerator = TROPLISTEN();
                    while (enumerator.MoveNext())
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
                var RIGHTTURNTROP_11 = _world.GetObject(ObjectType.Skill, "RIGHTTURNTROP");
                var RIGHTTURNTROP_12 = _world.GetObject(ObjectType.Skill, "RIGHTTURNTROP");
                var RIGHTTURNTROP_12_val = RIGHTTURNTROP_12.GetFloat("VAL");
                var RIGHTTURNTROP_14 = _world.GetObject(ObjectType.Skill, "RIGHTTURNTROP");
                var RIGHTTURNTROP_14_val = RIGHTTURNTROP_14.GetFloat("VAL");
                var RIGHTTURNTROP_20 = _world.GetObject(ObjectType.Skill, "RIGHTTURNTROP");
                var RIGHTTURNTROP_20_val = RIGHTTURNTROP_20.GetFloat("VAL");
                RIGHTTURNTROP_11.SetFloat("VAL", (RIGHTTURNTROP_14_val - 1f) * (RIGHTTURNTROP_20_val - 1f));
            }
            var RIGHTTURNTROP_24 = _world.GetObject(ObjectType.Skill, "RIGHTTURNTROP");
            var RIGHTTURNTROP_24_val = RIGHTTURNTROP_24.GetFloat("VAL");
            if (RIGHTTURNTROP_24_val > RIGHTTURNTROP_24.GetFloat("MAX"))
            {
                {
                    var enumerator = TURNRIGHT();
                    while (enumerator.MoveNext())
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
                var enumerator = TURNLEFT();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator TROPWAIT()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("SKILL4");
            if (temp_3 != 4f)
            {
                goto CONT;
            }
            var MY_6 = _world.GetSynonymObject("MY");
            var temp_7 = MY_6.GetFloat("VISIBLE");
            if (temp_7 != 1f)
            {
                goto CONT;
            }
            yield break;
            CONT:
            var MY_10 = _world.GetSynonymObject("MY");
            MY_10.SetAcknexObject("EACH_TICK", null);
            var MY_13 = _world.GetSynonymObject("MY");
            MY_13.SetAcknexObject("IF_NEAR", null);
            var MY_16 = _world.GetSynonymObject("MY");
            MY_16.SetAcknexObject("IF_FAR", null);
            var CYCLETROPATTACK_17 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CYCLETROPATTACK");
            var MY_19 = _world.GetSynonymObject("MY");
            MY_19.SetAcknexObject("EACH_CYCLE", CYCLETROPATTACK_17);
            var TROPHIT_20 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPHIT");
            var MY_22 = _world.GetSynonymObject("MY");
            MY_22.SetAcknexObject("IF_HIT", TROPHIT_20);
            var MY_25 = _world.GetSynonymObject("MY");
            MY_25.SetFloat("CAREFULLY", 0f);
            var MY_28 = _world.GetSynonymObject("MY");
            MY_28.SetFloat("GROUND", 0f);
            var MY_31 = _world.GetSynonymObject("MY");
            MY_31.SetFloat("HEIGHT", -0.05f);
            var MY_34 = _world.GetSynonymObject("MY");
            MY_34.SetFloat("SKILL4", 1f);
            var TROP0TEX_35 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROP0TEX");
            var MY_37 = _world.GetSynonymObject("MY");
            MY_37.SetAcknexObject("TEXTURE", TROP0TEX_35);
            var MY_40 = _world.GetSynonymObject("MY");
            MY_40.SetFloat("SPEED", 0f);
            var MY_43 = _world.GetSynonymObject("MY");
            MY_43.SetAcknexObject("TARGET", null);
            yield break;
        }
        public IEnumerator TROPWANDER()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("EACH_TICK", null);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_NEAR", null);
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("IF_FAR", null);
            var CYCLETROPATTACK_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CYCLETROPATTACK");
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("EACH_CYCLE", CYCLETROPATTACK_9);
            var TROPHIT_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPHIT");
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetAcknexObject("IF_HIT", TROPHIT_12);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("CAREFULLY", 1f);
            var MY_20 = _world.GetSynonymObject("MY");
            MY_20.SetFloat("GROUND", 0f);
            var MY_23 = _world.GetSynonymObject("MY");
            MY_23.SetFloat("BERKELEY", 0f);
            var MY_26 = _world.GetSynonymObject("MY");
            MY_26.SetFloat("SKILL4", 1f);
            var TROP1TEX_27 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROP1TEX");
            var MY_29 = _world.GetSynonymObject("MY");
            MY_29.SetAcknexObject("TEXTURE", TROP1TEX_27);
            var MY_32 = _world.GetSynonymObject("MY");
            MY_32.SetFloat("SPEED", 0.3f);
            var BULLET_33 = _world.AcknexObject.GetAcknexObject("BULLET");
            var MY_35 = _world.GetSynonymObject("MY");
            MY_35.SetAcknexObject("TARGET", BULLET_33);
            {
                var enumerator = LOCATEACTOR();
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
                var enumerator = PROBE();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator TROPWARNING()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetAcknexObject("IF_NEAR", null);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetAcknexObject("IF_FAR", null);
            var TROPBACKOFF_6 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPBACKOFF");
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetAcknexObject("EACH_CYCLE", TROPBACKOFF_6);
            var TROPHIT_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"TROPHIT");
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("IF_HIT", TROPHIT_9);
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetFloat("SKILL4", 7f);
            var TROP7TEX_15 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROP7TEX");
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetAcknexObject("TEXTURE", TROP7TEX_15);
            if (UnityEngine.Random.value < 0.5f)
            {
                var TROP7ATEX_20 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROP7ATEX");
                var MY_22 = _world.GetSynonymObject("MY");
                MY_22.SetAcknexObject("TEXTURE", TROP7ATEX_20);
            }
            var MY_24 = _world.GetSynonymObject("MY");
            var temp_25 = MY_24?.GetAcknexObject("TEXTURE");
            _world.SetSynonymObject("TROP_TEX", temp_25);
            //Unknown keyword: RANDOMIZE
            var RANDOMTROP_28 = _world.GetObject(ObjectType.Skill, "RANDOMTROP");
            var RANDOMTROP_28_val = RANDOMTROP_28.GetFloat("VAL");
            if (RANDOMTROP_28_val < 0.2f)
            {
                goto OVERTHERE;
            }
            var RANDOMTROP_30 = _world.GetObject(ObjectType.Skill, "RANDOMTROP");
            var RANDOMTROP_30_val = RANDOMTROP_30.GetFloat("VAL");
            if (RANDOMTROP_30_val < 0.4f)
            {
                goto GETDOWN;
            }
            var TROP07SND_31 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Sound,*/"TROP07SND");
            var TROP_TEX_33 = _world.GetSynonymObject("TROP_TEX");
            TROP_TEX_33.SetAcknexObject("SOUND", TROP07SND_31);
            goto CONT;
            GETDOWN:
            var TROP03SND_34 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Sound,*/"TROP03SND");
            var TROP_TEX_36 = _world.GetSynonymObject("TROP_TEX");
            TROP_TEX_36.SetAcknexObject("SOUND", TROP03SND_34);
            goto CONT;
            OVERTHERE:
            var TROP02SND_37 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Sound,*/"TROP02SND");
            var TROP_TEX_39 = _world.GetSynonymObject("TROP_TEX");
            TROP_TEX_39.SetAcknexObject("SOUND", TROP02SND_37);
            goto CONT;
            CONT:
            var MY_42 = _world.GetSynonymObject("MY");
            MY_42.SetFloat("SPEED", 0f);
            yield return new WaitForTicks(32f);
            var MY_46 = _world.GetSynonymObject("MY");
            var temp_47 = MY_46.GetFloat("SKILL1");
            if (temp_47 > 5f)
            {
                yield break;
            }
            var MY_49 = _world.GetSynonymObject("MY");
            var MY_51 = _world.GetSynonymObject("MY");
            var temp_52 = MY_51.GetFloat("ANGLE");
            var MY_54 = _world.GetSynonymObject("MY");
            var temp_55 = MY_54.GetFloat("ANGLE");
            MY_49.SetFloat("ANGLE", temp_55 + 2f);
            if (UnityEngine.Random.value < 0.5f)
            {
                var MY_61 = _world.GetSynonymObject("MY");
                var MY_63 = _world.GetSynonymObject("MY");
                var temp_64 = MY_63.GetFloat("ANGLE");
                var MY_66 = _world.GetSynonymObject("MY");
                var temp_67 = MY_66.GetFloat("ANGLE");
                MY_61.SetFloat("ANGLE", temp_67 - 2f);
            }
            {
                var enumerator = TROPBACKOFF();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator TURNLEFT()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("ANGLE");
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetFloat("ANGLE", temp_3 + 0.524f);
            {
                var enumerator = PROBE();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator TURNRIGHT()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("ANGLE");
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetFloat("ANGLE", temp_3 + -0.524f);
            {
                var enumerator = PROBE();
                while (enumerator.MoveNext())
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
        }
        public IEnumerator TYPEGAME()
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
            _world.PlaySound("BIP02SND", 0.5f);
            _world.AcknexObject.SetAcknexObject("IF_ENTER", null);
            var temp_8 = _world.AcknexObject?.GetAcknexObject("IF_ESC");
            _world.SetSynonymObject("IFESC", temp_8);
            _world.AcknexObject.SetAcknexObject("IF_ESC", null);
            var HERE_13 = _world.GetSynonymObject("HERE");
            var temp_14 = HERE_13?.GetAcknexObject("CEIL_TEX");
            _world.SetSynonymObject("LIFTSOUND", temp_14);
            var LIFTSOUND_18 = _world.GetSynonymObject("LIFTSOUND");
            LIFTSOUND_18.SetFloat("SVOL", 0f);
            var MOVE_MODE_20 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_20.SetFloat("VAL", 0f);
            var SUBMENUITEM_22 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            var SUBMENUITEM_22_val = SUBMENUITEM_22.GetFloat("VAL");
            if (SUBMENUITEM_22_val == 1f)
            {
                _world.ReadInkey("SAVEDGAME01");
            }
            var SUBMENUITEM_24 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            var SUBMENUITEM_24_val = SUBMENUITEM_24.GetFloat("VAL");
            if (SUBMENUITEM_24_val == 2f)
            {
                _world.ReadInkey("SAVEDGAME02");
            }
            var SUBMENUITEM_26 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            var SUBMENUITEM_26_val = SUBMENUITEM_26.GetFloat("VAL");
            if (SUBMENUITEM_26_val == 3f)
            {
                _world.ReadInkey("SAVEDGAME03");
            }
            var SUBMENUITEM_28 = _world.GetObject(ObjectType.Skill, "SUBMENUITEM");
            var SUBMENUITEM_28_val = SUBMENUITEM_28.GetFloat("VAL");
            if (SUBMENUITEM_28_val == 4f)
            {
                _world.ReadInkey("SAVEDGAME04");
            }
            var IFESC_29 = _world.GetSynonymObject("IFESC");
            _world.AcknexObject.SetAcknexObject("IF_ESC", IFESC_29);
            var RESULT_32 = _world.GetObject(ObjectType.Skill, "RESULT");
            var RESULT_32_val = RESULT_32.GetFloat("VAL");
            if (RESULT_32_val < 0f)
            {
                {
                    var enumerator = SAVEERRORMESSAGE();
                    while (enumerator.MoveNext())
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
            yield return new WaitForCycles(16f);
            //Unknown keyword: SAVE_INFO
            _world.AcknexObject.SetAcknexObject("PANELS.16", null);
            _world.AcknexObject.SetAcknexObject("MESSAGES.16", null);
            var SHOWMAINMENU_40 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SHOWMAINMENU");
            _world.AcknexObject.SetAcknexObject("IF_ESC", SHOWMAINMENU_40);
            _world.AcknexObject.SetAcknexObject("IF_CUU", null);
            _world.AcknexObject.SetAcknexObject("IF_CUD", null);
            _world.AcknexObject.SetAcknexObject("IF_CUR", null);
            _world.AcknexObject.SetAcknexObject("IF_CUL", null);
            var FIRE_GUN_50 = _world.GetSynonymObject("FIRE_GUN");
            _world.AcknexObject.SetAcknexObject("IF_LEFT", FIRE_GUN_50);
            var FIRE_GUN_52 = _world.GetSynonymObject("FIRE_GUN");
            _world.AcknexObject.SetAcknexObject("IF_CTRL", FIRE_GUN_52);
            var LAYER12_54 = _world.GetSynonymObject("LAYER12");
            _world.AcknexObject.SetAcknexObject("LAYERS.12", LAYER12_54);
            var LAYER13_57 = _world.GetSynonymObject("LAYER13");
            _world.AcknexObject.SetAcknexObject("LAYERS.13", LAYER13_57);
            var LAYER16_60 = _world.GetSynonymObject("LAYER16");
            _world.AcknexObject.SetAcknexObject("LAYERS.16", LAYER16_60);
            var SEL_TRIC_63 = _world.GetSynonymObject("SEL_TRIC");
            _world.AcknexObject.SetAcknexObject("IF_TAB", SEL_TRIC_63);
            var SEL_NONE_65 = _world.GetSynonymObject("SEL_NONE");
            _world.AcknexObject.SetAcknexObject("IF_1", SEL_NONE_65);
            var SEL_MP5_67 = _world.GetSynonymObject("SEL_MP5");
            _world.AcknexObject.SetAcknexObject("IF_2", SEL_MP5_67);
            var SEL_BURST_69 = _world.GetSynonymObject("SEL_BURST");
            _world.AcknexObject.SetAcknexObject("IF_3", SEL_BURST_69);
            var SEL_GRAN_71 = _world.GetSynonymObject("SEL_GRAN");
            _world.AcknexObject.SetAcknexObject("IF_4", SEL_GRAN_71);
            var SEL_STNG_73 = _world.GetSynonymObject("SEL_STNG");
            _world.AcknexObject.SetAcknexObject("IF_5", SEL_STNG_73);
            var SEL_QGUN_75 = _world.GetSynonymObject("SEL_QGUN");
            _world.AcknexObject.SetAcknexObject("IF_6", SEL_QGUN_75);
            var MAPMODE_77 = _world.GetObject(ObjectType.Skill, "MAPMODE");
            var MAPMODE_77_val = MAPMODE_77.GetFloat("VAL");
            var MAP_MODE_78 = _world.GetObject(ObjectType.Skill, "MAP_MODE");
            MAP_MODE_78.SetFloat("VAL", MAPMODE_77_val);
            var SECCOUNTER_80 = _world.GetObject(ObjectType.Skill, "SECCOUNTER");
            SECCOUNTER_80.SetFloat("VAL", 0f);
            var MOVE_MODE_82 = _world.GetObject(ObjectType.Skill, "MOVE_MODE");
            MOVE_MODE_82.SetFloat("VAL", 1f);
            //Unknown keyword: FADE_PAL
            //Unknown keyword: SAVE
            yield break;
        }
        public IEnumerator VANISHFORGOOD()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetFloat("SPEED", 0f);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetFloat("CAREFULLY", 0f);
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetFloat("SKILL1", 10f);
            var VANISHSTOP_9 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"VANISHSTOP");
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("EACH_TICK", VANISHSTOP_9);
            var NULLTEXTURE_12 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"NULLTEXTURE");
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetAcknexObject("TEXTURE", NULLTEXTURE_12);
            var MY_17 = _world.GetSynonymObject("MY");
            MY_17.SetFloat("INVISIBLE", 1f);
            yield break;
        }
        public IEnumerator VANISHSTOP()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetFloat("SPEED", 0f);
            var MY_5 = _world.GetSynonymObject("MY");
            MY_5.SetFloat("CAREFULLY", 0f);
            var MY_8 = _world.GetSynonymObject("MY");
            MY_8.SetFloat("SKILL1", 10f);
            var MY_11 = _world.GetSynonymObject("MY");
            MY_11.SetAcknexObject("EACH_TICK", null);
            var MY_14 = _world.GetSynonymObject("MY");
            MY_14.SetFloat("INVISIBLE", 1f);
            yield break;
        }
        public IEnumerator VOLUMEDOWN()
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
            _world.PlaySound("BIP01SND", 0.5f);
            var SOUND_VOL_6 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            var SOUND_VOL_6_val = SOUND_VOL_6.GetFloat("VAL");
            if (SOUND_VOL_6_val > 0.05f)
            {
                var SOUND_VOL_8 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
                var SOUND_VOL_8_val = SOUND_VOL_8.GetFloat("VAL");
                var SOUND_VOL_9 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
                SOUND_VOL_9.SetFloat("VAL", SOUND_VOL_8_val + -0.05f);
            }
            var SOUND_VOL_10 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            var SOUND_VOL_10_val = SOUND_VOL_10.GetFloat("VAL");
            var SOUND_VOL_BUFFER_11 = _world.GetObject(ObjectType.Skill, "SOUND_VOL_BUFFER");
            SOUND_VOL_BUFFER_11.SetFloat("VAL", SOUND_VOL_10_val);
            yield break;
            MUSIC:
            _world.PlaySound("BIP01SND", 0.5f);
            var CDAUDIO_VOL_14 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL");
            var CDAUDIO_VOL_14_val = CDAUDIO_VOL_14.GetFloat("VAL");
            if (CDAUDIO_VOL_14_val > 0.05f)
            {
                var CDAUDIO_VOL_16 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL");
                var CDAUDIO_VOL_16_val = CDAUDIO_VOL_16.GetFloat("VAL");
                var CDAUDIO_VOL_17 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL");
                CDAUDIO_VOL_17.SetFloat("VAL", CDAUDIO_VOL_16_val + -0.05f);
            }
            var CDAUDIO_VOL_18 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL");
            var CDAUDIO_VOL_18_val = CDAUDIO_VOL_18.GetFloat("VAL");
            var CDAUDIO_VOL_BUFFER_19 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL_BUFFER");
            CDAUDIO_VOL_BUFFER_19.SetFloat("VAL", CDAUDIO_VOL_18_val);
            yield break;
            DIFIC:
            var TOUGHNESS_21 = _world.GetObject(ObjectType.Skill, "TOUGHNESS");
            var TOUGHNESS_21_val = TOUGHNESS_21.GetFloat("VAL");
            var TOUGHNESS_22 = _world.GetObject(ObjectType.Skill, "TOUGHNESS");
            TOUGHNESS_22.SetFloat("VAL", TOUGHNESS_21_val + -0.1f);
            _world.PlaySound("BIP01SND", 0.5f);
            yield break;
        }
        public IEnumerator VOLUMEUP()
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
            _world.PlaySound("BIP01SND", 0.5f);
            var SOUND_VOL_6 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            var SOUND_VOL_6_val = SOUND_VOL_6.GetFloat("VAL");
            if (SOUND_VOL_6_val < 0.96f)
            {
                var SOUND_VOL_8 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
                var SOUND_VOL_8_val = SOUND_VOL_8.GetFloat("VAL");
                var SOUND_VOL_9 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
                SOUND_VOL_9.SetFloat("VAL", SOUND_VOL_8_val + 0.05f);
            }
            var SOUND_VOL_10 = _world.GetObject(ObjectType.Skill, "SOUND_VOL");
            var SOUND_VOL_10_val = SOUND_VOL_10.GetFloat("VAL");
            var SOUND_VOL_BUFFER_11 = _world.GetObject(ObjectType.Skill, "SOUND_VOL_BUFFER");
            SOUND_VOL_BUFFER_11.SetFloat("VAL", SOUND_VOL_10_val);
            yield break;
            MUSIC:
            _world.PlaySound("BIP01SND", 0.5f);
            var CDAUDIO_VOL_14 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL");
            var CDAUDIO_VOL_14_val = CDAUDIO_VOL_14.GetFloat("VAL");
            if (CDAUDIO_VOL_14_val < 0.96f)
            {
                var CDAUDIO_VOL_16 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL");
                var CDAUDIO_VOL_16_val = CDAUDIO_VOL_16.GetFloat("VAL");
                var CDAUDIO_VOL_17 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL");
                CDAUDIO_VOL_17.SetFloat("VAL", CDAUDIO_VOL_16_val + 0.05f);
            }
            var CDAUDIO_VOL_18 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL");
            var CDAUDIO_VOL_18_val = CDAUDIO_VOL_18.GetFloat("VAL");
            var CDAUDIO_VOL_BUFFER_19 = _world.GetObject(ObjectType.Skill, "CDAUDIO_VOL_BUFFER");
            CDAUDIO_VOL_BUFFER_19.SetFloat("VAL", CDAUDIO_VOL_18_val);
            yield break;
            DIFIC:
            var TOUGHNESS_21 = _world.GetObject(ObjectType.Skill, "TOUGHNESS");
            var TOUGHNESS_21_val = TOUGHNESS_21.GetFloat("VAL");
            var TOUGHNESS_22 = _world.GetObject(ObjectType.Skill, "TOUGHNESS");
            TOUGHNESS_22.SetFloat("VAL", TOUGHNESS_21_val + 0.1f);
            _world.PlaySound("BIP01SND", 0.5f);
            yield break;
        }
        public IEnumerator WALLTIMER()
        {
            var GOLCOUNTER_1 = _world.GetObject(ObjectType.Skill, "GOLCOUNTER");
            var GOLCOUNTER_1_val = GOLCOUNTER_1.GetFloat("VAL");
            var GOLCOUNTER_2 = _world.GetObject(ObjectType.Skill, "GOLCOUNTER");
            GOLCOUNTER_2.SetFloat("VAL", GOLCOUNTER_1_val + 1f);
            var GOLCOUNTER_4 = _world.GetObject(ObjectType.Skill, "GOLCOUNTER");
            var GOLCOUNTER_4_val = GOLCOUNTER_4.GetFloat("VAL");
            if (GOLCOUNTER_4_val < 7f)
            {
                yield break;
            }
            //Unknown keyword: SET_ALL
            _world.AcknexObject.SetAcknexObject("EACH_SEC.4", null);
            yield break;
        }
        public IEnumerator WARNPLAYER()
        {
            var MY_2 = _world.GetSynonymObject("MY");
            MY_2.SetFloat("DIST", 20f);
            var WRN22STR_3 = _world.AcknexObject.GetAcknexObject("WRN22STR");
            _world.SetSynonymObject("MESSAGE_TEXT", WRN22STR_3);
            {
                var enumerator = DISPLAYMESSAGE();
                while (enumerator.MoveNext())
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
        public IEnumerator WAYGUARD1()
        {
            {
                var enumerator = TROPTALK();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("WAYPOINT");
            if (temp_3 != 15f)
            {
                yield break;
            }
            var MY_6 = _world.GetSynonymObject("MY");
            MY_6.SetAcknexObject("IF_ARRIVED", null);
            var TROP1TEX_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROP1TEX");
            var MY_9 = _world.GetSynonymObject("MY");
            MY_9.SetAcknexObject("TEXTURE", TROP1TEX_7);
            var GUARD1WAY_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Way,*/"GUARD1WAY");
            var MY_12 = _world.GetSynonymObject("MY");
            MY_12.SetAcknexObject("TARGET", GUARD1WAY_10);
            var MY_15 = _world.GetSynonymObject("MY");
            MY_15.SetFloat("SPEED", 0.5f);
            yield break;
        }
        public IEnumerator WAYGUARD2()
        {
            {
                var enumerator = TROPTALK();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("WAYPOINT");
            if (temp_3 != 11f)
            {
                yield break;
            }
            var MY_6 = _world.GetSynonymObject("MY");
            MY_6.SetAcknexObject("IF_ARRIVED", null);
            var TROPATEX_7 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/"TROPATEX");
            var MY_9 = _world.GetSynonymObject("MY");
            MY_9.SetAcknexObject("TEXTURE", TROPATEX_7);
            var GUARD2WAY_10 = _world.AcknexObject.GetAcknexObject(/*ObjectType.Way,*/"GUARD2WAY");
            var MY_12 = _world.GetSynonymObject("MY");
            MY_12.SetAcknexObject("TARGET", GUARD2WAY_10);
            var MY_15 = _world.GetSynonymObject("MY");
            MY_15.SetFloat("SPEED", 0.5f);
            yield break;
        }
        public IEnumerator WAYGUARD3()
        {
            {
                var enumerator = TROPTALK();
                while (enumerator.MoveNext())
                {
                    var current = enumerator.Current;
                    if (current != null)
                    {
                        yield return current;
                    }
                }
            }
            var MY_2 = _world.GetSynonymObject("MY");
            var temp_3 = MY_2.GetFloat("WAYPOINT");
            if (temp_3 != 8f)
            {
                yield break;
            }
            //Unknown keyword: SET_ALL
            //Unknown keyword: SET_ALL
            //Unknown keyword: SET_ALL
            //Unknown keyword: SET_ALL
            //Unknown keyword: SET_ALL
            //Unknown keyword: SET_ALL
            yield break;
        }
        public IEnumerator ZOOMMAPIN()
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
            yield return new WaitForTicks(4f);
            var KEY_INS_11 = _world.GetObject(ObjectType.Skill, "KEY_INS");
            var KEY_INS_11_val = KEY_INS_11.GetFloat("VAL");
            if (KEY_INS_11_val > 0f)
            {
                goto ZOOM;
            }
            yield break;
        }
        public IEnumerator ZOOMMAPOUT()
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
            yield return new WaitForTicks(4f);
            var KEY_DEL_11 = _world.GetObject(ObjectType.Skill, "KEY_DEL");
            var KEY_DEL_11_val = KEY_DEL_11.GetFloat("VAL");
            if (KEY_DEL_11_val > 0f)
            {
                goto ZOOM;
            }
            yield break;
        }
    }
}
