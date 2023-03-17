using AudioSynthesis;
using System.IO;
using UnityEngine;

namespace UnityMidi
{
    [System.Serializable]
    public class FileResource : IResource
    {
        public string path;

        public bool ReadAllowed()
        {
            return true;
        }

        public bool WriteAllowed()
        {
            return false;
        }

        public bool DeleteAllowed()
        {
            return false;
        }

        public string GetName()
        {
            return Path.GetFileName(path);
        }

        public Stream OpenResourceForRead()
        {
            return File.OpenRead(path);
        }

        public Stream OpenResourceForWrite()
        {
            throw new System.NotImplementedException();
        }

        public void DeleteResource()
        {
            throw new System.NotImplementedException();
        }
    }
}