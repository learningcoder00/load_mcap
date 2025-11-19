// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/SdProLane.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane__struct.h"


// Include directives for member types
// Member `next_lanes`
// Member `pre_lanes`
#include "deva_gaode_routing_msgs/msg/sd_pro_lane_topo.h"
// Member `next_lanes`
// Member `pre_lanes`
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_topo__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__SdProLane_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__SdProLane__init(message_memory);
}

void deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__SdProLane_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__SdProLane__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__size_function__SdProLane__next_lanes(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence * member =
    (const deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__get_const_function__SdProLane__next_lanes(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence * member =
    (const deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__get_function__SdProLane__next_lanes(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence * member =
    (deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__fetch_function__SdProLane__next_lanes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__SdProLaneTopo * item =
    ((const deva_gaode_routing_msgs__msg__SdProLaneTopo *)
    deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__get_const_function__SdProLane__next_lanes(untyped_member, index));
  deva_gaode_routing_msgs__msg__SdProLaneTopo * value =
    (deva_gaode_routing_msgs__msg__SdProLaneTopo *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__assign_function__SdProLane__next_lanes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__SdProLaneTopo * item =
    ((deva_gaode_routing_msgs__msg__SdProLaneTopo *)
    deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__get_function__SdProLane__next_lanes(untyped_member, index));
  const deva_gaode_routing_msgs__msg__SdProLaneTopo * value =
    (const deva_gaode_routing_msgs__msg__SdProLaneTopo *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__resize_function__SdProLane__next_lanes(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence * member =
    (deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__size_function__SdProLane__pre_lanes(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence * member =
    (const deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__get_const_function__SdProLane__pre_lanes(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence * member =
    (const deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__get_function__SdProLane__pre_lanes(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence * member =
    (deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__fetch_function__SdProLane__pre_lanes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__SdProLaneTopo * item =
    ((const deva_gaode_routing_msgs__msg__SdProLaneTopo *)
    deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__get_const_function__SdProLane__pre_lanes(untyped_member, index));
  deva_gaode_routing_msgs__msg__SdProLaneTopo * value =
    (deva_gaode_routing_msgs__msg__SdProLaneTopo *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__assign_function__SdProLane__pre_lanes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__SdProLaneTopo * item =
    ((deva_gaode_routing_msgs__msg__SdProLaneTopo *)
    deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__get_function__SdProLane__pre_lanes(untyped_member, index));
  const deva_gaode_routing_msgs__msg__SdProLaneTopo * value =
    (const deva_gaode_routing_msgs__msg__SdProLaneTopo *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__resize_function__SdProLane__pre_lanes(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence * member =
    (deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__SdProLaneTopo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__SdProLane_message_member_array[11] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLane, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_arrow_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLane, lane_arrow_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "category_location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLane, category_location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "category_vehicle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLane, category_vehicle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "category_special",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLane, category_special),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLane, lane_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLane, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLane, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "next_lanes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLane, next_lanes),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__size_function__SdProLane__next_lanes,  // size() function pointer
    deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__get_const_function__SdProLane__next_lanes,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__get_function__SdProLane__next_lanes,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__fetch_function__SdProLane__next_lanes,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__assign_function__SdProLane__next_lanes,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__resize_function__SdProLane__next_lanes  // resize(index) function pointer
  },
  {
    "pre_lanes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLane, pre_lanes),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__size_function__SdProLane__pre_lanes,  // size() function pointer
    deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__get_const_function__SdProLane__pre_lanes,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__get_function__SdProLane__pre_lanes,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__fetch_function__SdProLane__pre_lanes,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__assign_function__SdProLane__pre_lanes,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__resize_function__SdProLane__pre_lanes  // resize(index) function pointer
  },
  {
    "transition",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLane, transition),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__SdProLane_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "SdProLane",  // message name
  11,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__SdProLane),
  deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__SdProLane_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__SdProLane_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__SdProLane_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__SdProLane_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__SdProLane_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, SdProLane)() {
  deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__SdProLane_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, SdProLaneTopo)();
  deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__SdProLane_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, SdProLaneTopo)();
  if (!deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__SdProLane_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__SdProLane_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__SdProLane__rosidl_typesupport_introspection_c__SdProLane_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
