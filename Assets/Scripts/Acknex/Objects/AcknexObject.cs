using NameId = System.UInt32;
using System;
using System.Collections.Generic;
using Acknex.Interfaces;
using UnityEngine;
using PropertyName = Acknex.Interfaces.PropertyName;

namespace Acknex
{
    public class AcknexObject : IAcknexObject
    {
        private string _name;

        public string Name
        {
            get
            {
                return _name;
            }
            set
            {
                _name = value;
                _nameInt = NameUtils.ToNameId(_name, Type != ObjectType.Skill && Type != ObjectType.Synonym, Type == ObjectType.Skill, Type == ObjectType.Synonym);
            }
        }

        private NameId _nameInt;
        public NameId NameId
        {
            get => _nameInt;
            set => _nameInt = value;
        }

        public IDictionary<NameId, float> NumberProperties = new Dictionary<NameId, float>();
        public IDictionary<NameId, object> ObjectProperties = new Dictionary<NameId, object>();

        public AcknexObject(Func<NameId, IAcknexObject> getTemplateCallback, ObjectType type)
        {
            GetTemplateCallback = getTemplateCallback;
            Type = type;
        }

        public void AddFlag(NameId flag)
        {
            SetFloat(flag, 1f);
        }

        public IAcknexObjectContainer Container { get; set; }

        public string DebugMessage { get; set; }

        public IAcknexObject GetAcknexObject(NameId propertyName, bool fromTemplate = true, bool setupInstance = true)
        {
            var obj = GetObject<IAcknexObject>(propertyName, fromTemplate);
            if (setupInstance && obj != null && !obj.IsInstance)
            {
                switch (obj.Type)
                {
                    case ObjectType.Wall:
                    case ObjectType.Region:
                    case ObjectType.Thing:
                    case ObjectType.Actor:
                    case ObjectType.Way:
                        obj.Container.SetupInstance();
                        break;
                }
            }
            return obj;
        }

        public float GetFloat(NameId propertyName, bool fromTemplate = true)
        {
            if (NumberProperties.TryGetValue((NameId)propertyName, out var number))
            {
                return number;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(NameId);
                if (template != null && template.TryGetFloat(propertyName, out var definitionNumber, false))
                {
                    return definitionNumber;
                }
            }
            return default;
        }

        public int GetInteger(NameId propertyName, bool fromTemplate = true)
        {
            if (NumberProperties.TryGetValue(propertyName, out var number))
            {
                return (int)number;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(NameId);
                if (template != null && template.TryGetInteger(propertyName, out var definitionNumber, false))
                {
                    return definitionNumber;
                }
            }
            return default;
        }

        public T GetObject<T>(NameId propertyName, bool fromTemplate = true)
        {
            if (ObjectProperties.TryGetValue(propertyName, out var obj))
            {
                return (T)obj;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(NameId);
                if (template != null && template.TryGetObject<T>(propertyName, out var definitionObj, false))
                {
                    return definitionObj;
                }
            }
            return default;
        }

        public string GetString(NameId propertyName, bool fromTemplate = true)
        {
            if (ObjectProperties.TryGetValue(propertyName, out var obj))
            {
                return obj?.ToString();
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(NameId);
                if (template != null && template.TryGetObject<string>(propertyName, out var definitionObj, false))
                {
                    return definitionObj;
                }
            }
            return default;
        }

        public Func<NameId, IAcknexObject> GetTemplateCallback { get; }

        public bool HasFlag(NameId flag, bool fromTemplate = true)
        {
            if (NumberProperties.TryGetValue(flag, out var value))
            {
                return value > 0f;
            }
            if (fromTemplate)
            {
                var template = GetTemplateCallback(NameId);
                if (template != null)
                {
                    return template.HasFlag(flag, false);
                }
            }
            return false;
        }

        public int InstanceIndex { get; set; }

        public bool IsDirty { get; set; } = true;
        public void SetFloatAll(PropertyName propertyNameName, float value)
        {
            SetFloatAll((NameId)propertyNameName, value);
        }

        public void SetIntegerAll(PropertyName propertyNameName, int value)
        {
            SetIntegerAll((NameId)propertyNameName, value);
        }

        public void SetStringAll(PropertyName propertyNameName, string value)
        {
            SetStringAll((NameId)propertyNameName, value);
        }

        public void SetObjectAll<T>(PropertyName propertyNameName, T value)
        {
            SetObjectAll((NameId)propertyNameName, value);
        }

        public void SetAcknexObjectAll(PropertyName propertyNameName, IAcknexObject value)
        {
            SetAcknexObjectAll((NameId)propertyNameName, value);
        }

        public void SetFloat(PropertyName propertyNameName, float value)
        {
            SetFloat((NameId)propertyNameName, value);
        }

        public void SetInteger(PropertyName propertyNameName, int value)
        {
            SetInteger((NameId)propertyNameName, value);
        }

        public void SetString(PropertyName propertyNameName, string value)
        {
            SetString((NameId)propertyNameName, value);
        }

        public void SetObject<T>(PropertyName propertyNameName, T value)
        {
            SetObject((NameId)propertyNameName, value);
        }

        public void SetAcknexObject(PropertyName propertyNameName, IAcknexObject value)
        {
            SetAcknexObject((NameId)propertyNameName, value);
        }

        public float GetFloat(PropertyName propertyNameName, bool fromTemplate = true)
        {
            return GetFloat((NameId)propertyNameName, fromTemplate);
        }

        public int GetInteger(PropertyName propertyNameName, bool fromTemplate = true)
        {
            return GetInteger((NameId)propertyNameName, fromTemplate);
        }

        public string GetString(PropertyName propertyNameName, bool fromTemplate = true)
        {
            return GetString((NameId)propertyNameName, fromTemplate);
        }

        public T GetObject<T>(PropertyName propertyNameName, bool fromTemplate = true)
        {
            return GetObject<T>((NameId)propertyNameName, fromTemplate);
        }

        public IAcknexObject GetAcknexObject(PropertyName propertyNameName, bool fromTemplate = true, bool setupInstance = true)
        {
            return GetAcknexObject((NameId)propertyNameName, fromTemplate, setupInstance);
        }

        public bool TryGetFloat(PropertyName propertyNameName, out float result, bool fromTemplate = true)
        {
            return TryGetFloat((NameId)propertyNameName, out result, fromTemplate);
        }

        public bool TryGetInteger(PropertyName propertyNameName, out int result, bool fromTemplate = true)
        {
            return TryGetInteger((NameId)propertyNameName, out result, fromTemplate);
        }

        public bool TryGetString(PropertyName propertyNameName, out string result, bool fromTemplate = true)
        {
            return TryGetString((NameId)propertyNameName, out result, fromTemplate);
        }

        public bool TryGetObject<T>(PropertyName propertyNameName, out T result, bool fromTemplate = true)
        {
            return TryGetObject((NameId)propertyNameName, out result, fromTemplate);
        }

        public bool TryGetAcknexObject(PropertyName propertyNameName, out IAcknexObject result, bool fromTemplate = true)
        {
            return TryGetAcknexObject((NameId)propertyNameName, out result, fromTemplate);
        }

        public bool HasFlag(PropertyName flag, bool fromTemplate = true)
        {
            return HasFlag((NameId)flag, fromTemplate);
        }

        public void AddFlag(PropertyName flag)
        {
            AddFlag((NameId)flag);
        }

        public void RemoveFlag(PropertyName flag)
        {
            RemoveFlag((NameId)flag);
        }

        public bool IsInstance { get; set; }

        public void RemoveFlag(NameId flag)
        {
            SetFloat(flag, 0f);
        }

        public void SetAcknexObject(NameId propertyName, IAcknexObject value)
        {
            if (ObjectProperties.TryGetValue(propertyName, out var existingValue))
            {
                IsDirty = existingValue != value;
#if DEBUG_ENABLED
                //DebugMessage = "Got dirty because setted object " + propertyName;
#endif
            }
            ObjectProperties[propertyName] = value;
        }

        public void SetAcknexObjectAll(NameId propertyName, IAcknexObject value)
        {
            switch (Type)
            {
                case ObjectType.Wall:
                    {
                        var all = World.Instance.AllWallsByName[NameId];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetAcknexObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Region:
                    {
                        var all = World.Instance.AllRegionsByName[NameId];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetAcknexObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Thing:
                    {
                        var all = World.Instance.AllThingsByName[NameId];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetAcknexObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Actor:
                    {
                        var all = World.Instance.AllActorsByName[NameId];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetAcknexObject(propertyName, value);
                        }
                        break;
                    }
            }
        }

        public void SetFloat(NameId propertyName, float value)
        {
            if (Type == ObjectType.Skill)
            {
                if (TryGetFloat((NameId)PropertyName.MAX, out var max))
                {
                    value = Mathf.Min(max, value);
                }
                if (TryGetFloat((NameId)PropertyName.MIN, out var min))
                {
                    value = Mathf.Max(min, value);
                }
            }
            if (NumberProperties.TryGetValue((NameId)propertyName, out var existingValue))
            {
                unsafe
                {
                    if (*(int*)&existingValue != *(int*)&value)
                    {
                        IsDirty = true;
#if DEBUG_ENABLED
//                        DebugMessage = "Got dirty because property " + propertyName + " was " + existingValue + " and now is " + value;
#endif
                    }
                }
            }
            else
            {
                IsDirty = true;
                if (IsDirty)
                {
#if DEBUG_ENABLED
 //                   DebugMessage = "Got dirty because new property " + propertyName + " is " + value;
#endif
                }
            }
            NumberProperties[(NameId)propertyName] = value;
        }

        public void SetFloatAll(NameId propertyName, float value)
        {
            switch (Type)
            {
                case ObjectType.Wall:
                    {
                        var all = World.Instance.AllWallsByName[NameId];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetFloat(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Region:
                    {
                        var all = World.Instance.AllRegionsByName[NameId];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetFloat(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Thing:
                    {
                        var all = World.Instance.AllThingsByName[NameId];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetFloat(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Actor:
                    {
                        var all = World.Instance.AllActorsByName[NameId];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetFloat(propertyName, value);
                        }
                        break;
                    }
            }
        }

        public void SetInteger(NameId propertyName, int value)
        {
            SetFloat(propertyName, value);
        }

        public void SetIntegerAll(NameId propertyName, int value)
        {
            SetFloatAll(propertyName, value);
        }

        public void SetObject<T>(NameId propertyName, T value)
        {
            ObjectProperties[propertyName] = value;
            if (ObjectProperties.TryGetValue(propertyName, out var existingValue))
            {
                if (existingValue != (object)value)
                {
                    IsDirty = true;
#if DEBUG_ENABLED
//                    DebugMessage = "Got dirty because property " + propertyName + " was " + existingValue + " and now is " + value;
#endif
                }
            }
            else
            {
                IsDirty = true;
                if (IsDirty)
                {
#if DEBUG_ENABLED
//                    DebugMessage = "Got dirty because new property " + propertyName + " is " + value;
#endif
                }
            }
        }

        public void SetObjectAll<T>(NameId propertyName, T value)
        {
            switch (Type)
            {
                case ObjectType.Wall:
                    {
                        var all = World.Instance.AllWallsByName[NameId];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Region:
                    {
                        var all = World.Instance.AllRegionsByName[NameId];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Thing:
                    {
                        var all = World.Instance.AllThingsByName[NameId];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Actor:
                    {
                        var all = World.Instance.AllActorsByName[NameId];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetObject(propertyName, value);
                        }
                        break;
                    }
            }
        }

        public void SetString(NameId propertyName, string value)
        {
            SetObject(propertyName, value);
        }

        public void SetStringAll(NameId propertyName, string value)
        {
            SetObjectAll(propertyName, value);
        }

        public bool TryGetAcknexObject(NameId propertyName, out IAcknexObject result, bool fromTemplate = true)
        {
            if (TryGetObject<IAcknexObject>(propertyName, out var objResult, fromTemplate))
            {
                result = objResult;
                return true;
            }
            result = default;
            return false;
        }

        public bool TryGetFloat(NameId propertyName, out float result, bool fromTemplate = true)
        {
            if (NumberProperties.TryGetValue(propertyName, out var number))
            {
                result = number;
                return true;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(NameId);
                if (template != null && template.TryGetFloat(propertyName, out var definitionNumber, false))
                {
                    result = definitionNumber;
                    return true;
                }
            }
            result = default;
            return false;
        }

        public bool TryGetInteger(NameId propertyName, out int result, bool fromTemplate = true)
        {
            if (NumberProperties.TryGetValue(propertyName, out var number))
            {
                result = (int)number;
                return true;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(NameId);
                if (template != null && template.TryGetInteger(propertyName, out var definitionNumber, false))
                {
                    result = definitionNumber;
                    return true;
                }
            }
            result = default;
            return false;
        }

        public bool TryGetObject<T>(NameId propertyName, out T result, bool fromTemplate = true)
        {
            if (ObjectProperties.TryGetValue(propertyName, out var obj))
            {
                result = (T)obj;
                return true;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(NameId);
                if (template != null && template.TryGetObject<T>(propertyName, out var definitionObj, false))
                {
                    result = definitionObj;
                    return true;
                }
            }
            result = default;
            return false;
        }

        public bool TryGetString(NameId propertyName, out string result, bool fromTemplate = true)
        {
            if (ObjectProperties.TryGetValue(propertyName, out var obj) && obj != null)
            {
                result = obj.ToString();
                return true;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(NameId);
                if (template != null && template.TryGetObject<string>(propertyName, out var definitionObj, false))
                {
                    result = definitionObj;
                    return true;
                }
            }
            result = default;
            return false;
        }

        public ObjectType Type { get; set; }

        public override string ToString()
        {
            if (Name != null)
            {
                return $"{Name}({Type})({InstanceIndex})";
            }
            return base.ToString();
        }
    }
}