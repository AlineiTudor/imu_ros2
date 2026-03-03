// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from adi_imu:msg/AccelGyroTempData.idl
// generated code does not contain a copyright notice

#ifndef ADI_IMU__MSG__DETAIL__ACCEL_GYRO_TEMP_DATA__BUILDER_HPP_
#define ADI_IMU__MSG__DETAIL__ACCEL_GYRO_TEMP_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "adi_imu/msg/detail/accel_gyro_temp_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace adi_imu
{

namespace msg
{

namespace builder
{

class Init_AccelGyroTempData_temperature
{
public:
  explicit Init_AccelGyroTempData_temperature(::adi_imu::msg::AccelGyroTempData & msg)
  : msg_(msg)
  {}
  ::adi_imu::msg::AccelGyroTempData temperature(::adi_imu::msg::AccelGyroTempData::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::adi_imu::msg::AccelGyroTempData msg_;
};

class Init_AccelGyroTempData_angular_velocity
{
public:
  explicit Init_AccelGyroTempData_angular_velocity(::adi_imu::msg::AccelGyroTempData & msg)
  : msg_(msg)
  {}
  Init_AccelGyroTempData_temperature angular_velocity(::adi_imu::msg::AccelGyroTempData::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_AccelGyroTempData_temperature(msg_);
  }

private:
  ::adi_imu::msg::AccelGyroTempData msg_;
};

class Init_AccelGyroTempData_linear_acceleration
{
public:
  explicit Init_AccelGyroTempData_linear_acceleration(::adi_imu::msg::AccelGyroTempData & msg)
  : msg_(msg)
  {}
  Init_AccelGyroTempData_angular_velocity linear_acceleration(::adi_imu::msg::AccelGyroTempData::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_AccelGyroTempData_angular_velocity(msg_);
  }

private:
  ::adi_imu::msg::AccelGyroTempData msg_;
};

class Init_AccelGyroTempData_header
{
public:
  Init_AccelGyroTempData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AccelGyroTempData_linear_acceleration header(::adi_imu::msg::AccelGyroTempData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AccelGyroTempData_linear_acceleration(msg_);
  }

private:
  ::adi_imu::msg::AccelGyroTempData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::adi_imu::msg::AccelGyroTempData>()
{
  return adi_imu::msg::builder::Init_AccelGyroTempData_header();
}

}  // namespace adi_imu

#endif  // ADI_IMU__MSG__DETAIL__ACCEL_GYRO_TEMP_DATA__BUILDER_HPP_
