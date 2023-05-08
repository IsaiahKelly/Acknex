using System.Collections;

namespace Acknex.Interfaces
{
    public interface ICompiledAction : IEnumerator
    {
        IAcknexObject MY { get; set; }
        IAcknexObject THERE { get; set; }
        IAcknexWorld _world { get; set; }
    }
}