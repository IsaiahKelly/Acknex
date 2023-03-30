﻿using System;
using UnityEngine;

namespace DmitryBrant.ImageFormats
{
    public static class ImageUtils
    {
        public static ushort LittleEndian(ushort val)
        {
            return BitConverter.IsLittleEndian ? val : ConvEndian(val);
        }

        private static ushort ConvEndian(ushort val)
        {
            ushort temp;
            temp = (ushort)(val << 8); temp &= 0xFF00; temp |= (ushort)((val >> 8) & 0xFF);
            return temp;
        }

        public static byte[] FlipPalettePixelsVertically(byte[] frameData, int width, int height)
        {
            byte[] data = new byte[frameData.Length];
            for (int firstLine = 0; firstLine < height; firstLine++)
            {
                int lastLine = height - firstLine - 1;
                Buffer.BlockCopy(
                    frameData, firstLine * width,
                    data, lastLine * width ,
                    width);
            }
            return data;
        }

        public static byte[] FlipPixelsVertically(byte[] frameData, int width, int height)
        {
            byte[] data = new byte[frameData.Length];
            for (int firstLine = 0; firstLine < height; firstLine++)
            {
                int lastLine = height - firstLine - 1;
                Buffer.BlockCopy(
                    frameData, firstLine * width * 4,
                    data, lastLine * width * 4,
                    width * 4);
            }
            return data;
        }

        public static byte[] ColorToTransparent(byte[] bmpData, Color32 transparentColor)
        {
            //bgra
            for (var i = 0; i < bmpData.Length; i += 4)
            {
                var b = bmpData[i];
                var g = bmpData[i + 1];
                var r = bmpData[i + 2];
                if (r == transparentColor.r && g == transparentColor.g && b == transparentColor.b)
                {
                    bmpData[i + 3] = 0;
                }
                else
                {
                    bmpData[i + 3] = 255;
                }
            }
            return bmpData;
        }
    }
}