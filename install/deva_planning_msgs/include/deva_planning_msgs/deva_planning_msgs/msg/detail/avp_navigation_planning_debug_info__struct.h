// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_planning_msgs:msg/AvpNavigationPlanningDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_NAVIGATION_PLANNING_DEBUG_INFO__STRUCT_H_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_NAVIGATION_PLANNING_DEBUG_INFO__STRUCT_H_

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
// Member 'planning_header'
// Member 'prediction_header'
// Member 'localization_header'
// Member 'chassis_header'
// Member 'avp_local_map_header'
// Member 'perception_map_header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'avp_debug_info'
#include "deva_planning_msgs/msg/detail/avp_debug_info__struct.h"
// Member 'nav_openspace_debug_info'
#include "deva_planning_msgs/msg/detail/nav_openspace_debug_info__struct.h"

/// Struct defined in msg/AvpNavigationPlanningDebugInfo in the package deva_planning_msgs.
typedef struct deva_planning_msgs__msg__AvpNavigationPlanningDebugInfo
{
  std_msgs__msg__Header header;
  /// sync input timestamp
  std_msgs__msg__Header planning_header;
  std_msgs__msg__Header prediction_header;
  std_msgs__msg__Header localization_header;
  std_msgs__msg__Header chassis_header;
  std_msgs__msg__Header avp_local_map_header;
  std_msgs__msg__Header perception_map_header;
  deva_planning_msgs__msg__AvpDebugInfo avp_debug_info;
  deva_planning_msgs__msg__NavOpenspaceDebugInfo nav_openspace_debug_info;
} deva_planning_msgs__msg__AvpNavigationPlanningDebugInfo;

// Struct for a sequence of deva_planning_msgs__msg__AvpNavigationPlanningDebugInfo.
typedef struct deva_planning_msgs__msg__AvpNavigationPlanningDebugInfo__Sequence
{
  deva_planning_msgs__msg__AvpNavigationPlanningDebugInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_planning_msgs__msg__AvpNavigationPlanningDebugInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_NAVIGATION_PLANNING_DEBUG_INFO__STRUCT_H_
