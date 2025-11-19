// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pos'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs__msg__PathPoint __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs__msg__PathPoint __declspec(deprecated)
#endif

namespace deva_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathPoint_
{
  using Type = PathPoint_<ContainerAllocator>;

  explicit PathPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0;
      this->speed = 0.0;
      this->theta = 0.0;
      this->kappa = 0.0;
      this->s = 0.0;
      this->dkappa = 0.0;
      this->ddkappa = 0.0;
      this->lane_id = "";
      this->x_derivative = 0.0;
      this->y_derivative = 0.0;
      this->lane_width = 0.0;
      this->is_junction = false;
      this->distance2obs = 0.0;
    }
  }

  explicit PathPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos(_alloc, _init),
    lane_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heading = 0.0;
      this->speed = 0.0;
      this->theta = 0.0;
      this->kappa = 0.0;
      this->s = 0.0;
      this->dkappa = 0.0;
      this->ddkappa = 0.0;
      this->lane_id = "";
      this->x_derivative = 0.0;
      this->y_derivative = 0.0;
      this->lane_width = 0.0;
      this->is_junction = false;
      this->distance2obs = 0.0;
    }
  }

  // field types and members
  using _pos_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _pos_type pos;
  using _heading_type =
    double;
  _heading_type heading;
  using _speed_type =
    double;
  _speed_type speed;
  using _theta_type =
    double;
  _theta_type theta;
  using _kappa_type =
    double;
  _kappa_type kappa;
  using _s_type =
    double;
  _s_type s;
  using _dkappa_type =
    double;
  _dkappa_type dkappa;
  using _ddkappa_type =
    double;
  _ddkappa_type ddkappa;
  using _lane_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lane_id_type lane_id;
  using _x_derivative_type =
    double;
  _x_derivative_type x_derivative;
  using _y_derivative_type =
    double;
  _y_derivative_type y_derivative;
  using _lane_width_type =
    double;
  _lane_width_type lane_width;
  using _is_junction_type =
    bool;
  _is_junction_type is_junction;
  using _distance2obs_type =
    double;
  _distance2obs_type distance2obs;

  // setters for named parameter idiom
  Type & set__pos(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__kappa(
    const double & _arg)
  {
    this->kappa = _arg;
    return *this;
  }
  Type & set__s(
    const double & _arg)
  {
    this->s = _arg;
    return *this;
  }
  Type & set__dkappa(
    const double & _arg)
  {
    this->dkappa = _arg;
    return *this;
  }
  Type & set__ddkappa(
    const double & _arg)
  {
    this->ddkappa = _arg;
    return *this;
  }
  Type & set__lane_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lane_id = _arg;
    return *this;
  }
  Type & set__x_derivative(
    const double & _arg)
  {
    this->x_derivative = _arg;
    return *this;
  }
  Type & set__y_derivative(
    const double & _arg)
  {
    this->y_derivative = _arg;
    return *this;
  }
  Type & set__lane_width(
    const double & _arg)
  {
    this->lane_width = _arg;
    return *this;
  }
  Type & set__is_junction(
    const bool & _arg)
  {
    this->is_junction = _arg;
    return *this;
  }
  Type & set__distance2obs(
    const double & _arg)
  {
    this->distance2obs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs::msg::PathPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs::msg::PathPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::PathPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::PathPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::PathPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::PathPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::PathPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::PathPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::PathPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::PathPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs__msg__PathPoint
    std::shared_ptr<deva_planning_msgs::msg::PathPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs__msg__PathPoint
    std::shared_ptr<deva_planning_msgs::msg::PathPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathPoint_ & other) const
  {
    if (this->pos != other.pos) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->kappa != other.kappa) {
      return false;
    }
    if (this->s != other.s) {
      return false;
    }
    if (this->dkappa != other.dkappa) {
      return false;
    }
    if (this->ddkappa != other.ddkappa) {
      return false;
    }
    if (this->lane_id != other.lane_id) {
      return false;
    }
    if (this->x_derivative != other.x_derivative) {
      return false;
    }
    if (this->y_derivative != other.y_derivative) {
      return false;
    }
    if (this->lane_width != other.lane_width) {
      return false;
    }
    if (this->is_junction != other.is_junction) {
      return false;
    }
    if (this->distance2obs != other.distance2obs) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathPoint_

// alias to use template instance with default allocator
using PathPoint =
  deva_planning_msgs::msg::PathPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_HPP_
