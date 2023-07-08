using NameId = System.UInt32;
using System;
using System.Collections;
using Acknex.Interfaces;
using UnityEngine;
using PropertyName = Acknex.Interfaces.PropertyName;

namespace Acknex
{

    public partial class World
    {
        public WaitForSeconds WaitForSecond;
        public WaitForSeconds WaitForTick;

        private struct Event
        {
            public IAcknexObject My;
            public string ActionName;
            public IAcknexObject Extra;
            public IAcknexObject There;
        }

        private static readonly PropertyName[] TickEvents = new PropertyName[]
        {
            PropertyName.EACH_TICK_1,
            PropertyName.EACH_TICK_2,
            PropertyName.EACH_TICK_3,
            PropertyName.EACH_TICK_4,
            PropertyName.EACH_TICK_5,
            PropertyName.EACH_TICK_6,
            PropertyName.EACH_TICK_7,
            PropertyName.EACH_TICK_8,
            PropertyName.EACH_TICK_9,
            PropertyName.EACH_TICK_10,
            PropertyName.EACH_TICK_11,
            PropertyName.EACH_TICK_12,
            PropertyName.EACH_TICK_13,
            PropertyName.EACH_TICK_14,
            PropertyName.EACH_TICK_15,
            PropertyName.EACH_TICK_16,
        };

        private static readonly PropertyName[] SecEvents = new PropertyName[]
        {
            PropertyName.EACH_SEC_1,
            PropertyName.EACH_SEC_2,
            PropertyName.EACH_SEC_3,
            PropertyName.EACH_SEC_4,
            PropertyName.EACH_SEC_5,
            PropertyName.EACH_SEC_6,
            PropertyName.EACH_SEC_7,
            PropertyName.EACH_SEC_8,
            PropertyName.EACH_SEC_9,
            PropertyName.EACH_SEC_10,
            PropertyName.EACH_SEC_11,
            PropertyName.EACH_SEC_12,
            PropertyName.EACH_SEC_13,
            PropertyName.EACH_SEC_14,
            PropertyName.EACH_SEC_15,
            PropertyName.EACH_SEC_16,
        };

        public IEnumerator CallSynonymAction(NameId synonymName, IAcknexObject MY, IAcknexObject THERE)
        {
            if (SynonymsByName.TryGetValue(synonymName, out var synonym))
            {
                var value = synonym.AcknexObject.GetAcknexObject(PropertyName.VAL) ?? synonym.AcknexObject.GetAcknexObject(PropertyName.DEFAULT);
                if (value != null)
                {
                    yield return CallAction(MY, value.Name, MY, THERE);
                }
            }
        }

        public IEnumerator CallAction(IAcknexObject source, string name, IAcknexObject MY, IAcknexObject THERE)
        {
            if (_runtime == null)
            {
                yield break;
            }
            var moveMode = GetSkillValue(SkillName.MOVE_MODE);
            if (moveMode <= 0.5f)
            {
                yield break;
            }
            yield return (IEnumerator)_runtime.CallAction(name, MY, THERE);
        }

        public void TriggerEvent(PropertyName name, IAcknexObject source, IAcknexObject MY, IAcknexObject THERE)
        {
            TriggerEvent((NameId)name, source, MY, THERE);
        }

        public void TriggerEvent(NameId name, IAcknexObject source, IAcknexObject MY, IAcknexObject THERE)
        {
            if (_runtime == null)
            {
                return;
            }
            var moveMode = GetSkillValue(SkillName.MOVE_MODE);
            if (moveMode <= 0.5f && name == (NameId)PropertyName.EACH_TICK || moveMode <= 0f && !IsKeyboardEvent(name))
            {
                return;
            }
            if (source.TryGetAcknexObject(name, out var acknexObject) && acknexObject?.Name != null)
            {
                StartManagedCoroutine(this, _runtime.CallAction(acknexObject.Name, MY, THERE));
            }
        }

        private bool IsKeyboardEvent(NameId name)
        {
            switch (name)
            {
                case (NameId)PropertyName.IF_ANYKEY:
                case (NameId)PropertyName.IF_TAST:
                case (NameId)PropertyName.IF_0:
                case (NameId)PropertyName.IF_1:
                case (NameId)PropertyName.IF_2:
                case (NameId)PropertyName.IF_3:
                case (NameId)PropertyName.IF_4:
                case (NameId)PropertyName.IF_5:
                case (NameId)PropertyName.IF_6:
                case (NameId)PropertyName.IF_7:
                case (NameId)PropertyName.IF_8:
                case (NameId)PropertyName.IF_9:
                case (NameId)PropertyName.IF_A:
                case (NameId)PropertyName.IF_B:
                case (NameId)PropertyName.IF_C:
                case (NameId)PropertyName.IF_D:
                case (NameId)PropertyName.IF_E:
                case (NameId)PropertyName.IF_F:
                case (NameId)PropertyName.IF_G:
                case (NameId)PropertyName.IF_H:
                case (NameId)PropertyName.IF_I:
                case (NameId)PropertyName.IF_J:
                case (NameId)PropertyName.IF_K:
                case (NameId)PropertyName.IF_L:
                case (NameId)PropertyName.IF_M:
                case (NameId)PropertyName.IF_N:
                case (NameId)PropertyName.IF_O:
                case (NameId)PropertyName.IF_P:
                case (NameId)PropertyName.IF_Q:
                case (NameId)PropertyName.IF_R:
                case (NameId)PropertyName.IF_S:
                case (NameId)PropertyName.IF_T:
                case (NameId)PropertyName.IF_U:
                case (NameId)PropertyName.IF_V:
                case (NameId)PropertyName.IF_X:
                case (NameId)PropertyName.IF_Y:
                case (NameId)PropertyName.IF_Z:
                case (NameId)PropertyName.IF_W:
                case (NameId)PropertyName.IF_ALT:
                case (NameId)PropertyName.IF_BKSP:
                case (NameId)PropertyName.IF_CAL:
                case (NameId)PropertyName.IF_CAR:
                case (NameId)PropertyName.IF_CTRL:
                case (NameId)PropertyName.IF_DEL:
                case (NameId)PropertyName.IF_END:
                case (NameId)PropertyName.IF_ENTER:
                case (NameId)PropertyName.IF_ESC:
                case (NameId)PropertyName.IF_F1:
                case (NameId)PropertyName.IF_F2:
                case (NameId)PropertyName.IF_F3:
                case (NameId)PropertyName.IF_F4:
                case (NameId)PropertyName.IF_F5:
                case (NameId)PropertyName.IF_F6:
                case (NameId)PropertyName.IF_F7:
                case (NameId)PropertyName.IF_F8:
                case (NameId)PropertyName.IF_F9:
                case (NameId)PropertyName.IF_F10:
                case (NameId)PropertyName.IF_F11:
                case (NameId)PropertyName.IF_F12:
                case (NameId)PropertyName.IF_HOME:
                case (NameId)PropertyName.IF_INS:
                case (NameId)PropertyName.IF_LEFT:
                case (NameId)PropertyName.IF_MIDDLE:
                case (NameId)PropertyName.IF_RIGHT:
                case (NameId)PropertyName.IF_PAUSE:
                case (NameId)PropertyName.IF_PGDN:
                case (NameId)PropertyName.IF_PGUP:
                case (NameId)PropertyName.IF_SPACE:
                case (NameId)PropertyName.IF_TAB:
                case (NameId)PropertyName.IF_CUU:
                case (NameId)PropertyName.IF_CUD:
                case (NameId)PropertyName.IF_CUR:
                case (NameId)PropertyName.IF_CUL:
                case (NameId)PropertyName.IF_SHIFT:
                case (NameId)PropertyName.IF_APO:
                case (NameId)PropertyName.IF_MINUS:
                case (NameId)PropertyName.IF_PLUS:
                    return true;
                default:
                    return false;
            }
        }

        public void TriggerEventConditional(IAcknexObject acknexObject, PropertyName eventName, bool condition)
        {
            TriggerEventConditional(acknexObject, (NameId)eventName, condition);
        }

        public void TriggerEventConditional(IAcknexObject acknexObject, NameId eventName, bool condition)
        {
            if (condition)
            {
                TriggerEvent(eventName, acknexObject, null, null);
            }
        }

        private IEnumerator TriggerTickEvents(IAcknexObject acknexObject)
        {
            while (true)
            {
                foreach (var tickEvent in TickEvents)
                {
                    TriggerEvent(tickEvent, acknexObject, null, null);
                }
                yield return null;
            }
        }

        private IEnumerator TriggerSecEvents(IAcknexObject acknexObject)
        {
            while (true)
            {
                foreach (var secEvent in SecEvents)
                {
                    TriggerEvent(secEvent, acknexObject, null, null);
                }
                yield return WaitForSecond;
            }
        }

        private IEnumerator SetupEvents()
        {
            yield return new WaitForSeconds(StartDelay);
            WaitForSecond = new WaitForSeconds(1f);
            WaitForTick = new WaitForSeconds(TimeUtils.TicksToTime(1));
            TriggerEvent(PropertyName.IF_START, AcknexObject, null, null);
            StartManagedCoroutine(this, TriggerTickEvents(AcknexObject));
            StartManagedCoroutine(this, TriggerSecEvents(AcknexObject));
            StartManagedCoroutine(this, UpdateEvents());
            Player.Instance.Enable();
        }

        private IEnumerator UpdateEvents()
        {
            while (true)
            {
                TriggerEventConditional(AcknexObject, PropertyName.IF_ANYKEY, Input.anyKeyDown);
                TriggerEventConditional(AcknexObject, PropertyName.IF_TAST, Input.anyKeyDown);
                TriggerEventConditional(AcknexObject, PropertyName.IF_0, Input.GetKeyDown(KeyCode.Keypad0) || Input.GetKeyDown(KeyCode.Alpha0));
                TriggerEventConditional(AcknexObject, PropertyName.IF_1, Input.GetKeyDown(KeyCode.Keypad1) || Input.GetKeyDown(KeyCode.Alpha1));
                TriggerEventConditional(AcknexObject, PropertyName.IF_2, Input.GetKeyDown(KeyCode.Keypad2) || Input.GetKeyDown(KeyCode.Alpha2));
                TriggerEventConditional(AcknexObject, PropertyName.IF_3, Input.GetKeyDown(KeyCode.Keypad3) || Input.GetKeyDown(KeyCode.Alpha3));
                TriggerEventConditional(AcknexObject, PropertyName.IF_4, Input.GetKeyDown(KeyCode.Keypad4) || Input.GetKeyDown(KeyCode.Alpha4));
                TriggerEventConditional(AcknexObject, PropertyName.IF_5, Input.GetKeyDown(KeyCode.Keypad5) || Input.GetKeyDown(KeyCode.Alpha5));
                TriggerEventConditional(AcknexObject, PropertyName.IF_6, Input.GetKeyDown(KeyCode.Keypad6) || Input.GetKeyDown(KeyCode.Alpha6));
                TriggerEventConditional(AcknexObject, PropertyName.IF_7, Input.GetKeyDown(KeyCode.Keypad7) || Input.GetKeyDown(KeyCode.Alpha7));
                TriggerEventConditional(AcknexObject, PropertyName.IF_8, Input.GetKeyDown(KeyCode.Keypad8) || Input.GetKeyDown(KeyCode.Alpha8));
                TriggerEventConditional(AcknexObject, PropertyName.IF_9, Input.GetKeyDown(KeyCode.Keypad9) || Input.GetKeyDown(KeyCode.Alpha9));
                TriggerEventConditional(AcknexObject, PropertyName.IF_A, Input.GetKeyDown(KeyCode.A));
                TriggerEventConditional(AcknexObject, PropertyName.IF_B, Input.GetKeyDown(KeyCode.B));
                TriggerEventConditional(AcknexObject, PropertyName.IF_C, Input.GetKeyDown(KeyCode.C));
                TriggerEventConditional(AcknexObject, PropertyName.IF_D, Input.GetKeyDown(KeyCode.D));
                TriggerEventConditional(AcknexObject, PropertyName.IF_E, Input.GetKeyDown(KeyCode.E));
                TriggerEventConditional(AcknexObject, PropertyName.IF_F, Input.GetKeyDown(KeyCode.F));
                TriggerEventConditional(AcknexObject, PropertyName.IF_G, Input.GetKeyDown(KeyCode.G));
                TriggerEventConditional(AcknexObject, PropertyName.IF_H, Input.GetKeyDown(KeyCode.H));
                TriggerEventConditional(AcknexObject, PropertyName.IF_I, Input.GetKeyDown(KeyCode.I));
                TriggerEventConditional(AcknexObject, PropertyName.IF_J, Input.GetKeyDown(KeyCode.J));
                TriggerEventConditional(AcknexObject, PropertyName.IF_K, Input.GetKeyDown(KeyCode.K));
                TriggerEventConditional(AcknexObject, PropertyName.IF_L, Input.GetKeyDown(KeyCode.L));
                TriggerEventConditional(AcknexObject, PropertyName.IF_M, Input.GetKeyDown(KeyCode.M));
                TriggerEventConditional(AcknexObject, PropertyName.IF_N, Input.GetKeyDown(KeyCode.N));
                TriggerEventConditional(AcknexObject, PropertyName.IF_O, Input.GetKeyDown(KeyCode.O));
                TriggerEventConditional(AcknexObject, PropertyName.IF_P, Input.GetKeyDown(KeyCode.P));
                TriggerEventConditional(AcknexObject, PropertyName.IF_Q, Input.GetKeyDown(KeyCode.Q));
                TriggerEventConditional(AcknexObject, PropertyName.IF_R, Input.GetKeyDown(KeyCode.R));
                TriggerEventConditional(AcknexObject, PropertyName.IF_S, Input.GetKeyDown(KeyCode.S));
                TriggerEventConditional(AcknexObject, PropertyName.IF_T, Input.GetKeyDown(KeyCode.T));
                TriggerEventConditional(AcknexObject, PropertyName.IF_U, Input.GetKeyDown(KeyCode.U));
                TriggerEventConditional(AcknexObject, PropertyName.IF_V, Input.GetKeyDown(KeyCode.V));
                TriggerEventConditional(AcknexObject, PropertyName.IF_X, Input.GetKeyDown(KeyCode.X));
                TriggerEventConditional(AcknexObject, PropertyName.IF_Y, Input.GetKeyDown(KeyCode.Y));
                TriggerEventConditional(AcknexObject, PropertyName.IF_Z, Input.GetKeyDown(KeyCode.Z));
                TriggerEventConditional(AcknexObject, PropertyName.IF_W, Input.GetKeyDown(KeyCode.W));
                TriggerEventConditional(AcknexObject, PropertyName.IF_ALT, Input.GetKeyDown(KeyCode.LeftAlt) || Input.GetKeyDown(KeyCode.RightAlt));
                TriggerEventConditional(AcknexObject, PropertyName.IF_BKSP, Input.GetKeyDown(KeyCode.Backspace));
                TriggerEventConditional(AcknexObject, PropertyName.IF_CAL, Input.GetKeyDown(KeyCode.Comma));
                TriggerEventConditional(AcknexObject, PropertyName.IF_CAR, Input.GetKeyDown(KeyCode.Period));
                TriggerEventConditional(AcknexObject, PropertyName.IF_CTRL, Input.GetKeyDown(KeyCode.LeftControl) || Input.GetKeyDown(KeyCode.RightControl));
                TriggerEventConditional(AcknexObject, PropertyName.IF_END, Input.GetKeyDown(KeyCode.End));
                TriggerEventConditional(AcknexObject, PropertyName.IF_ENTER, Input.GetKeyDown(KeyCode.KeypadEnter) || Input.GetKeyDown(KeyCode.Return));
                TriggerEventConditional(AcknexObject, PropertyName.IF_ESC, Input.GetKeyDown(KeyCode.Escape));
                TriggerEventConditional(AcknexObject, PropertyName.IF_F1, Input.GetKeyDown(KeyCode.F1));
                TriggerEventConditional(AcknexObject, PropertyName.IF_F2, Input.GetKeyDown(KeyCode.F2));
                TriggerEventConditional(AcknexObject, PropertyName.IF_F3, Input.GetKeyDown(KeyCode.F3));
                TriggerEventConditional(AcknexObject, PropertyName.IF_F4, Input.GetKeyDown(KeyCode.F4));
                TriggerEventConditional(AcknexObject, PropertyName.IF_F5, Input.GetKeyDown(KeyCode.F5));
                TriggerEventConditional(AcknexObject, PropertyName.IF_F6, Input.GetKeyDown(KeyCode.F6));
                TriggerEventConditional(AcknexObject, PropertyName.IF_F7, Input.GetKeyDown(KeyCode.F7));
                TriggerEventConditional(AcknexObject, PropertyName.IF_F8, Input.GetKeyDown(KeyCode.F8));
                TriggerEventConditional(AcknexObject, PropertyName.IF_F9, Input.GetKeyDown(KeyCode.F9));
                TriggerEventConditional(AcknexObject, PropertyName.IF_F10, Input.GetKeyDown(KeyCode.F10));
                TriggerEventConditional(AcknexObject, PropertyName.IF_F11, Input.GetKeyDown(KeyCode.F11));
                TriggerEventConditional(AcknexObject, PropertyName.IF_F12, Input.GetKeyDown(KeyCode.F12));
                TriggerEventConditional(AcknexObject, PropertyName.IF_HOME, Input.GetKeyDown(KeyCode.Home));
                TriggerEventConditional(AcknexObject, PropertyName.IF_INS, Input.GetKeyDown(KeyCode.Insert));
                TriggerEventConditional(AcknexObject, PropertyName.IF_DEL, Input.GetKeyDown(KeyCode.Delete));
                TriggerEventConditional(AcknexObject, PropertyName.IF_LEFT, Input.GetMouseButtonDown(0));
                TriggerEventConditional(AcknexObject, PropertyName.IF_MIDDLE, Input.GetMouseButtonDown(1));
                TriggerEventConditional(AcknexObject, PropertyName.IF_RIGHT, Input.GetMouseButtonDown(2));
                TriggerEventConditional(AcknexObject, PropertyName.IF_PAUSE, Input.GetKeyDown(KeyCode.Pause));
                TriggerEventConditional(AcknexObject, PropertyName.IF_PGDN, Input.GetKeyDown(KeyCode.PageDown));
                TriggerEventConditional(AcknexObject, PropertyName.IF_PGUP, Input.GetKeyDown(KeyCode.PageUp));
                TriggerEventConditional(AcknexObject, PropertyName.IF_SPACE, Input.GetKeyDown(KeyCode.Space));
                TriggerEventConditional(AcknexObject, PropertyName.IF_TAB, Input.GetKeyDown(KeyCode.Tab));
                TriggerEventConditional(AcknexObject, PropertyName.IF_CUU, Input.GetKeyDown(KeyCode.UpArrow));
                TriggerEventConditional(AcknexObject, PropertyName.IF_CUD, Input.GetKeyDown(KeyCode.DownArrow));
                TriggerEventConditional(AcknexObject, PropertyName.IF_CUR, Input.GetKeyDown(KeyCode.RightArrow));
                TriggerEventConditional(AcknexObject, PropertyName.IF_CUL, Input.GetKeyDown(KeyCode.LeftArrow));
                TriggerEventConditional(AcknexObject, PropertyName.IF_SHIFT, Input.GetKeyDown(KeyCode.LeftShift) || Input.GetKeyDown(KeyCode.RightShift));
                TriggerEventConditional(AcknexObject, PropertyName.IF_APO, Input.GetKeyDown(KeyCode.Quote));
                TriggerEventConditional(AcknexObject, PropertyName.IF_MINUS, Input.GetKeyDown(KeyCode.Minus) || Input.GetKeyDown(KeyCode.KeypadMinus));
                TriggerEventConditional(AcknexObject, PropertyName.IF_PLUS, Input.GetKeyDown(KeyCode.Plus) || Input.GetKeyDown(KeyCode.KeypadPlus));
                yield return null;
            }
        }
    }
}
