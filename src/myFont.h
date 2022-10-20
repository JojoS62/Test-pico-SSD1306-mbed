#pragma once

// Created by http://oleddisplay.squix.ch/ Consider a donation
// In case of problems make sure that you are using the font file with the correct version!
const uint8_t Dialog_plain_16Bitmaps[] PROGMEM = {

	// Bitmap Data:
	0x00, // ' '
	0xAA,0xAA,0x0A, // '!'
	0x94,0xA5,0x20, // '"'
	0x0C,0x80,0x88,0x09,0x87,0xFE,0x19,0x01,0x10,0x13,0x0F,0xFC,0x32,0x02,0x20,0x26,0x00, // '#'
	0x10,0x10,0x7C,0xD2,0x90,0x90,0x70,0x1C,0x12,0x12,0x96,0x7C,0x10,0x10, // '$'
	0x70,0x42,0x21,0x08,0x88,0x22,0x60,0x89,0x01,0xC8,0x00,0x27,0x01,0x22,0x0C,0x88,0x22,0x21,0x08,0x84,0x1C, // '%'
	0x3C,0x06,0x20,0x40,0x04,0x00,0x20,0x05,0x00,0x88,0x48,0x44,0x82,0x48,0x18,0x41,0x83,0xE4, // '&'
	0xAA, // '''
	0x33,0x10,0x88,0x42,0x10,0x84,0x10,0x86,0x18, // '('
	0xC3,0x08,0x41,0x08,0x42,0x10,0x88,0x46,0x60, // ')'
	0x10,0x10,0x92,0x7C,0x38,0xD6,0x10,0x10, // '*'
	0x08,0x02,0x00,0x80,0x20,0xFF,0x82,0x00,0x80,0x20,0x08,0x00, // '+'
	0x49,0x40, // ','
	0xF0, // '-'
	0xA0, // '.'
	0x08,0x21,0x04,0x10,0x82,0x08,0x41,0x04,0x30,0x80, // '/'
	0x3C,0x21,0x10,0x90,0x28,0x14,0x0A,0x05,0x02,0x81,0x21,0x10,0x87,0x80, // '0'
	0x70,0xD0,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0xFE, // '1'
	0x78,0xC4,0x82,0x02,0x02,0x04,0x08,0x10,0x20,0x40,0x80,0xFE, // '2'
	0x7C,0x41,0x80,0x40,0x20,0x31,0xE0,0x0C,0x02,0x01,0x00,0xA0,0x8F,0x80, // '3'
	0x06,0x02,0x80,0xA0,0x48,0x22,0x10,0x84,0x22,0x08,0xFF,0x80,0x80,0x20,0x08, // '4'
	0x7E,0x20,0x10,0x08,0x07,0xC2,0x10,0x04,0x02,0x01,0x00,0xA0,0x8F,0x80, // '5'
	0x1C,0x31,0x10,0x10,0x0B,0xC6,0x12,0x05,0x02,0x81,0x40,0x90,0x87,0x80, // '6'
	0xFF,0x00,0x80,0x80,0x40,0x40,0x20,0x20,0x10,0x08,0x08,0x04,0x04,0x00, // '7'
	0x3C,0x61,0xA0,0x50,0x2C,0x31,0xE3,0x0D,0x02,0x81,0x40,0x90,0x87,0x80, // '8'
	0x3C,0x21,0x20,0x90,0x28,0x14,0x09,0x0C,0x7A,0x01,0x01,0x11,0x87,0x00, // '9'
	0xA0,0x0A, // ':'
	0x48,0x00,0x12,0x50, // ';'
	0x00,0x40,0x70,0x70,0x38,0x08,0x00,0xE0,0x07,0x00,0x1C,0x00,0x40, // '<'
	0xFF,0xC0,0x00,0x00,0x7F,0xE0, // '='
	0x80,0x0E,0x00,0x38,0x01,0xC0,0x04,0x07,0x03,0x83,0x80,0x80,0x00, // '>'
	0x79,0x08,0x10,0x20,0xC3,0x0C,0x10,0x20,0x00,0x81,0x00, // '?'
	0x0F,0xC0,0x30,0x60,0x80,0x62,0x3D,0x4C,0x86,0x52,0x04,0xA4,0x09,0x48,0x12,0x90,0x25,0x90,0xD1,0x1E,0xC1,0x00,0x01,0x83,0x00,0xFC,0x00, // '@'
	0x04,0x00,0x40,0x0A,0x00,0xA0,0x11,0x01,0x10,0x20,0x82,0x08,0x3F,0x84,0x04,0x40,0x48,0x02, // 'A'
	0xFE,0x20,0x68,0x0A,0x02,0x81,0xBF,0xC8,0x1A,0x02,0x80,0xA0,0x28,0x13,0xF8, // 'B'
	0x1F,0x08,0x64,0x02,0x00,0x80,0x20,0x08,0x02,0x00,0x80,0x10,0x02,0x18,0x7C, // 'C'
	0xFE,0x10,0x62,0x02,0x40,0x28,0x05,0x00,0xA0,0x14,0x02,0x80,0x50,0x12,0x0C,0x7F,0x00, // 'D'
	0xFF,0x40,0x20,0x10,0x08,0x07,0xFA,0x01,0x00,0x80,0x40,0x20,0x1F,0xE0, // 'E'
	0xFE,0x80,0x80,0x80,0x80,0xFC,0x80,0x80,0x80,0x80,0x80,0x80, // 'F'
	0x1F,0x84,0x19,0x01,0x40,0x08,0x01,0x00,0x20,0xF4,0x02,0x80,0x48,0x08,0x81,0x0F,0xC0, // 'G'
	0x80,0x50,0x0A,0x01,0x40,0x28,0x05,0xFF,0xA0,0x14,0x02,0x80,0x50,0x0A,0x01,0x40,0x20, // 'H'
	0xAA,0xAA,0xAA, // 'I'
	0x22,0x22,0x22,0x22,0x22,0x22,0x22,0xC0, // 'J'
	0x81,0x20,0x88,0x42,0x20,0x90,0x38,0x0A,0x02,0x40,0x88,0x21,0x08,0x22,0x04, // 'K'
	0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0xFE, // 'L'
	0xC0,0x6C,0x06,0xA0,0xAA,0x0A,0xA0,0xA9,0x12,0x91,0x28,0xA2,0x8A,0x28,0x42,0x80,0x28,0x02, // 'M'
	0xC0,0x54,0x0A,0x81,0x48,0x28,0x85,0x10,0xA1,0x14,0x12,0x82,0x50,0x2A,0x05,0x40,0x60, // 'N'
	0x1F,0x02,0x08,0x40,0x48,0x02,0x80,0x28,0x02,0x80,0x28,0x02,0x80,0x24,0x04,0x20,0x81,0xF0, // 'O'
	0xFC,0x41,0x20,0x50,0x28,0x14,0x13,0xF1,0x00,0x80,0x40,0x20,0x10,0x00, // 'P'
	0x1F,0x02,0x08,0x40,0x48,0x02,0x80,0x28,0x02,0x80,0x28,0x02,0x80,0x24,0x04,0x20,0xC1,0xF0,0x00,0x80,0x04, // 'Q'
	0xFC,0x10,0x42,0x04,0x40,0x88,0x11,0x04,0x3F,0x84,0x10,0x81,0x10,0x22,0x02,0x40,0x40, // 'R'
	0x3C,0x63,0x20,0x10,0x08,0x03,0x80,0x78,0x06,0x01,0x40,0xB0,0xCF,0x80, // 'S'
	0xFF,0x82,0x00,0x80,0x20,0x08,0x02,0x00,0x80,0x20,0x08,0x02,0x00,0x80,0x20, // 'T'
	0x80,0x50,0x0A,0x01,0x40,0x28,0x05,0x00,0xA0,0x14,0x02,0x80,0x50,0x09,0x02,0x1F,0x80, // 'U'
	0x80,0x28,0x02,0x40,0x44,0x04,0x20,0x82,0x08,0x11,0x01,0x10,0x11,0x00,0xA0,0x0A,0x00,0x40, // 'V'
	0x81,0x02,0x81,0x02,0x42,0x84,0x42,0x84,0x42,0x84,0x22,0x88,0x24,0x48,0x24,0x48,0x14,0x50,0x14,0x50,0x08,0x20,0x08,0x20, // 'W'
	0xC1,0x90,0x42,0x20,0x88,0x14,0x02,0x00,0x80,0x50,0x22,0x08,0x84,0x12,0x02, // 'X'
	0x80,0x90,0x42,0x20,0x88,0x14,0x02,0x00,0x80,0x20,0x08,0x02,0x00,0x80,0x20, // 'Y'
	0xFF,0xC0,0x08,0x02,0x00,0x80,0x20,0x08,0x02,0x00,0x80,0x20,0x08,0x02,0x00,0x7F,0xE0, // 'Z'
	0xE8,0x88,0x88,0x88,0x88,0x88,0x8E, // '['
	0x83,0x04,0x10,0x40,0x82,0x08,0x10,0x41,0x02,0x08, // '\'
	0xE2,0x22,0x22,0x22,0x22,0x22,0x2E, // ']'
	0x0C,0x03,0xC0,0x84,0x20,0x40, // '^'
	0xFF,0x00, // '_'
	0xC3,0x0C, // '`'
	0x3C,0x46,0x02,0x7E,0xC2,0x82,0x82,0xC6,0x7A, // 'a'
	0x80,0x40,0x20,0x17,0x8C,0x24,0x0A,0x05,0x02,0x81,0x40,0xB0,0x97,0x80, // 'b'
	0x3C,0x42,0x80,0x80,0x80,0x80,0x80,0x42,0x3C, // 'c'
	0x01,0x00,0x80,0x47,0xA4,0x34,0x0A,0x05,0x02,0x81,0x40,0x90,0xC7,0xA0, // 'd'
	0x38,0x44,0x82,0x82,0xFE,0x80,0x80,0x42,0x3C, // 'e'
	0x39,0x04,0x3C,0x41,0x04,0x10,0x41,0x04,0x10, // 'f'
	0x3D,0x21,0xA0,0x50,0x28,0x14,0x0A,0x04,0x86,0x3D,0x00,0x90,0x87,0x80, // 'g'
	0x80,0x40,0x20,0x17,0x8C,0x24,0x0A,0x05,0x02,0x81,0x40,0xA0,0x50,0x20, // 'h'
	0xA2,0xAA,0xAA, // 'i'
	0x22,0x02,0x22,0x22,0x22,0x22,0x22,0xC0, // 'j'
	0x80,0x40,0x20,0x10,0x48,0x44,0x42,0x41,0xC0,0x90,0x44,0x21,0x10,0x40, // 'k'
	0xAA,0xAA,0xAA, // 'l'
	0xBC,0xF3,0x1C,0x68,0x20,0xA0,0x82,0x82,0x0A,0x08,0x28,0x20,0xA0,0x82,0x82,0x08, // 'm'
	0xBC,0x61,0x20,0x50,0x28,0x14,0x0A,0x05,0x02,0x81,0x00, // 'n'
	0x3C,0x21,0x20,0x50,0x28,0x14,0x0A,0x04,0x84,0x3C,0x00, // 'o'
	0xBC,0x61,0x20,0x50,0x28,0x14,0x0A,0x05,0x84,0xBC,0x40,0x20,0x10,0x00, // 'p'
	0x3D,0x21,0xA0,0x50,0x28,0x14,0x0A,0x04,0x86,0x3D,0x00,0x80,0x40,0x20, // 'q'
	0xBB,0x08,0x20,0x82,0x08,0x20,0x80, // 'r'
	0x7C,0x82,0x80,0xC0,0x78,0x06,0x02,0x82,0x7C, // 's'
	0x41,0x0F,0x90,0x41,0x04,0x10,0x41,0x03,0x80, // 't'
	0x81,0x40,0xA0,0x50,0x28,0x14,0x0A,0x04,0x86,0x3D,0x00, // 'u'
	0x80,0x90,0x11,0x04,0x20,0x82,0x20,0x44,0x05,0x00,0xE0,0x08,0x00, // 'v'
	0x82,0x0A,0x08,0x24,0x51,0x11,0x44,0x48,0x90,0xA2,0x82,0x8A,0x04,0x10,0x10,0x40, // 'w'
	0xC3,0x21,0x09,0x04,0x81,0x81,0x20,0x90,0x84,0xC3,0x00, // 'x'
	0x80,0x90,0x44,0x10,0x84,0x22,0x08,0x81,0x40,0x50,0x0C,0x02,0x00,0x81,0xC0, // 'y'
	0xFE,0x02,0x04,0x08,0x10,0x20,0x40,0x80,0xFE, // 'z'
	0x18,0x82,0x08,0x20,0x82,0x30,0x20,0x82,0x08,0x20,0x81,0x80, // '{'
	0xAA,0xAA,0xAA,0xAA, // '|'
	0xC0,0x82,0x08,0x20,0x82,0x06,0x20,0x82,0x08,0x20,0x8C,0x00 // '}'
};
const GFXglyph Dialog_plain_16Glyphs[] PROGMEM = {
// bitmapOffset, width, height, xAdvance, xOffset, yOffset
	  {     0,   1,   1,   6,    0,    0 }, // ' '
	  {     1,   2,  12,   7,    2,  -12 }, // '!'
	  {     4,   5,   4,   7,    1,  -12 }, // '"'
	  {     7,  12,  11,  14,    1,  -11 }, // '#'
	  {    24,   8,  14,  11,    2,  -12 }, // '$'
	  {    38,  14,  12,  16,    1,  -12 }, // '%'
	  {    59,  12,  12,  13,    1,  -12 }, // '&'
	  {    77,   2,   4,   4,    1,  -12 }, // '''
	  {    78,   5,  14,   7,    1,  -12 }, // '('
	  {    87,   5,  14,   7,    1,  -12 }, // ')'
	  {    96,   8,   8,   9,    1,  -12 }, // '*'
	  {   104,  10,   9,  14,    2,   -9 }, // '+'
	  {   116,   3,   4,   6,    1,   -2 }, // ','
	  {   118,   5,   1,   7,    1,   -5 }, // '-'
	  {   119,   2,   2,   6,    2,   -2 }, // '.'
	  {   120,   6,  13,   6,    0,  -12 }, // '/'
	  {   130,   9,  12,  11,    1,  -12 }, // '0'
	  {   144,   8,  12,  11,    2,  -12 }, // '1'
	  {   156,   8,  12,  11,    1,  -12 }, // '2'
	  {   168,   9,  12,  11,    1,  -12 }, // '3'
	  {   182,  10,  12,  11,    1,  -12 }, // '4'
	  {   197,   9,  12,  11,    1,  -12 }, // '5'
	  {   211,   9,  12,  11,    1,  -12 }, // '6'
	  {   225,   9,  12,  11,    1,  -12 }, // '7'
	  {   239,   9,  12,  11,    1,  -12 }, // '8'
	  {   253,   9,  12,  11,    1,  -12 }, // '9'
	  {   267,   2,   8,   6,    2,   -8 }, // ':'
	  {   269,   3,  10,   6,    1,   -8 }, // ';'
	  {   273,  11,   9,  14,    2,   -9 }, // '<'
	  {   286,  11,   4,  14,    2,   -7 }, // '='
	  {   292,  11,   9,  14,    2,   -9 }, // '>'
	  {   305,   7,  12,  10,    1,  -12 }, // '?'
	  {   316,  15,  14,  17,    1,  -12 }, // '@'
	  {   343,  12,  12,  12,    0,  -12 }, // 'A'
	  {   361,  10,  12,  12,    1,  -12 }, // 'B'
	  {   376,  10,  12,  12,    1,  -12 }, // 'C'
	  {   391,  11,  12,  13,    1,  -12 }, // 'D'
	  {   408,   9,  12,  11,    1,  -12 }, // 'E'
	  {   422,   8,  12,  10,    1,  -12 }, // 'F'
	  {   434,  11,  12,  13,    1,  -12 }, // 'G'
	  {   451,  11,  12,  13,    1,  -12 }, // 'H'
	  {   468,   2,  12,   6,    2,  -12 }, // 'I'
	  {   471,   4,  15,   6,    0,  -12 }, // 'J'
	  {   479,  10,  12,  11,    1,  -12 }, // 'K'
	  {   494,   8,  12,  10,    1,  -12 }, // 'L'
	  {   506,  12,  12,  14,    1,  -12 }, // 'M'
	  {   524,  11,  12,  13,    1,  -12 }, // 'N'
	  {   541,  12,  12,  14,    1,  -12 }, // 'O'
	  {   559,   9,  12,  11,    1,  -12 }, // 'P'
	  {   573,  12,  14,  14,    1,  -12 }, // 'Q'
	  {   594,  11,  12,  12,    1,  -12 }, // 'R'
	  {   611,   9,  12,  11,    1,  -12 }, // 'S'
	  {   625,  10,  12,  10,    0,  -12 }, // 'T'
	  {   640,  11,  12,  13,    1,  -12 }, // 'U'
	  {   657,  12,  12,  12,    0,  -12 }, // 'V'
	  {   675,  16,  12,  18,    1,  -12 }, // 'W'
	  {   699,  10,  12,  12,    1,  -12 }, // 'X'
	  {   714,  10,  12,  10,    0,  -12 }, // 'Y'
	  {   729,  11,  12,  13,    1,  -12 }, // 'Z'
	  {   746,   4,  14,   7,    1,  -12 }, // '['
	  {   753,   6,  13,   6,    0,  -12 }, // '\'
	  {   763,   4,  14,   7,    2,  -12 }, // ']'
	  {   770,  11,   4,  14,    2,  -12 }, // '^'
	  {   776,   9,   1,   9,    0,    3 }, // '_'
	  {   778,   5,   3,   9,    1,  -13 }, // '`'
	  {   780,   8,   9,  10,    1,   -9 }, // 'a'
	  {   789,   9,  12,  11,    1,  -12 }, // 'b'
	  {   803,   8,   9,  10,    1,   -9 }, // 'c'
	  {   812,   9,  12,  11,    1,  -12 }, // 'd'
	  {   826,   8,   9,  10,    1,   -9 }, // 'e'
	  {   835,   6,  12,   7,    1,  -12 }, // 'f'
	  {   844,   9,  12,  11,    1,   -9 }, // 'g'
	  {   858,   9,  12,  11,    1,  -12 }, // 'h'
	  {   872,   2,  12,   4,    1,  -12 }, // 'i'
	  {   875,   4,  15,   4,   -1,  -12 }, // 'j'
	  {   883,   9,  12,  10,    1,  -12 }, // 'k'
	  {   897,   2,  12,   4,    1,  -12 }, // 'l'
	  {   900,  14,   9,  16,    1,   -9 }, // 'm'
	  {   916,   9,   9,  11,    1,   -9 }, // 'n'
	  {   927,   9,   9,  11,    1,   -9 }, // 'o'
	  {   938,   9,  12,  11,    1,   -9 }, // 'p'
	  {   952,   9,  12,  11,    1,   -9 }, // 'q'
	  {   966,   6,   9,   8,    1,   -9 }, // 'r'
	  {   973,   8,   9,  10,    1,   -9 }, // 's'
	  {   982,   6,  11,   7,    0,  -11 }, // 't'
	  {   991,   9,   9,  11,    1,   -9 }, // 'u'
	  {  1002,  11,   9,  10,    0,   -9 }, // 'v'
	  {  1015,  14,   9,  14,    0,   -9 }, // 'w'
	  {  1031,   9,   9,  11,    1,   -9 }, // 'x'
	  {  1042,  10,  12,  10,    0,   -9 }, // 'y'
	  {  1057,   8,   9,  10,    1,   -9 }, // 'z'
	  {  1066,   6,  15,  11,    2,  -12 }, // '{'
	  {  1078,   2,  16,   6,    2,  -12 }, // '|'
	  {  1082,   6,  15,  11,    2,  -12 } // '}'
};
const GFXfont Dialog_plain_16 PROGMEM = {
(uint8_t  *)Dialog_plain_16Bitmaps,(GFXglyph *)Dialog_plain_16Glyphs,0x20, 0x7E, 19};