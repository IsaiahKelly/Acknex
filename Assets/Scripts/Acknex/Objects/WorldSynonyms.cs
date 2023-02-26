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

        //todo: clamp
        public void UpdateSynonymValue(string name, IAcknexObject value)
        {
            if (SynonymsByName.TryGetValue(name, out var synonym))
            {
                synonym.AcknexObject.Set("VAL", value);
            }
        }
    }
}