using System.IO;
using UnityEditor;
using UnityEngine;

public class Utils : EditorWindow
{
    [MenuItem("ACKNEX/Update Game Script")]
    private static void UpdateGameScript()
    {
        File.Copy("Assets/Scripts/Tests/Game.cs.new", "Assets/Scripts/Tests/Game.cs", true);
    }
}