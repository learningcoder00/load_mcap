// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/PerceptionResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPTION_RESULT__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPTION_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.h"
// Member 'translation'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"
// Member 'st_boundaries'
#include "deva_perception_msgs/msg/detail/st_boundary__struct.h"
// Member 'ust_boundaries'
#include "deva_perception_msgs/msg/detail/ust_boundary__struct.h"
// Member 'crosswalks'
#include "deva_perception_msgs/msg/detail/crosswalk__struct.h"
// Member 'steering_arrows'
#include "deva_perception_msgs/msg/detail/steering_arrow__struct.h"
// Member 'noparking_zones'
#include "deva_perception_msgs/msg/detail/noparking_zone__struct.h"
// Member 'areas'
#include "deva_perception_msgs/msg/detail/area__struct.h"
// Member 'moving_obstacles'
#include "deva_perception_msgs/msg/detail/moving_obstacle__struct.h"
// Member 'general_static_obstacles'
#include "deva_perception_msgs/msg/detail/static_obstacle__struct.h"
// Member 'traffic_light_obstacles'
#include "deva_perception_msgs/msg/detail/traffic_light__struct.h"
// Member 'mutable_obstacles'
#include "deva_perception_msgs/msg/detail/mutable_obstacle__struct.h"
// Member 'center_lines'
#include "deva_perception_msgs/msg/detail/center_line__struct.h"
// Member 'fork_points'
#include "deva_perception_msgs/msg/detail/fork_point__struct.h"

/// Struct defined in msg/PerceptionResult in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__PerceptionResult
{
  deva_common_msgs__msg__Header header;
  /// localization
  geometry_msgs__msg__Vector3 translation;
  geometry_msgs__msg__Quaternion orientation;
  deva_perception_msgs__msg__STBoundary__Sequence st_boundaries;
  deva_perception_msgs__msg__USTBoundary__Sequence ust_boundaries;
  deva_perception_msgs__msg__Crosswalk__Sequence crosswalks;
  deva_perception_msgs__msg__SteeringArrow__Sequence steering_arrows;
  deva_perception_msgs__msg__NoparkingZone__Sequence noparking_zones;
  deva_perception_msgs__msg__Area__Sequence areas;
  deva_perception_msgs__msg__MovingObstacle__Sequence moving_obstacles;
  deva_perception_msgs__msg__StaticObstacle__Sequence general_static_obstacles;
  deva_perception_msgs__msg__TrafficLight__Sequence traffic_light_obstacles;
  deva_perception_msgs__msg__MutableObstacle__Sequence mutable_obstacles;
  deva_perception_msgs__msg__CenterLine__Sequence center_lines;
  deva_perception_msgs__msg__ForkPoint__Sequence fork_points;
} deva_perception_msgs__msg__PerceptionResult;

// Struct for a sequence of deva_perception_msgs__msg__PerceptionResult.
typedef struct deva_perception_msgs__msg__PerceptionResult__Sequence
{
  deva_perception_msgs__msg__PerceptionResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__PerceptionResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPTION_RESULT__STRUCT_H_
