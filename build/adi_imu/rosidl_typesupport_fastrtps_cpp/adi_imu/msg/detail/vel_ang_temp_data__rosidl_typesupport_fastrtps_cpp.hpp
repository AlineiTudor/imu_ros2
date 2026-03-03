// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from adi_imu:msg/VelAngTempData.idl
// generated code does not contain a copyright notice

#ifndef ADI_IMU__MSG__DETAIL__VEL_ANG_TEMP_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ADI_IMU__MSG__DETAIL__VEL_ANG_TEMP_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "adi_imu/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "adi_imu/msg/detail/vel_ang_temp_data__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace adi_imu
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_adi_imu
cdr_serialize(
  const adi_imu::msg::VelAngTempData & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_adi_imu
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  adi_imu::msg::VelAngTempData & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_adi_imu
get_serialized_size(
  const adi_imu::msg::VelAngTempData & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_adi_imu
max_serialized_size_VelAngTempData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace adi_imu

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_adi_imu
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, adi_imu, msg, VelAngTempData)();

#ifdef __cplusplus
}
#endif

#endif  // ADI_IMU__MSG__DETAIL__VEL_ANG_TEMP_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
