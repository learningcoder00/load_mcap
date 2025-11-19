// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs:msg/DrivingMode.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "deva_planning_msgs/msg/detail/driving_mode__struct.h"
#include "deva_planning_msgs/msg/detail/driving_mode__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace deva_planning_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _DrivingMode_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DrivingMode_type_support_ids_t;

static const _DrivingMode_type_support_ids_t _DrivingMode_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _DrivingMode_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DrivingMode_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DrivingMode_type_support_symbol_names_t _DrivingMode_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs, msg, DrivingMode)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_planning_msgs, msg, DrivingMode)),
  }
};

typedef struct _DrivingMode_type_support_data_t
{
  void * data[2];
} _DrivingMode_type_support_data_t;

static _DrivingMode_type_support_data_t _DrivingMode_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DrivingMode_message_typesupport_map = {
  2,
  "deva_planning_msgs",
  &_DrivingMode_message_typesupport_ids.typesupport_identifier[0],
  &_DrivingMode_message_typesupport_symbol_names.symbol_name[0],
  &_DrivingMode_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DrivingMode_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DrivingMode_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace deva_planning_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, deva_planning_msgs, msg, DrivingMode)() {
  return &::deva_planning_msgs::msg::rosidl_typesupport_c::DrivingMode_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
