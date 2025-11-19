// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/OddSegInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ODD_SEG_INFO_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ODD_SEG_INFO_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__OddSegInfoProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__OddSegInfoProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OddSegInfoProto_
{
  using Type = OddSegInfoProto_<ContainerAllocator>;

  explicit OddSegInfoProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m_odd_len = 0ll;
      this->m_start_seg_idx = 0ll;
      this->m_start_link_idx = 0ll;
      this->m_start_off_set = 0.0f;
      this->m_end_seg_idx = 0ll;
      this->m_end_link_idx = 0ll;
      this->m_end_off_set = 0.0f;
    }
  }

  explicit OddSegInfoProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m_odd_len = 0ll;
      this->m_start_seg_idx = 0ll;
      this->m_start_link_idx = 0ll;
      this->m_start_off_set = 0.0f;
      this->m_end_seg_idx = 0ll;
      this->m_end_link_idx = 0ll;
      this->m_end_off_set = 0.0f;
    }
  }

  // field types and members
  using _m_odd_len_type =
    int64_t;
  _m_odd_len_type m_odd_len;
  using _m_start_seg_idx_type =
    int64_t;
  _m_start_seg_idx_type m_start_seg_idx;
  using _m_start_link_idx_type =
    int64_t;
  _m_start_link_idx_type m_start_link_idx;
  using _m_start_off_set_type =
    float;
  _m_start_off_set_type m_start_off_set;
  using _m_end_seg_idx_type =
    int64_t;
  _m_end_seg_idx_type m_end_seg_idx;
  using _m_end_link_idx_type =
    int64_t;
  _m_end_link_idx_type m_end_link_idx;
  using _m_end_off_set_type =
    float;
  _m_end_off_set_type m_end_off_set;

  // setters for named parameter idiom
  Type & set__m_odd_len(
    const int64_t & _arg)
  {
    this->m_odd_len = _arg;
    return *this;
  }
  Type & set__m_start_seg_idx(
    const int64_t & _arg)
  {
    this->m_start_seg_idx = _arg;
    return *this;
  }
  Type & set__m_start_link_idx(
    const int64_t & _arg)
  {
    this->m_start_link_idx = _arg;
    return *this;
  }
  Type & set__m_start_off_set(
    const float & _arg)
  {
    this->m_start_off_set = _arg;
    return *this;
  }
  Type & set__m_end_seg_idx(
    const int64_t & _arg)
  {
    this->m_end_seg_idx = _arg;
    return *this;
  }
  Type & set__m_end_link_idx(
    const int64_t & _arg)
  {
    this->m_end_link_idx = _arg;
    return *this;
  }
  Type & set__m_end_off_set(
    const float & _arg)
  {
    this->m_end_off_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::OddSegInfoProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::OddSegInfoProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::OddSegInfoProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::OddSegInfoProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::OddSegInfoProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::OddSegInfoProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::OddSegInfoProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::OddSegInfoProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::OddSegInfoProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::OddSegInfoProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__OddSegInfoProto
    std::shared_ptr<deva_navi_msgs::msg::OddSegInfoProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__OddSegInfoProto
    std::shared_ptr<deva_navi_msgs::msg::OddSegInfoProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OddSegInfoProto_ & other) const
  {
    if (this->m_odd_len != other.m_odd_len) {
      return false;
    }
    if (this->m_start_seg_idx != other.m_start_seg_idx) {
      return false;
    }
    if (this->m_start_link_idx != other.m_start_link_idx) {
      return false;
    }
    if (this->m_start_off_set != other.m_start_off_set) {
      return false;
    }
    if (this->m_end_seg_idx != other.m_end_seg_idx) {
      return false;
    }
    if (this->m_end_link_idx != other.m_end_link_idx) {
      return false;
    }
    if (this->m_end_off_set != other.m_end_off_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const OddSegInfoProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OddSegInfoProto_

// alias to use template instance with default allocator
using OddSegInfoProto =
  deva_navi_msgs::msg::OddSegInfoProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ODD_SEG_INFO_PROTO__STRUCT_HPP_
