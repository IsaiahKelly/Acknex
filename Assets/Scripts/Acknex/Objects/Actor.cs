using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Actor : Thing
    {
        public override IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetDefinitionCallbackActor);

        private  static IAcknexObject GetDefinitionCallbackActor(string name)
        {
            if (World.Instance.ActorsByName.TryGetValue(name, out var definition))
            {
                return definition.AcknexObject;
            }
            return null;
        }
    }
}
