using LibTessDotNet;
using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Text;
using UnityEngine;

namespace Acknex
{
    public class TextParser
    {
        private IAcknexObject _openObject;

        private readonly List<string> _tokens = new List<string>();
        private readonly StringBuilder _tokenStringBuilder = new StringBuilder();

        private static int ParseInt(string token)
        {
            return Convert.ToInt32(token);
        }

        private static float ParseSingle(string token)
        {
            return Convert.ToSingle(token, CultureInfo.InvariantCulture);
        }

        public List<string> ParseStatement(StreamReader streamReader, out bool isLabel)
        {
            isLabel = false;
            _tokens.Clear();
            removeSpaces:
            _tokenStringBuilder.Clear();
            var read = 0;
            while (!streamReader.EndOfStream)
            {
                read = streamReader.Read();
                if (read != '\r' && read != '\n' && read != ' ' && read != '\t' && read != ',')
                {
                    break;
                }
            }
            while (!streamReader.EndOfStream)
            {
                switch (read)
                {
                    case ';':
                    case ':':
                        if (_tokenStringBuilder.Length > 0)
                        {
                            _tokens.Add(_tokenStringBuilder.ToString());
                        }
                        isLabel = read == ':';
                        return _tokens;
                    case '{':
                    case '}':
                        _tokens.Add(((char)read).ToString());
                        return _tokens;
                }
                if (read == '"')
                {
                    do
                    {
                        _tokenStringBuilder.Append((char)read);
                        read = streamReader.Read();
                    } while (read > -1 && read != '"');
                    _tokenStringBuilder.Append('"');
                    _tokens.Add(_tokenStringBuilder.ToString());
                    goto removeSpaces;
                }
                switch (read)
                {
                    case '#':
                    case '/' when streamReader.Peek() == '/':
                    {
                        while (read > -1 && read != '\n')
                        {
                            read = streamReader.Read();
                        }
                        return _tokens;
                    }
                    case '/' when streamReader.Peek() == '*':
                    {
                        while (read > -1 && !(read == '*' && streamReader.Peek() == '/'))
                        {
                            read = streamReader.Read();
                        }
                        streamReader.Read();
                        return _tokens;
                    }
                }
                switch (read)
                {
                    case '\r':
                    case '\n':
                    case ' ':
                    case '\t':
                    case ',':
                    case ';':
                    case '{':
                    case '}':
                    case ':':
                        _tokens.Add(_tokenStringBuilder.ToString());
                        goto removeSpaces;
                }
                _tokenStringBuilder.Append(Char.ToUpperInvariant((char)read));
                read = streamReader.Read();
            }
            return _tokens;
        }

        public void ParseWDL(string wdlFilename)
        {
            if (!File.Exists(wdlFilename))
            {
                return;
            }
            using (var streamReader = new StreamReader(File.OpenRead(wdlFilename)))
            {
                ParseStatements(streamReader);
            }
        }

        //todo: this needs to be put into a stack, as one compiler IF might be inside other, so replacing the canContinue param with the stack
        public static bool HandleCompilerDirectives(
            ref bool canContinue,
            List<string> tokens,
            StreamReader streamReader,
            Func<StreamReader, List<string>> parseNextStatement)
        {
            var keyword = tokens[0];
            switch (keyword)
            {
                case "DEFINE":
                    {
                        var a = tokens[1];
                        World.Instance.DefinitionsByName.Add(a);
                        return true;
                    }
                case "UNDEF":
                    {
                        var a = tokens[1];
                        World.Instance.DefinitionsByName.Remove(a);
                        return true;
                    }
                case "IFDEF":
                case "IFNDEF":
                    {
                        var a = tokens[1];
                        canContinue = keyword == "IFDEF" && World.Instance.DefinitionsByName.Contains(a);
                        return true;
                    }
                case "IFELSE":
                    {
                        canContinue = !canContinue;
                        return true;
                    }
                case "ENDIF":
                    {
                        canContinue = true;
                        return true;
                    }
            }
            return false;
        }

        private void ParseStatements(StreamReader streamReader)
        {
            var canContinue = true;
            while (!streamReader.EndOfStream)
            {
                var tokens = ParseNextStatement(streamReader);
                //Debug.Log(String.Join("|", tokens));
                if (tokens.Count == 0)
                {
                    continue;
                }
                var handledCompilerDirective = HandleCompilerDirectives(ref canContinue, tokens, streamReader, ParseNextStatement);
                var keyword = tokens[0];
                if (_openObject != null && keyword == "}")
                {
                    if (_openObject is Action gameAction)
                    {
                        gameAction.CloseAndCompile();
                    }
                    _openObject = null;
                }
                if (!canContinue)
                {
                    continue;
                }
                if (_openObject is Action action)
                {
                    action.ParseAction(tokens, streamReader, ParseNextStatement);
                }
                else if (_openObject is Synonym synonym)
                {
                    switch (keyword)
                    {
                        case "TYPE":
                            synonym.TYPE = tokens[1];
                            break;
                        case "DEFAULT":
                            synonym.DEFAULT = tokens[1];
                            break;
                    }
                }
                else if (_openObject is Skill skill)
                {
                    switch (keyword)
                    {
                        case "VAL":
                            skill.VAL = ParseSingle(tokens[1]);
                            break;
                        case "MIN":
                            skill.MIN = ParseSingle(tokens[1]);
                            break;
                        case "MAX":
                            skill.MAX = ParseSingle(tokens[1]);
                            break;
                    }
                }
                else if (_openObject is Region region)
                {
                    switch (keyword)
                    {
                        case "FLOOR_HGT":
                            region.FLOOR_HGT = ParseSingle(tokens[1]);
                            break;
                        case "CEIL_HGT":
                            region.CEIL_HGT = ParseSingle(tokens[1]);
                            break;
                        case "AMBIENT":
                            region.AMBIENT = ParseSingle(tokens[1]);
                            break;
                        case "FLAGS":
                            region.FLAGS = ParseFlags(tokens); //todo: remove linq
                            break;
                        case "BELOW":
                            region.BELOW = tokens[1];
                            break;
                        case "FLOOR_TEX":
                            region.FLOOR_TEX = tokens[1];
                            break;
                        case "CEIL_TEX":
                            region.CEIL_TEX = tokens[1];
                            break;
                    }
                }
                else if (_openObject is Wall wall)
                {
                    switch (keyword)
                    {
                        case "TEXTURE":
                            wall.TEXTURE = tokens[1];
                            break;
                    }
                }
                else if (_openObject is Texture texture)
                {
                    switch (keyword)
                    {
                        case "SCALE_XY":
                            {
                                texture.SCALE_X = ParseSingle(tokens[1]);
                                texture.SCALE_Y = ParseSingle(tokens[2]);
                                break;
                            }
                        case "BMAPS":
                            {
                                texture.BMAPS = new List<string>();
                                for (var i = 1; i < tokens.Count; i++)
                                {
                                    texture.BMAPS.Add(tokens[i]);
                                }

                                break;
                            }
                        case "POS_X":
                            {
                                texture.POS_X = ParseInt(tokens[1]);
                                break;
                            }
                        case "POS_Y":
                            {
                                texture.POS_Y = ParseInt(tokens[1]);
                                break;
                            }
                        case "FLAGS":
                        {
                            texture.FLAGS = ParseFlags(tokens); //todo: remove linq
                            break;
                        }
                    }
                }
                else
                {
                    switch (keyword)
                    {
                        case "PATH":
                            World.Instance.Paths.Add(tokens[1]);
                            break;
                        case "LIGHT_ANGLE":
                            GameLight.LIGHT_ANGLE = ParseSingle(tokens[1]);
                            break;
                        case "MAPFILE":
                            World.Instance.MapFiles.Add(ParseDir(tokens[1]));
                            break;
                        case "CLIP_DIST":
                            GameCamera.CLIP_DIST = ParseSingle(tokens[1]);
                            break;
                        case "INCLUDE":
                            ParseWDL(ParseDir(tokens[1]));
                            break;
                        case "STRING":
                        {
                            var name = tokens[1];
                            //todo: remove
                            if (tokens.Count < 3)
                            {
                                continue;
                            }
                            if (World.Instance.StringsByName.ContainsKey(name))
                            {
                                Debug.LogWarning("String [" + name + "] already registered.");
                                continue;
                            }
                            World.Instance.StringsByName.Add(name, tokens[2]);
                            break;
                        }
                        case "ACTION":
                            {
                                var name = tokens[1];
                                if (World.Instance.ActionsByName.ContainsKey(name))
                                {
                                    Debug.LogWarning("Action [" + name + "] already registered.");
                                    continue;
                                }
                                _openObject = World.Instance.gameObject.AddComponent<Action>();
                                World.Instance.ActionsByName.Add(name, (Action)_openObject);
                                break;
                            }
                        case "SYNONYM":
                            {
                                var name = tokens[1];
                                if (World.Instance.SynonymsByName.ContainsKey(name))
                                {
                                    Debug.LogWarning("SYNONYM [" + name + "] already registered.");
                                    continue;
                                }
                                _openObject = new Synonym();
                                World.Instance.SynonymsByName.Add(name, (Synonym)_openObject);
                                break;
                            }
                        case "SKILL":
                            {
                                var name = tokens[1];
                                if (World.Instance.SkillsByName.ContainsKey(name))
                                {
                                    Debug.LogWarning("Skill [" + name + "] already registered.");
                                    continue;
                                }
                                _openObject = new Skill();
                                World.Instance.SkillsByName.Add(name, (Skill)_openObject);
                                break;
                            }
                        case "REGION":
                            {
                                var name = tokens[1];
                                _openObject = World.Instance.CreateRegion(name + "_DEFINITION");
                                World.Instance.RegionsByName.Add(name, (Region)_openObject);
                                break;
                            }
                        case "WALL":
                            {
                                var name = tokens[1];
                                _openObject = World.Instance.CreateWall(name + "_DEFINITION");
                                World.Instance.WallsByName.Add(name, (Wall)_openObject);
                                break;
                            }
                        case "BMAP":
                            {
                                var name = tokens[1];
                                if (World.Instance.BitmapsByName.ContainsKey(name))
                                {
                                    Debug.LogWarning("Bitmap [" + name + "] already registered.");
                                    continue;
                                }
                                var filename = ParseDir(tokens[2]);
                                //filename = $"{PathUtils.GetFileDirectory(importedAsset)}/{filename}";
                                var bitmap = new Bitmap() { Keyword = name, Filename = filename };
                                if (tokens.Count > 4)
                                {
                                    bitmap.x = ParseInt(tokens[3]);
                                    bitmap.y = ParseInt(tokens[4]);
                                    bitmap.dx = ParseInt(tokens[5]);
                                    bitmap.dy = ParseInt(tokens[6]);
                                }

                                World.Instance.BitmapsByName.Add(name, bitmap);
                                bitmap.Setup();
                                break;
                            }
                        case "TEXTURE":
                            {
                                var name = tokens[1];
                                if (World.Instance.TexturesByName.ContainsKey(name))
                                {
                                    Debug.LogWarning("Texture [" + name + "] already registered.");
                                    continue;
                                }
                                _openObject = new Texture();
                                ((Texture)_openObject).NAME = name;
                                World.Instance.TexturesByName.Add(name, (Texture)_openObject);
                                break;
                            }
                        case "WAY":
                        {
                            var name = tokens[1];
                            if (World.Instance.WaysByName.ContainsKey(name))
                            {
                                Debug.LogWarning("Way [" + name + "] already registered.");
                                continue;
                            }
                            _openObject = World.Instance.CreateWay(name);
                            World.Instance.WaysByName.Add(name, (Way)_openObject);
                            break;
                        }
                        default:
                            {
                                if (!handledCompilerDirective)
                                {
                                    Debug.LogError("Unknown WDL keyword[" + keyword + "]");//(" + string.Join("|", tokens) + ")");
                                }
                                break;
                            }
                    }
                }
            }
        }

        //todo: remove linq?
        private static List<string> ParseFlags(List<string> tokens)
        {
            return tokens.Skip(1).Take(tokens.Count - 1).ToList();
        }

        private List<string> ParseNextStatement(StreamReader textReader)
        {
            parseNew:
            var tokens = ParseStatement(textReader, out var isNewLabel);
            if (tokens.Count == 0 && !textReader.EndOfStream)
            {
                goto parseNew;
            }
            if (isNewLabel)
            {
                tokens.Insert(0, "LABEL");
            }
            return tokens;
        }

        private static string ParseDir(string token)
        {
            //token = token.TrimStart(new char[] { '<' }).TrimEnd(new char[] { '>' });
            token = token.Substring(1, token.Length - 2);
            var file = $"Assets/Data/{token}";
            if (File.Exists(file))
            {
                return file;
            }
            return null;
        }

        public void ParseWMP(string wmpFilename)
        {
            if (!File.Exists(wmpFilename))
            {
                return;
            }

            using (var streamReader = new StreamReader(File.OpenRead(wmpFilename)))
            {
                var vertices = new List<ContourVertex>();
                var regionWalls = new RegionWalls();
                var vertexCount = 0;
                while (!streamReader.EndOfStream)
                {
                    var tokens = ParseNextStatement(streamReader);
                    //Debug.Log(String.Join("|", tokens));
                    if (tokens.Count == 0)
                    {
                        continue;
                    }
                    switch (tokens[0])
                    {
                        case "PLAYER_START":
                            {
                                var x = ParseSingle(tokens[1]);
                                var y = ParseSingle(tokens[2]);
                                var angle = ParseSingle(tokens[3]);
                                var region = ParseInt(tokens[4]);
                                var playerRegion = World.Instance.RegionsByIndex[region];
                                GamePlayer.Instance.transform.SetPositionAndRotation(new Vector3(x, playerRegion.FLOOR_HGT, y), Quaternion.Euler(0f, angle * Mathf.Rad2Deg, 0f));
                                break;
                            }
                        case "VERTEX":
                            {
                                var x = ParseSingle(tokens[1]);
                                var y = ParseSingle(tokens[2]);
                                var z = ParseSingle(tokens[3]);
                                vertices.Add(new ContourVertex(new Vec3(x, y, z)));
                                break;
                            }
                        case "REGION":
                            {
                                var regionName = tokens[1];
                                var region = World.Instance.CreateRegion(regionName);
                                region.NAME = regionName;
                                region.FLOOR_HGT = ParseSingle(tokens[2]);
                                region.CEIL_HGT = ParseSingle(tokens[3]);
                                World.Instance.RegionsByIndex.Add(region);
                                //Debug.Log("Region WMP:" + regionName);
                                break;
                            }
                        case "WALL":
                            {
                                var wallName = tokens[1];
                                var wallGameObject = new GameObject(wallName);
                                var wall = wallGameObject.AddComponent<Wall>();
                                wall.NAME = wallName;
                                wall.VERTEX1 = Convert.ToInt32(tokens[3]);
                                wall.VERTEX2 = Convert.ToInt32(tokens[2]);
                                wall.REGION1 = Convert.ToInt32(tokens[4]);
                                wall.REGION2 = Convert.ToInt32(tokens[5]);
                                wall.OFFSETX = ParseSingle(tokens[6]);
                                wall.OFFSETY = ParseSingle(tokens[7]); ;
                                wall.transform.SetParent(World.Instance.transform, false);
                                regionWalls.GetWallsList(wall.REGION1).Add(wall);
                                regionWalls.GetWallsList(wall.REGION2).Add(wall);
                                World.Instance.Walls.Add(wall);
                                break;
                            }
                        case "WAY":
                        {
                            var wayName = tokens[1];
                            var way = World.Instance.CreateWay(wayName);
                            for (var i = 2; i < tokens.Count-2; i+=2)
                            {
                                var point = new Vector2(ParseSingle(tokens[i]), ParseSingle(tokens[i + 1]));
                                way.Points.Add(point);
                            }
                            //todo: add to list?
                            break;
                        }
                    }
                }

                var contouredRegions = new ContouredRegions();
                foreach (var kvp in regionWalls)
                {
                    foreach (var wall in kvp.Value)
                    {
                        wall.processed = false;
                    }
                    foreach (var wall in kvp.Value)
                    {
                        if (wall.processed)
                        {
                            continue;
                        }
                        var rightRegion = contouredRegions.GetContouredRegion(kvp.Key);
                        var contourVertices = rightRegion.GetNew();
                        World.Instance.ProcessWall(contourVertices, vertices, wall, kvp, ref vertexCount, wall.REGION2 == kvp.Key);
                    }
                }
                foreach (var kvp in contouredRegions)
                {
                    var meshIndex = 0;
                    var allVertices = new List<Vector3>();
                    var allUVs = new List<Vector2>();
                    var allTriangles = new Dictionary<int, List<int>>();
                    var region = World.Instance.RegionsByIndex[kvp.Key];
                    region.ContouredRegion = kvp.Value;
                    World.Instance.BuildFloor(kvp.Value, region, allVertices, allUVs, allTriangles, ref meshIndex);
                    World.Instance.BuildFloor(kvp.Value, region, allVertices, allUVs, allTriangles, ref meshIndex, true);
                    World.Instance.BuildFloorMesh(allVertices, allUVs, allTriangles, region.gameObject, region.CeilTexture, region.FloorTexture);
                }
                foreach (var wall in World.Instance.Walls)
                {
                    var allVertices = new List<Vector3>();
                    var allUVs = new List<Vector2>();
                    var allTriangles = new Dictionary<string, List<int>>();
                    var rightRegion = World.Instance.RegionsByIndex[wall.REGION1];
                    var leftRegion = World.Instance.RegionsByIndex[wall.REGION2];
                    World.Instance.BuildWall(wall, rightRegion, leftRegion, vertices, allVertices, allUVs, allTriangles);
                    World.Instance.BuildWallMesh(allVertices, allUVs, allTriangles, wall.gameObject);
                }
            }
        }
    }
}