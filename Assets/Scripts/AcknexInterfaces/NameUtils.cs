using NameId = System.UInt32;
namespace Acknex.Interfaces
{
    public static class NameUtils
    {
        private static NameId BuiltinNameCount = 1000u;
        public static NameId NULL = 0u;

        public static NameId GetStringHashCode(string input)
        {
            if (input == null)
            {
                return NULL;
            }
            NameId hash = 5381;
            foreach (var c in input)
            {
                hash = ((hash << 5) + hash) + c;
            }
            return hash;
        }

        public static NameId ToNameId(string name, bool canBeProperty = true, bool canBeSkill = true, bool canBeSynonym = true)
        {
            if (float.TryParse(name, out _))
            {
                return NULL;
            }
            if (canBeSkill)
            {
                var skillName = Mappings.MapSkill(name);
                if (skillName != SkillName.UNKNOWN)
                {
                    return (NameId)skillName;
                }
            }
            if (canBeSynonym)
            {
                var synonymName = Mappings.MapSynonym(name);
                if (synonymName != SynonymName.UNKNOWN)
                {
                    return (NameId)synonymName;
                }
            }
            if (canBeProperty)
            {
                var propertyName = Mappings.MapProperty(name);
                if (propertyName != PropertyName.UNKNOWN)
                {
                    return (NameId)propertyName;
                }
            }
            return BuiltinNameCount + GetStringHashCode(name);
        }
}
}