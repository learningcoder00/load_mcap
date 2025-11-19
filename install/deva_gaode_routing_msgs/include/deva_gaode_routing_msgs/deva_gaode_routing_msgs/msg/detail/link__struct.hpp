// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/Link.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'link_attribute'
#include "deva_gaode_routing_msgs/msg/detail/link_attribute__struct.hpp"
// Member 'coordinate'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.hpp"
// Member 'topology'
#include "deva_gaode_routing_msgs/msg/detail/topology__struct.hpp"
// Member 'link_curvature'
#include "deva_gaode_routing_msgs/msg/detail/link_curvature__struct.hpp"
// Member 'guidance'
#include "deva_gaode_routing_msgs/msg/detail/guidance__struct.hpp"
// Member 'start_id'
// Member 'end_id'
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__struct.hpp"
// Member 'feature_point_ids'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__struct.hpp"
// Member 'start'
// Member 'end'
#include "deva_gaode_routing_msgs/msg/detail/node__struct.hpp"
// Member 'feature_points'
#include "deva_gaode_routing_msgs/msg/detail/feature_point__struct.hpp"
// Member 'lanes'
#include "deva_gaode_routing_msgs/msg/detail/lane_by_id__struct.hpp"
// Member 'j6m_intersection_entry_infos'
#include "deva_gaode_routing_msgs/msg/detail/j6m_intersection_entry_info__struct.hpp"
// Member 'j6m_lane_ids'
// Member 'j6m_link_ids'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__Link __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__Link __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Link_
{
  using Type = Link_<ContainerAllocator>;

  explicit Link_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : link_attribute(_init),
    topology(_init),
    link_curvature(_init),
    start_id(_init),
    end_id(_init),
    start(_init),
    end(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->raw_id = 0ull;
    }
  }

  explicit Link_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : link_attribute(_alloc, _init),
    topology(_alloc, _init),
    link_curvature(_alloc, _init),
    start_id(_alloc, _init),
    end_id(_alloc, _init),
    start(_alloc, _init),
    end(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->raw_id = 0ull;
    }
  }

  // field types and members
  using _link_attribute_type =
    deva_gaode_routing_msgs::msg::LinkAttribute_<ContainerAllocator>;
  _link_attribute_type link_attribute;
  using _coordinate_type =
    std::vector<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>>>;
  _coordinate_type coordinate;
  using _raw_id_type =
    uint64_t;
  _raw_id_type raw_id;
  using _topology_type =
    deva_gaode_routing_msgs::msg::Topology_<ContainerAllocator>;
  _topology_type topology;
  using _link_curvature_type =
    deva_gaode_routing_msgs::msg::LinkCurvature_<ContainerAllocator>;
  _link_curvature_type link_curvature;
  using _guidance_type =
    std::vector<deva_gaode_routing_msgs::msg::Guidance_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Guidance_<ContainerAllocator>>>;
  _guidance_type guidance;
  using _start_id_type =
    deva_gaode_routing_msgs::msg::NodeIDType_<ContainerAllocator>;
  _start_id_type start_id;
  using _end_id_type =
    deva_gaode_routing_msgs::msg::NodeIDType_<ContainerAllocator>;
  _end_id_type end_id;
  using _feature_point_ids_type =
    std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>>;
  _feature_point_ids_type feature_point_ids;
  using _start_type =
    deva_gaode_routing_msgs::msg::Node_<ContainerAllocator>;
  _start_type start;
  using _end_type =
    deva_gaode_routing_msgs::msg::Node_<ContainerAllocator>;
  _end_type end;
  using _feature_points_type =
    std::vector<deva_gaode_routing_msgs::msg::FeaturePoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeaturePoint_<ContainerAllocator>>>;
  _feature_points_type feature_points;
  using _lanes_type =
    std::vector<deva_gaode_routing_msgs::msg::LaneById_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LaneById_<ContainerAllocator>>>;
  _lanes_type lanes;
  using _j6m_intersection_entry_infos_type =
    std::vector<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo_<ContainerAllocator>>>;
  _j6m_intersection_entry_infos_type j6m_intersection_entry_infos;
  using _j6m_lane_ids_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _j6m_lane_ids_type j6m_lane_ids;
  using _j6m_link_ids_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _j6m_link_ids_type j6m_link_ids;

  // setters for named parameter idiom
  Type & set__link_attribute(
    const deva_gaode_routing_msgs::msg::LinkAttribute_<ContainerAllocator> & _arg)
  {
    this->link_attribute = _arg;
    return *this;
  }
  Type & set__coordinate(
    const std::vector<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>>> & _arg)
  {
    this->coordinate = _arg;
    return *this;
  }
  Type & set__raw_id(
    const uint64_t & _arg)
  {
    this->raw_id = _arg;
    return *this;
  }
  Type & set__topology(
    const deva_gaode_routing_msgs::msg::Topology_<ContainerAllocator> & _arg)
  {
    this->topology = _arg;
    return *this;
  }
  Type & set__link_curvature(
    const deva_gaode_routing_msgs::msg::LinkCurvature_<ContainerAllocator> & _arg)
  {
    this->link_curvature = _arg;
    return *this;
  }
  Type & set__guidance(
    const std::vector<deva_gaode_routing_msgs::msg::Guidance_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Guidance_<ContainerAllocator>>> & _arg)
  {
    this->guidance = _arg;
    return *this;
  }
  Type & set__start_id(
    const deva_gaode_routing_msgs::msg::NodeIDType_<ContainerAllocator> & _arg)
  {
    this->start_id = _arg;
    return *this;
  }
  Type & set__end_id(
    const deva_gaode_routing_msgs::msg::NodeIDType_<ContainerAllocator> & _arg)
  {
    this->end_id = _arg;
    return *this;
  }
  Type & set__feature_point_ids(
    const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>> & _arg)
  {
    this->feature_point_ids = _arg;
    return *this;
  }
  Type & set__start(
    const deva_gaode_routing_msgs::msg::Node_<ContainerAllocator> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__end(
    const deva_gaode_routing_msgs::msg::Node_<ContainerAllocator> & _arg)
  {
    this->end = _arg;
    return *this;
  }
  Type & set__feature_points(
    const std::vector<deva_gaode_routing_msgs::msg::FeaturePoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeaturePoint_<ContainerAllocator>>> & _arg)
  {
    this->feature_points = _arg;
    return *this;
  }
  Type & set__lanes(
    const std::vector<deva_gaode_routing_msgs::msg::LaneById_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LaneById_<ContainerAllocator>>> & _arg)
  {
    this->lanes = _arg;
    return *this;
  }
  Type & set__j6m_intersection_entry_infos(
    const std::vector<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo_<ContainerAllocator>>> & _arg)
  {
    this->j6m_intersection_entry_infos = _arg;
    return *this;
  }
  Type & set__j6m_lane_ids(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->j6m_lane_ids = _arg;
    return *this;
  }
  Type & set__j6m_link_ids(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->j6m_link_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::Link_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::Link_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::Link_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::Link_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::Link_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::Link_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::Link_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::Link_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::Link_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::Link_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__Link
    std::shared_ptr<deva_gaode_routing_msgs::msg::Link_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__Link
    std::shared_ptr<deva_gaode_routing_msgs::msg::Link_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Link_ & other) const
  {
    if (this->link_attribute != other.link_attribute) {
      return false;
    }
    if (this->coordinate != other.coordinate) {
      return false;
    }
    if (this->raw_id != other.raw_id) {
      return false;
    }
    if (this->topology != other.topology) {
      return false;
    }
    if (this->link_curvature != other.link_curvature) {
      return false;
    }
    if (this->guidance != other.guidance) {
      return false;
    }
    if (this->start_id != other.start_id) {
      return false;
    }
    if (this->end_id != other.end_id) {
      return false;
    }
    if (this->feature_point_ids != other.feature_point_ids) {
      return false;
    }
    if (this->start != other.start) {
      return false;
    }
    if (this->end != other.end) {
      return false;
    }
    if (this->feature_points != other.feature_points) {
      return false;
    }
    if (this->lanes != other.lanes) {
      return false;
    }
    if (this->j6m_intersection_entry_infos != other.j6m_intersection_entry_infos) {
      return false;
    }
    if (this->j6m_lane_ids != other.j6m_lane_ids) {
      return false;
    }
    if (this->j6m_link_ids != other.j6m_link_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const Link_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Link_

// alias to use template instance with default allocator
using Link =
  deva_gaode_routing_msgs::msg::Link_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK__STRUCT_HPP_
