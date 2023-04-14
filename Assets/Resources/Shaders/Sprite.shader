Shader "Acknex/Sprite"
{
    Properties
    {
        _MainTex ("Albedo (RGB)", 2D) = "white" {}
        _AMBIENT("_AMBIENT", Float) = 1.0
        _ALBEDO("_ALBEDO", Float) = 0.0
        _RADIANCE("_RADIANCE", Float) = 1.0
        _X0("_X0", Float) = 0.0
        _X1("_X1", Float) = 0.0
        _Y0("_Y0", Float) = 0.0
        _Y1("_Y1", Float) = 0.0
        _V0H("_V0H", Float) = 0.0
        _V1H("_V1H", Float) = 0.0
        _CLAMPX("_CLAMPX", Float) = 0
        _CLAMPY("_CLAMPY", Float) = 0
    }
    SubShader
    {
        Tags {"Queue" = "Transparent" "IgnoreProjector" = "True" "RenderType" = "Transparent" "ForceNoShadowCasting" = "True"}
        LOD 100

        CGPROGRAM
        #pragma surface surf Sprite alpha:blend noambient novertexlights nolightmap noshadow

        #pragma target 3.0
                    
        sampler2D _MainTex;
        #include "Common.cginc"
        
        struct Input
        {
            float2 uv_MainTex;
        };

        UNITY_INSTANCING_BUFFER_START(Props)
        UNITY_INSTANCING_BUFFER_END(Props)

        half4 LightingSprite(SurfaceOutput s, half3 lightDir, half atten) {
            half4 c;
            c.rgb = (_RADIANCE + s.Albedo) * _AMBIENT;
            c.a = s.Alpha;
            return c;
        }

        half4 LightingSprite_GI(SurfaceOutput s, UnityGIInput data, inout UnityGI gi) {
            return half4(s.Albedo, s.Alpha);
        }

        void surf (Input IN, inout SurfaceOutput o)
        {
            _Y0 = _MainTex_TexelSize.w - _Y0;
            _Y1 = _MainTex_TexelSize.w - _Y1;
            float2 coord0 = float2(_X0, _Y0);
            float2 coord1 = float2(_X1, _Y1);
            float2 uv = lerp(coord0, coord1, float2(IN.uv_MainTex.x, 1.0-IN.uv_MainTex.y));
            uv *= _MainTex_TexelSize.xy;
            fixed4 c = tex2D(_MainTex, uv);
            ApplyPalette(c);
            o.Albedo = c.rgb;
            o.Alpha = c.a;
        }
        ENDCG
    }
    FallBack "Diffuse"
}
