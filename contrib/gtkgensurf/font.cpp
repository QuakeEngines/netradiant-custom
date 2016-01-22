/*
   GenSurf plugin for GtkRadiant
   Copyright (C) 2001 David Hyde, Loki software and qeradiant.com

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this library; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

//
// Texture Font
//
// Taken from LeoCAD (www.leocad.org) and used in GtkGenSurf
// with permission from the author.
//
// Leonardo Zide (leo@lokigames.com)
//

#include <cstdlib>
#include "gensurf.h"

static const unsigned char data[2048] = {
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 207, 255, 255, 159, 255,  31, 255, 231, 159, 153,  63, 255, 255, 255, 255,
	255, 207, 255, 255, 159, 255, 207, 255, 231, 159, 153,  63, 255, 255, 255, 255,
	255, 207, 255, 255, 159, 255, 207, 255, 231, 255, 159,  63, 255, 255, 255, 255,
	7,  78, 252, 240, 145, 135,   3,  71,  38, 158, 153,  51,  19, 227, 196, 255,
	243, 140, 121, 230, 140,  51, 207,  51, 198, 156, 153,  57,  99, 204, 152, 255,
	255, 204,  51, 111, 158, 121, 206, 121, 230, 153, 153,  60, 115, 206,  60, 255,
	31, 204,  51, 127, 158, 121, 206, 121, 230, 153,  25,  62, 115, 206,  60, 255,
	199, 204,  51, 127, 158,   1, 206, 121, 230, 153,  25,  62, 115, 206,  60, 255,
	243, 204,  51, 127, 158, 249, 207, 121, 230, 153, 153,  60, 115, 206,  60, 255,
	243, 204,  51, 111, 158, 249, 207, 121, 230, 153, 153,  57, 115, 206,  60, 255,
	243, 140, 121, 230, 140, 115, 206,  51, 230, 153, 153,  51, 115, 206,  60, 255,
	7,  73, 252, 240, 145,   7, 207,  71, 230, 153, 153,  39, 115, 206,  60, 255,
	255, 255, 255, 255, 255, 255, 255, 127, 254, 255, 249, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 127, 254, 255, 249, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255,  57, 255, 255, 249, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 131, 255, 255, 252, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 249, 255, 255, 255, 255, 255, 255, 255, 227, 255,
	255, 255, 255, 255, 255, 255, 249, 255, 255, 255, 255, 255, 255, 255, 201, 255,
	255, 255, 255, 255, 255, 255, 249, 255, 255, 255, 255, 255, 255, 255, 156, 255,
	15,  79, 252, 200, 196,  96,  32,  79,  62, 252,  15,  15, 159, 192, 156, 255,
	103, 142, 121, 198, 112, 206,  57,  79,  62,  60,  15,  15, 159, 207, 156, 255,
	243, 204,  51, 207, 120, 254,  57, 207, 156,  57, 103, 102, 206, 231, 156, 255,
	243, 204,  51, 207, 124, 252,  57, 207, 156,  25, 230, 112, 206, 231, 156, 255,
	243, 204,  51, 207, 252, 224,  57, 207, 156,  25, 230, 121, 206, 243, 156, 255,
	243, 204,  51, 207, 252, 199,  57, 207, 201, 211, 242, 240, 228, 249, 156, 255,
	243, 204,  51, 207, 252, 207,  57, 207, 201, 195, 112, 230, 228, 249, 156, 255,
	103, 142, 121, 198, 124, 206, 121, 198, 227, 231,  57, 207, 241, 252, 201, 255,
	15,  79, 252, 200, 252, 224, 227, 200, 227, 231,  57, 207, 241, 192, 227, 255,
	255, 207, 255, 207, 255, 255, 255, 255, 255, 255, 255, 255, 249, 255, 255, 255,
	255, 207, 255, 207, 255, 255, 255, 255, 255, 255, 255, 255, 249, 255, 255, 255,
	255, 207, 255, 207, 255, 255, 255, 255, 255, 255, 255, 255, 252, 255, 255, 255,
	255, 207, 255, 207, 255, 255, 255, 255, 255, 255, 255, 127, 254, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	159,  15,  30, 252,  57, 224, 225, 128, 131,   7, 255, 254, 128, 127, 240, 255,
	135, 231, 204, 249,  57, 255, 252, 159,  57, 115, 126, 252,  60,  63, 231, 255,
	159, 247, 236, 249,  56, 127, 254, 159,  57, 115, 126, 252, 124, 158, 207, 255,
	159, 255, 252, 249,  56, 127, 254, 207,  57, 115,  62, 249, 124, 158, 207, 255,
	159, 255, 252, 121,  56, 112, 254, 207,  57, 115,  62, 249,  60, 207, 255, 255,
	159, 127,  62,  60,  57, 103, 224, 231, 131, 115, 158, 243, 128, 207, 255, 255,
	159,  63, 255,  57, 249, 103, 206, 231,  57,   7, 158, 243,  60, 207, 255, 255,
	159, 159, 255, 153, 249, 103, 206, 231,  57, 127, 206, 231, 124, 206, 255, 255,
	159, 207, 255,  25, 240, 103, 206, 243,  57, 127,  14, 224, 124, 158, 207, 255,
	159, 231, 239, 249, 185, 103, 206, 243,  57, 127, 230, 207, 124, 158, 207, 255,
	159, 231, 207, 249,  57, 103, 206, 243,  57,  63, 231, 207,  60,  63, 231, 255,
	159,   7,  28, 252, 121, 240, 224, 243, 131, 135, 231, 207, 128, 127, 240, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	7, 126, 128,   3, 124, 240, 249, 156,  63, 231,  57, 255, 252,  57, 159, 255,
	231, 124, 254, 243,  63, 231, 249, 156,  63, 231,  60, 255, 252,  57, 159, 255,
	231, 121, 254, 243, 159, 207, 249, 156,  63, 103,  62, 255, 248,  56, 158, 255,
	231, 121, 254, 243, 159, 207, 249, 156,  63,  39,  63, 255, 248,  56, 156, 255,
	231, 115, 254, 243, 207, 255, 249, 156,  63, 135,  63, 255, 112,  56, 152, 255,
	231, 115, 192,   3, 206, 255,   1, 156,  63, 199,  63, 255, 112,  56, 153, 255,
	231, 115, 254, 243, 207, 193, 249, 156,  63, 135,  63, 255,  36,  57, 147, 255,
	231, 115, 254, 243, 207, 207, 249, 156,  63,  39,  63, 255,  36,  57, 131, 255,
	231, 121, 254, 243, 159, 207, 249, 156,  57, 103,  62, 255, 140,  57, 135, 255,
	231, 121, 254, 243, 159, 199, 249, 156,  57, 231,  60, 255, 140,  57, 143, 255,
	231, 124, 254, 243,  63, 199, 249, 156, 147, 231,  57, 255, 220,  57, 159, 255,
	7, 126, 128, 243, 127, 208, 249, 156, 199, 231,  51, 192, 220,  57, 159, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	63, 252, 128,  63, 252, 128,  63,  28, 128, 249, 204,  79, 254,  39,  63, 255,
	159, 249,  60, 159, 249,  60, 159, 249, 249, 249, 204,  79, 158,  39,  63, 255,
	207, 243, 124, 206, 243, 124, 206, 243, 249, 249, 156, 103, 158, 103, 158, 255,
	207, 243, 124, 206, 243, 124, 206, 255, 249, 249, 156, 231, 156, 243, 204, 255,
	231, 231, 124, 230, 231, 124, 158, 255, 249, 249, 156, 231,  12, 243, 225, 255,
	231, 231,  60, 231, 231,  60,  63, 252, 249, 249,  60, 243,  12, 243, 243, 255,
	231, 231, 128, 231, 231, 128, 255, 249, 249, 249,  60, 243, 105, 249, 243, 255,
	231, 231, 252, 103, 230,  60, 255, 243, 249, 249, 124, 251,  97, 248, 225, 255,
	207, 243, 252, 207, 240, 124, 254, 243, 249, 249, 124, 248,  97, 248, 204, 255,
	207, 243, 252, 207, 241, 124, 206, 243, 249, 249, 124, 248, 243, 124, 158, 255,
	159, 249, 252, 159, 241, 124, 158, 249, 249, 115, 254, 252, 243,  60,  63, 255,
	63, 252, 252,  63, 228, 252,  60, 252, 249,   7, 255, 252, 243,  60,  63, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	243,  19, 192, 255, 252, 255, 255, 127,  14, 127, 248,  15, 252, 247, 227, 231,
	243, 243, 207, 255, 252, 255, 153, 127, 102,  62, 243, 227, 241, 193, 201, 243,
	231, 249, 231, 255, 252, 255,  60, 127, 242, 156, 231, 249, 231, 148, 201, 249,
	207, 252, 243, 255, 204, 124, 126, 126, 254, 156, 231,  57, 230, 148, 201, 252,
	207, 252, 243, 255, 204,  60, 255,  60, 255, 156, 231, 156, 204, 244,  99, 254,
	31, 254, 249, 255, 252, 159, 255,  57, 127, 158, 231, 204, 204, 244,  63, 255,
	31, 254, 252, 255, 252, 207, 255,  51,  63, 159, 231, 204, 204, 193, 159, 255,
	63, 127, 254, 255, 252, 159, 255,  57, 159, 207, 207, 204, 204, 151, 207, 248,
	63, 127, 254, 255, 252,  63, 255, 156, 159, 159, 231, 204, 228, 151, 103, 242,
	63,  63, 255, 255, 255, 127, 126, 158, 255, 159, 231,  25, 241, 148, 115, 242,
	63, 159, 127, 230, 204, 252,  60, 159, 159, 159, 231, 249, 255, 148, 121, 242,
	63,  31,  64, 230, 204, 252, 153, 159, 159, 159, 231, 227, 255, 193, 252, 248,
	255, 255,  63, 255, 231, 255, 255, 255, 255, 159, 231,  15, 252, 247, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255,  63, 243, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 127, 248, 255, 255, 255, 255, 255,
	255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
	63, 254, 255, 195, 255, 255, 255, 255,   3, 252, 147, 255, 255, 255, 255, 255,
	159, 252, 255, 153, 255, 255, 255, 255, 243, 252, 147, 255, 255, 255, 255, 255,
	159, 252, 255, 153, 255, 243, 255, 255, 243, 252, 147, 255, 255, 255, 255, 255,
	159, 252, 204,  60, 255, 243, 255, 255, 243, 252,   0, 255, 255, 255, 255, 255,
	63, 254, 204,  60, 255, 243, 128, 255, 243, 252, 201, 255, 255, 255, 255, 255,
	63, 254, 225,  60, 255, 243, 255, 255, 243, 252, 201, 255, 255, 255, 255, 255,
	31, 126, 128,  60, 127, 128, 255, 255, 243, 252, 201, 255, 255, 255, 255, 255,
	159, 228, 225,  60, 193, 243, 128, 255, 243, 252, 201, 255, 255, 255, 255, 255,
	207, 240, 204,  60, 255, 243, 255, 255, 243, 124, 128, 255, 255, 255, 255, 255,
	207, 249, 204,  60, 255, 243, 255, 255, 243, 252, 228, 255, 255, 255, 255, 255,
	207, 240, 255,  60, 255, 243, 255, 255, 243, 252, 228, 255, 255, 255, 255, 255,
	31, 242, 255,  60, 255, 255, 255, 255, 243, 252, 228, 255, 255, 255, 255, 255,
	255, 255, 255,  60, 255, 255, 255, 255, 243, 252, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 153, 255, 255, 255,   0, 242, 252, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 153, 255, 255, 255, 255, 243, 252, 255, 255, 255, 255, 255, 255,
	255, 255, 255, 195, 255, 255, 255, 255,   3, 252, 255, 255, 255, 255, 255, 255
};

typedef struct
{
	unsigned char width;
	float left, right, top, bottom;
} LC_TXFVERT;

static LC_TXFVERT glyphs[93];
static GLuint texture;

void texfont_init(){
	if ( texture != 0 ) {
		return;
	}

	int i, j, x, y;
	float inv = 1.0f / 128;
	const char *charlines[16] = {
		"abcdefghijklmn", "opqrstuvwxyz0", "123456789ABC", "DEFGHIJKLMN",
		"OPQRSTUVWX", "YZ,.!;:<>/?{}@$%", "&*()-+=_[] #"
	};
	unsigned char lefts[7][17] = {
		{ 1, 11, 21, 30, 40, 50, 56, 66, 76, 80, 84, 93, 97, 111, 121 },
		{ 1, 11, 21, 31, 38, 47, 53, 63, 72, 86, 94, 103, 111, 120 },
		{ 1, 10, 19, 28, 37, 46, 55, 64, 73, 82, 94, 106, 118, },
		{ 1, 13, 24, 34, 47, 59, 64, 73, 84, 94, 108, 120 },
		{ 1, 14, 25, 38, 50, 61, 71, 83, 94, 109, 120 },
		{ 1, 12, 22, 26, 30, 35, 39, 43, 52, 61, 65, 75, 81, 87, 103, 112, 125 },
		{ 3, 14, 23, 28, 33, 38, 47, 56, 65, 70, 75, 79, 88 }
	};
	// tops = 1 20 39 58 77 96 112 (+16)
	memset( glyphs, 0, sizeof( glyphs ) );

	// ASCII 32-125
	for ( i = 32; i < 126; i++ )
		for ( x = 0; x < 7; x++ )
			for ( y = 0; charlines[x][y]; y++ )
				if ( charlines[x][y] == i ) {
					glyphs[i - 32].width = lefts[x][y + 1] - lefts[x][y];
					glyphs[i - 32].left = (float)lefts[x][y] * inv;
					glyphs[i - 32].right = (float)( lefts[x][y + 1] ) * inv;

					if ( x != 6 ) {
						glyphs[i - 32].top = (float)( 1 + 19 * x );
					}
					else{
						glyphs[i - 32].top = 112;
					}
					glyphs[i - 32].bottom = glyphs[i - 32].top + 16;
					glyphs[i - 32].top *= inv;
					glyphs[i - 32].bottom *= inv;
				}

	g_GLTable.m_pfn_qglGenTextures( 1, &texture );
	g_GLTable.m_pfn_qglBindTexture( GL_TEXTURE_2D, texture );
	g_GLTable.m_pfn_qglDisable( GL_TEXTURE_GEN_S );
	g_GLTable.m_pfn_qglDisable( GL_TEXTURE_GEN_T );
	g_GLTable.m_pfn_qglTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT );
	g_GLTable.m_pfn_qglTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT );
	g_GLTable.m_pfn_qglTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST );
	g_GLTable.m_pfn_qglTexParameteri( GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST );
	//  g_GLTable.m_pfn_qglPixelStorei (GL_UNPACK_ALIGNMENT, 1);

	unsigned char *buf = (unsigned char*)malloc( 128 * 128 );
	memset( buf, 255, 128 * 128 );

	for ( i = 0; i < 2048; i++ )
		for ( j = 0; j < 8; j++ )
			if ( ( data[i] & ( 1 << j ) ) != 0 ) {
				buf[i * 8 + j] = 0;
			}

	g_GLTable.m_pfn_qglTexImage2D( GL_TEXTURE_2D, 0, GL_INTENSITY4, 128, 128, 0,
								   GL_LUMINANCE, GL_UNSIGNED_BYTE, buf );
	free( buf );
}

void texfont_write( const char *text, int l, int t ){
	if ( texture == 0 ) {
		return;
	}

	g_GLTable.m_pfn_qglColor3f( 0, 1, 0 );
	g_GLTable.m_pfn_qglBindTexture( GL_TEXTURE_2D, texture );
	g_GLTable.m_pfn_qglEnable( GL_TEXTURE_2D );
	//  g_GLTable.m_pfn_qglTexEnvi (GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE);
	g_GLTable.m_pfn_qglAlphaFunc( GL_GREATER, 0.0625 );
	g_GLTable.m_pfn_qglEnable( GL_ALPHA_TEST );

	g_GLTable.m_pfn_qglBegin( GL_QUADS );
	for ( const char* p = text; *p; p++ )
	{
		if ( *p < 32 || *p > 125 ) {
			continue;
		}
		if ( glyphs[*p - 32].width == 0 ) {
			continue;
		}

		g_GLTable.m_pfn_qglTexCoord2f( glyphs[*p - 32].left, glyphs[*p - 32].top );
		g_GLTable.m_pfn_qglVertex2i( l, t );
		g_GLTable.m_pfn_qglTexCoord2f( glyphs[*p - 32].left, glyphs[*p - 32].bottom );
		g_GLTable.m_pfn_qglVertex2i( l, t - 16 );
		g_GLTable.m_pfn_qglTexCoord2f( glyphs[*p - 32].right, glyphs[*p - 32].bottom );
		g_GLTable.m_pfn_qglVertex2i( l + glyphs[*p - 32].width, t - 16 );
		g_GLTable.m_pfn_qglTexCoord2f( glyphs[*p - 32].right, glyphs[*p - 32].top );
		g_GLTable.m_pfn_qglVertex2i( l + glyphs[*p - 32].width, t );
		l += glyphs[*p - 32].width;
	}
	g_GLTable.m_pfn_qglEnd();

	g_GLTable.m_pfn_qglDisable( GL_ALPHA_TEST );
	g_GLTable.m_pfn_qglDisable( GL_TEXTURE_2D );
	g_GLTable.m_pfn_qglBindTexture( GL_TEXTURE_2D, 0 );
}
