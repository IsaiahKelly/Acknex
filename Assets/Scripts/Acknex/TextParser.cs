using LibTessDotNet;
using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Text;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class TextParser
    {
        private IAcknexObjectContainer _openObject;

        private readonly List<string> _tokens = new List<string>();
        private readonly StringBuilder _tokenStringBuilder = new StringBuilder();
        private string _baseDir;
        private readonly bool _wmpContainsRegionsByName;

        public TextParser(string baseDir, bool wmpContainsRegionsByName)
        {
            _baseDir = baseDir;
            _wmpContainsRegionsByName = wmpContainsRegionsByName;
        }

        private static int ParseInt(string token)
        {
            return Convert.ToInt32(token);
        }

        private static float ParseFloat(string token)
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
                        if (_tokenStringBuilder.Length > 0)
                        {
                            _tokens.Add(_tokenStringBuilder.ToString());
                        }
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
                _tokenStringBuilder.Append(char.ToUpperInvariant((char)read));
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
                if (tokens.Count == 0)
                {
                    continue;
                }
                var handledCompilerDirective = HandleCompilerDirectives(ref canContinue, tokens, streamReader, ParseNextStatement);
                var keyword = tokens[0];
                if (_openObject != null && keyword == "}")
                {
                    switch (_openObject)
                    {
                        case Action gameAction:
                            gameAction.CloseAndCompile();
                            break;
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
                else if (_openObject is Thing || _openObject is Actor)
                {
                    switch (keyword)
                    {
                        case "TEXTURE":
                            _openObject.AcknexObject[keyword] = tokens[1];
                            break;
                        case "HEIGHT":
                            _openObject.AcknexObject[keyword] = ParseFloat(tokens[1]);
                            break;
                        case "ATTACH":
                            _openObject.AcknexObject[keyword] = tokens[1];
                            break;
                        case "FLAGS":
                            ParseList(keyword, _openObject, tokens);
                            break;
                        case "DIST":
                            _openObject.AcknexObject[keyword] = ParseFloat(tokens[1]);
                            break;
                        case "SPEED":
                            _openObject.AcknexObject[keyword] = ParseFloat(tokens[1]);
                            break;
                    }
                }
                else if (_openObject is Overlay overlay)
                {
                    switch (keyword)
                    {
                        case "LAYER":
                            overlay.AcknexObject[keyword] = ParseInt(tokens[1]);
                            break;
                        case "POS_X":
                            overlay.AcknexObject[keyword] = ParseFloat(tokens[1]);
                            break;
                        case "POS_Y":
                            overlay.AcknexObject[keyword] = ParseFloat(tokens[1]);
                            break;
                        case "SIZE_X":
                            overlay.AcknexObject[keyword] = ParseFloat(tokens[1]);
                            break;
                        case "SIZE_Y":
                            overlay.AcknexObject[keyword] = ParseFloat(tokens[1]);
                            break;
                        case "FLAGS":
                            ParseList(tokens[1], overlay, tokens);
                            break;
                        case "OVLYS":
                            overlay.AcknexObject[keyword] = tokens[1];
                            break;
                        case "MSPRITE":
                            overlay.AcknexObject[keyword] = tokens[1];
                            break;
                    }
                }
                else if (_openObject is Synonym synonym)
                {
                    switch (keyword)
                    {
                        case "TYPE":
                            synonym.AcknexObject[keyword] = tokens[1];
                            break;
                        case "DEFAULT":
                            synonym.AcknexObject[keyword] = tokens[1];
                            break;
                    }
                }
                else if (_openObject is Skill skill)
                {
                    switch (keyword)
                    {
                        case "VAL":
                            skill.AcknexObject[keyword] = ParseFloat(tokens[1]);
                            break;
                        case "MIN":
                            skill.AcknexObject[keyword] = ParseFloat(tokens[1]);
                            break;
                        case "MAX":
                            skill.AcknexObject[keyword] = ParseFloat(tokens[1]);
                            break;
                    }
                }
                else if (_openObject is Region region)
                {
                    switch (keyword)
                    {
                        case "FLOOR_HGT":
                            region.AcknexObject[keyword] = ParseFloat(tokens[1]);
                            break;
                        case "CEIL_HGT":
                            region.AcknexObject[keyword] = ParseFloat(tokens[1]);
                            break;
                        case "AMBIENT":
                            region.AcknexObject[keyword] = ParseFloat(tokens[1]);
                            break;
                        case "FLAGS":
                            ParseList(keyword, region, tokens);
                            break;
                        case "BELOW":
                            region.AcknexObject[keyword] = tokens[1];
                            break;
                        case "FLOOR_TEX":
                            region.AcknexObject[keyword] = tokens[1];
                            break;
                        case "CEIL_TEX":
                            region.AcknexObject[keyword] = tokens[1];
                            break;
                    }
                }
                else if (_openObject is Wall wall)
                {
                    switch (keyword)
                    {
                        case "TEXTURE":
                            wall.AcknexObject[keyword] = tokens[1];
                            break;
                        case "AMBIENT":
                            wall.AcknexObject[keyword] = ParseFloat(tokens[1]);
                            break;
                    }
                }
                else if (_openObject is Texture texture)
                {
                    switch (keyword)
                    {
                        case "SCALE_XY":
                            {
                                texture.AcknexObject["SCALE_X"] = ParseFloat(tokens[1]);
                                texture.AcknexObject["SCALE_Y"] = ParseFloat(tokens[2]);
                                break;
                            }
                        case "SCALE_X":
                            {
                                texture.AcknexObject[keyword] = ParseFloat(tokens[1]);
                                break;
                            }
                        case "SCALE_Y":
                            {
                                texture.AcknexObject[keyword] = ParseFloat(tokens[1]);
                                break;
                            }
                        case "BMAPS":
                            {
                                ParseList(keyword, texture, tokens);
                                break;
                            }
                        case "POS_X":
                            {
                                texture.AcknexObject[keyword] = ParseFloat(tokens[1]);
                                break;
                            }
                        case "POS_Y":
                            {
                                texture.AcknexObject[keyword] = ParseFloat(tokens[1]);
                                break;
                            }
                        case "FLAGS":
                            {
                                ParseList(keyword, texture, tokens);
                                break;
                            }
                        case "DELAY":
                        case "MIRROR":
                            {
                                ParseList(keyword, texture, tokens);
                                break;
                            }
                        case "SIDES":
                        case "CYCLES":
                            {
                                texture.AcknexObject[keyword] = ParseInt(tokens[1]);
                                break;
                            }
                        case "ATTACH":
                        {
                            texture.AcknexObject[keyword] = tokens[1];
                            break;
                        }
                    }
                }
                else
                {
                    switch (keyword)
                    {
                        case "VIDEO":
                        {
                            switch (tokens[1])
                            {
                                    case "320X200":
                                        World.Instance.Resolution1 = Resolution.Res320x200;
                                        break;
                                    case "X320X240":
                                        World.Instance.Resolution1 = Resolution.ResX320x240;
                                        break;
                                    case "X320X400":
                                        World.Instance.Resolution1 = Resolution.ResX320x400;
                                        break;
                                    case "S640X480":
                                        World.Instance.Resolution1 = Resolution.ResS640x480;
                                        break;
                                    case "S800X600":
                                        World.Instance.Resolution1 = Resolution.ResS800x600;
                                        break;
                            }
                            break;
                        }
                        case "AMBIENT":
                            World.Instance.AcknexObject.Set(keyword, ParseFloat(tokens[1]));
                            break;
                        case "LIGHT_ANGLE":
                            World.Instance.AcknexObject.Set(keyword, ParseFloat(tokens[1]));
                            break;
                        case "PATH":
                            World.Instance.Paths.Add(tokens[1]);
                            break;
                        case "MAPFILE":
                            World.Instance.MapFiles.Add(ParseDir(tokens[1]));
                            break;
                        case "INCLUDE":
                            ParseWDL(ParseDir(tokens[1]));
                            break;
                        case "STRING":
                            {
                                var name = tokens[1];
                                if (tokens.Count < 3)
                                {
                                    continue;
                                }
                                CreateString(name, tokens);
                                break;
                            }
                        case "ACTION":
                            {
                                var name = tokens[1];
                                CreateAction(name);
                                break;
                            }
                        case "SYNONYM":
                            {
                                var name = tokens[1];
                                _openObject = World.Instance.CreateSynonym(name);
                                break;
                            }
                        case "SKILL":
                            {
                                var name = tokens[1];
                                _openObject = World.Instance.CreateSkill(name, 0, 0, 0);
                                break;
                            }
                        case "REGION":
                            {
                                var name = tokens[1];
                                CreateRegionTemplate(name);
                                break;
                            }
                        case "WALL":
                            {
                                var name = tokens[1];
                                CreateWallTemplate(name);
                                continue;
                            }
                        case "BMAP":
                        case "OVLY":
                            {
                                var name = tokens[1];
                                CreateBitmap(name, tokens);
                                break;
                            }
                        case "TEXTURE":
                            {
                                var name = tokens[1];
                                CreateTexture(name);
                                break;
                            }
                        case "WAY":
                            {
                                var name = tokens[1];
                                CreateWayTemplate(name);
                                break;
                            }
                        case "THING":
                            {
                                var name = tokens[1];
                                CreateThingTemplate(name);
                                break;
                            }
                        case "ACTOR":
                            {
                                var name = tokens[1];
                                CreateActorTemplate(name);
                                break;
                            }
                        case "OVERLAY":
                        {
                            var name = tokens[1];
                            CreateOverlay(name);
                            break;
                        }
                        default:
                            {
                                if (!handledCompilerDirective)
                                {
                                    Debug.LogWarning("Unknown WDL keyword[" + keyword + "]");
                                }
                                break;
                            }
                    }
                }
            }
        }

        private static void CreateString(string name, List<string> tokens)
        {
            if (World.Instance.StringsByName.ContainsKey(name))
            {
                Debug.LogWarning("String [" + name + "] already registered.");
                return;
            }
            World.Instance.StringsByName.Add(name, tokens[2]);
        }

        private void CreateOverlay(string name)
        {
            if (World.Instance.OverlaysByName.ContainsKey(name))
            {
                Debug.LogWarning("Overlay [" + name + "] already registered.");
                return;
            }
            _openObject = World.Instance.CreateOverlay(name, true);
            _openObject.Disable();
            World.Instance.OverlaysByName.Add(name, (Overlay)_openObject);
        }

        private void CreateActorTemplate(string name)
        {
            if (World.Instance.ActorsByName.ContainsKey(name))
            {
                Debug.LogWarning("Actor [" + name + "] already registered.");
                return;
            }
            _openObject = World.Instance.CreateActor(name, true);
            _openObject.Disable();
            World.Instance.ActorsByName.Add(name, (Actor)_openObject);
        }

        private void CreateThingTemplate(string name)
        {
            if (World.Instance.ThingsByName.ContainsKey(name))
            {
                Debug.LogWarning("Thing [" + name + "] already registered.");
                return;
            }
            _openObject = World.Instance.CreateThing(name, true);
            _openObject.Disable();
            World.Instance.ThingsByName.Add(name, (Thing)_openObject);
        }

        private void CreateWayTemplate(string name)
        {
            if (World.Instance.WaysByName.ContainsKey(name))
            {
                Debug.LogWarning("Way [" + name + "] already registered.");
                return;
            }
            _openObject = World.Instance.CreateWay(name, true);
            _openObject.Disable();
            World.Instance.WaysByName.Add(name, (Way)_openObject);
        }

        private void CreateTexture(string name)
        {
            if (World.Instance.TexturesByName.ContainsKey(name))
            {
                Debug.LogWarning("Texture [" + name + "] already registered.");
                return;
            }
            _openObject = new Texture();
            ((Texture)_openObject).AcknexObject["NAME"] = name;
            World.Instance.TexturesByName.Add(name, (Texture)_openObject);
        }

        private void CreateBitmap(string name, List<string> tokens)
        {
            if (World.Instance.BitmapsByName.ContainsKey(name))
            {
                Debug.LogWarning("Bitmap [" + name + "] already registered.");
                return;
            }
            var filename = ParseDir(tokens[2]);
            var bitmap = new Bitmap();
            bitmap.AcknexObject["FILENAME"] = filename;
            bitmap.AcknexObject["NAME"] = name;
            if (tokens.Count > 4)
            {
                bitmap.AcknexObject["X"] = ParseFloat(tokens[3]);
                bitmap.AcknexObject["Y"] = ParseFloat(tokens[4]);
                bitmap.AcknexObject["DX"] = ParseFloat(tokens[5]);
                bitmap.AcknexObject["DY"] = ParseFloat(tokens[6]);
            }
            World.Instance.BitmapsByName.Add(name, bitmap);
            bitmap.UpdateObject();
        }

        private void CreateWallTemplate(string name)
        {
            if (World.Instance.WallsByName.ContainsKey(name))
            {
                Debug.LogWarning("Wall [" + name + "] already registered.");
                return;
            }
            _openObject = World.Instance.CreateWall(name, true);
            _openObject.Disable();
            World.Instance.WallsByName.Add(name, (Wall)_openObject);
        }

        private void CreateRegionTemplate(string name)
        {
            if (World.Instance.RegionsByName.ContainsKey(name))
            {
                Debug.LogWarning("Region [" + name + "] already registered.");
                return;
            }
            _openObject = World.Instance.CreateRegion(name, true);
            _openObject.Disable();
            World.Instance.RegionsByName.Add(name, (Region)_openObject);
            if (_wmpContainsRegionsByName)
            {
                World.Instance.RegionsByIndex.Add((Region)_openObject);
            }
        }

        private void CreateAction(string name)
        {
            if (World.Instance.ActionsByName.ContainsKey(name))
            {
                Debug.LogWarning("Action [" + name + "] already registered.");
                return;
            }
            _openObject = World.Instance.gameObject.AddComponent<Action>();
            _openObject.Disable();
            World.Instance.ActionsByName.Add(name, (Action)_openObject);
        }

        private static void ParseList(string propertyName, IAcknexObjectContainer container, List<string> tokens)
        {
            if (container.AcknexObject.TryGet(propertyName, out List<string> list))
            {
                list.AddRange(tokens.Skip(1).Take(tokens.Count - 1));
            }
            else
            {
                container.AcknexObject[propertyName] = tokens.Skip(1).Take(tokens.Count - 1).ToList();
            }
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

        private string ParseDir(string token)
        {
            token = token.Substring(1, token.Length - 2);
            var file = $"{_baseDir}/{token}";
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
                var contourVertices = new List<ContourVertex>();
                var regionWalls = new RegionWalls();
                while (!streamReader.EndOfStream)
                {
                    var tokens = ParseNextStatement(streamReader);
                    if (tokens.Count == 0)
                    {
                        continue;
                    }
                    var keyword = tokens[0];
                    switch (keyword)
                    {
                        case "PLAYER_START":
                            {
                                World.Instance.UpdateSkillValue("PLAYER_X", ParseFloat(tokens[1]));
                                World.Instance.UpdateSkillValue("PLAYER_Y", ParseFloat(tokens[2]));
                                World.Instance.UpdateSkillValue("PLAYER_ANGLE", Mathf.Deg2Rad * ParseFloat(tokens[3]));
                                Player.Instance.AcknexObject["REGION"] = ParseRegionIndex(tokens[4]);
                                break;
                            }
                        case "THING":
                        case "ACTOR":
                            {
                                var thing = (IAcknexObjectContainer)(keyword == "ACTOR" ? World.Instance.CreateActor(tokens[1]) : World.Instance.CreateThing(tokens[1]));
                                thing.AcknexObject["X"] = ParseFloat(tokens[2]);
                                thing.AcknexObject["Y"] = ParseFloat(tokens[3]);
                                thing.AcknexObject["ANGLE"] = Mathf.Deg2Rad * ParseFloat(tokens[4]);
                                thing.AcknexObject["REGION"] = ParseRegionIndex(tokens[5]);
                                break;
                            }
                        case "VERTEX":
                            {
                                var x = ParseFloat(tokens[1]);
                                var y = ParseFloat(tokens[2]);
                                var z = ParseFloat(tokens[3]);
                                contourVertices.Add(new ContourVertex(new Vec3(x, y, z)));
                                break;
                            }
                        case "REGION":
                            {
                                var regionName = tokens[1];
                                var region = World.Instance.CreateRegion(regionName);
                                region.AcknexObject["FLOOR_HGT"] = ParseFloat(tokens[2]);
                                region.AcknexObject["CEIL_HGT"] = ParseFloat(tokens[3]);
                                if (!_wmpContainsRegionsByName)
                                {
                                    World.Instance.RegionsByIndex.Add(region);
                                }
                                break;
                            }
                        case "WALL":
                            {
                                var wallName = tokens[1];
                                var wall = World.Instance.CreateWall(wallName);
                                wall.AcknexObject["VERTEX1"] = Convert.ToInt32(tokens[3]);
                                wall.AcknexObject["VERTEX2"] = Convert.ToInt32(tokens[2]);
                                wall.AcknexObject["REGION1"] = ParseRegionIndex(tokens[4]);
                                wall.AcknexObject["REGION2"] = ParseRegionIndex(tokens[5]);
                                wall.AcknexObject["OFFSET_X"] = ParseFloat(tokens[6]);
                                wall.AcknexObject["OFFSET_Y"] = ParseFloat(tokens[7]); ;
                                wall.transform.SetParent(World.Instance.transform, false);
                                regionWalls.GetWallsList(wall.AcknexObject.Get<int>("REGION1")).Add(wall);
                                regionWalls.GetWallsList(wall.AcknexObject.Get<int>("REGION2")).Add(wall);
                                World.Instance.Walls.Add(wall);
                                break;
                            }
                        case "WAY":
                            {
                                var wayName = tokens[1];
                                var way = World.Instance.CreateWay(wayName);
                                for (var i = 2; i < tokens.Count - 2; i += 2)
                                {
                                    var point = new Vector2(ParseFloat(tokens[i]), ParseFloat(tokens[i + 1]));
                                    way.Points.Add(point);
                                }
                                break;
                            }
                    }
                }
                World.BuildRegionsAndWalls(regionWalls, contourVertices);
            }
        }

        private int ParseRegionIndex(string value)
        {
            if (!_wmpContainsRegionsByName)
            {
                return int.Parse(value);
            }
            if (World.Instance.RegionsByName.TryGetValue(value, out var region))
            {
                return World.Instance.RegionsByIndex.IndexOf(region);
            }
            return 0;
        }
    }
}