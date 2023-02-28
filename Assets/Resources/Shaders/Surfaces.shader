Shader "Acknex/Surfaces"
{
    Properties
    {
        _Color ("Color", Color) = (1,1,1,1)
        _MainTex ("Albedo (RGB)", 2D) = "white" {}
        _Glossiness ("Smoothness", Range(0,1)) = 0.5
        _Metallic ("Metallic", Range(0,1)) = 0.0
        _AMBIENT("_AMBIENT", Float) = 1.0
        _X0("_X0", Float) = 0.0
        _X1("_X1", Float) = 0.0
        _Y0("_Y0", Float) = 0.0
        _Y1("_Y1", Float) = 0.0
    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }
        LOD 200

        CGPROGRAM
        // Physically based Standard lighting model, and enable shadows on all light types
        #pragma surface surf Standard fullforwardshadows

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

        float _X0;
        float _Y0;
        float _X1;
        float _Y1;
        float _AMBIENT;

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
            float2 uv = lerp(coord0, coord1, IN.uv_MainTex) * _MainTex_TexelSize.xy;
            // Albedo comes from a texture tinted by color
            fixed4 c = tex2D (_MainTex, uv) * _Color;
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
