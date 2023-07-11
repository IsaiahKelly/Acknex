using NameId = System.UInt32;
using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Text;
using Acknex.Interfaces;
using Common;
using UnityEngine;
using PropertyName = Acknex.Interfaces.PropertyName;
using Resolution = Acknex.Interfaces.Resolution;

namespace Acknex
{
    public class TextParser
    {
        public struct Definition
        {
            public string Name;
            public string Value;

            public Definition(string name, string value) 
            {
                Name = name;
                Value = value;
            }

            public override int GetHashCode()
            {
                return Name.GetHashCode();
            }
        }

        private readonly Dictionary<string, Definition> _definitions = new Dictionary<string, Definition>();
        private readonly Stack<bool> _directivesStack = new Stack<bool>();
        private readonly bool _oldAckVersion;
        private readonly StringBuilder _tokenStringBuilder = new StringBuilder();
        private readonly IAcknexWorld _world;
        private string _mapFile;
        private IAcknexObject _openObject;
        private int _internalCount;
        private readonly string _baseDir;

        public TextParser(IAcknexWorld world, string baseDir, bool oldAckVersion)
        {
            _world = world;
            _baseDir = baseDir;
            _oldAckVersion = oldAckVersion;
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

        public IEnumerator<string> ParseStatement(LineBinaryReader binaryReader)
        {
            bool IsSpace(int read)
            {
                switch (read)
                {
                    case '\n':
                        return true;
                    case '\0':
                    case '\r':
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
                    case '=':
                    case '<':
                    case '>':
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
                    for (; ; )
                    {
                        read = binaryReader.Read();
                        if (read == -1)
                        {
                            yield break;
                        }
                        if (read == '"')
                        {
                            break;
                        }
                        _tokenStringBuilder.Append((char)read);
                    };
                    yield return _tokenStringBuilder.ToString();
                    continue;
                }
                if (IsDelimiter(read))
                {
                    yield return char.ToUpperInvariant((char)read).ToString();
                    continue;
                }
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
            }
        }

        public void ParseWDL(string wdlFilename)
        {
            if (!FileManager.Exists(wdlFilename))
            {
                return;
            }
            var binaryReader = new LineBinaryReader(FileManager.OpenRead(wdlFilename), Encoding.ASCII, true);
            {
                for (; ; )
                {
                    var tokens = ParseStatement(binaryReader);
                    var keyword = GetNextToken(tokens);
                    if (keyword == null)
                    {
                        return;
                    }
                    ReadUntilCanContinue(ref keyword, tokens);
                    if (_openObject != null && keyword == "}")
                    {
                        _openObject.NoDirtyFlag = false;
                        _openObject = null;
                        continue;
                    }
                    if (!HandleDirective(keyword, tokens))
                    {
                        if (_openObject != null)
                        {
                            if (_openObject.Type != ObjectType.Action)
                            {
                                var handled = false;
                                if (_openObject.Type == ObjectType.Panel)
                                {
                                    //todo: constructor
                                    switch (keyword)
                                    {
                                        case "DIGITS":
                                            {
                                                handled = true;
                                                var digits = _world.CreateObjectTemplate(ObjectType.Digits, $"__DIGITS__{_internalCount++}");
                                                var digitsContainer = ((Digits)digits.Container);
                                                digits.SetFloat(PropertyName.POS_X, ParseFloat(tokens, GetNextToken(tokens)));
                                                digits.SetFloat(PropertyName.POS_Y, ParseFloat(tokens, GetNextToken(tokens)));
                                                digits.SetFloat(PropertyName.LEN, ParseFloat(tokens, GetNextToken(tokens)));
                                                AddPostResolve(digits, tokens, PropertyName.FONT);
                                                digits.SetFloat(PropertyName.FAC, ParseFloat(tokens, GetNextToken(tokens)));
                                                AddPostResolve(digits, tokens, PropertyName.SKILL);
                                                digitsContainer.transform.SetParent(((Panel)_openObject.Container).transform, false);
                                                digitsContainer.Panel = ((Panel)_openObject.Container);
                                                CheckSemiColon(tokens);
                                                break;
                                            }
                                        case "PICTURE":
                                            {
                                                handled = true;
                                                var picture = _world.CreateObjectTemplate(ObjectType.Picture, $"__PICTURE__{_internalCount++}");
                                                var pictureContainer = ((Picture)picture.Container);
                                                picture.SetFloat(PropertyName.POS_X, ParseFloat(tokens, GetNextToken(tokens)));
                                                picture.SetFloat(PropertyName.POS_Y, ParseFloat(tokens, GetNextToken(tokens)));
                                                AddPostResolve(picture, tokens, PropertyName.TEXTURE);
                                                AddPostResolve(picture, tokens, PropertyName.SKILL);
                                                pictureContainer.transform.SetParent(((Panel)_openObject.Container).transform, false);
                                                pictureContainer.Panel = ((Panel)_openObject.Container);
                                                CheckSemiColon(tokens);
                                                break;
                                            }
                                    }
                                }
                                if (!handled)
                                {
                                    var property = Mappings.MapProperty(keyword);
                                    var propertyType = _world.GetPropertyType(_openObject.Type, property, wdlFilename, binaryReader.LineCount);
                                    if (!HandleProperty(_openObject, tokens, keyword, propertyType, binaryReader, wdlFilename))
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
                                ((Action)_openObject.Container).Tokens.Add(keyword);
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
                                    _mapFile = ParseDir(GetNextToken(tokens), tokens);
                                    CheckSemiColon(tokens);
                                    break;
                                case "INCLUDE":
                                    ParseWDL(ParseDir(GetNextToken(tokens), tokens));
                                    CheckSemiColon(tokens);
                                    break;
                                case "PANEL":
                                    {
                                        _openObject = _world.CreateObjectTemplate(ObjectType.Panel, GetNextToken(tokens));
                                        _openObject.NoDirtyFlag = true;
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
                                        _openObject.NoDirtyFlag = true;
                                        ((Action)_openObject.Container).WDLFilename = wdlFilename;
                                        CheckCurlyOpen(tokens);
                                        //var action = (Action)_openObject.Container;
                                        continue;
                                    }
                                case "SYNONYM":
                                    {
                                        _openObject = _world.CreateObjectTemplate(ObjectType.Synonym, GetNextToken(tokens));
                                        _openObject.NoDirtyFlag = true;
                                        CheckCurlyOpen(tokens);
                                        break;
                                    }
                                case "SKILL":
                                    {
                                        _openObject = _world.CreateObjectTemplate(ObjectType.Skill, GetNextToken(tokens));
                                        _openObject.NoDirtyFlag = true;
                                        CheckCurlyOpen(tokens);
                                        break;
                                    }
                                case "REGION":
                                    {
                                        _openObject = _world.CreateObjectTemplate(ObjectType.Region, GetNextToken(tokens));
                                        _openObject.NoDirtyFlag = true;
                                        CheckCurlyOpen(tokens);
                                        break;
                                    }
                                case "WALL":
                                    {
                                        _openObject = _world.CreateObjectTemplate(ObjectType.Wall, GetNextToken(tokens));
                                        _openObject.NoDirtyFlag = true;
                                        CheckCurlyOpen(tokens);
                                        continue;
                                    }
                                case "BMAP":
                                case "OVLY":
                                    {
                                        var name = GetNextToken(tokens);
                                        _openObject = _world.CreateObjectTemplate(ObjectType.Bitmap, name);
                                        _openObject.SetString(PropertyName.FILENAME, ParseDir(GetNextToken(tokens), tokens));
                                        _openObject.NoDirtyFlag = true;
                                        var token = GetNextToken(tokens);
                                        if (token != ";")
                                        {
                                            _openObject.SetFloat(PropertyName.X, ParseFloat(tokens, token));
                                            token = GetNextToken(tokens);
                                        }
                                        if (token != ";")
                                        {
                                            _openObject.SetFloat(PropertyName.Y, ParseFloat(tokens, token));
                                            token = GetNextToken(tokens);
                                        }
                                        if (token != ";")
                                        {
                                            _openObject.SetFloat(PropertyName.DX, ParseFloat(tokens, token));
                                            token = GetNextToken(tokens);
                                        }
                                        if (token != ";")
                                        {
                                            _openObject.SetFloat(PropertyName.DY, ParseFloat(tokens, token));
                                        }
                                        if (token != ";")
                                        {
                                            CheckSemiColon(tokens);
                                        }
                                        _openObject.NoDirtyFlag = false;
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
                                        _openObject.NoDirtyFlag = true;
                                        CheckCurlyOpen(tokens);
                                        break;
                                    }
                                case "WAY":
                                    {
                                        _openObject = _world.CreateObjectTemplate(ObjectType.Way, GetNextToken(tokens));
                                        CheckSemiColon(tokens);
                                        _openObject = null;
                                        break;
                                    }
                                case "THING":
                                    {
                                        _openObject = _world.CreateObjectTemplate(ObjectType.Thing, GetNextToken(tokens));
                                        _openObject.NoDirtyFlag = true;
                                        CheckCurlyOpen(tokens);
                                        break;
                                    }
                                case "ACTOR":
                                    {
                                        _openObject = _world.CreateObjectTemplate(ObjectType.Actor, GetNextToken(tokens));
                                        _openObject.NoDirtyFlag = true;
                                        CheckCurlyOpen(tokens);
                                        break;
                                    }
                                case "OVERLAY":
                                    {
                                        _openObject = _world.CreateObjectTemplate(ObjectType.Overlay, GetNextToken(tokens));
                                        _openObject.NoDirtyFlag = true;
                                        CheckCurlyOpen(tokens);
                                        break;
                                    }
                                case "PALETTE":
                                    {
                                        _openObject = _world.CreateObjectTemplate(ObjectType.Palette, GetNextToken(tokens));
                                        _openObject.NoDirtyFlag = true;
                                        CheckCurlyOpen(tokens);
                                        break;
                                    }
                                case "FONT":
                                    {
                                        _openObject = _world.CreateObjectTemplate(ObjectType.Font, GetNextToken(tokens));
                                        _openObject.NoDirtyFlag = true;
                                        _openObject.SetString(PropertyName.FILENAME, ParseDir(GetNextToken(tokens), tokens));
                                        _openObject.SetFloat(PropertyName.WIDTH, ParseFloat(tokens));
                                        _openObject.SetFloat(PropertyName.HEIGHT, ParseFloat(tokens));
                                        CheckSemiColon(tokens);
                                        _openObject.NoDirtyFlag = false;
                                        _openObject = null;
                                        break;
                                    }
                                case "MODEL":
                                    {
                                        _openObject = _world.CreateObjectTemplate(ObjectType.Model, GetNextToken(tokens));
                                        _openObject.NoDirtyFlag = true;
                                        _openObject.SetString(PropertyName.FILENAME, ParseDir(GetNextToken(tokens), tokens));
                                        CheckSemiColon(tokens);
                                        _openObject.NoDirtyFlag = false;
                                        _openObject = null;
                                        break;
                                    }
                                case "SOUND":
                                    {
                                        _openObject = _world.CreateObjectTemplate(ObjectType.Sound, GetNextToken(tokens));
                                        _openObject.NoDirtyFlag = true;
                                        _openObject.SetString(PropertyName.FILENAME, ParseDir(GetNextToken(tokens), tokens));
                                        CheckSemiColon(tokens);
                                        _openObject.NoDirtyFlag = false;
                                        _openObject = null;
                                        break;
                                    }
                                case "MUSIC":
                                    {
                                        _openObject = _world.CreateObjectTemplate(ObjectType.Song, GetNextToken(tokens));
                                        _openObject.NoDirtyFlag = true;
                                        _openObject.SetString(PropertyName.FILENAME, ParseDir(GetNextToken(tokens), tokens));
                                        CheckSemiColon(tokens);
                                        _openObject.NoDirtyFlag = false;
                                        _openObject = null;
                                        break;
                                    }
                                case "TEXT":
                                    {
                                        _openObject = _world.CreateObjectTemplate(ObjectType.Text, GetNextToken(tokens));
                                        _openObject.NoDirtyFlag = true;
                                        CheckCurlyOpen(tokens);
                                        break;
                                    }
                                case null:
                                    {
                                        return;
                                    }
                                default:
                                    {
                                        var property = Mappings.MapProperty(keyword);
                                        var propertyType = _world.GetPropertyType(ObjectType.World, property, wdlFilename, binaryReader.LineCount);
                                        if (!HandleProperty(_world.AcknexObject, tokens, keyword, propertyType, binaryReader, wdlFilename))
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
        }

        public void ReadUntilCanContinue(ref string keyword, IEnumerator<string> tokens)
        {
            var canContinue = true;
            foreach (var item in _directivesStack)
            {
                canContinue &= item;
            }
            if (!canContinue)
            {
                while (keyword != "DEFINE" && 
                       keyword != "UNDEF" && 
                       keyword != "IFDEF" && 
                       keyword != "IFNDEF" &&
                       keyword != "IFELSE" && 
                       keyword != "ENDIF"
                       )
                {
                    keyword = GetNextToken(tokens);
                }
            }
        }

        public bool HandleDirective(string keyword, IEnumerator<string> tokens)
        {
            switch (keyword)
            {
                case "DEFINE":
                    {
                        var definitionName = GetNextToken(tokens);
                        var nextValue = GetNextToken(tokens);
                        string definitionValue;
                        if (nextValue != ";")
                        {
                            definitionValue = nextValue;
                            CheckSemiColon(tokens);
                        }
                        else
                        {
                            definitionValue = null;
                        }
                        _definitions.Add(definitionName, new Definition(definitionName, definitionValue));
                        return true;
                    }
                case "UNDEF":
                    {
                        var definitionName = GetNextToken(tokens);
                        _definitions.Remove(definitionName);
                        CheckSemiColon(tokens);
                        return true;
                    }
                case "IFDEF":
                    {
                        var definitionName = GetNextToken(tokens);
                        _directivesStack.Push(_definitions.ContainsKey(definitionName));
                        CheckSemiColon(tokens);
                        return true;
                    }
                case "IFNDEF":
                    {
                        var definitionName = GetNextToken(tokens);
                        _directivesStack.Push(!_definitions.ContainsKey(definitionName));
                        CheckSemiColon(tokens);
                        return true;
                    }
                case "IFELSE":
                    {
                        var defined = _directivesStack.Pop();
                        _directivesStack.Push(!defined);
                        CheckSemiColon(tokens);
                        return true;
                    }
                case "ENDIF":
                    {
                        _directivesStack.Pop();
                        CheckSemiColon(tokens);
                        return true;
                    }
            }
            return false;
        }

        private bool HandleProperty(IAcknexObject acknexObject, IEnumerator<string> tokens, string keyword, PropertyType propertyType, LineBinaryReader binaryReader = null, string filename = null)
        {
            var objectProperty = Mappings.MapProperty(keyword);
            switch (propertyType)
            {
                case PropertyType.Float:
                    acknexObject.SetFloat(objectProperty, ParseFloat(tokens));
                    CheckSemiColon(tokens);
                    return true;
                case PropertyType.String:
                    acknexObject.SetString(objectProperty, GetNextToken(tokens));
                    CheckSemiColon(tokens);
                    return true;
                case PropertyType.Filename:
                    acknexObject.SetString(objectProperty, ParseDir(GetNextToken(tokens), tokens));
                    CheckSemiColon(tokens);
                    return true;
                case PropertyType.ActionReference:
                case PropertyType.ObjectReference:
                    AddPostResolve(acknexObject, tokens, objectProperty);
                    CheckSemiColon(tokens);
                    return true;
                case PropertyType.Flags:
                    ParseFlags(acknexObject, tokens);
                    return true;
                case PropertyType.ObjectReferenceList:
                    ParseObjectReferenceList(keyword, acknexObject, tokens);
                    return true;
                case PropertyType.FloatList:
                    ParseFloatList(keyword, acknexObject, tokens);
                    return true;
                case PropertyType.Range:
                    acknexObject.SetFloat(PropertyName.RANGE_X, ParseFloat(tokens));
                    acknexObject.SetFloat(PropertyName.RANGE_Y, ParseFloat(tokens));
                    CheckSemiColon(tokens);
                    return true;
                case PropertyType.ScaleXY:
                    acknexObject.SetFloat(PropertyName.SCALE_X, ParseFloat(tokens));
                    acknexObject.SetFloat(PropertyName.SCALE_Y, ParseFloat(tokens));
                    CheckSemiColon(tokens);
                    return true;
                case PropertyType.Unknown:
                    if (binaryReader != null && filename != null)
                    {
                        Debug.LogWarning($"{filename}:{binaryReader.LineCount} Unknown WDL property: {acknexObject.Name}.{keyword}");
                    }
                    else
                    {
                        Debug.LogWarning($"Unknown WDL property: {acknexObject.Name}.{keyword}");
                    }
                    break;
            }
            return false;
        }

        private void AddPostResolve(IAcknexObject acknexObject, IEnumerator<string> tokens, PropertyName keyword)
        {
            var name = GetNextToken(tokens);
            var postResolveItem = new PostResolveItem();
            postResolveItem.acknexObject = acknexObject;
            postResolveItem.keyword = keyword;
            postResolveItem.objectName = name;
            _world.AddPostResolve(postResolveItem);
        }

        public string GetNextToken(IEnumerator<string> tokens)
        {
            if (tokens.MoveNext())
            {
                var value = tokens.Current;
                if (value != null && _definitions.TryGetValue(value, out var defined))
                {
                    return defined.Value;
                }
                return value;
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

        private void ParseObjectReferenceList(string propertyName, IAcknexObject acknexObject, IEnumerator<string> tokens)
        {
            var intPropertyName = NameUtils.ToNameId(propertyName, true, false, false);
            if (!acknexObject.TryGetObject(intPropertyName, out List<IAcknexObject> list))
            {
                list = new List<IAcknexObject>();
                acknexObject.SetObject(intPropertyName, list);
            }
            var token = GetNextToken(tokens);
            while (token != ";")
            {
                var postResolveItem = new PostResolveItem();
                postResolveItem.acknexObject = acknexObject;
                postResolveItem.list = list;
                postResolveItem.objectName = token;
                _world.AddPostResolve(postResolveItem);
                token = GetNextToken(tokens);
            }
        }

        private void ParseFlags(IAcknexObject acknexObject, IEnumerator<string> tokens)
        {
            var token = GetNextToken(tokens);
            while (token != ";")
            {
                var flag = Mappings.MapProperty(token);
                acknexObject.AddFlag(flag);
                token = GetNextToken(tokens);
            }
        }

        private void ParseFloatList(string propertyName, IAcknexObject acknexObject, IEnumerator<string> tokens)
        {
            var objectProperty = Mappings.MapProperty(propertyName);
            if (!acknexObject.TryGetObject(objectProperty, out List<float> list))
            {
                list = new List<float>();
                acknexObject.SetObject(objectProperty, list);
            }
            var token = GetNextToken(tokens);
            while (token != ";")
            {
                list.Add(ParseFloat(tokens, token));
                token = GetNextToken(tokens);
            }
        }

        private string ParseDir(string token, IEnumerator<string> tokens)
        {
            if (token != "<")
            {
                throw new Exception("Expected: <");
            }
            token = GetNextToken(tokens);
            if (token != ">")
            {
                var filename = token;
                token = GetNextToken(tokens);
                if (token != ">")
                {
                    throw new Exception("Expected: >");
                }
                return filename;
            }
            return null;
        }

        public void ParseWMP(string wdlFilename, string wmpFilename)
        {
            if (!FileManager.Exists(wmpFilename))
            {
                return;
            }
            var binaryReader = new LineBinaryReader(FileManager.OpenRead(wmpFilename), Encoding.ASCII, true);
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
                                var player = _world.GetObject(ObjectType.Player, 0);
                                _world.UpdateSkillValue(SkillName.PLAYER_X, ParseFloat(tokens));
                                _world.UpdateSkillValue(SkillName.PLAYER_Y, ParseFloat(tokens));
                                _world.UpdateSkillValue(SkillName.PLAYER_ANGLE, AngleUtils.HandleWMPAngle(ParseFloat(tokens), _oldAckVersion));
                                ParseRegionIndex(player, PropertyName.REGION, tokens);
                                break;
                            }
                        case "THING":
                        case "ACTOR":
                            {
                                var actorOrThingName = GetNextToken(tokens);
                                var type = keyword == "ACTOR" ? ObjectType.Actor : ObjectType.Thing;
                                var thing = _world.CreateObjectInstance(type, actorOrThingName);
                                thing.SetFloat(PropertyName.X, ParseFloat(tokens));
                                thing.SetFloat(PropertyName.Y, ParseFloat(tokens));
                                thing.SetFloat(PropertyName.ANGLE, AngleUtils.HandleWMPAngle(ParseFloat(tokens), _oldAckVersion));
                                ParseRegionIndex(thing, PropertyName.REGION, tokens);
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
                                region.SetFloat(PropertyName.FLOOR_HGT, ParseFloat(tokens));
                                region.SetFloat(PropertyName.CEIL_HGT, ParseFloat(tokens));
                                _world.PostSetupObjectInstance(region);
                                break;
                            }
                        case "WALL":
                            {
                                var wallName = GetNextToken(tokens);
                                var wall = _world.CreateObjectInstance(ObjectType.Wall, wallName);
                                wall.SetFloat(PropertyName.VERTEX2, ParseFloat(tokens));
                                wall.SetFloat(PropertyName.VERTEX1, ParseFloat(tokens));
                                ParseRegionIndex(wall, PropertyName.REGION1, tokens);
                                ParseRegionIndex(wall, PropertyName.REGION2, tokens);
                                wall.SetFloat(PropertyName.OFFSET_X, ParseFloat(tokens));
                                wall.SetFloat(PropertyName.OFFSET_Y, ParseFloat(tokens));
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
                _world.PostSetupWMP(wdlFilename);
            }
        }

        private void ParseRegionIndex(IAcknexObject acknexObject, PropertyName propertyNameName, IEnumerator<string> tokens)
        {
            if (!_oldAckVersion)
            {
                var regionIndex = (int)ParseFloat(tokens);
                acknexObject.SetAcknexObject(propertyNameName, World.Instance.RegionsByIndex[regionIndex].AcknexObject);
            }
            else
            {
                var regionName = GetNextToken(tokens);
                var regionNameInt = NameUtils.ToNameId(regionName, true, false, false);
                acknexObject.SetAcknexObject(propertyNameName, World.Instance.RegionsByName[regionNameInt].AcknexObject);
            }
        }

        public void ParseInitialWDL(string wdlFilename)
        {
            ParseWDL(wdlFilename);
            //todo: this must be called as a command
            ParseWMP(wdlFilename, _mapFile);
        }
    }
}