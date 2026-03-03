// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from adi_imu:msg/ImuDiagDataADIS1654X.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "adi_imu/msg/detail/imu_diag_data_adis1654_x__struct.h"
#include "adi_imu/msg/detail/imu_diag_data_adis1654_x__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace adi_imu
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _ImuDiagDataADIS1654X_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ImuDiagDataADIS1654X_type_support_ids_t;

static const _ImuDiagDataADIS1654X_type_support_ids_t _ImuDiagDataADIS1654X_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ImuDiagDataADIS1654X_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ImuDiagDataADIS1654X_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ImuDiagDataADIS1654X_type_support_symbol_names_t _ImuDiagDataADIS1654X_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, adi_imu, msg, ImuDiagDataADIS1654X)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, adi_imu, msg, ImuDiagDataADIS1654X)),
  }
};

typedef struct _ImuDiagDataADIS1654X_type_support_data_t
{
  void * data[2];
} _ImuDiagDataADIS1654X_type_support_data_t;

static _ImuDiagDataADIS1654X_type_support_data_t _ImuDiagDataADIS1654X_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ImuDiagDataADIS1654X_message_typesupport_map = {
  2,
  "adi_imu",
  &_ImuDiagDataADIS1654X_message_typesupport_ids.typesupport_identifier[0],
  &_ImuDiagDataADIS1654X_message_typesupport_symbol_names.symbol_name[0],
  &_ImuDiagDataADIS1654X_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ImuDiagDataADIS1654X_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ImuDiagDataADIS1654X_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace adi_imu

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, adi_imu, msg, ImuDiagDataADIS1654X)() {
  return &::adi_imu::msg::rosidl_typesupport_c::ImuDiagDataADIS1654X_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
