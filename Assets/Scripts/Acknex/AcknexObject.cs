using System;
using System.Collections.Generic;

namespace Acknex
{
    public class AcknexObject : IAcknexObject
    {
        public Dictionary<string, object> Properties = new Dictionary<string, object>();
        private readonly Func<string, IAcknexObject> _getDefinitionCallback;

        public void Set<T>(string propertyName, T value)
        {
            Properties[propertyName] = value;
        }

        public T Get<T>(string propertyName, bool fromDefinition = true)
        {
            if (fromDefinition && _getDefinitionCallback != null && Properties.TryGetValue("NAME", out var name))
            {
                var definition = _getDefinitionCallback(name.ToString());
                if (definition != null && definition.TryGet<T>(propertyName, out var definitionProperty))
                {
                    return definitionProperty;
                }
            }
            if (Properties.TryGetValue(propertyName, out var property))
            {
                try
                {
                    var result = Convert.ChangeType(property, typeof(T));
                    return (T)result;
                }
                catch (Exception e)
                {
                }
            }
            return default;
        }

        public bool TryGet<T>(string propertyName, out T result, bool fromDefinition = true)
        {
            result = default;
            if (fromDefinition && _getDefinitionCallback != null && Properties.TryGetValue("NAME", out var name))
            {
                var definition = _getDefinitionCallback(name.ToString());
                if (definition != null && definition.TryGet<T>(propertyName, out var definitionProperty))
                {
                    result = definitionProperty;
                    return true;
                }
            }
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

        public AcknexObject(Func<string, IAcknexObject> getDefinitionCallback)
        {
            _getDefinitionCallback = getDefinitionCallback;
        }

        public object this[string propertyName]
        {
            get => Get<object>(propertyName);
            set => Set(propertyName, value);
        }
    }
}