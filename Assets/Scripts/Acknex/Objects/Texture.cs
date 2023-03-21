using System.Collections;
using System.Collections.Generic;
using Acknex.Interfaces;
using UnityEngine;

namespace Acknex
{
    public class Texture : IAcknexObjectContainer
    {
        private List<WaitForSeconds> _textureObjectDelay;
        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Texture);

        private static IAcknexObject GetTemplateCallback(string name)
        {
            return null;
        }

        public List<string> BMaps
        {
            get
            {
                if (AcknexObject.TryGetObject("BMAPS", out List<string> bmaps))
                {
                    return bmaps;
                }
                bmaps = new List<string>();
                AcknexObject.SetObject("BMAPS", bmaps);
                return bmaps;
            }
        }

        public int BitmapCount => AcknexObject.TryGetObject("BMAPS", out List<string> bmaps) ? bmaps.Count : 0;

        public float ScaleX => AcknexObject.TryGetFloat("SCALE_X", out var val) ? val : 16f;
        public float ScaleY => AcknexObject.TryGetFloat("SCALE_Y", out var val) ? val : 16f;

        private static float[] DefaultNoMirror = new float[] { 0f };

        public void UpdateObject()
        {

        }

        public void Enable()
        {

        }

        public void Disable()
        {

        }

        public Bitmap GetBitmapAt(int index = 0)
        {
            if (BMaps.Count > index)
            {
                if (World.Instance.BitmapsByName.TryGetValue(BMaps[index], out var bitmapObject))
                {
                    return bitmapObject;
                }
            }
            return null;
        }

        public IEnumerator AnimateTexture(
            bool scaleTexture,
            MeshRenderer meshRenderer,
            MeshFilter meshFilter,
            GameObject thingGameObject,
            IAcknexObject sourceAcknexObject,
            IAcknexObject regionAcknexObject,
            Transform sourceTransform
        )
        {
            var sides = Mathf.Max(1, this.AcknexObject.GetInteger("SIDES"));
            var cycles = Mathf.Max(1, this.AcknexObject.GetInteger("CYCLES"));
            var mirror = AcknexObject.GetObject<List<float>>("MIRROR");
            if (cycles == 1)
            {
                UpdateAngleFrameScale(scaleTexture, cycles, sides, 0, mirror, null, meshRenderer, meshFilter, thingGameObject, sourceAcknexObject, sourceTransform);
                yield break;
            }
            var cycle = 0;
            while (true)
            {
                var currentDelay = _textureObjectDelay != null && _textureObjectDelay.Count > cycle ? _textureObjectDelay[cycle] : null;
                UpdateAngleFrameScale(scaleTexture, cycles, sides, cycle, mirror, currentDelay, meshRenderer, meshFilter, thingGameObject, sourceAcknexObject, sourceTransform);
                yield return currentDelay;
                cycle = (int)Mathf.Repeat(cycle + 1, cycles);
                World.Instance.TriggerEvent("EACH_CYCLE", sourceAcknexObject, sourceAcknexObject, regionAcknexObject);
            }
        }

        public void UpdateAngleFrameScale(bool scaleTexture, int cycles, int sides, int animFrame, IList<float> mirror, WaitForSeconds delay, MeshRenderer meshRenderer, MeshFilter meshFilter, GameObject sourceGameObject, IAcknexObject sourceAcknexObject, Transform sourceTransform)
        {
            //if (HasModel(out var modelObject))
            //{
            //    meshRenderer.material = modelObject.Material;
            //    meshRenderer.material.mainTexture = modelObject.Texture2D;
            //    meshFilter.mesh = modelObject.Mesh;
            //    thingGameObject.transform.rotation = Quaternion.Euler(-90f, 0f, 0f);
            //    transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
            //}
            //else
            {
                var camera = CameraExtensions.GetLastActiveCamera();
                int side;
                if (camera != null && sourceGameObject != null)
                {
                    var halfStep = 180f / sides;
                    var cameraToThingDirection = Quaternion.LookRotation(AngleUtils.To2D(camera.transform.position - sourceGameObject.transform.position).normalized, Vector3.up) * Vector3.forward;
                    var thingAngle = AngleUtils.ConvertAcknexToUnityAngle(sourceAcknexObject.GetFloat("ANGLE"));
                    var thingDirection = Quaternion.Euler(0f, thingAngle, 0f) * Vector3.forward;
                    var angle = Mathf.Repeat(AngleUtils.Angle(thingDirection, cameraToThingDirection) + halfStep, 360f);
                    var normalizedAngle = angle / 360f;
                    side = Mathf.RoundToInt(Mathf.Lerp(0, sides - 1, normalizedAngle));
                }
                else
                {
                    side = 0;
                }
                Bitmap bitmap;
                int angleFrame;
                if (mirror != null && mirror[side] > 0) //mirrored
                {
                    angleFrame = side * cycles;
                    var frame = angleFrame + animFrame;
                    bitmap = this.GetBitmapAt(frame);
                    if (meshRenderer?.material != null && bitmap != null)
                    {
                        UpdateFrame(bitmap, meshRenderer.material, scaleTexture, true, frame, sourceAcknexObject);
                    }
                }
                else
                {
                    angleFrame = side * cycles;
                    var frame = angleFrame + animFrame;
                    bitmap = this.GetBitmapAt(frame);
                    if (meshRenderer?.material != null && bitmap != null)
                    {
                        UpdateFrame(bitmap, meshRenderer.material, scaleTexture, false, frame, sourceAcknexObject);
                    }
                }
                if (sourceTransform != null)
                {
                    sourceTransform.localScale = TextureUtils.CalculateObjectSize(bitmap, this);
                }
            }
        }

        public bool HasModel(out Model modelObject)
        {
            modelObject = null;
            return this.AcknexObject.TryGetString("MODEL", out var model) && World.Instance.ModelsByName.TryGetValue(model, out modelObject);
        }

        public void UpdateFrame(Bitmap bitmap, Material unityMaterial, bool scaleTexture, bool mirror = false, int frameIndex = 0, IAcknexObject sourceAcknexObject = null)
        {
            bitmap.UpdateMaterial(unityMaterial, scaleTexture ? this : null, frameIndex, mirror, sourceAcknexObject);
        }

        public Texture()
        {
            AcknexObject.Container = this;
        }

        public void SetupTemplate()
        {
            var delay = AcknexObject.GetObject<List<float>>("DELAY");
            if (delay != null)
            {
                _textureObjectDelay = new List<WaitForSeconds>(delay.Count);
                for (var i = 0; i < delay.Count; i++)
                {
                    _textureObjectDelay.Add(new WaitForSeconds(TimeUtils.TicksToTime((int)delay[i])));
                }
            }
        }

        public void SetupInstance()
        {
            
        }

        public Vector3 GetCenter()
        {
            return default;
        }
    }
}