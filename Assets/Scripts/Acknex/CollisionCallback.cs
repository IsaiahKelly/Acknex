using System;
using UnityEngine;

namespace Acknex
{
    public class CollisionCallback : MonoBehaviour
    {
        public Action<Collision> OnCollisionEnterCallback;
        public Action<Collision> OnCollisionExitCallback;
        public Action<Collider> OnTriggerEnterCallback;
        public Action<Collider> OnTriggerExitCallback;

        private void OnCollisionEnter(Collision collision)
        {
            if (OnCollisionEnterCallback != null)
                OnCollisionEnterCallback(collision);
        }

        private void OnCollisionExit(Collision collision)
        {
            if (OnCollisionExitCallback != null)
                OnCollisionExitCallback(collision);
        }

        private void OnTriggerEnter(Collider collider)
        {
            if (OnTriggerEnterCallback != null)
                OnTriggerEnterCallback(collider);
        }

        private void OnTriggerExit(Collider collider)
        {
            if (OnTriggerExitCallback != null)
                OnTriggerExitCallback(collider);
        }
    }
}
