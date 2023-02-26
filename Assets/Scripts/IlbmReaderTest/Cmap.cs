using System;
using System.Collections.Generic;
using UnityEngine;
using Color = System.Drawing.Color;

namespace IlbmReaderTest
{
    public class Cmap
    {
        public Cmap(IffChunk innerIlbmChunk, Ilbm ilbm)
        {
            if (ilbm.Bmhd == null)
            {
                throw new Exception("BMHD chunk not loaded error");
            }

            Colors = new List<Color32>();
            for (int i = 0; i < innerIlbmChunk.ContentLength / 3; i++)
            {
                var color = new Color32(
                    innerIlbmChunk.Content[i * 3 + 0],
                    innerIlbmChunk.Content[i * 3 + 1],
                    innerIlbmChunk.Content[i * 3 + 2],
                    255
                    );
                Colors.Add(color);
            }
        }

        public IList<Color32> Colors { get; }
    }

}