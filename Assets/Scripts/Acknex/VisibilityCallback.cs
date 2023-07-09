using UnityEngine;

namespace Acknex
{
    public class VisibilityCallback : MonoBehaviour
    {
        public System.Action OnBecomeVisibleCallback;
        public System.Action OnBecomeInvisibleCallback;

        private void OnBecameVisible()
        {
            if (OnBecomeVisibleCallback != null)
            {
                OnBecomeVisibleCallback();
            }
        }

        private void OnBecameInvisible()
        {
            if (OnBecomeInvisibleCallback != null)
            {
                OnBecomeInvisibleCallback();
            }
        }
    }
}