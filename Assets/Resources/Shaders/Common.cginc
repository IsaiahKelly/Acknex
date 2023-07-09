int _AcknexUsePalettes;
sampler2D _AcknexPalette;
float4 _AcknexPalette_TexelSize;

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

void ApplyPalette(inout float4 color)
{
	if (_AcknexUsePalettes) {
		float alpha = color.x != 0;
		color = tex2D(_AcknexPalette, float2(color.x, 0));
		color.w = alpha;
	}
}

void EmulatePalette(inout float4 color) {
	float4 matchColor = color;
	float matchDist = 1.0 / 0.0;
	if (_AcknexUsePalettes) {
		for (float u = 0.0; u < 1.0; u += _AcknexPalette_TexelSize.x) {
			float4 palette = tex2D(_AcknexPalette, float2(u, 0));
			float dist = distance(palette.xyz, color.xyz);
			if (dist < matchDist) {
				matchDist = dist;
				matchColor = palette;
			}
		}
	}
	color = matchColor;
}

void clipPlanes(inout float3 c, float3 worldPos)
{
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
