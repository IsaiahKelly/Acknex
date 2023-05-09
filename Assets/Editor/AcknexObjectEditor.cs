using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using Acknex;
using Acknex.Interfaces;
using UnityEditor;
using UnityEngine;
using PropertyName = Acknex.Interfaces.PropertyName;
using Texture = Acknex.Texture;

public class AcknexObjectEditor : Editor
{
    public override void OnInspectorGUI()
    {
        void ListProperties(IOrderedEnumerable<KeyValuePair<uint, object>> objectProperties, IOrderedEnumerable<KeyValuePair<uint, float>> numberProperties)
        {
            foreach (var property in objectProperties)
            {
                EditorGUILayout.BeginHorizontal();
                EditorGUILayout.LabelField(((PropertyName)property.Key).ToString());
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
                        if (item == null)
                        {
                            values += "NULL|";
                            continue;
                        }
                        if (item.Type == ObjectType.String)
                        {
                            values += item.GetString(PropertyName.VAL) + "|";
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
                EditorGUILayout.LabelField(((PropertyName)property.Key).ToString());
                EditorGUILayout.LabelField((property.Key == (uint)PropertyName.ANGLE ? $"{(Mathf.Rad2Deg * property.Value)}({property.Value})" : property.Value.ToString()));
                EditorGUILayout.EndHorizontal();
            }
        }
        base.OnInspectorGUI();

        if (target is IAcknexObjectContainer container)
        {
            if (GUILayout.Button("Force Dirty"))
            {
                container.AcknexObject.IsDirty = true;
            }
            container.AcknexObject.DebugMarked = EditorGUILayout.Toggle("Debug Marked", container.AcknexObject.DebugMarked);
            EditorGUILayout.TextField("Debug", container.AcknexObject.DebugMessage);
            EditorGUILayout.Toggle("Is Instance", container.AcknexObject.IsInstance);
            EditorGUILayout.Toggle("Is Dirty", container.AcknexObject.IsDirty);
            if (container is IGraphicObject graphicObject)
            {
                if (GUILayout.Button("Force Geometry Dirty"))
                {
                    graphicObject.IsGeometryDirty = true;
                }
                if (GUILayout.Button("Force Texture Dirty"))
                {
                    graphicObject.IsTextureDirty = true;
                }
                EditorGUILayout.Toggle("Is Texture Dirty", graphicObject.IsTextureDirty);
                EditorGUILayout.Toggle("Is Geometry Dirty", graphicObject.IsGeometryDirty);
                EditorGUILayout.FloatField("Ambient", graphicObject.GetAmbient());
            }
            EditorGUILayout.IntField("Index", container.AcknexObject.InstanceIndex);
            EditorGUILayout.BeginFoldoutHeaderGroup(true, "From Instance");
            var objectProperties = ((AcknexObject)container.AcknexObject).ObjectProperties.OrderBy(x => x.Key);
            var numberProperties = ((AcknexObject)container.AcknexObject).NumberProperties.OrderBy(x => x.Key);
            ListProperties(objectProperties, numberProperties);
            EditorGUILayout.EndFoldoutHeaderGroup();
            if (container.AcknexObject.GetTemplateCallback != null)
            {
                var template = container.AcknexObject.GetTemplateCallback(container.AcknexObject.NameId);
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
            EditorGUILayout.LabelField(kvp.Value.AcknexObject.Name);
            EditorGUILayout.LabelField(kvp.Value.AcknexObject.GetString(PropertyName.VAL));
            //EditorGUILayout.LabelField("");
            EditorGUILayout.EndHorizontal();
        }
        EditorGUILayout.EndFoldoutHeaderGroup();
        EditorGUILayout.BeginFoldoutHeaderGroup(true, "Skills");
        var skillsByName = world.SkillsByName.OrderBy(x => x.Key);
        foreach (var kvp in skillsByName)
        {
            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.LabelField(kvp.Value.AcknexObject.Name);
            var val = kvp.Value.AcknexObject.GetFloat(PropertyName.VAL);
            EditorGUILayout.LabelField("|" + (kvp.Key == (uint)SkillName.PLAYER_ANGLE ? Mathf.Rad2Deg * val : val) + "|");
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