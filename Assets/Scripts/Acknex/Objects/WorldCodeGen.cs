using System.IO;
using System.Text;

namespace Acknex
{
    public partial class World
    {
        private void ConvertActionsToCS()
        {
            var sourceStringBuilder = new StringBuilder();
            sourceStringBuilder.AppendLine("using Acknex.Interfaces;");
            sourceStringBuilder.AppendLine("using System.Collections;");
            sourceStringBuilder.AppendLine("using UnityEngine;");
            sourceStringBuilder.AppendLine("namespace Tests {");
            sourceStringBuilder.AppendLine("    public class Game : IAcknexRuntime {");
            sourceStringBuilder.AppendLine("        private IAcknexWorld _world;");
            sourceStringBuilder.AppendLine("        public void SetWorld(IAcknexWorld world) {");
            sourceStringBuilder.AppendLine("            _world = world;");
            sourceStringBuilder.AppendLine("        }");
            sourceStringBuilder.AppendLine("        public IEnumerator CallAction(string name, IAcknexObject MY, IAcknexObject THERE)");
            sourceStringBuilder.AppendLine("        {");
            sourceStringBuilder.AppendLine("            if (name == null) {");
            sourceStringBuilder.AppendLine("                yield break;");
            sourceStringBuilder.AppendLine("            }");
            sourceStringBuilder.AppendLine("            var method = this.GetType().GetMethod(name);");
            sourceStringBuilder.AppendLine("            if (method != null)");
            sourceStringBuilder.AppendLine("            {");
            sourceStringBuilder.AppendLine("                var result = method.Invoke(this, new[]{MY, THERE});");
            sourceStringBuilder.AppendLine("                yield return (IEnumerator)result;");
            sourceStringBuilder.AppendLine("            }");
            sourceStringBuilder.AppendLine("            yield break;");
            sourceStringBuilder.AppendLine("        }");
            foreach (var action in ActionsByName)
            {
                action.Value.WriteHeader();
                action.Value.ParseAllStatements(_textParser);
                action.Value.WriteFooter();
                sourceStringBuilder.Append(action.Value.CodeStringBuilder);
            }

            sourceStringBuilder.AppendLine("    }");
            sourceStringBuilder.AppendLine("}");
            File.WriteAllText(SourceGenerationPath, sourceStringBuilder.ToString());
        }
    }
}