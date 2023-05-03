using NameId = System.UInt32;
using System;
using UnityEngine;

namespace Acknex.Interfaces
{
    public static class Mappings
    {
        public static PropertyName MapProperty(string name)
        {
            name = name.Replace(".", "_");
            if (Enum.TryParse<PropertyName>(name, out var objectProperty))
            {
                return objectProperty;
            }
            Debug.LogWarning("Unknown property type: " + name);
            return  PropertyName.UNKNOWN;
        }

        public static SkillName MapSkill(string name)
        {
            name = name.Replace(".", "_");
            if (Enum.TryParse<SkillName>(name, out var skillName))
            {
                return skillName;
            }
            Debug.LogWarning("Unknown skill: " + name);
            return SkillName.UNKNOWN;
        }

        public static SynonymName MapSynonym(string name)
        {
            name = name.Replace(".", "_");
            if (Enum.TryParse<SynonymName>(name, out var synonymName))
            {
                return synonymName;
            }
            Debug.LogWarning("Unknown synonym: " + name);
            return SynonymName.UNKNOWN;
        }
    }
}