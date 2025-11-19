// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from deva_perception_msgs:msg/PerceptionResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "deva_perception_msgs/msg/detail/perception_result__rosidl_typesupport_introspection_c.h"
#include "deva_perception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "deva_perception_msgs/msg/detail/perception_result__functions.h"
#include "deva_perception_msgs/msg/detail/perception_result__struct.h"


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
// Member `st_boundaries`
#include "deva_perception_msgs/msg/st_boundary.h"
// Member `st_boundaries`
#include "deva_perception_msgs/msg/detail/st_boundary__rosidl_typesupport_introspection_c.h"
// Member `ust_boundaries`
#include "deva_perception_msgs/msg/ust_boundary.h"
// Member `ust_boundaries`
#include "deva_perception_msgs/msg/detail/ust_boundary__rosidl_typesupport_introspection_c.h"
// Member `crosswalks`
#include "deva_perception_msgs/msg/crosswalk.h"
// Member `crosswalks`
#include "deva_perception_msgs/msg/detail/crosswalk__rosidl_typesupport_introspection_c.h"
// Member `steering_arrows`
#include "deva_perception_msgs/msg/steering_arrow.h"
// Member `steering_arrows`
#include "deva_perception_msgs/msg/detail/steering_arrow__rosidl_typesupport_introspection_c.h"
// Member `noparking_zones`
#include "deva_perception_msgs/msg/noparking_zone.h"
// Member `noparking_zones`
#include "deva_perception_msgs/msg/detail/noparking_zone__rosidl_typesupport_introspection_c.h"
// Member `areas`
#include "deva_perception_msgs/msg/area.h"
// Member `areas`
#include "deva_perception_msgs/msg/detail/area__rosidl_typesupport_introspection_c.h"
// Member `moving_obstacles`
#include "deva_perception_msgs/msg/moving_obstacle.h"
// Member `moving_obstacles`
#include "deva_perception_msgs/msg/detail/moving_obstacle__rosidl_typesupport_introspection_c.h"
// Member `general_static_obstacles`
#include "deva_perception_msgs/msg/static_obstacle.h"
// Member `general_static_obstacles`
#include "deva_perception_msgs/msg/detail/static_obstacle__rosidl_typesupport_introspection_c.h"
// Member `traffic_light_obstacles`
#include "deva_perception_msgs/msg/traffic_light.h"
// Member `traffic_light_obstacles`
#include "deva_perception_msgs/msg/detail/traffic_light__rosidl_typesupport_introspection_c.h"
// Member `mutable_obstacles`
#include "deva_perception_msgs/msg/mutable_obstacle.h"
// Member `mutable_obstacles`
#include "deva_perception_msgs/msg/detail/mutable_obstacle__rosidl_typesupport_introspection_c.h"
// Member `center_lines`
#include "deva_perception_msgs/msg/center_line.h"
// Member `center_lines`
#include "deva_perception_msgs/msg/detail/center_line__rosidl_typesupport_introspection_c.h"
// Member `fork_points`
#include "deva_perception_msgs/msg/fork_point.h"
// Member `fork_points`
#include "deva_perception_msgs/msg/detail/fork_point__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  deva_perception_msgs__msg__PerceptionResult__init(message_memory);
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_fini_function(void * message_memory)
{
  deva_perception_msgs__msg__PerceptionResult__fini(message_memory);
}

size_t deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__st_boundaries(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__STBoundary__Sequence * member =
    (const deva_perception_msgs__msg__STBoundary__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__st_boundaries(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__STBoundary__Sequence * member =
    (const deva_perception_msgs__msg__STBoundary__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__st_boundaries(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__STBoundary__Sequence * member =
    (deva_perception_msgs__msg__STBoundary__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__st_boundaries(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__STBoundary * item =
    ((const deva_perception_msgs__msg__STBoundary *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__st_boundaries(untyped_member, index));
  deva_perception_msgs__msg__STBoundary * value =
    (deva_perception_msgs__msg__STBoundary *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__st_boundaries(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__STBoundary * item =
    ((deva_perception_msgs__msg__STBoundary *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__st_boundaries(untyped_member, index));
  const deva_perception_msgs__msg__STBoundary * value =
    (const deva_perception_msgs__msg__STBoundary *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__st_boundaries(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__STBoundary__Sequence * member =
    (deva_perception_msgs__msg__STBoundary__Sequence *)(untyped_member);
  deva_perception_msgs__msg__STBoundary__Sequence__fini(member);
  return deva_perception_msgs__msg__STBoundary__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__ust_boundaries(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__USTBoundary__Sequence * member =
    (const deva_perception_msgs__msg__USTBoundary__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__ust_boundaries(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__USTBoundary__Sequence * member =
    (const deva_perception_msgs__msg__USTBoundary__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__ust_boundaries(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__USTBoundary__Sequence * member =
    (deva_perception_msgs__msg__USTBoundary__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__ust_boundaries(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__USTBoundary * item =
    ((const deva_perception_msgs__msg__USTBoundary *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__ust_boundaries(untyped_member, index));
  deva_perception_msgs__msg__USTBoundary * value =
    (deva_perception_msgs__msg__USTBoundary *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__ust_boundaries(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__USTBoundary * item =
    ((deva_perception_msgs__msg__USTBoundary *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__ust_boundaries(untyped_member, index));
  const deva_perception_msgs__msg__USTBoundary * value =
    (const deva_perception_msgs__msg__USTBoundary *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__ust_boundaries(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__USTBoundary__Sequence * member =
    (deva_perception_msgs__msg__USTBoundary__Sequence *)(untyped_member);
  deva_perception_msgs__msg__USTBoundary__Sequence__fini(member);
  return deva_perception_msgs__msg__USTBoundary__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__crosswalks(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__Crosswalk__Sequence * member =
    (const deva_perception_msgs__msg__Crosswalk__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__crosswalks(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__Crosswalk__Sequence * member =
    (const deva_perception_msgs__msg__Crosswalk__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__crosswalks(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__Crosswalk__Sequence * member =
    (deva_perception_msgs__msg__Crosswalk__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__crosswalks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__Crosswalk * item =
    ((const deva_perception_msgs__msg__Crosswalk *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__crosswalks(untyped_member, index));
  deva_perception_msgs__msg__Crosswalk * value =
    (deva_perception_msgs__msg__Crosswalk *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__crosswalks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__Crosswalk * item =
    ((deva_perception_msgs__msg__Crosswalk *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__crosswalks(untyped_member, index));
  const deva_perception_msgs__msg__Crosswalk * value =
    (const deva_perception_msgs__msg__Crosswalk *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__crosswalks(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__Crosswalk__Sequence * member =
    (deva_perception_msgs__msg__Crosswalk__Sequence *)(untyped_member);
  deva_perception_msgs__msg__Crosswalk__Sequence__fini(member);
  return deva_perception_msgs__msg__Crosswalk__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__steering_arrows(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__SteeringArrow__Sequence * member =
    (const deva_perception_msgs__msg__SteeringArrow__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__steering_arrows(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__SteeringArrow__Sequence * member =
    (const deva_perception_msgs__msg__SteeringArrow__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__steering_arrows(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__SteeringArrow__Sequence * member =
    (deva_perception_msgs__msg__SteeringArrow__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__steering_arrows(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__SteeringArrow * item =
    ((const deva_perception_msgs__msg__SteeringArrow *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__steering_arrows(untyped_member, index));
  deva_perception_msgs__msg__SteeringArrow * value =
    (deva_perception_msgs__msg__SteeringArrow *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__steering_arrows(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__SteeringArrow * item =
    ((deva_perception_msgs__msg__SteeringArrow *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__steering_arrows(untyped_member, index));
  const deva_perception_msgs__msg__SteeringArrow * value =
    (const deva_perception_msgs__msg__SteeringArrow *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__steering_arrows(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__SteeringArrow__Sequence * member =
    (deva_perception_msgs__msg__SteeringArrow__Sequence *)(untyped_member);
  deva_perception_msgs__msg__SteeringArrow__Sequence__fini(member);
  return deva_perception_msgs__msg__SteeringArrow__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__noparking_zones(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__NoparkingZone__Sequence * member =
    (const deva_perception_msgs__msg__NoparkingZone__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__noparking_zones(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__NoparkingZone__Sequence * member =
    (const deva_perception_msgs__msg__NoparkingZone__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__noparking_zones(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__NoparkingZone__Sequence * member =
    (deva_perception_msgs__msg__NoparkingZone__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__noparking_zones(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__NoparkingZone * item =
    ((const deva_perception_msgs__msg__NoparkingZone *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__noparking_zones(untyped_member, index));
  deva_perception_msgs__msg__NoparkingZone * value =
    (deva_perception_msgs__msg__NoparkingZone *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__noparking_zones(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__NoparkingZone * item =
    ((deva_perception_msgs__msg__NoparkingZone *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__noparking_zones(untyped_member, index));
  const deva_perception_msgs__msg__NoparkingZone * value =
    (const deva_perception_msgs__msg__NoparkingZone *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__noparking_zones(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__NoparkingZone__Sequence * member =
    (deva_perception_msgs__msg__NoparkingZone__Sequence *)(untyped_member);
  deva_perception_msgs__msg__NoparkingZone__Sequence__fini(member);
  return deva_perception_msgs__msg__NoparkingZone__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__areas(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__Area__Sequence * member =
    (const deva_perception_msgs__msg__Area__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__areas(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__Area__Sequence * member =
    (const deva_perception_msgs__msg__Area__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__areas(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__Area__Sequence * member =
    (deva_perception_msgs__msg__Area__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__areas(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__Area * item =
    ((const deva_perception_msgs__msg__Area *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__areas(untyped_member, index));
  deva_perception_msgs__msg__Area * value =
    (deva_perception_msgs__msg__Area *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__areas(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__Area * item =
    ((deva_perception_msgs__msg__Area *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__areas(untyped_member, index));
  const deva_perception_msgs__msg__Area * value =
    (const deva_perception_msgs__msg__Area *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__areas(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__Area__Sequence * member =
    (deva_perception_msgs__msg__Area__Sequence *)(untyped_member);
  deva_perception_msgs__msg__Area__Sequence__fini(member);
  return deva_perception_msgs__msg__Area__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__moving_obstacles(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__MovingObstacle__Sequence * member =
    (const deva_perception_msgs__msg__MovingObstacle__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__moving_obstacles(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__MovingObstacle__Sequence * member =
    (const deva_perception_msgs__msg__MovingObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__moving_obstacles(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__MovingObstacle__Sequence * member =
    (deva_perception_msgs__msg__MovingObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__moving_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__MovingObstacle * item =
    ((const deva_perception_msgs__msg__MovingObstacle *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__moving_obstacles(untyped_member, index));
  deva_perception_msgs__msg__MovingObstacle * value =
    (deva_perception_msgs__msg__MovingObstacle *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__moving_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__MovingObstacle * item =
    ((deva_perception_msgs__msg__MovingObstacle *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__moving_obstacles(untyped_member, index));
  const deva_perception_msgs__msg__MovingObstacle * value =
    (const deva_perception_msgs__msg__MovingObstacle *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__moving_obstacles(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__MovingObstacle__Sequence * member =
    (deva_perception_msgs__msg__MovingObstacle__Sequence *)(untyped_member);
  deva_perception_msgs__msg__MovingObstacle__Sequence__fini(member);
  return deva_perception_msgs__msg__MovingObstacle__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__general_static_obstacles(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__StaticObstacle__Sequence * member =
    (const deva_perception_msgs__msg__StaticObstacle__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__general_static_obstacles(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__StaticObstacle__Sequence * member =
    (const deva_perception_msgs__msg__StaticObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__general_static_obstacles(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__StaticObstacle__Sequence * member =
    (deva_perception_msgs__msg__StaticObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__general_static_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__StaticObstacle * item =
    ((const deva_perception_msgs__msg__StaticObstacle *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__general_static_obstacles(untyped_member, index));
  deva_perception_msgs__msg__StaticObstacle * value =
    (deva_perception_msgs__msg__StaticObstacle *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__general_static_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__StaticObstacle * item =
    ((deva_perception_msgs__msg__StaticObstacle *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__general_static_obstacles(untyped_member, index));
  const deva_perception_msgs__msg__StaticObstacle * value =
    (const deva_perception_msgs__msg__StaticObstacle *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__general_static_obstacles(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__StaticObstacle__Sequence * member =
    (deva_perception_msgs__msg__StaticObstacle__Sequence *)(untyped_member);
  deva_perception_msgs__msg__StaticObstacle__Sequence__fini(member);
  return deva_perception_msgs__msg__StaticObstacle__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__traffic_light_obstacles(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__TrafficLight__Sequence * member =
    (const deva_perception_msgs__msg__TrafficLight__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__traffic_light_obstacles(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__TrafficLight__Sequence * member =
    (const deva_perception_msgs__msg__TrafficLight__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__traffic_light_obstacles(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__TrafficLight__Sequence * member =
    (deva_perception_msgs__msg__TrafficLight__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__traffic_light_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__TrafficLight * item =
    ((const deva_perception_msgs__msg__TrafficLight *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__traffic_light_obstacles(untyped_member, index));
  deva_perception_msgs__msg__TrafficLight * value =
    (deva_perception_msgs__msg__TrafficLight *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__traffic_light_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__TrafficLight * item =
    ((deva_perception_msgs__msg__TrafficLight *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__traffic_light_obstacles(untyped_member, index));
  const deva_perception_msgs__msg__TrafficLight * value =
    (const deva_perception_msgs__msg__TrafficLight *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__traffic_light_obstacles(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__TrafficLight__Sequence * member =
    (deva_perception_msgs__msg__TrafficLight__Sequence *)(untyped_member);
  deva_perception_msgs__msg__TrafficLight__Sequence__fini(member);
  return deva_perception_msgs__msg__TrafficLight__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__mutable_obstacles(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__MutableObstacle__Sequence * member =
    (const deva_perception_msgs__msg__MutableObstacle__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__mutable_obstacles(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__MutableObstacle__Sequence * member =
    (const deva_perception_msgs__msg__MutableObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__mutable_obstacles(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__MutableObstacle__Sequence * member =
    (deva_perception_msgs__msg__MutableObstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__mutable_obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__MutableObstacle * item =
    ((const deva_perception_msgs__msg__MutableObstacle *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__mutable_obstacles(untyped_member, index));
  deva_perception_msgs__msg__MutableObstacle * value =
    (deva_perception_msgs__msg__MutableObstacle *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__mutable_obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__MutableObstacle * item =
    ((deva_perception_msgs__msg__MutableObstacle *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__mutable_obstacles(untyped_member, index));
  const deva_perception_msgs__msg__MutableObstacle * value =
    (const deva_perception_msgs__msg__MutableObstacle *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__mutable_obstacles(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__MutableObstacle__Sequence * member =
    (deva_perception_msgs__msg__MutableObstacle__Sequence *)(untyped_member);
  deva_perception_msgs__msg__MutableObstacle__Sequence__fini(member);
  return deva_perception_msgs__msg__MutableObstacle__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__center_lines(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__CenterLine__Sequence * member =
    (const deva_perception_msgs__msg__CenterLine__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__center_lines(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__CenterLine__Sequence * member =
    (const deva_perception_msgs__msg__CenterLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__center_lines(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__CenterLine__Sequence * member =
    (deva_perception_msgs__msg__CenterLine__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__center_lines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__CenterLine * item =
    ((const deva_perception_msgs__msg__CenterLine *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__center_lines(untyped_member, index));
  deva_perception_msgs__msg__CenterLine * value =
    (deva_perception_msgs__msg__CenterLine *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__center_lines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__CenterLine * item =
    ((deva_perception_msgs__msg__CenterLine *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__center_lines(untyped_member, index));
  const deva_perception_msgs__msg__CenterLine * value =
    (const deva_perception_msgs__msg__CenterLine *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__center_lines(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__CenterLine__Sequence * member =
    (deva_perception_msgs__msg__CenterLine__Sequence *)(untyped_member);
  deva_perception_msgs__msg__CenterLine__Sequence__fini(member);
  return deva_perception_msgs__msg__CenterLine__Sequence__init(member, size);
}

size_t deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__fork_points(
  const void * untyped_member)
{
  const deva_perception_msgs__msg__ForkPoint__Sequence * member =
    (const deva_perception_msgs__msg__ForkPoint__Sequence *)(untyped_member);
  return member->size;
}

const void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__fork_points(
  const void * untyped_member, size_t index)
{
  const deva_perception_msgs__msg__ForkPoint__Sequence * member =
    (const deva_perception_msgs__msg__ForkPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__fork_points(
  void * untyped_member, size_t index)
{
  deva_perception_msgs__msg__ForkPoint__Sequence * member =
    (deva_perception_msgs__msg__ForkPoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__fork_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const deva_perception_msgs__msg__ForkPoint * item =
    ((const deva_perception_msgs__msg__ForkPoint *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__fork_points(untyped_member, index));
  deva_perception_msgs__msg__ForkPoint * value =
    (deva_perception_msgs__msg__ForkPoint *)(untyped_value);
  *value = *item;
}

void deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__fork_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  deva_perception_msgs__msg__ForkPoint * item =
    ((deva_perception_msgs__msg__ForkPoint *)
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__fork_points(untyped_member, index));
  const deva_perception_msgs__msg__ForkPoint * value =
    (const deva_perception_msgs__msg__ForkPoint *)(untyped_value);
  *item = *value;
}

bool deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__fork_points(
  void * untyped_member, size_t size)
{
  deva_perception_msgs__msg__ForkPoint__Sequence * member =
    (deva_perception_msgs__msg__ForkPoint__Sequence *)(untyped_member);
  deva_perception_msgs__msg__ForkPoint__Sequence__fini(member);
  return deva_perception_msgs__msg__ForkPoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_member_array[15] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__PerceptionResult, header),  // bytes offset in struct
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
    offsetof(deva_perception_msgs__msg__PerceptionResult, translation),  // bytes offset in struct
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
    offsetof(deva_perception_msgs__msg__PerceptionResult, orientation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "st_boundaries",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__PerceptionResult, st_boundaries),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__st_boundaries,  // size() function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__st_boundaries,  // get_const(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__st_boundaries,  // get(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__st_boundaries,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__st_boundaries,  // assign(index, value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__st_boundaries  // resize(index) function pointer
  },
  {
    "ust_boundaries",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__PerceptionResult, ust_boundaries),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__ust_boundaries,  // size() function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__ust_boundaries,  // get_const(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__ust_boundaries,  // get(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__ust_boundaries,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__ust_boundaries,  // assign(index, value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__ust_boundaries  // resize(index) function pointer
  },
  {
    "crosswalks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__PerceptionResult, crosswalks),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__crosswalks,  // size() function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__crosswalks,  // get_const(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__crosswalks,  // get(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__crosswalks,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__crosswalks,  // assign(index, value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__crosswalks  // resize(index) function pointer
  },
  {
    "steering_arrows",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__PerceptionResult, steering_arrows),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__steering_arrows,  // size() function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__steering_arrows,  // get_const(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__steering_arrows,  // get(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__steering_arrows,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__steering_arrows,  // assign(index, value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__steering_arrows  // resize(index) function pointer
  },
  {
    "noparking_zones",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__PerceptionResult, noparking_zones),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__noparking_zones,  // size() function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__noparking_zones,  // get_const(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__noparking_zones,  // get(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__noparking_zones,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__noparking_zones,  // assign(index, value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__noparking_zones  // resize(index) function pointer
  },
  {
    "areas",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__PerceptionResult, areas),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__areas,  // size() function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__areas,  // get_const(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__areas,  // get(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__areas,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__areas,  // assign(index, value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__areas  // resize(index) function pointer
  },
  {
    "moving_obstacles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__PerceptionResult, moving_obstacles),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__moving_obstacles,  // size() function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__moving_obstacles,  // get_const(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__moving_obstacles,  // get(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__moving_obstacles,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__moving_obstacles,  // assign(index, value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__moving_obstacles  // resize(index) function pointer
  },
  {
    "general_static_obstacles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__PerceptionResult, general_static_obstacles),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__general_static_obstacles,  // size() function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__general_static_obstacles,  // get_const(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__general_static_obstacles,  // get(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__general_static_obstacles,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__general_static_obstacles,  // assign(index, value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__general_static_obstacles  // resize(index) function pointer
  },
  {
    "traffic_light_obstacles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__PerceptionResult, traffic_light_obstacles),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__traffic_light_obstacles,  // size() function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__traffic_light_obstacles,  // get_const(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__traffic_light_obstacles,  // get(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__traffic_light_obstacles,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__traffic_light_obstacles,  // assign(index, value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__traffic_light_obstacles  // resize(index) function pointer
  },
  {
    "mutable_obstacles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__PerceptionResult, mutable_obstacles),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__mutable_obstacles,  // size() function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__mutable_obstacles,  // get_const(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__mutable_obstacles,  // get(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__mutable_obstacles,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__mutable_obstacles,  // assign(index, value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__mutable_obstacles  // resize(index) function pointer
  },
  {
    "center_lines",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__PerceptionResult, center_lines),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__center_lines,  // size() function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__center_lines,  // get_const(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__center_lines,  // get(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__center_lines,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__center_lines,  // assign(index, value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__center_lines  // resize(index) function pointer
  },
  {
    "fork_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(deva_perception_msgs__msg__PerceptionResult, fork_points),  // bytes offset in struct
    NULL,  // default value
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__size_function__PerceptionResult__fork_points,  // size() function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_const_function__PerceptionResult__fork_points,  // get_const(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__get_function__PerceptionResult__fork_points,  // get(index) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__fetch_function__PerceptionResult__fork_points,  // fetch(index, &value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__assign_function__PerceptionResult__fork_points,  // assign(index, value) function pointer
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__resize_function__PerceptionResult__fork_points  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_members = {
  "deva_perception_msgs__msg",  // message namespace
  "PerceptionResult",  // message name
  15,  // number of fields
  sizeof(deva_perception_msgs__msg__PerceptionResult),
  deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_member_array,  // message members
  deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_init_function,  // function to initialize message memory (memory has to be allocated)
  deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_type_support_handle = {
  0,
  &deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_deva_perception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, PerceptionResult)() {
  deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_common_msgs, msg, Header)();
  deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, STBoundary)();
  deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, USTBoundary)();
  deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, Crosswalk)();
  deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, SteeringArrow)();
  deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, NoparkingZone)();
  deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, Area)();
  deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, MovingObstacle)();
  deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, StaticObstacle)();
  deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, TrafficLight)();
  deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, MutableObstacle)();
  deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, CenterLine)();
  deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, deva_perception_msgs, msg, ForkPoint)();
  if (!deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_type_support_handle.typesupport_identifier) {
    deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &deva_perception_msgs__msg__PerceptionResult__rosidl_typesupport_introspection_c__PerceptionResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
