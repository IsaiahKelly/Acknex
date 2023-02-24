namespace Acknex.Interfaces
{
    public interface IAcknexWorld
    {
        //When passing ´true´ on `from WDL´, the object is created/loaded from the WDL file, so it is a definition
        //otherwise, it is created/loaded from the WMP file, so it is an instance
        IAcknexObject CreateObject(ObjectType type, string name, bool fromWDL);
        IAcknexObject GetObject(ObjectType type, string name, bool fromWDL);
    }
}