using System.Collections.Generic;
using System.Diagnostics;
using NameId = System.UInt32;
using System.IO;
using System.Text;
using Acknex.Interfaces;

namespace Acknex
{
    public partial class World
    {
        private const string HeaderTemplate = @"
        using System;
        using Acknex.Interfaces;
        using System.Collections;
        using System.Collections.Generic;
        using UnityEngine;
        using Random = UnityEngine.Random;
        using PropertyName = Acknex.Interfaces.PropertyName;
        namespace Tests {
            public class Game : IAcknexRuntime {
                private IAcknexWorld _world;
                private WaitForEndOfFrame _waitForEndOfFrame = new WaitForEndOfFrame();
                private Dictionary<string, Func<IAcknexObject, IAcknexObject, IEnumerator>> _callbacks = new Dictionary<string, Func<IAcknexObject, IAcknexObject, IEnumerator>>();
                public void SetWorld(IAcknexWorld world) {
                    _world = world;
                }
                public IEnumerator CallAction(string name, IAcknexObject MY, IAcknexObject THERE)
                {
                    reset:
                    if (name != null) {
                        if (_callbacks.TryGetValue(name, out var callback)) {
                            var enumerator = callback(MY, THERE);
                            var next = true;
                            while (next) {
                                try {
                                    enumerator.MoveNext();
                                }
                                catch (Exception e) {
                                    Debug.LogError(""ACK Runtime Error:"" + e + ""("" + Environment.StackTrace + "")"");
                                    goto reset;
                                }
                                if (next) {
                                    yield return enumerator.Current;
                                }
                            }
                        }
                    }
                    yield break;
                }
                public Game() {
        ";

        private void ConvertActionsToCS()
        {
            var sourceStringBuilder = new StringBuilder();
            sourceStringBuilder.Append(HeaderTemplate);
            foreach (var kvp in ActionsByName)
            {
                sourceStringBuilder.AppendLine($"_callbacks.Add(\"{kvp.Value.AcknexObject.Name}\", {kvp.Value.AcknexObject.Name});");
            }
            sourceStringBuilder.AppendLine("    }");
            foreach (var kvp in ActionsByName)
            {
                kvp.Value.WriteHeader();
                kvp.Value.ParseAllStatements();
                kvp.Value.WriteFooter();
                sourceStringBuilder.Append(kvp.Value.CodeStringBuilder);
            }
            sourceStringBuilder.AppendLine("    }");
            sourceStringBuilder.AppendLine("}");
            File.WriteAllText(SourceGenerationPath, sourceStringBuilder.ToString());
        }
    }
}