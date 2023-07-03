using NameId = System.UInt32;
using Acknex.Interfaces;
using System;
using System.Collections;
using UnityEngine;

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
        IAcknexObject GetObject(ObjectType type, NameId name);

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
        [Obsolete("Deprecated")]
        void PostSetupObjectTemplate(IAcknexObject acknexObject);

        /// <summary>
        /// Updates a game skill by the name ´name` with the value `value`.
        /// </summary>
        void UpdateSkillValue(NameId nameInt, float value);

        /// <summary>
        /// Gets the skill's by the name `name´ value.
        /// </summary>
        float GetSkillValue(NameId name);

        /// <summary>
        /// Updates a game skill by the name ´name` with the value `value`.
        /// </summary>
        void UpdateSkillValue(SkillName name, float value);

        /// <summary>
        /// Gets the skill's by the name `name´ value.
        /// </summary>
        float GetSkillValue(SkillName name);

        /// <summary>
        /// This method should be called when a new Way instance point is processed.
        /// </summary>
        void AddWayPoint(IAcknexObject way, float x, float y);

        /// <summary>
        /// Assign the synonym by name `synonymName` to the given object `target´.
        /// </summary>
        void SetSynonymObject(SynonymName synonymName, IAcknexObject target);

        /// <summary>
        /// Assign the synonym by name `synonymName` to the given object `target´.
        /// </summary>
        void SetSynonymObject(NameId synonymName, IAcknexObject target);

        /// <summary>
        /// Returns the object stored into the given synonym.
        /// </summary>
        IAcknexObject GetSynonymObject(NameId synonymName, bool fromRuntime = false);

        /// <summary>
        /// Returns the object stored into the given synonym.
        /// </summary>
        IAcknexObject GetSynonymObject(SynonymName synonymName, bool fromRuntime = false);


        /// <summary>
        /// Gets/Sets the internal game resolution.
        /// </summary>
        Resolution GameResolution { get; set; }

        /// <summary>
        /// Gets a registered Region index.
        /// This value must be passed to the objects created when processing an WMP file.
        /// </summary>
        int GetRegionIndex(NameId value);

        /// <summary>
        /// Register an object property descriptor.
        /// </summary>
        void AddObjectProperty(ObjectType objectType, PropertyType propertyType, PropertyName propertyName);

        /// <summary>
        /// Gets the given object property type.
        /// </summary>
        PropertyType GetPropertyType(ObjectType objectType, PropertyName propertyName, string filename = null, int line = 0);

        /// <summary>
        /// Fades the current palette to the given one.
        /// </summary>
        void FadePal(IAcknexObject acknexObject, float factor);

        /// <summary>
        /// Rotates the given region by the given angle.
        /// </summary>
        void Rotate(IAcknexObject acknexObject, float radians);

        /// <summary>
        /// Lifts the given region by the given value.
        /// </summary>
        void Lift(IAcknexObject acknexObject, float dz);

        /// <summary>
        /// Shifts the given region by the given dx, dy.
        /// </summary>
        void Shift(IAcknexObject acknexObject, float dx, float dy);

        /// <summary>
        /// Shoots the given object.
        /// </summary>
        void Shoot(IAcknexObject acknexObject, IAcknexObject MY, IAcknexObject THERE);

        /// <summary>
        /// Explodes the given object.
        /// </summary>
        void Explode(IAcknexObject acknexObject, IAcknexObject MY, IAcknexObject THERE);

        /// <summary>
        /// Stores the keyboard input into the given string object.
        /// </summary>
        void ReadInkey(IAcknexObject acknexObject);

        /// <summary>
        /// Calls the IEnumerator from the given action.
        /// </summary>
        IEnumerator CallSynonymAction(NameId actionName, IAcknexObject MY, IAcknexObject THERE);

        /// <summary>
        /// Accelerates a value by the given amount.
        /// </summary>
        float Accelerate(float value, float amount);

        /// <summary>
        /// Plays the given song.
        /// </summary>
        void PlaySong(IAcknexObject song, float volume);

        /// <summary>
        /// Plays the given sound.
        /// </summary>
        void PlaySound(IAcknexObject sound, float volume, IAcknexObject balance = null, float sDist = 100f, float svDist = 100f);

        /// <summary>
        /// Plays the given sound.
        /// </summary>
        void PlaySound(IAcknexObject sound, float volume, float balance = 0.5f, float sDist = 100f, float svDist = 100f);

        //todo: change this to an IAcknexObject
        /// <summary>
        /// Drops the given thing or actor in front of player.
        /// </summary>
        /// <returns>The dropped IAcknexObject.</returns>
        IAcknexObject Drop(IAcknexObject acknexObject, IAcknexObject MY, IAcknexObject THERE);

        /// <summary>
        /// Register an object to be post-processed.
        /// </summary>
        void AddPostResolve(PostResolveItem postResolveItem);

        IEnumerator StartManagedCoroutine(MonoBehaviour behaviour, IEnumerator enumerator);
        void StopManagedCoroutine(MonoBehaviour behaviour, IEnumerator enumerator);
    }
}