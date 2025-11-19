// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/WayLink.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__WAY_LINK__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__WAY_LINK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'car_coord_points'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'pixel_points'
#include "deva_common_msgs/msg/detail/point2d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__WayLink __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__WayLink __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WayLink_
{
  using Type = WayLink_<ContainerAllocator>;

  explicit WayLink_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit WayLink_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _car_coord_points_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _car_coord_points_type car_coord_points;
  using _corner_points_idx_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _corner_points_idx_type corner_points_idx;
  using _point_confidences_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _point_confidences_type point_confidences;
  using _corner_confidences_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _corner_confidences_type corner_confidences;
  using _pixel_points_type =
    std::vector<deva_common_msgs::msg::Point2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::Point2d_<ContainerAllocator>>>;
  _pixel_points_type pixel_points;

  // setters for named parameter idiom
  Type & set__car_coord_points(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->car_coord_points = _arg;
    return *this;
  }
  Type & set__corner_points_idx(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->corner_points_idx = _arg;
    return *this;
  }
  Type & set__point_confidences(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->point_confidences = _arg;
    return *this;
  }
  Type & set__corner_confidences(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->corner_confidences = _arg;
    return *this;
  }
  Type & set__pixel_points(
    const std::vector<deva_common_msgs::msg::Point2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::Point2d_<ContainerAllocator>>> & _arg)
  {
    this->pixel_points = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::WayLink_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::WayLink_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::WayLink_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::WayLink_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::WayLink_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::WayLink_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::WayLink_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::WayLink_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::WayLink_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::WayLink_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__WayLink
    std::shared_ptr<deva_perception_msgs::msg::WayLink_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__WayLink
    std::shared_ptr<deva_perception_msgs::msg::WayLink_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WayLink_ & other) const
  {
    if (this->car_coord_points != other.car_coord_points) {
      return false;
    }
    if (this->corner_points_idx != other.corner_points_idx) {
      return false;
    }
    if (this->point_confidences != other.point_confidences) {
      return false;
    }
    if (this->corner_confidences != other.corner_confidences) {
      return false;
    }
    if (this->pixel_points != other.pixel_points) {
      return false;
    }
    return true;
  }
  bool operator!=(const WayLink_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WayLink_

// alias to use template instance with default allocator
using WayLink =
  deva_perception_msgs::msg::WayLink_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__WAY_LINK__STRUCT_HPP_
