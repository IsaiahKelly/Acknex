using NameId = System.UInt32;
using Acknex.Interfaces;
using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using Common;
using UnityEngine;
using PropertyName = Acknex.Interfaces.PropertyName;

namespace Acknex
{
    public class Model : IAcknexObjectContainer
    {
        public void NotifyPropertyChanged(uint propertyName)
        {

        }
        public override string ToString()
        {
            return AcknexObject.ToString();
        }

        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {

        }

        public GameObject GameObject => null;

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Model);
        private static IAcknexObject GetTemplateCallback(NameId name)
        {
            return null;
        }

        public Mesh Mesh { get; private set; }
        public Texture2D Texture2D { get; private set; }
        public Texture2D PaletteTexture2D { get; private set; }
        public Bitmap Bitmap { get; private set; }

        private struct mdl_skin_t
        {
            public int group;
            public byte[] data;
        }

        private struct mdl_texcoord_t
        {
            public int onseam;
            public int s;
            public int t;
        }

        private struct mdl_triangle_t
        {
            public int facesfront;
            public int[] vertices;
        }

        private struct mdl_vertex_t
        {
            public byte[] v;
            public byte normalIndex;
        }

        private struct mdl_simpleframe_t
        {
            public int type;
            public mdl_vertex_t bboxmin;
            public mdl_vertex_t bboxmax;
            public string name;
            public mdl_vertex_t[] vertices;
        }

        private static Color32[] FlipPixelsVertically(Color32[] frameData, int width, int height)
        {
            var data = new Color32[frameData.Length];
            for (var firstLine = 0; firstLine < height; firstLine++)
            {
                var lastLine = height - firstLine - 1;
                Array.Copy(frameData, firstLine * width, data, lastLine * width, width);
            }
            return data;
        }

        public void LoadFromFile(string filename)
        {
            if (!File.Exists(filename))
            {
                return;
            }
            using (var binaryReader = new BinaryReader(FileManager.OpenRead(filename)))
            {
                var ident = binaryReader.ReadInt32();
                var version = binaryReader.ReadInt32();
                if (ident != 1330660425 || version != 6)
                {
                    throw new Exception("Invalid MDL file");
                }
                var scale = ReadVector3(binaryReader);
                var translate = ReadVector3(binaryReader);
                var boundingRadius = binaryReader.ReadSingle();
                var eyePosition = ReadVector3(binaryReader);
                var num_skins = binaryReader.ReadInt32();
                var skinWidth = binaryReader.ReadInt32();
                var skinHeight = binaryReader.ReadInt32();
                var num_verts = binaryReader.ReadInt32();
                var num_tris = binaryReader.ReadInt32();
                var num_frames = binaryReader.ReadInt32();
                if (num_frames < 1)
                {
                    return;
                }
                var synctype = binaryReader.ReadInt32();
                var flags = binaryReader.ReadInt32();
                var size = binaryReader.ReadSingle();
                var skins = new mdl_skin_t[num_skins];
                for (var i = 0; i < num_skins; i++)
                {
                    skins[i].group = binaryReader.ReadInt32();
                    skins[i].data = binaryReader.ReadBytes(skinWidth * skinHeight);
                }
                var texcoords = new mdl_texcoord_t[num_verts];
                for (var i = 0; i < num_verts; i++)
                {
                    texcoords[i].onseam = binaryReader.ReadInt32();
                    texcoords[i].s = binaryReader.ReadInt32();
                    texcoords[i].t = binaryReader.ReadInt32();
                }
                var triangles = new mdl_triangle_t[num_tris];
                for (var i = 0; i < num_tris; i++)
                {
                    triangles[i].facesfront = binaryReader.ReadInt32();
                    triangles[i].vertices = new int[3];
                    for (var j = 0; j < 3; j++)
                    {
                        triangles[i].vertices[j] = binaryReader.ReadInt32();
                    }
                }
                var frames = new mdl_simpleframe_t[num_frames];
                for (var i = 0; i < num_frames; i++)
                {
                    frames[i].type = binaryReader.ReadInt32();
                    frames[i].bboxmin = ReadQuakeVertex(binaryReader);
                    frames[i].bboxmax = ReadQuakeVertex(binaryReader);
                    frames[i].name = Encoding.ASCII.GetString(binaryReader.ReadBytes(16));
                    frames[i].vertices = new mdl_vertex_t[num_verts];
                    for (var j = 0; j < num_verts; j++)
                    {
                        frames[i].vertices[j] = ReadQuakeVertex(binaryReader);
                    }
                }
                Mesh = new Mesh();
                Mesh.subMeshCount = 1;
                Mesh.indexFormat = UnityEngine.Rendering.IndexFormat.UInt16;
                var meshVertices = new List<Vector3>();
                var meshTexcoords = new List<Vector2>();
                var meshTris = new List<int>();
                for (var o = 0; o < num_tris; o++)
                {
                    var triangle = triangles[o];
                    for (var v = 0; v < 3; v++)
                    {
                        var vertexIndex = triangle.vertices[v];
                        var vertex = frames[0].vertices[vertexIndex];
                        var s = (float)texcoords[vertexIndex].s;
                        var t = (float)texcoords[vertexIndex].t;
                        var onSeam = texcoords[vertexIndex].onseam;
                        var facesFront = triangle.facesfront;
                        s = (s + (onSeam > 0 && facesFront < 1 ? skinWidth * 0.5f : 0.0f) + 0.5f) / skinWidth;
                        t = (t + 0.5f) / skinHeight;
                        meshTexcoords.Add(new Vector2(s, t));
                        var x = scale[0] * vertex.v[0] + translate[0];
                        var y = scale[1] * vertex.v[1] + translate[1];
                        var z = scale[2] * vertex.v[2] + translate[2];
                        meshVertices.Add(new Vector3(x, y, z));
                    }
                    meshTris.Add(meshTris.Count);
                    meshTris.Add(meshTris.Count);
                    meshTris.Add(meshTris.Count);
                }
                meshTris.Reverse();
                Mesh.SetVertices(meshVertices);
                Mesh.SetUVs(0, meshTexcoords);
                Mesh.SetTriangles(meshTris, 0);
                Mesh.RecalculateNormals();
                Mesh.UploadMeshData(true);
                var skin = new Color32[skinWidth * skinHeight];
                for (var i = 0; i < skin.Length; ++i)
                {
                    skin[i][0] = MDLColorMap.Colormap[skins[0].data[i], 0];
                    skin[i][1] = MDLColorMap.Colormap[skins[0].data[i], 1];
                    skin[i][2] = MDLColorMap.Colormap[skins[0].data[i], 2];
                    skin[i][3] = 255;
                }
                skin = FlipPixelsVertically(skin, skinWidth, skinHeight);
                Texture2D = new Texture2D(skinWidth, skinHeight, UnityEngine.Experimental.Rendering.GraphicsFormat.R8G8B8A8_UNorm, UnityEngine.Experimental.Rendering.TextureCreationFlags.MipChain);
                Texture2D.SetPixels32(skin, 0);
                Texture2D.Apply(true, true);
                Texture2D.filterMode = World.Instance.UsePalettes ? FilterMode.Point : World.Instance.BilinearFilter ? FilterMode.Bilinear : FilterMode.Point;
                PaletteTexture2D = new Texture2D(skinWidth, skinHeight, UnityEngine.Experimental.Rendering.GraphicsFormat.R8_UNorm, UnityEngine.Experimental.Rendering.TextureCreationFlags.None);
                PaletteTexture2D.LoadRawTextureData(skins[0].data);
                PaletteTexture2D.Apply(true, true);
                PaletteTexture2D.filterMode = FilterMode.Point;
                Bitmap = new Bitmap();
                Bitmap.AcknexObject.SetFloat(PropertyName.X, 0f);
                Bitmap.AcknexObject.SetFloat(PropertyName.Y, 0f);
                Bitmap.AcknexObject.SetFloat(PropertyName.WIDTH, skinWidth);
                Bitmap.AcknexObject.SetFloat(PropertyName.HEIGHT, skinHeight);
                Bitmap.OriginalTexture = Bitmap.CropTexture = new TextureAndPalette(Texture2D, PaletteTexture2D);
            }
        }


        public void SetupTemplate()
        {
            if (AcknexObject.TryGetString(PropertyName.FILENAME, out var filename))
            {
                LoadFromFile(filename);
            }
        }

        public void SetupInstance()
        {

        }

        public Vector3 GetCenter()
        {
            return default;
        }

        public IAcknexObject GetRegion()
        {
            return null;
        }

        private mdl_vertex_t ReadQuakeVertex(BinaryReader binaryReader)
        {
            var vertex = new mdl_vertex_t();
            vertex.v = binaryReader.ReadBytes(3);
            vertex.normalIndex = binaryReader.ReadByte();
            return vertex;
        }

        private Vector3 ReadVector3(BinaryReader binaryReader)
        {
            return new Vector3(binaryReader.ReadSingle(), binaryReader.ReadSingle(), binaryReader.ReadSingle());
        }

        public void UpdateObject()
        {

        }

        public void Enable()
        {

        }

        public void Disable()
        {

        }

        public Model()
        {
            AcknexObject.Container = this;
        }
    }
}
