// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/WebLocParallelRoad.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/web_loc_parallel_road__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/web_loc_parallel_road__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/web_loc_parallel_road__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__WebLocParallelRoad__rosidl_typesupport_introspection_c__WebLocParallelRoad_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__WebLocParallelRoad__init(message_memory);
}

void deva_gaode_routing_msgs__msg__WebLocParallelRoad__rosidl_typesupport_introspection_c__WebLocParallelRoad_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__WebLocParallelRoad__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__WebLocParallelRoad__rosidl_typesupport_introspection_c__WebLocParallelRoad_message_member_array[4] = {
  {
    "formway",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebLocParallelRoad, formway),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebLocParallelRoad, road_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebLocParallelRoad, road_id),  // bytes offset in struct
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
    offsetof(deva_gaode_routing_msgs__msg__WebLocParallelRoad, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__WebLocParallelRoad__rosidl_typesupport_introspection_c__WebLocParallelRoad_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "WebLocParallelRoad",  // message name
  4,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__WebLocParallelRoad),
  deva_gaode_routing_msgs__msg__WebLocParallelRoad__rosidl_typesupport_introspection_c__WebLocParallelRoad_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__WebLocParallelRoad__rosidl_typesupport_introspection_c__WebLocParallelRoad_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__WebLocParallelRoad__rosidl_typesupport_introspection_c__WebLocParallelRoad_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__WebLocParallelRoad__rosidl_typesupport_introspection_c__WebLocParallelRoad_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__WebLocParallelRoad__rosidl_typesupport_introspection_c__WebLocParallelRoad_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebLocParallelRoad)() {
  if (!deva_gaode_routing_msgs__msg__WebLocParallelRoad__rosidl_typesupport_introspection_c__WebLocParallelRoad_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__WebLocParallelRoad__rosidl_typesupport_introspection_c__WebLocParallelRoad_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__WebLocParallelRoad__rosidl_typesupport_introspection_c__WebLocParallelRoad_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
