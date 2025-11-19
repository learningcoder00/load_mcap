// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/FixedObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__FIXED_OBSTACLE__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__FIXED_OBSTACLE__STRUCT_HPP_

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
// Member 'extra_infos'
#include "deva_perception_msgs/msg/detail/extra_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__FixedObstacle __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__FixedObstacle __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FixedObstacle_
{
  using Type = FixedObstacle_<ContainerAllocator>;

  explicit FixedObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obstacle(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fixed_obstacle_type = 0;
      this->det_score = 0.0f;
      this->source = 0;
    }
  }

  explicit FixedObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obstacle(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fixed_obstacle_type = 0;
      this->det_score = 0.0f;
      this->source = 0;
    }
  }

  // field types and members
  using _obstacle_type =
    deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator>;
  _obstacle_type obstacle;
  using _fixed_obstacle_type_type =
    uint8_t;
  _fixed_obstacle_type_type fixed_obstacle_type;
  using _det_score_type =
    float;
  _det_score_type det_score;
  using _source_type =
    uint8_t;
  _source_type source;
  using _match_indices_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _match_indices_type match_indices;
  using _extra_infos_type =
    std::vector<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>>>;
  _extra_infos_type extra_infos;

  // setters for named parameter idiom
  Type & set__obstacle(
    const deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator> & _arg)
  {
    this->obstacle = _arg;
    return *this;
  }
  Type & set__fixed_obstacle_type(
    const uint8_t & _arg)
  {
    this->fixed_obstacle_type = _arg;
    return *this;
  }
  Type & set__det_score(
    const float & _arg)
  {
    this->det_score = _arg;
    return *this;
  }
  Type & set__source(
    const uint8_t & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__match_indices(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->match_indices = _arg;
    return *this;
  }
  Type & set__extra_infos(
    const std::vector<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::ExtraInfo_<ContainerAllocator>>> & _arg)
  {
    this->extra_infos = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t CONE =
    1u;
  static constexpr uint8_t BAR =
    2u;
  static constexpr uint8_t BUCKET =
    3u;
  static constexpr uint8_t WATERHORSE =
    4u;
  static constexpr uint8_t CONSTRUCTION_SIGN =
    5u;
  static constexpr uint8_t TRIANGLE =
    6u;
  static constexpr uint8_t SPEED_BUMP =
    7u;
  static constexpr uint8_t BRAKE_LEVER =
    8u;
  static constexpr uint8_t FENCE =
    9u;
  static constexpr uint8_t COVER =
    10u;
  static constexpr uint8_t FOV120 =
    0u;
  static constexpr uint8_t FOV30 =
    1u;
  static constexpr uint8_t TRANS =
    2u;
  static constexpr uint8_t FUSION =
    3u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::FixedObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::FixedObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::FixedObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::FixedObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::FixedObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::FixedObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::FixedObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::FixedObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::FixedObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::FixedObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__FixedObstacle
    std::shared_ptr<deva_perception_msgs::msg::FixedObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__FixedObstacle
    std::shared_ptr<deva_perception_msgs::msg::FixedObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FixedObstacle_ & other) const
  {
    if (this->obstacle != other.obstacle) {
      return false;
    }
    if (this->fixed_obstacle_type != other.fixed_obstacle_type) {
      return false;
    }
    if (this->det_score != other.det_score) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->match_indices != other.match_indices) {
      return false;
    }
    if (this->extra_infos != other.extra_infos) {
      return false;
    }
    return true;
  }
  bool operator!=(const FixedObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FixedObstacle_

// alias to use template instance with default allocator
using FixedObstacle =
  deva_perception_msgs::msg::FixedObstacle_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedObstacle_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedObstacle_<ContainerAllocator>::CONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedObstacle_<ContainerAllocator>::BAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedObstacle_<ContainerAllocator>::BUCKET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedObstacle_<ContainerAllocator>::WATERHORSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedObstacle_<ContainerAllocator>::CONSTRUCTION_SIGN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedObstacle_<ContainerAllocator>::TRIANGLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedObstacle_<ContainerAllocator>::SPEED_BUMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedObstacle_<ContainerAllocator>::BRAKE_LEVER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedObstacle_<ContainerAllocator>::FENCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedObstacle_<ContainerAllocator>::COVER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedObstacle_<ContainerAllocator>::FOV120;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedObstacle_<ContainerAllocator>::FOV30;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedObstacle_<ContainerAllocator>::TRANS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedObstacle_<ContainerAllocator>::FUSION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__FIXED_OBSTACLE__STRUCT_HPP_
