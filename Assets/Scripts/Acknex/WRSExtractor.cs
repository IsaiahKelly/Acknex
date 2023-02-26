﻿using System.IO;
using System.Text;
using GameRes.Compression;

namespace Acknex
{
    public static class WRSExtractor
    {
        public static string ExtractWRS(string wdsFilename, string outputPath = null)
        {
            if (outputPath == null)
            {
                outputPath = $"{Path.GetTempPath()}/{PathUtils.SanitizePath(wdsFilename)}";
                Directory.CreateDirectory(outputPath);
            }
            using (var binaryReader = new BigEndianBinaryReader(File.OpenRead(wdsFilename)))
            {
                var nameBuffer = new byte[13];
                var asize = binaryReader.BaseStream.Length;
                long offset;
                do
                {
                    binaryReader.Read(nameBuffer, 0, 13);
                    var name = Encoding.UTF8.GetString(nameBuffer);
                    var zsize = binaryReader.ReadInt32();
                    var size = binaryReader.ReadInt32();
                    offset = binaryReader.BaseStream.Position;
                    ExtractFile(binaryReader.BaseStream, $"{outputPath}/{PathUtils.SanitizePath(name)}", offset, zsize, size);
                    offset += zsize;
                    binaryReader.BaseStream.Seek(offset, SeekOrigin.Begin);
                } while (offset < asize);
            }
            return outputPath;
        }

        private static void ExtractFile(Stream input, string filename, long offset, int zsize, int size)
        {
            using (var reader = new LzssReader(input, zsize, size))
            {
                reader.Unpack();
                File.WriteAllBytes(filename, reader.Data);
            }
        }
    }
}
