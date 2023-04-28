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
                _nameInt = NameUtils.NameToInt(_name, true);
            }
        }

        private int _nameInt;
        public int NameInt => _nameInt;

        public IDictionary<int, float> NumberProperties = new Dictionary<int, float>();
        public IDictionary<int, object> ObjectProperties = new Dictionary<int, object>();

        public AcknexObject(Func<int, IAcknexObject> getTemplateCallback, ObjectType type)
        {
            GetTemplateCallback = getTemplateCallback;
            Type = type;
        }

        public void AddFlag(int flag)
        {
            SetFloat(flag, 1f);
        }

        public IAcknexObjectContainer Container { get; set; }

        public string DebugMessage { get; set; }
        
        public IAcknexObject GetAcknexObject(int propertyName, bool fromTemplate = true, bool setupInstance = true)
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

        public float GetFloat(int propertyName, bool fromTemplate = true)
        {
            if (NumberProperties.TryGetValue((int)propertyName, out var number))
            {
                return number;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(NameInt);
                if (template != null && template.TryGetFloat(propertyName, out var definitionNumber, false))
                {
                    return definitionNumber;
                }
            }
            return default;
        }

        public int GetInteger(int propertyName, bool fromTemplate = true)
        {
            if (NumberProperties.TryGetValue((int)propertyName, out var number))
            {
                return (int)number;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(NameInt);
                if (template != null && template.TryGetInteger(propertyName, out var definitionNumber, false))
                {
                    return definitionNumber;
                }
            }
            return default;
        }

        public T GetObject<T>(int propertyName, bool fromTemplate = true)
        {
            if (ObjectProperties.TryGetValue((int)propertyName, out var obj))
            {
                return (T)obj;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(NameInt);
                if (template != null && template.TryGetObject<T>(propertyName, out var definitionObj, false))
                {
                    return definitionObj;
                }
            }
            return default;
        }

        public string GetString(int propertyName, bool fromTemplate = true)
        {
            if (ObjectProperties.TryGetValue((int)propertyName, out var obj))
            {
                return obj?.ToString();
            }
            if (fromTemplate && GetTemplateCallback != null )
            {
                var template = GetTemplateCallback(NameInt);
                if (template != null && template.TryGetObject<string>(propertyName, out var definitionObj, false))
                {
                    return definitionObj;
                }
            }
            return default;
        }

        public Func<int, IAcknexObject> GetTemplateCallback { get; }

        public bool HasFlag(int flag, bool fromTemplate = true)
        {
            if (NumberProperties.TryGetValue((int)flag, out var value))
            {
                return value > 0f;
            }
            if (fromTemplate)
            {
                var template = GetTemplateCallback(NameInt);
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
            SetFloatAll((int)propertyNameName, value);
        }

        public void SetIntegerAll(PropertyName propertyNameName, int value)
        {
            SetIntegerAll((int)propertyNameName, value);
        }

        public void SetStringAll(PropertyName propertyNameName, string value)
        {
           SetStringAll((int)propertyNameName,value);
        }

        public void SetObjectAll<T>(PropertyName propertyNameName, T value)
        {
            SetObjectAll((int)propertyNameName, value);
        }

        public void SetAcknexObjectAll(PropertyName propertyNameName, IAcknexObject value)
        {
           SetAcknexObjectAll((int)propertyNameName, value);
        }

        public void SetFloat(PropertyName propertyNameName, float value)
        {
           SetFloat((int)propertyNameName, value);
        }

        public void SetInteger(PropertyName propertyNameName, int value)
        {
           SetInteger((int)propertyNameName,value);
        }

        public void SetString(PropertyName propertyNameName, string value)
        {
            SetString((int)propertyNameName, value);
        }

        public void SetObject<T>(PropertyName propertyNameName, T value)
        {
            SetObject((int)propertyNameName,value);
        }

        public void SetAcknexObject(PropertyName propertyNameName, IAcknexObject value)
        {
            SetAcknexObject((int)propertyNameName,value);
        }

        public float GetFloat(PropertyName propertyNameName, bool fromTemplate = true)
        {
            return GetFloat((int)propertyNameName, fromTemplate);
        }

        public int GetInteger(PropertyName propertyNameName, bool fromTemplate = true)
        {
            return GetInteger((int)propertyNameName, fromTemplate);
        }

        public string GetString(PropertyName propertyNameName, bool fromTemplate = true)
        {
            return GetString((int)propertyNameName, fromTemplate);
        }

        public T GetObject<T>(PropertyName propertyNameName, bool fromTemplate = true)
        {
            return GetObject<T>((int)propertyNameName, fromTemplate);
        }

        public IAcknexObject GetAcknexObject(PropertyName propertyNameName, bool fromTemplate = true, bool setupInstance = true)
        {
            return GetAcknexObject((int)propertyNameName, fromTemplate, setupInstance);
        }

        public bool TryGetFloat(PropertyName propertyNameName, out float result, bool fromTemplate = true)
        {
            return TryGetFloat((int)propertyNameName, out result, fromTemplate);
        }

        public bool TryGetInteger(PropertyName propertyNameName, out int result, bool fromTemplate = true)
        {
            return TryGetInteger((int)propertyNameName, out result, fromTemplate);
        }

        public bool TryGetString(PropertyName propertyNameName, out string result, bool fromTemplate = true)
        {
            return TryGetString((int)propertyNameName, out result, fromTemplate);
        }

        public bool TryGetObject<T>(PropertyName propertyNameName, out T result, bool fromTemplate = true)
        {
            return TryGetObject((int)propertyNameName, out result, fromTemplate);
        }

        public bool TryGetAcknexObject(PropertyName propertyNameName, out IAcknexObject result, bool fromTemplate = true)
        {
            return TryGetAcknexObject((int)propertyNameName, out result, fromTemplate);
        }

        public bool HasFlag(PropertyName flag, bool fromTemplate = true)
        {
            return HasFlag((int)flag, fromTemplate);
        }

        public void AddFlag(PropertyName flag)
        {
            AddFlag((int)flag);
        }

        public void RemoveFlag(PropertyName flag)
        {
            RemoveFlag((int)flag);
        }

        public bool IsInstance { get; set; }

        public void RemoveFlag(int flag)
        {
            SetFloat(flag, 0f);
        }

        public void SetAcknexObject(int propertyName, IAcknexObject value)
        {
            if (ObjectProperties.TryGetValue((int)propertyName, out var existingValue))
            {
                IsDirty = existingValue != value;
#if DEBUG_ENABLED
                //DebugMessage = "Got dirty because setted object " + propertyName;
#endif
            }
            ObjectProperties[(int)propertyName] = value;
        }

        public void SetAcknexObjectAll(int propertyName, IAcknexObject value)
        {
            switch (Type)
            {
                case ObjectType.Wall:
                    {
                        var all = World.Instance.AllWallsByName[NameInt];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetAcknexObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Region:
                    {
                        var all = World.Instance.AllRegionsByName[NameInt];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetAcknexObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Thing:
                    {
                        var all = World.Instance.AllThingsByName[NameInt];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetAcknexObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Actor:
                    {
                        var all = World.Instance.AllActorsByName[NameInt];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetAcknexObject(propertyName, value);
                        }
                        break;
                    }
            }
        }

        public void SetFloat(int propertyName, float value)
        {
            if (Type == ObjectType.Skill)
            {
                if (TryGetFloat((int)PropertyName.MAX, out var max))
                {
                    value = Mathf.Min(max, value);
                }
                if (TryGetFloat((int)PropertyName.MIN, out var min))
                {
                    value = Mathf.Max(min, value);
                }
            }
            if (NumberProperties.TryGetValue((int)propertyName, out var existingValue))
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
            NumberProperties[(int)propertyName] = value;
        }

        public void SetFloatAll(int propertyName, float value)
        {
            switch (Type)
            {
                case ObjectType.Wall:
                    {
                        var all = World.Instance.AllWallsByName[NameInt];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetFloat(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Region:
                    {
                        var all = World.Instance.AllRegionsByName[NameInt];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetFloat(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Thing:
                    {
                        var all = World.Instance.AllThingsByName[NameInt];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetFloat(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Actor:
                    {
                        var all = World.Instance.AllActorsByName[NameInt];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetFloat(propertyName, value);
                        }
                        break;
                    }
            }
        }

        public void SetInteger(int propertyName, int value)
        {
            SetFloat(propertyName, value);
        }

        public void SetIntegerAll(int propertyName, int value)
        {
            SetFloatAll(propertyName, value);
        }

        public void SetObject<T>(int propertyName, T value)
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

        public void SetObjectAll<T>(int propertyName, T value)
        {
            switch (Type)
            {
                case ObjectType.Wall:
                    {
                        var all = World.Instance.AllWallsByName[NameInt];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Region:
                    {
                        var all = World.Instance.AllRegionsByName[NameInt];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Thing:
                    {
                        var all = World.Instance.AllThingsByName[NameInt];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Actor:
                    {
                        var all = World.Instance.AllActorsByName[NameInt];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetObject(propertyName, value);
                        }
                        break;
                    }
            }
        }

        public void SetString(int propertyName, string value)
        {
            SetObject(propertyName, value);
        }

        public void SetStringAll(int propertyName, string value)
        {
            SetObjectAll(propertyName, value);
        }

        public bool TryGetAcknexObject(int propertyName, out IAcknexObject result, bool fromTemplate = true)
        {
            if (TryGetObject<IAcknexObject>(propertyName, out var objResult, fromTemplate))
            {
                result = objResult;
                return true;
            }
            result = default;
            return false;
        }

        public bool TryGetFloat(int propertyName, out float result, bool fromTemplate = true)
        {
            if (NumberProperties.TryGetValue((int)propertyName, out var number))
            {
                result = number;
                return true;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(NameInt);
                if (template != null && template.TryGetFloat(propertyName, out var definitionNumber, false))
                {
                    result = definitionNumber;
                    return true;
                }
            }
            result = default;
            return false;
        }

        public bool TryGetInteger(int propertyName, out int result, bool fromTemplate = true)
        {
            if (NumberProperties.TryGetValue((int)propertyName, out var number))
            {
                result = (int)number;
                return true;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(NameInt);
                if (template != null && template.TryGetInteger(propertyName, out var definitionNumber, false))
                {
                    result = definitionNumber;
                    return true;
                }
            }
            result = default;
            return false;
        }

        public bool TryGetObject<T>(int propertyName, out T result, bool fromTemplate = true)
        {
            if (ObjectProperties.TryGetValue((int)propertyName, out var obj))
            {
                result = (T)obj;
                return true;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(NameInt);
                if (template != null && template.TryGetObject<T>(propertyName, out var definitionObj, false))
                {
                    result = definitionObj;
                    return true;
                }
            }
            result = default;
            return false;
        }

        public bool TryGetString(int propertyName, out string result, bool fromTemplate = true)
        {
            if (ObjectProperties.TryGetValue((int)propertyName, out var obj) && obj != null)
            {
                result = obj.ToString();
                return true;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(NameInt);
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