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

        public static Mesh CreateQuadMesh()
        {
            var mesh = new Mesh();
            var vertices = new Vector3[4]
            {
                new Vector3(-0.5f, 0, 0),
                new Vector3(0.5f, 0, 0),
                new Vector3(-0.5f, 1f, 0),
                new Vector3(0.5F, 1f, 0)
            };
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