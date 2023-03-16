using Acknex;
using Acknex.Interfaces;
using System.Collections;
using UnityEngine;
public class Game
{
    public IEnumerator INIT_MOVE()
    {
        var rhs_0 = World.Instance.GetObject(ObjectType.Skill, "MODE_GEHEN");
        var temp_1 = rhs_0.GetFloat("VAL");
        var lhs_2 = World.Instance.GetObject(ObjectType.Skill, "MOVING");
        lhs_2.SetFloat("VAL", temp_1);
        yield return SET_MOVING();
        yield break;
    }
    public IEnumerator MOVE_ME()
    {
        START:
        var rhs_0 = World.Instance.GetObject(ObjectType.Skill, "MODE_GEHEN");
        var temp_1 = rhs_0.GetFloat("VAL");
        var lhs_2 = World.Instance.GetObject(ObjectType.Skill, "MOVING");
        var temp_3 = lhs_2.GetFloat("VAL");
        if (temp_3 == temp_1)
        {
            var lhs_4 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var temp_5 = World.Instance.GetObject(ObjectType.Skill, "MY_SIZE");
            var temp_6 = temp_5.GetFloat("VAL");
            var temp_10 = World.Instance.GetObject(ObjectType.Skill, "WALK");
            var temp_11 = temp_10.GetFloat("VAL");
            lhs_4.SetFloat("VAL", temp_6 + 0.2f * temp_11);
        }
        var rhs_12 = World.Instance.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
        var temp_13 = rhs_12.GetFloat("VAL");
        var lhs_14 = World.Instance.GetObject(ObjectType.Skill, "MOVING");
        var temp_15 = lhs_14.GetFloat("VAL");
        if (temp_15 == temp_13)
        {
            var lhs_16 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var temp_21 = World.Instance.GetObject(ObjectType.Skill, "WAVE");
            var temp_22 = temp_21.GetFloat("VAL");
            lhs_16.SetFloat("VAL", 1f + 0.12f * temp_22);
        }
        var rhs_23 = World.Instance.GetObject(ObjectType.Skill, "MODE_TAUCHEN");
        var temp_24 = rhs_23.GetFloat("VAL");
        var lhs_25 = World.Instance.GetObject(ObjectType.Skill, "MOVING");
        var temp_26 = lhs_25.GetFloat("VAL");
        if (temp_26 == temp_24)
        {
            var lhs_27 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            lhs_27.SetFloat("VAL", 1f);
        }
        var rhs_29 = World.Instance.GetObject(ObjectType.Skill, "MODE_GEHEN");
        var temp_30 = rhs_29.GetFloat("VAL");
        var lhs_31 = World.Instance.GetObject(ObjectType.Skill, "MOVING");
        var temp_32 = lhs_31.GetFloat("VAL");
        if (temp_32 == temp_30)
        {
            var lhs_33 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var temp_34 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_SIZE");
            var temp_35 = temp_34.GetFloat("VAL");
            var temp_37 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_DEPTH");
            var temp_38 = temp_37.GetFloat("VAL");
            lhs_33.SetFloat("VAL", temp_35 - temp_38);
        }
        NO_WATEN:
        var rhs_39 = World.Instance.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
        var temp_40 = rhs_39.GetFloat("VAL");
        var lhs_41 = World.Instance.GetObject(ObjectType.Skill, "MOVING");
        var temp_42 = lhs_41.GetFloat("VAL");
        if (temp_42 != temp_40)
        {
            goto NO_SWIM;
        }
        var lhs_44 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_DEPTH");
        var temp_45 = lhs_44.GetFloat("VAL");
        if (temp_45 > 1.5f)
        {
            goto NO_WATER;
        }
        yield return SET_WALKING();
        goto START;
        NO_SWIM:
        var rhs_46 = World.Instance.GetObject(ObjectType.Skill, "MODE_GEHEN");
        var temp_47 = rhs_46.GetFloat("VAL");
        var lhs_48 = World.Instance.GetObject(ObjectType.Skill, "MOVING");
        var temp_49 = lhs_48.GetFloat("VAL");
        if (temp_49 != temp_47)
        {
            goto NO_WATER;
        }
        var lhs_51 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_DEPTH");
        var temp_52 = lhs_51.GetFloat("VAL");
        if (temp_52 < 2.5f)
        {
            goto NO_WATER;
        }
        yield return SET_SWIMMING();
        goto START;
        NO_WATER:
        var lhs_54 = World.Instance.GetObject(ObjectType.Skill, "MOUSE_MIDDLE");
        var temp_55 = lhs_54.GetFloat("VAL");
        if (temp_55 == 0f)
        {
            goto NO_MOUSE;
        }
        var rhs_56 = World.Instance.GetObject(ObjectType.Skill, "KEY_SENSE");
        var temp_57 = rhs_56.GetFloat("VAL");
        var lhs_58 = World.Instance.GetObject(ObjectType.Skill, "FORCE_AHEAD");
        lhs_58.SetFloat("VAL", temp_57);
        var lhs_60 = World.Instance.GetObject(ObjectType.Skill, "KEY_SHIFT");
        var temp_61 = lhs_60.GetFloat("VAL");
        if (temp_61 == 1f)
        {
            var lhs_62 = World.Instance.GetObject(ObjectType.Skill, "FORCE_AHEAD");
            var temp_63 = World.Instance.GetObject(ObjectType.Skill, "FORCE_AHEAD");
            var temp_64 = temp_63.GetFloat("VAL");
            var temp_66 = World.Instance.GetObject(ObjectType.Skill, "SHIFT_SENSE");
            var temp_67 = temp_66.GetFloat("VAL");
            lhs_62.SetFloat("VAL", temp_64 * temp_67);
        }
        NO_MOUSE:
        var lhs_69 = World.Instance.GetObject(ObjectType.Skill, "BOOSTER");
        lhs_69.SetFloat("VAL", 1f);
        var rhs_70 = World.Instance.GetObject(ObjectType.Skill, "MASS");
        var temp_71 = rhs_70.GetFloat("VAL");
        var lhs_72 = World.Instance.GetObject(ObjectType.Skill, "INERTIA");
        lhs_72.SetFloat("VAL", temp_71);
        var lhs_73 = World.Instance.GetObject(ObjectType.Skill, "FRICTION");
        var temp_74 = World.Instance.GetObject(ObjectType.Skill, "FRIC");
        var temp_75 = temp_74.GetFloat("VAL");
        var temp_79 = World.Instance.GetObject(ObjectType.Skill, "DEPTH");
        var temp_80 = temp_79.GetFloat("VAL");
        lhs_73.SetFloat("VAL", temp_75 + 0.1f * temp_80);
        var lhs_81 = World.Instance.GetObject(ObjectType.Skill, "FORCE");
        var temp_83 = World.Instance.GetObject(ObjectType.Skill, "STRENGTH");
        var temp_84 = temp_83.GetFloat("VAL");
        var temp_86 = World.Instance.GetObject(ObjectType.Skill, "WAVE_STR");
        var temp_87 = temp_86.GetFloat("VAL");
        var temp_89 = World.Instance.GetObject(ObjectType.Skill, "WAVE");
        var temp_90 = temp_89.GetFloat("VAL");
        var temp_93 = World.Instance.GetObject(ObjectType.Skill, "BOOSTER");
        var temp_94 = temp_93.GetFloat("VAL");
        var temp_97 = World.Instance.GetObject(ObjectType.Skill, "FORCE_AHEAD");
        var temp_98 = temp_97.GetFloat("VAL");
        var temp_100 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_COS");
        var temp_101 = temp_100.GetFloat("VAL");
        var temp_105 = World.Instance.GetObject(ObjectType.Skill, "FORCE_STRAFE");
        var temp_106 = temp_105.GetFloat("VAL");
        var temp_108 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_SIN");
        var temp_109 = temp_108.GetFloat("VAL");
        var temp_112 = World.Instance.GetObject(ObjectType.Skill, "DRIFT_X");
        var temp_113 = temp_112.GetFloat("VAL");
        lhs_81.SetFloat("VAL", (temp_84 + temp_87 * temp_90) * temp_94 * (temp_98 * temp_101 - 0.5f * temp_106 * temp_109) + temp_113);
        //Unknown keyword: ACCEL
        var lhs_114 = World.Instance.GetObject(ObjectType.Skill, "FORCE");
        var temp_116 = World.Instance.GetObject(ObjectType.Skill, "STRENGTH");
        var temp_117 = temp_116.GetFloat("VAL");
        var temp_119 = World.Instance.GetObject(ObjectType.Skill, "WAVE_STR");
        var temp_120 = temp_119.GetFloat("VAL");
        var temp_122 = World.Instance.GetObject(ObjectType.Skill, "WAVE");
        var temp_123 = temp_122.GetFloat("VAL");
        var temp_126 = World.Instance.GetObject(ObjectType.Skill, "BOOSTER");
        var temp_127 = temp_126.GetFloat("VAL");
        var temp_130 = World.Instance.GetObject(ObjectType.Skill, "FORCE_AHEAD");
        var temp_131 = temp_130.GetFloat("VAL");
        var temp_133 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_SIN");
        var temp_134 = temp_133.GetFloat("VAL");
        var temp_138 = World.Instance.GetObject(ObjectType.Skill, "FORCE_STRAFE");
        var temp_139 = temp_138.GetFloat("VAL");
        var temp_141 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_COS");
        var temp_142 = temp_141.GetFloat("VAL");
        var temp_145 = World.Instance.GetObject(ObjectType.Skill, "DRIFT_Y");
        var temp_146 = temp_145.GetFloat("VAL");
        lhs_114.SetFloat("VAL", (temp_117 + temp_120 * temp_123) * temp_127 * (temp_131 * temp_134 + 0.5f * temp_139 * temp_142) + temp_146);
        //Unknown keyword: ACCEL
        var lhs_148 = World.Instance.GetObject(ObjectType.Skill, "FRICTION");
        lhs_148.SetFloat("VAL", 0.5f);
        var rhs_149 = World.Instance.GetObject(ObjectType.Skill, "MODE_GEHEN");
        var temp_150 = rhs_149.GetFloat("VAL");
        var lhs_151 = World.Instance.GetObject(ObjectType.Skill, "MOVING");
        var temp_152 = lhs_151.GetFloat("VAL");
        if (temp_152 != temp_150)
        {
            var lhs_154 = World.Instance.GetObject(ObjectType.Skill, "FRICTION");
            lhs_154.SetFloat("VAL", 0.85f);
        }
        var lhs_155 = World.Instance.GetObject(ObjectType.Skill, "FORCE");
        var temp_158 = World.Instance.GetObject(ObjectType.Skill, "FORCE_ROT");
        var temp_159 = temp_158.GetFloat("VAL");
        lhs_155.SetFloat("VAL", 0.05f * temp_159);
        //Unknown keyword: ACCEL
        var lhs_160 = World.Instance.GetObject(ObjectType.Skill, "FORCE");
        var temp_161 = World.Instance.GetObject(ObjectType.Skill, "GRAVITY");
        var temp_162 = temp_161.GetFloat("VAL");
        var temp_164 = World.Instance.GetObject(ObjectType.Skill, "FLOAT_STR");
        var temp_165 = temp_164.GetFloat("VAL");
        var temp_167 = World.Instance.GetObject(ObjectType.Skill, "FORCE_UP");
        var temp_168 = temp_167.GetFloat("VAL");
        lhs_160.SetFloat("VAL", temp_162 + temp_165 * temp_168);
        var rhs_169 = World.Instance.GetObject(ObjectType.Skill, "FRIC_AIR");
        var temp_170 = rhs_169.GetFloat("VAL");
        var lhs_171 = World.Instance.GetObject(ObjectType.Skill, "FRICTION");
        lhs_171.SetFloat("VAL", temp_170);
        var lhs_173 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_HGT");
        var temp_174 = lhs_173.GetFloat("VAL");
        if (temp_174 > 0f)
        {
            goto AIRBORNE;
        }
        var lhs_176 = World.Instance.GetObject(ObjectType.Skill, "FRICTION");
        lhs_176.SetFloat("VAL", 0.98f);
        var lhs_177 = World.Instance.GetObject(ObjectType.Skill, "FORCE");
        var temp_178 = World.Instance.GetObject(ObjectType.Skill, "FORCE");
        var temp_179 = temp_178.GetFloat("VAL");
        var temp_183 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_HGT");
        var temp_184 = temp_183.GetFloat("VAL");
        lhs_177.SetFloat("VAL", temp_179 - 0.2f * temp_184);
        AIRBORNE:
        //Unknown keyword: ACCEL
        var lhs_185 = World.Instance.GetObject(ObjectType.Skill, "DUCK_VAL");
        var temp_188 = World.Instance.GetObject(ObjectType.Skill, "DUCK_VAL");
        var temp_189 = temp_188.GetFloat("VAL");
        lhs_185.SetFloat("VAL", 0.8f * temp_189);
        var rhs_190 = World.Instance.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
        var temp_191 = rhs_190.GetFloat("VAL");
        var lhs_192 = World.Instance.GetObject(ObjectType.Skill, "MOVING");
        var temp_193 = lhs_192.GetFloat("VAL");
        if (temp_193 == temp_191)
        {
            goto DUCK;
        }
        var lhs_195 = World.Instance.GetObject(ObjectType.Skill, "FORCE_UP");
        var temp_196 = lhs_195.GetFloat("VAL");
        if (temp_196 > 0f)
        {
            goto NO_DUCK;
        }
        DUCK:
        var lhs_197 = World.Instance.GetObject(ObjectType.Skill, "DUCK_VAL");
        var temp_198 = World.Instance.GetObject(ObjectType.Skill, "DUCK_VAL");
        var temp_199 = temp_198.GetFloat("VAL");
        var temp_201 = World.Instance.GetObject(ObjectType.Skill, "DUCK_STR");
        var temp_202 = temp_201.GetFloat("VAL");
        var temp_204 = World.Instance.GetObject(ObjectType.Skill, "FORCE_UP");
        var temp_205 = temp_204.GetFloat("VAL");
        lhs_197.SetFloat("VAL", temp_199 + temp_202 * temp_205);
        NO_DUCK:
        var lhs_206 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_SIZE");
        var temp_207 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_SIZE");
        var temp_208 = temp_207.GetFloat("VAL");
        var temp_210 = World.Instance.GetObject(ObjectType.Skill, "DUCK_VAL");
        var temp_211 = temp_210.GetFloat("VAL");
        lhs_206.SetFloat("VAL", temp_208 + temp_211);
        var rhs_212 = World.Instance.GetObject(ObjectType.Skill, "MODE_GEHEN");
        var temp_213 = rhs_212.GetFloat("VAL");
        var lhs_214 = World.Instance.GetObject(ObjectType.Skill, "MOVING");
        var temp_215 = lhs_214.GetFloat("VAL");
        if (temp_215 != temp_213)
        {
            goto NO_JUMP;
        }
        var lhs_217 = World.Instance.GetObject(ObjectType.Skill, "JUMP_PHASE");
        var temp_218 = lhs_217.GetFloat("VAL");
        if (temp_218 > 0f)
        {
            goto JUMP_1;
        }
        var lhs_220 = World.Instance.GetObject(ObjectType.Skill, "FORCE_UP");
        var temp_221 = lhs_220.GetFloat("VAL");
        if (temp_221 < 0.1f)
        {
            goto NO_JUMP;
        }
        var lhs_223 = World.Instance.GetObject(ObjectType.Skill, "JUMP_PHASE");
        lhs_223.SetFloat("VAL", 1f);
        JUMP_1:
        var lhs_225 = World.Instance.GetObject(ObjectType.Skill, "JUMP_PHASE");
        var temp_226 = lhs_225.GetFloat("VAL");
        if (temp_226 > 1f)
        {
            goto JUMP_2;
        }
        var lhs_227 = World.Instance.GetObject(ObjectType.Skill, "DUCK_VAL");
        var temp_228 = World.Instance.GetObject(ObjectType.Skill, "DUCK_VAL");
        var temp_229 = temp_228.GetFloat("VAL");
        lhs_227.SetFloat("VAL", temp_229 - 0.5f);
        var lhs_233 = World.Instance.GetObject(ObjectType.Skill, "DUCK_VAL");
        var temp_234 = lhs_233.GetFloat("VAL");
        if (temp_234 < -0.7f)
        {
            var lhs_236 = World.Instance.GetObject(ObjectType.Skill, "JUMP_PHASE");
            lhs_236.SetFloat("VAL", 2f);
        }
        goto NO_JUMP;
        JUMP_2:
        var lhs_238 = World.Instance.GetObject(ObjectType.Skill, "JUMP_PHASE");
        var temp_239 = lhs_238.GetFloat("VAL");
        if (temp_239 > 2f)
        {
            goto JUMP_3;
        }
        var lhs_241 = World.Instance.GetObject(ObjectType.Skill, "DUCK_VAL");
        lhs_241.SetFloat("VAL", 0f);
        var lhs_242 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_Z");
        var temp_243 = World.Instance.GetObject(ObjectType.Skill, "FLOOR_HGT");
        var temp_244 = temp_243.GetFloat("VAL");
        var temp_246 = World.Instance.GetObject(ObjectType.Skill, "MY_SIZE");
        var temp_247 = temp_246.GetFloat("VAL");
        lhs_242.SetFloat("VAL", temp_244 + temp_247);
        var lhs_249 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_VZ");
        lhs_249.SetFloat("VAL", 0.5f);
        var lhs_251 = World.Instance.GetObject(ObjectType.Skill, "JUMP_PHASE");
        lhs_251.SetFloat("VAL", 3f);
        goto NO_JUMP;
        JUMP_3:
        var lhs_253 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_VZ");
        var temp_254 = lhs_253.GetFloat("VAL");
        if (temp_254 > 0f)
        {
            goto NO_JUMP;
        }
        var lhs_256 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_HGT");
        var temp_257 = lhs_256.GetFloat("VAL");
        if (temp_257 > 0f)
        {
            goto NO_JUMP;
        }
        var lhs_259 = World.Instance.GetObject(ObjectType.Skill, "JUMP_PHASE");
        lhs_259.SetFloat("VAL", 0f);
        NO_JUMP:
        var lhs_260 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
        var temp_261 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_VX");
        var temp_262 = temp_261.GetFloat("VAL");
        var temp_264 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_VX");
        var temp_265 = temp_264.GetFloat("VAL");
        var temp_267 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_VY");
        var temp_268 = temp_267.GetFloat("VAL");
        var temp_270 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_VY");
        var temp_271 = temp_270.GetFloat("VAL");
        lhs_260.SetFloat("VAL", temp_262 * temp_265 + temp_268 * temp_271);
        var lhs_273 = World.Instance.GetObject(ObjectType.Skill, "TILT_DECREASE");
        var temp_274 = lhs_273.GetFloat("VAL");
        if (temp_274 != 1f)
        {
            goto CALC_TILT;
        }
        var rhs_275 = World.Instance.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_P");
        var temp_276 = rhs_275.GetFloat("VAL");
        var lhs_277 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_TILT");
        var temp_278 = lhs_277.GetFloat("VAL");
        if (temp_278 > temp_276)
        {
            goto CHECK_SPEED_TILT;
        }
        var rhs_279 = World.Instance.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_N");
        var temp_280 = rhs_279.GetFloat("VAL");
        var lhs_281 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_TILT");
        var temp_282 = lhs_281.GetFloat("VAL");
        if (temp_282 > temp_280)
        {
            goto DECR_TILT;
        }
        CHECK_SPEED_TILT:
        var lhs_284 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
        var temp_285 = lhs_284.GetFloat("VAL");
        if (temp_285 > 0.4f)
        {
            goto DECR_TILT;
        }
        var lhs_287 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_VZ");
        var temp_288 = lhs_287.GetFloat("VAL");
        if (temp_288 != 0f)
        {
            goto DECR_TILT;
        }
        goto CALC_TILT;
        DECR_TILT:
        var lhs_290 = World.Instance.GetObject(ObjectType.Skill, "TILT_DECREASE");
        lhs_290.SetFloat("VAL", 0.8f);
        CALC_TILT:
        var lhs_291 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_TILT");
        var temp_292 = World.Instance.GetObject(ObjectType.Skill, "TILT_DECREASE");
        var temp_293 = temp_292.GetFloat("VAL");
        var temp_295 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_TILT");
        var temp_296 = temp_295.GetFloat("VAL");
        var temp_300 = World.Instance.GetObject(ObjectType.Skill, "FORCE_TILT");
        var temp_301 = temp_300.GetFloat("VAL");
        var temp_305 = World.Instance.GetObject(ObjectType.Skill, "FLOAT_STR");
        var temp_306 = temp_305.GetFloat("VAL");
        var temp_308 = World.Instance.GetObject(ObjectType.Skill, "FORCE_UP");
        var temp_309 = temp_308.GetFloat("VAL");
        var temp_314 = World.Instance.GetObject(ObjectType.Skill, "FLY_MODE");
        var temp_315 = temp_314.GetFloat("VAL");
        lhs_291.SetFloat("VAL", temp_293 * temp_296 + 0.3f * temp_301 - 0.3f * temp_306 * temp_309 * (1f - temp_315));
        var lhs_318 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_SPEED_SQR");
        var temp_319 = lhs_318.GetFloat("VAL");
        if (temp_319 > 0f)
        {
            //Unknown keyword: SKIP
        }
        var rhs_320 = World.Instance.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_P");
        var temp_321 = rhs_320.GetFloat("VAL");
        var lhs_322 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_TILT");
        var temp_323 = lhs_322.GetFloat("VAL");
        if (temp_323 > temp_321)
        {
            var lhs_325 = World.Instance.GetObject(ObjectType.Skill, "TILT_DECREASE");
            lhs_325.SetFloat("VAL", 1f);
        }
        var rhs_326 = World.Instance.GetObject(ObjectType.Skill, "MAX_PLAYER_TILT_N");
        var temp_327 = rhs_326.GetFloat("VAL");
        var lhs_328 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_TILT");
        var temp_329 = lhs_328.GetFloat("VAL");
        if (temp_329 < temp_327)
        {
            var lhs_331 = World.Instance.GetObject(ObjectType.Skill, "TILT_DECREASE");
            lhs_331.SetFloat("VAL", 1f);
        }
        var rhs_332 = World.Instance.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
        var temp_333 = rhs_332.GetFloat("VAL");
        var lhs_334 = World.Instance.GetObject(ObjectType.Skill, "MOVING");
        var temp_335 = lhs_334.GetFloat("VAL");
        if (temp_335 == temp_333)
        {
            var lhs_336 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var temp_337 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var temp_338 = temp_337.GetFloat("VAL");
            var temp_342 = World.Instance.GetObject(ObjectType.Skill, "WAVE");
            var temp_343 = temp_342.GetFloat("VAL");
            lhs_336.SetFloat("VAL", temp_338 + 0.01f * temp_343);
        }
        var rhs_344 = World.Instance.GetObject(ObjectType.Skill, "MODE_TAUCHEN");
        var temp_345 = rhs_344.GetFloat("VAL");
        var lhs_346 = World.Instance.GetObject(ObjectType.Skill, "MOVING");
        var temp_347 = lhs_346.GetFloat("VAL");
        if (temp_347 == temp_345)
        {
            goto NO_HTILT;
        }
        var lhs_349 = World.Instance.GetObject(ObjectType.Skill, "JUMP_PHASE");
        var temp_350 = lhs_349.GetFloat("VAL");
        if (temp_350 > 0f)
        {
            goto NO_HTILT;
        }
        var lhs_352 = World.Instance.GetObject(ObjectType.Skill, "TILT_DECREASE");
        var temp_353 = lhs_352.GetFloat("VAL");
        if (temp_353 < 1f)
        {
            var lhs_354 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var temp_355 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_TILT");
            var temp_356 = temp_355.GetFloat("VAL");
            var temp_361 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_HGT");
            var temp_362 = temp_361.GetFloat("VAL");
            lhs_354.SetFloat("VAL", temp_356 + 0.03f * (temp_362 + 0.3f));
        }
        NO_HTILT:
        var lhs_367 = World.Instance.GetObject(ObjectType.Skill, "RICHTER");
        var temp_368 = lhs_367.GetFloat("VAL");
        if (temp_368 == 0f)
        {
            goto NO_QUAKE;
        }
        var lhs_369 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_Z");
        var temp_370 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_Z");
        var temp_371 = temp_370.GetFloat("VAL");
        var temp_373 = World.Instance.GetObject(ObjectType.Skill, "RICHTER");
        var temp_374 = temp_373.GetFloat("VAL");
        var temp_377 = World.Instance.GetObject(ObjectType.Skill, "RANDOM_2");
        var temp_378 = temp_377.GetFloat("VAL");
        lhs_369.SetFloat("VAL", temp_371 + temp_374 * (temp_378 - 0.5f));
        var rhs_382 = World.Instance.GetObject(ObjectType.Skill, "RANDOM_1");
        var temp_383 = rhs_382.GetFloat("VAL");
        var lhs_384 = World.Instance.GetObject(ObjectType.Skill, "RANDOM_2");
        lhs_384.SetFloat("VAL", temp_383);
        var lhs_386 = World.Instance.GetObject(ObjectType.Skill, "RANDOM_1");
        lhs_386.SetFloat("VAL", UnityEngine.Random.value);
        NO_QUAKE:
        yield break;
        var lhs_388 = World.Instance.GetObject(ObjectType.Skill, "KEY_INS");
        var temp_389 = lhs_388.GetFloat("VAL");
        if (temp_389 > 0f)
        {
            var lhs_390 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var temp_391 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var temp_392 = temp_391.GetFloat("VAL");
            lhs_390.SetFloat("VAL", temp_392 - 0.1f);
        }
        var lhs_396 = World.Instance.GetObject(ObjectType.Skill, "KEY_DEL");
        var temp_397 = lhs_396.GetFloat("VAL");
        if (temp_397 > 0f)
        {
            var lhs_398 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var temp_399 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_ARC");
            var temp_400 = temp_399.GetFloat("VAL");
            lhs_398.SetFloat("VAL", temp_400 + 0.1f);
        }
        yield break;
    }
    public IEnumerator SET_WALKING()
    {
        var rhs_0 = World.Instance.GetObject(ObjectType.Skill, "MODE_GEHEN");
        var temp_1 = rhs_0.GetFloat("VAL");
        var lhs_2 = World.Instance.GetObject(ObjectType.Skill, "MOVING");
        lhs_2.SetFloat("VAL", temp_1);
        var lhs_4 = World.Instance.GetObject(ObjectType.Skill, "FRIC");
        lhs_4.SetFloat("VAL", 0.2f);
        var lhs_6 = World.Instance.GetObject(ObjectType.Skill, "STRENGTH");
        lhs_6.SetFloat("VAL", 0.15f);
        var lhs_8 = World.Instance.GetObject(ObjectType.Skill, "WAVE_STR");
        lhs_8.SetFloat("VAL", 0f);
        var lhs_10 = World.Instance.GetObject(ObjectType.Skill, "FLOAT_STR");
        lhs_10.SetFloat("VAL", 0f);
        var lhs_12 = World.Instance.GetObject(ObjectType.Skill, "DUCK_STR");
        lhs_12.SetFloat("VAL", 0.5f);
        var lhs_14 = World.Instance.GetObject(ObjectType.Skill, "FRIC_AIR");
        lhs_14.SetFloat("VAL", 0.04f);
        var lhs_16 = World.Instance.GetObject(ObjectType.Skill, "GRAVITY");
        lhs_16.SetFloat("VAL", -0.13f);
        var rhs_17 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MOVE_ME");
        World.Instance.AcknexObject.SetString("EACH_TICK.16", rhs_17.GetString("NAME"));
        yield break;
    }
    public IEnumerator SET_SWIMMING()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "FRIC");
        lhs_1.SetFloat("VAL", 0.3f);
        var rhs_2 = World.Instance.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
        var temp_3 = rhs_2.GetFloat("VAL");
        var lhs_4 = World.Instance.GetObject(ObjectType.Skill, "MOVING");
        lhs_4.SetFloat("VAL", temp_3);
        var lhs_6 = World.Instance.GetObject(ObjectType.Skill, "STRENGTH");
        lhs_6.SetFloat("VAL", 0.15f);
        var lhs_8 = World.Instance.GetObject(ObjectType.Skill, "WAVE_STR");
        lhs_8.SetFloat("VAL", 0.08f);
        var lhs_10 = World.Instance.GetObject(ObjectType.Skill, "FLOAT_STR");
        lhs_10.SetFloat("VAL", 0f);
        var lhs_12 = World.Instance.GetObject(ObjectType.Skill, "DUCK_STR");
        lhs_12.SetFloat("VAL", 0.2f);
        var lhs_14 = World.Instance.GetObject(ObjectType.Skill, "FRIC_AIR");
        lhs_14.SetFloat("VAL", 0.5f);
        var lhs_16 = World.Instance.GetObject(ObjectType.Skill, "GRAVITY");
        lhs_16.SetFloat("VAL", -0.05f);
        var rhs_17 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MOVE_ME");
        World.Instance.AcknexObject.SetString("EACH_TICK.16", rhs_17.GetString("NAME"));
        yield break;
    }
    public IEnumerator SET_DIVING()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "FRIC");
        lhs_1.SetFloat("VAL", 0.3f);
        var rhs_2 = World.Instance.GetObject(ObjectType.Skill, "MODE_TAUCHEN");
        var temp_3 = rhs_2.GetFloat("VAL");
        var lhs_4 = World.Instance.GetObject(ObjectType.Skill, "MOVING");
        lhs_4.SetFloat("VAL", temp_3);
        var lhs_6 = World.Instance.GetObject(ObjectType.Skill, "STRENGTH");
        lhs_6.SetFloat("VAL", 0.1f);
        var lhs_8 = World.Instance.GetObject(ObjectType.Skill, "WAVE_STR");
        lhs_8.SetFloat("VAL", 0.03f);
        var lhs_10 = World.Instance.GetObject(ObjectType.Skill, "FLOAT_STR");
        lhs_10.SetFloat("VAL", 0.05f);
        var lhs_12 = World.Instance.GetObject(ObjectType.Skill, "DUCK_STR");
        lhs_12.SetFloat("VAL", 0f);
        var lhs_14 = World.Instance.GetObject(ObjectType.Skill, "FRIC_AIR");
        lhs_14.SetFloat("VAL", 0.7f);
        var lhs_16 = World.Instance.GetObject(ObjectType.Skill, "GRAVITY");
        lhs_16.SetFloat("VAL", 0f);
        var rhs_17 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MOVE_ME");
        World.Instance.AcknexObject.SetString("EACH_TICK.16", rhs_17.GetString("NAME"));
        yield break;
    }
    public IEnumerator SET_MOVING()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "MOVING");
        var temp_2 = lhs_1.GetFloat("VAL");
        if (temp_2 == 0f)
        {
            yield break;
        }
        var rhs_3 = World.Instance.GetObject(ObjectType.Skill, "MODE_GEHEN");
        var temp_4 = rhs_3.GetFloat("VAL");
        var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "MOVING");
        var temp_6 = lhs_5.GetFloat("VAL");
        if (temp_6 == temp_4)
        {
            yield return SET_WALKING();
            yield break;
        }
        var rhs_7 = World.Instance.GetObject(ObjectType.Skill, "MODE_SCHWIMMEN");
        var temp_8 = rhs_7.GetFloat("VAL");
        var lhs_9 = World.Instance.GetObject(ObjectType.Skill, "MOVING");
        var temp_10 = lhs_9.GetFloat("VAL");
        if (temp_10 == temp_8)
        {
            yield return SET_SWIMMING();
            yield break;
        }
        var rhs_11 = World.Instance.GetObject(ObjectType.Skill, "MODE_TAUCHEN");
        var temp_12 = rhs_11.GetFloat("VAL");
        var lhs_13 = World.Instance.GetObject(ObjectType.Skill, "MOVING");
        var temp_14 = lhs_13.GetFloat("VAL");
        if (temp_14 == temp_12)
        {
            yield return SET_DIVING();
            yield break;
        }
        yield break;
    }
    public IEnumerator STOP_MOVING()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_VX");
        lhs_1.SetFloat("VAL", 0f);
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_VY");
        lhs_3.SetFloat("VAL", 0f);
        var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_VZ");
        lhs_5.SetFloat("VAL", 0f);
        var lhs_7 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_VROT");
        lhs_7.SetFloat("VAL", 0f);
        yield break;
    }
    public IEnumerator SET_BLUE()
    {
        //Unknown keyword: FADE_PAL
        yield break;
    }
    public IEnumerator RESET_BLUE()
    {
        //Unknown keyword: FADE_PAL
        yield break;
    }
    public IEnumerator REGIO_DIVE()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "UNDERWATER");
        var temp_2 = lhs_1.GetFloat("VAL");
        if (temp_2 == 1f)
        {
            yield break;
        }
        var lhs_4 = World.Instance.GetObject(ObjectType.Skill, "UNDERWATER");
        lhs_4.SetFloat("VAL", 1f);
        var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_ARC");
        var temp_6 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_ARC");
        var temp_7 = temp_6.GetFloat("VAL");
        lhs_5.SetFloat("VAL", temp_7 + 0.3f);
        var lhs_10 = World.Instance.GetObject(ObjectType.Skill, "MY_SIZE");
        var temp_11 = World.Instance.GetObject(ObjectType.Skill, "MY_SIZE");
        var temp_12 = temp_11.GetFloat("VAL");
        lhs_10.SetFloat("VAL", temp_12 - 0.2f);
        var lhs_15 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_SIZE");
        var temp_16 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_SIZE");
        var temp_17 = temp_16.GetFloat("VAL");
        lhs_15.SetFloat("VAL", temp_17 - 0.2f);
        var lhs_20 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_Z");
        var temp_21 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_Z");
        var temp_22 = temp_21.GetFloat("VAL");
        lhs_20.SetFloat("VAL", temp_22 - 0.2f);
        yield return World.Instance.CallSynonymAction("SET_UNDERWATER");
        yield return SET_DIVING();
        yield break;
    }
    public IEnumerator REGIO_ARISE()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "UNDERWATER");
        var temp_2 = lhs_1.GetFloat("VAL");
        if (temp_2 == 0f)
        {
            yield break;
        }
        var lhs_4 = World.Instance.GetObject(ObjectType.Skill, "UNDERWATER");
        lhs_4.SetFloat("VAL", 0f);
        var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_ARC");
        var temp_6 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_ARC");
        var temp_7 = temp_6.GetFloat("VAL");
        lhs_5.SetFloat("VAL", temp_7 - 0.3f);
        var lhs_10 = World.Instance.GetObject(ObjectType.Skill, "MY_SIZE");
        var temp_11 = World.Instance.GetObject(ObjectType.Skill, "MY_SIZE");
        var temp_12 = temp_11.GetFloat("VAL");
        lhs_10.SetFloat("VAL", temp_12 + 0.2f);
        var lhs_15 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_SIZE");
        var temp_16 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_SIZE");
        var temp_17 = temp_16.GetFloat("VAL");
        lhs_15.SetFloat("VAL", temp_17 + 0.2f);
        var lhs_20 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_Z");
        var temp_21 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_Z");
        var temp_22 = temp_21.GetFloat("VAL");
        lhs_20.SetFloat("VAL", temp_22 + 0.2f);
        yield return World.Instance.CallSynonymAction("SET_OVERWATER");
        yield return SET_SWIMMING();
        yield break;
    }
    public IEnumerator START_QUAKE()
    {
        yield return QUAKE();
        yield break;
        yield break;
    }
    public IEnumerator QUAKE()
    {
        var rhs_0 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"QUAKE");
        World.Instance.AcknexObject.SetString("EACH_TICK.9", rhs_0.GetString("NAME"));
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "RICHTER");
        lhs_3.SetFloat("VAL", 0.1f);
        yield return new WaitForTicks(16f);
        var lhs_6 = World.Instance.GetObject(ObjectType.Skill, "RICHTER");
        lhs_6.SetFloat("VAL", 0.3f);
        yield return new WaitForTicks(32f);
        var lhs_9 = World.Instance.GetObject(ObjectType.Skill, "RICHTER");
        lhs_9.SetFloat("VAL", 0.5f);
        yield return new WaitForTicks(48f);
        var lhs_12 = World.Instance.GetObject(ObjectType.Skill, "RICHTER");
        lhs_12.SetFloat("VAL", 0.2f);
        yield return new WaitForTicks(80f);
        var lhs_15 = World.Instance.GetObject(ObjectType.Skill, "RICHTER");
        lhs_15.SetFloat("VAL", 0.6f);
        yield return new WaitForTicks(32f);
        var lhs_18 = World.Instance.GetObject(ObjectType.Skill, "RICHTER");
        lhs_18.SetFloat("VAL", 0.1f);
        yield return new WaitForTicks(16f);
        var lhs_21 = World.Instance.GetObject(ObjectType.Skill, "RICHTER");
        lhs_21.SetFloat("VAL", 0f);
        World.Instance.AcknexObject.SetString("EACH_TICK.9", null);
        yield break;
    }
    public IEnumerator TUNIX()
    {
        yield break;
        yield break;
    }
    public IEnumerator SET_MENU()
    {
        var rhs_0 = World.Instance.GetSynonymObject("MENU1_STR");
        var acknexObject_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU1_TXT");
        acknexObject_2.SetAcknexObject("STRING", rhs_0);
        var rhs_2 = World.Instance.GetSynonymObject("MENU2_STR");
        var acknexObject_4 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU2_TXT");
        acknexObject_4.SetAcknexObject("STRING", rhs_2);
        var rhs_4 = World.Instance.GetSynonymObject("MENU3_STR");
        var acknexObject_6 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU3_TXT");
        acknexObject_6.SetAcknexObject("STRING", rhs_4);
        var rhs_6 = World.Instance.GetSynonymObject("MENU4_STR");
        var acknexObject_8 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU4_TXT");
        acknexObject_8.SetAcknexObject("STRING", rhs_6);
        var rhs_8 = World.Instance.GetSynonymObject("MENU5_STR");
        var acknexObject_10 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU5_TXT");
        acknexObject_10.SetAcknexObject("STRING", rhs_8);
        var rhs_10 = World.Instance.GetSynonymObject("MENU6_STR");
        var acknexObject_12 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU6_TXT");
        acknexObject_12.SetAcknexObject("STRING", rhs_10);
        var rhs_12 = World.Instance.AcknexObject.GetAcknexObject("EXIT_STR");
        var acknexObject_14 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENUEXIT_TXT");
        acknexObject_14.SetAcknexObject("STRING", rhs_12);
        yield break;
    }
    public IEnumerator SHOW_MENU()
    {
        var rhs_0 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MENU_EXEC");
        World.Instance.AcknexObject.SetString("IF_ENTER", rhs_0.GetString("NAME"));
        var rhs_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CLEAR_MENU");
        World.Instance.AcknexObject.SetString("IF_ESC", rhs_2.GetString("NAME"));
        var rhs_4 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MENU_UP");
        World.Instance.AcknexObject.SetString("IF_CUU", rhs_4.GetString("NAME"));
        var rhs_6 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MENU_DOWN");
        World.Instance.AcknexObject.SetString("IF_CUD", rhs_6.GetString("NAME"));
        var lhs_9 = World.Instance.GetObject(ObjectType.Skill, "MOVE_MODE");
        lhs_9.SetFloat("VAL", 0f);
        var acknexObject_12 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
        acknexObject_12.SetFloat("MIN", 1f);
        var lhs_13 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        var temp_14 = lhs_13.GetFloat("VAL");
        if (temp_14 == 0f)
        {
            var lhs_16 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
            lhs_16.SetFloat("VAL", 1f);
        }
        var acknexObject_18 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENUEXIT_TXT");
        var acknexObject_19 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU1_TXT");
        var temp_19 = acknexObject_19.GetFloat("POS_Y");
        var acknexObject_22 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
        var temp_22 = acknexObject_22.GetFloat("MAX");
        acknexObject_18.SetFloat("POS_Y", temp_19 + temp_22 * 16f - 8f);
        var rhs_27 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU1_TXT");
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.10", rhs_27);
        var rhs_29 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU2_TXT");
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.11", rhs_29);
        var rhs_31 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU3_TXT");
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.12", rhs_31);
        var rhs_33 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU4_TXT");
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.13", rhs_33);
        var rhs_35 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU5_TXT");
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.14", rhs_35);
        var rhs_37 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU6_TXT");
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.15", rhs_37);
        var rhs_39 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENUEXIT_TXT");
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.16", rhs_39);
        BLINK:
        yield return SET_MENU();
        yield return new WaitForTicks(3f);
        //Unknown keyword: IF_MAX
        var rhs_42 = World.Instance.AcknexObject.GetAcknexObject("EMPTY");
        var acknexObject_44 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENUEXIT_TXT");
        acknexObject_44.SetAcknexObject("STRING", rhs_42);
        var lhs_45 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        var temp_46 = lhs_45.GetFloat("VAL");
        if (temp_46 == 1f)
        {
            var rhs_47 = World.Instance.AcknexObject.GetAcknexObject("EMPTY");
            var acknexObject_49 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU1_TXT");
            acknexObject_49.SetAcknexObject("STRING", rhs_47);
        }
        var lhs_50 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        var temp_51 = lhs_50.GetFloat("VAL");
        if (temp_51 == 2f)
        {
            var rhs_52 = World.Instance.AcknexObject.GetAcknexObject("EMPTY");
            var acknexObject_54 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU2_TXT");
            acknexObject_54.SetAcknexObject("STRING", rhs_52);
        }
        var lhs_55 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        var temp_56 = lhs_55.GetFloat("VAL");
        if (temp_56 == 3f)
        {
            var rhs_57 = World.Instance.AcknexObject.GetAcknexObject("EMPTY");
            var acknexObject_59 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU3_TXT");
            acknexObject_59.SetAcknexObject("STRING", rhs_57);
        }
        var lhs_60 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        var temp_61 = lhs_60.GetFloat("VAL");
        if (temp_61 == 4f)
        {
            var rhs_62 = World.Instance.AcknexObject.GetAcknexObject("EMPTY");
            var acknexObject_64 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU4_TXT");
            acknexObject_64.SetAcknexObject("STRING", rhs_62);
        }
        var lhs_65 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        var temp_66 = lhs_65.GetFloat("VAL");
        if (temp_66 == 5f)
        {
            var rhs_67 = World.Instance.AcknexObject.GetAcknexObject("EMPTY");
            var acknexObject_69 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU5_TXT");
            acknexObject_69.SetAcknexObject("STRING", rhs_67);
        }
        var lhs_70 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        var temp_71 = lhs_70.GetFloat("VAL");
        if (temp_71 == 6f)
        {
            var rhs_72 = World.Instance.AcknexObject.GetAcknexObject("EMPTY");
            var acknexObject_74 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU6_TXT");
            acknexObject_74.SetAcknexObject("STRING", rhs_72);
        }
        var lhs_75 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        var temp_76 = lhs_75.GetFloat("VAL");
        if (temp_76 == 0f)
        {
            yield break;
        }
        yield return new WaitForTicks(3f);
        goto BLINK;
        yield break;
    }
    public IEnumerator CLEAR_MENU()
    {
        var rhs_0 = World.Instance.AcknexObject.GetAcknexObject("EMPTY");
        World.Instance.SetSynonymObject("MENU1_STR", rhs_0);
        var rhs_2 = World.Instance.AcknexObject.GetAcknexObject("EMPTY");
        World.Instance.SetSynonymObject("MENU2_STR", rhs_2);
        var rhs_4 = World.Instance.AcknexObject.GetAcknexObject("EMPTY");
        World.Instance.SetSynonymObject("MENU3_STR", rhs_4);
        var rhs_6 = World.Instance.AcknexObject.GetAcknexObject("EMPTY");
        World.Instance.SetSynonymObject("MENU4_STR", rhs_6);
        var rhs_8 = World.Instance.AcknexObject.GetAcknexObject("EMPTY");
        World.Instance.SetSynonymObject("MENU5_STR", rhs_8);
        var rhs_10 = World.Instance.AcknexObject.GetAcknexObject("EMPTY");
        World.Instance.SetSynonymObject("MENU6_STR", rhs_10);
        var rhs_12 = World.Instance.AcknexObject.GetAcknexObject("EMPTY");
        var acknexObject_14 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU1_TXT");
        acknexObject_14.SetAcknexObject("STRING", rhs_12);
        var rhs_14 = World.Instance.AcknexObject.GetAcknexObject("EMPTY");
        var acknexObject_16 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU2_TXT");
        acknexObject_16.SetAcknexObject("STRING", rhs_14);
        var rhs_16 = World.Instance.AcknexObject.GetAcknexObject("EMPTY");
        var acknexObject_18 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU3_TXT");
        acknexObject_18.SetAcknexObject("STRING", rhs_16);
        var rhs_18 = World.Instance.AcknexObject.GetAcknexObject("EMPTY");
        var acknexObject_20 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU4_TXT");
        acknexObject_20.SetAcknexObject("STRING", rhs_18);
        var rhs_20 = World.Instance.AcknexObject.GetAcknexObject("EMPTY");
        var acknexObject_22 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU5_TXT");
        acknexObject_22.SetAcknexObject("STRING", rhs_20);
        var rhs_22 = World.Instance.AcknexObject.GetAcknexObject("EMPTY");
        var acknexObject_24 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"MENU6_TXT");
        acknexObject_24.SetAcknexObject("STRING", rhs_22);
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.10", null);
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.11", null);
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.12", null);
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.13", null);
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.14", null);
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.15", null);
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.16", null);
        var acknexObject_40 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
        acknexObject_40.SetFloat("MIN", 0f);
        var lhs_41 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        lhs_41.SetFloat("VAL", 0f);
        var rhs_42 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MAIN_MENU");
        World.Instance.AcknexObject.SetString("IF_ESC", rhs_42.GetString("NAME"));
        World.Instance.AcknexObject.SetString("IF_CUU", null);
        World.Instance.AcknexObject.SetString("IF_CUD", null);
        World.Instance.AcknexObject.SetString("IF_ENTER", null);
        var lhs_51 = World.Instance.GetObject(ObjectType.Skill, "MOVE_MODE");
        lhs_51.SetFloat("VAL", 1f);
        yield break;
    }
    public IEnumerator MENU_UP()
    {
        //Unknown keyword: PLAY_SOUND
        yield return SET_MENU();
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        var temp_2 = lhs_1.GetFloat("VAL");
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        lhs_3.SetFloat("VAL", temp_2 + -1f);
        yield break;
    }
    public IEnumerator MENU_DOWN()
    {
        //Unknown keyword: PLAY_SOUND
        yield return SET_MENU();
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        var temp_2 = lhs_1.GetFloat("VAL");
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        lhs_3.SetFloat("VAL", temp_2 + 1f);
        yield break;
    }
    public IEnumerator MENU_EXEC()
    {
        //Unknown keyword: PLAY_SOUND
        //Unknown keyword: IF_MAX
        yield return CLEAR_MENU();
        yield break;
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        var temp_2 = lhs_1.GetFloat("VAL");
        if (temp_2 == 1f)
        {
            yield return World.Instance.CallSynonymAction("MENU1_ACT");
            yield break;
        }
        var lhs_4 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        var temp_5 = lhs_4.GetFloat("VAL");
        if (temp_5 == 2f)
        {
            yield return World.Instance.CallSynonymAction("MENU2_ACT");
            yield break;
        }
        var lhs_7 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        var temp_8 = lhs_7.GetFloat("VAL");
        if (temp_8 == 3f)
        {
            yield return World.Instance.CallSynonymAction("MENU3_ACT");
            yield break;
        }
        var lhs_10 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        var temp_11 = lhs_10.GetFloat("VAL");
        if (temp_11 == 4f)
        {
            yield return World.Instance.CallSynonymAction("MENU4_ACT");
            yield break;
        }
        var lhs_13 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        var temp_14 = lhs_13.GetFloat("VAL");
        if (temp_14 == 5f)
        {
            yield return World.Instance.CallSynonymAction("MENU5_ACT");
            yield break;
        }
        var lhs_16 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        var temp_17 = lhs_16.GetFloat("VAL");
        if (temp_17 == 6f)
        {
            yield return World.Instance.CallSynonymAction("MENU6_ACT");
            yield break;
        }
        yield break;
    }
    public IEnumerator SHOW_MESSAGE()
    {
        var rhs_0 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.14", rhs_0);
        yield return new WaitForTicks(48f);
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.14", null);
        yield break;
    }
    public IEnumerator WAIT_YESNO()
    {
        var rhs_0 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.14", rhs_0);
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "MOVE_MODE");
        lhs_3.SetFloat("VAL", 0f);
        var rhs_4 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CLEAR_YESNO");
        World.Instance.AcknexObject.SetString("IF_N", rhs_4.GetString("NAME"));
        var rhs_6 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"CLEAR_YESNO");
        World.Instance.AcknexObject.SetString("IF_ESC", rhs_6.GetString("NAME"));
        yield break;
    }
    public IEnumerator CLEAR_YESNO()
    {
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.14", null);
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "MOVE_MODE");
        lhs_3.SetFloat("VAL", 1f);
        World.Instance.AcknexObject.SetString("IF_J", null);
        World.Instance.AcknexObject.SetString("IF_Y", null);
        World.Instance.AcknexObject.SetString("IF_Z", null);
        World.Instance.AcknexObject.SetString("IF_N", null);
        var rhs_12 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"MAIN_MENU");
        World.Instance.AcknexObject.SetString("IF_ESC", rhs_12.GetString("NAME"));
        yield break;
    }
    public IEnumerator SAVE_GAME()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "MOVE_MODE");
        lhs_1.SetFloat("VAL", 1f);
        //Unknown keyword: SAVE_INFO
        var rhs_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_STATUS");
        World.Instance.AcknexObject.SetString("EACH_TICK.10", rhs_2.GetString("NAME"));
        var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "RESULT");
        lhs_5.SetFloat("VAL", 0f);
        var rhs_6 = World.Instance.AcknexObject.GetAcknexObject("OK");
        var acknexObject_8 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
        acknexObject_8.SetAcknexObject("STRING", rhs_6);
        yield return SHOW_MESSAGE();
        //Unknown keyword: SAVE
        World.Instance.AcknexObject.SetString("EACH_TICK.10", null);
        var lhs_11 = World.Instance.GetObject(ObjectType.Skill, "RESULT");
        var temp_12 = lhs_11.GetFloat("VAL");
        if (temp_12 < 0f)
        {
            var rhs_13 = World.Instance.AcknexObject.GetAcknexObject("SAVE_NIX");
            var acknexObject_15 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            acknexObject_15.SetAcknexObject("STRING", rhs_13);
        }
        yield break;
    }
    public IEnumerator LOAD_GAME()
    {
        var rhs_0 = World.Instance.AcknexObject.GetAcknexObject("WAIT_TXT");
        var acknexObject_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
        acknexObject_2.SetAcknexObject("STRING", rhs_0);
        var rhs_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.14", rhs_2);
        yield return new WaitForCycles(1f);
        //Unknown keyword: LOAD
        var rhs_5 = World.Instance.AcknexObject.GetAcknexObject("LOAD_NIX");
        var acknexObject_7 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
        acknexObject_7.SetAcknexObject("STRING", rhs_5);
        yield return SHOW_MESSAGE();
        yield break;
        yield break;
    }
    public IEnumerator SAVE_QUICK()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "SLOT");
        var temp_2 = lhs_1.GetFloat("VAL");
        if (temp_2 == 0f)
        {
            yield return SAVE_MENU();
            yield break;
        }
        yield return CLEAR_MENU();
        var rhs_3 = World.Instance.AcknexObject.GetAcknexObject("QSAV_YESNO");
        var acknexObject_5 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
        acknexObject_5.SetAcknexObject("STRING", rhs_3);
        var rhs_5 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_GAME");
        World.Instance.AcknexObject.SetString("IF_J", rhs_5.GetString("NAME"));
        var rhs_7 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_GAME");
        World.Instance.AcknexObject.SetString("IF_Y", rhs_7.GetString("NAME"));
        var rhs_9 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_GAME");
        World.Instance.AcknexObject.SetString("IF_Z", rhs_9.GetString("NAME"));
        yield return WAIT_YESNO();
        yield break;
    }
    public IEnumerator LOAD_QUICK()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "SLOT");
        var temp_2 = lhs_1.GetFloat("VAL");
        if (temp_2 == 0f)
        {
            yield return LOAD_MENU();
            yield break;
        }
        yield return CLEAR_MENU();
        var rhs_3 = World.Instance.AcknexObject.GetAcknexObject("QLOAD_YESNO");
        var acknexObject_5 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
        acknexObject_5.SetAcknexObject("STRING", rhs_3);
        var rhs_5 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_GAME");
        World.Instance.AcknexObject.SetString("IF_J", rhs_5.GetString("NAME"));
        var rhs_7 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_GAME");
        World.Instance.AcknexObject.SetString("IF_Y", rhs_7.GetString("NAME"));
        var rhs_9 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_GAME");
        World.Instance.AcknexObject.SetString("IF_Z", rhs_9.GetString("NAME"));
        yield return WAIT_YESNO();
        yield break;
    }
    public IEnumerator LOAD_STATUS()
    {
        yield return new WaitForCycles(1f);
        //Unknown keyword: LOAD_INFO
        World.Instance.AcknexObject.SetString("EACH_TICK.10", null);
        var lhs_4 = World.Instance.GetObject(ObjectType.Skill, "MOVE_MODE");
        lhs_4.SetFloat("VAL", 1f);
        yield break;
    }
    public IEnumerator EXIT_YESNO()
    {
        yield return CLEAR_MENU();
        var rhs_0 = World.Instance.AcknexObject.GetAcknexObject("QUIT_YESNO");
        var acknexObject_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
        acknexObject_2.SetAcknexObject("STRING", rhs_0);
        var rhs_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXIT_GAME");
        World.Instance.AcknexObject.SetString("IF_J", rhs_2.GetString("NAME"));
        var rhs_4 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXIT_GAME");
        World.Instance.AcknexObject.SetString("IF_Y", rhs_4.GetString("NAME"));
        var rhs_6 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXIT_GAME");
        World.Instance.AcknexObject.SetString("IF_Z", rhs_6.GetString("NAME"));
        yield return WAIT_YESNO();
        yield break;
    }
    public IEnumerator EXIT_GAME()
    {
        Application.Quit();
        yield break;
    }
    public IEnumerator TOGGLE_MAP()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "MAP_ROT");
        lhs_1.SetFloat("VAL", 1f);
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "MAP_MODE");
        var temp_4 = lhs_3.GetFloat("VAL");
        var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "MAP_MODE");
        lhs_5.SetFloat("VAL", temp_4 + 0.5f);
        var lhs_7 = World.Instance.GetObject(ObjectType.Skill, "MAP_MODE");
        var temp_8 = lhs_7.GetFloat("VAL");
        if (temp_8 > 0.5f)
        {
            var lhs_10 = World.Instance.GetObject(ObjectType.Skill, "MAP_MODE");
            lhs_10.SetFloat("VAL", 0f);
        }
        yield break;
    }
    public IEnumerator MSCALE_PLUS()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "MAP_MODE");
        var temp_2 = lhs_1.GetFloat("VAL");
        if (temp_2 == 0f)
        {
            yield break;
        }
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "MAP_SCALE");
        var temp_4 = World.Instance.GetObject(ObjectType.Skill, "MAP_SCALE");
        var temp_5 = temp_4.GetFloat("VAL");
        lhs_3.SetFloat("VAL", temp_5 * 1.1f);
        yield break;
    }
    public IEnumerator MSCALE_MINUS()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "MAP_MODE");
        var temp_2 = lhs_1.GetFloat("VAL");
        if (temp_2 == 0f)
        {
            yield break;
        }
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "MAP_SCALE");
        var temp_4 = World.Instance.GetObject(ObjectType.Skill, "MAP_SCALE");
        var temp_5 = temp_4.GetFloat("VAL");
        lhs_3.SetFloat("VAL", temp_5 * 0.9f);
        yield break;
    }
    public IEnumerator TOGGLE_MBLUR()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "MOTION_BLUR");
        var temp_2 = lhs_1.GetFloat("VAL");
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "MOTION_BLUR");
        lhs_3.SetFloat("VAL", temp_2 + 0.5f);
        var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "MOTION_BLUR");
        var temp_6 = lhs_5.GetFloat("VAL");
        if (temp_6 > 0.5f)
        {
            var lhs_8 = World.Instance.GetObject(ObjectType.Skill, "MOTION_BLUR");
            lhs_8.SetFloat("VAL", 0f);
        }
        var rhs_9 = World.Instance.AcknexObject.GetAcknexObject("MBLUR_ON");
        var acknexObject_11 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
        acknexObject_11.SetAcknexObject("STRING", rhs_9);
        var lhs_12 = World.Instance.GetObject(ObjectType.Skill, "MOTION_BLUR");
        var temp_13 = lhs_12.GetFloat("VAL");
        if (temp_13 == 0f)
        {
            var rhs_14 = World.Instance.AcknexObject.GetAcknexObject("MBLUR_OFF");
            var acknexObject_16 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
            acknexObject_16.SetAcknexObject("STRING", rhs_14);
        }
        yield return SHOW_MESSAGE();
        yield break;
        yield break;
    }
    public IEnumerator INCREASE_VOL()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "SOUND_VOL");
        var temp_2 = lhs_1.GetFloat("VAL");
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "SOUND_VOL");
        lhs_3.SetFloat("VAL", temp_2 + 0.2f);
        var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "MUSIC_VOL");
        var temp_6 = lhs_5.GetFloat("VAL");
        var lhs_7 = World.Instance.GetObject(ObjectType.Skill, "MUSIC_VOL");
        lhs_7.SetFloat("VAL", temp_6 + 0.1f);
        var rhs_8 = World.Instance.AcknexObject.GetAcknexObject("VOL_PLUS");
        var acknexObject_10 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
        acknexObject_10.SetAcknexObject("STRING", rhs_8);
        yield return SHOW_MESSAGE();
        yield break;
        yield break;
    }
    public IEnumerator DECREASE_VOL()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "SOUND_VOL");
        var temp_2 = lhs_1.GetFloat("VAL");
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "SOUND_VOL");
        lhs_3.SetFloat("VAL", temp_2 + -0.2f);
        var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "MUSIC_VOL");
        var temp_6 = lhs_5.GetFloat("VAL");
        var lhs_7 = World.Instance.GetObject(ObjectType.Skill, "MUSIC_VOL");
        lhs_7.SetFloat("VAL", temp_6 + -0.1f);
        var rhs_8 = World.Instance.AcknexObject.GetAcknexObject("VOL_MINUS");
        var acknexObject_10 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
        acknexObject_10.SetAcknexObject("STRING", rhs_8);
        yield return SHOW_MESSAGE();
        yield break;
        yield break;
    }
    public IEnumerator SHOW_OPTIONS()
    {
        yield return CLEAR_MENU();
        var rhs_0 = World.Instance.AcknexObject.GetAcknexObject("OPTION_STR");
        var acknexObject_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"SCREEN_TXT");
        acknexObject_2.SetAcknexObject("STRING", rhs_0);
        yield return WAIT_YESNO();
        yield break;
    }
    public IEnumerator MAIN_MENU()
    {
        yield return CLEAR_MENU();
        var rhs_0 = World.Instance.AcknexObject.GetAcknexObject("SHOW_OPTION_STR");
        World.Instance.SetSynonymObject("MENU1_STR", rhs_0);
        var rhs_2 = World.Instance.AcknexObject.GetAcknexObject("LOAD_GAME_STR");
        World.Instance.SetSynonymObject("MENU2_STR", rhs_2);
        var rhs_4 = World.Instance.AcknexObject.GetAcknexObject("SAVE_GAME_STR");
        World.Instance.SetSynonymObject("MENU3_STR", rhs_4);
        var rhs_6 = World.Instance.AcknexObject.GetAcknexObject("QUIT_GAME_STR");
        World.Instance.SetSynonymObject("MENU4_STR", rhs_6);
        var rhs_8 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SHOW_OPTIONS");
        World.Instance.SetSynonymObject("MENU1_ACT", rhs_8);
        var rhs_10 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_MENU");
        World.Instance.SetSynonymObject("MENU2_ACT", rhs_10);
        var rhs_12 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_MENU");
        World.Instance.SetSynonymObject("MENU3_ACT", rhs_12);
        var rhs_14 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"EXIT_YESNO");
        World.Instance.SetSynonymObject("MENU4_ACT", rhs_14);
        var acknexObject_18 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
        acknexObject_18.SetFloat("MAX", 5f);
        yield return SHOW_MENU();
        yield break;
        yield break;
    }
    public IEnumerator DIFF_MENU()
    {
        yield return CLEAR_MENU();
        var rhs_0 = World.Instance.AcknexObject.GetAcknexObject("DIFFICULT1_STR");
        World.Instance.SetSynonymObject("MENU1_STR", rhs_0);
        var rhs_2 = World.Instance.AcknexObject.GetAcknexObject("DIFFICULT2_STR");
        World.Instance.SetSynonymObject("MENU2_STR", rhs_2);
        var rhs_4 = World.Instance.AcknexObject.GetAcknexObject("DIFFICULT3_STR");
        World.Instance.SetSynonymObject("MENU3_STR", rhs_4);
        var rhs_6 = World.Instance.AcknexObject.GetAcknexObject("DIFFICULT4_STR");
        World.Instance.SetSynonymObject("MENU4_STR", rhs_6);
        var rhs_8 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_DIFF1");
        World.Instance.SetSynonymObject("MENU1_ACT", rhs_8);
        var rhs_10 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_DIFF2");
        World.Instance.SetSynonymObject("MENU2_ACT", rhs_10);
        var rhs_12 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_DIFF3");
        World.Instance.SetSynonymObject("MENU3_ACT", rhs_12);
        var rhs_14 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_DIFF4");
        World.Instance.SetSynonymObject("MENU4_ACT", rhs_14);
        var acknexObject_18 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
        acknexObject_18.SetFloat("MAX", 5f);
        yield return SHOW_MENU();
        yield break;
        yield break;
    }
    public IEnumerator LEVEL_MENU()
    {
        yield return CLEAR_MENU();
        var rhs_0 = World.Instance.AcknexObject.GetAcknexObject("LEVEL1_STR");
        World.Instance.SetSynonymObject("MENU1_STR", rhs_0);
        var rhs_2 = World.Instance.AcknexObject.GetAcknexObject("LEVEL2_STR");
        World.Instance.SetSynonymObject("MENU2_STR", rhs_2);
        var rhs_4 = World.Instance.AcknexObject.GetAcknexObject("LEVEL3_STR");
        World.Instance.SetSynonymObject("MENU3_STR", rhs_4);
        var rhs_6 = World.Instance.AcknexObject.GetAcknexObject("LEVEL4_STR");
        World.Instance.SetSynonymObject("MENU4_STR", rhs_6);
        var rhs_8 = World.Instance.AcknexObject.GetAcknexObject("LEVEL5_STR");
        World.Instance.SetSynonymObject("MENU5_STR", rhs_8);
        var rhs_10 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"START_LEVEL1");
        World.Instance.SetSynonymObject("MENU1_ACT", rhs_10);
        var rhs_12 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"START_LEVEL2");
        World.Instance.SetSynonymObject("MENU2_ACT", rhs_12);
        var rhs_14 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"START_LEVEL3");
        World.Instance.SetSynonymObject("MENU3_ACT", rhs_14);
        var rhs_16 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"START_LEVEL4");
        World.Instance.SetSynonymObject("MENU4_ACT", rhs_16);
        var rhs_18 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"START_LEVEL5");
        World.Instance.SetSynonymObject("MENU5_ACT", rhs_18);
        var acknexObject_22 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
        acknexObject_22.SetFloat("MAX", 6f);
        yield return SHOW_MENU();
        yield break;
        yield break;
    }
    public IEnumerator SAVE_MENU()
    {
        //Unknown keyword: LOAD_INFO
        yield return CLEAR_MENU();
        var rhs_0 = World.Instance.AcknexObject.GetAcknexObject("NAME1_STR");
        World.Instance.SetSynonymObject("MENU1_STR", rhs_0);
        var rhs_2 = World.Instance.AcknexObject.GetAcknexObject("NAME2_STR");
        World.Instance.SetSynonymObject("MENU2_STR", rhs_2);
        var rhs_4 = World.Instance.AcknexObject.GetAcknexObject("NAME3_STR");
        World.Instance.SetSynonymObject("MENU3_STR", rhs_4);
        var rhs_6 = World.Instance.AcknexObject.GetAcknexObject("NAME4_STR");
        World.Instance.SetSynonymObject("MENU4_STR", rhs_6);
        var rhs_8 = World.Instance.AcknexObject.GetAcknexObject("NAME5_STR");
        World.Instance.SetSynonymObject("MENU5_STR", rhs_8);
        var rhs_10 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_NAME1");
        World.Instance.SetSynonymObject("MENU1_ACT", rhs_10);
        var rhs_12 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_NAME2");
        World.Instance.SetSynonymObject("MENU2_ACT", rhs_12);
        var rhs_14 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_NAME3");
        World.Instance.SetSynonymObject("MENU3_ACT", rhs_14);
        var rhs_16 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_NAME4");
        World.Instance.SetSynonymObject("MENU4_ACT", rhs_16);
        var rhs_18 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SAVE_NAME5");
        World.Instance.SetSynonymObject("MENU5_ACT", rhs_18);
        var acknexObject_22 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
        acknexObject_22.SetFloat("MAX", 6f);
        yield return SHOW_MENU();
        yield break;
        yield break;
    }
    public IEnumerator LOAD_MENU()
    {
        //Unknown keyword: LOAD_INFO
        yield return CLEAR_MENU();
        var rhs_0 = World.Instance.AcknexObject.GetAcknexObject("NAME1_STR");
        World.Instance.SetSynonymObject("MENU1_STR", rhs_0);
        var rhs_2 = World.Instance.AcknexObject.GetAcknexObject("NAME2_STR");
        World.Instance.SetSynonymObject("MENU2_STR", rhs_2);
        var rhs_4 = World.Instance.AcknexObject.GetAcknexObject("NAME3_STR");
        World.Instance.SetSynonymObject("MENU3_STR", rhs_4);
        var rhs_6 = World.Instance.AcknexObject.GetAcknexObject("NAME4_STR");
        World.Instance.SetSynonymObject("MENU4_STR", rhs_6);
        var rhs_8 = World.Instance.AcknexObject.GetAcknexObject("NAME5_STR");
        World.Instance.SetSynonymObject("MENU5_STR", rhs_8);
        var rhs_10 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_NAME1");
        World.Instance.SetSynonymObject("MENU1_ACT", rhs_10);
        var rhs_12 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_NAME2");
        World.Instance.SetSynonymObject("MENU2_ACT", rhs_12);
        var rhs_14 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_NAME3");
        World.Instance.SetSynonymObject("MENU3_ACT", rhs_14);
        var rhs_16 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_NAME4");
        World.Instance.SetSynonymObject("MENU4_ACT", rhs_16);
        var rhs_18 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LOAD_NAME5");
        World.Instance.SetSynonymObject("MENU5_ACT", rhs_18);
        var acknexObject_22 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
        acknexObject_22.SetFloat("MAX", 6f);
        yield return SHOW_MENU();
        yield break;
        yield break;
    }
    public IEnumerator SAVE_NAME1()
    {
        var acknexObject_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
        acknexObject_2.SetFloat("MIN", 0f);
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        lhs_3.SetFloat("VAL", 0f);
        var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "SLOT");
        lhs_5.SetFloat("VAL", 1f);
        World.Instance.ReadInkey("NAME1_STR");
        yield return CLEAR_MENU();
        yield return SAVE_GAME();
        yield break;
        yield break;
    }
    public IEnumerator SAVE_NAME2()
    {
        var acknexObject_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
        acknexObject_2.SetFloat("MIN", 0f);
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        lhs_3.SetFloat("VAL", 0f);
        var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "SLOT");
        lhs_5.SetFloat("VAL", 2f);
        World.Instance.ReadInkey("NAME2_STR");
        yield return CLEAR_MENU();
        yield return SAVE_GAME();
        yield break;
        yield break;
    }
    public IEnumerator SAVE_NAME3()
    {
        var acknexObject_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
        acknexObject_2.SetFloat("MIN", 0f);
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        lhs_3.SetFloat("VAL", 0f);
        var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "SLOT");
        lhs_5.SetFloat("VAL", 3f);
        World.Instance.ReadInkey("NAME3_STR");
        yield return CLEAR_MENU();
        yield return SAVE_GAME();
        yield break;
        yield break;
    }
    public IEnumerator SAVE_NAME4()
    {
        var acknexObject_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
        acknexObject_2.SetFloat("MIN", 0f);
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        lhs_3.SetFloat("VAL", 0f);
        var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "SLOT");
        lhs_5.SetFloat("VAL", 4f);
        World.Instance.ReadInkey("NAME4_STR");
        yield return CLEAR_MENU();
        yield return SAVE_GAME();
        yield break;
        yield break;
    }
    public IEnumerator SAVE_NAME5()
    {
        var acknexObject_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/"MENU_POS");
        acknexObject_2.SetFloat("MIN", 0f);
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "MENU_POS");
        lhs_3.SetFloat("VAL", 0f);
        var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "SLOT");
        lhs_5.SetFloat("VAL", 5f);
        World.Instance.ReadInkey("NAME5_STR");
        yield return CLEAR_MENU();
        yield return SAVE_GAME();
        yield break;
        yield break;
    }
    public IEnumerator LOAD_NAME1()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "SLOT");
        lhs_1.SetFloat("VAL", 1f);
        yield return CLEAR_MENU();
        yield return LOAD_GAME();
        yield break;
        yield break;
    }
    public IEnumerator LOAD_NAME2()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "SLOT");
        lhs_1.SetFloat("VAL", 2f);
        yield return CLEAR_MENU();
        yield return LOAD_GAME();
        yield break;
        yield break;
    }
    public IEnumerator LOAD_NAME3()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "SLOT");
        lhs_1.SetFloat("VAL", 3f);
        yield return CLEAR_MENU();
        yield return LOAD_GAME();
        yield break;
        yield break;
    }
    public IEnumerator LOAD_NAME4()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "SLOT");
        lhs_1.SetFloat("VAL", 4f);
        yield return CLEAR_MENU();
        yield return LOAD_GAME();
        yield break;
        yield break;
    }
    public IEnumerator LOAD_NAME5()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "SLOT");
        lhs_1.SetFloat("VAL", 5f);
        yield return CLEAR_MENU();
        yield return LOAD_GAME();
        yield break;
        yield break;
    }
    public IEnumerator SET_DIFF1()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "DIFFICULTY");
        lhs_1.SetFloat("VAL", 1f);
        yield return LEVEL_MENU();
        yield break;
        yield break;
    }
    public IEnumerator SET_DIFF2()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "DIFFICULTY");
        lhs_1.SetFloat("VAL", 2f);
        yield return LEVEL_MENU();
        yield break;
        yield break;
    }
    public IEnumerator SET_DIFF3()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "DIFFICULTY");
        lhs_1.SetFloat("VAL", 3f);
        yield return LEVEL_MENU();
        yield break;
        yield break;
    }
    public IEnumerator SET_DIFF4()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "DIFFICULTY");
        lhs_1.SetFloat("VAL", 4f);
        yield return LEVEL_MENU();
        yield break;
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
    public IEnumerator INIT_GLOBALS()
    {
        //Unknown keyword: LOAD_INFO
        yield break;
    }
    public IEnumerator UPDATE_DBPANEL()
    {
        var lhs_0 = World.Instance.GetObject(ObjectType.Skill, "FPS");
        var temp_3 = World.Instance.GetObject(ObjectType.Skill, "FPS");
        var temp_4 = temp_3.GetFloat("VAL");
        var temp_8 = World.Instance.GetObject(ObjectType.Skill, "TIME_FAC");
        var temp_9 = temp_8.GetFloat("VAL");
        lhs_0.SetFloat("VAL", 0.9f * temp_4 + 0.1f * temp_9);
        yield break;
    }
    public IEnumerator SET_DEBUG()
    {
        var rhs_0 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"UPDATE_DBPANEL");
        World.Instance.AcknexObject.SetString("EACH_TICK.10", rhs_0.GetString("NAME"));
        var rhs_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"DEBUG_PANEL");
        //Unknown Property Type: World.PANELS.10
        var rhs_4 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"DEBUG_TEXT_1");
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.10", rhs_4);
        yield break;
    }
    public IEnumerator SET_ADJUST()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_2 = lhs_1.GetFloat("VAL");
        if (temp_2 > -1f)
        {
            goto DISABLE;
        }
        var rhs_3 = World.Instance.GetObject(ObjectType.Skill, "SCREEN_HGT");
        var temp_4 = rhs_3.GetFloat("VAL");
        var acknexObject_6 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
        acknexObject_6.SetFloat("POS_Y", temp_4);
        var acknexObject_8 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
        var temp_8 = acknexObject_8.GetFloat("POS_Y");
        var acknexObject_10 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
        acknexObject_10.SetFloat("POS_Y", temp_8 + -12f);
        var rhs_10 = World.Instance.GetObject(ObjectType.Skill, "SCREEN_HGT");
        var temp_11 = rhs_10.GetFloat("VAL");
        var acknexObject_13 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        acknexObject_13.SetFloat("POS_Y", temp_11);
        var acknexObject_15 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        var temp_15 = acknexObject_15.GetFloat("POS_Y");
        var acknexObject_17 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        acknexObject_17.SetFloat("POS_Y", temp_15 + -100f);
        var rhs_17 = World.Instance.AcknexObject.GetAcknexObject("ADJUST_HELP");
        var acknexObject_19 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        acknexObject_19.SetAcknexObject("STRING", rhs_17);
        var rhs_19 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.9", rhs_19);
        var lhs_22 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        lhs_22.SetFloat("VAL", 99f);
        var temp_24 = World.Instance.AcknexObject.GetAcknexObject("IF_W");
        World.Instance.SetSynonymObject("AW_OLD", temp_24);
        var rhs_26 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_WMODE");
        World.Instance.AcknexObject.SetString("IF_W", rhs_26.GetString("NAME"));
        var temp_29 = World.Instance.AcknexObject.GetAcknexObject("IF_F");
        World.Instance.SetSynonymObject("AF_OLD", temp_29);
        var rhs_31 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_FMODE");
        World.Instance.AcknexObject.SetString("IF_F", rhs_31.GetString("NAME"));
        var temp_34 = World.Instance.AcknexObject.GetAcknexObject("IF_C");
        World.Instance.SetSynonymObject("AC_OLD", temp_34);
        var rhs_36 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_CMODE");
        World.Instance.AcknexObject.SetString("IF_C", rhs_36.GetString("NAME"));
        var temp_39 = World.Instance.AcknexObject.GetAcknexObject("IF_R");
        World.Instance.SetSynonymObject("AR_OLD", temp_39);
        var rhs_41 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_RMODE");
        World.Instance.AcknexObject.SetString("IF_R", rhs_41.GetString("NAME"));
        var temp_44 = World.Instance.AcknexObject.GetAcknexObject("IF_A");
        World.Instance.SetSynonymObject("AA_OLD", temp_44);
        var rhs_46 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_AMODE");
        World.Instance.AcknexObject.SetString("IF_A", rhs_46.GetString("NAME"));
        var temp_49 = World.Instance.AcknexObject.GetAcknexObject("IF_S");
        World.Instance.SetSynonymObject("AS_OLD", temp_49);
        var rhs_51 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_SMODE");
        World.Instance.AcknexObject.SetString("IF_S", rhs_51.GetString("NAME"));
        var temp_54 = World.Instance.AcknexObject.GetAcknexObject("IF_B");
        World.Instance.SetSynonymObject("AB_OLD", temp_54);
        var rhs_56 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_BMODE");
        World.Instance.AcknexObject.SetString("IF_B", rhs_56.GetString("NAME"));
        var temp_59 = World.Instance.AcknexObject.GetAcknexObject("IF_V");
        World.Instance.SetSynonymObject("AV_OLD", temp_59);
        var rhs_61 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"SET_VMODE");
        World.Instance.AcknexObject.SetString("IF_V", rhs_61.GetString("NAME"));
        var temp_64 = World.Instance.AcknexObject.GetAcknexObject("IF_Q");
        World.Instance.SetSynonymObject("AQ_OLD", temp_64);
        var temp_67 = World.Instance.AcknexObject.GetAcknexObject("IF_X");
        World.Instance.SetSynonymObject("AX_OLD", temp_67);
        var temp_70 = World.Instance.AcknexObject.GetAcknexObject("IF_5");
        World.Instance.SetSynonymObject("A5_OLD", temp_70);
        var rhs_72 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"ADJUST_XMINUS");
        World.Instance.AcknexObject.SetString("IF_5", rhs_72.GetString("NAME"));
        var temp_75 = World.Instance.AcknexObject.GetAcknexObject("IF_6");
        World.Instance.SetSynonymObject("A6_OLD", temp_75);
        var rhs_77 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"ADJUST_XPLUS");
        World.Instance.AcknexObject.SetString("IF_6", rhs_77.GetString("NAME"));
        var temp_80 = World.Instance.AcknexObject.GetAcknexObject("IF_7");
        World.Instance.SetSynonymObject("A7_OLD", temp_80);
        var rhs_82 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"ADJUST_YMINUS");
        World.Instance.AcknexObject.SetString("IF_7", rhs_82.GetString("NAME"));
        var temp_85 = World.Instance.AcknexObject.GetAcknexObject("IF_8");
        World.Instance.SetSynonymObject("A8_OLD", temp_85);
        var rhs_87 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"ADJUST_YPLUS");
        World.Instance.AcknexObject.SetString("IF_8", rhs_87.GetString("NAME"));
        //Unknown keyword: BEEP
        yield break;
        DISABLE:
        World.Instance.AcknexObject.SetAcknexObject("MESSAGES.9", null);
        //Unknown Property Type: World.PANELS.9
        var lhs_94 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        lhs_94.SetFloat("VAL", -1f);
        var rhs_95 = World.Instance.GetSynonymObject("AW_OLD");
        World.Instance.AcknexObject.SetString("IF_W", rhs_95.GetString("NAME"));
        var rhs_97 = World.Instance.GetSynonymObject("AF_OLD");
        World.Instance.AcknexObject.SetString("IF_F", rhs_97.GetString("NAME"));
        var rhs_99 = World.Instance.GetSynonymObject("AC_OLD");
        World.Instance.AcknexObject.SetString("IF_C", rhs_99.GetString("NAME"));
        var rhs_101 = World.Instance.GetSynonymObject("AR_OLD");
        World.Instance.AcknexObject.SetString("IF_R", rhs_101.GetString("NAME"));
        var rhs_103 = World.Instance.GetSynonymObject("AA_OLD");
        World.Instance.AcknexObject.SetString("IF_A", rhs_103.GetString("NAME"));
        var rhs_105 = World.Instance.GetSynonymObject("AS_OLD");
        World.Instance.AcknexObject.SetString("IF_S", rhs_105.GetString("NAME"));
        var rhs_107 = World.Instance.GetSynonymObject("AB_OLD");
        World.Instance.AcknexObject.SetString("IF_B", rhs_107.GetString("NAME"));
        var rhs_109 = World.Instance.GetSynonymObject("AV_OLD");
        World.Instance.AcknexObject.SetString("IF_V", rhs_109.GetString("NAME"));
        var rhs_111 = World.Instance.GetSynonymObject("AQ_OLD");
        World.Instance.AcknexObject.SetString("IF_Q", rhs_111.GetString("NAME"));
        var rhs_113 = World.Instance.GetSynonymObject("AX_OLD");
        World.Instance.AcknexObject.SetString("IF_X", rhs_113.GetString("NAME"));
        var rhs_115 = World.Instance.GetSynonymObject("A5_OLD");
        World.Instance.AcknexObject.SetString("IF_5", rhs_115.GetString("NAME"));
        var rhs_117 = World.Instance.GetSynonymObject("A6_OLD");
        World.Instance.AcknexObject.SetString("IF_6", rhs_117.GetString("NAME"));
        var rhs_119 = World.Instance.GetSynonymObject("A7_OLD");
        World.Instance.AcknexObject.SetString("IF_7", rhs_119.GetString("NAME"));
        var rhs_121 = World.Instance.GetSynonymObject("A8_OLD");
        World.Instance.AcknexObject.SetString("IF_8", rhs_121.GetString("NAME"));
        //Unknown keyword: BEEP
        yield break;
        yield break;
    }
    public IEnumerator GET_ADJX()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_2 = lhs_1.GetFloat("VAL");
        if (temp_2 == 0f)
        {
            var acknexObject_4 = World.Instance.GetSynonymObject("ADJUST_WALL");
            var temp_4 = acknexObject_4.GetFloat("OFFSET_X");
            var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
            lhs_5.SetFloat("VAL", temp_4);
        }
        var lhs_7 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_8 = lhs_7.GetFloat("VAL");
        if (temp_8 == 1f)
        {
            var acknexObject_10 = World.Instance.GetSynonymObject("ADJUST_REG");
            var temp_10 = acknexObject_10.GetFloat("FLOOR_OFFS_X");
            var lhs_11 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
            lhs_11.SetFloat("VAL", temp_10);
        }
        var lhs_13 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_14 = lhs_13.GetFloat("VAL");
        if (temp_14 == 2f)
        {
            var acknexObject_16 = World.Instance.GetSynonymObject("ADJUST_REG");
            var temp_16 = acknexObject_16.GetFloat("CEIL_OFFS_X");
            var lhs_17 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
            lhs_17.SetFloat("VAL", temp_16);
        }
        var lhs_19 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_20 = lhs_19.GetFloat("VAL");
        if (temp_20 == 3f)
        {
            var lhs_21 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
            var acknexObject_23 = World.Instance.GetSynonymObject("ADJUST_REG");
            var temp_23 = acknexObject_23.GetFloat("FLOOR_HGT");
            lhs_21.SetFloat("VAL", temp_23 * 10f);
        }
        var lhs_27 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_28 = lhs_27.GetFloat("VAL");
        if (temp_28 == 4f)
        {
            var acknexObject_30 = World.Instance.GetSynonymObject("ADJUST_TEX");
            var temp_30 = acknexObject_30.GetFloat("POS_X");
            var lhs_31 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
            lhs_31.SetFloat("VAL", temp_30);
        }
        var lhs_33 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_34 = lhs_33.GetFloat("VAL");
        if (temp_34 == 5f)
        {
            var lhs_35 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
            var acknexObject_37 = World.Instance.GetSynonymObject("ADJUST_TEX");
            var temp_37 = acknexObject_37.GetFloat("SCALE_X");
            lhs_35.SetFloat("VAL", temp_37 * 10f);
        }
        var lhs_41 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_42 = lhs_41.GetFloat("VAL");
        if (temp_42 == 6f)
        {
            var acknexObject_44 = World.Instance.GetSynonymObject("ADJUST_WALL");
            var temp_44 = acknexObject_44.GetFloat("OFFSET_X");
            var lhs_45 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
            lhs_45.SetFloat("VAL", temp_44);
        }
        var lhs_47 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_48 = lhs_47.GetFloat("VAL");
        if (temp_48 == 7f)
        {
            var lhs_49 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
            var acknexObject_51 = World.Instance.GetSynonymObject("ADJUST_TEX");
            var temp_51 = acknexObject_51.GetFloat("AMBIENT");
            lhs_49.SetFloat("VAL", temp_51 * 10f);
        }
        var lhs_55 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_56 = lhs_55.GetFloat("VAL");
        if (temp_56 == 8f)
        {
            var lhs_57 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
            var acknexObject_59 = World.Instance.GetSynonymObject("ADJUST_REG");
            var temp_59 = acknexObject_59.GetFloat("AMBIENT");
            lhs_57.SetFloat("VAL", temp_59 * 10f);
        }
        yield break;
    }
    public IEnumerator GET_ADJY()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_2 = lhs_1.GetFloat("VAL");
        if (temp_2 == 0f)
        {
            var acknexObject_4 = World.Instance.GetSynonymObject("ADJUST_WALL");
            var temp_4 = acknexObject_4.GetFloat("OFFSET_Y");
            var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
            lhs_5.SetFloat("VAL", temp_4);
        }
        var lhs_7 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_8 = lhs_7.GetFloat("VAL");
        if (temp_8 == 1f)
        {
            var acknexObject_10 = World.Instance.GetSynonymObject("ADJUST_REG");
            var temp_10 = acknexObject_10.GetFloat("FLOOR_OFFS_Y");
            var lhs_11 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
            lhs_11.SetFloat("VAL", temp_10);
        }
        var lhs_13 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_14 = lhs_13.GetFloat("VAL");
        if (temp_14 == 2f)
        {
            var acknexObject_16 = World.Instance.GetSynonymObject("ADJUST_REG");
            var temp_16 = acknexObject_16.GetFloat("CEIL_OFFS_Y");
            var lhs_17 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
            lhs_17.SetFloat("VAL", temp_16);
        }
        var lhs_19 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_20 = lhs_19.GetFloat("VAL");
        if (temp_20 == 3f)
        {
            var lhs_21 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
            var acknexObject_23 = World.Instance.GetSynonymObject("ADJUST_REG");
            var temp_23 = acknexObject_23.GetFloat("CEIL_HGT");
            lhs_21.SetFloat("VAL", temp_23 * 10f);
        }
        var lhs_27 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_28 = lhs_27.GetFloat("VAL");
        if (temp_28 == 4f)
        {
            var acknexObject_30 = World.Instance.GetSynonymObject("ADJUST_TEX");
            var temp_30 = acknexObject_30.GetFloat("POS_Y");
            var lhs_31 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
            lhs_31.SetFloat("VAL", temp_30);
        }
        var lhs_33 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_34 = lhs_33.GetFloat("VAL");
        if (temp_34 == 5f)
        {
            var lhs_35 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
            var acknexObject_37 = World.Instance.GetSynonymObject("ADJUST_TEX");
            var temp_37 = acknexObject_37.GetFloat("SCALE_Y");
            lhs_35.SetFloat("VAL", temp_37 * 10f);
        }
        var lhs_41 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_42 = lhs_41.GetFloat("VAL");
        if (temp_42 == 6f)
        {
            var lhs_43 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
            var acknexObject_45 = World.Instance.GetSynonymObject("ADJUST_WALL");
            var temp_45 = acknexObject_45.GetFloat("POSITION");
            lhs_43.SetFloat("VAL", temp_45 * 10f);
        }
        var lhs_49 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_50 = lhs_49.GetFloat("VAL");
        if (temp_50 == 7f)
        {
            var lhs_51 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
            var acknexObject_53 = World.Instance.GetSynonymObject("ADJUST_TEX");
            var temp_53 = acknexObject_53.GetFloat("ALBEDO");
            lhs_51.SetFloat("VAL", temp_53 * 10f);
        }
        var lhs_57 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_58 = lhs_57.GetFloat("VAL");
        if (temp_58 == 8f)
        {
            var lhs_60 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
            lhs_60.SetFloat("VAL", 0f);
        }
        yield break;
    }
    public IEnumerator SET_ADJX()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_2 = lhs_1.GetFloat("VAL");
        if (temp_2 == 0f)
        {
            var rhs_3 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
            var temp_4 = rhs_3.GetFloat("VAL");
            var acknexObject_6 = World.Instance.GetSynonymObject("ADJUST_WALL");
            acknexObject_6.SetFloat("OFFSET_X", temp_4);
        }
        var lhs_7 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_8 = lhs_7.GetFloat("VAL");
        if (temp_8 == 1f)
        {
            var rhs_9 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
            var temp_10 = rhs_9.GetFloat("VAL");
            var acknexObject_12 = World.Instance.GetSynonymObject("ADJUST_REG");
            acknexObject_12.SetFloat("FLOOR_OFFS_X", temp_10);
        }
        var lhs_13 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_14 = lhs_13.GetFloat("VAL");
        if (temp_14 == 2f)
        {
            var rhs_15 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
            var temp_16 = rhs_15.GetFloat("VAL");
            var acknexObject_18 = World.Instance.GetSynonymObject("ADJUST_REG");
            acknexObject_18.SetFloat("CEIL_OFFS_X", temp_16);
        }
        var lhs_19 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_20 = lhs_19.GetFloat("VAL");
        if (temp_20 == 3f)
        {
            var acknexObject_22 = World.Instance.GetSynonymObject("ADJUST_REG");
            var temp_22 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
            var temp_23 = temp_22.GetFloat("VAL");
            acknexObject_22.SetFloat("FLOOR_HGT", temp_23 / 10f);
        }
        var lhs_27 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_28 = lhs_27.GetFloat("VAL");
        if (temp_28 == 4f)
        {
            var rhs_29 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
            var temp_30 = rhs_29.GetFloat("VAL");
            var acknexObject_32 = World.Instance.GetSynonymObject("ADJUST_TEX");
            acknexObject_32.SetFloat("POS_X", temp_30);
        }
        var lhs_33 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_34 = lhs_33.GetFloat("VAL");
        if (temp_34 != 5f)
        {
            //Unknown keyword: SKIP
        }
        var acknexObject_36 = World.Instance.GetSynonymObject("ADJUST_TEX");
        var temp_36 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
        var temp_37 = temp_36.GetFloat("VAL");
        acknexObject_36.SetFloat("SCALE_X", temp_37 / 10f);
        //Unknown keyword: SET_ALL
        var lhs_41 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_42 = lhs_41.GetFloat("VAL");
        if (temp_42 == 6f)
        {
            var rhs_43 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
            var temp_44 = rhs_43.GetFloat("VAL");
            var acknexObject_46 = World.Instance.GetSynonymObject("ADJUST_WALL");
            acknexObject_46.SetFloat("OFFSET_X", temp_44);
        }
        var lhs_47 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_48 = lhs_47.GetFloat("VAL");
        if (temp_48 != 7f)
        {
            //Unknown keyword: SKIP
        }
        var acknexObject_50 = World.Instance.GetSynonymObject("ADJUST_TEX");
        var temp_50 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
        var temp_51 = temp_50.GetFloat("VAL");
        acknexObject_50.SetFloat("AMBIENT", temp_51 / 10f);
        //Unknown keyword: SET_ALL
        var lhs_55 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_56 = lhs_55.GetFloat("VAL");
        if (temp_56 == 8f)
        {
            var acknexObject_58 = World.Instance.GetSynonymObject("ADJUST_REG");
            var temp_58 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
            var temp_59 = temp_58.GetFloat("VAL");
            acknexObject_58.SetFloat("AMBIENT", temp_59 / 10f);
        }
        var lhs_63 = World.Instance.GetObject(ObjectType.Skill, "RENDER_MODE");
        lhs_63.SetFloat("VAL", 1f);
        yield break;
    }
    public IEnumerator SET_ADJY()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_2 = lhs_1.GetFloat("VAL");
        if (temp_2 == 0f)
        {
            var rhs_3 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
            var temp_4 = rhs_3.GetFloat("VAL");
            var acknexObject_6 = World.Instance.GetSynonymObject("ADJUST_WALL");
            acknexObject_6.SetFloat("OFFSET_Y", temp_4);
        }
        var lhs_7 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_8 = lhs_7.GetFloat("VAL");
        if (temp_8 == 1f)
        {
            var rhs_9 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
            var temp_10 = rhs_9.GetFloat("VAL");
            var acknexObject_12 = World.Instance.GetSynonymObject("ADJUST_REG");
            acknexObject_12.SetFloat("FLOOR_OFFS_Y", temp_10);
        }
        var lhs_13 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_14 = lhs_13.GetFloat("VAL");
        if (temp_14 == 2f)
        {
            var rhs_15 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
            var temp_16 = rhs_15.GetFloat("VAL");
            var acknexObject_18 = World.Instance.GetSynonymObject("ADJUST_REG");
            acknexObject_18.SetFloat("CEIL_OFFS_Y", temp_16);
        }
        var lhs_19 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_20 = lhs_19.GetFloat("VAL");
        if (temp_20 == 3f)
        {
            var acknexObject_22 = World.Instance.GetSynonymObject("ADJUST_REG");
            var temp_22 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
            var temp_23 = temp_22.GetFloat("VAL");
            acknexObject_22.SetFloat("CEIL_HGT", temp_23 / 10f);
        }
        var lhs_27 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_28 = lhs_27.GetFloat("VAL");
        if (temp_28 == 4f)
        {
            var rhs_29 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
            var temp_30 = rhs_29.GetFloat("VAL");
            var acknexObject_32 = World.Instance.GetSynonymObject("ADJUST_TEX");
            acknexObject_32.SetFloat("POS_Y", temp_30);
        }
        var lhs_33 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_34 = lhs_33.GetFloat("VAL");
        if (temp_34 != 5f)
        {
            //Unknown keyword: SKIP
        }
        var acknexObject_36 = World.Instance.GetSynonymObject("ADJUST_TEX");
        var temp_36 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
        var temp_37 = temp_36.GetFloat("VAL");
        acknexObject_36.SetFloat("SCALE_Y", temp_37 / 10f);
        //Unknown keyword: SET_ALL
        var lhs_41 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_42 = lhs_41.GetFloat("VAL");
        if (temp_42 == 6f)
        {
            var acknexObject_44 = World.Instance.GetSynonymObject("ADJUST_WALL");
            var temp_44 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
            var temp_45 = temp_44.GetFloat("VAL");
            acknexObject_44.SetFloat("POSITION", temp_45 / 10f);
        }
        var lhs_49 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_50 = lhs_49.GetFloat("VAL");
        if (temp_50 != 7f)
        {
            //Unknown keyword: SKIP
        }
        var acknexObject_52 = World.Instance.GetSynonymObject("ADJUST_TEX");
        var temp_52 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
        var temp_53 = temp_52.GetFloat("VAL");
        acknexObject_52.SetFloat("ALBEDO", temp_53 / 10f);
        //Unknown keyword: SET_ALL
        var lhs_57 = World.Instance.GetObject(ObjectType.Skill, "RENDER_MODE");
        lhs_57.SetFloat("VAL", 1f);
        yield break;
    }
    public IEnumerator ADJUST_XPLUS()
    {
        yield return GET_ADJX();
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
        var temp_2 = lhs_1.GetFloat("VAL");
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
        lhs_3.SetFloat("VAL", temp_2 + 1f);
        yield return SET_ADJX();
        yield return new WaitForTicks(8f);
        AGAIN:
        var lhs_6 = World.Instance.GetObject(ObjectType.Skill, "KEY_6");
        var temp_7 = lhs_6.GetFloat("VAL");
        if (temp_7 == 0f)
        {
            yield break;
        }
        yield return GET_ADJX();
        var lhs_9 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
        var temp_10 = lhs_9.GetFloat("VAL");
        var lhs_11 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
        lhs_11.SetFloat("VAL", temp_10 + 1f);
        yield return SET_ADJX();
        yield return new WaitForTicks(2f);
        goto AGAIN;
        yield break;
    }
    public IEnumerator ADJUST_XMINUS()
    {
        yield return GET_ADJX();
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
        var temp_2 = lhs_1.GetFloat("VAL");
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
        lhs_3.SetFloat("VAL", temp_2 + -1f);
        yield return SET_ADJX();
        yield return new WaitForTicks(8f);
        AGAIN:
        var lhs_6 = World.Instance.GetObject(ObjectType.Skill, "KEY_5");
        var temp_7 = lhs_6.GetFloat("VAL");
        if (temp_7 == 0f)
        {
            yield break;
        }
        yield return GET_ADJX();
        var lhs_9 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
        var temp_10 = lhs_9.GetFloat("VAL");
        var lhs_11 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_X");
        lhs_11.SetFloat("VAL", temp_10 + -1f);
        yield return SET_ADJX();
        yield return new WaitForTicks(2f);
        goto AGAIN;
        yield break;
    }
    public IEnumerator ADJUST_YPLUS()
    {
        yield return GET_ADJY();
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
        var temp_2 = lhs_1.GetFloat("VAL");
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
        lhs_3.SetFloat("VAL", temp_2 + 1f);
        yield return SET_ADJY();
        yield return new WaitForTicks(8f);
        AGAIN:
        var lhs_6 = World.Instance.GetObject(ObjectType.Skill, "KEY_8");
        var temp_7 = lhs_6.GetFloat("VAL");
        if (temp_7 == 0f)
        {
            yield break;
        }
        yield return GET_ADJY();
        var lhs_9 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
        var temp_10 = lhs_9.GetFloat("VAL");
        var lhs_11 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
        lhs_11.SetFloat("VAL", temp_10 + 1f);
        yield return SET_ADJY();
        yield return new WaitForTicks(2f);
        goto AGAIN;
        yield break;
    }
    public IEnumerator ADJUST_YMINUS()
    {
        yield return GET_ADJY();
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
        var temp_2 = lhs_1.GetFloat("VAL");
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
        lhs_3.SetFloat("VAL", temp_2 + -1f);
        yield return SET_ADJY();
        yield return new WaitForTicks(8f);
        AGAIN:
        var lhs_6 = World.Instance.GetObject(ObjectType.Skill, "KEY_7");
        var temp_7 = lhs_6.GetFloat("VAL");
        if (temp_7 == 0f)
        {
            yield break;
        }
        yield return GET_ADJY();
        var lhs_9 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
        var temp_10 = lhs_9.GetFloat("VAL");
        var lhs_11 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_Y");
        lhs_11.SetFloat("VAL", temp_10 + -1f);
        yield return SET_ADJY();
        yield return new WaitForTicks(2f);
        goto AGAIN;
        yield break;
    }
    public IEnumerator SET_WMODE()
    {
        var acknexObject_1 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
        var temp_1 = acknexObject_1.GetFloat("POS_Y");
        var acknexObject_3 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        acknexObject_3.SetFloat("POS_Y", temp_1);
        World.Instance.Shoot();
        var lhs_4 = World.Instance.GetObject(ObjectType.Skill, "HIT_DIST");
        var temp_5 = lhs_4.GetFloat("VAL");
        if (temp_5 == 0f)
        {
            yield break;
        }
        var rhs_6 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
        //Unknown Property Type: World.PANELS.9
        var rhs_8 = World.Instance.GetSynonymObject("HIT");
        World.Instance.SetSynonymObject("ADJUST_WALL", rhs_8);
        var acknexObject_12 = World.Instance.GetSynonymObject("ADJUST_WALL");
        var temp_12 = acknexObject_12.GetFloat("FENCE");
        if (temp_12 == 1f)
        {
            goto SET_POSMODE;
        }
        var lhs_14 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        lhs_14.SetFloat("VAL", 0f);
        var rhs_15 = World.Instance.AcknexObject.GetAcknexObject("WALL_MODE");
        var acknexObject_17 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        acknexObject_17.SetAcknexObject("STRING", rhs_15);
        yield return GET_ADJX();
        yield return GET_ADJY();
        yield break;
        SET_POSMODE:
        var lhs_18 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        lhs_18.SetFloat("VAL", 6f);
        var rhs_19 = World.Instance.AcknexObject.GetAcknexObject("POS_MODE");
        var acknexObject_21 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        acknexObject_21.SetAcknexObject("STRING", rhs_19);
        yield return GET_ADJX();
        yield return GET_ADJY();
        yield break;
    }
    public IEnumerator SET_FMODE()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        lhs_1.SetFloat("VAL", 1f);
        var acknexObject_3 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
        var temp_3 = acknexObject_3.GetFloat("POS_Y");
        var acknexObject_5 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        acknexObject_5.SetFloat("POS_Y", temp_3);
        var rhs_5 = World.Instance.AcknexObject.GetAcknexObject("FLO_MODE");
        var acknexObject_7 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        acknexObject_7.SetAcknexObject("STRING", rhs_5);
        var rhs_7 = World.Instance.GetSynonymObject("HERE");
        World.Instance.SetSynonymObject("ADJUST_REG", rhs_7);
        var rhs_9 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
        //Unknown Property Type: World.PANELS.9
        yield return GET_ADJX();
        yield return GET_ADJY();
        yield break;
    }
    public IEnumerator SET_CMODE()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        lhs_1.SetFloat("VAL", 2f);
        var acknexObject_3 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
        var temp_3 = acknexObject_3.GetFloat("POS_Y");
        var acknexObject_5 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        acknexObject_5.SetFloat("POS_Y", temp_3);
        var rhs_5 = World.Instance.AcknexObject.GetAcknexObject("CEIL_MODE");
        var acknexObject_7 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        acknexObject_7.SetAcknexObject("STRING", rhs_5);
        var rhs_7 = World.Instance.GetSynonymObject("HERE");
        World.Instance.SetSynonymObject("ADJUST_REG", rhs_7);
        var rhs_9 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
        //Unknown Property Type: World.PANELS.9
        yield return GET_ADJX();
        yield return GET_ADJY();
        yield break;
    }
    public IEnumerator SET_RMODE()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        lhs_1.SetFloat("VAL", 3f);
        var acknexObject_3 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
        var temp_3 = acknexObject_3.GetFloat("POS_Y");
        var acknexObject_5 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        acknexObject_5.SetFloat("POS_Y", temp_3);
        var rhs_5 = World.Instance.AcknexObject.GetAcknexObject("REGIO_MODE");
        var acknexObject_7 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        acknexObject_7.SetAcknexObject("STRING", rhs_5);
        var rhs_7 = World.Instance.GetSynonymObject("HERE");
        World.Instance.SetSynonymObject("ADJUST_REG", rhs_7);
        var rhs_9 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
        //Unknown Property Type: World.PANELS.9
        yield return GET_ADJX();
        yield return GET_ADJY();
        yield break;
    }
    public IEnumerator SET_VMODE()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        lhs_1.SetFloat("VAL", 8f);
        var acknexObject_3 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
        var temp_3 = acknexObject_3.GetFloat("POS_Y");
        var acknexObject_5 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        acknexObject_5.SetFloat("POS_Y", temp_3);
        var rhs_5 = World.Instance.AcknexObject.GetAcknexObject("REGAMB_MODE");
        var acknexObject_7 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        acknexObject_7.SetAcknexObject("STRING", rhs_5);
        var rhs_7 = World.Instance.GetSynonymObject("HERE");
        World.Instance.SetSynonymObject("ADJUST_REG", rhs_7);
        var rhs_9 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
        //Unknown Property Type: World.PANELS.9
        yield return GET_ADJX();
        yield return GET_ADJY();
        yield break;
    }
    public IEnumerator SET_AMODE()
    {
        var acknexObject_1 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
        var temp_1 = acknexObject_1.GetFloat("POS_Y");
        var acknexObject_3 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        acknexObject_3.SetFloat("POS_Y", temp_1);
        var lhs_4 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        var temp_5 = lhs_4.GetFloat("VAL");
        if (temp_5 == 4f)
        {
            goto NEXT_TEX;
        }
        World.Instance.Shoot();
        var lhs_7 = World.Instance.GetObject(ObjectType.Skill, "HIT_DIST");
        var temp_8 = lhs_7.GetFloat("VAL");
        if (temp_8 == 0f)
        {
            yield break;
        }
        var lhs_10 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        lhs_10.SetFloat("VAL", 4f);
        var rhs_11 = World.Instance.AcknexObject.GetAcknexObject("ATTACH_MODE");
        var acknexObject_13 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        acknexObject_13.SetAcknexObject("STRING", rhs_11);
        var rhs_13 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
        //Unknown Property Type: World.PANELS.9
        var acknexObject_16 = World.Instance.GetSynonymObject("HIT");
        var temp_16 = acknexObject_16.GetAcknexObject("TEXTURE");
        World.Instance.SetSynonymObject("ADJUST_TEX", temp_16);
        NEXT_TEX:
        var acknexObject_20 = World.Instance.GetSynonymObject("ADJUST_TEX");
        var temp_20 = acknexObject_20.GetAcknexObject("ATTACH");
        if (temp_20 != null)
        {
            goto SET_TEX;
        }
        var acknexObject_22 = World.Instance.GetSynonymObject("HIT");
        var temp_22 = acknexObject_22.GetAcknexObject("TEXTURE");
        World.Instance.SetSynonymObject("ADJUST_TEX", temp_22);
        var acknexObject_26 = World.Instance.GetSynonymObject("ADJUST_TEX");
        var temp_26 = acknexObject_26.GetAcknexObject("ATTACH");
        if (temp_26 == null)
        {
            yield break;
        }
        SET_TEX:
        var acknexObject_28 = World.Instance.GetSynonymObject("ADJUST_TEX");
        var temp_28 = acknexObject_28.GetAcknexObject("ATTACH");
        World.Instance.SetSynonymObject("ADJUST_TEX", temp_28);
        yield return GET_ADJX();
        yield return GET_ADJY();
        yield break;
    }
    public IEnumerator SET_SMODE()
    {
        var acknexObject_1 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
        var temp_1 = acknexObject_1.GetFloat("POS_Y");
        var acknexObject_3 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        acknexObject_3.SetFloat("POS_Y", temp_1);
        World.Instance.Shoot();
        var lhs_4 = World.Instance.GetObject(ObjectType.Skill, "HIT_DIST");
        var temp_5 = lhs_4.GetFloat("VAL");
        if (temp_5 == 0f)
        {
            yield break;
        }
        var rhs_6 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
        //Unknown Property Type: World.PANELS.9
        var acknexObject_9 = World.Instance.GetSynonymObject("HIT");
        var temp_9 = acknexObject_9.GetAcknexObject("TEXTURE");
        World.Instance.SetSynonymObject("ADJUST_TEX", temp_9);
        var rhs_11 = World.Instance.GetSynonymObject("HIT");
        World.Instance.SetSynonymObject("ADJUST_WALL", rhs_11);
        var lhs_14 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        lhs_14.SetFloat("VAL", 5f);
        var rhs_15 = World.Instance.AcknexObject.GetAcknexObject("SCALE_MODE");
        var acknexObject_17 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        acknexObject_17.SetAcknexObject("STRING", rhs_15);
        yield return GET_ADJX();
        yield return GET_ADJY();
        yield break;
    }
    public IEnumerator SET_BMODE()
    {
        var acknexObject_1 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
        var temp_1 = acknexObject_1.GetFloat("POS_Y");
        var acknexObject_3 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        acknexObject_3.SetFloat("POS_Y", temp_1);
        World.Instance.Shoot();
        var lhs_4 = World.Instance.GetObject(ObjectType.Skill, "HIT_DIST");
        var temp_5 = lhs_4.GetFloat("VAL");
        if (temp_5 == 0f)
        {
            yield break;
        }
        var rhs_6 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/"ADJUST_PANEL");
        //Unknown Property Type: World.PANELS.9
        var acknexObject_9 = World.Instance.GetSynonymObject("HIT");
        var temp_9 = acknexObject_9.GetAcknexObject("TEXTURE");
        World.Instance.SetSynonymObject("ADJUST_TEX", temp_9);
        var rhs_11 = World.Instance.GetSynonymObject("HIT");
        World.Instance.SetSynonymObject("ADJUST_WALL", rhs_11);
        var lhs_14 = World.Instance.GetObject(ObjectType.Skill, "ADJUST_MODE");
        lhs_14.SetFloat("VAL", 7f);
        var rhs_15 = World.Instance.AcknexObject.GetAcknexObject("AMBIENT_MODE");
        var acknexObject_17 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/"ADJUST_TEXT");
        acknexObject_17.SetAcknexObject("STRING", rhs_15);
        yield return GET_ADJX();
        yield return GET_ADJY();
        yield break;
    }
    public IEnumerator FADE_IN()
    {
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "FADE");
        lhs_1.SetFloat("VAL", 0f);
        LOOP:
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "FADE");
        var temp_4 = lhs_3.GetFloat("VAL");
        var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "FADE");
        lhs_5.SetFloat("VAL", temp_4 + 0.1f);
        //Unknown keyword: FADE_PAL
        yield return new WaitForCycles(1f);
        var lhs_8 = World.Instance.GetObject(ObjectType.Skill, "FADE");
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
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "FADE");
        lhs_1.SetFloat("VAL", 1f);
        LOOP:
        var lhs_3 = World.Instance.GetObject(ObjectType.Skill, "FADE");
        var temp_4 = lhs_3.GetFloat("VAL");
        var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "FADE");
        lhs_5.SetFloat("VAL", temp_4 + 0.1f);
        //Unknown keyword: FADE_PAL
        yield return new WaitForCycles(1f);
        var lhs_8 = World.Instance.GetObject(ObjectType.Skill, "FADE");
        var temp_9 = lhs_8.GetFloat("VAL");
        if (temp_9 < 1f)
        {
            goto LOOP;
        }
        //Unknown keyword: FADE_PAL
        Application.Quit();
        yield break;
    }
    public IEnumerator VRDEMO_START()
    {
        //Unknown keyword: PLAY_SONG
        yield return SET_WALKING();
        var lhs_1 = World.Instance.GetObject(ObjectType.Skill, "MY_SIZE");
        lhs_1.SetFloat("VAL", 5f);
        var rhs_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"DIVE_UP");
        World.Instance.SetSynonymObject("SET_OVERWATER", rhs_2);
        yield break;
    }
    public IEnumerator ENTER_WATER()
    {
        //Unknown keyword: PLAY_SOUND
        yield return SET_SWIMMING();
        yield break;
    }
    public IEnumerator LEAVE_WATER()
    {
        yield return SET_WALKING();
        yield break;
    }
    public IEnumerator DIVE_UP()
    {
        //Unknown keyword: PLAY_SOUND
        yield return RESET_BLUE();
        yield break;
    }
    public IEnumerator PULSUP()
    {
        var acknexObject_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
        var temp_2 = acknexObject_2.GetFloat("AMBIENT");
        var acknexObject_4 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
        acknexObject_4.SetFloat("AMBIENT", temp_2 + 0.1f);
        var acknexObject_6 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
        var temp_6 = acknexObject_6.GetFloat("AMBIENT");
        if (temp_6 > 1f)
        {
            var rhs_7 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"PULSDOWN");
            var acknexObject_9 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
            acknexObject_9.SetString("EACH_TICK", rhs_7.GetString("NAME"));
        }
        yield break;
    }
    public IEnumerator PULSDOWN()
    {
        var acknexObject_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
        var temp_2 = acknexObject_2.GetFloat("AMBIENT");
        var acknexObject_4 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
        acknexObject_4.SetFloat("AMBIENT", temp_2 + -0.1f);
        var acknexObject_6 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
        var temp_6 = acknexObject_6.GetFloat("AMBIENT");
        if (temp_6 < 0f)
        {
            var rhs_7 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"PULSUP");
            var acknexObject_9 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/"SPHERE");
            acknexObject_9.SetString("EACH_TICK", rhs_7.GetString("NAME"));
        }
        yield break;
    }
    public IEnumerator FALLTUER()
    {
        var rhs_0 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LIFT_DOWN");
        var acknexObject_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
        acknexObject_2.SetString("EACH_TICK", rhs_0.GetString("NAME"));
        yield break;
    }
    public IEnumerator ARSCHTRITT()
    {
        var rhs_0 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"LIFT_UP");
        var acknexObject_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
        acknexObject_2.SetString("EACH_TICK", rhs_0.GetString("NAME"));
        yield break;
    }
    public IEnumerator LIFT_DOWN()
    {
        var acknexObject_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
        var temp_2 = acknexObject_2.GetFloat("FLOOR_HGT");
        var acknexObject_4 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
        acknexObject_4.SetFloat("FLOOR_HGT", temp_2 + -0.3f);
        //Unknown keyword: PLAY_SOUND
        var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_Z");
        var temp_6 = lhs_5.GetFloat("VAL");
        var lhs_7 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_Z");
        lhs_7.SetFloat("VAL", temp_6 + -0.3f);
        var lhs_9 = World.Instance.GetObject(ObjectType.Skill, "RENDER_MODE");
        lhs_9.SetFloat("VAL", 1f);
        var acknexObject_12 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
        var temp_12 = acknexObject_12.GetFloat("FLOOR_HGT");
        if (temp_12 > 0f)
        {
            yield break;
        }
        var acknexObject_15 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
        acknexObject_15.SetFloat("FLOOR_HGT", 0f);
        var acknexObject_17 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
        acknexObject_17.SetString("EACH_TICK", null);
        var rhs_17 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"ARSCHTRITT");
        var acknexObject_19 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
        acknexObject_19.SetString("IF_ENTER", rhs_17.GetString("NAME"));
        var acknexObject_21 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"DUNKELGANGSPERRE");
        acknexObject_21.SetFloat("CEIL_HGT", 6f);
        yield break;
    }
    public IEnumerator LIFT_UP()
    {
        var acknexObject_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
        var temp_2 = acknexObject_2.GetFloat("FLOOR_HGT");
        var acknexObject_4 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
        acknexObject_4.SetFloat("FLOOR_HGT", temp_2 + 0.3f);
        var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_Z");
        var temp_6 = lhs_5.GetFloat("VAL");
        var lhs_7 = World.Instance.GetObject(ObjectType.Skill, "PLAYER_Z");
        lhs_7.SetFloat("VAL", temp_6 + 0.3f);
        var lhs_9 = World.Instance.GetObject(ObjectType.Skill, "RENDER_MODE");
        lhs_9.SetFloat("VAL", 1f);
        //Unknown keyword: PLAY_SOUND
        var acknexObject_12 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
        var temp_12 = acknexObject_12.GetFloat("FLOOR_HGT");
        if (temp_12 < 15.5f)
        {
            yield break;
        }
        var acknexObject_15 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
        acknexObject_15.SetFloat("FLOOR_HGT", 15.5f);
        var acknexObject_17 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
        acknexObject_17.SetString("EACH_TICK", null);
        var rhs_17 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"FALLTUER");
        var acknexObject_19 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"RUMPELKAMMERSOCKEL");
        acknexObject_19.SetString("IF_ENTER", rhs_17.GetString("NAME"));
        yield break;
    }
    public IEnumerator CHECK_OPEN()
    {
        var acknexObject_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"SECRET_DOOR");
        var temp_2 = acknexObject_2.GetFloat("CEIL_HGT");
        if (temp_2 < 8f)
        {
            var rhs_3 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"OPENDOOR");
            World.Instance.AcknexObject.SetString("EACH_TICK.10", rhs_3.GetString("NAME"));
        }
        var acknexObject_7 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"SECRET_DOOR");
        var temp_7 = acknexObject_7.GetFloat("CEIL_HGT");
        if (temp_7 < 5.1f)
        {
            //Unknown keyword: PLAY_SOUND
        }
        yield break;
    }
    public IEnumerator OPENDOOR()
    {
        var acknexObject_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"SECRET_DOOR");
        var temp_2 = acknexObject_2.GetFloat("CEIL_HGT");
        var acknexObject_4 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"SECRET_DOOR");
        acknexObject_4.SetFloat("CEIL_HGT", temp_2 + 0.3f);
        var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "RENDER_MODE");
        lhs_5.SetFloat("VAL", 1f);
        var acknexObject_8 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"SECRET_DOOR");
        var temp_8 = acknexObject_8.GetFloat("CEIL_HGT");
        if (temp_8 > 16f)
        {
            World.Instance.AcknexObject.SetString("EACH_TICK.10", null);
        }
        yield break;
    }
    public IEnumerator IST_OPEN()
    {
        var acknexObject_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"GEHEIMTUER");
        var temp_2 = acknexObject_2.GetFloat("CEIL_HGT");
        if (temp_2 < 8f)
        {
            var rhs_3 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/"AUFGEH");
            World.Instance.AcknexObject.SetString("EACH_TICK.11", rhs_3.GetString("NAME"));
        }
        var acknexObject_7 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"GEHEIMTUER");
        var temp_7 = acknexObject_7.GetFloat("CEIL_HGT");
        if (temp_7 < 2.7f)
        {
            //Unknown keyword: PLAY_SOUND
        }
        yield break;
    }
    public IEnumerator AUFGEH()
    {
        var acknexObject_2 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"GEHEIMTUER");
        var temp_2 = acknexObject_2.GetFloat("CEIL_HGT");
        var acknexObject_4 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"GEHEIMTUER");
        acknexObject_4.SetFloat("CEIL_HGT", temp_2 + 0.3f);
        var lhs_5 = World.Instance.GetObject(ObjectType.Skill, "RENDER_MODE");
        lhs_5.SetFloat("VAL", 1f);
        var acknexObject_8 = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/"GEHEIMTUER");
        var temp_8 = acknexObject_8.GetFloat("CEIL_HGT");
        if (temp_8 > 12f)
        {
            World.Instance.AcknexObject.SetString("EACH_TICK.11", null);
        }
        yield break;
    }
}
