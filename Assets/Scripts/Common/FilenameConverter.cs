using System;
using System.IO;

namespace Common
{
    public class FilenameConverter
    {
        public static string ConvertToShortPath(string path)
        {
            string directoryName = Path.GetDirectoryName(path);
            string originalFileName = Path.GetFileNameWithoutExtension(path);
            string extension = Path.GetExtension(path);

            string shortFileName = GetValidShortName(originalFileName);
            string shortExtension = GetValidShortExtension(extension);

            string shortPath = $"{shortFileName}{shortExtension}";
            return shortPath;
        }

        private static string GetValidShortName(string fileName)
        {
            const string validChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!#$%&'()-@^_{}~";
            string shortName = "";

            foreach (char c in fileName)
            {
                if (c >= 0x80 || c == ' ')
                    continue;

                if (c == '.')
                    break;

                if (validChars.Contains(c))
                    shortName += c;
            }

            return shortName.Length <= 8 ? shortName : shortName.Substring(0, 8);
        }

        private static string GetValidShortExtension(string extension)
        {
            const string validChars = ".abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!#$%&'()-@^_{}~";
            string shortExtension = "";

            foreach (char c in extension)
            {
                if (c >= 0x80 || c == ' ')
                    continue;

                if (validChars.Contains(c))
                    shortExtension += c;
            }

            return shortExtension.Length <= 4 ? shortExtension : shortExtension.Substring(0, 4);
        }
    }
}