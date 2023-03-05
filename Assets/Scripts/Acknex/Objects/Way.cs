﻿using System.Collections;
using System.Collections.Generic;
using Acknex.Interfaces;
using UnityEngine;
using UnityEngine.Experimental.Rendering;

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
                Gizmos.DrawSphere(MeshUtils.ToXZ(Points[i]), 1f);
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
            var waypoint = 1;
            thingOrActor.SetInteger("WAYPOINT", waypoint);
            if (Points.Count == 0)
            {
                World.Instance.TriggerEvent(AcknexObject, "IF_ARRIVED");
                yield break;
            }
            var nextPoint = Points[waypoint - 1];
            while (waypoint <= Points.Count)
            {
                var pos = new Vector2(thingOrActor.GetFloat("X"), thingOrActor.GetFloat("Y"));
                var speed = thingOrActor.GetFloat("SPEED");
                //var vSpeed = thingOrActor.GetFloat("VSPEED");
                thingOrActor.SetFloat("TARGET_X", nextPoint.x);
                thingOrActor.SetFloat("TARGET_Y", nextPoint.y);
                var toTarget = nextPoint - pos;
                var angle = AngleUtils.ConvertUnityToAcknexAngle(Mathf.Atan2(toTarget.y ,toTarget.x) * Mathf.Rad2Deg);
                var newPos = Vector2.MoveTowards(pos, nextPoint, speed * TimeUtils.TicksToTime(1));
                //var newX = Mathf.MoveTowards(pos.x, nextPoint.x, speed * TimeUtils.TicksToTime(1));
                //var newY = Mathf.MoveTowards(pos.y, nextPoint.y, speed * TimeUtils.TicksToTime(1));
                thingOrActor.SetFloat("X", newPos.x);
                thingOrActor.SetFloat("Y", newPos.y);
                thingOrActor.SetFloat("ANGLE", angle);
                thingOrActor.IsDirty = true;
                if (toTarget.magnitude <= speed)
                {
                    waypoint++;
                    thingOrActor.SetInteger("WAYPOINT", waypoint);
                    nextPoint = Points[waypoint - 1];
                }
                yield return null;
            }
        }
    }
}
