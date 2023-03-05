using UnityEditor;
using UnityEngine;

public class InputDialog : EditorWindow
{
    public string Value;

    private void OnGUI()
    {
        Value = EditorGUILayout.TextField("New Value", Value);
        if (GUILayout.Button("OK"))
        {
            Close();
        }
    }
    public static InputDialog ShowDialog(string value)
    {
        var window = new InputDialog();
        window.Value = value;
        window.ShowUtility();
        return window;
    }
}