// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/LaneTrafficInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TRAFFIC_INFO__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TRAFFIC_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__LaneTrafficInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__LaneTrafficInfo __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneTrafficInfo_
{
  using Type = LaneTrafficInfo_<ContainerAllocator>;

  explicit LaneTrafficInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_bus = false;
      this->lane_type = 0ul;
      this->arrow = 0ul;
    }
  }

  explicit LaneTrafficInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_bus = false;
      this->lane_type = 0ul;
      this->arrow = 0ul;
    }
  }

  // field types and members
  using _is_bus_type =
    bool;
  _is_bus_type is_bus;
  using _lane_type_type =
    uint32_t;
  _lane_type_type lane_type;
  using _arrow_type =
    uint32_t;
  _arrow_type arrow;

  // setters for named parameter idiom
  Type & set__is_bus(
    const bool & _arg)
  {
    this->is_bus = _arg;
    return *this;
  }
  Type & set__lane_type(
    const uint32_t & _arg)
  {
    this->lane_type = _arg;
    return *this;
  }
  Type & set__arrow(
    const uint32_t & _arg)
  {
    this->arrow = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::LaneTrafficInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::LaneTrafficInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::LaneTrafficInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::LaneTrafficInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::LaneTrafficInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::LaneTrafficInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::LaneTrafficInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::LaneTrafficInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::LaneTrafficInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::LaneTrafficInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__LaneTrafficInfo
    std::shared_ptr<deva_gaode_routing_msgs::msg::LaneTrafficInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__LaneTrafficInfo
    std::shared_ptr<deva_gaode_routing_msgs::msg::LaneTrafficInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneTrafficInfo_ & other) const
  {
    if (this->is_bus != other.is_bus) {
      return false;
    }
    if (this->lane_type != other.lane_type) {
      return false;
    }
    if (this->arrow != other.arrow) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneTrafficInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneTrafficInfo_

// alias to use template instance with default allocator
using LaneTrafficInfo =
  deva_gaode_routing_msgs::msg::LaneTrafficInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TRAFFIC_INFO__STRUCT_HPP_
