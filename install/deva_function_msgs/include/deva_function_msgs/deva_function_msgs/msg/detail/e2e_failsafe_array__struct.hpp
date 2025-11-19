// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/E2eFailsafeArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__E2E_FAILSAFE_ARRAY__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__E2E_FAILSAFE_ARRAY__STRUCT_HPP_

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
// Member 'e2e_failsafe_array'
#include "deva_function_msgs/msg/detail/e2e_failsafe__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_function_msgs__msg__E2eFailsafeArray __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__E2eFailsafeArray __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct E2eFailsafeArray_
{
  using Type = E2eFailsafeArray_<ContainerAllocator>;

  explicit E2eFailsafeArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
      this->sum_result = 0;
    }
  }

  explicit E2eFailsafeArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0;
      this->sum_result = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _index_type =
    uint8_t;
  _index_type index;
  using _e2e_failsafe_array_type =
    std::vector<deva_function_msgs::msg::E2eFailsafe_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_function_msgs::msg::E2eFailsafe_<ContainerAllocator>>>;
  _e2e_failsafe_array_type e2e_failsafe_array;
  using _sum_result_type =
    uint8_t;
  _sum_result_type sum_result;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__index(
    const uint8_t & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__e2e_failsafe_array(
    const std::vector<deva_function_msgs::msg::E2eFailsafe_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_function_msgs::msg::E2eFailsafe_<ContainerAllocator>>> & _arg)
  {
    this->e2e_failsafe_array = _arg;
    return *this;
  }
  Type & set__sum_result(
    const uint8_t & _arg)
  {
    this->sum_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::E2eFailsafeArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::E2eFailsafeArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::E2eFailsafeArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::E2eFailsafeArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::E2eFailsafeArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::E2eFailsafeArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::E2eFailsafeArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::E2eFailsafeArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::E2eFailsafeArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::E2eFailsafeArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__E2eFailsafeArray
    std::shared_ptr<deva_function_msgs::msg::E2eFailsafeArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__E2eFailsafeArray
    std::shared_ptr<deva_function_msgs::msg::E2eFailsafeArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const E2eFailsafeArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    if (this->e2e_failsafe_array != other.e2e_failsafe_array) {
      return false;
    }
    if (this->sum_result != other.sum_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const E2eFailsafeArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct E2eFailsafeArray_

// alias to use template instance with default allocator
using E2eFailsafeArray =
  deva_function_msgs::msg::E2eFailsafeArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__E2E_FAILSAFE_ARRAY__STRUCT_HPP_
