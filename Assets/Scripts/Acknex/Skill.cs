﻿using Acknex.Interfaces;

namespace Acknex
{
    public class Skill : IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetDefinitionCallback);

        private static IAcknexObject GetDefinitionCallback(string name)
        {
            return null;
        }

        //public float VAL;
        //public float MIN;
        //public float MAX;
        public void UpdateObject()
        {
            throw new System.NotImplementedException();
        }

        public void Enable()
        {
            
        }

        public void Disable()
        {
            
        }
    }
}