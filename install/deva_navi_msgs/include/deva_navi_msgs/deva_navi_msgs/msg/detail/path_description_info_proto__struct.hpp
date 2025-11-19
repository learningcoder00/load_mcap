// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/PathDescriptionInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__PATH_DESCRIPTION_INFO_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__PATH_DESCRIPTION_INFO_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__PathDescriptionInfoProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__PathDescriptionInfoProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PathDescriptionInfoProto_
{
  using Type = PathDescriptionInfoProto_<ContainerAllocator>;

  explicit PathDescriptionInfoProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path_type = 0l;
      this->flag1 = 0l;
      this->flag2 = 0l;
    }
  }

  explicit PathDescriptionInfoProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path_type = 0l;
      this->flag1 = 0l;
      this->flag2 = 0l;
    }
  }

  // field types and members
  using _path_type_type =
    int32_t;
  _path_type_type path_type;
  using _flag1_type =
    int32_t;
  _flag1_type flag1;
  using _flag2_type =
    int32_t;
  _flag2_type flag2;

  // setters for named parameter idiom
  Type & set__path_type(
    const int32_t & _arg)
  {
    this->path_type = _arg;
    return *this;
  }
  Type & set__flag1(
    const int32_t & _arg)
  {
    this->flag1 = _arg;
    return *this;
  }
  Type & set__flag2(
    const int32_t & _arg)
  {
    this->flag2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::PathDescriptionInfoProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::PathDescriptionInfoProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::PathDescriptionInfoProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::PathDescriptionInfoProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::PathDescriptionInfoProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::PathDescriptionInfoProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::PathDescriptionInfoProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::PathDescriptionInfoProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::PathDescriptionInfoProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::PathDescriptionInfoProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__PathDescriptionInfoProto
    std::shared_ptr<deva_navi_msgs::msg::PathDescriptionInfoProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__PathDescriptionInfoProto
    std::shared_ptr<deva_navi_msgs::msg::PathDescriptionInfoProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PathDescriptionInfoProto_ & other) const
  {
    if (this->path_type != other.path_type) {
      return false;
    }
    if (this->flag1 != other.flag1) {
      return false;
    }
    if (this->flag2 != other.flag2) {
      return false;
    }
    return true;
  }
  bool operator!=(const PathDescriptionInfoProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PathDescriptionInfoProto_

// alias to use template instance with default allocator
using PathDescriptionInfoProto =
  deva_navi_msgs::msg::PathDescriptionInfoProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__PATH_DESCRIPTION_INFO_PROTO__STRUCT_HPP_
