using UnityEngine;

namespace Acknex
{
    public partial class World
    {
        private void CreateDefaultSkills()
        {
            CreateSkill("SCREEN_WIDTH", 320, 0, 320);
            CreateSkill("SCREEN_HGT", 400, 0, 400);
            CreateSkill("SCREEN_X", 0, 0, 0); //todo
            CreateSkill("SCREEN_Y", 0, 0, 0); //todo
            CreateSkill("ASPECT", 0, 0, 0); //todo
            CreateSkill("EYE_DIST", 0, 0, 0); //todo
            CreateSkill("SKY_OFFS_X", 0, 0, 0); //todo
            CreateSkill("SKY_OFFS_Y", 0, 0, 0); //todo
            CreateSkill("MOTION_BLUR", 0, 0, 1); //todo
            CreateSkill("BLUR_MODE", 0, 0, 1); //todo
            CreateSkill("RENDER_MODE", 0.5f, 0, 2); //todo
            CreateSkill("MOVE_MODE", 1, -0.5f, 0.5f); //todo
            CreateSkill("CLIPPING", 0, 0, 1); //todo
            CreateSkill("LOAD_MODE", 0, 0, 1); //todo
            CreateSkill("THING_DIST", 1, 0, 1); //todo
            CreateSkill("ACTOR_DIST", 1, 0, 1); //todo
            CreateSkill("MAP_OFFSX", 0, 0, 0); //todo
            CreateSkill("MAP_OFFSY", 0, 0, 0); //todo
            CreateSkill("MAP_CENTERX", 0, 0, 0); //todo
            CreateSkill("MAP_CENTERY", 0, 0, 0); //todo
            CreateSkill("MAP_MAXX", 0, 0, 0); //todo
            CreateSkill("MAP_MINX", 0, 0, 0); //todo
            CreateSkill("MAP_MAXY", 0, 0, 0); //todo
            CreateSkill("MAP_MINY", 0, 0, 0); //todo
            CreateSkill("MAP_EDGE_X1", 0, 0, 0); //todo
            CreateSkill("MAP_EDGE_X2", 0, 0, 0); //todo
            CreateSkill("MAP_EDGE_Y1", 0, 0, 0); //todo
            CreateSkill("MAP_EDGE_Y2", 0, 0, 0); //todo
            CreateSkill("MAP_SCALE", 0.9f, 0, 1); //todo
            CreateSkill("MAP_MODE", 0, 0, 1); //todo
            CreateSkill("MAP_LAYER", 0, 0, 16); //todo
            CreateSkill("MAP_ROT", 0, 0, 1); //todo
            CreateSkill("COLOR_PLAYER", 7, 0, 0); //todo
            CreateSkill("COLOR_ACTORS", 3, 0, 0); //todo
            CreateSkill("COLOR_THINGS", 13, 0, 0); //todo
            CreateSkill("COLOR_WALLS", 244, 0, 0); //todo
            CreateSkill("COLOR_BORDER", 244, 0, 0); //todo
            CreateSkill("MOUSE_MODE", 0, 0, 2); //todo
            CreateSkill("TOUCH_MODE", 1, 0, 1); //todo
            CreateSkill("MOUSE_MOVING", 0, 0, 0); //todo
            CreateSkill("MOUSE_CALM", 3, 0, 0); //todo <- can apply
            CreateSkill("MOUSE_TIME", 4, 0, 0); //todo <- can apply
            CreateSkill("MICKEY_X", 0, 0, 0); //todo <- can apply
            CreateSkill("MICKEY_Y", 0, 0, 0); //todo <- can apply
            CreateSkill("MOUSE_X", 0, 0, 0); //todo <- can apply
            CreateSkill("MOUSE_Y", 0, 0, 0); //todo <- can apply
            CreateSkill("MOUSE_ANGLE", 0, 0, 0); //todo <- can apply
            CreateSkill("MOUSE_ANGLE", 0, 0, 0); //todo <- can apply
            CreateSkill("TOUCH_DIST", 100, 0, 0); //todo <- can apply
            CreateSkill("TOUCH_STATE", 0, 0, 3); //todo <- can apply
            CreateSkill("JOYSTICK_X", 0, -255, 255); //todo <- can apply
            CreateSkill("JOYSTICK_Y", 0, -255, 255); //todo <- can apply
            CreateSkill("STR_LEN", 0, 0, 0); //todo <- can apply
            CreateSkill("LINES", 0, 0, 0); //todo <- can apply
            CreateSkill("SIZE_Y", 0, 0, 0); //todo <- can apply
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
            CreateSkill("LIGHT_DIST", 10, 0, 0); //todo
            CreateSkill("DARK_DIST", 0, 0, 0); //todo
            CreateSkill("PLAYER_WIDTH", 1.2f, 0, 0); //todo <- can apply IMPORTANT, collider radius
            CreateSkill("PLAYER_SIZE", 3, 0, 0); //todo <- can apply IMPORTANT, eyes height
            CreateSkill("PLAYER_CLIMB", 1.5f, 0, 0); //todo <- can apply IMPORTANT, step size
            CreateSkill("WALK_PERIOD", 4, 0, 0); //todo <- can apply, bounciness move (blob move)
            CreateSkill("WALK_TIME", 4, 0, 0); //todo <- can apply, bounciness move
            CreateSkill("WAVE_PERIOD", 16, 0, 0); //todo <- can apply, bounciness move
            CreateSkill("WALK", 0, -1, 1); //todo
            CreateSkill("WAVE", 0, -1, 1); //todo
            CreateSkill("PSOUND_VOL", 1, 0, 2); //todo
            CreateSkill("PSOUND_TONE", 1, 0, 4); //
            CreateSkill("PLAYER_VX", 1, 0, 0); //todo <- steering? IMPORTANT
            CreateSkill("PLAYER_VY", 1, 0, 0); //todo <- steering? IMPORTANT
            CreateSkill("PLAYER_VZ", 1, 0, 0); //todo <- jump? IMPORTANT
            CreateSkill("PLAYER_VROT", 1, 0, 0); //todo <- something about rotation IMPORTANT
            CreateSkill("PLAYER_TILT", 1, 0, 0); //todo <- something about rotation IMPORTANT
            CreateSkill("PLAYER_ARC", 1, 0.2f, 2.0f); //todo <- FOV, IMPORTANT. 1.0 = 60 degrees
            CreateSkill("FRICTION", 0.5f, 0.0f, 1.0f); //todo <- move friction IMPORTANT
            CreateSkill("INERTIA", 1f, 0.0f, 0); //todo <- move inertia IMPORTANT
            CreateSkill("SHOOT_RANGE", 500f, 0.0f, 0); //todo <- shoot distance IMPORTANT
            CreateSkill("SHOOT_SECTOR", 0, 0.0f, 0); //todo
            CreateSkill("SHOOT_FAC", 1, 0, 1); //todo <- shoot strength
            CreateSkill("SHOOT_X", 0, 0, 1); //todo <- shoot deviation
            CreateSkill("SHOOT_Y", 0, 0, 1); //todo <- shoot deviation
            CreateSkill("HIT_DIST", 0, 0, 0); //todo <- last shoot dist
            CreateSkill("HIT_MINDIST", 0, 0, 0); //todo <- explosion dist
            CreateSkill("RESULT", 0, 0, 1); //todo <- hit power
            CreateSkill("SHOOT_ANGLE", 0, 0, 0); //todo <- shoot angle relative to 
            CreateSkill("HIT_X", 0, 0, 0); //todo <- hit x pixel point relative to upper left texture
            CreateSkill("HIT_Y", 0, 0, 0); //todo <- hit x pixel point relative to upper left texture
            CreateSkill("SKIP_FRAMES", 5, 0, 0); //todo 
            CreateSkill("ACTOR_CLIMB", 1, 0, 0); //todo 
            CreateSkill("ACTOR_WIDTH", 1, 0, 0); //todo <- width multiplier for collision detection IMPORTANT
            CreateSkill("THING_WIDTH", 1, 0, 0); //todo <- width multiplier for collision detection IMPORTANT
            CreateSkill("ACTOR_IMPACT_VX", 0, 0, 0); //todo
            CreateSkill("ACTOR_IMPACT_VY", 0, 0, 0); //todo
            CreateSkill("ACTOR_IMPACT_VZ", 0, 0, 0); //todo
            CreateSkill("ACTOR_FLOOR_HGT", 0, 0, 0); //todo <- height of the floor actor is in IMPORTANT
            CreateSkill("ACTOR_CEIL_HGT", 0, 0, 0); //todo <- height of the floor actor is in IMPORTANT
            CreateSkill("PLAYER_X", 0, 0, 0); //todo <- player pos IMPORTANT
            CreateSkill("PLAYER_Y", 0, 0, 0); //todo <- player pos IMPORTANT
            CreateSkill("PLAYER_Z", 0, 0, 0); //todo <- player pos IMPORTANT
            CreateSkill("PLAYER_ANGLE", 0, 0, 0); //todo <- player angle IMPORTANT
            CreateSkill("PLAYER_SIN", 0, 0, 0); //todo <- player angle sin IMPORTANT
            CreateSkill("PLAYER_COS", 0, 0, 0); //todo <- player angle cos IMPORTANT
            CreateSkill("PLAYER_SPEED", 0, 0, 0); //todo <- player speed IMPORTANT
            //...

            CreateSkill("PLAYER_DEPTH", 0, 0, 0); //todo <- player depth inside water IMPORTANT
            CreateSkill("PLAYER_LAST_X", 0, 0, 0); //todo <- player last pos IMPORTANT
            CreateSkill("PLAYER_LAST_Y", 0, 0, 0); //todo <- player last pos IMPORTANT
            CreateSkill("TICKS", 0, 0, 0); //todo <- ticks IMPORTANT
            CreateSkill("SECS", 0, 0, 0); //todo <- time in seconds IMPORTANT
            CreateSkill("MOUSE_LEFT", 0, 0, 1); //todo <-  mouse button down IMPORTANT
            CreateSkill("MOUSE_MIDDLE", 0, 0, 1); //todo <-  mouse button down IMPORTANT
            CreateSkill("MOUSE_RIGHT", 0, 0, 1); //todo <-  mouse button down IMPORTANT
            CreateSkill("KEY_ANY", 0, 0, 1); //todo <- key down IMPORTANT
        }

        private Vector3 _lastMousePosition;
        private void UpdateSkills()
        {
            var mousePosition = Input.mousePosition;
            mousePosition.x = (Input.mousePosition.x / Screen.width) *
                              SkillsByName["SCREEN_WIDTH"].AcknexObject.Get<float>("VAL");
            mousePosition.y = (Input.mousePosition.y / Screen.height) *
                              SkillsByName["SCREEN_HGT"].AcknexObject.Get<float>("VAL");
            var deltaMousePosition = mousePosition - _lastMousePosition;
            UpdateSkillValue("MICKEY_X", deltaMousePosition.x);
            UpdateSkillValue("MICKEY_Y", deltaMousePosition.y);
            UpdateSkillValue("MOUSE_X", mousePosition.x);
            UpdateSkillValue("MOUSE_Y", mousePosition.y);
            UpdateSkillValue("MOUSE_LEFT", Input.GetMouseButtonDown(0) ? 1 : 0);
            UpdateSkillValue("MOUSE_MIDDLE", Input.GetMouseButtonDown(1) ? 1 : 0);
            UpdateSkillValue("MOUSE_RIGHT", Input.GetMouseButtonDown(2) ? 1 : 0);
            UpdateSkillValue("KEY_ANY", Input.anyKey ? 1 : 0);
            UpdateSkillValue("JOYSTICK_X", Input.GetAxis("Horizontal") / 255f);
            UpdateSkillValue("JOYSTICK_Y", Input.GetAxis("Vertical") / 255f);
            UpdateSkillValue("TICKS", TimeUtils.TimeToTicks(Time.time));
            UpdateSkillValue("SECS", (int)Time.time);
            _lastMousePosition = mousePosition;
        }


        //todo: clamp
        public void UpdateSkillValue(string name, float value)
        {
            if (SkillsByName.TryGetValue(name, out var skill))
            {
                skill.AcknexObject.Set("VAL", value);
            }
        }

        public float GetSkillValue(string name)
        {
            if (SkillsByName.TryGetValue(name, out var skill))
            {
                return skill.AcknexObject.Get<float>("VAL");
            }
            return default;
        }
    }
}