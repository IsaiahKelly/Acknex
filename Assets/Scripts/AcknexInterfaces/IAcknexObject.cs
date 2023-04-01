using System;

namespace Acknex.Interfaces
{
    /// <summary>
    ///     Represents an engine object.
    /// </summary>
    public interface IAcknexObject
    {
        /// <summary>
        ///     Gets/Sets the object type.
        ///     <remarks>
        ///         The object type is set automatically by the IAcknexWorld implementation.
        ///     </remarks>
        /// </summary>
        ObjectType Type { get; set; }

        string DebugMessage { get; set; }

        /// <summary>
        ///     Defines whether the object is an instance.
        /// </summary>
        bool IsInstance { get; set; }

        /// <summary>
        ///     The instance index.
        /// </summary>
        int InstanceIndex { get; set; }

        /// <summary>
        ///     Gets/Sets the object container (Unity representation).
        ///     <remarks>
        ///         The container is set automatically by the IAcknexWorld implementation.
        ///     </remarks>
        /// </summary>
        IAcknexObjectContainer Container { get; set; }

        /// <summary>
        ///     A callback used to get the object template.
        ///     Already implemented in all classes.
        /// </summary>
        Func<string, IAcknexObject> GetTemplateCallback { get; }

        /// <summary>
        ///     Gets/Sets a flag indicating whether any object property has changed, and the Unity representation has to be
        ///     updated.
        /// </summary>
        bool IsDirty { get; set; }

        /// <summary>
        ///     Defines whether the wall or region geometry has to be rebuilt.
        /// </summary>
        bool IsGeometryDirty { get; set; }

        /// <summary>
        ///     Sets a float property value for all objects with the given name.
        /// </summary>
        void SetFloatAll(string propertyName, float value);

        /// <summary>
        ///     Sets an integer property value for all objects with the given name.
        /// </summary>
        void SetIntegerAll(string propertyName, int value);

        /// <summary>
        ///     Sets a string property value for all objects with the given name.
        /// </summary>
        void SetStringAll(string propertyName, string value);

        /// <summary>
        ///     Sets a typed by reference property value for all objects with the given name.
        /// </summary>
        void SetObjectAll<T>(string propertyName, T value);

        /// <summary>
        ///     Sets a float property value to another IAcknexObject for all objects with the given name.
        /// </summary>
        void SetAcknexObjectAll(string propertyName, IAcknexObject value);

        /// <summary>
        ///     Sets a float property value.
        /// </summary>
        void SetFloat(string propertyName, float value);

        /// <summary>
        ///     Sets an integer property value.
        /// </summary>
        void SetInteger(string propertyName, int value);

        /// <summary>
        ///     Sets a string property value.
        /// </summary>
        void SetString(string propertyName, string value);

        /// <summary>
        ///     Sets a typed by reference property value.
        /// </summary>
        void SetObject<T>(string propertyName, T value);

        /// <summary>
        ///     Sets a float property value to another IAcknexObject.
        /// </summary>
        void SetAcknexObject(string propertyName, IAcknexObject value);

        /// <summary>
        ///     Gets a float property value.
        ///     <remarks>
        ///         When passing <c>true</c> to `fromTemplate`, the value can come from the object template, and from the object
        ///         instance as well.
        ///     </remarks>
        /// </summary>
        float GetFloat(string propertyName, bool fromTemplate = true);

        /// <summary>
        ///     Gets an integer property value.
        ///     <remarks>
        ///         When passing <c>true</c> to `fromTemplate`, the value can come from the object template, and from the object
        ///         instance as well.
        ///     </remarks>
        /// </summary>
        int GetInteger(string propertyName, bool fromTemplate = true);

        /// <summary>
        ///     Gets a string property value.
        ///     <remarks>
        ///         When passing <c>true</c> to `fromTemplate`, the value can come from the object template, and from the object
        ///         instance as well.
        ///     </remarks>
        /// </summary>
        string GetString(string propertyName, bool fromTemplate = true);

        /// <summary>
        ///     Gets a typed reference property value.
        ///     <remarks>
        ///         When passing <c>true</c> to `fromTemplate`, the value can come from the object template, and from the object
        ///         instance as well.
        ///     </remarks>
        /// </summary>
        T GetObject<T>(string propertyName, bool fromTemplate = true);

        /// <summary>
        ///     Gets an IAcknexObject property value.
        ///     <remarks>
        ///         When passing <c>true</c> to `fromTemplate`, the value can come from the object template, and from the object
        ///         instance as well.
        ///     </remarks>
        /// </summary>
        IAcknexObject GetAcknexObject(string propertyName, bool fromTemplate = true, bool setupInstance = true);

        bool TryGetFloat(string propertyName, out float result, bool fromTemplate = true);
        bool TryGetInteger(string propertyName, out int result, bool fromTemplate = true);
        bool TryGetString(string propertyName, out string result, bool fromTemplate = true);
        bool TryGetObject<T>(string propertyName, out T result, bool fromTemplate = true);
        bool TryGetAcknexObject(string propertyName, out IAcknexObject result, bool fromTemplate = true);

        /// <summary>
        ///     Returns whether the object contains the given flag.
        /// </summary>
        bool HasFlag(string flag, bool fromTemplate = true);

        /// <summary>
        ///     Enables the given instance flag.
        /// </summary>
        void AddFlag(string flag);

        /// <summary>
        ///     Disables the given instance flag.
        /// </summary>
        void RemoveFlag(string flag);
    }
}