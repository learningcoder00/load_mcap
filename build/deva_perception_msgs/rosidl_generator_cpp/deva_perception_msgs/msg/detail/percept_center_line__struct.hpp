// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/PerceptCenterLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPT_CENTER_LINE__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPT_CENTER_LINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'waypoints'
// Member 'bev_fork_point'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__PerceptCenterLine __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__PerceptCenterLine __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PerceptCenterLine_
{
  using Type = PerceptCenterLine_<ContainerAllocator>;

  explicit PerceptCenterLine_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bev_fork_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->center_line_property = 0;
    }
  }

  explicit PerceptCenterLine_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bev_fork_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->center_line_property = 0;
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;
  using _center_line_property_type =
    uint8_t;
  _center_line_property_type center_line_property;
  using _waypoints_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _waypoints_type waypoints;
  using _bev_fork_point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _bev_fork_point_type bev_fork_point;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__center_line_property(
    const uint8_t & _arg)
  {
    this->center_line_property = _arg;
    return *this;
  }
  Type & set__waypoints(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->waypoints = _arg;
    return *this;
  }
  Type & set__bev_fork_point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->bev_fork_point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::PerceptCenterLine_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::PerceptCenterLine_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::PerceptCenterLine_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::PerceptCenterLine_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::PerceptCenterLine_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::PerceptCenterLine_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::PerceptCenterLine_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::PerceptCenterLine_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::PerceptCenterLine_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::PerceptCenterLine_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__PerceptCenterLine
    std::shared_ptr<deva_perception_msgs::msg::PerceptCenterLine_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__PerceptCenterLine
    std::shared_ptr<deva_perception_msgs::msg::PerceptCenterLine_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PerceptCenterLine_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->center_line_property != other.center_line_property) {
      return false;
    }
    if (this->waypoints != other.waypoints) {
      return false;
    }
    if (this->bev_fork_point != other.bev_fork_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const PerceptCenterLine_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PerceptCenterLine_

// alias to use template instance with default allocator
using PerceptCenterLine =
  deva_perception_msgs::msg::PerceptCenterLine_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__PERCEPT_CENTER_LINE__STRUCT_HPP_
