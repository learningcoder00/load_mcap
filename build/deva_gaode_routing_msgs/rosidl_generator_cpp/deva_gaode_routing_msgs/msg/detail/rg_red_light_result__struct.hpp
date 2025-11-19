// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/RGRedLightResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_RED_LIGHT_RESULT__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_RED_LIGHT_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pos'
#include "deva_gaode_routing_msgs/msg/detail/route_pos__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__RGRedLightResult __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__RGRedLightResult __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RGRedLightResult_
{
  using Type = RGRedLightResult_<ContainerAllocator>;

  explicit RGRedLightResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->raw_link_id = 0ull;
    }
  }

  explicit RGRedLightResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->raw_link_id = 0ull;
    }
  }

  // field types and members
  using _raw_link_id_type =
    uint64_t;
  _raw_link_id_type raw_link_id;
  using _pos_type =
    deva_gaode_routing_msgs::msg::RoutePos_<ContainerAllocator>;
  _pos_type pos;

  // setters for named parameter idiom
  Type & set__raw_link_id(
    const uint64_t & _arg)
  {
    this->raw_link_id = _arg;
    return *this;
  }
  Type & set__pos(
    const deva_gaode_routing_msgs::msg::RoutePos_<ContainerAllocator> & _arg)
  {
    this->pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::RGRedLightResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::RGRedLightResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::RGRedLightResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::RGRedLightResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::RGRedLightResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::RGRedLightResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::RGRedLightResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::RGRedLightResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::RGRedLightResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::RGRedLightResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__RGRedLightResult
    std::shared_ptr<deva_gaode_routing_msgs::msg::RGRedLightResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__RGRedLightResult
    std::shared_ptr<deva_gaode_routing_msgs::msg::RGRedLightResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RGRedLightResult_ & other) const
  {
    if (this->raw_link_id != other.raw_link_id) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const RGRedLightResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RGRedLightResult_

// alias to use template instance with default allocator
using RGRedLightResult =
  deva_gaode_routing_msgs::msg::RGRedLightResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_RED_LIGHT_RESULT__STRUCT_HPP_
