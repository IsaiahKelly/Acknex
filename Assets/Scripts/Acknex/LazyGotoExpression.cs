using System;
using System.Linq.Expressions;

namespace Acknex
{
    public class LazyGotoExpression : Expression
    {
        public Action ACTION;
        public string LABEL;

        public override ExpressionType NodeType => ExpressionType.Extension;

        public override Type Type => typeof(void);

        public override bool CanReduce => true;

        public override Expression Reduce()
        {
            if (ACTION.LabelsByName.TryGetValue(LABEL, out var labelTarget))
            {
                return Goto(labelTarget);
            }
            return Empty();
        }

        public override string ToString()
        {
            return "goto " + LABEL;
        }
    }
}