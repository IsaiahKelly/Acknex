using LibTessDotNet;
using System.Collections.Generic;
using System.Linq;
using Acknex.Interfaces;
using UnityEngine;
using Utils;

namespace Acknex
{
    public class Wall : MonoBehaviour, IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback);

        private static IAcknexObject GetTemplateCallback(string name)
        {
            if (World.Instance.WallsByName.TryGetValue(name, out var wall))
            {
                return wall.AcknexObject;
            }
            return null;
        }
        public Region RightRegion;
        public Region LeftRegion;

        public bool Processed;
        private MeshFilter _meshFilter;
        private MeshRenderer _meshRenderer;
        private MeshCollider _meshCollider;
        private GameObject _attached;
        private Matrix4x4 _bottomQuad;
        private Matrix4x4 _topQuad;
        private Vector3 _bottomNormal;
        private Vector3 _topNormal;

        public Texture TextureObject => AcknexObject.Get<string>("TEXTURE") != null && World.Instance.TexturesByName.TryGetValue(AcknexObject.Get<string>("TEXTURE"), out var textureObject) ? textureObject : null;

        public Bitmap BitmapImage => TextureObject?.GetBitmapAt();

        private void Awake()
        {
            AcknexObject.Container = this;
        }

        private void Update()
        {
            UpdateObject();
        }

        private void OnDrawGizmos()
        {
            if (DebugMarked)
            {
                GizmosUtils.DrawString("0", _bottomQuad.GetColumn(0));
                GizmosUtils.DrawString("1", _bottomQuad.GetColumn(1));
                GizmosUtils.DrawString("2", _bottomQuad.GetColumn(2));
                GizmosUtils.DrawString("3", _bottomQuad.GetColumn(3));
            }
        }

        public bool DebugMarked;

        public void UpdateObject()
        {
            //todo: the position follows the same rule as the wall and floor textures, this is going to be tricky :P
            var position = _bottomQuad.GetColumn(0);
            var rotation = Quaternion.LookRotation(-_bottomNormal);
            TextureUtils.HandleAttachment(ref _attached, gameObject, AcknexObject, TextureObject?.AcknexObject, position, rotation);
            if (_meshRenderer != null)
            {
                BitmapImage?.UpdateMaterial(_meshRenderer.material, TextureObject, 0, false, AcknexObject);
            }
            //todo: update <X1, <Y1, <Z1 <X2, <Y2, <Z2, DISTANCE, LENGTH, SIZE_X, LEFT, RIGHT skills
        }

        public void Enable()
        {

        }

        public void Disable()
        {
            gameObject.SetActive(false);
        }

        public void ProcessWall(
            List<ContourVertex> allContourVertices,
            List<ContourVertex> contourVertices,
            Wall wallA,
            KeyValuePair<int, RegionWall> kvp,
            ref int vertexCount,
            bool inversed = false)
        {
            vertexCount++;
            var initialVertex = contourVertices[inversed ? wallA.AcknexObject.Get<int>("VERTEX2") : wallA.AcknexObject.Get<int>("VERTEX1")];
            initialVertex = new ContourVertex(initialVertex.Position, new WallWithSide(wallA, inversed));
            allContourVertices.Add(initialVertex);
            wallA.Processed = true;
            var foundPair = false;
            foreach (var wallB in kvp.Value)
            {
                if (wallB.Processed)
                {
                    continue;
                }

                if (inversed)
                {
                    if (wallB.AcknexObject.Get<int>("VERTEX2") == wallA.AcknexObject.Get<int>("VERTEX1"))
                    {
                        ProcessWall(allContourVertices, contourVertices, wallB, kvp, ref vertexCount, true);
                        foundPair = true;
                        break;
                    }

                    if (wallB.AcknexObject.Get<int>("VERTEX1") == wallA.AcknexObject.Get<int>("VERTEX1"))
                    {
                        ProcessWall(allContourVertices, contourVertices, wallB, kvp, ref vertexCount);
                        foundPair = true;
                        break;
                    }
                }
                else
                {
                    if (wallB.AcknexObject.Get<int>("VERTEX1") == wallA.AcknexObject.Get<int>("VERTEX2"))
                    {
                        ProcessWall(allContourVertices, contourVertices, wallB, kvp, ref vertexCount);
                        foundPair = true;
                        break;
                    }

                    if (wallB.AcknexObject.Get<int>("VERTEX2") == wallA.AcknexObject.Get<int>("VERTEX2"))
                    {
                        ProcessWall(allContourVertices, contourVertices, wallB, kvp, ref vertexCount, true);
                        foundPair = true;
                        break;
                    }
                }

            }

            if (!foundPair)
            {
                var endingVertex = contourVertices[inversed ? wallA.AcknexObject.Get<int>("VERTEX1") : wallA.AcknexObject.Get<int>("VERTEX2")];
                endingVertex = new ContourVertex(endingVertex.Position, new WallWithSide(wallA, inversed));
                allContourVertices.Add(endingVertex);
                vertexCount++;
            }
        }

        private static void BuildWallMesh(List<Vector3> allVertices, List<Vector2> allUVs, Dictionary<string, List<int>> allTriangles, Wall wall)
        {
            var mesh = new Mesh();
            mesh.SetVertices(allVertices);
            mesh.SetUVs(0, allUVs);

            mesh.subMeshCount = allTriangles.Count;

            var trianglesList = allTriangles.Values.ToList();
            for (var i = 0; i < trianglesList.Count; i++)
            {
                mesh.SetIndices(trianglesList[i], MeshTopology.Quads, i);
            }
            mesh.RecalculateNormals();
            mesh.UploadMeshData(true);

            var texturesList = allTriangles.Keys.ToList();
            var materials = new Material[texturesList.Count];
            for (var i = 0; i < texturesList.Count; i++)
            {
                var textureName = texturesList[i];
                var material = World.Instance.BuildMaterial(textureName);
                materials[i] = material;
            }

            wall._meshFilter = wall.gameObject.AddComponent<MeshFilter>();
            wall._meshFilter.sharedMesh = mesh;

            wall._meshRenderer = wall.gameObject.AddComponent<MeshRenderer>();
            wall._meshRenderer.sharedMaterials = materials;

            wall._meshCollider = wall.gameObject.AddComponent<MeshCollider>();
            wall._meshCollider.sharedMesh = mesh;
        }

        private static void BuildWall(Wall wall, Region rightRegion, Region leftRegion, List<ContourVertex> vertices, List<Vector3> allVertices, List<Vector2> allUVs, Dictionary<string, List<int>> allTriangles, Region rightRegionAbove = null, Region leftRegionAbove = null)
        {
            while (true)
            {
                //if (wall.AcknexObject.Get<string>("NAME") == "NullWall")
                //{
                //    return;
                //}

                var vertexA = vertices[wall.AcknexObject.Get<int>("VERTEX1")];
                var vertexB = vertices[wall.AcknexObject.Get<int>("VERTEX2")];

                wall.AcknexObject.Set<float>("X1", vertexA.Position.X);
                wall.AcknexObject.Set<float>("Y1", vertexA.Position.Y);
                wall.AcknexObject.Set<float>("Z1", vertexA.Position.Z);

                wall.AcknexObject.Set<float>("X2", vertexB.Position.X);
                wall.AcknexObject.Set<float>("Y2", vertexB.Position.Y);
                wall.AcknexObject.Set<float>("Z2", vertexB.Position.Z);

                if (leftRegion == null)
                {
                    leftRegion = leftRegionAbove;
                }

                if (rightRegion == null)
                {
                    rightRegion = rightRegionAbove;
                }

                wall.RightRegion = rightRegion;
                wall.LeftRegion = leftRegion;

                {
                    var heightLeft = leftRegion.AcknexObject.Get<float>("FLOOR_HGT", false);
                    var heightRight = rightRegion.AcknexObject.Get<float>("FLOOR_HGT", false);
                    if (leftRegion.Below != null)
                    {
                        heightLeft = Mathf.Max(heightLeft, leftRegion.Below.AcknexObject.Get<float>("CEIL_HGT"));
                        heightRight = Mathf.Max(heightRight, leftRegion.Below.AcknexObject.Get<float>("CEIL_HGT"));
                    }
                    if (rightRegion.Below != null)
                    {
                        heightRight = Mathf.Max(heightRight, rightRegion.Below.AcknexObject.Get<float>("CEIL_HGT"));
                        heightLeft = Mathf.Max(heightLeft, rightRegion.Below.AcknexObject.Get<float>("CEIL_HGT"));
                    }
                    if (leftRegionAbove != null)
                    {
                        heightLeft = Mathf.Min(heightLeft, leftRegionAbove.AcknexObject.Get<float>("FLOOR_HGT"));
                        heightRight = Mathf.Min(heightRight, leftRegionAbove.AcknexObject.Get<float>("FLOOR_HGT"));
                    }
                    if (rightRegionAbove != null)
                    {
                        heightRight = Mathf.Min(heightRight, rightRegionAbove.AcknexObject.Get<float>("FLOOR_HGT"));
                        heightLeft = Mathf.Min(heightLeft, rightRegionAbove.AcknexObject.Get<float>("FLOOR_HGT"));
                    }
                    var liftedLeft = /*leftRegionAbove != null && leftRegionAbove.Flags.Contains("FLOOR_LIFTED") ||*/ leftRegionAbove == null && leftRegion.Flags.Contains("FLOOR_LIFTED");
                    var liftedRight = /*rightRegionAbove != null && rightRegionAbove.Flags.Contains("FLOOR_LIFTED") ||*/ rightRegionAbove == null && rightRegion.Flags.Contains("FLOOR_LIFTED");
                    var v0 = new Vector3(vertexA.Position.X, heightLeft + (liftedLeft ? vertexA.Position.Z : 0), vertexA.Position.Y);
                    var v1 = new Vector3(vertexB.Position.X, heightLeft + (liftedLeft ? vertexB.Position.Z : 0), vertexB.Position.Y);
                    var v2 = new Vector3(vertexB.Position.X, heightRight + (liftedRight ? vertexB.Position.Z : 0), vertexB.Position.Y);
                    var v3 = new Vector3(vertexA.Position.X, heightRight + (liftedRight ? vertexA.Position.Z : 0), vertexA.Position.Y);
                    wall._bottomQuad = new Matrix4x4(v0, v1, v2, v3);
                    MeshUtils.AddQuad(0, 1, 2, 3, allTriangles, wall.AcknexObject.Get<string>("TEXTURE"), allVertices.Count);
                    //if (liftedLeft)
                    //{
                    //    Debug.DrawLine(v0 - new Vector3(0f, vertexA.Position.Z, 0f), v0, Color.red, 1000f);
                    //    Debug.DrawLine(v1 - new Vector3(0f, vertexB.Position.Z, 0f), v1, Color.green, 1000f);
                    //}
                    //if (liftedRight)
                    //{
                    //    Debug.DrawLine(v2 - new Vector3(0f, vertexA.Position.Z, 0f), v2, Color.blue, 1000f);
                    //    Debug.DrawLine(v3 - new Vector3(0f, vertexB.Position.Z, 0f), v3, Color.yellow, 1000f);
                    //}
                    allVertices.Add(v0); //a
                    allVertices.Add(v1); //b
                    allVertices.Add(v2); //c
                    allVertices.Add(v3); //d

                    var normal = MeshUtils.GetNormal(v0, v1, v2, v3);
                    var xAxis = Vector3.Normalize(v1 - v0);
                    var yAxis = Vector3.Normalize(v2 - v1);
                    var uv0 = Vector2.zero;
                    var uv1 = CalculateUV(v1 - v0, xAxis, yAxis);
                    var uv2 = CalculateUV(v2 - v0, xAxis, yAxis);
                    var uv3 = CalculateUV(v3 - v0, xAxis, yAxis);
                    allUVs.Add(uv0);
                    allUVs.Add(uv1);
                    allUVs.Add(uv2);
                    allUVs.Add(uv3);

                    wall._bottomNormal = normal.magnitude > 0f ? normal : Vector3.forward;
                    //var unRotateNormal = Quaternion.Inverse(Quaternion.LookRotation(-normal));
                    //allUVs.Add(unRotateNormal * v0);
                    //allUVs.Add(unRotateNormal * v1);
                    //allUVs.Add(unRotateNormal * v2);
                    //allUVs.Add(unRotateNormal * v3);
                }
                {
                    var heightLeft = leftRegion.AcknexObject.Get<float>("CEIL_HGT");
                    var heightRight = rightRegion.AcknexObject.Get<float>("CEIL_HGT");
                    if (leftRegionAbove != null)
                    {
                        heightLeft = Mathf.Min(heightLeft, leftRegionAbove.AcknexObject.Get<float>("FLOOR_HGT"));
                        heightRight = Mathf.Min(heightRight, leftRegionAbove.AcknexObject.Get<float>("FLOOR_HGT"));
                    }

                    if (rightRegionAbove != null)
                    {
                        heightRight = Mathf.Min(heightRight, rightRegionAbove.AcknexObject.Get<float>("FLOOR_HGT"));
                        heightLeft = Mathf.Min(heightLeft, rightRegionAbove.AcknexObject.Get<float>("FLOOR_HGT"));
                    }

                    var liftedLeft = leftRegion.Flags.Contains("CEIL_LIFTED") && leftRegionAbove == null;
                    var liftedRight = rightRegion.Flags.Contains("CEIL_LIFTED") && rightRegionAbove == null;
                    var v0 = new Vector3(vertexA.Position.X, heightLeft + (liftedLeft ? vertexA.Position.Z : 0), vertexA.Position.Y);
                    var v1 = new Vector3(vertexB.Position.X, heightLeft + (liftedLeft ? vertexB.Position.Z : 0), vertexB.Position.Y);
                    var v2 = new Vector3(vertexB.Position.X, heightRight + (liftedRight ? vertexB.Position.Z : 0), vertexB.Position.Y);
                    var v3 = new Vector3(vertexA.Position.X, heightRight + (liftedRight ? vertexA.Position.Z : 0), vertexA.Position.Y);
                    wall._topQuad = new Matrix4x4(v0, v1, v2, v3);
                    MeshUtils.AddQuad(3, 2, 1, 0, allTriangles, wall.AcknexObject.Get<string>("TEXTURE"), allVertices.Count);
                    allVertices.Add(v0);
                    allVertices.Add(v1);
                    allVertices.Add(v2);
                    allVertices.Add(v3);
                    //todo: calculate normal with source points on fallback?
                    var normal = MeshUtils.GetNormal(v0, v1, v2, v3);
                    var xAxis = Vector3.Normalize(v1 - v0);
                    var yAxis = Vector3.Normalize(v2 - v1);
                    var uv0 = Vector2.zero;
                    var uv1 = CalculateUV(v1 - v0, xAxis, yAxis);
                    var uv2 = CalculateUV(v2 - v0, xAxis, yAxis);
                    var uv3 = CalculateUV(v3 - v0, xAxis, yAxis);
                    allUVs.Add(uv0);
                    allUVs.Add(uv1);
                    allUVs.Add(uv2);
                    allUVs.Add(uv3);

                    wall._topNormal = normal.magnitude > 0f ? normal : Vector3.forward;
                    //var unRotateNormal = Quaternion.Inverse(Quaternion.LookRotation(-normal));
                    //allUVs.Add(unRotateNormal * v0);
                    //allUVs.Add(unRotateNormal * v1);
                    //allUVs.Add(unRotateNormal * v2);
                    //allUVs.Add(unRotateNormal * v3);
                }
                if (leftRegion.Below != null && rightRegion.Below != null)
                {
                    var rightRegion1 = rightRegion;
                    var leftRegion1 = leftRegion;
                    rightRegion = rightRegion.Below;
                    leftRegion = leftRegion.Below;
                    rightRegionAbove = rightRegion1;
                    leftRegionAbove = leftRegion1;
                    continue;
                }
                if (leftRegion.Below != null)
                {
                    var rightRegion1 = rightRegion;
                    var leftRegion1 = leftRegion;
                    rightRegion = null;
                    leftRegion = leftRegion.Below;
                    rightRegionAbove = rightRegion1;
                    leftRegionAbove = leftRegion1;
                    continue;
                }
                if (rightRegion.Below != null)
                {
                    var rightRegion1 = rightRegion;
                    var leftRegion1 = leftRegion;
                    rightRegion = rightRegion.Below;
                    leftRegion = null;
                    rightRegionAbove = rightRegion1;
                    leftRegionAbove = leftRegion1;
                    continue;
                }
                break;
            }
        }

        private static Vector2 CalculateUV(Vector3 input, Vector3 xAxis, Vector3 yAxis)
        {
            var uv = new Vector2();
            uv.x = Vector3.Project(input, xAxis).magnitude;
            uv.y = -Vector3.Project(input, yAxis).magnitude;
            return uv;
        }

        public static void BuildWallAndMesh(Wall wall, List<ContourVertex> contourVertices)
        {
            var allVertices = new List<Vector3>();
            var allUVs = new List<Vector2>();
            var allTriangles = new Dictionary<string, List<int>>();
            var rightRegion = World.Instance.RegionsByIndex[wall.AcknexObject.Get<int>("REGION1")];
            var leftRegion = World.Instance.RegionsByIndex[wall.AcknexObject.Get<int>("REGION2")];
            BuildWall(wall, rightRegion, leftRegion, contourVertices, allVertices, allUVs, allTriangles);
            BuildWallMesh(allVertices, allUVs, allTriangles, wall);
        }
    }
}