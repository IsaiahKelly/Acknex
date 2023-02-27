using System.Collections.Generic;

namespace Acknex.Interfaces
{
    public interface IAcknexWorld {
        IAcknexObject CreateObjectTemplate(ObjectType type, string name);
        IAcknexObject CreateObjectInstance(ObjectType type, string name);
        IAcknexObject GetObject(ObjectType type, string name);
        IAcknexObject GetWorld();
        void PostSetupWMP();
        void AddVertex(float x, float y, float z);
        void AddString(string name, string value);
        void PostSetupObjectInstance(ObjectType type, IAcknexObject acknexObject);
        void PostSetupObjectTemplate(ObjectType type, IAcknexObject acknexObject);
        void UpdateSkillValue(string name, float value);
        float GetSkillValue(string name);
        void AssignSynonymToObject(string name, IAcknexObject target, bool clear = false);
        List<IAcknexObject> GetAllObjectsWithSynonym(string name);
    }
}