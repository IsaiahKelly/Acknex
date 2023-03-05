using System.Collections;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public partial class World
    {
        public WaitForSeconds WaitForTick;
        public WaitForSeconds WaitForSecond;

        public void CallAction(IAcknexObject source, string name)
        {
            if (_runtime == null)
            {
                return;
            }
            if (source != null)
            {
                AssignSynonymToObject("MY", source, true);
            }
            _runtime.CallAction(name);
        }

        public void TriggerEvent(IAcknexObject source, string eventName)
        {
            if (_runtime == null)
            {
                return;
            }
            if (source != null)
            {
                AssignSynonymToObject("MY", source, true);
                if (source.TryGetString(eventName, out var @event))
                {
                    _runtime.CallAction(@event);
                }
            }
        }

        public void TriggerEventConditional(IAcknexObject source, string eventName, bool condition)
        {
            if (condition)
            {
                TriggerEvent(source, eventName);
            }
        }

        private void SetupEvents()
        {
            TriggerEvent(null, "IF_START");
            WaitForTick = new WaitForSeconds(TimeUtils.TicksToTime(1));
            WaitForSecond = new WaitForSeconds(1f);
            StartCoroutine(TriggerTimedEvents());
        }

        private IEnumerator TriggerTimedEvents()
        {
            while (true)
            {
                TriggerEvent(null, "EACH_TICK");
                yield return WaitForTick;
            }
        }

        private void UpdateEvents()
        {
            TriggerEventConditional(null, "IF_ANYKEY", Input.anyKeyDown);
            TriggerEventConditional(null, "IF_0", Input.GetKeyDown(KeyCode.Keypad0) || Input.GetKeyDown(KeyCode.Alpha0));
            TriggerEventConditional(null, "IF_1", Input.GetKeyDown(KeyCode.Keypad1) || Input.GetKeyDown(KeyCode.Alpha1));
            TriggerEventConditional(null, "IF_2", Input.GetKeyDown(KeyCode.Keypad2) || Input.GetKeyDown(KeyCode.Alpha2));
            TriggerEventConditional(null, "IF_3", Input.GetKeyDown(KeyCode.Keypad3) || Input.GetKeyDown(KeyCode.Alpha3));
            TriggerEventConditional(null, "IF_4", Input.GetKeyDown(KeyCode.Keypad4) || Input.GetKeyDown(KeyCode.Alpha4));
            TriggerEventConditional(null, "IF_5", Input.GetKeyDown(KeyCode.Keypad5) || Input.GetKeyDown(KeyCode.Alpha5));
            TriggerEventConditional(null, "IF_6", Input.GetKeyDown(KeyCode.Keypad6) || Input.GetKeyDown(KeyCode.Alpha6));
            TriggerEventConditional(null, "IF_7", Input.GetKeyDown(KeyCode.Keypad7) || Input.GetKeyDown(KeyCode.Alpha7));
            TriggerEventConditional(null, "IF_8", Input.GetKeyDown(KeyCode.Keypad8) || Input.GetKeyDown(KeyCode.Alpha8));
            TriggerEventConditional(null, "IF_9", Input.GetKeyDown(KeyCode.Keypad9) || Input.GetKeyDown(KeyCode.Alpha9));
            TriggerEventConditional(null, "IF_A", Input.GetKeyDown(KeyCode.A));
            TriggerEventConditional(null, "IF_B", Input.GetKeyDown(KeyCode.B));
            TriggerEventConditional(null, "IF_C", Input.GetKeyDown(KeyCode.C));
            TriggerEventConditional(null, "IF_D", Input.GetKeyDown(KeyCode.D));
            TriggerEventConditional(null, "IF_E", Input.GetKeyDown(KeyCode.E));
            TriggerEventConditional(null, "IF_F", Input.GetKeyDown(KeyCode.F));
            TriggerEventConditional(null, "IF_G", Input.GetKeyDown(KeyCode.G));
            TriggerEventConditional(null, "IF_H", Input.GetKeyDown(KeyCode.H));
            TriggerEventConditional(null, "IF_I", Input.GetKeyDown(KeyCode.I));
            TriggerEventConditional(null, "IF_J", Input.GetKeyDown(KeyCode.J));
            TriggerEventConditional(null, "IF_K", Input.GetKeyDown(KeyCode.K));
            TriggerEventConditional(null, "IF_L", Input.GetKeyDown(KeyCode.L));
            TriggerEventConditional(null, "IF_M", Input.GetKeyDown(KeyCode.M));
            TriggerEventConditional(null, "IF_N", Input.GetKeyDown(KeyCode.N));
            TriggerEventConditional(null, "IF_O", Input.GetKeyDown(KeyCode.O));
            TriggerEventConditional(null, "IF_P", Input.GetKeyDown(KeyCode.P));
            TriggerEventConditional(null, "IF_Q", Input.GetKeyDown(KeyCode.Q));
            TriggerEventConditional(null, "IF_R", Input.GetKeyDown(KeyCode.R));
            TriggerEventConditional(null, "IF_S", Input.GetKeyDown(KeyCode.S));
            TriggerEventConditional(null, "IF_T", Input.GetKeyDown(KeyCode.T));
            TriggerEventConditional(null, "IF_U", Input.GetKeyDown(KeyCode.U));
            TriggerEventConditional(null, "IF_V", Input.GetKeyDown(KeyCode.V));
            TriggerEventConditional(null, "IF_X", Input.GetKeyDown(KeyCode.X));
            TriggerEventConditional(null, "IF_Y", Input.GetKeyDown(KeyCode.Y));
            TriggerEventConditional(null, "IF_Z", Input.GetKeyDown(KeyCode.Z));
            TriggerEventConditional(null, "IF_W", Input.GetKeyDown(KeyCode.W));
            TriggerEventConditional(null, "IF_ALT", Input.GetKeyDown(KeyCode.LeftAlt) || Input.GetKeyDown(KeyCode.RightAlt));
            TriggerEventConditional(null, "IF_BKSP", Input.GetKeyDown(KeyCode.Backspace));
            TriggerEventConditional(null, "IF_CAL", Input.GetKeyDown(KeyCode.Comma));
            TriggerEventConditional(null, "IF_CAR", Input.GetKeyDown(KeyCode.Period));
            TriggerEventConditional(null, "IF_CTRL", Input.GetKeyDown(KeyCode.LeftControl) || Input.GetKeyDown(KeyCode.RightControl));
            TriggerEventConditional(null, "IF_DEL", Input.GetKeyDown(KeyCode.Delete));
            TriggerEventConditional(null, "IF_END", Input.GetKeyDown(KeyCode.End));
            TriggerEventConditional(null, "IF_ENTER", Input.GetKeyDown(KeyCode.KeypadEnter) || Input.GetKeyDown(KeyCode.Return));
            TriggerEventConditional(null, "IF_ESC", Input.GetKeyDown(KeyCode.Escape));
            TriggerEventConditional(null, "IF_F1", Input.GetKeyDown(KeyCode.F1));
            TriggerEventConditional(null, "IF_F2", Input.GetKeyDown(KeyCode.F2));
            TriggerEventConditional(null, "IF_F3", Input.GetKeyDown(KeyCode.F3));
            TriggerEventConditional(null, "IF_F4", Input.GetKeyDown(KeyCode.F4));
            TriggerEventConditional(null, "IF_F5", Input.GetKeyDown(KeyCode.F5));
            TriggerEventConditional(null, "IF_F6", Input.GetKeyDown(KeyCode.F6));
            TriggerEventConditional(null, "IF_F7", Input.GetKeyDown(KeyCode.F7));
            TriggerEventConditional(null, "IF_F8", Input.GetKeyDown(KeyCode.F8));
            TriggerEventConditional(null, "IF_F9", Input.GetKeyDown(KeyCode.F9));
            TriggerEventConditional(null, "IF_HOME", Input.GetKeyDown(KeyCode.Home));
            TriggerEventConditional(null, "IF_INS", Input.GetKeyDown(KeyCode.Insert));
            TriggerEventConditional(null, "IF_LEFT", Input.GetMouseButtonDown(0));
            TriggerEventConditional(null, "IF_MIDDLE", Input.GetMouseButtonDown(1));
            TriggerEventConditional(null, "IF_RIGHT", Input.GetMouseButtonDown(2));
            TriggerEventConditional(null, "IF_PAUSE", Input.GetKeyDown(KeyCode.Pause));
            TriggerEventConditional(null, "IF_PGDN", Input.GetKeyDown(KeyCode.PageDown));
            TriggerEventConditional(null, "IF_PGUP", Input.GetKeyDown(KeyCode.PageUp));
            TriggerEventConditional(null, "IF_SPACE", Input.GetKeyDown(KeyCode.Space));
            TriggerEventConditional(null, "IF_TAB", Input.GetKeyDown(KeyCode.Tab));
            TriggerEventConditional(null, "IF_CUU", Input.GetKeyDown(KeyCode.UpArrow));
            TriggerEventConditional(null, "IF_CUD", Input.GetKeyDown(KeyCode.DownArrow));
            TriggerEventConditional(null, "IF_CUR", Input.GetKeyDown(KeyCode.RightArrow));
            TriggerEventConditional(null, "IF_CUL", Input.GetKeyDown(KeyCode.LeftArrow));
        }

        public void CallActionSlot(IAcknexObject acknexObject, string eventName)
        {
            if (AcknexObject.TryGetString(eventName, out var action))
            {
                CallAction(acknexObject, action);
            }
        }
    }
}
