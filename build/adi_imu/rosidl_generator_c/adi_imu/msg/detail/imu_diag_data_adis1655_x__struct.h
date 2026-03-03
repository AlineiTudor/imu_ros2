// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from adi_imu:msg/ImuDiagDataADIS1655X.idl
// generated code does not contain a copyright notice

#ifndef ADI_IMU__MSG__DETAIL__IMU_DIAG_DATA_ADIS1655_X__STRUCT_H_
#define ADI_IMU__MSG__DETAIL__IMU_DIAG_DATA_ADIS1655_X__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/ImuDiagDataADIS1655X in the package adi_imu.
/**
  *   @file   ImuDiagData.msg
  *   @brief  Definition of ImuDiagData message
  *   @author Robert Budai (robert.budai@analog.com)
  *
  * Copyright 2023(c) Analog Devices, Inc.
  *
  * Licensed under the Apache License, Version 2.0 (the "License");
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  *
  *     http://www.apache.org/licenses/LICENSE-2.0
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an "AS IS" BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
 */
typedef struct adi_imu__msg__ImuDiagDataADIS1655X
{
  /// message header
  std_msgs__msg__Header header;
  /// if true, one of the datapaths experienced an overrun condition
  bool diag_data_path_overrun;
  /// if true, the most recent imu memory flash failed
  bool diag_flash_memory_update_error;
  /// if true, sensor automatically reset themselves to clear an issue
  bool diag_automatic_reset;
  /// if true, while operating in scaled sync mode, indicates the sampling time is not scaling correctly
  bool diag_clock_error;
  /// if true, the most recent imu memory flash failed
  bool diag_flash_memory_test_error;
  /// if true, indicates the failure of the inertial sensor
  bool diag_sensor_self_test_error;
  /// if true, indicates communication error on SPI interface
  bool diag_spi_communication_error;
  /// if true, indicates failure on CRC calculation
  bool diag_crc_error;
  /// if true, a failure occurred on x axis gyroscope
  bool diag_x_axis_gyroscope_failure;
  /// if true, a failure occurred on y axis gyroscope
  bool diag_y_axis_gyroscope_failure;
  /// if true, a failure occurred on z axis gyroscope
  bool diag_z_axis_gyroscope_failure;
  /// if true, a failure occurred on x axis accelerometer
  bool diag_x_axis_accelerometer_failure;
  /// if true, a failure occurred on y axis accelerometer
  bool diag_y_axis_accelerometer_failure;
  /// if true, a failure occurred on z axis accelerometer
  bool diag_z_axis_accelerometer_failure;
  /// if true, the imu flash memory was written more times than the data-sheet specified endurance
  bool diag_flash_memory_write_count_exceeded_error;
  /// the value of the imu flash writes
  uint32_t flash_counter;
} adi_imu__msg__ImuDiagDataADIS1655X;

// Struct for a sequence of adi_imu__msg__ImuDiagDataADIS1655X.
typedef struct adi_imu__msg__ImuDiagDataADIS1655X__Sequence
{
  adi_imu__msg__ImuDiagDataADIS1655X * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} adi_imu__msg__ImuDiagDataADIS1655X__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ADI_IMU__MSG__DETAIL__IMU_DIAG_DATA_ADIS1655_X__STRUCT_H_
