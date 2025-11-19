// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fault_diagnosis:msg/ODDStatusArray.idl
// generated code does not contain a copyright notice

#ifndef FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS_ARRAY__STRUCT_HPP_
#define FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"
// Member 'functions'
#include "fault_diagnosis/msg/detail/odd_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fault_diagnosis__msg__ODDStatusArray __attribute__((deprecated))
#else
# define DEPRECATED__fault_diagnosis__msg__ODDStatusArray __declspec(deprecated)
#endif

namespace fault_diagnosis
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ODDStatusArray_
{
  using Type = ODDStatusArray_<ContainerAllocator>;

  explicit ODDStatusArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit ODDStatusArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _functions_type =
    std::vector<fault_diagnosis::msg::OddStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<fault_diagnosis::msg::OddStatus_<ContainerAllocator>>>;
  _functions_type functions;
  using _global_faults_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _global_faults_type global_faults;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__functions(
    const std::vector<fault_diagnosis::msg::OddStatus_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<fault_diagnosis::msg::OddStatus_<ContainerAllocator>>> & _arg)
  {
    this->functions = _arg;
    return *this;
  }
  Type & set__global_faults(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->global_faults = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fault_diagnosis::msg::ODDStatusArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const fault_diagnosis::msg::ODDStatusArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fault_diagnosis::msg::ODDStatusArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fault_diagnosis::msg::ODDStatusArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fault_diagnosis::msg::ODDStatusArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fault_diagnosis::msg::ODDStatusArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fault_diagnosis::msg::ODDStatusArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fault_diagnosis::msg::ODDStatusArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fault_diagnosis::msg::ODDStatusArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fault_diagnosis::msg::ODDStatusArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fault_diagnosis__msg__ODDStatusArray
    std::shared_ptr<fault_diagnosis::msg::ODDStatusArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fault_diagnosis__msg__ODDStatusArray
    std::shared_ptr<fault_diagnosis::msg::ODDStatusArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ODDStatusArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->functions != other.functions) {
      return false;
    }
    if (this->global_faults != other.global_faults) {
      return false;
    }
    return true;
  }
  bool operator!=(const ODDStatusArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ODDStatusArray_

// alias to use template instance with default allocator
using ODDStatusArray =
  fault_diagnosis::msg::ODDStatusArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fault_diagnosis

#endif  // FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS_ARRAY__STRUCT_HPP_
