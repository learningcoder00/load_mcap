// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/LaneArrayv2.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/lane_arrayv2__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/lane_arrayv2__functions.h"
#include "deva_perception_msgs/msg/detail/lane_arrayv2__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `lane_array`
#include "deva_perception_msgs/msg/lanev2.h"
// Member `lane_array`
#include "deva_perception_msgs/msg/detail/lanev2__rosidl_typesupport_introspection_c.h"
// Member `crosswalk_array`
#include "deva_perception_msgs/msg/crosswalk.h"
// Member `crosswalk_array`
#include "deva_perception_msgs/msg/detail/crosswalk__rosidl_typesupport_introspection_c.h"
// Member `steering_arrow_array`
#include "deva_perception_msgs/msg/steering_arrow.h"
// Member `steering_arrow_array`
#include "deva_perception_msgs/msg/detail/steering_arrow__rosidl_typesupport_introspection_c.h"
// Member `noparking_zone_array`
#include "deva_perception_msgs/msg/noparking_zone.h"
// Member `noparking_zone_array`
#include "deva_perception_msgs/msg/detail/noparking_zone__rosidl_typesupport_introspection_c.h"
// Member `partition_zone_array`
#include "deva_perception_msgs/msg/partition_zone.h"
// Member `partition_zone_array`
#include "deva_perception_msgs/msg/detail/partition_zone__rosidl_typesupport_introspection_c.h"
// Member `center_line_array`
#include "deva_perception_msgs/msg/percept_center_line.h"
// Member `center_line_array`
#include "deva_perception_msgs/msg/detail/percept_center_line__rosidl_typesupport_introspection_c.h"
// Member `entrance_array`
#include "deva_perception_msgs/msg/entrance.h"
// Member `entrance_array`
#include "deva_perception_msgs/msg/detail/entrance__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__LaneArrayv2_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__LaneArrayv2__init(message_memory);
}

void deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__LaneArrayv2_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__LaneArrayv2__fini(message_memory);
}

size_t deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__size_function__LaneArrayv2__lane_array(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__Lanev2__Sequence * member =
    (const deva_perception_msgs__msg__Lanev2__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__lane_array(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__Lanev2__Sequence * member =
    (const deva_perception_msgs__msg__Lanev2__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__lane_array(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__Lanev2__Sequence * member =
    (deva_perception_msgs__msg__Lanev2__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__fetch_function__LaneArrayv2__lane_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__Lanev2 * item =
    ((const deva_perception_msgs__msg__Lanev2 *)
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__lane_array(untyped_member, index));
  deva_perception_msgs__msg__Lanev2 * value =
    (deva_perception_msgs__msg__Lanev2 *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__assign_function__LaneArrayv2__lane_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__Lanev2 * item =
    ((deva_perception_msgs__msg__Lanev2 *)
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__lane_array(untyped_member, index));
  const deva_perception_msgs__msg__Lanev2 * value =
    (const deva_perception_msgs__msg__Lanev2 *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__resize_function__LaneArrayv2__lane_array(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__Lanev2__Sequence * member =
    (deva_perception_msgs__msg__Lanev2__Sequence *)(untyped_member);
  deva_perception_msgs__msg__Lanev2__Sequence__fini(member);
  return deva_perception_msgs__msg__Lanev2__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__size_function__LaneArrayv2__crosswalk_array(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__Crosswalk__Sequence * member =
    (const deva_perception_msgs__msg__Crosswalk__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__crosswalk_array(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__Crosswalk__Sequence * member =
    (const deva_perception_msgs__msg__Crosswalk__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__crosswalk_array(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__Crosswalk__Sequence * member =
    (deva_perception_msgs__msg__Crosswalk__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__fetch_function__LaneArrayv2__crosswalk_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__Crosswalk * item =
    ((const deva_perception_msgs__msg__Crosswalk *)
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__crosswalk_array(untyped_member, index));
  deva_perception_msgs__msg__Crosswalk * value =
    (deva_perception_msgs__msg__Crosswalk *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__assign_function__LaneArrayv2__crosswalk_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__Crosswalk * item =
    ((deva_perception_msgs__msg__Crosswalk *)
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__crosswalk_array(untyped_member, index));
  const deva_perception_msgs__msg__Crosswalk * value =
    (const deva_perception_msgs__msg__Crosswalk *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__resize_function__LaneArrayv2__crosswalk_array(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__Crosswalk__Sequence * member =
    (deva_perception_msgs__msg__Crosswalk__Sequence *)(untyped_member);
  deva_perception_msgs__msg__Crosswalk__Sequence__fini(member);
  return deva_perception_msgs__msg__Crosswalk__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__size_function__LaneArrayv2__steering_arrow_array(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__SteeringArrow__Sequence * member =
    (const deva_perception_msgs__msg__SteeringArrow__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__steering_arrow_array(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__SteeringArrow__Sequence * member =
    (const deva_perception_msgs__msg__SteeringArrow__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__steering_arrow_array(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__SteeringArrow__Sequence * member =
    (deva_perception_msgs__msg__SteeringArrow__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__fetch_function__LaneArrayv2__steering_arrow_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__SteeringArrow * item =
    ((const deva_perception_msgs__msg__SteeringArrow *)
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__steering_arrow_array(untyped_member, index));
  deva_perception_msgs__msg__SteeringArrow * value =
    (deva_perception_msgs__msg__SteeringArrow *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__assign_function__LaneArrayv2__steering_arrow_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__SteeringArrow * item =
    ((deva_perception_msgs__msg__SteeringArrow *)
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__steering_arrow_array(untyped_member, index));
  const deva_perception_msgs__msg__SteeringArrow * value =
    (const deva_perception_msgs__msg__SteeringArrow *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__resize_function__LaneArrayv2__steering_arrow_array(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__SteeringArrow__Sequence * member =
    (deva_perception_msgs__msg__SteeringArrow__Sequence *)(untyped_member);
  deva_perception_msgs__msg__SteeringArrow__Sequence__fini(member);
  return deva_perception_msgs__msg__SteeringArrow__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__size_function__LaneArrayv2__noparking_zone_array(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__NoparkingZone__Sequence * member =
    (const deva_perception_msgs__msg__NoparkingZone__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__noparking_zone_array(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__NoparkingZone__Sequence * member =
    (const deva_perception_msgs__msg__NoparkingZone__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__noparking_zone_array(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__NoparkingZone__Sequence * member =
    (deva_perception_msgs__msg__NoparkingZone__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__fetch_function__LaneArrayv2__noparking_zone_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__NoparkingZone * item =
    ((const deva_perception_msgs__msg__NoparkingZone *)
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__noparking_zone_array(untyped_member, index));
  deva_perception_msgs__msg__NoparkingZone * value =
    (deva_perception_msgs__msg__NoparkingZone *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__assign_function__LaneArrayv2__noparking_zone_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__NoparkingZone * item =
    ((deva_perception_msgs__msg__NoparkingZone *)
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__noparking_zone_array(untyped_member, index));
  const deva_perception_msgs__msg__NoparkingZone * value =
    (const deva_perception_msgs__msg__NoparkingZone *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__resize_function__LaneArrayv2__noparking_zone_array(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__NoparkingZone__Sequence * member =
    (deva_perception_msgs__msg__NoparkingZone__Sequence *)(untyped_member);
  deva_perception_msgs__msg__NoparkingZone__Sequence__fini(member);
  return deva_perception_msgs__msg__NoparkingZone__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__size_function__LaneArrayv2__partition_zone_array(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__PartitionZone__Sequence * member =
    (const deva_perception_msgs__msg__PartitionZone__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__partition_zone_array(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__PartitionZone__Sequence * member =
    (const deva_perception_msgs__msg__PartitionZone__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__partition_zone_array(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__PartitionZone__Sequence * member =
    (deva_perception_msgs__msg__PartitionZone__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__fetch_function__LaneArrayv2__partition_zone_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__PartitionZone * item =
    ((const deva_perception_msgs__msg__PartitionZone *)
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__partition_zone_array(untyped_member, index));
  deva_perception_msgs__msg__PartitionZone * value =
    (deva_perception_msgs__msg__PartitionZone *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__assign_function__LaneArrayv2__partition_zone_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__PartitionZone * item =
    ((deva_perception_msgs__msg__PartitionZone *)
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__partition_zone_array(untyped_member, index));
  const deva_perception_msgs__msg__PartitionZone * value =
    (const deva_perception_msgs__msg__PartitionZone *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__resize_function__LaneArrayv2__partition_zone_array(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__PartitionZone__Sequence * member =
    (deva_perception_msgs__msg__PartitionZone__Sequence *)(untyped_member);
  deva_perception_msgs__msg__PartitionZone__Sequence__fini(member);
  return deva_perception_msgs__msg__PartitionZone__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__size_function__LaneArrayv2__center_line_array(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__PerceptCenterLine__Sequence * member =
    (const deva_perception_msgs__msg__PerceptCenterLine__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__center_line_array(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__PerceptCenterLine__Sequence * member =
    (const deva_perception_msgs__msg__PerceptCenterLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__center_line_array(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__PerceptCenterLine__Sequence * member =
    (deva_perception_msgs__msg__PerceptCenterLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__fetch_function__LaneArrayv2__center_line_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__PerceptCenterLine * item =
    ((const deva_perception_msgs__msg__PerceptCenterLine *)
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__center_line_array(untyped_member, index));
  deva_perception_msgs__msg__PerceptCenterLine * value =
    (deva_perception_msgs__msg__PerceptCenterLine *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__assign_function__LaneArrayv2__center_line_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__PerceptCenterLine * item =
    ((deva_perception_msgs__msg__PerceptCenterLine *)
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__center_line_array(untyped_member, index));
  const deva_perception_msgs__msg__PerceptCenterLine * value =
    (const deva_perception_msgs__msg__PerceptCenterLine *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__resize_function__LaneArrayv2__center_line_array(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__PerceptCenterLine__Sequence * member =
    (deva_perception_msgs__msg__PerceptCenterLine__Sequence *)(untyped_member);
  deva_perception_msgs__msg__PerceptCenterLine__Sequence__fini(member);
  return deva_perception_msgs__msg__PerceptCenterLine__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__size_function__LaneArrayv2__entrance_array(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__Entrance__Sequence * member =
    (const deva_perception_msgs__msg__Entrance__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__entrance_array(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__Entrance__Sequence * member =
    (const deva_perception_msgs__msg__Entrance__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__entrance_array(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__Entrance__Sequence * member =
    (deva_perception_msgs__msg__Entrance__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__fetch_function__LaneArrayv2__entrance_array(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__Entrance * item =
    ((const deva_perception_msgs__msg__Entrance *)
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__entrance_array(untyped_member, index));
  deva_perception_msgs__msg__Entrance * value =
    (deva_perception_msgs__msg__Entrance *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__assign_function__LaneArrayv2__entrance_array(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__Entrance * item =
    ((deva_perception_msgs__msg__Entrance *)
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__entrance_array(untyped_member, index));
  const deva_perception_msgs__msg__Entrance * value =
    (const deva_perception_msgs__msg__Entrance *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__resize_function__LaneArrayv2__entrance_array(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__Entrance__Sequence * member =
    (deva_perception_msgs__msg__Entrance__Sequence *)(untyped_member);
  deva_perception_msgs__msg__Entrance__Sequence__fini(member);
  return deva_perception_msgs__msg__Entrance__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__LaneArrayv2_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__LaneArrayv2, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_left_lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__LaneArrayv2, vehicle_left_lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicle_right_lane_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__LaneArrayv2, vehicle_right_lane_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lane_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__LaneArrayv2, lane_array),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__size_function__LaneArrayv2__lane_array,  // size() function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__lane_array,  // get_const(index) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__lane_array,  // get(index) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__fetch_function__LaneArrayv2__lane_array,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__assign_function__LaneArrayv2__lane_array,  // assign(index, value) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__resize_function__LaneArrayv2__lane_array  // resize(index) function pointer
  },
  {
    "crosswalk_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__LaneArrayv2, crosswalk_array),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__size_function__LaneArrayv2__crosswalk_array,  // size() function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__crosswalk_array,  // get_const(index) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__crosswalk_array,  // get(index) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__fetch_function__LaneArrayv2__crosswalk_array,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__assign_function__LaneArrayv2__crosswalk_array,  // assign(index, value) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__resize_function__LaneArrayv2__crosswalk_array  // resize(index) function pointer
  },
  {
    "steering_arrow_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__LaneArrayv2, steering_arrow_array),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__size_function__LaneArrayv2__steering_arrow_array,  // size() function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__steering_arrow_array,  // get_const(index) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__steering_arrow_array,  // get(index) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__fetch_function__LaneArrayv2__steering_arrow_array,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__assign_function__LaneArrayv2__steering_arrow_array,  // assign(index, value) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__resize_function__LaneArrayv2__steering_arrow_array  // resize(index) function pointer
  },
  {
    "noparking_zone_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__LaneArrayv2, noparking_zone_array),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__size_function__LaneArrayv2__noparking_zone_array,  // size() function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__noparking_zone_array,  // get_const(index) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__noparking_zone_array,  // get(index) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__fetch_function__LaneArrayv2__noparking_zone_array,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__assign_function__LaneArrayv2__noparking_zone_array,  // assign(index, value) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__resize_function__LaneArrayv2__noparking_zone_array  // resize(index) function pointer
  },
  {
    "partition_zone_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__LaneArrayv2, partition_zone_array),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__size_function__LaneArrayv2__partition_zone_array,  // size() function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__partition_zone_array,  // get_const(index) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__partition_zone_array,  // get(index) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__fetch_function__LaneArrayv2__partition_zone_array,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__assign_function__LaneArrayv2__partition_zone_array,  // assign(index, value) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__resize_function__LaneArrayv2__partition_zone_array  // resize(index) function pointer
  },
  {
    "center_line_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__LaneArrayv2, center_line_array),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__size_function__LaneArrayv2__center_line_array,  // size() function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__center_line_array,  // get_const(index) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__center_line_array,  // get(index) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__fetch_function__LaneArrayv2__center_line_array,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__assign_function__LaneArrayv2__center_line_array,  // assign(index, value) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__resize_function__LaneArrayv2__center_line_array  // resize(index) function pointer
  },
  {
    "entrance_array",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__LaneArrayv2, entrance_array),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__size_function__LaneArrayv2__entrance_array,  // size() function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_const_function__LaneArrayv2__entrance_array,  // get_const(index) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__get_function__LaneArrayv2__entrance_array,  // get(index) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__fetch_function__LaneArrayv2__entrance_array,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__assign_function__LaneArrayv2__entrance_array,  // assign(index, value) function pointer
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__resize_function__LaneArrayv2__entrance_array  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__LaneArrayv2_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "LaneArrayv2",  // message name
  10,  // number of fields
  sizeof(deva_perception_msgs__msg__LaneArrayv2),
  deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__LaneArrayv2_message_member_array,  // message members
  deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__LaneArrayv2_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__LaneArrayv2_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__LaneArrayv2_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__LaneArrayv2_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, LaneArrayv2)() {
  deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__LaneArrayv2_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__LaneArrayv2_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, Lanev2)();
  deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__LaneArrayv2_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, Crosswalk)();
  deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__LaneArrayv2_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, SteeringArrow)();
  deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__LaneArrayv2_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, NoparkingZone)();
  deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__LaneArrayv2_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, PartitionZone)();
  deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__LaneArrayv2_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, PerceptCenterLine)();
  deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__LaneArrayv2_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, Entrance)();
  if (!deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__LaneArrayv2_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__LaneArrayv2_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__LaneArrayv2__rosidl_typesupport_introspection_c__LaneArrayv2_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
