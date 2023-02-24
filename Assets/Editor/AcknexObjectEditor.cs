using Acknex;
using Acknex.Interfaces;
using UnityEditor;

public class AcknexObjectEditor : Editor
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        if (target is IAcknexObjectContainer container)
        {
            EditorGUILayout.BeginFoldoutHeaderGroup(true, "From Instance");
            foreach (var property in ((AcknexObject)container.AcknexObject).Properties)
            {
                EditorGUILayout.BeginHorizontal();
                EditorGUILayout.LabelField(property.Key);
                if (property.Value is System.Collections.Generic.List<string> list)
                {
                   EditorGUILayout.LabelField(string.Join(",", list));
                }
                else
                {
                    EditorGUILayout.LabelField(property.Value.ToString());
                }
                EditorGUILayout.EndHorizontal();
            }
            EditorGUILayout.EndFoldoutHeaderGroup();
            if (container.AcknexObject.GetDefinitionCallback != null && container.AcknexObject.TryGet<string>("NAME", out var name))
            {
                var definition = container.AcknexObject.GetDefinitionCallback(name);
                if (definition != null)
                {
                    EditorGUILayout.BeginFoldoutHeaderGroup(true, "From Definition");
                    foreach (var property in ((AcknexObject)definition).Properties)
                    {
                        EditorGUILayout.BeginHorizontal();
                        EditorGUILayout.LabelField(property.Key);
                        if (property.Value is System.Collections.Generic.List<string> list)
                        {
                            EditorGUILayout.LabelField(string.Join(",", list));
                        }
                        else
                        {
                            EditorGUILayout.LabelField(property.Value.ToString());
                        }
                        EditorGUILayout.EndHorizontal();
                    }
                    EditorGUILayout.EndFoldoutHeaderGroup();
                }
            }
        }
    }
}
[UnityEditor.CustomEditor(typeof(Actor))]
public class Actorditor : AcknexObjectEditor
{
}
[UnityEditor.CustomEditor(typeof(Region))]
public class RegionEditor : AcknexObjectEditor
{
}
[UnityEditor.CustomEditor(typeof(Wall))]
public class WallEditor : AcknexObjectEditor
{
}
[UnityEditor.CustomEditor(typeof(Thing))]
public class ThingEditor : AcknexObjectEditor
{
}
[UnityEditor.CustomEditor(typeof(Way))]
public class WayEditor : AcknexObjectEditor
{
}
[UnityEditor.CustomEditor(typeof(Synonym))]
public class SynonymEditor : AcknexObjectEditor
{
}
[UnityEditor.CustomEditor(typeof(Skill))]
public class SkillEditor : AcknexObjectEditor
{
}
[UnityEditor.CustomEditor(typeof(Bitmap))]
public class BitmapEditor : AcknexObjectEditor
{
}
[UnityEditor.CustomEditor(typeof(Texture))]
public class TextureEditor : AcknexObjectEditor
{
}
[UnityEditor.CustomEditor(typeof(Overlay))]
public class OverlayEditor : AcknexObjectEditor
{
}