using UnityEngine;

namespace Acknex
{
    public static class CameraExtensions
    {
        private static Camera _lastActiveCamera;

        public static Camera GetLastActiveCamera()
        {
            var camera = Camera.current;
            if (camera == null)
            {
                return _lastActiveCamera ?? Camera.main;
            }
            _lastActiveCamera = camera;
            return camera;
        }
    }
}
