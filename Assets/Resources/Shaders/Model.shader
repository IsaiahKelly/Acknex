Shader "Acknex/Model"
{
    Properties
    {
        _MainTex ("Albedo (RGB)", 2D) = "white" {}
        _AMBIENT("_AMBIENT", Float) = 1.0
        _ALBEDO("_ALBEDO", Float) = 0.0
        _RADIANCE("_RADIANCE", Float) = 1.0
    }
    SubShader
    {
        Tags { "RenderType" = "Opaque" "ForceNoShadowCasting" = "True" }
        LOD 200

        CGPROGRAM
        #pragma surface surf Acknex vertex:CustomVert noambient novertexlights nolightmap noshadow 

        #pragma target 3.0
        #include "Common.cginc"
        #include "Lighting.cginc"

        sampler2D _MainTex;
        sampler2D _MainTex_Pal;

        struct Input
        {
            float2 uv_MainTex;
            float3 worldPos;
            float4 screenPos;
            float eyeDepth;
        };
        #include "CommonSurface.cginc"

        UNITY_INSTANCING_BUFFER_START(Props)
        UNITY_INSTANCING_BUFFER_END(Props)

        void surf (Input IN, inout SurfaceOutput o)
        {
            fixed4 c = tex2D(_MainTex, IN.uv_MainTex);
            fixed p = tex2D(_MainTex_Pal, IN.uv_MainTex).x;
            ApplyPalette(c, p);
            o.Albedo = c.rgb;
            ClipPlanes(o.Albedo, IN.worldPos);
            ApplyDist(IN, o.Albedo);
            o.Alpha = c.a;
        }
        ENDCG
    }
    FallBack "Diffuse"
}
