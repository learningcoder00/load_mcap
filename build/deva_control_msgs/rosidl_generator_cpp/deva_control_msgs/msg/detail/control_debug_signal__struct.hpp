// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_control_msgs:msg/ControlDebugSignal.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_DEBUG_SIGNAL__STRUCT_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_DEBUG_SIGNAL__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__deva_control_msgs__msg__ControlDebugSignal __attribute__((deprecated))
#else
# define DEPRECATED__deva_control_msgs__msg__ControlDebugSignal __declspec(deprecated)
#endif

namespace deva_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlDebugSignal_
{
  using Type = ControlDebugSignal_<ContainerAllocator>;

  explicit ControlDebugSignal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->c0_val = 0.0;
      this->c1_val = 0.0;
      this->c2_val = 0.0;
      this->station_error = 0.0;
      this->speed_offset = 0.0;
      this->speed_target = 0.0;
      this->speed_current = 0.0;
      this->speed_error = 0.0;
      this->preview_steer_error = 0.0;
      this->preview_speed_target = 0.0;
      this->distance_error = 0.0;
      this->angle_error = 0.0;
      this->debug_signal_4 = 0.0;
      this->debug_signal_5 = 0.0;
      this->debug_signal_6 = 0.0;
      this->debug_signal_7 = 0.0;
      this->debug_signal_8 = 0.0;
      this->debug_signal_9 = 0.0;
    }
  }

  explicit ControlDebugSignal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->c0_val = 0.0;
      this->c1_val = 0.0;
      this->c2_val = 0.0;
      this->station_error = 0.0;
      this->speed_offset = 0.0;
      this->speed_target = 0.0;
      this->speed_current = 0.0;
      this->speed_error = 0.0;
      this->preview_steer_error = 0.0;
      this->preview_speed_target = 0.0;
      this->distance_error = 0.0;
      this->angle_error = 0.0;
      this->debug_signal_4 = 0.0;
      this->debug_signal_5 = 0.0;
      this->debug_signal_6 = 0.0;
      this->debug_signal_7 = 0.0;
      this->debug_signal_8 = 0.0;
      this->debug_signal_9 = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _c0_val_type =
    double;
  _c0_val_type c0_val;
  using _c1_val_type =
    double;
  _c1_val_type c1_val;
  using _c2_val_type =
    double;
  _c2_val_type c2_val;
  using _station_error_type =
    double;
  _station_error_type station_error;
  using _speed_offset_type =
    double;
  _speed_offset_type speed_offset;
  using _speed_target_type =
    double;
  _speed_target_type speed_target;
  using _speed_current_type =
    double;
  _speed_current_type speed_current;
  using _speed_error_type =
    double;
  _speed_error_type speed_error;
  using _preview_steer_error_type =
    double;
  _preview_steer_error_type preview_steer_error;
  using _preview_speed_target_type =
    double;
  _preview_speed_target_type preview_speed_target;
  using _distance_error_type =
    double;
  _distance_error_type distance_error;
  using _angle_error_type =
    double;
  _angle_error_type angle_error;
  using _debug_signal_4_type =
    double;
  _debug_signal_4_type debug_signal_4;
  using _debug_signal_5_type =
    double;
  _debug_signal_5_type debug_signal_5;
  using _debug_signal_6_type =
    double;
  _debug_signal_6_type debug_signal_6;
  using _debug_signal_7_type =
    double;
  _debug_signal_7_type debug_signal_7;
  using _debug_signal_8_type =
    double;
  _debug_signal_8_type debug_signal_8;
  using _debug_signal_9_type =
    double;
  _debug_signal_9_type debug_signal_9;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__c0_val(
    const double & _arg)
  {
    this->c0_val = _arg;
    return *this;
  }
  Type & set__c1_val(
    const double & _arg)
  {
    this->c1_val = _arg;
    return *this;
  }
  Type & set__c2_val(
    const double & _arg)
  {
    this->c2_val = _arg;
    return *this;
  }
  Type & set__station_error(
    const double & _arg)
  {
    this->station_error = _arg;
    return *this;
  }
  Type & set__speed_offset(
    const double & _arg)
  {
    this->speed_offset = _arg;
    return *this;
  }
  Type & set__speed_target(
    const double & _arg)
  {
    this->speed_target = _arg;
    return *this;
  }
  Type & set__speed_current(
    const double & _arg)
  {
    this->speed_current = _arg;
    return *this;
  }
  Type & set__speed_error(
    const double & _arg)
  {
    this->speed_error = _arg;
    return *this;
  }
  Type & set__preview_steer_error(
    const double & _arg)
  {
    this->preview_steer_error = _arg;
    return *this;
  }
  Type & set__preview_speed_target(
    const double & _arg)
  {
    this->preview_speed_target = _arg;
    return *this;
  }
  Type & set__distance_error(
    const double & _arg)
  {
    this->distance_error = _arg;
    return *this;
  }
  Type & set__angle_error(
    const double & _arg)
  {
    this->angle_error = _arg;
    return *this;
  }
  Type & set__debug_signal_4(
    const double & _arg)
  {
    this->debug_signal_4 = _arg;
    return *this;
  }
  Type & set__debug_signal_5(
    const double & _arg)
  {
    this->debug_signal_5 = _arg;
    return *this;
  }
  Type & set__debug_signal_6(
    const double & _arg)
  {
    this->debug_signal_6 = _arg;
    return *this;
  }
  Type & set__debug_signal_7(
    const double & _arg)
  {
    this->debug_signal_7 = _arg;
    return *this;
  }
  Type & set__debug_signal_8(
    const double & _arg)
  {
    this->debug_signal_8 = _arg;
    return *this;
  }
  Type & set__debug_signal_9(
    const double & _arg)
  {
    this->debug_signal_9 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_control_msgs::msg::ControlDebugSignal_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_control_msgs::msg::ControlDebugSignal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_control_msgs::msg::ControlDebugSignal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_control_msgs::msg::ControlDebugSignal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_control_msgs::msg::ControlDebugSignal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_control_msgs::msg::ControlDebugSignal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_control_msgs::msg::ControlDebugSignal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_control_msgs::msg::ControlDebugSignal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_control_msgs::msg::ControlDebugSignal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_control_msgs::msg::ControlDebugSignal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_control_msgs__msg__ControlDebugSignal
    std::shared_ptr<deva_control_msgs::msg::ControlDebugSignal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_control_msgs__msg__ControlDebugSignal
    std::shared_ptr<deva_control_msgs::msg::ControlDebugSignal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlDebugSignal_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->c0_val != other.c0_val) {
      return false;
    }
    if (this->c1_val != other.c1_val) {
      return false;
    }
    if (this->c2_val != other.c2_val) {
      return false;
    }
    if (this->station_error != other.station_error) {
      return false;
    }
    if (this->speed_offset != other.speed_offset) {
      return false;
    }
    if (this->speed_target != other.speed_target) {
      return false;
    }
    if (this->speed_current != other.speed_current) {
      return false;
    }
    if (this->speed_error != other.speed_error) {
      return false;
    }
    if (this->preview_steer_error != other.preview_steer_error) {
      return false;
    }
    if (this->preview_speed_target != other.preview_speed_target) {
      return false;
    }
    if (this->distance_error != other.distance_error) {
      return false;
    }
    if (this->angle_error != other.angle_error) {
      return false;
    }
    if (this->debug_signal_4 != other.debug_signal_4) {
      return false;
    }
    if (this->debug_signal_5 != other.debug_signal_5) {
      return false;
    }
    if (this->debug_signal_6 != other.debug_signal_6) {
      return false;
    }
    if (this->debug_signal_7 != other.debug_signal_7) {
      return false;
    }
    if (this->debug_signal_8 != other.debug_signal_8) {
      return false;
    }
    if (this->debug_signal_9 != other.debug_signal_9) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlDebugSignal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlDebugSignal_

// alias to use template instance with default allocator
using ControlDebugSignal =
  deva_control_msgs::msg::ControlDebugSignal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_DEBUG_SIGNAL__STRUCT_HPP_
