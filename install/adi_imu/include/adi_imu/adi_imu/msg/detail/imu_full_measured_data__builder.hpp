// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from adi_imu:msg/ImuFullMeasuredData.idl
// generated code does not contain a copyright notice

#ifndef ADI_IMU__MSG__DETAIL__IMU_FULL_MEASURED_DATA__BUILDER_HPP_
#define ADI_IMU__MSG__DETAIL__IMU_FULL_MEASURED_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "adi_imu/msg/detail/imu_full_measured_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace adi_imu
{

namespace msg
{

namespace builder
{

class Init_ImuFullMeasuredData_temperature
{
public:
  explicit Init_ImuFullMeasuredData_temperature(::adi_imu::msg::ImuFullMeasuredData & msg)
  : msg_(msg)
  {}
  ::adi_imu::msg::ImuFullMeasuredData temperature(::adi_imu::msg::ImuFullMeasuredData::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::adi_imu::msg::ImuFullMeasuredData msg_;
};

class Init_ImuFullMeasuredData_delta_angle
{
public:
  explicit Init_ImuFullMeasuredData_delta_angle(::adi_imu::msg::ImuFullMeasuredData & msg)
  : msg_(msg)
  {}
  Init_ImuFullMeasuredData_temperature delta_angle(::adi_imu::msg::ImuFullMeasuredData::_delta_angle_type arg)
  {
    msg_.delta_angle = std::move(arg);
    return Init_ImuFullMeasuredData_temperature(msg_);
  }

private:
  ::adi_imu::msg::ImuFullMeasuredData msg_;
};

class Init_ImuFullMeasuredData_delta_velocity
{
public:
  explicit Init_ImuFullMeasuredData_delta_velocity(::adi_imu::msg::ImuFullMeasuredData & msg)
  : msg_(msg)
  {}
  Init_ImuFullMeasuredData_delta_angle delta_velocity(::adi_imu::msg::ImuFullMeasuredData::_delta_velocity_type arg)
  {
    msg_.delta_velocity = std::move(arg);
    return Init_ImuFullMeasuredData_delta_angle(msg_);
  }

private:
  ::adi_imu::msg::ImuFullMeasuredData msg_;
};

class Init_ImuFullMeasuredData_angular_velocity
{
public:
  explicit Init_ImuFullMeasuredData_angular_velocity(::adi_imu::msg::ImuFullMeasuredData & msg)
  : msg_(msg)
  {}
  Init_ImuFullMeasuredData_delta_velocity angular_velocity(::adi_imu::msg::ImuFullMeasuredData::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_ImuFullMeasuredData_delta_velocity(msg_);
  }

private:
  ::adi_imu::msg::ImuFullMeasuredData msg_;
};

class Init_ImuFullMeasuredData_linear_acceleration
{
public:
  explicit Init_ImuFullMeasuredData_linear_acceleration(::adi_imu::msg::ImuFullMeasuredData & msg)
  : msg_(msg)
  {}
  Init_ImuFullMeasuredData_angular_velocity linear_acceleration(::adi_imu::msg::ImuFullMeasuredData::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_ImuFullMeasuredData_angular_velocity(msg_);
  }

private:
  ::adi_imu::msg::ImuFullMeasuredData msg_;
};

class Init_ImuFullMeasuredData_header
{
public:
  Init_ImuFullMeasuredData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuFullMeasuredData_linear_acceleration header(::adi_imu::msg::ImuFullMeasuredData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ImuFullMeasuredData_linear_acceleration(msg_);
  }

private:
  ::adi_imu::msg::ImuFullMeasuredData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::adi_imu::msg::ImuFullMeasuredData>()
{
  return adi_imu::msg::builder::Init_ImuFullMeasuredData_header();
}

}  // namespace adi_imu

#endif  // ADI_IMU__MSG__DETAIL__IMU_FULL_MEASURED_DATA__BUILDER_HPP_
