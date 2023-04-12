namespace Acknex.Interfaces
{
    /// <summary>
    /// Represents an object property type.
    /// </summary>
    public enum PropertyType
    {
        Null,
        Float,
        String,
        ActionReference,
        ObjectReference,
        Flags,
        ObjectReferenceList,
        FloatList,
        Range,
        ScaleXY,
        Unknown,
        Function,
        Operator,
        LeftParen,
        RightParen,
        Filename
    }
}