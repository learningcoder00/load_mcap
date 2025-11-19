// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/WebRoad.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/web_road__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/web_road__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/web_road__struct.h"


// Include directives for member types
// Member `coord_list`
#include "deva_gaode_routing_msgs/msg/web_point.h"
// Member `coord_list`
#include "deva_gaode_routing_msgs/msg/detail/web_point__rosidl_typesupport_introspection_c.h"
// Member `intersection_msg`
#include "deva_gaode_routing_msgs/msg/web_intersection.h"
// Member `intersection_msg`
#include "deva_gaode_routing_msgs/msg/detail/web_intersection__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__WebRoad_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__WebRoad__init(message_memory);
}

void deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__WebRoad_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__WebRoad__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__size_function__WebRoad__coord_list(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__WebPoint__Sequence * member =
    (const deva_gaode_routing_msgs__msg__WebPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__get_const_function__WebRoad__coord_list(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__WebPoint__Sequence * member =
    (const deva_gaode_routing_msgs__msg__WebPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__get_function__WebRoad__coord_list(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__WebPoint__Sequence * member =
    (deva_gaode_routing_msgs__msg__WebPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__fetch_function__WebRoad__coord_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__WebPoint * item =
    ((const deva_gaode_routing_msgs__msg__WebPoint *)
    deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__get_const_function__WebRoad__coord_list(untyped_member, index));
  deva_gaode_routing_msgs__msg__WebPoint * value =
    (deva_gaode_routing_msgs__msg__WebPoint *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__assign_function__WebRoad__coord_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__WebPoint * item =
    ((deva_gaode_routing_msgs__msg__WebPoint *)
    deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__get_function__WebRoad__coord_list(untyped_member, index));
  const deva_gaode_routing_msgs__msg__WebPoint * value =
    (const deva_gaode_routing_msgs__msg__WebPoint *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__resize_function__WebRoad__coord_list(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__WebPoint__Sequence * member =
    (deva_gaode_routing_msgs__msg__WebPoint__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__WebPoint__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__WebPoint__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__size_function__WebRoad__intersection_msg(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__WebIntersection__Sequence * member =
    (const deva_gaode_routing_msgs__msg__WebIntersection__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__get_const_function__WebRoad__intersection_msg(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__WebIntersection__Sequence * member =
    (const deva_gaode_routing_msgs__msg__WebIntersection__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__get_function__WebRoad__intersection_msg(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__WebIntersection__Sequence * member =
    (deva_gaode_routing_msgs__msg__WebIntersection__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__fetch_function__WebRoad__intersection_msg(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__WebIntersection * item =
    ((const deva_gaode_routing_msgs__msg__WebIntersection *)
    deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__get_const_function__WebRoad__intersection_msg(untyped_member, index));
  deva_gaode_routing_msgs__msg__WebIntersection * value =
    (deva_gaode_routing_msgs__msg__WebIntersection *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__assign_function__WebRoad__intersection_msg(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__WebIntersection * item =
    ((deva_gaode_routing_msgs__msg__WebIntersection *)
    deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__get_function__WebRoad__intersection_msg(untyped_member, index));
  const deva_gaode_routing_msgs__msg__WebIntersection * value =
    (const deva_gaode_routing_msgs__msg__WebIntersection *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__resize_function__WebRoad__intersection_msg(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__WebIntersection__Sequence * member =
    (deva_gaode_routing_msgs__msg__WebIntersection__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__WebIntersection__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__WebIntersection__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__WebRoad_message_member_array[12] = {
  {
    "has_traffic_light",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebRoad, has_traffic_light),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebRoad, distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebRoad, time),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebRoad, road_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_class",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebRoad, road_class),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "specific_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebRoad, specific_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "road_direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebRoad, road_direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebRoad, link_direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coord_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebRoad, coord_list),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__size_function__WebRoad__coord_list,  // size() function pointer
    deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__get_const_function__WebRoad__coord_list,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__get_function__WebRoad__coord_list,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__fetch_function__WebRoad__coord_list,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__assign_function__WebRoad__coord_list,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__resize_function__WebRoad__coord_list  // resize(index) function pointer
  },
  {
    "traffic_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebRoad, traffic_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "intersection_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebRoad, intersection_msg),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__size_function__WebRoad__intersection_msg,  // size() function pointer
    deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__get_const_function__WebRoad__intersection_msg,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__get_function__WebRoad__intersection_msg,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__fetch_function__WebRoad__intersection_msg,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__assign_function__WebRoad__intersection_msg,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__resize_function__WebRoad__intersection_msg  // resize(index) function pointer
  },
  {
    "lane_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__WebRoad, lane_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__WebRoad_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "WebRoad",  // message name
  12,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__WebRoad),
  deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__WebRoad_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__WebRoad_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__WebRoad_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__WebRoad_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__WebRoad_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebRoad)() {
  deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__WebRoad_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebPoint)();
  deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__WebRoad_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, WebIntersection)();
  if (!deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__WebRoad_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__WebRoad_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__WebRoad__rosidl_typesupport_introspection_c__WebRoad_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
