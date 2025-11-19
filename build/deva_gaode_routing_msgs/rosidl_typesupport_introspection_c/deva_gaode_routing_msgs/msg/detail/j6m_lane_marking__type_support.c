// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/J6mLaneMarking.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane_marking__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane_marking__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane_marking__struct.h"


// Include directives for member types
// Member `lane_marking_id`
#include "deva_gaode_routing_msgs/msg/link_id_type.h"
// Member `lane_marking_id`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__rosidl_typesupport_introspection_c.h"
// Member `lane_marking_coordinates`
#include "deva_gaode_routing_msgs/msg/coordinate.h"
// Member `lane_marking_coordinates`
#include "deva_gaode_routing_msgs/msg/detail/coordinate__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__J6mLaneMarking_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__J6mLaneMarking__init(message_memory);
}

void deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__J6mLaneMarking_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__J6mLaneMarking__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__size_function__J6mLaneMarking__lane_marking_coordinates(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__Coordinate__Sequence * member =
    (const deva_gaode_routing_msgs__msg__Coordinate__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__get_const_function__J6mLaneMarking__lane_marking_coordinates(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__Coordinate__Sequence * member =
    (const deva_gaode_routing_msgs__msg__Coordinate__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__get_function__J6mLaneMarking__lane_marking_coordinates(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__Coordinate__Sequence * member =
    (deva_gaode_routing_msgs__msg__Coordinate__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__fetch_function__J6mLaneMarking__lane_marking_coordinates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__Coordinate * item =
    ((const deva_gaode_routing_msgs__msg__Coordinate *)
    deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__get_const_function__J6mLaneMarking__lane_marking_coordinates(untyped_member, index));
  deva_gaode_routing_msgs__msg__Coordinate * value =
    (deva_gaode_routing_msgs__msg__Coordinate *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__assign_function__J6mLaneMarking__lane_marking_coordinates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__Coordinate * item =
    ((deva_gaode_routing_msgs__msg__Coordinate *)
    deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__get_function__J6mLaneMarking__lane_marking_coordinates(untyped_member, index));
  const deva_gaode_routing_msgs__msg__Coordinate * value =
    (const deva_gaode_routing_msgs__msg__Coordinate *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__resize_function__J6mLaneMarking__lane_marking_coordinates(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__Coordinate__Sequence * member =
    (deva_gaode_routing_msgs__msg__Coordinate__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__Coordinate__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__Coordinate__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__J6mLaneMarking_message_member_array[8] = {
  {
    "lane_marking_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__J6mLaneMarking, lane_marking_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_marking_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__J6mLaneMarking, lane_marking_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_marking_length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__J6mLaneMarking, lane_marking_length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_marking_order_number",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__J6mLaneMarking, lane_marking_order_number),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_marking_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__J6mLaneMarking, lane_marking_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_marking_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__J6mLaneMarking, lane_marking_color),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_marking_confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__J6mLaneMarking, lane_marking_confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_marking_coordinates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__J6mLaneMarking, lane_marking_coordinates),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__size_function__J6mLaneMarking__lane_marking_coordinates,  // size() function pointer
    deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__get_const_function__J6mLaneMarking__lane_marking_coordinates,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__get_function__J6mLaneMarking__lane_marking_coordinates,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__fetch_function__J6mLaneMarking__lane_marking_coordinates,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__assign_function__J6mLaneMarking__lane_marking_coordinates,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__resize_function__J6mLaneMarking__lane_marking_coordinates  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__J6mLaneMarking_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "J6mLaneMarking",  // message name
  8,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__J6mLaneMarking),
  deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__J6mLaneMarking_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__J6mLaneMarking_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__J6mLaneMarking_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__J6mLaneMarking_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__J6mLaneMarking_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, J6mLaneMarking)() {
  deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__J6mLaneMarking_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LinkIDType)();
  deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__J6mLaneMarking_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, Coordinate)();
  if (!deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__J6mLaneMarking_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__J6mLaneMarking_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__J6mLaneMarking__rosidl_typesupport_introspection_c__J6mLaneMarking_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
