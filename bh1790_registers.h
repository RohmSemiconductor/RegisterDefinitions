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

#ifndef __BH1790_REGISTERS_H__
#define __BH1790_REGISTERS_H__
/* registers */
#define BH1790_REGISTER_DUMP_START 0x0F
#define BH1790_MANUFACTURER_ID 0x0F
#define BH1790_PART_ID 0x10
// Soft reset
#define BH1790_RESET 0x40
// System control setting
#define BH1790_MEAS_CONTROL1 0x41
// Measurement control setting
#define BH1790_MEAS_CONTROL2 0x42
// Measurement start
#define BH1790_MEAS_START 0x43
#define BH1790_DATAOUT_LEDOFF_L 0x54
#define BH1790_DATAOUT_LEDOFF_H 0x55
#define BH1790_DATAOUT_LEDON_L 0x56
// Restarts measurement.
#define BH1790_DATAOUT_LEDON_H 0x57
#define BH1790_REGISTER_DUMP_END 0x57
/* registers bits */
// WHO_AM_I -value
#define BH1790_PART_ID_WIA_ID (0x0D << 0)
// 1 : Software reset is performed
#define BH1790_RESET_SWRESET (0x01 << 7)
// OSC block is inactive
#define BH1790_MEAS_CONTROL1_RDY_DISABLE (0x00 << 7)
// OSC block is active
#define BH1790_MEAS_CONTROL1_RDY_ENABLE (0x01 << 7)
#define BH1790_MEAS_CONTROL1_LED_LIGHTING_FREQ_128HZ (0x00 << 2)
#define BH1790_MEAS_CONTROL1_LED_LIGHTING_FREQ_64HZ (0x01 << 2)
#define BH1790_MEAS_CONTROL1_RCYCLE_PROHIBITED1 (0x00 << 0)
#define BH1790_MEAS_CONTROL1_RCYCLE_64HZ (0x01 << 0)
#define BH1790_MEAS_CONTROL1_RCYCLE_32HZ (0x02 << 0)
#define BH1790_MEAS_CONTROL1_RCYCLE_PROHIBITED2 (0x03 << 0)
#define BH1790_MEAS_CONTROL2_LED2_EN_PULSED (0x00 << 7)
#define BH1790_MEAS_CONTROL2_LED2_EN_CONSTANT (0x01 << 7)
#define BH1790_MEAS_CONTROL2_LED1_EN_PULSED (0x00 << 6)
#define BH1790_MEAS_CONTROL2_LED1_EN_CONSTANT (0x01 << 6)
// us
#define BH1790_MEAS_CONTROL2_LED_ON_TIME_216T_OSC (0x00 << 5)
// us
#define BH1790_MEAS_CONTROL2_LED_ON_TIME_432T_OSC (0x01 << 5)
#define BH1790_MEAS_CONTROL2_LED_CURRENT_0MA (0x00 << 0)
#define BH1790_MEAS_CONTROL2_LED_CURRENT_1MA (0x08 << 0)
#define BH1790_MEAS_CONTROL2_LED_CURRENT_2MA (0x09 << 0)
#define BH1790_MEAS_CONTROL2_LED_CURRENT_3MA (0x0A << 0)
#define BH1790_MEAS_CONTROL2_LED_CURRENT_6MA (0x0B << 0)
#define BH1790_MEAS_CONTROL2_LED_CURRENT_10MA (0x0C << 0)
#define BH1790_MEAS_CONTROL2_LED_CURRENT_20MA (0x0D << 0)
#define BH1790_MEAS_CONTROL2_LED_CURRENT_30MA (0x0E << 0)
#define BH1790_MEAS_CONTROL2_LED_CURRENT_60MA (0x0F << 0)
#define BH1790_MEAS_START_MEAS_ST_STOP (0x00 << 0)
#define BH1790_MEAS_START_MEAS_ST_START (0x01 << 0)
 /*registers bit masks */
#define BH1790_PART_ID_WIA_MASK 0xFF
// 1 : OSC block is active
#define BH1790_MEAS_CONTROL1_RDY_MASK 0x80
// Select LED omitting frequency
#define BH1790_MEAS_CONTROL1_LED_LIGHTING_FREQ_MASK 0x04
#define BH1790_MEAS_CONTROL1_RCYCLE_MASK 0x03
#define BH1790_MEAS_CONTROL2_LED2_EN_MASK 0x80
#define BH1790_MEAS_CONTROL2_LED1_EN_MASK 0x40
#define BH1790_MEAS_CONTROL2_LED_ON_TIME_MASK 0x20
// LED lighting current
#define BH1790_MEAS_CONTROL2_LED_CURRENT_MASK 0x0F
#define BH1790_MEAS_START_MEAS_ST_MASK 0x01
#endif

