// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mLaneMarking.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE_MARKING__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE_MARKING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'lane_marking_id'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.hpp"
// Member 'lane_marking_coordinates'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__J6mLaneMarking __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__J6mLaneMarking __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct J6mLaneMarking_
{
  using Type = J6mLaneMarking_<ContainerAllocator>;

  explicit J6mLaneMarking_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lane_marking_id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_marking_type = 0;
      this->lane_marking_length = 0ul;
      this->lane_marking_order_number = 0;
      this->lane_marking_offset = 0ul;
      this->lane_marking_color = 0;
      this->lane_marking_confidence = 0ul;
    }
  }

  explicit J6mLaneMarking_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lane_marking_id(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_marking_type = 0;
      this->lane_marking_length = 0ul;
      this->lane_marking_order_number = 0;
      this->lane_marking_offset = 0ul;
      this->lane_marking_color = 0;
      this->lane_marking_confidence = 0ul;
    }
  }

  // field types and members
  using _lane_marking_id_type =
    deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>;
  _lane_marking_id_type lane_marking_id;
  using _lane_marking_type_type =
    uint8_t;
  _lane_marking_type_type lane_marking_type;
  using _lane_marking_length_type =
    uint32_t;
  _lane_marking_length_type lane_marking_length;
  using _lane_marking_order_number_type =
    uint8_t;
  _lane_marking_order_number_type lane_marking_order_number;
  using _lane_marking_offset_type =
    uint32_t;
  _lane_marking_offset_type lane_marking_offset;
  using _lane_marking_color_type =
    uint8_t;
  _lane_marking_color_type lane_marking_color;
  using _lane_marking_confidence_type =
    uint32_t;
  _lane_marking_confidence_type lane_marking_confidence;
  using _lane_marking_coordinates_type =
    std::vector<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>>>;
  _lane_marking_coordinates_type lane_marking_coordinates;

  // setters for named parameter idiom
  Type & set__lane_marking_id(
    const deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> & _arg)
  {
    this->lane_marking_id = _arg;
    return *this;
  }
  Type & set__lane_marking_type(
    const uint8_t & _arg)
  {
    this->lane_marking_type = _arg;
    return *this;
  }
  Type & set__lane_marking_length(
    const uint32_t & _arg)
  {
    this->lane_marking_length = _arg;
    return *this;
  }
  Type & set__lane_marking_order_number(
    const uint8_t & _arg)
  {
    this->lane_marking_order_number = _arg;
    return *this;
  }
  Type & set__lane_marking_offset(
    const uint32_t & _arg)
  {
    this->lane_marking_offset = _arg;
    return *this;
  }
  Type & set__lane_marking_color(
    const uint8_t & _arg)
  {
    this->lane_marking_color = _arg;
    return *this;
  }
  Type & set__lane_marking_confidence(
    const uint32_t & _arg)
  {
    this->lane_marking_confidence = _arg;
    return *this;
  }
  Type & set__lane_marking_coordinates(
    const std::vector<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>>> & _arg)
  {
    this->lane_marking_coordinates = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::J6mLaneMarking_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::J6mLaneMarking_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mLaneMarking_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mLaneMarking_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::J6mLaneMarking_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::J6mLaneMarking_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::J6mLaneMarking_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::J6mLaneMarking_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::J6mLaneMarking_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::J6mLaneMarking_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__J6mLaneMarking
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mLaneMarking_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__J6mLaneMarking
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mLaneMarking_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const J6mLaneMarking_ & other) const
  {
    if (this->lane_marking_id != other.lane_marking_id) {
      return false;
    }
    if (this->lane_marking_type != other.lane_marking_type) {
      return false;
    }
    if (this->lane_marking_length != other.lane_marking_length) {
      return false;
    }
    if (this->lane_marking_order_number != other.lane_marking_order_number) {
      return false;
    }
    if (this->lane_marking_offset != other.lane_marking_offset) {
      return false;
    }
    if (this->lane_marking_color != other.lane_marking_color) {
      return false;
    }
    if (this->lane_marking_confidence != other.lane_marking_confidence) {
      return false;
    }
    if (this->lane_marking_coordinates != other.lane_marking_coordinates) {
      return false;
    }
    return true;
  }
  bool operator!=(const J6mLaneMarking_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct J6mLaneMarking_

// alias to use template instance with default allocator
using J6mLaneMarking =
  deva_gaode_routing_msgs::msg::J6mLaneMarking_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE_MARKING__STRUCT_HPP_
