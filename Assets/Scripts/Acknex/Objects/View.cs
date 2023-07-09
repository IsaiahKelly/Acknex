using System.Collections.Generic;
using Acknex.Interfaces;
using LibTessDotNet;
using UnityEngine;
using Utils;
using NameId = System.UInt32;

namespace Acknex
{
    public class View : MonoBehaviour, IAcknexObjectContainer
    {
        private AudioSource _audioSource;

        //public LineRenderer LineRendererTemplate;
        //public Transform LinesCanvas;

        public bool MainView;

        public static View Instance { get; private set; }

        [field:SerializeField]
        public Camera ViewCamera { get; set; }

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.View);

        public void Disable()
        {
            enabled = ViewCamera.enabled = false;
        }

        public void Enable()
        {
            enabled = ViewCamera.enabled = true;
        }

        public GameObject GameObject => gameObject;

        public Vector3 GetCenter()
        {
            return ViewCamera.transform.position;
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
            if (!(sound?.Container is Sound soundContainer))
            {
                return;
            }
            _audioSource.clip = soundContainer.AudioClip;
            _audioSource.maxDistance = Mathf.Max(sDist, svDist);
            _audioSource.volume = volume;
            _audioSource.Play();
        }

        public void SetupInstance()
        {
        }

        public void SetupTemplate()
        {
        }

        public void UpdateObject()
        {
            if (MainView)
            {
                //todo: check if fov is right
                ViewCamera.fieldOfView = CalculateFOV();
                var transformLocalPosition = transform.localPosition;
                transformLocalPosition.y = World.Instance.GetSkillValue(SkillName.PLAYER_SIZE);
                transform.localPosition = transformLocalPosition;
                var transformLocalRotation = transform.localRotation;
                transformLocalRotation.eulerAngles = new Vector3(World.Instance.GetSkillValue(SkillName.PLAYER_TILT) * Mathf.Rad2Deg, 0f, 0f);
                transform.localRotation = transformLocalRotation;
                Shader.SetGlobalFloat("_CAMERA_PITCH", Mathf.DeltaAngle(CameraExtensions.GetLastActiveCamera().transform.localEulerAngles.x, 0f));
            }
            var ray = ViewCamera.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out var hitInfo))
            {
                if (hitInfo.collider.TryGetComponent<IAcknexObjectContainer>(out var container))
                {
                    switch (container)
                    {
                        case Region _:
                            World.Instance.SetSynonymObject(SynonymName.TOUCH_REG, container.AcknexObject);
                            break;
                        case Thing _:
                            World.Instance.SetSynonymObject(SynonymName.TOUCHED, container.AcknexObject);
                            break;
                    }
                }
            }
        }


        public override string ToString()
        {
            return AcknexObject.ToString();
        }

        private float CalculateFOV()
        {
            var playerArc = World.Instance.GetSkillValue(SkillName.PLAYER_ARC);
            var m = (120f - 0f) / (2.0f - 0.2f);
            var b = 0f - m * 0.2f;
            return m * playerArc + b;
        }

        private static IAcknexObject GetTemplateCallback(uint name)
        {
            return null;
        }

        private void Awake()
        {
            Instance = this;
            AcknexObject.Container = this;
            _audioSource = GetComponent<AudioSource>();
        }

        private void Start()
        {
            ViewCamera.transparencySortMode = TransparencySortMode.Perspective;
        }

        private void Update()
        {
            UpdateObject();
        }

        //todo: reimplement, not used in the demo
        public void AddMapRegion(Region region, IList<ContourVertex> vertices)
        {
            //var positions = new Vector3[vertices.Count];
            //for (var i = 0; i < positions.Length; i++)
            //{
            //    positions[i] = new Vector3(vertices[i].Position.X, 0f, vertices[i].Position.Y);
            //}
            //var newLineRenderer = Instantiate(LineRendererTemplate, LinesCanvas, false);
            //newLineRenderer.transform.localPosition = Vector3.zero;
            //newLineRenderer.positionCount = vertices.Count;
            //newLineRenderer.SetPositions(positions);
        }
    }
}