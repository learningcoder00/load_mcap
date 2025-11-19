// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/EhpPosition.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_POSITION__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_POSITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__EhpPosition __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__EhpPosition __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EhpPosition_
{
  using Type = EhpPosition_<ContainerAllocator>;

  explicit EhpPosition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posn_offset = 0;
      this->posn_msg_type = 0;
      this->posn_path_idx = 0;
      this->posn_cyc_cnt = 0;
      this->posn_age = 0;
      this->posn_pos_probb = 0.0f;
      this->posn_idx = 0;
      this->posn_spd = 0.0f;
      this->posn_cur_lane = 0;
      this->posn_pos_confdc = 0;
      this->posn_rehead = 0.0f;
    }
  }

  explicit EhpPosition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posn_offset = 0;
      this->posn_msg_type = 0;
      this->posn_path_idx = 0;
      this->posn_cyc_cnt = 0;
      this->posn_age = 0;
      this->posn_pos_probb = 0.0f;
      this->posn_idx = 0;
      this->posn_spd = 0.0f;
      this->posn_cur_lane = 0;
      this->posn_pos_confdc = 0;
      this->posn_rehead = 0.0f;
    }
  }

  // field types and members
  using _posn_offset_type =
    uint16_t;
  _posn_offset_type posn_offset;
  using _posn_msg_type_type =
    uint8_t;
  _posn_msg_type_type posn_msg_type;
  using _posn_path_idx_type =
    uint8_t;
  _posn_path_idx_type posn_path_idx;
  using _posn_cyc_cnt_type =
    uint8_t;
  _posn_cyc_cnt_type posn_cyc_cnt;
  using _posn_age_type =
    uint16_t;
  _posn_age_type posn_age;
  using _posn_pos_probb_type =
    float;
  _posn_pos_probb_type posn_pos_probb;
  using _posn_idx_type =
    uint8_t;
  _posn_idx_type posn_idx;
  using _posn_spd_type =
    float;
  _posn_spd_type posn_spd;
  using _posn_cur_lane_type =
    uint8_t;
  _posn_cur_lane_type posn_cur_lane;
  using _posn_pos_confdc_type =
    uint8_t;
  _posn_pos_confdc_type posn_pos_confdc;
  using _posn_rehead_type =
    float;
  _posn_rehead_type posn_rehead;

  // setters for named parameter idiom
  Type & set__posn_offset(
    const uint16_t & _arg)
  {
    this->posn_offset = _arg;
    return *this;
  }
  Type & set__posn_msg_type(
    const uint8_t & _arg)
  {
    this->posn_msg_type = _arg;
    return *this;
  }
  Type & set__posn_path_idx(
    const uint8_t & _arg)
  {
    this->posn_path_idx = _arg;
    return *this;
  }
  Type & set__posn_cyc_cnt(
    const uint8_t & _arg)
  {
    this->posn_cyc_cnt = _arg;
    return *this;
  }
  Type & set__posn_age(
    const uint16_t & _arg)
  {
    this->posn_age = _arg;
    return *this;
  }
  Type & set__posn_pos_probb(
    const float & _arg)
  {
    this->posn_pos_probb = _arg;
    return *this;
  }
  Type & set__posn_idx(
    const uint8_t & _arg)
  {
    this->posn_idx = _arg;
    return *this;
  }
  Type & set__posn_spd(
    const float & _arg)
  {
    this->posn_spd = _arg;
    return *this;
  }
  Type & set__posn_cur_lane(
    const uint8_t & _arg)
  {
    this->posn_cur_lane = _arg;
    return *this;
  }
  Type & set__posn_pos_confdc(
    const uint8_t & _arg)
  {
    this->posn_pos_confdc = _arg;
    return *this;
  }
  Type & set__posn_rehead(
    const float & _arg)
  {
    this->posn_rehead = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::EhpPosition_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::EhpPosition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpPosition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpPosition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::EhpPosition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::EhpPosition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::EhpPosition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::EhpPosition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::EhpPosition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::EhpPosition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__EhpPosition
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpPosition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__EhpPosition
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpPosition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EhpPosition_ & other) const
  {
    if (this->posn_offset != other.posn_offset) {
      return false;
    }
    if (this->posn_msg_type != other.posn_msg_type) {
      return false;
    }
    if (this->posn_path_idx != other.posn_path_idx) {
      return false;
    }
    if (this->posn_cyc_cnt != other.posn_cyc_cnt) {
      return false;
    }
    if (this->posn_age != other.posn_age) {
      return false;
    }
    if (this->posn_pos_probb != other.posn_pos_probb) {
      return false;
    }
    if (this->posn_idx != other.posn_idx) {
      return false;
    }
    if (this->posn_spd != other.posn_spd) {
      return false;
    }
    if (this->posn_cur_lane != other.posn_cur_lane) {
      return false;
    }
    if (this->posn_pos_confdc != other.posn_pos_confdc) {
      return false;
    }
    if (this->posn_rehead != other.posn_rehead) {
      return false;
    }
    return true;
  }
  bool operator!=(const EhpPosition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EhpPosition_

// alias to use template instance with default allocator
using EhpPosition =
  deva_gaode_routing_msgs::msg::EhpPosition_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_POSITION__STRUCT_HPP_
