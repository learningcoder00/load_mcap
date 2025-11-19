// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_map_msgs:msg/LocalMapHeader.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_map_msgs/msg/detail/local_map_header__rosidl_typesupport_introspection_c.h"
#include "deva_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_map_msgs/msg/detail/local_map_header__functions.h"
#include "deva_map_msgs/msg/detail/local_map_header__struct.h"


// Include directives for member types
// Member `send_localmap_header`
// Member `received_preseptionmap_header`
// Member `preseptionmap_header`
#include "deva_common_msgs/msg/header.h"
// Member `send_localmap_header`
// Member `received_preseptionmap_header`
// Member `preseptionmap_header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_map_msgs__msg__LocalMapHeader__rosidl_typesupport_introspection_c__LocalMapHeader_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_map_msgs__msg__LocalMapHeader__init(message_memory);
}

void deva_map_msgs__msg__LocalMapHeader__rosidl_typesupport_introspection_c__LocalMapHeader_fini_function(void * message_memory)
{
  deva_map_msgs__msg__LocalMapHeader__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember deva_map_msgs__msg__LocalMapHeader__rosidl_typesupport_introspection_c__LocalMapHeader_message_member_array[3] = {
  {
    "send_localmap_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__LocalMapHeader, send_localmap_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "received_preseptionmap_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__LocalMapHeader, received_preseptionmap_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "preseptionmap_header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__LocalMapHeader, preseptionmap_header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_map_msgs__msg__LocalMapHeader__rosidl_typesupport_introspection_c__LocalMapHeader_message_members = {
  "deva_map_msgs__msg",  // message namespace
  "LocalMapHeader",  // message name
  3,  // number of fields
  sizeof(deva_map_msgs__msg__LocalMapHeader),
  deva_map_msgs__msg__LocalMapHeader__rosidl_typesupport_introspection_c__LocalMapHeader_message_member_array,  // message members
  deva_map_msgs__msg__LocalMapHeader__rosidl_typesupport_introspection_c__LocalMapHeader_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_map_msgs__msg__LocalMapHeader__rosidl_typesupport_introspection_c__LocalMapHeader_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_map_msgs__msg__LocalMapHeader__rosidl_typesupport_introspection_c__LocalMapHeader_message_type_support_handle = {
  0,
  &deva_map_msgs__msg__LocalMapHeader__rosidl_typesupport_introspection_c__LocalMapHeader_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, LocalMapHeader)() {
  deva_map_msgs__msg__LocalMapHeader__rosidl_typesupport_introspection_c__LocalMapHeader_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  deva_map_msgs__msg__LocalMapHeader__rosidl_typesupport_introspection_c__LocalMapHeader_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  deva_map_msgs__msg__LocalMapHeader__rosidl_typesupport_introspection_c__LocalMapHeader_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  if (!deva_map_msgs__msg__LocalMapHeader__rosidl_typesupport_introspection_c__LocalMapHeader_message_type_support_handle.typesupport_identifier) {
    deva_map_msgs__msg__LocalMapHeader__rosidl_typesupport_introspection_c__LocalMapHeader_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_map_msgs__msg__LocalMapHeader__rosidl_typesupport_introspection_c__LocalMapHeader_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
