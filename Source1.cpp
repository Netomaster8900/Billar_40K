//fecha de inicio:       29/3/2026
//fecha de finalizacion: 12/5/2026
#define _CRT_NON_CONFORMING_SWPRINTFS
#define _CRT_SECURE_NO_WARNINGS
#define proces
#define rnd1
//#define rnd2

#include"agw.h"
#include<math.h>
#include<wchar.h>
#include<emmintrin.h>


char* bola1 = nullptr;
char* bola2 = nullptr;
char* bola3 = nullptr;
char* bola4 = nullptr;
char* bola5 = nullptr;
char* bola6 = nullptr;
char* bola7 = nullptr;
char* bola8 = nullptr;
char* bola9 = nullptr;
char* bola10 = nullptr;
char* bola11 = nullptr;
char* bola12 = nullptr;
char* bola13 = nullptr;
char* bola14 = nullptr;
char* bola15 = nullptr;
char* bolaB = nullptr;

char cur[22][22]{
	{30, 30, 30, 30, 30, 30, 30, 30, 20, 30, 20, 20, 30, 20, 30, 30, 30, 30, 30, 30, 30, 30},
	{30, 30, 30, 30, 30, 30, 20, 30, 30, 30, 20, 20, 30, 30, 30, 20, 30, 30, 30, 30, 30, 30},
	{30, 30, 30, 30, 20, 30, 30, 30, 30, 30, 20, 20, 30, 30, 30, 30, 30, 20, 30, 30, 30, 30},
	{30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 20, 20, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30},
	{30, 30, 20, 30, 30, 30, 30, 20, 20, 20, 20, 20, 20, 20, 20, 30, 30, 30, 30, 20, 30, 30},
	{30, 30, 30, 30, 30, 30, 30, 30, 20, 20, 20, 20, 20, 20, 30, 30, 30, 30, 30, 30, 30, 30},
	{30, 20, 30, 30, 30, 30, 30, 30, 30, 20, 20, 20, 20, 30, 30, 30, 30, 30, 30, 30, 20, 30},
	{30, 30, 30, 30, 20, 30, 30, 30, 30, 30, 20, 20, 30, 30, 30, 30, 30, 20, 30, 30, 30, 30},
	{20, 30, 30, 30, 20, 20, 30, 30, 30, 30, 30, 20, 30, 30, 30, 30, 20, 20, 30, 30, 30, 20},
	{30, 30, 30, 30, 20, 20, 20, 30, 30, 30, 30, 30, 30, 30, 30, 20, 20, 20, 30, 30, 30, 30},
	{20, 20, 20, 20, 20, 20, 20, 20, 20, 30, 30, 30, 30, 30, 20, 20, 20, 20, 20, 20, 20, 20},
	{20, 20, 20, 20, 20, 20, 20, 20, 30, 30, 30, 30, 30, 20, 20, 20, 20, 20, 20, 20, 20, 20},
	{30, 30, 30, 30, 20, 20, 20, 30, 30, 30, 30, 30, 30, 30, 30, 20, 20, 20, 30, 30, 30, 30},
	{20, 30, 30, 30, 20, 20, 30, 30, 30, 30, 20, 30, 30, 30, 30, 30, 20, 20, 30, 30, 30, 20},
	{30, 30, 30, 30, 20, 30, 30, 30, 30, 30, 20, 20, 30, 30, 30, 30, 30, 20, 30, 30, 30, 31},
	{30, 20, 30, 30, 30, 30, 30, 30, 30, 20, 20, 20, 20, 30, 30, 30, 30, 30, 30, 30, 20, 31},
	{30, 30, 30, 30, 30, 30, 30, 30, 20, 20, 20, 20, 20, 20, 30, 30, 30, 30, 30, 30, 30, 31},
	{30, 30, 20, 30, 30, 30, 30, 20, 20, 20, 20, 20, 20, 20, 20, 30, 30, 30, 30, 20, 31, 30},
	{30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 20, 20, 30, 30, 30, 30, 30, 30, 30, 31, 30, 30},
	{30, 30, 30, 30, 20, 30, 30, 30, 30, 30, 20, 20, 30, 30, 30, 30, 30, 20, 31, 30, 30, 30},
	{30, 30, 30, 30, 30, 30, 20, 30, 30, 30, 20, 20, 30, 30, 30, 20, 31, 30, 30, 30, 30, 30},
	{30, 30, 30, 30, 30, 30, 30, 30, 20, 30, 20, 20, 30, 20, 31, 31, 30, 30, 30, 30, 30, 30}
};

char* b[16] = { nullptr };

float A = 0;
float c_r = 22;
float c_a = 0.02;
float v_c = 0;

int tiros = 0;
char* turno = nullptr;
char bola = 0;
char p1 = 0;
char p2 = 0;
int* bolas = nullptr;
int* b_bolas = nullptr;

float accelX[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
float accelY[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };//acceleracion de cada bola

float b_accelX[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
float b_accelY[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

float posx[16] = { 372, 50, 73, 96, 119, 142, 165, 188, 211, 234, 257, 280, 303, 326, 349, 415 };
float posy[16] = { 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200 };

float b_posx[16] = { 372, 50, 73, 96, 119, 142, 165, 188, 211, 234, 257, 280, 303, 326, 349, 415 };
float b_posy[16] = { 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200, 200 };

float coef_fric = 0.01;
//double friccion = 0.998;
int iter = 200;

int jug = 1;

float* p_cos = nullptr;

int list[6] = { 213 * 4, 107 * 4, 244 * 4, 122 * 4, 274 * 4, 137 * 4 };

int peso = 170;
int tam = (57 * 4) / 10;//tamaño de bola en pixeles
int t_mx = 0;
int t_my = 0;
int rpt = 700;//precision de los tiros por jugada para la maquina
unsigned long long miopia = 0;
int pos = 800;

int set = 1;
HFONT fuente;
vent* v_o = nullptr;

int color[256] = { 0 };

int gan = 0;

int ya(int turn, int jug) {
	int m = turn ? 15 : 7;
	int ya_ = 1;
	for (int i = turn ? 8 : 0; i < m; i++) {
		ya_ *= bolas[i] == jug ? 1 : 0;
	}
	return ya_;
}

float precom_cos(float ang) {
	while (ang < 0) {
		ang += 360.0;
	}
	while (ang >= 360) {
		ang -= 360.0;
	}
	return p_cos[(int)(ang * 277.7777777777777777777777777777777777777)];
}
float precom_sin(float ang) {
	ang += 90.0;
	while (ang < 0) {
		ang += 360.0;
	}
	while (ang >= 360) {
		ang -= 360.0;
	}
	return p_cos[(int)(ang * 277.7777777777777777777777777777777777777)];
}
char accel() {
	char buf = 0;
	for (int i = 0; i < 16; i++) {
		buf += accelX[i] != 0;
		buf += accelY[i] != 0;
	}
	return buf;
}

void rend(void* buffer, int* dest, int x = 0, int y = 0, int cx = 0, int cy = 0, int tipo = 0) {
	if (tipo) return;
	x -= 11;
	y -= 11;
	char* bufer = (char*)buffer;
	for (int x_ = 0; x_ < cx; x_++) {
		for (int y_ = 0; y_ < cy; y_++) {
			if (((x_ + x) < 0) || ((y_ + y) < 0) || ((x_ + x) > t_mx + 54) || ((y_ + y) > t_my + (60 + 54))) continue;
			int c = color[(int)bufer[y_ * cx + x_]];
			if (c == 0x00FF00FF) continue;
			dest[(y_ + y) * (t_mx + 54) + (x_ + x)] = c;
		}
	}
}

void rot(void* buffer, int* dest, int x, int y, int cx, int cy, float ang, int tipo) {
	float c_a = precom_cos(ang);
	float s_a = precom_sin(ang);
	char* bufer = (char*)buffer;
	for (int x_ = 0; x_ < cx; x_++) {
		for (int y_ = 0; y_ < cy; y_++) {
			int x__ = x_ - (cx * 0.5);
			int y__ = y_ - (cy * 0.5);//centrado de sprite

			int xn = x__ * c_a + y__ * -s_a;
			int yn = x__ * s_a + y__ * c_a;

			if (((xn + x) < 0) || ((yn + y) < 60) || ((xn + x) > t_mx + 54) || ((yn + y) > t_my + (60 + 26))) continue;

			int c = color[(int)bufer[y_ * cx + x_]];
			if (c == 0x00FF00FF) continue;
			dest[(yn + y) * (t_mx + 54) + (xn + x)] = c;
		}
	}
}

char logo[16] = {
	0b00001110,
	0b00000111,
	0b11110001,
	0b11111111,
	0b00100001,
	0b11001010,
	0b00010010,
	0b00000000,
	0b01100000,
	0b01001010,
	0b00011100,
	0b01111111,
	0b11000111,
	0b11110000,
	0b00111000,
	0b00000000
};

void lo(int* buffer, int op) {
	int dx = (t_mx + 54) / 2;
	int dy = (t_my + 54 + 60) / 2;
	for (int x = dx - 110; x < dx + 110; x++) {//±10px = 220px
		int x_ = (int)((x - dx + 110) / 20.0);
		for (int y = dy - 110; y < dy + 110; y++) {
			int y_ = (int)((y - dy + 110) / 20.0);
			int co = y_ * 11 + x_;
			int d = (co / 8);
			int n = 7 - (co % 8);
			unsigned char b = ((logo[d] >> n) & 0x01) * op;
			buffer[y * (dx * 2) + x] = b << 16 | b << 8 | b;
		}
	}
}

int intr = 1;
float luces[8] = { 126, 63, 352, 152, 617, 215, 858, 103 };

void fondo(int* buffer, float* pos, int col_il, float* inte, int col_fn, int x_i, int y_i, float brillo) {
	int w = (t_mx + 54);
	int c = col_il;
	float cr_ = (col_fn >> 16) & 0x000000FF;
	float cg_ = (col_fn >> 8) & 0x000000FF;
	float cb_ = col_fn & 0x000000FF;
	float lr = (col_il >> 16) & 0x000000FF;
	float lg = (col_il >> 8) & 0x000000FF;
	float lb = col_il & 0x000000FF;
	for (int x = x_i; x < w; x += 3) {
		for (int y = y_i; y < t_my + 60 + 54; y += 3) {
			float cr = 0;
			float cg = 0;
			float cb = 0;
			for (int i = 0; i < 8; i++) {
				float dist_x = x - pos[i * 2];
				float dist_y = y - pos[i * 2 + 1];
				float dist = min((10 / (sqrtf(dist_x * dist_x + dist_y * dist_y))), 1.0);


				cr += (lr * dist) * inte[i] * 0.06;
				cg += (lg * dist) * inte[i] * 0.06;
				cb += (lb * dist) * inte[i] * 0.06;
			}
			c = min((int)((cr_ * brillo) + (cr * 0.6)), 255) << 16;
			c |= min((int)((cg_ * brillo) + (cg * 0.6)), 255) << 8;
			c |= min((int)((cb_ * brillo) + (cb * 0.6)), 255);
			buffer[y * w + x] = c;
		}
	}
}

int r = 0;
int r_ = 0;
int x__ = 0;
int y__ = 0;
int sel = 0;
int modelo = 7;
LARGE_INTEGER clock;
LARGE_INTEGER tim;
LARGE_INTEGER tim1;

char mesa_abierta = 0;
char b_mesa_abierta = 0;
char grupo = 0;
int tiro_valido = 1;
int z_c[12] = { 0 };
float umbral = 0.03;
int color_t = 0x0014B153;
int col = 0;
float a_b_b = 0.03;
float a_b = 0.01;
int pot = 60;

void pos_b() {
	int falt[5] = { 7, 8, 6, 5, 14 };
	float p_x = 0;
	float p_y = 0;
	for (int i = 0; i < 5; i++) {
		if (i > 0) {
			p_x += 19.5;
			p_y += 11.7;
			posx[i + 8] = t_mx * 0.75 + 27 + p_x - 1;
			posy[i + 8] = t_my * 0.5 + 87 - p_y;
		}
		posx[i] = t_mx * 0.75 + 27 + p_x;
		posy[i] = t_my * 0.5 + 87 + (p_y - 1);
	}
	p_x = 40;
	p_y = 0;
	for (int i = 0; i < 3; i++) {
		if (i > 0) {
			p_x += 19.5;
			p_y += 11.7;
			posx[falt[i + 2]] = t_mx * 0.75 + 27 + p_x - 1;
			posy[falt[i + 2]] = t_my * 0.5 + 87 - p_y;
		}
		posx[falt[i]] = t_mx * 0.75 + 27 + p_x;
		posy[falt[i]] = t_my * 0.5 + 87 + (p_y - 1);
	}
	posx[15] = t_mx * 0.25 + 27;
	posy[15] = t_my * 0.5 + 87;
	posx[13] = t_mx * 0.75 + 107;
	posy[13] = t_my * 0.5 + 87;
}

int salir = 0;
int end = 0;

int back = 0;

int x_ = 0;
int y_ = 0;

float* p_x = nullptr;
float* p_y = nullptr;
float* p_t = nullptr;

void END(int* buffer, int x_, int y_) {
	int tm_x = t_mx + 54;
	int tm_y = t_my + 60 + 54;
	for (int x = x_; x < tm_x; x += 3) {
		for (int y = y_; y < tm_y; y += 3) {
			__m128i col = _mm_set1_epi32(0);
			__m128 colp = _mm_set_ps((color_t >> 16) & 0xFF, (color_t >> 8) & 0xFF, color_t & 0xFF, 0);
			for (int i = 0; i < 100; i += 4) {
				__m128 x_dist = _mm_andnot_ps(_mm_set1_ps(-0.0f), _mm_set_ps(x - p_x[i], x - p_x[i + 1], x - p_x[i + 2], x - p_x[i + 3]));
				__m128 y_dist = _mm_andnot_ps(_mm_set1_ps(-0.0f), _mm_set_ps(y - p_y[i], y - p_y[i + 1], y - p_y[i + 2], y - p_y[i + 3]));
				__m128 dist =_mm_mul_ps(_mm_rcp_ps(_mm_add_ps(x_dist, y_dist)), _mm_set_ps(p_t[i], p_t[i], p_t[i], p_t[i]));
				float m[4] = {0};
				_mm_storeu_ps(m, dist);
				__m128 mask = _mm_set_ps(m[1], m[1], m[1], m[1]);
				col = _mm_add_epi32(_mm_cvtps_epi32(_mm_mul_ps(mask, colp)), col);
				mask = _mm_set_ps(m[2], m[2], m[2], m[2]);
				col = _mm_add_epi32(_mm_cvtps_epi32(_mm_mul_ps(mask, colp)), col);
				mask = _mm_set_ps(m[3], m[3], m[3], m[3]);
				col = _mm_min_epi16(_mm_max_epi16(_mm_add_epi32(_mm_cvtps_epi32(_mm_mul_ps(mask, colp)), col), _mm_set1_epi32(0)), _mm_set1_epi32(255));
			}
			int co[4] = { 0 };
			_mm_storeu_si128((__m128i*)co, col);
			buffer[y * tm_x + x] = (co[1]) | (co[2] << 8) | (co[3] << 16);
		}
	}
}

int* sol = nullptr;
int* lum = nullptr;
int* ocl = nullptr;
int* pre = nullptr;
float s_x = 0;
float s_y = 120;

int u = 0;

void bresenham(int* x, int* y, char* z, int off, int cx, int cy, int bx, int by, int gr, int f) {//c = origen, b = destino

	int dx = abs(bx - cx);
	int dy = abs(by - cy);

	int sx = (cx < bx) ? 1 : -1;
	int sy = (cy < by) ? 1 : -1;

	int err = dx - dy;

	float m = 1.0/(max(abs(cx - bx), abs(cy - by)) - 1);
	int ui = 0;

	while (1) {
		float g = (ui) * m;
		int r = gr + (f - gr) * g;
		x[u] = cx;
		y[u] = cy;
		z[u] = r;
		if (cx == bx && cy == by) break;

		int e2 = 2 * err;
		if (e2 > -dy) {
			err -= dy;
			cx += sx;
		}
		if (e2 < dx) {
			err += dx;
			cy += sy;
		}
		u++;
		ui++;
	}
}

unsigned long long v = 0;

void BACK(int* buffer) {
	int tx = t_mx + 54;
	int ty = t_my + 114;
	int m_ty = ty * 0.5;
	int m_tx = tx * 0.5;

	memset(sol, 0, 28900 * 4);

	char z[4000] = { 1 };
	int x_[4000] = { 80 };
	int y_[4000] = { 120 };

	v++;
	s_x = tx * 0.44 - 85 + precom_cos(v) * 9.0;
	if (v > 359) {
		v -= 360;
	}
	for (int y = 0; y < ty; y++) {//mapa de oclusiones procedural
		for (int x = 0; x < tx; x++) {
			ocl[y * tx + x] = 0x0025DDEF;
		}
	}

	bresenham(x_, y_, z, 0, tx * 0.6, ty + 40, tx * 0.5, ty * 0.56, 18, 9);
	bresenham(x_, y_, z, 0, tx * 0.5, ty * 0.56, tx * 0.61, ty * 0.62, 9, 5);
	bresenham(x_, y_, z, 0, tx * 0.5, ty * 0.56, tx * 0.57, ty * 0.43, 9, 5);
	bresenham(x_, y_, z, 0, tx * 0.5, ty * 0.56, tx * 0.44, ty * 0.37, 9, 5);
	bresenham(x_, y_, z, 0, tx * 0.5, ty * 0.56, tx * 0.47, ty * 0.68, 9, 6);

	bresenham(x_, y_, z, 0, tx * 0.61f, ty * 0.62f, tx * 0.7f, ty * 0.7f, 5, 2);
	bresenham(x_, y_, z, 0, tx * 0.61f, ty * 0.62f, tx * 0.58f, ty * 0.74f, 5, 2);
	bresenham(x_, y_, z, 0, tx * 0.57f, ty * 0.43f, tx * 0.6f, ty * 0.56f, 5, 2);
	bresenham(x_, y_, z, 0, tx * 0.47f, ty * 0.68f, tx * 0.4f, ty * 0.56f, 3, 1);
	bresenham(x_, y_, z, 0, tx * 0.47f, ty * 0.68f, tx * 0.44f, ty * 0.81f, 4, 2);
	bresenham(x_, y_, z, 0, tx * 0.59f, ty * 0.69f, tx * 0.6f, ty * 0.74f, 2, 1);
	bresenham(x_, y_, z, 0, tx * 0.44f, ty * 0.37f, tx * 0.34f, ty * 0.478f, 4, 1);
	bresenham(x_, y_, z, 0, tx * 0.44f, ty * 0.37f, tx * 0.45f, ty * 0.24f, 4, 1);
	bresenham(x_, y_, z, 0, tx * 0.47f, ty * 0.478f, tx * 0.5f, ty * 0.388f, 4, 2);
	bresenham(x_, y_, z, 0, tx * 0.38, ty * 0.43, tx * 0.37, ty * 0.48, 2, 1);/*
	bresenham(x_, y_, z, 0, tx * 0.44, ty * 0.37, , , 5);
	bresenham(x_, y_, z, 0, tx * 0.47, ty * 0.68, , , 5);*/
	

	for (int i = 0; i < 4000; i += 1) {
		for (int n = -z[i]; n < z[i]; n++) {
			int y = (y_[i] + n);
			for (int g = -z[i]; g < z[i]; g++) {
				int x = x_[i] + g;
				if (y < 0) continue;
				if (y >= ty) continue;
				if (x < 0) continue;
				if (x >= tx) continue;
				ocl[y * tx + x] = 0xFF000000;
			}
		}
	}
	u = 0;

	for (float an = 0; an < 360; an += 0.7) {
		int mal = 0;
		for (int n = 0; n < 70; n++) {
			int dx = precom_cos(an) * n + 85;
			int dy = precom_sin(an) * n + 85;
			int color = 0xFFFFFFE8;
			if (mal) {
				sol[dy * 170 + dx] = color & ~0xFF000000;
				continue;
			}
			if (!(ocl[(int)((dy + s_y) * tx + (dx + s_x))] & 0xFF000000)) {
				sol[dy * 170 + dx] = color;//haz del sol
				if (n > 30) {
					sol[dy * 170 + dx] &= 0x00FFFFFF;
				}
			}
			else {
				sol[dy * 170 + dx] = color & ~0xFF000000;
				if (n > 10) {//tamaño real del sol
					mal = 1;
				}
				continue;
			}
		}
	}

	pre = new int[28900];
	for (int i = 0; i < 1; i++) {//mapa de preprocesado procedural
		memset(pre, 0, 28900 * 4);
		for (int x = 39; x < 131; x++) {
			for (int y = 39; y < 131; y++) {
				int r = 0;
				int g = 0;
				int b = 0;
				int a = 0;
				r = (sol[(y) * 170 + (x)] >> 16) & 0xFF;
				g = (sol[(y) * 170 + (x)] >> 8) & 0xFF;
				b = (sol[(y) * 170 + (x)]) & 0xFF;

				for (int x_ = -7; x_ < 9; x_++) {
					for (int y_ = -7; y_ < 9; y_++) {
						a += (sol[(y + y_) * 170 + (x + x_)] >> 24) & 0xFF;
					}
				}
				a = a >> 8;

				pre[y * 170 + x] = (a << 24) + (r << 16) + (g << 8) + b;
			}
		}
		memcpy(sol, pre, 28900 * 4);
	}
	delete[] pre;
	for (int y = 0; y < 170; y++) {
		for (int x = 0; x < 170; x++) {
		}
	}

	int tm_tx = s_x;
	int tm_ty = s_y;
	for (int y = 0; y < ty; y++) {//render final
		for (int x = 0; x < tx; x++) {
			if (y > tm_ty && y < (tm_ty + 170) && x > tm_tx && x < (tm_tx + 170)) {
				int co = sol[((y - tm_ty) * 170 + (x - tm_tx))];
				int co_ = ocl[y * tx + x];
				float a = (float)((co >> 24) & 0xFF) / 255.0f;
				int r_ = ((co >> 16) & 0xFF);
				int g_ = ((co >> 8) & 0xFF);
				int b_ = (co & 0xFF);
				int rf = ((co_ >> 16) & 0xFF);
				int gf = ((co_ >> 8) & 0xFF);
				int bf = (co_ & 0xFF);
				int r = min(max((float)(rf + (float)(r_ - rf) * a), 0), 255);
				int g = min(max((float)(gf + (float)(g_ - gf) * a), 0), 255);
				int b = min(max((float)(bf + (float)(b_ - bf) * a), 0), 255);
				buffer[y * tx + x] = (r << 16) + (g << 8) + b;
			}
			else {
				buffer[y * tx + x] = ocl[y * tx + x];
			}
		}
	}
}

void render1(void* buff) {
	int med_X = (t_mx + 54) / 2;
	int med_Y = (t_my + 54 + 60) / 2;
	if (buff != buffer_c) return;
	int* buffer = (int*)buff;
	if (back) {
		BACK(buffer);
		return;
	}
	if (set) {
		set = 0;
		SetBkMode(dc_buffer, TRANSPARENT);
		fuente = CreateFontW(-30, 0, 0, 0, 700, 0, 0, 0, ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, ANTIALIASED_QUALITY, DEFAULT_PITCH | FF_DONTCARE, L"Fixedsys");
		SelectObject(dc_buffer, fuente);
		SetTextColor(dc_buffer, 0x00FFFFFF);

	}
	if (intr < 256) {
		lo(buffer, intr);
		intr += 10 / intr + 2;
		return;
	}
	if (r == 0) {
		jug = 1;
	}
	if (jug) {
		r++;
		float l[16] = { precom_cos(r) * 100 + 200, precom_sin(r) * 100 + 200,
			precom_cos(r + 20) * 100 + 400, precom_sin(r + 18) * 100 + 200,
			precom_cos((r + 40) * 0.8) * 100 + 200, precom_sin(r + 36) * 100 + 400,
			precom_cos(r + 60) * 100 + 400, precom_sin((r + 36) * 1.6) * 100 + 400,
			precom_cos((r + 80) * 2) * 100 + 600, precom_sin(r + 18) * 100 + 100,
			precom_cos(r + 100) * 100 + 800, precom_sin(r + 36) * 100 + 200,
			precom_cos(r + 120) * 100 + 500, precom_sin(r + 36) * 100 + 400,
			precom_cos(r + 140) * 100 + 700, precom_sin(r + 54) * 100 + 100 };
		float inte[8] = { 8, 6, 10, 11, 20, 10, 20, 10 };
		fondo(buffer, l, 0x0044FFFF, inte, 0x00ACD6F7, x__, y__, 0.14);
		x__++;
		if (x__ > 2) {
			x__ = 0;
			y__++;
		}
		if (y__ > 2) {
			y__ = 0;
		}
		if (jug == 1) {
			for (int x = med_X - 75; x < med_X + 75; x++) {
				for (int y = med_Y - 20; y < med_Y + 20; y++) {
					char centrox = x < med_X + 70 && x > med_X - 70;
					char centroy = y < med_Y + 15 && y > med_Y - 15;
					if (!centroy && !centrox || ((sel != 0) && (centrox && centroy))) continue;
					buffer[y * (med_X * 2) + x] = centrox && centroy ? 0x00111111 : 0x00FFFFFF;
				}
			}
			RECT rc = { med_X - 75, med_Y - 15, med_X + 75, med_Y + 15 };
			DrawTextA(dc_buffer, "jugar", -1, &rc, DT_CENTER | DT_WORDBREAK);

			med_Y += 60;
			for (int x = med_X - 75; x < med_X + 75; x++) {
				for (int y = med_Y - 20; y < med_Y + 20; y++) {
					char centrox = x < med_X + 70 && x > med_X - 70;
					char centroy = y < med_Y + 15 && y > med_Y - 15;
					if (!centroy && !centrox || ((sel != 1) && (centrox && centroy))) continue;
					buffer[y * (med_X * 2) + x] = centrox && centroy ? 0x00111111 : 0x00FFFFFF;
				}
			}
			rc = { med_X - 75, med_Y - 15, med_X + 75, med_Y + 15 };
			DrawTextA(dc_buffer, "ajustes", -1, &rc, DT_CENTER | DT_WORDBREAK);
			QueryPerformanceCounter(&tim);
			char time = (((tim.QuadPart - tim1.QuadPart) / (float)clock.QuadPart) > 0.25);
			rc = { -10, 20, med_X * 2, med_Y * 2 };
			DeleteObject(fuente);
			fuente = CreateFontW(-15, 0, 0, 0, 700, 0, 0, 0, ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, ANTIALIASED_QUALITY, DEFAULT_PITCH | FF_DONTCARE, L"Fixedsys");
			SelectObject(dc_buffer, fuente);
			DrawTextW(dc_buffer, L"↲ para entrar a la opcion    ↑ para subir una opcion    ↓ para bajar una opcion", -1, &rc, DT_CENTER | DT_WORDBREAK);
			DeleteObject(fuente);
			fuente = CreateFontW(-30, 0, 0, 0, 700, 0, 0, 0, ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, ANTIALIASED_QUALITY, DEFAULT_PITCH | FF_DONTCARE, L"Fixedsys");
			SelectObject(dc_buffer, fuente);
			if (GetAsyncKeyState(VK_RETURN) & 0x8000) {
				QueryPerformanceCounter(&tim1);
				if (sel == 0) {
					pos_b();
					jug = 0;
				}
				else {
					jug = 2;
					sel = 0;
				}
			}
			else {
				if (GetAsyncKeyState(VK_DOWN) && time) {
					QueryPerformanceCounter(&tim1);
					sel++;
					if (sel == 2) {
						sel = 1;
					}
				}
				else {
					if (GetAsyncKeyState(VK_UP) && time) {
						QueryPerformanceCounter(&tim1);
						sel--;
						if (sel == -1) {
							sel = 0;
						}
					}
					else {
						if ((GetAsyncKeyState(VK_ESCAPE) & 0x8000) && time) {
							QueryPerformanceCounter(&tim1);
							func = 0;
						}
					}
				}
			}
		}
		else {
			if (jug == 2) {
				wchar_t buf[12] = { 0 };
				DeleteObject(fuente);
				fuente = CreateFontW(-20, 0, 0, 0, 700, 0, 0, 0, ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, ANTIALIASED_QUALITY, DEFAULT_PITCH | FF_DONTCARE, L"Fixedsys");
				SelectObject(dc_buffer, fuente);
				for (int x = 0; x < med_X * 2; x++) {
					for (int y = sel * 17; y < (sel + 1) * 17; y++) {
						buffer[y * med_X * 2 + x] = 0x00000000;
					}
				}

				RECT rc = { 0, 0, med_X * 2, 17 };
				DrawTextA(dc_buffer, "coeficiente de friccion:", -1, &rc, DT_LEFT);
				swprintf(buf, L"µ%.2f", coef_fric);
				DrawTextW(dc_buffer, buf, -1, &rc, DT_RIGHT);

				rc = { 0, 17, med_X * 2, 34 };
				DrawTextA(dc_buffer, "modelo de la mesa:", -1, &rc, DT_LEFT);
				swprintf(buf, L"%dpies", modelo);
				DrawTextW(dc_buffer, buf, -1, &rc, DT_RIGHT);

				rc = { 0, 34, med_X * 2, 51 };
				DrawTextA(dc_buffer, "color de la mesa:", -1, &rc, DT_LEFT);
				swprintf(buf, L"0x%X", color_t);
				DrawTextW(dc_buffer, buf, -1, &rc, DT_RIGHT);
				for (int x = med_X * 2 - 120; x < med_X * 2 - 80; x++) {
					for (int y = 35; y < 50; y++) {
						buffer[y * (med_X * 2) + x] = color_t;
					}
				}

				rc = { 0, 51, med_X * 2, 68 };
				DrawTextA(dc_buffer, "amortiguacion bola-bola:", -1, &rc, DT_LEFT);
				swprintf(buf, L"%.2f", a_b_b);
				DrawTextW(dc_buffer, buf, -1, &rc, DT_RIGHT);

				rc = { 0, 68, med_X * 2, 85 };
				DrawTextA(dc_buffer, "amortiguacion de las bandas:", -1, &rc, DT_LEFT);
				swprintf(buf, L"%.2f", a_b);
				DrawTextW(dc_buffer, buf, -1, &rc, DT_RIGHT);

				rc = { 0, 85, med_X * 2, 102 };
				DrawTextA(dc_buffer, "umbral de detencion:", -1, &rc, DT_LEFT);
				swprintf(buf, L"%.2f", umbral * 200.0 * 0.25 * 60);
				DrawTextW(dc_buffer, buf, -1, &rc, DT_RIGHT);

				rc = { 0, 102, med_X * 2, 119 };
				DrawTextA(dc_buffer, "jugador inicial:", -1, &rc, DT_LEFT);
				swprintf(buf, L"%d", (tiros & 1) + 1);
				DrawTextW(dc_buffer, buf, -1, &rc, DT_RIGHT);

				rc = { 0, 119, med_X * 2, 136 };
				DrawTextA(dc_buffer, "potencia maxima:", -1, &rc, DT_LEFT);
				swprintf(buf, L"%.1f", pot * 0.25 * 60);
				DrawTextW(dc_buffer, buf, -1, &rc, DT_RIGHT);

				rc = { 0, med_Y * 2 - 17, med_X * 2, med_Y * 2 };
				DrawTextW(dc_buffer, L"← para disminuir valor    → para aumentar un valor    ↓ para bajar    ↑ para subir    Esc para volver", -1, &rc, DT_CENTER);
				DeleteObject(fuente);
				fuente = CreateFontW(-30, 0, 0, 0, 700, 0, 0, 0, ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, ANTIALIASED_QUALITY, DEFAULT_PITCH | FF_DONTCARE, L"Fixedsys");
				SelectObject(dc_buffer, fuente);

				QueryPerformanceCounter(&tim);
				char time = (((tim.QuadPart - tim1.QuadPart) / (float)clock.QuadPart) > 0.25);
				if ((GetAsyncKeyState(VK_ESCAPE) & 0x8000) && time) {
					QueryPerformanceCounter(&tim1);
					sel = 0;
					jug = 1;
				}
				else {
					if ((GetAsyncKeyState(VK_UP) & 0x8000) && time) {
						QueryPerformanceCounter(&tim1);
						sel--;
						if (sel == -1) {
							sel = 0;
						}
					}
					else {
						if ((GetAsyncKeyState(VK_DOWN) & 0x8000) && time) {
							QueryPerformanceCounter(&tim1);
							sel++;
							if (sel == 8) {
								sel = 7;
							}
						}
						else {
							if ((GetAsyncKeyState(VK_LEFT) & 0x8000) && time) {
								QueryPerformanceCounter(&tim1);
								if (sel == 0) {
									coef_fric -= 0.01;
									if (coef_fric <= 0) {
										coef_fric = 0;
									}
								}
								else {
									if (sel == 1) {
										modelo--;
										if (modelo == 6) {
											modelo = 7;
										}
										t_mx = list[(modelo - 7) * 2];
										t_my = list[(modelo - 7) * 2 + 1];
										v_o->tamaño_x = list[(modelo - 7) * 2] + 54;
										v_o->tamaño_y = list[(modelo - 7) * 2 + 1] + 60 + 54;
										SetWindowPos(ventana_p, NULL, 0, 0, list[(modelo - 7) * 2] + 54, list[(modelo - 7) * 2 + 1] + 60 + 54, SWP_NOMOVE);
										SetWindowPos(ventana_s, NULL, 0, 0, list[(modelo - 7) * 2] + 54, list[(modelo - 7) * 2 + 1] + 60 + 54, SWP_NOMOVE);
									}
									else {
										if (sel == 3) {
											a_b_b -= 0.01;
											if (a_b_b < 0) {
												a_b_b = 0;
											}
										}
										else {
											if (sel == 4) {
												a_b -= 0.01;
												if (a_b < 0) {
													a_b = 0;
												}
											}
											else {
												if (sel == 5) {
													umbral -= 0.01;
													if (umbral < 0) {
														umbral = 0;
													}
												}
												else {
													if (sel == 6) {
														tiros++;
														if (umbral > 1) {
															umbral = 0;
														}
													}
												}
											}
										}
									}
								}
							}
							else {
								if ((GetAsyncKeyState(VK_RIGHT) & 0x8000) && time) {
									QueryPerformanceCounter(&tim1);
									if (sel == 0) {
										coef_fric += 0.01;
									}
									else {
										if (sel == 1) {
											modelo++;
											if (modelo == 10) {
												modelo = 9;
											}
											t_mx = list[(modelo - 7) * 2];
											t_my = list[(modelo - 7) * 2 + 1];
											v_o->tamaño_x = list[(modelo - 7) * 2] + 54;
											v_o->tamaño_y = list[(modelo - 7) * 2 + 1] + 60 + 54;
											SetWindowPos(ventana_p, NULL, 0, 0, list[(modelo - 7) * 2] + 54, list[(modelo - 7) * 2 + 1] + 60 + 54, SWP_NOMOVE);
											SetWindowPos(ventana_s, NULL, 0, 0, list[(modelo - 7) * 2] + 54, list[(modelo - 7) * 2 + 1] + 60 + 54, SWP_NOMOVE);
										}
										else {
											if (sel == 3) {
												a_b_b += 0.01;
												if (a_b_b > 1) {
													a_b_b = 1;
												}
											}
											else {
												if (sel == 4) {
													a_b += 0.01;
													if (a_b > 1) {
														a_b = 1;
													}
												}
												else {
													if (sel == 5) {
														umbral += 0.01;
														if (umbral > 1) {
															umbral = 1;
														}
													}
													else {
														if (sel == 6) {
															tiros++;
															if (umbral > 1) {
																umbral = 0;
															}
														}
													}
												}
											}
										}
									}
								}
								else {
									if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
										if (sel == 2) {
											col++;
											if (col > 765) {
												col = 0;
											}
											color_t = (col > 255) ? ((col > 510) ? ((col > 765) ? 0x00FF00FF : ((0 + (col - 510)) << 16) + (0) + (255 - (col - 510))) : (0) + ((255 - (col - 255)) << 8) + (0 + (col - 255))) : ((255 - col) << 16) + ((0 + col) << 8) + (0);
										}
										else {
											if (sel == 7) {
												pot++;
												if (pot > 2000) {
													pot = 0;
												}
											}
										}

									}
									else {
										if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
											if (sel == 2) {
												col--;
												if (col < 0) {
													col = 765;
												}
												color_t = (col > 255) ? ((col > 510) ? ((col > 765) ? 0x00FF00FF : ((0 + (col - 510)) << 16) + (0) + (255 - (col - 510))) : (0) + ((255 - (col - 255)) << 8) + (0 + (col - 255))) : ((255 - col) << 16) + ((0 + col) << 8) + (0);
											}
											else {
												if (sel == 7) {
													pot--;
													if (pot < 0) {
														pot = 2000;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		//jug = 0;
		return;
	}
	float norm_vel = (v_c / pot) * 36 - 18;
	RECT rc = { 0 };
	wchar_t buf[100] = { 0 };
	if (gan) {
		swprintf(buf, L"%d", gan);
		float l[16] = { precom_cos(r_) * 100 + 200, precom_sin(r_) * 100 + 200,
			precom_cos(r_ * 1.3) * 100 + 400, precom_sin(r_ + 18) * 100 + 200,
			precom_cos((r_ + 40) * 0.8) * 100 + 200, precom_sin(r_ + 36) * 100 + 400,
			precom_cos(r_ * 1.6) * 100 + 400, precom_sin((r_ + 36) * 1.6) * 100 + 400,
			precom_cos((r_ + 80) * 2) * 100 + 600, precom_sin(r_ + 18) * 100 + 100,
			precom_cos(r_ + 100) * 100 + 800, precom_sin(r_ + 36) * 100 + 200,
			precom_cos(r_ * 4) * 100 + 500, precom_sin(r_ + 36) * 100 + 400,
			precom_cos(r_ * 2.1) * 100 + 700, precom_sin(r_ + 54) * 100 + 100 };
		float inte[8] = { 16, 20, 17, 11, 12, 19, 25, 22 };
		fondo(buffer, l, 0x00FFFF44, inte, 0x00ACD6F7, x__, y__, 0.14);

		r_++;
		x__++;

		if (x__ > 2) {
			x__ = 0;
			y__++;
		}
		if (y__ > 2) {
			y__ = 0;
		}

		DeleteObject(fuente);
		rc = { 10, -40, med_X * 2, med_Y * 2 };
		fuente = CreateFontW(-500, 0, 0, 0, 700, 0, 0, 0, ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, NONANTIALIASED_QUALITY, DEFAULT_PITCH | FF_DONTCARE, L"Segoe MDL2 Assets");
		SetTextColor(dc_buffer, 0x00254747);
		SelectObject(dc_buffer, fuente);
		DrawTextW(dc_buffer, buf, -1, &rc, DT_CENTER);
		DeleteObject(fuente);
		rc = { 0, -50, med_X * 2, med_Y * 2 };
		fuente = CreateFontW(-500, 0, 0, 0, 700, 0, 0, 0, ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, NONANTIALIASED_QUALITY, DEFAULT_PITCH | FF_DONTCARE, L"Segoe MDL2 Assets");
		SetTextColor(dc_buffer, 0x00F2BC00);
		SelectObject(dc_buffer, fuente);
		DrawTextW(dc_buffer, buf, -1, &rc, DT_CENTER);
		return;
	}
	if (end) {
		END(buffer, x_, y_);
		x_++;
		if (x_ > 3) {
			x_ = 0;
			y_++;
		}
		if (y_ > 3) {
			y_ = 0;
		}
	}
	rc = { 0, 0, t_mx + 54, 60 };
	HBRUSH br = CreateSolidBrush(0x00000000);
	FillRect(dc_buffer, &rc, br);
	DeleteObject(br);
	for (int x = med_X - 20; x < med_X + 20; x++) {
		for (int y = 50; y < 60; y++) {
			char centrox = x < med_X + 18 && x > med_X - 18;
			char centroy = y < 58 && y > 52;
			if (!centroy && !centrox || (centrox && centroy)) {
				for (int i = med_X - 18; i < med_X + norm_vel; i++) {
					buffer[y * (med_X * 2) + i] = 0x00FF1600;
				}
				
				continue;
			}

			buffer[y * (med_X * 2) + x] = 0x00FFFFFF;
		}
	}
	if (tiros & 1) {
		for (int x = med_X * 2 - 300; x < med_X * 2; x++) {
			for (int y = 0; y < 34; y++) {
				char centrox = x < med_X * 2 - 5 && x > med_X * 2 - 295;
				char centroy = y < 29 && y > 5;
				if (!centroy && !centrox || (centrox && centroy)) {
					if (b_mesa_abierta == 2) buffer[y * (med_X * 2) + x] = 0x00666666;
					continue;
				}

				buffer[y * (med_X * 2) + x] = 0x00FFFFFF;
			}
		}
	}
	else {
		if ((tiros & 1) == 0) {
			for (int x = 0; x < 300; x++) {
				for (int y = 0; y < 34; y++) {
					char centrox = x < 295 && x > 5;
					char centroy = y < 29 && y > 5;
					if (!centroy && !centrox || (centrox && centroy)) {
						if (b_mesa_abierta == 1) buffer[y * (med_X * 2) + x] = 0x00666666;
						continue;
					}
					buffer[y * (med_X * 2) + x] = 0x00FFFFFF;
				}
			}
		}
	}
	int i = 0;
	for (int x = 0; x < t_mx + 54; x++) {
		for (int y = 60; y < t_my + 54 + 60; y++) {
			//if ((x > 0 && y > 0) || (x < (t_mx + 54) && y < 0) || (x > 0 && y > 0) || (x > 0 && y > 0)) continue;
			if (x < 1 || y < 61 || x > t_mx + 52 || y > t_my + 52 + 60) {
				buffer[y * (t_mx + 54) + x] = 0x00EEEEEE;
			}
			else {
				if (x < 11 || x > t_mx + 41 || y < 72 || y > t_my + 60 + 41) {
					buffer[y * (t_mx + 54) + x] = 0x00000410;
				}
				else {
					if (end) {
						continue;
					}
					unsigned char r = min(max((0xFF & (color_t >> 16)) + 6, 0), 255);
					unsigned char g = min(max((0xFF & (color_t >> 8)) + 6, 0), 255);
					unsigned char b = min(max((0xFF & (color_t)) + 6, 0), 255);
					if (x < 25 || x > t_mx + 27 || y < 86 || y > t_my + 60 + 27) {
						buffer[y * (t_mx + 54) + x] = (r << 16) | (g << 8) | b;
					}
					else {
						unsigned char r = max((0xFF & (color_t >> 16)) - 5, 0);
						unsigned char g = max((0xFF & (color_t >> 8)) - 3, 0);
						unsigned char b = max((0xFF & (color_t)) - 3, 0);
						if (x < 26 || x > t_mx + 26 || y < 87 || y > t_my + 60 + 26) {
							buffer[y * (t_mx + 54) + x] = (r << 16) | (g << 8) | b;
						}
						else {
							unsigned char r = max((0xFF & (color_t >> 16)) - 80, 0);
							unsigned char g = max((0xFF & (color_t >> 8)) - 80, 0);
							unsigned char b = max((0xFF & (color_t)) - 80, 0);
							if (x < 27 || x > t_mx + 25 || y < 88 || y > t_my + 60 + 25) {
								buffer[y * (t_mx + 54) + x] = (r << 16) | (g << 8) | b;
							}

						}
					}
				}
			}

		}
	}


	for (int x = 16; x < 45; x++) {
		for (int y = 76; y < 105; y++) {
			buffer[y * (t_mx + 54) + x] = 0x00000000;
		}
	}

	for (int x = (t_mx / 2 + 27) - 14; x < 15 + (t_mx / 2 + 27); x++) {
		for (int y = 76; y < 105; y++) {
			buffer[y * (t_mx + 54) + x] = 0x00000000;
		}
	}

	for (int x = 54 + t_mx - 45; x < 54 + t_mx - 16; x++) {
		for (int y = 76; y < 105; y++) {
			buffer[y * (t_mx + 54) + x] = 0x00000000;
		}
	}

	for (int x = 16; x < 45; x++) {
		for (int y = med_Y * 2 - 45; y < med_Y * 2 - 16; y++) {
			buffer[y * (t_mx + 54) + x] = 0x00000000;
		}
	}

	for (int x = (t_mx / 2 + 27) - 14; x < 15 + (t_mx / 2 + 27); x++) {
		for (int y = med_Y * 2 - 45; y < med_Y * 2 - 16; y++) {
			buffer[y * (t_mx + 54) + x] = 0x00000000;
		}
	}

	for (int x = 54 + t_mx - 45; x < 54 + t_mx - 16; x++) {
		for (int y = med_Y * 2 - 45; y < med_Y * 2 - 16; y++) {
			buffer[y * (t_mx + 54) + x] = 0x00000000;
		}
	}
	for (int x = 27; x < t_mx + 27 && !end; x++) {
		unsigned char r = max((0xFF & (color_t >> 16)) - 22, 0);
		unsigned char g = max((0xFF & (color_t >> 8)) - 16, 0);
		unsigned char b = max((0xFF & (color_t)) - 16, 0);
		for (int y = 88; y < t_my + 60 + 27; y++) {
			buffer[y * (t_mx + 54) + x] = (r << 16) | (g << 8) | b;
		}
	}
	rend(b[7], buffer, 29, 89, 22, 22, 0);
	rend(b[7], buffer, med_X, 89, 22, 22, 0);
	rend(b[7], buffer, med_X * 2 - 29, 89, 22, 22, 0);
	rend(b[7], buffer, 29, med_Y * 2 - 28, 22, 22, 0);
	rend(b[7], buffer, med_X, med_Y * 2 - 28, 22, 22, 0);
	rend(b[7], buffer, med_X * 2 - 29, med_Y * 2 - 28, 22, 22, 0);

	z_c[0] = 29;
	z_c[1] = 89;
	z_c[2] = med_X;
	z_c[3] = 89;
	z_c[4] = med_X * 2 - 29;
	z_c[5] = 89;
	z_c[6] = 29;
	z_c[7] = med_Y * 2 - 28;
	z_c[8] = med_X;
	z_c[9] = med_Y * 2 - 28;
	z_c[10] = med_X * 2 - 29;
	z_c[11] = med_Y * 2 - 28;
	int b0 = 16;
	int b1 = med_X * 2 - 16;
	for (int i = 0; i < 16; i++) {
		if (bolas[i] == 2) {
			rend(b[i], buffer, b0, 16, 22, 22, 0);
			b0 += 22;
		}
		if (bolas[i] == 1) {
			rend(b[i], buffer, b1, 16, 22, 22, 0);
			b1 -= 22;
		}
	}
	//buffer[ * (t_mx + 54) + 27]
	for (int x = 0; x < 16; x += 1) {
		rend(b[x], buffer, posx[x], posy[x], 22, 22, bolas[x]);//dibuja cada bola en donde deveria estar
	}

	A += 7;
	if (accel() == 0) {
		if (GetAsyncKeyState('S') & 0x8000) {
			c_r += 4;
			if (c_r > 600) c_r = 600;
		}
		if (GetAsyncKeyState('Z') & 0x8000) {
			c_r -= 4;
			if (c_r < 22) c_r = 22;
		}
		if (GetAsyncKeyState('A') & 0x8000) {
			c_a += 220 / c_r;
		}
		if (GetAsyncKeyState('X') & 0x8000) {
			c_a -= 220 / c_r;
		}
		if (GetAsyncKeyState('K') & 0x8000) {
			accelX[15] = v_c * precom_cos(c_a) / 200.0;
			accelY[15] = v_c * precom_sin(c_a) / 200.0;
			if (accelX[15] && accelY[15]) tiros++;
		}
		if (GetAsyncKeyState('J') & 0x8000) {
			v_c--;
			if (v_c < 0) v_c = 0;
		}
		if (GetAsyncKeyState('L') & 0x8000) {
			v_c++;
			if (v_c > pot) v_c = pot;
		}
		if (GetAsyncKeyState(VK_ESCAPE) & 0x8000) {
			salir = 1;
		}
		if ((GetAsyncKeyState('E') & 0x8000) && (GetAsyncKeyState('N') & 0x8000) && (GetAsyncKeyState('D') & 0x8000)) {
			end = 1;
		}
		if ((GetAsyncKeyState('T') & 0x8000) && (GetAsyncKeyState('E') & 0x8000)) {
			sol = new int[28900];
			memset(sol, 0, 28900 * 4);
			ocl = new int[(med_X * 2) * (med_Y * 2)];
			back = 1;
		}
		rot(cur, buffer, min(max((precom_cos(c_a) * c_r) + (posx[15]), 38), t_mx + 15), min(t_my + 75, max((precom_sin(c_a) * c_r) + (posy[15]), 99)), 22, 22, A, 0);
		if (salir) {
			DeleteObject(fuente);
			fuente = CreateFontW(-30, 0, 0, 0, 700, 0, 0, 0, ANSI_CHARSET, OUT_DEFAULT_PRECIS, CLIP_DEFAULT_PRECIS, NONANTIALIASED_QUALITY, DEFAULT_PITCH | FF_DONTCARE, L"Segoe MDL2 Assets");
			SelectObject(dc_buffer, fuente);
			SetTextColor(dc_buffer, 0x00161616);
			rc = { med_X - 96, med_Y - 31, med_X + 100, med_Y + 30 };
			DrawTextA(dc_buffer, "desea salir? (Y/N)", -1, &rc, DT_CENTER | DT_VCENTER);
			SetTextColor(dc_buffer, 0x00F2BC00);
			rc = { med_X - 100, med_Y - 35, med_X + 100, med_Y + 30 };
			DrawTextA(dc_buffer, "desea salir? (Y/N)", -1, &rc, DT_CENTER | DT_VCENTER);
			if (GetAsyncKeyState('Y') & 0x8000) {
				salir = 0;
				jug = 1;
				SetTextColor(dc_buffer, 0x00FFFFFF);
				for (int i = 0; i < 16; i++) {
					b_posx[i] = 0;
					b_posy[i] = 0;
					b_bolas[i] = 0;
					b_mesa_abierta = 0;
				}
			}
			if (GetAsyncKeyState('N') & 0x8000) {
				salir = 0;
			}
		}
	}
}

int xo(int* state) {
	int x = *state;
	x ^= x << 13;
	x ^= x >> 17;
	x ^= x << 5;
	return *state = x;
}

vent ventana;

vent* setup(vent* v) {
	v_o = v;
	QueryPerformanceFrequency(&clock);
	bola1 = new char[484];
	bola2 = new char[484];
	bola3 = new char[484];
	bola4 = new char[484];
	bola5 = new char[484];
	bola6 = new char[484];
	bola7 = new char[484];
	bola8 = new char[484];
	bola9 = new char[484];
	bola10 = new char[484];
	bola11 = new char[484];
	bola12 = new char[484];
	bola13 = new char[484];
	bola14 = new char[484];
	bola15 = new char[484];
	bolaB = new char[484];
	bolas = new int[16];
	b_bolas = new int[16];
	p_t = new float[100];
	p_x = new float[100];
	p_y = new float[100];



	for (int i = 0; i < 100; i++) {
		p_x[i] = (int)(500 * cos(i)) % 700;
		p_y[i] = (int)(550 * cos(i * 600)) % 700;
		p_x[i] = p_x[i] > -1 ? p_x[i] : p_x[i] + 600;
		p_y[i] = p_y[i] > -1 ? p_y[i] : p_y[i] + 600;
		if (i > 0) p_t[i] = p_t[i - 1] + 1;
		if (i == 0) p_t[i] = 2;
		if (p_t[i] > 6) p_t[i] = 0;
	}

	for (int i = 0; i < 16; i++) {
		bolas[i] = 0;
		b_bolas[i] = 0;
	}
	p_cos = new float[100000];
	for (int i = 0; i < 100000; i++) {
		p_cos[i] = cos(0.00006293185307179586476 * i);
	}
	b[0] = bola1;
	b[1] = bola2;
	b[2] = bola3;
	b[3] = bola4;
	b[4] = bola5;
	b[5] = bola6;
	b[6] = bola7;
	b[7] = bola8;
	b[8] = bola9;
	b[9] = bola10;
	b[10] = bola11;
	b[11] = bola12;
	b[12] = bola13;
	b[13] = bola14;
	b[14] = bola15;
	b[15] = bolaB;

	for (int x = 0; x < 22; x++) {
		for (int y = 0; y < 22; y++) {
			(b[15])[y * 22 + x] = 30;
		}
	}
	for (float z = 2.8; z < 10.3; z += 0.2) {
		for (int i = 0; i < 360; i++) {
			float c_a = precom_cos(i) * z + 11;
			float s_a = precom_sin(i) * z + 11;
			(b[15])[(int)(s_a) * 22 + (int)(c_a)] = 20;
		}
	}
	for (int i = 0; i < 15; i++) {
		memcpy(b[i], b[15], 484);
	}
	for (int i = 0; i < 8; i++) {
		for (int x = 0; x < 22; x++) {
			for (int y = 0; y < 22; y++) {
				(b[i])[y * 22 + x] = ((b[i])[y * 22 + x]) == 30 ? 30 : (i + 1);
				if (x > 8 && x < 13) {
					(b[i])[y * 22 + x] = ((b[i])[y * 22 + x]) == 30 ? 20 : (i + 1);
				}
			}
		}
	}
	for (int i = 8; i < 16; i++) {
		for (int x = 0; x < 22; x++) {
			for (int y = 0; y < 22; y++) {
				//(b[i])[y * 22 + x] = ((b[i])[y * 22 + x]) == 30 ? 30 : (i + 1);
				if (x > 7 && x < 14) {
					(b[i])[y * 22 + x] = ((b[i])[y * 22 + x]) == 30 ? 20 : (i + 1);
				}
				if (i == 15) {
					(b[i])[y * 22 + x] = ((b[i])[y * 22 + x]) == 30 ? 30 : 20;
				}
			}
		}
	}
	color[0] = 0x00000000;
	color[1] = 0x00F0EA00;
	color[2] = 0x00005FEC;
	color[3] = 0x00FF2D15;
	color[4] = 0x007813E8;
	color[5] = 0x00EE7D0D;
	color[6] = 0x0000E800;
	color[7] = 0x00B84834;
	color[9] = color[1];
	color[10] = color[2];
	color[11] = color[3];
	color[12] = color[4];
	color[13] = color[5];
	color[14] = color[6];
	color[15] = color[7];
	color[20] = 0x00FFFFFF;
	color[30] = 0x00FF00FF;
	color[31] = 0x00FF00FF;
	color[100] = 0x00976B4B;
	color[101] = 0x006B6B6B;
	color[102] = 0x000A6EFF;
	color[103] = 0x00FF4D0A;
	color[104] = 0x00875B3B;
	color[105] = 0x005B5B5B;
	color[106] = 0x0058361F;
	color[107] = 0x007D4F30;
	color[108] = 0x00905431;
	color[109] = 0x00694936;
	color[110] = 0x000E9700;
	t_mx = list[0];
	t_my = list[1];
	ventana.pos_x = 50;
	ventana.pos_y = 50;
	ventana.tamaño_x = t_mx + 54;//tamaño de la mesa mas los marcos laterales de la misma
	ventana.tamaño_y = t_my + 60 + 54;//tamaño inicial de la ventana y la mesa, mas el marco superior y los marcos laterales de la mesa
	ventana.titulo = L"billar 40K";
	v->color_borrado = ventana.color_borrado;
	v->fuente = ventana.fuente;
	v->pos_x = ventana.pos_x;
	v->pos_y = ventana.pos_y;
	v->tamaño_x = ventana.tamaño_x;
	v->tamaño_y = ventana.tamaño_y;
	v->titulo = ventana.titulo;
	return v;
}

void finalizar() {
	delete(p_cos);
	delete(bolaB);
	delete(bola1);
	delete(bola2);
	delete(bola3);
	delete(bola4);
	delete(bola5);
	delete(bola6);
	delete(bola7);
	delete(bola8);
	delete(bola9);
	delete(bola10);
	delete(bola11);
	delete(bola12);
	delete(bola13);
	delete(bola14);
	delete(bola15);
	delete(bolas);
	delete(b_bolas);
	delete(p_t);
	delete(p_x);
	delete(p_y);
	return;
}

int tir = 1;

void hilo1() {
	for (int i = 0; i < 100; i++) {
		p_x[i] += p_t[i];
		p_x[i] = fmod(p_x[i], t_mx + 54);
		if (p_t[i] < 2) p_y[i] += p_t[i];
		p_y[i] = fmod(p_y[i], t_mx + 54 + 60);
		if (p_y[i] < 60) p_y[i] += 800;
	}
	float des = (coef_fric) * 9.81 * 0.25;
	if (jug || back) return;
	int juga = !(tiros & 1) + 1;
	int g = mesa_abierta == 2 ? 2 : 1;
	if (accel() == 0) {
		if (tiro_valido && tir) {
			tiros--;
			tir = 0;
		}
		if (tiro_valido == 0) {
			for (int i = 0; i < 16; i++) {
				posx[i] = b_posx[i];
				posy[i] = b_posy[i];
				accelX[i] = b_accelX[i];
				accelY[i] = b_accelY[i];
				bolas[i] = b_bolas[i];
				mesa_abierta = b_mesa_abierta;
			}
		}
		tiro_valido = 1;
		for (int n = 0; n < 16; n++) {
			b_posx[n] = posx[n];
			b_posy[n] = posy[n];
			b_bolas[n] = bolas[n];
			b_accelX[n] = accelX[n];
			b_accelY[n] = accelY[n];
			b_mesa_abierta = mesa_abierta;
		}
	}
	for (int s = 0; s < iter; s++) {
		for (int n = 0; n < 16; n++) {
			for (int i = 0; i < 12; i += 2) {
				if (posx[n] < (z_c[i] - 20) || posx[n] > (z_c[i] + 20) || posy[n] < (z_c[i + 1] - 15) || posy[n] > (z_c[i + 1] + 15) || bolas[n]) continue;//reglas
				if (n == 15) {
					tiro_valido = 0;
					accelX[n] = 0;
					accelY[n] = 0;
					posy[n] = 0;
					bolas[n] = 3 - juga;
					tir = 0;
					continue;
				}
				if (n == 7) {
					if (ya(2 - g, 1) && juga) {
						tiro_valido = tiro_valido ? 1 : 0;//jugador 2
						accelX[n] = 0;
						accelY[n] = 0;
						posy[n] = 0;
						bolas[n] = 3 - juga;
						gan = 2;
						tir = 1;
						continue;
					}
					else if (ya((g - 1), 2) && 2 - juga) {
						tiro_valido = tiro_valido ? 1 : 0;//jugador 1
						accelX[n] = 0;
						accelY[n] = 0;
						posy[n] = 0;
						bolas[n] = 3 - juga;
						gan = 1;
						tir = 1;
						continue;
					}
					else {
						tiro_valido = 0;
						accelX[n] = 0;
						accelY[n] = 0;
						posy[n] = 0;
						bolas[n] = 3 - juga;
						tir = 0;
						continue;
					}
				}
				if (mesa_abierta == 0) {
					mesa_abierta = (juga - 1) ? 3 - ((n > 7) + 1) : (n > 7) + 1;
					tiro_valido = tiro_valido ? 1 : 0;
					accelX[n] = 0;
					accelY[n] = 0;
					posy[n] = 0;
					bolas[n] = juga;
					tir = 1;
				}
				if (mesa_abierta == 1) {
					if (juga == 2 && n > 7) {
						bolas[n] = 3 - (bolas[n] != 0 ? bolas[n] : juga);
						accelX[n] = 0;
						accelY[n] = 0;
						posy[n] = 0;
						tir = 1;
					}
					else {
						if (juga == 1 && n < 7) {
							bolas[n] = 3 - (bolas[n] != 0 ? bolas[n] : juga);
							accelX[n] = 0;
							accelY[n] = 0;
							posy[n] = 0;
							tir = 1;
						}
						else {
							tiro_valido = 0;
							accelX[n] = 0;
							accelY[n] = 0;
							posy[n] = 0;
							tir = 0;
						}
					}
				}
				else {
					if (mesa_abierta == 2) {
						if (juga == 1 && n > 7) {
							bolas[n] = 3 - (bolas[n] != 0 ? bolas[n] : juga);
							accelX[n] = 0;
							accelY[n] = 0;
							posy[n] = 0;
							tir = 1;
						}
						else {
							if (juga == 2 && n < 7) {
								bolas[n] = 3 - (bolas[n] != 0 ? bolas[n] : juga);
								accelX[n] = 0;
								accelY[n] = 0;
								posy[n] = 0;
								tir = 1;
							}
							else {
								tiro_valido = 0;
								accelX[n] = 0;
								accelY[n] = 0;
								posy[n] = 0;
								tir = 0;
							}
						}
					}
					else {
						tiro_valido = 0;
						accelX[n] = 0;
						accelY[n] = 0;
						posy[n] = 0;
						tir = 0;
					}
				}
			}
		}
		for (int i = 0; i < 16; i++) {
			posx[i] += accelX[i];
			posy[i] += accelY[i];
			
			

			if (posx[i] < 38) {
				accelX[i] = -accelX[i] * (1 - a_b);
				posx[i] = 38;
			}
			if (posx[i] > t_mx + 16) {
				accelX[i] = -accelX[i] * (1 - a_b);
				posx[i] = (t_mx + 16);
			}
			if (posy[i] < 98) {
				accelY[i] = -accelY[i] * (1 - a_b);
				posy[i] = 98;
			}
			if (posy[i] > t_my + 76) {
				accelY[i] = -accelY[i] * (1 - a_b);
				posy[i] = (t_my + 76);
			}

		}
		for (int n = 0; n < 16; n++) {//colision bola-bola
			if (bolas[n] != 0) continue;
			for (int i_ = n + 1; i_ < 16; i_++) {
				if (bolas[i_] != 0) continue;
				float dx = (posx[n] - posx[i_]);
				float dy = (posy[n] - posy[i_]);
				float dist = sqrtf(dx * dx + dy * dy);
				if (dist <= 22) {

					float n_x = dx / dist;
					float n_y = dy / dist;
					float t_x = -n_y;
					float t_y = n_x;

					float solapa = 22 - dist;

					float vbn = accelX[n] * n_x + accelY[n] * n_y;
					float vbt = accelX[n] * t_x + accelY[n] * t_y;
					float vgn = accelX[i_] * n_x + accelY[i_] * n_y;
					float vgt = accelX[i_] * t_x + accelY[i_] * t_y;

					accelX[n] = (vgn * n_x + vbt * t_x) * (1 - a_b_b);
					accelY[n] = (vgn * n_y + vbt * t_y) * (1 - a_b_b);
					accelX[i_] = (vbn * n_x + vgt * t_x) * (1 - a_b_b);
					accelY[i_] = (vbn * n_y + vgt * t_y) * (1 - a_b_b);

					posx[n] += n_x * (solapa * 0.5);
					posy[n] += n_y * (solapa * 0.5);
					posx[i_] -= n_x * (solapa * 0.5);
					posy[i_] -= n_y * (solapa * 0.5);

				}
			}
		}
	}
	for (int n = 0; n < 16; n++) {//deseleracion
		float vel = sqrtf(accelX[n] * accelX[n] + accelY[n] * accelY[n]);
		if (vel > 0) {
			float velx = accelX[n] / vel;
			float vely = accelY[n] / vel;

			vel = vel - des / iter;
			if (vel < umbral * 0.25) vel = 0;
			accelX[n] = velx * vel;
			accelY[n] = vely * vel;
		}
	}
}