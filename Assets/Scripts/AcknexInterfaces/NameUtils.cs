using System;
using System.Linq;

namespace Acknex.Interfaces
{
    public static class NameUtils
    {
        private static int _builtinNameCount;
        public static int NULL;

        public static int NameToInt(string name, bool ignoreBuiltin = false)
        {
            if (_builtinNameCount == 0)
            {
                _builtinNameCount = Enum.GetValues(typeof(PropertyName)).Cast<int>().Max() +
                                   Enum.GetValues(typeof(SkillName)).Cast<int>().Max() +
                                   Enum.GetValues(typeof(SynonymName)).Cast<int>().Max();
                NULL = _builtinNameCount + "NULL".GetHashCode();
            }
            if (!ignoreBuiltin)
            {
                var objectProperty = Mappings.MapProperty(name);
                if (objectProperty != PropertyName.UNKNOWN)
                {
                    return (int)objectProperty;
                }
                var skillName = Mappings.MapSkill(name);
                if (skillName != SkillName.UNKNOWN)
                {
                    return (int)skillName;
                }
                var synoynmName = Mappings.MapSynonym(name);
                if (synoynmName != SynonymName.UNKNOWN)
                {
                    return (int)skillName;
                }
            }
            return _builtinNameCount + name.GetHashCode();
        }
    }
}