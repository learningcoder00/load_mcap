// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs:msg/NavOpenspaceDebugInfo.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs/msg/detail/nav_openspace_debug_info__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_planning_msgs/msg/detail/nav_openspace_debug_info__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace deva_planning_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_planning_msgs::msg::NavOpenspaceObstacle &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs::msg::NavOpenspaceObstacle &);
size_t get_serialized_size(
  const deva_planning_msgs::msg::NavOpenspaceObstacle &,
  size_t current_alignment);
size_t
max_serialized_size_NavOpenspaceObstacle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_planning_msgs

namespace deva_planning_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_planning_msgs::msg::NavOpenspaceParkingSlot &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs::msg::NavOpenspaceParkingSlot &);
size_t get_serialized_size(
  const deva_planning_msgs::msg::NavOpenspaceParkingSlot &,
  size_t current_alignment);
size_t
max_serialized_size_NavOpenspaceParkingSlot(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_planning_msgs

namespace deva_planning_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_planning_msgs::msg::PathData &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs::msg::PathData &);
size_t get_serialized_size(
  const deva_planning_msgs::msg::PathData &,
  size_t current_alignment);
size_t
max_serialized_size_PathData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_planning_msgs

namespace deva_planning_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_planning_msgs::msg::TargetTrajectory &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs::msg::TargetTrajectory &);
size_t get_serialized_size(
  const deva_planning_msgs::msg::TargetTrajectory &,
  size_t current_alignment);
size_t
max_serialized_size_TargetTrajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_planning_msgs

// functions for deva_planning_msgs::msg::TargetTrajectory already declared above

// functions for deva_planning_msgs::msg::PathData already declared above

// functions for deva_planning_msgs::msg::TargetTrajectory already declared above

// functions for deva_planning_msgs::msg::TargetTrajectory already declared above


namespace deva_planning_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs
cdr_serialize(
  const deva_planning_msgs::msg::NavOpenspaceDebugInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: x_s
  cdr << ros_message.x_s;
  // Member: y_s
  cdr << ros_message.y_s;
  // Member: theta_s
  cdr << ros_message.theta_s;
  // Member: x_e
  cdr << ros_message.x_e;
  // Member: y_e
  cdr << ros_message.y_e;
  // Member: theta_e
  cdr << ros_message.theta_e;
  // Member: xy_bounds
  {
    cdr << ros_message.xy_bounds;
  }
  // Member: obstacles_info
  {
    size_t size = ros_message.obstacles_info.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.obstacles_info[i],
        cdr);
    }
  }
  // Member: parking_slots
  {
    size_t size = ros_message.parking_slots.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.parking_slots[i],
        cdr);
    }
  }
  // Member: start_gear
  cdr << ros_message.start_gear;
  // Member: speed
  cdr << ros_message.speed;
  // Member: keep_start_gear_distance
  cdr << ros_message.keep_start_gear_distance;
  // Member: kappa
  cdr << ros_message.kappa;
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: ref_points
  {
    size_t size = ros_message.ref_points.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.ref_points[i],
        cdr);
    }
  }
  // Member: openspace_planning_status
  cdr << ros_message.openspace_planning_status;
  // Member: last_trajectory
  deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.last_trajectory,
    cdr);
  // Member: last_trajectory_timestamp
  cdr << ros_message.last_trajectory_timestamp;
  // Member: last_internal_trajectory_paths
  {
    size_t size = ros_message.last_internal_trajectory_paths.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.last_internal_trajectory_paths[i],
        cdr);
    }
  }
  // Member: current_path_index
  cdr << ros_message.current_path_index;
  // Member: is_arrived_path_end
  cdr << (ros_message.is_arrived_path_end ? true : false);
  // Member: last_ref_points
  {
    size_t size = ros_message.last_ref_points.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.last_ref_points[i],
        cdr);
    }
  }
  // Member: hybrid_astar_search_results
  {
    size_t size = ros_message.hybrid_astar_search_results.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.hybrid_astar_search_results[i],
        cdr);
    }
  }
  // Member: optimization_results
  {
    size_t size = ros_message.optimization_results.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.optimization_results[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_planning_msgs::msg::NavOpenspaceDebugInfo & ros_message)
{
  // Member: x_s
  cdr >> ros_message.x_s;

  // Member: y_s
  cdr >> ros_message.y_s;

  // Member: theta_s
  cdr >> ros_message.theta_s;

  // Member: x_e
  cdr >> ros_message.x_e;

  // Member: y_e
  cdr >> ros_message.y_e;

  // Member: theta_e
  cdr >> ros_message.theta_e;

  // Member: xy_bounds
  {
    cdr >> ros_message.xy_bounds;
  }

  // Member: obstacles_info
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

    ros_message.obstacles_info.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.obstacles_info[i]);
    }
  }

  // Member: parking_slots
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

    ros_message.parking_slots.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.parking_slots[i]);
    }
  }

  // Member: start_gear
  cdr >> ros_message.start_gear;

  // Member: speed
  cdr >> ros_message.speed;

  // Member: keep_start_gear_distance
  cdr >> ros_message.keep_start_gear_distance;

  // Member: kappa
  cdr >> ros_message.kappa;

  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: ref_points
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

    ros_message.ref_points.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.ref_points[i]);
    }
  }

  // Member: openspace_planning_status
  cdr >> ros_message.openspace_planning_status;

  // Member: last_trajectory
  deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.last_trajectory);

  // Member: last_trajectory_timestamp
  cdr >> ros_message.last_trajectory_timestamp;

  // Member: last_internal_trajectory_paths
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

    ros_message.last_internal_trajectory_paths.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.last_internal_trajectory_paths[i]);
    }
  }

  // Member: current_path_index
  cdr >> ros_message.current_path_index;

  // Member: is_arrived_path_end
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_arrived_path_end = tmp ? true : false;
  }

  // Member: last_ref_points
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

    ros_message.last_ref_points.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.last_ref_points[i]);
    }
  }

  // Member: hybrid_astar_search_results
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

    ros_message.hybrid_astar_search_results.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.hybrid_astar_search_results[i]);
    }
  }

  // Member: optimization_results
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

    ros_message.optimization_results.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.optimization_results[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs
get_serialized_size(
  const deva_planning_msgs::msg::NavOpenspaceDebugInfo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: x_s
  {
    size_t item_size = sizeof(ros_message.x_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_s
  {
    size_t item_size = sizeof(ros_message.y_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta_s
  {
    size_t item_size = sizeof(ros_message.theta_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: x_e
  {
    size_t item_size = sizeof(ros_message.x_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: y_e
  {
    size_t item_size = sizeof(ros_message.y_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta_e
  {
    size_t item_size = sizeof(ros_message.theta_e);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: xy_bounds
  {
    size_t array_size = ros_message.xy_bounds.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.xy_bounds[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: obstacles_info
  {
    size_t array_size = ros_message.obstacles_info.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.obstacles_info[index], current_alignment);
    }
  }
  // Member: parking_slots
  {
    size_t array_size = ros_message.parking_slots.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.parking_slots[index], current_alignment);
    }
  }
  // Member: start_gear
  {
    size_t item_size = sizeof(ros_message.start_gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: keep_start_gear_distance
  {
    size_t item_size = sizeof(ros_message.keep_start_gear_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: kappa
  {
    size_t item_size = sizeof(ros_message.kappa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ref_points
  {
    size_t array_size = ros_message.ref_points.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.ref_points[index], current_alignment);
    }
  }
  // Member: openspace_planning_status
  {
    size_t item_size = sizeof(ros_message.openspace_planning_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: last_trajectory

  current_alignment +=
    deva_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.last_trajectory, current_alignment);
  // Member: last_trajectory_timestamp
  {
    size_t item_size = sizeof(ros_message.last_trajectory_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: last_internal_trajectory_paths
  {
    size_t array_size = ros_message.last_internal_trajectory_paths.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.last_internal_trajectory_paths[index], current_alignment);
    }
  }
  // Member: current_path_index
  {
    size_t item_size = sizeof(ros_message.current_path_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: is_arrived_path_end
  {
    size_t item_size = sizeof(ros_message.is_arrived_path_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: last_ref_points
  {
    size_t array_size = ros_message.last_ref_points.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.last_ref_points[index], current_alignment);
    }
  }
  // Member: hybrid_astar_search_results
  {
    size_t array_size = ros_message.hybrid_astar_search_results.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.hybrid_astar_search_results[index], current_alignment);
    }
  }
  // Member: optimization_results
  {
    size_t array_size = ros_message.optimization_results.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.optimization_results[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs
max_serialized_size_NavOpenspaceDebugInfo(
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


  // Member: x_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: theta_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: x_e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: y_e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: theta_e
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: xy_bounds
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

  // Member: obstacles_info
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
      size_t inner_size =
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NavOpenspaceObstacle(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: parking_slots
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
      size_t inner_size =
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_NavOpenspaceParkingSlot(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: start_gear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: keep_start_gear_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: kappa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: ref_points
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
      size_t inner_size =
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PathData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: openspace_planning_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: last_trajectory
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TargetTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: last_trajectory_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: last_internal_trajectory_paths
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
      size_t inner_size =
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TargetTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: current_path_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_arrived_path_end
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: last_ref_points
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
      size_t inner_size =
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PathData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: hybrid_astar_search_results
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
      size_t inner_size =
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TargetTrajectory(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: optimization_results
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
      size_t inner_size =
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TargetTrajectory(
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
    using DataType = deva_planning_msgs::msg::NavOpenspaceDebugInfo;
    is_plain =
      (
      offsetof(DataType, optimization_results) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _NavOpenspaceDebugInfo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_planning_msgs::msg::NavOpenspaceDebugInfo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _NavOpenspaceDebugInfo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_planning_msgs::msg::NavOpenspaceDebugInfo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _NavOpenspaceDebugInfo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_planning_msgs::msg::NavOpenspaceDebugInfo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _NavOpenspaceDebugInfo__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_NavOpenspaceDebugInfo(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _NavOpenspaceDebugInfo__callbacks = {
  "deva_planning_msgs::msg",
  "NavOpenspaceDebugInfo",
  _NavOpenspaceDebugInfo__cdr_serialize,
  _NavOpenspaceDebugInfo__cdr_deserialize,
  _NavOpenspaceDebugInfo__get_serialized_size,
  _NavOpenspaceDebugInfo__max_serialized_size
};

static rosidl_message_type_support_t _NavOpenspaceDebugInfo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_NavOpenspaceDebugInfo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_planning_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_planning_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_planning_msgs::msg::NavOpenspaceDebugInfo>()
{
  return &deva_planning_msgs::msg::typesupport_fastrtps_cpp::_NavOpenspaceDebugInfo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_planning_msgs, msg, NavOpenspaceDebugInfo)() {
  return &deva_planning_msgs::msg::typesupport_fastrtps_cpp::_NavOpenspaceDebugInfo__handle;
}

#ifdef __cplusplus
}
#endif
