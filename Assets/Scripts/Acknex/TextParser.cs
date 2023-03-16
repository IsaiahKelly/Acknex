using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using System.IO;
using System.Text;
using Acknex.Interfaces;
using UnityEngine;
using Debug = UnityEngine.Debug;
using Resolution = Acknex.Interfaces.Resolution;

namespace Acknex
{
    public class TextParser
    {
        private IAcknexObject _openObject;
        private readonly StringBuilder _tokenStringBuilder = new StringBuilder();
        private string _mapFile;
        private readonly string _baseDir;
        private readonly bool _wmpContainsRegionsByName;
        private readonly IAcknexWorld _world;

        public TextParser(IAcknexWorld world, string baseDir, bool wmpContainsRegionsByName)
        {
            _world = world;
            _baseDir = baseDir;
            _wmpContainsRegionsByName = wmpContainsRegionsByName;
        }

        private float ParseFloat(IEnumerator<string> tokens, string existingToken = null)
        {
            var negative = false;
            var token = existingToken ?? GetNextToken(tokens);
            if (token == "-")
            {
                token = GetNextToken(tokens);
                negative = true;
            }
            if (token == "+")
            {
                token = GetNextToken(tokens);
            }
            var value = Convert.ToSingle(token, CultureInfo.InvariantCulture);
            return negative ? -value : value;
        }

        public IEnumerator<string> ParseStatement(BinaryReader binaryReader)
        {
            bool IsSpace(int read)
            {
                switch (read)
                {
                    case '\0':
                    case '\r':
                    case '\n':
                    case ' ':
                    case '\t':
                    case ',':
                        return true;
                }
                return false;
            }
            bool IsDelimiter(int read)
            {
                switch (read)
                {
                    case '/':
                    case ';':
                    case '{':
                    case '}':
                    case '(':
                    case ')':
                    case ':':
                    case '*':
                    case '+':
                    case '-':
                    case '%':
                    case '|':
                    case '^':
                    case '&':
                        return true;
                }
                return false;
            }
            while (binaryReader.BaseStream.Position < binaryReader.BaseStream.Length)
            {
                var read = binaryReader.Read();
                if (read == -1)
                {
                    yield break;
                }
                while (IsSpace(read))
                {
                    read = binaryReader.Read();
                }
                var peek = binaryReader.PeekChar();
                switch (read)
                {
                    case '#':
                    case '/' when peek == '/':
                        while (read > -1 && read != '\n')
                        {
                            read = binaryReader.Read();
                            if (read == -1)
                            {
                                yield break;
                            }
                        }
                        continue;
                    case '/' when peek == '*':
                        while (read > -1 && !(read == '*' && peek == '/'))
                        {
                            read = binaryReader.Read();
                            if (read == -1)
                            {
                                yield break;
                            }
                            peek = binaryReader.PeekChar();
                        }
                        binaryReader.Read();
                        continue;
                }
                if (read == '"')
                {
                    _tokenStringBuilder.Clear();
                    do
                    {
                        _tokenStringBuilder.Append((char)read);
                        read = binaryReader.Read();
                        if (read == -1)
                        {
                            yield break;
                        }
                    } while (read > -1 && read != '"');
                    _tokenStringBuilder.Append('"');
                    yield return _tokenStringBuilder.ToString();
                    continue;
                }
                else if (IsDelimiter(read))
                {
                    yield return char.ToUpperInvariant((char)read).ToString();
                    continue;
                }
                else
                {
                    _tokenStringBuilder.Clear();
                    for (; ; )
                    {
                        _tokenStringBuilder.Append(char.ToUpperInvariant((char)read).ToString());
                        peek = binaryReader.PeekChar();
                        if (IsSpace(peek) || IsDelimiter(peek))
                        {
                            break;
                        }
                        read = binaryReader.Read();
                        if (read == -1)
                        {
                            yield break;
                        }
                    }
                    yield return _tokenStringBuilder.ToString();
                    continue;
                }
            }
        }

        public void ParseWDL(string wdlFilename)
        {
            if (!File.Exists(wdlFilename))
            {
                return;
            }
            var binaryReader = new BinaryReader(File.OpenRead(wdlFilename), Encoding.ASCII, true);
            {
                for (; ; )
                {
                    var tokens = ParseStatement(binaryReader);
                    var keyword = GetNextToken(tokens);
                    if (keyword == null)
                    {
                        return;
                    }
                    if (_openObject != null && keyword == "}")
                    {
                        _world.PostSetupObjectTemplate(_openObject);
                        _openObject = null;
                        continue;
                    }
                    if (_openObject != null)
                    {
                        if (_openObject.Type != ObjectType.Action)
                        {
                            var propertyType = World.Instance.GetPropertyType(_openObject.Type, keyword);
                            if (!HandleProperty(_openObject, tokens, keyword, propertyType))
                            {
                                while (keyword != ";" && keyword != null)
                                {
                                    keyword = GetNextToken(tokens);
                                }
                            }
                        }
                    }
                    else
                    {
                        switch (keyword)
                        {
                            case "VIDEO":
                                {
                                    switch (GetNextToken(tokens))
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
                                    CheckSemiColon(tokens);
                                    break;
                                }
                            case "PATH":
                                _world.AddPath(GetNextToken(tokens));
                                CheckSemiColon(tokens);
                                break;
                            case "MAPFILE":
                                _mapFile = ParseDir(GetNextToken(tokens));
                                CheckSemiColon(tokens);
                                break;
                            case "INCLUDE":
                                ParseWDL(ParseDir(GetNextToken(tokens)));
                                CheckSemiColon(tokens);
                                break;
                            case "PANEL":
                                {
                                    _openObject = _world.CreateObjectTemplate(ObjectType.Panel, GetNextToken(tokens));
                                    CheckCurlyOpen(tokens);
                                    break;
                                }
                            case "STRING":
                                {
                                    _world.AddString(GetNextToken(tokens), GetNextToken(tokens));
                                    CheckSemiColon(tokens);
                                    break;
                                }
                            case "ACTION":
                                {
                                    _openObject = _world.CreateObjectTemplate(ObjectType.Action, GetNextToken(tokens));
                                    CheckCurlyOpen(tokens);
                                    var action = (Action)_openObject.Container;
                                    action.PositionInFile = binaryReader.BaseStream.Position;
                                    action.BinaryReader = binaryReader;
                                    continue;
                                }
                            case "SYNONYM":
                                {
                                    _openObject = _world.CreateObjectTemplate(ObjectType.Synonym, GetNextToken(tokens));
                                    CheckCurlyOpen(tokens);
                                    break;
                                }
                            case "SKILL":
                                {
                                    _openObject = _world.CreateObjectTemplate(ObjectType.Skill, GetNextToken(tokens));
                                    CheckCurlyOpen(tokens);
                                    break;
                                }
                            case "REGION":
                                {
                                    _openObject = _world.CreateObjectTemplate(ObjectType.Region, GetNextToken(tokens));
                                    CheckCurlyOpen(tokens);
                                    break;
                                }
                            case "WALL":
                                {
                                    _openObject = _world.CreateObjectTemplate(ObjectType.Wall, GetNextToken(tokens));
                                    CheckCurlyOpen(tokens);
                                    continue;
                                }
                            case "BMAP":
                            case "OVLY":
                                {
                                    var name = GetNextToken(tokens);
                                    _openObject = _world.CreateObjectTemplate(keyword == "BMAP" ? ObjectType.Bitmap : ObjectType.Overlay, name);
                                    _openObject.SetString("FILENAME", ParseDir(GetNextToken(tokens)));
                                    var token = GetNextToken(tokens);
                                    if (token != ";")
                                    {
                                        _openObject.SetFloat("X", ParseFloat(tokens, token));
                                        token = GetNextToken(tokens);
                                    }
                                    if (token != ";")
                                    {
                                        _openObject.SetFloat("Y", ParseFloat(tokens, token));
                                        token = GetNextToken(tokens);
                                    }
                                    if (token != ";")
                                    {
                                        _openObject.SetFloat("DX", ParseFloat(tokens, token));
                                        token = GetNextToken(tokens);
                                    }
                                    if (token != ";")
                                    {
                                        _openObject.SetFloat("DY", ParseFloat(tokens, token));
                                    }
                                    _world.PostSetupObjectTemplate(_openObject);
                                    _openObject = null;
                                    break;
                                }
                            //case "FLIC":
                            //    {
                            //        _openObject = _world.CreateObjectTemplate(ObjectType.Flic, GetNextToken(tokens));
                            //        _openObject.SetString("FILENAME", ParseDir(GetNextToken(tokens)));
                            //        _world.PostSetupObjectTemplate(_openObject);
                            //        _openObject = null;
                            //        break;
                            //    }
                            case "TEXTURE":
                                {
                                    _openObject = _world.CreateObjectTemplate(ObjectType.Texture, GetNextToken(tokens));
                                    CheckCurlyOpen(tokens);
                                    break;
                                }
                            case "WAY":
                                {
                                    var way = _world.CreateObjectTemplate(ObjectType.Way, GetNextToken(tokens));
                                    CheckSemiColon(tokens);
                                    break;
                                }
                            case "THING":
                                {
                                    _openObject = _world.CreateObjectTemplate(ObjectType.Thing, GetNextToken(tokens));
                                    CheckCurlyOpen(tokens);
                                    break;
                                }
                            case "ACTOR":
                                {
                                    _openObject = _world.CreateObjectTemplate(ObjectType.Actor, GetNextToken(tokens));
                                    CheckCurlyOpen(tokens);
                                    break;
                                }
                            case "OVERLAY":
                                {
                                    _openObject = _world.CreateObjectTemplate(ObjectType.Overlay, GetNextToken(tokens));
                                    CheckCurlyOpen(tokens);
                                    break;
                                }
                            case "PALETTE":
                                {
                                    _openObject = _world.CreateObjectTemplate(ObjectType.Palette, GetNextToken(tokens));
                                    CheckCurlyOpen(tokens);
                                    break;
                                }
                            case "FONT":
                                {
                                    var font = _world.CreateObjectTemplate(ObjectType.Font, GetNextToken(tokens));
                                    font.SetString("FILENAME", GetNextToken(tokens));
                                    font.SetFloat("X", ParseFloat(tokens));
                                    font.SetFloat("Y", ParseFloat(tokens));
                                    CheckSemiColon(tokens);
                                    break;
                                }
                            case "MODEL":
                                {
                                    var model = _world.CreateObjectTemplate(ObjectType.Model, GetNextToken(tokens));
                                    model.SetString("FILENAME", ParseDir(GetNextToken(tokens)));
                                    World.Instance.PostSetupObjectTemplate(model);
                                    CheckSemiColon(tokens);
                                    break;
                                }
                            case "SOUND":
                                {
                                    var sound = _world.CreateObjectTemplate(ObjectType.Sound, GetNextToken(tokens));
                                    sound.SetString("FILENAME", GetNextToken(tokens));
                                    CheckSemiColon(tokens);
                                    break;
                                }
                            case "TEXT":
                                {
                                    _openObject = _world.CreateObjectTemplate(ObjectType.Text, GetNextToken(tokens));
                                    CheckCurlyOpen(tokens);
                                    break;
                                }
                            case null:
                                return;
                            default:
                                {

                                    var propertyType = World.Instance.GetPropertyType(ObjectType.World, keyword);
                                    if (!HandleProperty(World.Instance.AcknexObject, tokens, keyword, propertyType))
                                    {
                                        while (keyword != ";" && keyword != null)
                                        {
                                            keyword = GetNextToken(tokens);
                                        }
                                    }
                                    break;
                                }
                        }
                    }
                }
            }
        }

        private bool HandleProperty(IAcknexObject acknexObject, IEnumerator<string> tokens, string keyword, PropertyType propertyType)
        {
            switch (propertyType)
            {
                case PropertyType.Float:
                    acknexObject.SetFloat(keyword, ParseFloat(tokens));
                    CheckSemiColon(tokens);
                    return true;
                case PropertyType.String:
                    acknexObject.SetString(keyword, GetNextToken(tokens));
                    CheckSemiColon(tokens);
                    return true;
                case PropertyType.ActionReference:
                    acknexObject.SetString(keyword, GetNextToken(tokens));
                    CheckSemiColon(tokens);
                    return true;
                case PropertyType.ObjectReference:
                    acknexObject.SetString(keyword, GetNextToken(tokens));
                    CheckSemiColon(tokens);
                    return true;
                case PropertyType.Flags:
                    ParseFlags(acknexObject, tokens);
                    return true;
                case PropertyType.ObjectReferenceList:
                    ParseStringList(keyword, acknexObject, tokens);
                    return true;
                case PropertyType.FloatList:
                    ParseFloatList(keyword, acknexObject, tokens);
                    return true;
                case PropertyType.ScaleXY:
                    acknexObject.SetFloat("SCALE_X", ParseFloat(tokens));
                    acknexObject.SetFloat("SCALE_Y", ParseFloat(tokens));
                    CheckSemiColon(tokens);
                    return true;
                case PropertyType.Unknown:
                    Debug.LogWarning("Unknown WDL property: " + keyword);
                    break;
            }
            return false;
        }

        public string GetNextToken(IEnumerator<string> tokens)
        {
            if (tokens.MoveNext())
            {
                return tokens.Current;
            }
            return null;
        }

        public void CheckCurlyOpen(IEnumerator<string> tokens)
        {
            if (GetNextToken(tokens) != "{")
            {
                throw new Exception("Expected: {");
            }
        }

        public void CheckSemiColon(IEnumerator<string> tokens)
        {
            if (GetNextToken(tokens) != ";")
            {
                throw new Exception("Expected: ;");
            }
        }

        private void ParseStringList(string propertyName, IAcknexObject acknexObject, IEnumerator<string> tokens)
        {
            if (!acknexObject.TryGetObject(propertyName, out List<string> list))
            {
                list = new List<string>();
                acknexObject.SetObject(propertyName, list);
            }
            var token = GetNextToken(tokens);
            while (token != ";")
            {
                list.Add(token);
                token = GetNextToken(tokens);
            }
        }

        private void ParseFlags(IAcknexObject acknexObject, IEnumerator<string> tokens)
        {
            var token = GetNextToken(tokens);
            while (token != ";")
            {
                acknexObject.AddFlag(token);
                token = GetNextToken(tokens);
            }
        }

        private void ParseFloatList(string propertyName, IAcknexObject acknexObject, IEnumerator<string> tokens)
        {
            if (!acknexObject.TryGetObject(propertyName, out List<float> list))
            {
                list = new List<float>();
                acknexObject.SetObject(propertyName, list);
            }
            var token = GetNextToken(tokens);
            while (token != ";")
            {
                list.Add(ParseFloat(tokens, token));
                token = GetNextToken(tokens);
            }
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
            var binaryReader = new BinaryReader(File.OpenRead(wmpFilename), Encoding.ASCII, true);
            {
                for (; ; )
                {
                    var tokens = ParseStatement(binaryReader);
                    var keyword = GetNextToken(tokens);
                    if (keyword == null)
                    {
                        break;
                    }
                    switch (keyword)
                    {
                        case "PLAYER_START":
                            {
                                var player = _world.GetObject(ObjectType.Player, null);
                                _world.UpdateSkillValue("PLAYER_X", ParseFloat(tokens));
                                _world.UpdateSkillValue("PLAYER_Y", ParseFloat(tokens));
                                _world.UpdateSkillValue("PLAYER_ANGLE", Mathf.Deg2Rad * ParseFloat(tokens));
                                player.SetFloat("REGION", ParseRegionIndex(tokens));
                                break;
                            }
                        case "THING":
                        case "ACTOR":
                            {
                                var type = keyword == "ACTOR" ? ObjectType.Actor : ObjectType.Thing;
                                var thing = _world.CreateObjectInstance(type, GetNextToken(tokens));
                                thing.SetFloat("X", ParseFloat(tokens));
                                thing.SetFloat("Y", ParseFloat(tokens));
                                thing.SetFloat("ANGLE", Mathf.Deg2Rad * ParseFloat(tokens));
                                thing.SetFloat("REGION", ParseRegionIndex(tokens));
                                _world.PostSetupObjectInstance(thing);
                                break;
                            }
                        case "VERTEX":
                            {
                                var x = ParseFloat(tokens);
                                var y = ParseFloat(tokens);
                                var z = ParseFloat(tokens);
                                _world.AddVertex(x, y, z);
                                break;
                            }
                        case "REGION":
                            {
                                var regionName = GetNextToken(tokens);
                                var region = _world.CreateObjectInstance(ObjectType.Region, regionName);
                                region.SetFloat("FLOOR_HGT", ParseFloat(tokens));
                                region.SetFloat("CEIL_HGT", ParseFloat(tokens));
                                _world.PostSetupObjectInstance(region);
                                break;
                            }
                        case "WALL":
                            {
                                var wallName = GetNextToken(tokens);
                                var wall = _world.CreateObjectInstance(ObjectType.Wall, wallName);
                                wall.SetFloat("VERTEX2", ParseFloat(tokens));
                                wall.SetFloat("VERTEX1", ParseFloat(tokens));
                                wall.SetFloat("REGION1", ParseRegionIndex(tokens));
                                wall.SetFloat("REGION2", ParseRegionIndex(tokens));
                                wall.SetFloat("OFFSET_X", ParseFloat(tokens));
                                wall.SetFloat("OFFSET_Y", ParseFloat(tokens));
                                _world.PostSetupObjectInstance(wall);
                                break;
                            }
                        case "WAY":
                            {
                                var way = _world.CreateObjectInstance(ObjectType.Way, GetNextToken(tokens));
                                var token = GetNextToken(tokens);
                                while (token != ";")
                                {
                                    var x = ParseFloat(tokens, token);
                                    token = GetNextToken(tokens);
                                    var y = ParseFloat(tokens, token);
                                    _world.AddWayPoint(way, x, y);
                                    token = GetNextToken(tokens);
                                }
                                _world.PostSetupObjectInstance(way);
                                break;
                            }
                    }
                }
                _world.PostSetupWMP();
            }
        }

        private float ParseRegionIndex(IEnumerator<string> tokens)
        {
            if (!_wmpContainsRegionsByName)
            {
                return ParseFloat(tokens);
            }
            var index = _world.GetRegionIndex(GetNextToken(tokens));
            return index;
        }

        public void ParseInitialWDL(string wdlPath)
        {
            ParseWDL(wdlPath);
            //todo: this must be called as a command
            ParseWMP(_mapFile);
        }
    }
}