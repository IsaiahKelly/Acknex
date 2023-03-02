using System.Collections.Generic;
using Acknex.Interfaces;

namespace Acknex
{
    public partial class World
    {
        private void CreateDefaultSynonyms()
        {
            CreateSynonym("HERE");
            CreateSynonym("THERE");
            CreateSynonym("MY");
            CreateSynonym("#HIT");
            CreateSynonym("#TOUCHED");
            CreateSynonym("#TOUCH_TEX");
            CreateSynonym("#TOUCH_REG");
            CreateSynonym("#TOUCH_TEXT");
        }

        public void AssignSynonymToObject(string synonymName, IAcknexObject target, bool clear = false) {
            if (SynonymsByName.TryGetValue(synonymName, out var synonym))
            {
                if (!synonym.AcknexObject.TryGetObject<List<IAcknexObject>>("VAL", out var list))
                {
                    list = new List<IAcknexObject>();
                    synonym.AcknexObject.SetObject("VAL", list);
                }
                if (clear)
                {
                    list.Clear();
                }
                list.Add(target);
            }
        }

        public List<IAcknexObject> GetAllObjectsWithSynonym(string synonymName)
        {
            return SynonymsByName.TryGetValue(synonymName, out var synonym) ? synonym.AcknexObject.GetObject<List<IAcknexObject>>("VAL") : null;
        }
    }
}