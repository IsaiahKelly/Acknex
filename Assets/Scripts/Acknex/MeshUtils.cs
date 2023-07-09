using System;
using System.Collections.Generic;
using UnityEngine;

namespace Acknex
{
    public class MeshUtils
    {
        public static Mesh CreateCappedCylinder(float radius, int segments, float height)
        {
            Mesh mesh = new Mesh();
            World.Instance.CreatedObjects.Add(mesh);

            int numVertices = (segments + 1) * 4; // 4 vertices per segment
            int numTriangles = segments * 4 * 2; // 2 triangles per segment

            Vector3[] vertices = new Vector3[numVertices];
            Vector2[] uv = new Vector2[numVertices];
            int[] triangles = new int[numTriangles * 3];

            float angleStep = 360f / segments;

            // Generate side vertices and UV coordinates
            for (int i = 0; i <= segments; i++)
            {
                float angle = angleStep * i;
                float x = Mathf.Sin(Mathf.Deg2Rad * angle);
                float z = Mathf.Cos(Mathf.Deg2Rad * angle);

                vertices[i] = new Vector3(x * radius, -height / 2f, z * radius);
                vertices[i + segments + 1] = new Vector3(x * radius, height / 2f, z * radius);

                uv[i] = new Vector2(1f - (float)i / segments, 0f);
                uv[i + segments + 1] = new Vector2(1f - (float)i / segments, 1f);
            }

            // Generate top and bottom cap vertices and UV coordinates
            int offset = segments * 2 + 2;
            for (int i = 0; i <= segments; i++)
            {
                float angle = angleStep * i;
                float x = Mathf.Sin(Mathf.Deg2Rad * angle);
                float z = Mathf.Cos(Mathf.Deg2Rad * angle);

                vertices[i + offset] = new Vector3(x * radius, -height / 2f, z * radius);
                vertices[i + offset + segments + 1] = new Vector3(x * radius, height / 2f, z * radius);

                uv[i + offset] = new Vector2((float)i / segments, 0f);
                uv[i + offset + segments + 1] = new Vector2((float)i / segments, 1f);
            }

            // Generate side triangles
            int triangleIndex = 0;
            for (int i = 0; i < segments; i++)
            {
                int current = i;
                int next = i + 1;

                triangles[triangleIndex] = current;
                triangles[triangleIndex + 1] = current + segments + 1;
                triangles[triangleIndex + 2] = next + segments + 1;

                triangles[triangleIndex + 3] = current;
                triangles[triangleIndex + 4] = next + segments + 1;
                triangles[triangleIndex + 5] = next;

                triangleIndex += 6;
            }

            // Generate top cap triangles
            offset += segments + 1;
            for (int i = 0; i < segments; i++)
            {
                int current = i + offset;
                int next = i + offset + 1;

                triangles[triangleIndex] = current;
                triangles[triangleIndex + 1] = 0;
                triangles[triangleIndex + 2] = next;

                triangleIndex += 3;
            }

            // Generate bottom cap triangles
            offset += segments + 1;
            for (int i = 0; i < segments; i++)
            {
                int current = i + offset;
                int next = i + offset + 1;

                triangles[triangleIndex] = current;
                triangles[triangleIndex + 1] = segments + 1;
                triangles[triangleIndex + 2] = next;

                triangleIndex += 3;
            }

            mesh.vertices = vertices;
            mesh.uv = uv;
            mesh.triangles = triangles;

            mesh.RecalculateNormals();

            return mesh;
        }

        public static Vector3 GetNormal(Vector3 a, Vector3 b, Vector3 c, Vector3 d)
        {
            var side1 = b - a;
            var side2 = c - a;
            return Vector3.Cross(side1, side2).normalized;
        }

        public static void AddQuad<T>(int a, int b, int c, int d, Dictionary<T, List<int>> allTriangles, T key, int baseIndex = 0)
        {
            if (!allTriangles.TryGetValue(key, out var indices))
            {
                indices = new List<int>();
                allTriangles[key] = indices;
            }
            indices.Add(baseIndex + a);
            indices.Add(baseIndex + b);
            indices.Add(baseIndex + c);
            indices.Add(baseIndex + d);
        }

        public static Mesh CreateQuadMesh(bool pivotAtLeft = false, bool inverted = false)
        {
            var mesh = new Mesh();
            World.Instance.CreatedObjects.Add(mesh);
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
            var tris = inverted ? new int[6]
            {
                1, 3, 2,
                1, 2 ,0
            } :
                new int[6]
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