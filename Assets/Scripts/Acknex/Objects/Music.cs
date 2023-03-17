using Acknex.Interfaces;
using System.ComponentModel;
using System.IO;
using UnityMidi;

namespace Acknex
{
    public class Music : IAcknexObjectContainer
    {
        public FileResource Resource;

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Music);
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


        public void Setup()
        {
            if (AcknexObject.TryGetString("FILENAME", out var filename))
            {
                Resource = new FileResource();
                Resource.path = filename;
            }
        }

        public Music()
        {
            AcknexObject.Container = this;
        }
    }
}