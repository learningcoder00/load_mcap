// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/IntersectionRoad.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'id'
// Member 'start_node_id'
// Member 'end_node_id'
// Member 'start_feature_point_id'
// Member 'end_feature_point_id'
// Member 'nexts'
// Member 'prevs'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__struct.hpp"
// Member 'geometry'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.hpp"
// Member 'relate_link_id'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__IntersectionRoad __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__IntersectionRoad __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IntersectionRoad_
{
  using Type = IntersectionRoad_<ContainerAllocator>;

  explicit IntersectionRoad_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    start_node_id(_init),
    end_node_id(_init),
    start_feature_point_id(_init),
    end_feature_point_id(_init),
    relate_link_id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_direction = 0;
      this->cross_turn_type = 0;
      this->has_traffic_light = false;
    }
  }

  explicit IntersectionRoad_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init),
    start_node_id(_alloc, _init),
    end_node_id(_alloc, _init),
    start_feature_point_id(_alloc, _init),
    end_feature_point_id(_alloc, _init),
    relate_link_id(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_direction = 0;
      this->cross_turn_type = 0;
      this->has_traffic_light = false;
    }
  }

  // field types and members
  using _id_type =
    deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>;
  _id_type id;
  using _link_direction_type =
    uint8_t;
  _link_direction_type link_direction;
  using _cross_turn_type_type =
    uint8_t;
  _cross_turn_type_type cross_turn_type;
  using _has_traffic_light_type =
    bool;
  _has_traffic_light_type has_traffic_light;
  using _geometry_type =
    std::vector<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>>>;
  _geometry_type geometry;
  using _start_node_id_type =
    deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>;
  _start_node_id_type start_node_id;
  using _end_node_id_type =
    deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>;
  _end_node_id_type end_node_id;
  using _start_feature_point_id_type =
    deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>;
  _start_feature_point_id_type start_feature_point_id;
  using _end_feature_point_id_type =
    deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>;
  _end_feature_point_id_type end_feature_point_id;
  using _relate_link_id_type =
    deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>;
  _relate_link_id_type relate_link_id;
  using _nexts_type =
    std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>>;
  _nexts_type nexts;
  using _prevs_type =
    std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>>;
  _prevs_type prevs;

  // setters for named parameter idiom
  Type & set__id(
    const deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__link_direction(
    const uint8_t & _arg)
  {
    this->link_direction = _arg;
    return *this;
  }
  Type & set__cross_turn_type(
    const uint8_t & _arg)
  {
    this->cross_turn_type = _arg;
    return *this;
  }
  Type & set__has_traffic_light(
    const bool & _arg)
  {
    this->has_traffic_light = _arg;
    return *this;
  }
  Type & set__geometry(
    const std::vector<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>>> & _arg)
  {
    this->geometry = _arg;
    return *this;
  }
  Type & set__start_node_id(
    const deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator> & _arg)
  {
    this->start_node_id = _arg;
    return *this;
  }
  Type & set__end_node_id(
    const deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator> & _arg)
  {
    this->end_node_id = _arg;
    return *this;
  }
  Type & set__start_feature_point_id(
    const deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator> & _arg)
  {
    this->start_feature_point_id = _arg;
    return *this;
  }
  Type & set__end_feature_point_id(
    const deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator> & _arg)
  {
    this->end_feature_point_id = _arg;
    return *this;
  }
  Type & set__relate_link_id(
    const deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> & _arg)
  {
    this->relate_link_id = _arg;
    return *this;
  }
  Type & set__nexts(
    const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>> & _arg)
  {
    this->nexts = _arg;
    return *this;
  }
  Type & set__prevs(
    const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>> & _arg)
  {
    this->prevs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::IntersectionRoad_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::IntersectionRoad_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::IntersectionRoad_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::IntersectionRoad_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::IntersectionRoad_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::IntersectionRoad_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::IntersectionRoad_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::IntersectionRoad_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::IntersectionRoad_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::IntersectionRoad_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__IntersectionRoad
    std::shared_ptr<deva_gaode_routing_msgs::msg::IntersectionRoad_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__IntersectionRoad
    std::shared_ptr<deva_gaode_routing_msgs::msg::IntersectionRoad_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IntersectionRoad_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->link_direction != other.link_direction) {
      return false;
    }
    if (this->cross_turn_type != other.cross_turn_type) {
      return false;
    }
    if (this->has_traffic_light != other.has_traffic_light) {
      return false;
    }
    if (this->geometry != other.geometry) {
      return false;
    }
    if (this->start_node_id != other.start_node_id) {
      return false;
    }
    if (this->end_node_id != other.end_node_id) {
      return false;
    }
    if (this->start_feature_point_id != other.start_feature_point_id) {
      return false;
    }
    if (this->end_feature_point_id != other.end_feature_point_id) {
      return false;
    }
    if (this->relate_link_id != other.relate_link_id) {
      return false;
    }
    if (this->nexts != other.nexts) {
      return false;
    }
    if (this->prevs != other.prevs) {
      return false;
    }
    return true;
  }
  bool operator!=(const IntersectionRoad_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IntersectionRoad_

// alias to use template instance with default allocator
using IntersectionRoad =
  deva_gaode_routing_msgs::msg::IntersectionRoad_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD__STRUCT_HPP_
