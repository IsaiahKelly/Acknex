using System;
using Acknex.Interfaces;
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
            Debug.LogError("Unknown property type: " + name);
            return  PropertyName.UNKNOWN;
        }

        public static SkillName MapSkill(string name)
        {
            name = name.Replace(".", "_");
            if (Enum.TryParse<SkillName>(name, out var skillName))
            {
                return skillName;
            }
            Debug.LogError("Unknown skill: " + name);
            return SkillName.UNKNOWN;
        }

        public static SynonymName MapSynonym(string name)
        {
            name = name.Replace(".", "_");
            if (Enum.TryParse<SynonymName>(name, out var synonymName))
            {
                return synonymName;
            }
            Debug.LogError("Unknown synonym: " + name);
            return SynonymName.UNKNOWN;
        }
    }
}