// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_navi_msgs:msg/ElecPathInfoProto.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_navi_msgs/msg/detail/elec_path_info_proto__rosidl_typesupport_introspection_c.h"
#include "deva_navi_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_navi_msgs/msg/detail/elec_path_info_proto__functions.h"
#include "deva_navi_msgs/msg/detail/elec_path_info_proto__struct.h"


// Include directives for member types
// Member `m_link_consume`
// Member `m_link_distance`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `m_via_info`
#include "deva_navi_msgs/msg/via_point_info_proto.h"
// Member `m_via_info`
#include "deva_navi_msgs/msg/detail/via_point_info_proto__rosidl_typesupport_introspection_c.h"
// Member `m_energy_consume`
#include "deva_navi_msgs/msg/energy_consume_proto.h"
// Member `m_energy_consume`
#include "deva_navi_msgs/msg/detail/energy_consume_proto__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__ElecPathInfoProto_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_navi_msgs__msg__ElecPathInfoProto__init(message_memory);
}

void deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__ElecPathInfoProto_fini_function(void * message_memory)
{
  deva_navi_msgs__msg__ElecPathInfoProto__fini(message_memory);
}

size_t deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__size_function__ElecPathInfoProto__m_link_consume(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__ElecPathInfoProto__m_link_consume(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__get_function__ElecPathInfoProto__m_link_consume(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__ElecPathInfoProto__m_link_consume(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__ElecPathInfoProto__m_link_consume(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__assign_function__ElecPathInfoProto__m_link_consume(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__get_function__ElecPathInfoProto__m_link_consume(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__resize_function__ElecPathInfoProto__m_link_consume(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__size_function__ElecPathInfoProto__m_link_distance(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__ElecPathInfoProto__m_link_distance(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__get_function__ElecPathInfoProto__m_link_distance(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__ElecPathInfoProto__m_link_distance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__ElecPathInfoProto__m_link_distance(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__assign_function__ElecPathInfoProto__m_link_distance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__get_function__ElecPathInfoProto__m_link_distance(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__resize_function__ElecPathInfoProto__m_link_distance(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__size_function__ElecPathInfoProto__m_via_info(
  const void * untyped_member)
{
  const deva_navi_msgs__msg__ViaPointInfoProto__Sequence * member =
    (const deva_navi_msgs__msg__ViaPointInfoProto__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__ElecPathInfoProto__m_via_info(
  const void * untyped_member, size_t index)
{
  const deva_navi_msgs__msg__ViaPointInfoProto__Sequence * member =
    (const deva_navi_msgs__msg__ViaPointInfoProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__get_function__ElecPathInfoProto__m_via_info(
  void * untyped_member, size_t index)
{
  deva_navi_msgs__msg__ViaPointInfoProto__Sequence * member =
    (deva_navi_msgs__msg__ViaPointInfoProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__ElecPathInfoProto__m_via_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_navi_msgs__msg__ViaPointInfoProto * item =
    ((const deva_navi_msgs__msg__ViaPointInfoProto *)
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__ElecPathInfoProto__m_via_info(untyped_member, index));
  deva_navi_msgs__msg__ViaPointInfoProto * value =
    (deva_navi_msgs__msg__ViaPointInfoProto *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__assign_function__ElecPathInfoProto__m_via_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_navi_msgs__msg__ViaPointInfoProto * item =
    ((deva_navi_msgs__msg__ViaPointInfoProto *)
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__get_function__ElecPathInfoProto__m_via_info(untyped_member, index));
  const deva_navi_msgs__msg__ViaPointInfoProto * value =
    (const deva_navi_msgs__msg__ViaPointInfoProto *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__resize_function__ElecPathInfoProto__m_via_info(
  void * untyped_member, size_t size)
{
  deva_navi_msgs__msg__ViaPointInfoProto__Sequence * member =
    (deva_navi_msgs__msg__ViaPointInfoProto__Sequence *)(untyped_member);
  deva_navi_msgs__msg__ViaPointInfoProto__Sequence__fini(member);
  return deva_navi_msgs__msg__ViaPointInfoProto__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__ElecPathInfoProto_message_member_array[11] = {
  {
    "m_is_elec_route",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ElecPathInfoProto, m_is_elec_route),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "m_link_consume_size_word",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ElecPathInfoProto, m_link_consume_size_word),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "m_traffic_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ElecPathInfoProto, m_traffic_info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "m_energy_unit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ElecPathInfoProto, m_energy_unit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "m_path_flag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ElecPathInfoProto, m_path_flag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "m_energy_sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ElecPathInfoProto, m_energy_sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "m_link_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ElecPathInfoProto, m_link_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "m_link_consume",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ElecPathInfoProto, m_link_consume),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__size_function__ElecPathInfoProto__m_link_consume,  // size() function pointer
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__ElecPathInfoProto__m_link_consume,  // get_const(index) function pointer
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__get_function__ElecPathInfoProto__m_link_consume,  // get(index) function pointer
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__ElecPathInfoProto__m_link_consume,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__assign_function__ElecPathInfoProto__m_link_consume,  // assign(index, value) function pointer
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__resize_function__ElecPathInfoProto__m_link_consume  // resize(index) function pointer
  },
  {
    "m_link_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ElecPathInfoProto, m_link_distance),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__size_function__ElecPathInfoProto__m_link_distance,  // size() function pointer
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__ElecPathInfoProto__m_link_distance,  // get_const(index) function pointer
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__get_function__ElecPathInfoProto__m_link_distance,  // get(index) function pointer
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__ElecPathInfoProto__m_link_distance,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__assign_function__ElecPathInfoProto__m_link_distance,  // assign(index, value) function pointer
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__resize_function__ElecPathInfoProto__m_link_distance  // resize(index) function pointer
  },
  {
    "m_via_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ElecPathInfoProto, m_via_info),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__size_function__ElecPathInfoProto__m_via_info,  // size() function pointer
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__get_const_function__ElecPathInfoProto__m_via_info,  // get_const(index) function pointer
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__get_function__ElecPathInfoProto__m_via_info,  // get(index) function pointer
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__fetch_function__ElecPathInfoProto__m_via_info,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__assign_function__ElecPathInfoProto__m_via_info,  // assign(index, value) function pointer
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__resize_function__ElecPathInfoProto__m_via_info  // resize(index) function pointer
  },
  {
    "m_energy_consume",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__ElecPathInfoProto, m_energy_consume),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__ElecPathInfoProto_message_members = {
  "deva_navi_msgs__msg",  // message namespace
  "ElecPathInfoProto",  // message name
  11,  // number of fields
  sizeof(deva_navi_msgs__msg__ElecPathInfoProto),
  deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__ElecPathInfoProto_message_member_array,  // message members
  deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__ElecPathInfoProto_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__ElecPathInfoProto_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__ElecPathInfoProto_message_type_support_handle = {
  0,
  &deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__ElecPathInfoProto_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_navi_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, ElecPathInfoProto)() {
  deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__ElecPathInfoProto_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, ViaPointInfoProto)();
  deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__ElecPathInfoProto_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, EnergyConsumeProto)();
  if (!deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__ElecPathInfoProto_message_type_support_handle.typesupport_identifier) {
    deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__ElecPathInfoProto_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_navi_msgs__msg__ElecPathInfoProto__rosidl_typesupport_introspection_c__ElecPathInfoProto_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
