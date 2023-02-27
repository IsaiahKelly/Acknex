﻿using Acknex;
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
            if (container.AcknexObject.GetTemplateCallback != null && container.AcknexObject.TryGet<string>("NAME", out var name))
            {
                var template = container.AcknexObject.GetTemplateCallback(name);
                if (template != null)
                {
                    EditorGUILayout.BeginFoldoutHeaderGroup(true, "From Template");
                    foreach (var property in ((AcknexObject)template).Properties)
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
            EditorGUILayout.LabelField(kvp.Value);
            EditorGUILayout.EndHorizontal();
        }
        EditorGUILayout.EndFoldoutHeaderGroup();
        EditorGUILayout.BeginFoldoutHeaderGroup(true, "Skills");
        foreach (var kvp in world.SkillsByName)
        {
            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField(kvp.Key);
            EditorGUILayout.LabelField(kvp.Value.AcknexObject.Get<string>("VAL"));
            EditorGUILayout.EndHorizontal();
        }
        EditorGUILayout.EndFoldoutHeaderGroup(); 
        EditorGUILayout.BeginFoldoutHeaderGroup(true, "Synonym");
        foreach (var kvp in world.SynonymsByName)
        {
            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField(kvp.Key);
            EditorGUILayout.LabelField(kvp.Value.AcknexObject.Get<string>("TYPE"));
            EditorGUILayout.EndHorizontal();
        }
        EditorGUILayout.EndFoldoutHeaderGroup();
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