using NameId = System.UInt32;
using System.Collections;
namespace Acknex.Interfaces
{
    /// <summary>
    /// Represents the scripting runtime interface.
    /// </summary>
    public interface IAcknexRuntime
    {
        /// <summary>
        /// Sets the world instance in the runtime.
        /// </summary>
        void SetWorld(IAcknexWorld world);
        /// <summary>
        /// Calls the action with the given name.
        /// </summary>
        IEnumerator CallAction(string name, IAcknexObject MY, IAcknexObject THERE);
    }
}