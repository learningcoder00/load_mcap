// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/KLaneMetaInfo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/k_lane_meta_info__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/k_lane_meta_info__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/k_lane_meta_info__struct.h"


// Include directives for member types
// Member `in_link_id`
// Member `pass_link_id_s`
#include "deva_gaode_routing_msgs/msg/link_id_type.h"
// Member `in_link_id`
// Member `pass_link_id_s`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__rosidl_typesupport_introspection_c.h"
// Member `node_id`
#include "deva_gaode_routing_msgs/msg/node_id_type.h"
// Member `node_id`
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__rosidl_typesupport_introspection_c.h"
// Member `lane_infos`
#include "deva_gaode_routing_msgs/msg/lane_traffic_info.h"
// Member `lane_infos`
#include "deva_gaode_routing_msgs/msg/detail/lane_traffic_info__rosidl_typesupport_introspection_c.h"
// Member `lane_topos`
#include "deva_gaode_routing_msgs/msg/lane_topo.h"
// Member `lane_topos`
#include "deva_gaode_routing_msgs/msg/detail/lane_topo__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__KLaneMetaInfo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__KLaneMetaInfo__init(message_memory);
}

void deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__KLaneMetaInfo_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__KLaneMetaInfo__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__size_function__KLaneMetaInfo__lane_infos(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence * member =
    (const deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__get_const_function__KLaneMetaInfo__lane_infos(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence * member =
    (const deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__get_function__KLaneMetaInfo__lane_infos(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence * member =
    (deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__fetch_function__KLaneMetaInfo__lane_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__LaneTrafficInfo * item =
    ((const deva_gaode_routing_msgs__msg__LaneTrafficInfo *)
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__get_const_function__KLaneMetaInfo__lane_infos(untyped_member, index));
  deva_gaode_routing_msgs__msg__LaneTrafficInfo * value =
    (deva_gaode_routing_msgs__msg__LaneTrafficInfo *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__assign_function__KLaneMetaInfo__lane_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__LaneTrafficInfo * item =
    ((deva_gaode_routing_msgs__msg__LaneTrafficInfo *)
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__get_function__KLaneMetaInfo__lane_infos(untyped_member, index));
  const deva_gaode_routing_msgs__msg__LaneTrafficInfo * value =
    (const deva_gaode_routing_msgs__msg__LaneTrafficInfo *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__resize_function__KLaneMetaInfo__lane_infos(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence * member =
    (deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__LaneTrafficInfo__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__size_function__KLaneMetaInfo__lane_topos(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__LaneTopo__Sequence * member =
    (const deva_gaode_routing_msgs__msg__LaneTopo__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__get_const_function__KLaneMetaInfo__lane_topos(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__LaneTopo__Sequence * member =
    (const deva_gaode_routing_msgs__msg__LaneTopo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__get_function__KLaneMetaInfo__lane_topos(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__LaneTopo__Sequence * member =
    (deva_gaode_routing_msgs__msg__LaneTopo__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__fetch_function__KLaneMetaInfo__lane_topos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__LaneTopo * item =
    ((const deva_gaode_routing_msgs__msg__LaneTopo *)
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__get_const_function__KLaneMetaInfo__lane_topos(untyped_member, index));
  deva_gaode_routing_msgs__msg__LaneTopo * value =
    (deva_gaode_routing_msgs__msg__LaneTopo *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__assign_function__KLaneMetaInfo__lane_topos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__LaneTopo * item =
    ((deva_gaode_routing_msgs__msg__LaneTopo *)
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__get_function__KLaneMetaInfo__lane_topos(untyped_member, index));
  const deva_gaode_routing_msgs__msg__LaneTopo * value =
    (const deva_gaode_routing_msgs__msg__LaneTopo *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__resize_function__KLaneMetaInfo__lane_topos(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__LaneTopo__Sequence * member =
    (deva_gaode_routing_msgs__msg__LaneTopo__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__LaneTopo__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__LaneTopo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__KLaneMetaInfo_message_member_array[8] = {
  {
    "in_link_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__KLaneMetaInfo, in_link_id),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__KLaneMetaInfo, node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pass_link_id_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__KLaneMetaInfo, pass_link_id_s),  // bytes offset in struct
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
    offsetof(deva_gaode_routing_msgs__msg__KLaneMetaInfo, lane_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_num_left",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__KLaneMetaInfo, lane_num_left),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_num_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__KLaneMetaInfo, lane_num_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_infos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__KLaneMetaInfo, lane_infos),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__size_function__KLaneMetaInfo__lane_infos,  // size() function pointer
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__get_const_function__KLaneMetaInfo__lane_infos,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__get_function__KLaneMetaInfo__lane_infos,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__fetch_function__KLaneMetaInfo__lane_infos,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__assign_function__KLaneMetaInfo__lane_infos,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__resize_function__KLaneMetaInfo__lane_infos  // resize(index) function pointer
  },
  {
    "lane_topos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__KLaneMetaInfo, lane_topos),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__size_function__KLaneMetaInfo__lane_topos,  // size() function pointer
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__get_const_function__KLaneMetaInfo__lane_topos,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__get_function__KLaneMetaInfo__lane_topos,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__fetch_function__KLaneMetaInfo__lane_topos,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__assign_function__KLaneMetaInfo__lane_topos,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__resize_function__KLaneMetaInfo__lane_topos  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__KLaneMetaInfo_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "KLaneMetaInfo",  // message name
  8,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__KLaneMetaInfo),
  deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__KLaneMetaInfo_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__KLaneMetaInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__KLaneMetaInfo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__KLaneMetaInfo_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__KLaneMetaInfo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, KLaneMetaInfo)() {
  deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__KLaneMetaInfo_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LinkIDType)();
  deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__KLaneMetaInfo_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, NodeIDType)();
  deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__KLaneMetaInfo_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LinkIDType)();
  deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__KLaneMetaInfo_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LaneTrafficInfo)();
  deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__KLaneMetaInfo_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LaneTopo)();
  if (!deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__KLaneMetaInfo_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__KLaneMetaInfo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__KLaneMetaInfo__rosidl_typesupport_introspection_c__KLaneMetaInfo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
