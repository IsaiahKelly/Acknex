#include "UnityLightingCommon.cginc"

struct SurfaceOutput
{
	fixed3 Albedo;  // diffuse color
	fixed3 Normal;  // tangent space normal, if written
	fixed3 Emission;
	half Specular;  // specular power in 0..1 range
	fixed Gloss;    // specular intensity
	fixed Alpha;    // alpha for transparencies
};

half4 LightingAcknex(SurfaceOutput s, half3 lightDir, half atten) {
	half light = (_AMBIENT * 0.75) + (max(dot(s.Normal, lightDir), 0.0) * _ALBEDO);
	half4 c;
	c.rgb = _RADIANCE + s.Albedo * light;
	c.a = s.Alpha;
	return c;
}

half4 LightingAcknex_GI(SurfaceOutput s, UnityGIInput data, inout UnityGI gi) {
	return half4(s.Albedo, s.Alpha);
}