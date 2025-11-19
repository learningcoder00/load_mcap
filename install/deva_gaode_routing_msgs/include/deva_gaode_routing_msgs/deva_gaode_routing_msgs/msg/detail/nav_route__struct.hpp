// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/NavRoute.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NAV_ROUTE__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NAV_ROUTE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__NavRoute __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__NavRoute __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavRoute_
{
  using Type = NavRoute_<ContainerAllocator>;

  explicit NavRoute_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->navi_status = 0ul;
      this->match_status = 0ul;
      this->remain_distance = 0.0;
    }
  }

  explicit NavRoute_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->navi_status = 0ul;
      this->match_status = 0ul;
      this->remain_distance = 0.0;
    }
  }

  // field types and members
  using _route_list_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _route_list_type route_list;
  using _navi_status_type =
    uint32_t;
  _navi_status_type navi_status;
  using _match_status_type =
    uint32_t;
  _match_status_type match_status;
  using _remain_distance_type =
    double;
  _remain_distance_type remain_distance;

  // setters for named parameter idiom
  Type & set__route_list(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->route_list = _arg;
    return *this;
  }
  Type & set__navi_status(
    const uint32_t & _arg)
  {
    this->navi_status = _arg;
    return *this;
  }
  Type & set__match_status(
    const uint32_t & _arg)
  {
    this->match_status = _arg;
    return *this;
  }
  Type & set__remain_distance(
    const double & _arg)
  {
    this->remain_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::NavRoute_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::NavRoute_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::NavRoute_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::NavRoute_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::NavRoute_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::NavRoute_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::NavRoute_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::NavRoute_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::NavRoute_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::NavRoute_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__NavRoute
    std::shared_ptr<deva_gaode_routing_msgs::msg::NavRoute_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__NavRoute
    std::shared_ptr<deva_gaode_routing_msgs::msg::NavRoute_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavRoute_ & other) const
  {
    if (this->route_list != other.route_list) {
      return false;
    }
    if (this->navi_status != other.navi_status) {
      return false;
    }
    if (this->match_status != other.match_status) {
      return false;
    }
    if (this->remain_distance != other.remain_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavRoute_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavRoute_

// alias to use template instance with default allocator
using NavRoute =
  deva_gaode_routing_msgs::msg::NavRoute_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__NAV_ROUTE__STRUCT_HPP_
