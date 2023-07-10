using System;
using System.IO;
using System.Text;
using GameRes.Compression;

namespace Common
{
    public static class FileManager
    {
        public static string WRSFilename;
        public static string BaseDirectory;

        public static Stream OpenRead(string filename)
        {
            return string.IsNullOrEmpty(WRSFilename) ? File.OpenRead(PathUtils.SanitizePath($"{BaseDirectory}/{filename}")) : ReadFile(filename);
        }

        private static MemoryStream ReadFile(string filename)
        {
            var shortFilename = FilenameConverter.ConvertToShortPath(filename);
            using (var binaryReader = new BigEndianBinaryReader(File.OpenRead(PathUtils.SanitizePath($"{BaseDirectory}/{WRSFilename}"))))
            {
                var nameBuffer = new byte[13];
                var asize = binaryReader.BaseStream.Length;
                long offset;
                do
                {
                    binaryReader.Read(nameBuffer, 0, 13);
                    var name = Encoding.ASCII.GetString(nameBuffer);
                    var i = name.IndexOf('\0');
                    name = i < 0 ? name : name.Substring(0, i);
                    var zsize = binaryReader.ReadInt32();
                    var size = binaryReader.ReadInt32();
                    offset = binaryReader.BaseStream.Position;
                    if (string.Compare(name, shortFilename, StringComparison.InvariantCultureIgnoreCase) == 0)
                    {
                        using (var reader = new LzssReader(binaryReader.BaseStream, zsize, size, (byte)' '))
                        {
                            reader.Unpack();
                            return new MemoryStream(reader.Data);
                        }
                    }
                    offset += zsize;
                    binaryReader.BaseStream.Seek(offset, SeekOrigin.Begin);
                } while (offset < asize);
            }
            return null;
        }

        public static bool Exists(string filename)
        {
            if (string.IsNullOrEmpty(WRSFilename))
            {
                return File.Exists(PathUtils.SanitizePath($"{BaseDirectory}/{filename}"));
            }
            return true;
        }

        public static byte[] ReadAllBytes(string fileName)
        {
            using (var stream = OpenRead(fileName))
            {
                return stream.ReadBytes();
            }
        }
    }
}