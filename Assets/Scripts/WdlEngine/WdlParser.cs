using Acknex.Interfaces;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using Resolution = Acknex.Interfaces.Resolution;

namespace WdlEngine
{
    internal sealed class WdlParser : TokenConsumerBase
    {
        public static WdlParseResult Parse(string rootPath, IAcknexWorld world, IEnumerable<Token> tokens)
        {
            var parser = new WdlParser(rootPath, world, tokens);
            parser.Parse();
            return new WdlParseResult(parser._mapFiles);
        }

        private readonly string _rootPath;
        private readonly IAcknexWorld _world;
        private readonly List<string> _mapFiles = new List<string>();

        private WdlParser(string rootPath, IAcknexWorld world, IEnumerable<Token> tokens) 
            : base(tokens.GetEnumerator())
        {
            _rootPath = rootPath;
            _world = world;
        }

        private void Parse()
        {
            while (!Matches(TokenType.EndOfInput)) ParseStatement();
        }

        private void ParseStatement()
        {
            var statement = Consume();
            if (statement.Type == TokenType.Identifier)
            {
                var statementName = statement.StringValue;
                switch (statementName)
                {
                case "THING":
                case "ACTOR":
                case "OVERLAY":
                case "SYNONYM":
                case "SKILL":
                case "REGION":
                case "WALL":
                case "TEXTURE":
                {
                    var objType = Utils.StringToObjectType(statementName);
                    var name = Expect(TokenType.Identifier).StringValue;
                    var obj = _world.CreateObjectTemplate(objType, name);
                    Expect(TokenType.OpenBrace);
                    while (!Matches(TokenType.CloseBrace))
                    {
                        ParseProperty(obj);
                    }
                    _world.PostSetupObjectTemplate(obj);
                    return;
                }

                case "BMAP":
                case "OVLY":
                {
                    var objType = Utils.StringToObjectType(statementName);
                    var name = Expect(TokenType.Identifier).StringValue;
                    var obj = _world.CreateObjectTemplate(objType, name);
                    Expect(TokenType.Comma);
                    obj.SetString("FILENAME", ParsePath());
                    if (Matches(TokenType.Comma))
                    {
                        obj.SetFloat("X", ParseNumber());
                        Expect(TokenType.Comma);
                        obj.SetFloat("Y", ParseNumber());
                        Expect(TokenType.Comma);
                        obj.SetFloat("DX", ParseNumber());
                        Expect(TokenType.Comma);
                        obj.SetFloat("DY", ParseNumber());
                    }
                    _world.PostSetupObjectTemplate(obj);
                    Expect(TokenType.Semicolon);
                    return;
                }

                case "ACTION":
                    // TODO: Actions will need special treatment
                    break;

                case "VIDEO":
                {
                    var resolution = Expect(TokenType.Identifier).StringValue;
                    switch (resolution)
                    {
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
                    default:
                        Debug.LogError($"Unknown resolution {resolution}");
                        break;
                    }
                    Expect(TokenType.Semicolon);
                    return;
                }
                case "AMBIENT":
                case "LIGHT_ANGLE":
                {
                    var value = ParseNumber();
                    Expect(TokenType.Semicolon);
                    _world.AcknexObject.SetFloat(statementName, value);
                    return;
                }
                case "MAPFILE":
                {
                    var path = ParsePath();
                    _mapFiles.Add(path);
                    Expect(TokenType.Semicolon);
                    return;
                }
                case "PATH":
                {
                    var path = Expect(TokenType.String).StringValue;
                    _world.AddPath(path);
                    Expect(TokenType.Semicolon);
                    return;
                }
                case "STRING":
                {
                    var name = Expect(TokenType.Identifier).StringValue;
                    Expect(TokenType.Comma);
                    var value = Expect(TokenType.String).StringValue;
                    _world.AddString(name, value);
                    Expect(TokenType.Semicolon);
                    return;
                }
                case "WAY":
                {
                    var name = Expect(TokenType.Identifier).StringValue;
                    Expect(TokenType.Semicolon);
                    _world.CreateObjectTemplate(ObjectType.Way, name);
                    return;
                }
                }
            }

            Debug.LogError($"Unknown construct {statement.Type}, {statement.Value}");
            SkipStructure();
        }

        private string ParsePath()
        {
            var name = Expect(TokenType.String).StringValue;
            return Path.Combine(_rootPath, name);
        }

        private void ParseProperty(IAcknexObject obj)
        {
            var name = Expect(TokenType.Identifier).StringValue;
            switch (name)
            {
            case "TEXTURE":
            case "ATTACH":
            case "OVLYS":
            case "MSPRITE":
            case "TYPE":
            case "DEFAULT":
            case "BELOW":
            case "FLOOR_TEX":
            case "CEIL_TEX":
                obj.SetString(name, Expect(TokenType.Identifier).StringValue);
                break;
            case "HEIGHT":
            case "DIST":
            case "SPEED":
            case "LAYER":
            case "POS_X":
            case "POS_Y":
            case "SIZE_X":
            case "SIZE_Y":
            case "VAL":
            case "MIN":
            case "MAX":
            case "FLOOR_HGT":
            case "CEIL_HGT":
            case "AMBIENT":
            case "SCALE_X":
            case "SCALE_Y":
            case "SIDES":
            case "CYCLES":
                obj.SetFloat(name, ParseNumber());
                break;
            case "FLAGS":
                obj.SetObject(name, ParseNameSet());
                break;
            case "BMAPS":
                obj.SetObject(name, ParseNameList());
                break;
            case "DELAY":
            case "MIRROR":
                obj.SetObject(name, ParseIntList());
                break;
            case "SCALE_XY":
                obj.SetFloat("SCALE_X", ParseNumber());
                Expect(TokenType.Comma);
                obj.SetFloat("SCALE_Y", ParseNumber());
                break;
            default:
                Debug.LogError($"Unknown property {name}");
                while (Peek().Type != TokenType.Semicolon) Consume();
                break;
            }
            Expect(TokenType.Semicolon);
        }

        private HashSet<string> ParseNameSet() => ParseSetOf(() => Expect(TokenType.Identifier).StringValue);
        private List<string> ParseNameList() => ParseListOf(() => Expect(TokenType.Identifier).StringValue);
        private List<int> ParseIntList() => ParseListOf(() => Expect(TokenType.Integer).IntValue);

        private List<T> ParseListOf<T>(Func<T> elementParser)
        {
            var result = new List<T>();
            ParseCollectionOf(result, elementParser);
            return result;
        }

        private HashSet<T> ParseSetOf<T>(Func<T> elementParser)
        {
            var result = new HashSet<T>();
            ParseCollectionOf(result, elementParser);
            return result;
        }

        private void ParseCollectionOf<T>(ICollection<T> target, Func<T> elementParser)
        {
            var first = elementParser();
            target.Add(first);
            while (Matches(TokenType.Comma))
            {
                var next = elementParser();
                target.Add(next);
            }
        }

        private float ParseNumber()
        {
            if (Matches(TokenType.Integer, out var integer)) return integer.IntValue;
            if (Matches(TokenType.Real, out var real)) return real.RealValue;
            throw new InvalidOperationException($"expected number, but got {Peek().Type}");
        }

        private void SkipStructure()
        {
            var depth = 0;
            while (true)
            {
                var consumed = Consume();
                if (consumed.Type == TokenType.OpenBrace) ++depth;
                if (consumed.Type == TokenType.EndOfInput) break;
                if (consumed.Type == TokenType.CloseBrace)
                {
                    --depth;
                    if (depth == 0) break;
                }
                if (consumed.Type == TokenType.Semicolon && depth == 0) break;
            }
        }
    }
}
