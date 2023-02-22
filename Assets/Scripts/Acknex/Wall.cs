using LibTessDotNet;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace Acknex
{
    //todo: some refactored methods dont need to receive this class instance anymore
    public class Wall : MonoBehaviour, IAcknexObject
    {
        public string NAME;
        public int VERTEX1;
        public int VERTEX2;
        public int REGION1;
        public int REGION2;
        public float OFFSETX;
        public float OFFSETY;

        public string TEXTURE;

        public Region RightRegion;
        public Region LeftRegion;
        public Vec3 Vertex1;
        public Vec3 Vertex2;
        public float FloorHeightRight;
        public float CeilHeightRight;
        public float FloorHeightLeft;
        public float CeilHeightLeft;
        public bool LiftedFloorRight;
        public bool LiftedCeilRight;
        public bool LiftedFloorLeft;
        public bool LiftedCeilLeft;

        public bool Processed;

        public Wall Definition
        {
            get
            {
                if (World.Instance.WallsByName.TryGetValue(NAME, out var wall))
                {
                    return wall;
                }

                return null;
            }
        }

        public string Texture => Definition != null ? Definition.TEXTURE : TEXTURE;

        public void UpdateObject()
        {
            throw new System.NotImplementedException();
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
            var initialVertex = contourVertices[inversed ? wallA.VERTEX2 : wallA.VERTEX1];
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
                    if (wallB.VERTEX2 == wallA.VERTEX1)
                    {
                        ProcessWall(allContourVertices, contourVertices, wallB, kvp, ref vertexCount, true);
                        foundPair = true;
                        break;
                    }

                    if (wallB.VERTEX1 == wallA.VERTEX1)
                    {
                        ProcessWall(allContourVertices, contourVertices, wallB, kvp, ref vertexCount);
                        foundPair = true;
                        break;
                    }
                }
                else
                {
                    if (wallB.VERTEX1 == wallA.VERTEX2)
                    {
                        ProcessWall(allContourVertices, contourVertices, wallB, kvp, ref vertexCount);
                        foundPair = true;
                        break;
                    }

                    if (wallB.VERTEX2 == wallA.VERTEX2)
                    {
                        ProcessWall(allContourVertices, contourVertices, wallB, kvp, ref vertexCount, true);
                        foundPair = true;
                        break;
                    }
                }

            }

            if (!foundPair)
            {
                var endingVertex = contourVertices[inversed ? wallA.VERTEX1 : wallA.VERTEX2];
                endingVertex = new ContourVertex(endingVertex.Position, new WallWithSide(wallA, inversed));
                allContourVertices.Add(endingVertex);
                vertexCount++;
            }
        }

        public void BuildWallMesh(List<Vector3> allVertices, List<Vector2> allUVs, Dictionary<string, List<int>> allTriangles, GameObject wallGameObject)
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

            var meshFilter = wallGameObject.AddComponent<MeshFilter>();
            meshFilter.sharedMesh = mesh;

            var meshRenderer = wallGameObject.AddComponent<MeshRenderer>();
            meshRenderer.sharedMaterials = materials;

            var meshCollider = wallGameObject.AddComponent<MeshCollider>();
            meshCollider.sharedMesh = mesh;
        }

        public void BuildWall(Wall wall, Region rightRegion, Region leftRegion, List<ContourVertex> vertices, List<Vector3> allVertices, List<Vector2> allUVs, Dictionary<string, List<int>> allTriangles, Region rightRegionAbove = null, Region leftRegionAbove = null)
        {
            while (true)
            {
                //todo
                if (wall.NAME == "NullWall")
                {
                    return;
                }

                var vertexA = vertices[wall.VERTEX1];
                var vertexB = vertices[wall.VERTEX2];

                wall.Vertex1 = vertexA.Position;
                wall.Vertex2 = vertexB.Position;

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
                    var heightLeft = leftRegion.FLOOR_HGT;
                    var heightRight = rightRegion.FLOOR_HGT;
                    if (leftRegion.Below != null)
                    {
                        heightLeft = Mathf.Max(heightLeft, leftRegion.Below.CEIL_HGT);
                        heightRight = Mathf.Max(heightRight, leftRegion.Below.CEIL_HGT);
                    }

                    if (rightRegion.Below != null)
                    {
                        heightRight = Mathf.Max(heightRight, rightRegion.Below.CEIL_HGT);
                        heightLeft = Mathf.Max(heightLeft, rightRegion.Below.CEIL_HGT);
                    }

                    if (leftRegionAbove != null)
                    {
                        heightLeft = Mathf.Min(heightLeft, leftRegionAbove.FLOOR_HGT);
                        heightRight = Mathf.Min(heightRight, leftRegionAbove.FLOOR_HGT);
                    }

                    if (rightRegionAbove != null)
                    {
                        heightRight = Mathf.Min(heightRight, rightRegionAbove.FLOOR_HGT);
                        heightLeft = Mathf.Min(heightLeft, rightRegionAbove.FLOOR_HGT);
                    }

                    var liftedLeft = leftRegion.FloorLifted && leftRegionAbove == null;
                    var liftedRight = rightRegion.FloorLifted && rightRegionAbove == null;
                    wall.LiftedFloorLeft = liftedLeft;
                    wall.FloorHeightLeft = heightLeft;
                    wall.LiftedFloorRight = liftedRight;
                    wall.FloorHeightRight = heightRight;
                    var v0 = new Vector3(vertexA.Position.X, heightLeft + (liftedLeft ? vertexA.Position.Z : 0), vertexA.Position.Y);
                    var v1 = new Vector3(vertexB.Position.X, heightLeft + (liftedLeft ? vertexB.Position.Z : 0), vertexB.Position.Y);
                    var v2 = new Vector3(vertexB.Position.X, heightRight + (liftedRight ? vertexB.Position.Z : 0), vertexB.Position.Y);
                    var v3 = new Vector3(vertexA.Position.X, heightRight + (liftedRight ? vertexA.Position.Z : 0), vertexA.Position.Y);
                    MeshUtils.AddQuad(0, 1, 2, 3, allTriangles, wall.Texture, allVertices.Count);
                    allVertices.Add(v0);
                    allVertices.Add(v1);
                    allVertices.Add(v2);
                    allVertices.Add(v3);
                    var normal = MeshUtils.GetNormal(v0, v1, v2, v3);
                    var unRotateNormal = Quaternion.Inverse(Quaternion.LookRotation(normal));
                    allUVs.Add(unRotateNormal * v0);
                    allUVs.Add(unRotateNormal * v1);
                    allUVs.Add(unRotateNormal * v2);
                    allUVs.Add(unRotateNormal * v3);
                }
                {
                    var heightLeft = leftRegion.CEIL_HGT;
                    var heightRight = rightRegion.CEIL_HGT;
                    //if (leftRegion.Below != null)
                    //{
                    //    heightLeft = Mathf.Min(heightLeft, leftRegion.Below.FLOOR_HGT);
                    //}
                    //if (rightRegion.Below != null)
                    //{
                    //    heightRight = Mathf.Min(heightRight, rightRegion.Below.FLOOR_HGT);
                    //}
                    //if (minHeightLeft.HasValue)
                    //{
                    //    heightLeft = Mathf.Max(heightLeft, minHeightLeft.Value);
                    //}
                    //if (minHeightRight.HasValue)
                    //{
                    //    heightRight = Mathf.Max(heightRight, minHeightRight.Value);
                    //}
                    if (leftRegionAbove != null)
                    {
                        heightLeft = Mathf.Min(heightLeft, leftRegionAbove.FLOOR_HGT);
                        heightRight = Mathf.Min(heightRight, leftRegionAbove.FLOOR_HGT);
                    }

                    if (rightRegionAbove != null)
                    {
                        heightRight = Mathf.Min(heightRight, rightRegionAbove.FLOOR_HGT);
                        heightLeft = Mathf.Min(heightLeft, rightRegionAbove.FLOOR_HGT);
                    }

                    var liftedLeft = leftRegion.CellLifted && leftRegionAbove == null;
                    var liftedRight = rightRegion.CellLifted && rightRegionAbove == null;
                    wall.LiftedCeilLeft = liftedLeft;
                    wall.CeilHeightLeft = heightLeft;
                    wall.LiftedCeilRight = liftedRight;
                    wall.CeilHeightRight = heightRight;
                    var v0 = new Vector3(vertexA.Position.X, heightLeft + (liftedLeft ? vertexA.Position.Z : 0), vertexA.Position.Y);
                    var v1 = new Vector3(vertexB.Position.X, heightLeft + (liftedLeft ? vertexB.Position.Z : 0), vertexB.Position.Y);
                    var v2 = new Vector3(vertexB.Position.X, heightRight + (liftedRight ? vertexB.Position.Z : 0), vertexB.Position.Y);
                    var v3 = new Vector3(vertexA.Position.X, heightRight + (liftedRight ? vertexA.Position.Z : 0), vertexA.Position.Y);
                    MeshUtils.AddQuad(3, 2, 1, 0, allTriangles, wall.Texture, allVertices.Count);
                    allVertices.Add(v0);
                    allVertices.Add(v1);
                    allVertices.Add(v2);
                    allVertices.Add(v3);
                    var normal = MeshUtils.GetNormal(v0, v1, v2, v3);
                    var unRotateNormal = Quaternion.Inverse(Quaternion.LookRotation(normal));
                    allUVs.Add(unRotateNormal * v0);
                    allUVs.Add(unRotateNormal * v1);
                    allUVs.Add(unRotateNormal * v2);
                    allUVs.Add(unRotateNormal * v3);
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

        public void BuildWallAndMesh(Wall wall, List<ContourVertex> contourVertices)
        {
            var allVertices = new List<Vector3>();
            var allUVs = new List<Vector2>();
            var allTriangles = new Dictionary<string, List<int>>();
            var rightRegion = World.Instance.RegionsByIndex[wall.REGION1];
            var leftRegion = World.Instance.RegionsByIndex[wall.REGION2];
            wall.BuildWall(wall, rightRegion, leftRegion, contourVertices, allVertices, allUVs, allTriangles);
            wall.BuildWallMesh(allVertices, allUVs, allTriangles, wall.gameObject); 
        }
    }
}