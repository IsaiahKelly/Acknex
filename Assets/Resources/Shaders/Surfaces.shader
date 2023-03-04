// Upgrade NOTE: replaced '_Object2World' with 'unity_ObjectToWorld'

Shader "Acknex/Surfaces"
{
    Properties
    {
        _Color ("Color", Color) = (1,1,1,1)
        _MainTex ("Albedo (RGB)", 2D) = "white" {}
        _Glossiness ("Smoothness", Range(0,1)) = 0.5
        _Metallic ("Metallic", Range(0,1)) = 0.0
        _CullMode("_CullMode", Int) = 0
        _AMBIENT("_AMBIENT", Float) = 1.0
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
        Tags { "RenderType"="Opaque" }
        //todo: lets add this here later
        Cull [_CullMode]
        LOD 200

        CGPROGRAM
        // Physically based Standard lighting model, and enable shadows on all light types
        #pragma surface surf Standard addshadow vertex:vert

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

        float _SCALEX;
        float _SCALEY;
        float _OFFSETX;
        float _OFFSETY;

        float _AMBIENT;
        float _V0H;
        float _V1H;

        int _FENCE;
        int _PORTCULLIS;

        // Add instancing support for this shader. You need to check 'Enable Instancing' on materials that use the shader.
        // See https://docs.unity3d.com/Manual/GPUInstancing.html for more information about instancing.
        // #pragma instancing_options assumeuniformscaling
        UNITY_INSTANCING_BUFFER_START(Props)
            // put more per-instance properties here
        UNITY_INSTANCING_BUFFER_END(Props)

        void vert(inout appdata_full v) {
            float3 worldPos = mul(unity_ObjectToWorld, v.vertex);
            float3 worldNorm = UnityObjectToWorldNormal(v.normal);
            float3 viewDir = worldPos - _WorldSpaceCameraPos;
            v.normal *= dot(viewDir, worldNorm) > 0 ? -1 : 1;
            //v.vertex.xyz += v.normal * _Amount;
        }

        void surf (Input IN, inout SurfaceOutputStandard o)
        {

            //todo: lerp between V0H V1H
            if (_FENCE) {
                _OFFSETY = 0;
                //todo: better take this as width and height from the original sprite to avoid distortion
                float worldHeight = (_Y1) / _SCALEY;
                IN.uv_MainTex.y -= _V0H;
                if (IN.uv_MainTex.y > worldHeight) {
                    discard;
                }
            }
            float2 rectMin = float2(_OFFSETX + (_X0 * _SCALEX), _OFFSETY + (_Y0 * _SCALEY));
            float2 rectMax = float2(rectMin.x + _SCALEX, rectMin.y + _SCALEY);
            float2 uv = lerp(rectMin, rectMax, IN.uv_MainTex);
            uv *= _MainTex_TexelSize.xy;
            // Albedo comes from a texture tinted by color
            fixed4 c = tex2D (_MainTex, uv) * _Color;
            if (_PORTCULLIS || _FENCE) {
                /* Sharpen texture alpha to the width of a pixel */
                o.Alpha = (c.a - 0.5) / max(fwidth(c.a), 0.0001) + 0.5;
                clip(o.Alpha - 0.5);
            }
            o.Albedo = c.rgb;// *_AMBIENT;
            // Metallic and smoothness come from slider variables
            o.Metallic = _Metallic;
            o.Smoothness = _Glossiness;
        }
        ENDCG
    }
    FallBack "Diffuse"
}
