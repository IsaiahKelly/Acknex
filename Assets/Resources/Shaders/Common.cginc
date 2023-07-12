int _AcknexUsePalettes;
int _AcknexOldVersion;

sampler2D _AcknexPalette;
float4 _AcknexPalette_TexelSize;

sampler2D _OriginalAcknexPalette;

float4 _MainTex_TexelSize;

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
float _ALBEDO;
float _RADIANCE;
float _V0H;
float _V1H;

int _CLAMPX;
int _CLAMPY;

int _FENCE;
int _PORTCULLIS;
int _TRANSPARENT;
int _DIAPHANOUS;

float _PLAYER_Z;
float _FLOOR_HGT;
float _CEIL_HGT;
int _IF_DIVE;
int _IF_ARISE;

int _AcknexDisableGraphicFeatures;

void ApplyPalette(inout float4 color, float paletteIndex)
{
	if (_AcknexDisableGraphicFeatures)
	{
		return;
	}
	if (_AcknexUsePalettes) {
		float alpha = paletteIndex != 0;
		color = tex2D(_AcknexPalette, float2(paletteIndex, 0));
		color.w = alpha;
	}
	else if (!_AcknexOldVersion)
	{
		float3 a = tex2D(_OriginalAcknexPalette, float2(paletteIndex, 0));
		float3 b = tex2D(_AcknexPalette, float2(paletteIndex, 0));
		float3 delta = b - a;
		color.xyz += delta;
	}
}

void ClipPlanes(inout float3 c, float3 worldPos)
{
	if (_AcknexDisableGraphicFeatures)
	{
		return;
	}
	if (!_IF_DIVE && _PLAYER_Z <= _FLOOR_HGT + 0.5) {
		c *= smoothstep(_FLOOR_HGT, _FLOOR_HGT + 0.5, worldPos.y);
	}
	if (!_IF_ARISE && _PLAYER_Z >= _CEIL_HGT - 0.5) {
		c *= smoothstep(_CEIL_HGT, _CEIL_HGT - 0.5, worldPos.y);
	}
}

float4 AlphaBlend(float4 underlying, float4 overlying) {
	return overlying + (1.0 - overlying.a) * underlying;
}