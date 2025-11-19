// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/IntersectionRoad.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/intersection_road__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/intersection_road__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/intersection_road__struct.h"


// Include directives for member types
// Member `id`
// Member `start_node_id`
// Member `end_node_id`
// Member `start_feature_point_id`
// Member `end_feature_point_id`
// Member `nexts`
// Member `prevs`
#include "deva_gaode_routing_msgs/msg/feature_id_type.h"
// Member `id`
// Member `start_node_id`
// Member `end_node_id`
// Member `start_feature_point_id`
// Member `end_feature_point_id`
// Member `nexts`
// Member `prevs`
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__rosidl_typesupport_introspection_c.h"
// Member `geometry`
#include "deva_gaode_routing_msgs/msg/coordinate.h"
// Member `geometry`
#include "deva_gaode_routing_msgs/msg/detail/coordinate__rosidl_typesupport_introspection_c.h"
// Member `relate_link_id`
#include "deva_gaode_routing_msgs/msg/link_id_type.h"
// Member `relate_link_id`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__IntersectionRoad__init(message_memory);
}

void deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__IntersectionRoad__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__size_function__IntersectionRoad__geometry(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__Coordinate__Sequence * member =
    (const deva_gaode_routing_msgs__msg__Coordinate__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__get_const_function__IntersectionRoad__geometry(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__Coordinate__Sequence * member =
    (const deva_gaode_routing_msgs__msg__Coordinate__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__get_function__IntersectionRoad__geometry(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__Coordinate__Sequence * member =
    (deva_gaode_routing_msgs__msg__Coordinate__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__fetch_function__IntersectionRoad__geometry(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__Coordinate * item =
    ((const deva_gaode_routing_msgs__msg__Coordinate *)
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__get_const_function__IntersectionRoad__geometry(untyped_member, index));
  deva_gaode_routing_msgs__msg__Coordinate * value =
    (deva_gaode_routing_msgs__msg__Coordinate *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__assign_function__IntersectionRoad__geometry(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__Coordinate * item =
    ((deva_gaode_routing_msgs__msg__Coordinate *)
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__get_function__IntersectionRoad__geometry(untyped_member, index));
  const deva_gaode_routing_msgs__msg__Coordinate * value =
    (const deva_gaode_routing_msgs__msg__Coordinate *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__resize_function__IntersectionRoad__geometry(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__Coordinate__Sequence * member =
    (deva_gaode_routing_msgs__msg__Coordinate__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__Coordinate__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__Coordinate__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__size_function__IntersectionRoad__nexts(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__get_const_function__IntersectionRoad__nexts(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__get_function__IntersectionRoad__nexts(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__fetch_function__IntersectionRoad__nexts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((const deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__get_const_function__IntersectionRoad__nexts(untyped_member, index));
  deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__assign_function__IntersectionRoad__nexts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__get_function__IntersectionRoad__nexts(untyped_member, index));
  const deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (const deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__resize_function__IntersectionRoad__nexts(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__size_function__IntersectionRoad__prevs(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__get_const_function__IntersectionRoad__prevs(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__get_function__IntersectionRoad__prevs(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__fetch_function__IntersectionRoad__prevs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((const deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__get_const_function__IntersectionRoad__prevs(untyped_member, index));
  deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__assign_function__IntersectionRoad__prevs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__FeatureIDType * item =
    ((deva_gaode_routing_msgs__msg__FeatureIDType *)
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__get_function__IntersectionRoad__prevs(untyped_member, index));
  const deva_gaode_routing_msgs__msg__FeatureIDType * value =
    (const deva_gaode_routing_msgs__msg__FeatureIDType *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__resize_function__IntersectionRoad__prevs(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__FeatureIDType__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__FeatureIDType__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_message_member_array[12] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__IntersectionRoad, id),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__IntersectionRoad, link_direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cross_turn_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__IntersectionRoad, cross_turn_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_traffic_light",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__IntersectionRoad, has_traffic_light),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "geometry",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__IntersectionRoad, geometry),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__size_function__IntersectionRoad__geometry,  // size() function pointer
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__get_const_function__IntersectionRoad__geometry,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__get_function__IntersectionRoad__geometry,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__fetch_function__IntersectionRoad__geometry,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__assign_function__IntersectionRoad__geometry,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__resize_function__IntersectionRoad__geometry  // resize(index) function pointer
  },
  {
    "start_node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__IntersectionRoad, start_node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__IntersectionRoad, end_node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_feature_point_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__IntersectionRoad, start_feature_point_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_feature_point_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__IntersectionRoad, end_feature_point_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "relate_link_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__IntersectionRoad, relate_link_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nexts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__IntersectionRoad, nexts),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__size_function__IntersectionRoad__nexts,  // size() function pointer
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__get_const_function__IntersectionRoad__nexts,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__get_function__IntersectionRoad__nexts,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__fetch_function__IntersectionRoad__nexts,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__assign_function__IntersectionRoad__nexts,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__resize_function__IntersectionRoad__nexts  // resize(index) function pointer
  },
  {
    "prevs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__IntersectionRoad, prevs),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__size_function__IntersectionRoad__prevs,  // size() function pointer
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__get_const_function__IntersectionRoad__prevs,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__get_function__IntersectionRoad__prevs,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__fetch_function__IntersectionRoad__prevs,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__assign_function__IntersectionRoad__prevs,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__resize_function__IntersectionRoad__prevs  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "IntersectionRoad",  // message name
  12,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__IntersectionRoad),
  deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, IntersectionRoad)() {
  deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, Coordinate)();
  deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LinkIDType)();
  deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, FeatureIDType)();
  if (!deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__IntersectionRoad__rosidl_typesupport_introspection_c__IntersectionRoad_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
