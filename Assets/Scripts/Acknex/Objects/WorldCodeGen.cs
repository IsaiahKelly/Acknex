using NameId = System.UInt32;
using System.IO;
using System.Text;

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
            foreach (var action in ActionsByName)
            {
                sourceStringBuilder.AppendLine($"_callbacks.Add(\"{action.Value.AcknexObject.Name}\", {action.Value.AcknexObject.Name});");
            }
            sourceStringBuilder.AppendLine("    }");
            foreach (var action in ActionsByName)
            {
                action.Value.WriteHeader();
                action.Value.ParseAllStatements();
                action.Value.WriteFooter();
                sourceStringBuilder.Append(action.Value.CodeStringBuilder);
            }
            sourceStringBuilder.AppendLine("    }");
            sourceStringBuilder.AppendLine("}");
            File.WriteAllText(SourceGenerationPath, sourceStringBuilder.ToString());
        }
    }
}