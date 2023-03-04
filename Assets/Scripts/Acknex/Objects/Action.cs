using System;
using System.Collections.Generic;
using System.IO;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Action : MonoBehaviour, IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback);

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

    
        private void Awake()
        {
            AcknexObject.Container = this;
        }

        private void Update()
        {
        }

        public void ParseAction(List<string> tokens, StreamReader streamReader, Func<StreamReader, List<string>> parseNextStatement)
        {
           
        }

        public void UpdateObject()
        {
            throw new NotImplementedException();
        }

        public void Enable()
        {

        }

        public void Disable()
        {

        }
    }
}
