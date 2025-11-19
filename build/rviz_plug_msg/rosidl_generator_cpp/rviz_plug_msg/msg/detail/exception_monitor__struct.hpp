// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rviz_plug_msg:msg/ExceptionMonitor.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__EXCEPTION_MONITOR__STRUCT_HPP_
#define RVIZ_PLUG_MSG__MSG__DETAIL__EXCEPTION_MONITOR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rviz_plug_msg__msg__ExceptionMonitor __attribute__((deprecated))
#else
# define DEPRECATED__rviz_plug_msg__msg__ExceptionMonitor __declspec(deprecated)
#endif

namespace rviz_plug_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExceptionMonitor_
{
  using Type = ExceptionMonitor_<ContainerAllocator>;

  explicit ExceptionMonitor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ExceptionMonitor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _exception_content_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _exception_content_type exception_content;

  // setters for named parameter idiom
  Type & set__exception_content(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->exception_content = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rviz_plug_msg::msg::ExceptionMonitor_<ContainerAllocator> *;
  using ConstRawPtr =
    const rviz_plug_msg::msg::ExceptionMonitor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rviz_plug_msg::msg::ExceptionMonitor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rviz_plug_msg::msg::ExceptionMonitor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rviz_plug_msg::msg::ExceptionMonitor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rviz_plug_msg::msg::ExceptionMonitor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rviz_plug_msg::msg::ExceptionMonitor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rviz_plug_msg::msg::ExceptionMonitor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rviz_plug_msg::msg::ExceptionMonitor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rviz_plug_msg::msg::ExceptionMonitor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rviz_plug_msg__msg__ExceptionMonitor
    std::shared_ptr<rviz_plug_msg::msg::ExceptionMonitor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rviz_plug_msg__msg__ExceptionMonitor
    std::shared_ptr<rviz_plug_msg::msg::ExceptionMonitor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExceptionMonitor_ & other) const
  {
    if (this->exception_content != other.exception_content) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExceptionMonitor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExceptionMonitor_

// alias to use template instance with default allocator
using ExceptionMonitor =
  rviz_plug_msg::msg::ExceptionMonitor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rviz_plug_msg

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__EXCEPTION_MONITOR__STRUCT_HPP_
