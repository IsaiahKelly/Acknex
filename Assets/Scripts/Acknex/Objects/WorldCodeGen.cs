using System.Collections.Generic;
using System.Diagnostics;
using NameId = System.UInt32;
using System.IO;
using System.Text;
using Acknex.Interfaces;
using UnityEngine;

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
                public static WaitForEndOfFrame WaitForEndOfFrame = new WaitForEndOfFrame();
                private IAcknexWorld _world;
                public void SetWorld(IAcknexWorld world) {
                    _world = world;
                }
                private static bool CheckEquals(float a, float b) {
                    return MathUtils.CheckEquals(a, b);
                }
                private static bool CheckEquals(IAcknexObject a, IAcknexObject b)
                {
                    return  a == b;
                }
        ";

        private const string MethodCallTemplate = @"
                private Dictionary<string, Func<IAcknexObject, IAcknexObject, IEnumerator>> _callbacks = new Dictionary<string, Func<IAcknexObject, IAcknexObject, IEnumerator>>();
                public IEnumerator CallAction(string name, IAcknexObject MY, IAcknexObject THERE)
                {
                    reset:
                    if (name != null) {
                        if (_callbacks.TryGetValue(name, out var callback)) {
                            var enumerator = callback(MY, THERE);
                            var next = true;
                            while (next) {
                                try {
                                    next = enumerator.MoveNext();
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
        }";

        private const string CustomMethodCallTemplate = @"
                private Dictionary<string, ICompiledAction> _callbacks = new Dictionary<string, ICompiledAction>();
                public IEnumerator CallAction(string name, IAcknexObject MY, IAcknexObject THERE)
                {
                    reset:
                    if (name != null) {
                        if (_callbacks.TryGetValue(name, out var callback)) {
                            var enumerator = callback;
                            enumerator.Reset();
                            enumerator.MY = MY;
                            enumerator.THERE = THERE;
                            enumerator._world = _world;
                            var next = true;
                            while (next) {
                                try {
                                    next = enumerator.MoveNext();
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
        }";

        private void ConvertActionsToCS()
        {
            var sourceStringBuilder = new StringBuilder();
            sourceStringBuilder.Append(HeaderTemplate);
            sourceStringBuilder.Append(CustomStateMachines ? CustomMethodCallTemplate : MethodCallTemplate);
            sourceStringBuilder.Append("public Game() {");
            foreach (var kvp in ActionsByName)
            {
                sourceStringBuilder.AppendLine(CustomStateMachines
                    ? $"_callbacks.Add(\"{kvp.Value.AcknexObject.Name}\", new {kvp.Value.AcknexObject.Name}());"
                    : $"_callbacks.Add(\"{kvp.Value.AcknexObject.Name}\", {kvp.Value.AcknexObject.Name});");
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
            File.WriteAllText(Application.dataPath + "/Scripts/Tests/Game.cs.new", sourceStringBuilder.ToString());
        }
    }
}