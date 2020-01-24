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

#ifndef __KMX62_REGISTERS_H__
#define __KMX62_REGISTERS_H__
/* registers */
// This register can be used for supplier recognition, as it can be factory written to a known byte value.
#define KMX62_WHO_AM_I 0x00
// This Register tells which function caused an interrupt.
#define KMX62_INS1 0x01
// This register reports axis and direction of the accelerometer motion that triggered the interrupt.
#define KMX62_INS2 0x02
// The Interrupt Source Register 3 reports the axis and direction of the magnetometer motion that triggered the interrupt.
#define KMX62_INS3 0x03
#define KMX62_INL 0x05
// X-axis accelerometer output least significant byte.
#define KMX62_ACCEL_XOUT_L 0x0A
// X-axis accelerometer output most significant byte.
#define KMX62_ACCEL_XOUT_H 0x0B
// Y-axis accelerometer output least significant byte.
#define KMX62_ACCEL_YOUT_L 0x0C
// Y-axis accelerometer output most significant byte.
#define KMX62_ACCEL_YOUT_H 0x0D
// Z-axis accelerometer output least significant byte.
#define KMX62_ACCEL_ZOUT_L 0x0E
// Z-axis accelerometer output most significant byte.
#define KMX62_ACCEL_ZOUT_H 0x0F
// X-axis magnetometer output least significant byte.
#define KMX62_MAG_XOUT_L 0x10
// X-axis magnetometer output most significant byte.
#define KMX62_MAG_XOUT_H 0x11
// Y-axis magnetometer output least significant byte.
#define KMX62_MAG_YOUT_L 0x12
// Y-axis magnetometer output most significant byte.
#define KMX62_MAG_YOUT_H 0x13
// Z-axis magnetometer output least significant byte.
#define KMX62_MAG_ZOUT_L 0x14
// Z-axis magnetometer output most significant byte.
#define KMX62_MAG_ZOUT_H 0x15
// Temperature sensor output least significant byte.
#define KMX62_TEMP_OUT_L 0x16
// Temperature sensor output most significant byte.
#define KMX62_TEMP_OUT_H 0x17
// This register controls routing of an interrupt reporting to physical interrupt pin GPIO1.
#define KMX62_INC1 0x2A
// This register controls routing of an interrupt reporting to physical interrupt pin GPIO2.
#define KMX62_INC2 0x2B
// This register controls the GPIO pin configuration.
#define KMX62_INC3 0x2C
// This register controls which accelerometer axis and direction of detected motion can cause an interrupt.
#define KMX62_INC4 0x2D
// This register controls which magnetometer axis and direction of detected motion can cause an interrupt.
#define KMX62_INC5 0x2E
#define KMX62_AMI_CNTL1 0x2F
#define KMX62_AMI_CNTL2 0x30
// This register has control settings for the accelerometer motion interrupt function.
#define KMX62_AMI_CNTL3 0x31
#define KMX62_MMI_CNTL1 0x32
#define KMX62_MMI_CNTL2 0x33
// This register has control settings for the magnetometer motion interrupt function.
#define KMX62_MMI_CNTL3 0x34
#define KMX62_FFI_CNTL1 0x35
#define KMX62_FFI_CNTL2 0x36
// This register has control settings for the free fall interrupt function.
#define KMX62_FFI_CNTL3 0x37
// Output data control register
#define KMX62_ODCNTL 0x38
// Control register 1 Control register that controls the main feature set.
#define KMX62_CNTL1 0x39
// This register is used to enable and disable the sensors as well as to set their operation ranges.
#define KMX62_CNTL2 0x3A
// The Command Test Response (COTR) register is used to verify proper integrated circuit functionality
#define KMX62_COTR 0x3C
// These registers control the buffer sample buffer operation.
#define KMX62_BUF_CTRL_1 0x77
// These registers control the buffer sample buffer operation.
#define KMX62_BUF_CTRL_2 0x78
// These registers control the buffer sample buffer operation.
#define KMX62_BUF_CTRL_3 0x79
#define KMX62_BUF_CLEAR 0x7A
// This register reports the status of the sample buffer.
#define KMX62_BUF_STATUS_1 0x7B
// This register reports the status of the sample buffer.
#define KMX62_BUF_STATUS_2 0x7C
// This register reports the status of the sample buffer.
#define KMX62_BUF_STATUS_3 0x7D
#define KMX62_BUF_READ 0x7E
/* registers bits */
// WHO_AM_I -value for KMX62
#define KMX62_WHO_AM_I_WIA_ID (0x14 << 0)
// no interrupt event
#define KMX62_INS1_INT_NO_INT (0x00 << 7)
// interrupt event has occurred
#define KMX62_INS1_INT_INT (0x01 << 7)
// Buffer is not full
#define KMX62_INS1_BFI_BUFF_NOT_FULL (0x00 << 6)
// Buffer is full
#define KMX62_INS1_BFI_BUFF_FULL (0x01 << 6)
// Buffer watermark not reached
#define KMX62_INS1_WMI_MARK_NOT_REACHED (0x00 << 5)
// Buffer watermark reached
#define KMX62_INS1_WMI_MARK_REACHED (0x01 << 5)
// New acceleration data not available
#define KMX62_INS1_DRDY_A_NOT_AVAILABLE (0x00 << 4)
// New acceleration data available
#define KMX62_INS1_DRDY_A_AVAILABLE (0x01 << 4)
// New magnetomter data not available
#define KMX62_INS1_DRDY_M_NOT_AVAILABLE (0x00 << 3)
// New magnetomter data available
#define KMX62_INS1_DRDY_M_AVAILABLE (0x01 << 3)
// No free fall
#define KMX62_INS1_FFI_NO_FFI (0x00 << 2)
// Free fall has activated the interrupt
#define KMX62_INS1_FFI_FFI (0x01 << 2)
// No motion
#define KMX62_INS1_AMI_NO_MOTION (0x00 << 1)
// Motion has activated the interrupt
#define KMX62_INS1_AMI_MOTION (0x01 << 1)
// No motion
#define KMX62_INS1_MMI_NO_MOTION (0x00 << 0)
// Motion has activated the interrupt
#define KMX62_INS1_MMI_MOTION (0x01 << 0)
// x negative (x-).
#define KMX62_INS2_AXNI (0x01 << 5)
// x positive (x+)
#define KMX62_INS2_AXPI (0x01 << 4)
// y negative (y-)
#define KMX62_INS2_AYNI (0x01 << 3)
// y positive (y+)
#define KMX62_INS2_AYPI (0x01 << 2)
// z negative (z-)
#define KMX62_INS2_AZNI (0x01 << 1)
// z positive (z+)
#define KMX62_INS2_AZPI (0x01 << 0)
// x negative (x-)
#define KMX62_INS3_MXNI (0x01 << 5)
// x positive (x+)
#define KMX62_INS3_MXPI (0x01 << 4)
// y negative (y-)
#define KMX62_INS3_MYNI (0x01 << 3)
// y positive (y+)
#define KMX62_INS3_MYPI (0x01 << 2)
// z negative (z-)
#define KMX62_INS3_MZNI (0x01 << 1)
// z positive (z+)
#define KMX62_INS3_MZPI (0x01 << 0)
// Buffer full interrupt reported on GPIO1
#define KMX62_INC1_BFI1 (0x01 << 6)
// Watermark interrupt reported on GPIO1
#define KMX62_INC1_WMI1 (0x01 << 5)
// Accelerometer Data ready reported on GPIO1
#define KMX62_INC1_DRDY_A1 (0x01 << 4)
// Magnetometer Data ready reported on GPIO1
#define KMX62_INC1_DRDY_M1 (0x01 << 3)
// Accelerometer Freefall interrupt reported on GPIO1
#define KMX62_INC1_FFI1 (0x01 << 2)
// Accelerometer motion interrupt reported on GPIO1
#define KMX62_INC1_AMI1 (0x01 << 1)
// Magnetometer motion interrupt reported on GPIO1
#define KMX62_INC1_MMI1 (0x01 << 0)
// Buffer full interrupt reported on GPIO2
#define KMX62_INC2_BFI2 (0x01 << 6)
// Watermark interrupt reported on GPIO2
#define KMX62_INC2_WMI2 (0x01 << 5)
// Accelerometer Data ready reported on GPIO2
#define KMX62_INC2_DRDY_A2 (0x01 << 4)
// Magnetometer Data ready reported on GPIO2
#define KMX62_INC2_DRDY_M2 (0x01 << 3)
// Accelerometer Freefall interrupt reported on GPIO2
#define KMX62_INC2_FFI2 (0x01 << 2)
// Accelerometer motion interrupt reported on GPIO2
#define KMX62_INC2_AMI2 (0x01 << 1)
// Magnetometer motion interrupt reported on GPIO2
#define KMX62_INC2_MMI2 (0x01 << 0)
// push-pull
#define KMX62_INC3_IED2_PUSHPULL (0x00 << 7)
// open-drain
#define KMX62_INC3_IED2_OPENDRAIN (0x01 << 7)
// active low
#define KMX62_INC3_IEA2_LOW (0x00 << 6)
// active high
#define KMX62_INC3_IEA2_HIGH (0x01 << 6)
// latched/unlatched. Unlatched feature is available for FFI,MME and AMI. AND DRDY
#define KMX62_INC3_IEL2_LATCHED (0x00 << 4)
// pulsed.  In pulse mode the pulse width is 50us for normal mode and 10us for debug mode (high ODR rates).
#define KMX62_INC3_IEL2_PULSED (0x01 << 4)
// trigger input for FIFO
#define KMX62_INC3_IEL2_FIFO_TRIG (0x02 << 4)
// trigger input for FIFO
#define KMX62_INC3_IEL2_FIFO_TRIG_2 (0x03 << 4)
// push-pull
#define KMX62_INC3_IED1_PUSHPULL (0x00 << 3)
// open-drain
#define KMX62_INC3_IED1_OPENDRAIN (0x01 << 3)
// active low
#define KMX62_INC3_IEA1_LOW (0x00 << 2)
// active high
#define KMX62_INC3_IEA1_HIGH (0x01 << 2)
// latched/unlatched. Unlatched feature is available for FFI,MME and AMI.
#define KMX62_INC3_IEL1_LATCHED (0x00 << 0)
// pulsed.  In pulse mode the pulse width is 50us for normal mode and 10us for debug mode (high ODR rates).
#define KMX62_INC3_IEL1_PULSED (0x01 << 0)
// trigger input for FIFO
#define KMX62_INC3_IEL1_FIFO_TRIG (0x02 << 0)
// trigger input for FIFO
#define KMX62_INC3_IEL1_FIFO_TRIG_2 (0x03 << 0)
// x negative (x-) enable/disable
#define KMX62_INC4_AXNIE (0x01 << 5)
// x positive (x+) enable/disable
#define KMX62_INC4_AXPIE (0x01 << 4)
// y negative (y-) enable/disable
#define KMX62_INC4_AYNIE (0x01 << 3)
// y positive (y+) enable/disable
#define KMX62_INC4_AYPIE (0x01 << 2)
// z negative (z-) enable/disable
#define KMX62_INC4_AZNIE (0x01 << 1)
// z positive (z+) enable/disable
#define KMX62_INC4_AZPIE (0x01 << 0)
// x negative (x-) enable/disable
#define KMX62_INC5_MXNIE (0x01 << 5)
// x positive (x+) enable/disable
#define KMX62_INC5_MXPIE (0x01 << 4)
// y negative (y-) enable/disable
#define KMX62_INC5_MYNIE (0x01 << 3)
// y positive (y+) enable/disable
#define KMX62_INC5_MYPIE (0x01 << 2)
// z negative (z-) enable/disable
#define KMX62_INC5_MZNIE (0x01 << 1)
// z positive (z+) enable/disable
#define KMX62_INC5_MZPIE (0x01 << 0)
// Accelerometer motion interrupt engine disabled
#define KMX62_AMI_CNTL3_AMI_EN_DISABLED (0x00 << 7)
// Accelerometer motion interrupt engine enabled
#define KMX62_AMI_CNTL3_AMI_EN_ENABLED (0x01 << 7)
// Accelerometer Motion Interrupt latch/un-latch control for interrupt GPIO1/2
#define KMX62_AMI_CNTL3_AMIUL (0x01 << 6)
// 0.781Hz
#define KMX62_AMI_CNTL3_OAMI_0P781 (0x00 << 0)
// 1.563Hz
#define KMX62_AMI_CNTL3_OAMI_1P563 (0x01 << 0)
// 3.125Hz
#define KMX62_AMI_CNTL3_OAMI_3P125 (0x02 << 0)
// 6.25Hz
#define KMX62_AMI_CNTL3_OAMI_6P25 (0x03 << 0)
// 12.5Hz
#define KMX62_AMI_CNTL3_OAMI_12P5 (0x04 << 0)
// 25Hz
#define KMX62_AMI_CNTL3_OAMI_25 (0x05 << 0)
// 50Hz
#define KMX62_AMI_CNTL3_OAMI_50 (0x06 << 0)
// 100Hz
#define KMX62_AMI_CNTL3_OAMI_100 (0x07 << 0)
// Magnetometer motion interrupt engine disabled
#define KMX62_MMI_CNTL3_MMI_EN_DISABLED (0x00 << 7)
// Magnetometer motion interrupt engine enabled
#define KMX62_MMI_CNTL3_MMI_EN_ENABLED (0x01 << 7)
// Magnetometer Motion Interrupt latch/un-latch control for interrupt GPIO1/2
#define KMX62_MMI_CNTL3_MMIUL (0x01 << 6)
// 0.781Hz
#define KMX62_MMI_CNTL3_OMMI_0P781 (0x00 << 0)
// 1.563Hz
#define KMX62_MMI_CNTL3_OMMI_1P563 (0x01 << 0)
// 3.125Hz
#define KMX62_MMI_CNTL3_OMMI_3P125 (0x02 << 0)
// 6.25Hz
#define KMX62_MMI_CNTL3_OMMI_6P25 (0x03 << 0)
// 12.5Hz
#define KMX62_MMI_CNTL3_OMMI_12P5 (0x04 << 0)
// 25Hz
#define KMX62_MMI_CNTL3_OMMI_25 (0x05 << 0)
// 50Hz
#define KMX62_MMI_CNTL3_OMMI_50 (0x06 << 0)
// 100Hz
#define KMX62_MMI_CNTL3_OMMI_100 (0x07 << 0)
// Accelerometer free fall engine disabled
#define KMX62_FFI_CNTL3_FFI_EN_DISABLED (0x00 << 7)
// Accelerometer free fall engine enabled
#define KMX62_FFI_CNTL3_FFI_EN_ENABLED (0x01 << 7)
// Accelerometer Free Fall Interrupt latch/un-latch control for interrupt GPIO1/2
#define KMX62_FFI_CNTL3_FFIUL (0x01 << 6)
// Debounce methodology control
#define KMX62_FFI_CNTL3_DCRM (0x01 << 3)
// 12.5Hz
#define KMX62_FFI_CNTL3_OFFI_12P5 (0x00 << 0)
// 25Hz
#define KMX62_FFI_CNTL3_OFFI_25 (0x01 << 0)
// 50Hz
#define KMX62_FFI_CNTL3_OFFI_50 (0x02 << 0)
// 100Hz
#define KMX62_FFI_CNTL3_OFFI_100 (0x03 << 0)
// 200Hz
#define KMX62_FFI_CNTL3_OFFI_200 (0x04 << 0)
// 400Hz
#define KMX62_FFI_CNTL3_OFFI_400 (0x05 << 0)
// 800Hz
#define KMX62_FFI_CNTL3_OFFI_800 (0x06 << 0)
// 1600Hz
#define KMX62_FFI_CNTL3_OFFI_1600 (0x07 << 0)
// 12.5Hz
#define KMX62_ODCNTL_OSM_12P5 (0x00 << 4)
// 25Hz
#define KMX62_ODCNTL_OSM_25 (0x01 << 4)
// 50Hz
#define KMX62_ODCNTL_OSM_50 (0x02 << 4)
// 100Hz
#define KMX62_ODCNTL_OSM_100 (0x03 << 4)
// 200Hz
#define KMX62_ODCNTL_OSM_200 (0x04 << 4)
// 400Hz
#define KMX62_ODCNTL_OSM_400 (0x05 << 4)
// 800Hz
#define KMX62_ODCNTL_OSM_800 (0x06 << 4)
// 1600Hz
#define KMX62_ODCNTL_OSM_1600 (0x07 << 4)
// 0.781Hz
#define KMX62_ODCNTL_OSM_0P781 (0x08 << 4)
// 1.563Hz
#define KMX62_ODCNTL_OSM_1P563 (0x09 << 4)
// 3.125Hz
#define KMX62_ODCNTL_OSM_3P125 (0x0A << 4)
// 6.25Hz
#define KMX62_ODCNTL_OSM_6P25 (0x0B << 4)
// 12.8kHz
#define KMX62_ODCNTL_OSM_12800A (0x0C << 4)
// 12.8kHz
#define KMX62_ODCNTL_OSM_12800B (0x0D << 4)
// 12.8kHz
#define KMX62_ODCNTL_OSM_12800C (0x0E << 4)
// 12.8kHz
#define KMX62_ODCNTL_OSM_12800 (0x0F << 4)
// 12.5Hz
#define KMX62_ODCNTL_OSA_12P5 (0x00 << 0)
// 25Hz
#define KMX62_ODCNTL_OSA_25 (0x01 << 0)
// 50Hz
#define KMX62_ODCNTL_OSA_50 (0x02 << 0)
// 100Hz
#define KMX62_ODCNTL_OSA_100 (0x03 << 0)
// 200Hz
#define KMX62_ODCNTL_OSA_200 (0x04 << 0)
// 400Hz
#define KMX62_ODCNTL_OSA_400 (0x05 << 0)
// 800Hz
#define KMX62_ODCNTL_OSA_800 (0x06 << 0)
// 1600Hz
#define KMX62_ODCNTL_OSA_1600 (0x07 << 0)
// 0.781Hz
#define KMX62_ODCNTL_OSA_0P781 (0x08 << 0)
// 1.563Hz
#define KMX62_ODCNTL_OSA_1P563 (0x09 << 0)
// 3.125Hz
#define KMX62_ODCNTL_OSA_3P125 (0x0A << 0)
// 6.25Hz
#define KMX62_ODCNTL_OSA_6P25 (0x0B << 0)
// 25.6kHz, ST 0.8kHz
#define KMX62_ODCNTL_OSA_25600ST0P8 (0x0C << 0)
// 25.6kHz, ST 1.6kHz
#define KMX62_ODCNTL_OSA_25600ST1P6 (0x0D << 0)
// 25.6kHz, ST 3.2kHz
#define KMX62_ODCNTL_OSA_25600ST3P2 (0x0E << 0)
// 25.6kHz
#define KMX62_ODCNTL_OSA_25600 (0x0F << 0)
// The Software Reset bit initiates software reset, which performs the RAM reboot routine
#define KMX62_CNTL1_SRST (0x01 << 7)
// Self test disabled
#define KMX62_CNTL1_STEN_DISABLED (0x00 << 6)
// Self test enabled
#define KMX62_CNTL1_STEN_ENABLED (0x01 << 6)
// Accelerometer and Magnetometer ST polarity.
#define KMX62_CNTL1_STPOL (0x01 << 5)
// The Command Test Control bit is used to verify proper ASIC functionality.
#define KMX62_CNTL1_COTC (0x01 << 3)
// standby mode
#define KMX62_CNTL2_TEMP_EN_STANDBY_MODE (0x00 << 6)
// operating mode, magnetometer and temperature output registers are updated at the selected output data rate
#define KMX62_CNTL2_TEMP_EN_OPERATING_MODE (0x01 << 6)
// 2g
#define KMX62_CNTL2_GSEL_2G (0x00 << 4)
// 4g
#define KMX62_CNTL2_GSEL_4G (0x01 << 4)
// 8g
#define KMX62_CNTL2_GSEL_8G (0x02 << 4)
// 16g
#define KMX62_CNTL2_GSEL_16G (0x03 << 4)
// Accelerometer 4 over samples, magnetometer 2 over samples
#define KMX62_CNTL2_RES_A4M2 (0x00 << 2)
// Accelerometer 32 over samples, magnetometer 16 over samples
#define KMX62_CNTL2_RES_A32M16 (0x01 << 2)
// Accelerometer max over samples, magnetometer max over samples
#define KMX62_CNTL2_RES_MAX1 (0x02 << 2)
// Accelerometer max over samples, magnetometer max over samples
#define KMX62_CNTL2_RES_MAX2 (0x03 << 2)
// Standby mode
#define KMX62_CNTL2_MAG_EN_STANDBY_MODE (0x00 << 1)
// Operating mode. Magnetometer and temperature output registers are updated at the selected output data rate
#define KMX62_CNTL2_MAG_EN_OPERATING_MODE (0x01 << 1)
// Standby mode
#define KMX62_CNTL2_ACCEL_EN_STANDBY_MODE (0x00 << 0)
// operating mode. Accelerometer output registers are updated at the selected output data rate
#define KMX62_CNTL2_ACCEL_EN_OPERATING_MODE (0x01 << 0)
// Default value
#define KMX62_COTR_TEST_RESP_DEFAULT (0x55 << 0)
// Test value
#define KMX62_COTR_TEST_RESP_TEST (0xAA << 0)
// The buffer collects 384 bytes of data until full, collecting new data only when the buffer is not full.
#define KMX62_BUF_CTRL_2_BUF_M_FIFO (0x00 << 1)
// The buffer holds the last 384 bytes of data.  Once the buffer is full, the oldest data is discarded to make room for newer data.
#define KMX62_BUF_CTRL_2_BUF_M_STREAM (0x01 << 1)
// When a trigger event occurs (logic high input on TRIG pin), the buffer holds the last data set of SMP[6:0] samples before the trigger event and then continues to collect data until full.  New data is collected only when the buffer is not full.
#define KMX62_BUF_CTRL_2_BUF_M_TRIGGER (0x02 << 1)
// The buffer holds the last 384 bytes of data.  Once the buffer is full, the oldest data is discarded to make room for newer data.  Reading from the buffer in this mode will return the most recent data first.
#define KMX62_BUF_CTRL_2_BUF_M_FILO (0x03 << 1)
// 8th bit of smt_th data
#define KMX62_BUF_CTRL_2_SMT_TH8 (0x01 << 0)
// Buffer full interrrupt disabled
#define KMX62_BUF_CTRL_3_BFI_EN_DISABLED (0x00 << 7)
// Buffer full interrrupt disabled
#define KMX62_BUF_CTRL_3_BFI_EN_ENABLED (0x01 << 7)
// ax to buffer disabled
#define KMX62_BUF_CTRL_3_BUF_AX_DISABLED (0x00 << 6)
// ax to buffer enabled
#define KMX62_BUF_CTRL_3_BUF_AX_ENABLED (0x01 << 6)
// ay to buffer disabled
#define KMX62_BUF_CTRL_3_BUF_AY_DISABLED (0x00 << 5)
// ay to buffer enabled
#define KMX62_BUF_CTRL_3_BUF_AY_ENABLED (0x01 << 5)
// az to buffer disabled
#define KMX62_BUF_CTRL_3_BUF_AZ_DISABLED (0x00 << 4)
// az to buffer enabled
#define KMX62_BUF_CTRL_3_BUF_AZ_ENABLED (0x01 << 4)
// mx to buffer disabled
#define KMX62_BUF_CTRL_3_BUF_MX_DISABLED (0x00 << 3)
// mx to buffer enabled
#define KMX62_BUF_CTRL_3_BUF_MX_ENABLED (0x01 << 3)
// my to buffer disabled
#define KMX62_BUF_CTRL_3_BUF_MY_DISABLED (0x00 << 2)
// my to buffer enabled
#define KMX62_BUF_CTRL_3_BUF_MY_ENABLED (0x01 << 2)
// mz to buffer disabled
#define KMX62_BUF_CTRL_3_BUF_MZ_DISABLED (0x00 << 1)
// mz to buffer enabled
#define KMX62_BUF_CTRL_3_BUF_MZ_ENABLED (0x01 << 1)
// temp to buffer disabled
#define KMX62_BUF_CTRL_3_BUF_TEMP_DISABLED (0x00 << 0)
// temp to buffer enabled
#define KMX62_BUF_CTRL_3_BUF_TEMP_ENABLED (0x01 << 0)
// reports the status of the buffers trigger function if this mode has been selected.  When using trigger mode, a buffer read should only be performed after a trigger event.
#define KMX62_BUF_STATUS_2_BUF_TRIG (0x01 << 1)
// Sample level msb bit
#define KMX62_BUF_STATUS_2_SMP_LEV_H (0x01 << 0)
 /*registers bit masks */
#define KMX62_WHO_AM_I_WIA_MASK 0xFF
// reports the combined (OR) interrupt information of all enabled interrupt.
#define KMX62_INS1_INT_MASK 0x80
// indicates that the buffer is full.  This bit is cleared when the data is read until the buffer is not full.
#define KMX62_INS1_BFI_MASK 0x40
// indicates that user-defined buffer watermark has been reached.  This bit is cleared when the data is read until the sample level in the buffer is smaller than the watermark threshold.
#define KMX62_INS1_WMI_MASK 0x20
// indicates that new acceleration data is available.  This bit is cleared when the data is read or the interrupt release register (INL Register) is read.
#define KMX62_INS1_DRDY_A_MASK 0x10
// indicates that new magnetometer data is available.  This bit is cleared when the data is read or the interrupt release register (INL Register) is read.
#define KMX62_INS1_DRDY_M_MASK 0x08
// indicates free fall interrupt
#define KMX62_INS1_FFI_MASK 0x04
// Accelerometer motion interrupt
#define KMX62_INS1_AMI_MASK 0x02
// Magnetometer motion interrupt
#define KMX62_INS1_MMI_MASK 0x01
// Interrupt pin drive options for GPIO2
#define KMX62_INC3_IED2_MASK 0x80
// Interrupt active level control for interrupt GPIO2
#define KMX62_INC3_IEA2_MASK 0x40
// Interrupt latch control for interrupt GPIO2
#define KMX62_INC3_IEL2_MASK 0x30
// Interrupt pin drive options for GPIO1
#define KMX62_INC3_IED1_MASK 0x08
// Interrupt active level control for interrupt GPIO1
#define KMX62_INC3_IEA1_MASK 0x04
// Interrupt latch control for interrupt GPIO1
#define KMX62_INC3_IEL1_MASK 0x03
#define KMX62_AMI_CNTL1_AMITH_MASK 0xFF
#define KMX62_AMI_CNTL2_AMICT_MASK 0xFF
// Accelerometer motion interrupt engine enable
#define KMX62_AMI_CNTL3_AMI_EN_MASK 0x80
// Output Data Rate at which the accelerometer motion detection performs its function
#define KMX62_AMI_CNTL3_OAMI_MASK 0x07
#define KMX62_MMI_CNTL1_MMITH_MASK 0xFF
#define KMX62_MMI_CNTL2_MMICT_MASK 0xFF
// Magnetometer motion interrupt engine enable
#define KMX62_MMI_CNTL3_MMI_EN_MASK 0x80
// Output Data Rate at which the magnetometer motion detection performs its function
#define KMX62_MMI_CNTL3_OMMI_MASK 0x07
#define KMX62_FFI_CNTL1_FFITH_MASK 0xFF
#define KMX62_FFI_CNTL2_FFICT_MASK 0xFF
// Accelerometer free fall engine enable
#define KMX62_FFI_CNTL3_FFI_EN_MASK 0x80
// Output Data Rate at which the free fall detection performs its function
#define KMX62_FFI_CNTL3_OFFI_MASK 0x07
// Rate at which data samples from the magnetometer and temperature sensors
#define KMX62_ODCNTL_OSM_MASK 0xF0
// Rate at which data samples from the accelerometer will be updated in the output data register
#define KMX62_ODCNTL_OSA_MASK 0x0F
// ST enable. This bit enables the self-test mode that will produce a change in both theaccelerometer and magnetometer transducers and can be measured in the output registers.
#define KMX62_CNTL1_STEN_MASK 0x40
// Controls the operating mode of the KMX62s temperature sensors
#define KMX62_CNTL2_TEMP_EN_MASK 0x40
// selects the acceleration range of the accelerometer outputs.
#define KMX62_CNTL2_GSEL_MASK 0x30
// selects the resolution of both sensors.
#define KMX62_CNTL2_RES_MASK 0x0C
// controls the operating mode of the KMX62s magnetometer sensor.
#define KMX62_CNTL2_MAG_EN_MASK 0x02
// controls the operating mode of the KMX62s accelerometer
#define KMX62_CNTL2_ACCEL_EN_MASK 0x01
// test responces
#define KMX62_COTR_TEST_RESP_MASK 0xFF
// selects the operating mode of the sample buffer
#define KMX62_BUF_CTRL_2_BUF_M_MASK 0x06
// controls the buffer full interrupt
#define KMX62_BUF_CTRL_3_BFI_EN_MASK 0x80
// ax to be buffered
#define KMX62_BUF_CTRL_3_BUF_AX_MASK 0x40
// ay to be buffered
#define KMX62_BUF_CTRL_3_BUF_AY_MASK 0x20
// az to be buffered
#define KMX62_BUF_CTRL_3_BUF_AZ_MASK 0x10
// mx to be buffered
#define KMX62_BUF_CTRL_3_BUF_MX_MASK 0x08
// my to be buffered
#define KMX62_BUF_CTRL_3_BUF_MY_MASK 0x04
// mz to be buffered
#define KMX62_BUF_CTRL_3_BUF_MZ_MASK 0x02
// temperature to be buffered
#define KMX62_BUF_CTRL_3_BUF_TEMP_MASK 0x01
#define KMX62_BUF_STATUS_2_SMP_PAST_MASK 0xFC
#endif

