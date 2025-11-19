// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/AEBObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'obstacle'
#include "deva_perception_msgs/msg/detail/obstacle_common__struct.hpp"
// Member 'head_bbox'
// Member 'tail_bbox'
#include "deva_common_msgs/msg/detail/bounding_box2d__struct.hpp"
// Member 'ground_points'
#include "deva_common_msgs/msg/detail/ground_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__AEBObstacle __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__AEBObstacle __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AEBObstacle_
{
  using Type = AEBObstacle_<ContainerAllocator>;

  explicit AEBObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obstacle(_init),
    head_bbox(_init),
    tail_bbox(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obstacle_type = 0;
      this->full_occ_score = 0.0f;
      this->head_occ_score = 0.0f;
      this->tail_occ_score = 0.0f;
      this->full_trunc_score = 0.0f;
      this->head_trunc_score = 0.0f;
      this->tail_trunc_score = 0.0f;
    }
  }

  explicit AEBObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obstacle(_alloc, _init),
    head_bbox(_alloc, _init),
    tail_bbox(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obstacle_type = 0;
      this->full_occ_score = 0.0f;
      this->head_occ_score = 0.0f;
      this->tail_occ_score = 0.0f;
      this->full_trunc_score = 0.0f;
      this->head_trunc_score = 0.0f;
      this->tail_trunc_score = 0.0f;
    }
  }

  // field types and members
  using _obstacle_type =
    deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator>;
  _obstacle_type obstacle;
  using _obstacle_type_type =
    uint8_t;
  _obstacle_type_type obstacle_type;
  using _head_bbox_type =
    deva_common_msgs::msg::BoundingBox2d_<ContainerAllocator>;
  _head_bbox_type head_bbox;
  using _tail_bbox_type =
    deva_common_msgs::msg::BoundingBox2d_<ContainerAllocator>;
  _tail_bbox_type tail_bbox;
  using _ground_points_type =
    std::vector<deva_common_msgs::msg::GroundPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::GroundPoint_<ContainerAllocator>>>;
  _ground_points_type ground_points;
  using _full_occ_score_type =
    float;
  _full_occ_score_type full_occ_score;
  using _head_occ_score_type =
    float;
  _head_occ_score_type head_occ_score;
  using _tail_occ_score_type =
    float;
  _tail_occ_score_type tail_occ_score;
  using _full_trunc_score_type =
    float;
  _full_trunc_score_type full_trunc_score;
  using _head_trunc_score_type =
    float;
  _head_trunc_score_type head_trunc_score;
  using _tail_trunc_score_type =
    float;
  _tail_trunc_score_type tail_trunc_score;

  // setters for named parameter idiom
  Type & set__obstacle(
    const deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator> & _arg)
  {
    this->obstacle = _arg;
    return *this;
  }
  Type & set__obstacle_type(
    const uint8_t & _arg)
  {
    this->obstacle_type = _arg;
    return *this;
  }
  Type & set__head_bbox(
    const deva_common_msgs::msg::BoundingBox2d_<ContainerAllocator> & _arg)
  {
    this->head_bbox = _arg;
    return *this;
  }
  Type & set__tail_bbox(
    const deva_common_msgs::msg::BoundingBox2d_<ContainerAllocator> & _arg)
  {
    this->tail_bbox = _arg;
    return *this;
  }
  Type & set__ground_points(
    const std::vector<deva_common_msgs::msg::GroundPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_common_msgs::msg::GroundPoint_<ContainerAllocator>>> & _arg)
  {
    this->ground_points = _arg;
    return *this;
  }
  Type & set__full_occ_score(
    const float & _arg)
  {
    this->full_occ_score = _arg;
    return *this;
  }
  Type & set__head_occ_score(
    const float & _arg)
  {
    this->head_occ_score = _arg;
    return *this;
  }
  Type & set__tail_occ_score(
    const float & _arg)
  {
    this->tail_occ_score = _arg;
    return *this;
  }
  Type & set__full_trunc_score(
    const float & _arg)
  {
    this->full_trunc_score = _arg;
    return *this;
  }
  Type & set__head_trunc_score(
    const float & _arg)
  {
    this->head_trunc_score = _arg;
    return *this;
  }
  Type & set__tail_trunc_score(
    const float & _arg)
  {
    this->tail_trunc_score = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CAR =
    0u;
  static constexpr uint8_t TRUCK =
    1u;
  static constexpr uint8_t CONSTRUCTION_VEHICLE =
    2u;
  static constexpr uint8_t BUS =
    3u;
  static constexpr uint8_t MOTORCYCLE =
    4u;
  static constexpr uint8_t BICYCLE =
    5u;
  static constexpr uint8_t TRICYCLE =
    6u;
  static constexpr uint8_t CYCLIST =
    7u;
  static constexpr uint8_t PEDESTRIAN =
    8u;
  static constexpr uint8_t UNKNOWN =
    9u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::AEBObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::AEBObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::AEBObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::AEBObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::AEBObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::AEBObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::AEBObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::AEBObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::AEBObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::AEBObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__AEBObstacle
    std::shared_ptr<deva_perception_msgs::msg::AEBObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__AEBObstacle
    std::shared_ptr<deva_perception_msgs::msg::AEBObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AEBObstacle_ & other) const
  {
    if (this->obstacle != other.obstacle) {
      return false;
    }
    if (this->obstacle_type != other.obstacle_type) {
      return false;
    }
    if (this->head_bbox != other.head_bbox) {
      return false;
    }
    if (this->tail_bbox != other.tail_bbox) {
      return false;
    }
    if (this->ground_points != other.ground_points) {
      return false;
    }
    if (this->full_occ_score != other.full_occ_score) {
      return false;
    }
    if (this->head_occ_score != other.head_occ_score) {
      return false;
    }
    if (this->tail_occ_score != other.tail_occ_score) {
      return false;
    }
    if (this->full_trunc_score != other.full_trunc_score) {
      return false;
    }
    if (this->head_trunc_score != other.head_trunc_score) {
      return false;
    }
    if (this->tail_trunc_score != other.tail_trunc_score) {
      return false;
    }
    return true;
  }
  bool operator!=(const AEBObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AEBObstacle_

// alias to use template instance with default allocator
using AEBObstacle =
  deva_perception_msgs::msg::AEBObstacle_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AEBObstacle_<ContainerAllocator>::CAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AEBObstacle_<ContainerAllocator>::TRUCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AEBObstacle_<ContainerAllocator>::CONSTRUCTION_VEHICLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AEBObstacle_<ContainerAllocator>::BUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AEBObstacle_<ContainerAllocator>::MOTORCYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AEBObstacle_<ContainerAllocator>::BICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AEBObstacle_<ContainerAllocator>::TRICYCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AEBObstacle_<ContainerAllocator>::CYCLIST;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AEBObstacle_<ContainerAllocator>::PEDESTRIAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AEBObstacle_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__AEB_OBSTACLE__STRUCT_HPP_
