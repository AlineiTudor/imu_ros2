// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from adi_imu:msg/ImuDiagDataADIS1657X.idl
// generated code does not contain a copyright notice
#include "adi_imu/msg/detail/imu_diag_data_adis1657_x__rosidl_typesupport_fastrtps_cpp.hpp"
#include "adi_imu/msg/detail/imu_diag_data_adis1657_x__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace adi_imu
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_adi_imu
cdr_serialize(
  const adi_imu::msg::ImuDiagDataADIS1657X & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: diag_sensor_initialization_failure
  cdr << (ros_message.diag_sensor_initialization_failure ? true : false);
  // Member: diag_data_path_overrun
  cdr << (ros_message.diag_data_path_overrun ? true : false);
  // Member: diag_flash_memory_update_error
  cdr << (ros_message.diag_flash_memory_update_error ? true : false);
  // Member: diag_spi_communication_error
  cdr << (ros_message.diag_spi_communication_error ? true : false);
  // Member: diag_standby_mode
  cdr << (ros_message.diag_standby_mode ? true : false);
  // Member: diag_sensor_self_test_error
  cdr << (ros_message.diag_sensor_self_test_error ? true : false);
  // Member: diag_flash_memory_test_error
  cdr << (ros_message.diag_flash_memory_test_error ? true : false);
  // Member: diag_clock_error
  cdr << (ros_message.diag_clock_error ? true : false);
  // Member: diag_x_axis_gyroscope_failure
  cdr << (ros_message.diag_x_axis_gyroscope_failure ? true : false);
  // Member: diag_y_axis_gyroscope_failure
  cdr << (ros_message.diag_y_axis_gyroscope_failure ? true : false);
  // Member: diag_z_axis_gyroscope_failure
  cdr << (ros_message.diag_z_axis_gyroscope_failure ? true : false);
  // Member: diag_x_axis_accelerometer_failure
  cdr << (ros_message.diag_x_axis_accelerometer_failure ? true : false);
  // Member: diag_y_axis_accelerometer_failure
  cdr << (ros_message.diag_y_axis_accelerometer_failure ? true : false);
  // Member: diag_z_axis_accelerometer_failure
  cdr << (ros_message.diag_z_axis_accelerometer_failure ? true : false);
  // Member: diag_aduc_mcu_fault
  cdr << (ros_message.diag_aduc_mcu_fault ? true : false);
  // Member: diag_flash_memory_write_count_exceeded_error
  cdr << (ros_message.diag_flash_memory_write_count_exceeded_error ? true : false);
  // Member: flash_counter
  cdr << ros_message.flash_counter;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_adi_imu
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  adi_imu::msg::ImuDiagDataADIS1657X & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: diag_sensor_initialization_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.diag_sensor_initialization_failure = tmp ? true : false;
  }

  // Member: diag_data_path_overrun
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.diag_data_path_overrun = tmp ? true : false;
  }

  // Member: diag_flash_memory_update_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.diag_flash_memory_update_error = tmp ? true : false;
  }

  // Member: diag_spi_communication_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.diag_spi_communication_error = tmp ? true : false;
  }

  // Member: diag_standby_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.diag_standby_mode = tmp ? true : false;
  }

  // Member: diag_sensor_self_test_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.diag_sensor_self_test_error = tmp ? true : false;
  }

  // Member: diag_flash_memory_test_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.diag_flash_memory_test_error = tmp ? true : false;
  }

  // Member: diag_clock_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.diag_clock_error = tmp ? true : false;
  }

  // Member: diag_x_axis_gyroscope_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.diag_x_axis_gyroscope_failure = tmp ? true : false;
  }

  // Member: diag_y_axis_gyroscope_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.diag_y_axis_gyroscope_failure = tmp ? true : false;
  }

  // Member: diag_z_axis_gyroscope_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.diag_z_axis_gyroscope_failure = tmp ? true : false;
  }

  // Member: diag_x_axis_accelerometer_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.diag_x_axis_accelerometer_failure = tmp ? true : false;
  }

  // Member: diag_y_axis_accelerometer_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.diag_y_axis_accelerometer_failure = tmp ? true : false;
  }

  // Member: diag_z_axis_accelerometer_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.diag_z_axis_accelerometer_failure = tmp ? true : false;
  }

  // Member: diag_aduc_mcu_fault
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.diag_aduc_mcu_fault = tmp ? true : false;
  }

  // Member: diag_flash_memory_write_count_exceeded_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.diag_flash_memory_write_count_exceeded_error = tmp ? true : false;
  }

  // Member: flash_counter
  cdr >> ros_message.flash_counter;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_adi_imu
get_serialized_size(
  const adi_imu::msg::ImuDiagDataADIS1657X & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: diag_sensor_initialization_failure
  {
    size_t item_size = sizeof(ros_message.diag_sensor_initialization_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: diag_data_path_overrun
  {
    size_t item_size = sizeof(ros_message.diag_data_path_overrun);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: diag_flash_memory_update_error
  {
    size_t item_size = sizeof(ros_message.diag_flash_memory_update_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: diag_spi_communication_error
  {
    size_t item_size = sizeof(ros_message.diag_spi_communication_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: diag_standby_mode
  {
    size_t item_size = sizeof(ros_message.diag_standby_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: diag_sensor_self_test_error
  {
    size_t item_size = sizeof(ros_message.diag_sensor_self_test_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: diag_flash_memory_test_error
  {
    size_t item_size = sizeof(ros_message.diag_flash_memory_test_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: diag_clock_error
  {
    size_t item_size = sizeof(ros_message.diag_clock_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: diag_x_axis_gyroscope_failure
  {
    size_t item_size = sizeof(ros_message.diag_x_axis_gyroscope_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: diag_y_axis_gyroscope_failure
  {
    size_t item_size = sizeof(ros_message.diag_y_axis_gyroscope_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: diag_z_axis_gyroscope_failure
  {
    size_t item_size = sizeof(ros_message.diag_z_axis_gyroscope_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: diag_x_axis_accelerometer_failure
  {
    size_t item_size = sizeof(ros_message.diag_x_axis_accelerometer_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: diag_y_axis_accelerometer_failure
  {
    size_t item_size = sizeof(ros_message.diag_y_axis_accelerometer_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: diag_z_axis_accelerometer_failure
  {
    size_t item_size = sizeof(ros_message.diag_z_axis_accelerometer_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: diag_aduc_mcu_fault
  {
    size_t item_size = sizeof(ros_message.diag_aduc_mcu_fault);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: diag_flash_memory_write_count_exceeded_error
  {
    size_t item_size = sizeof(ros_message.diag_flash_memory_write_count_exceeded_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flash_counter
  {
    size_t item_size = sizeof(ros_message.flash_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_adi_imu
max_serialized_size_ImuDiagDataADIS1657X(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: diag_sensor_initialization_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: diag_data_path_overrun
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: diag_flash_memory_update_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: diag_spi_communication_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: diag_standby_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: diag_sensor_self_test_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: diag_flash_memory_test_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: diag_clock_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: diag_x_axis_gyroscope_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: diag_y_axis_gyroscope_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: diag_z_axis_gyroscope_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: diag_x_axis_accelerometer_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: diag_y_axis_accelerometer_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: diag_z_axis_accelerometer_failure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: diag_aduc_mcu_fault
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: diag_flash_memory_write_count_exceeded_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flash_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = adi_imu::msg::ImuDiagDataADIS1657X;
    is_plain =
      (
      offsetof(DataType, flash_counter) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ImuDiagDataADIS1657X__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const adi_imu::msg::ImuDiagDataADIS1657X *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ImuDiagDataADIS1657X__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<adi_imu::msg::ImuDiagDataADIS1657X *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ImuDiagDataADIS1657X__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const adi_imu::msg::ImuDiagDataADIS1657X *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ImuDiagDataADIS1657X__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ImuDiagDataADIS1657X(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ImuDiagDataADIS1657X__callbacks = {
  "adi_imu::msg",
  "ImuDiagDataADIS1657X",
  _ImuDiagDataADIS1657X__cdr_serialize,
  _ImuDiagDataADIS1657X__cdr_deserialize,
  _ImuDiagDataADIS1657X__get_serialized_size,
  _ImuDiagDataADIS1657X__max_serialized_size
};

static rosidl_message_type_support_t _ImuDiagDataADIS1657X__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ImuDiagDataADIS1657X__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace adi_imu

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_adi_imu
const rosidl_message_type_support_t *
get_message_type_support_handle<adi_imu::msg::ImuDiagDataADIS1657X>()
{
  return &adi_imu::msg::typesupport_fastrtps_cpp::_ImuDiagDataADIS1657X__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, adi_imu, msg, ImuDiagDataADIS1657X)() {
  return &adi_imu::msg::typesupport_fastrtps_cpp::_ImuDiagDataADIS1657X__handle;
}

#ifdef __cplusplus
}
#endif
