// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_planning_msgs:msg/TargetTrajectory.idl
// generated code does not contain a copyright notice
#include "deva_planning_msgs/msg/detail/target_trajectory__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_planning_msgs/msg/detail/target_trajectory__struct.hpp"

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
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace deva_planning_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_planning_msgs::msg::SensorTime &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs::msg::SensorTime &);
size_t get_serialized_size(
  const deva_planning_msgs::msg::SensorTime &,
  size_t current_alignment);
size_t
max_serialized_size_SensorTime(
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
  const deva_planning_msgs::msg::TrajectoryPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs::msg::TrajectoryPoint &);
size_t get_serialized_size(
  const deva_planning_msgs::msg::TrajectoryPoint &,
  size_t current_alignment);
size_t
max_serialized_size_TrajectoryPoint(
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
  const deva_planning_msgs::msg::PathPoint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs::msg::PathPoint &);
size_t get_serialized_size(
  const deva_planning_msgs::msg::PathPoint &,
  size_t current_alignment);
size_t
max_serialized_size_PathPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_planning_msgs

// functions for deva_planning_msgs::msg::PathPoint already declared above


namespace deva_planning_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs
cdr_serialize(
  const deva_planning_msgs::msg::TargetTrajectory & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: sensor_timestamp
  deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.sensor_timestamp,
    cdr);
  // Member: start_gnss_time
  cdr << ros_message.start_gnss_time;
  // Member: total_path_length
  cdr << ros_message.total_path_length;
  // Member: total_path_time
  cdr << ros_message.total_path_time;
  // Member: trajectory_point
  {
    size_t size = ros_message.trajectory_point.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.trajectory_point[i],
        cdr);
    }
  }
  // Member: path_point
  {
    size_t size = ros_message.path_point.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.path_point[i],
        cdr);
    }
  }
  // Member: gear
  cdr << ros_message.gear;
  // Member: is_estop
  cdr << (ros_message.is_estop ? true : false);
  // Member: estop_reason
  cdr << ros_message.estop_reason;
  // Member: is_stop
  cdr << (ros_message.is_stop ? true : false);
  // Member: stop_pose
  deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stop_pose,
    cdr);
  // Member: stop_reason
  cdr << ros_message.stop_reason;
  // Member: is_replan
  cdr << (ros_message.is_replan ? true : false);
  // Member: replan_reason
  cdr << ros_message.replan_reason;
  // Member: car_in_dead_end
  cdr << (ros_message.car_in_dead_end ? true : false);
  // Member: high_beam
  cdr << (ros_message.high_beam ? true : false);
  // Member: low_beam
  cdr << (ros_message.low_beam ? true : false);
  // Member: horn
  cdr << (ros_message.horn ? true : false);
  // Member: emergency_light
  cdr << (ros_message.emergency_light ? true : false);
  // Member: trace_type
  cdr << ros_message.trace_type;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_planning_msgs::msg::TargetTrajectory & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: sensor_timestamp
  deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.sensor_timestamp);

  // Member: start_gnss_time
  cdr >> ros_message.start_gnss_time;

  // Member: total_path_length
  cdr >> ros_message.total_path_length;

  // Member: total_path_time
  cdr >> ros_message.total_path_time;

  // Member: trajectory_point
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

    ros_message.trajectory_point.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.trajectory_point[i]);
    }
  }

  // Member: path_point
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

    ros_message.path_point.resize(size);
    for (size_t i = 0; i < size; i++) {
      deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.path_point[i]);
    }
  }

  // Member: gear
  cdr >> ros_message.gear;

  // Member: is_estop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_estop = tmp ? true : false;
  }

  // Member: estop_reason
  cdr >> ros_message.estop_reason;

  // Member: is_stop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_stop = tmp ? true : false;
  }

  // Member: stop_pose
  deva_planning_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stop_pose);

  // Member: stop_reason
  cdr >> ros_message.stop_reason;

  // Member: is_replan
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_replan = tmp ? true : false;
  }

  // Member: replan_reason
  cdr >> ros_message.replan_reason;

  // Member: car_in_dead_end
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.car_in_dead_end = tmp ? true : false;
  }

  // Member: high_beam
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.high_beam = tmp ? true : false;
  }

  // Member: low_beam
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.low_beam = tmp ? true : false;
  }

  // Member: horn
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.horn = tmp ? true : false;
  }

  // Member: emergency_light
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.emergency_light = tmp ? true : false;
  }

  // Member: trace_type
  cdr >> ros_message.trace_type;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs
get_serialized_size(
  const deva_planning_msgs::msg::TargetTrajectory & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: sensor_timestamp

  current_alignment +=
    deva_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.sensor_timestamp, current_alignment);
  // Member: start_gnss_time
  {
    size_t item_size = sizeof(ros_message.start_gnss_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: total_path_length
  {
    size_t item_size = sizeof(ros_message.total_path_length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: total_path_time
  {
    size_t item_size = sizeof(ros_message.total_path_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trajectory_point
  {
    size_t array_size = ros_message.trajectory_point.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.trajectory_point[index], current_alignment);
    }
  }
  // Member: path_point
  {
    size_t array_size = ros_message.path_point.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.path_point[index], current_alignment);
    }
  }
  // Member: gear
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.gear.size() + 1);
  // Member: is_estop
  {
    size_t item_size = sizeof(ros_message.is_estop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: estop_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.estop_reason.size() + 1);
  // Member: is_stop
  {
    size_t item_size = sizeof(ros_message.is_stop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stop_pose

  current_alignment +=
    deva_planning_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stop_pose, current_alignment);
  // Member: stop_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.stop_reason.size() + 1);
  // Member: is_replan
  {
    size_t item_size = sizeof(ros_message.is_replan);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: replan_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.replan_reason.size() + 1);
  // Member: car_in_dead_end
  {
    size_t item_size = sizeof(ros_message.car_in_dead_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: high_beam
  {
    size_t item_size = sizeof(ros_message.high_beam);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: low_beam
  {
    size_t item_size = sizeof(ros_message.low_beam);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: horn
  {
    size_t item_size = sizeof(ros_message.horn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: emergency_light
  {
    size_t item_size = sizeof(ros_message.emergency_light);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trace_type
  {
    size_t item_size = sizeof(ros_message.trace_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_planning_msgs
max_serialized_size_TargetTrajectory(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: sensor_timestamp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_SensorTime(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: start_gnss_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: total_path_length
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: total_path_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: trajectory_point
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
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_TrajectoryPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: path_point
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
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PathPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: gear
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

  // Member: is_estop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: estop_reason
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

  // Member: is_stop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stop_pose
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_planning_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PathPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: stop_reason
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

  // Member: is_replan
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: replan_reason
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

  // Member: car_in_dead_end
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: high_beam
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: low_beam
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: horn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: emergency_light
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: trace_type
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
    using DataType = deva_planning_msgs::msg::TargetTrajectory;
    is_plain =
      (
      offsetof(DataType, trace_type) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TargetTrajectory__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_planning_msgs::msg::TargetTrajectory *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TargetTrajectory__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_planning_msgs::msg::TargetTrajectory *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TargetTrajectory__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_planning_msgs::msg::TargetTrajectory *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TargetTrajectory__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TargetTrajectory(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TargetTrajectory__callbacks = {
  "deva_planning_msgs::msg",
  "TargetTrajectory",
  _TargetTrajectory__cdr_serialize,
  _TargetTrajectory__cdr_deserialize,
  _TargetTrajectory__get_serialized_size,
  _TargetTrajectory__max_serialized_size
};

static rosidl_message_type_support_t _TargetTrajectory__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TargetTrajectory__callbacks,
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
get_message_type_support_handle<deva_planning_msgs::msg::TargetTrajectory>()
{
  return &deva_planning_msgs::msg::typesupport_fastrtps_cpp::_TargetTrajectory__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_planning_msgs, msg, TargetTrajectory)() {
  return &deva_planning_msgs::msg::typesupport_fastrtps_cpp::_TargetTrajectory__handle;
}

#ifdef __cplusplus
}
#endif
