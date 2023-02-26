namespace Acknex.Interfaces
{
    public interface IAcknexWorld
    {
        IAcknexObject CreateObject(ObjectType type, string name, bool fromWDL);
        IAcknexObject GetObject(ObjectType type, string name, bool fromWDL);
        IAcknexObject GetWorld();
    }
}