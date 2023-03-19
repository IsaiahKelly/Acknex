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
            MeshRenderer meshRenderer,
            MeshFilter meshFilter,
            GameObject thingGameObject,
            IAcknexObject acknexObject,
            Transform transform
        )
        {
            var cycles = Mathf.Max(1, this.AcknexObject.GetInteger("CYCLES"));
            var sides = Mathf.Max(1, this.AcknexObject.GetInteger("SIDES"));
            var mirror = this.AcknexObject.GetObject<List<float>>("MIRROR");
            var cycle = 0;
            while (true)
            {
                var currentDelay = _textureObjectDelay != null && _textureObjectDelay.Count > cycle ? _textureObjectDelay[cycle] : null;
                UpdateAngleFrameScale(cycles, sides, cycle, mirror, currentDelay, meshRenderer, meshFilter, thingGameObject, acknexObject, transform);
                yield return currentDelay;
                cycle = (int)Mathf.Repeat(cycle + 1, cycles);
                World.Instance.TriggerEvent(acknexObject, "EACH_CYCLE");
            }
        }

        public void UpdateAngleFrameScale(int cycles, int sides, int animFrame, List<float> mirror, WaitForSeconds delay, MeshRenderer meshRenderer, MeshFilter meshFilter, GameObject thingGameObject, IAcknexObject acknexObject, Transform transform)
        {
            if (HasModel(out var modelObject))
            {
                meshRenderer.material = modelObject.Material;
                meshRenderer.material.mainTexture = modelObject.Texture2D;
                meshFilter.mesh = modelObject.Mesh;
                thingGameObject.transform.rotation = Quaternion.Euler(-90f, 0f, 0f);
                transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
            }
            else
            {
                var camera = CameraExtensions.GetLastActiveCamera();
                int side;
                if (camera != null && thingGameObject != null)
                {
                    var halfStep = 180f / sides;
                    var cameraToThingDirection = Quaternion.LookRotation(AngleUtils.To2D(camera.transform.position - thingGameObject.transform.position).normalized, Vector3.up) * Vector3.forward;
                    var thingAngle = AngleUtils.ConvertAcknexToUnityAngle(acknexObject.GetFloat("ANGLE"));
                    var thingDirection = Quaternion.Euler(0f, thingAngle, 0f) * Vector3.back;
                    var angle = Mathf.Repeat(AngleUtils.Angle(thingDirection, cameraToThingDirection) + halfStep, 360f);
                    var normalizedAngle = angle / 360f;
                    side = Mathf.RoundToInt(Mathf.Lerp(0, sides - 1, normalizedAngle));
                }
                else
                {
                    side = 0;
                }

                ;
                Bitmap bitmap;
                int angleFrame;
                if (mirror != null && mirror[side] > 0) //mirrored
                {
                    angleFrame = side * cycles;
                    var frame = angleFrame + animFrame;
                    bitmap = this.GetBitmapAt(frame);
                    if (meshRenderer?.material != null && bitmap != null)
                    {
                        UpdateFrame(bitmap, meshRenderer.material, true, frame);
                    }
                }
                else
                {
                    angleFrame = side * cycles;
                    var frame = angleFrame + animFrame;
                    bitmap = this.GetBitmapAt(frame);
                    if (meshRenderer?.material != null && bitmap != null)
                    {
                        UpdateFrame(bitmap, meshRenderer.material, false, frame);
                    }
                }
                if (transform != null)
                {
                    transform.localScale = TextureUtils.CalculateObjectSize(bitmap, this);
                }
            }
        }

        public bool HasModel(out Model modelObject)
        {
            modelObject = null;
            return this.AcknexObject.TryGetString("MODEL", out var model) && World.Instance.ModelsByName.TryGetValue(model, out modelObject);
        }

        public void UpdateFrame(Bitmap bitmap, Material unityMaterial, bool mirror = false, int frameIndex = 0)
        {
            //todo: null here to avoid scale
            bitmap.UpdateMaterial(unityMaterial, null, frameIndex, mirror);
        }

        public Texture()
        {
            AcknexObject.Container = this;
        }

        public void Setup()
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
    }
}