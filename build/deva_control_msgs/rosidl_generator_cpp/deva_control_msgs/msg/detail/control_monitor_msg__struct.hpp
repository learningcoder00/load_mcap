// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_control_msgs:msg/ControlMonitorMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_MONITOR_MSG__STRUCT_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_MONITOR_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'openloop_trajectory'
#include "deva_planning_msgs2/msg/detail/planning_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_control_msgs__msg__ControlMonitorMsg __attribute__((deprecated))
#else
# define DEPRECATED__deva_control_msgs__msg__ControlMonitorMsg __declspec(deprecated)
#endif

namespace deva_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlMonitorMsg_
{
  using Type = ControlMonitorMsg_<ContainerAllocator>;

  explicit ControlMonitorMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    openloop_trajectory(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->in_auto_drive = false;
      this->chs_yaw_rate = 0.0;
      this->chs_speed = 0.0;
      this->chs_steer = 0.0;
      this->chs_longit_acc = 0.0;
      this->chs_longit_torque = 0.0;
      this->chs_gear = 0;
      this->loc_x = 0.0;
      this->loc_y = 0.0;
      this->loc_z = 0.0;
      this->loc_speed = 0.0;
      this->loc_acc = 0.0;
      this->loc_heading = 0.0;
      this->loc_pitch = 0.0;
      this->preview_path_x = 0.0;
      this->preview_path_y = 0.0;
      this->preview_path_theta = 0.0;
      this->matched_path_x = 0.0;
      this->matched_path_y = 0.0;
      this->matched_path_theta = 0.0;
      this->matched_path_kappa = 0.0;
      this->matched_path_s = 0.0;
      this->matched_path_v = 0.0;
      this->matched_path_a = 0.0;
      this->current_station = 0.0;
      this->station_ref = 0.0;
      this->station_error = 0.0;
      this->current_speed = 0.0;
      this->speed_ref = 0.0;
      this->preview_speed_ref = 0.0;
      this->speed_error = 0.0;
      this->acc_ref = 0.0;
      this->preview_acc_ref = 0.0;
      this->actual_acc = 0.0;
      this->lat_d = 0.0;
      this->lat_d_rate = 0.0;
      this->heading_d_rate = 0.0;
      this->heading_d = 0.0;
      this->pre_lat_d = 0.0;
      this->pre_lat_theta = 0.0;
      this->cmd_steer = 0.0;
      this->cmd_acc = 0.0;
      this->control_computation_time = 0.0;
      this->loc_header_time = 0.0;
      this->chas_header_time = 0.0;
      this->planning_header_time = 0.0;
    }
  }

  explicit ControlMonitorMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    openloop_trajectory(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->in_auto_drive = false;
      this->chs_yaw_rate = 0.0;
      this->chs_speed = 0.0;
      this->chs_steer = 0.0;
      this->chs_longit_acc = 0.0;
      this->chs_longit_torque = 0.0;
      this->chs_gear = 0;
      this->loc_x = 0.0;
      this->loc_y = 0.0;
      this->loc_z = 0.0;
      this->loc_speed = 0.0;
      this->loc_acc = 0.0;
      this->loc_heading = 0.0;
      this->loc_pitch = 0.0;
      this->preview_path_x = 0.0;
      this->preview_path_y = 0.0;
      this->preview_path_theta = 0.0;
      this->matched_path_x = 0.0;
      this->matched_path_y = 0.0;
      this->matched_path_theta = 0.0;
      this->matched_path_kappa = 0.0;
      this->matched_path_s = 0.0;
      this->matched_path_v = 0.0;
      this->matched_path_a = 0.0;
      this->current_station = 0.0;
      this->station_ref = 0.0;
      this->station_error = 0.0;
      this->current_speed = 0.0;
      this->speed_ref = 0.0;
      this->preview_speed_ref = 0.0;
      this->speed_error = 0.0;
      this->acc_ref = 0.0;
      this->preview_acc_ref = 0.0;
      this->actual_acc = 0.0;
      this->lat_d = 0.0;
      this->lat_d_rate = 0.0;
      this->heading_d_rate = 0.0;
      this->heading_d = 0.0;
      this->pre_lat_d = 0.0;
      this->pre_lat_theta = 0.0;
      this->cmd_steer = 0.0;
      this->cmd_acc = 0.0;
      this->control_computation_time = 0.0;
      this->loc_header_time = 0.0;
      this->chas_header_time = 0.0;
      this->planning_header_time = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _in_auto_drive_type =
    bool;
  _in_auto_drive_type in_auto_drive;
  using _chs_yaw_rate_type =
    double;
  _chs_yaw_rate_type chs_yaw_rate;
  using _chs_speed_type =
    double;
  _chs_speed_type chs_speed;
  using _chs_steer_type =
    double;
  _chs_steer_type chs_steer;
  using _chs_longit_acc_type =
    double;
  _chs_longit_acc_type chs_longit_acc;
  using _chs_longit_torque_type =
    double;
  _chs_longit_torque_type chs_longit_torque;
  using _chs_gear_type =
    uint8_t;
  _chs_gear_type chs_gear;
  using _loc_x_type =
    double;
  _loc_x_type loc_x;
  using _loc_y_type =
    double;
  _loc_y_type loc_y;
  using _loc_z_type =
    double;
  _loc_z_type loc_z;
  using _loc_speed_type =
    double;
  _loc_speed_type loc_speed;
  using _loc_acc_type =
    double;
  _loc_acc_type loc_acc;
  using _loc_heading_type =
    double;
  _loc_heading_type loc_heading;
  using _loc_pitch_type =
    double;
  _loc_pitch_type loc_pitch;
  using _preview_path_x_type =
    double;
  _preview_path_x_type preview_path_x;
  using _preview_path_y_type =
    double;
  _preview_path_y_type preview_path_y;
  using _preview_path_theta_type =
    double;
  _preview_path_theta_type preview_path_theta;
  using _matched_path_x_type =
    double;
  _matched_path_x_type matched_path_x;
  using _matched_path_y_type =
    double;
  _matched_path_y_type matched_path_y;
  using _matched_path_theta_type =
    double;
  _matched_path_theta_type matched_path_theta;
  using _matched_path_kappa_type =
    double;
  _matched_path_kappa_type matched_path_kappa;
  using _matched_path_s_type =
    double;
  _matched_path_s_type matched_path_s;
  using _matched_path_v_type =
    double;
  _matched_path_v_type matched_path_v;
  using _matched_path_a_type =
    double;
  _matched_path_a_type matched_path_a;
  using _current_station_type =
    double;
  _current_station_type current_station;
  using _station_ref_type =
    double;
  _station_ref_type station_ref;
  using _station_error_type =
    double;
  _station_error_type station_error;
  using _current_speed_type =
    double;
  _current_speed_type current_speed;
  using _speed_ref_type =
    double;
  _speed_ref_type speed_ref;
  using _preview_speed_ref_type =
    double;
  _preview_speed_ref_type preview_speed_ref;
  using _speed_error_type =
    double;
  _speed_error_type speed_error;
  using _acc_ref_type =
    double;
  _acc_ref_type acc_ref;
  using _preview_acc_ref_type =
    double;
  _preview_acc_ref_type preview_acc_ref;
  using _actual_acc_type =
    double;
  _actual_acc_type actual_acc;
  using _lat_d_type =
    double;
  _lat_d_type lat_d;
  using _lat_d_rate_type =
    double;
  _lat_d_rate_type lat_d_rate;
  using _heading_d_rate_type =
    double;
  _heading_d_rate_type heading_d_rate;
  using _heading_d_type =
    double;
  _heading_d_type heading_d;
  using _pre_lat_d_type =
    double;
  _pre_lat_d_type pre_lat_d;
  using _pre_lat_theta_type =
    double;
  _pre_lat_theta_type pre_lat_theta;
  using _cmd_steer_type =
    double;
  _cmd_steer_type cmd_steer;
  using _cmd_acc_type =
    double;
  _cmd_acc_type cmd_acc;
  using _control_computation_time_type =
    double;
  _control_computation_time_type control_computation_time;
  using _loc_header_time_type =
    double;
  _loc_header_time_type loc_header_time;
  using _chas_header_time_type =
    double;
  _chas_header_time_type chas_header_time;
  using _planning_header_time_type =
    double;
  _planning_header_time_type planning_header_time;
  using _openloop_trajectory_type =
    deva_planning_msgs2::msg::PlanningTrajectory_<ContainerAllocator>;
  _openloop_trajectory_type openloop_trajectory;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__in_auto_drive(
    const bool & _arg)
  {
    this->in_auto_drive = _arg;
    return *this;
  }
  Type & set__chs_yaw_rate(
    const double & _arg)
  {
    this->chs_yaw_rate = _arg;
    return *this;
  }
  Type & set__chs_speed(
    const double & _arg)
  {
    this->chs_speed = _arg;
    return *this;
  }
  Type & set__chs_steer(
    const double & _arg)
  {
    this->chs_steer = _arg;
    return *this;
  }
  Type & set__chs_longit_acc(
    const double & _arg)
  {
    this->chs_longit_acc = _arg;
    return *this;
  }
  Type & set__chs_longit_torque(
    const double & _arg)
  {
    this->chs_longit_torque = _arg;
    return *this;
  }
  Type & set__chs_gear(
    const uint8_t & _arg)
  {
    this->chs_gear = _arg;
    return *this;
  }
  Type & set__loc_x(
    const double & _arg)
  {
    this->loc_x = _arg;
    return *this;
  }
  Type & set__loc_y(
    const double & _arg)
  {
    this->loc_y = _arg;
    return *this;
  }
  Type & set__loc_z(
    const double & _arg)
  {
    this->loc_z = _arg;
    return *this;
  }
  Type & set__loc_speed(
    const double & _arg)
  {
    this->loc_speed = _arg;
    return *this;
  }
  Type & set__loc_acc(
    const double & _arg)
  {
    this->loc_acc = _arg;
    return *this;
  }
  Type & set__loc_heading(
    const double & _arg)
  {
    this->loc_heading = _arg;
    return *this;
  }
  Type & set__loc_pitch(
    const double & _arg)
  {
    this->loc_pitch = _arg;
    return *this;
  }
  Type & set__preview_path_x(
    const double & _arg)
  {
    this->preview_path_x = _arg;
    return *this;
  }
  Type & set__preview_path_y(
    const double & _arg)
  {
    this->preview_path_y = _arg;
    return *this;
  }
  Type & set__preview_path_theta(
    const double & _arg)
  {
    this->preview_path_theta = _arg;
    return *this;
  }
  Type & set__matched_path_x(
    const double & _arg)
  {
    this->matched_path_x = _arg;
    return *this;
  }
  Type & set__matched_path_y(
    const double & _arg)
  {
    this->matched_path_y = _arg;
    return *this;
  }
  Type & set__matched_path_theta(
    const double & _arg)
  {
    this->matched_path_theta = _arg;
    return *this;
  }
  Type & set__matched_path_kappa(
    const double & _arg)
  {
    this->matched_path_kappa = _arg;
    return *this;
  }
  Type & set__matched_path_s(
    const double & _arg)
  {
    this->matched_path_s = _arg;
    return *this;
  }
  Type & set__matched_path_v(
    const double & _arg)
  {
    this->matched_path_v = _arg;
    return *this;
  }
  Type & set__matched_path_a(
    const double & _arg)
  {
    this->matched_path_a = _arg;
    return *this;
  }
  Type & set__current_station(
    const double & _arg)
  {
    this->current_station = _arg;
    return *this;
  }
  Type & set__station_ref(
    const double & _arg)
  {
    this->station_ref = _arg;
    return *this;
  }
  Type & set__station_error(
    const double & _arg)
  {
    this->station_error = _arg;
    return *this;
  }
  Type & set__current_speed(
    const double & _arg)
  {
    this->current_speed = _arg;
    return *this;
  }
  Type & set__speed_ref(
    const double & _arg)
  {
    this->speed_ref = _arg;
    return *this;
  }
  Type & set__preview_speed_ref(
    const double & _arg)
  {
    this->preview_speed_ref = _arg;
    return *this;
  }
  Type & set__speed_error(
    const double & _arg)
  {
    this->speed_error = _arg;
    return *this;
  }
  Type & set__acc_ref(
    const double & _arg)
  {
    this->acc_ref = _arg;
    return *this;
  }
  Type & set__preview_acc_ref(
    const double & _arg)
  {
    this->preview_acc_ref = _arg;
    return *this;
  }
  Type & set__actual_acc(
    const double & _arg)
  {
    this->actual_acc = _arg;
    return *this;
  }
  Type & set__lat_d(
    const double & _arg)
  {
    this->lat_d = _arg;
    return *this;
  }
  Type & set__lat_d_rate(
    const double & _arg)
  {
    this->lat_d_rate = _arg;
    return *this;
  }
  Type & set__heading_d_rate(
    const double & _arg)
  {
    this->heading_d_rate = _arg;
    return *this;
  }
  Type & set__heading_d(
    const double & _arg)
  {
    this->heading_d = _arg;
    return *this;
  }
  Type & set__pre_lat_d(
    const double & _arg)
  {
    this->pre_lat_d = _arg;
    return *this;
  }
  Type & set__pre_lat_theta(
    const double & _arg)
  {
    this->pre_lat_theta = _arg;
    return *this;
  }
  Type & set__cmd_steer(
    const double & _arg)
  {
    this->cmd_steer = _arg;
    return *this;
  }
  Type & set__cmd_acc(
    const double & _arg)
  {
    this->cmd_acc = _arg;
    return *this;
  }
  Type & set__control_computation_time(
    const double & _arg)
  {
    this->control_computation_time = _arg;
    return *this;
  }
  Type & set__loc_header_time(
    const double & _arg)
  {
    this->loc_header_time = _arg;
    return *this;
  }
  Type & set__chas_header_time(
    const double & _arg)
  {
    this->chas_header_time = _arg;
    return *this;
  }
  Type & set__planning_header_time(
    const double & _arg)
  {
    this->planning_header_time = _arg;
    return *this;
  }
  Type & set__openloop_trajectory(
    const deva_planning_msgs2::msg::PlanningTrajectory_<ContainerAllocator> & _arg)
  {
    this->openloop_trajectory = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_control_msgs::msg::ControlMonitorMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_control_msgs::msg::ControlMonitorMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_control_msgs::msg::ControlMonitorMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_control_msgs::msg::ControlMonitorMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_control_msgs::msg::ControlMonitorMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_control_msgs::msg::ControlMonitorMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_control_msgs::msg::ControlMonitorMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_control_msgs::msg::ControlMonitorMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_control_msgs::msg::ControlMonitorMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_control_msgs::msg::ControlMonitorMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_control_msgs__msg__ControlMonitorMsg
    std::shared_ptr<deva_control_msgs::msg::ControlMonitorMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_control_msgs__msg__ControlMonitorMsg
    std::shared_ptr<deva_control_msgs::msg::ControlMonitorMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlMonitorMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->in_auto_drive != other.in_auto_drive) {
      return false;
    }
    if (this->chs_yaw_rate != other.chs_yaw_rate) {
      return false;
    }
    if (this->chs_speed != other.chs_speed) {
      return false;
    }
    if (this->chs_steer != other.chs_steer) {
      return false;
    }
    if (this->chs_longit_acc != other.chs_longit_acc) {
      return false;
    }
    if (this->chs_longit_torque != other.chs_longit_torque) {
      return false;
    }
    if (this->chs_gear != other.chs_gear) {
      return false;
    }
    if (this->loc_x != other.loc_x) {
      return false;
    }
    if (this->loc_y != other.loc_y) {
      return false;
    }
    if (this->loc_z != other.loc_z) {
      return false;
    }
    if (this->loc_speed != other.loc_speed) {
      return false;
    }
    if (this->loc_acc != other.loc_acc) {
      return false;
    }
    if (this->loc_heading != other.loc_heading) {
      return false;
    }
    if (this->loc_pitch != other.loc_pitch) {
      return false;
    }
    if (this->preview_path_x != other.preview_path_x) {
      return false;
    }
    if (this->preview_path_y != other.preview_path_y) {
      return false;
    }
    if (this->preview_path_theta != other.preview_path_theta) {
      return false;
    }
    if (this->matched_path_x != other.matched_path_x) {
      return false;
    }
    if (this->matched_path_y != other.matched_path_y) {
      return false;
    }
    if (this->matched_path_theta != other.matched_path_theta) {
      return false;
    }
    if (this->matched_path_kappa != other.matched_path_kappa) {
      return false;
    }
    if (this->matched_path_s != other.matched_path_s) {
      return false;
    }
    if (this->matched_path_v != other.matched_path_v) {
      return false;
    }
    if (this->matched_path_a != other.matched_path_a) {
      return false;
    }
    if (this->current_station != other.current_station) {
      return false;
    }
    if (this->station_ref != other.station_ref) {
      return false;
    }
    if (this->station_error != other.station_error) {
      return false;
    }
    if (this->current_speed != other.current_speed) {
      return false;
    }
    if (this->speed_ref != other.speed_ref) {
      return false;
    }
    if (this->preview_speed_ref != other.preview_speed_ref) {
      return false;
    }
    if (this->speed_error != other.speed_error) {
      return false;
    }
    if (this->acc_ref != other.acc_ref) {
      return false;
    }
    if (this->preview_acc_ref != other.preview_acc_ref) {
      return false;
    }
    if (this->actual_acc != other.actual_acc) {
      return false;
    }
    if (this->lat_d != other.lat_d) {
      return false;
    }
    if (this->lat_d_rate != other.lat_d_rate) {
      return false;
    }
    if (this->heading_d_rate != other.heading_d_rate) {
      return false;
    }
    if (this->heading_d != other.heading_d) {
      return false;
    }
    if (this->pre_lat_d != other.pre_lat_d) {
      return false;
    }
    if (this->pre_lat_theta != other.pre_lat_theta) {
      return false;
    }
    if (this->cmd_steer != other.cmd_steer) {
      return false;
    }
    if (this->cmd_acc != other.cmd_acc) {
      return false;
    }
    if (this->control_computation_time != other.control_computation_time) {
      return false;
    }
    if (this->loc_header_time != other.loc_header_time) {
      return false;
    }
    if (this->chas_header_time != other.chas_header_time) {
      return false;
    }
    if (this->planning_header_time != other.planning_header_time) {
      return false;
    }
    if (this->openloop_trajectory != other.openloop_trajectory) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlMonitorMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlMonitorMsg_

// alias to use template instance with default allocator
using ControlMonitorMsg =
  deva_control_msgs::msg::ControlMonitorMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_MONITOR_MSG__STRUCT_HPP_
