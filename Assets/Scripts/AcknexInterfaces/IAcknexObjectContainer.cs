namespace Acknex.Interfaces
{
    public interface IAcknexObjectContainer
    {
        IAcknexObject AcknexObject { get; set; }
        void UpdateObject();
        void Enable();
        void Disable();
    }
}