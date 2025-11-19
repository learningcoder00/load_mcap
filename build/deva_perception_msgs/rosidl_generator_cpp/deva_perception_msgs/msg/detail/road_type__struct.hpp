// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/RoadType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_TYPE__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__RoadType __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__RoadType __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoadType_
{
  using Type = RoadType_<ContainerAllocator>;

  explicit RoadType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit RoadType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations
  static constexpr uint8_t ROAD_TYPE_MAIN_ROAD =
    1u;
  static constexpr uint8_t ROAD_TYPE_INTERSECTION_INTERNAL =
    2u;
  static constexpr uint8_t ROAD_TYPE_JCT_ROAD =
    3u;
  static constexpr uint8_t ROAD_TYPE_ROUNDABOUT =
    4u;
  static constexpr uint8_t ROAD_TYPE_SERVICE_AREA =
    5u;
  static constexpr uint8_t ROAD_TYPE_RAMP =
    6u;
  static constexpr uint8_t ROAD_TYPE_SECONDARY_ROAD =
    7u;
  static constexpr uint8_t ROAD_TYPE_RAMP_AND_JCT =
    8u;
  static constexpr uint8_t ROAD_TYPE_EXIT =
    9u;
  static constexpr uint8_t ROAD_TYPE_ENTRY =
    10u;
  static constexpr uint8_t ROAD_TYPE_TYPE_A_RIGHT_TURN =
    11u;
  static constexpr uint8_t ROAD_TYPE_TYPE_B_RIGHT_TURN =
    12u;
  static constexpr uint8_t ROAD_TYPE_TYPE_A_LEFT_TURN =
    13u;
  static constexpr uint8_t ROAD_TYPE_TYPE_B_LEFT_TURN =
    14u;
  static constexpr uint8_t ROAD_TYPE_NORMAL_ROAD =
    15u;
  static constexpr uint8_t ROAD_TYPE_LEFT_RIGHT_TURN =
    16u;
  static constexpr uint8_t ROAD_TYPE_SERVICE_AREA_AND_RAMP =
    56u;
  static constexpr uint8_t ROAD_TYPE_SERVICE_AREA_AND_JCT =
    53u;
  static constexpr uint8_t ROAD_TYPE_SERVICE_AREA_RAMP_AND_JCT =
    58u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::RoadType_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::RoadType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RoadType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RoadType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RoadType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RoadType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RoadType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RoadType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RoadType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RoadType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__RoadType
    std::shared_ptr<deva_perception_msgs::msg::RoadType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__RoadType
    std::shared_ptr<deva_perception_msgs::msg::RoadType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoadType_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoadType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoadType_

// alias to use template instance with default allocator
using RoadType =
  deva_perception_msgs::msg::RoadType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadType_<ContainerAllocator>::ROAD_TYPE_MAIN_ROAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadType_<ContainerAllocator>::ROAD_TYPE_INTERSECTION_INTERNAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadType_<ContainerAllocator>::ROAD_TYPE_JCT_ROAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadType_<ContainerAllocator>::ROAD_TYPE_ROUNDABOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadType_<ContainerAllocator>::ROAD_TYPE_SERVICE_AREA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadType_<ContainerAllocator>::ROAD_TYPE_RAMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadType_<ContainerAllocator>::ROAD_TYPE_SECONDARY_ROAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadType_<ContainerAllocator>::ROAD_TYPE_RAMP_AND_JCT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadType_<ContainerAllocator>::ROAD_TYPE_EXIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadType_<ContainerAllocator>::ROAD_TYPE_ENTRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadType_<ContainerAllocator>::ROAD_TYPE_TYPE_A_RIGHT_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadType_<ContainerAllocator>::ROAD_TYPE_TYPE_B_RIGHT_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadType_<ContainerAllocator>::ROAD_TYPE_TYPE_A_LEFT_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadType_<ContainerAllocator>::ROAD_TYPE_TYPE_B_LEFT_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadType_<ContainerAllocator>::ROAD_TYPE_NORMAL_ROAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadType_<ContainerAllocator>::ROAD_TYPE_LEFT_RIGHT_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadType_<ContainerAllocator>::ROAD_TYPE_SERVICE_AREA_AND_RAMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadType_<ContainerAllocator>::ROAD_TYPE_SERVICE_AREA_AND_JCT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadType_<ContainerAllocator>::ROAD_TYPE_SERVICE_AREA_RAMP_AND_JCT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_TYPE__STRUCT_HPP_
