using System;
using UnityEngine;

namespace IlbmReaderTest
{
    public static class ImageUtils
    {

        public static Color32[] FlipPixelsVertically(Color32[] frameData, int width, int height)
        {
            Color32[] data = new Color32[frameData.Length];
            for (int firstLine = 0; firstLine < height; firstLine++)
            {
                int lastLine = height - firstLine - 1;
                Array.Copy(frameData, firstLine * width, data, lastLine * width, width);
            }
            return data;
        }
    }
}
