/*
The MIT License (MIT)

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
/*

/* registers */
#define BH1726_REGISTER_DUMP_START 0x80
#define BH1726_CONTROL 0x80
// ADC Light integration time. Cycle = 256-itime; integration time= cycle x 2.7ms; measurement time = 2ms + integration time
#define BH1726_TIMING 0x81
#define BH1726_INTERRUPT 0x82
#define BH1726_TH_LOW_LSBS 0x83
#define BH1726_TH_LOW_MSBS 0x84
#define BH1726_TH_UP_LSBS 0x85
#define BH1726_TH_UP_MSBS 0x86
#define BH1726_GAIN 0x87
#define BH1726_ID 0x92
#define BH1726_DATA0_LSBS 0x94
#define BH1726_DATA0_MSBS 0x95
#define BH1726_DATA1_LSBS 0x96
#define BH1726_DATA1_MSBS 0x97
#define BH1726_WAIT 0x98
// special command, no data
#define BH1726_INTERRUPT_OUTPUT_RESET 0xE1
// special command, no data
#define BH1726_SOFTWARE_RESET 0xE4
#define BH1726_REGISTER_DUMP_END 0x98
/* registers bits */
#define BH1726_CONTROL_ADC_INTR_INACTIVE (0x00 << 5)
#define BH1726_CONTROL_ADC_INTR_ACTIVE (0x01 << 5)
#define BH1726_CONTROL_ADC_VALID_FALSE (0x00 << 4)
// Updated since last reading
#define BH1726_CONTROL_ADC_VALID_TRUE (0x01 << 4)
#define BH1726_CONTROL_ADC_EN_FALSE (0x00 << 1)
#define BH1726_CONTROL_ADC_EN_TRUE (0x01 << 1)
#define BH1726_CONTROL_POWER_OFF (0x00 << 0)
#define BH1726_CONTROL_POWER_ON (0x01 << 0)
// 691.2ms
#define BH1726_TIMING_ITIME_256CYCLE (0x00 << 0)
// 399.6ms
#define BH1726_TIMING_ITIME_148CYCLE (0x6C << 0)
// 199.8ms
#define BH1726_TIMING_ITIME_74CYCLE (0xB6 << 0)
// 135ms
#define BH1726_TIMING_ITIME_50CYCLE (0xCE << 0)
// 102.6ms
#define BH1726_TIMING_ITIME_38CYCLE (0xDA << 0)
// 51.3ms
#define BH1726_TIMING_ITIME_19CYCLE (0xED << 0)
// 5.4ms
#define BH1726_TIMING_ITIME_2CYCLE (0xFE << 0)
// 2.7ms
#define BH1726_TIMING_ITIME_1CYCLE (0xFF << 0)
#define BH1726_INTERRUPT_INT_LATCH_YES (0x00 << 5)
#define BH1726_INTERRUPT_INT_LATCH_NO (0x01 << 5)
#define BH1726_INTERRUPT_INT_EN_FALSE (0x00 << 4)
#define BH1726_INTERRUPT_INT_EN_TRUE (0x01 << 4)
#define BH1726_INTERRUPT_PERSIST_DRDY (0x00 << 0)
#define BH1726_INTERRUPT_PERSIST_AFTER_1 (0x01 << 0)
#define BH1726_INTERRUPT_PERSIST_AFTER_2 (0x02 << 0)
#define BH1726_INTERRUPT_PERSIST_AFTER_3 (0x03 << 0)
#define BH1726_INTERRUPT_PERSIST_AFTER_4 (0x04 << 0)
#define BH1726_GAIN_GAIN0_X1 (0x00 << 2)
#define BH1726_GAIN_GAIN0_X2 (0x01 << 2)
#define BH1726_GAIN_GAIN0_X64 (0x02 << 2)
#define BH1726_GAIN_GAIN0_X128 (0x03 << 2)
#define BH1726_GAIN_GAIN1_X1 (0x00 << 0)
#define BH1726_GAIN_GAIN1_X2 (0x01 << 0)
#define BH1726_GAIN_GAIN1_X64 (0x02 << 0)
#define BH1726_GAIN_GAIN1_X128 (0x03 << 0)
#define BH1726_ID_NUMBER_FOR_PART (0x72 << 0)
#define BH1726_WAIT_WAIT_NO (0x00 << 0)
// after each measurement (low current consumption mode)
#define BH1726_WAIT_WAIT_300MS (0x01 << 0)
 /*registers bit masks */
#define BH1726_CONTROL_ADC_INTR_MASK 0x20
#define BH1726_CONTROL_ADC_VALID_MASK 0x10

#define BH1726_CONTROL_ADC_EN_MASK 0x02
#define BH1726_CONTROL_POWER_MASK 0x01
#define BH1726_TIMING_ITIME_MASK 0xFF

#define BH1726_INTERRUPT_INT_LATCH_MASK 0x20
#define BH1726_INTERRUPT_INT_EN_MASK 0x10
#define BH1726_INTERRUPT_PERSIST_MASK 0x0F
#define BH1726_GAIN_GAIN0_MASK 0x0C
#define BH1726_GAIN_GAIN1_MASK 0x03
#define BH1726_ID_NUMBER_MASK 0xFF
#define BH1726_WAIT_WAIT_MASK 0x01