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

#ifndef __BH1730FVC_REGISTERS_H__
#define __BH1730FVC_REGISTERS_H__
/* registers */
#define BH1730FVC_REGISTER_DUMP_START 0x80
// Operation mode control
#define BH1730FVC_CONTROL 0x80
#define BH1730FVC_TIMING 0x81
// Interrupt function control
#define BH1730FVC_INTERRUPT 0x82
// Low byte of low interrupt threshold setting
#define BH1730FVC_THLLOW 0x83
// High byte of low interrupt threshold setting
#define BH1730FVC_THLHIGH 0x84
// Low byte of high interrupt threshold setting
#define BH1730FVC_THHLOW 0x85
// High byte of high interrupt threshold setting
#define BH1730FVC_THHHIGH 0x86
// Gain control
#define BH1730FVC_GAIN 0x87
// Part number and Revision ID
#define BH1730FVC_ID 0x92
// ADC Type0 low byte data register
#define BH1730FVC_DATA0LOW 0x94
// ADC Type0 high byte data register
#define BH1730FVC_DATA0HIGH 0x95
// ADC Type1 low byte data register
#define BH1730FVC_DATA1LOW 0x96
// ADC Type1 high byte data register
#define BH1730FVC_DATA1HIGH 0x97
// Reset interrupt
#define BH1730FVC_INT_RESET 0xE1
// Software reset
#define BH1730FVC_RESET 0xE4
#define BH1730FVC_REGISTER_DUMP_END 0x97
/* registers bits */
// Interrupt is inactive
#define BH1730FVC_CONTROL_ADC_INTR_INACTIVE (0x00 << 5)
// Interrupt is active
#define BH1730FVC_CONTROL_ADC_INTR_ACTIVE (0x01 << 5)
// ADC data updated flag
#define BH1730FVC_CONTROL_ADC_VALID (0x01 << 4)
// ADC measurement is continuous
#define BH1730FVC_CONTROL_ONE_TIME_CONTINOUS (0x00 << 3)
// ADC measurement is one time
#define BH1730FVC_CONTROL_ONE_TIME_ONETIME (0x01 << 3)
// ADC measurement Type0 and Type1
#define BH1730FVC_CONTROL_DATA_SEL_TYPE0_AND_1 (0x00 << 2)
// ADC measurement Type0 only
#define BH1730FVC_CONTROL_DATA_SEL_TYPE0 (0x01 << 2)
// ADC measurement stops
#define BH1730FVC_CONTROL_ADC_EN_DISABLE (0x00 << 1)
// ADC measurement starts
#define BH1730FVC_CONTROL_ADC_EN_ENABLE (0x01 << 1)
// ADC power down
#define BH1730FVC_CONTROL_POWER_DISABLE (0x00 << 0)
// ADC power on
#define BH1730FVC_CONTROL_POWER_ENABLE (0x01 << 0)
// ADC measurement does not stop
#define BH1730FVC_INTERRUPT_INT_STOP_CONTINUOUS (0x00 << 6)
// ADC measurement stops when interrupt becomes active
#define BH1730FVC_INTERRUPT_INT_STOP_STOPPED (0x01 << 6)
// Disable interrupt function
#define BH1730FVC_INTERRUPT_INT_EN_INVALID (0x00 << 4)
// Enable interrupt function
#define BH1730FVC_INTERRUPT_INT_EN_VALID (0x01 << 4)
// Interrupt becomes active at each measurement end
#define BH1730FVC_INTERRUPT_PERSIST_TOGGLE_AFTER_MEASUREMENT (0x00 << 0)
// Interrrupt status is updated at each measurement end
#define BH1730FVC_INTERRUPT_PERSIST_UPDATE_AFTER_MEASUREMENT (0x01 << 0)
// Interrupt status is updated if 2 consecutive threshold judgments are the same
#define BH1730FVC_INTERRUPT_PERSIST_UPDATE_AFTER_2_SAME (0x02 << 0)
// Interrupt status is updated if 3 consecutive threshold judgments are the same
#define BH1730FVC_INTERRUPT_PERSIST_UPDATE_AFTER_3_SAME (0x03 << 0)
// Interrupt status is updated if 4 consecutive threshold judgments are the same
#define BH1730FVC_INTERRUPT_PERSIST_UPDATE_AFTER_4_SAME (0x04 << 0)
// Interrupt status is updated if 5 consecutive threshold judgments are the same
#define BH1730FVC_INTERRUPT_PERSIST_UPDATE_AFTER_5_SAME (0x05 << 0)
// Interrupt status is updated if 6 consecutive threshold judgments are the same
#define BH1730FVC_INTERRUPT_PERSIST_UPDATE_AFTER_6_SAME (0x06 << 0)
// Interrupt status is updated if 7 consecutive threshold judgments are the same
#define BH1730FVC_INTERRUPT_PERSIST_UPDATE_AFTER_7_SAME (0x07 << 0)
// Interrupt status is updated if 8 consecutive threshold judgments are the same
#define BH1730FVC_INTERRUPT_PERSIST_UPDATE_AFTER_8_SAME (0x08 << 0)
// Interrupt status is updated if 9 consecutive threshold judgments are the same
#define BH1730FVC_INTERRUPT_PERSIST_UPDATE_AFTER_9_SAME (0x09 << 0)
// Interrupt status is updated if 10 consecutive threshold judgments are the same
#define BH1730FVC_INTERRUPT_PERSIST_UPDATE_AFTER_10_SAME (0x0A << 0)
// Interrupt status is updated if 11 consecutive threshold judgments are the same
#define BH1730FVC_INTERRUPT_PERSIST_UPDATE_AFTER_11_SAME (0x0B << 0)
// Interrupt status is updated if 12 consecutive threshold judgments are the same
#define BH1730FVC_INTERRUPT_PERSIST_UPDATE_AFTER_12_SAME (0x0C << 0)
// Interrupt status is updated if 13 consecutive threshold judgments are the same
#define BH1730FVC_INTERRUPT_PERSIST_UPDATE_AFTER_13_SAME (0x0D << 0)
// Interrupt status is updated if 14 consecutive threshold judgments are the same
#define BH1730FVC_INTERRUPT_PERSIST_UPDATE_AFTER_14_SAME (0x0E << 0)
// Interrupt status is updated if 15 consecutive threshold judgments are the same
#define BH1730FVC_INTERRUPT_PERSIST_UPDATE_AFTER_15_SAME (0x0F << 0)
// x1 gain mode
#define BH1730FVC_GAIN_GAIN_X1_GAIN (0x00 << 0)
// x2 gain mode
#define BH1730FVC_GAIN_GAIN_X2_GAIN (0x01 << 0)
// x64 gain mode
#define BH1730FVC_GAIN_GAIN_X64_GAIN (0x02 << 0)
// x128 gain mode
#define BH1730FVC_GAIN_GAIN_X128_GAIN (0x03 << 0)
// Part number
#define BH1730FVC_ID_PART_NUMBER_ID (0x07 << 4)
 /*registers bit masks */
#define BH1730FVC_CONTROL_ADC_INTR_MASK 0x20
// ADC measurement mode
#define BH1730FVC_CONTROL_ONE_TIME_MASK 0x08
// ADC channel select
#define BH1730FVC_CONTROL_DATA_SEL_MASK 0x04
// ADC measurement enable
#define BH1730FVC_CONTROL_ADC_EN_MASK 0x02
// ADC power control
#define BH1730FVC_CONTROL_POWER_MASK 0x01
// ADC stop on interrupt control
#define BH1730FVC_INTERRUPT_INT_STOP_MASK 0x40
// Interrupt enable
#define BH1730FVC_INTERRUPT_INT_EN_MASK 0x10
// Interrupt persistence function
#define BH1730FVC_INTERRUPT_PERSIST_MASK 0x0F
// ADC resolution setting
#define BH1730FVC_GAIN_GAIN_MASK 0x07
// Part number
#define BH1730FVC_ID_PART_NUMBER_MASK 0xF0
#endif

