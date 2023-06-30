Shader "Acknex/Sky"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _BMAPS("_BMAPS", 2DArray) = "white" {}
        _SIDES("_SIDES", Int) = 1
        _SKY_OFFS_Y("_OFFSETY", Float) = 0.2
        _ZWrite("_ZWrite", Int) = 1
    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }
        LOD 100
        ZWrite[_ZWrite]
        //ZTest LEqual

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            // make fog work
            #pragma multi_compile_fog
            #pragma require 2darray

            #include "UnityCG.cginc"
            #include "Common.cginc"

            struct appdata
            {
                float4 vertex : POSITION;
            };

            struct v2f
            {
                float4 screenPosition  : TEXCOORD0;
                float4 worldPos : TEXCOORD2;
                UNITY_FOG_COORDS(1)
                float4 vertex : SV_POSITION;
            };


            UNITY_DECLARE_TEX2DARRAY(_BMAPS);
            float4 _BMAPS_TexelSize;

            int _SIDES;
            float _CAMERA_PITCH;
            float _SKY_OFFS_Y;

            v2f vert (appdata v)
            {
                v2f o;
                o.vertex = UnityObjectToClipPos(v.vertex);
                o.screenPosition = ComputeScreenPos(o.vertex);
                o.worldPos = mul(unity_ObjectToWorld, v.vertex);
                UNITY_TRANSFER_FOG(o,o.vertex);
                return o;
            }

            fixed4 frag(v2f i) : SV_Target
            {
                float2 worldDirection = normalize(float2(_WorldSpaceCameraPos.x, _WorldSpaceCameraPos.z) - float2(i.worldPos.x, i.worldPos.z));
                float yaw = 180.0 + degrees(atan2(worldDirection.y, worldDirection.x));
                float anglesPerSide = 360.0 / _SIDES;
                float u = fmod(yaw, anglesPerSide);
                u /= anglesPerSide;
                float v = (i.screenPosition.y / i.screenPosition.w) + (_CAMERA_PITCH * 0.02);
                v -= _SKY_OFFS_Y;
                v = clamp(v, _BMAPS_TexelSize.y, 1.0 - _BMAPS_TexelSize.y);
                int textureIndex = yaw == 0.0 ? 0.0 : yaw / anglesPerSide;
                fixed4 col = UNITY_SAMPLE_TEX2DARRAY(_BMAPS, float3(u, v, textureIndex));
                ApplyPalette(col);
                UNITY_APPLY_FOG(i.fogCoord, col);
                return col;
            }
            ENDCG
        }
    }
}
