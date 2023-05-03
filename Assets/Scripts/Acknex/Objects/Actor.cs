using NameId = System.UInt32;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Actor : Thing
    {
        public override string ToString()
        {
            return AcknexObject.ToString();
        }

        public override IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetDefinitionCallbackActor, ObjectType.Actor);

        private static IAcknexObject GetDefinitionCallbackActor(NameId name)
        {
            if (World.Instance.ActorsByName.TryGetValue(name, out var definition))
            {
                return definition.AcknexObject;
            }
            return null;
        }
    }
}
