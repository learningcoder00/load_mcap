// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_control_msgs:msg/ControlResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_RESULT__STRUCT_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"
// Member 'steer_angle_rate_limit'
// Member 'steer_tq_limit'
// Member 'longit_tq_limit'
// Member 'longit_jerk_limit'
#include "deva_control_msgs/msg/detail/control_valid_limit__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_control_msgs__msg__ControlResult __attribute__((deprecated))
#else
# define DEPRECATED__deva_control_msgs__msg__ControlResult __declspec(deprecated)
#endif

namespace deva_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlResult_
{
  using Type = ControlResult_<ContainerAllocator>;

  explicit ControlResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    steer_angle_rate_limit(_init),
    steer_tq_limit(_init),
    longit_tq_limit(_init),
    longit_jerk_limit(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->protocol_version = "2.10";
      this->limit_command_enable = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->protocol_version = "";
      this->late_mode = 0;
      this->eps_torque = 0.0;
      this->front_wheel_target = 0.0;
      this->steering_target = 0.0;
      this->long_mode = 0;
      this->speed = 0.0;
      this->acceleration = 0.0;
      this->longit_torque = 0.0;
      this->target_distance = 0.0;
      this->throttle = 0.0;
      this->brake = 0.0;
      this->limit_command_enable = false;
      this->control_ready_false_reason = "";
      this->ready = false;
      this->control_mode = 0;
      this->gear_en = false;
      this->gear_cmd_val = 0l;
      this->lateral_en = false;
      this->longitudinal_en = false;
      this->steering_rate = 0.0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->late_mode = 0;
      this->eps_torque = 0.0;
      this->front_wheel_target = 0.0;
      this->steering_target = 0.0;
      this->long_mode = 0;
      this->speed = 0.0;
      this->acceleration = 0.0;
      this->longit_torque = 0.0;
      this->target_distance = 0.0;
      this->throttle = 0.0;
      this->brake = 0.0;
      this->control_ready_false_reason = "";
      this->ready = false;
      this->control_mode = 0;
      this->gear_en = false;
      this->gear_cmd_val = 0l;
      this->lateral_en = false;
      this->longitudinal_en = false;
      this->steering_rate = 0.0;
    }
  }

  explicit ControlResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    protocol_version(_alloc),
    steer_angle_rate_limit(_alloc, _init),
    steer_tq_limit(_alloc, _init),
    longit_tq_limit(_alloc, _init),
    longit_jerk_limit(_alloc, _init),
    control_ready_false_reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->protocol_version = "2.10";
      this->limit_command_enable = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->protocol_version = "";
      this->late_mode = 0;
      this->eps_torque = 0.0;
      this->front_wheel_target = 0.0;
      this->steering_target = 0.0;
      this->long_mode = 0;
      this->speed = 0.0;
      this->acceleration = 0.0;
      this->longit_torque = 0.0;
      this->target_distance = 0.0;
      this->throttle = 0.0;
      this->brake = 0.0;
      this->limit_command_enable = false;
      this->control_ready_false_reason = "";
      this->ready = false;
      this->control_mode = 0;
      this->gear_en = false;
      this->gear_cmd_val = 0l;
      this->lateral_en = false;
      this->longitudinal_en = false;
      this->steering_rate = 0.0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->late_mode = 0;
      this->eps_torque = 0.0;
      this->front_wheel_target = 0.0;
      this->steering_target = 0.0;
      this->long_mode = 0;
      this->speed = 0.0;
      this->acceleration = 0.0;
      this->longit_torque = 0.0;
      this->target_distance = 0.0;
      this->throttle = 0.0;
      this->brake = 0.0;
      this->control_ready_false_reason = "";
      this->ready = false;
      this->control_mode = 0;
      this->gear_en = false;
      this->gear_cmd_val = 0l;
      this->lateral_en = false;
      this->longitudinal_en = false;
      this->steering_rate = 0.0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _protocol_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _protocol_version_type protocol_version;
  using _late_mode_type =
    int8_t;
  _late_mode_type late_mode;
  using _eps_torque_type =
    double;
  _eps_torque_type eps_torque;
  using _front_wheel_target_type =
    double;
  _front_wheel_target_type front_wheel_target;
  using _steering_target_type =
    double;
  _steering_target_type steering_target;
  using _long_mode_type =
    int8_t;
  _long_mode_type long_mode;
  using _speed_type =
    double;
  _speed_type speed;
  using _acceleration_type =
    double;
  _acceleration_type acceleration;
  using _longit_torque_type =
    double;
  _longit_torque_type longit_torque;
  using _target_distance_type =
    double;
  _target_distance_type target_distance;
  using _throttle_type =
    double;
  _throttle_type throttle;
  using _brake_type =
    double;
  _brake_type brake;
  using _limit_command_enable_type =
    bool;
  _limit_command_enable_type limit_command_enable;
  using _steer_angle_rate_limit_type =
    deva_control_msgs::msg::ControlValidLimit_<ContainerAllocator>;
  _steer_angle_rate_limit_type steer_angle_rate_limit;
  using _steer_tq_limit_type =
    deva_control_msgs::msg::ControlValidLimit_<ContainerAllocator>;
  _steer_tq_limit_type steer_tq_limit;
  using _longit_tq_limit_type =
    deva_control_msgs::msg::ControlValidLimit_<ContainerAllocator>;
  _longit_tq_limit_type longit_tq_limit;
  using _longit_jerk_limit_type =
    deva_control_msgs::msg::ControlValidLimit_<ContainerAllocator>;
  _longit_jerk_limit_type longit_jerk_limit;
  using _control_ready_false_reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _control_ready_false_reason_type control_ready_false_reason;
  using _ready_type =
    bool;
  _ready_type ready;
  using _control_mode_type =
    uint8_t;
  _control_mode_type control_mode;
  using _gear_en_type =
    bool;
  _gear_en_type gear_en;
  using _gear_cmd_val_type =
    int32_t;
  _gear_cmd_val_type gear_cmd_val;
  using _lateral_en_type =
    bool;
  _lateral_en_type lateral_en;
  using _longitudinal_en_type =
    bool;
  _longitudinal_en_type longitudinal_en;
  using _steering_rate_type =
    double;
  _steering_rate_type steering_rate;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__protocol_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->protocol_version = _arg;
    return *this;
  }
  Type & set__late_mode(
    const int8_t & _arg)
  {
    this->late_mode = _arg;
    return *this;
  }
  Type & set__eps_torque(
    const double & _arg)
  {
    this->eps_torque = _arg;
    return *this;
  }
  Type & set__front_wheel_target(
    const double & _arg)
  {
    this->front_wheel_target = _arg;
    return *this;
  }
  Type & set__steering_target(
    const double & _arg)
  {
    this->steering_target = _arg;
    return *this;
  }
  Type & set__long_mode(
    const int8_t & _arg)
  {
    this->long_mode = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__acceleration(
    const double & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__longit_torque(
    const double & _arg)
  {
    this->longit_torque = _arg;
    return *this;
  }
  Type & set__target_distance(
    const double & _arg)
  {
    this->target_distance = _arg;
    return *this;
  }
  Type & set__throttle(
    const double & _arg)
  {
    this->throttle = _arg;
    return *this;
  }
  Type & set__brake(
    const double & _arg)
  {
    this->brake = _arg;
    return *this;
  }
  Type & set__limit_command_enable(
    const bool & _arg)
  {
    this->limit_command_enable = _arg;
    return *this;
  }
  Type & set__steer_angle_rate_limit(
    const deva_control_msgs::msg::ControlValidLimit_<ContainerAllocator> & _arg)
  {
    this->steer_angle_rate_limit = _arg;
    return *this;
  }
  Type & set__steer_tq_limit(
    const deva_control_msgs::msg::ControlValidLimit_<ContainerAllocator> & _arg)
  {
    this->steer_tq_limit = _arg;
    return *this;
  }
  Type & set__longit_tq_limit(
    const deva_control_msgs::msg::ControlValidLimit_<ContainerAllocator> & _arg)
  {
    this->longit_tq_limit = _arg;
    return *this;
  }
  Type & set__longit_jerk_limit(
    const deva_control_msgs::msg::ControlValidLimit_<ContainerAllocator> & _arg)
  {
    this->longit_jerk_limit = _arg;
    return *this;
  }
  Type & set__control_ready_false_reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->control_ready_false_reason = _arg;
    return *this;
  }
  Type & set__ready(
    const bool & _arg)
  {
    this->ready = _arg;
    return *this;
  }
  Type & set__control_mode(
    const uint8_t & _arg)
  {
    this->control_mode = _arg;
    return *this;
  }
  Type & set__gear_en(
    const bool & _arg)
  {
    this->gear_en = _arg;
    return *this;
  }
  Type & set__gear_cmd_val(
    const int32_t & _arg)
  {
    this->gear_cmd_val = _arg;
    return *this;
  }
  Type & set__lateral_en(
    const bool & _arg)
  {
    this->lateral_en = _arg;
    return *this;
  }
  Type & set__longitudinal_en(
    const bool & _arg)
  {
    this->longitudinal_en = _arg;
    return *this;
  }
  Type & set__steering_rate(
    const double & _arg)
  {
    this->steering_rate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_control_msgs::msg::ControlResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_control_msgs::msg::ControlResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_control_msgs::msg::ControlResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_control_msgs::msg::ControlResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_control_msgs::msg::ControlResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_control_msgs::msg::ControlResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_control_msgs::msg::ControlResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_control_msgs::msg::ControlResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_control_msgs::msg::ControlResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_control_msgs::msg::ControlResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_control_msgs__msg__ControlResult
    std::shared_ptr<deva_control_msgs::msg::ControlResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_control_msgs__msg__ControlResult
    std::shared_ptr<deva_control_msgs::msg::ControlResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlResult_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->protocol_version != other.protocol_version) {
      return false;
    }
    if (this->late_mode != other.late_mode) {
      return false;
    }
    if (this->eps_torque != other.eps_torque) {
      return false;
    }
    if (this->front_wheel_target != other.front_wheel_target) {
      return false;
    }
    if (this->steering_target != other.steering_target) {
      return false;
    }
    if (this->long_mode != other.long_mode) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->longit_torque != other.longit_torque) {
      return false;
    }
    if (this->target_distance != other.target_distance) {
      return false;
    }
    if (this->throttle != other.throttle) {
      return false;
    }
    if (this->brake != other.brake) {
      return false;
    }
    if (this->limit_command_enable != other.limit_command_enable) {
      return false;
    }
    if (this->steer_angle_rate_limit != other.steer_angle_rate_limit) {
      return false;
    }
    if (this->steer_tq_limit != other.steer_tq_limit) {
      return false;
    }
    if (this->longit_tq_limit != other.longit_tq_limit) {
      return false;
    }
    if (this->longit_jerk_limit != other.longit_jerk_limit) {
      return false;
    }
    if (this->control_ready_false_reason != other.control_ready_false_reason) {
      return false;
    }
    if (this->ready != other.ready) {
      return false;
    }
    if (this->control_mode != other.control_mode) {
      return false;
    }
    if (this->gear_en != other.gear_en) {
      return false;
    }
    if (this->gear_cmd_val != other.gear_cmd_val) {
      return false;
    }
    if (this->lateral_en != other.lateral_en) {
      return false;
    }
    if (this->longitudinal_en != other.longitudinal_en) {
      return false;
    }
    if (this->steering_rate != other.steering_rate) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlResult_

// alias to use template instance with default allocator
using ControlResult =
  deva_control_msgs::msg::ControlResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_RESULT__STRUCT_HPP_
