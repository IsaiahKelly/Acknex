﻿using System.Collections;
using System.Collections.Generic;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{

    public partial class World
    {
        public WaitForSeconds WaitForSecond;

        private struct Event
        {
            public IAcknexObject My;
            public string ActionName;
            public IAcknexObject Extra;
            public IAcknexObject There;
        }

        private static readonly string[] TickEvents = new string[]
        {
            "EACH_TICK.1",
            "EACH_TICK.2",
            "EACH_TICK.3",
            "EACH_TICK.4",
            "EACH_TICK.5",
            "EACH_TICK.6",
            "EACH_TICK.7",
            "EACH_TICK.8",
            "EACH_TICK.9",
            "EACH_TICK.10",
            "EACH_TICK.11",
            "EACH_TICK.12",
            "EACH_TICK.13",
            "EACH_TICK.14",
            "EACH_TICK.15",
            "EACH_TICK.16",
        };

        private static readonly string[] SecEvents = new string[]
        {
            "EACH_SEC.1",
            "EACH_SEC.2",
            "EACH_SEC.3",
            "EACH_SEC.4",
            "EACH_SEC.5",
            "EACH_SEC.6",
            "EACH_SEC.7",
            "EACH_SEC.8",
            "EACH_SEC.9",
            "EACH_SEC.10",
            "EACH_SEC.11",
            "EACH_SEC.12",
            "EACH_SEC.13",
            "EACH_SEC.14",
            "EACH_SEC.15",
            "EACH_SEC.16",
        };

        private Queue<Event> _events = new Queue<Event>();

        public IEnumerator CallSynonymAction(string synonymName, IAcknexObject MY, IAcknexObject THERE)
        {
            if (SynonymsByName.TryGetValue(synonymName, out var synonym))
            {
                var value = synonym.AcknexObject.GetAcknexObject("VAL") ?? synonym.AcknexObject.GetAcknexObject("DEFAULT");
                if (value != null)
                {
                    yield return CallAction(MY, value.GetString("NAME"), MY, THERE);
                }
            }
        }

        public IEnumerator CallAction(IAcknexObject source, string name, IAcknexObject MY, IAcknexObject THERE)
        {
            if (_runtime == null)
            {
                yield break;
            }
            yield return (IEnumerator)_runtime.CallAction(name, MY, THERE);
        }

        public void TriggerEvent(string name, IAcknexObject source, IAcknexObject MY, IAcknexObject THERE)
        {
            if (_runtime == null)
            {
                return;
            }
            if (source.TryGetAcknexObject(name, out var acknexObject) && acknexObject != null)
            {
                if (acknexObject.TryGetString("NAME", out var value) && value != null)
                {
                    StartCoroutine(_runtime.CallAction(value, MY, THERE));
                }
            }
        }

        public void TriggerEventConditional(IAcknexObject acknexObject, string eventName, bool condition)
        {
            if (condition)
            {
                TriggerEvent(eventName, acknexObject, acknexObject, null);
            }
        }

        private IEnumerator TriggerTickEvents(IAcknexObject acknexObject)
        {
            while (true)
            {
                foreach (var tickEvent in TickEvents)
                {
                    TriggerEvent(tickEvent, acknexObject, acknexObject, null);
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
                    TriggerEvent(secEvent, acknexObject, acknexObject, null);
                }
                yield return WaitForSecond;
            }
        }

        private void IfStart()
        {
            TriggerEvent("IF_START", AcknexObject, AcknexObject, null);
            StartCoroutine(TriggerTickEvents(AcknexObject));
            StartCoroutine(TriggerSecEvents(AcknexObject));
            StartCoroutine(UpdateEvents());
        }

        private void SetupEvents()
        {
            Invoke("IfStart", 1f/60f);
            WaitForSecond = new WaitForSeconds(1f);
        }

        private IEnumerator UpdateEvents()
        {
            while (true)
            {
                TriggerEventConditional(AcknexObject, "IF_ANYKEY", Input.anyKeyDown);
                TriggerEventConditional(AcknexObject, "IF_TAST", Input.anyKeyDown);
                TriggerEventConditional(AcknexObject, "IF_0", Input.GetKeyDown(KeyCode.Keypad0) || Input.GetKeyDown(KeyCode.Alpha0));
                TriggerEventConditional(AcknexObject, "IF_1", Input.GetKeyDown(KeyCode.Keypad1) || Input.GetKeyDown(KeyCode.Alpha1));
                TriggerEventConditional(AcknexObject, "IF_2", Input.GetKeyDown(KeyCode.Keypad2) || Input.GetKeyDown(KeyCode.Alpha2));
                TriggerEventConditional(AcknexObject, "IF_3", Input.GetKeyDown(KeyCode.Keypad3) || Input.GetKeyDown(KeyCode.Alpha3));
                TriggerEventConditional(AcknexObject, "IF_4", Input.GetKeyDown(KeyCode.Keypad4) || Input.GetKeyDown(KeyCode.Alpha4));
                TriggerEventConditional(AcknexObject, "IF_5", Input.GetKeyDown(KeyCode.Keypad5) || Input.GetKeyDown(KeyCode.Alpha5));
                TriggerEventConditional(AcknexObject, "IF_6", Input.GetKeyDown(KeyCode.Keypad6) || Input.GetKeyDown(KeyCode.Alpha6));
                TriggerEventConditional(AcknexObject, "IF_7", Input.GetKeyDown(KeyCode.Keypad7) || Input.GetKeyDown(KeyCode.Alpha7));
                TriggerEventConditional(AcknexObject, "IF_8", Input.GetKeyDown(KeyCode.Keypad8) || Input.GetKeyDown(KeyCode.Alpha8));
                TriggerEventConditional(AcknexObject, "IF_9", Input.GetKeyDown(KeyCode.Keypad9) || Input.GetKeyDown(KeyCode.Alpha9));
                TriggerEventConditional(AcknexObject, "IF_A", Input.GetKeyDown(KeyCode.A));
                TriggerEventConditional(AcknexObject, "IF_B", Input.GetKeyDown(KeyCode.B));
                TriggerEventConditional(AcknexObject, "IF_C", Input.GetKeyDown(KeyCode.C));
                TriggerEventConditional(AcknexObject, "IF_D", Input.GetKeyDown(KeyCode.D));
                TriggerEventConditional(AcknexObject, "IF_E", Input.GetKeyDown(KeyCode.E));
                TriggerEventConditional(AcknexObject, "IF_F", Input.GetKeyDown(KeyCode.F));
                TriggerEventConditional(AcknexObject, "IF_G", Input.GetKeyDown(KeyCode.G));
                TriggerEventConditional(AcknexObject, "IF_H", Input.GetKeyDown(KeyCode.H));
                TriggerEventConditional(AcknexObject, "IF_I", Input.GetKeyDown(KeyCode.I));
                TriggerEventConditional(AcknexObject, "IF_J", Input.GetKeyDown(KeyCode.J));
                TriggerEventConditional(AcknexObject, "IF_K", Input.GetKeyDown(KeyCode.K));
                TriggerEventConditional(AcknexObject, "IF_L", Input.GetKeyDown(KeyCode.L));
                TriggerEventConditional(AcknexObject, "IF_M", Input.GetKeyDown(KeyCode.M));
                TriggerEventConditional(AcknexObject, "IF_N", Input.GetKeyDown(KeyCode.N));
                TriggerEventConditional(AcknexObject, "IF_O", Input.GetKeyDown(KeyCode.O));
                TriggerEventConditional(AcknexObject, "IF_P", Input.GetKeyDown(KeyCode.P));
                TriggerEventConditional(AcknexObject, "IF_Q", Input.GetKeyDown(KeyCode.Q));
                TriggerEventConditional(AcknexObject, "IF_R", Input.GetKeyDown(KeyCode.R));
                TriggerEventConditional(AcknexObject, "IF_S", Input.GetKeyDown(KeyCode.S));
                TriggerEventConditional(AcknexObject, "IF_T", Input.GetKeyDown(KeyCode.T));
                TriggerEventConditional(AcknexObject, "IF_U", Input.GetKeyDown(KeyCode.U));
                TriggerEventConditional(AcknexObject, "IF_V", Input.GetKeyDown(KeyCode.V));
                TriggerEventConditional(AcknexObject, "IF_X", Input.GetKeyDown(KeyCode.X));
                TriggerEventConditional(AcknexObject, "IF_Y", Input.GetKeyDown(KeyCode.Y));
                TriggerEventConditional(AcknexObject, "IF_Z", Input.GetKeyDown(KeyCode.Z));
                TriggerEventConditional(AcknexObject, "IF_W", Input.GetKeyDown(KeyCode.W));
                TriggerEventConditional(AcknexObject, "IF_ALT", Input.GetKeyDown(KeyCode.LeftAlt) || Input.GetKeyDown(KeyCode.RightAlt));
                TriggerEventConditional(AcknexObject, "IF_BKSP", Input.GetKeyDown(KeyCode.Backspace));
                TriggerEventConditional(AcknexObject, "IF_CAL", Input.GetKeyDown(KeyCode.Comma));
                TriggerEventConditional(AcknexObject, "IF_CAR", Input.GetKeyDown(KeyCode.Period));
                TriggerEventConditional(AcknexObject, "IF_CTRL", Input.GetKeyDown(KeyCode.LeftControl) || Input.GetKeyDown(KeyCode.RightControl));
                TriggerEventConditional(AcknexObject, "IF_DEL", Input.GetKeyDown(KeyCode.Delete));
                TriggerEventConditional(AcknexObject, "IF_END", Input.GetKeyDown(KeyCode.End));
                TriggerEventConditional(AcknexObject, "IF_ENTER", Input.GetKeyDown(KeyCode.KeypadEnter) || Input.GetKeyDown(KeyCode.Return));
                TriggerEventConditional(AcknexObject, "IF_ESC", Input.GetKeyDown(KeyCode.Escape));
                TriggerEventConditional(AcknexObject, "IF_F1", Input.GetKeyDown(KeyCode.F1));
                TriggerEventConditional(AcknexObject, "IF_F2", Input.GetKeyDown(KeyCode.F2));
                TriggerEventConditional(AcknexObject, "IF_F3", Input.GetKeyDown(KeyCode.F3));
                TriggerEventConditional(AcknexObject, "IF_F4", Input.GetKeyDown(KeyCode.F4));
                TriggerEventConditional(AcknexObject, "IF_F5", Input.GetKeyDown(KeyCode.F5));
                TriggerEventConditional(AcknexObject, "IF_F6", Input.GetKeyDown(KeyCode.F6));
                TriggerEventConditional(AcknexObject, "IF_F7", Input.GetKeyDown(KeyCode.F7));
                TriggerEventConditional(AcknexObject, "IF_F8", Input.GetKeyDown(KeyCode.F8));
                TriggerEventConditional(AcknexObject, "IF_F9", Input.GetKeyDown(KeyCode.F9));
                TriggerEventConditional(AcknexObject, "IF_F10", Input.GetKeyDown(KeyCode.F10));
                TriggerEventConditional(AcknexObject, "IF_F11", Input.GetKeyDown(KeyCode.F11));
                TriggerEventConditional(AcknexObject, "IF_F12", Input.GetKeyDown(KeyCode.F12));
                TriggerEventConditional(AcknexObject, "IF_HOME", Input.GetKeyDown(KeyCode.Home));
                TriggerEventConditional(AcknexObject, "IF_INS", Input.GetKeyDown(KeyCode.Insert));
                TriggerEventConditional(AcknexObject, "IF_DEL", Input.GetKeyDown(KeyCode.Delete));
                TriggerEventConditional(AcknexObject, "IF_LEFT", Input.GetMouseButtonDown(0));
                TriggerEventConditional(AcknexObject, "IF_MIDDLE", Input.GetMouseButtonDown(1));
                TriggerEventConditional(AcknexObject, "IF_RIGHT", Input.GetMouseButtonDown(2));
                TriggerEventConditional(AcknexObject, "IF_PAUSE", Input.GetKeyDown(KeyCode.Pause));
                TriggerEventConditional(AcknexObject, "IF_PGDN", Input.GetKeyDown(KeyCode.PageDown));
                TriggerEventConditional(AcknexObject, "IF_PGUP", Input.GetKeyDown(KeyCode.PageUp));
                TriggerEventConditional(AcknexObject, "IF_SPACE", Input.GetKeyDown(KeyCode.Space));
                TriggerEventConditional(AcknexObject, "IF_TAB", Input.GetKeyDown(KeyCode.Tab));
                TriggerEventConditional(AcknexObject, "IF_CUU", Input.GetKeyDown(KeyCode.UpArrow));
                TriggerEventConditional(AcknexObject, "IF_CUD", Input.GetKeyDown(KeyCode.DownArrow));
                TriggerEventConditional(AcknexObject, "IF_CUR", Input.GetKeyDown(KeyCode.RightArrow));
                TriggerEventConditional(AcknexObject, "IF_CUL", Input.GetKeyDown(KeyCode.LeftArrow));
                TriggerEventConditional(AcknexObject, "IF_SHIFT", Input.GetKeyDown(KeyCode.LeftShift) || Input.GetKeyDown(KeyCode.RightShift));
                TriggerEventConditional(AcknexObject, "IF_APO", Input.GetKeyDown(KeyCode.Quote));
                TriggerEventConditional(AcknexObject, "IF_MINUS", Input.GetKeyDown(KeyCode.Minus) || Input.GetKeyDown(KeyCode.KeypadMinus));
                TriggerEventConditional(AcknexObject, "IF_PLUS", Input.GetKeyDown(KeyCode.Plus) || Input.GetKeyDown(KeyCode.KeypadPlus));
                yield return null;
            }
        }
    }
}
