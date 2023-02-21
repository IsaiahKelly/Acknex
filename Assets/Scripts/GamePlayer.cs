using UnityEngine;

namespace Acknex
{
    public class GamePlayer : MonoBehaviour
    {
        public static GamePlayer Instance { get; private set; }

        private void Awake()
        {
            Instance = this;
        }
    }
}