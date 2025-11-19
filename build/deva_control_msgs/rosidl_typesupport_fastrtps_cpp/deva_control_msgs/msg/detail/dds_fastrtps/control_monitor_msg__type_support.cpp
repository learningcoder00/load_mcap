// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_control_msgs:msg/ControlMonitorMsg.idl
// generated code does not contain a copyright notice
#include "deva_control_msgs/msg/detail/control_monitor_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_control_msgs/msg/detail/control_monitor_msg__struct.hpp"

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

namespace deva_planning_msgs2
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_planning_msgs2::msg::PlanningTrajectory &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_planning_msgs2::msg::PlanningTrajectory &);
size_t get_serialized_size(
  const deva_planning_msgs2::msg::PlanningTrajectory &,
  size_t current_alignment);
size_t
max_serialized_size_PlanningTrajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_planning_msgs2


namespace deva_control_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
cdr_serialize(
  const deva_control_msgs::msg::ControlMonitorMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: in_auto_drive
  cdr << (ros_message.in_auto_drive ? true : false);
  // Member: chs_yaw_rate
  cdr << ros_message.chs_yaw_rate;
  // Member: chs_speed
  cdr << ros_message.chs_speed;
  // Member: chs_steer
  cdr << ros_message.chs_steer;
  // Member: chs_longit_acc
  cdr << ros_message.chs_longit_acc;
  // Member: chs_longit_torque
  cdr << ros_message.chs_longit_torque;
  // Member: chs_gear
  cdr << ros_message.chs_gear;
  // Member: loc_x
  cdr << ros_message.loc_x;
  // Member: loc_y
  cdr << ros_message.loc_y;
  // Member: loc_z
  cdr << ros_message.loc_z;
  // Member: loc_speed
  cdr << ros_message.loc_speed;
  // Member: loc_acc
  cdr << ros_message.loc_acc;
  // Member: loc_heading
  cdr << ros_message.loc_heading;
  // Member: loc_pitch
  cdr << ros_message.loc_pitch;
  // Member: preview_path_x
  cdr << ros_message.preview_path_x;
  // Member: preview_path_y
  cdr << ros_message.preview_path_y;
  // Member: preview_path_theta
  cdr << ros_message.preview_path_theta;
  // Member: matched_path_x
  cdr << ros_message.matched_path_x;
  // Member: matched_path_y
  cdr << ros_message.matched_path_y;
  // Member: matched_path_theta
  cdr << ros_message.matched_path_theta;
  // Member: matched_path_kappa
  cdr << ros_message.matched_path_kappa;
  // Member: matched_path_s
  cdr << ros_message.matched_path_s;
  // Member: matched_path_v
  cdr << ros_message.matched_path_v;
  // Member: matched_path_a
  cdr << ros_message.matched_path_a;
  // Member: current_station
  cdr << ros_message.current_station;
  // Member: station_ref
  cdr << ros_message.station_ref;
  // Member: station_error
  cdr << ros_message.station_error;
  // Member: current_speed
  cdr << ros_message.current_speed;
  // Member: speed_ref
  cdr << ros_message.speed_ref;
  // Member: preview_speed_ref
  cdr << ros_message.preview_speed_ref;
  // Member: speed_error
  cdr << ros_message.speed_error;
  // Member: acc_ref
  cdr << ros_message.acc_ref;
  // Member: preview_acc_ref
  cdr << ros_message.preview_acc_ref;
  // Member: actual_acc
  cdr << ros_message.actual_acc;
  // Member: lat_d
  cdr << ros_message.lat_d;
  // Member: lat_d_rate
  cdr << ros_message.lat_d_rate;
  // Member: heading_d_rate
  cdr << ros_message.heading_d_rate;
  // Member: heading_d
  cdr << ros_message.heading_d;
  // Member: pre_lat_d
  cdr << ros_message.pre_lat_d;
  // Member: pre_lat_theta
  cdr << ros_message.pre_lat_theta;
  // Member: cmd_steer
  cdr << ros_message.cmd_steer;
  // Member: cmd_acc
  cdr << ros_message.cmd_acc;
  // Member: control_computation_time
  cdr << ros_message.control_computation_time;
  // Member: loc_header_time
  cdr << ros_message.loc_header_time;
  // Member: chas_header_time
  cdr << ros_message.chas_header_time;
  // Member: planning_header_time
  cdr << ros_message.planning_header_time;
  // Member: openloop_trajectory
  deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.openloop_trajectory,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_control_msgs::msg::ControlMonitorMsg & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: in_auto_drive
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.in_auto_drive = tmp ? true : false;
  }

  // Member: chs_yaw_rate
  cdr >> ros_message.chs_yaw_rate;

  // Member: chs_speed
  cdr >> ros_message.chs_speed;

  // Member: chs_steer
  cdr >> ros_message.chs_steer;

  // Member: chs_longit_acc
  cdr >> ros_message.chs_longit_acc;

  // Member: chs_longit_torque
  cdr >> ros_message.chs_longit_torque;

  // Member: chs_gear
  cdr >> ros_message.chs_gear;

  // Member: loc_x
  cdr >> ros_message.loc_x;

  // Member: loc_y
  cdr >> ros_message.loc_y;

  // Member: loc_z
  cdr >> ros_message.loc_z;

  // Member: loc_speed
  cdr >> ros_message.loc_speed;

  // Member: loc_acc
  cdr >> ros_message.loc_acc;

  // Member: loc_heading
  cdr >> ros_message.loc_heading;

  // Member: loc_pitch
  cdr >> ros_message.loc_pitch;

  // Member: preview_path_x
  cdr >> ros_message.preview_path_x;

  // Member: preview_path_y
  cdr >> ros_message.preview_path_y;

  // Member: preview_path_theta
  cdr >> ros_message.preview_path_theta;

  // Member: matched_path_x
  cdr >> ros_message.matched_path_x;

  // Member: matched_path_y
  cdr >> ros_message.matched_path_y;

  // Member: matched_path_theta
  cdr >> ros_message.matched_path_theta;

  // Member: matched_path_kappa
  cdr >> ros_message.matched_path_kappa;

  // Member: matched_path_s
  cdr >> ros_message.matched_path_s;

  // Member: matched_path_v
  cdr >> ros_message.matched_path_v;

  // Member: matched_path_a
  cdr >> ros_message.matched_path_a;

  // Member: current_station
  cdr >> ros_message.current_station;

  // Member: station_ref
  cdr >> ros_message.station_ref;

  // Member: station_error
  cdr >> ros_message.station_error;

  // Member: current_speed
  cdr >> ros_message.current_speed;

  // Member: speed_ref
  cdr >> ros_message.speed_ref;

  // Member: preview_speed_ref
  cdr >> ros_message.preview_speed_ref;

  // Member: speed_error
  cdr >> ros_message.speed_error;

  // Member: acc_ref
  cdr >> ros_message.acc_ref;

  // Member: preview_acc_ref
  cdr >> ros_message.preview_acc_ref;

  // Member: actual_acc
  cdr >> ros_message.actual_acc;

  // Member: lat_d
  cdr >> ros_message.lat_d;

  // Member: lat_d_rate
  cdr >> ros_message.lat_d_rate;

  // Member: heading_d_rate
  cdr >> ros_message.heading_d_rate;

  // Member: heading_d
  cdr >> ros_message.heading_d;

  // Member: pre_lat_d
  cdr >> ros_message.pre_lat_d;

  // Member: pre_lat_theta
  cdr >> ros_message.pre_lat_theta;

  // Member: cmd_steer
  cdr >> ros_message.cmd_steer;

  // Member: cmd_acc
  cdr >> ros_message.cmd_acc;

  // Member: control_computation_time
  cdr >> ros_message.control_computation_time;

  // Member: loc_header_time
  cdr >> ros_message.loc_header_time;

  // Member: chas_header_time
  cdr >> ros_message.chas_header_time;

  // Member: planning_header_time
  cdr >> ros_message.planning_header_time;

  // Member: openloop_trajectory
  deva_planning_msgs2::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.openloop_trajectory);

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
get_serialized_size(
  const deva_control_msgs::msg::ControlMonitorMsg & ros_message,
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
  // Member: in_auto_drive
  {
    size_t item_size = sizeof(ros_message.in_auto_drive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: chs_yaw_rate
  {
    size_t item_size = sizeof(ros_message.chs_yaw_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: chs_speed
  {
    size_t item_size = sizeof(ros_message.chs_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: chs_steer
  {
    size_t item_size = sizeof(ros_message.chs_steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: chs_longit_acc
  {
    size_t item_size = sizeof(ros_message.chs_longit_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: chs_longit_torque
  {
    size_t item_size = sizeof(ros_message.chs_longit_torque);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: chs_gear
  {
    size_t item_size = sizeof(ros_message.chs_gear);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: loc_x
  {
    size_t item_size = sizeof(ros_message.loc_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: loc_y
  {
    size_t item_size = sizeof(ros_message.loc_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: loc_z
  {
    size_t item_size = sizeof(ros_message.loc_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: loc_speed
  {
    size_t item_size = sizeof(ros_message.loc_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: loc_acc
  {
    size_t item_size = sizeof(ros_message.loc_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: loc_heading
  {
    size_t item_size = sizeof(ros_message.loc_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: loc_pitch
  {
    size_t item_size = sizeof(ros_message.loc_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: preview_path_x
  {
    size_t item_size = sizeof(ros_message.preview_path_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: preview_path_y
  {
    size_t item_size = sizeof(ros_message.preview_path_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: preview_path_theta
  {
    size_t item_size = sizeof(ros_message.preview_path_theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matched_path_x
  {
    size_t item_size = sizeof(ros_message.matched_path_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matched_path_y
  {
    size_t item_size = sizeof(ros_message.matched_path_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matched_path_theta
  {
    size_t item_size = sizeof(ros_message.matched_path_theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matched_path_kappa
  {
    size_t item_size = sizeof(ros_message.matched_path_kappa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matched_path_s
  {
    size_t item_size = sizeof(ros_message.matched_path_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matched_path_v
  {
    size_t item_size = sizeof(ros_message.matched_path_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: matched_path_a
  {
    size_t item_size = sizeof(ros_message.matched_path_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_station
  {
    size_t item_size = sizeof(ros_message.current_station);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: station_ref
  {
    size_t item_size = sizeof(ros_message.station_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: station_error
  {
    size_t item_size = sizeof(ros_message.station_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_speed
  {
    size_t item_size = sizeof(ros_message.current_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_ref
  {
    size_t item_size = sizeof(ros_message.speed_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: preview_speed_ref
  {
    size_t item_size = sizeof(ros_message.preview_speed_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_error
  {
    size_t item_size = sizeof(ros_message.speed_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acc_ref
  {
    size_t item_size = sizeof(ros_message.acc_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: preview_acc_ref
  {
    size_t item_size = sizeof(ros_message.preview_acc_ref);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: actual_acc
  {
    size_t item_size = sizeof(ros_message.actual_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lat_d
  {
    size_t item_size = sizeof(ros_message.lat_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lat_d_rate
  {
    size_t item_size = sizeof(ros_message.lat_d_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading_d_rate
  {
    size_t item_size = sizeof(ros_message.heading_d_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: heading_d
  {
    size_t item_size = sizeof(ros_message.heading_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pre_lat_d
  {
    size_t item_size = sizeof(ros_message.pre_lat_d);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pre_lat_theta
  {
    size_t item_size = sizeof(ros_message.pre_lat_theta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cmd_steer
  {
    size_t item_size = sizeof(ros_message.cmd_steer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cmd_acc
  {
    size_t item_size = sizeof(ros_message.cmd_acc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: control_computation_time
  {
    size_t item_size = sizeof(ros_message.control_computation_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: loc_header_time
  {
    size_t item_size = sizeof(ros_message.loc_header_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: chas_header_time
  {
    size_t item_size = sizeof(ros_message.chas_header_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: planning_header_time
  {
    size_t item_size = sizeof(ros_message.planning_header_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: openloop_trajectory

  current_alignment +=
    deva_planning_msgs2::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.openloop_trajectory, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_control_msgs
max_serialized_size_ControlMonitorMsg(
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

  // Member: in_auto_drive
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: chs_yaw_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: chs_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: chs_steer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: chs_longit_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: chs_longit_torque
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: chs_gear
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: loc_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: loc_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: loc_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: loc_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: loc_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: loc_heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: loc_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: preview_path_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: preview_path_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: preview_path_theta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matched_path_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matched_path_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matched_path_theta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matched_path_kappa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matched_path_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matched_path_v
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: matched_path_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: current_station
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: station_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: station_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: current_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: preview_speed_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: speed_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: acc_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: preview_acc_ref
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: actual_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lat_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: lat_d_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: heading_d_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: heading_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pre_lat_d
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: pre_lat_theta
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cmd_steer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cmd_acc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: control_computation_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: loc_header_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: chas_header_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: planning_header_time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: openloop_trajectory
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_planning_msgs2::msg::typesupport_fastrtps_cpp::max_serialized_size_PlanningTrajectory(
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
    using DataType = deva_control_msgs::msg::ControlMonitorMsg;
    is_plain =
      (
      offsetof(DataType, openloop_trajectory) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ControlMonitorMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_control_msgs::msg::ControlMonitorMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ControlMonitorMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_control_msgs::msg::ControlMonitorMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ControlMonitorMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_control_msgs::msg::ControlMonitorMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ControlMonitorMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ControlMonitorMsg(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ControlMonitorMsg__callbacks = {
  "deva_control_msgs::msg",
  "ControlMonitorMsg",
  _ControlMonitorMsg__cdr_serialize,
  _ControlMonitorMsg__cdr_deserialize,
  _ControlMonitorMsg__get_serialized_size,
  _ControlMonitorMsg__max_serialized_size
};

static rosidl_message_type_support_t _ControlMonitorMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ControlMonitorMsg__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_control_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_control_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_control_msgs::msg::ControlMonitorMsg>()
{
  return &deva_control_msgs::msg::typesupport_fastrtps_cpp::_ControlMonitorMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_control_msgs, msg, ControlMonitorMsg)() {
  return &deva_control_msgs::msg::typesupport_fastrtps_cpp::_ControlMonitorMsg__handle;
}

#ifdef __cplusplus
}
#endif
