using UnityEngine;

namespace Acknex.Interfaces
{
    /// <summary>
    /// Represents a Unity object container which holds an AcknexObject
    /// </summary>
    public interface IAcknexObjectContainer
    {
        bool DebugMarked { get; set; }

        /// <summary>
        /// Gets/Sets the AcknexObject this container holds.
        /// </summary>
        IAcknexObject AcknexObject { get; set; }

        /// <summary>
        /// Gets the GameObject where the container is.
        /// </summary>
        GameObject GameObject { get; }

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

        /// <summary>
        /// Plays the given sound on this object position.
        /// </summary>
        void PlaySoundLocated(IAcknexObject sound, float volume = 0.5f, float sDist = 100f, float svDist = 100f);
    }
}