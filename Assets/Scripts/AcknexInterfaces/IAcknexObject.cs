using NameId = System.UInt32;
using System;

namespace Acknex.Interfaces
{
    /// <summary>
    ///     Represents an engine object.
    /// </summary>
    public interface IAcknexObject
    {
        bool DebugMarked { get; set; }

        /// <summary>
        /// Object name.
        /// </summary>
        string Name { get; set; }

        /// <summary>
        /// Object name.
        /// </summary>
        NameId NameId { get; set; }

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
        Func<NameId, IAcknexObject> GetTemplateCallback { get; }

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
        void SetFloatAll(NameId propertyName, float value);

        /// <summary>
        ///     Sets an integer property value for all objects with the given name.
        /// </summary>
        void SetIntegerAll(NameId propertyName, int value);

        /// <summary>
        ///     Sets a string property value for all objects with the given name.
        /// </summary>
        void SetStringAll(NameId propertyName, string value);

        /// <summary>
        ///     Sets a typed by reference property value for all objects with the given name.
        /// </summary>
        void SetObjectAll<T>(NameId propertyName, T value);

        /// <summary>
        ///     Sets a float property value to another IAcknexObject for all objects with the given name.
        /// </summary>
        void SetAcknexObjectAll(NameId propertyName, IAcknexObject value);

        /// <summary>
        ///     Sets a float property value.
        /// </summary>
        void SetFloat(NameId propertyName, float value);

        /// <summary>
        ///     Sets an integer property value.
        /// </summary>
        void SetInteger(NameId propertyName, int value);

        /// <summary>
        ///     Sets a string property value.
        /// </summary>
        void SetString(NameId propertyName, string value);

        /// <summary>
        ///     Sets a typed by reference property value.
        /// </summary>
        void SetObject<T>(NameId propertyName, T value);

        /// <summary>
        ///     Sets a float property value to another IAcknexObject.
        /// </summary>
        void SetAcknexObject(NameId propertyName, IAcknexObject value);

        /// <summary>
        ///     Gets a float property value.
        ///     <remarks>
        ///         When passing <c>true</c> to `fromTemplate`, the value can come from the object template, and from the object
        ///         instance as well.
        ///     </remarks>
        /// </summary>
        float GetFloat(NameId propertyName, bool fromTemplate = true);

        /// <summary>
        ///     Gets an integer property value.
        ///     <remarks>
        ///         When passing <c>true</c> to `fromTemplate`, the value can come from the object template, and from the object
        ///         instance as well.
        ///     </remarks>
        /// </summary>
        int GetInteger(NameId propertyName, bool fromTemplate = true);

        /// <summary>
        ///     Gets a string property value.
        ///     <remarks>
        ///         When passing <c>true</c> to `fromTemplate`, the value can come from the object template, and from the object
        ///         instance as well.
        ///     </remarks>
        /// </summary>
        string GetString(NameId propertyName, bool fromTemplate = true);

        /// <summary>
        ///     Gets a typed reference property value.
        ///     <remarks>
        ///         When passing <c>true</c> to `fromTemplate`, the value can come from the object template, and from the object
        ///         instance as well.
        ///     </remarks>
        /// </summary>
        T GetObject<T>(NameId propertyName, bool fromTemplate = true);

        /// <summary>
        ///     Gets an IAcknexObject property value.
        ///     <remarks>
        ///         When passing <c>true</c> to `fromTemplate`, the value can come from the object template, and from the object
        ///         instance as well.
        ///     </remarks>
        /// </summary>
        IAcknexObject GetAcknexObject(NameId propertyName, bool fromTemplate = true, bool setupInstance = true);

        bool TryGetFloat(NameId propertyName, out float result, bool fromTemplate = true);
        bool TryGetInteger(NameId propertyName, out int result, bool fromTemplate = true);
        bool TryGetString(NameId propertyName, out string result, bool fromTemplate = true);
        bool TryGetObject<T>(NameId propertyName, out T result, bool fromTemplate = true);
        bool TryGetAcknexObject(NameId propertyName, out IAcknexObject result, bool fromTemplate = true);

        /// <summary>
        ///     Returns whether the object contains the given flag.
        /// </summary>
        bool HasFlag(NameId flag, bool fromTemplate = true);

        /// <summary>
        ///     Enables the given instance flag.
        /// </summary>
        void AddFlag(NameId flag);

        /// <summary>
        ///     Disables the given instance flag.
        /// </summary>
        void RemoveFlag(NameId flag);

        bool NoDirtyFlag { get; set; }

        /// <summary>
        /// Destroys this object.
        /// </summary>
        void Destroy();
    }
}