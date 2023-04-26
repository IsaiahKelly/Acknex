using System.Collections.Generic;
using Acknex.Interfaces;
using LibTessDotNet;
using UnityEngine;

namespace Acknex
{
    public class View : MonoBehaviour, IAcknexObjectContainer
    {
        private AudioSource _audioSource;

        public LineRenderer LineRendererTemplate;

        public Transform LinesCanvas;
        public bool MainView;
        public static View Instance { get; private set; }

        public Camera ViewCamera { get; set; }

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.View);

        public void Disable()
        {
        }

        public void Enable()
        {
        }

        public GameObject GameObject => gameObject;

        public Vector3 GetCenter()
        {
            return ViewCamera.transform.position;
        }

        public IAcknexObject GetRegion()
        {
            return null;
        }

        [field: SerializeField] public bool IsDebugMarked { get; set; }

        public bool IsGeometryDirty { get; set; }

        public bool IsTextureDirty { get; set; }

        public void PlaySoundLocated(IAcknexObject sound, float volume, float sDist = 100f, float svDist = 100f)
        {
            if (!(sound?.Container is Sound soundContainer))
            {
                return;
            }
            //if (_audioSource.clip == soundContainer.AudioClip && _audioSource.isPlaying)
            //{
            //    return;
            //}
            //_audioSource.Stop();
            _audioSource.clip = soundContainer.AudioClip;
            _audioSource.maxDistance = Mathf.Max(sDist, svDist);
            _audioSource.volume = volume;
            _audioSource.Play();
        }

        public void ResetTexture()
        {
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
                ViewCamera.fieldOfView = Mathf.InverseLerp(0.2f, 2.0f, World.Instance.GetSkillValue("PLAYER_ARC")) * 120f;
                var transformLocalPosition = transform.localPosition;
                transformLocalPosition.y = World.Instance.GetSkillValue("PLAYER_SIZE");
                transform.localPosition = transformLocalPosition;
                var transformLocalRotation = transform.localRotation;
                transformLocalRotation.eulerAngles = new Vector3(World.Instance.GetSkillValue("PLAYER_TILT") * Mathf.Rad2Deg, 0f, 0f);
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
                            World.Instance.SetSynonymObject("TOUCH_REG", container.AcknexObject);
                            break;
                        case Thing _:
                            World.Instance.SetSynonymObject("TOUCHED", container.AcknexObject);
                            break;
                    }
                }
            }
        }

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        private void Awake()
        {
            Instance = this;
            AcknexObject.Container = this;
        }

        private void Start()
        {
            ViewCamera = GetComponent<Camera>();
            ViewCamera.transparencySortMode = TransparencySortMode.Perspective;
            _audioSource = GetComponent<AudioSource>();
        }

        private void Update()
        {
            UpdateObject();
        }

        public void AddMapRegion(Region region, IList<ContourVertex> vertices)
        {
            var positions = new Vector3[vertices.Count];
            for (var i = 0; i < positions.Length; i++)
            {
                positions[i] = new Vector3(vertices[i].Position.X, 0f, vertices[i].Position.Y);
            }
            var newLineRenderer = Instantiate(LineRendererTemplate, LinesCanvas, false);
            newLineRenderer.transform.localPosition = Vector3.zero;
            newLineRenderer.positionCount = vertices.Count;
            newLineRenderer.SetPositions(positions);
        }
    }
}