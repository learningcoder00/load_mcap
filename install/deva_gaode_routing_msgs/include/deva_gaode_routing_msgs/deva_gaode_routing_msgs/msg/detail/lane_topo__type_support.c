// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_gaode_routing_msgs:msg/LaneTopo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_gaode_routing_msgs/msg/detail/lane_topo__rosidl_typesupport_introspection_c.h"
#include "deva_gaode_routing_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_gaode_routing_msgs/msg/detail/lane_topo__functions.h"
#include "deva_gaode_routing_msgs/msg/detail/lane_topo__struct.h"


// Include directives for member types
// Member `out_link_ids`
#include "deva_gaode_routing_msgs/msg/link_id_type.h"
// Member `out_link_ids`
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__rosidl_typesupport_introspection_c.h"
// Member `lane_conds`
#include "deva_gaode_routing_msgs/msg/lane_cond.h"
// Member `lane_conds`
#include "deva_gaode_routing_msgs/msg/detail/lane_cond__rosidl_typesupport_introspection_c.h"
// Member `date`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__LaneTopo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_gaode_routing_msgs__msg__LaneTopo__init(message_memory);
}

void deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__LaneTopo_fini_function(void * message_memory)
{
  deva_gaode_routing_msgs__msg__LaneTopo__fini(message_memory);
}

size_t deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__size_function__LaneTopo__out_link_ids(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__LinkIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__LinkIDType__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__get_const_function__LaneTopo__out_link_ids(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__LinkIDType__Sequence * member =
    (const deva_gaode_routing_msgs__msg__LinkIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__get_function__LaneTopo__out_link_ids(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__LinkIDType__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__fetch_function__LaneTopo__out_link_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__LinkIDType * item =
    ((const deva_gaode_routing_msgs__msg__LinkIDType *)
    deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__get_const_function__LaneTopo__out_link_ids(untyped_member, index));
  deva_gaode_routing_msgs__msg__LinkIDType * value =
    (deva_gaode_routing_msgs__msg__LinkIDType *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__assign_function__LaneTopo__out_link_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__LinkIDType * item =
    ((deva_gaode_routing_msgs__msg__LinkIDType *)
    deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__get_function__LaneTopo__out_link_ids(untyped_member, index));
  const deva_gaode_routing_msgs__msg__LinkIDType * value =
    (const deva_gaode_routing_msgs__msg__LinkIDType *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__resize_function__LaneTopo__out_link_ids(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence * member =
    (deva_gaode_routing_msgs__msg__LinkIDType__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__LinkIDType__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__LinkIDType__Sequence__init(member, size);
}

size_t deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__size_function__LaneTopo__lane_conds(
  const void * untyped_member)
{
  const deva_gaode_routing_msgs__msg__LaneCond__Sequence * member =
    (const deva_gaode_routing_msgs__msg__LaneCond__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__get_const_function__LaneTopo__lane_conds(
  const void * untyped_member, size_t index)
{
  const deva_gaode_routing_msgs__msg__LaneCond__Sequence * member =
    (const deva_gaode_routing_msgs__msg__LaneCond__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__get_function__LaneTopo__lane_conds(
  void * untyped_member, size_t index)
{
  deva_gaode_routing_msgs__msg__LaneCond__Sequence * member =
    (deva_gaode_routing_msgs__msg__LaneCond__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__fetch_function__LaneTopo__lane_conds(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_gaode_routing_msgs__msg__LaneCond * item =
    ((const deva_gaode_routing_msgs__msg__LaneCond *)
    deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__get_const_function__LaneTopo__lane_conds(untyped_member, index));
  deva_gaode_routing_msgs__msg__LaneCond * value =
    (deva_gaode_routing_msgs__msg__LaneCond *)(untyped_value);
  *value = *item;
}

void deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__assign_function__LaneTopo__lane_conds(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_gaode_routing_msgs__msg__LaneCond * item =
    ((deva_gaode_routing_msgs__msg__LaneCond *)
    deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__get_function__LaneTopo__lane_conds(untyped_member, index));
  const deva_gaode_routing_msgs__msg__LaneCond * value =
    (const deva_gaode_routing_msgs__msg__LaneCond *)(untyped_value);
  *item = *value;
}

bool deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__resize_function__LaneTopo__lane_conds(
  void * untyped_member, size_t size)
{
  deva_gaode_routing_msgs__msg__LaneCond__Sequence * member =
    (deva_gaode_routing_msgs__msg__LaneCond__Sequence *)(untyped_member);
  deva_gaode_routing_msgs__msg__LaneCond__Sequence__fini(member);
  return deva_gaode_routing_msgs__msg__LaneCond__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__LaneTopo_message_member_array[10] = {
  {
    "lane_arrow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LaneTopo, lane_arrow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LaneTopo, lane_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bus_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LaneTopo, bus_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "out_link_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LaneTopo, out_link_ids),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__size_function__LaneTopo__out_link_ids,  // size() function pointer
    deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__get_const_function__LaneTopo__out_link_ids,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__get_function__LaneTopo__out_link_ids,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__fetch_function__LaneTopo__out_link_ids,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__assign_function__LaneTopo__out_link_ids,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__resize_function__LaneTopo__out_link_ids  // resize(index) function pointer
  },
  {
    "lane_conds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LaneTopo, lane_conds),  // bytes offset in struct
    NULL,  // default value
    deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__size_function__LaneTopo__lane_conds,  // size() function pointer
    deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__get_const_function__LaneTopo__lane_conds,  // get_const(index) function pointer
    deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__get_function__LaneTopo__lane_conds,  // get(index) function pointer
    deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__fetch_function__LaneTopo__lane_conds,  // fetch(index, &value) function pointer
    deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__assign_function__LaneTopo__lane_conds,  // assign(index, value) function pointer
    deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__resize_function__LaneTopo__lane_conds  // resize(index) function pointer
  },
  {
    "laneinfo_cond",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LaneTopo, laneinfo_cond),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LaneTopo, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "date",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LaneTopo, date),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LaneTopo, vehicles),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "special_times",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_gaode_routing_msgs__msg__LaneTopo, special_times),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__LaneTopo_message_members = {
  "deva_gaode_routing_msgs__msg",  // message namespace
  "LaneTopo",  // message name
  10,  // number of fields
  sizeof(deva_gaode_routing_msgs__msg__LaneTopo),
  deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__LaneTopo_message_member_array,  // message members
  deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__LaneTopo_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__LaneTopo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__LaneTopo_message_type_support_handle = {
  0,
  &deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__LaneTopo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_gaode_routing_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LaneTopo)() {
  deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__LaneTopo_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LinkIDType)();
  deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__LaneTopo_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_gaode_routing_msgs, msg, LaneCond)();
  if (!deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__LaneTopo_message_type_support_handle.typesupport_identifier) {
    deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__LaneTopo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_gaode_routing_msgs__msg__LaneTopo__rosidl_typesupport_introspection_c__LaneTopo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
