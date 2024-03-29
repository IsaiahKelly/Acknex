﻿using UnityEditor;
using UnityEngine;

namespace Utils
{
    public static class GizmosUtils
    {
#if UNITY_EDITOR
        public static void DrawLine(Vector3 a, Vector3 b, float thickness)
        {
            Handles.DrawAAPolyLine(thickness, a, b);
        }

        public static void DrawString(string text, Vector3 worldPos, Color? colour = null)
        {
            UnityEditor.Handles.BeginGUI();

            var restoreColor = GUI.color;

            if (colour.HasValue) GUI.color = colour.Value;
            var view = UnityEditor.SceneView.currentDrawingSceneView;
            Vector3 screenPos = view.camera.WorldToScreenPoint(worldPos);

            //var camera = Camera.current;
            //if (camera == null)
            //{
            //    return;
            //}
            //Vector3 screenPos =  camera.WorldToScreenPoint(worldPos);
            //
            if (screenPos.y < 0 || screenPos.y > Screen.height || screenPos.x < 0 || screenPos.x > Screen.width ||
                screenPos.z < 0)
            {
                GUI.color = restoreColor;
                UnityEditor.Handles.EndGUI();
                return;
            }

            Vector2 size = GUI.skin.label.CalcSize(new GUIContent(text));
            GUI.Label(new Rect(screenPos.x - (size.x / 2), -screenPos.y /*+ view.position.height + 4*/, size.x, size.y),
                text);
            GUI.color = restoreColor;
            UnityEditor.Handles.EndGUI();
        }

        public static Color color
        {
            get { return Handles.color; }
            set { Handles.color = value; }
        }
#endif
    }
}