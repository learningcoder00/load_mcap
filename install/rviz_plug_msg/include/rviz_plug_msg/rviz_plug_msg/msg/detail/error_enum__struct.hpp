// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rviz_plug_msg:msg/ErrorEnum.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__ERROR_ENUM__STRUCT_HPP_
#define RVIZ_PLUG_MSG__MSG__DETAIL__ERROR_ENUM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rviz_plug_msg__msg__ErrorEnum __attribute__((deprecated))
#else
# define DEPRECATED__rviz_plug_msg__msg__ErrorEnum __declspec(deprecated)
#endif

namespace rviz_plug_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ErrorEnum_
{
  using Type = ErrorEnum_<ContainerAllocator>;

  explicit ErrorEnum_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ErrorEnum_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
  static constexpr uint8_t EXISTS_ERROR =
    1u;
  static constexpr uint8_t CONDITION_INVALID =
    2u;
  static constexpr uint8_t REQUEST_TIMEOUT =
    3u;

  // pointer types
  using RawPtr =
    rviz_plug_msg::msg::ErrorEnum_<ContainerAllocator> *;
  using ConstRawPtr =
    const rviz_plug_msg::msg::ErrorEnum_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rviz_plug_msg::msg::ErrorEnum_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rviz_plug_msg::msg::ErrorEnum_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rviz_plug_msg::msg::ErrorEnum_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rviz_plug_msg::msg::ErrorEnum_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rviz_plug_msg::msg::ErrorEnum_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rviz_plug_msg::msg::ErrorEnum_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rviz_plug_msg::msg::ErrorEnum_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rviz_plug_msg::msg::ErrorEnum_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rviz_plug_msg__msg__ErrorEnum
    std::shared_ptr<rviz_plug_msg::msg::ErrorEnum_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rviz_plug_msg__msg__ErrorEnum
    std::shared_ptr<rviz_plug_msg::msg::ErrorEnum_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ErrorEnum_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ErrorEnum_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ErrorEnum_

// alias to use template instance with default allocator
using ErrorEnum =
  rviz_plug_msg::msg::ErrorEnum_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ErrorEnum_<ContainerAllocator>::EXISTS_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ErrorEnum_<ContainerAllocator>::CONDITION_INVALID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ErrorEnum_<ContainerAllocator>::REQUEST_TIMEOUT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rviz_plug_msg

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__ERROR_ENUM__STRUCT_HPP_
