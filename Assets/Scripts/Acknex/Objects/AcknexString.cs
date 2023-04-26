﻿using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class AcknexString : IAcknexObjectContainer
    {
        public AcknexString(string value)
        {
            AcknexObject.Container = this;
            AcknexObject.SetString("VAL", value);
        }

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetDefinitionCallbackActor, ObjectType.String);

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

        public bool IsDebugMarked { get; set; }
        public bool IsGeometryDirty { get; set; }

        public bool IsTextureDirty { get; set; }

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
        }

        public void UpdateObject()
        {
        }

        private static IAcknexObject GetDefinitionCallbackActor(string name)
        {
            return null;
        }
    }
}