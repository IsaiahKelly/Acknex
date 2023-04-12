using System;
using UnityEngine;

namespace IlbmReaderTest
{
    public static class ImageUtils
    {

        public static byte[] FlipPaletteVertically(byte[] frameData, int width, int height)
        {
            byte[] data = new byte[frameData.Length];
            for (int firstLine = 0; firstLine < height; firstLine++)
            {
                int lastLine = height - firstLine - 1;
                Array.Copy(frameData, firstLine * width, data, lastLine * width, width);
            }
            return data;
        }

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

        public static Color32[] ColorToTransparent(Color32[] frameData, Color32 transparentColor)
        {
            for (var i = 0; i < frameData.Length; i++)
            {
                var color = frameData[i];
                if (color.r == transparentColor.r && color.g == transparentColor.g && color.b == transparentColor.b)
                {
                    color.a = 0;
                }
                else
                {
                    color.a = 255;
                }
                frameData[i] = color;
            }
            return frameData;
        }
    }
}
