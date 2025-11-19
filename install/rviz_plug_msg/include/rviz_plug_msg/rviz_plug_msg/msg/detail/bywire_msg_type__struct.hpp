// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rviz_plug_msg:msg/BywireMsgType.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_MSG_TYPE__STRUCT_HPP_
#define RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_MSG_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rviz_plug_msg__msg__BywireMsgType __attribute__((deprecated))
#else
# define DEPRECATED__rviz_plug_msg__msg__BywireMsgType __declspec(deprecated)
#endif

namespace rviz_plug_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BywireMsgType_
{
  using Type = BywireMsgType_<ContainerAllocator>;

  explicit BywireMsgType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->val = 0;
    }
  }

  explicit BywireMsgType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->val = 0;
    }
  }

  // field types and members
  using _val_type =
    uint8_t;
  _val_type val;

  // setters for named parameter idiom
  Type & set__val(
    const uint8_t & _arg)
  {
    this->val = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATUS =
    0u;
  static constexpr uint8_t INFO =
    1u;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static constexpr uint8_t ERROR =
    2u;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

  // pointer types
  using RawPtr =
    rviz_plug_msg::msg::BywireMsgType_<ContainerAllocator> *;
  using ConstRawPtr =
    const rviz_plug_msg::msg::BywireMsgType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rviz_plug_msg::msg::BywireMsgType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rviz_plug_msg::msg::BywireMsgType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rviz_plug_msg::msg::BywireMsgType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rviz_plug_msg::msg::BywireMsgType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rviz_plug_msg::msg::BywireMsgType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rviz_plug_msg::msg::BywireMsgType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rviz_plug_msg::msg::BywireMsgType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rviz_plug_msg::msg::BywireMsgType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rviz_plug_msg__msg__BywireMsgType
    std::shared_ptr<rviz_plug_msg::msg::BywireMsgType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rviz_plug_msg__msg__BywireMsgType
    std::shared_ptr<rviz_plug_msg::msg::BywireMsgType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BywireMsgType_ & other) const
  {
    if (this->val != other.val) {
      return false;
    }
    return true;
  }
  bool operator!=(const BywireMsgType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BywireMsgType_

// alias to use template instance with default allocator
using BywireMsgType =
  rviz_plug_msg::msg::BywireMsgType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BywireMsgType_<ContainerAllocator>::STATUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BywireMsgType_<ContainerAllocator>::INFO;
#endif  // __cplusplus < 201703L
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t BywireMsgType_<ContainerAllocator>::ERROR;
#endif  // __cplusplus < 201703L
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

}  // namespace msg

}  // namespace rviz_plug_msg

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_MSG_TYPE__STRUCT_HPP_
