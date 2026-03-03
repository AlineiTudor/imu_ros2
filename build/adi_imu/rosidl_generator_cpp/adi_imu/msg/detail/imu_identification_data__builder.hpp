// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from adi_imu:msg/ImuIdentificationData.idl
// generated code does not contain a copyright notice

#ifndef ADI_IMU__MSG__DETAIL__IMU_IDENTIFICATION_DATA__BUILDER_HPP_
#define ADI_IMU__MSG__DETAIL__IMU_IDENTIFICATION_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "adi_imu/msg/detail/imu_identification_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace adi_imu
{

namespace msg
{

namespace builder
{

class Init_ImuIdentificationData_gyroscope_measurement_range
{
public:
  explicit Init_ImuIdentificationData_gyroscope_measurement_range(::adi_imu::msg::ImuIdentificationData & msg)
  : msg_(msg)
  {}
  ::adi_imu::msg::ImuIdentificationData gyroscope_measurement_range(::adi_imu::msg::ImuIdentificationData::_gyroscope_measurement_range_type arg)
  {
    msg_.gyroscope_measurement_range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::adi_imu::msg::ImuIdentificationData msg_;
};

class Init_ImuIdentificationData_serial_number
{
public:
  explicit Init_ImuIdentificationData_serial_number(::adi_imu::msg::ImuIdentificationData & msg)
  : msg_(msg)
  {}
  Init_ImuIdentificationData_gyroscope_measurement_range serial_number(::adi_imu::msg::ImuIdentificationData::_serial_number_type arg)
  {
    msg_.serial_number = std::move(arg);
    return Init_ImuIdentificationData_gyroscope_measurement_range(msg_);
  }

private:
  ::adi_imu::msg::ImuIdentificationData msg_;
};

class Init_ImuIdentificationData_product_id
{
public:
  explicit Init_ImuIdentificationData_product_id(::adi_imu::msg::ImuIdentificationData & msg)
  : msg_(msg)
  {}
  Init_ImuIdentificationData_serial_number product_id(::adi_imu::msg::ImuIdentificationData::_product_id_type arg)
  {
    msg_.product_id = std::move(arg);
    return Init_ImuIdentificationData_serial_number(msg_);
  }

private:
  ::adi_imu::msg::ImuIdentificationData msg_;
};

class Init_ImuIdentificationData_firmware_date
{
public:
  explicit Init_ImuIdentificationData_firmware_date(::adi_imu::msg::ImuIdentificationData & msg)
  : msg_(msg)
  {}
  Init_ImuIdentificationData_product_id firmware_date(::adi_imu::msg::ImuIdentificationData::_firmware_date_type arg)
  {
    msg_.firmware_date = std::move(arg);
    return Init_ImuIdentificationData_product_id(msg_);
  }

private:
  ::adi_imu::msg::ImuIdentificationData msg_;
};

class Init_ImuIdentificationData_firmware_revision
{
public:
  explicit Init_ImuIdentificationData_firmware_revision(::adi_imu::msg::ImuIdentificationData & msg)
  : msg_(msg)
  {}
  Init_ImuIdentificationData_firmware_date firmware_revision(::adi_imu::msg::ImuIdentificationData::_firmware_revision_type arg)
  {
    msg_.firmware_revision = std::move(arg);
    return Init_ImuIdentificationData_firmware_date(msg_);
  }

private:
  ::adi_imu::msg::ImuIdentificationData msg_;
};

class Init_ImuIdentificationData_header
{
public:
  Init_ImuIdentificationData_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuIdentificationData_firmware_revision header(::adi_imu::msg::ImuIdentificationData::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ImuIdentificationData_firmware_revision(msg_);
  }

private:
  ::adi_imu::msg::ImuIdentificationData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::adi_imu::msg::ImuIdentificationData>()
{
  return adi_imu::msg::builder::Init_ImuIdentificationData_header();
}

}  // namespace adi_imu

#endif  // ADI_IMU__MSG__DETAIL__IMU_IDENTIFICATION_DATA__BUILDER_HPP_
