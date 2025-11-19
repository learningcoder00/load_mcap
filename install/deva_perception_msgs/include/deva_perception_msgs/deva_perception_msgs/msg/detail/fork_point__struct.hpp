// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/ForkPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__FORK_POINT__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__FORK_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'fork_point'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__ForkPoint __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__ForkPoint __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ForkPoint_
{
  using Type = ForkPoint_<ContainerAllocator>;

  explicit ForkPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fork_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fork_property_type = 0;
      this->fork_id = 0l;
    }
  }

  explicit ForkPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fork_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fork_property_type = 0;
      this->fork_id = 0l;
    }
  }

  // field types and members
  using _fork_property_type_type =
    uint8_t;
  _fork_property_type_type fork_property_type;
  using _fork_id_type =
    int32_t;
  _fork_id_type fork_id;
  using _lane_ids_type =
    std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>>;
  _lane_ids_type lane_ids;
  using _fork_point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _fork_point_type fork_point;

  // setters for named parameter idiom
  Type & set__fork_property_type(
    const uint8_t & _arg)
  {
    this->fork_property_type = _arg;
    return *this;
  }
  Type & set__fork_id(
    const int32_t & _arg)
  {
    this->fork_id = _arg;
    return *this;
  }
  Type & set__lane_ids(
    const std::vector<int16_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int16_t>> & _arg)
  {
    this->lane_ids = _arg;
    return *this;
  }
  Type & set__fork_point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->fork_point = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NORMAL =
    0u;
  static constexpr uint8_t SPLIT =
    1u;
  static constexpr uint8_t MERGE =
    2u;
  static constexpr uint8_t SPLIT_DIVERSION =
    3u;
  static constexpr uint8_t MERGE_DIVERSION =
    4u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::ForkPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::ForkPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::ForkPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::ForkPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::ForkPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::ForkPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::ForkPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::ForkPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::ForkPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::ForkPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__ForkPoint
    std::shared_ptr<deva_perception_msgs::msg::ForkPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__ForkPoint
    std::shared_ptr<deva_perception_msgs::msg::ForkPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ForkPoint_ & other) const
  {
    if (this->fork_property_type != other.fork_property_type) {
      return false;
    }
    if (this->fork_id != other.fork_id) {
      return false;
    }
    if (this->lane_ids != other.lane_ids) {
      return false;
    }
    if (this->fork_point != other.fork_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const ForkPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ForkPoint_

// alias to use template instance with default allocator
using ForkPoint =
  deva_perception_msgs::msg::ForkPoint_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ForkPoint_<ContainerAllocator>::NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ForkPoint_<ContainerAllocator>::SPLIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ForkPoint_<ContainerAllocator>::MERGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ForkPoint_<ContainerAllocator>::SPLIT_DIVERSION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ForkPoint_<ContainerAllocator>::MERGE_DIVERSION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__FORK_POINT__STRUCT_HPP_
