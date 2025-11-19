// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/KLsl.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LSL__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LSL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'in_link_id'
// Member 'pass_link_id_s'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.hpp"
// Member 'node_id'
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__KLsl __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__KLsl __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KLsl_
{
  using Type = KLsl_<ContainerAllocator>;

  explicit KLsl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : in_link_id(_init),
    node_id(_init),
    pass_link_id_s(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seqnum = 0;
      this->lsl_type = 0;
      this->lane_nums = 0;
    }
  }

  explicit KLsl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : in_link_id(_alloc, _init),
    node_id(_alloc, _init),
    pass_link_id_s(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seqnum = 0;
      this->lsl_type = 0;
      this->lane_nums = 0;
    }
  }

  // field types and members
  using _in_link_id_type =
    deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>;
  _in_link_id_type in_link_id;
  using _node_id_type =
    deva_gaode_routing_msgs::msg::NodeIDType_<ContainerAllocator>;
  _node_id_type node_id;
  using _pass_link_id_s_type =
    deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>;
  _pass_link_id_s_type pass_link_id_s;
  using _seqnum_type =
    uint8_t;
  _seqnum_type seqnum;
  using _lsl_type_type =
    uint8_t;
  _lsl_type_type lsl_type;
  using _lane_nums_type =
    uint8_t;
  _lane_nums_type lane_nums;
  using _lsl_lanes_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _lsl_lanes_type lsl_lanes;

  // setters for named parameter idiom
  Type & set__in_link_id(
    const deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> & _arg)
  {
    this->in_link_id = _arg;
    return *this;
  }
  Type & set__node_id(
    const deva_gaode_routing_msgs::msg::NodeIDType_<ContainerAllocator> & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__pass_link_id_s(
    const deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> & _arg)
  {
    this->pass_link_id_s = _arg;
    return *this;
  }
  Type & set__seqnum(
    const uint8_t & _arg)
  {
    this->seqnum = _arg;
    return *this;
  }
  Type & set__lsl_type(
    const uint8_t & _arg)
  {
    this->lsl_type = _arg;
    return *this;
  }
  Type & set__lane_nums(
    const uint8_t & _arg)
  {
    this->lane_nums = _arg;
    return *this;
  }
  Type & set__lsl_lanes(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->lsl_lanes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::KLsl_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::KLsl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::KLsl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::KLsl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::KLsl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::KLsl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::KLsl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::KLsl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::KLsl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::KLsl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__KLsl
    std::shared_ptr<deva_gaode_routing_msgs::msg::KLsl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__KLsl
    std::shared_ptr<deva_gaode_routing_msgs::msg::KLsl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KLsl_ & other) const
  {
    if (this->in_link_id != other.in_link_id) {
      return false;
    }
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->pass_link_id_s != other.pass_link_id_s) {
      return false;
    }
    if (this->seqnum != other.seqnum) {
      return false;
    }
    if (this->lsl_type != other.lsl_type) {
      return false;
    }
    if (this->lane_nums != other.lane_nums) {
      return false;
    }
    if (this->lsl_lanes != other.lsl_lanes) {
      return false;
    }
    return true;
  }
  bool operator!=(const KLsl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KLsl_

// alias to use template instance with default allocator
using KLsl =
  deva_gaode_routing_msgs::msg::KLsl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_LSL__STRUCT_HPP_
