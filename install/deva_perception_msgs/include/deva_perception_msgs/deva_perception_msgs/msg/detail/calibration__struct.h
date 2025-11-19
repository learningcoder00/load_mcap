// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/Calibration.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CALIBRATION__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CALIBRATION__STRUCT_H_

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
// Member 'version'
#include "std_msgs/msg/detail/string__struct.h"
// Member 'lidar2gnss'
// Member 'gnss2ego'
#include "geometry_msgs/msg/detail/transform__struct.h"

/// Struct defined in msg/Calibration in the package deva_perception_msgs.
/**
  * This message defines meta information for a obstacle status
 */
typedef struct deva_perception_msgs__msg__Calibration
{
  std_msgs__msg__Header header;
  /// calibration version
  std_msgs__msg__String version;
  /// transform
  geometry_msgs__msg__Transform lidar2gnss;
  geometry_msgs__msg__Transform gnss2ego;
} deva_perception_msgs__msg__Calibration;

// Struct for a sequence of deva_perception_msgs__msg__Calibration.
typedef struct deva_perception_msgs__msg__Calibration__Sequence
{
  deva_perception_msgs__msg__Calibration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__Calibration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CALIBRATION__STRUCT_H_
