// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/LaneById.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_BY_ID__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_BY_ID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'id'
// Member 'feature_point_id_s'
// Member 'previous_id_s'
// Member 'next_id_s'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__struct.hpp"
// Member 'lane_group_id_type'
#include "deva_gaode_routing_msgs/msg/detail/lane_group_id_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__LaneById __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__LaneById __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneById_
{
  using Type = LaneById_<ContainerAllocator>;

  explicit LaneById_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    lane_group_id_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = 0;
      this->lane_width = 0.0f;
      this->lane_start_width = 0.0f;
      this->lane_end_width = 0.0f;
    }
  }

  explicit LaneById_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init),
    lane_group_id_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = 0;
      this->lane_width = 0.0f;
      this->lane_start_width = 0.0f;
      this->lane_end_width = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>;
  _id_type id;
  using _lane_group_id_type_type =
    deva_gaode_routing_msgs::msg::LaneGroupIDType_<ContainerAllocator>;
  _lane_group_id_type_type lane_group_id_type;
  using _feature_point_id_s_type =
    std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>>;
  _feature_point_id_s_type feature_point_id_s;
  using _direction_type =
    uint8_t;
  _direction_type direction;
  using _lane_type_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _lane_type_type lane_type;
  using _border_types_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _border_types_type border_types;
  using _border_colors_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _border_colors_type border_colors;
  using _lane_width_type =
    float;
  _lane_width_type lane_width;
  using _lane_start_width_type =
    float;
  _lane_start_width_type lane_start_width;
  using _lane_end_width_type =
    float;
  _lane_end_width_type lane_end_width;
  using _previous_id_s_type =
    std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>>;
  _previous_id_s_type previous_id_s;
  using _next_id_s_type =
    std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>>;
  _next_id_s_type next_id_s;

  // setters for named parameter idiom
  Type & set__id(
    const deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__lane_group_id_type(
    const deva_gaode_routing_msgs::msg::LaneGroupIDType_<ContainerAllocator> & _arg)
  {
    this->lane_group_id_type = _arg;
    return *this;
  }
  Type & set__feature_point_id_s(
    const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>> & _arg)
  {
    this->feature_point_id_s = _arg;
    return *this;
  }
  Type & set__direction(
    const uint8_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__lane_type(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->lane_type = _arg;
    return *this;
  }
  Type & set__border_types(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->border_types = _arg;
    return *this;
  }
  Type & set__border_colors(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->border_colors = _arg;
    return *this;
  }
  Type & set__lane_width(
    const float & _arg)
  {
    this->lane_width = _arg;
    return *this;
  }
  Type & set__lane_start_width(
    const float & _arg)
  {
    this->lane_start_width = _arg;
    return *this;
  }
  Type & set__lane_end_width(
    const float & _arg)
  {
    this->lane_end_width = _arg;
    return *this;
  }
  Type & set__previous_id_s(
    const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>> & _arg)
  {
    this->previous_id_s = _arg;
    return *this;
  }
  Type & set__next_id_s(
    const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>> & _arg)
  {
    this->next_id_s = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::LaneById_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::LaneById_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::LaneById_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::LaneById_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::LaneById_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::LaneById_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::LaneById_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::LaneById_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::LaneById_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::LaneById_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__LaneById
    std::shared_ptr<deva_gaode_routing_msgs::msg::LaneById_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__LaneById
    std::shared_ptr<deva_gaode_routing_msgs::msg::LaneById_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneById_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->lane_group_id_type != other.lane_group_id_type) {
      return false;
    }
    if (this->feature_point_id_s != other.feature_point_id_s) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->lane_type != other.lane_type) {
      return false;
    }
    if (this->border_types != other.border_types) {
      return false;
    }
    if (this->border_colors != other.border_colors) {
      return false;
    }
    if (this->lane_width != other.lane_width) {
      return false;
    }
    if (this->lane_start_width != other.lane_start_width) {
      return false;
    }
    if (this->lane_end_width != other.lane_end_width) {
      return false;
    }
    if (this->previous_id_s != other.previous_id_s) {
      return false;
    }
    if (this->next_id_s != other.next_id_s) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneById_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneById_

// alias to use template instance with default allocator
using LaneById =
  deva_gaode_routing_msgs::msg::LaneById_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_BY_ID__STRUCT_HPP_
