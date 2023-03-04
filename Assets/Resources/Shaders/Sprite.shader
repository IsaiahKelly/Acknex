Shader "Acknex/Sprite"
{
    Properties
    {
        _Color ("Color", Color) = (1,1,1,1)
        _MainTex ("Albedo (RGB)", 2D) = "white" {}
        _LightMultiplier("_LightMultiplier", Range(0,1)) = 1.0
        _AMBIENT("_AMBIENT", Float) = 1.0
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
        Tags { "RenderType" = "Opaque" }
        Cull Off
        LOD 200

        CGPROGRAM
        // Physically based Standard lighting model, and enable shadows on all light types
        #pragma surface surf Sprite addshadow

        // Use shader model 3.0 target, to get nicer looking lighting
        #pragma target 3.0

        sampler2D _MainTex;
        float4 _MainTex_TexelSize;

        struct Input
        {
            float2 uv_MainTex;
        };


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

        // Add instancing support for this shader. You need to check 'Enable Instancing' on materials that use the shader.
        // See https://docs.unity3d.com/Manual/GPUInstancing.html for more information about instancing.
        // #pragma instancing_options assumeuniformscaling
        UNITY_INSTANCING_BUFFER_START(Props)
            // put more per-instance properties here
        UNITY_INSTANCING_BUFFER_END(Props)


        half4 LightingSprite(SurfaceOutput s, half3 lightDir, half atten) {
            half4 c;
            c.rgb = s.Albedo * lerp(1.0, _LightColor0.rgb * atten, _LightMultiplier);
            c.a = s.Alpha;
            return c;
        }

        void surf (Input IN, inout SurfaceOutput o)
        {
            _Y0 = _MainTex_TexelSize.w - _Y0;
            _Y1 = _MainTex_TexelSize.w - _Y1;
            float2 coord0 = float2(_X0, _Y0);
            float2 coord1 = float2(_X1, _Y1);
            float2 uv = lerp(coord0, coord1, float2(IN.uv_MainTex.x, 1.0-IN.uv_MainTex.y));
            uv *= _MainTex_TexelSize.xy;
            // Albedo comes from a texture tinted by color
            fixed4 c = tex2D(_MainTex, uv) * _Color;
            o.Albedo = c.rgb;// *_AMBIENT;
            /* Sharpen texture alpha to the width of a pixel */
            o.Alpha = (c.a - 0.5) / max(fwidth(c.a), 0.0001) + 0.5;
            clip(o.Alpha - 0.5);
        }
        ENDCG
    }
    FallBack "Diffuse"
}
