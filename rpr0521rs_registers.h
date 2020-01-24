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

#ifndef __RPR0521RS_REGISTERS_H__
#define __RPR0521RS_REGISTERS_H__
/* registers */
#define RPR0521RS_REGISTER_DUMP_START 0x40
// System control
#define RPR0521RS_SYSTEM_CONTROL 0x40
// ALS, PS function setting
#define RPR0521RS_MODE_CONTROL 0x41
// ALS Gain, PS LED Driver
#define RPR0521RS_ALS_PS_CONTROL 0x42
// PS Gain, PS interrupt persistence
#define RPR0521RS_PS_CONTROL 0x43
// PS data low byte
#define RPR0521RS_PS_DATA_LSBS 0x44
// PS data high byte
#define RPR0521RS_PS_DATA_MSBS 0x45
// ALS DATA0 low byte
#define RPR0521RS_ALS_DATA0_LSBS 0x46
// ALS DATA0 high byte
#define RPR0521RS_ALS_DATA0_MSBS 0x47
// ALS DATA1 low byte
#define RPR0521RS_ALS_DATA1_LSBS 0x48
// ALS DATA1 high byte
#define RPR0521RS_ALS_DATA1_MSBS 0x49
// Interrupt control
#define RPR0521RS_INTERRUPT 0x4A
// PS upper threshold low byte
#define RPR0521RS_PS_TH_LSBS 0x4B
// PS upper threshold high byte
#define RPR0521RS_PS_TH_MSBS 0x4C
// PS lower threshold low byte
#define RPR0521RS_PS_TL_LSBS 0x4D
// PS lower threshold high byte
#define RPR0521RS_PS_TL_MSBS 0x4E
// ALS DATA0 upper threshold low byte
#define RPR0521RS_ALS_DATA0_TH_LSBS 0x4F
// ALS DATA0 upper threshold high byte
#define RPR0521RS_ALS_DATA0_TH_MSBS 0x50
// ALS DATA0 lower threshold low byte
#define RPR0521RS_ALS_DATA0_TL_LSBS 0x51
// ALS DATA0 lower threshold high byte
#define RPR0521RS_ALS_DATA0_TL_MSBS 0x52
// PS offset low byte
#define RPR0521RS_PS_OFFSET_LSBS 0x53
// PS offset high byte
#define RPR0521RS_PS_OFFSET_MSBS 0x54
// MANUFACT ID
#define RPR0521RS_MANUFACT_ID 0x92
#define RPR0521RS_REGISTER_DUMP_END 0x54
/* registers bits */
// Initial reset is not started
#define RPR0521RS_SYSTEM_CONTROL_SW_RESET_NOT_STARTED (0x00 << 7)
// Initial reset is started
#define RPR0521RS_SYSTEM_CONTROL_SW_RESET_START (0x01 << 7)
// INT pin status is not initialized
#define RPR0521RS_SYSTEM_CONTROL_INT_PIN_NO_INIT (0x00 << 6)
// INT pin become inactive (high impedance)
#define RPR0521RS_SYSTEM_CONTROL_INT_PIN_HI_Z (0x01 << 6)
// Part ID
#define RPR0521RS_SYSTEM_CONTROL_PART_ID (0x0A << 0)
// ALS Standby
#define RPR0521RS_MODE_CONTROL_ALS_EN_FALSE (0x00 << 7)
// ALS Enable
#define RPR0521RS_MODE_CONTROL_ALS_EN_TRUE (0x01 << 7)
// PS Standby
#define RPR0521RS_MODE_CONTROL_PS_EN_FALSE (0x00 << 6)
// PS Enable
#define RPR0521RS_MODE_CONTROL_PS_EN_TRUE (0x01 << 6)
// PS LED pulse width is typ 200us
#define RPR0521RS_MODE_CONTROL_PS_PULSE_200US (0x00 << 5)
// PS LED pulse width is typ 330us (PS sensor out is doubled)
#define RPR0521RS_MODE_CONTROL_PS_PULSE_330US (0x01 << 5)
// Normal mode
#define RPR0521RS_MODE_CONTROL_PS_OPERATING_MODE_NORMAL (0x00 << 4)
// Twice measurement mode
#define RPR0521RS_MODE_CONTROL_PS_OPERATING_MODE_DOUBLE_MEASUREMENT (0x01 << 4)
// ALS standby, PS standby
#define RPR0521RS_MODE_CONTROL_MEASUREMENT_TIME_OFF_OFF (0x00 << 0)
// ALS standby, PS 10ms
#define RPR0521RS_MODE_CONTROL_MEASUREMENT_TIME_OFF_10MS (0x01 << 0)
// ALS standby, PS 40ms
#define RPR0521RS_MODE_CONTROL_MEASUREMENT_TIME_OFF_40MS (0x02 << 0)
// ALS standby, PS 100ms
#define RPR0521RS_MODE_CONTROL_MEASUREMENT_TIME_OFF_100MS (0x03 << 0)
// ALS standby, PS 400ms
#define RPR0521RS_MODE_CONTROL_MEASUREMENT_TIME_OFF_400MS (0x04 << 0)
// ALS 100ms, PS 50ms
#define RPR0521RS_MODE_CONTROL_MEASUREMENT_TIME_100MS_50MS (0x05 << 0)
// ALS 100ms, PS 100ms
#define RPR0521RS_MODE_CONTROL_MEASUREMENT_TIME_100MS_100MS (0x06 << 0)
// ALS 100ms, PS 400ms
#define RPR0521RS_MODE_CONTROL_MEASUREMENT_TIME_100MS_400MS (0x07 << 0)
// ALS 100ms + 300ms sleep, PS 50ms
#define RPR0521RS_MODE_CONTROL_MEASUREMENT_TIME_400MS_50MS (0x08 << 0)
// ALS 100ms + 300ms sleep, PS 100ms
#define RPR0521RS_MODE_CONTROL_MEASUREMENT_TIME_400MS_100MS (0x09 << 0)
// ALS 400ms (high sensitivity), PS standby
#define RPR0521RS_MODE_CONTROL_MEASUREMENT_TIME_400MS_OFF (0x0A << 0)
// ALS 400ms (high sensitivity), PS 400ms
#define RPR0521RS_MODE_CONTROL_MEASUREMENT_TIME_400MS_400MS (0x0B << 0)
// ALS 50ms, PS 50ms (special mode, see datasheet for details)
#define RPR0521RS_MODE_CONTROL_MEASUREMENT_TIME_50MS_50MS (0x0C << 0)
// x1 Gain mode
#define RPR0521RS_ALS_PS_CONTROL_ALS_DATA0_GAIN_X1 (0x00 << 4)
// x2 Gain mode
#define RPR0521RS_ALS_PS_CONTROL_ALS_DATA0_GAIN_X2 (0x01 << 4)
// x64 Gain mode
#define RPR0521RS_ALS_PS_CONTROL_ALS_DATA0_GAIN_X64 (0x02 << 4)
// x128 Gain mode
#define RPR0521RS_ALS_PS_CONTROL_ALS_DATA0_GAIN_X128 (0x03 << 4)
// x1 Gain mode
#define RPR0521RS_ALS_PS_CONTROL_ALS_DATA1_GAIN_X1 (0x00 << 2)
// x2 Gain mode
#define RPR0521RS_ALS_PS_CONTROL_ALS_DATA1_GAIN_X2 (0x01 << 2)
// x64 Gain mode
#define RPR0521RS_ALS_PS_CONTROL_ALS_DATA1_GAIN_X64 (0x02 << 2)
// x128 Gain mode
#define RPR0521RS_ALS_PS_CONTROL_ALS_DATA1_GAIN_X128 (0x03 << 2)
// 25mA
#define RPR0521RS_ALS_PS_CONTROL_LED_CURRENT_25MA (0x00 << 0)
// 50mA
#define RPR0521RS_ALS_PS_CONTROL_LED_CURRENT_50MA (0x01 << 0)
// 100mA
#define RPR0521RS_ALS_PS_CONTROL_LED_CURRENT_100MA (0x02 << 0)
// 200mA
#define RPR0521RS_ALS_PS_CONTROL_LED_CURRENT_200MA (0x03 << 0)
// Ambient infrared level is low
#define RPR0521RS_PS_CONTROL_AMBIENT_IR_FLAG_LOW (0x00 << 6)
// Ambient infrared level is high
#define RPR0521RS_PS_CONTROL_AMBIENT_IR_FLAG_HIGH (0x01 << 6)
// Ambient infrared level is too high
#define RPR0521RS_PS_CONTROL_AMBIENT_IR_FLAG_TOO_HIGH (0x02 << 6)
// PS GAIN x1
#define RPR0521RS_PS_CONTROL_PS_GAIN_X1 (0x00 << 4)
// PS GAIN x2
#define RPR0521RS_PS_CONTROL_PS_GAIN_X2 (0x01 << 4)
// PS GAIN x4
#define RPR0521RS_PS_CONTROL_PS_GAIN_X4 (0x02 << 4)
// Interrupt becomes active at each measurement end
#define RPR0521RS_PS_CONTROL_PERSISTENCE_DRDY (0x00 << 0)
// Interrupt status is updated at each measurement end
#define RPR0521RS_PS_CONTROL_PERSISTENCE_CONSECUTIVE_1 (0x01 << 0)
// Interrupt status is updated if two consecutive threshold judgments are the same
#define RPR0521RS_PS_CONTROL_PERSISTENCE_CONSECUTIVE_2 (0x02 << 0)
// Interrupt status is updated if three consecutive threshold judgments are the same
#define RPR0521RS_PS_CONTROL_PERSISTENCE_CONSECUTIVE_3 (0x03 << 0)
// Interrupt status is updated if four consecutive threshold judgments are the same
#define RPR0521RS_PS_CONTROL_PERSISTENCE_CONSECUTIVE_4 (0x04 << 0)
// Interrupt status is updated if five consecutive threshold judgments are the same
#define RPR0521RS_PS_CONTROL_PERSISTENCE_CONSECUTIVE_5 (0x05 << 0)
// Interrupt status is updated if six consecutive threshold judgments are the same
#define RPR0521RS_PS_CONTROL_PERSISTENCE_CONSECUTIVE_6 (0x06 << 0)
// Interrupt status is updated if seven consecutive threshold judgments are the same
#define RPR0521RS_PS_CONTROL_PERSISTENCE_CONSECUTIVE_7 (0x07 << 0)
// Interrupt status is updated if eight consecutive threshold judgments are the same
#define RPR0521RS_PS_CONTROL_PERSISTENCE_CONSECUTIVE_8 (0x08 << 0)
// Interrupt status is updated if nine consecutive threshold judgments are the same
#define RPR0521RS_PS_CONTROL_PERSISTENCE_CONSECUTIVE_9 (0x09 << 0)
// Interrupt status is updated if ten consecutive threshold judgments are the same
#define RPR0521RS_PS_CONTROL_PERSISTENCE_CONSECUTIVE_10 (0x0A << 0)
// Interrupt status is updated if eleven consecutive threshold judgments are the same
#define RPR0521RS_PS_CONTROL_PERSISTENCE_CONSECUTIVE_11 (0x0B << 0)
// Interrupt status is updated if twelve consecutive threshold judgments are the same
#define RPR0521RS_PS_CONTROL_PERSISTENCE_CONSECUTIVE_12 (0x0C << 0)
// Interrupt status is updated if thirteen consecutive threshold judgments are the same
#define RPR0521RS_PS_CONTROL_PERSISTENCE_CONSECUTIVE_13 (0x0D << 0)
// Interrupt status is updated if fourteen consecutive threshold judgments are the same
#define RPR0521RS_PS_CONTROL_PERSISTENCE_CONSECUTIVE_14 (0x0E << 0)
// Interrupt status is updated if fifteen consecutive threshold judgments are the same
#define RPR0521RS_PS_CONTROL_PERSISTENCE_CONSECUTIVE_15 (0x0F << 0)
// PS interrupt signal inactive
#define RPR0521RS_INTERRUPT_PS_INT_STATUS_INACTIVE (0x00 << 7)
// PS interrupt signal active
#define RPR0521RS_INTERRUPT_PS_INT_STATUS_ACTIVE (0x01 << 7)
// ALS interrupt signal inactive
#define RPR0521RS_INTERRUPT_ALS_INT_STATUS_INACTIVE (0x00 << 6)
// ALS interrupt signal active
#define RPR0521RS_INTERRUPT_ALS_INT_STATUS_ACTIVE (0x01 << 6)
// Only PS_TH_H is effective
#define RPR0521RS_INTERRUPT_INT_MODE_PS_TH_H_ACTIVE (0x00 << 4)
// PS_TH_H and PS_TH_L are effective as hysteresis
#define RPR0521RS_INTERRUPT_INT_MODE_PS_TH_HYSTERESIS (0x01 << 4)
// PS_TH_H and PS_TH_L are effective as outside detection
#define RPR0521RS_INTERRUPT_INT_MODE_PS_TH_OUTSIDE_DETECTION (0x02 << 4)
// Interrupt output 'L' is stable if newer measurement result is also interrupt active
#define RPR0521RS_INTERRUPT_INT_ASSERT_STABLE (0x00 << 3)
// Interrupt output 'L' is de-assert and re-assert if newer measurement result is also interrupt active
#define RPR0521RS_INTERRUPT_INT_ASSERT_REINT (0x01 << 3)
// INT pin is latched until INTERRUPT register is read or initialized
#define RPR0521RS_INTERRUPT_INT_LATCH_ENABLED (0x00 << 2)
// INT pin is updated after each measurement
#define RPR0521RS_INTERRUPT_INT_LATCH_DISABLED (0x01 << 2)
// INT pin is inactive
#define RPR0521RS_INTERRUPT_INT_TRIG_INACTIVE (0x00 << 0)
// Triggered by only PS measurement
#define RPR0521RS_INTERRUPT_INT_TRIG_BY_PS (0x01 << 0)
// Triggered by only ALS measurement
#define RPR0521RS_INTERRUPT_INT_TRIG_BY_ALS (0x02 << 0)
// Triggered by PS and ALS measurement
#define RPR0521RS_INTERRUPT_INT_TRIG_BY_BOTH (0x03 << 0)
// MANUFACT ID
#define RPR0521RS_MANUFACT_ID_ID_E0H (0xE0 << 0)
 /*registers bit masks */
#define RPR0521RS_SYSTEM_CONTROL_SW_RESET_MASK 0x80
// INT pin control
#define RPR0521RS_SYSTEM_CONTROL_INT_PIN_MASK 0x40
// Part ID
#define RPR0521RS_SYSTEM_CONTROL_PART_MASK 0x3F
// ALS enable
#define RPR0521RS_MODE_CONTROL_ALS_EN_MASK 0x80
// Proximity enable
#define RPR0521RS_MODE_CONTROL_PS_EN_MASK 0x40
// Proximity pulse width control
#define RPR0521RS_MODE_CONTROL_PS_PULSE_MASK 0x20
// PS Operating mode
#define RPR0521RS_MODE_CONTROL_PS_OPERATING_MODE_MASK 0x10
// Measurement time
#define RPR0521RS_MODE_CONTROL_MEASUREMENT_TIME_MASK 0x0F
// Gain control of ALS DATA 0
#define RPR0521RS_ALS_PS_CONTROL_ALS_DATA0_GAIN_MASK 0x30
// Gain control of ALS DATA 1
#define RPR0521RS_ALS_PS_CONTROL_ALS_DATA1_GAIN_MASK 0x0C
// LED current
#define RPR0521RS_ALS_PS_CONTROL_LED_CURRENT_MASK 0x03
// Ambient infrared level flag
#define RPR0521RS_PS_CONTROL_AMBIENT_IR_FLAG_MASK 0xC0
// Proximity gain
#define RPR0521RS_PS_CONTROL_PS_GAIN_MASK 0x30
// PS interrupt persistence setting
#define RPR0521RS_PS_CONTROL_PERSISTENCE_MASK 0x0F
// PS interrupt status
#define RPR0521RS_INTERRUPT_PS_INT_STATUS_MASK 0x80
// ALS interrupt status
#define RPR0521RS_INTERRUPT_ALS_INT_STATUS_MASK 0x40
// Interrupt mode
#define RPR0521RS_INTERRUPT_INT_MODE_MASK 0x30
// Interrupt assert control
#define RPR0521RS_INTERRUPT_INT_ASSERT_MASK 0x08
// Interrupt latch control
#define RPR0521RS_INTERRUPT_INT_LATCH_MASK 0x04
// Interrupt trigger control
#define RPR0521RS_INTERRUPT_INT_TRIG_MASK 0x03

#define RPR0521RS_MANUFACT_ID_ID_MASK 0xFF
#endif

