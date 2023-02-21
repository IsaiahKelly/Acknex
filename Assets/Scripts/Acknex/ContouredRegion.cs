using System.Collections.Generic;
using LibTessDotNet;

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
    }
}