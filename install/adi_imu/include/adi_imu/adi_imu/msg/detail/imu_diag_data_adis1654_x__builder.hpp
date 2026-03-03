// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from adi_imu:msg/ImuDiagDataADIS1654X.idl
// generated code does not contain a copyright notice

#ifndef ADI_IMU__MSG__DETAIL__IMU_DIAG_DATA_ADIS1654_X__BUILDER_HPP_
#define ADI_IMU__MSG__DETAIL__IMU_DIAG_DATA_ADIS1654_X__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "adi_imu/msg/detail/imu_diag_data_adis1654_x__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace adi_imu
{

namespace msg
{

namespace builder
{

class Init_ImuDiagDataADIS1654X_flash_counter
{
public:
  explicit Init_ImuDiagDataADIS1654X_flash_counter(::adi_imu::msg::ImuDiagDataADIS1654X & msg)
  : msg_(msg)
  {}
  ::adi_imu::msg::ImuDiagDataADIS1654X flash_counter(::adi_imu::msg::ImuDiagDataADIS1654X::_flash_counter_type arg)
  {
    msg_.flash_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::adi_imu::msg::ImuDiagDataADIS1654X msg_;
};

class Init_ImuDiagDataADIS1654X_diag_flash_memory_write_count_exceeded_error
{
public:
  explicit Init_ImuDiagDataADIS1654X_diag_flash_memory_write_count_exceeded_error(::adi_imu::msg::ImuDiagDataADIS1654X & msg)
  : msg_(msg)
  {}
  Init_ImuDiagDataADIS1654X_flash_counter diag_flash_memory_write_count_exceeded_error(::adi_imu::msg::ImuDiagDataADIS1654X::_diag_flash_memory_write_count_exceeded_error_type arg)
  {
    msg_.diag_flash_memory_write_count_exceeded_error = std::move(arg);
    return Init_ImuDiagDataADIS1654X_flash_counter(msg_);
  }

private:
  ::adi_imu::msg::ImuDiagDataADIS1654X msg_;
};

class Init_ImuDiagDataADIS1654X_diag_z_axis_accelerometer_failure
{
public:
  explicit Init_ImuDiagDataADIS1654X_diag_z_axis_accelerometer_failure(::adi_imu::msg::ImuDiagDataADIS1654X & msg)
  : msg_(msg)
  {}
  Init_ImuDiagDataADIS1654X_diag_flash_memory_write_count_exceeded_error diag_z_axis_accelerometer_failure(::adi_imu::msg::ImuDiagDataADIS1654X::_diag_z_axis_accelerometer_failure_type arg)
  {
    msg_.diag_z_axis_accelerometer_failure = std::move(arg);
    return Init_ImuDiagDataADIS1654X_diag_flash_memory_write_count_exceeded_error(msg_);
  }

private:
  ::adi_imu::msg::ImuDiagDataADIS1654X msg_;
};

class Init_ImuDiagDataADIS1654X_diag_y_axis_accelerometer_failure
{
public:
  explicit Init_ImuDiagDataADIS1654X_diag_y_axis_accelerometer_failure(::adi_imu::msg::ImuDiagDataADIS1654X & msg)
  : msg_(msg)
  {}
  Init_ImuDiagDataADIS1654X_diag_z_axis_accelerometer_failure diag_y_axis_accelerometer_failure(::adi_imu::msg::ImuDiagDataADIS1654X::_diag_y_axis_accelerometer_failure_type arg)
  {
    msg_.diag_y_axis_accelerometer_failure = std::move(arg);
    return Init_ImuDiagDataADIS1654X_diag_z_axis_accelerometer_failure(msg_);
  }

private:
  ::adi_imu::msg::ImuDiagDataADIS1654X msg_;
};

class Init_ImuDiagDataADIS1654X_diag_x_axis_accelerometer_failure
{
public:
  explicit Init_ImuDiagDataADIS1654X_diag_x_axis_accelerometer_failure(::adi_imu::msg::ImuDiagDataADIS1654X & msg)
  : msg_(msg)
  {}
  Init_ImuDiagDataADIS1654X_diag_y_axis_accelerometer_failure diag_x_axis_accelerometer_failure(::adi_imu::msg::ImuDiagDataADIS1654X::_diag_x_axis_accelerometer_failure_type arg)
  {
    msg_.diag_x_axis_accelerometer_failure = std::move(arg);
    return Init_ImuDiagDataADIS1654X_diag_y_axis_accelerometer_failure(msg_);
  }

private:
  ::adi_imu::msg::ImuDiagDataADIS1654X msg_;
};

class Init_ImuDiagDataADIS1654X_diag_z_axis_gyroscope_failure
{
public:
  explicit Init_ImuDiagDataADIS1654X_diag_z_axis_gyroscope_failure(::adi_imu::msg::ImuDiagDataADIS1654X & msg)
  : msg_(msg)
  {}
  Init_ImuDiagDataADIS1654X_diag_x_axis_accelerometer_failure diag_z_axis_gyroscope_failure(::adi_imu::msg::ImuDiagDataADIS1654X::_diag_z_axis_gyroscope_failure_type arg)
  {
    msg_.diag_z_axis_gyroscope_failure = std::move(arg);
    return Init_ImuDiagDataADIS1654X_diag_x_axis_accelerometer_failure(msg_);
  }

private:
  ::adi_imu::msg::ImuDiagDataADIS1654X msg_;
};

class Init_ImuDiagDataADIS1654X_diag_y_axis_gyroscope_failure
{
public:
  explicit Init_ImuDiagDataADIS1654X_diag_y_axis_gyroscope_failure(::adi_imu::msg::ImuDiagDataADIS1654X & msg)
  : msg_(msg)
  {}
  Init_ImuDiagDataADIS1654X_diag_z_axis_gyroscope_failure diag_y_axis_gyroscope_failure(::adi_imu::msg::ImuDiagDataADIS1654X::_diag_y_axis_gyroscope_failure_type arg)
  {
    msg_.diag_y_axis_gyroscope_failure = std::move(arg);
    return Init_ImuDiagDataADIS1654X_diag_z_axis_gyroscope_failure(msg_);
  }

private:
  ::adi_imu::msg::ImuDiagDataADIS1654X msg_;
};

class Init_ImuDiagDataADIS1654X_diag_x_axis_gyroscope_failure
{
public:
  explicit Init_ImuDiagDataADIS1654X_diag_x_axis_gyroscope_failure(::adi_imu::msg::ImuDiagDataADIS1654X & msg)
  : msg_(msg)
  {}
  Init_ImuDiagDataADIS1654X_diag_y_axis_gyroscope_failure diag_x_axis_gyroscope_failure(::adi_imu::msg::ImuDiagDataADIS1654X::_diag_x_axis_gyroscope_failure_type arg)
  {
    msg_.diag_x_axis_gyroscope_failure = std::move(arg);
    return Init_ImuDiagDataADIS1654X_diag_y_axis_gyroscope_failure(msg_);
  }

private:
  ::adi_imu::msg::ImuDiagDataADIS1654X msg_;
};

class Init_ImuDiagDataADIS1654X_diag_crc_error
{
public:
  explicit Init_ImuDiagDataADIS1654X_diag_crc_error(::adi_imu::msg::ImuDiagDataADIS1654X & msg)
  : msg_(msg)
  {}
  Init_ImuDiagDataADIS1654X_diag_x_axis_gyroscope_failure diag_crc_error(::adi_imu::msg::ImuDiagDataADIS1654X::_diag_crc_error_type arg)
  {
    msg_.diag_crc_error = std::move(arg);
    return Init_ImuDiagDataADIS1654X_diag_x_axis_gyroscope_failure(msg_);
  }

private:
  ::adi_imu::msg::ImuDiagDataADIS1654X msg_;
};

class Init_ImuDiagDataADIS1654X_diag_spi_communication_error
{
public:
  explicit Init_ImuDiagDataADIS1654X_diag_spi_communication_error(::adi_imu::msg::ImuDiagDataADIS1654X & msg)
  : msg_(msg)
  {}
  Init_ImuDiagDataADIS1654X_diag_crc_error diag_spi_communication_error(::adi_imu::msg::ImuDiagDataADIS1654X::_diag_spi_communication_error_type arg)
  {
    msg_.diag_spi_communication_error = std::move(arg);
    return Init_ImuDiagDataADIS1654X_diag_crc_error(msg_);
  }

private:
  ::adi_imu::msg::ImuDiagDataADIS1654X msg_;
};

class Init_ImuDiagDataADIS1654X_diag_sensor_self_test_error
{
public:
  explicit Init_ImuDiagDataADIS1654X_diag_sensor_self_test_error(::adi_imu::msg::ImuDiagDataADIS1654X & msg)
  : msg_(msg)
  {}
  Init_ImuDiagDataADIS1654X_diag_spi_communication_error diag_sensor_self_test_error(::adi_imu::msg::ImuDiagDataADIS1654X::_diag_sensor_self_test_error_type arg)
  {
    msg_.diag_sensor_self_test_error = std::move(arg);
    return Init_ImuDiagDataADIS1654X_diag_spi_communication_error(msg_);
  }

private:
  ::adi_imu::msg::ImuDiagDataADIS1654X msg_;
};

class Init_ImuDiagDataADIS1654X_diag_flash_memory_test_error
{
public:
  explicit Init_ImuDiagDataADIS1654X_diag_flash_memory_test_error(::adi_imu::msg::ImuDiagDataADIS1654X & msg)
  : msg_(msg)
  {}
  Init_ImuDiagDataADIS1654X_diag_sensor_self_test_error diag_flash_memory_test_error(::adi_imu::msg::ImuDiagDataADIS1654X::_diag_flash_memory_test_error_type arg)
  {
    msg_.diag_flash_memory_test_error = std::move(arg);
    return Init_ImuDiagDataADIS1654X_diag_sensor_self_test_error(msg_);
  }

private:
  ::adi_imu::msg::ImuDiagDataADIS1654X msg_;
};

class Init_ImuDiagDataADIS1654X_diag_clock_error
{
public:
  explicit Init_ImuDiagDataADIS1654X_diag_clock_error(::adi_imu::msg::ImuDiagDataADIS1654X & msg)
  : msg_(msg)
  {}
  Init_ImuDiagDataADIS1654X_diag_flash_memory_test_error diag_clock_error(::adi_imu::msg::ImuDiagDataADIS1654X::_diag_clock_error_type arg)
  {
    msg_.diag_clock_error = std::move(arg);
    return Init_ImuDiagDataADIS1654X_diag_flash_memory_test_error(msg_);
  }

private:
  ::adi_imu::msg::ImuDiagDataADIS1654X msg_;
};

class Init_ImuDiagDataADIS1654X_diag_automatic_reset
{
public:
  explicit Init_ImuDiagDataADIS1654X_diag_automatic_reset(::adi_imu::msg::ImuDiagDataADIS1654X & msg)
  : msg_(msg)
  {}
  Init_ImuDiagDataADIS1654X_diag_clock_error diag_automatic_reset(::adi_imu::msg::ImuDiagDataADIS1654X::_diag_automatic_reset_type arg)
  {
    msg_.diag_automatic_reset = std::move(arg);
    return Init_ImuDiagDataADIS1654X_diag_clock_error(msg_);
  }

private:
  ::adi_imu::msg::ImuDiagDataADIS1654X msg_;
};

class Init_ImuDiagDataADIS1654X_diag_flash_memory_update_error
{
public:
  explicit Init_ImuDiagDataADIS1654X_diag_flash_memory_update_error(::adi_imu::msg::ImuDiagDataADIS1654X & msg)
  : msg_(msg)
  {}
  Init_ImuDiagDataADIS1654X_diag_automatic_reset diag_flash_memory_update_error(::adi_imu::msg::ImuDiagDataADIS1654X::_diag_flash_memory_update_error_type arg)
  {
    msg_.diag_flash_memory_update_error = std::move(arg);
    return Init_ImuDiagDataADIS1654X_diag_automatic_reset(msg_);
  }

private:
  ::adi_imu::msg::ImuDiagDataADIS1654X msg_;
};

class Init_ImuDiagDataADIS1654X_diag_data_path_overrun
{
public:
  explicit Init_ImuDiagDataADIS1654X_diag_data_path_overrun(::adi_imu::msg::ImuDiagDataADIS1654X & msg)
  : msg_(msg)
  {}
  Init_ImuDiagDataADIS1654X_diag_flash_memory_update_error diag_data_path_overrun(::adi_imu::msg::ImuDiagDataADIS1654X::_diag_data_path_overrun_type arg)
  {
    msg_.diag_data_path_overrun = std::move(arg);
    return Init_ImuDiagDataADIS1654X_diag_flash_memory_update_error(msg_);
  }

private:
  ::adi_imu::msg::ImuDiagDataADIS1654X msg_;
};

class Init_ImuDiagDataADIS1654X_header
{
public:
  Init_ImuDiagDataADIS1654X_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuDiagDataADIS1654X_diag_data_path_overrun header(::adi_imu::msg::ImuDiagDataADIS1654X::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ImuDiagDataADIS1654X_diag_data_path_overrun(msg_);
  }

private:
  ::adi_imu::msg::ImuDiagDataADIS1654X msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::adi_imu::msg::ImuDiagDataADIS1654X>()
{
  return adi_imu::msg::builder::Init_ImuDiagDataADIS1654X_header();
}

}  // namespace adi_imu

#endif  // ADI_IMU__MSG__DETAIL__IMU_DIAG_DATA_ADIS1654_X__BUILDER_HPP_
