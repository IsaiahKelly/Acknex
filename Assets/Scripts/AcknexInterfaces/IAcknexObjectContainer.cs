using UnityEngine;

namespace Acknex.Interfaces
{
    /// <summary>
    /// Represents a Unity object container which holds an AcknexObject
    /// </summary>
    public interface IAcknexObjectContainer
    {
        /// <summary>
        /// Gets/Sets the AcknexObject this container holds.
        /// </summary>
        IAcknexObject AcknexObject { get; set; }
        
        /// <summary>
        /// Updates the Unity object representation when any property changes.
        /// </summary>
        void UpdateObject();
        /// <summary>
        /// Enables the Unity object representation.
        /// </summary>
        void Enable();
        /// <summary>
        /// Disables the Unity object representation.
        /// </summary>
        void Disable();

        /// <summary>
        /// Method to call to post-setup an object template.
        /// </summary>
        void SetupTemplate();

        /// <summary>
        /// Method to call to post-setup an object instance.
        /// </summary>
        void SetupInstance();

        /// <summary>
        /// Gets the container position in Unity scene.
        /// </summary>
        Vector3 GetCenter();

        /// <summary>
        /// Gets the container region.
        /// </summary>
        IAcknexObject GetRegion();
    }
}