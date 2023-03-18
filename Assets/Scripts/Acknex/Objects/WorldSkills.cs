using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public partial class World
    {
        private Vector3 _lastMousePosition;
        private const float MouseMultiplier = 0.1f;

        private void CreateDefaultSkills()
        {
            CreateSkill("SCREEN_WIDTH", 320, 0, 320);
            CreateSkill("SCREEN_HGT", 400, 0, 400);
            CreateSkill("SCREEN_X", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("SCREEN_Y", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("ASPECT", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("EYE_DIST", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("SKY_OFFS_X", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("SKY_OFFS_Y", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("MOTION_BLUR", 0, 0, 1); //todo
            CreateSkill("BLUR_MODE", 0, 0, 1); //todo
            CreateSkill("RENDER_MODE", 0.5f, 0, 2); //todo
            CreateSkill("MOVE_MODE", 1, -0.5f, 0.5f); //todo
            CreateSkill("CLIPPING", 0, 0, 1); //todo
            CreateSkill("LOAD_MODE", 0, 0, 1); //todo
            CreateSkill("THING_DIST", 1, 0, 1); //todo
            CreateSkill("ACTOR_DIST", 1, 0, 1); //todo
            CreateSkill("MAP_OFFSX", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("MAP_OFFSY", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("MAP_CENTERX", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("MAP_CENTERY", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("MAP_MAXX", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("MAP_MINX", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("MAP_MAXY", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("MAP_MINY", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("MAP_EDGE_X1", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("MAP_EDGE_X2", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("MAP_EDGE_Y1", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("MAP_EDGE_Y2", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("MAP_SCALE", 0.9f, 0, 1); //todo
            CreateSkill("MAP_MODE", 0, 0, 1); //todo
            CreateSkill("MAP_LAYER", 0, 0, 16); //todo
            CreateSkill("MAP_ROT", 0, 0, 1); //todo
            CreateSkill("COLOR_PLAYER", 7, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("COLOR_ACTORS", 3, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("COLOR_THINGS", 13, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("COLOR_WALLS", 244, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("COLOR_BORDER", 244, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("MOUSE_MODE", 0, 0, 2); //todo
            CreateSkill("TOUCH_MODE", 1, 0, 1); //todo
            CreateSkill("MOUSE_MOVING", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("MOUSE_CALM", 3, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill("MOUSE_TIME", 4, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill("MICKEY_X", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill("MICKEY_Y", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill("MOUSE_X", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill("MOUSE_Y", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill("MOUSE_ANGLE", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill("MOUSE_ANGLE", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill("TOUCH_DIST", 100, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill("TOUCH_STATE", 0, 0, 3); //todo <- can apply
            CreateSkill("JOYSTICK_X", 0, -255, 255); //todo <- can apply
            CreateSkill("JOYSTICK_Y", 0, -255, 255); //todo <- can apply
            CreateSkill("STR_LEN", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill("LINES", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill("SIZE_Y", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply
            CreateSkill("SOUND_VOL", 0.5f, 0, 1); //todo <- can apply
            CreateSkill("MUSIC_VOL", 0.5f, 0, 1); //todo <- can apply
            CreateSkill("CDAUDIO_VOL", 0.5f, 0, 1); //todo <- can apply
            CreateSkill("CHANNEL", 0, -1, 7); //todo
            CreateSkill("CHANNEL_0", 0, 0, 2); //todo
            CreateSkill("CHANNEL_1", 0, 0, 2); //todo
            CreateSkill("CHANNEL_2", 0, 0, 2); //todo
            CreateSkill("CHANNEL_3", 0, 0, 2); //todo
            CreateSkill("CHANNEL_4", 0, 0, 2); //todo
            CreateSkill("CHANNEL_5", 0, 0, 2); //todo
            CreateSkill("CHANNEL_6", 0, 0, 2); //todo
            CreateSkill("CHANNEL_7", 0, 0, 2); //todo
            CreateSkill("AMBIENT", 0, -1, 1); //todo
            CreateSkill("PLAYER_LIGHT", 1, 0, 1); //todo
            CreateSkill("LIGHT_DIST", 10, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("DARK_DIST", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("PLAYER_WIDTH", 1.2f, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply IMPORTANT, collider radius
            CreateSkill("PLAYER_SIZE", 3, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply IMPORTANT, eyes height
            CreateSkill("PLAYER_CLIMB", 1.5f, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply IMPORTANT, step size
            CreateSkill("WALK_PERIOD", 4, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply, bounciness move (blob move)
            CreateSkill("WALK_TIME", 4, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply, bounciness move
            CreateSkill("WAVE_PERIOD", 16, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- can apply, bounciness move
            CreateSkill("WALK", 0, -1, 1); //todo
            CreateSkill("WAVE", 0, -1, 1); //todo
            CreateSkill("PSOUND_VOL", 1, 0, 2); //todo
            CreateSkill("PSOUND_TONE", 1, 0, 4); //
            CreateSkill("PLAYER_VX", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- steering? IMPORTANT
            CreateSkill("PLAYER_VY", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- steering? IMPORTANT
            CreateSkill("PLAYER_VZ", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- jump? IMPORTANT
            CreateSkill("PLAYER_VROT", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- something about rotation IMPORTANT
            CreateSkill("PLAYER_TILT", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- something about rotation IMPORTANT
            CreateSkill("PLAYER_ARC", 1, 0.2f, 2.0f); //todo <- FOV, IMPORTANT. 1.0 = 60 degrees
            CreateSkill("FRICTION", 0.5f, 0.0f, 1.0f); //todo <- move friction IMPORTANT
            CreateSkill("INERTIA", 1f, 0.0f, 0); //todo <- move inertia IMPORTANT
            CreateSkill("SHOOT_RANGE", 500f, 0.0f, 0); //todo <- shoot distance IMPORTANT
            CreateSkill("SHOOT_SECTOR", 0, 0.0f, 0); //todo
            CreateSkill("SHOOT_FAC", 1, 0, 1); //todo <- shoot strength
            CreateSkill("SHOOT_X", 0, 0, 1); //todo <- shoot deviation
            CreateSkill("SHOOT_Y", 0, 0, 1); //todo <- shoot deviation
            CreateSkill("HIT_DIST", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- last shoot dist
            CreateSkill("HIT_MINDIST", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- explosion dist
            CreateSkill("RESULT", 0, 0, 1); //todo <- hit power
            CreateSkill("SHOOT_ANGLE", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- shoot angle relative to 
            CreateSkill("HIT_X", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- hit x pixel point relative to upper left texture
            CreateSkill("HIT_Y", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- hit x pixel point relative to upper left texture
            CreateSkill("SKIP_FRAMES", 5, Mathf.NegativeInfinity, Mathf.Infinity); //todo 
            CreateSkill("ACTOR_CLIMB", 1, Mathf.NegativeInfinity, Mathf.Infinity); //todo 
            CreateSkill("ACTOR_WIDTH", 1, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- width multiplier for collision detection IMPORTANT
            CreateSkill("THING_WIDTH", 1, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- width multiplier for collision detection IMPORTANT
            CreateSkill("ACTOR_IMPACT_VX", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("ACTOR_IMPACT_VY", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("ACTOR_IMPACT_VZ", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("ACTOR_FLOOR_HGT", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- height of the floor actor is in IMPORTANT
            CreateSkill("ACTOR_CEIL_HGT", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- height of the floor actor is in IMPORTANT
            CreateSkill("PLAYER_X", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- player pos IMPORTANT
            CreateSkill("PLAYER_Y", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- player pos IMPORTANT
            CreateSkill("PLAYER_Z", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- player pos IMPORTANT
            CreateSkill("PLAYER_ANGLE", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- player angle IMPORTANT
            CreateSkill("PLAYER_SIN", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- player angle sin IMPORTANT
            CreateSkill("PLAYER_COS", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- player angle cos IMPORTANT
            CreateSkill("PLAYER_SPEED", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- player speed IMPORTANT
            //...
            //todo: some missing here?
            CreateSkill("PLAYER_DEPTH", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- player depth inside water IMPORTANT
            CreateSkill("PLAYER_LAST_X", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- player last pos IMPORTANT
            CreateSkill("PLAYER_LAST_Y", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- player last pos IMPORTANT
            CreateSkill("TICKS", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- ticks IMPORTANT
            CreateSkill("SECS", 0, Mathf.NegativeInfinity, Mathf.Infinity); //todo <- time in seconds IMPORTANT
            CreateSkill("MOUSE_LEFT", 0, 0, 1); //todo <-  mouse button down IMPORTANT
            CreateSkill("MOUSE_MIDDLE", 0, 0, 1); //todo <-  mouse button down IMPORTANT
            CreateSkill("MOUSE_RIGHT", 0, 0, 1); //todo <-  mouse button down IMPORTANT
            CreateSkill("KEY_ANY", 0, 0, 1); //todo <- key down IMPORTANT
            CreateSkill("KEY_SENSE", 0.7f, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("SHIFT_SENSE", 2f, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("MOUSE_SENSE", 1f, Mathf.NegativeInfinity, Mathf.Infinity); //todo
            CreateSkill("JOY_SENSE", 1f, Mathf.NegativeInfinity, Mathf.Infinity); //todo

            CreateSkill("PLAYER_HGT", 0, Mathf.NegativeInfinity, Mathf.Infinity);
            CreateSkill("FORCE_AHEAD", 0, -1f, 1f);
            CreateSkill("FORCE_STRAFE", 0, -1f, 1f);
            CreateSkill("FORCE_ROT", 0, -1f, 1f);
            CreateSkill("FORCE_TILT", 0, -1f, 1f);
            CreateSkill("FORCE_UP", 0, -1f, 1f);

            //CreateSkill("KEY_ANYKEY", Input.anyKeyDown);
            CreateSkill("KEY_0", 0, 0, 1);
            CreateSkill("KEY_1", 0, 0, 1);
            CreateSkill("KEY_2", 0, 0, 1);
            CreateSkill("KEY_3", 0, 0, 1);
            CreateSkill("KEY_4", 0, 0, 1);
            CreateSkill("KEY_5", 0, 0, 1);
            CreateSkill("KEY_6", 0, 0, 1);
            CreateSkill("KEY_7", 0, 0, 1);
            CreateSkill("KEY_8", 0, 0, 1);
            CreateSkill("KEY_9", 0, 0, 1);
            CreateSkill("KEY_A", 0, 0, 1);
            CreateSkill("KEY_B", 0, 0, 1);
            CreateSkill("KEY_C", 0, 0, 1);
            CreateSkill("KEY_D", 0, 0, 1);
            CreateSkill("KEY_E", 0, 0, 1);
            CreateSkill("KEY_F", 0, 0, 1);
            CreateSkill("KEY_G", 0, 0, 1);
            CreateSkill("KEY_H", 0, 0, 1);
            CreateSkill("KEY_I", 0, 0, 1);
            CreateSkill("KEY_J", 0, 0, 1);
            CreateSkill("KEY_K", 0, 0, 1);
            CreateSkill("KEY_L", 0, 0, 1);
            CreateSkill("KEY_M", 0, 0, 1);
            CreateSkill("KEY_N", 0, 0, 1);
            CreateSkill("KEY_O", 0, 0, 1);
            CreateSkill("KEY_P", 0, 0, 1);
            CreateSkill("KEY_Q", 0, 0, 1);
            CreateSkill("KEY_R", 0, 0, 1);
            CreateSkill("KEY_S", 0, 0, 1);
            CreateSkill("KEY_T", 0, 0, 1);
            CreateSkill("KEY_U", 0, 0, 1);
            CreateSkill("KEY_V", 0, 0, 1);
            CreateSkill("KEY_X", 0, 0, 1);
            CreateSkill("KEY_Y", 0, 0, 1);
            CreateSkill("KEY_Z", 0, 0, 1);
            CreateSkill("KEY_W", 0, 0, 1);
            CreateSkill("KEY_ALT", 0, 0, 1);
            CreateSkill("KEY_BKSP", 0, 0, 1);
            CreateSkill("KEY_CAL", 0, 0, 1);
            CreateSkill("KEY_CAR", 0, 0, 1);
            CreateSkill("KEY_CTRL", 0, 0, 1);
            CreateSkill("KEY_DEL", 0, 0, 1);
            CreateSkill("KEY_END", 0, 0, 1);
            CreateSkill("KEY_ENTER", 0, 0, 1);
            CreateSkill("KEY_ESC", 0, 0, 1);
            CreateSkill("KEY_F1", 0, 0, 1);
            CreateSkill("KEY_F2", 0, 0, 1);
            CreateSkill("KEY_F3", 0, 0, 1);
            CreateSkill("KEY_F4", 0, 0, 1);
            CreateSkill("KEY_F5", 0, 0, 1);
            CreateSkill("KEY_F6", 0, 0, 1);
            CreateSkill("KEY_F7", 0, 0, 1);
            CreateSkill("KEY_F8", 0, 0, 1);
            CreateSkill("KEY_F9", 0, 0, 1); ;
            CreateSkill("KEY_HOME", 0, 0, 1);
            CreateSkill("KEY_INS", 0, 0, 1);
            CreateSkill("KEY_LEFT", 0, 0, 1);
            CreateSkill("KEY_MIDDLE", 0, 0, 1);
            CreateSkill("KEY_RIGHT", 0, 0, 1);
            CreateSkill("KEY_PAUSE", 0, 0, 1);
            CreateSkill("KEY_PGDN", 0, 0, 1); ;
            CreateSkill("KEY_PGUP", 0, 0, 1);
            CreateSkill("KEY_SPACE", 0, 0, 1);
            CreateSkill("KEY_TAB", 0, 0, 1);
            CreateSkill("KEY_CUU", 0, 0, 1);
            CreateSkill("KEY_CUD", 0, 0, 1);
            CreateSkill("KEY_CUR", 0, 0, 1);
            CreateSkill("KEY_CUL", 0, 0, 1);
            CreateSkill("KEY_SHIFT", 0, 0, 1);

            //todo: is this right?
            CreateSkill("FLOOR_HGT", 0, Mathf.NegativeInfinity, Mathf.Infinity);
            CreateSkill("CEIL_HGT", 0, Mathf.NegativeInfinity, Mathf.Infinity);

            CreateSkill("TIME_CORR", 0, Mathf.NegativeInfinity, Mathf.Infinity);
            CreateSkill("TIME_FAC", 0, Mathf.NegativeInfinity, Mathf.Infinity);
        }

        private void UpdateSkills()
        {
            var mousePosition = Input.mousePosition;
            mousePosition.x = Input.mousePosition.x / Screen.width * GetSkillValue("SCREEN_WIDTH");
            mousePosition.y = (1f - (Input.mousePosition.y / Screen.height)) * GetSkillValue("SCREEN_HGT");
            var deltaMousePosition = mousePosition - _lastMousePosition;
            UpdateSkillValue("MICKEY_X", deltaMousePosition.x);
            UpdateSkillValue("MICKEY_Y", deltaMousePosition.y);
            UpdateSkillValue("MOUSE_X", mousePosition.x);
            UpdateSkillValue("MOUSE_Y", mousePosition.y);
            //todo: I guess mouse middle and right are shifted
            UpdateSkillValue("MOUSE_LEFT", Input.GetMouseButton(0));
            UpdateSkillValue("MOUSE_MIDDLE", Input.GetMouseButton(1));
            UpdateSkillValue("MOUSE_RIGHT", Input.GetMouseButton(2));
            UpdateSkillValue("JOYSTICK_X", Input.GetAxis("Horizontal") * 255f);
            UpdateSkillValue("JOYSTICK_Y", Input.GetAxis("Vertical") * 255f);
            UpdateSkillValue("TICKS", TimeUtils.TimeToTicks(Time.time));
            UpdateSkillValue("SECS", (int)Time.time);
            //todo: how to calc timecorr?
            var timeCorr = Time.deltaTime / TimeUtils.OneTick;
            UpdateSkillValue("TIME_CORR", timeCorr);
            UpdateSkillValue("TIME_FAC", 1f - timeCorr);

            var keySense = GetSkillValue("KEY_SENSE");
            UpdateSkillValue("FORCE_AHEAD", Input.GetAxis("Vertical") * keySense);
            //todo: is it inverted in the original?
            UpdateSkillValue("FORCE_STRAFE", -Input.GetAxis("Horizontal") * keySense);
            UpdateSkillValue("FORCE_ROT", Input.GetAxis("Mouse X") * keySense);
            UpdateSkillValue("FORCE_TILT", (GetSkillValue("FORCE_TILT") - (Input.GetAxis("Mouse Y") * MouseMultiplier * keySense)));
            UpdateSkillValue("FORCE_UP", (Input.GetButton("Jump") ? 1 : Input.GetButton("Crouch") ? -1 : 0) * keySense);

            //todo: WALK_PERIOD, WALK_TIME, WAVE_PERIOD, WALK, WAVE
            //var oneStepTime = TimeUtils.TicksToTime((int)(GetSkillValue("WALK_TIME")));
            //var walkFactor = Mathf.Sin(-1f + ((Time.time % oneStepTime) * 2f));
            //UpdateSkillValue("WALK", walkFactor);

            UpdateSkillValue("RANDOM", Random.value);
            _lastMousePosition = mousePosition;

            UpdateSkillValue("KEY_ANY", Input.anyKeyDown);
            UpdateSkillValue("KEY_0", Input.GetKey(KeyCode.Keypad0) || Input.GetKey(KeyCode.Alpha0));
            UpdateSkillValue("KEY_1", Input.GetKey(KeyCode.Keypad1) || Input.GetKey(KeyCode.Alpha1));
            UpdateSkillValue("KEY_2", Input.GetKey(KeyCode.Keypad2) || Input.GetKey(KeyCode.Alpha2));
            UpdateSkillValue("KEY_3", Input.GetKey(KeyCode.Keypad3) || Input.GetKey(KeyCode.Alpha3));
            UpdateSkillValue("KEY_4", Input.GetKey(KeyCode.Keypad4) || Input.GetKey(KeyCode.Alpha4));
            UpdateSkillValue("KEY_5", Input.GetKey(KeyCode.Keypad5) || Input.GetKey(KeyCode.Alpha5));
            UpdateSkillValue("KEY_6", Input.GetKey(KeyCode.Keypad6) || Input.GetKey(KeyCode.Alpha6));
            UpdateSkillValue("KEY_7", Input.GetKey(KeyCode.Keypad7) || Input.GetKey(KeyCode.Alpha7));
            UpdateSkillValue("KEY_8", Input.GetKey(KeyCode.Keypad8) || Input.GetKey(KeyCode.Alpha8));
            UpdateSkillValue("KEY_9", Input.GetKey(KeyCode.Keypad9) || Input.GetKey(KeyCode.Alpha9));
            UpdateSkillValue("KEY_A", Input.GetKey(KeyCode.A));
            UpdateSkillValue("KEY_B", Input.GetKey(KeyCode.B));
            UpdateSkillValue("KEY_C", Input.GetKey(KeyCode.C));
            UpdateSkillValue("KEY_D", Input.GetKey(KeyCode.D));
            UpdateSkillValue("KEY_E", Input.GetKey(KeyCode.E));
            UpdateSkillValue("KEY_F", Input.GetKey(KeyCode.F));
            UpdateSkillValue("KEY_G", Input.GetKey(KeyCode.G));
            UpdateSkillValue("KEY_H", Input.GetKey(KeyCode.H));
            UpdateSkillValue("KEY_I", Input.GetKey(KeyCode.I));
            UpdateSkillValue("KEY_J", Input.GetKey(KeyCode.J));
            UpdateSkillValue("KEY_K", Input.GetKey(KeyCode.K));
            UpdateSkillValue("KEY_L", Input.GetKey(KeyCode.L));
            UpdateSkillValue("KEY_M", Input.GetKey(KeyCode.M));
            UpdateSkillValue("KEY_N", Input.GetKey(KeyCode.N));
            UpdateSkillValue("KEY_O", Input.GetKey(KeyCode.O));
            UpdateSkillValue("KEY_P", Input.GetKey(KeyCode.P));
            UpdateSkillValue("KEY_Q", Input.GetKey(KeyCode.Q));
            UpdateSkillValue("KEY_R", Input.GetKey(KeyCode.R));
            UpdateSkillValue("KEY_S", Input.GetKey(KeyCode.S));
            UpdateSkillValue("KEY_T", Input.GetKey(KeyCode.T));
            UpdateSkillValue("KEY_U", Input.GetKey(KeyCode.U));
            UpdateSkillValue("KEY_V", Input.GetKey(KeyCode.V));
            UpdateSkillValue("KEY_X", Input.GetKey(KeyCode.X));
            UpdateSkillValue("KEY_Y", Input.GetKey(KeyCode.Y));
            UpdateSkillValue("KEY_Z", Input.GetKey(KeyCode.Z));
            UpdateSkillValue("KEY_W", Input.GetKey(KeyCode.W));
            UpdateSkillValue("KEY_ALT", Input.GetKey(KeyCode.LeftAlt) || Input.GetKey(KeyCode.RightAlt));
            UpdateSkillValue("KEY_BKSP", Input.GetKey(KeyCode.Backspace));
            UpdateSkillValue("KEY_CAL", Input.GetKey(KeyCode.Comma));
            UpdateSkillValue("KEY_CAR", Input.GetKey(KeyCode.Period));
            UpdateSkillValue("KEY_CTRL", Input.GetKey(KeyCode.LeftControl) || Input.GetKey(KeyCode.RightControl));
            UpdateSkillValue("KEY_DEL", Input.GetKey(KeyCode.Delete));
            UpdateSkillValue("KEY_END", Input.GetKey(KeyCode.End));
            UpdateSkillValue("KEY_ENTER", Input.GetKey(KeyCode.KeypadEnter) || Input.GetKey(KeyCode.Return));
            UpdateSkillValue("KEY_ESC", Input.GetKey(KeyCode.Escape));
            UpdateSkillValue("KEY_F1", Input.GetKey(KeyCode.F1));
            UpdateSkillValue("KEY_F2", Input.GetKey(KeyCode.F2));
            UpdateSkillValue("KEY_F3", Input.GetKey(KeyCode.F3));
            UpdateSkillValue("KEY_F4", Input.GetKey(KeyCode.F4));
            UpdateSkillValue("KEY_F5", Input.GetKey(KeyCode.F5));
            UpdateSkillValue("KEY_F6", Input.GetKey(KeyCode.F6));
            UpdateSkillValue("KEY_F7", Input.GetKey(KeyCode.F7));
            UpdateSkillValue("KEY_F8", Input.GetKey(KeyCode.F8));
            UpdateSkillValue("KEY_F9", Input.GetKey(KeyCode.F9));
            UpdateSkillValue("KEY_F10", Input.GetKey(KeyCode.F10));
            UpdateSkillValue("KEY_F11", Input.GetKey(KeyCode.F11));
            UpdateSkillValue("KEY_F12", Input.GetKey(KeyCode.F12));
            UpdateSkillValue("KEY_HOME", Input.GetKey(KeyCode.Home));
            UpdateSkillValue("KEY_INS", Input.GetKey(KeyCode.Insert));
            UpdateSkillValue("KEY_DEL", Input.GetKey(KeyCode.PageDown));
            UpdateSkillValue("KEY_LEFT", Input.GetMouseButtonDown(0));
            UpdateSkillValue("KEY_MIDDLE", Input.GetMouseButtonDown(1));
            UpdateSkillValue("KEY_RIGHT", Input.GetMouseButtonDown(2));
            UpdateSkillValue("KEY_PAUSE", Input.GetKey(KeyCode.Pause));
            UpdateSkillValue("KEY_PGDN", Input.GetKey(KeyCode.PageDown));
            UpdateSkillValue("KEY_PGUP", Input.GetKey(KeyCode.PageUp));
            UpdateSkillValue("KEY_SPACE", Input.GetKey(KeyCode.Space));
            UpdateSkillValue("KEY_TAB", Input.GetKey(KeyCode.Tab));
            UpdateSkillValue("KEY_CUU", Input.GetKey(KeyCode.UpArrow));
            UpdateSkillValue("KEY_CUD", Input.GetKey(KeyCode.DownArrow));
            UpdateSkillValue("KEY_CUR", Input.GetKey(KeyCode.RightArrow));
            UpdateSkillValue("KEY_CUL", Input.GetKey(KeyCode.LeftArrow));
            UpdateSkillValue("KEY_SHIFT", Input.GetKey(KeyCode.LeftShift) || Input.GetKey(KeyCode.RightShift));
            UpdateSkillValue("KEY_APO", Input.GetKey(KeyCode.Quote));
            UpdateSkillValue("KEY_MINUS", Input.GetKey(KeyCode.Minus) || Input.GetKey(KeyCode.KeypadMinus));
            UpdateSkillValue("KEY_PLUS", Input.GetKey(KeyCode.Plus) || Input.GetKey(KeyCode.KeypadPlus));
        }

        public void UpdateSkillValue(string name, bool value)
        {
            UpdateSkillValue(name, value ? 1 : 0);
        }

        public void UpdateSkillValue(string name, float value)
        {
            if (SkillsByName.TryGetValue(name, out var skill))
            {
                skill.AcknexObject.SetFloat("VAL", value);
            }
            else
            {
                CreateSkill(name, value, Mathf.NegativeInfinity, Mathf.Infinity);
            }
        }

        public float GetSkillValue(string name)
        {
            return SkillsByName.TryGetValue(name, out var skill) ? skill.AcknexObject.GetFloat("VAL") : default;
        }
    }
}