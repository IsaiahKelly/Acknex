using System;

namespace Acknex.Interfaces
{
    public interface IAcknexObject
    {
        void Set<T>(string propertyName, T value);
        T Get<T>(string propertyName, bool fromDefinition = true);
        bool TryGet<T>(string propertyName, out T result, bool fromDefinition = true);
        object this[string propertyName] { get; set; }
        Func<string, IAcknexObject> GetDefinitionCallback { get; } //this parameter can be null when moking up
    }
}