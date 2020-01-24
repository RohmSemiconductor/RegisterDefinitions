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

#ifndef __BM1383AGLV_REGISTERS_H__
#define __BM1383AGLV_REGISTERS_H__
/* registers */
#define BM1383AGLV_REGISTER_DUMP_START 0x0F
// Identifier 1
#define BM1383AGLV_ID1 0x0F
// Identifier 2
#define BM1383AGLV_ID2 0x10
// Power mode register
#define BM1383AGLV_POWER_DOWN 0x12
// Measurement control block reset register
#define BM1383AGLV_RESET 0x13
// This register can be accessed when power is up and measurement control block is not in reset.
#define BM1383AGLV_MODE_CONTROL 0x14
// Reading this REG resets DRDY pin
#define BM1383AGLV_STATUS 0x19
// The upper part of pressure data
#define BM1383AGLV_PRESSURE_MSB 0x1A
// The lower part of pressure data
#define BM1383AGLV_PRESSURE_LSB 0x1B
// Pressurevalue[hPa] = { PRESS_OUT[15:8] PRESS_OUT[7:0] PRESS_OUT_XL[7:2] } / 2048
#define BM1383AGLV_PRESSURE_LSB2 0x1C
// TEMP_OUT: [15] sign ; [14:5] integer ; [4:0] decimal (2's complement numbers)
#define BM1383AGLV_TEMPERATURE_MSB 0x1D
// Temperature value [C]= TEMP_OUT[15:0]/32
#define BM1383AGLV_TEMPERATURE_LSB 0x1E
#define BM1383AGLV_REGISTER_DUMP_END 0x1E
/* registers bits */
// Identifier 1
#define BM1383AGLV_ID1_ID1_ID1 (0xE0 << 0)
// Identifier 2
#define BM1383AGLV_ID2_ID2_ID2 (0x32 << 0)
// power down
#define BM1383AGLV_POWER_DOWN_PWR_DOWN_DOWN (0x00 << 0)
// active
#define BM1383AGLV_POWER_DOWN_PWR_DOWN_UP (0x01 << 0)
// Measurement control block is reset
#define BM1383AGLV_RESET_RSTB_RESET (0x00 << 0)
// Measurement control block is active
#define BM1383AGLV_RESET_RSTB_STANDBY (0x01 << 0)
// single (meas. time max 6 [ms] ; max interval 60 [ms])
#define BM1383AGLV_MODE_CONTROL_AVE_NUM_AVG_1_60MS (0x00 << 5)
// average of 2 times (9 [ms] ; 60 [ms])
#define BM1383AGLV_MODE_CONTROL_AVE_NUM_AVG_2_60MS (0x01 << 5)
// average of 4 times (16 [ms] ; 60 [ms])
#define BM1383AGLV_MODE_CONTROL_AVE_NUM_AVG_4_60MS (0x02 << 5)
// average of 8 times (30 [ms] ; 60 [ms])
#define BM1383AGLV_MODE_CONTROL_AVE_NUM_AVG_8_60MS (0x03 << 5)
// average of 16 times (60 [ms] ; 60 [ms])
#define BM1383AGLV_MODE_CONTROL_AVE_NUM_AVG_16_60MS (0x04 << 5)
// average of 32 times (120 [ms] ; 120 [ms])
#define BM1383AGLV_MODE_CONTROL_AVE_NUM_AVG_32_120MS (0x05 << 5)
// average of 64 times (240 [ms] ; 240 [ms])
#define BM1383AGLV_MODE_CONTROL_AVE_NUM_AVG_64_240MS (0x06 << 5)
// DRDY pin Disable
#define BM1383AGLV_MODE_CONTROL_DREN_DISABLED (0x00 << 4)
// DRDY pin Enable
#define BM1383AGLV_MODE_CONTROL_DREN_ENABLED (0x01 << 4)
// write 1
#define BM1383AGLV_MODE_CONTROL_RESERVED3_WRITE_1 (0x01 << 3)
// write 0
#define BM1383AGLV_MODE_CONTROL_RESERVED2_WRITE_0 (0x00 << 2)
// Stand by
#define BM1383AGLV_MODE_CONTROL_MODE_STANDBY (0x00 << 0)
// One shot
#define BM1383AGLV_MODE_CONTROL_MODE_ONE_SHOT (0x01 << 0)
// Continuous
#define BM1383AGLV_MODE_CONTROL_MODE_CONTINUOUS (0x02 << 0)
// Prohibition
#define BM1383AGLV_MODE_CONTROL_MODE_PROHIBITED (0x03 << 0)
// Data is not ready
#define BM1383AGLV_STATUS_RD_DRDY_NOT_READY (0x00 << 0)
// Data is ready
#define BM1383AGLV_STATUS_RD_DRDY_READY (0x01 << 0)
 /*registers bit masks */
#define BM1383AGLV_ID1_ID1_MASK 0xFF

#define BM1383AGLV_ID2_ID2_MASK 0xFF
// Power enable
#define BM1383AGLV_POWER_DOWN_PWR_DOWN_MASK 0x01
// Measurement control block reset
#define BM1383AGLV_RESET_RSTB_MASK 0x01
// Set the average number of measurement data
#define BM1383AGLV_MODE_CONTROL_AVE_NUM_MASK 0xE0
// DRDY pin Enable
#define BM1383AGLV_MODE_CONTROL_DREN_MASK 0x10
// Reserved
#define BM1383AGLV_MODE_CONTROL_RESERVED3_MASK 0x08
// Reserved; write 0
#define BM1383AGLV_MODE_CONTROL_RESERVED2_MASK 0x04
// Set measurement mode
#define BM1383AGLV_MODE_CONTROL_MODE_MASK 0x03
// Pressure and temperature measurement data ready bit
#define BM1383AGLV_STATUS_RD_DRDY_MASK 0x01
#define BM1383AGLV_PRESSURE_LSB_PRESS_OUT_MASK 0xFF
#define BM1383AGLV_PRESSURE_LSB2_PRESS_OUT_XL_MASK 0xFC
#endif

