// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/RVObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_OBSTACLE__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'bbox2d'
#include "deva_common_msgs/msg/detail/bounding_box2d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__RVObstacle __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__RVObstacle __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RVObstacle_
{
  using Type = RVObstacle_<ContainerAllocator>;

  explicit RVObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bbox2d(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0ul;
      this->score = 0.0;
      this->distance = 0.0;
    }
  }

  explicit RVObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bbox2d(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0ul;
      this->score = 0.0;
      this->distance = 0.0;
    }
  }

  // field types and members
  using _type_type =
    uint32_t;
  _type_type type;
  using _score_type =
    double;
  _score_type score;
  using _distance_type =
    double;
  _distance_type distance;
  using _bbox2d_type =
    deva_common_msgs::msg::BoundingBox2d_<ContainerAllocator>;
  _bbox2d_type bbox2d;

  // setters for named parameter idiom
  Type & set__type(
    const uint32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__score(
    const double & _arg)
  {
    this->score = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__bbox2d(
    const deva_common_msgs::msg::BoundingBox2d_<ContainerAllocator> & _arg)
  {
    this->bbox2d = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t CAR =
    0u;
  static constexpr uint32_t BUS =
    1u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::RVObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::RVObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RVObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RVObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RVObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RVObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RVObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RVObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RVObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RVObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__RVObstacle
    std::shared_ptr<deva_perception_msgs::msg::RVObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__RVObstacle
    std::shared_ptr<deva_perception_msgs::msg::RVObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RVObstacle_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->bbox2d != other.bbox2d) {
      return false;
    }
    return true;
  }
  bool operator!=(const RVObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RVObstacle_

// alias to use template instance with default allocator
using RVObstacle =
  deva_perception_msgs::msg::RVObstacle_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RVObstacle_<ContainerAllocator>::CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t RVObstacle_<ContainerAllocator>::BUS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_OBSTACLE__STRUCT_HPP_
