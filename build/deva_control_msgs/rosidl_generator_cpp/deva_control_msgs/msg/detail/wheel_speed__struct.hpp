// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_control_msgs:msg/WheelSpeed.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__WHEEL_SPEED__STRUCT_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__WHEEL_SPEED__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__deva_control_msgs__msg__WheelSpeed __attribute__((deprecated))
#else
# define DEPRECATED__deva_control_msgs__msg__WheelSpeed __declspec(deprecated)
#endif

namespace deva_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelSpeed_
{
  using Type = WheelSpeed_<ContainerAllocator>;

  explicit WheelSpeed_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->loop_count_start = 0ul;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->loop_count_start = 0ul;
      this->loop_count_end = 0ul;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->wheelspeed_rc_valid.begin(), this->wheelspeed_rc_valid.end(), false);
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->wheelspeed_rc.begin(), this->wheelspeed_rc.end(), 0ul);
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->loop_count_end = 0ul;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->wheelspeed_rc_valid.begin(), this->wheelspeed_rc_valid.end(), false);
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->wheelspeed_rc.begin(), this->wheelspeed_rc.end(), 0ul);
    }
  }

  explicit WheelSpeed_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    wheelspeed_rc_valid(_alloc),
    wheelspeed_rc(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->loop_count_start = 0ul;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->loop_count_start = 0ul;
      this->loop_count_end = 0ul;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->wheelspeed_rc_valid.begin(), this->wheelspeed_rc_valid.end(), false);
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->wheelspeed_rc.begin(), this->wheelspeed_rc.end(), 0ul);
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->loop_count_end = 0ul;
      std::fill<typename std::array<bool, 4>::iterator, bool>(this->wheelspeed_rc_valid.begin(), this->wheelspeed_rc_valid.end(), false);
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->wheelspeed_rc.begin(), this->wheelspeed_rc.end(), 0ul);
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _loop_count_start_type =
    uint32_t;
  _loop_count_start_type loop_count_start;
  using _loop_count_end_type =
    uint32_t;
  _loop_count_end_type loop_count_end;
  using _wheelspeed_rc_valid_type =
    std::array<bool, 4>;
  _wheelspeed_rc_valid_type wheelspeed_rc_valid;
  using _wheelspeed_rc_type =
    std::array<uint32_t, 4>;
  _wheelspeed_rc_type wheelspeed_rc;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__loop_count_start(
    const uint32_t & _arg)
  {
    this->loop_count_start = _arg;
    return *this;
  }
  Type & set__loop_count_end(
    const uint32_t & _arg)
  {
    this->loop_count_end = _arg;
    return *this;
  }
  Type & set__wheelspeed_rc_valid(
    const std::array<bool, 4> & _arg)
  {
    this->wheelspeed_rc_valid = _arg;
    return *this;
  }
  Type & set__wheelspeed_rc(
    const std::array<uint32_t, 4> & _arg)
  {
    this->wheelspeed_rc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_control_msgs::msg::WheelSpeed_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_control_msgs::msg::WheelSpeed_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_control_msgs::msg::WheelSpeed_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_control_msgs::msg::WheelSpeed_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_control_msgs::msg::WheelSpeed_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_control_msgs::msg::WheelSpeed_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_control_msgs::msg::WheelSpeed_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_control_msgs::msg::WheelSpeed_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_control_msgs::msg::WheelSpeed_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_control_msgs::msg::WheelSpeed_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_control_msgs__msg__WheelSpeed
    std::shared_ptr<deva_control_msgs::msg::WheelSpeed_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_control_msgs__msg__WheelSpeed
    std::shared_ptr<deva_control_msgs::msg::WheelSpeed_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelSpeed_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->loop_count_start != other.loop_count_start) {
      return false;
    }
    if (this->loop_count_end != other.loop_count_end) {
      return false;
    }
    if (this->wheelspeed_rc_valid != other.wheelspeed_rc_valid) {
      return false;
    }
    if (this->wheelspeed_rc != other.wheelspeed_rc) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelSpeed_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelSpeed_

// alias to use template instance with default allocator
using WheelSpeed =
  deva_control_msgs::msg::WheelSpeed_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__WHEEL_SPEED__STRUCT_HPP_
