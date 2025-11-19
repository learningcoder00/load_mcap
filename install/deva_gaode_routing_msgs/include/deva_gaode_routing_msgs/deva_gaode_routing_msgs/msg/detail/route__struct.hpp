// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'route_points'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.hpp"
// Member 'rg_intersection_result'
#include "deva_gaode_routing_msgs/msg/detail/rg_intersection_result__struct.hpp"
// Member 'rg_lane_info_result'
#include "deva_gaode_routing_msgs/msg/detail/rg_lane_info_result__struct.hpp"
// Member 'rg_red_light_result'
#include "deva_gaode_routing_msgs/msg/detail/rg_red_light_result__struct.hpp"
// Member 'rg_tips_result'
#include "deva_gaode_routing_msgs/msg/detail/rgv_tips_point_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__Route __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__Route __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Route_
{
  using Type = Route_<ContainerAllocator>;

  explicit Route_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Route_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _route_points_type =
    std::vector<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>>>;
  _route_points_type route_points;
  using _rg_intersection_result_type =
    std::vector<deva_gaode_routing_msgs::msg::RGIntersectionResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::RGIntersectionResult_<ContainerAllocator>>>;
  _rg_intersection_result_type rg_intersection_result;
  using _rg_lane_info_result_type =
    std::vector<deva_gaode_routing_msgs::msg::RGLaneInfoResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::RGLaneInfoResult_<ContainerAllocator>>>;
  _rg_lane_info_result_type rg_lane_info_result;
  using _rg_red_light_result_type =
    std::vector<deva_gaode_routing_msgs::msg::RGRedLightResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::RGRedLightResult_<ContainerAllocator>>>;
  _rg_red_light_result_type rg_red_light_result;
  using _rg_tips_result_type =
    std::vector<deva_gaode_routing_msgs::msg::RGVTipsPointResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::RGVTipsPointResult_<ContainerAllocator>>>;
  _rg_tips_result_type rg_tips_result;

  // setters for named parameter idiom
  Type & set__route_points(
    const std::vector<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>>> & _arg)
  {
    this->route_points = _arg;
    return *this;
  }
  Type & set__rg_intersection_result(
    const std::vector<deva_gaode_routing_msgs::msg::RGIntersectionResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::RGIntersectionResult_<ContainerAllocator>>> & _arg)
  {
    this->rg_intersection_result = _arg;
    return *this;
  }
  Type & set__rg_lane_info_result(
    const std::vector<deva_gaode_routing_msgs::msg::RGLaneInfoResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::RGLaneInfoResult_<ContainerAllocator>>> & _arg)
  {
    this->rg_lane_info_result = _arg;
    return *this;
  }
  Type & set__rg_red_light_result(
    const std::vector<deva_gaode_routing_msgs::msg::RGRedLightResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::RGRedLightResult_<ContainerAllocator>>> & _arg)
  {
    this->rg_red_light_result = _arg;
    return *this;
  }
  Type & set__rg_tips_result(
    const std::vector<deva_gaode_routing_msgs::msg::RGVTipsPointResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::RGVTipsPointResult_<ContainerAllocator>>> & _arg)
  {
    this->rg_tips_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::Route_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::Route_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::Route_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::Route_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::Route_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::Route_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::Route_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::Route_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::Route_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::Route_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__Route
    std::shared_ptr<deva_gaode_routing_msgs::msg::Route_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__Route
    std::shared_ptr<deva_gaode_routing_msgs::msg::Route_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Route_ & other) const
  {
    if (this->route_points != other.route_points) {
      return false;
    }
    if (this->rg_intersection_result != other.rg_intersection_result) {
      return false;
    }
    if (this->rg_lane_info_result != other.rg_lane_info_result) {
      return false;
    }
    if (this->rg_red_light_result != other.rg_red_light_result) {
      return false;
    }
    if (this->rg_tips_result != other.rg_tips_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Route_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Route_

// alias to use template instance with default allocator
using Route =
  deva_gaode_routing_msgs::msg::Route_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE__STRUCT_HPP_
