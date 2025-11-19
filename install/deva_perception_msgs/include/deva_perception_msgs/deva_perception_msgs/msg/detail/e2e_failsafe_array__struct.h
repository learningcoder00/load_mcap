// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_perception_msgs:msg/E2eFailsafeArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_FAILSAFE_ARRAY__STRUCT_H_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_FAILSAFE_ARRAY__STRUCT_H_

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
// Member 'e2e_failsafe_array'
#include "deva_perception_msgs/msg/detail/e2e_failsafe__struct.h"

/// Struct defined in msg/E2eFailsafeArray in the package deva_perception_msgs.
typedef struct deva_perception_msgs__msg__E2eFailsafeArray
{
  std_msgs__msg__Header header;
  uint8_t index;
  deva_perception_msgs__msg__E2eFailsafe__Sequence e2e_failsafe_array;
  uint8_t sum_result;
  bool lit_area;
  /// NotParking = 0,  Parking = 1,
  uint8_t scenes_driving_type;
  /// DayTime = 0, Night = 1, Dusk = 2,
  uint8_t scenes_time_type;
  /// False = 0,    True = 1,
  uint8_t scenes_is_occlusion_type;
  /// False = 0,  True = 1,
  uint8_t scenes_is_glare_occlusion_type;
  /// False = 0,   True = 1,
  uint8_t scenes_is_tunnel_type;
  /// Sunny = 0, Rainy = 1, Foggy = 2, Snowy = 3, Cloudy = 4,
  uint8_t scenes_weather_type;
  /// Dry = 0,  Wet = 1,  SnowyIcy = 2,
  uint8_t scenes_road_state_type;
  /// False = 0, Mist = 1, Icy = 2
  uint8_t scenes_wind_shield_occlusion_type;
} deva_perception_msgs__msg__E2eFailsafeArray;

// Struct for a sequence of deva_perception_msgs__msg__E2eFailsafeArray.
typedef struct deva_perception_msgs__msg__E2eFailsafeArray__Sequence
{
  deva_perception_msgs__msg__E2eFailsafeArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_perception_msgs__msg__E2eFailsafeArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_FAILSAFE_ARRAY__STRUCT_H_
