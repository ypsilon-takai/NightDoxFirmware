/*
 * SeeedOLED.h
 * SSD130x OLED Driver Library
 *
 * Copyright (c) 2011 seeed technology inc.
 * Author        :   Visweswara R
 * Create Time   :   Dec 2011
 * Change Log    :
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef SeeedOLED_data_H
#define SeeedOLED_data_H

#include <stdbool.h>
#include <stdint.h>
//#include "../matrix.h"

// --------------------------------------------------------------------

uint8_t oled_init(void);
uint8_t oled_update(void);


// SeeedOLED Instruction set addresses

#define SeeedOLED_Max_X                 127 //128 Pixels
#define SeeedOLED_Max_Y                 63  //64  Pixels

#define PAGE_MODE                       01
#define HORIZONTAL_MODE                 02


#define SeeedOLED_Address               0x3c
#define SeeedOLED_Command_Mode          0x80
#define SeeedOLED_Data_Mode             0x40
#define SeeedOLED_Segment_Normal_Cmd    0xA0
#define SeeedOLED_Segment_Remap_Cmd     0xA1
#define SeeedOLED_Com_Normal_Cmd        0xC0
#define SeeedOLED_Com_Remap_Cmd         0xC8
#define SeeedOLED_Display_Off_Cmd       0xAE
#define SeeedOLED_Display_On_Cmd        0xAF
#define SeeedOLED_Normal_Display_Cmd    0xA6
#define SeeedOLED_Inverse_Display_Cmd   0xA7
#define SeeedOLED_Activate_Scroll_Cmd   0x2F
#define SeeedOLED_Dectivate_Scroll_Cmd  0x2E
#define SeeedOLED_Set_Brightness_Cmd    0x81

#define Scroll_Left             0x00
#define Scroll_Right            0x01

#define Scroll_2Frames          0x7
#define Scroll_3Frames          0x4
#define Scroll_4Frames          0x5
#define Scroll_5Frames          0x0
#define Scroll_25Frames         0x6
#define Scroll_64Frames         0x1
#define Scroll_128Frames        0x2
#define Scroll_256Frames        0x3


/* class SeeedOLED { */

/* public: */

/* char addressingMode; */


uint8_t SeeedOLED_init(void);

void SeeedOLED_setNormalDisplay(void);
void SeeedOLED_setInverseDisplay(void);

uint8_t SeeedOLED_sendCommand(unsigned char command);
uint8_t SeeedOLED_sendData(unsigned char Data);

void SeeedOLED_setPageMode(void);
void SeeedOLED_setHorizontalMode(void);

void SeeedOLED_setTextXY(unsigned char Row, unsigned char Column);
void SeeedOLED_clearDisplay(void);
void SeeedOLED_setBrightness(unsigned char Brightness);
void SeeedOLED_putChar(unsigned char c);
void SeeedOLED_putString(const char *String);
void SeeedOLED_putByteAsHex(unsigned char c);
unsigned char SeeedOLED_putNumber(long n);
unsigned char SeeedOLED_putFloatD(float floatNumber,unsigned char decimal);
unsigned char SeeedOLED_putFloat(float floatNumber);
void SeeedOLED_drawBitmap(unsigned char *bitmaparray,int bytes);

void SeeedOLED_setHorizontalScrollProperties(bool direction,unsigned char startPage, unsigned char endPage, unsigned char scrollSpeed);
void SeeedOLED_activateScroll(void);
void SeeedOLED_deactivateScroll(void);

/* }; */

/* extern SeeedOLED SeeedOled;  // SeeedOLED object  */

#endif


