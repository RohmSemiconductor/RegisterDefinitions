/*
The MIT License (MIT)
Copyright (c) 2017 Rohm Semiconductor

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef __BH1792_REGISTERS_H__
#define __BH1792_REGISTERS_H__
/* registers */
#define BH1792_STATUS 0x89
#define BH1792_FIFO 0x90
#define BH1792_PRM8_W 0x27
#define BH1792_PRM7_W 0x28
#define BH1792_PRM6_W 0x29
#define BH1792_PRM5_W 0x2A
#define BH1792_PRM4_W 0x2B
#define BH1792_PRM3_W 0x2C
#define BH1792_PRM2_W 0x2D
#define BH1792_PRM1_W 0x2E
#define BH1792_PRM0_W 0x2F
#define BH1792_CMD0_W 0x30
#define BH1792_CMD1_W 0x31
#define BH1792_ENT_W 0x32
#define BH1792_PRM8_R 0xA7
#define BH1792_PRM7_R 0xA8
#define BH1792_PRM6_R 0xA9
#define BH1792_PRM5_R 0xAA
#define BH1792_PRM4_R 0xAB
#define BH1792_PRM3_R 0xAC
#define BH1792_PRM2_R 0xAD
#define BH1792_PRM1_R 0xAE
#define BH1792_PRM0_R 0xAF
#define BH1792_CMD0_R 0xB0
#define BH1792_CMD1_R 0xB1
#define BH1792_ENT_R 0xB2
#define BH1792_RSLT00 0xC0
#define BH1792_RSLT01 0xC1
#define BH1792_RSLT02 0xC2
/* registers bits */
// Idle state
#define BH1792_STATUS_STATUS_IDLE (0x00 << 0)
// Busy state for reading sensors
#define BH1792_STATUS_STATUS_SENSORREADING (0x01 << 0)
// Busy state for calculating blood pressure and heart rate
#define BH1792_STATUS_STATUS_CALCULATING (0x04 << 0)
// Busy state for initializing itself
#define BH1792_STATUS_STATUS_INITIALIZING (0xFE << 0)
 /*registers bit masks */
#define BH1792_STATUS_STATUS_MASK 0xFF
#endif

