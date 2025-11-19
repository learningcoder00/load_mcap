// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mIntersection.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'intersection_id'
// Member 'link_id_s'
// Member 'intersection_successor_id_s'
// Member 'intersection_predecessor_id_s'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.hpp"
// Member 'intersection_coordinates'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__J6mIntersection __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__J6mIntersection __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct J6mIntersection_
{
  using Type = J6mIntersection_<ContainerAllocator>;

  explicit J6mIntersection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : intersection_id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_lane_num_change_areas = false;
    }
  }

  explicit J6mIntersection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : intersection_id(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_lane_num_change_areas = false;
    }
  }

  // field types and members
  using _intersection_id_type =
    deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>;
  _intersection_id_type intersection_id;
  using _link_id_s_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _link_id_s_type link_id_s;
  using _intersection_successor_id_s_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _intersection_successor_id_s_type intersection_successor_id_s;
  using _intersection_predecessor_id_s_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _intersection_predecessor_id_s_type intersection_predecessor_id_s;
  using _is_lane_num_change_areas_type =
    bool;
  _is_lane_num_change_areas_type is_lane_num_change_areas;
  using _intersection_coordinates_type =
    std::vector<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>>>;
  _intersection_coordinates_type intersection_coordinates;

  // setters for named parameter idiom
  Type & set__intersection_id(
    const deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> & _arg)
  {
    this->intersection_id = _arg;
    return *this;
  }
  Type & set__link_id_s(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->link_id_s = _arg;
    return *this;
  }
  Type & set__intersection_successor_id_s(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->intersection_successor_id_s = _arg;
    return *this;
  }
  Type & set__intersection_predecessor_id_s(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->intersection_predecessor_id_s = _arg;
    return *this;
  }
  Type & set__is_lane_num_change_areas(
    const bool & _arg)
  {
    this->is_lane_num_change_areas = _arg;
    return *this;
  }
  Type & set__intersection_coordinates(
    const std::vector<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>>> & _arg)
  {
    this->intersection_coordinates = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::J6mIntersection_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::J6mIntersection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mIntersection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mIntersection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::J6mIntersection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::J6mIntersection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::J6mIntersection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::J6mIntersection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::J6mIntersection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::J6mIntersection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__J6mIntersection
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mIntersection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__J6mIntersection
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mIntersection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const J6mIntersection_ & other) const
  {
    if (this->intersection_id != other.intersection_id) {
      return false;
    }
    if (this->link_id_s != other.link_id_s) {
      return false;
    }
    if (this->intersection_successor_id_s != other.intersection_successor_id_s) {
      return false;
    }
    if (this->intersection_predecessor_id_s != other.intersection_predecessor_id_s) {
      return false;
    }
    if (this->is_lane_num_change_areas != other.is_lane_num_change_areas) {
      return false;
    }
    if (this->intersection_coordinates != other.intersection_coordinates) {
      return false;
    }
    return true;
  }
  bool operator!=(const J6mIntersection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct J6mIntersection_

// alias to use template instance with default allocator
using J6mIntersection =
  deva_gaode_routing_msgs::msg::J6mIntersection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION__STRUCT_HPP_
