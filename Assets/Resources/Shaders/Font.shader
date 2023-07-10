Shader "Acknex/Font"
{
    Properties
    {
        _MainTex("Texture", 2DArray) = "white" {}
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
            #include "Common.cginc"

            UNITY_DECLARE_TEX2DARRAY(_MainTex);
            UNITY_DECLARE_TEX2DARRAY(_MainTex_Pal);

            struct appdata
            {
                float4 vertex : POSITION;
                float2 uv : TEXCOORD0;
                float2 uv1 : TEXCOORD1;
            };

            struct v2f
            {
                float2 uv : TEXCOORD0;
                float2 uv1 : TEXCOORD1;
                float4 vertex : SV_POSITION;
            };

            v2f vert(appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.uv = v.uv;
                o.uv1 = v.uv1;
                return o;
            }

            fixed4 frag(v2f i) : SV_Target
            {
                float3 uv3 = float3(i.uv.x, i.uv.y, i.uv1.x);
                fixed4 c = UNITY_SAMPLE_TEX2DARRAY(_MainTex, uv3);
                fixed p = UNITY_SAMPLE_TEX2DARRAY(_MainTex_Pal, uv3).x;
                ApplyPalette(c, p);
                return c;
            }
            ENDCG
        }
    }
}
