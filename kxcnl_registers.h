/*
The MIT License (MIT)
Copyright (c) 2017 Kionix Inc.

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

#ifndef __KXCNL_REGISTERS_H__
#define __KXCNL_REGISTERS_H__
/* registers */
#define KXCNL_INFO1 0x0D
#define KXCNL_INFO2 0x0E
// This register can be used for supplier recognition (Who I Am ID),
#define KXCNL_WIA 0x0F
#define KXCNL_OUTX_L 0x10
#define KXCNL_OUTX_H 0x11
#define KXCNL_OUTY_L 0x12
#define KXCNL_OUTY_H 0x13
#define KXCNL_OUTZ_L 0x14
#define KXCNL_OUTZ_H 0x15
// These two registers contain up to 16-bits of long counter information.
#define KXCNL_LC_L 0x16
#define KXCNL_LC_H 0x17
// This register reports the status of the accelerometer outputs
#define KXCNL_STAT 0x18
#define KXCNL_PEAK1 0x19
#define KXCNL_PEAK2 0x1A
// Read/write control register that controls the main feature set
#define KXCNL_CNTL1 0x1B
// Read/write control register that controls the State Program 1.
#define KXCNL_CNTL2 0x1C
// Read/write control register that controls the State Program 2.
#define KXCNL_CNTL3 0x1D
// Read/write control register that controls several functions of the KXCNL.
#define KXCNL_CNTL4 0x1E
#define KXCNL_THRS3 0x1F
#define KXCNL_OFF_X 0x20
#define KXCNL_OFF_Y 0x21
#define KXCNL_OFF_Z 0x22
#define KXCNL_CS_X 0x24
#define KXCNL_CS_Y 0x25
#define KXCNL_CS_Z 0x26
#define KXCNL_X_DEBUG 0x28
#define KXCNL_Y_DEBUG 0x29
#define KXCNL_Z_DEBUG 0x2A
#define KXCNL_VFC_1 0x2C
#define KXCNL_VFC_2 0x2D
#define KXCNL_VFC_3 0x2E
#define KXCNL_VFC_4 0x2F
#define KXCNL_ST1_1 0x40
#define KXCNL_TIM4_1 0x50
#define KXCNL_TIM3_1 0x51
#define KXCNL_TIM2_1_L 0x52
#define KXCNL_TIM2_1_H 0x53
#define KXCNL_TIM1_1_L 0x54
#define KXCNL_TIM1_1_H 0x55
#define KXCNL_THRS2_1 0x56
#define KXCNL_THRS1_1 0x57
#define KXCNL_SA1 0x59
#define KXCNL_MA1 0x5A
#define KXCNL_SETT1 0x5B
#define KXCNL_PPRP1 0x5C
#define KXCNL_TC1_L 0x5D
#define KXCNL_TC1_H 0x5E
#define KXCNL_OUTS1 0x5F
#define KXCNL_ST1_2 0x60
#define KXCNL_TIM4_2 0x70
#define KXCNL_TIM3_2 0x71
#define KXCNL_TIM2_2_L 0x72
#define KXCNL_TIM2_2_H 0x73
#define KXCNL_TIM1_2_L 0x74
#define KXCNL_TIM1_2_H 0x75
#define KXCNL_THRS2_2 0x76
#define KXCNL_THRS1_2 0x77
#define KXCNL_DES2 0x78
#define KXCNL_SA2 0x79
#define KXCNL_MA2 0x7A
#define KXCNL_SETT2 0x7B
#define KXCNL_PPRP2 0x7C
#define KXCNL_TC2_L 0x7D
#define KXCNL_TC2_H 0x7E
#define KXCNL_OUTS2 0x7F
/* registers bits */
// WHO_AM_I -value
#define KXCNL_WIA_WIA_ID (0x0B << 0)
// is the long counter interrupt and is common to both State Programs
#define KXCNL_STAT_LONG (0x01 << 7)
// provides common information for OUTW host action waiting
#define KXCNL_STAT_SYNCW (0x01 << 6)
// reports the synchronization status of State Program 1.
#define KXCNL_STAT_SYNC1 (0x01 << 5)
// reports the synchronization status of State Program 2.
#define KXCNL_STAT_SYNC2 (0x01 << 4)
// reports the interrupt status of State Program 1
#define KXCNL_STAT_INT_SM1 (0x01 << 3)
// reports the interrupt status of State Program 2.
#define KXCNL_STAT_INT_SM2 (0x01 << 2)
// reports a data overrun condition
#define KXCNL_STAT_DOR (0x01 << 1)
// reports the data ready condition
#define KXCNL_STAT_DRDY (0x01 << 0)
// controls the operating mode of the KXCNL.
#define KXCNL_CNTL1_PC (0x01 << 7)
// 2g
#define KXCNL_CNTL1_SC_2G (0x00 << 5)
// 4g
#define KXCNL_CNTL1_SC_4G (0x01 << 5)
// 6g
#define KXCNL_CNTL1_SC_6G (0x02 << 5)
// 8g
#define KXCNL_CNTL1_SC_8G (0x03 << 5)
// 3.125Hz
#define KXCNL_CNTL1_ODR_3P125 (0x00 << 2)
// 6.25Hz
#define KXCNL_CNTL1_ODR_6P25 (0x01 << 2)
// 12.5Hz
#define KXCNL_CNTL1_ODR_12P5 (0x02 << 2)
// 25Hz
#define KXCNL_CNTL1_ODR_25 (0x03 << 2)
// 50Hz
#define KXCNL_CNTL1_ODR_50 (0x04 << 2)
// 100Hz
#define KXCNL_CNTL1_ODR_100 (0x05 << 2)
// 400Hz
#define KXCNL_CNTL1_ODR_400 (0x06 << 2)
// 1600Hz
#define KXCNL_CNTL1_ODR_1600 (0x07 << 2)
// controls the State Program Step Debug mode
#define KXCNL_CNTL1_DEBUG (0x01 << 1)
// is the main interrupt enable switch
#define KXCNL_CNTL1_IEN (0x01 << 0)
// controls the routing of the State Program 1 interrupt.
#define KXCNL_CNTL2_SM1_PIN (0x01 << 3)
// enables State Program 1.
#define KXCNL_CNTL2_SM1_EN (0x01 << 0)
// controls the routing of the State Program 1 interrupt.
#define KXCNL_CNTL3_SM2_PIN (0x01 << 3)
// enables State Program 1.
#define KXCNL_CNTL3_SM2_EN (0x01 << 0)
// sends the data ready signal (DRDY) to the INT1 pin.
#define KXCNL_CNTL4_DR_EN (0x01 << 7)
// controls the polarity of interrupt signals
#define KXCNL_CNTL4_IEA (0x01 << 6)
// controls the latching state of interrupt signals
#define KXCNL_CNTL4_IEL (0x01 << 5)
// enables the INT2 pin.
#define KXCNL_CNTL4_INT2_EN (0x01 << 4)
// enables the INT1/DRDY pin.
#define KXCNL_CNTL4_INT1_EN (0x01 << 3)
// enables or disables the Vector Filter
#define KXCNL_CNTL4_VFILT (0x01 << 2)
// controls the activation of self test
#define KXCNL_CNTL4_STP (0x01 << 1)
// performs a Soft Reset
#define KXCNL_CNTL4_STRT (0x01 << 0)
#define KXCNL_ST1_1_RESET_NOP (0x00 << 4)
#define KXCNL_ST1_1_RESET_TI1 (0x01 << 4)
#define KXCNL_ST1_1_RESET_TI2 (0x02 << 4)
#define KXCNL_ST1_1_RESET_TI3 (0x03 << 4)
#define KXCNL_ST1_1_RESET_TI4 (0x04 << 4)
#define KXCNL_ST1_1_RESET_GNTH1 (0x05 << 4)
#define KXCNL_ST1_1_RESET_GNTH2 (0x06 << 4)
#define KXCNL_ST1_1_RESET_LNTH1 (0x07 << 4)
#define KXCNL_ST1_1_RESET_LNTH2 (0x08 << 4)
#define KXCNL_ST1_1_RESET_GTTH1 (0x09 << 4)
#define KXCNL_ST1_1_RESET_LLTH2 (0x0A << 4)
#define KXCNL_ST1_1_RESET_GRTH1 (0x0B << 4)
#define KXCNL_ST1_1_RESET_LRTH1 (0x0C << 4)
#define KXCNL_ST1_1_RESET_GRTH2 (0x0D << 4)
#define KXCNL_ST1_1_RESET_LRTH2 (0x0E << 4)
#define KXCNL_ST1_1_RESET_NZERO (0x0F << 4)
#define KXCNL_ST1_1_NEXT_NOP (0x00 << 0)
#define KXCNL_ST1_1_NEXT_TI1 (0x01 << 0)
#define KXCNL_ST1_1_NEXT_TI2 (0x02 << 0)
#define KXCNL_ST1_1_NEXT_TI3 (0x03 << 0)
#define KXCNL_ST1_1_NEXT_TI4 (0x04 << 0)
#define KXCNL_ST1_1_NEXT_GNTH1 (0x05 << 0)
#define KXCNL_ST1_1_NEXT_GNTH2 (0x06 << 0)
#define KXCNL_ST1_1_NEXT_LNTH1 (0x07 << 0)
#define KXCNL_ST1_1_NEXT_LNTH2 (0x08 << 0)
#define KXCNL_ST1_1_NEXT_GTTH1 (0x09 << 0)
#define KXCNL_ST1_1_NEXT_LLTH2 (0x0A << 0)
#define KXCNL_ST1_1_NEXT_GRTH1 (0x0B << 0)
#define KXCNL_ST1_1_NEXT_LRTH1 (0x0C << 0)
#define KXCNL_ST1_1_NEXT_GRTH2 (0x0D << 0)
#define KXCNL_ST1_1_NEXT_LRTH2 (0x0E << 0)
#define KXCNL_ST1_1_NEXT_NZERO (0x0F << 0)
#define KXCNL_SA1_P_X (0x01 << 7)
#define KXCNL_SA1_N_X (0x01 << 6)
#define KXCNL_SA1_P_Y (0x01 << 5)
#define KXCNL_SA1_N_Y (0x01 << 4)
#define KXCNL_SA1_P_Z (0x01 << 3)
#define KXCNL_SA1_N_Z (0x01 << 2)
#define KXCNL_SA1_P_V (0x01 << 1)
#define KXCNL_SA1_N_V (0x01 << 0)
#define KXCNL_MA1_P_X (0x01 << 7)
#define KXCNL_MA1_N_X (0x01 << 6)
#define KXCNL_MA1_P_Y (0x01 << 5)
#define KXCNL_MA1_N_Y (0x01 << 4)
#define KXCNL_MA1_P_Z (0x01 << 3)
#define KXCNL_MA1_N_Z (0x01 << 2)
#define KXCNL_MA1_P_V (0x01 << 1)
#define KXCNL_MA1_N_V (0x01 << 0)
#define KXCNL_SETT1_P_DET (0x01 << 7)
#define KXCNL_SETT1_THR3_SA (0x01 << 6)
#define KXCNL_SETT1_ABS_UNSIGNED (0x00 << 5)
#define KXCNL_SETT1_ABS_SIGNED (0x01 << 5)
#define KXCNL_SETT1_THR3_MA (0x01 << 2)
#define KXCNL_SETT1_R_TAM (0x01 << 1)
#define KXCNL_SETT1_SITR (0x01 << 0)
#define KXCNL_OUTS1_P_X (0x01 << 7)
#define KXCNL_OUTS1_N_X (0x01 << 6)
#define KXCNL_OUTS1_P_Y (0x01 << 5)
#define KXCNL_OUTS1_N_Y (0x01 << 4)
#define KXCNL_OUTS1_P_Z (0x01 << 3)
#define KXCNL_OUTS1_N_Z (0x01 << 2)
#define KXCNL_OUTS1_P_V (0x01 << 1)
#define KXCNL_OUTS1_N_V (0x01 << 0)
#define KXCNL_SA2_P_X (0x01 << 7)
#define KXCNL_SA2_N_X (0x01 << 6)
#define KXCNL_SA2_P_Y (0x01 << 5)
#define KXCNL_SA2_N_Y (0x01 << 4)
#define KXCNL_SA2_P_Z (0x01 << 3)
#define KXCNL_SA2_N_Z (0x01 << 2)
#define KXCNL_SA2_P_V (0x01 << 1)
#define KXCNL_SA2_N_V (0x01 << 0)
#define KXCNL_MA2_P_X (0x01 << 7)
#define KXCNL_MA2_N_X (0x01 << 6)
#define KXCNL_MA2_P_Y (0x01 << 5)
#define KXCNL_MA2_N_Y (0x01 << 4)
#define KXCNL_MA2_P_Z (0x01 << 3)
#define KXCNL_MA2_N_Z (0x01 << 2)
#define KXCNL_MA2_P_V (0x01 << 1)
#define KXCNL_MA2_N_V (0x01 << 0)
#define KXCNL_SETT2_P_DET (0x01 << 7)
#define KXCNL_SETT2_THR3_SA (0x01 << 6)
#define KXCNL_SETT2_ABS_UNSIGNED (0x00 << 5)
#define KXCNL_SETT2_ABS_SIGNED (0x01 << 5)
#define KXCNL_SETT2_RADI (0x01 << 4)
#define KXCNL_SETT2_D_CS (0x01 << 3)
#define KXCNL_SETT2_THR3_MA (0x01 << 2)
#define KXCNL_SETT2_R_TAM (0x01 << 1)
#define KXCNL_SETT2_SITR (0x01 << 0)
#define KXCNL_OUTS2_P_X (0x01 << 7)
#define KXCNL_OUTS2_N_X (0x01 << 6)
#define KXCNL_OUTS2_P_Y (0x01 << 5)
#define KXCNL_OUTS2_N_Y (0x01 << 4)
#define KXCNL_OUTS2_P_Z (0x01 << 3)
#define KXCNL_OUTS2_N_Z (0x01 << 2)
#define KXCNL_OUTS2_P_V (0x01 << 1)
#define KXCNL_OUTS2_N_V (0x01 << 0)
 /*registers bit masks */
#define KXCNL_WIA_WIA_MASK 0xFF
// sets the g-range for the accelerometer outputs
#define KXCNL_CNTL1_SC_MASK 0x60
// sets the output data rate for the accelerometer outputs
#define KXCNL_CNTL1_ODR_MASK 0x1C
#define KXCNL_CNTL2_HYST1_MASK 0xE0
#define KXCNL_CNTL3_HYST2_MASK 0xE0

#define KXCNL_ST1_1_RESET_MASK 0xF0
#define KXCNL_ST1_1_NEXT_MASK 0x0F
#define KXCNL_SETT1_ABS_MASK 0x20
#define KXCNL_PPRP1_RESET_POINT_MASK 0xF0
#define KXCNL_PPRP1_PROGRAM_COUNTER_MASK 0x0F
#define KXCNL_SETT2_ABS_MASK 0x20
#define KXCNL_PPRP2_RESET_POINT_MASK 0xF0
#define KXCNL_PPRP2_PROGRAM_COUNTER_MASK 0x0F
#endif

