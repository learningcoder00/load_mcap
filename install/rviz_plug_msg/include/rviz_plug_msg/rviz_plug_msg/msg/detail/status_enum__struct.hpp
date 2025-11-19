// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rviz_plug_msg:msg/StatusEnum.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__STATUS_ENUM__STRUCT_HPP_
#define RVIZ_PLUG_MSG__MSG__DETAIL__STATUS_ENUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rviz_plug_msg__msg__StatusEnum __attribute__((deprecated))
#else
# define DEPRECATED__rviz_plug_msg__msg__StatusEnum __declspec(deprecated)
#endif

namespace rviz_plug_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StatusEnum_
{
  using Type = StatusEnum_<ContainerAllocator>;

  explicit StatusEnum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit StatusEnum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t AUTO_MODE =
    1u;
  static constexpr uint8_t LATE_MODE =
    2u;
  static constexpr uint8_t LONGIT_MODE =
    3u;
  static constexpr uint8_t ORIGINAL =
    4u;
  static constexpr uint8_t EXITING =
    5u;

  // pointer types
  using RawPtr =
    rviz_plug_msg::msg::StatusEnum_<ContainerAllocator> *;
  using ConstRawPtr =
    const rviz_plug_msg::msg::StatusEnum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rviz_plug_msg::msg::StatusEnum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rviz_plug_msg::msg::StatusEnum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rviz_plug_msg::msg::StatusEnum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rviz_plug_msg::msg::StatusEnum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rviz_plug_msg::msg::StatusEnum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rviz_plug_msg::msg::StatusEnum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rviz_plug_msg::msg::StatusEnum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rviz_plug_msg::msg::StatusEnum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rviz_plug_msg__msg__StatusEnum
    std::shared_ptr<rviz_plug_msg::msg::StatusEnum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rviz_plug_msg__msg__StatusEnum
    std::shared_ptr<rviz_plug_msg::msg::StatusEnum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StatusEnum_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const StatusEnum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StatusEnum_

// alias to use template instance with default allocator
using StatusEnum =
  rviz_plug_msg::msg::StatusEnum_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StatusEnum_<ContainerAllocator>::AUTO_MODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StatusEnum_<ContainerAllocator>::LATE_MODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StatusEnum_<ContainerAllocator>::LONGIT_MODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StatusEnum_<ContainerAllocator>::ORIGINAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StatusEnum_<ContainerAllocator>::EXITING;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rviz_plug_msg

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__STATUS_ENUM__STRUCT_HPP_
