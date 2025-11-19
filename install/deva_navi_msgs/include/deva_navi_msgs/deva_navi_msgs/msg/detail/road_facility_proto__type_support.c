// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_navi_msgs:msg/RoadFacilityProto.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_navi_msgs/msg/detail/road_facility_proto__rosidl_typesupport_introspection_c.h"
#include "deva_navi_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_navi_msgs/msg/detail/road_facility_proto__functions.h"
#include "deva_navi_msgs/msg/detail/road_facility_proto__struct.h"


// Include directives for member types
// Member `speed_limit`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `time_range`
#include "deva_navi_msgs/msg/group_time_range_proto.h"
// Member `time_range`
#include "deva_navi_msgs/msg/detail/group_time_range_proto__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__RoadFacilityProto_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_navi_msgs__msg__RoadFacilityProto__init(message_memory);
}

void deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__RoadFacilityProto_fini_function(void * message_memory)
{
  deva_navi_msgs__msg__RoadFacilityProto__fini(message_memory);
}

size_t deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__size_function__RoadFacilityProto__speed_limit(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__get_const_function__RoadFacilityProto__speed_limit(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__get_function__RoadFacilityProto__speed_limit(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__fetch_function__RoadFacilityProto__speed_limit(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__get_const_function__RoadFacilityProto__speed_limit(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__assign_function__RoadFacilityProto__speed_limit(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__get_function__RoadFacilityProto__speed_limit(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__resize_function__RoadFacilityProto__speed_limit(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__size_function__RoadFacilityProto__time_range(
  const void * untyped_member)
{
  const deva_navi_msgs__msg__GroupTimeRangeProto__Sequence * member =
    (const deva_navi_msgs__msg__GroupTimeRangeProto__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__get_const_function__RoadFacilityProto__time_range(
  const void * untyped_member, size_t index)
{
  const deva_navi_msgs__msg__GroupTimeRangeProto__Sequence * member =
    (const deva_navi_msgs__msg__GroupTimeRangeProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__get_function__RoadFacilityProto__time_range(
  void * untyped_member, size_t index)
{
  deva_navi_msgs__msg__GroupTimeRangeProto__Sequence * member =
    (deva_navi_msgs__msg__GroupTimeRangeProto__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__fetch_function__RoadFacilityProto__time_range(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_navi_msgs__msg__GroupTimeRangeProto * item =
    ((const deva_navi_msgs__msg__GroupTimeRangeProto *)
    deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__get_const_function__RoadFacilityProto__time_range(untyped_member, index));
  deva_navi_msgs__msg__GroupTimeRangeProto * value =
    (deva_navi_msgs__msg__GroupTimeRangeProto *)(untyped_value);
  *value = *item;
}

void deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__assign_function__RoadFacilityProto__time_range(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_navi_msgs__msg__GroupTimeRangeProto * item =
    ((deva_navi_msgs__msg__GroupTimeRangeProto *)
    deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__get_function__RoadFacilityProto__time_range(untyped_member, index));
  const deva_navi_msgs__msg__GroupTimeRangeProto * value =
    (const deva_navi_msgs__msg__GroupTimeRangeProto *)(untyped_value);
  *item = *value;
}

bool deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__resize_function__RoadFacilityProto__time_range(
  void * untyped_member, size_t size)
{
  deva_navi_msgs__msg__GroupTimeRangeProto__Sequence * member =
    (deva_navi_msgs__msg__GroupTimeRangeProto__Sequence *)(untyped_member);
  deva_navi_msgs__msg__GroupTimeRangeProto__Sequence__fini(member);
  return deva_navi_msgs__msg__GroupTimeRangeProto__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__RoadFacilityProto_message_member_array[8] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__RoadFacilityProto, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__RoadFacilityProto, lon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__RoadFacilityProto, lat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__RoadFacilityProto, speed_limit),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__size_function__RoadFacilityProto__speed_limit,  // size() function pointer
    deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__get_const_function__RoadFacilityProto__speed_limit,  // get_const(index) function pointer
    deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__get_function__RoadFacilityProto__speed_limit,  // get(index) function pointer
    deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__fetch_function__RoadFacilityProto__speed_limit,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__assign_function__RoadFacilityProto__speed_limit,  // assign(index, value) function pointer
    deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__resize_function__RoadFacilityProto__speed_limit  // resize(index) function pointer
  },
  {
    "dist_to_end",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__RoadFacilityProto, dist_to_end),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "valid_lane",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__RoadFacilityProto, valid_lane),  // bytes offset in struct
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
    offsetof(deva_navi_msgs__msg__RoadFacilityProto, lane_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_navi_msgs__msg__RoadFacilityProto, time_range),  // bytes offset in struct
    NULL,  // default value
    deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__size_function__RoadFacilityProto__time_range,  // size() function pointer
    deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__get_const_function__RoadFacilityProto__time_range,  // get_const(index) function pointer
    deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__get_function__RoadFacilityProto__time_range,  // get(index) function pointer
    deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__fetch_function__RoadFacilityProto__time_range,  // fetch(index, &value) function pointer
    deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__assign_function__RoadFacilityProto__time_range,  // assign(index, value) function pointer
    deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__resize_function__RoadFacilityProto__time_range  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__RoadFacilityProto_message_members = {
  "deva_navi_msgs__msg",  // message namespace
  "RoadFacilityProto",  // message name
  8,  // number of fields
  sizeof(deva_navi_msgs__msg__RoadFacilityProto),
  deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__RoadFacilityProto_message_member_array,  // message members
  deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__RoadFacilityProto_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__RoadFacilityProto_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__RoadFacilityProto_message_type_support_handle = {
  0,
  &deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__RoadFacilityProto_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_navi_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, RoadFacilityProto)() {
  deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__RoadFacilityProto_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_navi_msgs, msg, GroupTimeRangeProto)();
  if (!deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__RoadFacilityProto_message_type_support_handle.typesupport_identifier) {
    deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__RoadFacilityProto_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_navi_msgs__msg__RoadFacilityProto__rosidl_typesupport_introspection_c__RoadFacilityProto_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
