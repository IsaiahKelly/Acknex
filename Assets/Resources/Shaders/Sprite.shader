Shader "Acknex/Sprite"
{
	Properties
	{
		_MainTex("Texture", 2D) = "white" {}
		_Cutoff("Alpha cutoff", Range(0,1)) = 0.9
	}
		SubShader
		{
			Tags {"Queue" = "AlphaTest" "IgnoreProjector" = "True" "RenderType" = "TransparentCutout" }
			LOD 100

			Pass
			{
				Tags{ "LightMode" = "ForwardBase" }
				CGPROGRAM
				#pragma vertex vert
				#pragma fragment frag
			// make fog work
			#pragma multi_compile_fog

			#include "UnityCG.cginc"

			struct appdata
			{
				float4 vertex : POSITION;
				float2 uv : TEXCOORD0;
			};

			struct v2f
			{
				float2 uv : TEXCOORD0;
				UNITY_FOG_COORDS(1)
				float4 vertex : SV_POSITION;
			};

			sampler2D _MainTex;
			float4 _MainTex_ST;
			float4 _MainTex_TexelSize;

			float _Cutoff;

			float _X0;
			float _Y0;
			float _X1;
			float _Y1;

			v2f vert(appdata v)
			{
				v2f o;
				o.vertex = UnityObjectToClipPos(v.vertex);
				o.uv = TRANSFORM_TEX(v.uv, _MainTex);
				UNITY_TRANSFER_FOG(o,o.vertex);
				return o;
			}

			float4 frag(v2f i) : SV_Target
			{
				float2 uv = lerp(float2(_X0, _Y0), float2(_X1, _Y1), i.uv) * _MainTex_TexelSize.xy;
				float4 col = tex2D(_MainTex, uv);
				clip(col.a - _Cutoff);
				// apply fog
				UNITY_APPLY_FOG(i.fogCoord, col);
				return col;
			}
			ENDCG
		}
			//Pass
			//{
			//    Tags{ "LightMode" = "ForwardAdd" }
			//    CGPROGRAM
			//    #pragma vertex vert
			//    #pragma fragment frag
			//        // make fog work
			//        #pragma multi_compile_fog

			//        #include "UnityCG.cginc"

			//        struct appdata
			//        {
			//            float4 vertex : POSITION;
			//            float2 uv : TEXCOORD0;
			//        };

			//        struct v2f
			//        {
			//            float2 uv : TEXCOORD0;
			//            UNITY_FOG_COORDS(1)
			//            float4 vertex : SV_POSITION;
			//        };

			//        sampler2D _MainTex;
			//        float4 _MainTex_ST;
			//        float _Cutoff;

			//        v2f vert(appdata v)
			//        {
			//            v2f o;
			//            o.vertex = UnityObjectToClipPos(v.vertex);
			//            o.uv = TRANSFORM_TEX(v.uv, _MainTex);
			//            UNITY_TRANSFER_FOG(o,o.vertex);
			//            return o;
			//        }

			//        float4 frag(v2f i) : SV_Target
			//        {
			//            float4 col = tex2D(_MainTex, i.uv);
			//            clip(col.a - _Cutoff);
			//            // apply fog
			//            UNITY_APPLY_FOG(i.fogCoord, col);
			//            return col;
			//    }
			//    ENDCG
			//}

			//Pass
			//{
			//    Tags { "LightMode" = "ShadowCaster" }
			//    CGPROGRAM
			//        #pragma vertex vert
			//        #pragma fragment frag

			//        #include "UnityCG.cginc"

			//        struct appdata
			//        {
			//            float4 vertex : POSITION;
			//            float2 uv : TEXCOORD0;
			//        };

			//        struct v2f
			//        {
			//            float2 uv : TEXCOORD0;
			//            float4 vertex : SV_POSITION;
			//        };

			//        sampler2D _MainTex;
			//        float4 _MainTex_ST;
			//        float _Cutoff;

			//        v2f vert(appdata v)
			//        {
			//            v2f o;
			//            o.vertex = UnityObjectToClipPos(v.vertex);
			//            o.uv = TRANSFORM_TEX(v.uv, _MainTex);
			//            UNITY_TRANSFER_FOG(o,o.vertex);
			//            return o;
			//        }

			//        float4 frag(v2f i) : SV_Target
			//        {
			//            float4 col = tex2D(_MainTex, i.uv);
			//            clip(col.a - _Cutoff);
			//            return 0;
			//        }
			//    ENDCG
			//}
		}
}
