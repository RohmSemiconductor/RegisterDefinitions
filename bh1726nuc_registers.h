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

#ifndef __BH1726NUC_REGISTERS_H__
#define __BH1726NUC_REGISTERS_H__
/* registers */
#define BH1726NUC_REGISTER_DUMP_START 0x80
// Control register
#define BH1726NUC_CONTROL 0x80
#define BH1726NUC_TIMING 0x81
// Interrupt control register
#define BH1726NUC_INTERRUPT 0x82
// Interrupt threshold lower level
#define BH1726NUC_TH_LOW_LSB 0x83
// Interrupt threshold lower level
#define BH1726NUC_TH_LOW_MSB 0x84
// Interrupt threshold upper level
#define BH1726NUC_TH_HIGH_LSB 0x85
// Interrupt threshold upper level
#define BH1726NUC_TH_HIGH_MSB 0x86
// ADC gain control register
#define BH1726NUC_GAIN 0x87
// Part identification register
#define BH1726NUC_PART_ID 0x92
// DATA0 Measurement result
#define BH1726NUC_DATA0_LSB 0x94
// DATA0 Measurement result
#define BH1726NUC_DATA0_MSB 0x95
// DATA1 Measurement result
#define BH1726NUC_DATA1_LSB 0x96
// DATA1 Measurement result
#define BH1726NUC_DATA1_MSB 0x97
// Measurement interval control
#define BH1726NUC_WAIT 0x98
#define BH1726NUC_INT_RESET 0xE1
#define BH1726NUC_RESET 0xE4
#define BH1726NUC_REGISTER_DUMP_END 0x98
/* registers bits */
// Interrupt is inactive
#define BH1726NUC_CONTROL_ADC_INTR_INACTIVE (0x00 << 5)
// Interrupt is active
#define BH1726NUC_CONTROL_ADC_INTR_ACTIVE (0x01 << 5)
// Data register(DATA0, DATA1) status output (Read only register)
#define BH1726NUC_CONTROL_ADC_VALID (0x01 << 4)
// ADC measurement stop
#define BH1726NUC_CONTROL_ADC_EN_DISABLE (0x00 << 1)
// ADC measurement start
#define BH1726NUC_CONTROL_ADC_EN_ENABLE (0x01 << 1)
// ADC power down
#define BH1726NUC_CONTROL_POWER_DISABLE (0x00 << 0)
// ADC power on
#define BH1726NUC_CONTROL_POWER_ENABLE (0x01 << 0)
// LATCH mode
#define BH1726NUC_INTERRUPT_INT_LATCH_YES (0x00 << 5)
// UNLATCH mode
#define BH1726NUC_INTERRUPT_INT_LATCH_NO (0x01 << 5)
// Interrupt function is invalid
#define BH1726NUC_INTERRUPT_INT_EN_INVALID (0x00 << 4)
// Interrupt function is valid
#define BH1726NUC_INTERRUPT_INT_EN_VALID (0x01 << 4)
// Interrupt becomes active at each measurement end
#define BH1726NUC_INTERRUPT_PERSIST_TOGGLE_AFTER_MEASUREMENT (0x00 << 0)
// Interrupt status is updated at each measurement end
#define BH1726NUC_INTERRUPT_PERSIST_UPDATE_AFTER_MEASUREMENT (0x01 << 0)
// Interrupt status is updated if 2 consecutive threshold judgments are the same
#define BH1726NUC_INTERRUPT_PERSIST_UPDATE_AFTER_2_SAME (0x02 << 0)
// Interrupt status is updated if 3 consecutive threshold judgments are the same
#define BH1726NUC_INTERRUPT_PERSIST_UPDATE_AFTER_3_SAME (0x03 << 0)
// Interrupt status is updated if 4 consecutive threshold judgments are the same
#define BH1726NUC_INTERRUPT_PERSIST_UPDATE_AFTER_4_SAME (0x04 << 0)
// Interrupt status is updated if 5 consecutive threshold judgments are the same
#define BH1726NUC_INTERRUPT_PERSIST_UPDATE_AFTER_5_SAME (0x05 << 0)
// Interrupt status is updated if 6 consecutive threshold judgments are the same
#define BH1726NUC_INTERRUPT_PERSIST_UPDATE_AFTER_6_SAME (0x06 << 0)
// Interrupt status is updated if 7 consecutive threshold judgments are the same
#define BH1726NUC_INTERRUPT_PERSIST_UPDATE_AFTER_7_SAME (0x07 << 0)
// Interrupt status is updated if 8 consecutive threshold judgments are the same
#define BH1726NUC_INTERRUPT_PERSIST_UPDATE_AFTER_8_SAME (0x08 << 0)
// Interrupt status is updated if 9 consecutive threshold judgments are the same
#define BH1726NUC_INTERRUPT_PERSIST_UPDATE_AFTER_9_SAME (0x09 << 0)
// Interrupt status is updated if 10 consecutive threshold judgments are the same
#define BH1726NUC_INTERRUPT_PERSIST_UPDATE_AFTER_10_SAME (0x0A << 0)
// Interrupt status is updated if 11 consecutive threshold judgments are the same
#define BH1726NUC_INTERRUPT_PERSIST_UPDATE_AFTER_11_SAME (0x0B << 0)
// Interrupt status is updated if 12 consecutive threshold judgments are the same
#define BH1726NUC_INTERRUPT_PERSIST_UPDATE_AFTER_12_SAME (0x0C << 0)
// Interrupt status is updated if 13 consecutive threshold judgments are the same
#define BH1726NUC_INTERRUPT_PERSIST_UPDATE_AFTER_13_SAME (0x0D << 0)
// Interrupt status is updated if 14 consecutive threshold judgments are the same
#define BH1726NUC_INTERRUPT_PERSIST_UPDATE_AFTER_14_SAME (0x0E << 0)
// Interrupt status is updated if 15 consecutive threshold judgments are the same
#define BH1726NUC_INTERRUPT_PERSIST_UPDATE_AFTER_15_SAME (0x0F << 0)
// x1 gain mode
#define BH1726NUC_GAIN_DATA0_GAIN_X1 (0x00 << 2)
// x2 gain mode
#define BH1726NUC_GAIN_DATA0_GAIN_X2 (0x01 << 2)
// x64 gain mode
#define BH1726NUC_GAIN_DATA0_GAIN_X64 (0x02 << 2)
// x128 gain mode
#define BH1726NUC_GAIN_DATA0_GAIN_X128 (0x03 << 2)
// x1 gain mode
#define BH1726NUC_GAIN_DATA1_GAIN_X1 (0x00 << 0)
// x2 gain mode
#define BH1726NUC_GAIN_DATA1_GAIN_X2 (0x01 << 0)
// x64 gain mode
#define BH1726NUC_GAIN_DATA1_GAIN_X64 (0x02 << 0)
// x128 gain mode
#define BH1726NUC_GAIN_DATA1_GAIN_X128 (0x03 << 0)
// Part identification number
#define BH1726NUC_PART_ID_PART_ID_ID (0x72 << 0)
// No interval
#define BH1726NUC_WAIT_WAIT_EN_NO (0x00 << 0)
// Interval after each measurement (low current consumption mode)
#define BH1726NUC_WAIT_WAIT_EN_300MS (0x01 << 0)
 /*registers bit masks */
#define BH1726NUC_CONTROL_ADC_INTR_MASK 0x20
// ADC measurement enable
#define BH1726NUC_CONTROL_ADC_EN_MASK 0x02
// ADC power
#define BH1726NUC_CONTROL_POWER_MASK 0x01
// Latch mode control
#define BH1726NUC_INTERRUPT_INT_LATCH_MASK 0x20
// Interrupt enable
#define BH1726NUC_INTERRUPT_INT_EN_MASK 0x10
// Interrupt persistence function
#define BH1726NUC_INTERRUPT_PERSIST_MASK 0x0F
// Gain setting of ADC DATA0
#define BH1726NUC_GAIN_DATA0_GAIN_MASK 0x0C
// Gain setting of ADC DATA1
#define BH1726NUC_GAIN_DATA1_GAIN_MASK 0x03
// Part identification number
#define BH1726NUC_PART_ID_PART_ID_MASK 0xFF
// Interval enable
#define BH1726NUC_WAIT_WAIT_EN_MASK 0x01
#endif

