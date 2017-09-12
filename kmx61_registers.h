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

#ifndef __KMX61_REGISTERS_H__
#define __KMX61_REGISTERS_H__
/* registers */
#define KMX61_WHO_AM_I 0x00
#define KMX61_INS1 0x01
#define KMX61_INS2 0x02
#define KMX61_STATUS_REG 0x03
#define KMX61_ACCEL_XOUT_L 0x0A
#define KMX61_ACCEL_XOUT_H 0x0B
#define KMX61_ACCEL_YOUT_L 0x0C
#define KMX61_ACCEL_YOUT_H 0x0D
#define KMX61_ACCEL_ZOUT_L 0x0E
#define KMX61_ACCEL_ZOUT_H 0x0F
#define KMX61_TEMP_OUT_L 0x10
#define KMX61_TEMP_OUT_H 0x11
#define KMX61_MAG_XOUT_L 0x12
#define KMX61_MAG_XOUT_H 0x13
#define KMX61_MAG_YOUT_L 0x14
#define KMX61_MAG_YOUT_H 0x15
#define KMX61_MAG_ZOUT_L 0x16
#define KMX61_MAG_ZOUT_H 0x17
#define KMX61_XOUT_HPF_L 0x18
#define KMX61_XOUT_HPF_H 0x19
#define KMX61_YOUT_HPF_L 0x1A
#define KMX61_YOUT_HPF_H 0x1B
#define KMX61_ZOUT_HPF_L 0x1C
#define KMX61_ZOUT_HPF_H 0x1D
#define KMX61_SN_1 0x24
#define KMX61_SN_2 0x25
#define KMX61_SN_3 0x26
#define KMX61_SN_4 0x27
#define KMX61_INL 0x28
#define KMX61_STBY_REG 0x29
#define KMX61_CNTL1 0x2A
#define KMX61_CNTL2 0x2B
#define KMX61_ODCNTL 0x2C
#define KMX61_INC1 0x2D
#define KMX61_INC2 0x2E
#define KMX61_INC3 0x2F
#define KMX61_COTR 0x3C
#define KMX61_WUFTH 0x3D
#define KMX61_WUFC 0x3E
#define KMX61_BTH 0x3F
#define KMX61_BTSC 0x40
#define KMX61_TEMP_EN_CNTL 0x4C
#define KMX61_SELF_TEST 0x60
#define KMX61_BUF_THRESH_H 0x76
#define KMX61_BUF_THRESH_L 0x77
#define KMX61_BUF_CTRL1 0x78
#define KMX61_BUF_CTRL2 0x79
#define KMX61_BUF_CLEAR 0x7A
#define KMX61_BUF_STATUS_REG 0x7B
#define KMX61_BUF_STATUS_H 0x7C
#define KMX61_BUF_STATUS_L 0x7D
#define KMX61_BUF_READ 0x7E
/* registers bits */
// Buffer is not full
#define KMX61_INS1_BFI_BUFF_NOT_FULL (0x00 << 6)
// Buffer is full
#define KMX61_INS1_BFI_BUFF_FULL (0x01 << 6)
// Buffer watermark not reached
#define KMX61_INS1_WMI_MARK_NOT_REACHED (0x00 << 5)
// Buffer watermark reached
#define KMX61_INS1_WMI_MARK_REACHED (0x01 << 5)
#define KMX61_INS1_DRDY_ACCEL (0x01 << 4)
#define KMX61_INS1_DRDY_MAG (0x01 << 3)
#define KMX61_INS1_WUFS (0x01 << 1)
#define KMX61_INS2_XNWU (0x01 << 5)
#define KMX61_INS2_XPWU (0x01 << 4)
#define KMX61_INS2_YNWU (0x01 << 3)
#define KMX61_INS2_YPWU (0x01 << 2)
#define KMX61_INS2_ZNWU (0x01 << 1)
#define KMX61_INS2_ZPWU (0x01 << 0)
#define KMX61_STATUS_REG_INT (0x01 << 4)
#define KMX61_STBY_REG_ACT_STBY_OPERATING_MODE (0x00 << 7)
#define KMX61_STBY_REG_ACT_STBY_STAND_BY_MODE (0x01 << 7)
#define KMX61_STBY_REG_MAG_STBY_OPERATING_MODE (0x00 << 1)
#define KMX61_STBY_REG_MAG_STBY_STAND_BY_MODE (0x01 << 1)
#define KMX61_STBY_REG_ACCEL_STBY_OPERATING_MODE (0x00 << 0)
#define KMX61_STBY_REG_ACCEL_STBY_STAND_BY_MODE (0x01 << 0)
#define KMX61_CNTL1_BTSE (0x01 << 7)
#define KMX61_CNTL1_WUFE (0x01 << 6)
#define KMX61_CNTL1_DRDYE (0x01 << 5)
// 2g 12 bit
#define KMX61_CNTL1_GSEL_2G (0x00 << 0)
// 4g 12bit
#define KMX61_CNTL1_GSEL_4G (0x01 << 0)
// 8g 12bit
#define KMX61_CNTL1_GSEL_8G (0x02 << 0)
// 8g 14bit
#define KMX61_CNTL1_GSEL_8G14B (0x03 << 0)
// Software Reset function
#define KMX61_CNTL2_SRST (0x01 << 7)
// ST polarity control
#define KMX61_CNTL2_STPOL (0x01 << 6)
// enables the command test function
#define KMX61_CNTL2_COTC (0x01 << 4)
#define KMX61_CNTL2_OWUF_0P781 (0x00 << 0)
#define KMX61_CNTL2_OWUF_1P563 (0x01 << 0)
#define KMX61_CNTL2_OWUF_3P125 (0x02 << 0)
#define KMX61_CNTL2_OWUF_6P25 (0x03 << 0)
#define KMX61_CNTL2_OWUF_12P5 (0x04 << 0)
#define KMX61_CNTL2_OWUF_25 (0x05 << 0)
#define KMX61_CNTL2_OWUF_50 (0x06 << 0)
#define KMX61_CNTL2_OWUF_100 (0x07 << 0)
// 12.5Hz
#define KMX61_ODCNTL_OSM_12P5 (0x00 << 4)
// 25Hz
#define KMX61_ODCNTL_OSM_25 (0x01 << 4)
// 50Hz
#define KMX61_ODCNTL_OSM_50 (0x02 << 4)
// 100Hz
#define KMX61_ODCNTL_OSM_100 (0x03 << 4)
// 200Hz
#define KMX61_ODCNTL_OSM_200 (0x04 << 4)
// 400Hz
#define KMX61_ODCNTL_OSM_400 (0x05 << 4)
// 800Hz
#define KMX61_ODCNTL_OSM_800 (0x06 << 4)
// 1600Hz
#define KMX61_ODCNTL_OSM_1600 (0x07 << 4)
// 0.781Hz
#define KMX61_ODCNTL_OSM_0P781 (0x08 << 4)
// 1.563Hz
#define KMX61_ODCNTL_OSM_1P563 (0x09 << 4)
// 3.125Hz
#define KMX61_ODCNTL_OSM_3P125 (0x0A << 4)
// 6.25Hz
#define KMX61_ODCNTL_OSM_6P25 (0x0B << 4)
// 12.5Hz
#define KMX61_ODCNTL_OSA_12P5 (0x00 << 0)
// 25Hz
#define KMX61_ODCNTL_OSA_25 (0x01 << 0)
// 50Hz
#define KMX61_ODCNTL_OSA_50 (0x02 << 0)
// 100Hz
#define KMX61_ODCNTL_OSA_100 (0x03 << 0)
// 200Hz
#define KMX61_ODCNTL_OSA_200 (0x04 << 0)
// 400Hz
#define KMX61_ODCNTL_OSA_400 (0x05 << 0)
// 800Hz
#define KMX61_ODCNTL_OSA_800 (0x06 << 0)
// 1600Hz
#define KMX61_ODCNTL_OSA_1600 (0x07 << 0)
// 0.781Hz
#define KMX61_ODCNTL_OSA_0P781 (0x08 << 0)
// 1.563Hz
#define KMX61_ODCNTL_OSA_1P563 (0x09 << 0)
// 3.125Hz
#define KMX61_ODCNTL_OSA_3P125 (0x0A << 0)
// 6.25Hz
#define KMX61_ODCNTL_OSA_6P25 (0x0B << 0)
#define KMX61_INC1_BFI1 (0x01 << 7)
#define KMX61_INC1_WMI1 (0x01 << 6)
#define KMX61_INC1_IEN1 (0x01 << 5)
#define KMX61_INC1_IEA1 (0x01 << 4)
#define KMX61_INC1_IEL1 (0x01 << 3)
#define KMX61_INC1_DRDY_A1 (0x01 << 2)
#define KMX61_INC1_DRDY_M1 (0x01 << 1)
#define KMX61_INC1_WUFS_BTS1 (0x01 << 0)
#define KMX61_INC2_BFI2 (0x01 << 7)
#define KMX61_INC2_WMI2 (0x01 << 6)
#define KMX61_INC2_IEN2 (0x01 << 5)
#define KMX61_INC2_IEA2 (0x01 << 4)
#define KMX61_INC2_IEL2 (0x01 << 3)
#define KMX61_INC2_DRDY_A2 (0x01 << 2)
#define KMX61_INC2_DRDY_M2 (0x01 << 1)
#define KMX61_INC2_WUFS_BTS2 (0x01 << 0)
#define KMX61_INC3_NXWUE (0x01 << 5)
#define KMX61_INC3_PXWUE (0x01 << 4)
#define KMX61_INC3_NYWUE (0x01 << 3)
#define KMX61_INC3_PYWUE (0x01 << 2)
#define KMX61_INC3_NZWUE (0x01 << 1)
#define KMX61_INC3_PZWUE (0x01 << 0)
#define KMX61_BUF_CTRL1_BUFE (0x01 << 7)
#define KMX61_BUF_CTRL1_BUF_FIE (0x01 << 5)
#define KMX61_BUF_CTRL1_BUF_M_FIFO (0x00 << 0)
#define KMX61_BUF_CTRL1_BUF_M_STREAM (0x01 << 0)
#define KMX61_BUF_CTRL1_BUF_M_TRIGGER (0x02 << 0)
#define KMX61_BUF_CTRL1_BUF_M_FILO (0x03 << 0)
 /*registers bit masks */
#define KMX61_INS1_BFI_MASK 0x40

#define KMX61_INS1_WMI_MASK 0x20
#define KMX61_STBY_REG_ACT_STBY_MASK 0x80
#define KMX61_STBY_REG_MAG_STBY_MASK 0x02
#define KMX61_STBY_REG_ACCEL_STBY_MASK 0x01
#define KMX61_CNTL1_GSEL_MASK 0x03
// Output Data Rate at which the wake up (motion detection) performs its function
#define KMX61_CNTL2_OWUF_MASK 0x07
#define KMX61_ODCNTL_OSM_MASK 0xF0

#define KMX61_ODCNTL_OSA_MASK 0x0F
#define KMX61_BUF_CTRL1_BUF_M_MASK 0x03
#endif

