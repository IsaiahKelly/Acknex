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

float _PLAYER_Z;
float _FLOOR_HGT;
float _CEIL_HGT;

int _DIAPHANOUS;

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

float4 AlphaBlend(float4 underlying, float4 overlying) {
	return overlying + (1.0 - overlying.a) * underlying;
}
