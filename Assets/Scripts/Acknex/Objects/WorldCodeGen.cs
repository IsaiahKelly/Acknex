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
                    if (name != null) {
                        if (_callbacks.TryGetValue(name, out var callback)) {
                            yield return callback(MY, THERE);
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
                sourceStringBuilder.AppendLine($"_callbacks.Add(\"{action.Key}\", {action.Key});");
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