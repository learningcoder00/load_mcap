// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/RoutingNavPath.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/routing_nav_path__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/routing_nav_path__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/routing_nav_path__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `version`
// Member `md5`
#include "rosidl_runtime_c/string_functions.h"
// Member `start_point`
// Member `way_points`
// Member `end_point`
#include "deva_gaode_routing_msgs/msg/web_point.h"
// Member `start_point`
// Member `way_points`
// Member `end_point`
#include "deva_gaode_routing_msgs/msg/detail/web_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__RoutingNavPath_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__RoutingNavPath__init(message_memory);
}

void deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__RoutingNavPath_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__RoutingNavPath__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__size_function__RoutingNavPath__way_points(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__WebPoint__Sequence * member =
    (const deva_gaode_routing_msgs__msg__WebPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__get_const_function__RoutingNavPath__way_points(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__WebPoint__Sequence * member =
    (const deva_gaode_routing_msgs__msg__WebPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__get_function__RoutingNavPath__way_points(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__WebPoint__Sequence * member =
    (deva_gaode_routing_msgs__msg__WebPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__fetch_function__RoutingNavPath__way_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__WebPoint * item =
    ((const deva_gaode_routing_msgs__msg__WebPoint *)
    deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__get_const_function__RoutingNavPath__way_points(untyped_member, index));
  deva_gaode_routing_msgs__msg__WebPoint * value =
    (deva_gaode_routing_msgs__msg__WebPoint *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__assign_function__RoutingNavPath__way_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__WebPoint * item =
    ((deva_gaode_routing_msgs__msg__WebPoint *)
    deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__get_function__RoutingNavPath__way_points(untyped_member, index));
  const deva_gaode_routing_msgs__msg__WebPoint * value =
    (const deva_gaode_routing_msgs__msg__WebPoint *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__resize_function__RoutingNavPath__way_points(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__WebPoint__Sequence * member =
    (deva_gaode_routing_msgs__msg__WebPoint__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__WebPoint__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__WebPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__RoutingNavPath_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__RoutingNavPath, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__RoutingNavPath, version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__RoutingNavPath, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "md5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__RoutingNavPath, md5),  // bytes offset in struct
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
    offsetof(deva_gaode_routing_msgs__msg__RoutingNavPath, index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__RoutingNavPath, start_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "way_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__RoutingNavPath, way_points),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__size_function__RoutingNavPath__way_points,  // size() function pointer
    deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__get_const_function__RoutingNavPath__way_points,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__get_function__RoutingNavPath__way_points,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__fetch_function__RoutingNavPath__way_points,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__assign_function__RoutingNavPath__way_points,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__resize_function__RoutingNavPath__way_points  // resize(index) function pointer
  },
  {
    "end_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__RoutingNavPath, end_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__RoutingNavPath_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "RoutingNavPath",  // message name
  8,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__RoutingNavPath),
  deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__RoutingNavPath_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__RoutingNavPath_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__RoutingNavPath_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__RoutingNavPath_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__RoutingNavPath_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, RoutingNavPath)() {
  deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__RoutingNavPath_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__RoutingNavPath_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebPoint)();
  deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__RoutingNavPath_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebPoint)();
  deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__RoutingNavPath_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebPoint)();
  if (!deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__RoutingNavPath_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__RoutingNavPath_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__RoutingNavPath__rosidl_typesupport_introspection_c__RoutingNavPath_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
