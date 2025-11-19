// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_DATA__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'j6m_links'
#include "deva_gaode_routing_msgs/msg/detail/j6m_link__struct.hpp"
// Member 'j6m_intersections'
#include "deva_gaode_routing_msgs/msg/detail/j6m_intersection__struct.hpp"
// Member 'j6m_lanes'
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane__struct.hpp"
// Member 'j6m_lane_markings'
#include "deva_gaode_routing_msgs/msg/detail/j6m_lane_marking__struct.hpp"
// Member 'j6m_road_objects'
#include "deva_gaode_routing_msgs/msg/detail/j6m_road_object__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__J6mData __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__J6mData __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct J6mData_
{
  using Type = J6mData_<ContainerAllocator>;

  explicit J6mData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit J6mData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _j6m_links_type =
    std::vector<deva_gaode_routing_msgs::msg::J6mLink_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::J6mLink_<ContainerAllocator>>>;
  _j6m_links_type j6m_links;
  using _j6m_intersections_type =
    std::vector<deva_gaode_routing_msgs::msg::J6mIntersection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::J6mIntersection_<ContainerAllocator>>>;
  _j6m_intersections_type j6m_intersections;
  using _j6m_lanes_type =
    std::vector<deva_gaode_routing_msgs::msg::J6mLane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::J6mLane_<ContainerAllocator>>>;
  _j6m_lanes_type j6m_lanes;
  using _j6m_lane_markings_type =
    std::vector<deva_gaode_routing_msgs::msg::J6mLaneMarking_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::J6mLaneMarking_<ContainerAllocator>>>;
  _j6m_lane_markings_type j6m_lane_markings;
  using _j6m_road_objects_type =
    std::vector<deva_gaode_routing_msgs::msg::J6mRoadObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::J6mRoadObject_<ContainerAllocator>>>;
  _j6m_road_objects_type j6m_road_objects;

  // setters for named parameter idiom
  Type & set__j6m_links(
    const std::vector<deva_gaode_routing_msgs::msg::J6mLink_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::J6mLink_<ContainerAllocator>>> & _arg)
  {
    this->j6m_links = _arg;
    return *this;
  }
  Type & set__j6m_intersections(
    const std::vector<deva_gaode_routing_msgs::msg::J6mIntersection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::J6mIntersection_<ContainerAllocator>>> & _arg)
  {
    this->j6m_intersections = _arg;
    return *this;
  }
  Type & set__j6m_lanes(
    const std::vector<deva_gaode_routing_msgs::msg::J6mLane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::J6mLane_<ContainerAllocator>>> & _arg)
  {
    this->j6m_lanes = _arg;
    return *this;
  }
  Type & set__j6m_lane_markings(
    const std::vector<deva_gaode_routing_msgs::msg::J6mLaneMarking_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::J6mLaneMarking_<ContainerAllocator>>> & _arg)
  {
    this->j6m_lane_markings = _arg;
    return *this;
  }
  Type & set__j6m_road_objects(
    const std::vector<deva_gaode_routing_msgs::msg::J6mRoadObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::J6mRoadObject_<ContainerAllocator>>> & _arg)
  {
    this->j6m_road_objects = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::J6mData_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::J6mData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::J6mData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::J6mData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::J6mData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::J6mData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::J6mData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::J6mData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__J6mData
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__J6mData
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const J6mData_ & other) const
  {
    if (this->j6m_links != other.j6m_links) {
      return false;
    }
    if (this->j6m_intersections != other.j6m_intersections) {
      return false;
    }
    if (this->j6m_lanes != other.j6m_lanes) {
      return false;
    }
    if (this->j6m_lane_markings != other.j6m_lane_markings) {
      return false;
    }
    if (this->j6m_road_objects != other.j6m_road_objects) {
      return false;
    }
    return true;
  }
  bool operator!=(const J6mData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct J6mData_

// alias to use template instance with default allocator
using J6mData =
  deva_gaode_routing_msgs::msg::J6mData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_DATA__STRUCT_HPP_
