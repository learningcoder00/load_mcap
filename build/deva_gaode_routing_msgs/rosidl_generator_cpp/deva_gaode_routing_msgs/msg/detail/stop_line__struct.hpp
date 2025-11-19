// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/StopLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__STOP_LINE__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__STOP_LINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'id'
// Member 'related_lane_ids'
// Member 'related_intersection_road_ids'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__struct.hpp"
// Member 'location'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.hpp"
// Member 'related_node_id'
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__StopLine __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__StopLine __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StopLine_
{
  using Type = StopLine_<ContainerAllocator>;

  explicit StopLine_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    location(_init),
    related_node_id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit StopLine_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init),
    location(_alloc, _init),
    related_node_id(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  // field types and members
  using _id_type =
    deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>;
  _id_type id;
  using _type_type =
    uint8_t;
  _type_type type;
  using _location_type =
    deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>;
  _location_type location;
  using _related_node_id_type =
    deva_gaode_routing_msgs::msg::NodeIDType_<ContainerAllocator>;
  _related_node_id_type related_node_id;
  using _related_lane_ids_type =
    std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>>;
  _related_lane_ids_type related_lane_ids;
  using _related_intersection_road_ids_type =
    std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>>;
  _related_intersection_road_ids_type related_intersection_road_ids;

  // setters for named parameter idiom
  Type & set__id(
    const deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__location(
    const deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator> & _arg)
  {
    this->location = _arg;
    return *this;
  }
  Type & set__related_node_id(
    const deva_gaode_routing_msgs::msg::NodeIDType_<ContainerAllocator> & _arg)
  {
    this->related_node_id = _arg;
    return *this;
  }
  Type & set__related_lane_ids(
    const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>> & _arg)
  {
    this->related_lane_ids = _arg;
    return *this;
  }
  Type & set__related_intersection_road_ids(
    const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>> & _arg)
  {
    this->related_intersection_road_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::StopLine_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::StopLine_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::StopLine_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::StopLine_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::StopLine_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::StopLine_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::StopLine_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::StopLine_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::StopLine_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::StopLine_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__StopLine
    std::shared_ptr<deva_gaode_routing_msgs::msg::StopLine_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__StopLine
    std::shared_ptr<deva_gaode_routing_msgs::msg::StopLine_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopLine_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->location != other.location) {
      return false;
    }
    if (this->related_node_id != other.related_node_id) {
      return false;
    }
    if (this->related_lane_ids != other.related_lane_ids) {
      return false;
    }
    if (this->related_intersection_road_ids != other.related_intersection_road_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopLine_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopLine_

// alias to use template instance with default allocator
using StopLine =
  deva_gaode_routing_msgs::msg::StopLine_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__STOP_LINE__STRUCT_HPP_
