using System.Collections.Generic;
using UnityEngine;

namespace Acknex
{
    public class Way : MonoBehaviour, IAcknexObject
    {
        public List<Vector2> Points = new List<Vector2>();
        public string NAME;

        public Way Definition
        {
            get
            {
                if (World.Instance.WaysByName.TryGetValue(NAME, out var way))
                {
                    return way;
                }
                return null;
            }
        }


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
