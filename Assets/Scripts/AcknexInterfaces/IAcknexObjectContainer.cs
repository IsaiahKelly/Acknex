using UnityEngine;

namespace Acknex.Interfaces
{
    /// <summary>
    /// Represents a Unity object container which holds an AcknexObject
    /// </summary>
    public interface IAcknexObjectContainer
    {
        /// <summary>
        /// Indicates whether the object is marked for debugging.
        /// </summary>
        bool IsDebugMarked { get; set; }

        /// <summary>
        /// Indicates whether the object geometry has to be updated.
        /// </summary>
        bool IsGeometryDirty { get; set; }

        /// <summary>
        /// Indicates whether the object texture has to be updated.
        /// </summary>
        bool IsTextureDirty { get; set; }

        /// <summary>
        /// Resets the object texture.
        /// </summary>
        void ResetTexture();

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
        /// 
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