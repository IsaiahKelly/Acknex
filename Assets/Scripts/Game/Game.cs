using Acknex.Interfaces;
using UnityEngine;

namespace Game
{
    public static class Game {
        public static WaitForEndOfFrame WaitForEndOfFrame = new WaitForEndOfFrame();
        public static bool CheckEquals(float a, float b) {
            return MathUtils.CheckEquals(a, b);
        }
        public static bool CheckEquals(IAcknexObject a, IAcknexObject b)
        {
            return  a == b;
        }
        public static IAcknexRuntime GetRuntime(string className)
        {
            if (className == "VRDEMO")
            {
                return new VRDEMO();
            }
            //switch (className)
            //{
            //    case "CONTATO":
            //        return new CONTATO();
            //    case "INTRO01":
            //        return new INTRO01();
            //}
            return null;
        }
    }
}