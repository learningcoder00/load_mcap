// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_function_msgs:msg/MachCalibrationResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_function_msgs/msg/detail/mach_calibration_response__rosidl_typesupport_introspection_c.h"
#include "deva_function_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_function_msgs/msg/detail/mach_calibration_response__functions.h"
#include "deva_function_msgs/msg/detail/mach_calibration_response__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `calibration_response`
// Member `calibration_reason`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__MachCalibrationResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_function_msgs__msg__MachCalibrationResponse__init(message_memory);
}

void deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__MachCalibrationResponse_fini_function(void * message_memory)
{
  deva_function_msgs__msg__MachCalibrationResponse__fini(message_memory);
}

size_t deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__size_function__MachCalibrationResponse__res_content(
  const void * untyped_member)
{
  (void)untyped_member;
  return 256;
}

const void * deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__get_const_function__MachCalibrationResponse__res_content(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__get_function__MachCalibrationResponse__res_content(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__fetch_function__MachCalibrationResponse__res_content(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__get_const_function__MachCalibrationResponse__res_content(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__assign_function__MachCalibrationResponse__res_content(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__get_function__MachCalibrationResponse__res_content(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__MachCalibrationResponse_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__MachCalibrationResponse, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "calibration_response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__MachCalibrationResponse, calibration_response),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "calibration_reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__MachCalibrationResponse, calibration_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "calibration_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__MachCalibrationResponse, calibration_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__MachCalibrationResponse, sensor_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__MachCalibrationResponse, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "res_content",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    256,  // array size
    false,  // is upper bound
    offsetof(deva_function_msgs__msg__MachCalibrationResponse, res_content),  // bytes offset in struct
    NULL,  // default value
    deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__size_function__MachCalibrationResponse__res_content,  // size() function pointer
    deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__get_const_function__MachCalibrationResponse__res_content,  // get_const(index) function pointer
    deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__get_function__MachCalibrationResponse__res_content,  // get(index) function pointer
    deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__fetch_function__MachCalibrationResponse__res_content,  // fetch(index, &value) function pointer
    deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__assign_function__MachCalibrationResponse__res_content,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__MachCalibrationResponse_message_members = {
  "deva_function_msgs__msg",  // message namespace
  "MachCalibrationResponse",  // message name
  7,  // number of fields
  sizeof(deva_function_msgs__msg__MachCalibrationResponse),
  deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__MachCalibrationResponse_message_member_array,  // message members
  deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__MachCalibrationResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__MachCalibrationResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__MachCalibrationResponse_message_type_support_handle = {
  0,
  &deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__MachCalibrationResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_function_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_function_msgs, msg, MachCalibrationResponse)() {
  deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__MachCalibrationResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__MachCalibrationResponse_message_type_support_handle.typesupport_identifier) {
    deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__MachCalibrationResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_function_msgs__msg__MachCalibrationResponse__rosidl_typesupport_introspection_c__MachCalibrationResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
