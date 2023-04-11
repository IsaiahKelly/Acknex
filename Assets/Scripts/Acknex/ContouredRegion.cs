using System.Collections.Generic;
using LibTessDotNet;
using UnityEngine;

namespace Acknex
{
    public class ContouredRegion : List<List<ContourVertex>>
    {
        public List<ContourVertex> GetNew()
        {
            var contourList = new List<ContourVertex>();
            Add(contourList);
            return contourList;
        }

        public static float CalculateArea(List<ContourVertex> points)
        {
            var n = points.Count;
            var area = 0f;
            for (var i = 0; i < n; i++)
            {
                var j = (i + 1) % n;
                area += points[i].Position.X * points[j].Position.Y - points[j].Position.X * points[i].Position.Y;
            }
            return Mathf.Abs(area) / 2f;
        }
    }
}