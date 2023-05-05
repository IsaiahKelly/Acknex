using NameId = System.UInt32;
using System;
using Acknex.Interfaces;
using UnityEngine;
using PropertyName = Acknex.Interfaces.PropertyName;
using Random = UnityEngine.Random;

namespace Acknex
{
    public partial class World
    {
        private Vector3 _lastMousePosition;

        private void CreateDefaultSkills()
        {
            CreateSkill(SkillName.SCREEN_WIDTH, 320, 0, 320);
            CreateSkill(SkillName.SCREEN_HGT, 400, 0, 400);
            CreateSkill(SkillName.SCREEN_X, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.SCREEN_Y, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.ASPECT, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.EYE_DIST, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.SKY_OFFS_X, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.SKY_OFFS_Y, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.MOTION_BLUR, 0, 0, 1); //todo
            CreateSkill(SkillName.BLUR_MODE, 0, 0, 1); //todo
            CreateSkill(SkillName.RENDER_MODE, 0.5f, 0, 2); //todo
            CreateSkill(SkillName.MOVE_MODE, 1, -0.5f, 1f); //todo
            CreateSkill(SkillName.CLIPPING, 0, 0, 1); //todo
            CreateSkill(SkillName.LOAD_MODE, 0, 0, 1); //todo
            CreateSkill(SkillName.THING_DIST, 1, 0, 1); //todo
            CreateSkill(SkillName.ACTOR_DIST, 1, 0, 1); //todo
            CreateSkill(SkillName.MAP_OFFSX, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.MAP_OFFSY, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.MAP_CENTERX, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.MAP_CENTERY, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.MAP_MAXX, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.MAP_MINX, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.MAP_MAXY, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.MAP_MINY, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.MAP_EDGE_X1, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.MAP_EDGE_X2, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.MAP_EDGE_Y1, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.MAP_EDGE_Y2, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.MAP_SCALE, 0.9f, 0, 1); //todo
            CreateSkill(SkillName.MAP_MODE, 0, 0, 1); //todo
            CreateSkill(SkillName.MAP_LAYER, 0, 0, 16); //todo
            CreateSkill(SkillName.MAP_ROT, 0, 0, 1); //todo
            CreateSkill(SkillName.COLOR_PLAYER, 7, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.COLOR_ACTORS, 3, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.COLOR_THINGS, 13, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.COLOR_WALLS, 244, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.COLOR_BORDER, 244, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.MOUSE_MODE, 0, 0, 2); //todo
            CreateSkill(SkillName.TOUCH_MODE, 1, 0, 1); //todo
            CreateSkill(SkillName.MOUSE_MOVING, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.MOUSE_CALM, 3, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill(SkillName.MOUSE_TIME, 4, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill(SkillName.MICKEY_X, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill(SkillName.MICKEY_Y, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill(SkillName.MOUSE_X, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill(SkillName.MOUSE_Y, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill(SkillName.MOUSE_ANGLE, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill(SkillName.TOUCH_DIST, 100, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill(SkillName.TOUCH_STATE, 0, 0, 3); //todo <- can apply
            CreateSkill(SkillName.JOYSTICK_X, 0, -255, 255); //todo <- can apply
            CreateSkill(SkillName.JOYSTICK_Y, 0, -255, 255); //todo <- can apply
            CreateSkill(SkillName.STR_LEN, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill(SkillName.LINES, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill(SkillName.SIZE_Y, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill(SkillName.SOUND_VOL, 0.5f, 0, 1); //todo <- can apply
            CreateSkill(SkillName.MUSIC_VOL, 0.5f, 0, 1); //todo <- can apply
            CreateSkill(SkillName.CDAUDIO_VOL, 0.5f, 0, 1); //todo <- can apply
            CreateSkill(SkillName.CHANNEL, 0, -1, 7); //todo
            CreateSkill(SkillName.CHANNEL_0, 0, 0, 2); //todo
            CreateSkill(SkillName.CHANNEL_1, 0, 0, 2); //todo
            CreateSkill(SkillName.CHANNEL_2, 0, 0, 2); //todo
            CreateSkill(SkillName.CHANNEL_3, 0, 0, 2); //todo
            CreateSkill(SkillName.CHANNEL_4, 0, 0, 2); //todo
            CreateSkill(SkillName.CHANNEL_5, 0, 0, 2); //todo
            CreateSkill(SkillName.CHANNEL_6, 0, 0, 2); //todo
            CreateSkill(SkillName.CHANNEL_7, 0, 0, 2); //todo
            CreateSkill(SkillName.AMBIENT, 0, -1, 1); //todo
            CreateSkill(SkillName.PLAYER_LIGHT, 1, 0, 1); //todo
            CreateSkill(SkillName.LIGHT_DIST, 10, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.DARK_DIST, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.PLAYER_WIDTH, 1.2f, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply IMPORTANT, collider radius
            CreateSkill(SkillName.PLAYER_SIZE, 3, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply IMPORTANT, eyes height
            CreateSkill(SkillName.PLAYER_CLIMB, 1.5f, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply IMPORTANT, step size
            CreateSkill(SkillName.WALK_PERIOD, 4, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply, bounciness move (blob move)
            CreateSkill(SkillName.WALK_TIME, 4, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply, bounciness move
            CreateSkill(SkillName.WAVE_PERIOD, 16, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply, bounciness move
            CreateSkill(SkillName.WALK, 0, -1, 1); //todo
            CreateSkill(SkillName.WAVE, 0, -1, 1); //todo
            CreateSkill(SkillName.PSOUND_VOL, 1, 0, 2); //todo
            CreateSkill(SkillName.PSOUND_TONE, 1, 0, 4); //
            CreateSkill(SkillName.PLAYER_VX, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- steering? IMPORTANT
            CreateSkill(SkillName.PLAYER_VY, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- steering? IMPORTANT
            CreateSkill(SkillName.PLAYER_VZ, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- jump? IMPORTANT
            CreateSkill(SkillName.PLAYER_VROT, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- something about rotation IMPORTANT
            CreateSkill(SkillName.PLAYER_TILT, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- something about rotation IMPORTANT
            CreateSkill(SkillName.PLAYER_ARC, 1, 0.2f, 2.0f); //todo <- FOV, IMPORTANT. 1.0 = 60 degrees
            CreateSkill(SkillName.FRICTION, 0.5f, 0.0f, 1.0f); //todo <- move friction IMPORTANT
            CreateSkill(SkillName.INERTIA, 1f, 0.0f, 0); //todo <- move inertia IMPORTANT
            CreateSkill(SkillName.SHOOT_RANGE, 500f, 0.0f, 0); //todo <- shoot distance IMPORTANT
            CreateSkill(SkillName.SHOOT_SECTOR, Mathf.PI * 2f, 0.0f, 0); //todo
            CreateSkill(SkillName.SHOOT_FAC, 1, 0, 1); //todo <- shoot strength
            CreateSkill(SkillName.SHOOT_X, 0, 0, 1); //todo <- shoot deviation
            CreateSkill(SkillName.SHOOT_Y, 0, 0, 1); //todo <- shoot deviation
            CreateSkill(SkillName.HIT_DIST, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- last shoot dist
            CreateSkill(SkillName.HIT_MINDIST, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- explosion dist
            CreateSkill(SkillName.RESULT, 0, 0, 1); //todo <- hit power
            CreateSkill(SkillName.SHOOT_ANGLE, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- shoot angle relative to 
            CreateSkill(SkillName.HIT_X, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- hit x pixel point relative to upper left texture
            CreateSkill(SkillName.HIT_Y, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- hit x pixel point relative to upper left texture
            CreateSkill(SkillName.SKIP_FRAMES, 5, Mathf.NegativeInfinity, Mathf.Infinity); //todo 
            CreateSkill(SkillName.ACTOR_CLIMB, 1, Mathf.NegativeInfinity, Mathf.Infinity); //todo 
            CreateSkill(SkillName.ACTOR_WIDTH, 1, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- width multiplier for collision detection IMPORTANT
            CreateSkill(SkillName.THING_WIDTH, 1, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- width multiplier for collision detection IMPORTANT
            CreateSkill(SkillName.ACTOR_IMPACT_VX, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.ACTOR_IMPACT_VY, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.ACTOR_IMPACT_VZ, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.ACTOR_FLOOR_HGT, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- height of the floor actor is in IMPORTANT
            CreateSkill(SkillName.ACTOR_CEIL_HGT, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- height of the floor actor is in IMPORTANT
            CreateSkill(SkillName.PLAYER_X, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- player pos IMPORTANT
            CreateSkill(SkillName.PLAYER_Y, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- player pos IMPORTANT
            CreateSkill(SkillName.PLAYER_Z, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- player pos IMPORTANT
            CreateSkill(SkillName.PLAYER_ANGLE, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- player angle IMPORTANT
            CreateSkill(SkillName.PLAYER_SIN, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- player angle sin IMPORTANT
            CreateSkill(SkillName.PLAYER_COS, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- player angle cos IMPORTANT
            CreateSkill(SkillName.PLAYER_SPEED, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- player speed IMPORTANT

            //todo: some missing here?
            CreateSkill(SkillName.PLAYER_DEPTH, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- player depth inside water IMPORTANT
            CreateSkill(SkillName.PLAYER_LAST_X, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- player last pos IMPORTANT
            CreateSkill(SkillName.PLAYER_LAST_Y, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- player last pos IMPORTANT
            CreateSkill(SkillName.TICKS, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- ticks IMPORTANT
            CreateSkill(SkillName.SECS, 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- time in seconds IMPORTANT
            CreateSkill(SkillName.MOUSE_LEFT, 0, 0, 1); //todo <-  mouse button down IMPORTANT
            CreateSkill(SkillName.MOUSE_MIDDLE, 0, 0, 1); //todo <-  mouse button down IMPORTANT
            CreateSkill(SkillName.MOUSE_RIGHT, 0, 0, 1); //todo <-  mouse button down IMPORTANT
            CreateSkill(SkillName.KEY_ANY, 0, 0, 1); //todo <- key down IMPORTANT
            CreateSkill(SkillName.KEY_SENSE, 0.7f, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.SHIFT_SENSE, 2f, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.MOUSE_SENSE, 1f, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill(SkillName.JOY_SENSE, 1f, Mathf.NegativeInfinity, Mathf.Infinity); //todo

            CreateSkill(SkillName.PLAYER_HGT, 0, Mathf.NegativeInfinity, Mathf.Infinity);
            CreateSkill(SkillName.FORCE_AHEAD, 0, -1f, 1f);
            CreateSkill(SkillName.FORCE_STRAFE, 0, -1f, 1f);
            CreateSkill(SkillName.FORCE_ROT, 0, -1f, 1f);
            CreateSkill(SkillName.FORCE_TILT, 0, -1f, 1f);
            CreateSkill(SkillName.FORCE_UP, 0, -1f, 1f);

            //CreateSkill(PropertyName.KEY_ANYKEY, Input.anyKeyDown);
            CreateSkill(SkillName.KEY_0, 0, 0, 1);
            CreateSkill(SkillName.KEY_1, 0, 0, 1);
            CreateSkill(SkillName.KEY_2, 0, 0, 1);
            CreateSkill(SkillName.KEY_3, 0, 0, 1);
            CreateSkill(SkillName.KEY_4, 0, 0, 1);
            CreateSkill(SkillName.KEY_5, 0, 0, 1);
            CreateSkill(SkillName.KEY_6, 0, 0, 1);
            CreateSkill(SkillName.KEY_7, 0, 0, 1);
            CreateSkill(SkillName.KEY_8, 0, 0, 1);
            CreateSkill(SkillName.KEY_9, 0, 0, 1);
            CreateSkill(SkillName.KEY_A, 0, 0, 1);
            CreateSkill(SkillName.KEY_B, 0, 0, 1);
            CreateSkill(SkillName.KEY_C, 0, 0, 1);
            CreateSkill(SkillName.KEY_D, 0, 0, 1);
            CreateSkill(SkillName.KEY_E, 0, 0, 1);
            CreateSkill(SkillName.KEY_F, 0, 0, 1);
            CreateSkill(SkillName.KEY_G, 0, 0, 1);
            CreateSkill(SkillName.KEY_H, 0, 0, 1);
            CreateSkill(SkillName.KEY_I, 0, 0, 1);
            CreateSkill(SkillName.KEY_J, 0, 0, 1);
            CreateSkill(SkillName.KEY_K, 0, 0, 1);
            CreateSkill(SkillName.KEY_L, 0, 0, 1);
            CreateSkill(SkillName.KEY_M, 0, 0, 1);
            CreateSkill(SkillName.KEY_N, 0, 0, 1);
            CreateSkill(SkillName.KEY_O, 0, 0, 1);
            CreateSkill(SkillName.KEY_P, 0, 0, 1);
            CreateSkill(SkillName.KEY_Q, 0, 0, 1);
            CreateSkill(SkillName.KEY_R, 0, 0, 1);
            CreateSkill(SkillName.KEY_S, 0, 0, 1);
            CreateSkill(SkillName.KEY_T, 0, 0, 1);
            CreateSkill(SkillName.KEY_U, 0, 0, 1);
            CreateSkill(SkillName.KEY_V, 0, 0, 1);
            CreateSkill(SkillName.KEY_X, 0, 0, 1);
            CreateSkill(SkillName.KEY_Y, 0, 0, 1);
            CreateSkill(SkillName.KEY_Z, 0, 0, 1);
            CreateSkill(SkillName.KEY_W, 0, 0, 1);
            CreateSkill(SkillName.KEY_ALT, 0, 0, 1);
            CreateSkill(SkillName.KEY_BKSP, 0, 0, 1);
            CreateSkill(SkillName.KEY_CAL, 0, 0, 1);
            CreateSkill(SkillName.KEY_CAR, 0, 0, 1);
            CreateSkill(SkillName.KEY_CTRL, 0, 0, 1);
            CreateSkill(SkillName.KEY_DEL, 0, 0, 1);
            CreateSkill(SkillName.KEY_END, 0, 0, 1);
            CreateSkill(SkillName.KEY_ENTER, 0, 0, 1);
            CreateSkill(SkillName.KEY_ESC, 0, 0, 1);
            CreateSkill(SkillName.KEY_F1, 0, 0, 1);
            CreateSkill(SkillName.KEY_F2, 0, 0, 1);
            CreateSkill(SkillName.KEY_F3, 0, 0, 1);
            CreateSkill(SkillName.KEY_F4, 0, 0, 1);
            CreateSkill(SkillName.KEY_F5, 0, 0, 1);
            CreateSkill(SkillName.KEY_F6, 0, 0, 1);
            CreateSkill(SkillName.KEY_F7, 0, 0, 1);
            CreateSkill(SkillName.KEY_F8, 0, 0, 1);
            CreateSkill(SkillName.KEY_F9, 0, 0, 1);
            CreateSkill(SkillName.KEY_F10, 0, 0, 1);
            CreateSkill(SkillName.KEY_F11, 0, 0, 1);
            CreateSkill(SkillName.KEY_F12, 0, 0, 1);
            CreateSkill(SkillName.KEY_APO, 0, 0, 1);
            CreateSkill(SkillName.KEY_HOME, 0, 0, 1);
            CreateSkill(SkillName.KEY_INS, 0, 0, 1);
            CreateSkill(SkillName.KEY_LEFT, 0, 0, 1);
            CreateSkill(SkillName.KEY_MIDDLE, 0, 0, 1);
            CreateSkill(SkillName.KEY_RIGHT, 0, 0, 1);
            CreateSkill(SkillName.KEY_PAUSE, 0, 0, 1);
            CreateSkill(SkillName.KEY_PGDN, 0, 0, 1); ;
            CreateSkill(SkillName.KEY_PGUP, 0, 0, 1);
            CreateSkill(SkillName.KEY_SPACE, 0, 0, 1);
            CreateSkill(SkillName.KEY_TAB, 0, 0, 1);
            CreateSkill(SkillName.KEY_CUU, 0, 0, 1);
            CreateSkill(SkillName.KEY_CUD, 0, 0, 1);
            CreateSkill(SkillName.KEY_CUR, 0, 0, 1);
            CreateSkill(SkillName.KEY_CUL, 0, 0, 1);
            CreateSkill(SkillName.KEY_SHIFT, 0, 0, 1);
            CreateSkill(SkillName.KEY_MINUS, 0, 1);
            CreateSkill(SkillName.KEY_PLUS, 0, 1);

            CreateSkill(SkillName.KEY_JOY0, 0, 0, 1);
            CreateSkill(SkillName.KEY_JOY1, 0, 0, 1);
            CreateSkill(SkillName.KEY_JOY2, 0, 0, 1);
            CreateSkill(SkillName.KEY_JOY3, 0, 0, 1);
            CreateSkill(SkillName.KEY_JOY4, 0, 0, 1);
            CreateSkill(SkillName.KEY_JOY5, 0, 0, 1);
            CreateSkill(SkillName.KEY_JOY6, 0, 0, 1);
            CreateSkill(SkillName.KEY_JOY7, 0, 0, 1);
            CreateSkill(SkillName.KEY_JOY8, 0, 0, 1);
            CreateSkill(SkillName.KEY_JOY9, 0, 0, 1);

            CreateSkill(SkillName.FLOOR_HGT, 0, Mathf.NegativeInfinity, Mathf.Infinity);
            CreateSkill(SkillName.CEIL_HGT, 0, Mathf.NegativeInfinity, Mathf.Infinity);

            CreateSkill(SkillName.TIME_CORR, 0, Mathf.NegativeInfinity, Mathf.Infinity);
            CreateSkill(SkillName.TIME_FAC, 0, Mathf.NegativeInfinity, Mathf.Infinity);

            CreateSkill(SkillName.SLOPE_AHEAD, 0, Mathf.NegativeInfinity, Mathf.Infinity);
            CreateSkill(SkillName.SLOPE_SIDE, 0, Mathf.NegativeInfinity, Mathf.Infinity);

            CreateSkill(SkillName.ACCELERATION, 0, Mathf.NegativeInfinity, Mathf.Infinity);

            CreateSkill(SkillName.IMPACT_VX, 0, Mathf.NegativeInfinity, Mathf.Infinity);
            CreateSkill(SkillName.IMPACT_VY, 0, Mathf.NegativeInfinity, Mathf.Infinity);

            CreateSkill(SkillName.HALF_PI, Mathf.PI * 0.5f, Mathf.NegativeInfinity, Mathf.Infinity);
            CreateSkill(SkillName.PI, Mathf.PI, Mathf.NegativeInfinity, Mathf.Infinity);
            CreateSkill(SkillName.TWO_PI, Mathf.PI * 2f, Mathf.NegativeInfinity, Mathf.Infinity);

            CreateSkill(SkillName.LAST_PLAYER_X, 0f, Mathf.NegativeInfinity, Mathf.Infinity);
            CreateSkill(SkillName.LAST_PLAYER_Y, 0f, Mathf.NegativeInfinity, Mathf.Infinity);
            CreateSkill(SkillName.LAST_PLAYER_Z, 0f, Mathf.NegativeInfinity, Mathf.Infinity);

            CreateSkill(SkillName.RANDOM, 0f, 0f, 1f);
        }

        private void UpdateSkills()
        {
            UpdateSkillValue(SkillName.SECS, (int)Time.time);

            var timeCorr = Time.deltaTime / TimeUtils.OneTick;
            UpdateSkillValue(SkillName.TIME_CORR, timeCorr);
            UpdateSkillValue(SkillName.TIME_FAC, 1f - timeCorr);

            UpdateSkillValue(SkillName.RANDOM, Random.value);

            var mouseX = Input.GetAxis("Mouse X");
            var mouseY = Input.GetAxis("Mouse Y");

            var mousePosition = Input.mousePosition;
            mousePosition.x = Input.mousePosition.x / Screen.width * GetSkillValue(SkillName.SCREEN_WIDTH);
            mousePosition.y = (1f - (Input.mousePosition.y / Screen.height)) * GetSkillValue(SkillName.SCREEN_HGT);
            var deltaMousePosition = mousePosition - _lastMousePosition;
            _lastMousePosition = mousePosition;

            if (Cursor.lockState == CursorLockMode.None)
            {
                mouseX = 0f;
                mouseY = 0f;
                mousePosition = Vector2.zero;
                deltaMousePosition = Vector2.zero;
            }

            UpdateSkillValue(SkillName.MICKEY_X, deltaMousePosition.x);
            UpdateSkillValue(SkillName.MICKEY_Y, deltaMousePosition.y);
            UpdateSkillValue(SkillName.MOUSE_X, mousePosition.x);
            UpdateSkillValue(SkillName.MOUSE_Y, mousePosition.y);
            //todo: I guess mouse middle and right are shifted
            UpdateSkillValue(SkillName.MOUSE_LEFT, Input.GetMouseButton(0));
            UpdateSkillValue(SkillName.MOUSE_MIDDLE, Input.GetMouseButton(1));
            UpdateSkillValue(SkillName.MOUSE_RIGHT, Input.GetMouseButton(2));
            UpdateSkillValue(SkillName.JOYSTICK_X, Input.GetAxis("Horizontal") * 255f);
            UpdateSkillValue(SkillName.JOYSTICK_Y, Input.GetAxis("Vertical") * 255f);
            UpdateSkillValue(SkillName.TICKS, TimeUtils.TimeToTicks(Time.time));

            var moveMode = GetSkillValue(SkillName.MOVE_MODE);
            if (moveMode > 0f)
            {
                var keySense = GetSkillValue(SkillName.KEY_SENSE);
                UpdateSkillValue(SkillName.FORCE_AHEAD, Input.GetAxis("Vertical") * keySense);
                UpdateSkillValue(SkillName.FORCE_STRAFE, -Input.GetAxis("Horizontal") * keySense);
                UpdateSkillValue(SkillName.FORCE_ROT, mouseX * keySense);
                UpdateSkillValue(SkillName.FORCE_TILT, (GetSkillValue(SkillName.FORCE_TILT) - (mouseY * MouseMultiplier * keySense)));
                UpdateSkillValue(SkillName.FORCE_UP, (Input.GetButton("Jump") ? 1 : Input.GetButton("Crouch") ? -1 : 0) * keySense);
            }
            else
            {
                UpdateSkillValue(SkillName.FORCE_AHEAD, 0f);
                UpdateSkillValue(SkillName.FORCE_STRAFE, 0f);
                UpdateSkillValue(SkillName.FORCE_ROT, 0f);
                UpdateSkillValue(SkillName.FORCE_TILT, 0f);
                UpdateSkillValue(SkillName.FORCE_UP, 0f);
                UpdateSkillValue(SkillName.PLAYER_VX, 0f);
                UpdateSkillValue(SkillName.PLAYER_VY, 0f);
                UpdateSkillValue(SkillName.PLAYER_VZ, 0f);
                UpdateSkillValue(SkillName.PLAYER_VROT, 0f);
            }

            UpdateSkillValue(SkillName.KEY_ANY, Input.anyKeyDown);
            UpdateSkillValue(SkillName.KEY_0, Input.GetKey(KeyCode.Keypad0) || Input.GetKey(KeyCode.Alpha0));
            UpdateSkillValue(SkillName.KEY_1, Input.GetKey(KeyCode.Keypad1) || Input.GetKey(KeyCode.Alpha1));
            UpdateSkillValue(SkillName.KEY_2, Input.GetKey(KeyCode.Keypad2) || Input.GetKey(KeyCode.Alpha2));
            UpdateSkillValue(SkillName.KEY_3, Input.GetKey(KeyCode.Keypad3) || Input.GetKey(KeyCode.Alpha3));
            UpdateSkillValue(SkillName.KEY_4, Input.GetKey(KeyCode.Keypad4) || Input.GetKey(KeyCode.Alpha4));
            UpdateSkillValue(SkillName.KEY_5, Input.GetKey(KeyCode.Keypad5) || Input.GetKey(KeyCode.Alpha5));
            UpdateSkillValue(SkillName.KEY_6, Input.GetKey(KeyCode.Keypad6) || Input.GetKey(KeyCode.Alpha6));
            UpdateSkillValue(SkillName.KEY_7, Input.GetKey(KeyCode.Keypad7) || Input.GetKey(KeyCode.Alpha7));
            UpdateSkillValue(SkillName.KEY_8, Input.GetKey(KeyCode.Keypad8) || Input.GetKey(KeyCode.Alpha8));
            UpdateSkillValue(SkillName.KEY_9, Input.GetKey(KeyCode.Keypad9) || Input.GetKey(KeyCode.Alpha9));
            UpdateSkillValue(SkillName.KEY_A, Input.GetKey(KeyCode.A));
            UpdateSkillValue(SkillName.KEY_B, Input.GetKey(KeyCode.B));
            UpdateSkillValue(SkillName.KEY_C, Input.GetKey(KeyCode.C));
            UpdateSkillValue(SkillName.KEY_D, Input.GetKey(KeyCode.D));
            UpdateSkillValue(SkillName.KEY_E, Input.GetKey(KeyCode.E));
            UpdateSkillValue(SkillName.KEY_F, Input.GetKey(KeyCode.F));
            UpdateSkillValue(SkillName.KEY_G, Input.GetKey(KeyCode.G));
            UpdateSkillValue(SkillName.KEY_H, Input.GetKey(KeyCode.H));
            UpdateSkillValue(SkillName.KEY_I, Input.GetKey(KeyCode.I));
            UpdateSkillValue(SkillName.KEY_J, Input.GetKey(KeyCode.J));
            UpdateSkillValue(SkillName.KEY_K, Input.GetKey(KeyCode.K));
            UpdateSkillValue(SkillName.KEY_L, Input.GetKey(KeyCode.L));
            UpdateSkillValue(SkillName.KEY_M, Input.GetKey(KeyCode.M));
            UpdateSkillValue(SkillName.KEY_N, Input.GetKey(KeyCode.N));
            UpdateSkillValue(SkillName.KEY_O, Input.GetKey(KeyCode.O));
            UpdateSkillValue(SkillName.KEY_P, Input.GetKey(KeyCode.P));
            UpdateSkillValue(SkillName.KEY_Q, Input.GetKey(KeyCode.Q));
            UpdateSkillValue(SkillName.KEY_R, Input.GetKey(KeyCode.R));
            UpdateSkillValue(SkillName.KEY_S, Input.GetKey(KeyCode.S));
            UpdateSkillValue(SkillName.KEY_T, Input.GetKey(KeyCode.T));
            UpdateSkillValue(SkillName.KEY_U, Input.GetKey(KeyCode.U));
            UpdateSkillValue(SkillName.KEY_V, Input.GetKey(KeyCode.V));
            UpdateSkillValue(SkillName.KEY_X, Input.GetKey(KeyCode.X));
            UpdateSkillValue(SkillName.KEY_Y, Input.GetKey(KeyCode.Y));
            UpdateSkillValue(SkillName.KEY_Z, Input.GetKey(KeyCode.Z));
            UpdateSkillValue(SkillName.KEY_W, Input.GetKey(KeyCode.W));
            UpdateSkillValue(SkillName.KEY_ALT, Input.GetKey(KeyCode.LeftAlt) || Input.GetKey(KeyCode.RightAlt));
            UpdateSkillValue(SkillName.KEY_BKSP, Input.GetKey(KeyCode.Backspace));
            UpdateSkillValue(SkillName.KEY_CAL, Input.GetKey(KeyCode.Comma));
            UpdateSkillValue(SkillName.KEY_CAR, Input.GetKey(KeyCode.Period));
            UpdateSkillValue(SkillName.KEY_CTRL, Input.GetKey(KeyCode.LeftControl) || Input.GetKey(KeyCode.RightControl));
            UpdateSkillValue(SkillName.KEY_END, Input.GetKey(KeyCode.End));
            UpdateSkillValue(SkillName.KEY_ENTER, Input.GetKey(KeyCode.KeypadEnter) || Input.GetKey(KeyCode.Return));
            UpdateSkillValue(SkillName.KEY_ESC, Input.GetKey(KeyCode.Escape));
            UpdateSkillValue(SkillName.KEY_F1, Input.GetKey(KeyCode.F1));
            UpdateSkillValue(SkillName.KEY_F2, Input.GetKey(KeyCode.F2));
            UpdateSkillValue(SkillName.KEY_F3, Input.GetKey(KeyCode.F3));
            UpdateSkillValue(SkillName.KEY_F4, Input.GetKey(KeyCode.F4));
            UpdateSkillValue(SkillName.KEY_F5, Input.GetKey(KeyCode.F5));
            UpdateSkillValue(SkillName.KEY_F6, Input.GetKey(KeyCode.F6));
            UpdateSkillValue(SkillName.KEY_F7, Input.GetKey(KeyCode.F7));
            UpdateSkillValue(SkillName.KEY_F8, Input.GetKey(KeyCode.F8));
            UpdateSkillValue(SkillName.KEY_F9, Input.GetKey(KeyCode.F9));
            UpdateSkillValue(SkillName.KEY_F10, Input.GetKey(KeyCode.F10));
            UpdateSkillValue(SkillName.KEY_F11, Input.GetKey(KeyCode.F11));
            UpdateSkillValue(SkillName.KEY_F12, Input.GetKey(KeyCode.F12));
            UpdateSkillValue(SkillName.KEY_HOME, Input.GetKey(KeyCode.Home));
            UpdateSkillValue(SkillName.KEY_INS, Input.GetKey(KeyCode.Insert));
            UpdateSkillValue(SkillName.KEY_DEL, Input.GetKey(KeyCode.Delete));
            UpdateSkillValue(SkillName.KEY_LEFT, Input.GetMouseButton(0));
            UpdateSkillValue(SkillName.KEY_MIDDLE, Input.GetMouseButton(1));
            UpdateSkillValue(SkillName.KEY_RIGHT, Input.GetMouseButton(2));
            UpdateSkillValue(SkillName.KEY_PAUSE, Input.GetKey(KeyCode.Pause));
            UpdateSkillValue(SkillName.KEY_PGDN, Input.GetKey(KeyCode.PageDown));
            UpdateSkillValue(SkillName.KEY_PGUP, Input.GetKey(KeyCode.PageUp));
            UpdateSkillValue(SkillName.KEY_SPACE, Input.GetKey(KeyCode.Space));
            UpdateSkillValue(SkillName.KEY_TAB, Input.GetKey(KeyCode.Tab));
            UpdateSkillValue(SkillName.KEY_CUU, Input.GetKey(KeyCode.UpArrow));
            UpdateSkillValue(SkillName.KEY_CUD, Input.GetKey(KeyCode.DownArrow));
            UpdateSkillValue(SkillName.KEY_CUR, Input.GetKey(KeyCode.RightArrow));
            UpdateSkillValue(SkillName.KEY_CUL, Input.GetKey(KeyCode.LeftArrow));
            UpdateSkillValue(SkillName.KEY_SHIFT, Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift));
            UpdateSkillValue(SkillName.KEY_APO, Input.GetKey(KeyCode.Quote));
            UpdateSkillValue(SkillName.KEY_MINUS, Input.GetKey(KeyCode.Minus) || Input.GetKey(KeyCode.KeypadMinus));
            UpdateSkillValue(SkillName.KEY_PLUS, Input.GetKey(KeyCode.Plus) || Input.GetKey(KeyCode.KeypadPlus));
        }

        public void UpdateSkillValue(SkillName name, bool value)
        {
            UpdateSkillValue(name, value ? 1 : 0);
        }

        public void UpdateSkillValue(NameId name, bool value)
        {
            UpdateSkillValue(name, value ? 1 : 0);
        }

        public void UpdateSkillValue(SkillName name, float value)
        {
            UpdateSkillValue((NameId)name, value);
        }

        public void UpdateSkillValue(NameId name, float value)
        {
            if (SkillsByName.TryGetValue(name, out var skill))
            {
                skill.AcknexObject.SetFloat(PropertyName.VAL, value);
            }
            else
            {
                throw new Exception("Unknown skill:" + name);
            }
        }

        public float GetSkillValue(SkillName name)
        {
            return GetSkillValue((NameId)name);
        }

        public float GetSkillValue(NameId name)
        {
            return SkillsByName.TryGetValue(name, out var skill) ? skill.AcknexObject.GetFloat(PropertyName.VAL) : default;
        }
    }
}