﻿using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Palette : IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Palette);
        public void UpdateObject()
        {

        }

        public void Enable()
        {

        }

        public void Disable()
        {

        }

        public void SetupTemplate()
        {
            
        }

        public void SetupInstance()
        {
            
        }

        public Vector3 GetCenter()
        {
            return default;
        }

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

    }
}