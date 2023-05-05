using NameId = System.UInt32;
using System.Collections.Generic;
using System.Linq;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Way : MonoBehaviour, IAcknexObjectContainer
    {
        public void NotifyPropertyChanged(uint propertyName)
        {

        }
        public override string ToString()
        {
            return AcknexObject.ToString();
        }

        public List<Vector2> Points = new List<Vector2>();

        public List<Vector2> InstancePoints
        {
            get
            {
                var firstInstance = World.Instance.AllWaysByName[AcknexObject.NameId].First();
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

        public GameObject GameObject => gameObject;

        public Vector3 GetCenter()
        {
            return transform.position;
        }

        public IAcknexObject GetRegion()
        {
            return null;
        }

        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {
        }

        public void ResetTexture()
        {
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

        public void UpdateObject()
        {
            if (!AcknexObject.IsDirty)
            {
                return;
            }
            AcknexObject.IsDirty = false;
        }

        private static IAcknexObject GetTemplateCallback(NameId name)
        {
            if (World.Instance.WaysByName.TryGetValue(name, out var definition))
            {
                return definition.AcknexObject;
            }
            return null;
        }

        private void OnDrawGizmos()
        {
//#if DEBUG_ENABLED
//            Gizmos.color = Color.yellow;
//            for (var i = 1; i < Points.Count; i++)
//            {
//                Gizmos.DrawLine(MeshUtils.ToXZ(Points[i - 1]), MeshUtils.ToXZ(Points[i]));
//                Gizmos.DrawSphere(MeshUtils.ToXZ(Points[i]), 1f);
//            }
//#endif
        }

        private void OnDrawGizmosSelected()
        {
//#if DEBUG_ENABLED
//            Gizmos.color = Color.green;
//            for (var i = 1; i < Points.Count; i++)
//            {
//                Gizmos.DrawLine(MeshUtils.ToXZ(Points[i - 1]), MeshUtils.ToXZ(Points[i]));
//                Gizmos.DrawSphere(MeshUtils.ToXZ(Points[i]), 1f);
//            }
//#endif
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