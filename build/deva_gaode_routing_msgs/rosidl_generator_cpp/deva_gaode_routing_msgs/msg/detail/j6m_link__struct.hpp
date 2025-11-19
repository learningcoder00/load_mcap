// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mLink.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LINK__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LINK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'id'
// Member 'successor_linkid_s'
// Member 'predecessor_linkid_s'
// Member 'referenced_lane_id_s'
// Member 'referenced_intersection_id_s'
// Member 'referenced_lanemarking_id_s'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.hpp"
// Member 'coordinates'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__J6mLink __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__J6mLink __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct J6mLink_
{
  using Type = J6mLink_<ContainerAllocator>;

  explicit J6mLink_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->road_type = 0;
      this->length = 0ul;
      this->confidence = 0ul;
      this->travel_direction = 0;
    }
  }

  explicit J6mLink_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->road_type = 0;
      this->length = 0ul;
      this->confidence = 0ul;
      this->travel_direction = 0;
    }
  }

  // field types and members
  using _id_type =
    deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>;
  _id_type id;
  using _road_type_type =
    uint8_t;
  _road_type_type road_type;
  using _length_type =
    uint32_t;
  _length_type length;
  using _confidence_type =
    uint32_t;
  _confidence_type confidence;
  using _travel_direction_type =
    uint8_t;
  _travel_direction_type travel_direction;
  using _coordinates_type =
    std::vector<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>>>;
  _coordinates_type coordinates;
  using _successor_linkid_s_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _successor_linkid_s_type successor_linkid_s;
  using _predecessor_linkid_s_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _predecessor_linkid_s_type predecessor_linkid_s;
  using _referenced_lane_id_s_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _referenced_lane_id_s_type referenced_lane_id_s;
  using _referenced_intersection_id_s_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _referenced_intersection_id_s_type referenced_intersection_id_s;
  using _referenced_lanemarking_id_s_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _referenced_lanemarking_id_s_type referenced_lanemarking_id_s;

  // setters for named parameter idiom
  Type & set__id(
    const deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__road_type(
    const uint8_t & _arg)
  {
    this->road_type = _arg;
    return *this;
  }
  Type & set__length(
    const uint32_t & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__confidence(
    const uint32_t & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__travel_direction(
    const uint8_t & _arg)
  {
    this->travel_direction = _arg;
    return *this;
  }
  Type & set__coordinates(
    const std::vector<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>>> & _arg)
  {
    this->coordinates = _arg;
    return *this;
  }
  Type & set__successor_linkid_s(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->successor_linkid_s = _arg;
    return *this;
  }
  Type & set__predecessor_linkid_s(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->predecessor_linkid_s = _arg;
    return *this;
  }
  Type & set__referenced_lane_id_s(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->referenced_lane_id_s = _arg;
    return *this;
  }
  Type & set__referenced_intersection_id_s(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->referenced_intersection_id_s = _arg;
    return *this;
  }
  Type & set__referenced_lanemarking_id_s(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->referenced_lanemarking_id_s = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::J6mLink_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::J6mLink_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mLink_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mLink_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::J6mLink_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::J6mLink_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::J6mLink_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::J6mLink_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::J6mLink_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::J6mLink_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__J6mLink
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mLink_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__J6mLink
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mLink_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const J6mLink_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->road_type != other.road_type) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->travel_direction != other.travel_direction) {
      return false;
    }
    if (this->coordinates != other.coordinates) {
      return false;
    }
    if (this->successor_linkid_s != other.successor_linkid_s) {
      return false;
    }
    if (this->predecessor_linkid_s != other.predecessor_linkid_s) {
      return false;
    }
    if (this->referenced_lane_id_s != other.referenced_lane_id_s) {
      return false;
    }
    if (this->referenced_intersection_id_s != other.referenced_intersection_id_s) {
      return false;
    }
    if (this->referenced_lanemarking_id_s != other.referenced_lanemarking_id_s) {
      return false;
    }
    return true;
  }
  bool operator!=(const J6mLink_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct J6mLink_

// alias to use template instance with default allocator
using J6mLink =
  deva_gaode_routing_msgs::msg::J6mLink_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LINK__STRUCT_HPP_
