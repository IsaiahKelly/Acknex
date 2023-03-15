using System;
using System.Collections;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Text;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    //TODO: missing keywords
    //TODO: categorize actions in IEnumerators and not IEnumeratros (depending on actions that uses WAIT or WAITT)
    public class Action : IAcknexObjectContainer
    {
        private static readonly Dictionary<string, (string symbol, int precedence, bool rightAssociative)> operators
        = new (string symbol, int precedence, bool rightAssociative)[] {
            //("^", 4, true),
            ("*", 3, false),
            ("/", 3, false),
            ("+", 2, false),
            ("-", 2, false)
        }.ToDictionary(op => op.symbol);

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback);
        public StringBuilder CodeStringBuilder = new StringBuilder();
        public long PositionInFile;
        public BinaryReader BinaryReader;

        private readonly HashSet<string> _rules = new HashSet<string>();
        private int _varCounter;
        private int _ifStack;

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
            CodeStringBuilder.AppendLine("yield return null;").AppendLine("}");
        }

        public void ParseAllStatements(TextParser textParser)
        {
            BinaryReader.BaseStream.Position = PositionInFile;
            while (BinaryReader.BaseStream.Position < BinaryReader.BaseStream.Length)
            {
                var tokens = textParser.ParseStatement(BinaryReader);
                var keyword = textParser.GetNextToken(tokens);
                switch (keyword)
                {
                    case "}":
                        {
                            return;
                        }
                    case "RULE":
                        {
                            var identifier = textParser.GetNextToken(tokens);
                            var identifierAndType = GetValueAndType(identifier, "identifierValue", false);
                            var assignmentOp1 = textParser.GetNextToken(tokens);
                            if (assignmentOp1 == "-" || assignmentOp1 == "+" || assignmentOp1 == "*" || assignmentOp1 == "/")
                            {
                                var assignmentOp2 = textParser.GetNextToken(tokens);
                                if (assignmentOp2 != "=")
                                {
                                    throw new Exception("Expected: =");
                                }
                            }
                            //var outputQueue = new Queue<(string, PropertyType)>();
                            //var operatorStack = new Stack<(string, PropertyType)>();
                            //var value = textParser.GetNextToken(tokens);
                            //while (value != ";")
                            //{
                            //    var valueAndType = GetValueAndType(value, "rhs");
                            //    if (valueAndType.propertyType == PropertyType.Float)
                            //    {
                            //        outputQueue.Enqueue((valueAndType.property, valueAndType.propertyType));
                            //    }
                            //    else if (valueAndType.propertyType == PropertyType.Function)
                            //    {
                            //        operatorStack.Push((valueAndType.property, valueAndType.propertyType));
                            //    }
                            //    else if (valueAndType.propertyType == PropertyType.Operator && operators.TryGetValue(valueAndType.property, out var op1))
                            //    {
                            //        while (operatorStack.Count > 0 && operators.TryGetValue(operatorStack.Peek().Item1, out var op2))
                            //        {
                            //            int c = op1.precedence.CompareTo(op2.precedence);
                            //            if (c < 0 || !op1.rightAssociative && c <= 0)
                            //            {
                            //                outputQueue.Enqueue(operatorStack.Pop());
                            //            }
                            //            else
                            //            {
                            //                break;
                            //            }
                            //        }
                            //        operatorStack.Push((valueAndType.property, valueAndType.propertyType));
                            //    }
                            //    else if (valueAndType.propertyType == PropertyType.LeftParen)
                            //    {
                            //        operatorStack.Push((valueAndType.property, valueAndType.propertyType));
                            //    }
                            //    else if (valueAndType.propertyType == PropertyType.RightParen)
                            //    {
                            //        var top = "";
                            //        while (operatorStack.Count > 0 && (top = operatorStack.Pop().Item1) != "(")
                            //        {
                            //            outputQueue.Enqueue((top, PropertyType.Operator));
                            //        }
                            //        if (top != "(")
                            //        {
                            //            throw new ArgumentException("No matching left parenthesis.");
                            //        }
                            //    }
                            //    value = textParser.GetNextToken(tokens);
                            //}
                            //while (operatorStack.Count > 0)
                            //{
                            //    var top = operatorStack.Pop();
                            //    if (!operators.ContainsKey(top.Item1))
                            //    {
                            //        throw new ArgumentException("No matching right parenthesis.");
                            //    }
                            //    outputQueue.Enqueue(top);
                            //}
                            HandleIfStack();
                            break;
                        }
                    case "SET":
                        {
                            var identifier = textParser.GetNextToken(tokens);
                            var value = GetValue(tokens, textParser);
                            var rhs = GetValueAndType(value, "rhs");
                            var lhs = GetValueAndType(identifier, "lhs", false, rhs.propertyType);
                            HandleAssignment(lhs, rhs);
                            HandleIfStack();
                            break;
                        }
                    case "ADD":
                    case "ADDT":
                        {
                            var identifier = textParser.GetNextToken(tokens);
                            var value = GetValue(tokens, textParser);
                            var rhs = GetValueAndType(value, "rhs");
                            var lhsGetter = GetValueAndType(identifier, "lhs", true, rhs.propertyType);
                            var lhsSetter = GetValueAndType(identifier, "lhs", false, rhs.propertyType);
                            HandleAdd(lhsGetter, lhsSetter, rhs, keyword == "ADDT");
                            HandleIfStack();
                            break;
                        }
                    case "WAITT":
                        {
                            var value = GetValue(tokens, textParser);
                            var argument = GetValueAndType(value, "argument", true, PropertyType.Float);
                            CodeStringBuilder.Append("yield return new WaitForTicks(").Append(argument.property).AppendLine(");");
                            HandleIfStack();
                            break;
                        }
                    case "WAIT":
                        {
                            var value = GetValue(tokens, textParser);
                            var argument = GetValueAndType(value, "argument", true, PropertyType.Float);
                            CodeStringBuilder.Append("yield return new WaitForCycles(").Append(argument.property).AppendLine(");");
                            HandleIfStack();
                            break;
                        }
                    case "CALL":
                        {
                            var action = textParser.GetNextToken(tokens);
                            CodeStringBuilder.Append("yield return ").Append(Sanitize(action)).AppendLine("();");
                            HandleIfStack();
                            break;
                        }
                    case "BRANCH":
                        {
                            var action = textParser.GetNextToken(tokens);
                            CodeStringBuilder.Append("yield return ").Append(Sanitize(action)).AppendLine("();");
                            CodeStringBuilder.AppendLine("yield break;");
                            HandleIfStack();
                            break;
                        }
                    case "GOTO":
                        {
                            var label = textParser.GetNextToken(tokens);
                            CodeStringBuilder.Append("goto ").Append(Sanitize(label)).AppendLine(";");
                            HandleIfStack();
                            break;
                        }
                    case "END":
                        {
                            CodeStringBuilder.AppendLine("yield break;");
                            HandleIfStack();
                            break;
                        }
                    case "EXIT":
                        {
                            CodeStringBuilder.AppendLine("Application.Quit();");
                            HandleIfStack();
                            break;
                        }
                    case "SHOOT":
                        {
                            CodeStringBuilder.Append("World.Instance.Shoot(");
                            var next = textParser.GetNextToken(tokens);
                            if (next != ";")
                            {
                                CodeStringBuilder.Append("\"").Append(next).AppendLine("\");");
                            }
                            HandleIfStack();
                            break;
                        }
                    case "INKEY":
                        {
                            CodeStringBuilder.Append("World.Instance.ReadInkey(\"").Append(textParser.GetNextToken(tokens)).AppendLine("\");");
                            HandleIfStack();
                            break;
                        }
                    case "IF_EQUAL":
                    case "IF_NEQUAL":
                    case "IF_ABOVE":
                    case "IF_BELOW":
                        {
                            var identifier = textParser.GetNextToken(tokens);
                            var value = GetValue(tokens, textParser);
                            var rhs = GetValueAndType(value, "rhs");
                            var lhs = GetValueAndType(identifier, "lhs");
                            //if (lhs.propertyType != rhs.propertyType && rhs.propertyType != PropertyType.Null && lhs.propertyType != PropertyType.Unknown && rhs.propertyType != PropertyType.Unknown)
                            //{
                            //    throw new Exception(lhs.property + "|" + rhs.property);
                            //}
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
                            break;
                        }
                    default:
                        Debug.LogWarning("<color=#00FF00>Unkown action keyword [" + keyword + "]</color>");
                        var lastKeyword = keyword;
                        while (keyword != ";" && keyword != ":" && keyword != null)
                        {
                            keyword = textParser.GetNextToken(tokens);
                            if (keyword == ":")
                            {
                                CodeStringBuilder.Append(Sanitize(lastKeyword)).AppendLine(":");
                            }
                        }
                        HandleIfStack();
                        break;
                }
            }
        }

        private void Resolve((string, PropertyType) lhs, (string, PropertyType) rhs, (string, PropertyType) @operator)
        {
            var varname = $"result_{_varCounter++}";
            CodeStringBuilder.Append("var ").Append(varname).Append("=").Append(lhs.Item1).Append(@operator.Item2).Append(rhs.Item2).AppendLine(";");
        }

        private string GetValue(IEnumerator<string> tokens, TextParser textParser)
        {
            var result = string.Empty;
            var value = textParser.GetNextToken(tokens);
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
                    CodeStringBuilder.AppendLine($"{lhs.source}.SetSynonymObject({lhs.property},{rhs.property});");
                    break;
                case ObjectType.Skill:
                case ObjectType.Action:
                case ObjectType.Actor:
                case ObjectType.Thing:
                case ObjectType.Texture:
                case ObjectType.World:
                case ObjectType.Way:
                case ObjectType.Region:
                case ObjectType.Wall:
                case ObjectType.Bitmap:
                case ObjectType.Overlay:
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
            switch (lhsGetter.objectType)
            {
                case ObjectType.Skill:
                case ObjectType.Action:
                case ObjectType.Actor:
                case ObjectType.Thing:
                case ObjectType.Texture:
                case ObjectType.World:
                case ObjectType.Way:
                case ObjectType.Region:
                case ObjectType.Wall:
                case ObjectType.Bitmap:
                case ObjectType.Overlay:
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
                    break;
            }
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
                //if (outputGetter)
                //{
                CodeStringBuilder.Append($"var {propertyAssignmentVariable} = World.Instance.GetObject(ObjectType.Skill,\"").Append(objectOrPropertyOrValue).AppendLine("\");");
                if (outputGetter)
                {
                    var objectAssignmentVariable = $"temp_{_varCounter++}";
                    CodeStringBuilder.AppendLine($"var {objectAssignmentVariable} = {propertyAssignmentVariable}.GetFloat(\"VAL\");");
                    return (objectAssignmentVariable, PropertyType.Float, ObjectType.Skill, propertyAssignmentVariable);
                }
                return ("\"VAL\"", PropertyType.Float, ObjectType.Skill, propertyAssignmentVariable);
                //return (outputGetter ? propertyAssignmentVariable : $"\"{propertyAssignmentVariable}\"", PropertyType.Float, ObjectType.Skill, "World.Instance.AcknexObject");
            }
            //if (outputGetter)
            //{
            //    propertyAssignmentVariable = Sanitize(propertyAssignmentVariable);
            //    propertyAssignmentVariable += $"_{_varCounter++}";
            //}
            if (!outputGetter)
            {
                propertyAssignmentVariable = objectOrPropertyOrValue;
            }
            if (objectOrPropertyOrValue == "NULL")
            {
                return ("null", PropertyType.Null, ObjectType.Internal, null);
            }
            if (objectOrPropertyOrValue == "RANDOM")
            {
                return ("Random.value", PropertyType.Float, ObjectType.Internal, null);
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
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.GetString(\"").Append(objectName).AppendLine("\");");
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
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.GetAcknexObject(ObjectType.Action,\"").Append(objectName).AppendLine("\");");
                }
                valueAndType = (outputGetter ? assignmentVariable : $"\"{assignmentVariable}\"", PropertyType.ObjectReference, ObjectType.Action, "World.Instance.AcknexObject");
                return true;
            }
            if (World.Instance.ActorsByName.ContainsKey(objectName))
            {
                if (outputGetter)
                {
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.GetAcknexObject(ObjectType.Actor,\"").Append(objectName).AppendLine("\");");
                }
                valueAndType = (outputGetter ? assignmentVariable : $"\"{assignmentVariable}\"", PropertyType.ObjectReference, ObjectType.Actor, "World.Instance.AcknexObject");
                return true;
            }
            if (World.Instance.ThingsByName.ContainsKey(objectName))
            {
                if (outputGetter)
                {
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.GetAcknexObject(ObjectType.Thing,\"").Append(objectName).AppendLine("\");");
                }
                valueAndType = (outputGetter ? assignmentVariable : $"\"{assignmentVariable}\"", PropertyType.ObjectReference, ObjectType.Thing, "World.Instance.AcknexObject");
                return true;
            }
            if (World.Instance.TexturesByName.ContainsKey(objectName))
            {
                if (outputGetter)
                {
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.GetAcknexObject(ObjectType.Texture,\"").Append(objectName).AppendLine("\");");
                }
                valueAndType = (outputGetter ? assignmentVariable : $"\"{assignmentVariable}\"", PropertyType.ObjectReference, ObjectType.Texture, "World.Instance.AcknexObject");
                return true;
            }
            if (World.Instance.WallsByName.ContainsKey(objectName))
            {
                if (outputGetter)
                {
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.GetAcknexObject(ObjectType.Wall,\"").Append(objectName).AppendLine("\");");
                }
                valueAndType = (outputGetter ? assignmentVariable : $"\"{assignmentVariable}\"", PropertyType.ObjectReference, ObjectType.Wall, "World.Instance.AcknexObject");
                return true;
            }
            if (World.Instance.RegionsByName.ContainsKey(objectName))
            {
                if (outputGetter)
                {
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.GetAcknexObject(ObjectType.Region,\"").Append(objectName).AppendLine("\");");
                }
                valueAndType = (outputGetter ? assignmentVariable : $"\"{assignmentVariable}\"", PropertyType.ObjectReference, ObjectType.Region, "World.Instance.AcknexObject");
                return true;
            }
            if (World.Instance.SkillsByName.ContainsKey(objectName))
            {
                if (outputGetter)
                {
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.GetAcknexObject(ObjectType.Skill,\"").Append(objectName).AppendLine("\");");
                }
                valueAndType = (outputGetter ? assignmentVariable : $"\"{assignmentVariable}\"", PropertyType.ObjectReference, ObjectType.Skill, "World.Instance.AcknexObject");
                return true;
            }
            if (World.Instance.TextsByName.ContainsKey(objectName))
            {
                if (outputGetter)
                {
                    CodeStringBuilder.Append($"var {assignmentVariable} = World.Instance.GetAcknexObject(ObjectType.Text,\"").Append(objectName).AppendLine("\");");
                }
                valueAndType = (outputGetter ? assignmentVariable : $"\"{assignmentVariable}\"", PropertyType.ObjectReference, ObjectType.Text, "World.Instance.AcknexObject");
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
                var synonymType = World.Instance.SynonymsByName[originalName].AcknexObject.GetString("TYPE");
                //OVERLAY, TEXTURE, WALL, THING, ACTOR,
                //REGION, PANEL, TEXT, STRING, or ACTION.
                switch (synonymType)
                {
                    case "THING":
                        objectType = ObjectType.Thing;
                        break;
                    case "ACTOR":
                        objectType = ObjectType.Actor;
                        break;
                    case "WALL":
                        objectType = ObjectType.Wall;
                        break;
                    case "REGION":
                        objectType = ObjectType.Region;
                        break;
                    case "OVERLAY":
                        objectType = ObjectType.Overlay;
                        break;
                    case "PANEL":
                        objectType = ObjectType.Panel;
                        break;
                    case "TEXT":
                        objectType = ObjectType.Text;
                        break;
                    case "STRING":
                        objectType = ObjectType.String;
                        break;
                    case "ACTION":
                        objectType = ObjectType.Action;
                        break;
                }
            }
            var propertyType = World.Instance.GetPropertyType(objectType, property);
            if (outputGetter)
            {
                switch (propertyType)
                {
                    case PropertyType.Float:
                        CodeStringBuilder.Append($"var temp_{_varCounter} =").Append($"{assignmentVariable}.GetFloat(\"").Append(property).AppendLine("\");");
                        break;
                    case PropertyType.Null:
                    case PropertyType.String:
                        CodeStringBuilder.Append($"var temp_{_varCounter} =").Append($"{assignmentVariable}.GetString(\"").Append(property).AppendLine("\");");
                        break;
                    case PropertyType.ObjectReference:
                    case PropertyType.ActionReference:
                        CodeStringBuilder.Append($"var temp_{_varCounter} =").Append($"{assignmentVariable}.GetAcknexObject(\"").Append(property).AppendLine("\");");
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
            throw new NotImplementedException();
        }

        public void Enable()
        {

        }

        public void Disable()
        {

        }
    }
}
