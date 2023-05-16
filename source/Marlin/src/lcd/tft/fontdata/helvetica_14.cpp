/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

/*
  Fontname: Helvetica
  Copyright: Copyright (c) 1984, 1987 Adobe Systems Incorporated. All Rights Reserved. Copyright (c) 1988, 1991 Digital Equipment Corporation. All Rights Reserved.
  Capital A Height: 14, '1' Height: 13
  Calculated Max Values w=16 h=18 x= 2 y=12 dx=18 dy= 0 ascent=16 len=36
  Font Bounding box     w=18 h=19 x= 0 y=-4
  Calculated Min Values           x= 0 y=-4 dx= 0 dy= 0
  Pure Font   ascent =14 descent=-4
  X Font      ascent =14 descent=-4
  Max Font    ascent =16 descent=-4
*/

#include "../../../inc/MarlinConfigPre.h"

#if HAS_GRAPHICAL_TFT

#include <stdint.h>
#pragma pack(4)
///*
//typedef struct __attribute__((__packed__)) {
//  uint8_t BBXWidth;
//  uint8_t BBXHeight;
//  uint8_t DataSize;
//   int8_t DWidth;
//   int8_t BBXOffsetX;
//   int8_t BBXOffsetY;
//} tGlyph;
//*/

//extern const uint8_t Helvetica14_symbols[63] = {
//  0,18,19,0,252,14,0,0,0,0,1,9,252,16,252,14,252, // tFont
//  0,0,0,0,0,0,  // 0x01 - LCD_STR_REFRESH
//  0,0,0,0,0,0,  // 0x02 - LCD_STR_FOLDER
//  255,  // 0x03 - LCD_STR_ARROW_RIGHT
//  255,  // 0x04 - LCD_STR_UPLEVEL
//  255,  // 0x05 - LCD_STR_CLOCK
//  255,  // 0x06 - LCD_STR_FEEDRATE
//  255,  // 0x07 - LCD_STR_BEDTEMP
//  5,12,12,6,0,1,32,80,80,80,80,80,80,80,136,136,136,112,  // 0x08 - LCD_STR_THERMOMETER
//  5,5,5,5,0,11,112,216,136,216,112,  // 0x09 - LCD_STR_DEGREE
//};

//extern const uint8_t Helvetica14[5005] = {
//  0,18,19,0,252,14,2,150,6,83,32,255,252,16,252,14,252,  // tFont
//  0,0,0,5,0,0,2,14,14,6,2,0,192,192,192,
//  192,192,192,192,192,192,192,0,0,192,192,5,5,5,5,0,
//  9,216,216,216,216,216,10,13,26,10,0,0,9,0,9,0,
//  9,0,127,192,127,192,18,0,18,0,18,0,255,128,255,128,
//  36,0,36,0,36,0,9,16,32,10,1,254,8,0,62,0,
//  127,0,203,0,200,0,232,0,120,0,62,0,15,0,9,128,
//  201,128,235,128,127,0,62,0,8,0,8,0,14,13,26,16,
//  1,0,120,96,204,192,204,192,205,128,205,128,123,0,3,0,
//  6,120,6,204,12,204,12,204,24,204,24,120,12,13,26,13,
//  1,0,60,0,126,0,102,0,102,0,60,0,124,0,238,192,
//  198,192,195,192,195,128,231,192,126,224,60,112,2,5,5,4,
//  1,9,192,192,192,192,192,4,18,18,6,0,252,16,48,96,
//  96,192,192,192,192,192,192,192,192,192,192,96,96,48,16,4,
//  18,18,6,1,252,128,192,96,96,48,48,48,48,48,48,48,
//  48,48,48,96,96,192,128,5,7,7,7,1,7,32,168,248,
//  32,248,168,32,8,10,10,10,1,0,24,24,24,24,255,255,
//  24,24,24,24,2,5,5,5,1,253,192,192,64,64,128,5,
//  2,2,6,0,4,248,248,2,2,2,5,1,0,192,192,5,
//  14,14,5,0,0,24,24,24,24,48,48,48,96,96,96,192,
//  192,192,192,8,13,13,10,1,0,60,126,102,195,195,195,195,
//  195,195,195,102,126,60,5,13,13,10,2,0,24,248,248,24,
//  24,24,24,24,24,24,24,24,24,8,13,13,10,1,0,60,
//  254,195,3,7,14,28,56,112,224,192,255,255,8,13,13,10,
//  1,0,62,127,195,195,6,28,30,7,3,195,199,126,60,9,
//  13,26,10,0,0,3,0,7,0,15,0,27,0,51,0,51,
//  0,99,0,195,0,255,128,255,128,3,0,3,0,3,0,8,
//  13,13,10,1,0,254,254,192,192,252,254,199,3,3,195,199,
//  254,124,8,13,13,10,1,0,60,127,99,192,192,220,254,195,
//  195,195,227,126,60,8,13,13,10,1,0,255,255,3,6,12,
//  12,24,24,48,48,96,96,96,8,13,13,10,1,0,60,126,
//  231,195,195,102,126,231,195,195,231,126,60,8,13,13,10,1,
//  0,60,126,199,195,195,195,127,59,3,3,198,254,124,2,10,
//  10,5,1,0,192,192,0,0,0,0,0,0,192,192,2,13,
//  13,5,1,253,192,192,0,0,0,0,0,0,192,192,64,64,
//  128,8,9,9,10,1,0,3,15,60,112,192,112,60,15,3,
//  7,5,5,11,2,2,254,254,0,254,254,8,9,9,10,1,
//  0,192,240,60,14,3,14,60,240,192,7,14,14,10,1,0,
//  124,254,198,198,14,28,56,48,48,48,0,0,48,48,16,17,
//  34,18,1,253,3,240,15,252,28,14,48,6,99,211,103,115,
//  198,51,204,99,204,102,204,102,204,204,207,248,103,112,112,0,
//  56,0,31,240,7,224,12,14,28,13,0,0,6,0,6,0,
//  15,0,15,0,25,128,25,128,48,192,48,192,63,192,127,224,
//  96,96,96,96,192,48,192,48,11,14,28,13,1,0,255,0,
//  255,128,193,192,192,192,192,192,193,128,255,128,255,192,192,224,
//  192,96,192,96,192,224,255,192,255,128,12,14,28,14,1,0,
//  15,128,63,224,112,112,96,48,224,0,192,0,192,0,192,0,
//  192,0,224,0,96,48,112,112,63,224,15,128,12,14,28,14,
//  1,0,255,128,255,192,192,224,192,96,192,48,192,48,192,48,
//  192,48,192,48,192,48,192,96,192,224,255,192,255,128,10,14,
//  28,13,2,0,255,192,255,192,192,0,192,0,192,0,192,0,
//  255,128,255,128,192,0,192,0,192,0,192,0,255,192,255,192,
//  9,14,28,12,2,0,255,128,255,128,192,0,192,0,192,0,
//  192,0,255,0,255,0,192,0,192,0,192,0,192,0,192,0,
//  192,0,13,14,28,15,1,0,15,192,63,240,112,56,96,24,
//  224,24,192,0,192,0,192,248,192,248,224,24,96,24,112,56,
//  63,248,15,216,11,14,28,14,1,0,192,96,192,96,192,96,
//  192,96,192,96,192,96,255,224,255,224,192,96,192,96,192,96,
//  192,96,192,96,192,96,2,14,14,6,2,0,192,192,192,192,
//  192,192,192,192,192,192,192,192,192,192,8,14,14,10,0,0,
//  3,3,3,3,3,3,3,3,3,195,195,231,126,60,11,14,
//  28,14,2,0,192,224,193,192,195,128,199,0,206,0,220,0,
//  248,0,252,0,206,0,199,0,195,128,193,192,192,224,192,96,
//  9,14,28,11,1,0,192,0,192,0,192,0,192,0,192,0,
//  192,0,192,0,192,0,192,0,192,0,192,0,192,0,255,128,
//  255,128,14,14,28,16,1,0,192,12,192,12,224,28,224,28,
//  240,60,240,60,216,108,216,108,204,204,204,204,196,140,199,140,
//  195,12,195,12,11,14,28,14,1,0,192,96,224,96,240,96,
//  240,96,216,96,204,96,204,96,198,96,198,96,195,96,193,224,
//  193,224,192,224,192,96,13,14,28,15,1,0,15,128,63,224,
//  112,112,96,48,224,56,192,24,192,24,192,24,192,24,224,56,
//  96,48,112,112,63,224,15,128,10,14,28,13,2,0,255,0,
//  255,128,193,192,192,192,192,192,193,192,255,128,255,0,192,0,
//  192,0,192,0,192,0,192,0,192,0,13,15,30,15,1,255,
//  15,128,63,224,112,112,96,48,224,56,192,24,192,24,192,24,
//  192,24,225,184,97,176,112,240,63,224,15,176,0,48,11,14,
//  28,14,1,0,255,128,255,192,192,224,192,96,192,96,192,224,
//  255,192,255,128,192,192,192,192,192,96,192,96,192,96,192,96,
//  10,14,28,13,1,0,30,0,127,128,225,192,192,192,224,0,
//  124,0,31,0,3,128,1,192,0,192,192,192,225,192,127,128,
//  63,0,10,14,28,12,1,0,255,192,255,192,12,0,12,0,
//  12,0,12,0,12,0,12,0,12,0,12,0,12,0,12,0,
//  12,0,12,0,11,14,28,14,1,0,192,96,192,96,192,96,
//  192,96,192,96,192,96,192,96,192,96,192,96,192,96,192,96,
//  96,192,127,192,31,0,12,14,28,13,0,0,192,48,192,48,
//  96,96,96,96,96,96,48,192,48,192,48,192,25,128,25,128,
//  25,128,15,0,15,0,6,0,16,14,28,18,1,0,193,131,
//  193,131,193,131,195,195,99,198,98,70,102,102,102,102,54,108,
//  54,108,52,44,28,56,24,24,24,24,11,14,28,13,1,0,
//  192,96,192,96,96,192,113,192,49,128,27,0,14,0,14,0,
//  27,0,49,128,113,192,96,192,192,96,192,96,12,14,28,13,
//  0,0,192,48,192,48,96,96,96,96,48,192,57,192,25,128,
//  15,0,6,0,6,0,6,0,6,0,6,0,6,0,10,14,
//  28,12,1,0,255,192,255,192,0,192,1,128,3,0,6,0,
//  12,0,28,0,24,0,48,0,96,0,192,0,255,192,255,192,
//  4,18,18,5,0,252,240,240,192,192,192,192,192,192,192,192,
//  192,192,192,192,192,192,240,240,5,14,14,5,0,0,192,192,
//  192,96,96,96,48,48,48,48,24,24,24,24,4,18,18,5,
//  0,252,240,240,48,48,48,48,48,48,48,48,48,48,48,48,
//  48,48,240,240,7,6,6,9,1,7,16,56,108,108,198,198,
//  11,2,4,11,0,252,255,224,255,224,4,3,3,4,0,11,
//  192,96,48,9,10,20,11,1,0,126,0,231,0,195,0,7,
//  0,127,0,227,0,195,0,195,0,231,128,121,128,9,14,28,
//  11,1,0,192,0,192,0,192,0,192,0,222,0,255,0,227,
//  0,193,128,193,128,193,128,193,128,227,0,255,0,222,0,8,
//  10,10,10,1,0,62,127,99,192,192,192,192,99,127,62,9,
//  14,28,11,1,0,1,128,1,128,1,128,1,128,61,128,127,
//  128,99,128,193,128,193,128,193,128,193,128,99,128,127,128,61,
//  128,8,10,10,10,1,0,60,126,195,195,255,192,192,227,127,
//  60,6,14,14,6,0,0,28,60,48,48,252,252,48,48,48,
//  48,48,48,48,48,9,14,28,11,1,252,61,128,127,128,97,
//  128,193,128,193,128,193,128,193,128,99,128,127,128,61,128,1,
//  128,99,0,127,0,28,0,8,14,14,10,1,0,192,192,192,
//  192,222,255,227,195,195,195,195,195,195,195,2,14,14,4,1,
//  0,192,192,0,0,192,192,192,192,192,192,192,192,192,192,3,
//  18,18,4,0,252,96,96,0,0,96,96,96,96,96,96,96,
//  96,96,96,96,96,224,192,8,14,14,9,1,0,192,192,192,
//  192,198,204,216,240,248,216,204,206,198,199,2,14,14,4,1,
//  0,192,192,192,192,192,192,192,192,192,192,192,192,192,192,14,
//  10,20,16,1,0,222,120,255,252,227,140,195,12,195,12,195,
//  12,195,12,195,12,195,12,195,12,8,10,10,10,1,0,222,
//  255,227,195,195,195,195,195,195,195,9,10,20,11,1,0,62,
//  0,127,0,99,0,193,128,193,128,193,128,193,128,99,0,127,
//  0,62,0,9,14,28,11,1,252,222,0,255,0,227,0,193,
//  128,193,128,193,128,193,128,227,0,255,0,222,0,192,0,192,
//  0,192,0,192,0,9,14,28,11,1,252,61,128,127,128,99,
//  128,193,128,193,128,193,128,193,128,99,128,127,128,61,128,1,
//  128,1,128,1,128,1,128,5,10,10,6,1,0,216,216,224,
//  192,192,192,192,192,192,192,7,10,10,9,1,0,60,126,198,
//  192,252,62,6,198,252,120,6,13,13,6,0,0,48,48,48,
//  252,252,48,48,48,48,48,48,60,28,8,10,10,10,1,0,
//  195,195,195,195,195,195,195,199,255,123,8,10,10,10,1,0,
//  195,195,195,102,102,102,36,60,24,24,12,10,20,14,1,0,
//  198,48,198,48,198,48,102,96,102,96,105,96,41,64,57,192,
//  25,128,25,128,8,10,10,10,1,0,195,231,102,60,24,24,
//  60,102,231,195,8,14,14,10,1,252,195,195,195,102,102,102,
//  36,60,24,24,24,24,112,112,7,10,10,9,1,0,254,254,
//  6,12,24,48,96,192,254,254,5,18,18,6,0,252,24,48,
//  96,96,96,96,96,192,128,192,96,96,96,96,96,96,48,24,
//  2,18,18,5,1,252,192,192,192,192,192,192,192,192,192,192,
//  192,192,192,192,192,192,192,192,6,18,18,6,0,252,192,96,
//  48,48,48,48,48,24,12,24,48,48,48,48,48,48,96,192,
//  8,3,3,10,1,4,115,255,206,0,0,0,1,0,0,0,
//  0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,
//  0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,
//  1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,
//  0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,
//  0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,
//  1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,
//  0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,
//  0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,
//  1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,
//  0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,
//  0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,
//  1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,
//  0,0,5,0,0,2,14,14,6,2,252,192,192,0,0,64,
//  64,192,192,192,192,192,192,192,192,8,14,14,10,1,254,4,
//  4,62,127,107,200,200,200,200,107,127,62,16,16,9,13,26,
//  10,0,0,30,0,63,0,97,128,97,128,96,0,48,0,126,
//  0,24,0,24,0,48,0,96,128,255,128,223,0,8,7,7,
//  10,1,3,195,255,102,102,102,255,195,8,13,13,10,1,0,
//  195,195,102,102,102,60,255,24,255,24,24,24,24,2,18,18,
//  5,1,252,192,192,192,192,192,192,192,0,0,0,0,192,192,
//  192,192,192,192,192,8,18,18,10,1,252,60,126,195,195,240,
//  124,110,199,195,227,115,62,14,7,195,195,126,60,5,2,2,
//  6,0,12,216,216,13,14,28,15,1,0,15,128,48,96,64,
//  16,71,16,136,136,144,136,144,8,144,8,144,8,136,136,71,
//  16,64,16,48,96,15,128,5,8,8,7,1,6,112,152,56,
//  72,216,104,0,248,7,6,6,9,1,2,54,108,216,216,108,
//  54,9,5,10,11,1,3,255,128,255,128,1,128,1,128,1,
//  128,5,1,1,6,0,5,248,13,14,28,14,0,0,15,128,
//  48,96,64,16,79,144,136,72,136,72,136,72,143,136,137,8,
//  136,136,72,80,64,16,48,96,15,128,5,1,1,5,0,12,
//  248,5,5,5,7,1,8,112,216,136,216,112,8,11,11,10,
//  1,0,24,24,24,255,255,24,24,24,0,255,255,5,8,8,
//  6,0,5,112,248,152,24,48,96,248,248,5,8,8,6,0,
//  5,112,248,152,48,48,152,248,112,4,3,3,4,0,11,48,
//  96,192,8,14,14,10,1,252,195,195,195,195,195,195,195,231,
//  255,219,192,192,192,192,8,18,18,10,1,252,63,114,242,242,
//  242,242,242,114,50,18,18,18,18,18,18,18,18,18,2,2,
//  2,4,1,4,192,192,5,5,5,5,0,252,96,112,24,216,
//  240,4,8,8,6,0,5,48,240,240,48,48,48,48,48,5,
//  8,8,7,1,6,112,216,136,136,216,112,0,248,7,6,6,
//  9,1,2,216,108,54,54,108,216,14,13,26,15,0,0,48,
//  48,240,48,240,96,48,192,48,192,49,136,49,24,51,56,6,
//  120,6,216,12,252,24,24,24,24,14,13,26,15,0,0,48,
//  48,240,48,240,96,48,192,48,192,49,184,49,124,51,76,6,
//  12,6,24,12,48,24,124,24,124,14,13,26,15,0,0,112,
//  48,248,48,152,96,48,192,48,192,153,136,249,24,115,56,6,
//  120,6,216,12,252,24,24,24,24,7,14,14,10,1,252,24,
//  24,0,0,24,24,24,56,112,224,198,198,254,124,12,16,32,
//  13,0,0,6,0,0,0,6,0,6,0,15,0,15,0,25,
//  128,25,128,48,192,48,192,63,192,127,224,96,96,96,96,192,
//  48,192,48,12,16,32,13,0,0,6,0,0,0,6,0,6,
//  0,15,0,15,0,25,128,25,128,48,192,48,192,63,192,127,
//  224,96,96,96,96,192,48,192,48,12,16,32,13,0,0,25,
//  128,0,0,6,0,6,0,15,0,15,0,25,128,25,128,48,
//  192,48,192,63,192,127,224,96,96,96,96,192,48,192,48,12,
//  16,32,13,0,0,19,0,0,0,6,0,6,0,15,0,15,
//  0,25,128,25,128,48,192,48,192,63,192,127,224,96,96,96,
//  96,192,48,192,48,12,16,32,13,0,0,25,128,0,0,6,
//  0,6,0,15,0,15,0,25,128,25,128,48,192,48,192,63,
//  192,127,224,96,96,96,96,192,48,192,48,12,16,32,13,0,
//  0,9,0,9,0,6,0,6,0,15,0,15,0,25,128,25,
//  128,48,192,48,192,63,192,127,224,96,96,96,96,192,48,192,
//  48,16,14,28,18,1,0,7,255,7,255,13,128,13,128,25,
//  128,25,128,49,254,49,254,63,128,127,128,97,128,97,128,193,
//  255,193,255,12,18,36,14,1,252,15,128,63,224,112,112,96,
//  48,224,0,192,0,192,0,192,0,192,0,224,0,96,48,112,
//  112,63,224,15,128,6,0,3,0,27,0,30,0,10,16,32,
//  13,2,0,12,0,0,0,255,192,255,192,192,0,192,0,192,
//  0,192,0,255,128,255,128,192,0,192,0,192,0,192,0,255,
//  192,255,192,10,16,32,13,2,0,12,0,0,0,255,192,255,
//  192,192,0,192,0,192,0,192,0,255,128,255,128,192,0,192,
//  0,192,0,192,0,255,192,255,192,10,16,32,13,2,0,51,
//  0,0,0,255,192,255,192,192,0,192,0,192,0,192,0,255,
//  128,255,128,192,0,192,0,192,0,192,0,255,192,255,192,10,
//  16,32,13,2,0,51,0,0,0,255,192,255,192,192,0,192,
//  0,192,0,192,0,255,128,255,128,192,0,192,0,192,0,192,
//  0,255,192,255,192,2,16,16,6,2,0,192,0,192,192,192,
//  192,192,192,192,192,192,192,192,192,192,192,2,16,16,6,2,
//  0,192,0,192,192,192,192,192,192,192,192,192,192,192,192,192,
//  192,6,16,16,6,0,0,132,0,48,48,48,48,48,48,48,
//  48,48,48,48,48,48,48,6,16,16,6,0,0,204,0,48,
//  48,48,48,48,48,48,48,48,48,48,48,48,48,13,14,28,
//  14,0,0,127,192,127,224,96,112,96,48,96,24,96,24,252,
//  24,252,24,96,24,96,24,96,48,96,112,127,224,127,192,11,
//  16,32,14,1,0,19,0,0,0,192,96,224,96,240,96,240,
//  96,216,96,204,96,204,96,198,96,198,96,195,96,193,224,193,
//  224,192,224,192,96,13,16,32,15,1,0,6,0,0,0,15,
//  128,63,224,112,112,96,48,224,56,192,24,192,24,192,24,192,
//  24,224,56,96,48,112,112,63,224,15,128,13,16,32,15,1,
//  0,6,0,0,0,15,128,63,224,112,112,96,48,224,56,192,
//  24,192,24,192,24,192,24,224,56,96,48,112,112,63,224,15,
//  128,13,16,32,15,1,0,12,192,0,0,15,128,63,224,112,
//  112,96,48,224,56,192,24,192,24,192,24,192,24,224,56,96,
//  48,112,112,63,224,15,128,13,16,32,15,1,0,9,128,0,
//  0,15,128,63,224,112,112,96,48,224,56,192,24,192,24,192,
//  24,192,24,224,56,96,48,112,112,63,224,15,128,13,16,32,
//  15,1,0,12,192,0,0,15,128,63,224,112,112,96,48,224,
//  56,192,24,192,24,192,24,192,24,224,56,96,48,112,112,63,
//  224,15,128,10,9,18,10,0,0,192,192,97,128,51,0,30,
//  0,12,0,30,0,51,0,97,128,192,192,14,14,28,15,0,
//  0,7,204,31,248,56,48,48,120,112,220,97,140,99,12,98,
//  12,102,12,108,28,56,24,56,56,111,240,199,192,11,16,32,
//  14,1,0,6,0,0,0,192,96,192,96,192,96,192,96,192,
//  96,192,96,192,96,192,96,192,96,192,96,192,96,96,192,127,
//  192,31,0,11,16,32,14,1,0,12,0,0,0,192,96,192,
//  96,192,96,192,96,192,96,192,96,192,96,192,96,192,96,192,
//  96,192,96,96,192,127,192,31,0,11,16,32,14,1,0,25,
//  128,0,0,192,96,192,96,192,96,192,96,192,96,192,96,192,
//  96,192,96,192,96,192,96,192,96,96,192,127,192,31,0,11,
//  16,32,14,1,0,49,128,0,0,192,96,192,96,192,96,192,
//  96,192,96,192,96,192,96,192,96,192,96,192,96,192,96,96,
//  192,127,192,31,0,12,16,32,13,0,0,6,0,0,0,192,
//  48,192,48,96,96,96,96,48,192,57,192,25,128,15,0,6,
//  0,6,0,6,0,6,0,6,0,6,0,10,14,28,12,1,
//  0,192,0,192,0,192,0,255,0,255,128,193,192,192,192,192,
//  192,193,192,255,128,255,0,192,0,192,0,192,0,7,14,14,
//  9,1,0,56,124,198,198,198,198,220,220,198,198,198,198,222,
//  220,9,14,28,11,1,0,48,0,24,0,12,0,0,0,126,
//  0,231,0,195,0,7,0,127,0,227,0,195,0,195,0,231,
//  128,121,128,9,14,28,11,1,0,12,0,24,0,48,0,0,
//  0,126,0,231,0,195,0,7,0,127,0,227,0,195,0,195,
//  0,231,128,121,128,9,14,28,11,1,0,24,0,60,0,102,
//  0,0,0,126,0,231,0,195,0,7,0,127,0,227,0,195,
//  0,195,0,231,128,121,128,9,14,28,11,1,0,50,0,90,
//  0,76,0,0,0,126,0,231,0,195,0,7,0,127,0,227,
//  0,195,0,195,0,231,128,121,128,9,14,28,11,1,0,102,
//  0,102,0,0,0,0,0,126,0,231,0,195,0,7,0,127,
//  0,227,0,195,0,195,0,231,128,121,128,9,14,28,11,1,
//  0,24,0,36,0,36,0,24,0,126,0,231,0,195,0,7,
//  0,127,0,227,0,195,0,195,0,231,128,121,128,14,10,20,
//  17,2,0,126,240,231,248,195,12,7,12,127,252,227,0,195,
//  0,195,140,231,252,122,240,8,14,14,10,1,252,62,127,99,
//  192,192,192,192,99,127,62,24,12,108,120,8,14,14,10,1,
//  0,48,24,12,0,60,126,195,195,255,192,192,227,127,60,8,
//  14,14,10,1,0,12,24,48,0,60,126,195,195,255,192,192,
//  227,127,60,8,14,14,10,1,0,24,60,102,0,60,126,195,
//  195,255,192,192,227,127,60,8,14,14,10,1,0,102,102,0,
//  0,60,126,195,195,255,192,192,227,127,60,4,14,14,4,0,
//  0,192,96,48,0,96,96,96,96,96,96,96,96,96,96,4,
//  14,14,4,0,0,48,96,192,0,96,96,96,96,96,96,96,
//  96,96,96,5,14,14,5,0,0,96,240,152,0,96,96,96,
//  96,96,96,96,96,96,96,5,14,14,5,0,0,216,216,0,
//  0,96,96,96,96,96,96,96,96,96,96,9,14,28,11,1,
//  0,96,0,54,0,56,0,76,0,62,0,127,0,99,0,193,
//  128,193,128,193,128,193,128,99,0,127,0,62,0,8,14,14,
//  10,1,0,50,90,76,0,222,255,227,195,195,195,195,195,195,
//  195,9,14,28,11,1,0,48,0,24,0,12,0,0,0,62,
//  0,127,0,99,0,193,128,193,128,193,128,193,128,99,0,127,
//  0,62,0,9,14,28,11,1,0,6,0,12,0,24,0,0,
//  0,62,0,127,0,99,0,193,128,193,128,193,128,193,128,99,
//  0,127,0,62,0,9,14,28,11,1,0,24,0,60,0,102,
//  0,0,0,62,0,127,0,99,0,193,128,193,128,193,128,193,
//  128,99,0,127,0,62,0,9,14,28,11,1,0,50,0,90,
//  0,76,0,0,0,62,0,127,0,99,0,193,128,193,128,193,
//  128,193,128,99,0,127,0,62,0,9,14,28,11,1,0,51,
//  0,51,0,0,0,0,0,62,0,127,0,99,0,193,128,193,
//  128,193,128,193,128,99,0,127,0,62,0,8,8,8,10,1,
//  1,24,24,0,255,255,0,24,24,11,10,20,11,0,0,14,
//  96,63,192,49,128,99,192,102,192,108,192,120,192,49,128,127,
//  128,206,0,8,14,14,10,1,0,48,24,12,0,195,195,195,
//  195,195,195,195,199,255,123,8,14,14,10,1,0,6,12,24,
//  0,195,195,195,195,195,195,195,199,255,123,8,14,14,10,1,
//  0,24,60,102,0,195,195,195,195,195,195,195,199,255,123,8,
//  14,14,10,1,0,102,102,0,0,195,195,195,195,195,195,195,
//  199,255,123,8,18,18,10,1,252,6,12,24,0,195,195,195,
//  102,102,102,36,60,24,24,24,24,112,112,9,18,36,11,1,
//  252,192,0,192,0,192,0,192,0,222,0,255,0,227,0,193,
//  128,193,128,193,128,193,128,227,0,255,0,222,0,192,0,192,
//  0,192,0,192,0,8,18,18,10,1,252,102,102,0,0,195,
//  195,195,102,102,102,36,60,24,24,24,24,112,112
//};


extern __align(32) const uint8_t ISO10646_CN[]={
  0,6,9,0,254,7,1,146,3,33,32,255,255,8,255,7,
  255,0,0,0,6,0,0,1,7,7,6,2,0,128,128,128,
  128,128,0,128,3,2,2,6,1,5,160,160,5,7,7,6,
  0,0,80,80,248,80,248,80,80,5,7,7,6,0,0,32,
  120,160,112,40,240,32,5,7,7,6,0,0,192,200,16,32,
  64,152,24,5,7,7,6,0,0,96,144,160,64,168,144,104,
  2,3,3,6,1,4,192,64,128,3,7,7,6,1,0,32,
  64,128,128,128,64,32,3,7,7,6,1,0,128,64,32,32,
  32,64,128,5,5,5,6,0,1,32,168,112,168,32,5,5,
  5,6,0,1,32,32,248,32,32,2,3,3,6,2,255,192,
  64,128,5,1,1,6,0,3,248,2,2,2,6,2,0,192,
  192,5,5,5,6,0,1,8,16,32,64,128,5,7,7,6,
  0,0,112,136,136,136,136,136,112,3,7,7,6,1,0,64,
  192,64,64,64,64,224,5,7,7,6,0,0,112,136,8,112,
  128,128,248,5,7,7,6,0,0,248,16,32,16,8,8,240,
  5,7,7,6,0,0,16,48,80,144,248,16,16,5,7,7,
  6,0,0,248,128,240,8,8,136,112,5,7,7,6,0,0,
  112,128,128,240,136,136,112,5,7,7,6,0,0,248,8,16,
  32,32,32,32,5,7,7,6,0,0,112,136,136,112,136,136,
  112,5,7,7,6,0,0,112,136,136,120,8,8,112,2,5,
  5,6,2,0,192,192,0,192,192,2,6,6,6,2,255,192,
  192,0,192,64,128,4,7,7,6,0,0,16,32,64,128,64,
  32,16,5,3,3,6,0,2,248,0,248,4,7,7,6,1,
  0,128,64,32,16,32,64,128,5,7,7,6,0,0,112,136,
  8,16,32,0,32,5,7,7,6,0,0,112,136,8,104,168,
  168,112,5,7,7,6,0,0,112,136,136,248,136,136,136,5,
  7,7,6,0,0,240,136,136,240,136,136,240,5,7,7,6,
  0,0,112,136,128,128,128,136,112,5,7,7,6,0,0,240,
  136,136,136,136,136,240,5,7,7,6,0,0,248,128,128,240,
  128,128,248,5,7,7,6,0,0,248,128,128,240,128,128,128,
  5,7,7,6,0,0,112,136,128,184,136,136,112,5,7,7,
  6,0,0,136,136,136,248,136,136,136,1,7,7,6,2,0,
  128,128,128,128,128,128,128,5,7,7,6,0,0,56,16,16,
  16,16,144,96,5,7,7,6,0,0,136,144,160,192,160,144,
  136,5,7,7,6,0,0,128,128,128,128,128,128,248,5,7,
  7,6,0,0,136,216,168,136,136,136,136,5,7,7,6,0,
  0,136,136,200,168,152,136,136,5,7,7,6,0,0,112,136,
  136,136,136,136,112,5,7,7,6,0,0,240,136,136,240,128,
  128,128,5,7,7,6,0,0,112,136,136,136,168,144,104,5,
  7,7,6,0,0,240,136,136,240,160,144,136,5,7,7,6,
  0,0,120,128,128,112,8,8,240,5,7,7,6,0,0,248,
  32,32,32,32,32,32,5,7,7,6,0,0,136,136,136,136,
  136,136,112,5,7,7,6,0,0,136,136,136,136,136,80,32,
  5,7,7,6,0,0,136,136,136,136,136,168,80,5,7,7,
  6,0,0,136,136,80,32,80,136,136,5,7,7,6,0,0,
  136,136,136,80,32,32,32,5,7,7,6,0,0,248,8,16,
  32,64,128,248,3,7,7,6,1,0,224,128,128,128,128,128,
  224,5,5,5,6,0,1,128,64,32,16,8,3,7,7,6,
  1,0,224,32,32,32,32,32,224,5,3,3,6,0,4,32,
  80,136,5,1,1,6,0,0,248,2,2,2,6,2,5,128,
  64,5,5,5,6,0,0,112,8,120,136,120,5,7,7,6,
  0,0,128,128,176,200,136,136,240,5,5,5,6,0,0,112,
  128,128,136,112,5,7,7,6,0,0,8,8,104,152,136,136,
  120,5,5,5,6,0,0,112,136,248,128,112,5,7,7,6,
  0,0,48,72,224,64,64,64,64,5,6,6,6,0,255,112,
  136,136,120,8,112,5,7,7,6,0,0,128,128,176,200,136,
  136,136,1,7,7,6,2,0,128,0,128,128,128,128,128,3,
  8,8,6,1,255,32,0,32,32,32,32,160,64,4,7,7,
  6,0,0,128,128,144,160,192,160,144,3,7,7,6,1,0,
  192,64,64,64,64,64,224,5,5,5,6,0,0,208,168,168,
  168,168,5,5,5,6,0,0,176,200,136,136,136,5,5,5,
  6,0,0,112,136,136,136,112,5,6,6,6,0,255,240,136,
  136,240,128,128,5,6,6,6,0,255,120,136,136,120,8,8,
  5,5,5,6,0,0,176,200,128,128,128,5,5,5,6,0,
  0,112,128,112,8,240,4,7,7,6,0,0,64,64,224,64,
  64,64,48,5,5,5,6,0,0,136,136,136,152,104,5,5,
  5,6,0,0,136,136,136,80,32,5,5,5,6,0,0,136,
  136,168,168,80,5,5,5,6,0,0,136,80,32,80,136,5,
  6,6,6,0,255,136,136,136,120,8,112,5,5,5,6,0,
  0,248,16,32,64,248,3,7,7,6,1,0,32,64,64,128,
  64,64,32,1,7,7,6,2,0,128,128,128,128,128,128,128,
  3,7,7,6,1,0,128,64,64,32,64,64,128,5,2,2,
  6,0,2,104,144,0,0,0,6,0,0,5,8,8,6,0,
  0,16,32,112,136,136,248,136,136,5,8,8,6,0,0,8,
  16,248,128,128,240,128,248,3,8,8,6,1,0,32,64,224,
  64,64,64,64,224,5,8,8,6,0,0,16,32,112,136,136,
  136,136,112,5,8,8,6,0,0,16,32,136,136,136,136,136,
  112,5,8,8,6,0,0,16,32,136,136,80,32,32,32,5,
  8,8,6,0,0,16,32,0,112,8,120,136,120,5,8,8,
  6,0,0,16,32,0,112,136,248,128,112,2,8,8,6,2,
  0,64,128,0,128,128,128,128,128,5,8,8,6,0,0,16,
  32,0,112,136,136,136,112,5,8,8,6,0,0,16,32,0,
  136,136,136,152,104,5,9,9,6,0,255,16,32,0,136,136,
  136,120,8,112,5,8,8,6,0,0,80,32,112,136,128,128,
  136,112,5,8,8,6,0,0,80,32,0,112,128,128,136,112,
  5,8,8,6,0,0,80,32,240,136,136,136,136,240,6,8,
  8,6,0,0,4,20,24,112,144,144,144,112,5,8,8,6,
  0,0,80,32,248,128,128,240,128,248,5,8,8,6,0,0,
  80,32,0,112,136,248,128,112,5,8,8,6,0,0,80,32,
  136,200,168,152,136,136,5,8,8,6,0,0,80,32,0,176,
  200,136,136,136,5,8,8,6,0,0,80,32,240,136,240,160,
  144,136,5,8,8,6,0,0,80,32,0,176,200,128,128,128,
  5,8,8,6,0,0,80,32,120,128,128,112,8,240,5,8,
  8,6,0,0,80,32,0,112,128,112,8,240,5,8,8,6,
  0,0,80,32,248,32,32,32,32,32,6,8,8,6,0,0,
  4,68,72,224,64,64,64,48,5,8,8,6,0,0,32,80,
  168,136,136,136,136,112,5,8,8,6,0,0,32,80,32,136,
  136,136,152,104,5,8,8,6,0,0,80,32,248,8,48,64,
  128,248,5,8,8,6,0,0,80,32,0,248,16,32,64,248,
  0,0,0,6,0,0,0,0,0,6,0,0,0,0,0,6,
  0,0,1,7,7,6,2,0,128,0,128,128,128,128,128,5,
  7,7,6,0,0,32,112,168,160,168,112,32,5,7,7,6,
  0,0,48,64,64,224,64,80,168,5,5,5,6,0,0,136,
  112,80,112,136,5,7,7,6,0,0,136,80,32,248,32,248,
  32,1,7,7,6,2,0,128,128,128,0,128,128,128,5,8,
  8,6,0,0,48,72,32,80,80,32,144,96,3,1,1,6,
  1,7,160,5,7,7,6,0,0,248,136,184,184,184,136,248,
  5,7,7,6,0,1,112,8,120,136,120,0,248,5,5,5,
  6,0,1,40,80,160,80,40,5,3,3,6,0,1,248,8,
  8,2,2,2,6,2,6,64,128,5,7,7,6,0,0,248,
  136,168,136,152,168,248,5,1,1,6,0,6,248,4,4,4,
  6,0,3,96,144,144,96,5,7,7,6,0,0,32,32,248,
  32,32,0,248,4,5,5,6,0,3,96,144,32,64,240,3,
  5,5,6,0,3,224,32,224,32,224,2,2,2,6,2,6,
  64,128,5,8,8,6,0,255,136,136,136,136,152,232,128,128,
  5,7,7,6,0,0,120,152,152,120,24,24,24,2,2,2,
  6,2,2,192,192,2,2,2,6,2,255,64,128,3,5,5,
  6,0,3,64,192,64,64,224,5,7,7,6,0,1,112,136,
  136,136,112,0,248,5,5,5,6,0,1,160,80,40,80,160,
  5,7,7,6,0,0,136,144,168,88,184,8,8,5,7,7,
  6,0,0,136,144,184,72,152,32,56,5,8,8,6,0,0,
  192,64,192,72,216,56,8,8,5,7,7,6,0,0,32,0,
  32,64,128,136,112,5,8,8,6,0,0,64,32,0,112,136,
  248,136,136,5,8,8,6,0,0,16,32,0,112,136,248,136,
  136,5,8,8,6,0,0,32,80,0,112,136,248,136,136,5,
  8,8,6,0,0,104,144,0,112,136,248,136,136,5,8,8,
  6,0,0,80,0,112,136,136,248,136,136,5,8,8,6,0,
  0,32,80,32,112,136,248,136,136,5,7,7,6,0,0,56,
  96,160,184,224,160,184,5,8,8,6,0,255,112,136,128,128,
  136,112,32,96,5,8,8,6,0,0,64,32,0,248,128,240,
  128,248,5,8,8,6,0,0,8,16,0,248,128,240,128,248,
  5,8,8,6,0,0,32,80,0,248,128,240,128,248,5,7,
  7,6,0,0,80,0,248,128,240,128,248,3,8,8,6,1,
  0,128,64,0,224,64,64,64,224,3,8,8,6,1,0,32,
  64,0,224,64,64,64,224,3,8,8,6,1,0,64,160,0,
  224,64,64,64,224,3,7,7,6,1,0,160,0,224,64,64,
  64,224,5,9,9,6,0,255,80,32,112,136,128,184,136,136,
  112,5,8,8,6,0,0,104,144,0,136,200,168,152,136,5,
  8,8,6,0,0,64,32,112,136,136,136,136,112,5,8,8,
  6,0,0,16,32,112,136,136,136,136,112,5,8,8,6,0,
  0,32,80,0,112,136,136,136,112,5,8,8,6,0,0,104,
  144,0,112,136,136,136,112,5,8,8,6,0,0,80,0,112,
  136,136,136,136,112,5,5,5,6,0,1,136,80,32,80,136,
  5,8,8,6,0,255,16,112,168,168,168,168,112,64,5,8,
  8,6,0,0,64,32,136,136,136,136,136,112,5,8,8,6,
  0,0,16,32,136,136,136,136,136,112,5,8,8,6,0,0,
  32,80,0,136,136,136,136,112,5,8,8,6,0,0,80,0,
  136,136,136,136,136,112,1,7,7,6,2,0,128,0,128,128,
  128,128,128,5,9,9,6,0,255,120,128,128,112,8,8,240,
  32,96,4,8,8,6,1,255,96,144,144,160,144,144,224,128,
  5,8,8,6,0,0,64,32,0,112,8,120,136,120,5,8,
  8,6,0,0,16,32,0,112,8,120,136,120,5,8,8,6,
  0,0,32,80,0,112,8,120,136,120,5,8,8,6,0,0,
  104,144,0,112,8,120,136,120,5,7,7,6,0,0,80,0,
  112,8,120,136,120,5,8,8,6,0,0,32,80,32,112,8,
  120,136,120,5,6,6,6,0,0,208,40,120,160,168,80,5,
  7,7,6,0,255,112,128,128,136,112,32,96,5,8,8,6,
  0,0,64,32,0,112,136,248,128,112,5,8,8,6,0,0,
  16,32,0,112,136,248,128,112,5,8,8,6,0,0,32,80,
  0,112,136,248,128,112,5,7,7,6,0,0,80,0,112,136,
  248,128,112,3,8,8,6,1,0,128,64,0,64,192,64,64,
  224,3,8,8,6,1,0,32,64,0,64,192,64,64,224,3,
  8,8,6,1,0,64,160,0,64,192,64,64,224,3,7,7,
  6,1,0,160,0,64,192,64,64,224,5,8,8,6,0,255,
  80,32,112,136,136,120,8,112,5,8,8,6,0,0,104,144,
  0,176,200,136,136,136,5,8,8,6,0,0,64,32,0,112,
  136,136,136,112,5,8,8,6,0,0,16,32,0,112,136,136,
  136,112,5,8,8,6,0,0,32,80,0,112,136,136,136,112,
  5,8,8,6,0,0,104,144,0,112,136,136,136,112,5,7,
  7,6,0,0,80,0,112,136,136,136,112,5,5,5,6,0,
  1,32,0,248,0,32,5,7,7,6,0,255,16,112,168,168,
  168,112,64,5,8,8,6,0,0,64,32,0,136,136,136,152,
  104,5,8,8,6,0,0,16,32,0,136,136,136,152,104,5,
  8,8,6,0,0,32,80,0,136,136,136,152,104,5,7,7,
  6,0,0,80,0,136,136,136,152,104,1,5,5,6,2,0,
  128,128,128,128,128,5,7,7,6,0,255,112,128,112,8,240,
  32,96,5,8,8,6,0,255,80,0,136,136,136,120,8,112
};


#endif // HAS_GRAPHICAL_TFT
