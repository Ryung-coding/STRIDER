// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from sbus_interfaces:msg/SbusSignal.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "sbus_interfaces/msg/detail/sbus_signal__struct.h"
#include "sbus_interfaces/msg/detail/sbus_signal__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace sbus_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _SbusSignal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SbusSignal_type_support_ids_t;

static const _SbusSignal_type_support_ids_t _SbusSignal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SbusSignal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SbusSignal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SbusSignal_type_support_symbol_names_t _SbusSignal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sbus_interfaces, msg, SbusSignal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sbus_interfaces, msg, SbusSignal)),
  }
};

typedef struct _SbusSignal_type_support_data_t
{
  void * data[2];
} _SbusSignal_type_support_data_t;

static _SbusSignal_type_support_data_t _SbusSignal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SbusSignal_message_typesupport_map = {
  2,
  "sbus_interfaces",
  &_SbusSignal_message_typesupport_ids.typesupport_identifier[0],
  &_SbusSignal_message_typesupport_symbol_names.symbol_name[0],
  &_SbusSignal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SbusSignal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SbusSignal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace sbus_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, sbus_interfaces, msg, SbusSignal)() {
  return &::sbus_interfaces::msg::rosidl_typesupport_c::SbusSignal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
