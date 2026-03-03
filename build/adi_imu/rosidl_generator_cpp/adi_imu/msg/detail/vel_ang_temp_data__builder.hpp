// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from adi_imu:msg/VelAngTempData.idl
// generated code does not contain a copyright notice

#ifndef ADI_IMU__MSG__DETAIL__VEL_ANG_TEMP_DATA__BUILDER_HPP_
#define ADI_IMU__MSG__DETAIL__VEL_ANG_TEMP_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "adi_imu/msg/detail/vel_ang_temp_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace adi_imu
{

namespace msg
{

namespace builder
{

class Init_VelAngTempData_temperature
{
public:
  explicit Init_VelAngTempData_temperature(::adi_imu::msg::VelAngTempData & msg)
  : msg_(msg)
  {}
  ::adi_imu::msg::VelAngTempData temperature(::adi_imu::msg::VelAngTempData::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::adi_imu::msg::VelAngTempData msg_;
};

class Init_VelAngTempData_delta_angle
{
public:
  explicit Init_VelAngTempData_delta_angle(::adi_imu::msg::VelAngTempData & msg)
  : msg_(msg)
  {}
  Init_VelAngTempData_temperature delta_angle(::adi_imu::msg::VelAngTempData::_delta_angle_type arg)
  {
    msg_.delta_angle = std::move(arg);
    return Init_VelAngTempData_temperature(msg_);
  }

private:
  ::adi_imu::msg::VelAngTempData msg_;
};

class Init_VelAngTempData_delta_velocity
{
public:
  explicit Init_VelAngTempData_delta_velocity(::adi_imu::msg::VelAngTempData & msg)
  : msg_(msg)
  {}
  Init_VelAngTempData_delta_angle delta_velocity(::adi_imu::msg::VelAngTempData::_delta_velocity_type arg)
  {
    msg_.delta_velocity = std::move(arg);
    return Init_VelAngTempData_delta_angle(msg_);
  }

private:
  ::adi_imu::msg::VelAngTempData msg_;
};

class Init_VelAngTempData_header
{
public:
  Init_VelAngTempData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VelAngTempData_delta_velocity header(::adi_imu::msg::VelAngTempData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VelAngTempData_delta_velocity(msg_);
  }

private:
  ::adi_imu::msg::VelAngTempData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::adi_imu::msg::VelAngTempData>()
{
  return adi_imu::msg::builder::Init_VelAngTempData_header();
}

}  // namespace adi_imu

#endif  // ADI_IMU__MSG__DETAIL__VEL_ANG_TEMP_DATA__BUILDER_HPP_
