// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from adi_imu:msg/ImuDiagDataADIS1647X.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "adi_imu/msg/detail/imu_diag_data_adis1647_x__rosidl_typesupport_introspection_c.h"
#include "adi_imu/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "adi_imu/msg/detail/imu_diag_data_adis1647_x__functions.h"
#include "adi_imu/msg/detail/imu_diag_data_adis1647_x__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void adi_imu__msg__ImuDiagDataADIS1647X__rosidl_typesupport_introspection_c__ImuDiagDataADIS1647X_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  adi_imu__msg__ImuDiagDataADIS1647X__init(message_memory);
}

void adi_imu__msg__ImuDiagDataADIS1647X__rosidl_typesupport_introspection_c__ImuDiagDataADIS1647X_fini_function(void * message_memory)
{
  adi_imu__msg__ImuDiagDataADIS1647X__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember adi_imu__msg__ImuDiagDataADIS1647X__rosidl_typesupport_introspection_c__ImuDiagDataADIS1647X_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(adi_imu__msg__ImuDiagDataADIS1647X, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "diag_data_path_overrun",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(adi_imu__msg__ImuDiagDataADIS1647X, diag_data_path_overrun),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "diag_flash_memory_update_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(adi_imu__msg__ImuDiagDataADIS1647X, diag_flash_memory_update_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "diag_spi_communication_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(adi_imu__msg__ImuDiagDataADIS1647X, diag_spi_communication_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "diag_standby_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(adi_imu__msg__ImuDiagDataADIS1647X, diag_standby_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "diag_sensor_self_test_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(adi_imu__msg__ImuDiagDataADIS1647X, diag_sensor_self_test_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "diag_flash_memory_test_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(adi_imu__msg__ImuDiagDataADIS1647X, diag_flash_memory_test_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "diag_clock_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(adi_imu__msg__ImuDiagDataADIS1647X, diag_clock_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "diag_flash_memory_write_count_exceeded_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(adi_imu__msg__ImuDiagDataADIS1647X, diag_flash_memory_write_count_exceeded_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flash_counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(adi_imu__msg__ImuDiagDataADIS1647X, flash_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers adi_imu__msg__ImuDiagDataADIS1647X__rosidl_typesupport_introspection_c__ImuDiagDataADIS1647X_message_members = {
  "adi_imu__msg",  // message namespace
  "ImuDiagDataADIS1647X",  // message name
  10,  // number of fields
  sizeof(adi_imu__msg__ImuDiagDataADIS1647X),
  adi_imu__msg__ImuDiagDataADIS1647X__rosidl_typesupport_introspection_c__ImuDiagDataADIS1647X_message_member_array,  // message members
  adi_imu__msg__ImuDiagDataADIS1647X__rosidl_typesupport_introspection_c__ImuDiagDataADIS1647X_init_function,  // function to initialize message memory (memory has to be allocated)
  adi_imu__msg__ImuDiagDataADIS1647X__rosidl_typesupport_introspection_c__ImuDiagDataADIS1647X_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t adi_imu__msg__ImuDiagDataADIS1647X__rosidl_typesupport_introspection_c__ImuDiagDataADIS1647X_message_type_support_handle = {
  0,
  &adi_imu__msg__ImuDiagDataADIS1647X__rosidl_typesupport_introspection_c__ImuDiagDataADIS1647X_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_adi_imu
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, adi_imu, msg, ImuDiagDataADIS1647X)() {
  adi_imu__msg__ImuDiagDataADIS1647X__rosidl_typesupport_introspection_c__ImuDiagDataADIS1647X_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!adi_imu__msg__ImuDiagDataADIS1647X__rosidl_typesupport_introspection_c__ImuDiagDataADIS1647X_message_type_support_handle.typesupport_identifier) {
    adi_imu__msg__ImuDiagDataADIS1647X__rosidl_typesupport_introspection_c__ImuDiagDataADIS1647X_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &adi_imu__msg__ImuDiagDataADIS1647X__rosidl_typesupport_introspection_c__ImuDiagDataADIS1647X_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
