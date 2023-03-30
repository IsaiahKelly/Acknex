int _AcknexUsePalettes;
sampler2D _AcknexPalette;
float4 _AcknexPalette_TexelSize;

sampler2D _MainTex;
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
float _V0H;
float _V1H;

int _CLAMPX;
int _CLAMPY;

int _FENCE;
int _PORTCULLIS;

void ApplyPalette(inout float4 c)
{
	if (_AcknexUsePalettes) {
		float alpha = c.x != 0.0;
		c = tex2D(_AcknexPalette, float2(c.x, 0));
		c.w = alpha;
	}
	else 
	{
		c *= _Color;
	}
}