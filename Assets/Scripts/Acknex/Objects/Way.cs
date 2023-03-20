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
        }

        private void Awake()
        {
            AcknexObject.Container = this;
        }

        public IEnumerator MoveThingOrActor(IAcknexObject thingOrActor)
        {
            var waypoint = 1;
            thingOrActor.SetInteger("WAYPOINT", waypoint);
            var thing = (Thing)thingOrActor.Container;
            var firstInstance = World.Instance.AllWaysByName[AcknexObject.GetString("NAME")].First();
            if (firstInstance.Points.Count == 0)
            {
                World.Instance.TriggerEvent(thingOrActor, AcknexObject, thing.GetRegion(), "IF_ARRIVED");
                yield break;
            }
            var nextPoint = firstInstance.Points[waypoint - 1];
            for (; ; )
            {
                if (thing.MoveTo(nextPoint))
                {
                    waypoint++;
                    if (waypoint > firstInstance.Points.Count)
                    {
                        yield break;
                    }
                    AcknexObject.SetInteger("WAYPOINT", waypoint);
                    World.Instance.TriggerEvent(thingOrActor, AcknexObject, thing.GetRegion(), "IF_ARRIVED");
                    nextPoint = firstInstance.Points[waypoint - 1];
                }
                yield return null;
            }
        }
    }
}
