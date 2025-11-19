// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/RVResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/rv_result__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/rv_result__functions.h"
#include "deva_perception_msgs/msg/detail/rv_result__struct.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/header.h"
// Member `header`
#include "deva_common_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `translation`
#include "geometry_msgs/msg/vector3.h"
// Member `translation`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `orientation`
#include "geometry_msgs/msg/quaternion.h"
// Member `orientation`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"
// Member `dynamic_obs_list`
#include "deva_perception_msgs/msg/dynamic_obstacle_list.h"
// Member `dynamic_obs_list`
#include "deva_perception_msgs/msg/detail/dynamic_obstacle_list__rosidl_typesupport_introspection_c.h"
// Member `fixed_obs_list`
#include "deva_perception_msgs/msg/fixed_obstacle_list.h"
// Member `fixed_obs_list`
#include "deva_perception_msgs/msg/detail/fixed_obstacle_list__rosidl_typesupport_introspection_c.h"
// Member `extra_infos`
#include "deva_perception_msgs/msg/extra_info.h"
// Member `extra_infos`
#include "deva_perception_msgs/msg/detail/extra_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__RVResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__RVResult__init(message_memory);
}

void deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__RVResult_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__RVResult__fini(message_memory);
}

size_t deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__size_function__RVResult__dynamic_obs_list(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__DynamicObstacleList__Sequence * member =
    (const deva_perception_msgs__msg__DynamicObstacleList__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__get_const_function__RVResult__dynamic_obs_list(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__DynamicObstacleList__Sequence * member =
    (const deva_perception_msgs__msg__DynamicObstacleList__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__get_function__RVResult__dynamic_obs_list(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__DynamicObstacleList__Sequence * member =
    (deva_perception_msgs__msg__DynamicObstacleList__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__fetch_function__RVResult__dynamic_obs_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__DynamicObstacleList * item =
    ((const deva_perception_msgs__msg__DynamicObstacleList *)
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__get_const_function__RVResult__dynamic_obs_list(untyped_member, index));
  deva_perception_msgs__msg__DynamicObstacleList * value =
    (deva_perception_msgs__msg__DynamicObstacleList *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__assign_function__RVResult__dynamic_obs_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__DynamicObstacleList * item =
    ((deva_perception_msgs__msg__DynamicObstacleList *)
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__get_function__RVResult__dynamic_obs_list(untyped_member, index));
  const deva_perception_msgs__msg__DynamicObstacleList * value =
    (const deva_perception_msgs__msg__DynamicObstacleList *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__resize_function__RVResult__dynamic_obs_list(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__DynamicObstacleList__Sequence * member =
    (deva_perception_msgs__msg__DynamicObstacleList__Sequence *)(untyped_member);
  deva_perception_msgs__msg__DynamicObstacleList__Sequence__fini(member);
  return deva_perception_msgs__msg__DynamicObstacleList__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__size_function__RVResult__fixed_obs_list(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__FixedObstacleList__Sequence * member =
    (const deva_perception_msgs__msg__FixedObstacleList__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__get_const_function__RVResult__fixed_obs_list(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__FixedObstacleList__Sequence * member =
    (const deva_perception_msgs__msg__FixedObstacleList__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__get_function__RVResult__fixed_obs_list(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__FixedObstacleList__Sequence * member =
    (deva_perception_msgs__msg__FixedObstacleList__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__fetch_function__RVResult__fixed_obs_list(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__FixedObstacleList * item =
    ((const deva_perception_msgs__msg__FixedObstacleList *)
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__get_const_function__RVResult__fixed_obs_list(untyped_member, index));
  deva_perception_msgs__msg__FixedObstacleList * value =
    (deva_perception_msgs__msg__FixedObstacleList *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__assign_function__RVResult__fixed_obs_list(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__FixedObstacleList * item =
    ((deva_perception_msgs__msg__FixedObstacleList *)
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__get_function__RVResult__fixed_obs_list(untyped_member, index));
  const deva_perception_msgs__msg__FixedObstacleList * value =
    (const deva_perception_msgs__msg__FixedObstacleList *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__resize_function__RVResult__fixed_obs_list(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__FixedObstacleList__Sequence * member =
    (deva_perception_msgs__msg__FixedObstacleList__Sequence *)(untyped_member);
  deva_perception_msgs__msg__FixedObstacleList__Sequence__fini(member);
  return deva_perception_msgs__msg__FixedObstacleList__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__size_function__RVResult__extra_infos(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__ExtraInfo__Sequence * member =
    (const deva_perception_msgs__msg__ExtraInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__get_const_function__RVResult__extra_infos(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__ExtraInfo__Sequence * member =
    (const deva_perception_msgs__msg__ExtraInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__get_function__RVResult__extra_infos(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__ExtraInfo__Sequence * member =
    (deva_perception_msgs__msg__ExtraInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__fetch_function__RVResult__extra_infos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__ExtraInfo * item =
    ((const deva_perception_msgs__msg__ExtraInfo *)
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__get_const_function__RVResult__extra_infos(untyped_member, index));
  deva_perception_msgs__msg__ExtraInfo * value =
    (deva_perception_msgs__msg__ExtraInfo *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__assign_function__RVResult__extra_infos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__ExtraInfo * item =
    ((deva_perception_msgs__msg__ExtraInfo *)
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__get_function__RVResult__extra_infos(untyped_member, index));
  const deva_perception_msgs__msg__ExtraInfo * value =
    (const deva_perception_msgs__msg__ExtraInfo *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__resize_function__RVResult__extra_infos(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__ExtraInfo__Sequence * member =
    (deva_perception_msgs__msg__ExtraInfo__Sequence *)(untyped_member);
  deva_perception_msgs__msg__ExtraInfo__Sequence__fini(member);
  return deva_perception_msgs__msg__ExtraInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__RVResult_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__RVResult, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "translation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__RVResult, translation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__RVResult, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dynamic_obs_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__RVResult, dynamic_obs_list),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__size_function__RVResult__dynamic_obs_list,  // size() function pointer
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__get_const_function__RVResult__dynamic_obs_list,  // get_const(index) function pointer
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__get_function__RVResult__dynamic_obs_list,  // get(index) function pointer
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__fetch_function__RVResult__dynamic_obs_list,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__assign_function__RVResult__dynamic_obs_list,  // assign(index, value) function pointer
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__resize_function__RVResult__dynamic_obs_list  // resize(index) function pointer
  },
  {
    "fixed_obs_list",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__RVResult, fixed_obs_list),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__size_function__RVResult__fixed_obs_list,  // size() function pointer
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__get_const_function__RVResult__fixed_obs_list,  // get_const(index) function pointer
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__get_function__RVResult__fixed_obs_list,  // get(index) function pointer
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__fetch_function__RVResult__fixed_obs_list,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__assign_function__RVResult__fixed_obs_list,  // assign(index, value) function pointer
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__resize_function__RVResult__fixed_obs_list  // resize(index) function pointer
  },
  {
    "extra_infos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__RVResult, extra_infos),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__size_function__RVResult__extra_infos,  // size() function pointer
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__get_const_function__RVResult__extra_infos,  // get_const(index) function pointer
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__get_function__RVResult__extra_infos,  // get(index) function pointer
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__fetch_function__RVResult__extra_infos,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__assign_function__RVResult__extra_infos,  // assign(index, value) function pointer
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__resize_function__RVResult__extra_infos  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__RVResult_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "RVResult",  // message name
  6,  // number of fields
  sizeof(deva_perception_msgs__msg__RVResult),
  deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__RVResult_message_member_array,  // message members
  deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__RVResult_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__RVResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__RVResult_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__RVResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, RVResult)() {
  deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__RVResult_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__RVResult_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__RVResult_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__RVResult_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, DynamicObstacleList)();
  deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__RVResult_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, FixedObstacleList)();
  deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__RVResult_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, ExtraInfo)();
  if (!deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__RVResult_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__RVResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__RVResult__rosidl_typesupport_introspection_c__RVResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
