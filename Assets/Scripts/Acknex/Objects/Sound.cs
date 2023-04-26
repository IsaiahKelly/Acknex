using Acknex.Interfaces;
using UnityEngine.Networking;
using UnityEngine;

namespace Acknex
{

    public class Sound : IAcknexObjectContainer
    {
        public void ResetTexture()
        {

        }
        public bool IsTextureDirty => false;
        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {

        }
        public bool DebugMarked { get; set; }
        public GameObject GameObject => null;

        public AudioClip AudioClip;

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Sound);
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

        public Sound()
        {
            AcknexObject.Container = this;
        }

        public void SetupTemplate()
        {
            if (AcknexObject.TryGetString("FILENAME", out var filename))
            {
                var request = UnityWebRequestMultimedia.GetAudioClip(filename, AudioType.WAV);
                var enumerator = request.SendWebRequest();
                while (!enumerator.isDone)
                {

                }
                AudioClip = DownloadHandlerAudioClip.GetContent(request);
                AudioClip.name = AcknexObject.Name;
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
    }
}