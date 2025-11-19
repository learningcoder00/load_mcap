// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/RouteGuideResponse.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_GUIDE_RESPONSE__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_GUIDE_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'route_guides'
#include "deva_gaode_routing_msgs/msg/detail/route_guide__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__RouteGuideResponse __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__RouteGuideResponse __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RouteGuideResponse_
{
  using Type = RouteGuideResponse_<ContainerAllocator>;

  explicit RouteGuideResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit RouteGuideResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _route_guides_type =
    std::vector<deva_gaode_routing_msgs::msg::RouteGuide_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::RouteGuide_<ContainerAllocator>>>;
  _route_guides_type route_guides;

  // setters for named parameter idiom
  Type & set__route_guides(
    const std::vector<deva_gaode_routing_msgs::msg::RouteGuide_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::RouteGuide_<ContainerAllocator>>> & _arg)
  {
    this->route_guides = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::RouteGuideResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::RouteGuideResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::RouteGuideResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::RouteGuideResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::RouteGuideResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::RouteGuideResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::RouteGuideResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::RouteGuideResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::RouteGuideResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::RouteGuideResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__RouteGuideResponse
    std::shared_ptr<deva_gaode_routing_msgs::msg::RouteGuideResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__RouteGuideResponse
    std::shared_ptr<deva_gaode_routing_msgs::msg::RouteGuideResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RouteGuideResponse_ & other) const
  {
    if (this->route_guides != other.route_guides) {
      return false;
    }
    return true;
  }
  bool operator!=(const RouteGuideResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RouteGuideResponse_

// alias to use template instance with default allocator
using RouteGuideResponse =
  deva_gaode_routing_msgs::msg::RouteGuideResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_GUIDE_RESPONSE__STRUCT_HPP_
