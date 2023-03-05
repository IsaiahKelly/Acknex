namespace Acknex.Interfaces
{
    /// <summary>
    /// Represents the scripting runtime interface.
    /// </summary>
    public interface IAcknexRuntime
    {
        /// <summary>
        /// Calls the action with the given name.
        /// </summary>
        void CallAction(string name);
        /// <summary>
        /// Triggers the given event on the given source object.
        /// </summary>
        void TriggerEvent(IAcknexObject source, string name);
        /// <summary>
        /// Resumes the given action.
        /// </summary>
        void ResumeAction(ActionIdentifier identifier);
    }
}