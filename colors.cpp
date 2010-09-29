#include "colors.h"
#include <cstring>

#define SETCOLOR(col,r,g,b,a) do { \
	colors[col][0] = b; \
	colors[col][1] = g; \
	colors[col][2] = r; \
	colors[col][3] = a; \
	colors[col][4] = (uint8_t)sqrt( \
			double(r * r) * .236 + \
			double(g * g) * .601 + \
			double(b * b) * .163); \
} while (false)

#define SETCOLORNOISE(col,r,g,b,a,n) do { \
	colors[col][0] = b; \
	colors[col][1] = g; \
	colors[col][2] = r; \
	colors[col][3] = a; \
	colors[col][4] = (uint8_t)sqrt( \
			double(r * r) * .236 + \
			double(g * g) * .661 + \
			double(b * b) * .103); \
	colors[col][5] = n; \
} while (false)

// Byte order is: blue green red alpha brightness noise
// Brightness is used to speed up calculations later
uint8_t colors[256][6];


void loadColors()
{	// Colors are mostly the same as in Cartograph
	memset(colors, 0, sizeof colors);
	SETCOLOR(AIR, 255,255,255,0);
	SETCOLORNOISE(STONE, 128,128,128,255, 16);
	SETCOLORNOISE(GRASS, 117,176,73,255, 14);
	SETCOLORNOISE(DIRT, 134,96,67,255, 22);
	SETCOLORNOISE(COBBLESTONE, 115,115,115,255, 26);
	SETCOLORNOISE(WOOD, 157,128,79,255, 11);
	SETCOLOR(6, 120,120,120,0);
	SETCOLOR(7, 84,84,84,255);
	SETCOLOR(8, 38,92,225,41);
	SETCOLOR(9, 38,92,225,41);
	SETCOLOR(10, 255,90,0,255);
	SETCOLOR(11, 255,90,0,255);
	SETCOLORNOISE(SAND, 220,212,160,255, 14);
	SETCOLORNOISE(GRAVEL, 136,126,126,255, 24);
	SETCOLOR(14, 143,140,125,255);
	SETCOLOR(15, 136,130,127,255);
	SETCOLOR(16, 115,115,115,255);
	SETCOLOR(LOG, 102,81,51,255);
	SETCOLORNOISE(LEAVES, 64,168,40,180, 12);
	SETCOLOR(20, 255,255,255,64); //glass
	//SETCOLOR(21, 222,50,50,255);
	//SETCOLOR(22, 222,136,50,255);
	//SETCOLOR(23, 222,222,50,255);
	//SETCOLOR(24, 136,222,50,255);
	//SETCOLOR(25, 50,222,50,255);
	//SETCOLOR(26, 50,222,136,255);
	//SETCOLOR(27, 50,222,222,255);
	//SETCOLOR(28, 104,163,222,255);
	//SETCOLOR(29, 120,120,222,255);
	//SETCOLOR(30, 136,50,222,255);
	//SETCOLOR(31, 174,74,222,255);
	//SETCOLOR(32, 222,50,222,255);
	//SETCOLOR(33, 222,50,136,255);
	//SETCOLOR(34, 77,77,77,255);
	SETCOLOR(35, 222,222,222,255); //Color(143,143,143,255);
	//SETCOLOR(36, 222,222,222,255);
	SETCOLOR(FLOWERR, 255,0,0,254); // Not fully opaque to prevent culling on this one
	SETCOLOR(FLOWERY, 255,255,0,254); // Not fully opaque to prevent culling on this one
	SETCOLOR(MUSHROOMB, 128,100,0,254); // Not fully opaque to prevent culling on this one
	SETCOLOR(MUSHROOMR, 140,12,12,254); // Not fully opaque to prevent culling on this one
	SETCOLOR(41, 231,165,45,255);
	SETCOLOR(42, 191,191,191,255);
	SETCOLOR(DOUBLESTEP, 200,200,200,255);
	SETCOLOR(STEP, 200,200,200,254); // Not fully opaque to prevent culling on this one
	SETCOLOR(45, 170,86,62,255);
	SETCOLOR(46, 160,83,65,255);
	SETCOLOR(48, 115,115,115,255);
	SETCOLOR(49, 26,11,43,255);
	SETCOLOR(TORCH, 245,220,50,200);
	SETCOLOR(FIRE, 255,170,30,200);
	SETCOLOR(52, 245,220,50,255); // unnecessary afaik
	SETCOLOR(53, 157,128,79,255);
	SETCOLOR(54, 125,91,38,255);
	SETCOLOR(55, 245,220,50,255); // unnecessary afaik
	SETCOLOR(56, 129,140,143,255);
	SETCOLOR(57, 45,166,152,255);
	SETCOLOR(58, 114,88,56,255);
	SETCOLOR(59, 146,192,0,255);
	SETCOLOR(60, 95,58,30,255);
	SETCOLOR(61, 96,96,96,255);
	SETCOLOR(62, 96,96,96,255);
	SETCOLOR(63, 111,91,54,255);
	SETCOLOR(64, 136,109,67,255);
	SETCOLOR(65, 181,140,64,32);
	SETCOLOR(66, 150,134,102,180);
	SETCOLOR(67, 115,115,115,255);
	SETCOLOR(71, 191,191,191,255);
	SETCOLOR(73, 131,107,107,255);
	SETCOLOR(74, 131,107,107,255);
	SETCOLOR(REDTORCH_OFF, 181,100,44,254);
	SETCOLOR(REDTORCH_ON, 255,0,0,254);
	SETCOLOR(SNOW, 245,246,245,254); // Not fully opaque to prevent culling on this one
	SETCOLOR(79, 83,113,163,55);
	SETCOLOR(80, 250,250,250,255);
	SETCOLOR(81, 25,120,25,255);
	SETCOLOR(82, 151,157,169,255);
	SETCOLOR(83, 183,234,150,255);
	SETCOLOR(84, 100,67,50,255);
	SETCOLOR(FENCE, 137,112,65,225); // Not fully opaque to prevent culling on this one
}
