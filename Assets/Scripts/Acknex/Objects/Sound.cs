﻿using Acknex.Interfaces;
using UnityEngine;
using UnityEngine.Networking;
using PropertyName = Acknex.Interfaces.PropertyName;

namespace Acknex
{
    public class Sound : IAcknexObjectContainer
    {
        public override string ToString()
        {
            return AcknexObject.ToString();
        }

        public AudioClip AudioClip;

        public Sound()
        {
            AcknexObject.Container = this;
        }

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Sound);

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
                var request = UnityWebRequestMultimedia.GetAudioClip(filename, AudioType.WAV);
                var enumerator = request.SendWebRequest();
                while (!enumerator.isDone)
                {
                }
                AudioClip = DownloadHandlerAudioClip.GetContent(request);
            }
        }

        public void UpdateObject()
        {
        }

        private static IAcknexObject GetTemplateCallback(int name)
        {
            return null;
        }
    }
}