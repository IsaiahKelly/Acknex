namespace Acknex.Interfaces
{
    public interface IAcknexWorld
    {
        IAcknexObject CreateObject(ObjectType type, string name);
        IAcknexObject GetObject(ObjectType type, string name);
    }
}