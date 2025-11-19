// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/SdProLaneConnect.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_connect__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_connect__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_connect__struct.h"


// Include directives for member types
// Member `pass_road_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `connect_restriction`
#include "deva_gaode_routing_msgs/msg/restriction_detail.h"
// Member `connect_restriction`
#include "deva_gaode_routing_msgs/msg/detail/restriction_detail__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__SdProLaneConnect_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__SdProLaneConnect__init(message_memory);
}

void deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__SdProLaneConnect_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__SdProLaneConnect__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__size_function__SdProLaneConnect__pass_road_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__get_const_function__SdProLaneConnect__pass_road_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__get_function__SdProLaneConnect__pass_road_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__fetch_function__SdProLaneConnect__pass_road_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__get_const_function__SdProLaneConnect__pass_road_ids(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__assign_function__SdProLaneConnect__pass_road_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__get_function__SdProLaneConnect__pass_road_ids(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__resize_function__SdProLaneConnect__pass_road_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__size_function__SdProLaneConnect__connect_restriction(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence * member =
    (const deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__get_const_function__SdProLaneConnect__connect_restriction(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence * member =
    (const deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__get_function__SdProLaneConnect__connect_restriction(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence * member =
    (deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__fetch_function__SdProLaneConnect__connect_restriction(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__RestrictionDetail * item =
    ((const deva_gaode_routing_msgs__msg__RestrictionDetail *)
    deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__get_const_function__SdProLaneConnect__connect_restriction(untyped_member, index));
  deva_gaode_routing_msgs__msg__RestrictionDetail * value =
    (deva_gaode_routing_msgs__msg__RestrictionDetail *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__assign_function__SdProLaneConnect__connect_restriction(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__RestrictionDetail * item =
    ((deva_gaode_routing_msgs__msg__RestrictionDetail *)
    deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__get_function__SdProLaneConnect__connect_restriction(untyped_member, index));
  const deva_gaode_routing_msgs__msg__RestrictionDetail * value =
    (const deva_gaode_routing_msgs__msg__RestrictionDetail *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__resize_function__SdProLaneConnect__connect_restriction(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence * member =
    (deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__RestrictionDetail__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__SdProLaneConnect_message_member_array[12] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLaneConnect, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "out_road",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLaneConnect, out_road),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pass_road_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLaneConnect, pass_road_ids),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__size_function__SdProLaneConnect__pass_road_ids,  // size() function pointer
    deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__get_const_function__SdProLaneConnect__pass_road_ids,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__get_function__SdProLaneConnect__pass_road_ids,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__fetch_function__SdProLaneConnect__pass_road_ids,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__assign_function__SdProLaneConnect__pass_road_ids,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__resize_function__SdProLaneConnect__pass_road_ids  // resize(index) function pointer
  },
  {
    "arrow_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLaneConnect, arrow_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLaneConnect, lane_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bus_lane",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLaneConnect, bus_lane),  // bytes offset in struct
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
    offsetof(deva_gaode_routing_msgs__msg__SdProLaneConnect, lane_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLaneConnect, lane_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLaneConnect, lane_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLaneConnect, node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "limit_lane",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLaneConnect, limit_lane),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "connect_restriction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__SdProLaneConnect, connect_restriction),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__size_function__SdProLaneConnect__connect_restriction,  // size() function pointer
    deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__get_const_function__SdProLaneConnect__connect_restriction,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__get_function__SdProLaneConnect__connect_restriction,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__fetch_function__SdProLaneConnect__connect_restriction,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__assign_function__SdProLaneConnect__connect_restriction,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__resize_function__SdProLaneConnect__connect_restriction  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__SdProLaneConnect_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "SdProLaneConnect",  // message name
  12,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__SdProLaneConnect),
  deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__SdProLaneConnect_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__SdProLaneConnect_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__SdProLaneConnect_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__SdProLaneConnect_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__SdProLaneConnect_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, SdProLaneConnect)() {
  deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__SdProLaneConnect_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, RestrictionDetail)();
  if (!deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__SdProLaneConnect_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__SdProLaneConnect_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__SdProLaneConnect__rosidl_typesupport_introspection_c__SdProLaneConnect_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
