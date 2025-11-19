// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs2:msg/SensorTime.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__SENSOR_TIME__STRUCT_H_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__SENSOR_TIME__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'localization_header'
// Member 'prediction_header'
// Member 'decision_header'
// Member 'chassis_header'
// Member 'traffic_light_header'
// Member 'traffic_pole_header'
// Member 'cone_header'
// Member 'map_header'
// Member 'padmsg_header'
// Member 'pull_over_header'
// Member 'routing_header'
// Member 'start_planning_header'
// Member 'finish_planning_header'
// Member 'navigator_start_header'
// Member 'navigator_end_header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/SensorTime in the package deva_planning_msgs2.
typedef struct deva_planning_msgs2__msg__SensorTime
{
  std_msgs__msg__Header localization_header;
  std_msgs__msg__Header prediction_header;
  std_msgs__msg__Header decision_header;
  std_msgs__msg__Header chassis_header;
  std_msgs__msg__Header traffic_light_header;
  std_msgs__msg__Header traffic_pole_header;
  std_msgs__msg__Header cone_header;
  std_msgs__msg__Header map_header;
  std_msgs__msg__Header padmsg_header;
  std_msgs__msg__Header pull_over_header;
  std_msgs__msg__Header routing_header;
  std_msgs__msg__Header start_planning_header;
  std_msgs__msg__Header finish_planning_header;
  std_msgs__msg__Header navigator_start_header;
  std_msgs__msg__Header navigator_end_header;
} deva_planning_msgs2__msg__SensorTime;

// Struct for a sequence of deva_planning_msgs2__msg__SensorTime.
typedef struct deva_planning_msgs2__msg__SensorTime__Sequence
{
  deva_planning_msgs2__msg__SensorTime * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs2__msg__SensorTime__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__SENSOR_TIME__STRUCT_H_
