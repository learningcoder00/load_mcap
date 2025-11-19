// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/RoadClass.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_CLASS__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_CLASS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__RoadClass __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__RoadClass __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoadClass_
{
  using Type = RoadClass_<ContainerAllocator>;

  explicit RoadClass_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit RoadClass_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t ROAD_CLASS_EXPRESSWAY =
    0u;
  static constexpr uint8_t ROAD_CLASS_NATIONAL =
    1u;
  static constexpr uint8_t ROAD_CLASS_PROVINCIAL =
    2u;
  static constexpr uint8_t ROAD_CLASS_COUNTY =
    3u;
  static constexpr uint8_t ROAD_CLASS_TOWNSHIP =
    4u;
  static constexpr uint8_t ROAD_CLASS_VILLAGE_INTERNAL =
    5u;
  static constexpr uint8_t ROAD_CLASS_MAIN_STREET_EXPRESS =
    6u;
  static constexpr uint8_t ROAD_CLASS_MAIN =
    7u;
  static constexpr uint8_t ROAD_CLASS_SECONDARY =
    8u;
  static constexpr uint8_t ROAD_CLASS_NORMAL =
    9u;
  static constexpr uint8_t ROAD_CLASS_NON_NAVIGATION =
    10u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::RoadClass_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::RoadClass_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RoadClass_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RoadClass_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RoadClass_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RoadClass_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RoadClass_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RoadClass_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RoadClass_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RoadClass_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__RoadClass
    std::shared_ptr<deva_perception_msgs::msg::RoadClass_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__RoadClass
    std::shared_ptr<deva_perception_msgs::msg::RoadClass_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoadClass_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoadClass_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoadClass_

// alias to use template instance with default allocator
using RoadClass =
  deva_perception_msgs::msg::RoadClass_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadClass_<ContainerAllocator>::ROAD_CLASS_EXPRESSWAY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadClass_<ContainerAllocator>::ROAD_CLASS_NATIONAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadClass_<ContainerAllocator>::ROAD_CLASS_PROVINCIAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadClass_<ContainerAllocator>::ROAD_CLASS_COUNTY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadClass_<ContainerAllocator>::ROAD_CLASS_TOWNSHIP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadClass_<ContainerAllocator>::ROAD_CLASS_VILLAGE_INTERNAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadClass_<ContainerAllocator>::ROAD_CLASS_MAIN_STREET_EXPRESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadClass_<ContainerAllocator>::ROAD_CLASS_MAIN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadClass_<ContainerAllocator>::ROAD_CLASS_SECONDARY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadClass_<ContainerAllocator>::ROAD_CLASS_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RoadClass_<ContainerAllocator>::ROAD_CLASS_NON_NAVIGATION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_CLASS__STRUCT_HPP_
