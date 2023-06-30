using System;
using System.Collections;
using System.Collections.Generic;
using Acknex.Interfaces;
using UnityEngine;
using NameId = System.UInt32;
using PropertyName = Acknex.Interfaces.PropertyName;

namespace Acknex
{
    public class Texture : IAcknexObjectContainer
    {
        private List<WaitForSeconds> _textureObjectDelay;

        public Texture()
        {
            AcknexObject.Container = this;
        }

        public List<IAcknexObject> BMaps
        {
            get
            {
                if (AcknexObject.TryGetObject(PropertyName.BMAPS, out List<IAcknexObject> bmaps))
                {
                    return bmaps;
                }
                if (AcknexObject.TryGetAcknexObject(PropertyName.BMAP, out var bmap))
                {
                    bmaps = new List<IAcknexObject>();
                    bmaps.Add(bmap);
                }
                else
                {
                    bmaps = new List<IAcknexObject>();
                }
                AcknexObject.SetObject(PropertyName.BMAPS, bmaps);
                return bmaps;
            }
        }

        public IAcknexObject AcknexObject { get; set; } = new AcknexObject(GetTemplateCallback, ObjectType.Texture);

        public void Disable()
        {
        }

        public void Enable()
        {
        }

        public GameObject GameObject => null;

        public Vector3 GetCenter()
        {
            return default;
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
        }

        public void SetupInstance()
        {
        }

        public void SetupTemplate()
        {
            var delay = AcknexObject.GetObject<List<float>>(PropertyName.DELAY);
            if (delay != null)
            {
                _textureObjectDelay = new List<WaitForSeconds>(delay.Count);
                for (var i = 0; i < delay.Count; i++)
                {
                    _textureObjectDelay.Add(new WaitForSeconds(TimeUtils.TicksToTime((int)delay[i])));
                }
            }
        }

        public void UpdateObject()
        {
            AcknexObject.IsDirty = false;
        }

        public override string ToString()
        {
            return AcknexObject.ToString();
        }

        private static IAcknexObject GetTemplateCallback(uint name)
        {
            return null;
        }

        public Bitmap GetBitmapAt(int index = 0)
        {
            var bMaps = BMaps;
            if (bMaps.Count > index)
            {
                var bmap = bMaps[index];
                if (bmap != null)
                {
                    return bmap.Container as Bitmap;
                }
            }
            return null;
        }

        //todo: SLOOP
        public IEnumerator AnimateTexture(Func<Texture, bool> canceled, bool scaleTexture, IList<Material> materials, MeshRenderer meshRenderer, MeshFilter meshFilter, GameObject sourceGameObject, IAcknexObject MY, IAcknexObject THERE, int side = 0)
        {
            var cycles = Mathf.Max(1, AcknexObject.GetInteger(PropertyName.CYCLES));
            var mirror = AcknexObject.GetObject<List<float>>(PropertyName.MIRROR);
            var scycles = AcknexObject.GetObject<List<float>>(PropertyName.SCYCLES);

            bool CanBreakAnimation(IAcknexObject sound)
            {
                return MY.HasFlag(PropertyName.ONESHOT) || (cycles == 1 && sound == null && !MY.TryGetAcknexObject(PropertyName.EACH_CYCLE, out _));
            }

            var cycle = 0;
            while (true)
            {
                if (canceled(this))
                {
                    yield break;
                }
                cycle = (int)Mathf.Repeat(cycle, cycles);
                IAcknexObject sound = null;
                MY.SetFloat(PropertyName.CYCLE, cycle + 1);
                if (MY.Type != ObjectType.Region)
                {
                    sound = AcknexObject.GetAcknexObject(PropertyName.SOUND);
                    if (sound != null && ((scycles == null && cycle == 0) || (scycles != null && scycles[cycle] > 0f)))
                    {
                        World.Instance.PlaySound(sound, AcknexObject.GetFloat(PropertyName.SVOL), MY, AcknexObject.GetFloat(PropertyName.DIST), AcknexObject.GetFloat(PropertyName.SVDIST));
                    }
                }
                var currentDelay = _textureObjectDelay != null && _textureObjectDelay.Count > cycle ? _textureObjectDelay[cycle] : World.Instance.WaitForTick;
                UpdateAngleFrameScale(scaleTexture, cycles, side, cycle, mirror, currentDelay, materials, meshRenderer, meshFilter, sourceGameObject, MY);
                yield return currentDelay;
                cycle++;
                if (cycle >= cycles)
                {
                    World.Instance.TriggerEvent(PropertyName.EACH_CYCLE, MY, MY, THERE);
                    if (CanBreakAnimation(sound))
                    {
                        MY.RemoveFlag(PropertyName.ONESHOT);
                        yield break;
                    }
                }
            }
        }

        public void UpdateAngleFrameScale(bool scaleTexture, int cycles, int side, int animFrame, IList<float> mirror, WaitForSeconds delay, IList<Material> materials, MeshRenderer meshRenderer, MeshFilter meshFilter, GameObject sourceGameObject, IAcknexObject sourceAcknexObject /*, Transform sourceTransform*/)
        {
            if (HasModel(out var modelObject))
            {
                var model = (Model)modelObject.Container;
                var frame = 0;
                if (materials != null && model.Bitmap != null)
                {
                    meshFilter.transform.localPosition = new Vector3(0f, -meshRenderer.bounds.min.y, 0f);
                    UpdateFrame(model.Bitmap, materials, scaleTexture, mirror != null && mirror[side] > 0, frame, sourceAcknexObject);
                }
            }
            else
            {
                var angleFrame = side * cycles;
                var frame = angleFrame + animFrame;
                var bitmap = GetBitmapAt(frame);
                if (materials != null && bitmap != null)
                {
                    UpdateFrame(bitmap, materials, scaleTexture, mirror != null && mirror[side] > 0, frame, sourceAcknexObject);
                }
                if (sourceGameObject != null)
                {
                    sourceGameObject.transform.localScale = TextureUtils.CalculateObjectSize(bitmap, this);
                }
            }
        }

        public bool HasModel(out IAcknexObject modelObject)
        {
            return AcknexObject.TryGetAcknexObject(PropertyName.MODEL, out modelObject);
        }

        public void UpdateFrame(Bitmap bitmap, IList<Material> materials, bool scaleTexture, bool mirror = false, int frameIndex = 0, IAcknexObject sourceAcknexObject = null)
        {
            bitmap?.UpdateMaterial(materials, scaleTexture ? this : null, frameIndex, mirror, sourceAcknexObject);
        }
    }
}