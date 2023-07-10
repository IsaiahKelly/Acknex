        void CustomVert(inout appdata_full v, out Input o)
        {
            UNITY_INITIALIZE_OUTPUT(Input, o);
            COMPUTE_EYEDEPTH(o.eyeDepth);
            float3 worldPos = mul(unity_ObjectToWorld, v.vertex);
            float3 worldNorm = UnityObjectToWorldNormal(v.normal);
            float3 viewDir = worldPos - _WorldSpaceCameraPos;
            v.normal *= dot(viewDir, worldNorm) > 0 ? -1 : 1;
        }

        void ApplyDist(Input IN, inout float3 c) {
            float _DepthNear = 0.0;
            float _DepthFar = 100.0;
            float _DepthPower = 1.0;
            float2 screenUV = IN.screenPos.xy / IN.screenPos.w;
            float dist = (clamp(IN.eyeDepth, _DepthNear, _DepthFar) - _DepthNear) / (_DepthFar - _DepthNear);
            dist = pow(1.0 - dist * 0.99999, _DepthPower);
            c = c * (0.5 + (dist * 0.5));
        	//c *= dist;
        }