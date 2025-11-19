// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rviz_plug_msg:msg/BywireDiag.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rviz_plug_msg/msg/detail/bywire_diag__rosidl_typesupport_introspection_c.h"
#include "rviz_plug_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rviz_plug_msg/msg/detail/bywire_diag__functions.h"
#include "rviz_plug_msg/msg/detail/bywire_diag__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `node_name`
// Member `detail`
#include "rosidl_runtime_c/string_functions.h"
// Member `type`
#include "rviz_plug_msg/msg/bywire_msg_type.h"
// Member `type`
#include "rviz_plug_msg/msg/detail/bywire_msg_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rviz_plug_msg__msg__BywireDiag__rosidl_typesupport_introspection_c__BywireDiag_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rviz_plug_msg__msg__BywireDiag__init(message_memory);
}

void rviz_plug_msg__msg__BywireDiag__rosidl_typesupport_introspection_c__BywireDiag_fini_function(void * message_memory)
{
  rviz_plug_msg__msg__BywireDiag__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rviz_plug_msg__msg__BywireDiag__rosidl_typesupport_introspection_c__BywireDiag_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_plug_msg__msg__BywireDiag, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_plug_msg__msg__BywireDiag, node_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_plug_msg__msg__BywireDiag, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_plug_msg__msg__BywireDiag, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detail",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rviz_plug_msg__msg__BywireDiag, detail),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rviz_plug_msg__msg__BywireDiag__rosidl_typesupport_introspection_c__BywireDiag_message_members = {
  "rviz_plug_msg__msg",  // message namespace
  "BywireDiag",  // message name
  5,  // number of fields
  sizeof(rviz_plug_msg__msg__BywireDiag),
  rviz_plug_msg__msg__BywireDiag__rosidl_typesupport_introspection_c__BywireDiag_message_member_array,  // message members
  rviz_plug_msg__msg__BywireDiag__rosidl_typesupport_introspection_c__BywireDiag_init_function,  // function to initialize message memory (memory has to be allocated)
  rviz_plug_msg__msg__BywireDiag__rosidl_typesupport_introspection_c__BywireDiag_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rviz_plug_msg__msg__BywireDiag__rosidl_typesupport_introspection_c__BywireDiag_message_type_support_handle = {
  0,
  &rviz_plug_msg__msg__BywireDiag__rosidl_typesupport_introspection_c__BywireDiag_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rviz_plug_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rviz_plug_msg, msg, BywireDiag)() {
  rviz_plug_msg__msg__BywireDiag__rosidl_typesupport_introspection_c__BywireDiag_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  rviz_plug_msg__msg__BywireDiag__rosidl_typesupport_introspection_c__BywireDiag_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rviz_plug_msg, msg, BywireMsgType)();
  if (!rviz_plug_msg__msg__BywireDiag__rosidl_typesupport_introspection_c__BywireDiag_message_type_support_handle.typesupport_identifier) {
    rviz_plug_msg__msg__BywireDiag__rosidl_typesupport_introspection_c__BywireDiag_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rviz_plug_msg__msg__BywireDiag__rosidl_typesupport_introspection_c__BywireDiag_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
