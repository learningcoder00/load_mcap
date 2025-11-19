// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_planning_msgs2:msg/NavOpenspaceDebugInfo.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs2/msg/detail/nav_openspace_debug_info__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_planning_msgs2/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_planning_msgs2/msg/detail/nav_openspace_debug_info__struct.h"
#include "deva_planning_msgs2/msg/detail/nav_openspace_debug_info__functions.h"
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

#include "deva_planning_msgs2/msg/detail/nav_openspace_obstacle__functions.h"  // obstacles_info
#include "deva_planning_msgs2/msg/detail/nav_openspace_parking_slot__functions.h"  // parking_slots
#include "deva_planning_msgs2/msg/detail/path_data__functions.h"  // last_ref_points, ref_points
#include "deva_planning_msgs2/msg/detail/target_trajectory__functions.h"  // hybrid_astar_search_results, last_internal_trajectory_paths, last_trajectory, optimization_results
#include "rosidl_runtime_c/primitives_sequence.h"  // xy_bounds
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // xy_bounds

// forward declare type support functions
size_t get_serialized_size_deva_planning_msgs2__msg__NavOpenspaceObstacle(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_planning_msgs2__msg__NavOpenspaceObstacle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, NavOpenspaceObstacle)();
size_t get_serialized_size_deva_planning_msgs2__msg__NavOpenspaceParkingSlot(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_planning_msgs2__msg__NavOpenspaceParkingSlot(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, NavOpenspaceParkingSlot)();
size_t get_serialized_size_deva_planning_msgs2__msg__PathData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_planning_msgs2__msg__PathData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, PathData)();
size_t get_serialized_size_deva_planning_msgs2__msg__TargetTrajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_deva_planning_msgs2__msg__TargetTrajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, TargetTrajectory)();


using _NavOpenspaceDebugInfo__ros_msg_type = deva_planning_msgs2__msg__NavOpenspaceDebugInfo;

static bool _NavOpenspaceDebugInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavOpenspaceDebugInfo__ros_msg_type * ros_message = static_cast<const _NavOpenspaceDebugInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: x_s
  {
    cdr << ros_message->x_s;
  }

  // Field name: y_s
  {
    cdr << ros_message->y_s;
  }

  // Field name: theta_s
  {
    cdr << ros_message->theta_s;
  }

  // Field name: x_e
  {
    cdr << ros_message->x_e;
  }

  // Field name: y_e
  {
    cdr << ros_message->y_e;
  }

  // Field name: theta_e
  {
    cdr << ros_message->theta_e;
  }

  // Field name: xy_bounds
  {
    size_t size = ros_message->xy_bounds.size;
    auto array_ptr = ros_message->xy_bounds.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: obstacles_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, NavOpenspaceObstacle
      )()->data);
    size_t size = ros_message->obstacles_info.size;
    auto array_ptr = ros_message->obstacles_info.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: parking_slots
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, NavOpenspaceParkingSlot
      )()->data);
    size_t size = ros_message->parking_slots.size;
    auto array_ptr = ros_message->parking_slots.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: start_gear
  {
    cdr << ros_message->start_gear;
  }

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: keep_start_gear_distance
  {
    cdr << ros_message->keep_start_gear_distance;
  }

  // Field name: kappa
  {
    cdr << ros_message->kappa;
  }

  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: ref_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, PathData
      )()->data);
    size_t size = ros_message->ref_points.size;
    auto array_ptr = ros_message->ref_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: openspace_planning_status
  {
    cdr << ros_message->openspace_planning_status;
  }

  // Field name: last_trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, TargetTrajectory
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->last_trajectory, cdr))
    {
      return false;
    }
  }

  // Field name: last_trajectory_timestamp
  {
    cdr << ros_message->last_trajectory_timestamp;
  }

  // Field name: last_internal_trajectory_paths
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, TargetTrajectory
      )()->data);
    size_t size = ros_message->last_internal_trajectory_paths.size;
    auto array_ptr = ros_message->last_internal_trajectory_paths.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: current_path_index
  {
    cdr << ros_message->current_path_index;
  }

  // Field name: is_arrived_path_end
  {
    cdr << (ros_message->is_arrived_path_end ? true : false);
  }

  // Field name: last_ref_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, PathData
      )()->data);
    size_t size = ros_message->last_ref_points.size;
    auto array_ptr = ros_message->last_ref_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: hybrid_astar_search_results
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, TargetTrajectory
      )()->data);
    size_t size = ros_message->hybrid_astar_search_results.size;
    auto array_ptr = ros_message->hybrid_astar_search_results.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: optimization_results
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, TargetTrajectory
      )()->data);
    size_t size = ros_message->optimization_results.size;
    auto array_ptr = ros_message->optimization_results.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _NavOpenspaceDebugInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavOpenspaceDebugInfo__ros_msg_type * ros_message = static_cast<_NavOpenspaceDebugInfo__ros_msg_type *>(untyped_ros_message);
  // Field name: x_s
  {
    cdr >> ros_message->x_s;
  }

  // Field name: y_s
  {
    cdr >> ros_message->y_s;
  }

  // Field name: theta_s
  {
    cdr >> ros_message->theta_s;
  }

  // Field name: x_e
  {
    cdr >> ros_message->x_e;
  }

  // Field name: y_e
  {
    cdr >> ros_message->y_e;
  }

  // Field name: theta_e
  {
    cdr >> ros_message->theta_e;
  }

  // Field name: xy_bounds
  {
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

    if (ros_message->xy_bounds.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->xy_bounds);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->xy_bounds, size)) {
      fprintf(stderr, "failed to create array for field 'xy_bounds'");
      return false;
    }
    auto array_ptr = ros_message->xy_bounds.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: obstacles_info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, NavOpenspaceObstacle
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

    if (ros_message->obstacles_info.data) {
      deva_planning_msgs2__msg__NavOpenspaceObstacle__Sequence__fini(&ros_message->obstacles_info);
    }
    if (!deva_planning_msgs2__msg__NavOpenspaceObstacle__Sequence__init(&ros_message->obstacles_info, size)) {
      fprintf(stderr, "failed to create array for field 'obstacles_info'");
      return false;
    }
    auto array_ptr = ros_message->obstacles_info.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: parking_slots
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, NavOpenspaceParkingSlot
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

    if (ros_message->parking_slots.data) {
      deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence__fini(&ros_message->parking_slots);
    }
    if (!deva_planning_msgs2__msg__NavOpenspaceParkingSlot__Sequence__init(&ros_message->parking_slots, size)) {
      fprintf(stderr, "failed to create array for field 'parking_slots'");
      return false;
    }
    auto array_ptr = ros_message->parking_slots.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: start_gear
  {
    cdr >> ros_message->start_gear;
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: keep_start_gear_distance
  {
    cdr >> ros_message->keep_start_gear_distance;
  }

  // Field name: kappa
  {
    cdr >> ros_message->kappa;
  }

  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: ref_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, PathData
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

    if (ros_message->ref_points.data) {
      deva_planning_msgs2__msg__PathData__Sequence__fini(&ros_message->ref_points);
    }
    if (!deva_planning_msgs2__msg__PathData__Sequence__init(&ros_message->ref_points, size)) {
      fprintf(stderr, "failed to create array for field 'ref_points'");
      return false;
    }
    auto array_ptr = ros_message->ref_points.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: openspace_planning_status
  {
    cdr >> ros_message->openspace_planning_status;
  }

  // Field name: last_trajectory
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, TargetTrajectory
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->last_trajectory))
    {
      return false;
    }
  }

  // Field name: last_trajectory_timestamp
  {
    cdr >> ros_message->last_trajectory_timestamp;
  }

  // Field name: last_internal_trajectory_paths
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, TargetTrajectory
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

    if (ros_message->last_internal_trajectory_paths.data) {
      deva_planning_msgs2__msg__TargetTrajectory__Sequence__fini(&ros_message->last_internal_trajectory_paths);
    }
    if (!deva_planning_msgs2__msg__TargetTrajectory__Sequence__init(&ros_message->last_internal_trajectory_paths, size)) {
      fprintf(stderr, "failed to create array for field 'last_internal_trajectory_paths'");
      return false;
    }
    auto array_ptr = ros_message->last_internal_trajectory_paths.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: current_path_index
  {
    cdr >> ros_message->current_path_index;
  }

  // Field name: is_arrived_path_end
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_arrived_path_end = tmp ? true : false;
  }

  // Field name: last_ref_points
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, PathData
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

    if (ros_message->last_ref_points.data) {
      deva_planning_msgs2__msg__PathData__Sequence__fini(&ros_message->last_ref_points);
    }
    if (!deva_planning_msgs2__msg__PathData__Sequence__init(&ros_message->last_ref_points, size)) {
      fprintf(stderr, "failed to create array for field 'last_ref_points'");
      return false;
    }
    auto array_ptr = ros_message->last_ref_points.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: hybrid_astar_search_results
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, TargetTrajectory
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

    if (ros_message->hybrid_astar_search_results.data) {
      deva_planning_msgs2__msg__TargetTrajectory__Sequence__fini(&ros_message->hybrid_astar_search_results);
    }
    if (!deva_planning_msgs2__msg__TargetTrajectory__Sequence__init(&ros_message->hybrid_astar_search_results, size)) {
      fprintf(stderr, "failed to create array for field 'hybrid_astar_search_results'");
      return false;
    }
    auto array_ptr = ros_message->hybrid_astar_search_results.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: optimization_results
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, TargetTrajectory
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

    if (ros_message->optimization_results.data) {
      deva_planning_msgs2__msg__TargetTrajectory__Sequence__fini(&ros_message->optimization_results);
    }
    if (!deva_planning_msgs2__msg__TargetTrajectory__Sequence__init(&ros_message->optimization_results, size)) {
      fprintf(stderr, "failed to create array for field 'optimization_results'");
      return false;
    }
    auto array_ptr = ros_message->optimization_results.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_planning_msgs2
size_t get_serialized_size_deva_planning_msgs2__msg__NavOpenspaceDebugInfo(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavOpenspaceDebugInfo__ros_msg_type * ros_message = static_cast<const _NavOpenspaceDebugInfo__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x_s
  {
    size_t item_size = sizeof(ros_message->x_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_s
  {
    size_t item_size = sizeof(ros_message->y_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta_s
  {
    size_t item_size = sizeof(ros_message->theta_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_e
  {
    size_t item_size = sizeof(ros_message->x_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_e
  {
    size_t item_size = sizeof(ros_message->y_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name theta_e
  {
    size_t item_size = sizeof(ros_message->theta_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name xy_bounds
  {
    size_t array_size = ros_message->xy_bounds.size;
    auto array_ptr = ros_message->xy_bounds.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name obstacles_info
  {
    size_t array_size = ros_message->obstacles_info.size;
    auto array_ptr = ros_message->obstacles_info.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_planning_msgs2__msg__NavOpenspaceObstacle(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name parking_slots
  {
    size_t array_size = ros_message->parking_slots.size;
    auto array_ptr = ros_message->parking_slots.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_planning_msgs2__msg__NavOpenspaceParkingSlot(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name start_gear
  {
    size_t item_size = sizeof(ros_message->start_gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name keep_start_gear_distance
  {
    size_t item_size = sizeof(ros_message->keep_start_gear_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kappa
  {
    size_t item_size = sizeof(ros_message->kappa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_points
  {
    size_t array_size = ros_message->ref_points.size;
    auto array_ptr = ros_message->ref_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_planning_msgs2__msg__PathData(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name openspace_planning_status
  {
    size_t item_size = sizeof(ros_message->openspace_planning_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name last_trajectory

  current_alignment += get_serialized_size_deva_planning_msgs2__msg__TargetTrajectory(
    &(ros_message->last_trajectory), current_alignment);
  // field.name last_trajectory_timestamp
  {
    size_t item_size = sizeof(ros_message->last_trajectory_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name last_internal_trajectory_paths
  {
    size_t array_size = ros_message->last_internal_trajectory_paths.size;
    auto array_ptr = ros_message->last_internal_trajectory_paths.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_planning_msgs2__msg__TargetTrajectory(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name current_path_index
  {
    size_t item_size = sizeof(ros_message->current_path_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_arrived_path_end
  {
    size_t item_size = sizeof(ros_message->is_arrived_path_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name last_ref_points
  {
    size_t array_size = ros_message->last_ref_points.size;
    auto array_ptr = ros_message->last_ref_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_planning_msgs2__msg__PathData(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name hybrid_astar_search_results
  {
    size_t array_size = ros_message->hybrid_astar_search_results.size;
    auto array_ptr = ros_message->hybrid_astar_search_results.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_planning_msgs2__msg__TargetTrajectory(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name optimization_results
  {
    size_t array_size = ros_message->optimization_results.size;
    auto array_ptr = ros_message->optimization_results.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_deva_planning_msgs2__msg__TargetTrajectory(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NavOpenspaceDebugInfo__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_planning_msgs2__msg__NavOpenspaceDebugInfo(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_planning_msgs2
size_t max_serialized_size_deva_planning_msgs2__msg__NavOpenspaceDebugInfo(
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

  // member: x_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: theta_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: x_e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y_e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: theta_e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: xy_bounds
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: obstacles_info
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
        max_serialized_size_deva_planning_msgs2__msg__NavOpenspaceObstacle(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: parking_slots
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
        max_serialized_size_deva_planning_msgs2__msg__NavOpenspaceParkingSlot(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: start_gear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: keep_start_gear_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: kappa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_points
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
        max_serialized_size_deva_planning_msgs2__msg__PathData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: openspace_planning_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: last_trajectory
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_planning_msgs2__msg__TargetTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: last_trajectory_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: last_internal_trajectory_paths
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
        max_serialized_size_deva_planning_msgs2__msg__TargetTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: current_path_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: is_arrived_path_end
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: last_ref_points
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
        max_serialized_size_deva_planning_msgs2__msg__PathData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: hybrid_astar_search_results
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
        max_serialized_size_deva_planning_msgs2__msg__TargetTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: optimization_results
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
        max_serialized_size_deva_planning_msgs2__msg__TargetTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_planning_msgs2__msg__NavOpenspaceDebugInfo;
    is_plain =
      (
      offsetof(DataType, optimization_results) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _NavOpenspaceDebugInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_planning_msgs2__msg__NavOpenspaceDebugInfo(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NavOpenspaceDebugInfo = {
  "deva_planning_msgs2::msg",
  "NavOpenspaceDebugInfo",
  _NavOpenspaceDebugInfo__cdr_serialize,
  _NavOpenspaceDebugInfo__cdr_deserialize,
  _NavOpenspaceDebugInfo__get_serialized_size,
  _NavOpenspaceDebugInfo__max_serialized_size
};

static rosidl_message_type_support_t _NavOpenspaceDebugInfo__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavOpenspaceDebugInfo,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_planning_msgs2, msg, NavOpenspaceDebugInfo)() {
  return &_NavOpenspaceDebugInfo__type_support;
}

#if defined(__cplusplus)
}
#endif
