using System.Collections.Generic;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Way : MonoBehaviour, IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetDefinitionCallback);

        private static IAcknexObject GetDefinitionCallback(string name)
        {
            if (World.Instance.WaysByName.TryGetValue(name, out var definition))
            {
                return definition.AcknexObject;
            }
            return null;
        }

        public List<Vector2> Points = new List<Vector2>();
        //public string NAME;

        //public Way Definition
        //{
        //    get
        //    {
        //        if (World.Instance.WaysByName.TryGetValue(AcknexObject.Get<string>("NAME"), out var way))
        //        {
        //            return way;
        //        }
        //        return null;
        //    }
        //}


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
