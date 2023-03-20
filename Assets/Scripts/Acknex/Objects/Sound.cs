﻿using Acknex.Interfaces;
using UnityEngine.Networking;
using UnityEngine;

namespace Acknex
{

    public class Sound : IAcknexObjectContainer
    {
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
            }
        }

        public void SetupInstance()
        {
            
        }
    }
}