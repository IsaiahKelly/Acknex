using System.Collections.Generic;
using System.Globalization;
using Acknex;
using Acknex.Interfaces;
using UnityEditor;
using UnityEngine;
using Texture = Acknex.Texture;

public class AcknexObjectEditor : Editor
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        if (target is IAcknexObjectContainer container)
        {
            EditorGUILayout.BeginFoldoutHeaderGroup(true, "From Instance");
            foreach (var property in ((AcknexObject)container.AcknexObject).ObjectProperties)
            {
                EditorGUILayout.BeginHorizontal();
                EditorGUILayout.LabelField(property.Key);
                if (property.Value is HashSet<string> list)
                {
                    EditorGUILayout.LabelField(string.Join(",", list));
                }
                else
                {
                    EditorGUILayout.LabelField(property.Value.ToString());
                }
                EditorGUILayout.EndHorizontal();
            }
            foreach (var property in ((AcknexObject)container.AcknexObject).NumberProperties)
            {
                EditorGUILayout.BeginHorizontal();
                EditorGUILayout.LabelField(property.Key);
                EditorGUILayout.LabelField(property.Value.ToString());
                EditorGUILayout.EndHorizontal();
            }
            EditorGUILayout.EndFoldoutHeaderGroup();
            if (container.AcknexObject.GetTemplateCallback != null && container.AcknexObject.TryGetString("NAME", out var name))
            {
                var template = container.AcknexObject.GetTemplateCallback(name);
                if (template != null)
                {
                    EditorGUILayout.BeginFoldoutHeaderGroup(true, "From Template");
                    foreach (var property in ((AcknexObject)template).ObjectProperties)
                    {
                        EditorGUILayout.BeginHorizontal();
                        EditorGUILayout.LabelField(property.Key);
                        if (property.Value is System.Collections.Generic.HashSet<string> list)
                        {
                            EditorGUILayout.LabelField(string.Join(",", list));
                        }
                        else
                        {
                            EditorGUILayout.LabelField(property.Value.ToString());
                        }
                        EditorGUILayout.EndHorizontal();
                    }
                    foreach (var property in ((AcknexObject)template).NumberProperties)
                    {
                        EditorGUILayout.BeginHorizontal();
                        EditorGUILayout.LabelField(property.Key);
                        EditorGUILayout.LabelField(property.Value.ToString(CultureInfo.InvariantCulture));
                        EditorGUILayout.EndHorizontal();
                    }
                    EditorGUILayout.EndFoldoutHeaderGroup();
                }
            }
            Repaint();
        }
    }
}
[UnityEditor.CustomEditor(typeof(Actor))]
public class ActorEditor : AcknexObjectEditor
{
    private float _speed = 2f;
    private Way _way;
    public override void OnInspectorGUI()
    {
        var actor = (Actor)target;
        EditorGUILayout.BeginVertical();
        _speed = EditorGUILayout.FloatField("Speed", _speed);
        _way = EditorGUILayout.ObjectField("Target", _way, typeof(Way)) as Way;
        if (GUILayout.Button("Go to Way") && _way != null)
        {
            actor.AcknexObject.SetFloat("SPEED", _speed);
            actor.AcknexObject.SetString("TARGET", _way.AcknexObject.GetString("NAME"));
            actor.AcknexObject.IsDirty = true;
        }
        if (GUILayout.Button("Go to Player"))
        {
            actor.AcknexObject.SetFloat("SPEED", _speed);
            actor.AcknexObject.SetString("TARGET", "FOLLOW");
            actor.AcknexObject.IsDirty = true;
        }
        EditorGUILayout.EndVertical();
        base.OnInspectorGUI();
    }
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

[UnityEditor.CustomEditor(typeof(Player))]
public class PlayerEditor : AcknexObjectEditor
{
}

[CustomEditor(typeof(World))]
public class WorldEditor : Editor
{
    public override void OnInspectorGUI()
    {
        var world = target as World;
        base.OnInspectorGUI();
        EditorGUILayout.BeginFoldoutHeaderGroup(true, "Strings");
        foreach (var kvp in world.StringsByName)
        {
            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField(kvp.Key);
            EditorGUILayout.LabelField(kvp.Value.Value);
            //EditorGUILayout.LabelField("");
            EditorGUILayout.EndHorizontal();
        }
        EditorGUILayout.EndFoldoutHeaderGroup();
        EditorGUILayout.BeginFoldoutHeaderGroup(true, "Skills");
        foreach (var kvp in world.SkillsByName)
        {
            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField(kvp.Key);
            EditorGUILayout.LabelField("|" + kvp.Value.AcknexObject.GetFloat("VAL") + "|");
            //if (GUILayout.Button("Modify"))
            //{
            //    var dialog = InputDialog.ShowDialog(kvp.Value.AcknexObject.GetString("VAL"));
            //    world.SkillsByName[kvp.Key].AcknexObject.SetFloat("VAL", float.Parse(dialog.Value));
            //}
            EditorGUILayout.EndHorizontal();
        }
        EditorGUILayout.EndFoldoutHeaderGroup();
        EditorGUILayout.BeginFoldoutHeaderGroup(true, "Synonym");
        //foreach (var kvp in world.SynonymsByName)
        //{
        //    EditorGUILayout.BeginHorizontal();
        //    EditorGUILayout.LabelField(kvp.Key);
        //    if (kvp.Value.AcknexObject.TryGetObject<IAcknexObject>("VAL", out var acknexObject))
        //    {
        //        EditorGUILayout.LabelField(acknexObject.GetString("NAME"));
        //    }
        //    else
        //    {
        //        EditorGUILayout.LabelField("[EMPTY]");
        //    }
        //    //EditorGUILayout.LabelField("");
        //    EditorGUILayout.EndHorizontal();
        //}
        EditorGUILayout.EndFoldoutHeaderGroup();
        Repaint();
    }
}

public class WRSExtractorEditor : Editor
{
    [MenuItem("ACKNEX/Extract WRS")]
    private static void ExtractWDS()
    {
        var inputFolder = EditorUtility.OpenFilePanel("Extract WRS", Application.persistentDataPath, "WRS");
        if (!string.IsNullOrWhiteSpace(inputFolder))
        {
            var outputFolder = EditorUtility.OpenFolderPanel("Select the folder to extract the data", Application.persistentDataPath, "");
            if (!string.IsNullOrWhiteSpace(outputFolder))
            {
                WRSExtractor.ExtractWRS(inputFolder, outputFolder);
            }
        }
    }
}