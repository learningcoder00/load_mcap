// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/AdasisMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ADASIS_MAP__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ADASIS_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"
// Member 'ehp_position'
#include "deva_gaode_routing_msgs/msg/detail/ehp_position__struct.hpp"
// Member 'ehp_meta_data'
#include "deva_gaode_routing_msgs/msg/detail/ehp_meta_data__struct.hpp"
// Member 'ehp_segments'
#include "deva_gaode_routing_msgs/msg/detail/ehp_segment__struct.hpp"
// Member 'ehp_stubs'
#include "deva_gaode_routing_msgs/msg/detail/ehp_stub__struct.hpp"
// Member 'ehp_profile_shorts'
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_short__struct.hpp"
// Member 'ehp_profile_longs'
#include "deva_gaode_routing_msgs/msg/detail/ehp_profile_long__struct.hpp"
// Member 'link'
#include "deva_gaode_routing_msgs/msg/detail/link__struct.hpp"
// Member 'node'
#include "deva_gaode_routing_msgs/msg/detail/node__struct.hpp"
// Member 'feature_points'
#include "deva_gaode_routing_msgs/msg/detail/feature_point_by_id__struct.hpp"
// Member 'lanes'
#include "deva_gaode_routing_msgs/msg/detail/lane__struct.hpp"
// Member 'stoplines'
#include "deva_gaode_routing_msgs/msg/detail/stop_line__struct.hpp"
// Member 'intersection_road_nodes'
#include "deva_gaode_routing_msgs/msg/detail/intersection_road_node__struct.hpp"
// Member 'intersection_roads'
#include "deva_gaode_routing_msgs/msg/detail/intersection_road__struct.hpp"
// Member 'position_match_link'
#include "deva_gaode_routing_msgs/msg/detail/position_match_link__struct.hpp"
// Member 'heterogeneous_match_link'
#include "deva_gaode_routing_msgs/msg/detail/heterogeneous_match_link__struct.hpp"
// Member 'route_guide_response'
#include "deva_gaode_routing_msgs/msg/detail/route_guide_response__struct.hpp"
// Member 'j6m_data'
#include "deva_gaode_routing_msgs/msg/detail/j6m_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__AdasisMap __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__AdasisMap __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AdasisMap_
{
  using Type = AdasisMap_<ContainerAllocator>;

  explicit AdasisMap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    ehp_position(_init),
    ehp_meta_data(_init),
    position_match_link(_init),
    heterogeneous_match_link(_init),
    route_guide_response(_init),
    j6m_data(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_update_ehp_position = 0;
      this->is_update_ehp_meta_data = 0;
      this->is_update_ehp_segments = 0;
      this->is_update_ehp_stubs = 0;
      this->is_update_ehp_profile_shorts = 0;
      this->is_update_ehp_profile_longs = 0;
    }
  }

  explicit AdasisMap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ehp_position(_alloc, _init),
    ehp_meta_data(_alloc, _init),
    position_match_link(_alloc, _init),
    heterogeneous_match_link(_alloc, _init),
    route_guide_response(_alloc, _init),
    j6m_data(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_update_ehp_position = 0;
      this->is_update_ehp_meta_data = 0;
      this->is_update_ehp_segments = 0;
      this->is_update_ehp_stubs = 0;
      this->is_update_ehp_profile_shorts = 0;
      this->is_update_ehp_profile_longs = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _is_update_ehp_position_type =
    uint8_t;
  _is_update_ehp_position_type is_update_ehp_position;
  using _ehp_position_type =
    deva_gaode_routing_msgs::msg::EhpPosition_<ContainerAllocator>;
  _ehp_position_type ehp_position;
  using _is_update_ehp_meta_data_type =
    uint8_t;
  _is_update_ehp_meta_data_type is_update_ehp_meta_data;
  using _ehp_meta_data_type =
    deva_gaode_routing_msgs::msg::EhpMetaData_<ContainerAllocator>;
  _ehp_meta_data_type ehp_meta_data;
  using _is_update_ehp_segments_type =
    uint8_t;
  _is_update_ehp_segments_type is_update_ehp_segments;
  using _ehp_segments_type =
    std::vector<deva_gaode_routing_msgs::msg::EhpSegment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::EhpSegment_<ContainerAllocator>>>;
  _ehp_segments_type ehp_segments;
  using _is_update_ehp_stubs_type =
    uint8_t;
  _is_update_ehp_stubs_type is_update_ehp_stubs;
  using _ehp_stubs_type =
    std::vector<deva_gaode_routing_msgs::msg::EhpStub_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::EhpStub_<ContainerAllocator>>>;
  _ehp_stubs_type ehp_stubs;
  using _is_update_ehp_profile_shorts_type =
    uint8_t;
  _is_update_ehp_profile_shorts_type is_update_ehp_profile_shorts;
  using _ehp_profile_shorts_type =
    std::vector<deva_gaode_routing_msgs::msg::EhpProfileShort_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::EhpProfileShort_<ContainerAllocator>>>;
  _ehp_profile_shorts_type ehp_profile_shorts;
  using _is_update_ehp_profile_longs_type =
    uint8_t;
  _is_update_ehp_profile_longs_type is_update_ehp_profile_longs;
  using _ehp_profile_longs_type =
    std::vector<deva_gaode_routing_msgs::msg::EhpProfileLong_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::EhpProfileLong_<ContainerAllocator>>>;
  _ehp_profile_longs_type ehp_profile_longs;
  using _link_type =
    std::vector<deva_gaode_routing_msgs::msg::Link_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Link_<ContainerAllocator>>>;
  _link_type link;
  using _node_type =
    std::vector<deva_gaode_routing_msgs::msg::Node_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Node_<ContainerAllocator>>>;
  _node_type node;
  using _feature_points_type =
    std::vector<deva_gaode_routing_msgs::msg::FeaturePointById_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeaturePointById_<ContainerAllocator>>>;
  _feature_points_type feature_points;
  using _lanes_type =
    std::vector<deva_gaode_routing_msgs::msg::LANE_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LANE_<ContainerAllocator>>>;
  _lanes_type lanes;
  using _stoplines_type =
    std::vector<deva_gaode_routing_msgs::msg::StopLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::StopLine_<ContainerAllocator>>>;
  _stoplines_type stoplines;
  using _intersection_road_nodes_type =
    std::vector<deva_gaode_routing_msgs::msg::IntersectionRoadNode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::IntersectionRoadNode_<ContainerAllocator>>>;
  _intersection_road_nodes_type intersection_road_nodes;
  using _intersection_roads_type =
    std::vector<deva_gaode_routing_msgs::msg::IntersectionRoad_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::IntersectionRoad_<ContainerAllocator>>>;
  _intersection_roads_type intersection_roads;
  using _position_match_link_type =
    deva_gaode_routing_msgs::msg::PositionMatchLink_<ContainerAllocator>;
  _position_match_link_type position_match_link;
  using _heterogeneous_match_link_type =
    deva_gaode_routing_msgs::msg::HeterogeneousMatchLink_<ContainerAllocator>;
  _heterogeneous_match_link_type heterogeneous_match_link;
  using _route_guide_response_type =
    deva_gaode_routing_msgs::msg::RouteGuideResponse_<ContainerAllocator>;
  _route_guide_response_type route_guide_response;
  using _j6m_data_type =
    deva_gaode_routing_msgs::msg::J6mData_<ContainerAllocator>;
  _j6m_data_type j6m_data;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__is_update_ehp_position(
    const uint8_t & _arg)
  {
    this->is_update_ehp_position = _arg;
    return *this;
  }
  Type & set__ehp_position(
    const deva_gaode_routing_msgs::msg::EhpPosition_<ContainerAllocator> & _arg)
  {
    this->ehp_position = _arg;
    return *this;
  }
  Type & set__is_update_ehp_meta_data(
    const uint8_t & _arg)
  {
    this->is_update_ehp_meta_data = _arg;
    return *this;
  }
  Type & set__ehp_meta_data(
    const deva_gaode_routing_msgs::msg::EhpMetaData_<ContainerAllocator> & _arg)
  {
    this->ehp_meta_data = _arg;
    return *this;
  }
  Type & set__is_update_ehp_segments(
    const uint8_t & _arg)
  {
    this->is_update_ehp_segments = _arg;
    return *this;
  }
  Type & set__ehp_segments(
    const std::vector<deva_gaode_routing_msgs::msg::EhpSegment_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::EhpSegment_<ContainerAllocator>>> & _arg)
  {
    this->ehp_segments = _arg;
    return *this;
  }
  Type & set__is_update_ehp_stubs(
    const uint8_t & _arg)
  {
    this->is_update_ehp_stubs = _arg;
    return *this;
  }
  Type & set__ehp_stubs(
    const std::vector<deva_gaode_routing_msgs::msg::EhpStub_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::EhpStub_<ContainerAllocator>>> & _arg)
  {
    this->ehp_stubs = _arg;
    return *this;
  }
  Type & set__is_update_ehp_profile_shorts(
    const uint8_t & _arg)
  {
    this->is_update_ehp_profile_shorts = _arg;
    return *this;
  }
  Type & set__ehp_profile_shorts(
    const std::vector<deva_gaode_routing_msgs::msg::EhpProfileShort_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::EhpProfileShort_<ContainerAllocator>>> & _arg)
  {
    this->ehp_profile_shorts = _arg;
    return *this;
  }
  Type & set__is_update_ehp_profile_longs(
    const uint8_t & _arg)
  {
    this->is_update_ehp_profile_longs = _arg;
    return *this;
  }
  Type & set__ehp_profile_longs(
    const std::vector<deva_gaode_routing_msgs::msg::EhpProfileLong_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::EhpProfileLong_<ContainerAllocator>>> & _arg)
  {
    this->ehp_profile_longs = _arg;
    return *this;
  }
  Type & set__link(
    const std::vector<deva_gaode_routing_msgs::msg::Link_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Link_<ContainerAllocator>>> & _arg)
  {
    this->link = _arg;
    return *this;
  }
  Type & set__node(
    const std::vector<deva_gaode_routing_msgs::msg::Node_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Node_<ContainerAllocator>>> & _arg)
  {
    this->node = _arg;
    return *this;
  }
  Type & set__feature_points(
    const std::vector<deva_gaode_routing_msgs::msg::FeaturePointById_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeaturePointById_<ContainerAllocator>>> & _arg)
  {
    this->feature_points = _arg;
    return *this;
  }
  Type & set__lanes(
    const std::vector<deva_gaode_routing_msgs::msg::LANE_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LANE_<ContainerAllocator>>> & _arg)
  {
    this->lanes = _arg;
    return *this;
  }
  Type & set__stoplines(
    const std::vector<deva_gaode_routing_msgs::msg::StopLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::StopLine_<ContainerAllocator>>> & _arg)
  {
    this->stoplines = _arg;
    return *this;
  }
  Type & set__intersection_road_nodes(
    const std::vector<deva_gaode_routing_msgs::msg::IntersectionRoadNode_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::IntersectionRoadNode_<ContainerAllocator>>> & _arg)
  {
    this->intersection_road_nodes = _arg;
    return *this;
  }
  Type & set__intersection_roads(
    const std::vector<deva_gaode_routing_msgs::msg::IntersectionRoad_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::IntersectionRoad_<ContainerAllocator>>> & _arg)
  {
    this->intersection_roads = _arg;
    return *this;
  }
  Type & set__position_match_link(
    const deva_gaode_routing_msgs::msg::PositionMatchLink_<ContainerAllocator> & _arg)
  {
    this->position_match_link = _arg;
    return *this;
  }
  Type & set__heterogeneous_match_link(
    const deva_gaode_routing_msgs::msg::HeterogeneousMatchLink_<ContainerAllocator> & _arg)
  {
    this->heterogeneous_match_link = _arg;
    return *this;
  }
  Type & set__route_guide_response(
    const deva_gaode_routing_msgs::msg::RouteGuideResponse_<ContainerAllocator> & _arg)
  {
    this->route_guide_response = _arg;
    return *this;
  }
  Type & set__j6m_data(
    const deva_gaode_routing_msgs::msg::J6mData_<ContainerAllocator> & _arg)
  {
    this->j6m_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::AdasisMap_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::AdasisMap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::AdasisMap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::AdasisMap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::AdasisMap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::AdasisMap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::AdasisMap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::AdasisMap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::AdasisMap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::AdasisMap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__AdasisMap
    std::shared_ptr<deva_gaode_routing_msgs::msg::AdasisMap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__AdasisMap
    std::shared_ptr<deva_gaode_routing_msgs::msg::AdasisMap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AdasisMap_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->is_update_ehp_position != other.is_update_ehp_position) {
      return false;
    }
    if (this->ehp_position != other.ehp_position) {
      return false;
    }
    if (this->is_update_ehp_meta_data != other.is_update_ehp_meta_data) {
      return false;
    }
    if (this->ehp_meta_data != other.ehp_meta_data) {
      return false;
    }
    if (this->is_update_ehp_segments != other.is_update_ehp_segments) {
      return false;
    }
    if (this->ehp_segments != other.ehp_segments) {
      return false;
    }
    if (this->is_update_ehp_stubs != other.is_update_ehp_stubs) {
      return false;
    }
    if (this->ehp_stubs != other.ehp_stubs) {
      return false;
    }
    if (this->is_update_ehp_profile_shorts != other.is_update_ehp_profile_shorts) {
      return false;
    }
    if (this->ehp_profile_shorts != other.ehp_profile_shorts) {
      return false;
    }
    if (this->is_update_ehp_profile_longs != other.is_update_ehp_profile_longs) {
      return false;
    }
    if (this->ehp_profile_longs != other.ehp_profile_longs) {
      return false;
    }
    if (this->link != other.link) {
      return false;
    }
    if (this->node != other.node) {
      return false;
    }
    if (this->feature_points != other.feature_points) {
      return false;
    }
    if (this->lanes != other.lanes) {
      return false;
    }
    if (this->stoplines != other.stoplines) {
      return false;
    }
    if (this->intersection_road_nodes != other.intersection_road_nodes) {
      return false;
    }
    if (this->intersection_roads != other.intersection_roads) {
      return false;
    }
    if (this->position_match_link != other.position_match_link) {
      return false;
    }
    if (this->heterogeneous_match_link != other.heterogeneous_match_link) {
      return false;
    }
    if (this->route_guide_response != other.route_guide_response) {
      return false;
    }
    if (this->j6m_data != other.j6m_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const AdasisMap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AdasisMap_

// alias to use template instance with default allocator
using AdasisMap =
  deva_gaode_routing_msgs::msg::AdasisMap_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ADASIS_MAP__STRUCT_HPP_
