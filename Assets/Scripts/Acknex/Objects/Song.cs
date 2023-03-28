using Acknex.Interfaces;
using System.ComponentModel;
using System.IO;
using UnityEngine;
using UnityMidi;

namespace Acknex
{
    public class Song : IAcknexObjectContainer
    {
        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {

        }
        public bool DebugMarked { get; set; }
        public GameObject GameObject => null;

        public FileResource Resource;

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Song);
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


        public void SetupTemplate()
        {
            if (AcknexObject.TryGetString("FILENAME", out var filename))
            {
                Resource = new FileResource();
                Resource.path = filename;
            }
        }

        public void SetupInstance()
        {
            
        }

        public Vector3 GetCenter()
        {
            return default;
        }

        public IAcknexObject GetRegion()
        {
            return null;
        }

        public Song()
        {
            AcknexObject.Container = this;
        }
    }
}