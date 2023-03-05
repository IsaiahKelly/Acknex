using System.Collections;
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
                Gizmos.DrawLine(MeshUtils.ToXZ(Points[i - 1]), MeshUtils.ToXZ(Points[i]));
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

        private void Awake()
        {
            AcknexObject.Container = this;
        }

        public IEnumerator MoveThingOrActor(IAcknexObject thingOrActor)
        {
            if (Points.Count == 0)
            {
                yield break;
            }
            var waypoint = thingOrActor.GetInteger("WAYPOINT");
            var nextPoint = Points[waypoint - 1];
            for (; ; )
            {
                var pos = new Vector2(thingOrActor.GetFloat("X"), thingOrActor.GetFloat("Y"));
                var speed = thingOrActor.GetFloat("SPEED");
                var vSpeed = thingOrActor.GetFloat("VSPEED");
                {
                    if (Vector2.Distance(pos, nextPoint) <= Mathf.Max(speed, vSpeed) * TimeUtils.TicksToTime(1))
                    {
                        World.Instance.TriggerEvent(AcknexObject, "IF_ARRIVED");    
                        yield break;
                    }
                    thingOrActor.SetFloat("TARGET_X", nextPoint.x);
                    thingOrActor.SetFloat("TARGET_Y", nextPoint.y);
                    var newX = Mathf.MoveTowards(pos.x, nextPoint.x, speed * TimeUtils.TicksToTime(1));
                    var newY = Mathf.MoveTowards(pos.y, nextPoint.y, speed * TimeUtils.TicksToTime(1));
                    thingOrActor.SetFloat("X", newX);
                    thingOrActor.SetFloat("y", newY);
                    yield return null;
                }
            }
        }
    }
}
