// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/NaviScore.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__NAVI_SCORE__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__NAVI_SCORE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__NaviScore __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__NaviScore __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NaviScore_
{
  using Type = NaviScore_<ContainerAllocator>;

  explicit NaviScore_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_route_signal = false;
      this->static_score = 0.0;
      this->is_on_route = false;
      this->dis2junction = 0.0;
    }
  }

  explicit NaviScore_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_route_signal = false;
      this->static_score = 0.0;
      this->is_on_route = false;
      this->dis2junction = 0.0;
    }
  }

  // field types and members
  using _has_route_signal_type =
    bool;
  _has_route_signal_type has_route_signal;
  using _static_score_type =
    double;
  _static_score_type static_score;
  using _is_on_route_type =
    bool;
  _is_on_route_type is_on_route;
  using _dis2junction_type =
    double;
  _dis2junction_type dis2junction;

  // setters for named parameter idiom
  Type & set__has_route_signal(
    const bool & _arg)
  {
    this->has_route_signal = _arg;
    return *this;
  }
  Type & set__static_score(
    const double & _arg)
  {
    this->static_score = _arg;
    return *this;
  }
  Type & set__is_on_route(
    const bool & _arg)
  {
    this->is_on_route = _arg;
    return *this;
  }
  Type & set__dis2junction(
    const double & _arg)
  {
    this->dis2junction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_model_msgs::msg::NaviScore_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::NaviScore_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::NaviScore_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::NaviScore_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::NaviScore_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::NaviScore_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::NaviScore_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::NaviScore_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::NaviScore_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::NaviScore_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__NaviScore
    std::shared_ptr<environment_model_msgs::msg::NaviScore_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__NaviScore
    std::shared_ptr<environment_model_msgs::msg::NaviScore_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NaviScore_ & other) const
  {
    if (this->has_route_signal != other.has_route_signal) {
      return false;
    }
    if (this->static_score != other.static_score) {
      return false;
    }
    if (this->is_on_route != other.is_on_route) {
      return false;
    }
    if (this->dis2junction != other.dis2junction) {
      return false;
    }
    return true;
  }
  bool operator!=(const NaviScore_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NaviScore_

// alias to use template instance with default allocator
using NaviScore =
  environment_model_msgs::msg::NaviScore_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__NAVI_SCORE__STRUCT_HPP_
