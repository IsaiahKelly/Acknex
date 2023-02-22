using System.Collections.Generic;
using System.IO;
using System.Linq;
using WdlEngine;
using LibTessDotNet;
using UnityEngine;

namespace Acknex
{
    public class World : MonoBehaviour
    {
        public static World Instance { get; private set; }

        [SerializeField]
        private string _wdlPath;

        public readonly List<Region> RegionsByIndex = new List<Region>();
        public readonly HashSet<string> DefinitionsByName = new HashSet<string>();
        public readonly Dictionary<string, Synonym> SynonymsByName = new Dictionary<string, Synonym>();
        public readonly Dictionary<string, Action> ActionsByName = new Dictionary<string, Action>();
        public readonly Dictionary<string, Skill> SkillsByName = new Dictionary<string, Skill>();
        public readonly Dictionary<string, Region> RegionsByName = new Dictionary<string, Region>();
        public readonly Dictionary<string, Wall> WallsByName = new Dictionary<string, Wall>();
        public readonly Dictionary<string, Bitmap> BitmapsByName = new Dictionary<string, Bitmap>();
        public readonly Dictionary<string, Texture> TexturesByName = new Dictionary<string, Texture>();
        public readonly Dictionary<string, string> StringsByName = new Dictionary<string, string>();
        public readonly Dictionary<string, Way> WaysByName = new Dictionary<string, Way>();
        public readonly Dictionary<string, Thing> ThingsByName = new Dictionary<string, Thing>();

        public readonly List<string> Paths = new List<string>();

        public readonly List<string> MapFiles = new List<string>();

        public readonly List<Wall> Walls = new List<Wall>();

        private readonly TextParser _textParser = new TextParser();

        private void Start()
        {
            Instance = this;

            // TODO: Temporary
            using (var streamReader = new StreamReader(File.OpenRead(_wdlPath)))
            {
                new ScriptingEngine().Test("Assets\\Data", streamReader);
            }

            _textParser.ParseWDL(_wdlPath);
            foreach (var mapFile in MapFiles)
            {
                _textParser.ParseWMP(mapFile);
            }
            SynonymsByName.Add("HERE", new Synonym());
            SynonymsByName.Add("THERE", new Synonym());
            SynonymsByName.Add("MY", new Synonym());
            SynonymsByName.Add("#HIT", new Synonym());
            SynonymsByName.Add("#TOUCHED", new Synonym());
            SynonymsByName.Add("#TOUCH_TEX", new Synonym());
            SynonymsByName.Add("#TOUCH_REG", new Synonym());
            SynonymsByName.Add("#TOUCH_TEXT", new Synonym());
        }

        //todo: generic method?
        public Region CreateRegion(string name)
        {
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(transform, false);
            var newRegion = newGameObject.AddComponent<Region>();
            newRegion.NAME = name;
            return newRegion;
        }

        //todo: generic method?
        public Wall CreateWall(string name)
        {
            var newGameObject = new GameObject(name );
            newGameObject.transform.SetParent(transform, false);
            var newWall = newGameObject.AddComponent<Wall>();
            newWall.NAME = name;
            return newWall;
        }

        //todo: generic method?
        public Way CreateWay(string name)
        {
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(transform, false);
            var newWay = newGameObject.AddComponent<Way>();
            newWay.NAME = name;
            return newWay;
        }

        //todo: generic method?
        public Thing CreateThing(string name)
        {
            var newGameObject = new GameObject(name);
            newGameObject.transform.SetParent(transform, false);
            var newThing = newGameObject.AddComponent<Thing>();
            newThing.NAME = name;
            return newThing;
        }
		
        public void BuildWallMesh(List<Vector3> allVertices, List<Vector2> allUVs, Dictionary<string, List<int>> allTriangles, GameObject gameObject)
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
                var material = BuildMaterial(textureName);
                materials[i] = material;
            }

            var meshFilter = gameObject.AddComponent<MeshFilter>();
            meshFilter.sharedMesh = mesh;

            var meshRenderer = gameObject.AddComponent<MeshRenderer>();
            meshRenderer.sharedMaterials = materials;

            var meshCollider = gameObject.AddComponent<MeshCollider>();
            meshCollider.sharedMesh = mesh;
        }

        private Material BuildMaterial(string textureName)
        {
            Material material;
            if (textureName != null && TexturesByName.TryGetValue(textureName, out var textureObject))
            {
                material = new Material(textureObject.FLAGS.Contains("SKY")
                    ? Shader.Find("Acknex/Sky")
                    : Shader.Find("Standard"));
                if (textureObject.BMAPS != null && textureObject.BMAPS.Count > 0)
                {
                    if (Instance.BitmapsByName.TryGetValue(textureObject.BMAPS[0], out var bitmapObject))
                    {
                        material.mainTexture = bitmapObject.Texture2D;
                    }
                }
            }
            else
            {
                material = new Material(Shader.Find("Standard"));
            }
            material.SetFloat("_Glossiness", 0f);
            return material;
        }

        public void BuildFloorMesh(List<Vector3> allVertices, List<Vector2> allUVS, Dictionary<int, List<int>> allTriangles,
            GameObject gameObject, string ceilTexture, string floorTexture)
        {
            var mesh = new Mesh();
            mesh.SetVertices(allVertices);
            mesh.SetUVs(0, allUVS);

            mesh.subMeshCount = allTriangles.Count;
            foreach (var kvp in allTriangles)
            {
                mesh.SetTriangles(kvp.Value, kvp.Key);
            }

            mesh.RecalculateNormals();
            mesh.UploadMeshData(true);

            var meshFilter = gameObject.AddComponent<MeshFilter>();
            meshFilter.sharedMesh = mesh;

            var meshRenderer = gameObject.AddComponent<MeshRenderer>();
            var materials = new Material[mesh.subMeshCount];

            for (var i = 0; i < materials.Length; i++)
            {
                var textureName = i == 0 ? floorTexture : ceilTexture;
                var material = BuildMaterial(textureName);
                materials[i] = material;
            }

            meshRenderer.sharedMaterials = materials;

            var meshCollider = gameObject.AddComponent<MeshCollider>();
            meshCollider.sharedMesh = mesh;
        }

        public void BuildWall(Wall wall,
            Region rightRegion,
            Region leftRegion,
            List<ContourVertex> vertices,
            List<Vector3> allVertices,
            List<Vector2> allUVs,
            Dictionary<string, List<int>> allTriangles,
            Region rightRegionAbove = null,
            Region leftRegionAbove = null
        )
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
                AddQuad(0, 1, 2, 3, allTriangles, wall.Texture, allVertices.Count);
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
                AddQuad(3, 2, 1, 0, allTriangles, wall.Texture, allVertices.Count);
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
                BuildWall(wall, rightRegion.Below, leftRegion.Below, vertices, allVertices, allUVs, allTriangles, rightRegion,
                    leftRegion);
            }
            else if (leftRegion.Below != null)
            {
                BuildWall(wall, null, leftRegion.Below, vertices, allVertices, allUVs, allTriangles, rightRegion, leftRegion);
            }
            else if (rightRegion.Below != null)
            {
                BuildWall(wall, rightRegion.Below, null, vertices, allVertices, allUVs, allTriangles, rightRegion, leftRegion);
            }
        }
        
        public void BuildFloor(ContouredRegion contouredRegion, Region region, List<Vector3> allVertices, List<Vector2> allUVs,
            Dictionary<int, List<int>> allTriangles, ref int meshIndex, bool ceil = false)
        {
            var tess = new Tess();
            foreach (var contouredList in contouredRegion)
            {
                tess.AddContour(contouredList);
            }

            tess.Tessellate();
            var floorVertices = new Vector3[tess.VertexCount];
            //var height = regionDefinition != null ? (ceil ? regionDefinition.CEIL_HGT : regionDefinition.FLOOR_HGT) : (ceil ? region.CEIL_HGT : region.FLOOR_HGT);
            var height = (ceil ? region.CEIL_HGT : region.FLOOR_HGT);
            for (var i = 0; i < tess.VertexCount; i++)
            {
                var vertex = tess.Vertices[i];
                var lifted = false;
                if (region.Definition != null && region.Definition.FLAGS != null)
                {
                    if (ceil && region.Definition.CellLifted || !ceil && region.Definition.FloorLifted)
                    {
                        lifted = true;
                        floorVertices[i] = new Vector3(vertex.Position.X, vertex.Position.Z + height,
                            vertex.Position.Y);
                    }
                }

                if (!lifted)
                {
                    floorVertices[i] = new Vector3(vertex.Position.X, height, vertex.Position.Y);
                }
            }

            var unRotateNormal = Quaternion.Inverse(Quaternion.LookRotation(Vector3.up));
            for (var i = 0; i < floorVertices.Length; i++)
            {
                allUVs.Add(unRotateNormal * floorVertices[i]);
            }

            var vertexIndex = allVertices.Count;
            allVertices.AddRange(floorVertices);
            for (var i = 0; i < tess.Elements.Length; i++)
            {
                tess.Elements[i] += vertexIndex;
            }

            var elements = tess.Elements.ToList();
            if (ceil)
            {
                elements.Reverse();
            }

            allTriangles.Add(meshIndex, elements);
            meshIndex++;
        }

        public void ProcessWall(List<ContourVertex> contourVertices, List<ContourVertex> vertices, Wall wallA,
            KeyValuePair<int, RegionWall> kvp, ref int vertexCount, bool inversed = false)
        {
            vertexCount++;
            var initialVertex = vertices[inversed ? wallA.VERTEX2 : wallA.VERTEX1];
            initialVertex = new ContourVertex(initialVertex.Position, new WallWithSide(wallA, inversed));
            contourVertices.Add(initialVertex);
            wallA.processed = true;
            var foundPair = false;
            foreach (var wallB in kvp.Value)
            {
                if (wallB.processed)
                {
                    continue;
                }

                if (inversed)
                {
                    if (wallB.VERTEX2 == wallA.VERTEX1)
                    {
                        ProcessWall(contourVertices, vertices, wallB, kvp, ref vertexCount, true);
                        foundPair = true;
                        break;
                    }

                    if (wallB.VERTEX1 == wallA.VERTEX1)
                    {
                        ProcessWall(contourVertices, vertices, wallB, kvp, ref vertexCount);
                        foundPair = true;
                        break;
                    }
                }
                else
                {
                    if (wallB.VERTEX1 == wallA.VERTEX2)
                    {
                        ProcessWall(contourVertices, vertices, wallB, kvp, ref vertexCount);
                        foundPair = true;
                        break;
                    }

                    if (wallB.VERTEX2 == wallA.VERTEX2)
                    {
                        ProcessWall(contourVertices, vertices, wallB, kvp, ref vertexCount, true);
                        foundPair = true;
                        break;
                    }
                }

            }

            if (!foundPair)
            {
                var endingVertex = vertices[inversed ? wallA.VERTEX1 : wallA.VERTEX2];
                endingVertex = new ContourVertex(endingVertex.Position, new WallWithSide(wallA, inversed));
                contourVertices.Add(endingVertex);
                vertexCount++;
            }
        }

        private static void AddQuad(int a, int b, int c, int d, Dictionary<string, List<int>> allTriangles, string texture, int baseIndex = 0)
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
    }
}