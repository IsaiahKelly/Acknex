namespace Acknex
{
    public static class PathUtils
    {
        public static string SanitizePath(string path)
        {
            path = path.Replace('\\', '/');
            return path;
        }

        public static string GetFileExtension(string path, bool includeDot = true)
        {
            path = SanitizePath(path);
            var lastDot = path.LastIndexOf('.');
            if (lastDot < 0)
            {
                return null;
            }

            return path.Substring(includeDot ? lastDot : lastDot + 1).ToLowerInvariant();
        }

        public static string GetFileDirectory(string filename)
        {
            if (string.IsNullOrWhiteSpace(filename))
            {
                return null;
            }

            filename = SanitizePath(filename);
            var indexOfSlash = filename.LastIndexOf("/");
            if (indexOfSlash >= 0)
            {
                return filename.Substring(0, indexOfSlash);
            }

            return null;
        }
    }
}