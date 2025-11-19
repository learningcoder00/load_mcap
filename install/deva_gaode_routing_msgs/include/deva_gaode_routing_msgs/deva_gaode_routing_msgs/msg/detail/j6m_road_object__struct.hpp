// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mRoadObject.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_ROAD_OBJECT__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_ROAD_OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'road_object_id'
// Member 'referenced_lane_ids'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.hpp"
// Member 'road_object_center_point'
// Member 'coordinates'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__J6mRoadObject __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__J6mRoadObject __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct J6mRoadObject_
{
  using Type = J6mRoadObject_<ContainerAllocator>;

  explicit J6mRoadObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : road_object_id(_init),
    road_object_center_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->road_object_type = 0;
      this->road_object_subtype = 0;
      this->road_object_heading = 0;
      this->road_attributes = "";
      this->confidence = 0ul;
      this->offset = 0ul;
    }
  }

  explicit J6mRoadObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : road_object_id(_alloc, _init),
    road_object_center_point(_alloc, _init),
    road_attributes(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->road_object_type = 0;
      this->road_object_subtype = 0;
      this->road_object_heading = 0;
      this->road_attributes = "";
      this->confidence = 0ul;
      this->offset = 0ul;
    }
  }

  // field types and members
  using _road_object_id_type =
    deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>;
  _road_object_id_type road_object_id;
  using _road_object_type_type =
    uint8_t;
  _road_object_type_type road_object_type;
  using _road_object_subtype_type =
    uint8_t;
  _road_object_subtype_type road_object_subtype;
  using _road_object_center_point_type =
    deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>;
  _road_object_center_point_type road_object_center_point;
  using _road_object_heading_type =
    uint16_t;
  _road_object_heading_type road_object_heading;
  using _road_attributes_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _road_attributes_type road_attributes;
  using _confidence_type =
    uint32_t;
  _confidence_type confidence;
  using _offset_type =
    uint32_t;
  _offset_type offset;
  using _coordinates_type =
    std::vector<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>>>;
  _coordinates_type coordinates;
  using _referenced_lane_ids_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _referenced_lane_ids_type referenced_lane_ids;

  // setters for named parameter idiom
  Type & set__road_object_id(
    const deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> & _arg)
  {
    this->road_object_id = _arg;
    return *this;
  }
  Type & set__road_object_type(
    const uint8_t & _arg)
  {
    this->road_object_type = _arg;
    return *this;
  }
  Type & set__road_object_subtype(
    const uint8_t & _arg)
  {
    this->road_object_subtype = _arg;
    return *this;
  }
  Type & set__road_object_center_point(
    const deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator> & _arg)
  {
    this->road_object_center_point = _arg;
    return *this;
  }
  Type & set__road_object_heading(
    const uint16_t & _arg)
  {
    this->road_object_heading = _arg;
    return *this;
  }
  Type & set__road_attributes(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->road_attributes = _arg;
    return *this;
  }
  Type & set__confidence(
    const uint32_t & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__offset(
    const uint32_t & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__coordinates(
    const std::vector<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>>> & _arg)
  {
    this->coordinates = _arg;
    return *this;
  }
  Type & set__referenced_lane_ids(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->referenced_lane_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::J6mRoadObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::J6mRoadObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mRoadObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mRoadObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::J6mRoadObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::J6mRoadObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::J6mRoadObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::J6mRoadObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::J6mRoadObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::J6mRoadObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__J6mRoadObject
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mRoadObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__J6mRoadObject
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mRoadObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const J6mRoadObject_ & other) const
  {
    if (this->road_object_id != other.road_object_id) {
      return false;
    }
    if (this->road_object_type != other.road_object_type) {
      return false;
    }
    if (this->road_object_subtype != other.road_object_subtype) {
      return false;
    }
    if (this->road_object_center_point != other.road_object_center_point) {
      return false;
    }
    if (this->road_object_heading != other.road_object_heading) {
      return false;
    }
    if (this->road_attributes != other.road_attributes) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    if (this->coordinates != other.coordinates) {
      return false;
    }
    if (this->referenced_lane_ids != other.referenced_lane_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const J6mRoadObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct J6mRoadObject_

// alias to use template instance with default allocator
using J6mRoadObject =
  deva_gaode_routing_msgs::msg::J6mRoadObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_ROAD_OBJECT__STRUCT_HPP_
