using NameId = System.UInt32;
using Acknex.Interfaces;
using UnityEngine;
using UnityMidi;
using PropertyName = Acknex.Interfaces.PropertyName;

namespace Acknex
{
    public class Song : IAcknexObjectContainer
    {
        public override string ToString()
        {
            return AcknexObject.ToString();
        }

        public FileResource Resource;

        public Song()
        {
            AcknexObject.Container = this;
        }

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Song);

        public void Disable()
        {
        }

        public void Enable()
        {
        }

        public GameObject GameObject => null;

        public Vector3 GetCenter()
        {
            return default;
        }

        public IAcknexObject GetRegion()
        {
            return null;
        }

        
        

        

        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {
        }

        public void ResetTexture()
        {
        }

        public void SetupInstance()
        {
        }


        public void SetupTemplate()
        {
            if (AcknexObject.TryGetString(PropertyName.FILENAME, out var filename))
            {
                Resource = new FileResource();
                Resource.path = filename;
            }
        }

        public void UpdateObject()
        {
        }

        private static IAcknexObject GetTemplateCallback(NameId name)
        {
            return null;
        }
    }
}