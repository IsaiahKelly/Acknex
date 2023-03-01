Shader "Acknex/Surfaces"
{
    Properties
    {
        _Color ("Color", Color) = (1,1,1,1)
        _MainTex ("Albedo (RGB)", 2D) = "white" {}
        _Glossiness ("Smoothness", Range(0,1)) = 0.5
        _Metallic ("Metallic", Range(0,1)) = 0.0
        _Cutoff("Alpha cutoff", Range(0,1)) = 0.9
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
        Tags { "RenderType"="Opaque" }
        //todo: lets add this here later
        //Cull Off
        LOD 200

        CGPROGRAM
        // Physically based Standard lighting model, and enable shadows on all light types
        #pragma surface surf Standard addshadow 

        // Use shader model 3.0 target, to get nicer looking lighting
        #pragma target 3.0

        sampler2D _MainTex;
        float4 _MainTex_TexelSize;

        struct Input
        {
            float2 uv_MainTex;
        };

        half _Glossiness;
        half _Metallic;
        fixed4 _Color;
        float _Cutoff;

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

        void surf (Input IN, inout SurfaceOutputStandard o)
        {
            float2 coord0 = float2(_X0, _Y0);
            float2 coord1 = float2(_X1, _Y1);
            //if (_CLAMPY) {
            //    float height = abs(_Y1 - _Y0);
            //    float maxHeight = -_V0H + height;// lerp(_V0H + height, _V1H + height, uv.x);
            //    if (IN.uv_MainTex.y > maxHeight) {
            //        IN.uv_MainTex.y = maxHeight;
            //        _Color = 0.0;
            //    }
            //}
            float2 uv = lerp(coord0, coord1, IN.uv_MainTex);
            uv *= _MainTex_TexelSize.xy;
            // Albedo comes from a texture tinted by color
            fixed4 c = tex2D (_MainTex, uv) * _Color;
            clip(c.a - _Cutoff);
            o.Albedo = c.rgb;// *_AMBIENT;
            // Metallic and smoothness come from slider variables
            o.Metallic = _Metallic;
            o.Smoothness = _Glossiness;
            o.Alpha = c.a;
        }
        ENDCG
    }
    FallBack "Diffuse"
}
