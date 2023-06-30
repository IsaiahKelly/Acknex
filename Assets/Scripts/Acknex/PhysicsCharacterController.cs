using UnityEngine;

namespace Acknex
{
    [RequireComponent(typeof(Rigidbody))]
    public class PhysicsCharacterController : MonoBehaviour
    {
        public float stepOffset;
        public float skinWidth;
        public Vector3 center;
        public float radius;
        public float height;

        public LayerMask includeLayers
        {
            get => _collider.includeLayers;
            set => _collider.includeLayers = value;
        }
        public LayerMask excludeLayers
        {
            get => _collider.excludeLayers;
            set => _collider.excludeLayers = value;
        }

        public Vector3 velocity { get; private set; }

        private Rigidbody _rigidbody;
        private MeshCollider _collider;

        private GameObject _colliderGameObject;

        private Vector3 _pendingVelocity;

        private void Awake()
        {
            _rigidbody = GetComponent<Rigidbody>();
            _rigidbody.constraints = RigidbodyConstraints.FreezeRotationX | RigidbodyConstraints.FreezeRotationY | RigidbodyConstraints.FreezeRotationZ;
            _rigidbody.interpolation = RigidbodyInterpolation.Extrapolate;
            _rigidbody.useGravity = false;
            _colliderGameObject = new GameObject("Collider");
            _colliderGameObject.layer = gameObject.layer;
            _colliderGameObject.transform.SetParent(transform, false);
            _collider = _colliderGameObject.AddComponent<MeshCollider>();
            _collider.sharedMesh = MeshUtils.CreateCappedCylinder(1f, 16, 1f);
            _collider.convex = true;
        }

        private void Update()
        {
            _colliderGameObject.transform.localScale = new Vector3(radius, height, radius);
            _colliderGameObject.transform.localPosition = center;
        }

        private void FixedUpdate()
        {
            _rigidbody.MovePosition(transform.position + _pendingVelocity);
            velocity = _pendingVelocity;
            _pendingVelocity = default;
        }

        public void Move(Vector3 delta)
        {
            _pendingVelocity += delta;
        }
    }
}