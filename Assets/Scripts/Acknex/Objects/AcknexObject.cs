using System;
using System.Collections.Generic;
using Acknex.Interfaces;

namespace Acknex
{
    public class AcknexObject : IAcknexObject
    {
        public Dictionary<string, float> NumberProperties = new Dictionary<string, float>();
        public Dictionary<string, object> ObjectProperties = new Dictionary<string, object>();

        public IAcknexObjectContainer Container { get; set; }

        public void SetFloat(string propertyName, float value)
        {
            NumberProperties[propertyName] = value;
        }
        public void SetInteger(string propertyName, int value)
        {
            NumberProperties[propertyName] = value;
        }

        public void SetObject<T>(string propertyName, T value)
        {
            ObjectProperties[propertyName] = value;
        }

        public void SetString(string propertyName, string value)
        {
            ObjectProperties[propertyName] = value;
        }

        public void SetAcknexObject(string propertyName, IAcknexObject value)
        {
            ObjectProperties[propertyName] = value;
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
                return obj.ToString();
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
            if (ObjectProperties.TryGetValue(propertyName, out var obj))
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

        public AcknexObject(Func<string, IAcknexObject> getTemplateCallback)
        {
            GetTemplateCallback = getTemplateCallback;
        }

        public Func<string, IAcknexObject> GetTemplateCallback { get; }

        public bool IsDirty { get; set; } = true;
    }
}