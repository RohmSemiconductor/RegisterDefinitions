/*
The MIT License (MIT)
Copyright (c) 2020 Rohm Semiconductor

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

#ifndef __BH1749NUC_REGISTERS_H__
#define __BH1749NUC_REGISTERS_H__
/* registers */
#define BH1749NUC_REGISTER_DUMP_START 0x40
// System control register
#define BH1749NUC_SYSTEM_CONTROL 0x40
// Control register 1
#define BH1749NUC_MODE_CONTROL1 0x41
// Control register 2
#define BH1749NUC_MODE_CONTROL2 0x42
// RED measurement result [7:0]
#define BH1749NUC_RED_DATA_LSB 0x50
// RED measurement result [15:8]
#define BH1749NUC_RED_DATA_MSB 0x51
// GREEN measurement result [7:0]
#define BH1749NUC_GREEN_DATA_LSB 0x52
// GREEN measurement result [15:8]
#define BH1749NUC_GREEN_DATA_MSB 0x53
// BLUE measurement result [7:0]
#define BH1749NUC_BLUE_DATA_LSB 0x54
// BLUE measurement result [15:8]
#define BH1749NUC_BLUE_DATA_MSB 0x55
// IR measurement result [7:0]
#define BH1749NUC_IR_DATA_LSB 0x58
// IR measurement result [15:8]
#define BH1749NUC_IR_DATA_MSB 0x59
// GREEN2 measurement result [7:0]
#define BH1749NUC_GREEN2_DATA_LSB 0x5A
// GREEN2 measurement result [15:8]
#define BH1749NUC_GREEN2_DATA_MSB 0x5B
// Interrupt control register
#define BH1749NUC_INTERRUPT 0x60
// Interrupt persistence setting.
#define BH1749NUC_PERSISTENCE 0x61
// Interrupt threshold upper level
#define BH1749NUC_TH_HIGH_LSB 0x62
#define BH1749NUC_TH_HIGH_MSB 0x63
// Interrupt threshold lower level
#define BH1749NUC_TH_LOW_LSB 0x64
#define BH1749NUC_TH_LOW_MSB 0x65
// Manufacturer ID
#define BH1749NUC_MANUFACTURER_ID 0x92
#define BH1749NUC_REGISTER_DUMP_END 0x92
/* registers bits */
// Software reset is not done
#define BH1749NUC_SYSTEM_CONTROL_SW_RESET_NOT_DONE (0x00 << 7)
// Software reset is done
#define BH1749NUC_SYSTEM_CONTROL_SW_RESET_DONE (0x01 << 7)
// INT pin status is not changed
#define BH1749NUC_SYSTEM_CONTROL_INT_RESET_NO_ACTION (0x00 << 6)
// INT pin becomes inactive (high impedance)
#define BH1749NUC_SYSTEM_CONTROL_INT_RESET_RESET (0x01 << 6)
// Part ID 0x0D (read only)
#define BH1749NUC_SYSTEM_CONTROL_PART_ID_ID (0x0D << 0)
// Forbidden to use
#define BH1749NUC_MODE_CONTROL1_IR_GAIN_FORBIDDEN (0x00 << 5)
// x1 gain mode
#define BH1749NUC_MODE_CONTROL1_IR_GAIN_1X (0x01 << 5)
// x32 gain mode
#define BH1749NUC_MODE_CONTROL1_IR_GAIN_32X (0x03 << 5)
// Forbidden to use
#define BH1749NUC_MODE_CONTROL1_RGB_GAIN_FORBIDDEN (0x00 << 3)
// x1 gain mode
#define BH1749NUC_MODE_CONTROL1_RGB_GAIN_1X (0x01 << 3)
// x32 gain mode
#define BH1749NUC_MODE_CONTROL1_RGB_GAIN_32X (0x03 << 3)
// Forbidden to use
#define BH1749NUC_MODE_CONTROL1_MEASUREMENT_MODE_FORBIDDEN (0x00 << 0)
// 120 ms measurement time
#define BH1749NUC_MODE_CONTROL1_MEASUREMENT_MODE_8P333 (0x02 << 0)
// 240 ms measurement time
#define BH1749NUC_MODE_CONTROL1_MEASUREMENT_MODE_4P167 (0x03 << 0)
// 35 ms measurement time
#define BH1749NUC_MODE_CONTROL1_MEASUREMENT_MODE_28P6 (0x05 << 0)
// Register setup changed or VALID has been read
#define BH1749NUC_MODE_CONTROL2_VALID_NO (0x00 << 7)
// Measurement data has been updated
#define BH1749NUC_MODE_CONTROL2_VALID_YES (0x01 << 7)
// Measurement is inactive and becomes power down.
#define BH1749NUC_MODE_CONTROL2_RGB_EN_INACTIVE (0x00 << 4)
// Measurement is active.
#define BH1749NUC_MODE_CONTROL2_RGB_EN_ACTIVE (0x01 << 4)
// Interrupt signal is inactive
#define BH1749NUC_INTERRUPT_INT_STATUS_INACTIVE (0x00 << 7)
// Interrupt signal is active
#define BH1749NUC_INTERRUPT_INT_STATUS_ACTIVE (0x01 << 7)
// Red channel
#define BH1749NUC_INTERRUPT_INT_SOURCE_RED (0x00 << 2)
// Green channel
#define BH1749NUC_INTERRUPT_INT_SOURCE_GREEN (0x01 << 2)
// Blue channel
#define BH1749NUC_INTERRUPT_INT_SOURCE_BLUE (0x02 << 2)
// The INT pin disable.
#define BH1749NUC_INTERRUPT_INT_ENABLE_DISABLE (0x00 << 0)
// The INT pin enable.
#define BH1749NUC_INTERRUPT_INT_ENABLE_ENABLE (0x01 << 0)
// Interrupt status becomes active at each measurement end.
#define BH1749NUC_PERSISTENCE_PERSISTENCE_ACTIVE_AFTER_MEASUREMENT (0x00 << 0)
// Interrupt status is updated at each measurement end.
#define BH1749NUC_PERSISTENCE_PERSISTENCE_UPDATE_AFTER_MEASUREMENT (0x01 << 0)
// Interrupt status is updated if 4 consecutive threshold judgements are the same
#define BH1749NUC_PERSISTENCE_PERSISTENCE_UPDATE_AFTER_4_SAME (0x02 << 0)
// Interrupt status is updated if 8 consecutive threshold judgements are the same
#define BH1749NUC_PERSISTENCE_PERSISTENCE_UPDATE_AFTER_8_SAME (0x03 << 0)
// Manufacturer ID
#define BH1749NUC_MANUFACTURER_ID_MANUFACTURER_ID_ID (0xE0 << 0)
 /*registers bit masks */
#define BH1749NUC_SYSTEM_CONTROL_SW_RESET_MASK 0x80
// INT-pin high-impedance control
#define BH1749NUC_SYSTEM_CONTROL_INT_RESET_MASK 0x40
// Part ID 0x0D (read only)
#define BH1749NUC_SYSTEM_CONTROL_PART_ID_MASK 0x3F
// Gain setting for IR data
#define BH1749NUC_MODE_CONTROL1_IR_GAIN_MASK 0x60
// Gain setting for RGB data
#define BH1749NUC_MODE_CONTROL1_RGB_GAIN_MASK 0x18
// Measurement mode
#define BH1749NUC_MODE_CONTROL1_MEASUREMENT_MODE_MASK 0x07
// Measurement data update flag. Sets to 0 if MODE_CONTROL1/2 reg, MODE_CONTROL2, INTERRUPT, T(H/L)_(LSB/MSB) is written or MODE_CONTROL2 read.
#define BH1749NUC_MODE_CONTROL2_VALID_MASK 0x80
// Measurement enable
#define BH1749NUC_MODE_CONTROL2_RGB_EN_MASK 0x10
// Interrupt status output. (Read only register)
#define BH1749NUC_INTERRUPT_INT_STATUS_MASK 0x80
// INT source select
#define BH1749NUC_INTERRUPT_INT_SOURCE_MASK 0x0C
// INT-pin enable
#define BH1749NUC_INTERRUPT_INT_ENABLE_MASK 0x01
// Interrupt persistence setting.
#define BH1749NUC_PERSISTENCE_PERSISTENCE_MASK 0x03
// Manufacturer ID
#define BH1749NUC_MANUFACTURER_ID_MANUFACTURER_ID_MASK 0xFF
#endif

