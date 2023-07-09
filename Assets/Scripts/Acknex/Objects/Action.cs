using System;
using System.Collections.Generic;
using System.Globalization;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using Acknex.Interfaces;
using UnityEngine;
using NameId = System.UInt32;

namespace Acknex
{
    public class Action : IAcknexObjectContainer
    {
        private const string CallCoroutine = @"{{
            var enumerator = {0};
            _world.StartManagedCoroutine(null, enumerator);
        }}";

        private const string CustomCallCoroutine = @"{{
            var enumerator = {0};
            var compiledAction = (ICompiledAction)enumerator;
            compiledAction.MY = MY;
            compiledAction.THERE = THERE;
            compiledAction._world = _world;
            _world.StartManagedCoroutine(null, enumerator);
        }}";

        private const string CustomWaitTicks = @"
            startTime{1} = Time.time;
            endTime{1} = startTime{1} + TimeUtils.TicksToTime((int){0});
            _cursor = {1};
            _coroutine{1}:
            while (Time.time  < endTime{1})
            {{
                Current = Game.WaitForEndOfFrame;
                return true;
            }}
            Current = null;
        ";

        private const string CustomWaitCycles = @"
            startTime{1} = Time.time;
            endTime{1} = startTime{1} + TimeUtils.FramesToTime((int){0});
            _cursor = {1};
            _coroutine{1}:
            while (Time.time  < endTime{1})
            {{
                Current = Game.WaitForEndOfFrame;
                return true;
            }}
            Current = null;
        ";

        private const string WaitTicks = @"
            startTime {1} = Time.time;
            endTime{1} = startTime{1} + TimeUtils.TicksToTime((int){0});
            while (Time.time  < endTime{1})
            {{
                yield return Game.WaitForEndOfFrame;
            }}
        ";

        private const string WaitCycles = @"
            startTime{1} = Time.time;
            endTime{1} = startTime{1} + TimeUtils.FramesToTime((int){0});
            while (Time.time  < endTime{1})
            {{
                yield return Game.WaitForEndOfFrame;
            }}
        ";

        private readonly IDictionary<string, string> _dropped = new StringKeyDictionary<string, string>();
        private readonly List<Tuple<string, float>> _skips = new List<Tuple<string, float>>();
        private string _currentToken;
        private int _ifStack;
        private int _tokenIndex;
        private int _varCounter;

        public List<string> Tokens = new List<string>();
        public string WDLFilename;
        public StringBuilder CodeStringBuilder = new StringBuilder();
        public StringBuilder JumpTableStringBuilder = new StringBuilder();
        public StringBuilder VariablesStringBuilder = new StringBuilder();
        public StringBuilder MethodBodyStringBuilder = new StringBuilder();
        private int _coroutineCounter = 1;

        public Action()
        {
            AcknexObject.Container = this;
        }

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Action);

        public void Disable()
        {
        }

        public void Enable()
        {
        }

        public GameObject GameObject => null;

        public Vector3 GetCenter()
        {
            return default;
        }
        public Vector3 GetEyeLevel()
        {
            return GetCenter();
        }
        public IAcknexObject GetRegion()
        {
            return null;
        }

        public void NotifyPropertyChanged(uint propertyName)
        {
        }


        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {
        }

        public void SetupInstance()
        {
        }

        public void SetupTemplate()
        {
        }

        public void UpdateObject()
        {
        }

        private static IAcknexObject GetTemplateCallback(uint name)
        {
            return null;
        }

        public void WriteHeader()
        {
            var name = AcknexObject.Name;
            var sanitizedName = Sanitize(name);
            //if (World.Instance.CustomStateMachines)
            //{
                CodeStringBuilder.AppendLine($"public class {sanitizedName} : ICompiledAction {{");
                CodeStringBuilder.AppendLine("  private int _cursor;");
                CodeStringBuilder.AppendLine("  public IAcknexObject MY {get; set;}");
                CodeStringBuilder.AppendLine("  public IAcknexObject THERE {get; set;}");
                CodeStringBuilder.AppendLine("  public IAcknexWorld _world {get; set;}");
                CodeStringBuilder.AppendLine("  public object Current { get; set; }");
                CodeStringBuilder.AppendLine("  public void Reset() {");
                CodeStringBuilder.AppendLine("      _cursor = 0;");
                CodeStringBuilder.AppendLine("  }");
                CodeStringBuilder.AppendLine($" public {sanitizedName}() {{");
                CodeStringBuilder.AppendLine("  }");
                CodeStringBuilder.AppendLine($" public {sanitizedName}(IAcknexObject MY, IAcknexObject THERE, IAcknexWorld world) {{");
                CodeStringBuilder.AppendLine("      this.MY = MY;");
                CodeStringBuilder.AppendLine("      this.THERE = THERE;");
                CodeStringBuilder.AppendLine("      this._world = world;");
                CodeStringBuilder.AppendLine("  }");
                CodeStringBuilder.AppendLine("  public bool MoveNext() {");
                JumpTableStringBuilder.AppendLine("     switch (_cursor){");
            //}
            //else
            //{
            //    CodeStringBuilder.Append("public IEnumerator ").Append(sanitizedName).AppendLine("(IAcknexObject MY, IAcknexObject THERE){");
            //}
        }

        public override string ToString()
        {
            return AcknexObject.ToString();
        }

        public void WriteFooter()
        {
            //if (World.Instance.CustomStateMachines)
            //{
                JumpTableStringBuilder.AppendLine("     }");
            //}
            CodeStringBuilder.Append(JumpTableStringBuilder);
            CodeStringBuilder.Append(MethodBodyStringBuilder);
            //if (World.Instance.CustomStateMachines)
            //{
                CodeStringBuilder.AppendLine("      return false;");
                CodeStringBuilder.AppendLine("  }");
                CodeStringBuilder.Append(VariablesStringBuilder);
                CodeStringBuilder.AppendLine("}");
            //}
            //else
            //{
            //    CodeStringBuilder.AppendLine("yield break;").AppendLine("}");
            //}
        }

        public void ParseAllStatements()
        {
            do
            {
                var keyword = GetNextToken();
                var labelOrStatement = GetNextToken();
                if (labelOrStatement == ":")
                {
                    MethodBodyStringBuilder.Append(Sanitize(keyword)).AppendLine(":");
                }
                else
                {
                    for (var i = _skips.Count - 1; i >= 0; i--)
                    {
                        var skip = _skips[i];
                        var count = skip.Item2;
                        if (--count < 0)
                        {
                            MethodBodyStringBuilder.Append(skip.Item1).AppendLine(":");
                            _skips.Remove(skip);
                        }
                        else
                        {
                            _skips[i] = new Tuple<string, float>(skip.Item1, count);
                        }
                    }
                    Debug.Log(keyword);
                    switch (keyword)
                    {
                        case "}":
                            {
                                HandleIfStack();
                                return;
                            }
                        case "SIN":
                        case "COS":
                        case "TAN":
                        case "ASIN":
                        case "ACOS":
                        case "LOG":
                        case "LOG10":
                        case "LOG2":
                        case "SQRT":
                        case "SIGN":
                        case "ABS":
                        case "INT":
                        case "EXP":
                        case "RANDOM":
                            {
                                var identifier = labelOrStatement;
                                var value = GetValue();
                                var rhs = GetValueAndType(value, "rhs");
                                var lhs = GetValueAndType(identifier, "lhs", false, rhs.propertyType);
                                rhs.property = $"{HandleFunction(keyword)}({rhs.property})";
                                HandleAssignment(lhs, rhs);
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "RULE":
                            {
                                var identifier = labelOrStatement;
                                var lhsSetter = GetValueAndType(identifier, "lhsSetter", false);
                                var lhsGetter = GetValueAndType(identifier, "lhsGetter");
                                var assignmentOp1 = GetNextToken();
                                if (assignmentOp1 == "-" || assignmentOp1 == "+" || assignmentOp1 == "*" || assignmentOp1 == "/")
                                {
                                    var assignmentOp2 = GetNextToken();
                                    if (assignmentOp2 != "=")
                                    {
                                        throw new Exception("Expected: =");
                                    }
                                }
                                var ruleStringBuilder = new StringBuilder();
                                var token = GetNextToken();
                                while (token != ";")
                                {
                                    var tokenAndType = GetValueAndType(token, "temp");
                                    if (tokenAndType.propertyType == PropertyType.Function)
                                    {
                                        tokenAndType.property = HandleFunction(tokenAndType.property);
                                    }
                                    ruleStringBuilder.Append(tokenAndType.property);
                                    token = GetNextToken();
                                }
                                switch (assignmentOp1)
                                {
                                    case "=":
                                        HandleAssignment(lhsSetter, (ruleStringBuilder.ToString(), PropertyType.Float, ObjectType.World, null));
                                        break;
                                    case "+":
                                        HandleAdd(lhsGetter, lhsSetter, (ruleStringBuilder.ToString(), PropertyType.Float, ObjectType.World, null), "ADD");
                                        break;
                                    case "-":
                                        HandleAdd(lhsGetter, lhsSetter, (ruleStringBuilder.ToString(), PropertyType.Float, ObjectType.World, null), "SUB");
                                        break;
                                    case "*":
                                        HandleAdd(lhsGetter, lhsSetter, (ruleStringBuilder.ToString(), PropertyType.Float, ObjectType.World, null), "MUL");
                                        break;
                                    case "/":
                                        HandleAdd(lhsGetter, lhsSetter, (ruleStringBuilder.ToString(), PropertyType.Float, ObjectType.World, null), "DIV");
                                        break;
                                }
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "SET":
                        case "SET_ALL":
                            {
                                var identifier = labelOrStatement;
                                var value = GetValue();
                                var rhs = GetValueAndType(value, "rhs");
                                var lhs = GetValueAndType(identifier, "lhs", false, rhs.propertyType);
                                if (rhs.propertyType == PropertyType.Function)
                                {
                                    rhs.property = HandleFunction(rhs.property);
                                }
                                HandleAssignment(lhs, rhs, keyword == "SET_ALL");
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "ACCEL":
                        case "SUB":
                        case "ADD":
                        case "ADDT":
                        case "RANDOMIZE":
                            {
                                var identifier = labelOrStatement;
                                var value = GetValue();
                                var rhs = GetValueAndType(value, "rhs");
                                var lhsGetter = GetValueAndType(identifier, "lhs", true, rhs.propertyType);
                                var lhsSetter = GetValueAndType(identifier, "lhs", false, rhs.propertyType);
                                if (rhs.propertyType == PropertyType.Function)
                                {
                                    rhs.property = HandleFunction(rhs.property);
                                }
                                HandleAdd(lhsGetter, lhsSetter, rhs, keyword);
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "WAITT":
                        case "WAIT_TICKS":
                        case "WAIT":
                            {
                                var value = GetValue(labelOrStatement);
                                var rhs = GetValueAndType(value, "rhs", true, PropertyType.Float);
                                if (rhs.propertyType == PropertyType.Function)
                                {
                                    rhs.property = HandleFunction(rhs.property);
                                }
                                VariablesStringBuilder.AppendLine($"float startTime{_coroutineCounter};");
                                VariablesStringBuilder.AppendLine($"float endTime{_coroutineCounter};");
                                //if (World.Instance.CustomStateMachines)
                                //{
                                    JumpTableStringBuilder.AppendLine($"            case {_coroutineCounter}:");
                                    JumpTableStringBuilder.AppendLine($"                goto _coroutine{_coroutineCounter};");
                                //}
                                if (keyword == "WAIT")
                                {
                                    MethodBodyStringBuilder.AppendFormat(/*World.Instance.CustomStateMachines ?*/ CustomWaitTicks  /*:WaitTicks*/, rhs.property, _coroutineCounter++).AppendLine();
                                }
                                else
                                {
                                    MethodBodyStringBuilder.AppendFormat(/*World.Instance.CustomStateMachines ?*/ CustomWaitCycles  /*:WaitCycles*/, rhs.property, _coroutineCounter++).AppendLine();
                                }
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "CALL":
                            {
                                HandleCall(labelOrStatement);
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "BRANCH":
                            {
                                HandleCall(labelOrStatement);
                                MethodBodyStringBuilder.AppendLine(/*World.Instance.CustomStateMachines ?*/ "return false;" /*: "yield break;"*/);
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "SKIP":
                            {
                                var count = float.Parse(GetValue(labelOrStatement));
                                if (count < 0)
                                {
                                    throw new Exception("Die: can't go back in instructions");
                                }
                                var skipName = $"skip_{_varCounter++}";
                                MethodBodyStringBuilder.Append("goto ").Append(skipName).AppendLine(";");
                                _skips.Add(new Tuple<string, float>(skipName, count));
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "GOTO":
                            {
                                var label = labelOrStatement;
                                MethodBodyStringBuilder.Append("goto ").Append(Sanitize(label)).AppendLine(";");
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "END":
                            {
                                MethodBodyStringBuilder.AppendLine(/*World.Instance.CustomStateMachines ?*/ "return false;" /*: "yield break;"*/);
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "EXIT":
                            {
                                MethodBodyStringBuilder.AppendLine("Application.Quit();");
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "LEVEL":
                            {
                                //TODO: this is hacky, as there is no way to pass a string directly here, or I'm just to tired to remember
                                var filename = labelOrStatement == "<" ? GetNextToken() : labelOrStatement;
                                var next = GetValue();
                                if (next == "<")
                                {
                                    next = GetValue();
                                }
                                if (next == ">")
                                {
                                    next = GetValue();
                                }
                                if (next != ";")
                                {
                                    MethodBodyStringBuilder.Append("_world.LoadLevel(\"").Append(filename).Append("\",\"").Append(next).AppendLine("\");");
                                }
                                else
                                {
                                    MethodBodyStringBuilder.Append("_world.LoadLevel(\"").Append(filename).AppendLine("\");");
                                }
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "MAP":
                        {
                            //TODO: this is hacky, as there is no way to pass a string directly here, or I'm just to tired to remember
                            if (labelOrStatement != ";")
                            {
                                var filename = labelOrStatement == "<" ? GetNextToken() : labelOrStatement;
                                var next = GetValue();
                                if (next == "<")
                                {
                                    next = GetValue();
                                }
                                if (next == ">")
                                {
                                    next = GetValue();
                                }
                                MethodBodyStringBuilder.Append("_world.LoadLevel(\"").Append(filename).AppendLine("\");");
                            }
                            else
                            {
                                MethodBodyStringBuilder.Append("_world.LoadLevel(\"").Append(WDLFilename).AppendLine("\");");
                            }
                            break;
                        }
                        case "PLAY_SONG":
                            {
                                var volume = GetValue();
                                var lhs = GetValueAndType(labelOrStatement, "lhs");
                                var rhs = GetValueAndType(volume, "rhs");
                                MethodBodyStringBuilder.Append("_world.PlaySong(").Append(lhs.property).Append(",").Append(rhs.property).AppendLine(");");
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "PLAY_SOUND":
                            {
                                var volume = GetValue();
                                var lhs = GetValueAndType(labelOrStatement, "lhs");
                                var rhs = GetValueAndType(volume, "rhs");
                                var next = GetNextToken();
                                if (next != ";")
                                {
                                    var rhs2 = GetValueAndType(next, "rhs2");
                                    MethodBodyStringBuilder.Append("_world.PlaySound(").Append(lhs.property).Append(",").Append(rhs.property).Append(",").Append(rhs2.property).AppendLine(");");
                                }
                                else
                                {
                                    MethodBodyStringBuilder.Append("_world.PlaySound(").Append(lhs.property).Append(",").Append(rhs.property).AppendLine(", null);");
                                }
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "SHIFT":
                            {
                                var lhs = GetValueAndType(labelOrStatement, "lhs");
                                var rhs = GetValueAndType(GetValue(), "rhs");
                                var rhs2 = GetValueAndType(GetValue(), "rhs2");
                                MethodBodyStringBuilder.Append("_world.Shift(").Append(lhs.property).Append(",").Append(rhs.property).Append(",").Append(rhs2.property).AppendLine(");");
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "LIFT":
                            {
                                var zValue = GetValue();
                                var lhs = GetValueAndType(labelOrStatement, "lhs");
                                var rhs = GetValueAndType(zValue, "rhs");
                                MethodBodyStringBuilder.Append("_world.Lift(").Append(lhs.property).Append(",").Append(rhs.property).AppendLine(");");
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "ROTATE":
                            {
                                var radians = GetValue();
                                var lhs = GetValueAndType(labelOrStatement, "lhs");
                                var rhs = GetValueAndType(radians, "rhs");
                                MethodBodyStringBuilder.Append("_world.Rotate(").Append(lhs.property).Append(",").Append(rhs.property).AppendLine(");");
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "FADE_PAL":
                            {
                                var factor = GetValue();
                                var lhs = GetValueAndType(labelOrStatement, "lhs");
                                var rhs = GetValueAndType(factor, "rhs");
                                MethodBodyStringBuilder.Append("_world.FadePal(").Append(lhs.property).Append(",").Append(rhs.property).AppendLine(");");
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "SHOOT":
                        case "EXPLODE":
                            {
                                var method = keyword == "SHOOT" ? "Shoot" : "Explode";
                                var next = labelOrStatement;
                                if (next != ";")
                                {
                                    var rhs = GetValueAndType(next, "rhs");
                                    MethodBodyStringBuilder.Append($"_world.{method}(").Append(rhs.property).AppendLine(", MY, THERE);");
                                }
                                else
                                {
                                    MethodBodyStringBuilder.AppendLine($"_world.{method}(null, MY, THERE);");
                                }
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "DROP":
                            {
                                var lhs = GetValueAndType(labelOrStatement, "rhs");
                                var droppedName = $"dropped_{_varCounter++}";
                                VariablesStringBuilder.AppendLine($"IAcknexObject {droppedName};");
                                /*!!!*/
                                MethodBodyStringBuilder.Append(droppedName).Append(" = ");
                                MethodBodyStringBuilder.Append("_world.Drop(").Append(lhs.property).AppendLine(", MY, THERE);");
                                _dropped.Add(labelOrStatement, droppedName);
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "INKEY":
                            {
                                var lhs = GetValueAndType(labelOrStatement, "lhs");
                                MethodBodyStringBuilder.Append("_world.ReadInkey(").Append(lhs.property).AppendLine(");");
                                HandleIfStack();
                                ReadUntilSemiColon();
                                break;
                            }
                        case "IF_MAX":
                            {
                                var identifier = labelOrStatement;
                                var lhs = GetValueAndType(identifier, "lhs");
                                MethodBodyStringBuilder.Append("if (").Append(lhs.property).Append(" > ").Append(lhs.source).AppendLine(".GetFloat(PropertyName.MAX))");
                                MethodBodyStringBuilder.AppendLine("{");
                                _ifStack++;
                                ReadUntilSemiColon();
                                break;
                            }
                        case "IF_EQUAL":
                        case "IF_NEQUAL":
                        case "IF_ABOVE":
                        case "IF_BELOW":
                            {
                                var identifier = labelOrStatement;
                                var value = GetValue();
                                var rhs = GetValueAndType(value, "rhs");
                                var lhs = GetValueAndType(identifier, "lhs");
                                if (lhs.propertyType == PropertyType.Function)
                                {
                                    lhs.property = HandleFunction(lhs.property);
                                }
                                if (rhs.propertyType == PropertyType.Function)
                                {
                                    rhs.property = HandleFunction(rhs.property);
                                }
                                switch (keyword)
                                {
                                    case "IF_EQUAL":
                                        MethodBodyStringBuilder.Append("if (Game.CheckEquals(").Append(lhs.property).Append(" , ").Append(rhs.property).AppendLine("))");
                                        break;
                                    case "IF_NEQUAL":
                                        MethodBodyStringBuilder.Append("if (!Game.CheckEquals(").Append(lhs.property).Append(" , ").Append(rhs.property).AppendLine("))");
                                        break;
                                    case "IF_BELOW":
                                        MethodBodyStringBuilder.Append("if (MathUtils.CheckLower(").Append(lhs.property).Append(" , ").Append(rhs.property).AppendLine("))");
                                        break;
                                    default:
                                        MethodBodyStringBuilder.Append("if (MathUtils.CheckGreater(").Append(lhs.property).Append(" , ").Append(rhs.property).AppendLine("))");
                                        break;
                                }
                                MethodBodyStringBuilder.AppendLine("{");
                                _ifStack++;
                                ReadUntilSemiColon();
                                break;
                            }
                        default:
                            MethodBodyStringBuilder.Append("//Unknown keyword: ").Append(keyword).AppendLine();
                            Debug.LogWarning("<color=#00FF00>Unkown action keyword [" + keyword + "]</color>");
                            HandleIfStack();
                            ReadUntilSemiColon();
                            break;
                    }
                }
            } while (_currentToken != null);
        }

        private string GetNextToken()
        {
            if (_tokenIndex < Tokens.Count)
            {
                _currentToken = Tokens[_tokenIndex++];
            }
            else
            {
                _currentToken = null;
            }
            return _currentToken;
        }

        private void HandleCall(string labelOrStatement)
        {
            var nameId = NameUtils.ToNameId(labelOrStatement, false, false);
            if (!World.Instance.SynonymsByName.ContainsKey(nameId))
            {
                //if (World.Instance.CustomStateMachines)
                //{
                    MethodBodyStringBuilder.AppendFormat(CustomCallCoroutine, $"CoroutinePool.Get<{Sanitize(labelOrStatement)}>()");
                //}
                //else
                //{
                //    MethodBodyStringBuilder.AppendFormat(CallCoroutine, $"{Sanitize(labelOrStatement)}(MY, THERE)");
                //}
            }
            else
            {
                string actionGetter;
                actionGetter = $"_world.CallSynonymAction({nameId}, MY, THERE)";
                MethodBodyStringBuilder.AppendFormat(CallCoroutine, actionGetter);
            }
        }

        private void ReadUntilSemiColon()
        {
            while (_currentToken != null && _currentToken != ";")
            {
                GetNextToken();
            }
        }

        private string HandleFunction(string property)
        {
            switch (property)
            {
                case "SIN":
                    return "MathUtils.Sin";
                case "COS":
                    return "MathUtils.Cos";
                case "TAN":
                    return "MathUtils.Tan";
                case "ASIN":
                    return "MathUtils.Asin";
                case "ACOS":
                    return "MathUtils.Acos";
                case "LOG":
                    return "MathUtils.Log";
                case "LOG10":
                    return "MathUtils.Log10";
                case "LOG2":
                    return "MathUtils.Log2";
                case "SQRT":
                    return "MathUtils.Sqrt";
                case "SIGN":
                    return "MathUtils.Sign";
                case "ABS":
                    return "MathUtils.Abs";
                case "INT":
                    return "MathUtils.RoundToInt";
                case "EXP":
                    return "MathUtils.Exp";
                case "RANDOM":
                    return "UnityEngine.Random.value";
            }
            throw new Exception("Unknown function:" + property);
        }

        private string GetValue(string existingValue = null)
        {
            var result = string.Empty;
            var value = existingValue ?? GetNextToken();
            if (value == "-")
            {
                result += value;
                value = GetNextToken();
            }
            result += value;
            return result;
        }

        private void HandleIfStack()
        {
            if (_ifStack > 0)
            {
                MethodBodyStringBuilder.AppendLine("}");
                _ifStack--;
            }
        }

        private void HandleAssignment((string property, PropertyType propertyType, ObjectType objectType, string source) lhs, (string property, PropertyType propertyType, ObjectType objectType, string source) rhs, bool setAll = false)
        {
            var rhsPropertyNameId = NameUtils.ToNameId(rhs.property, true, rhs.objectType == ObjectType.Skill, rhs.objectType == ObjectType.Synonym);
            var lhsPropertyNameId = NameUtils.ToNameId(lhs.property, true, lhs.objectType == ObjectType.Skill, lhs.objectType == ObjectType.Synonym);
            switch (lhs.objectType)
            {
                case ObjectType.Synonym:
                    if (lhs.property == "MY" || lhs.property == "THERE")
                    {
                        MethodBodyStringBuilder.Append(lhs.property).Append(" = ").Append(rhs.property).AppendLine(";");
                    }
                    else
                    {
                        MethodBodyStringBuilder.AppendLine($"_world.SetSynonymObject({lhsPropertyNameId},{rhs.property});");
                    }
                    break;
                default:
                    switch (lhs.propertyType)
                    {
                        case PropertyType.Float:
                            if (setAll)
                            {
                                MethodBodyStringBuilder.Append($"{lhs.source}.SetFloatAll(").Append(lhsPropertyNameId).Append(",").Append(rhs.property).AppendLine(");");
                            }
                            else
                            {
                                MethodBodyStringBuilder.Append($"{lhs.source}.SetFloat(").Append(lhsPropertyNameId).Append(",").Append(rhs.property).AppendLine(");");
                            }
                            break;
                        case PropertyType.Null:
                        case PropertyType.String:
                            if (setAll)
                            {
                                MethodBodyStringBuilder.Append($"{lhs.source}.SetStringAll(").Append(lhsPropertyNameId).Append(",").Append(rhs.property).AppendLine(");");
                            }
                            else
                            {
                                MethodBodyStringBuilder.Append($"{lhs.source}.SetString(").Append(lhsPropertyNameId).Append(",").Append(rhs.property).AppendLine(");");
                            }
                            break;
                        case PropertyType.ObjectReferenceList:
                            VariablesStringBuilder.AppendLine($"List<IAcknexObject> {lhs.source}_array;");
                            VariablesStringBuilder.AppendLine($"int {lhs.source}_index;");
                            /*!!!*/
                            MethodBodyStringBuilder.Append($"{lhs.source}_array = {lhs.source}.GetObject<List<IAcknexObject>>(").Append(lhsPropertyNameId).AppendLine(");");
                            /*!!!*/
                            MethodBodyStringBuilder.AppendLine($"{lhs.source}_index = {lhs.source}.GetInteger(PropertyName.INDEX);");
                            MethodBodyStringBuilder.Append($"{lhs.source}_array[{lhs.source}_index-1] = ").Append(rhs.property).AppendLine(";");
                            MethodBodyStringBuilder.AppendLine($"{lhs.source}.IsDirty = true;");
                            break;
                        case PropertyType.ActionReference:
                        case PropertyType.ObjectReference:
                            if (setAll)
                            {
                                MethodBodyStringBuilder.Append($"{lhs.source}.SetAcknexObjectAll(").Append(lhsPropertyNameId).Append(",").Append(rhs.property).AppendLine(");");
                            }
                            else
                            {
                                MethodBodyStringBuilder.Append($"{lhs.source}.SetAcknexObject(").Append(lhsPropertyNameId).Append(",").Append(rhs.property).AppendLine(");");
                            }
                            break;
                    }
                    break;
            }
        }

        private void HandleAdd((string property, PropertyType propertyType, ObjectType objectType, string source) lhsGetter, (string property, PropertyType propertyType, ObjectType objectType, string source) lhsSetter, (string property, PropertyType propertyType, ObjectType objectType, string source) rhs, string mode)
        {
            var lhsPropertyNameId = NameUtils.ToNameId(lhsSetter.property, true, lhsSetter.objectType == ObjectType.Skill, lhsSetter.objectType == ObjectType.Synonym);
            switch (lhsGetter.propertyType)
            {
                case PropertyType.Float:
                    if (mode == "ADDT")
                    {
                        MethodBodyStringBuilder.Append($"{lhsSetter.source}.SetFloat(").Append(lhsPropertyNameId).Append(",").Append(lhsGetter.property).Append(" + (").Append(rhs.property).AppendLine(" * _world.GetSkillValue(SkillName.TIME_CORR)));");
                    }
                    else if (mode == "ACCEL")
                    {
                        MethodBodyStringBuilder.Append($"{lhsSetter.source}.SetFloat(").Append(lhsPropertyNameId).Append(",").Append("_world.Accelerate(").Append(lhsGetter.property).Append(",").Append(rhs.property).AppendLine("));");
                    }
                    else if (mode == "ADD")
                    {
                        MethodBodyStringBuilder.Append($"{lhsSetter.source}.SetFloat(").Append(lhsPropertyNameId).Append(",").Append(lhsGetter.property).Append(" + ").Append(rhs.property).AppendLine(");");
                    }
                    else if (mode == "SUB")
                    {
                        MethodBodyStringBuilder.Append($"{lhsSetter.source}.SetFloat(").Append(lhsPropertyNameId).Append(",").Append(lhsGetter.property).Append(" - ").Append(rhs.property).AppendLine(");");
                    }
                    else if (mode == "DIV")
                    {
                        MethodBodyStringBuilder.Append($"{lhsSetter.source}.SetFloat(").Append(lhsPropertyNameId).Append(",").Append(lhsGetter.property).Append(" / ").Append(rhs.property).AppendLine(");");
                    }
                    if (mode == "MUL")
                    {
                        MethodBodyStringBuilder.Append($"{lhsSetter.source}.SetFloat(").Append(lhsPropertyNameId).Append(",").Append(lhsGetter.property).Append(" * ").Append(rhs.property).AppendLine(");");
                    }
                    if (mode == "RANDOMIZE")
                    {
                        MethodBodyStringBuilder.Append($"{lhsSetter.source}.SetFloat(").Append(lhsPropertyNameId).Append(",").Append("Random.Range(0f, ").Append(rhs.property).AppendLine("));");
                    }
                    break;
            }
        }


        private (string property, PropertyType propertyType, ObjectType objectType, string source) GetValueAndType(string objectOrPropertyOrValue, string propertyAssignmentVariable = "propertyValue", bool outputGetter = true, PropertyType returnType = PropertyType.Null)
        {
            propertyAssignmentVariable = Sanitize(objectOrPropertyOrValue);
            propertyAssignmentVariable += $"_{_varCounter++}";
            switch (objectOrPropertyOrValue)
            {
                case "SIN":
                case "COS":
                case "TAN":
                case "ASIN":
                case "ACOS":
                case "LOG":
                case "LOG10":
                case "LOG2":
                case "RANDOM":
                case "SQRT":
                case "SIGN":
                case "ABS":
                case "INT":
                case "EXP":
                    return (objectOrPropertyOrValue, PropertyType.Function, ObjectType.World, propertyAssignmentVariable);
                case "-":
                case "+":
                case "*":
                case "/":
                case "%":
                case "|":
                case "^":
                case "&":
                    return (objectOrPropertyOrValue, PropertyType.Operator, ObjectType.World, propertyAssignmentVariable);
                case "(":
                    return (objectOrPropertyOrValue, PropertyType.LeftParen, ObjectType.World, propertyAssignmentVariable);
                case ")":
                    return (objectOrPropertyOrValue, PropertyType.RightParen, ObjectType.World, propertyAssignmentVariable);
            }
            if (objectOrPropertyOrValue.StartsWith("<") && objectOrPropertyOrValue.EndsWith(">"))
            {
                return (objectOrPropertyOrValue.Substring(1, objectOrPropertyOrValue.Length - 2), PropertyType.Filename, ObjectType.Internal, null);
            }
            var nameId = NameUtils.ToNameId(objectOrPropertyOrValue, true, true, false);
            if (World.Instance.SkillsByName.ContainsKey(nameId))
            {
                VariablesStringBuilder.AppendLine($"IAcknexObject {propertyAssignmentVariable};");
                /*!!!*/
                MethodBodyStringBuilder.Append($"{propertyAssignmentVariable} = _world.GetObject(ObjectType.Skill,").Append(nameId).AppendLine(");");
                if (outputGetter)
                {
                    var objectAssignmentVariable = $"{propertyAssignmentVariable}_val";
                    VariablesStringBuilder.AppendLine($"float {objectAssignmentVariable};");
                    /*!!!*/
                    MethodBodyStringBuilder.AppendLine($"{objectAssignmentVariable} = {propertyAssignmentVariable}.GetFloat(PropertyName.VAL);");
                    return (objectAssignmentVariable, PropertyType.Float, ObjectType.Skill, propertyAssignmentVariable);
                }
                return ("VAL", PropertyType.Float, ObjectType.Skill, propertyAssignmentVariable);
            }
            if (!outputGetter)
            {
                propertyAssignmentVariable = objectOrPropertyOrValue;
            }
            if (objectOrPropertyOrValue == "NULL")
            {
                return ("null", PropertyType.Null, ObjectType.Internal, null);
            }
            if (float.TryParse(objectOrPropertyOrValue, NumberStyles.Any, CultureInfo.InvariantCulture, out var floatValue))
            {
                return (floatValue.ToString(CultureInfo.InvariantCulture) + "f", PropertyType.Float, ObjectType.Internal, null);
            }
            if (HandleObject(objectOrPropertyOrValue, propertyAssignmentVariable, outputGetter, out var valueAndType))
            {
                return valueAndType;
            }
            var valueIndexOfDot = objectOrPropertyOrValue.IndexOf(".");
            if (valueIndexOfDot > -1)
            {
                var valueObjectName = objectOrPropertyOrValue.Substring(0, valueIndexOfDot);
                var objectAssignmentVariable = Sanitize(valueObjectName); //$"acknexObject_{_varCounter}";
                objectAssignmentVariable += $"_{_varCounter++}";
                HandleObject(valueObjectName, objectAssignmentVariable, true, out var innerObjectDeclaration);
                var valueProperty = objectOrPropertyOrValue.Substring(valueIndexOfDot + 1);
                var valueObjectNameId = NameUtils.ToNameId(valueObjectName);
                if (World.Instance.SynonymsByName.ContainsKey(valueObjectNameId))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Synonym, valueObjectName);
                }
                if (World.Instance.ActorsByName.ContainsKey(valueObjectNameId))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Actor);
                }
                if (World.Instance.ThingsByName.ContainsKey(valueObjectNameId))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Thing);
                }
                if (World.Instance.WallsByName.ContainsKey(valueObjectNameId))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Wall);
                }
                if (World.Instance.RegionsByName.ContainsKey(valueObjectNameId))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Region);
                }
                if (World.Instance.WallsByName.ContainsKey(valueObjectNameId))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Wall);
                }
                if (World.Instance.TexturesByName.ContainsKey(valueObjectNameId))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Texture);
                }
                if (World.Instance.BitmapsByName.ContainsKey(valueObjectNameId))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Bitmap);
                }
                if (World.Instance.WaysByName.ContainsKey(valueObjectNameId))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Way);
                }
                if (World.Instance.ActorsByName.ContainsKey(valueObjectNameId))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Actor);
                }
                if (World.Instance.SkillsByName.ContainsKey(valueObjectNameId))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Skill);
                }
                if (World.Instance.TextsByName.ContainsKey(valueObjectNameId))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Text);
                }
                if (World.Instance.PanelsByName.ContainsKey(valueObjectNameId))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Panel);
                }
                if (World.Instance.SoundsByName.ContainsKey(valueObjectNameId))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Sound);
                }
                if (World.Instance.SongsByName.ContainsKey(valueObjectNameId))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Song);
                }
                if (World.Instance.OverlaysByName.ContainsKey(valueObjectNameId))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Overlay);
                }
                if (World.Instance.PalettesByName.ContainsKey(valueObjectNameId))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Palette);
                }
            }
            return GetObjectPropertyValueAndType(propertyAssignmentVariable, objectOrPropertyOrValue, "_world.AcknexObject", outputGetter, ObjectType.World);
        }

        private bool HandleObject(string objectName, string assignmentVariable, bool outputGetter, out (string property, PropertyType propertyType, ObjectType objectType, string source) valueAndType)
        {
            //objectName = string.Intern(objectName);
            var nameId = NameUtils.ToNameId(objectName);

            void HandleDroppedObjects()
            {
                if (outputGetter)
                {
                    if (_dropped.TryGetValue(objectName, out var dropped))
                    {
                        VariablesStringBuilder.AppendLine($"IAcknexObject {assignmentVariable};");
                        /*!!!*/
                        MethodBodyStringBuilder.AppendLine($"{assignmentVariable} = {dropped};");
                    }
                    else
                    {
                        VariablesStringBuilder.AppendLine($"IAcknexObject {assignmentVariable};");
                        /*!!!*/
                        MethodBodyStringBuilder.Append($"{assignmentVariable} = _world.AcknexObject.GetAcknexObject(").Append(nameId).AppendLine(");");
                    }
                }
            }

            if (World.Instance.StringsByName.ContainsKey(nameId))
            {
                if (outputGetter)
                {
                    VariablesStringBuilder.AppendLine($"IAcknexObject {assignmentVariable};");
                    /*!!!*/
                    MethodBodyStringBuilder.Append($"{assignmentVariable} = _world.AcknexObject.GetAcknexObject(").Append(nameId).AppendLine(");");
                }
                valueAndType = (assignmentVariable, PropertyType.ObjectReference, ObjectType.String, "_world.AcknexObject");
                return true;
            }
            if (World.Instance.SynonymsByName.ContainsKey(nameId))
            {
                if (outputGetter)
                {
                    if (objectName == "MY" || objectName == "THERE")
                    {
                        VariablesStringBuilder.AppendLine($"IAcknexObject {assignmentVariable};");
                        /*!!!*/
                        MethodBodyStringBuilder.Append($"{assignmentVariable} = ").Append(objectName).AppendLine(";");
                    }
                    else
                    {
                        if (_dropped.TryGetValue(objectName, out var dropped))
                        {
                            VariablesStringBuilder.AppendLine($"IAcknexObject {assignmentVariable};");
                            /*!!!*/
                            MethodBodyStringBuilder.AppendLine($"{assignmentVariable} = {dropped};");
                        }
                        else
                        {
                            VariablesStringBuilder.AppendLine($"IAcknexObject {assignmentVariable};");
                            /*!!!*/
                            MethodBodyStringBuilder.Append($"{assignmentVariable} = _world.GetSynonymObject(").Append(nameId).AppendLine(");");
                        }
                    }
                }
                valueAndType = (assignmentVariable, PropertyType.ObjectReference, ObjectType.Synonym, "_world.AcknexObject");
                return true;
            }
            if (World.Instance.ActionsByName.ContainsKey(nameId))
            {
                HandleDroppedObjects();
                valueAndType = (assignmentVariable, PropertyType.ObjectReference, ObjectType.Action, "_world.AcknexObject");
                return true;
            }
            if (World.Instance.ActorsByName.ContainsKey(nameId))
            {
                HandleDroppedObjects();
                valueAndType = (assignmentVariable, PropertyType.ObjectReference, ObjectType.Actor, "_world.AcknexObject");
                return true;
            }
            if (World.Instance.ThingsByName.ContainsKey(nameId))
            {
                HandleDroppedObjects();
                valueAndType = (assignmentVariable, PropertyType.ObjectReference, ObjectType.Thing, "_world.AcknexObject");
                return true;
            }
            if (World.Instance.TexturesByName.ContainsKey(nameId))
            {
                HandleDroppedObjects();
                valueAndType = (assignmentVariable, PropertyType.ObjectReference, ObjectType.Texture, "_world.AcknexObject");
                return true;
            }
            if (World.Instance.WallsByName.ContainsKey(nameId))
            {
                HandleDroppedObjects();
                valueAndType = (assignmentVariable, PropertyType.ObjectReference, ObjectType.Wall, "_world.AcknexObject");
                return true;
            }
            if (World.Instance.RegionsByName.ContainsKey(nameId))
            {
                HandleDroppedObjects();
                valueAndType = (assignmentVariable, PropertyType.ObjectReference, ObjectType.Region, "_world.AcknexObject");
                return true;
            }
            if (World.Instance.SkillsByName.ContainsKey(nameId))
            {
                HandleDroppedObjects();
                valueAndType = (assignmentVariable, PropertyType.ObjectReference, ObjectType.Skill, "_world.AcknexObject");
                return true;
            }
            if (World.Instance.TextsByName.ContainsKey(nameId))
            {
                HandleDroppedObjects();
                valueAndType = (assignmentVariable, PropertyType.ObjectReference, ObjectType.Text, "_world.AcknexObject");
                return true;
            }
            if (World.Instance.PanelsByName.ContainsKey(nameId))
            {
                HandleDroppedObjects();
                valueAndType = (assignmentVariable, PropertyType.ObjectReference, ObjectType.Panel, "_world.AcknexObject");
                return true;
            }
            if (World.Instance.OverlaysByName.ContainsKey(nameId))
            {
                HandleDroppedObjects();
                valueAndType = (assignmentVariable, PropertyType.ObjectReference, ObjectType.Overlay, "_world.AcknexObject");
                return true;
            }
            if (World.Instance.SoundsByName.ContainsKey(nameId))
            {
                HandleDroppedObjects();
                valueAndType = (assignmentVariable, PropertyType.ObjectReference, ObjectType.Sound, "_world.AcknexObject");
                return true;
            }
            if (World.Instance.SongsByName.ContainsKey(nameId))
            {
                HandleDroppedObjects();
                valueAndType = (assignmentVariable, PropertyType.ObjectReference, ObjectType.Song, "_world.AcknexObject");
                return true;
            }
            if (World.Instance.WaysByName.ContainsKey(nameId))
            {
                HandleDroppedObjects();
                valueAndType = (assignmentVariable, PropertyType.ObjectReference, ObjectType.Way, "_world.AcknexObject");
                return true;
            }
            if (World.Instance.PalettesByName.ContainsKey(nameId))
            {
                HandleDroppedObjects();
                valueAndType = (assignmentVariable, PropertyType.ObjectReference, ObjectType.Palette, "_world.AcknexObject");
                return true;
            }
            valueAndType = ("_world.AcknexObject", PropertyType.ObjectReference, ObjectType.World, null);
            return false;
        }

        private (string property, PropertyType propertyType, ObjectType objectType, string source) GetObjectPropertyValueAndType(string assignmentVariable, string property, string sourceObject, bool outputGetter, ObjectType objectType, string originalName = null)
        {
            if (objectType == ObjectType.Synonym && originalName != null)
            {
                var originalNameId = NameUtils.ToNameId(originalName);
                objectType = World.Instance.GetSynonymType(originalNameId);
            }
            var mappedProperty = Mappings.MapProperty(property);
            var propertyType = World.Instance.GetPropertyType(objectType, mappedProperty);
            if (propertyType == PropertyType.Unknown)
            {
                MethodBodyStringBuilder.Append("//Unknown Property Type: ").Append(objectType).Append(".").Append(property).AppendLine();
            }
            var propertyNameId = NameUtils.ToNameId(property, true, objectType == ObjectType.Skill, objectType == ObjectType.Synonym);
            if (outputGetter)
            {
                switch (propertyType)
                {
                    case PropertyType.Float:
                        VariablesStringBuilder.AppendLine($"float temp_{_varCounter};");
                        /*!!!*/
                        MethodBodyStringBuilder.Append($"temp_{_varCounter} =").Append($"{(objectType == ObjectType.World ? "_world.AcknexObject" : assignmentVariable)}.GetFloat(").Append(propertyNameId).AppendLine(");");
                        break;
                    case PropertyType.Null:
                    case PropertyType.String:
                        VariablesStringBuilder.AppendLine($"IAcknexObject temp_{_varCounter};");
                        /*!!!*/
                        MethodBodyStringBuilder.Append($"temp_{_varCounter} =").Append($"{(objectType == ObjectType.World ? "_world.AcknexObject" : assignmentVariable)}.GetString(\"").Append(property).AppendLine("\");");
                        break;
                    case PropertyType.ActionReference:
                    case PropertyType.ObjectReference:
                        VariablesStringBuilder.AppendLine($"IAcknexObject temp_{_varCounter};");
                        /*!!!*/
                        MethodBodyStringBuilder.Append($"temp_{_varCounter} =").Append($"{(objectType == ObjectType.World ? "_world.AcknexObject" : assignmentVariable)}?.GetAcknexObject(").Append(propertyNameId).AppendLine(");");
                        break;
                    case PropertyType.ObjectReferenceList:
                        VariablesStringBuilder.AppendLine($"IAcknexObject temp_{_varCounter};");
                        VariablesStringBuilder.AppendLine($"List<IAcknexObject> temp_{_varCounter}_array;");
                        VariablesStringBuilder.AppendLine($"int temp_{_varCounter}_index;");
                        /*!!!*/
                        //MethodBodyStringBuilder.AppendLine($"temp_{_varCounter};");
                        /*!!!*/
                        MethodBodyStringBuilder.Append($"temp_{_varCounter}_array =").Append($"{(objectType == ObjectType.World ? "_world.AcknexObject" : assignmentVariable)}?.GetObject<List<IAcknexObject>>(").Append(propertyNameId).AppendLine(");");
                        MethodBodyStringBuilder.AppendLine($"if (temp_{_varCounter}_array == null || temp_{_varCounter}_array.Count == 0) {{");
                        MethodBodyStringBuilder.AppendLine($"  temp_{_varCounter} = null;");
                        MethodBodyStringBuilder.AppendLine(" } else {");
                        /*!!!*/
                        MethodBodyStringBuilder.Append($"temp_{_varCounter}_index =").AppendLine($"{(objectType == ObjectType.World ? "_world.AcknexObject" : assignmentVariable)}.GetInteger(PropertyName.INDEX);");
                        MethodBodyStringBuilder.AppendLine($"  temp_{_varCounter} = temp_{_varCounter}_array[temp_{_varCounter}_index-1];");
                        MethodBodyStringBuilder.AppendLine("}");
                        break;
                }
                return ($"temp_{_varCounter++}", propertyType, objectType, sourceObject);
            }
            return objectType == ObjectType.World ? (assignmentVariable, propertyType, objectType, sourceObject) : (property, propertyType, objectType, assignmentVariable);
        }

        private string Sanitize(string value)
        {
            return Regex.Replace(value, @"[^A-z0-9]", "_");
        }
    }
}