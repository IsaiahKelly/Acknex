﻿using Acknex.Interfaces;

namespace Acknex
{
    public class Font :  IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Font);
        public void UpdateObject()
        {

        }

        public void Enable()
        {

        }

        public void Disable()
        {

        }

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

    }
}