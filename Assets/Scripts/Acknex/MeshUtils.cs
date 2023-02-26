using System.Collections.Generic;
using UnityEngine;

namespace Acknex
{
    public class MeshUtils
    {
        public static Vector3 GetNormal(Vector3 a, Vector3 b, Vector3 c, Vector3 d)
        {
            var side1 = b - a;
            var side2 = c - a;
            return Vector3.Cross(side1, side2).normalized;
        }

        public static Vector3 ToXZ(Vector2 point)
        {
            return new Vector3(point.x, 0f, point.y);
        }

        public static void AddQuad(int a, int b, int c, int d, Dictionary<string, List<int>> allTriangles, string texture, int baseIndex = 0)
        {
            if (texture == null)
            {
                texture = "__default__";
            }
            if (!allTriangles.TryGetValue(texture, out var indices))
            {
                indices = new List<int>();
                allTriangles[texture] = indices;
            }
            indices.Add(baseIndex + a);
            indices.Add(baseIndex + b);
            indices.Add(baseIndex + c);
            indices.Add(baseIndex + d);
        }

        public static Mesh CreateQuadMesh(bool pivotAtLeft=  false)
        {
            var mesh = new Mesh();
            Vector3[] vertices;
            if (pivotAtLeft)
            {
                vertices = new Vector3[4]
                {
                    new Vector3(0, 0, 0),
                    new Vector3(1f, 0, 0),
                    new Vector3(0, 1f, 0),
                    new Vector3(1f, 1f, 0)
                };
            }
            else
            {
                vertices = new Vector3[4]
                {
                    new Vector3(-0.5f, 0, 0),
                    new Vector3(0.5f, 0, 0),
                    new Vector3(-0.5f, 1f, 0),
                    new Vector3(0.5F, 1f, 0)
                };
            }
            mesh.vertices = vertices;
            var tris = new int[6]
            {
                0, 2, 1,
                2, 3, 1
            };
            mesh.triangles = tris;
            var normals = new Vector3[4]
            {
                -Vector3.forward,
                -Vector3.forward,
                -Vector3.forward,
                -Vector3.forward
            };
            mesh.normals = normals;
            var uv = new Vector2[4]
            {
                new Vector2(0, 0),
                new Vector2(1, 0),
                new Vector2(0, 1),
                new Vector2(1, 1)
            };
            mesh.uv = uv;
            return mesh;
        }
    }
}