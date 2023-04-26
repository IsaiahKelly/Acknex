using System;
using System.Collections.Generic;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class AcknexObject : IAcknexObject
    {
        public string Name { get; set; }

        public IDictionary<string, float> NumberProperties = new StringKeyDictionary<string, float>();
        public IDictionary<string, object> ObjectProperties = new StringKeyDictionary<string, object>();

        public AcknexObject(Func<string, IAcknexObject> getTemplateCallback, ObjectType type)
        {
            GetTemplateCallback = getTemplateCallback;
            Type = type;
        }

        public Bitmap CurrentBitmap { get; set; }
        public Vector4 BitmapCoords { get; set; }
        public Vector4 OffsetScale { get; set; }

        public void AddFlag(string flag)
        {
            string.Intern(flag);
            SetFloat(flag, 1f);
        }

        public IAcknexObjectContainer Container { get; set; }

        public string DebugMessage { get; set; }

        public bool IsGeometryDirty { get; set; }

        public IAcknexObject GetAcknexObject(string propertyName, bool fromTemplate = true, bool setupInstance = true)
        {
            string.Intern(propertyName);
            var obj = GetObject<IAcknexObject>(propertyName, fromTemplate);
            if (setupInstance && obj != null && !obj.IsInstance /*&& obj != World.Instance.DummyObject*/)
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

        public float GetFloat(string propertyName, bool fromTemplate = true)
        {
            if (NumberProperties.TryGetValue(propertyName, out var number))
            {
                return number;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(Name);
                if (template != null && template.TryGetFloat(propertyName, out var definitionNumber, false))
                {
                    return definitionNumber;
                }
            }
            return default;
        }

        public int GetInteger(string propertyName, bool fromTemplate = true)
        {
            if (NumberProperties.TryGetValue(propertyName, out var number))
            {
                return (int)number;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(Name);
                if (template != null && template.TryGetInteger(propertyName, out var definitionNumber, false))
                {
                    return definitionNumber;
                }
            }
            return default;
        }

        public T GetObject<T>(string propertyName, bool fromTemplate = true)
        {
            if (ObjectProperties.TryGetValue(propertyName, out var obj))
            {
                return (T)obj;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(Name);
                if (template != null && template.TryGetObject<T>(propertyName, out var definitionObj, false))
                {
                    return definitionObj;
                }
            }
            return default;
        }

        public string GetString(string propertyName, bool fromTemplate = true)
        {
            if (ObjectProperties.TryGetValue(propertyName, out var obj))
            {
                return obj?.ToString();
            }
            if (fromTemplate && GetTemplateCallback != null )
            {
                var template = GetTemplateCallback(Name);
                if (template != null && template.TryGetObject<string>(propertyName, out var definitionObj, false))
                {
                    return definitionObj;
                }
            }
            return default;
        }

        public Func<string, IAcknexObject> GetTemplateCallback { get; }

        public bool HasFlag(string flag, bool fromTemplate = true)
        {
            if (NumberProperties.TryGetValue(flag, out var value))
            {
                return value > 0f;
            }
            if (fromTemplate)
            {
                var template = GetTemplateCallback(Name);
                if (template != null)
                {
                    return template.HasFlag(flag, false);
                }
            }
            return false;
        }

        public int InstanceIndex { get; set; }

        public bool IsDirty { get; set; } = true;
        public bool IsInstance { get; set; }

        public void RemoveFlag(string flag)
        {
            SetFloat(flag, 0f);
        }

        public void SetAcknexObject(string propertyName, IAcknexObject value)
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

        public void SetAcknexObjectAll(string propertyName, IAcknexObject value)
        {
            switch (Type)
            {
                case ObjectType.Wall:
                    {
                        var all = World.Instance.AllWallsByName[Name];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetAcknexObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Region:
                    {
                        var all = World.Instance.AllRegionsByName[Name];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetAcknexObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Thing:
                    {
                        var all = World.Instance.AllThingsByName[Name];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetAcknexObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Actor:
                    {
                        var all = World.Instance.AllActorsByName[Name];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetAcknexObject(propertyName, value);
                        }
                        break;
                    }
            }
        }

        public void SetFloat(string propertyName, float value)
        {
            if (Type == ObjectType.Skill)
            {
                if (TryGetFloat("MAX", out var max))
                {
                    value = Mathf.Min(max, value);
                }
                if (TryGetFloat("MIN", out var min))
                {
                    value = Mathf.Max(min, value);
                }
            }
            if (NumberProperties.TryGetValue(propertyName, out var existingValue))
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
            NumberProperties[propertyName] = value;
        }

        public void SetFloatAll(string propertyName, float value)
        {
            switch (Type)
            {
                case ObjectType.Wall:
                    {
                        var all = World.Instance.AllWallsByName[Name];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetFloat(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Region:
                    {
                        var all = World.Instance.AllRegionsByName[Name];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetFloat(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Thing:
                    {
                        var all = World.Instance.AllThingsByName[Name];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetFloat(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Actor:
                    {
                        var all = World.Instance.AllActorsByName[Name];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetFloat(propertyName, value);
                        }
                        break;
                    }
            }
        }

        public void SetInteger(string propertyName, int value)
        {
            SetFloat(propertyName, value);
        }

        public void SetIntegerAll(string propertyName, int value)
        {
            SetFloatAll(propertyName, value);
        }

        public void SetObject<T>(string propertyName, T value)
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

        public void SetObjectAll<T>(string propertyName, T value)
        {
            switch (Type)
            {
                case ObjectType.Wall:
                    {
                        var all = World.Instance.AllWallsByName[Name];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Region:
                    {
                        var all = World.Instance.AllRegionsByName[Name];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Thing:
                    {
                        var all = World.Instance.AllThingsByName[Name];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Actor:
                    {
                        var all = World.Instance.AllActorsByName[Name];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetObject(propertyName, value);
                        }
                        break;
                    }
            }
        }

        public void SetString(string propertyName, string value)
        {
            SetObject(propertyName, value);
        }

        public void SetStringAll(string propertyName, string value)
        {
            SetObjectAll(propertyName, value);
        }

        public bool TryGetAcknexObject(string propertyName, out IAcknexObject result, bool fromTemplate = true)
        {
            if (TryGetObject<IAcknexObject>(propertyName, out var objResult, fromTemplate))
            {
                result = objResult;
                return true;
            }
            result = default;
            return false;
        }

        public bool TryGetFloat(string propertyName, out float result, bool fromTemplate = true)
        {
            if (NumberProperties.TryGetValue(propertyName, out var number))
            {
                result = number;
                return true;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(Name);
                if (template != null && template.TryGetFloat(propertyName, out var definitionNumber, false))
                {
                    result = definitionNumber;
                    return true;
                }
            }
            result = default;
            return false;
        }

        public bool TryGetInteger(string propertyName, out int result, bool fromTemplate = true)
        {
            if (NumberProperties.TryGetValue(propertyName, out var number))
            {
                result = (int)number;
                return true;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(Name);
                if (template != null && template.TryGetInteger(propertyName, out var definitionNumber, false))
                {
                    result = definitionNumber;
                    return true;
                }
            }
            result = default;
            return false;
        }

        public bool TryGetObject<T>(string propertyName, out T result, bool fromTemplate = true)
        {
            if (ObjectProperties.TryGetValue(propertyName, out var obj))
            {
                result = (T)obj;
                return true;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(Name);
                if (template != null && template.TryGetObject<T>(propertyName, out var definitionObj, false))
                {
                    result = definitionObj;
                    return true;
                }
            }
            result = default;
            return false;
        }

        public bool TryGetString(string propertyName, out string result, bool fromTemplate = true)
        {
            if (ObjectProperties.TryGetValue(propertyName, out var obj) && obj != null)
            {
                result = obj.ToString();
                return true;
            }
            if (fromTemplate && GetTemplateCallback != null)
            {
                var template = GetTemplateCallback(Name);
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