using System.IO;
using System.Text;

namespace Acknex
{
    public partial class World
    {
        private const string HeaderTemplate = @"
        using Acknex.Interfaces;
        using System.Collections;
        using UnityEngine;
        namespace Tests {
            public class Game : IAcknexRuntime {
                private IAcknexWorld _world;
                private WaitForEndOfFrame _waitForEndOfFrame = new WaitForEndOfFrame();
                public void SetWorld(IAcknexWorld world) {
                    _world = world;
                }
                public IEnumerator CallAction(string name, IAcknexObject MY, IAcknexObject THERE)
                {
                    if (name == null) {
                        yield break;
                    }
                    var method = this.GetType().GetMethod(name);
                    if (method != null)
                    {
                        var result = method.Invoke(this, new[]{MY, THERE});
                        yield return (IEnumerator)result;
                    }
                    yield break;
                }";

        private void ConvertActionsToCS()
        {
            var sourceStringBuilder = new StringBuilder();
            sourceStringBuilder.Append(HeaderTemplate);
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