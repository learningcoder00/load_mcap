// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/FreespaceArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_ARRAY__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'freespace_array'
#include "deva_perception_msgs/msg/detail/freespace_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__FreespaceArray __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__FreespaceArray __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FreespaceArray_
{
  using Type = FreespaceArray_<ContainerAllocator>;

  explicit FreespaceArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit FreespaceArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _freespace_array_type =
    std::vector<deva_perception_msgs::msg::FreespacePoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::FreespacePoint_<ContainerAllocator>>>;
  _freespace_array_type freespace_array;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__freespace_array(
    const std::vector<deva_perception_msgs::msg::FreespacePoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::FreespacePoint_<ContainerAllocator>>> & _arg)
  {
    this->freespace_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::FreespaceArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::FreespaceArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::FreespaceArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::FreespaceArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::FreespaceArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::FreespaceArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::FreespaceArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::FreespaceArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::FreespaceArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::FreespaceArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__FreespaceArray
    std::shared_ptr<deva_perception_msgs::msg::FreespaceArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__FreespaceArray
    std::shared_ptr<deva_perception_msgs::msg::FreespaceArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FreespaceArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->freespace_array != other.freespace_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const FreespaceArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FreespaceArray_

// alias to use template instance with default allocator
using FreespaceArray =
  deva_perception_msgs::msg::FreespaceArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_ARRAY__STRUCT_HPP_
