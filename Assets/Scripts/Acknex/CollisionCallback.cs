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
            OnCollisionEnterCallback(collision);
        }

        private void OnCollisionExit(Collision collision)
        {
            OnCollisionExitCallback(collision);
        }

        private void OnTriggerEnter(Collider collider)
        {
            OnTriggerEnterCallback(collider);
        }

        private void OnTriggerExit(Collider collider)
        {
            OnTriggerExitCallback(collider);
        }
    }
}
