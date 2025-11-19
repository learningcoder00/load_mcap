// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_map_msgs:msg/STLocalMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_map_msgs/msg/detail/st_local_map__rosidl_typesupport_introspection_c.h"
#include "deva_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_map_msgs/msg/detail/st_local_map__functions.h"
#include "deva_map_msgs/msg/detail/st_local_map__struct.h"


// Include directives for member types
// Member `channels`
#include "deva_map_msgs/msg/channel.h"
// Member `channels`
#include "deva_map_msgs/msg/detail/channel__rosidl_typesupport_introspection_c.h"
// Member `reference_channals`
#include "deva_map_msgs/msg/reference_channal.h"
// Member `reference_channals`
#include "deva_map_msgs/msg/detail/reference_channal__rosidl_typesupport_introspection_c.h"
// Member `obstacles`
#include "deva_perception_msgs/msg/static_obstacle.h"
// Member `obstacles`
#include "deva_perception_msgs/msg/detail/static_obstacle__rosidl_typesupport_introspection_c.h"
// Member `signals`
#include "deva_perception_msgs/msg/signal.h"
// Member `signals`
#include "deva_perception_msgs/msg/detail/signal__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__STLocalMap_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_map_msgs__msg__STLocalMap__init(message_memory);
}

void deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__STLocalMap_fini_function(void * message_memory)
{
  deva_map_msgs__msg__STLocalMap__fini(message_memory);
}

size_t deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__size_function__STLocalMap__channels(
  const void * untyped_member)
{
  const deva_map_msgs__msg__Channel__Sequence * member =
    (const deva_map_msgs__msg__Channel__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_const_function__STLocalMap__channels(
  const void * untyped_member, size_t index)
{
  const deva_map_msgs__msg__Channel__Sequence * member =
    (const deva_map_msgs__msg__Channel__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_function__STLocalMap__channels(
  void * untyped_member, size_t index)
{
  deva_map_msgs__msg__Channel__Sequence * member =
    (deva_map_msgs__msg__Channel__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__fetch_function__STLocalMap__channels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_map_msgs__msg__Channel * item =
    ((const deva_map_msgs__msg__Channel *)
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_const_function__STLocalMap__channels(untyped_member, index));
  deva_map_msgs__msg__Channel * value =
    (deva_map_msgs__msg__Channel *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__assign_function__STLocalMap__channels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_map_msgs__msg__Channel * item =
    ((deva_map_msgs__msg__Channel *)
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_function__STLocalMap__channels(untyped_member, index));
  const deva_map_msgs__msg__Channel * value =
    (const deva_map_msgs__msg__Channel *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__resize_function__STLocalMap__channels(
  void * untyped_member, size_t size)
{
  deva_map_msgs__msg__Channel__Sequence * member =
    (deva_map_msgs__msg__Channel__Sequence *)(untyped_member);
  deva_map_msgs__msg__Channel__Sequence__fini(member);
  return deva_map_msgs__msg__Channel__Sequence__init(member, size);
}

size_t deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__size_function__STLocalMap__reference_channals(
  const void * untyped_member)
{
  const deva_map_msgs__msg__ReferenceChannal__Sequence * member =
    (const deva_map_msgs__msg__ReferenceChannal__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_const_function__STLocalMap__reference_channals(
  const void * untyped_member, size_t index)
{
  const deva_map_msgs__msg__ReferenceChannal__Sequence * member =
    (const deva_map_msgs__msg__ReferenceChannal__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_function__STLocalMap__reference_channals(
  void * untyped_member, size_t index)
{
  deva_map_msgs__msg__ReferenceChannal__Sequence * member =
    (deva_map_msgs__msg__ReferenceChannal__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__fetch_function__STLocalMap__reference_channals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_map_msgs__msg__ReferenceChannal * item =
    ((const deva_map_msgs__msg__ReferenceChannal *)
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_const_function__STLocalMap__reference_channals(untyped_member, index));
  deva_map_msgs__msg__ReferenceChannal * value =
    (deva_map_msgs__msg__ReferenceChannal *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__assign_function__STLocalMap__reference_channals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_map_msgs__msg__ReferenceChannal * item =
    ((deva_map_msgs__msg__ReferenceChannal *)
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_function__STLocalMap__reference_channals(untyped_member, index));
  const deva_map_msgs__msg__ReferenceChannal * value =
    (const deva_map_msgs__msg__ReferenceChannal *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__resize_function__STLocalMap__reference_channals(
  void * untyped_member, size_t size)
{
  deva_map_msgs__msg__ReferenceChannal__Sequence * member =
    (deva_map_msgs__msg__ReferenceChannal__Sequence *)(untyped_member);
  deva_map_msgs__msg__ReferenceChannal__Sequence__fini(member);
  return deva_map_msgs__msg__ReferenceChannal__Sequence__init(member, size);
}

size_t deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__size_function__STLocalMap__obstacles(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__StaticObstacle__Sequence * member =
    (const deva_perception_msgs__msg__StaticObstacle__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_const_function__STLocalMap__obstacles(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__StaticObstacle__Sequence * member =
    (const deva_perception_msgs__msg__StaticObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_function__STLocalMap__obstacles(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__StaticObstacle__Sequence * member =
    (deva_perception_msgs__msg__StaticObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__fetch_function__STLocalMap__obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__StaticObstacle * item =
    ((const deva_perception_msgs__msg__StaticObstacle *)
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_const_function__STLocalMap__obstacles(untyped_member, index));
  deva_perception_msgs__msg__StaticObstacle * value =
    (deva_perception_msgs__msg__StaticObstacle *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__assign_function__STLocalMap__obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__StaticObstacle * item =
    ((deva_perception_msgs__msg__StaticObstacle *)
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_function__STLocalMap__obstacles(untyped_member, index));
  const deva_perception_msgs__msg__StaticObstacle * value =
    (const deva_perception_msgs__msg__StaticObstacle *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__resize_function__STLocalMap__obstacles(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__StaticObstacle__Sequence * member =
    (deva_perception_msgs__msg__StaticObstacle__Sequence *)(untyped_member);
  deva_perception_msgs__msg__StaticObstacle__Sequence__fini(member);
  return deva_perception_msgs__msg__StaticObstacle__Sequence__init(member, size);
}

size_t deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__size_function__STLocalMap__signals(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__Signal__Sequence * member =
    (const deva_perception_msgs__msg__Signal__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_const_function__STLocalMap__signals(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__Signal__Sequence * member =
    (const deva_perception_msgs__msg__Signal__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_function__STLocalMap__signals(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__Signal__Sequence * member =
    (deva_perception_msgs__msg__Signal__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__fetch_function__STLocalMap__signals(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__Signal * item =
    ((const deva_perception_msgs__msg__Signal *)
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_const_function__STLocalMap__signals(untyped_member, index));
  deva_perception_msgs__msg__Signal * value =
    (deva_perception_msgs__msg__Signal *)(untyped_value);
  *value = *item;
}

void deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__assign_function__STLocalMap__signals(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__Signal * item =
    ((deva_perception_msgs__msg__Signal *)
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_function__STLocalMap__signals(untyped_member, index));
  const deva_perception_msgs__msg__Signal * value =
    (const deva_perception_msgs__msg__Signal *)(untyped_value);
  *item = *value;
}

bool deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__resize_function__STLocalMap__signals(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__Signal__Sequence * member =
    (deva_perception_msgs__msg__Signal__Sequence *)(untyped_member);
  deva_perception_msgs__msg__Signal__Sequence__fini(member);
  return deva_perception_msgs__msg__Signal__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__STLocalMap_message_member_array[4] = {
  {
    "channels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__STLocalMap, channels),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__size_function__STLocalMap__channels,  // size() function pointer
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_const_function__STLocalMap__channels,  // get_const(index) function pointer
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_function__STLocalMap__channels,  // get(index) function pointer
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__fetch_function__STLocalMap__channels,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__assign_function__STLocalMap__channels,  // assign(index, value) function pointer
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__resize_function__STLocalMap__channels  // resize(index) function pointer
  },
  {
    "reference_channals",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__STLocalMap, reference_channals),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__size_function__STLocalMap__reference_channals,  // size() function pointer
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_const_function__STLocalMap__reference_channals,  // get_const(index) function pointer
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_function__STLocalMap__reference_channals,  // get(index) function pointer
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__fetch_function__STLocalMap__reference_channals,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__assign_function__STLocalMap__reference_channals,  // assign(index, value) function pointer
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__resize_function__STLocalMap__reference_channals  // resize(index) function pointer
  },
  {
    "obstacles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__STLocalMap, obstacles),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__size_function__STLocalMap__obstacles,  // size() function pointer
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_const_function__STLocalMap__obstacles,  // get_const(index) function pointer
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_function__STLocalMap__obstacles,  // get(index) function pointer
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__fetch_function__STLocalMap__obstacles,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__assign_function__STLocalMap__obstacles,  // assign(index, value) function pointer
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__resize_function__STLocalMap__obstacles  // resize(index) function pointer
  },
  {
    "signals",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_map_msgs__msg__STLocalMap, signals),  // bytes offset in struct
    NULL,  // default value
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__size_function__STLocalMap__signals,  // size() function pointer
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_const_function__STLocalMap__signals,  // get_const(index) function pointer
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__get_function__STLocalMap__signals,  // get(index) function pointer
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__fetch_function__STLocalMap__signals,  // fetch(index, &value) function pointer
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__assign_function__STLocalMap__signals,  // assign(index, value) function pointer
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__resize_function__STLocalMap__signals  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__STLocalMap_message_members = {
  "deva_map_msgs__msg",  // message namespace
  "STLocalMap",  // message name
  4,  // number of fields
  sizeof(deva_map_msgs__msg__STLocalMap),
  deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__STLocalMap_message_member_array,  // message members
  deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__STLocalMap_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__STLocalMap_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__STLocalMap_message_type_support_handle = {
  0,
  &deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__STLocalMap_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, STLocalMap)() {
  deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__STLocalMap_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, Channel)();
  deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__STLocalMap_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_map_msgs, msg, ReferenceChannal)();
  deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__STLocalMap_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, StaticObstacle)();
  deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__STLocalMap_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, Signal)();
  if (!deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__STLocalMap_message_type_support_handle.typesupport_identifier) {
    deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__STLocalMap_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_map_msgs__msg__STLocalMap__rosidl_typesupport_introspection_c__STLocalMap_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
