Shader "Acknex/Surface"
{
	Properties
	{
		_MainTex("Albedo (RGB)", 2D) = "white" {}
		_AMBIENT("_AMBIENT", Float) = 1.0
		_ALBEDO("_ALBEDO", Float) = 0.0
		_RADIANCE("_RADIANCE", Float) = 1.0
		_X0("_X0", Float) = 0.0
		_Y0("_Y0", Float) = 0.0
		_X1("_X1", Float) = 0.0
		_Y1("_Y1", Float) = 0.0
		_SCALEX("_SCALEX", Float) = 0.0
		_SCALEY("_SCALEY", Float) = 0.0
		_OFFSETX("_OFFSETX", Float) = 0.0
		_OFFSETY("_OFFSETY", Float) = 0.0
		_V0H("_V0H", Float) = 0.0
		_V1H("_V1H", Float) = 0.0
		_FENCE("_FENCE", Int) = 0
		_PORTCULLIS("_PORTCULLIS", Int) = 0
		_TRANSPARENT("_TRANSPARENT", Int) = 0
		_CullMode("_CullMode", Int) = 0
		_attachCount("_attachCount", Int) = 0
		_ATTACH("_ATTACH", 2DArray) = "" {}
		_TESTX("_TESTX", Float) = 1
		_TESTY("_TESTY", Float) = 1
	}
	SubShader
		{
			Tags { "RenderType" = "Opaque" "ForceNoShadowCasting" = "True" }

			Cull[_CullMode]
			LOD 100

			CGPROGRAM
			#pragma surface surf Acknex vertex:vert noambient novertexlights nolightmap noshadow 

			#pragma target 3.0

			sampler2D _MainTex;
			#include "Common.cginc"
			#include "Lighting.cginc"

			struct Input
			{
				float2 uv_MainTex;
				float3 worldPos;
			};

			UNITY_INSTANCING_BUFFER_START(Props)
			UNITY_INSTANCING_BUFFER_END(Props)

			void vert(inout appdata_full v) {
				float3 worldPos = mul(unity_ObjectToWorld, v.vertex);
				float3 worldNorm = UnityObjectToWorldNormal(v.normal);
				float3 viewDir = worldPos - _WorldSpaceCameraPos;
				v.normal *= dot(viewDir, worldNorm) > 0 ? -1 : 1;
			}

			int _attachCount;
			float4 _attachPos[256];
			UNITY_DECLARE_TEX2DARRAY(_ATTACH);
			float4 _ATTACH_TexelSize;

			float _TESTX;
			float _TESTY;

			void surf(Input IN, inout SurfaceOutput o)
			{
				//todo: lerp between V0H V1H
				if (_FENCE || _PORTCULLIS) {
					_OFFSETY = 0;
					//todo: better take this as width and height from the original sprite to avoid distortion
					float worldHeight = (_Y1 - _Y0) / _SCALEY;
					IN.uv_MainTex.y -= _V0H;
					if (_FENCE && IN.uv_MainTex.y > worldHeight) {
						discard;
					}
				}
				float2 rectMin = float2(_OFFSETX + (_X0 * _SCALEX), _OFFSETY + (_Y0 * _SCALEY));
				float2 rectMax = float2(rectMin.x + _SCALEX, rectMin.y + _SCALEY);
				float2 uv = lerp(rectMin, rectMax, IN.uv_MainTex);
				uv *= _MainTex_TexelSize.xy;
				fixed4 c = tex2D(_MainTex, uv);
				ApplyPalette(c);
				float2 attachUV;
				[loop]
				for (int i = 0; i < _attachCount; i++) {
					float4 attachData = _attachPos[i];
					float2 pos = attachData.xy;
					float2 size = attachData.zw;
					attachUV += uv;
					attachUV += float2(-pos.x, pos.y) * _MainTex_TexelSize.xy;
					attachUV /= float2(_TESTX, _TESTY);
					if (any(attachUV < 0.0) || any(attachUV > 1.0)) {
						continue;
					}
					fixed4 ac = UNITY_SAMPLE_TEX2DARRAY(_ATTACH, float3(attachUV, i));
					ApplyPalette(ac);
					c = AlphaBlend(c, ac);
				}
				o.Albedo = c.rgb;
				o.Alpha = c.a;
				if (_TRANSPARENT && o.Alpha < 0.5) {
					discard;
				}
			}
			ENDCG
		}
		FallBack "Diffuse"
}
