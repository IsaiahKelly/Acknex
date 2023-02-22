using System;
using Acknex.Interfaces;
using DmitryBrant.ImageFormats;
using UnityEngine;

namespace Acknex
{
    [Serializable]
    public class Bitmap : IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetDefinitionCallback);

        private static IAcknexObject GetDefinitionCallback(string name)
        {
            return null;
        }
        public Texture2D Texture2D;
        public void Setup()
        {
            Texture2D = PcxReader.Load(AcknexObject.Get<string>("FILENAME"));
            Texture2D.name = AcknexObject.Get<string>("NAME");
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