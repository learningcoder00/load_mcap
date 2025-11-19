// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_control_msgs:msg/ControlValidLimit.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_VALID_LIMIT__STRUCT_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_VALID_LIMIT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_control_msgs__msg__ControlValidLimit __attribute__((deprecated))
#else
# define DEPRECATED__deva_control_msgs__msg__ControlValidLimit __declspec(deprecated)
#endif

namespace deva_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlValidLimit_
{
  using Type = ControlValidLimit_<ContainerAllocator>;

  explicit ControlValidLimit_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->limit_valid = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->limit_valid = false;
      this->upper_limit = 0.0;
      this->lower_limit = 0.0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->upper_limit = 0.0;
      this->lower_limit = 0.0;
    }
  }

  explicit ControlValidLimit_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->limit_valid = false;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->limit_valid = false;
      this->upper_limit = 0.0;
      this->lower_limit = 0.0;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->upper_limit = 0.0;
      this->lower_limit = 0.0;
    }
  }

  // field types and members
  using _limit_valid_type =
    bool;
  _limit_valid_type limit_valid;
  using _upper_limit_type =
    double;
  _upper_limit_type upper_limit;
  using _lower_limit_type =
    double;
  _lower_limit_type lower_limit;

  // setters for named parameter idiom
  Type & set__limit_valid(
    const bool & _arg)
  {
    this->limit_valid = _arg;
    return *this;
  }
  Type & set__upper_limit(
    const double & _arg)
  {
    this->upper_limit = _arg;
    return *this;
  }
  Type & set__lower_limit(
    const double & _arg)
  {
    this->lower_limit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_control_msgs::msg::ControlValidLimit_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_control_msgs::msg::ControlValidLimit_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_control_msgs::msg::ControlValidLimit_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_control_msgs::msg::ControlValidLimit_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_control_msgs::msg::ControlValidLimit_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_control_msgs::msg::ControlValidLimit_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_control_msgs::msg::ControlValidLimit_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_control_msgs::msg::ControlValidLimit_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_control_msgs::msg::ControlValidLimit_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_control_msgs::msg::ControlValidLimit_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_control_msgs__msg__ControlValidLimit
    std::shared_ptr<deva_control_msgs::msg::ControlValidLimit_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_control_msgs__msg__ControlValidLimit
    std::shared_ptr<deva_control_msgs::msg::ControlValidLimit_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlValidLimit_ & other) const
  {
    if (this->limit_valid != other.limit_valid) {
      return false;
    }
    if (this->upper_limit != other.upper_limit) {
      return false;
    }
    if (this->lower_limit != other.lower_limit) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlValidLimit_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlValidLimit_

// alias to use template instance with default allocator
using ControlValidLimit =
  deva_control_msgs::msg::ControlValidLimit_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__CONTROL_VALID_LIMIT__STRUCT_HPP_
