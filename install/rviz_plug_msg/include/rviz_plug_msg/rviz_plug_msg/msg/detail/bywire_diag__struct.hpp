// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rviz_plug_msg:msg/BywireDiag.idl
// generated code does not contain a copyright notice

#ifndef RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_DIAG__STRUCT_HPP_
#define RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_DIAG__STRUCT_HPP_

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
// Member 'type'
#include "rviz_plug_msg/msg/detail/bywire_msg_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rviz_plug_msg__msg__BywireDiag __attribute__((deprecated))
#else
# define DEPRECATED__rviz_plug_msg__msg__BywireDiag __declspec(deprecated)
#endif

namespace rviz_plug_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BywireDiag_
{
  using Type = BywireDiag_<ContainerAllocator>;

  explicit BywireDiag_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_name = "";
      this->code = 0;
      this->detail = "";
    }
  }

  explicit BywireDiag_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    node_name(_alloc),
    type(_alloc, _init),
    detail(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_name = "";
      this->code = 0;
      this->detail = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _node_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_name_type node_name;
  using _type_type =
    rviz_plug_msg::msg::BywireMsgType_<ContainerAllocator>;
  _type_type type;
  using _code_type =
    uint8_t;
  _code_type code;
  using _detail_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _detail_type detail;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__node_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_name = _arg;
    return *this;
  }
  Type & set__type(
    const rviz_plug_msg::msg::BywireMsgType_<ContainerAllocator> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__code(
    const uint8_t & _arg)
  {
    this->code = _arg;
    return *this;
  }
  Type & set__detail(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->detail = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rviz_plug_msg::msg::BywireDiag_<ContainerAllocator> *;
  using ConstRawPtr =
    const rviz_plug_msg::msg::BywireDiag_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rviz_plug_msg::msg::BywireDiag_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rviz_plug_msg::msg::BywireDiag_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rviz_plug_msg::msg::BywireDiag_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rviz_plug_msg::msg::BywireDiag_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rviz_plug_msg::msg::BywireDiag_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rviz_plug_msg::msg::BywireDiag_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rviz_plug_msg::msg::BywireDiag_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rviz_plug_msg::msg::BywireDiag_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rviz_plug_msg__msg__BywireDiag
    std::shared_ptr<rviz_plug_msg::msg::BywireDiag_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rviz_plug_msg__msg__BywireDiag
    std::shared_ptr<rviz_plug_msg::msg::BywireDiag_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BywireDiag_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->node_name != other.node_name) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    if (this->detail != other.detail) {
      return false;
    }
    return true;
  }
  bool operator!=(const BywireDiag_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BywireDiag_

// alias to use template instance with default allocator
using BywireDiag =
  rviz_plug_msg::msg::BywireDiag_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rviz_plug_msg

#endif  // RVIZ_PLUG_MSG__MSG__DETAIL__BYWIRE_DIAG__STRUCT_HPP_
