namespace Acknex.Interfaces
{
    public interface IAcknexWorld
    {
        IAcknexObject CreateObject(ObjectType type, string name, bool fromWDL);
        IAcknexObject GetObject(ObjectType type, string name);
        IAcknexObject GetWorld();
        void PostSetupWMP();
        void AddVertex(float x, float y, float z);
        void AddString(string name, string value);
        void PostSetupObject(ObjectType type, IAcknexObject acknexObject, bool fromWDL);
    }
}