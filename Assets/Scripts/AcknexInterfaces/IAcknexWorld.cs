using System;
using System.Collections;
using System.Collections.Generic;

namespace Acknex.Interfaces
{
    /// <summary>
    /// Represents the game world.
    /// </summary>
    public interface IAcknexWorld : IAcknexObjectContainer
    {
        /// <summary>
        /// Sets the world scripting runtime.
        /// </summary>
        void SetRuntime(IAcknexRuntime runtime);

        /// <summary>
        /// Creates an object template.
        /// The `name` parameter defines the object property 'NAME' value.
        /// </summary>
        IAcknexObject CreateObjectTemplate(ObjectType type, string name);

        /// <summary>
        /// Creates an object instance.
        /// The `name` parameter defines the object property 'NAME' value.
        /// </summary>
        IAcknexObject CreateObjectInstance(ObjectType type, string name);

        /// <summary>
        /// Gets the engine object with the given `name`.
        /// </summary>
        IAcknexObject GetObject(ObjectType type, string name);

        /// <summary>
        /// Gets the game world singleton instance.
        /// </summary>
        IAcknexObject GetWorld();

        /// <summary>
        /// This method should be called when any parser ends processing a WMP file.
        /// </summary>
        void PostSetupWMP();

        /// <summary>
        /// This method should be called when any WMP vertex is processed.
        /// </summary>
        void AddVertex(float x, float y, float z);

        /// <summary>
        /// This method should be called when any WDL string is processed.
        /// </summary>
        IAcknexObject AddString(string name, string value);

        /// <summary>
        /// This method should be called when any WDL path is processed.
        /// </summary>
        void AddPath(string value);

        /// <summary>
        /// This method should be called when all properties from a given object instance have been processed.
        /// </summary>
        void PostSetupObjectInstance(IAcknexObject acknexObject);

        /// <summary>
        /// This method should be called when all properties from a given object template have been processed.
        /// </summary>
        [Obsolete("Deprecated.")]
        void PostSetupObjectTemplate(IAcknexObject acknexObject);

        /// <summary>
        /// Updates a game skill by the name ´name` with the value `value`.
        /// </summary>
        void UpdateSkillValue(string name, float value);

        /// <summary>
        /// Gets the skill's by the name `name´ value.
        /// </summary>
        float GetSkillValue(string name);

        /// <summary>
        /// Assign the synonym by name `synonymName` to the given object `target´.
        /// </summary>
        void SetSynonymObject(string synonymName, IAcknexObject target);

        /// <summary>
        /// This method should be called when a new Way instance point is processed.
        /// </summary>
        void AddWayPoint(IAcknexObject way, float x, float y);

        /// <summary>
        /// Returns the object stored into the given synonym.
        /// </summary>
        IAcknexObject GetSynonymObject(string synonymName);

        /// <summary>
        /// Gets/Sets the internal game resolution.
        /// </summary>
        Resolution GameResolution { get; set; }

        /// <summary>
        /// Gets a registered Region index.
        /// This value must be passed to the objects created when processing an WMP file.
        /// </summary>
        int GetRegionIndex(string value);

        /// <summary>
        /// Register an object property descriptor.
        /// </summary>
        void AddObjectProperty(ObjectType objectType, PropertyType propertyType, string property);

        /// <summary>
        /// Gets the given object property type.
        /// </summary>
        PropertyType GetPropertyType(ObjectType objectType, string property);

        /// <summary>
        /// Shoots the given object.
        /// </summary>
        void Shoot(IAcknexObject acknexObject = null);

        /// <summary>
        /// Explodes the given object.
        /// </summary>
        void Explode(IAcknexObject acknexObject);

        /// <summary>
        /// Stores the keyboard input into the given string object.
        /// </summary>
        void ReadInkey(string stringName);

        /// <summary>
        /// Calls the IEnumerator from the given action.
        /// </summary>
        IEnumerator CallSynonymAction(string actionName);

        /// <summary>
        /// Accelerates a value by the given amount.
        /// </summary>
        float Accelerate(float value, float amount);

        /// <summary>
        /// Plays the given song.
        /// </summary>
        void PlaySong(string songName, float volume);

        /// <summary>
        /// Plays the given sound.
        /// </summary>
        void PlaySound(string songName, float volume, string balance = null);

        /// <summary>
        /// Drops the given thing or actor in front of player.
        /// </summary>
        void Drop(string name);

        /// <summary>
        /// Register an object to be post-processed.
        /// </summary>
        void AddPostResolve((IAcknexObject acknexObject, string keyword, string objectName) postResolve);
    }
}