// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_navi_msgs:msg/LineIconPointProto.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_navi_msgs/msg/detail/line_icon_point_proto__rosidl_typesupport_introspection_c.h"
#include "deva_navi_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_navi_msgs/msg/detail/line_icon_point_proto__functions.h"
#include "deva_navi_msgs/msg/detail/line_icon_point_proto__struct.h"


// Include directives for member types
// Member `point`
#include "deva_navi_msgs/msg/coord3_d_double_proto.h"
// Member `point`
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_navi_msgs__msg__LineIconPointProto__rosidl_typesupport_introspection_c__LineIconPointProto_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_navi_msgs__msg__LineIconPointProto__init(message_memory);
}

void deva_navi_msgs__msg__LineIconPointProto__rosidl_typesupport_introspection_c__LineIconPointProto_fini_function(void * message_memory)
{
  deva_navi_msgs__msg__LineIconPointProto__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember deva_navi_msgs__msg__LineIconPointProto__rosidl_typesupport_introspection_c__LineIconPointProto_message_member_array[2] = {
  {
    "point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LineIconPointProto, point),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__LineIconPointProto, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_navi_msgs__msg__LineIconPointProto__rosidl_typesupport_introspection_c__LineIconPointProto_message_members = {
  "deva_navi_msgs__msg",  // message namespace
  "LineIconPointProto",  // message name
  2,  // number of fields
  sizeof(deva_navi_msgs__msg__LineIconPointProto),
  deva_navi_msgs__msg__LineIconPointProto__rosidl_typesupport_introspection_c__LineIconPointProto_message_member_array,  // message members
  deva_navi_msgs__msg__LineIconPointProto__rosidl_typesupport_introspection_c__LineIconPointProto_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_navi_msgs__msg__LineIconPointProto__rosidl_typesupport_introspection_c__LineIconPointProto_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_navi_msgs__msg__LineIconPointProto__rosidl_typesupport_introspection_c__LineIconPointProto_message_type_support_handle = {
  0,
  &deva_navi_msgs__msg__LineIconPointProto__rosidl_typesupport_introspection_c__LineIconPointProto_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_navi_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, LineIconPointProto)() {
  deva_navi_msgs__msg__LineIconPointProto__rosidl_typesupport_introspection_c__LineIconPointProto_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, Coord3DDoubleProto)();
  if (!deva_navi_msgs__msg__LineIconPointProto__rosidl_typesupport_introspection_c__LineIconPointProto_message_type_support_handle.typesupport_identifier) {
    deva_navi_msgs__msg__LineIconPointProto__rosidl_typesupport_introspection_c__LineIconPointProto_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_navi_msgs__msg__LineIconPointProto__rosidl_typesupport_introspection_c__LineIconPointProto_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
