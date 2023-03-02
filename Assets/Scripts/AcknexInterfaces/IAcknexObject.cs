using System;

namespace Acknex.Interfaces
{
    public interface IAcknexObject
    {
        IAcknexObjectContainer Container { get; set; }

        void SetFloat(string propertyName, float value);
        void SetInteger(string propertyName, int value);
        void SetString(string propertyName, string value);
        void SetObject<T>(string propertyName, T value);
        void SetAcknexObject(string propertyName, IAcknexObject value);

        float GetFloat(string propertyName, bool fromTemplate = true);
        int GetInteger(string propertyName, bool fromTemplate = true);
        string GetString(string propertyName, bool fromTemplate = true);
        T GetObject<T>(string propertyName, bool fromTemplate = true);
        IAcknexObject GetAcknexObject(string propertyName, bool fromTemplate = true);

        bool TryGetFloat(string propertyName, out float result, bool fromTemplate = true);
        bool TryGetInteger(string propertyName, out int result, bool fromTemplate = true);
        bool TryGetString(string propertyName, out string result, bool fromTemplate = true);
        bool TryGetObject<T>(string propertyName, out T result, bool fromTemplate = true);
        bool TryGetAcknexObject(string propertyName, out IAcknexObject result, bool fromTemplate = true);

        Func<string, IAcknexObject> GetTemplateCallback { get; }
        bool IsDirty { get; set; }
    }
}