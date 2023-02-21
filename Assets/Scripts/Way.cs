using System.Collections.Generic;
using UnityEngine;

namespace Acknex
{
    public class Way : MonoBehaviour, IAcknexObject
    {
        public List<Vector2> Points = new List<Vector2>();
        public string NAME;

        public void OnDrawGizmos()
        {
            Gizmos.color = Color.yellow;
            for (var i = 1; i < Points.Count; i++)
            {
                Gizmos.DrawLine(ToXZ(Points[i-1]), ToXZ(Points[i]));
            }
        }

        //todo: util method?
        private static Vector3 ToXZ(Vector2 point)
        {
            return new Vector3(point.x, 0f, point.y);
        }
    }
}
