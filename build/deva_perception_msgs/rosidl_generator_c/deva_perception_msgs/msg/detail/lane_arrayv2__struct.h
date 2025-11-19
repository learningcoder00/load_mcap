// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/LaneArrayv2.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAYV2__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAYV2__STRUCT_H_

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
#include "std_msgs/msg/detail/header__struct.h"
// Member 'lane_array'
#include "deva_perception_msgs/msg/detail/lanev2__struct.h"
// Member 'crosswalk_array'
#include "deva_perception_msgs/msg/detail/crosswalk__struct.h"
// Member 'steering_arrow_array'
#include "deva_perception_msgs/msg/detail/steering_arrow__struct.h"
// Member 'noparking_zone_array'
#include "deva_perception_msgs/msg/detail/noparking_zone__struct.h"
// Member 'partition_zone_array'
#include "deva_perception_msgs/msg/detail/partition_zone__struct.h"
// Member 'center_line_array'
#include "deva_perception_msgs/msg/detail/percept_center_line__struct.h"
// Member 'entrance_array'
#include "deva_perception_msgs/msg/detail/entrance__struct.h"

/// Struct defined in msg/LaneArrayv2 in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__LaneArrayv2
{
  std_msgs__msg__Header header;
  /// image pixel width and height.
  int32_t vehicle_left_lane_id;
  int32_t vehicle_right_lane_id;
  deva_perception_msgs__msg__Lanev2__Sequence lane_array;
  deva_perception_msgs__msg__Crosswalk__Sequence crosswalk_array;
  deva_perception_msgs__msg__SteeringArrow__Sequence steering_arrow_array;
  deva_perception_msgs__msg__NoparkingZone__Sequence noparking_zone_array;
  deva_perception_msgs__msg__PartitionZone__Sequence partition_zone_array;
  deva_perception_msgs__msg__PerceptCenterLine__Sequence center_line_array;
  deva_perception_msgs__msg__Entrance__Sequence entrance_array;
} deva_perception_msgs__msg__LaneArrayv2;

// Struct for a sequence of deva_perception_msgs__msg__LaneArrayv2.
typedef struct deva_perception_msgs__msg__LaneArrayv2__Sequence
{
  deva_perception_msgs__msg__LaneArrayv2 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__LaneArrayv2__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ARRAYV2__STRUCT_H_
