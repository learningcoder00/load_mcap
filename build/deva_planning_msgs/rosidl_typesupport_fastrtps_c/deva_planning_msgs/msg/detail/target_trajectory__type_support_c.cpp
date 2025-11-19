// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_planning_msgs:msg/TargetTrajectory.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs/msg/detail/target_trajectory__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_planning_msgs/msg/detail/target_trajectory__struct.h"
#include "deva_planning_msgs/msg/detail/target_trajectory__functions.h"
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

#include "deva_planning_msgs/msg/detail/path_point__functions.h"  // path_point, stop_pose
#include "deva_planning_msgs/msg/detail/sensor_time__functions.h"  // sensor_timestamp
#include "deva_planning_msgs/msg/detail/trajectory_point__functions.h"  // trajectory_point
#include "rosidl_runtime_c/string.h"  // estop_reason, gear, replan_reason, stop_reason
#include "rosidl_runtime_c/string_functions.h"  // estop_reason, gear, replan_reason, stop_reason
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_deva_planning_msgs__msg__PathPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_planning_msgs__msg__PathPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs, msg, PathPoint)();
size_t get_serialized_size_deva_planning_msgs__msg__SensorTime(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_planning_msgs__msg__SensorTime(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs, msg, SensorTime)();
size_t get_serialized_size_deva_planning_msgs__msg__TrajectoryPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_planning_msgs__msg__TrajectoryPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs, msg, TrajectoryPoint)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_planning_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_planning_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_planning_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _TargetTrajectory__ros_msg_type = deva_planning_msgs__msg__TargetTrajectory;

static bool _TargetTrajectory__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TargetTrajectory__ros_msg_type * ros_message = static_cast<const _TargetTrajectory__ros_msg_type *>(untyped_ros_message);
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

  // Field name: sensor_timestamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs, msg, SensorTime
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->sensor_timestamp, cdr))
    {
      return false;
    }
  }

  // Field name: start_gnss_time
  {
    cdr << ros_message->start_gnss_time;
  }

  // Field name: total_path_length
  {
    cdr << ros_message->total_path_length;
  }

  // Field name: total_path_time
  {
    cdr << ros_message->total_path_time;
  }

  // Field name: trajectory_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs, msg, TrajectoryPoint
      )()->data);
    size_t size = ros_message->trajectory_point.size;
    auto array_ptr = ros_message->trajectory_point.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: path_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs, msg, PathPoint
      )()->data);
    size_t size = ros_message->path_point.size;
    auto array_ptr = ros_message->path_point.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: gear
  {
    const rosidl_runtime_c__String * str = &ros_message->gear;
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

  // Field name: is_estop
  {
    cdr << (ros_message->is_estop ? true : false);
  }

  // Field name: estop_reason
  {
    const rosidl_runtime_c__String * str = &ros_message->estop_reason;
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

  // Field name: is_stop
  {
    cdr << (ros_message->is_stop ? true : false);
  }

  // Field name: stop_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs, msg, PathPoint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stop_pose, cdr))
    {
      return false;
    }
  }

  // Field name: stop_reason
  {
    const rosidl_runtime_c__String * str = &ros_message->stop_reason;
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

  // Field name: is_replan
  {
    cdr << (ros_message->is_replan ? true : false);
  }

  // Field name: replan_reason
  {
    const rosidl_runtime_c__String * str = &ros_message->replan_reason;
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

  // Field name: car_in_dead_end
  {
    cdr << (ros_message->car_in_dead_end ? true : false);
  }

  // Field name: high_beam
  {
    cdr << (ros_message->high_beam ? true : false);
  }

  // Field name: low_beam
  {
    cdr << (ros_message->low_beam ? true : false);
  }

  // Field name: horn
  {
    cdr << (ros_message->horn ? true : false);
  }

  // Field name: emergency_light
  {
    cdr << (ros_message->emergency_light ? true : false);
  }

  // Field name: trace_type
  {
    cdr << ros_message->trace_type;
  }

  return true;
}

static bool _TargetTrajectory__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TargetTrajectory__ros_msg_type * ros_message = static_cast<_TargetTrajectory__ros_msg_type *>(untyped_ros_message);
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

  // Field name: sensor_timestamp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs, msg, SensorTime
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->sensor_timestamp))
    {
      return false;
    }
  }

  // Field name: start_gnss_time
  {
    cdr >> ros_message->start_gnss_time;
  }

  // Field name: total_path_length
  {
    cdr >> ros_message->total_path_length;
  }

  // Field name: total_path_time
  {
    cdr >> ros_message->total_path_time;
  }

  // Field name: trajectory_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs, msg, TrajectoryPoint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->trajectory_point.data) {
      deva_planning_msgs__msg__TrajectoryPoint__Sequence__fini(&ros_message->trajectory_point);
    }
    if (!deva_planning_msgs__msg__TrajectoryPoint__Sequence__init(&ros_message->trajectory_point, size)) {
      fprintf(stderr, "failed to create array for field 'trajectory_point'");
      return false;
    }
    auto array_ptr = ros_message->trajectory_point.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: path_point
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs, msg, PathPoint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->path_point.data) {
      deva_planning_msgs__msg__PathPoint__Sequence__fini(&ros_message->path_point);
    }
    if (!deva_planning_msgs__msg__PathPoint__Sequence__init(&ros_message->path_point, size)) {
      fprintf(stderr, "failed to create array for field 'path_point'");
      return false;
    }
    auto array_ptr = ros_message->path_point.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: gear
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->gear.data) {
      rosidl_runtime_c__String__init(&ros_message->gear);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->gear,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'gear'\n");
      return false;
    }
  }

  // Field name: is_estop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_estop = tmp ? true : false;
  }

  // Field name: estop_reason
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->estop_reason.data) {
      rosidl_runtime_c__String__init(&ros_message->estop_reason);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->estop_reason,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'estop_reason'\n");
      return false;
    }
  }

  // Field name: is_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_stop = tmp ? true : false;
  }

  // Field name: stop_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs, msg, PathPoint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stop_pose))
    {
      return false;
    }
  }

  // Field name: stop_reason
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->stop_reason.data) {
      rosidl_runtime_c__String__init(&ros_message->stop_reason);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->stop_reason,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'stop_reason'\n");
      return false;
    }
  }

  // Field name: is_replan
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_replan = tmp ? true : false;
  }

  // Field name: replan_reason
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->replan_reason.data) {
      rosidl_runtime_c__String__init(&ros_message->replan_reason);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->replan_reason,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'replan_reason'\n");
      return false;
    }
  }

  // Field name: car_in_dead_end
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->car_in_dead_end = tmp ? true : false;
  }

  // Field name: high_beam
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->high_beam = tmp ? true : false;
  }

  // Field name: low_beam
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->low_beam = tmp ? true : false;
  }

  // Field name: horn
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->horn = tmp ? true : false;
  }

  // Field name: emergency_light
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->emergency_light = tmp ? true : false;
  }

  // Field name: trace_type
  {
    cdr >> ros_message->trace_type;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_planning_msgs
size_t get_serialized_size_deva_planning_msgs__msg__TargetTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TargetTrajectory__ros_msg_type * ros_message = static_cast<const _TargetTrajectory__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name sensor_timestamp

  current_alignment += get_serialized_size_deva_planning_msgs__msg__SensorTime(
    &(ros_message->sensor_timestamp), current_alignment);
  // field.name start_gnss_time
  {
    size_t item_size = sizeof(ros_message->start_gnss_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total_path_length
  {
    size_t item_size = sizeof(ros_message->total_path_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total_path_time
  {
    size_t item_size = sizeof(ros_message->total_path_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trajectory_point
  {
    size_t array_size = ros_message->trajectory_point.size;
    auto array_ptr = ros_message->trajectory_point.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_planning_msgs__msg__TrajectoryPoint(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name path_point
  {
    size_t array_size = ros_message->path_point.size;
    auto array_ptr = ros_message->path_point.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_planning_msgs__msg__PathPoint(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name gear
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->gear.size + 1);
  // field.name is_estop
  {
    size_t item_size = sizeof(ros_message->is_estop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name estop_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->estop_reason.size + 1);
  // field.name is_stop
  {
    size_t item_size = sizeof(ros_message->is_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stop_pose

  current_alignment += get_serialized_size_deva_planning_msgs__msg__PathPoint(
    &(ros_message->stop_pose), current_alignment);
  // field.name stop_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->stop_reason.size + 1);
  // field.name is_replan
  {
    size_t item_size = sizeof(ros_message->is_replan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name replan_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->replan_reason.size + 1);
  // field.name car_in_dead_end
  {
    size_t item_size = sizeof(ros_message->car_in_dead_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name high_beam
  {
    size_t item_size = sizeof(ros_message->high_beam);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name low_beam
  {
    size_t item_size = sizeof(ros_message->low_beam);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name horn
  {
    size_t item_size = sizeof(ros_message->horn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name emergency_light
  {
    size_t item_size = sizeof(ros_message->emergency_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trace_type
  {
    size_t item_size = sizeof(ros_message->trace_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TargetTrajectory__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_planning_msgs__msg__TargetTrajectory(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_planning_msgs
size_t max_serialized_size_deva_planning_msgs__msg__TargetTrajectory(
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
  // member: sensor_timestamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_planning_msgs__msg__SensorTime(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: start_gnss_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: total_path_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: total_path_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: trajectory_point
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_planning_msgs__msg__TrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: path_point
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_planning_msgs__msg__PathPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: gear
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
  // member: is_estop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: estop_reason
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
  // member: is_stop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stop_pose
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_planning_msgs__msg__PathPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: stop_reason
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
  // member: is_replan
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: replan_reason
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
  // member: car_in_dead_end
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: high_beam
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: low_beam
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: horn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: emergency_light
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trace_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_planning_msgs__msg__TargetTrajectory;
    is_plain =
      (
      offsetof(DataType, trace_type) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TargetTrajectory__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_planning_msgs__msg__TargetTrajectory(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TargetTrajectory = {
  "deva_planning_msgs::msg",
  "TargetTrajectory",
  _TargetTrajectory__cdr_serialize,
  _TargetTrajectory__cdr_deserialize,
  _TargetTrajectory__get_serialized_size,
  _TargetTrajectory__max_serialized_size
};

static rosidl_message_type_support_t _TargetTrajectory__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TargetTrajectory,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs, msg, TargetTrajectory)() {
  return &_TargetTrajectory__type_support;
}

#if defined(__cplusplus)
}
#endif
