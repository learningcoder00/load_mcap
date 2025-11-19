// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/FixedObstacle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/fixed_obstacle__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/fixed_obstacle__functions.h"
#include "deva_perception_msgs/msg/detail/fixed_obstacle__struct.h"


// Include directives for member types
// Member `obstacle`
#include "deva_perception_msgs/msg/obstacle_common.h"
// Member `obstacle`
#include "deva_perception_msgs/msg/detail/obstacle_common__rosidl_typesupport_introspection_c.h"
// Member `match_indices`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `extra_infos`
#include "deva_perception_msgs/msg/extra_info.h"
// Member `extra_infos`
#include "deva_perception_msgs/msg/detail/extra_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__FixedObstacle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__FixedObstacle__init(message_memory);
}

void deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__FixedObstacle_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__FixedObstacle__fini(message_memory);
}

size_t deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__size_function__FixedObstacle__match_indices(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__get_const_function__FixedObstacle__match_indices(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__get_function__FixedObstacle__match_indices(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__fetch_function__FixedObstacle__match_indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__get_const_function__FixedObstacle__match_indices(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__assign_function__FixedObstacle__match_indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__get_function__FixedObstacle__match_indices(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__resize_function__FixedObstacle__match_indices(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__size_function__FixedObstacle__extra_infos(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__ExtraInfo__Sequence * member =
    (const deva_perception_msgs__msg__ExtraInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__get_const_function__FixedObstacle__extra_infos(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__ExtraInfo__Sequence * member =
    (const deva_perception_msgs__msg__ExtraInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__get_function__FixedObstacle__extra_infos(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__ExtraInfo__Sequence * member =
    (deva_perception_msgs__msg__ExtraInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__fetch_function__FixedObstacle__extra_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__ExtraInfo * item =
    ((const deva_perception_msgs__msg__ExtraInfo *)
    deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__get_const_function__FixedObstacle__extra_infos(untyped_member, index));
  deva_perception_msgs__msg__ExtraInfo * value =
    (deva_perception_msgs__msg__ExtraInfo *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__assign_function__FixedObstacle__extra_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__ExtraInfo * item =
    ((deva_perception_msgs__msg__ExtraInfo *)
    deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__get_function__FixedObstacle__extra_infos(untyped_member, index));
  const deva_perception_msgs__msg__ExtraInfo * value =
    (const deva_perception_msgs__msg__ExtraInfo *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__resize_function__FixedObstacle__extra_infos(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__ExtraInfo__Sequence * member =
    (deva_perception_msgs__msg__ExtraInfo__Sequence *)(untyped_member);
  deva_perception_msgs__msg__ExtraInfo__Sequence__fini(member);
  return deva_perception_msgs__msg__ExtraInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__FixedObstacle_message_member_array[6] = {
  {
    "obstacle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__FixedObstacle, obstacle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fixed_obstacle_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__FixedObstacle, fixed_obstacle_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "det_score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__FixedObstacle, det_score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__FixedObstacle, source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "match_indices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__FixedObstacle, match_indices),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__size_function__FixedObstacle__match_indices,  // size() function pointer
    deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__get_const_function__FixedObstacle__match_indices,  // get_const(index) function pointer
    deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__get_function__FixedObstacle__match_indices,  // get(index) function pointer
    deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__fetch_function__FixedObstacle__match_indices,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__assign_function__FixedObstacle__match_indices,  // assign(index, value) function pointer
    deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__resize_function__FixedObstacle__match_indices  // resize(index) function pointer
  },
  {
    "extra_infos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__FixedObstacle, extra_infos),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__size_function__FixedObstacle__extra_infos,  // size() function pointer
    deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__get_const_function__FixedObstacle__extra_infos,  // get_const(index) function pointer
    deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__get_function__FixedObstacle__extra_infos,  // get(index) function pointer
    deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__fetch_function__FixedObstacle__extra_infos,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__assign_function__FixedObstacle__extra_infos,  // assign(index, value) function pointer
    deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__resize_function__FixedObstacle__extra_infos  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__FixedObstacle_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "FixedObstacle",  // message name
  6,  // number of fields
  sizeof(deva_perception_msgs__msg__FixedObstacle),
  deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__FixedObstacle_message_member_array,  // message members
  deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__FixedObstacle_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__FixedObstacle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__FixedObstacle_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__FixedObstacle_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, FixedObstacle)() {
  deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__FixedObstacle_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, ObstacleCommon)();
  deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__FixedObstacle_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, ExtraInfo)();
  if (!deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__FixedObstacle_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__FixedObstacle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__FixedObstacle__rosidl_typesupport_introspection_c__FixedObstacle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
