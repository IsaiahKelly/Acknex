Shader "Acknex/Dilate"
{
	Properties
	{
		_MainTex("Texture", 2D) = "white" {}
	}
		SubShader
	{
		// No culling or depth
		Cull Off ZWrite Off ZTest Always

		Pass
		{
			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag

			#include "UnityCG.cginc"

			sampler2D _MainTex;
			float4 _MainTex_TexelSize;
			float4 _MainTex_ST;

			struct appdata
			{
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
			};

			struct v2f
			{
				float2 uv : TEXCOORD0;
				float4 vertex : SV_POSITION;
			};

			v2f vert(appdata v)
			{
				v2f o;
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				return o;
			}

			float4 frag(v2f input) : SV_Target
			{
				const float2 offsets[8] = {float2(-1,0), float2(1,0), float2(0,1), float2(0,-1), float2(-1,1), float2(1,1), float2(1,-1), float2(-1,-1)};
				float4 fragment = tex2D(_MainTex, input.uv);
				if (fragment.x == 1.0 && fragment.y == 0.0 && fragment.z == 1.0) {
					[unroll]
					for (int j = 0; j < 8; j++) {
						float4 check = tex2D(_MainTex, input.uv + (offsets[j] * _MainTex_TexelSize.xy));
						if (!(check.x == 1.0 && check.y == 0.0 && check.z == 1.0)) {
							return float4(check.xyz, fragment.w);
						}
					}
				}
				return fragment;
			}
		ENDCG
		}
	}
}