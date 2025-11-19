// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/GantryInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__GANTRY_INFO_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__GANTRY_INFO_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__GantryInfoProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__GantryInfoProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GantryInfoProto_
{
  using Type = GantryInfoProto_<ContainerAllocator>;

  explicit GantryInfoProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flag = 0l;
      this->type = 0l;
      this->dist_end = 0ll;
      this->num = "";
      this->name = "";
    }
  }

  explicit GantryInfoProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : num(_alloc),
    name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->flag = 0l;
      this->type = 0l;
      this->dist_end = 0ll;
      this->num = "";
      this->name = "";
    }
  }

  // field types and members
  using _flag_type =
    int32_t;
  _flag_type flag;
  using _type_type =
    int32_t;
  _type_type type;
  using _dist_end_type =
    int64_t;
  _dist_end_type dist_end;
  using _num_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _num_type num;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__flag(
    const int32_t & _arg)
  {
    this->flag = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__dist_end(
    const int64_t & _arg)
  {
    this->dist_end = _arg;
    return *this;
  }
  Type & set__num(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->num = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::GantryInfoProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::GantryInfoProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::GantryInfoProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::GantryInfoProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::GantryInfoProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::GantryInfoProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::GantryInfoProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::GantryInfoProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::GantryInfoProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::GantryInfoProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__GantryInfoProto
    std::shared_ptr<deva_navi_msgs::msg::GantryInfoProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__GantryInfoProto
    std::shared_ptr<deva_navi_msgs::msg::GantryInfoProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GantryInfoProto_ & other) const
  {
    if (this->flag != other.flag) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->dist_end != other.dist_end) {
      return false;
    }
    if (this->num != other.num) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const GantryInfoProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GantryInfoProto_

// alias to use template instance with default allocator
using GantryInfoProto =
  deva_navi_msgs::msg::GantryInfoProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__GANTRY_INFO_PROTO__STRUCT_HPP_
