// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from adi_imu:msg/ImuDiagDataADIS1655X.idl
// generated code does not contain a copyright notice

#ifndef ADI_IMU__MSG__DETAIL__IMU_DIAG_DATA_ADIS1655_X__TRAITS_HPP_
#define ADI_IMU__MSG__DETAIL__IMU_DIAG_DATA_ADIS1655_X__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "adi_imu/msg/detail/imu_diag_data_adis1655_x__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace adi_imu
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImuDiagDataADIS1655X & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: diag_data_path_overrun
  {
    out << "diag_data_path_overrun: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_data_path_overrun, out);
    out << ", ";
  }

  // member: diag_flash_memory_update_error
  {
    out << "diag_flash_memory_update_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_flash_memory_update_error, out);
    out << ", ";
  }

  // member: diag_automatic_reset
  {
    out << "diag_automatic_reset: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_automatic_reset, out);
    out << ", ";
  }

  // member: diag_clock_error
  {
    out << "diag_clock_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_clock_error, out);
    out << ", ";
  }

  // member: diag_flash_memory_test_error
  {
    out << "diag_flash_memory_test_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_flash_memory_test_error, out);
    out << ", ";
  }

  // member: diag_sensor_self_test_error
  {
    out << "diag_sensor_self_test_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_sensor_self_test_error, out);
    out << ", ";
  }

  // member: diag_spi_communication_error
  {
    out << "diag_spi_communication_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_spi_communication_error, out);
    out << ", ";
  }

  // member: diag_crc_error
  {
    out << "diag_crc_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_crc_error, out);
    out << ", ";
  }

  // member: diag_x_axis_gyroscope_failure
  {
    out << "diag_x_axis_gyroscope_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_x_axis_gyroscope_failure, out);
    out << ", ";
  }

  // member: diag_y_axis_gyroscope_failure
  {
    out << "diag_y_axis_gyroscope_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_y_axis_gyroscope_failure, out);
    out << ", ";
  }

  // member: diag_z_axis_gyroscope_failure
  {
    out << "diag_z_axis_gyroscope_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_z_axis_gyroscope_failure, out);
    out << ", ";
  }

  // member: diag_x_axis_accelerometer_failure
  {
    out << "diag_x_axis_accelerometer_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_x_axis_accelerometer_failure, out);
    out << ", ";
  }

  // member: diag_y_axis_accelerometer_failure
  {
    out << "diag_y_axis_accelerometer_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_y_axis_accelerometer_failure, out);
    out << ", ";
  }

  // member: diag_z_axis_accelerometer_failure
  {
    out << "diag_z_axis_accelerometer_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_z_axis_accelerometer_failure, out);
    out << ", ";
  }

  // member: diag_flash_memory_write_count_exceeded_error
  {
    out << "diag_flash_memory_write_count_exceeded_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_flash_memory_write_count_exceeded_error, out);
    out << ", ";
  }

  // member: flash_counter
  {
    out << "flash_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.flash_counter, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImuDiagDataADIS1655X & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: diag_data_path_overrun
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_data_path_overrun: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_data_path_overrun, out);
    out << "\n";
  }

  // member: diag_flash_memory_update_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_flash_memory_update_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_flash_memory_update_error, out);
    out << "\n";
  }

  // member: diag_automatic_reset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_automatic_reset: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_automatic_reset, out);
    out << "\n";
  }

  // member: diag_clock_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_clock_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_clock_error, out);
    out << "\n";
  }

  // member: diag_flash_memory_test_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_flash_memory_test_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_flash_memory_test_error, out);
    out << "\n";
  }

  // member: diag_sensor_self_test_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_sensor_self_test_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_sensor_self_test_error, out);
    out << "\n";
  }

  // member: diag_spi_communication_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_spi_communication_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_spi_communication_error, out);
    out << "\n";
  }

  // member: diag_crc_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_crc_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_crc_error, out);
    out << "\n";
  }

  // member: diag_x_axis_gyroscope_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_x_axis_gyroscope_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_x_axis_gyroscope_failure, out);
    out << "\n";
  }

  // member: diag_y_axis_gyroscope_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_y_axis_gyroscope_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_y_axis_gyroscope_failure, out);
    out << "\n";
  }

  // member: diag_z_axis_gyroscope_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_z_axis_gyroscope_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_z_axis_gyroscope_failure, out);
    out << "\n";
  }

  // member: diag_x_axis_accelerometer_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_x_axis_accelerometer_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_x_axis_accelerometer_failure, out);
    out << "\n";
  }

  // member: diag_y_axis_accelerometer_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_y_axis_accelerometer_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_y_axis_accelerometer_failure, out);
    out << "\n";
  }

  // member: diag_z_axis_accelerometer_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_z_axis_accelerometer_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_z_axis_accelerometer_failure, out);
    out << "\n";
  }

  // member: diag_flash_memory_write_count_exceeded_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "diag_flash_memory_write_count_exceeded_error: ";
    rosidl_generator_traits::value_to_yaml(msg.diag_flash_memory_write_count_exceeded_error, out);
    out << "\n";
  }

  // member: flash_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flash_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.flash_counter, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImuDiagDataADIS1655X & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace adi_imu

namespace rosidl_generator_traits
{

[[deprecated("use adi_imu::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const adi_imu::msg::ImuDiagDataADIS1655X & msg,
  std::ostream & out, size_t indentation = 0)
{
  adi_imu::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use adi_imu::msg::to_yaml() instead")]]
inline std::string to_yaml(const adi_imu::msg::ImuDiagDataADIS1655X & msg)
{
  return adi_imu::msg::to_yaml(msg);
}

template<>
inline const char * data_type<adi_imu::msg::ImuDiagDataADIS1655X>()
{
  return "adi_imu::msg::ImuDiagDataADIS1655X";
}

template<>
inline const char * name<adi_imu::msg::ImuDiagDataADIS1655X>()
{
  return "adi_imu/msg/ImuDiagDataADIS1655X";
}

template<>
struct has_fixed_size<adi_imu::msg::ImuDiagDataADIS1655X>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<adi_imu::msg::ImuDiagDataADIS1655X>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<adi_imu::msg::ImuDiagDataADIS1655X>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ADI_IMU__MSG__DETAIL__IMU_DIAG_DATA_ADIS1655_X__TRAITS_HPP_
