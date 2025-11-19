// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/EnvPoint.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_POINT__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'left_lan_bound'
// Member 'right_lane_bound'
// Member 'left_road_bound'
// Member 'right_road_bound'
#include "environment_model_msgs/msg/detail/bound_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__EnvPoint __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__EnvPoint __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnvPoint_
{
  using Type = EnvPoint_<ContainerAllocator>;

  explicit EnvPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_lan_bound(_init),
    right_lane_bound(_init),
    left_road_bound(_init),
    right_road_bound(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->heading = 0.0;
      this->s = 0.0;
      this->kappa = 0.0;
      this->speed_limit = 0.0;
      this->enum_lane_type = 0;
      this->enum_road_type = 0;
    }
  }

  explicit EnvPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : left_lan_bound(_alloc, _init),
    right_lane_bound(_alloc, _init),
    left_road_bound(_alloc, _init),
    right_road_bound(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->heading = 0.0;
      this->s = 0.0;
      this->kappa = 0.0;
      this->speed_limit = 0.0;
      this->enum_lane_type = 0;
      this->enum_road_type = 0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _heading_type =
    double;
  _heading_type heading;
  using _s_type =
    double;
  _s_type s;
  using _kappa_type =
    double;
  _kappa_type kappa;
  using _left_lan_bound_type =
    environment_model_msgs::msg::BoundPoint_<ContainerAllocator>;
  _left_lan_bound_type left_lan_bound;
  using _right_lane_bound_type =
    environment_model_msgs::msg::BoundPoint_<ContainerAllocator>;
  _right_lane_bound_type right_lane_bound;
  using _left_road_bound_type =
    environment_model_msgs::msg::BoundPoint_<ContainerAllocator>;
  _left_road_bound_type left_road_bound;
  using _right_road_bound_type =
    environment_model_msgs::msg::BoundPoint_<ContainerAllocator>;
  _right_road_bound_type right_road_bound;
  using _speed_limit_type =
    double;
  _speed_limit_type speed_limit;
  using _enum_lane_type_type =
    uint8_t;
  _enum_lane_type_type enum_lane_type;
  using _enum_road_type_type =
    uint8_t;
  _enum_road_type_type enum_road_type;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__s(
    const double & _arg)
  {
    this->s = _arg;
    return *this;
  }
  Type & set__kappa(
    const double & _arg)
  {
    this->kappa = _arg;
    return *this;
  }
  Type & set__left_lan_bound(
    const environment_model_msgs::msg::BoundPoint_<ContainerAllocator> & _arg)
  {
    this->left_lan_bound = _arg;
    return *this;
  }
  Type & set__right_lane_bound(
    const environment_model_msgs::msg::BoundPoint_<ContainerAllocator> & _arg)
  {
    this->right_lane_bound = _arg;
    return *this;
  }
  Type & set__left_road_bound(
    const environment_model_msgs::msg::BoundPoint_<ContainerAllocator> & _arg)
  {
    this->left_road_bound = _arg;
    return *this;
  }
  Type & set__right_road_bound(
    const environment_model_msgs::msg::BoundPoint_<ContainerAllocator> & _arg)
  {
    this->right_road_bound = _arg;
    return *this;
  }
  Type & set__speed_limit(
    const double & _arg)
  {
    this->speed_limit = _arg;
    return *this;
  }
  Type & set__enum_lane_type(
    const uint8_t & _arg)
  {
    this->enum_lane_type = _arg;
    return *this;
  }
  Type & set__enum_road_type(
    const uint8_t & _arg)
  {
    this->enum_road_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_model_msgs::msg::EnvPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::EnvPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::EnvPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::EnvPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::EnvPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::EnvPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::EnvPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::EnvPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::EnvPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::EnvPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__EnvPoint
    std::shared_ptr<environment_model_msgs::msg::EnvPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__EnvPoint
    std::shared_ptr<environment_model_msgs::msg::EnvPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnvPoint_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->s != other.s) {
      return false;
    }
    if (this->kappa != other.kappa) {
      return false;
    }
    if (this->left_lan_bound != other.left_lan_bound) {
      return false;
    }
    if (this->right_lane_bound != other.right_lane_bound) {
      return false;
    }
    if (this->left_road_bound != other.left_road_bound) {
      return false;
    }
    if (this->right_road_bound != other.right_road_bound) {
      return false;
    }
    if (this->speed_limit != other.speed_limit) {
      return false;
    }
    if (this->enum_lane_type != other.enum_lane_type) {
      return false;
    }
    if (this->enum_road_type != other.enum_road_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnvPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnvPoint_

// alias to use template instance with default allocator
using EnvPoint =
  environment_model_msgs::msg::EnvPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_POINT__STRUCT_HPP_
