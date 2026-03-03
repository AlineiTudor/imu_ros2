// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from adi_imu:msg/VelAngTempData.idl
// generated code does not contain a copyright notice

#ifndef ADI_IMU__MSG__DETAIL__VEL_ANG_TEMP_DATA__TRAITS_HPP_
#define ADI_IMU__MSG__DETAIL__VEL_ANG_TEMP_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "adi_imu/msg/detail/vel_ang_temp_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'delta_velocity'
// Member 'delta_angle'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace adi_imu
{

namespace msg
{

inline void to_flow_style_yaml(
  const VelAngTempData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: delta_velocity
  {
    out << "delta_velocity: ";
    to_flow_style_yaml(msg.delta_velocity, out);
    out << ", ";
  }

  // member: delta_angle
  {
    out << "delta_angle: ";
    to_flow_style_yaml(msg.delta_angle, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VelAngTempData & msg,
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

  // member: delta_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_velocity:\n";
    to_block_style_yaml(msg.delta_velocity, out, indentation + 2);
  }

  // member: delta_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_angle:\n";
    to_block_style_yaml(msg.delta_angle, out, indentation + 2);
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VelAngTempData & msg, bool use_flow_style = false)
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
  const adi_imu::msg::VelAngTempData & msg,
  std::ostream & out, size_t indentation = 0)
{
  adi_imu::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use adi_imu::msg::to_yaml() instead")]]
inline std::string to_yaml(const adi_imu::msg::VelAngTempData & msg)
{
  return adi_imu::msg::to_yaml(msg);
}

template<>
inline const char * data_type<adi_imu::msg::VelAngTempData>()
{
  return "adi_imu::msg::VelAngTempData";
}

template<>
inline const char * name<adi_imu::msg::VelAngTempData>()
{
  return "adi_imu/msg/VelAngTempData";
}

template<>
struct has_fixed_size<adi_imu::msg::VelAngTempData>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<adi_imu::msg::VelAngTempData>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<adi_imu::msg::VelAngTempData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ADI_IMU__MSG__DETAIL__VEL_ANG_TEMP_DATA__TRAITS_HPP_
