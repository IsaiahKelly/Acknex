using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Text;
using Acknex.Interfaces;
using UnityEngine;
using Resolution = Acknex.Interfaces.Resolution;

namespace Acknex
{
    public class TextParser
    {

        public readonly Dictionary<string, string> DefinitionsByName = new Dictionary<string, string>();

        private IAcknexObject _openObject;
        private readonly List<string> _tokens = new List<string>();
        private readonly StringBuilder _tokenStringBuilder = new StringBuilder();
        private List<string> _mapFiles = new List<string>();
        private readonly string _baseDir;
        private readonly bool _wmpContainsRegionsByName;
        private readonly IAcknexWorld _world;

        public TextParser(IAcknexWorld world, string baseDir, bool wmpContainsRegionsByName)
        {
            _world = world;
            _baseDir = baseDir;
            _wmpContainsRegionsByName = wmpContainsRegionsByName;
        }

        private float ParseFloat(string token)
        {
            if (DefinitionsByName.TryGetValue(token, out var value))
            {
                return Convert.ToSingle(value, CultureInfo.InvariantCulture);
            }
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
                if (read != '\0' && read != '\r' && read != '\n' && read != ' ' && read != '\t' && read != ',')
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
                    case '\0':
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
            if (_tokenStringBuilder.Length > 0)
            {
                _tokens.Add(_tokenStringBuilder.ToString());
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

        public bool HandleCompilerDirectives(
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
                        if (tokens.Count > 2)
                        {
                            if (DefinitionsByName.TryGetValue(tokens[2], out var defineValue))
                            {
                                DefinitionsByName[a] = defineValue;
                            }
                            else
                            {
                                DefinitionsByName[a] = tokens[2];
                            }
                        }
                        else
                        {
                            DefinitionsByName[a] = null;
                        }
                        return true;
                    }
                case "UNDEF":
                    {
                        var a = tokens[1];
                        DefinitionsByName.Remove(a);
                        return true;
                    }
                case "IFDEF":
                case "IFNDEF":
                    {
                        var a = tokens[1];
                        canContinue = keyword == "IFDEF" && DefinitionsByName.ContainsKey(a);
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
                    _world.PostSetupObjectTemplate(_openObject);
                    _openObject = null;
                }
                if (!canContinue)
                {
                    continue;
                }
                if (_openObject?.Container is Action action)
                {
                    action.ParseAction(tokens, streamReader, ParseNextStatement);
                }
                else if (_openObject?.Container is Thing || _openObject?.Container is Actor)
                {
                    switch (keyword)
                    {
                        case "TEXTURE":
                            _openObject.SetString(keyword, tokens[1]);
                            break;
                        case "HEIGHT":
                            _openObject.SetFloat(keyword, ParseFloat(tokens[1]));
                            break;
                        case "ATTACH":
                            _openObject.SetString(keyword, tokens[1]);
                            break;
                        case "FLAGS":
                            ParseStringList(keyword, _openObject, tokens);
                            break;
                        case "DIST":
                            _openObject.SetFloat(keyword, ParseFloat(tokens[1]));
                            break;
                        case "SPEED":
                            _openObject.SetFloat(keyword, ParseFloat(tokens[1]));
                            break;
                    }
                }
                else if (_openObject?.Container is Overlay overlay)
                {
                    switch (keyword)
                    {
                        case "LAYER":
                            overlay.AcknexObject.SetFloat(keyword, ParseFloat(tokens[1]));
                            break;
                        case "POS_X":
                            overlay.AcknexObject.SetFloat(keyword, ParseFloat(tokens[1]));
                            break;
                        case "POS_Y":
                            overlay.AcknexObject.SetFloat(keyword, ParseFloat(tokens[1]));
                            break;
                        case "SIZE_X":
                            overlay.AcknexObject.SetFloat(keyword, ParseFloat(tokens[1]));
                            break;
                        case "SIZE_Y":
                            overlay.AcknexObject.SetFloat(keyword, ParseFloat(tokens[1]));
                            break;
                        case "FLAGS":
                            ParseStringList(tokens[1], _openObject, tokens);
                            break;
                        case "OVLYS":
                            overlay.AcknexObject.SetString(keyword, tokens[1]);
                            break;
                        case "MSPRITE":
                            overlay.AcknexObject.SetString(keyword, tokens[1]);
                            break;
                    }
                }
                else if (_openObject?.Container is Synonym synonym)
                {
                    switch (keyword)
                    {
                        case "TYPE":
                            synonym.AcknexObject.SetString(keyword, tokens[1]);
                            break;
                        case "DEFAULT":
                            synonym.AcknexObject.SetString(keyword, tokens[1]);
                            break;
                    }
                }
                else if (_openObject?.Container is Skill skill)
                {
                    switch (keyword)
                    {
                        case "VAL":
                            skill.AcknexObject.SetFloat(keyword, ParseFloat(tokens[1]));
                            break;
                        case "MIN":
                            skill.AcknexObject.SetFloat(keyword, ParseFloat(tokens[1]));
                            break;
                        case "MAX":
                            skill.AcknexObject.SetFloat(keyword, ParseFloat(tokens[1]));
                            break;
                    }
                }
                else if (_openObject?.Container is Region region)
                {
                    switch (keyword)
                    {
                        case "FLOOR_HGT":
                            region.AcknexObject.SetFloat(keyword, ParseFloat(tokens[1]));
                            break;
                        case "CEIL_HGT":
                            region.AcknexObject.SetFloat(keyword, ParseFloat(tokens[1]));
                            break;
                        case "AMBIENT":
                            region.AcknexObject.SetFloat(keyword, ParseFloat(tokens[1]));
                            break;
                        case "FLAGS":
                            ParseStringList(keyword, _openObject, tokens);
                            break;
                        case "BELOW":
                            region.AcknexObject.SetString(keyword, tokens[1]);
                            break;
                        case "FLOOR_TEX":
                            region.AcknexObject.SetString(keyword, tokens[1]);
                            break;
                        case "CEIL_TEX":
                            region.AcknexObject.SetString(keyword, tokens[1]);
                            break;
                    }
                }
                else if (_openObject?.Container is Wall wall)
                {
                    switch (keyword)
                    {
                        case "TEXTURE":
                            wall.AcknexObject.SetString(keyword, tokens[1]);
                            break;
                        case "AMBIENT":
                            wall.AcknexObject.SetFloat(keyword, ParseFloat(tokens[1]));
                            break;
                        case "FLAGS":
                            ParseStringList(keyword, _openObject, tokens);
                            break;
                    }
                }
                else if (_openObject?.Container is Texture texture)
                {
                    switch (keyword)
                    {
                        case "SCALE_XY":
                            {
                                texture.AcknexObject.SetFloat("SCALE_X", ParseFloat(tokens[1]));
                                texture.AcknexObject.SetFloat("SCALE_Y", ParseFloat(tokens[2]));
                                break;
                            }
                        case "SCALE_X":
                            {
                                texture.AcknexObject.SetFloat(keyword, ParseFloat(tokens[1]));
                                break;
                            }
                        case "SCALE_Y":
                            {
                                texture.AcknexObject.SetFloat(keyword, ParseFloat(tokens[1]));
                                break;
                            }
                        case "BMAPS":
                            {
                                ParseStringList(keyword, _openObject, tokens);
                                break;
                            }
                        case "POS_X":
                            {
                                texture.AcknexObject.SetFloat(keyword, ParseFloat(tokens[1]));
                                break;
                            }
                        case "POS_Y":
                            {
                                texture.AcknexObject.SetFloat(keyword, ParseFloat(tokens[1]));
                                break;
                            }
                        case "FLAGS":
                            {
                                ParseStringList(keyword, _openObject, tokens);
                                break;
                            }
                        case "DELAY":
                        case "MIRROR":
                            {
                                ParseIntList(keyword, texture, tokens);
                                break;
                            }
                        case "SIDES":
                        case "CYCLES":
                            {
                                texture.AcknexObject.SetFloat(keyword, ParseFloat(tokens[1]));
                                break;
                            }
                        case "ATTACH":
                            {
                                texture.AcknexObject.SetString(keyword, tokens[1]);
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
                                        _world.GameResolution = Resolution.Res320x200;
                                        break;
                                    case "X320X240":
                                        _world.GameResolution = Resolution.ResX320x240;
                                        break;
                                    case "X320X400":
                                        _world.GameResolution = Resolution.ResX320x400;
                                        break;
                                    case "S640X480":
                                        _world.GameResolution = Resolution.ResS640x480;
                                        break;
                                    case "S800X600":
                                        _world.GameResolution = Resolution.ResS800x600;
                                        break;
                                }
                                break;
                            }
                        case "AMBIENT":
                            _world.AcknexObject.SetFloat(keyword, ParseFloat(tokens[1]));
                            break;
                        case "LIGHT_ANGLE":
                            _world.AcknexObject.SetFloat(keyword, ParseFloat(tokens[1]));
                            break;
                        case "PATH":
                            _world.AddPath(tokens[1]);
                            break;
                        case "MAPFILE":
                            _mapFiles.Add(ParseDir(tokens[1]));
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
                                _world.AddString(name, tokens[1]);
                                break;
                            }
                        case "ACTION":
                            {
                                _openObject = _world.CreateObjectTemplate(ObjectType.Action, tokens[1]);
                                break;
                            }
                        case "SYNONYM":
                            {
                                _openObject = _world.CreateObjectTemplate(ObjectType.Synonym, tokens[1]);
                                break;
                            }
                        case "SKILL":
                            {
                                _openObject = _world.CreateObjectTemplate(ObjectType.Skill, tokens[1]);
                                break;
                            }
                        case "REGION":
                            {
                                _openObject = _world.CreateObjectTemplate(ObjectType.Region, tokens[1]);
                                break;
                            }
                        case "WALL":
                            {
                                _openObject = _world.CreateObjectTemplate(ObjectType.Wall, tokens[1]);
                                continue;
                            }
                        case "BMAP":
                        case "OVLY":
                            {
                                _openObject = _world.CreateObjectTemplate(tokens[0] == "BMAP" ? ObjectType.Bitmap : ObjectType.Overlay, tokens[1]);
                                _openObject.SetString("FILENAME", ParseDir(tokens[2]));
                                if (tokens.Count > 4)
                                {
                                    _openObject.SetFloat("X", ParseFloat(tokens[3]));
                                    _openObject.SetFloat("Y", ParseFloat(tokens[4]));
                                    _openObject.SetFloat("DX", ParseFloat(tokens[5]));
                                    _openObject.SetFloat("DY", ParseFloat(tokens[6]));
                                }
                                _world.PostSetupObjectTemplate(_openObject);
                                _openObject = null;
                                break;
                            }
                        case "TEXTURE":
                            {
                                _openObject = _world.CreateObjectTemplate(ObjectType.Texture, tokens[1]);
                                break;
                            }
                        case "WAY":
                            {
                                _openObject = _world.CreateObjectTemplate(ObjectType.Way, tokens[1]);
                                break;
                            }
                        case "THING":
                            {
                                _openObject = _world.CreateObjectTemplate(ObjectType.Thing, tokens[1]);
                                break;
                            }
                        case "ACTOR":
                            {
                                _openObject = _world.CreateObjectTemplate(ObjectType.Actor, tokens[1]);
                                break;
                            }
                        case "OVERLAY":
                            {
                                _openObject = _world.CreateObjectTemplate(ObjectType.Overlay, tokens[1]);
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

        private static void ParseStringList(string propertyName, IAcknexObject acknexObject, List<string> tokens)
        {
            if (!acknexObject.TryGetObject(propertyName, out List<string> list))
            {
                list = new List<string>();
                acknexObject.SetObject(propertyName, list);
            }
            for (var i = 1; i < tokens.Count; i++)
            {
                list.Add(tokens[i]);
            }
        }

        private static void ParseIntList(string propertyName, IAcknexObjectContainer container, List<string> tokens)
        {
            if (!container.AcknexObject.TryGetObject(propertyName, out List<int> list))
            {
                list = new List<int>();
                container.AcknexObject.SetObject(propertyName, list);
            }
            for (var i = 1; i < tokens.Count; i++)
            {
                list.Add(int.Parse(tokens[i]));
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
            var filename = $"{_baseDir}/{token}";
            return filename;
        }

        public void ParseWMP(string wmpFilename)
        {
            if (!File.Exists(wmpFilename))
            {
                return;
            }
            using (var streamReader = new StreamReader(File.OpenRead(wmpFilename)))
            {
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
                                var player = _world.GetObject(ObjectType.Player, null);
                                _world.UpdateSkillValue("PLAYER_X", ParseFloat(tokens[1]));
                                _world.UpdateSkillValue("PLAYER_Y", ParseFloat(tokens[2]));
                                _world.UpdateSkillValue("PLAYER_ANGLE", Mathf.Deg2Rad * ParseFloat(tokens[3]));
                                player.SetFloat("REGION", ParseRegionIndex(tokens[4]));
                                break;
                            }
                        case "THING":
                        case "ACTOR":
                            {
                                var type = keyword == "ACTOR" ? ObjectType.Actor : ObjectType.Thing;
                                var thing = _world.CreateObjectInstance(type, tokens[1]);
                                thing.SetFloat("X", ParseFloat(tokens[2]));
                                thing.SetFloat("Y", ParseFloat(tokens[3]));
                                thing.SetFloat("ANGLE", Mathf.Deg2Rad * ParseFloat(tokens[4]));
                                thing.SetFloat("REGION", ParseRegionIndex(tokens[5]));
                                _world.PostSetupObjectInstance(thing);
                                break;
                            }
                        case "VERTEX":
                            {
                                var x = ParseFloat(tokens[1]);
                                var y = ParseFloat(tokens[2]);
                                var z = ParseFloat(tokens[3]);
                                _world.AddVertex(x, y, z);
                                break;
                            }
                        case "REGION":
                            {
                                var regionName = tokens[1];
                                var region = _world.CreateObjectInstance(ObjectType.Region, regionName);
                                region.SetFloat("FLOOR_HGT", ParseFloat(tokens[2]));
                                region.SetFloat("CEIL_HGT", ParseFloat(tokens[3]));
                                _world.PostSetupObjectInstance(region);
                                break;
                            }
                        case "WALL":
                            {
                                var wallName = tokens[1];
                                var wall = _world.CreateObjectInstance(ObjectType.Wall, wallName);
                                wall.SetFloat("VERTEX1", Convert.ToInt32(tokens[3]));
                                wall.SetFloat("VERTEX2", Convert.ToInt32(tokens[2]));
                                wall.SetFloat("REGION1", ParseRegionIndex(tokens[4]));
                                wall.SetFloat("REGION2", ParseRegionIndex(tokens[5]));
                                wall.SetFloat("OFFSET_X", ParseFloat(tokens[6]));
                                wall.SetFloat("OFFSET_Y", ParseFloat(tokens[7]));
                                _world.PostSetupObjectInstance(wall);
                                break;
                            }
                        case "WAY":
                            {
                                var way = _world.CreateObjectInstance(ObjectType.Way, _tokens[1]);
                                for (var i = 2; i < tokens.Count - 2; i += 2)
                                {
                                    _world.AddWayPoint(way, ParseFloat(_tokens[i]), ParseFloat(_tokens[i + 1]));
                                }
                                _world.PostSetupObjectInstance(way);
                                break;
                            }
                    }
                }
                _world.PostSetupWMP();
            }
        }

        private int ParseRegionIndex(string value)
        {
            if (!_wmpContainsRegionsByName)
            {
                return int.Parse(value);
            }
            return _world.GetRegionIndex(value);
        }

        public void ParseInitialWDL(string wdlPath)
        {
            ParseWDL(wdlPath);
            foreach (var mapFile in _mapFiles)
            {
                ParseWMP(mapFile);
            }
        }
    }
}