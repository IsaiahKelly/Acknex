using System.Collections.Generic;
using System.Linq;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Way : MonoBehaviour, IAcknexObjectContainer
    {
        public List<Vector2> Points = new List<Vector2>();

        public List<Vector2> InstancePoints
        {
            get
            {
                var firstInstance = World.Instance.AllWaysByName[AcknexObject.GetString("NAME")].First();
                return firstInstance.Points;
            }
        }

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Way);

        public void Disable()
        {
            gameObject.SetActive(false);
        }

        public void Enable()
        {
            gameObject.SetActive(true);
        }

        public Vector3 GetCenter()
        {
            return transform.position;
        }

        public IAcknexObject GetRegion()
        {
            return null;
        }

        public void SetupInstance()
        {
            if (AcknexObject.IsInstance)
            {
                return;
            }
            AcknexObject.IsInstance = true;
        }

        public void SetupTemplate()
        {
        }

        public GameObject GameObject => gameObject;

        public void UpdateObject()
        {
            if (!AcknexObject.IsDirty)
            {
                return;
            }
            AcknexObject.IsDirty = false;
        }

        private static IAcknexObject GetTemplateCallback(string name)
        {
            if (World.Instance.WaysByName.TryGetValue(name, out var definition))
            {
                return definition.AcknexObject;
            }
            return null;
        }

        public void OnDrawGizmos()
        {
            Gizmos.color = Color.yellow;
            for (var i = 1; i < Points.Count; i++)
            {
                Gizmos.DrawLine(MeshUtils.ToXZ(Points[i - 1]), MeshUtils.ToXZ(Points[i]));
                Gizmos.DrawSphere(MeshUtils.ToXZ(Points[i]), 1f);
            }
        }

        public void OnDrawGizmosSelected()
        {
            Gizmos.color = Color.green;
            for (var i = 1; i < Points.Count; i++)
            {
                Gizmos.DrawLine(MeshUtils.ToXZ(Points[i - 1]), MeshUtils.ToXZ(Points[i]));
                Gizmos.DrawSphere(MeshUtils.ToXZ(Points[i]), 1f);
            }
        }

        private void UpdateInstance()
        {
            if (!AcknexObject.IsInstance)
            {
                return;
            }
            UpdateObject();
            UpdateEvents();
        }

        private void UpdateEvents()
        {
        }

        private void Awake()
        {
            AcknexObject.Container = this;
        }
    }
}