// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from environment_model_msgs:msg/VirtualLineInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "environment_model_msgs/msg/detail/virtual_line_info__rosidl_typesupport_introspection_c.h"
#include "environment_model_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "environment_model_msgs/msg/detail/virtual_line_info__functions.h"
#include "environment_model_msgs/msg/detail/virtual_line_info__struct.h"


// Include directives for member types
// Member `ori_ids`
#include "environment_model_msgs/msg/pair_int.h"
// Member `ori_ids`
#include "environment_model_msgs/msg/detail/pair_int__rosidl_typesupport_introspection_c.h"
// Member `e2e_pair`
#include "environment_model_msgs/msg/pair_double.h"
// Member `e2e_pair`
#include "environment_model_msgs/msg/detail/pair_double__rosidl_typesupport_introspection_c.h"
// Member `exit_lane_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void environment_model_msgs__msg__VirtualLineInfo__rosidl_typesupport_introspection_c__VirtualLineInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  environment_model_msgs__msg__VirtualLineInfo__init(message_memory);
}

void environment_model_msgs__msg__VirtualLineInfo__rosidl_typesupport_introspection_c__VirtualLineInfo_fini_function(void * message_memory)
{
  environment_model_msgs__msg__VirtualLineInfo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember environment_model_msgs__msg__VirtualLineInfo__rosidl_typesupport_introspection_c__VirtualLineInfo_message_member_array[6] = {
  {
    "enum_vlane_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__VirtualLineInfo, enum_vlane_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "virtual_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__VirtualLineInfo, virtual_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ori_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__VirtualLineInfo, ori_ids),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "e2e_pair",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__VirtualLineInfo, e2e_pair),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "exit_lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__VirtualLineInfo, exit_lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "exit_seq_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(environment_model_msgs__msg__VirtualLineInfo, exit_seq_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers environment_model_msgs__msg__VirtualLineInfo__rosidl_typesupport_introspection_c__VirtualLineInfo_message_members = {
  "environment_model_msgs__msg",  // message namespace
  "VirtualLineInfo",  // message name
  6,  // number of fields
  sizeof(environment_model_msgs__msg__VirtualLineInfo),
  environment_model_msgs__msg__VirtualLineInfo__rosidl_typesupport_introspection_c__VirtualLineInfo_message_member_array,  // message members
  environment_model_msgs__msg__VirtualLineInfo__rosidl_typesupport_introspection_c__VirtualLineInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  environment_model_msgs__msg__VirtualLineInfo__rosidl_typesupport_introspection_c__VirtualLineInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t environment_model_msgs__msg__VirtualLineInfo__rosidl_typesupport_introspection_c__VirtualLineInfo_message_type_support_handle = {
  0,
  &environment_model_msgs__msg__VirtualLineInfo__rosidl_typesupport_introspection_c__VirtualLineInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_environment_model_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, VirtualLineInfo)() {
  environment_model_msgs__msg__VirtualLineInfo__rosidl_typesupport_introspection_c__VirtualLineInfo_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, PairInt)();
  environment_model_msgs__msg__VirtualLineInfo__rosidl_typesupport_introspection_c__VirtualLineInfo_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, environment_model_msgs, msg, PairDouble)();
  if (!environment_model_msgs__msg__VirtualLineInfo__rosidl_typesupport_introspection_c__VirtualLineInfo_message_type_support_handle.typesupport_identifier) {
    environment_model_msgs__msg__VirtualLineInfo__rosidl_typesupport_introspection_c__VirtualLineInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &environment_model_msgs__msg__VirtualLineInfo__rosidl_typesupport_introspection_c__VirtualLineInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
