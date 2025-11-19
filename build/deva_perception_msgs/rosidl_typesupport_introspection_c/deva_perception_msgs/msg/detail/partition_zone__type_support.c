// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/PartitionZone.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/partition_zone__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/partition_zone__functions.h"
#include "deva_perception_msgs/msg/detail/partition_zone__struct.h"


// Include directives for member types
// Member `waypoints`
#include "geometry_msgs/msg/point.h"
// Member `waypoints`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__PartitionZone_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__PartitionZone__init(message_memory);
}

void deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__PartitionZone_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__PartitionZone__fini(message_memory);
}

size_t deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__size_function__PartitionZone__waypoints(
  const void * untyped_member)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__get_const_function__PartitionZone__waypoints(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Point__Sequence * member =
    (const geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__get_function__PartitionZone__waypoints(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__fetch_function__PartitionZone__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Point * item =
    ((const geometry_msgs__msg__Point *)
    deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__get_const_function__PartitionZone__waypoints(untyped_member, index));
  geometry_msgs__msg__Point * value =
    (geometry_msgs__msg__Point *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__assign_function__PartitionZone__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Point * item =
    ((geometry_msgs__msg__Point *)
    deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__get_function__PartitionZone__waypoints(untyped_member, index));
  const geometry_msgs__msg__Point * value =
    (const geometry_msgs__msg__Point *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__resize_function__PartitionZone__waypoints(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Point__Sequence * member =
    (geometry_msgs__msg__Point__Sequence *)(untyped_member);
  geometry_msgs__msg__Point__Sequence__fini(member);
  return geometry_msgs__msg__Point__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__PartitionZone_message_member_array[1] = {
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__PartitionZone, waypoints),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__size_function__PartitionZone__waypoints,  // size() function pointer
    deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__get_const_function__PartitionZone__waypoints,  // get_const(index) function pointer
    deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__get_function__PartitionZone__waypoints,  // get(index) function pointer
    deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__fetch_function__PartitionZone__waypoints,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__assign_function__PartitionZone__waypoints,  // assign(index, value) function pointer
    deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__resize_function__PartitionZone__waypoints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__PartitionZone_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "PartitionZone",  // message name
  1,  // number of fields
  sizeof(deva_perception_msgs__msg__PartitionZone),
  deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__PartitionZone_message_member_array,  // message members
  deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__PartitionZone_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__PartitionZone_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__PartitionZone_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__PartitionZone_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, PartitionZone)() {
  deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__PartitionZone_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  if (!deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__PartitionZone_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__PartitionZone_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__PartitionZone__rosidl_typesupport_introspection_c__PartitionZone_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
