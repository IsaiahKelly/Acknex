using System.Collections.Generic;
using System.Diagnostics;
using NameId = System.UInt32;
using System.IO;
using System.Text;
using Acknex.Interfaces;
using Common;
using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
namespace Acknex
{
    public partial class World
    {
        private const string GameTemplate = @"
        using System;
        using Acknex.Interfaces;
        using System.Collections;
        using System.Collections.Generic;
        using UnityEngine;
        using Random = UnityEngine.Random;
        using PropertyName = Acknex.Interfaces.PropertyName;
        namespace Game {{
            public static class Game {{
                public static WaitForEndOfFrame WaitForEndOfFrame = new WaitForEndOfFrame();
                public static bool CheckEquals(float a, float b) {{
                    return MathUtils.CheckEquals(a, b);
                }}
                public static bool CheckEquals(IAcknexObject a, IAcknexObject b)
                {{
                    return  a == b;
                }}
                public static IAcknexRuntime GetRuntime(string className)
                {{
                    switch(className) {{
                        {0}
                    }}
                    return null;
                }}
            }}
        }}
        ";

        private const string HeaderTemplate = @"
        using System;
        using Common;
        using Acknex.Interfaces;
        using System.Collections;
        using System.Collections.Generic;
        using UnityEngine;
        using Random = UnityEngine.Random;
        using PropertyName = Acknex.Interfaces.PropertyName;
        namespace Game {{
            public class {0} : IAcknexRuntime {{
                private IAcknexWorld _world;
                public void SetWorld(IAcknexWorld world) {{
                    _world = world;
                }}
        //";

        //private const string MethodCallTemplate = @"
        //        private Dictionary<string, Type> _callbacks = new Dictionary<string, Type>();
        //        public IEnumerator CallAction(string name, IAcknexObject MY, IAcknexObject THERE)
        //        {
        //            reset:
        //            if (name != null) {
        //                if (_callbacks.TryGetValue(name, out var callback)) {
        //                    var enumerator = CoroutinePool.Get<Callback>();

        //                    var next = true;
        //                    while (next) {
        //                        try {
        //                            next = enumerator.MoveNext();
        //                        }
        //                        catch (Exception e) {
        //                            Debug.LogError(""ACK Runtime Error:"" + e + ""("" + Environment.StackTrace + "")"");
        //                            goto reset;
        //                        }
        //                        if (next) {
        //                            yield return enumerator.Current;
        //                        }
        //                    }
        //                }
        //            }
        //            yield break;
        //}";

        private const string CustomMethodCallTemplate = @"
                private Dictionary<string, Type> _callbacks = new Dictionary<string, Type>();
                public IEnumerator CallAction(string name, IAcknexObject MY, IAcknexObject THERE)
                {
                    reset:
                    if (name != null) {
                        if (_callbacks.TryGetValue(name, out var callback)) {
                            var enumerator = (ICompiledAction)CoroutinePool.Get(callback);
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

        private void ConvertActionsToCS(string wdlPath)
        {
            var className = PathUtils.GetFilenameWithoutExtension(wdlPath);
            var sourceStringBuilder = new StringBuilder();
            sourceStringBuilder.AppendFormat(HeaderTemplate, className);
            sourceStringBuilder.Append(/*CustomStateMachines ?*/ CustomMethodCallTemplate /*: MethodCallTemplate*/);
            sourceStringBuilder.AppendFormat("public {0}() {{", className);
            foreach (var kvp in ActionsByName)
            {
                sourceStringBuilder.AppendLine( /*CustomStateMachines*/
                    /* ?*/ $"_callbacks.Add(\"{kvp.Value.AcknexObject.Name}\", typeof({kvp.Value.AcknexObject.Name}));"
                    /*: $"_callbacks.Add(\"{kvp.Value.AcknexObject.Name}\", {kvp.Value.AcknexObject.Name});"*/);
                sourceStringBuilder.AppendLine(
                    $"CoroutinePool.TryToRegister<{kvp.Value.AcknexObject.Name}>(out _, out _);"
                    );
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
            File.WriteAllText($"{Application.dataPath}/Scripts/Game/{className}.cs", sourceStringBuilder.ToString());
#if UNITY_EDITOR
            EditorUtility.DisplayDialog("ACKNEX", "Scripts have been compiled.\nPlease exit the playmode, disable scripts compilation on the world instance (Disable Compilation), and hit play again.", "OK");
#endif
        }
    }
}