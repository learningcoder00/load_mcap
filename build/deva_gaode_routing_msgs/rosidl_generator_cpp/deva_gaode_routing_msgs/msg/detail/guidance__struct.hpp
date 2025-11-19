// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/Guidance.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GUIDANCE__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GUIDANCE__STRUCT_HPP_

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
// Member 'k_warning_sign'
#include "deva_gaode_routing_msgs/msg/detail/k_warning_sign__struct.hpp"
// Member 'k_lane_meta_info'
#include "deva_gaode_routing_msgs/msg/detail/k_lane_meta_info__struct.hpp"
// Member 'k_lsl'
#include "deva_gaode_routing_msgs/msg/detail/k_lsl__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__Guidance __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__Guidance __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Guidance_
{
  using Type = Guidance_<ContainerAllocator>;

  explicit Guidance_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : in_link_id(_init),
    node_id(_init),
    k_warning_sign(_init),
    k_lane_meta_info(_init),
    k_lsl(_init)
  {
    (void)_init;
  }

  explicit Guidance_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : in_link_id(_alloc, _init),
    node_id(_alloc, _init),
    k_warning_sign(_alloc, _init),
    k_lane_meta_info(_alloc, _init),
    k_lsl(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _in_link_id_type =
    deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>;
  _in_link_id_type in_link_id;
  using _node_id_type =
    deva_gaode_routing_msgs::msg::NodeIDType_<ContainerAllocator>;
  _node_id_type node_id;
  using _pass_link_id_s_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _pass_link_id_s_type pass_link_id_s;
  using _k_warning_sign_type =
    deva_gaode_routing_msgs::msg::KWarningSign_<ContainerAllocator>;
  _k_warning_sign_type k_warning_sign;
  using _k_lane_meta_info_type =
    deva_gaode_routing_msgs::msg::KLaneMetaInfo_<ContainerAllocator>;
  _k_lane_meta_info_type k_lane_meta_info;
  using _k_lsl_type =
    deva_gaode_routing_msgs::msg::KLsl_<ContainerAllocator>;
  _k_lsl_type k_lsl;

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
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->pass_link_id_s = _arg;
    return *this;
  }
  Type & set__k_warning_sign(
    const deva_gaode_routing_msgs::msg::KWarningSign_<ContainerAllocator> & _arg)
  {
    this->k_warning_sign = _arg;
    return *this;
  }
  Type & set__k_lane_meta_info(
    const deva_gaode_routing_msgs::msg::KLaneMetaInfo_<ContainerAllocator> & _arg)
  {
    this->k_lane_meta_info = _arg;
    return *this;
  }
  Type & set__k_lsl(
    const deva_gaode_routing_msgs::msg::KLsl_<ContainerAllocator> & _arg)
  {
    this->k_lsl = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::Guidance_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::Guidance_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::Guidance_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::Guidance_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::Guidance_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::Guidance_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::Guidance_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::Guidance_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::Guidance_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::Guidance_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__Guidance
    std::shared_ptr<deva_gaode_routing_msgs::msg::Guidance_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__Guidance
    std::shared_ptr<deva_gaode_routing_msgs::msg::Guidance_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Guidance_ & other) const
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
    if (this->k_warning_sign != other.k_warning_sign) {
      return false;
    }
    if (this->k_lane_meta_info != other.k_lane_meta_info) {
      return false;
    }
    if (this->k_lsl != other.k_lsl) {
      return false;
    }
    return true;
  }
  bool operator!=(const Guidance_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Guidance_

// alias to use template instance with default allocator
using Guidance =
  deva_gaode_routing_msgs::msg::Guidance_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GUIDANCE__STRUCT_HPP_
