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

#ifndef __BM1422AGMV_REGISTERS_H__
#define __BM1422AGMV_REGISTERS_H__
/* registers */
#define BM1422AGMV_REGISTER_DUMP_START 0x0D
// Information Register [7:0]
#define BM1422AGMV_INFO_LSB 0x0D
// Information Register [15:8]
#define BM1422AGMV_INFO_MSB 0x0E
// WIA Register
#define BM1422AGMV_WIA 0x0F
// Xch Output value LSB
#define BM1422AGMV_DATAX_LSB 0x10
// Xch Output value MSB
#define BM1422AGMV_DATAX_MSB 0x11
// Ych Output value LSB
#define BM1422AGMV_DATAY_LSB 0x12
// Ych Output value MSB
#define BM1422AGMV_DATAY_MSB 0x13
// Zch Output value LSB
#define BM1422AGMV_DATAZ_LSB 0x14
// Zch Output value MSB
#define BM1422AGMV_DATAZ_MSB 0x15
// Status Register
#define BM1422AGMV_STA1 0x18
// Control setting1 Register
#define BM1422AGMV_CNTL1 0x1B
// Control setting2 register
#define BM1422AGMV_CNTL2 0x1C
// Control setting3 register
#define BM1422AGMV_CNTL3 0x1D
// Average time Register
#define BM1422AGMV_AVE_A 0x40
#define BM1422AGMV_CNTL4_LSB 0x5C
// Control setting4 Register [15:8]
#define BM1422AGMV_CNTL4_MSB 0x5D
// Temperature value LSB
#define BM1422AGMV_TEMP_LSB 0x60
// Temperature value MSB
#define BM1422AGMV_TEMP_MSB 0x61
#define BM1422AGMV_OFF_X_LSB 0x6C
#define BM1422AGMV_OFF_Y_LSB 0x72
#define BM1422AGMV_OFF_Z_LSB 0x78
// DATAX value per OFF_X LSB
#define BM1422AGMV_FINEOUTPUTX_LSB 0x90
// DATAX value per OFF_X MSB
#define BM1422AGMV_FINEOUTPUTX_MSB 0x91
// DATAY value per OFF_Y LSB
#define BM1422AGMV_FINEOUTPUTY_LSB 0x92
// DATAY value per OFF_Y MSB
#define BM1422AGMV_FINEOUTPUTY_MSB 0x93
// DATAZ value per OFF_Z LSB
#define BM1422AGMV_FINEOUTPUTZ_LSB 0x94
// DATAZ value per OFF_Z MSB
#define BM1422AGMV_FINEOUTPUTZ_MSB 0x95
// Axis interference Xch to Zch
#define BM1422AGMV_GAIN_PARA_X_LSB 0x9C
// Axis interference Xch to Ych
#define BM1422AGMV_GAIN_PARA_X_MSB 0x9D
// Axis interference Ych to Zch
#define BM1422AGMV_GAIN_PARA_Y_LSB 0x9E
// Axis interference Ych to Xch
#define BM1422AGMV_GAIN_PARA_Y_MSB 0x9F
// Axis interference Zch to Ych
#define BM1422AGMV_GAIN_PARA_Z_LSB 0xA0
// Axis interference Zch to Xch
#define BM1422AGMV_GAIN_PARA_Z_MSB 0xA1
#define BM1422AGMV_REGISTER_DUMP_END 0xA1
/* registers bits */
// Who I am : 0x41
#define BM1422AGMV_WIA_WIA_ID (0x41 << 0)
// Not ready NG
#define BM1422AGMV_STA1_RD_DRDY_NOTREADY (0x00 << 6)
// Ready OK
#define BM1422AGMV_STA1_RD_DRDY_READY (0x01 << 6)
// PowerDown
#define BM1422AGMV_CNTL1_PC1_OFF (0x00 << 7)
// Active
#define BM1422AGMV_CNTL1_PC1_ON (0x01 << 7)
// 12bit Output
#define BM1422AGMV_CNTL1_OUT_BIT_12 (0x00 << 6)
// 14bit Output
#define BM1422AGMV_CNTL1_OUT_BIT_14 (0x01 << 6)
// Reset release
#define BM1422AGMV_CNTL1_RST_LV_RELEASE (0x00 << 5)
// Reset
#define BM1422AGMV_CNTL1_RST_LV_RESET (0x01 << 5)
// 10Hz
#define BM1422AGMV_CNTL1_ODR_10 (0x00 << 3)
// 100Hz
#define BM1422AGMV_CNTL1_ODR_100 (0x01 << 3)
// 20Hz
#define BM1422AGMV_CNTL1_ODR_20 (0x02 << 3)
// 1kHz
#define BM1422AGMV_CNTL1_ODR_1000 (0x03 << 3)
// Continuous mode
#define BM1422AGMV_CNTL1_FS1_CONT (0x00 << 1)
// Single mode
#define BM1422AGMV_CNTL1_FS1_SINGLE (0x01 << 1)
// Disable
#define BM1422AGMV_CNTL2_DREN_DISABLED (0x00 << 3)
// Enable
#define BM1422AGMV_CNTL2_DREN_ENABLED (0x01 << 3)
// Low active
#define BM1422AGMV_CNTL2_DRP_LOW_ACTIVE (0x00 << 2)
// High active
#define BM1422AGMV_CNTL2_DRP_HIGH_ACTIVE (0x01 << 2)
// Start measurement
#define BM1422AGMV_CNTL3_FORCE_START (0x01 << 6)
// 4times
#define BM1422AGMV_AVE_A_AVE_A_4TIMES (0x00 << 2)
// 1times
#define BM1422AGMV_AVE_A_AVE_A_1TIMES (0x01 << 2)
// 2times
#define BM1422AGMV_AVE_A_AVE_A_2TIMES (0x02 << 2)
// 8times
#define BM1422AGMV_AVE_A_AVE_A_8TIMES (0x03 << 2)
// 16times
#define BM1422AGMV_AVE_A_AVE_A_16TIMES (0x04 << 2)
// RSTB_LV=1 when register written (data irrelevant), RSTB_LV=0 when PC1=0 written.
#define BM1422AGMV_CNTL4_MSB_RSTB_LV (0x01 << 0)
 /*registers bit masks */
#define BM1422AGMV_WIA_WIA_MASK 0xFF
// Preparation status of the measured data
#define BM1422AGMV_STA1_RD_DRDY_MASK 0x40
// Power Control
#define BM1422AGMV_CNTL1_PC1_MASK 0x80
// Output Data bit setting
#define BM1422AGMV_CNTL1_OUT_BIT_MASK 0x40
// Logic reset control; reset release at RST_LV(CNTL1)=0 & RSTB_LV(CNTL4)=1
#define BM1422AGMV_CNTL1_RST_LV_MASK 0x20
// Measurement output data rates
#define BM1422AGMV_CNTL1_ODR_MASK 0x18
// Measurement mode setting
#define BM1422AGMV_CNTL1_FS1_MASK 0x02
// DRDY terminal enable setting
#define BM1422AGMV_CNTL2_DREN_MASK 0x08
// DRDY terminal active setting
#define BM1422AGMV_CNTL2_DRP_MASK 0x04
// AD start measurement trigger at continuous mode (FS1=0) and single mode (FS1=1). (Autocleared)
#define BM1422AGMV_CNTL3_FORCE_MASK 0x40
// Average Time
#define BM1422AGMV_AVE_A_AVE_A_MASK 0x1C
#endif

