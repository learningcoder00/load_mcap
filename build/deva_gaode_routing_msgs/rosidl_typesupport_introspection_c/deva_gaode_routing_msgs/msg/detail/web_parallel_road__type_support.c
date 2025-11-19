// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/WebParallelRoad.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/web_parallel_road__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/web_parallel_road__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/web_parallel_road__struct.h"


// Include directives for member types
// Member `parallel_road_list`
#include "deva_gaode_routing_msgs/msg/web_loc_parallel_road.h"
// Member `parallel_road_list`
#include "deva_gaode_routing_msgs/msg/detail/web_loc_parallel_road__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__WebParallelRoad_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__WebParallelRoad__init(message_memory);
}

void deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__WebParallelRoad_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__WebParallelRoad__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__size_function__WebParallelRoad__parallel_road_list(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__WebLocParallelRoad__Sequence * member =
    (const deva_gaode_routing_msgs__msg__WebLocParallelRoad__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__get_const_function__WebParallelRoad__parallel_road_list(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__WebLocParallelRoad__Sequence * member =
    (const deva_gaode_routing_msgs__msg__WebLocParallelRoad__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__get_function__WebParallelRoad__parallel_road_list(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__WebLocParallelRoad__Sequence * member =
    (deva_gaode_routing_msgs__msg__WebLocParallelRoad__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__fetch_function__WebParallelRoad__parallel_road_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__WebLocParallelRoad * item =
    ((const deva_gaode_routing_msgs__msg__WebLocParallelRoad *)
    deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__get_const_function__WebParallelRoad__parallel_road_list(untyped_member, index));
  deva_gaode_routing_msgs__msg__WebLocParallelRoad * value =
    (deva_gaode_routing_msgs__msg__WebLocParallelRoad *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__assign_function__WebParallelRoad__parallel_road_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__WebLocParallelRoad * item =
    ((deva_gaode_routing_msgs__msg__WebLocParallelRoad *)
    deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__get_function__WebParallelRoad__parallel_road_list(untyped_member, index));
  const deva_gaode_routing_msgs__msg__WebLocParallelRoad * value =
    (const deva_gaode_routing_msgs__msg__WebLocParallelRoad *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__resize_function__WebParallelRoad__parallel_road_list(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__WebLocParallelRoad__Sequence * member =
    (deva_gaode_routing_msgs__msg__WebLocParallelRoad__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__WebLocParallelRoad__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__WebLocParallelRoad__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__WebParallelRoad_message_member_array[5] = {
  {
    "count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebParallelRoad, count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebParallelRoad, flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hw_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebParallelRoad, hw_flag),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebParallelRoad, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parallel_road_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebParallelRoad, parallel_road_list),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__size_function__WebParallelRoad__parallel_road_list,  // size() function pointer
    deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__get_const_function__WebParallelRoad__parallel_road_list,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__get_function__WebParallelRoad__parallel_road_list,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__fetch_function__WebParallelRoad__parallel_road_list,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__assign_function__WebParallelRoad__parallel_road_list,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__resize_function__WebParallelRoad__parallel_road_list  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__WebParallelRoad_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "WebParallelRoad",  // message name
  5,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__WebParallelRoad),
  deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__WebParallelRoad_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__WebParallelRoad_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__WebParallelRoad_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__WebParallelRoad_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__WebParallelRoad_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebParallelRoad)() {
  deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__WebParallelRoad_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebLocParallelRoad)();
  if (!deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__WebParallelRoad_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__WebParallelRoad_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__WebParallelRoad__rosidl_typesupport_introspection_c__WebParallelRoad_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
