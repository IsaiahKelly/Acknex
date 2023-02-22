using System;
using System.Collections.Generic;
using System.IO;
using System.Linq.Expressions;
using UnityEngine;

namespace Acknex
{
    public class Action : MonoBehaviour, IAcknexObject
    {
        public readonly Dictionary<string, LabelTarget> LabelsByName = new Dictionary<string, LabelTarget>();
        private readonly List<Expression> _expressions = new List<Expression>();
        public System.Action FinalAction;

        private void Update()
        {
            //todo:EACH_CYCLE and EACH_TICK can be triggered?
        }

        public void ParseAction(List<string> tokens, StreamReader streamReader, Func<StreamReader, List<string>> parseNextStatement)
        {
            var canContinue = true;
            var expression = ParseExpression(ref canContinue, tokens, streamReader, parseNextStatement);
            if (!(expression is DefaultExpression))
            {
                _expressions.Add(expression);
            }
        }

        //todo: WAIT and WAITT
        //todo: replace string parameters by objects, the object type can be get from the keyword, and the lookup is made against actors, things, and skills located on World.Instance
        private Expression ParseExpression(ref bool canContinue, List<string> tokens, StreamReader streamReader, Func<StreamReader, List<string>> parseNextStatement)
        {
            var keyword = tokens[0];
            var handledCompilerDirective = TextParser.HandleCompilerDirectives(ref canContinue, tokens, streamReader, parseNextStatement);
            if (!canContinue)
            {
                return Expression.Empty();
            }
            switch (keyword)
            {
                case "END":
                    {
                        var expression = new LazyGotoExpression() { ACTION = this, LABEL = "__END__" };
                        return expression;
                    }
                case "SHOOT":
                case "LOCATE":
                    {
                        var a = string.Empty;
                        if (tokens.Count > 1)
                        {
                            a = tokens[1];
                        }
                        var expression = Expression.Call(typeof(Action).GetMethod(keyword), Expression.Constant(a));
                        return expression;
                    }
                case "DROP":
                case "EXPLODE":
                    {
                        var a = tokens[1];
                        var expression = Expression.Call(typeof(Action).GetMethod(keyword), Expression.Constant(a));
                        return expression;
                    }
                case "EXIT":
                    {
                        var expression = Expression.Call(typeof(Action).GetMethod(keyword));
                        return expression;
                    }
                case "RULE":
                    {
                        //todo: parse math and create varaible
                        var a = tokens[1];
                        break;
                    }
                case "LABEL":
                    {
                        var label = tokens[1];
                        if (LabelsByName.ContainsKey(label))
                        {
                            Debug.LogWarning("Label [" + label + "] already registered.");
                            break;
                        }
                        var labelTarget = Expression.Label(label);
                        LabelsByName.Add(label, labelTarget);
                        return Expression.Label(labelTarget);
                    }
                case "GOTO":
                    {
                        var label = tokens[1];
                        var expression = new LazyGotoExpression() { ACTION = this, LABEL = label };
                        return expression;
                    }
                case "ADD":
                case "SUB":
                case "SET":
                case "SET_ALL":
                case "SET_STRING":
                case "ADD_STRING":
                case "TO_STRING":
                case "SET_SKILL":
                case "ACCEL":
                case "FIND":
                case "SET_INFO":
                    {
                        var a = tokens[1];
                        var b = tokens[2];
                        var expression = Expression.Call(typeof(Action).GetMethod(keyword), Expression.Constant(a), Expression.Constant(b));
                        return expression;
                    }
                case "WAIT":
                case "WAITT":
                case "BRANCH": //todo: is branch same as call?
                case "CALL":
                case "INKEY":
                    {
                        var a = tokens[1];
                        var expression = Expression.Call(typeof(Action).GetMethod(keyword), Expression.Constant(a));
                        return expression;
                    }
                case "IF_EQUAL":
                case "IF_NEQUAL":
                case "IF_ABOVE":
                case "IF_BELOW":
                    {
                        var a = tokens[1];
                        var b = tokens[2];
                        var test = Expression.Call(
                            typeof(Action).GetMethod(keyword),
                            Expression.Constant(a),
                            Expression.Constant(b));
                        var ifTrue = ParseExpression(ref canContinue, parseNextStatement(streamReader), streamReader, parseNextStatement);
                        var condition = Expression.Condition(test, ifTrue, Expression.Empty());
                        return condition;
                    }
                case "IF_NEAR":
                case "IF_FAR":
                case "IF_TOUCH":
                case "IF_HIT":
                case "IF_ENTER":
                case "IF_LEAVE":
                case "IF_DIVE":
                case "IF_ARISE":
                    {
                        var a = tokens[1];
                        var test = Expression.Call(
                            typeof(Action).GetMethod(keyword),
                            Expression.Constant(a));
                        var ifTrue = ParseExpression(ref canContinue, parseNextStatement(streamReader), streamReader, parseNextStatement);
                        var condition = Expression.Condition(test, ifTrue, Expression.Empty());
                        return condition;
                    }
                default:
                    {
                        if (!handledCompilerDirective)
                        {
                            Debug.LogError("Unknown keyword[" + keyword + "]");
                        }
                        break;
                    }
            }
            return Expression.Empty();
        }

        public void CloseAndCompile()
        {
            var endLabel = Expression.Label("__END__");
            var endExpression = Expression.Label(endLabel);
            _expressions.Add(endExpression);
            var block = Expression.Block(_expressions);
            var lambda = Expression.Lambda<System.Action>(block);
            Debug.Log("-------------");
            foreach (var expression in _expressions)
            {
                Debug.Log(expression);
            }
            FinalAction = lambda.Compile();
        }

        public static void SHOOT(string obj)
        {

        }

        public static void LOCATE(string obj)
        {

        }

        public static void DROP(string item)
        {

        }
        public static void EXPLODE(string target)
        {

        }

        public static void ADD(string a, string b)
        {

        }
        public static void SUB(string a, string b)
        {

        }

        public static void SET(string a, string b)
        {

        }
        public static void SET_ALL(string a, string b)
        {

        }

        public static void CALL(string method)
        {

        }
        public static void INKEY(string target)
        {

        }
        public static void BRANCH(string method)
        {

        }

        public static void WAIT(string time)
        {

        }

        public static void WAITT(string ticks)
        {

        }

        public static bool IF_EQUAL(string a, string b)
        {
            return false;
        }

        public static bool IF_NEQUAL(string a, string b)
        {
            return false;
        }

        public static bool IF_ABOVE(string a, string b)
        {
            return false;
        }
        public static bool IF_BELOW(string a, string b)
        {
            return false;
        }
        public static bool IF_NEAR(string a)
        {
            return false;
        }
        public static bool IF_FAR(string a)
        {
            return false;
        }
        public static bool IF_HIT(string a)
        {
            return false;
        }
        public static bool IF_TOUCH(string a)
        {
            return false;
        }
        public static bool IF_ENTER(string a)
        {
            return false;
        }
        public static bool IF_LEAVE(string a)
        {
            return false;
        }
        public static bool IF_DIVE(string a)
        {
            return false;
        }
        public static bool IF_ARISE(string a)
        {
            return false;
        }

        public static void SET_STRING(string a, string b)
        {

        }
        public static void ADD_STRING(string a, string b)
        {

        }
        public static void TO_STRING(string a, string b)
        {

        }
        public static void SET_SKILL(string a, string b)
        {

        }
        public static void ACCEL(string a, string b)
        {

        }
        public static void FIND(string a, string b)
        {

        }
        public static void SET_INFO(string a, string b)
        {

        }
        public static void EXIT()
        {
            Application.Quit();
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
