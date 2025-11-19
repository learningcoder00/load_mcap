// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/AssociatedInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ASSOCIATED_INFO__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ASSOCIATED_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__AssociatedInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__AssociatedInfo __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AssociatedInfo_
{
  using Type = AssociatedInfo_<ContainerAllocator>;

  explicit AssociatedInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->associated_type = 0l;
      this->associated_id = "";
    }
  }

  explicit AssociatedInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : associated_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->associated_type = 0l;
      this->associated_id = "";
    }
  }

  // field types and members
  using _associated_type_type =
    int32_t;
  _associated_type_type associated_type;
  using _associated_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _associated_id_type associated_id;

  // setters for named parameter idiom
  Type & set__associated_type(
    const int32_t & _arg)
  {
    this->associated_type = _arg;
    return *this;
  }
  Type & set__associated_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->associated_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::AssociatedInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::AssociatedInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::AssociatedInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::AssociatedInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::AssociatedInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::AssociatedInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::AssociatedInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::AssociatedInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::AssociatedInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::AssociatedInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__AssociatedInfo
    std::shared_ptr<deva_perception_msgs::msg::AssociatedInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__AssociatedInfo
    std::shared_ptr<deva_perception_msgs::msg::AssociatedInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AssociatedInfo_ & other) const
  {
    if (this->associated_type != other.associated_type) {
      return false;
    }
    if (this->associated_id != other.associated_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const AssociatedInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AssociatedInfo_

// alias to use template instance with default allocator
using AssociatedInfo =
  deva_perception_msgs::msg::AssociatedInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ASSOCIATED_INFO__STRUCT_HPP_
