Shader "Acknex/Sky"
{
    Properties
    {
        _MainTex ("Texture", 2D) = "white" {}
        _SOFFSETY("_OFFSETY", Float) = 0.2
    }
    SubShader
    {
        Tags { "RenderType"="Opaque" }
        LOD 100

        Pass
        {
            CGPROGRAM
            #pragma vertex vert
            #pragma fragment frag
            // make fog work
            #pragma multi_compile_fog

            #include "UnityCG.cginc"

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

            sampler2D _MainTex;
            float4 _MainTex_ST;

            int _SIDES;
            float _CAMERA_PITCH;
            float _SOFFSETY;

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
                //todo: remove this fixed number and pass from code
                _SIDES = 5;
                float3 worldDirection = normalize(_WorldSpaceCameraPos - i.worldPos.xyz);
                float yaw = 180.0 + degrees(atan2(worldDirection.z, worldDirection.x));
                float anglesPerSide = 360.0 / _SIDES;
                float u = fmod(yaw, anglesPerSide);
                u /= anglesPerSide;
                float v = (i.screenPosition.y / i.screenPosition.w) + (_CAMERA_PITCH * 0.02);
                v -= _SOFFSETY;
                v = clamp(v, 0.01, 0.91);
                fixed4 col = tex2D(_MainTex, float2(u, v));
                UNITY_APPLY_FOG(i.fogCoord, col);
                return col;
            }
            ENDCG
        }
    }
}
