// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_localization_msgs:msg/GnssBestPose.idl
// generated code does not contain a copyright notice
#include "deva_localization_msgs/msg/detail/gnss_best_pose__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_localization_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_localization_msgs/msg/detail/gnss_best_pose__struct.h"
#include "deva_localization_msgs/msg/detail/gnss_best_pose__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "geometry_msgs/msg/detail/point__functions.h"  // linear_velocity
#include "rosidl_runtime_c/string.h"  // datum_id, position_type, solution_status
#include "rosidl_runtime_c/string_functions.h"  // datum_id, position_type, solution_status
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_localization_msgs
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_localization_msgs
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_localization_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_localization_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_localization_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_localization_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _GnssBestPose__ros_msg_type = deva_localization_msgs__msg__GnssBestPose;

static bool _GnssBestPose__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GnssBestPose__ros_msg_type * ros_message = static_cast<const _GnssBestPose__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: solution_status
  {
    const rosidl_runtime_c__String * str = &ros_message->solution_status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: position_type
  {
    const rosidl_runtime_c__String * str = &ros_message->position_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: lat
  {
    cdr << ros_message->lat;
  }

  // Field name: lon
  {
    cdr << ros_message->lon;
  }

  // Field name: height_msl
  {
    cdr << ros_message->height_msl;
  }

  // Field name: undulation
  {
    cdr << ros_message->undulation;
  }

  // Field name: datum_id
  {
    const rosidl_runtime_c__String * str = &ros_message->datum_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: lat_sigma
  {
    cdr << ros_message->lat_sigma;
  }

  // Field name: lon_sigma
  {
    cdr << ros_message->lon_sigma;
  }

  // Field name: height_sigma
  {
    cdr << ros_message->height_sigma;
  }

  // Field name: diff_age
  {
    cdr << ros_message->diff_age;
  }

  // Field name: solution_age
  {
    cdr << ros_message->solution_age;
  }

  // Field name: num_satellites_tracked
  {
    cdr << ros_message->num_satellites_tracked;
  }

  // Field name: num_satellites_used_in_solution
  {
    cdr << ros_message->num_satellites_used_in_solution;
  }

  // Field name: num_gps_and_glonass_l1_used_in_solution
  {
    cdr << ros_message->num_gps_and_glonass_l1_used_in_solution;
  }

  // Field name: num_gps_and_glonass_l1_and_l2_used_in_solution
  {
    cdr << ros_message->num_gps_and_glonass_l1_and_l2_used_in_solution;
  }

  // Field name: extended_solution_status
  {
    cdr << ros_message->extended_solution_status;
  }

  // Field name: gps_glonass_used_mask
  {
    cdr << ros_message->gps_glonass_used_mask;
  }

  // Field name: galileo_beidou_used_mask
  {
    cdr << ros_message->galileo_beidou_used_mask;
  }

  // Field name: linear_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->linear_velocity, cdr))
    {
      return false;
    }
  }

  // Field name: velocity_latency
  {
    cdr << ros_message->velocity_latency;
  }

  return true;
}

static bool _GnssBestPose__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GnssBestPose__ros_msg_type * ros_message = static_cast<_GnssBestPose__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: solution_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->solution_status.data) {
      rosidl_runtime_c__String__init(&ros_message->solution_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->solution_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'solution_status'\n");
      return false;
    }
  }

  // Field name: position_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->position_type.data) {
      rosidl_runtime_c__String__init(&ros_message->position_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->position_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'position_type'\n");
      return false;
    }
  }

  // Field name: lat
  {
    cdr >> ros_message->lat;
  }

  // Field name: lon
  {
    cdr >> ros_message->lon;
  }

  // Field name: height_msl
  {
    cdr >> ros_message->height_msl;
  }

  // Field name: undulation
  {
    cdr >> ros_message->undulation;
  }

  // Field name: datum_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->datum_id.data) {
      rosidl_runtime_c__String__init(&ros_message->datum_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->datum_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'datum_id'\n");
      return false;
    }
  }

  // Field name: lat_sigma
  {
    cdr >> ros_message->lat_sigma;
  }

  // Field name: lon_sigma
  {
    cdr >> ros_message->lon_sigma;
  }

  // Field name: height_sigma
  {
    cdr >> ros_message->height_sigma;
  }

  // Field name: diff_age
  {
    cdr >> ros_message->diff_age;
  }

  // Field name: solution_age
  {
    cdr >> ros_message->solution_age;
  }

  // Field name: num_satellites_tracked
  {
    cdr >> ros_message->num_satellites_tracked;
  }

  // Field name: num_satellites_used_in_solution
  {
    cdr >> ros_message->num_satellites_used_in_solution;
  }

  // Field name: num_gps_and_glonass_l1_used_in_solution
  {
    cdr >> ros_message->num_gps_and_glonass_l1_used_in_solution;
  }

  // Field name: num_gps_and_glonass_l1_and_l2_used_in_solution
  {
    cdr >> ros_message->num_gps_and_glonass_l1_and_l2_used_in_solution;
  }

  // Field name: extended_solution_status
  {
    cdr >> ros_message->extended_solution_status;
  }

  // Field name: gps_glonass_used_mask
  {
    cdr >> ros_message->gps_glonass_used_mask;
  }

  // Field name: galileo_beidou_used_mask
  {
    cdr >> ros_message->galileo_beidou_used_mask;
  }

  // Field name: linear_velocity
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->linear_velocity))
    {
      return false;
    }
  }

  // Field name: velocity_latency
  {
    cdr >> ros_message->velocity_latency;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_localization_msgs
size_t get_serialized_size_deva_localization_msgs__msg__GnssBestPose(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GnssBestPose__ros_msg_type * ros_message = static_cast<const _GnssBestPose__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name solution_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->solution_status.size + 1);
  // field.name position_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->position_type.size + 1);
  // field.name lat
  {
    size_t item_size = sizeof(ros_message->lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lon
  {
    size_t item_size = sizeof(ros_message->lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height_msl
  {
    size_t item_size = sizeof(ros_message->height_msl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name undulation
  {
    size_t item_size = sizeof(ros_message->undulation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name datum_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->datum_id.size + 1);
  // field.name lat_sigma
  {
    size_t item_size = sizeof(ros_message->lat_sigma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lon_sigma
  {
    size_t item_size = sizeof(ros_message->lon_sigma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name height_sigma
  {
    size_t item_size = sizeof(ros_message->height_sigma);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name diff_age
  {
    size_t item_size = sizeof(ros_message->diff_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name solution_age
  {
    size_t item_size = sizeof(ros_message->solution_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_satellites_tracked
  {
    size_t item_size = sizeof(ros_message->num_satellites_tracked);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_satellites_used_in_solution
  {
    size_t item_size = sizeof(ros_message->num_satellites_used_in_solution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_gps_and_glonass_l1_used_in_solution
  {
    size_t item_size = sizeof(ros_message->num_gps_and_glonass_l1_used_in_solution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_gps_and_glonass_l1_and_l2_used_in_solution
  {
    size_t item_size = sizeof(ros_message->num_gps_and_glonass_l1_and_l2_used_in_solution);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name extended_solution_status
  {
    size_t item_size = sizeof(ros_message->extended_solution_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_glonass_used_mask
  {
    size_t item_size = sizeof(ros_message->gps_glonass_used_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name galileo_beidou_used_mask
  {
    size_t item_size = sizeof(ros_message->galileo_beidou_used_mask);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name linear_velocity

  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->linear_velocity), current_alignment);
  // field.name velocity_latency
  {
    size_t item_size = sizeof(ros_message->velocity_latency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GnssBestPose__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_localization_msgs__msg__GnssBestPose(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_localization_msgs
size_t max_serialized_size_deva_localization_msgs__msg__GnssBestPose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: solution_status
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: position_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: lat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lon
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: height_msl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: undulation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: datum_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: lat_sigma
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lon_sigma
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: height_sigma
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: diff_age
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: solution_age
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: num_satellites_tracked
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: num_satellites_used_in_solution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: num_gps_and_glonass_l1_used_in_solution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: num_gps_and_glonass_l1_and_l2_used_in_solution
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: extended_solution_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gps_glonass_used_mask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: galileo_beidou_used_mask
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: linear_velocity
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: velocity_latency
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_localization_msgs__msg__GnssBestPose;
    is_plain =
      (
      offsetof(DataType, velocity_latency) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GnssBestPose__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_localization_msgs__msg__GnssBestPose(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GnssBestPose = {
  "deva_localization_msgs::msg",
  "GnssBestPose",
  _GnssBestPose__cdr_serialize,
  _GnssBestPose__cdr_deserialize,
  _GnssBestPose__get_serialized_size,
  _GnssBestPose__max_serialized_size
};

static rosidl_message_type_support_t _GnssBestPose__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GnssBestPose,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_localization_msgs, msg, GnssBestPose)() {
  return &_GnssBestPose__type_support;
}

#if defined(__cplusplus)
}
#endif
