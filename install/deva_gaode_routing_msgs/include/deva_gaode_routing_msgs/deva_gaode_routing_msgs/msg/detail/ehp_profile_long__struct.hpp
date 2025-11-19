// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/EhpProfileLong.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_LONG__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_LONG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__EhpProfileLong __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__EhpProfileLong __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EhpProfileLong_
{
  using Type = EhpProfileLong_<ContainerAllocator>;

  explicit EhpProfileLong_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prof_long_offset = 0;
      this->prof_long_msg_type = 0;
      this->prof_long_path_idx = 0;
      this->prof_long_cyc_cnt = 0;
      this->prof_long_update = 0;
      this->prof_long_retr = 0;
      this->prof_long_ctrl_point = 0;
      this->prof_long_prof_type = 0;
      this->prof_long_value = 0ul;
      this->prof_long_relative_offset = 0l;
    }
  }

  explicit EhpProfileLong_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prof_long_offset = 0;
      this->prof_long_msg_type = 0;
      this->prof_long_path_idx = 0;
      this->prof_long_cyc_cnt = 0;
      this->prof_long_update = 0;
      this->prof_long_retr = 0;
      this->prof_long_ctrl_point = 0;
      this->prof_long_prof_type = 0;
      this->prof_long_value = 0ul;
      this->prof_long_relative_offset = 0l;
    }
  }

  // field types and members
  using _prof_long_offset_type =
    uint16_t;
  _prof_long_offset_type prof_long_offset;
  using _prof_long_msg_type_type =
    uint8_t;
  _prof_long_msg_type_type prof_long_msg_type;
  using _prof_long_path_idx_type =
    uint8_t;
  _prof_long_path_idx_type prof_long_path_idx;
  using _prof_long_cyc_cnt_type =
    uint8_t;
  _prof_long_cyc_cnt_type prof_long_cyc_cnt;
  using _prof_long_update_type =
    uint8_t;
  _prof_long_update_type prof_long_update;
  using _prof_long_retr_type =
    uint8_t;
  _prof_long_retr_type prof_long_retr;
  using _prof_long_ctrl_point_type =
    uint8_t;
  _prof_long_ctrl_point_type prof_long_ctrl_point;
  using _prof_long_prof_type_type =
    uint8_t;
  _prof_long_prof_type_type prof_long_prof_type;
  using _prof_long_value_type =
    uint32_t;
  _prof_long_value_type prof_long_value;
  using _prof_long_relative_offset_type =
    int32_t;
  _prof_long_relative_offset_type prof_long_relative_offset;

  // setters for named parameter idiom
  Type & set__prof_long_offset(
    const uint16_t & _arg)
  {
    this->prof_long_offset = _arg;
    return *this;
  }
  Type & set__prof_long_msg_type(
    const uint8_t & _arg)
  {
    this->prof_long_msg_type = _arg;
    return *this;
  }
  Type & set__prof_long_path_idx(
    const uint8_t & _arg)
  {
    this->prof_long_path_idx = _arg;
    return *this;
  }
  Type & set__prof_long_cyc_cnt(
    const uint8_t & _arg)
  {
    this->prof_long_cyc_cnt = _arg;
    return *this;
  }
  Type & set__prof_long_update(
    const uint8_t & _arg)
  {
    this->prof_long_update = _arg;
    return *this;
  }
  Type & set__prof_long_retr(
    const uint8_t & _arg)
  {
    this->prof_long_retr = _arg;
    return *this;
  }
  Type & set__prof_long_ctrl_point(
    const uint8_t & _arg)
  {
    this->prof_long_ctrl_point = _arg;
    return *this;
  }
  Type & set__prof_long_prof_type(
    const uint8_t & _arg)
  {
    this->prof_long_prof_type = _arg;
    return *this;
  }
  Type & set__prof_long_value(
    const uint32_t & _arg)
  {
    this->prof_long_value = _arg;
    return *this;
  }
  Type & set__prof_long_relative_offset(
    const int32_t & _arg)
  {
    this->prof_long_relative_offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::EhpProfileLong_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::EhpProfileLong_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpProfileLong_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpProfileLong_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::EhpProfileLong_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::EhpProfileLong_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::EhpProfileLong_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::EhpProfileLong_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::EhpProfileLong_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::EhpProfileLong_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__EhpProfileLong
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpProfileLong_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__EhpProfileLong
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpProfileLong_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EhpProfileLong_ & other) const
  {
    if (this->prof_long_offset != other.prof_long_offset) {
      return false;
    }
    if (this->prof_long_msg_type != other.prof_long_msg_type) {
      return false;
    }
    if (this->prof_long_path_idx != other.prof_long_path_idx) {
      return false;
    }
    if (this->prof_long_cyc_cnt != other.prof_long_cyc_cnt) {
      return false;
    }
    if (this->prof_long_update != other.prof_long_update) {
      return false;
    }
    if (this->prof_long_retr != other.prof_long_retr) {
      return false;
    }
    if (this->prof_long_ctrl_point != other.prof_long_ctrl_point) {
      return false;
    }
    if (this->prof_long_prof_type != other.prof_long_prof_type) {
      return false;
    }
    if (this->prof_long_value != other.prof_long_value) {
      return false;
    }
    if (this->prof_long_relative_offset != other.prof_long_relative_offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const EhpProfileLong_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EhpProfileLong_

// alias to use template instance with default allocator
using EhpProfileLong =
  deva_gaode_routing_msgs::msg::EhpProfileLong_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_LONG__STRUCT_HPP_
