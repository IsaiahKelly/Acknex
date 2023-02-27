using System.Collections.Generic;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Way : MonoBehaviour, IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback);

        private static IAcknexObject GetTemplateCallback(string name)
        {
            if (World.Instance.WaysByName.TryGetValue(name, out var definition))
            {
                return definition.AcknexObject;
            }
            return null;
        }

        public List<Vector2> Points = new List<Vector2>();

        public void OnDrawGizmos()
        {
            Gizmos.color = Color.yellow;
            for (var i = 1; i < Points.Count; i++)
            {
                Gizmos.DrawLine(MeshUtils.ToXZ(Points[i-1]), MeshUtils.ToXZ(Points[i]));
            }
        }

        public void UpdateObject()
        {
            throw new System.NotImplementedException();
        }

        public void Enable()
        {
            
        }

        public void Disable()
        {
            gameObject.SetActive(false);
        }
    }
}
