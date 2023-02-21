using System;

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
    }
}