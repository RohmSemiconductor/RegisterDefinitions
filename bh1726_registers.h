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

#ifndef __BH1726_REGISTERS_H__
#define __BH1726_REGISTERS_H__
/* registers */
#define BH1726_REGISTER_DUMP_START 0x80
#define BH1726_CONTROL 0x80
#define BH1726_TIMING 0x81
#define BH1726_INTERRUPT 0x82
#define BH1726_THLLOW 0x83
#define BH1726_THLHIGH 0x84
#define BH1726_THHLOW 0x85
#define BH1726_THHHIGH 0x86
#define BH1726_GAIN 0x87
#define BH1726_OPART_ID 0x92
#define BH1726_DATA0LOW 0x94
#define BH1726_DATA0HIGH 0x95
#define BH1726_DATA1LOW 0x96
#define BH1726_DATA1HIGH 0x97
#define BH1726_WAIT 0x98
// Reset interrupt
#define BH1726_INT_RESET 0xE1
// Software reset
#define BH1726_RESET 0xE4
#define BH1726_REGISTER_DUMP_END 0x98
/* registers bits */
#define BH1726_CONTROL_ADC_INTR_INACTIVE (0x00 << 5)
#define BH1726_CONTROL_ADC_INTR_ACTIVE (0x01 << 5)
#define BH1726_CONTROL_ADC_VALID (0x01 << 4)
#define BH1726_CONTROL_ADC_EN_DISABLE (0x00 << 1)
#define BH1726_CONTROL_ADC_EN_ENABLE (0x01 << 1)
#define BH1726_CONTROL_POWER_DISABLE (0x00 << 0)
#define BH1726_CONTROL_POWER_ENABLE (0x01 << 0)
// reset by writing 0
#define BH1726_INTERRUPT_RES7 (0x01 << 7)
#define BH1726_INTERRUPT_INT_LATCH_YES (0x00 << 5)
#define BH1726_INTERRUPT_INT_LATCH_NO (0x01 << 5)
#define BH1726_INTERRUPT_INT_EN_INVALID (0x00 << 4)
#define BH1726_INTERRUPT_INT_EN_VALID (0x01 << 4)
#define BH1726_INTERRUPT_PERSIST_TOGGLE_AFTER_MEASUREMENT (0x00 << 0)
#define BH1726_INTERRUPT_PERSIST_UPDATE_AFTER_MEASUREMENT (0x01 << 0)
#define BH1726_INTERRUPT_PERSIST_UPDATE_AFTER_2_SAME (0x02 << 0)
#define BH1726_INTERRUPT_PERSIST_UPDATE_AFTER_3_SAME (0x03 << 0)
#define BH1726_GAIN_GAIN0_X1 (0x00 << 2)
#define BH1726_GAIN_GAIN0_X2 (0x01 << 2)
#define BH1726_GAIN_GAIN0_X64 (0x02 << 2)
#define BH1726_GAIN_GAIN0_X128 (0x03 << 2)
#define BH1726_GAIN_GAIN1_X1 (0x00 << 0)
#define BH1726_GAIN_GAIN1_X2 (0x01 << 0)
#define BH1726_GAIN_GAIN1_X64 (0x02 << 0)
#define BH1726_GAIN_GAIN1_X128 (0x03 << 0)
// WHO_AM_I -value
#define BH1726_OPART_ID_WIA_ID (0x72 << 0)
#define BH1726_WAIT_WAIT_NO (0x00 << 0)
// after each measurement (low current consumption mode)
#define BH1726_WAIT_WAIT_300MS (0x01 << 0)
 /*registers bit masks */
#define BH1726_CONTROL_ADC_INTR_MASK 0x20
#define BH1726_CONTROL_ADC_EN_MASK 0x02
#define BH1726_CONTROL_POWER_MASK 0x01

#define BH1726_INTERRUPT_INT_LATCH_MASK 0x20
#define BH1726_INTERRUPT_INT_EN_MASK 0x10
#define BH1726_INTERRUPT_PERSIST_MASK 0x0F
#define BH1726_GAIN_GAIN0_MASK 0x0C
#define BH1726_GAIN_GAIN1_MASK 0x03
#define BH1726_OPART_ID_WIA_MASK 0xFF

#define BH1726_WAIT_WAIT_MASK 0x01
#endif

