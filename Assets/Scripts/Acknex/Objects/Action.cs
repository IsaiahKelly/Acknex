using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Text;
using Acknex.Interfaces;
using Unity.Plastic.Newtonsoft.Json.Linq;
using UnityEngine;

namespace Acknex
{
    //TODO: missing keywords
    //TODO: categorize actions in IEnumerators and not IEnumeratros (depending on actions that uses WAIT or WAITT)
    public class Action : IAcknexObjectContainer
    {
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback);
        public StringBuilder CodeStringBuilder = new StringBuilder();
        public long PositionInFile;
        public BinaryReader BinaryReader;

        private readonly HashSet<string> _rules = new HashSet<string>();
        private int _varCounter;
        private int _ifStack;

        public IEnumerator Coroutine;

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        public Action()
        {
            AcknexObject.Container = this;
        }

        private void Update()
        {
        }

        public void WriteHeader()
        {
            var name = AcknexObject.GetString("NAME");
            CodeStringBuilder.Append("public IEnumerator ").Append(Sanitize(name)).AppendLine("(){");
        }

        public void WriteFooter()
        {
            CodeStringBuilder.AppendLine("yield break;").AppendLine("}");
        }

        public void ParseAllStatements(TextParser textParser)
        {
            BinaryReader.BaseStream.Position = PositionInFile;
            while (BinaryReader.BaseStream.Position < BinaryReader.BaseStream.Length)
            {
                var tokens = textParser.ParseStatement(BinaryReader);
                var keyword = textParser.GetNextToken(tokens);
                var labelOrStatement = textParser.GetNextToken(tokens);
                if (labelOrStatement == ":")
                {
                    CodeStringBuilder.Append(Sanitize(keyword)).AppendLine(":");
                }
                else
                {
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
                            {
                                //todo
                                //var input = labelOrStatement;
                                //var output = textParser.GetNextToken(tokens);
                                break;
                            }
                        case "RULE":
                            {
                                var identifier = labelOrStatement;
                                var identifierAndType = GetValueAndType(identifier, "lhs", false);
                                var assignmentOp1 = textParser.GetNextToken(tokens);
                                //todo: different assignments (-= += /= *=)
                                if (assignmentOp1 == "-" || assignmentOp1 == "+" || assignmentOp1 == "*" || assignmentOp1 == "/")
                                {
                                    var assignmentOp2 = textParser.GetNextToken(tokens);
                                    if (assignmentOp2 != "=")
                                    {
                                        throw new Exception("Expected: =");
                                    }
                                }
                                var ruleStringBuilder = new StringBuilder();
                                var token = textParser.GetNextToken(tokens);
                                while (token != ";")
                                {
                                    var tokenAndType = GetValueAndType(token, "temp");
                                    if (tokenAndType.propertyType == PropertyType.Function)
                                    {
                                        ruleStringBuilder.Append(HandleFunction(tokenAndType.property));
                                    }
                                    else
                                    {
                                        ruleStringBuilder.Append(tokenAndType.property);
                                    }
                                    token = textParser.GetNextToken(tokens);
                                }
                                HandleAssignment(identifierAndType, (ruleStringBuilder.ToString(), PropertyType.Float, ObjectType.World, null));
                                HandleIfStack();
                                ReadUntilSemiColon(tokens);
                                break;
                            }
                        case "SET":
                            {
                                var identifier = labelOrStatement;
                                var value = GetValue(tokens, textParser);
                                var rhs = GetValueAndType(value, "rhs");
                                var lhs = GetValueAndType(identifier, "lhs", false, rhs.propertyType);
                                if (rhs.propertyType == PropertyType.Function)
                                {
                                    rhs.property = HandleFunction(rhs.property);
                                }
                                HandleAssignment(lhs, rhs);
                                HandleIfStack();
                                ReadUntilSemiColon(tokens);
                                break;
                            }
                        case "ADD":
                        case "ADDT":
                            {
                                var identifier = labelOrStatement;
                                var value = GetValue(tokens, textParser);
                                var rhs = GetValueAndType(value, "rhs");
                                var lhsGetter = GetValueAndType(identifier, "lhs", true, rhs.propertyType);
                                var lhsSetter = GetValueAndType(identifier, "lhs", false, rhs.propertyType);
                                if (rhs.propertyType == PropertyType.Function)
                                {
                                    rhs.property = HandleFunction(rhs.property);
                                }
                                HandleAdd(lhsGetter, lhsSetter, rhs, keyword == "ADDT");
                                HandleIfStack();
                                ReadUntilSemiColon(tokens);
                                break;
                            }
                        case "WAITT":
                        case "WAIT":
                            {
                                var value = GetValue(tokens, textParser, labelOrStatement);
                                var rhs = GetValueAndType(value, "rhs", true, PropertyType.Float);
                                if (rhs.propertyType == PropertyType.Function)
                                {
                                    rhs.property = HandleFunction(rhs.property);
                                }
                                if (keyword == "WAIT")
                                {
                                    CodeStringBuilder.Append("yield return new WaitForCycles(").Append(rhs.property).AppendLine(");");
                                }
                                else
                                {
                                    CodeStringBuilder.Append("yield return new WaitForTicks(").Append(rhs.property).AppendLine(");");
                                }
                                HandleIfStack();
                                ReadUntilSemiColon(tokens);
                                break;
                            }
                        case "CALL":
                            {
                                HandleCall(labelOrStatement);
                                HandleIfStack();
                                ReadUntilSemiColon(tokens);
                                break;
                            }
                        case "BRANCH":
                            {
                                HandleCall(labelOrStatement);
                                CodeStringBuilder.AppendLine("yield break;");
                                HandleIfStack();
                                ReadUntilSemiColon(tokens);
                                break;
                            }
                        case "GOTO":
                            {
                                var label = labelOrStatement;
                                CodeStringBuilder.Append("goto ").Append(Sanitize(label)).AppendLine(";");
                                HandleIfStack();
                                ReadUntilSemiColon(tokens);
                                break;
                            }
                        case "END":
                            {
                                CodeStringBuilder.AppendLine("yield break;");
                                HandleIfStack();
                                ReadUntilSemiColon(tokens);
                                break;
                            }
                        case "EXIT":
                            {
                                CodeStringBuilder.AppendLine("Application.Quit();");
                                HandleIfStack();
                                ReadUntilSemiColon(tokens);
                                break;
                            }
                        case "SHOOT":
                            {
                                var next = labelOrStatement;
                                CodeStringBuilder.Append("World.Instance.Shoot(");
                                if (next != ";")
                                {
                                    CodeStringBuilder.Append("\"").Append(next).AppendLine("\");");
                                }
                                else
                                {
                                    CodeStringBuilder.AppendLine(");");
                                }
                                HandleIfStack();
                                ReadUntilSemiColon(tokens);
                                break;
                            }
                        case "INKEY":
                            {
                                var key = labelOrStatement;
                                CodeStringBuilder.Append("World.Instance.ReadInkey(\"").Append(key).AppendLine("\");");
                                HandleIfStack();
                                ReadUntilSemiColon(tokens);
                                break;
                            }
                        case "IF_EQUAL":
                        case "IF_NEQUAL":
                        case "IF_ABOVE":
                        case "IF_BELOW":
                            {
                                var identifier = labelOrStatement;
                                var value = GetValue(tokens, textParser);
                                var rhs = GetValueAndType(value, "rhs");
                                var lhs = GetValueAndType(identifier, "lhs");
                                switch (keyword)
                                {
                                    case "IF_EQUAL":
                                        CodeStringBuilder.Append("if (").Append(lhs.property).Append(" == ").Append(rhs.property).AppendLine(")");
                                        break;
                                    case "IF_NEQUAL":
                                        CodeStringBuilder.Append("if (").Append(lhs.property).Append(" != ").Append(rhs.property).AppendLine(")");
                                        break;
                                    case "IF_BELOW":
                                        CodeStringBuilder.Append("if (").Append(lhs.property).Append(" < ").Append(rhs.property).AppendLine(")");
                                        break;
                                    default:
                                        CodeStringBuilder.Append("if (").Append(lhs.property).Append(" > ").Append(rhs.property).AppendLine(")");
                                        break;
                                }
                                CodeStringBuilder.AppendLine("{");
                                _ifStack++;
                                ReadUntilSemiColon(tokens);
                                break;
                            }
                        default:
                            CodeStringBuilder.Append("//Unknown keyword: ").Append(keyword).AppendLine();
                            Debug.LogWarning("<color=#00FF00>Unkown action keyword [" + keyword + "]</color>");
                            HandleIfStack();
                            ReadUntilSemiColon(tokens);
                            break;
                    }
                }

            }
        }

        private void HandleCall(string labelOrStatement)
        {
            var action = labelOrStatement;
            if (!World.Instance.SynonymsByName.ContainsKey(action))
            {
                CodeStringBuilder.Append("yield return ").Append(Sanitize(action)).AppendLine("();");
            }
            else
            {
                CodeStringBuilder.Append("yield return World.Instance.CallSynonymAction(\"").Append(Sanitize(action)).AppendLine("\");");
            }
        }

        private void ReadUntilSemiColon(IEnumerator<string> tokens)
        {
            while (tokens.Current != null && tokens.Current != ";")
            {
                tokens.MoveNext();
            }
        }

        private string HandleFunction(string property)
        {
            switch (property)
            {
                case "SIN":
                    return "Mathf.Sin";
                case "COS":
                    return "Mathf.Cos";
                case "TAN":
                    return "Mathf.Tan";
                case "ASIN":
                    return "Mathf.Asin";
                case "ACOS":
                    return "Mathf.Acos";
                case "LOG":
                    return "MathExtension.Log";
                case "LOG10":
                    return "Mathf.Log10";
                case "LOG2":
                    return "MathExtension.Log2";
                case "SQRT":
                    return "Mathf.Sqrt";
                case "SIGN":
                    return "Mathf.Sign";
                case "ABS":
                    return "Mathf.Abs";
                case "INT":
                    return "Mathf.RoundToInt";
                case "EXP":
                    return "Mathf.Exp";
                case "RANDOM":
                    return "UnityEngine.Random.value";
            }
            throw new Exception("Unknown function:" + property);
        }

        private string GetValue(IEnumerator<string> tokens, TextParser textParser, string existingValue = null)
        {
            var result = string.Empty;
            var value = existingValue ?? textParser.GetNextToken(tokens);
            if (value == "-")
            {
                result += value;
                value = textParser.GetNextToken(tokens);
            }
            result += value;
            return result;
        }

        private void HandleIfStack()
        {
            if (_ifStack > 0)
            {
                CodeStringBuilder.AppendLine("}");
                _ifStack--;
            }
        }

        private void HandleAssignment((string property, PropertyType propertyType, ObjectType objectType, string source) lhs, (string property, PropertyType propertyType, ObjectType objectType, string source) rhs)
        {
            switch (lhs.objectType)
            {
                case ObjectType.Synonym:
                    CodeStringBuilder.AppendLine($"World.Instance.SetSynonymObject({lhs.property},{rhs.property});");
                    break;
                default:
                    switch (lhs.propertyType)
                    {
                        case PropertyType.Float:
                            CodeStringBuilder.Append($"{lhs.source}.SetFloat(").Append(lhs.property).Append(",").Append(rhs.property).AppendLine(");");
                            break;
                        case PropertyType.Null:
                        case PropertyType.String:
                            CodeStringBuilder.Append($"{lhs.source}.SetString(").Append(lhs.property).Append(",").Append(rhs.property).AppendLine(");");
                            break;
                        case PropertyType.ActionReference:
                            CodeStringBuilder.Append($"{lhs.source}.SetString(").Append(lhs.property).Append(",").Append(rhs.property).AppendLine(rhs.property == "null" ? ");" : ".GetString(\"NAME\"));");
                            break;
                        case PropertyType.ObjectReference:
                            CodeStringBuilder.Append($"{lhs.source}.SetAcknexObject(").Append(lhs.property).Append(",").Append(rhs.property).AppendLine(");");
                            break;
                    }
                    break;
            }
        }

        private void HandleAdd(
            (string property, PropertyType propertyType, ObjectType objectType, string source) lhsGetter,
            (string property, PropertyType propertyType, ObjectType objectType, string source) lhsSetter,
            (string property, PropertyType propertyType, ObjectType objectType, string source) rhs,
            bool perTick
            )
        {
            //switch (lhsGetter.objectType)
            //{
            //    case ObjectType.Skill:
            //    case ObjectType.Action:
            //    case ObjectType.Actor:
            //    case ObjectType.Thing:
            //    case ObjectType.Texture:
            //    case ObjectType.World:
            //    case ObjectType.Way:
            //    case ObjectType.Region:
            //    case ObjectType.Wall:
            //    case ObjectType.Bitmap:
            //    case ObjectType.Overlay:
            switch (lhsGetter.propertyType)
            {
                case PropertyType.Float:
                    if (perTick)
                    {
                        CodeStringBuilder.Append($"{lhsSetter.source}.SetFloat(").Append(lhsSetter.property).Append(",").Append(lhsGetter.property).Append(" + (").Append(rhs.property).AppendLine(" * TimeUtils.TicksToTime(1)));");
                    }
                    else
                    {
                        CodeStringBuilder.Append($"{lhsSetter.source}.SetFloat(").Append(lhsSetter.property).Append(",").Append(lhsGetter.property).Append(" + ").Append(rhs.property).AppendLine(");");
                    }
                    break;
            }
            //        break;
            //}
        }



        (string property, PropertyType propertyType, ObjectType objectType, string source) GetValueAndType(string objectOrPropertyOrValue, string propertyAssignmentVariable = "propertyValue", bool outputGetter = true, PropertyType returnType = PropertyType.Null)
        {
            propertyAssignmentVariable = Sanitize(propertyAssignmentVariable);
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

            if (World.Instance.SkillsByName.ContainsKey(objectOrPropertyOrValue))
            {
                CodeStringBuilder.Append($"var {propertyAssignmentVariable} = World.Instance.GetObject(ObjectType.Skill,\"").Append(objectOrPropertyOrValue).AppendLine("\");");
                if (outputGetter)
                {
                    var objectAssignmentVariable = $"temp_{_varCounter++}";
                    CodeStringBuilder.AppendLine($"var {objectAssignmentVariable} = {propertyAssignmentVariable}.GetFloat(\"VAL\");");
                    return (objectAssignmentVariable, PropertyType.Float, ObjectType.Skill, propertyAssignmentVariable);
                }
                return ("\"VAL\"", PropertyType.Float, ObjectType.Skill, propertyAssignmentVariable);
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
                var objectAssignmentVariable = $"acknexObject_{_varCounter}";
                HandleObject(valueObjectName, objectAssignmentVariable, true, out var innerObjectDeclaration);
                var valueProperty = objectOrPropertyOrValue.Substring(valueIndexOfDot + 1);
                if (World.Instance.SynonymsByName.ContainsKey(valueObjectName))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Synonym, valueObjectName);
                }
                if (World.Instance.ActorsByName.ContainsKey(valueObjectName))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Actor);
                }
                if (World.Instance.ThingsByName.ContainsKey(valueObjectName))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Thing);
                }
                if (World.Instance.WallsByName.ContainsKey(valueObjectName))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Wall);
                }
                if (World.Instance.RegionsByName.ContainsKey(valueObjectName))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Region);
                }
                if (World.Instance.WallsByName.ContainsKey(valueObjectName))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Wall);
                }
                if (World.Instance.TexturesByName.ContainsKey(valueObjectName))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Texture);
                }
                if (World.Instance.BitmapsByName.ContainsKey(valueObjectName))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Bitmap);
                }
                if (World.Instance.WaysByName.ContainsKey(valueObjectName))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Way);
                }
                if (World.Instance.ActorsByName.ContainsKey(valueObjectName))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Actor);
                }
                if (World.Instance.SkillsByName.ContainsKey(valueObjectName))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Skill);
                }
                if (World.Instance.TextsByName.ContainsKey(valueObjectName))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Text);
                }
                if (World.Instance.PanelsByName.ContainsKey(valueObjectName))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Panel);
                }
                if (World.Instance.SoundsByName.ContainsKey(valueObjectName))
                {
                    return GetObjectPropertyValueAndType(objectAssignmentVariable, valueProperty, innerObjectDeclaration.source, outputGetter, ObjectType.Sound);
                }
            }
            return GetObjectPropertyValueAndType(
                propertyAssignmentVariable,
                objectOrPropertyOrValue,
                "World.Instance.AcknexObject",
                outputGetter,
                ObjectType.World
            );
        }

        private bool HandleObject(string objectName, string assignmentVariable, bool outputGetter, out (string property, PropertyType propertyType, ObjectType objectType, string source) valueAndType)
        {
            if (_rules.Contains(objectName))
            {
                valueAndType = (objectName, PropertyType.ObjectReference, ObjectType.Rule, null);
                return true;
            }
            if (World.Instance.StringsByName.ContainsKey(objectName))
            {
                if (outputGetter)
                {
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.AcknexObject.GetAcknexObject(\"").Append(objectName).AppendLine("\");");
                }
                valueAndType = (outputGetter ? assignmentVariable : $"\"{assignmentVariable}\"", PropertyType.ObjectReference, ObjectType.String, "World.Instance.AcknexObject");
                return true;
            }
            if (World.Instance.SynonymsByName.ContainsKey(objectName))
            {
                if (outputGetter)
                {
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.GetSynonymObject(\"").Append(objectName).AppendLine("\");");
                }
                valueAndType = (outputGetter ? assignmentVariable : $"\"{assignmentVariable}\"", PropertyType.ObjectReference, ObjectType.Synonym, "World.Instance.AcknexObject");
                return true;
            }
            if (World.Instance.ActionsByName.ContainsKey(objectName))
            {
                if (outputGetter)
                {
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Action,*/\"").Append(objectName).AppendLine("\");");
                }
                valueAndType = (outputGetter ? assignmentVariable : $"\"{assignmentVariable}\"", PropertyType.ObjectReference, ObjectType.Action, "World.Instance.AcknexObject");
                return true;
            }
            if (World.Instance.ActorsByName.ContainsKey(objectName))
            {
                if (outputGetter)
                {
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Actor,*/\"").Append(objectName).AppendLine("\");");
                }
                valueAndType = (outputGetter ? assignmentVariable : $"\"{assignmentVariable}\"", PropertyType.ObjectReference, ObjectType.Actor, "World.Instance.AcknexObject");
                return true;
            }
            if (World.Instance.ThingsByName.ContainsKey(objectName))
            {
                if (outputGetter)
                {
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Thing,*/\"").Append(objectName).AppendLine("\");");
                }
                valueAndType = (outputGetter ? assignmentVariable : $"\"{assignmentVariable}\"", PropertyType.ObjectReference, ObjectType.Thing, "World.Instance.AcknexObject");
                return true;
            }
            if (World.Instance.TexturesByName.ContainsKey(objectName))
            {
                if (outputGetter)
                {
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Texture,*/\"").Append(objectName).AppendLine("\");");
                }
                valueAndType = (outputGetter ? assignmentVariable : $"\"{assignmentVariable}\"", PropertyType.ObjectReference, ObjectType.Texture, "World.Instance.AcknexObject");
                return true;
            }
            if (World.Instance.WallsByName.ContainsKey(objectName))
            {
                if (outputGetter)
                {
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Wall,*/\"").Append(objectName).AppendLine("\");");
                }
                valueAndType = (outputGetter ? assignmentVariable : $"\"{assignmentVariable}\"", PropertyType.ObjectReference, ObjectType.Wall, "World.Instance.AcknexObject");
                return true;
            }
            if (World.Instance.RegionsByName.ContainsKey(objectName))
            {
                if (outputGetter)
                {
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Region,*/\"").Append(objectName).AppendLine("\");");
                }
                valueAndType = (outputGetter ? assignmentVariable : $"\"{assignmentVariable}\"", PropertyType.ObjectReference, ObjectType.Region, "World.Instance.AcknexObject");
                return true;
            }
            if (World.Instance.SkillsByName.ContainsKey(objectName))
            {
                if (outputGetter)
                {
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Skill,*/\"").Append(objectName).AppendLine("\");");
                }
                valueAndType = (outputGetter ? assignmentVariable : $"\"{assignmentVariable}\"", PropertyType.ObjectReference, ObjectType.Skill, "World.Instance.AcknexObject");
                return true;
            }
            if (World.Instance.TextsByName.ContainsKey(objectName))
            {
                if (outputGetter)
                {
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Text,*/\"").Append(objectName).AppendLine("\");");
                }
                valueAndType = (outputGetter ? assignmentVariable : $"\"{assignmentVariable}\"", PropertyType.ObjectReference, ObjectType.Text, "World.Instance.AcknexObject");
                return true;
            }
            if (World.Instance.PanelsByName.ContainsKey(objectName))
            {
                if (outputGetter)
                {
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Panel,*/\"").Append(objectName).AppendLine("\");");
                }
                valueAndType = (outputGetter ? assignmentVariable : $"\"{assignmentVariable}\"", PropertyType.ObjectReference, ObjectType.Panel, "World.Instance.AcknexObject");
                return true;
            }
            if (World.Instance.SoundsByName.ContainsKey(objectName))
            {
                if (outputGetter)
                {
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.AcknexObject.GetAcknexObject(/*ObjectType.Sound,*/\"").Append(objectName).AppendLine("\");");
                }
                valueAndType = (outputGetter ? assignmentVariable : $"\"{assignmentVariable}\"", PropertyType.ObjectReference, ObjectType.Sound, "World.Instance.AcknexObject");
                return true;
            }
            valueAndType = ("World.Instance.AcknexObject", PropertyType.ObjectReference, ObjectType.World, null);
            return false;
        }

        private (string property, PropertyType propertyType, ObjectType objectType, string source) GetObjectPropertyValueAndType(
            string assignmentVariable,
            string property,
            string sourceObject,
            bool outputGetter,
            ObjectType objectType,
            string originalName = null)
        {
            if (objectType == ObjectType.Synonym && originalName != null)
            {
                objectType = World.Instance.GetSynonymType(originalName);
            }
            var propertyType = World.Instance.GetPropertyType(objectType, property);
            if (propertyType == PropertyType.Unknown)
            {
                CodeStringBuilder.Append("//Unknown Property Type: ").Append(objectType).Append(".").Append(property).AppendLine();
            }
            if (outputGetter)
            {
                switch (propertyType)
                {
                    case PropertyType.Float:
                        CodeStringBuilder.Append($"var temp_{_varCounter} =").Append($"{(objectType == ObjectType.World ? "World.Instance.AcknexObject" : assignmentVariable)}.GetFloat(\"").Append(property).AppendLine("\");");
                        break;
                    case PropertyType.Null:
                    case PropertyType.String:
                        CodeStringBuilder.Append($"var temp_{_varCounter} =").Append($"{(objectType == ObjectType.World ? "World.Instance.AcknexObject" : assignmentVariable)}.GetAcknexObject(\"").Append(property).AppendLine("\");");
                        break;
                    case PropertyType.ObjectReference:
                    case PropertyType.ActionReference:
                        CodeStringBuilder.Append($"var temp_{_varCounter} =").Append($"{(objectType == ObjectType.World ? "World.Instance.AcknexObject" : assignmentVariable)}.GetAcknexObject(\"").Append(property).AppendLine("\");");
                        break;
                }
                return ($"temp_{_varCounter++}", propertyType, objectType, sourceObject);
            }
            return objectType == ObjectType.World ? ($"\"{assignmentVariable}\"", propertyType, objectType, sourceObject) : ($"\"{property}\"", propertyType, objectType, assignmentVariable);
        }

        private string Sanitize(string value)
        {
            return value;
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
    }
}
