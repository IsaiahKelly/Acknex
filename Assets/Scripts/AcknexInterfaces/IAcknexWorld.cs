using System.Collections.Generic;

namespace Acknex.Interfaces
{
    public interface IAcknexWorld : IAcknexObjectContainer
    {
        IAcknexObject CreateObjectTemplate(ObjectType type, string name);
        IAcknexObject CreateObjectInstance(ObjectType type, string name);
        IAcknexObject GetObject(ObjectType type, string name);
        IAcknexObject GetWorld();
        void PostSetupWMP();
        void AddVertex(float x, float y, float z);
        void AddString(string name, string value);
        void AddPath(string value);
        void PostSetupObjectInstance(IAcknexObject acknexObject);
        void PostSetupObjectTemplate(IAcknexObject acknexObject);
        void UpdateSkillValue(string name, float value);
        float GetSkillValue(string name);
        void AssignSynonymToObject(string name, IAcknexObject target, bool clear = false);
        void AddWayPoint(IAcknexObject way, float x, float y);
        List<IAcknexObject> GetAllObjectsWithSynonym(string name);
        Resolution GameResolution { get; set; }
        int GetRegionIndex(string value);
    }
}