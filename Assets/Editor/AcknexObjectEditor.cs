using Acknex;
using Acknex.Interfaces;
using Boo.Lang;
using UnityEditor;

public class AcknexObjectEditor : Editor
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        var container = target as IAcknexObjectContainer;
        if (container != null)
        {
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