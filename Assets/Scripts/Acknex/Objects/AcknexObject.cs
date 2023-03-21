using System;
using System.Collections.Generic;
using System.Globalization;
using Acknex.Interfaces;
using UnityEngine;
using UnityEngine.UIElements;

namespace Acknex
{
    public class AcknexObject : IAcknexObject
    {
        public ObjectType Type { get; set; }
        public bool IsInstance { get; set; }

        public SortedDictionary<string, float> NumberProperties = new SortedDictionary<string, float>();
        public SortedDictionary<string, object> ObjectProperties = new SortedDictionary<string, object>();

        public IAcknexObjectContainer Container { get; set; }
        public void SetFloatAll(string propertyName, float value)
        {
            switch (Type)
            {
                case ObjectType.Wall:
                    {
                        var all = World.Instance.AllWallsByName[GetString("NAME")];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetFloat(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Region:
                    {
                        var all = World.Instance.AllRegionsByName[GetString("NAME")];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetFloat(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Thing:
                    {
                        var all = World.Instance.AllThingsByName[GetString("NAME")];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetFloat(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Actor:
                    {
                        var all = World.Instance.AllActorsByName[GetString("NAME")];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetFloat(propertyName, value);
                        }
                        break;
                    }
            }
        }

        public void SetIntegerAll(string propertyName, int value)
        {
            switch (Type)
            {
                case ObjectType.Wall:
                    {
                        var all = World.Instance.AllWallsByName[GetString("NAME")];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetInteger(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Region:
                    {
                        var all = World.Instance.AllRegionsByName[GetString("NAME")];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetInteger(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Thing:
                    {
                        var all = World.Instance.AllThingsByName[GetString("NAME")];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetInteger(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Actor:
                    {
                        var all = World.Instance.AllActorsByName[GetString("NAME")];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetInteger(propertyName, value);
                        }
                        break;
                    }
            }
        }

        public void SetStringAll(string propertyName, string value)
        {
            switch (Type)
            {
                case ObjectType.Wall:
                    {
                        var all = World.Instance.AllWallsByName[GetString("NAME")];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetString(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Region:
                    {
                        var all = World.Instance.AllRegionsByName[GetString("NAME")];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetString(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Thing:
                    {
                        var all = World.Instance.AllThingsByName[GetString("NAME")];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetString(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Actor:
                    {
                        var all = World.Instance.AllActorsByName[GetString("NAME")];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetString(propertyName, value);
                        }
                        break;
                    }
            }
        }

        public void SetObjectAll<T>(string propertyName, T value)
        {
            switch (Type)
            {
                case ObjectType.Wall:
                    {
                        var all = World.Instance.AllWallsByName[GetString("NAME")];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Region:
                    {
                        var all = World.Instance.AllRegionsByName[GetString("NAME")];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Thing:
                    {
                        var all = World.Instance.AllThingsByName[GetString("NAME")];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Actor:
                    {
                        var all = World.Instance.AllActorsByName[GetString("NAME")];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetObject(propertyName, value);
                        }
                        break;
                    }
            }
        }

        public void SetAcknexObjectAll(string propertyName, IAcknexObject value)
        {
            switch (Type)
            {
                case ObjectType.Wall:
                    {
                        var all = World.Instance.AllWallsByName[GetString("NAME")];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetAcknexObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Region:
                    {
                        var all = World.Instance.AllRegionsByName[GetString("NAME")];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetAcknexObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Thing:
                    {
                        var all = World.Instance.AllThingsByName[GetString("NAME")];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetAcknexObject(propertyName, value);
                        }
                        break;
                    }
                case ObjectType.Actor:
                    {
                        var all = World.Instance.AllActorsByName[GetString("NAME")];
                        foreach (var item in all)
                        {
                            item.AcknexObject.SetAcknexObject(propertyName, value);
                        }
                        break;
                    }
            }
        }

        public override string ToString()
        {
            if (TryGetString("NAME", out var name))
            {
                return name;
            }
            return base.ToString();
        }

        public void AddFlag(string flag)
        {
            NumberProperties[flag] = 1f;
            IsDirty = true;
        }

        public void RemoveFlag(string flag)
        {
            NumberProperties.Remove(flag);
            IsDirty = true;
        }

        public bool ContainsFlag(string flag, bool fromTemplate = true)
        {
            if (NumberProperties.TryGetValue(flag, out var value))
            {
                return value > 0f;
            }
            if (fromTemplate)
            {
                var template = GetTemplateCallback(GetString("NAME", false));
                if (template != null && template.ContainsFlag(flag, false))
                {
                    return true;// todo: check for ? value > 0f;
                }
            }
            return false;
        }

        //todo: create a mechanism to avoid infinite loop on setdirty

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
            NumberProperties[propertyName] = value;
            //IsDirty = true;
        }
        public void SetInteger(string propertyName, int value)
        {
            NumberProperties[propertyName] = value;
            //IsDirty = true;
        }

        public void SetObject<T>(string propertyName, T value)
        {
            ObjectProperties[propertyName] = value;
            //IsDirty = true;
        }

        public void SetString(string propertyName, string value)
        {
            ObjectProperties[propertyName] = value;
            //IsDirty = true;
        }

        public void SetAcknexObject(string propertyName, IAcknexObject value)
        {
            ObjectProperties[propertyName] = value;
            //IsDirty = true;
        }

        public float GetFloat(string propertyName, bool fromTemplate = true)
        {
            if (NumberProperties.TryGetValue(propertyName, out var number))
            {
                return number;
            }
            if (fromTemplate && GetTemplateCallback != null && ObjectProperties.TryGetValue("NAME", out var name))
            {
                var template = GetTemplateCallback(name.ToString());
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
            if (fromTemplate && GetTemplateCallback != null && ObjectProperties.TryGetValue("NAME", out var name))
            {
                var template = GetTemplateCallback(name.ToString());
                if (template != null && template.TryGetInteger(propertyName, out var definitionNumber, false))
                {
                    return (int)definitionNumber;
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
            if (fromTemplate && GetTemplateCallback != null && ObjectProperties.TryGetValue("NAME", out var name))
            {
                var template = GetTemplateCallback(name.ToString());
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
            if (fromTemplate && GetTemplateCallback != null && ObjectProperties.TryGetValue("NAME", out var name))
            {
                var template = GetTemplateCallback(name.ToString());
                if (template != null && template.TryGetObject<string>(propertyName, out var definitionObj, false))
                {
                    return definitionObj;
                }
            }
            return default;
        }

        public IAcknexObject GetAcknexObject(string propertyName, bool fromTemplate = true)
        {
            var obj = GetObject<IAcknexObject>(propertyName, fromTemplate);
            if (obj != null && !obj.IsInstance)
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
        
        public bool TryGetFloat(string propertyName, out float result, bool fromTemplate = true)
        {
            if (NumberProperties.TryGetValue(propertyName, out var number))
            {
                result = number;
                return true;
            }
            if (fromTemplate && GetTemplateCallback != null && ObjectProperties.TryGetValue("NAME", out var name))
            {
                var template = GetTemplateCallback(name.ToString());
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
            if (fromTemplate && GetTemplateCallback != null && ObjectProperties.TryGetValue("NAME", out var name))
            {
                var template = GetTemplateCallback(name.ToString());
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
            if (fromTemplate && GetTemplateCallback != null && ObjectProperties.TryGetValue("NAME", out var name))
            {
                var template = GetTemplateCallback(name.ToString());
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
            if (fromTemplate && GetTemplateCallback != null && ObjectProperties.TryGetValue("NAME", out var name))
            {
                var template = GetTemplateCallback(name.ToString());
                if (template != null && template.TryGetObject<string>(propertyName, out var definitionObj, false))
                {
                    result = definitionObj;
                    return true;
                }
            }
            result = default;
            return false;
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

        public AcknexObject(Func<string, IAcknexObject> getTemplateCallback, ObjectType type)
        {
            GetTemplateCallback = getTemplateCallback;
            Type = type;
        }

        public Func<string, IAcknexObject> GetTemplateCallback { get; }

        public bool IsDirty { get; set; } = true;
    }
}