using System;

namespace Acknex.Interfaces
{
    /// <summary>
    ///     Represents an engine object.
    /// </summary>
    public interface IAcknexObject
    {
        /// <summary>
        /// Object name.
        /// </summary>
        string Name { get; set; }

        /// <summary>
        /// Object name.
        /// </summary>
        int NameInt { get;  }

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
        Func<int, IAcknexObject> GetTemplateCallback { get; }

        /// <summary>
        ///     Gets/Sets a flag indicating whether any object property has changed, and the Unity representation has to be
        ///     updated.
        /// </summary>
        bool IsDirty { get; set; }

        /// <summary>
        ///     Sets a float property value for all objects with the given name.
        /// </summary>
        void SetFloatAll(PropertyName propertyNameName, float value);

        /// <summary>
        ///     Sets an integer property value for all objects with the given name.
        /// </summary>
        void SetIntegerAll(PropertyName propertyNameName, int value);

        /// <summary>
        ///     Sets a string property value for all objects with the given name.
        /// </summary>
        void SetStringAll(PropertyName propertyNameName, string value);

        /// <summary>
        ///     Sets a typed by reference property value for all objects with the given name.
        /// </summary>
        void SetObjectAll<T>(PropertyName propertyNameName, T value);

        /// <summary>
        ///     Sets a float property value to another IAcknexObject for all objects with the given name.
        /// </summary>
        void SetAcknexObjectAll(PropertyName propertyNameName, IAcknexObject value);

        /// <summary>
        ///     Sets a float property value.
        /// </summary>
        void SetFloat(PropertyName propertyNameName, float value);

        /// <summary>
        ///     Sets an integer property value.
        /// </summary>
        void SetInteger(PropertyName propertyNameName, int value);

        /// <summary>
        ///     Sets a string property value.
        /// </summary>
        void SetString(PropertyName propertyNameName, string value);

        /// <summary>
        ///     Sets a typed by reference property value.
        /// </summary>
        void SetObject<T>(PropertyName propertyNameName, T value);

        /// <summary>
        ///     Sets a float property value to another IAcknexObject.
        /// </summary>
        void SetAcknexObject(PropertyName propertyNameName, IAcknexObject value);

        /// <summary>
        ///     Gets a float property value.
        ///     <remarks>
        ///         When passing <c>true</c> to `fromTemplate`, the value can come from the object template, and from the object
        ///         instance as well.
        ///     </remarks>
        /// </summary>
        float GetFloat(PropertyName propertyNameName, bool fromTemplate = true);

        /// <summary>
        ///     Gets an integer property value.
        ///     <remarks>
        ///         When passing <c>true</c> to `fromTemplate`, the value can come from the object template, and from the object
        ///         instance as well.
        ///     </remarks>
        /// </summary>
        int GetInteger(PropertyName propertyNameName, bool fromTemplate = true);

        /// <summary>
        ///     Gets a string property value.
        ///     <remarks>
        ///         When passing <c>true</c> to `fromTemplate`, the value can come from the object template, and from the object
        ///         instance as well.
        ///     </remarks>
        /// </summary>
        string GetString(PropertyName propertyNameName, bool fromTemplate = true);

        /// <summary>
        ///     Gets a typed reference property value.
        ///     <remarks>
        ///         When passing <c>true</c> to `fromTemplate`, the value can come from the object template, and from the object
        ///         instance as well.
        ///     </remarks>
        /// </summary>
        T GetObject<T>(PropertyName propertyNameName, bool fromTemplate = true);

        /// <summary>
        ///     Gets an IAcknexObject property value.
        ///     <remarks>
        ///         When passing <c>true</c> to `fromTemplate`, the value can come from the object template, and from the object
        ///         instance as well.
        ///     </remarks>
        /// </summary>
        IAcknexObject GetAcknexObject(PropertyName propertyNameName, bool fromTemplate = true, bool setupInstance = true);

        bool TryGetFloat(PropertyName propertyNameName, out float result, bool fromTemplate = true);
        bool TryGetInteger(PropertyName propertyNameName, out int result, bool fromTemplate = true);
        bool TryGetString(PropertyName propertyNameName, out string result, bool fromTemplate = true);
        bool TryGetObject<T>(PropertyName propertyNameName, out T result, bool fromTemplate = true);
        bool TryGetAcknexObject(PropertyName propertyNameName, out IAcknexObject result, bool fromTemplate = true);

        /// <summary>
        ///     Returns whether the object contains the given flag.
        /// </summary>
        bool HasFlag(PropertyName flag, bool fromTemplate = true);

        /// <summary>
        ///     Enables the given instance flag.
        /// </summary>
        void AddFlag(PropertyName flag);

        /// <summary>
        ///     Disables the given instance flag.
        /// </summary>
        void RemoveFlag(PropertyName flag);



        /// <summary>
        ///     Sets a float property value for all objects with the given name.
        /// </summary>
        void SetFloatAll(int propertyName, float value);

        /// <summary>
        ///     Sets an integer property value for all objects with the given name.
        /// </summary>
        void SetIntegerAll(int propertyName, int value);

        /// <summary>
        ///     Sets a string property value for all objects with the given name.
        /// </summary>
        void SetStringAll(int propertyName, string value);

        /// <summary>
        ///     Sets a typed by reference property value for all objects with the given name.
        /// </summary>
        void SetObjectAll<T>(int propertyName, T value);

        /// <summary>
        ///     Sets a float property value to another IAcknexObject for all objects with the given name.
        /// </summary>
        void SetAcknexObjectAll(int propertyName, IAcknexObject value);

        /// <summary>
        ///     Sets a float property value.
        /// </summary>
        void SetFloat(int propertyName, float value);

        /// <summary>
        ///     Sets an integer property value.
        /// </summary>
        void SetInteger(int propertyName, int value);

        /// <summary>
        ///     Sets a string property value.
        /// </summary>
        void SetString(int propertyName, string value);

        /// <summary>
        ///     Sets a typed by reference property value.
        /// </summary>
        void SetObject<T>(int propertyName, T value);

        /// <summary>
        ///     Sets a float property value to another IAcknexObject.
        /// </summary>
        void SetAcknexObject(int propertyName, IAcknexObject value);

        /// <summary>
        ///     Gets a float property value.
        ///     <remarks>
        ///         When passing <c>true</c> to `fromTemplate`, the value can come from the object template, and from the object
        ///         instance as well.
        ///     </remarks>
        /// </summary>
        float GetFloat(int propertyName, bool fromTemplate = true);

        /// <summary>
        ///     Gets an integer property value.
        ///     <remarks>
        ///         When passing <c>true</c> to `fromTemplate`, the value can come from the object template, and from the object
        ///         instance as well.
        ///     </remarks>
        /// </summary>
        int GetInteger(int propertyName, bool fromTemplate = true);

        /// <summary>
        ///     Gets a string property value.
        ///     <remarks>
        ///         When passing <c>true</c> to `fromTemplate`, the value can come from the object template, and from the object
        ///         instance as well.
        ///     </remarks>
        /// </summary>
        string GetString(int propertyName, bool fromTemplate = true);

        /// <summary>
        ///     Gets a typed reference property value.
        ///     <remarks>
        ///         When passing <c>true</c> to `fromTemplate`, the value can come from the object template, and from the object
        ///         instance as well.
        ///     </remarks>
        /// </summary>
        T GetObject<T>(int propertyName, bool fromTemplate = true);

        /// <summary>
        ///     Gets an IAcknexObject property value.
        ///     <remarks>
        ///         When passing <c>true</c> to `fromTemplate`, the value can come from the object template, and from the object
        ///         instance as well.
        ///     </remarks>
        /// </summary>
        IAcknexObject GetAcknexObject(int propertyName, bool fromTemplate = true, bool setupInstance = true);

        bool TryGetFloat(int propertyName, out float result, bool fromTemplate = true);
        bool TryGetInteger(int propertyName, out int result, bool fromTemplate = true);
        bool TryGetString(int propertyName, out string result, bool fromTemplate = true);
        bool TryGetObject<T>(int propertyName, out T result, bool fromTemplate = true);
        bool TryGetAcknexObject(int propertyName, out IAcknexObject result, bool fromTemplate = true);

        /// <summary>
        ///     Returns whether the object contains the given flag.
        /// </summary>
        bool HasFlag(int flag, bool fromTemplate = true);

        /// <summary>
        ///     Enables the given instance flag.
        /// </summary>
        void AddFlag(int flag);

        /// <summary>
        ///     Disables the given instance flag.
        /// </summary>
        void RemoveFlag(int flag);
    }
}