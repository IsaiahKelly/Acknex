Shader "Acknex/UI"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
    }
    SubShader
    {
         Tags {"Queue" = "Transparent" "IgnoreProjector" = "True" "RenderType" = "Transparent"}
         LOD 100

         ZWrite Off
         Blend SrcAlpha OneMinusSrcAlpha

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag

            #include "UnityCG.cginc"

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
                        
            sampler2D _MainTex;
            float4 _MainTex_ST;
            float4 _MainTex_TexelSize;

            fixed4 _Color;
            float _LightMultiplier;

            float _X0;
            float _Y0;
            float _X1;
            float _Y1;
            float _AMBIENT;
            float _V0H;
            float _V1H;
            int _CLAMPX;
            int _CLAMPY;

            v2f vert(appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = TRANSFORM_TEX(v.uv, _MainTex);
                UNITY_TRANSFER_FOG(o, o.vertex);
                return o;
            }

            fixed4 frag (v2f i) : SV_Target
            {
                _Y0 = _MainTex_TexelSize.w - _Y0;
                _Y1 = _MainTex_TexelSize.w - _Y1;
                float2 coord0 = float2(_X0, _Y0);
                float2 coord1 = float2(_X1, _Y1);
                float2 uv = lerp(coord0, coord1, float2(i.uv.x, 1.0 - i.uv.y));
                uv *= _MainTex_TexelSize.xy;
                fixed4 col = tex2D(_MainTex, i.uv);
                return col;
            }
            ENDCG
        }
    }
}
