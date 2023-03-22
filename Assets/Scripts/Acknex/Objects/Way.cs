using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Acknex.Interfaces;
using UnityEngine;
using UnityEngine.Experimental.Rendering;

namespace Acknex
{
    public class Way : MonoBehaviour, IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Way);

        private static IAcknexObject GetTemplateCallback(string name)
        {
            if (World.Instance.WaysByName.TryGetValue(name, out var definition))
            {
                return definition.AcknexObject;
            }
            return null;
        }

        public List<Vector2> Points = new List<Vector2>();

        public List<Vector2> InstancePoints
        {
            get
            {

                var firstInstance = World.Instance.AllWaysByName[AcknexObject.GetString("NAME")].First();
                return firstInstance.Points;
            }
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

        private IEnumerator UpdateInstance()
        {
            while (!AcknexObject.IsInstance)
            {
                yield return null;
            }
            while (true)
            {
                UpdateObject();
                UpdateEvents();
                yield return null;
            }
        }

        public void UpdateObject()
        {
            if (!AcknexObject.IsDirty)
            {
                return;
            }
            AcknexObject.IsDirty = false;
        }

        private void UpdateEvents()
        {
          
        }

        public void Enable()
        {
            gameObject.SetActive(true);
        }

        public void Disable()
        {
            gameObject.SetActive(false);
        }

        public void SetupTemplate()
        {

        }

        public void SetupInstance()
        {
            StartCoroutine(UpdateInstance());
            AcknexObject.IsInstance = true;
        }

        public Vector3 GetCenter()
        {
            return transform.position;
        }

        public IAcknexObject GetRegion()
        {
            return null;
        }

        private void Awake()
        {
            AcknexObject.Container = this;
        }
    }
}
