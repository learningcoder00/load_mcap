// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/RGIntersectionResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_INTERSECTION_RESULT__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_INTERSECTION_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'enter_pos'
// Member 'leave_pos'
#include "deva_gaode_routing_msgs/msg/detail/route_pos__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__RGIntersectionResult __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__RGIntersectionResult __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RGIntersectionResult_
{
  using Type = RGIntersectionResult_<ContainerAllocator>;

  explicit RGIntersectionResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : enter_pos(_init),
    leave_pos(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->raw_link_id = 0ull;
      this->inter_type = 0l;
      this->accessory_info = 0l;
    }
  }

  explicit RGIntersectionResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : enter_pos(_alloc, _init),
    leave_pos(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->raw_link_id = 0ull;
      this->inter_type = 0l;
      this->accessory_info = 0l;
    }
  }

  // field types and members
  using _raw_link_id_type =
    uint64_t;
  _raw_link_id_type raw_link_id;
  using _inter_type_type =
    int32_t;
  _inter_type_type inter_type;
  using _accessory_info_type =
    int32_t;
  _accessory_info_type accessory_info;
  using _enter_pos_type =
    deva_gaode_routing_msgs::msg::RoutePos_<ContainerAllocator>;
  _enter_pos_type enter_pos;
  using _leave_pos_type =
    deva_gaode_routing_msgs::msg::RoutePos_<ContainerAllocator>;
  _leave_pos_type leave_pos;
  using _inter_raw_link_ids_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _inter_raw_link_ids_type inter_raw_link_ids;

  // setters for named parameter idiom
  Type & set__raw_link_id(
    const uint64_t & _arg)
  {
    this->raw_link_id = _arg;
    return *this;
  }
  Type & set__inter_type(
    const int32_t & _arg)
  {
    this->inter_type = _arg;
    return *this;
  }
  Type & set__accessory_info(
    const int32_t & _arg)
  {
    this->accessory_info = _arg;
    return *this;
  }
  Type & set__enter_pos(
    const deva_gaode_routing_msgs::msg::RoutePos_<ContainerAllocator> & _arg)
  {
    this->enter_pos = _arg;
    return *this;
  }
  Type & set__leave_pos(
    const deva_gaode_routing_msgs::msg::RoutePos_<ContainerAllocator> & _arg)
  {
    this->leave_pos = _arg;
    return *this;
  }
  Type & set__inter_raw_link_ids(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->inter_raw_link_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::RGIntersectionResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::RGIntersectionResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::RGIntersectionResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::RGIntersectionResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::RGIntersectionResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::RGIntersectionResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::RGIntersectionResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::RGIntersectionResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::RGIntersectionResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::RGIntersectionResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__RGIntersectionResult
    std::shared_ptr<deva_gaode_routing_msgs::msg::RGIntersectionResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__RGIntersectionResult
    std::shared_ptr<deva_gaode_routing_msgs::msg::RGIntersectionResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RGIntersectionResult_ & other) const
  {
    if (this->raw_link_id != other.raw_link_id) {
      return false;
    }
    if (this->inter_type != other.inter_type) {
      return false;
    }
    if (this->accessory_info != other.accessory_info) {
      return false;
    }
    if (this->enter_pos != other.enter_pos) {
      return false;
    }
    if (this->leave_pos != other.leave_pos) {
      return false;
    }
    if (this->inter_raw_link_ids != other.inter_raw_link_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const RGIntersectionResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RGIntersectionResult_

// alias to use template instance with default allocator
using RGIntersectionResult =
  deva_gaode_routing_msgs::msg::RGIntersectionResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_INTERSECTION_RESULT__STRUCT_HPP_
