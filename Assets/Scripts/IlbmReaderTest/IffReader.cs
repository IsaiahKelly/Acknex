﻿using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using UnityEngine;
using UnityEngine.Experimental.Rendering;
using Color = System.Drawing.Color;

namespace IlbmReaderTest
{
    public class IffReader
    {
        public delegate IffReader Factory();

        public IffFile Read(string fileName)
        {
            var fileContent = File.ReadAllBytes(fileName);
            var topLevelIterator = new IffChunkIterator(fileContent);
            var iffFile = new IffFile();

            while (topLevelIterator.EndOfChunk() == false)
            {
                var topLevelChunk = topLevelIterator.GetNextChunk();
                HandleChunk(topLevelChunk, iffFile); // Assume top level chunks are form's for now
            }

            //var bmhd = iffFile.GetBmhd();
            //var body = iffFile.GetBody();
            //var cmap = iffFile.GetCmap();
            foreach (var ilbm in iffFile.Ilbms)
            {
                var bmhd = ilbm.Bmhd != null ? ilbm.Bmhd : iffFile.GetBmhd();
                var body = ilbm.Body != null ? ilbm.Body : iffFile.GetBody();
                var cmap = ilbm.Cmap != null ? ilbm.Cmap : iffFile.GetCmap();
                //var ilbm = iffFile.Ilbms.FirstOrDefault();
                var bitmapData = ilbm.Body != null ? ilbm.Body.BitmapData : ilbm.Dlta.BitmapData;
                {
                    var width = bmhd.Width;
                    var height = bmhd.Height;
                    var numberOfPlanes = bmhd.NumberOfPlanes;

                    var bytesPerRowPerPlane = body.BytesPerRowPerPlane;
                    var bytesPerRowAllPlanes = body.BytesPerRowAllPlanes;

                    var bitmap = new Color32[width * height];

                    for (var pixelX = 0; pixelX < width; pixelX++)
                    {
                        var xoffset = pixelX / 8;
                        var xbit = (~pixelX) & 0x00000007;
                        var bitMask = 0x01 << xbit;

                        for (var pixelY = 0; pixelY < height; pixelY++)
                        {
                            int clutIndex;
                            if (ilbm.IsPbm)
                            {
                                clutIndex = bitmapData[pixelY * width + pixelX];
                            }
                            else
                            {
                                clutIndex = 0;
                                var yoffset = pixelY * bytesPerRowAllPlanes;
                                for (int plane = 0; plane < numberOfPlanes; plane++)
                                {
                                    var planeByte = bitmapData[yoffset + xoffset + plane * bytesPerRowPerPlane];
                                    var planeValue = ((planeByte & bitMask) >> xbit) << plane;
                                    clutIndex = clutIndex + planeValue;
                                }
                            }

                            //if (bmhd.NumberOfPlanes == 24 && clutIndex > 0) { }
                            Color32 pixelCol;
                            if (bmhd.NumberOfPlanes == 24)
                            {
                                int r = (clutIndex & 0x00ff0000) >> 16;
                                int g = (clutIndex & 0x0000ff00) >> 8;
                                int b = clutIndex & 0x000000ff;
                                pixelCol = new Color32((byte)r, (byte)g, (byte)b, 255);
                            }
                            else
                            {
                                pixelCol = cmap.Colors[clutIndex];
                            }
                            bitmap[pixelY * width + pixelX] = pixelCol;
                        }
                    }
                    ilbm.Bitmap = bitmap;

                    ilbm.Texture2D = new Texture2D(width, height, GraphicsFormat.R8G8B8A8_UNorm, TextureCreationFlags.None);
                    ilbm.Texture2D.SetPixels32(bitmap);
                    ilbm.Texture2D.Apply(true, false);
                }
            }


            return iffFile;
        }

        private void HandleChunk(IffChunk chunk, IffFile iffFile, Ilbm ilbm = null)
        {
            switch (chunk.TypeId)
            {
                case "FORM":
                    var formType = ContentReader.ReadString(chunk.Content, 0, 4);

                    switch (formType)
                    {
                        case "ILBM":
                        case "PBM ":
                            ilbm = new Ilbm
                            {
                                IsPbm = formType == "PBM "
                            };
                            var ilbmIterator = new IffChunkIterator(chunk.Content, 4);
                            while (ilbmIterator.EndOfChunk() == false)
                            {
                                var innerIlbmChunk = ilbmIterator.GetNextChunk();
                                iffFile.AllChunks.Add(innerIlbmChunk);

                                HandleChunk(innerIlbmChunk, iffFile, ilbm);
                            }

                            iffFile.Ilbms.Add(ilbm);
                            break;
                        case "ANIM":
                            iffFile.IsAnim = true;
                            var animIterator = new IffChunkIterator(chunk.Content, 4);
                            while (animIterator.EndOfChunk() == false)
                            {
                                var innerIlbmChunk = animIterator.GetNextChunk();
                                iffFile.AllChunks.Add(innerIlbmChunk);

                                HandleChunk(innerIlbmChunk, iffFile);
                            }
                            break;
                        default:
                            Debug.LogWarning($"Unsupported FORM type [{formType}]");
                            break;
                    }

                    break;

                case "ANNO":
                    ilbm.Anno = Encoding.UTF8.GetString(chunk.Content, 0, (int)chunk.ContentLength);
                    break;
                case "BMHD":
                    ilbm.Bmhd = new Bmhd(chunk);
                    break;
                case "CMAP":
                    ilbm.Cmap = new Cmap(chunk, ilbm);
                    break;
                case "CAMG":
                    ilbm.Camg = new Camg(chunk);
                    break;
                case "BODY":
                    ilbm.Body = new Body(chunk, ilbm);
                    break;
                case "ANHD":
                    ilbm.Anhd = new Anhd(chunk);
                    break;
                case "DLTA":
                    ilbm.Dlta = new Dlta(chunk, ilbm, iffFile);
                    break;

                case "DPPS":
                    //todo: Handle DPPS
                    Debug.LogWarning($"Unsupported ILBM inner chunk [{chunk.TypeId}]");
                    break;
                //case "FORM":
                //    //todo: Handle inner FORMs
                //    Debug.LogWarning($"Unsupported ILBM inner chunk [{chunk.TypeId}]");
                //    break;
                case "DRNG":
                    //DPaint IV enhanced color cycle chunk (EA)
                    // http://wiki.amigaos.net/wiki/ILBM_IFF_Interleaved_Bitmap
                    Debug.LogWarning($"Unsupported ILBM inner chunk [{chunk.TypeId}]");
                    break;
                case "BRNG":
                    //unknown
                    Debug.LogWarning($"Unsupported ILBM inner chunk [{chunk.TypeId}]");
                    break;
                case "CRNG":
                    // color register range
                    // http://wiki.amigaos.net/wiki/ILBM_IFF_Interleaved_Bitmap
                    Debug.LogWarning($"Unsupported ILBM inner chunk [{chunk.TypeId}]");
                    break;
                case "DPI ":
                    // Dots per inch chunk
                    // http://wiki.amigaos.net/wiki/ILBM_IFF_Interleaved_Bitmap
                    Debug.LogWarning($"Unsupported ILBM inner chunk [{chunk.TypeId}]");
                    break;
                case "GRAB":
                    // locates a “handle” or “hotspot”
                    // http://wiki.amigaos.net/wiki/ILBM_IFF_Interleaved_Bitmap
                    Debug.LogWarning($"Unsupported ILBM inner chunk [{chunk.TypeId}]");
                    break;
                case "DPXT":
                    // unknown
                    Debug.LogWarning($"Unsupported ILBM inner chunk [{chunk.TypeId}]");
                    break;
                case "TINY":
                    // Thumbnail
                    // https://en.m.wikipedia.org/wiki/ILBM
                    Debug.LogWarning($"Unsupported ILBM inner chunk [{chunk.TypeId}]");
                    break;

                default:
                    Debug.LogWarning($"Unsupported ILBM inner chunk [{chunk.TypeId}]");
                    break;
                    //throw new Exception($"Unknown inner Ilbm chunk type id [{innerIlbmChunk.TypeId}]");
            }
        }

        public IffChunk ReadTopLevelChunk(string fileName)
        {
            var fileContent = File.ReadAllBytes(fileName);
            var iffChunk = new IffChunk(fileContent, 0);
            return iffChunk;
        }
    }
}
