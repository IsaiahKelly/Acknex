using System.Collections.Generic;
using Acknex.Interfaces;

namespace Acknex.Interfaces
{
    public class PostResolveItem
    {
        public IList<IAcknexObject> list;
        public IAcknexObject acknexObject;
        public PropertyName keyword;
        public string objectName;
    }
}
