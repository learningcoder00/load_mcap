// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_common_msgs:msg/Header.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
#include "deva_common_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_common_msgs/msg/detail/header__functions.h"
#include "deva_common_msgs/msg/detail/header__struct.h"


// Include directives for member types
// Member `stamp`
// Member `pub_stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
// Member `pub_stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `frame_id`
#include "deva_common_msgs/msg/string.h"
// Member `frame_id`
#include "deva_common_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_common_msgs__msg__Header__rosidl_typesupport_introspection_c__Header_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_common_msgs__msg__Header__init(message_memory);
}

void deva_common_msgs__msg__Header__rosidl_typesupport_introspection_c__Header_fini_function(void * message_memory)
{
  deva_common_msgs__msg__Header__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember deva_common_msgs__msg__Header__rosidl_typesupport_introspection_c__Header_message_member_array[4] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_common_msgs__msg__Header, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pub_stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_common_msgs__msg__Header, pub_stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_common_msgs__msg__Header, index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_common_msgs__msg__Header, frame_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_common_msgs__msg__Header__rosidl_typesupport_introspection_c__Header_message_members = {
  "deva_common_msgs__msg",  // message namespace
  "Header",  // message name
  4,  // number of fields
  sizeof(deva_common_msgs__msg__Header),
  deva_common_msgs__msg__Header__rosidl_typesupport_introspection_c__Header_message_member_array,  // message members
  deva_common_msgs__msg__Header__rosidl_typesupport_introspection_c__Header_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_common_msgs__msg__Header__rosidl_typesupport_introspection_c__Header_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_common_msgs__msg__Header__rosidl_typesupport_introspection_c__Header_message_type_support_handle = {
  0,
  &deva_common_msgs__msg__Header__rosidl_typesupport_introspection_c__Header_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_common_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)() {
  deva_common_msgs__msg__Header__rosidl_typesupport_introspection_c__Header_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  deva_common_msgs__msg__Header__rosidl_typesupport_introspection_c__Header_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  deva_common_msgs__msg__Header__rosidl_typesupport_introspection_c__Header_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, String)();
  if (!deva_common_msgs__msg__Header__rosidl_typesupport_introspection_c__Header_message_type_support_handle.typesupport_identifier) {
    deva_common_msgs__msg__Header__rosidl_typesupport_introspection_c__Header_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_common_msgs__msg__Header__rosidl_typesupport_introspection_c__Header_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
