// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_map_msgs:msg/LocalMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP__STRUCT_H_
#define DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP__STRUCT_H_

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
// Member 'map_version'
// Member 'error_message'
#include "rosidl_runtime_c/string.h"
// Member 'st_map'
#include "deva_map_msgs/msg/detail/st_local_map__struct.h"
// Member 'ust_map'
#include "deva_perception_msgs/msg/detail/ust_boundary__struct.h"
// Member 'avp_map'
#include "deva_map_msgs/msg/detail/avp_local_map__struct.h"
// Member 'sensor_header'
#include "deva_map_msgs/msg/detail/local_map_header__struct.h"

/// Struct defined in msg/LocalMap in the package deva_map_msgs.
typedef struct deva_map_msgs__msg__LocalMap
{
  deva_common_msgs__msg__Header header;
  rosidl_runtime_c__String map_version;
  uint16_t error_code;
  rosidl_runtime_c__String error_message;
  uint16_t map_mode;
  bool is_localization_mode;
  deva_map_msgs__msg__STLocalMap st_map;
  deva_perception_msgs__msg__USTBoundary__Sequence ust_map;
  deva_map_msgs__msg__AvpLocalMap avp_map;
  deva_map_msgs__msg__LocalMapHeader sensor_header;
} deva_map_msgs__msg__LocalMap;

// Struct for a sequence of deva_map_msgs__msg__LocalMap.
typedef struct deva_map_msgs__msg__LocalMap__Sequence
{
  deva_map_msgs__msg__LocalMap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_map_msgs__msg__LocalMap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP__STRUCT_H_
