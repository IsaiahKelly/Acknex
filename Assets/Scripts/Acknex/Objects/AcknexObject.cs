using System;
using System.Collections.Generic;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class AcknexObject : IAcknexObject
    {
        public Dictionary<string, object> Properties = new Dictionary<string, object>();

        public IAcknexObjectContainer Container { get; set; }

        public void Set<T>(string propertyName, T value)
        {
            Properties[propertyName] = value;
        }

        public T Get<T>(string propertyName, bool fromTemplate = true)
        {
            if (Properties.TryGetValue(propertyName, out var property))
            {
                try
                {
                    var result = Convert.ChangeType(property, typeof(T));
                    return (T)result;
                }
                catch (Exception e)
                {
                    Debug.LogWarning($"Cannot cast {propertyName}({property.GetType()}) to ({typeof(T)})");
                }
            }
            if (fromTemplate && GetTemplateCallback != null && Properties.TryGetValue("NAME", out var name))
            {
                var template = GetTemplateCallback(name.ToString());
                if (template != null && template.TryGet<T>(propertyName, out var definitionProperty, false))
                {
                    return definitionProperty;
                }
            }
            return default;
        }

        public bool TryGet<T>(string propertyName, out T result, bool fromTemplate = true)
        {
            result = default;
            if (Properties.TryGetValue(propertyName, out var property))
            {
                try
                {
                    result = (T)Convert.ChangeType(property, typeof(T));
                    return true;
                }
                catch (Exception e)
                {
                }
            }
            if (fromTemplate && GetTemplateCallback != null && Properties.TryGetValue("NAME", out var name))
            {
                var template = GetTemplateCallback(name.ToString());
                if (template != null && template.TryGet<T>(propertyName, out var definitionProperty, false))
                {
                    result = definitionProperty;
                    return true;
                }
            }
            return default;
        }

        public void UpdateObject()
        {

        }

        public void Enable()
        {

        }

        public void Disable()
        {

        }

        public AcknexObject(Func<string, IAcknexObject> getTemplateCallback)
        {
            GetTemplateCallback = getTemplateCallback;
        }

        public object this[string propertyName]
        {
            get => Get<object>(propertyName);
            set => Set(propertyName, value);
        }

        public Func<string, IAcknexObject> GetTemplateCallback { get; }
        public bool IsDirty { get; set; } = true;
    }
}