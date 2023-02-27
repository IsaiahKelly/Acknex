using System;

namespace Acknex.Interfaces
{
    public interface IAcknexObject
    {
        IAcknexObjectContainer Container { get; set; }
        void Set<T>(string propertyName, T value);
        T Get<T>(string propertyName, bool fromTemplate = true);
        bool TryGet<T>(string propertyName, out T result, bool fromTemplate = true);
        object this[string propertyName] { get; set; }
        Func<string, IAcknexObject> GetTemplateCallback { get; } //this parameter can be null when moking up
    }
}