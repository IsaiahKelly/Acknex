using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using Acknex;
using Acknex.Interfaces;
using UnityEditor;
using UnityEngine;
using Texture = Acknex.Texture;

public class AcknexObjectEditor : Editor
{
    public override void OnInspectorGUI()
    {
        void ListProperties(IOrderedEnumerable<KeyValuePair<string, object>> objectProperties, IOrderedEnumerable<KeyValuePair<string, float>> numberProperties)
        {
            foreach (var property in objectProperties)
            {
                EditorGUILayout.BeginHorizontal();
                EditorGUILayout.LabelField(property.Key);
                if (property.Value is HashSet<string> list)
                {
                    EditorGUILayout.LabelField(string.Join(",", list));
                }
                else if (property.Value is IAcknexObject acknexObject && acknexObject.Container is MonoBehaviour mono)
                {
                    if (GUILayout.Button(property.Value?.ToString()))
                    {
                        Selection.activeTransform = mono.transform;
                    }
                }
                else if (property.Value is List<IAcknexObject> objList)
                {
                    var values = "";
                    foreach (var item in objList)
                    {
                        if (item.Type == ObjectType.String)
                        {
                            values += item.GetString("VAL") + "|";
                        }
                        else
                        {
                            values += item.ToString() + "|";
                        }
                    }
                    EditorGUILayout.LabelField(values);
                }
                else
                {
                    EditorGUILayout.LabelField(property.Value?.ToString());
                }
                EditorGUILayout.EndHorizontal();
            }
            foreach (var property in numberProperties)
            {
                EditorGUILayout.BeginHorizontal();
                EditorGUILayout.LabelField(property.Key);
                EditorGUILayout.LabelField((property.Key == "ANGLE" ? $"{(Mathf.Rad2Deg * property.Value)}({property.Value})" : property.Value.ToString()));
                EditorGUILayout.EndHorizontal();
            }
        }
        base.OnInspectorGUI();
        if (target is IAcknexObjectContainer container)
        {
            EditorGUILayout.TextField("Debug", container.AcknexObject.DebugMessage);
            EditorGUILayout.Toggle("Is Instance", container.AcknexObject.IsInstance);
            EditorGUILayout.Toggle("Is Dirty", container.AcknexObject.IsDirty);
            EditorGUILayout.Toggle("Is Geometry Dirty", container.AcknexObject.IsGeometryDirty);
            EditorGUILayout.IntField("Index", container.AcknexObject.InstanceIndex);
            EditorGUILayout.BeginFoldoutHeaderGroup(true, "From Instance");
            var objectProperties = ((AcknexObject)container.AcknexObject).ObjectProperties.OrderBy(x => x.Key);
            var numberProperties = ((AcknexObject)container.AcknexObject).NumberProperties.OrderBy(x => x.Key);
            ListProperties(objectProperties, numberProperties);
            EditorGUILayout.EndFoldoutHeaderGroup();
            if (container.AcknexObject.GetTemplateCallback != null && container.AcknexObject.TryGetString("NAME", out var name))
            {
                var template = container.AcknexObject.GetTemplateCallback(name);
                if (template != null)
                {
                    EditorGUILayout.BeginFoldoutHeaderGroup(true, "From Template");
                    var templateObjectProperties = ((AcknexObject)template).ObjectProperties.OrderBy(x => x.Key);
                    var templateNumberProperties = ((AcknexObject)template).NumberProperties.OrderBy(x => x.Key);
                    ListProperties(templateObjectProperties, templateNumberProperties);
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
[UnityEditor.CustomEditor(typeof(Panel))]
public class PanelEditor : AcknexObjectEditor
{
}
[UnityEditor.CustomEditor(typeof(Text))]
public class TextEditor : AcknexObjectEditor
{
}

[CustomEditor(typeof(World))]
public class WorldEditor : AcknexObjectEditor
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
            EditorGUILayout.LabelField(kvp.Value.AcknexObject.GetString("VAL"));
            //EditorGUILayout.LabelField("");
            EditorGUILayout.EndHorizontal();
        }
        EditorGUILayout.EndFoldoutHeaderGroup();
        EditorGUILayout.BeginFoldoutHeaderGroup(true, "Skills");
        var skillsByName = world.SkillsByName.OrderBy(x => x.Key);
        foreach (var kvp in skillsByName)
        {
            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField(kvp.Key);
            var val = kvp.Value.AcknexObject.GetFloat("VAL");
            EditorGUILayout.LabelField("|" + (kvp.Key == "PLAYER_ANGLE" ? Mathf.Rad2Deg * val : val) + "|");
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