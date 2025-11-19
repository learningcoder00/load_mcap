// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/RestrictionInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__RESTRICTION_INFO_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__RESTRICTION_INFO_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__RestrictionInfoProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__RestrictionInfoProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RestrictionInfoProto_
{
  using Type = RestrictionInfoProto_<ContainerAllocator>;

  explicit RestrictionInfoProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->title = "";
      this->desc = "";
      this->tipc = "";
      this->city_code = 0l;
      this->type = 0l;
      this->title_type = 0l;
    }
  }

  explicit RestrictionInfoProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : title(_alloc),
    desc(_alloc),
    tipc(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->title = "";
      this->desc = "";
      this->tipc = "";
      this->city_code = 0l;
      this->type = 0l;
      this->title_type = 0l;
    }
  }

  // field types and members
  using _title_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _title_type title;
  using _desc_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _desc_type desc;
  using _tipc_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tipc_type tipc;
  using _city_code_type =
    int32_t;
  _city_code_type city_code;
  using _type_type =
    int32_t;
  _type_type type;
  using _title_type_type =
    int32_t;
  _title_type_type title_type;
  using _rule_ids_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _rule_ids_type rule_ids;
  using _tail_nums_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _tail_nums_type tail_nums;

  // setters for named parameter idiom
  Type & set__title(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->title = _arg;
    return *this;
  }
  Type & set__desc(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->desc = _arg;
    return *this;
  }
  Type & set__tipc(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tipc = _arg;
    return *this;
  }
  Type & set__city_code(
    const int32_t & _arg)
  {
    this->city_code = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__title_type(
    const int32_t & _arg)
  {
    this->title_type = _arg;
    return *this;
  }
  Type & set__rule_ids(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->rule_ids = _arg;
    return *this;
  }
  Type & set__tail_nums(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->tail_nums = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::RestrictionInfoProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::RestrictionInfoProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::RestrictionInfoProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::RestrictionInfoProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::RestrictionInfoProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::RestrictionInfoProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::RestrictionInfoProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::RestrictionInfoProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::RestrictionInfoProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::RestrictionInfoProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__RestrictionInfoProto
    std::shared_ptr<deva_navi_msgs::msg::RestrictionInfoProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__RestrictionInfoProto
    std::shared_ptr<deva_navi_msgs::msg::RestrictionInfoProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RestrictionInfoProto_ & other) const
  {
    if (this->title != other.title) {
      return false;
    }
    if (this->desc != other.desc) {
      return false;
    }
    if (this->tipc != other.tipc) {
      return false;
    }
    if (this->city_code != other.city_code) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->title_type != other.title_type) {
      return false;
    }
    if (this->rule_ids != other.rule_ids) {
      return false;
    }
    if (this->tail_nums != other.tail_nums) {
      return false;
    }
    return true;
  }
  bool operator!=(const RestrictionInfoProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RestrictionInfoProto_

// alias to use template instance with default allocator
using RestrictionInfoProto =
  deva_navi_msgs::msg::RestrictionInfoProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__RESTRICTION_INFO_PROTO__STRUCT_HPP_
