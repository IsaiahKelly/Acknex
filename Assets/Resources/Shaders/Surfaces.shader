// Upgrade NOTE: replaced '_Object2World' with 'unity_ObjectToWorld'

Shader "Acknex/Surfaces"
{
	Properties
	{
		_Color("Color", Color) = (1,1,1,1)
		_MainTex("Albedo (RGB)", 2D) = "white" {}
		_Glossiness("Smoothness", Range(0,1)) = 0.5
		_Metallic("Metallic", Range(0,1)) = 0.0
		_CullMode("_CullMode", Int) = 0
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
	}
		SubShader
		{
			Tags { "RenderType" = "Opaque" }
			//todo: lets add this here later
			Cull[_CullMode]
			LOD 200

			CGPROGRAM
			#pragma surface surf Surface addshadow vertex:vert

			#pragma target 3.0

			sampler2D _MainTex;
			#include "Common.cginc"
			#include "UnityPBSLighting.cginc"

			struct Input
			{
				float2 uv_MainTex;
			};

			half _Glossiness;
			half _Metallic;

			UNITY_INSTANCING_BUFFER_START(Props)
			UNITY_INSTANCING_BUFFER_END(Props)

			half4 LightingSurface(SurfaceOutput s, half3 lightDir, half atten) {
				half NdotL = max(dot(s.Normal, lightDir), 0.0) * _ALBEDO;
				half4 c;
				c.rgb = (_RADIANCE + s.Albedo) * _AMBIENT * _LightColor0.rgb * (NdotL * atten);
				c.a = s.Alpha;
				return c;
			}

			void vert(inout appdata_full v) {
				float3 worldPos = mul(unity_ObjectToWorld, v.vertex);
				float3 worldNorm = UnityObjectToWorldNormal(v.normal);
				float3 viewDir = worldPos - _WorldSpaceCameraPos;
				v.normal *= dot(viewDir, worldNorm) > 0 ? -1 : 1;
			}

			void mycolor(Input IN, SurfaceOutput o, inout fixed4 color)
			{
				color *= _AMBIENT;
			}

			void surf(Input IN, inout SurfaceOutput o)
			{
				//todo: lerp between V0H V1H
				if (_FENCE) {
					_OFFSETY = 0;
					//todo: better take this as width and height from the original sprite to avoid distortion
					float worldHeight = (_Y1 - _Y0) / _SCALEY;
					IN.uv_MainTex.y -= _V0H;
					if (IN.uv_MainTex.y > worldHeight) {
						discard;
					}
				}
				float2 rectMin = float2(_OFFSETX + (_X0 * _SCALEX), _OFFSETY + (_Y0 * _SCALEY));
				float2 rectMax = float2(rectMin.x + _SCALEX, rectMin.y + _SCALEY);
				float2 uv = lerp(rectMin, rectMax, IN.uv_MainTex);
				uv *= _MainTex_TexelSize.xy;
				fixed4 c = tex2D(_MainTex, uv);
				ApplyPalette(c);
				o.Alpha = (c.a - 0.5) / max(fwidth(c.a), 0.0001) + 0.5;
				clip(o.Alpha - 0.5);
				o.Albedo = c.rgb;
			}
			ENDCG
		}
		FallBack "Diffuse"
}
