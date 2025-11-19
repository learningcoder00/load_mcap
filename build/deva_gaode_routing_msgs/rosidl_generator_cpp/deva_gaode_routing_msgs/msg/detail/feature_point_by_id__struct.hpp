// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/FeaturePointById.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT_BY_ID__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT_BY_ID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'id'
// Member 'lane_id_s'
// Member 'previous_id_s'
// Member 'next_id_s'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__struct.hpp"
// Member 'coordinate'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.hpp"
// Member 'link_id'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__FeaturePointById __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__FeaturePointById __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FeaturePointById_
{
  using Type = FeaturePointById_<ContainerAllocator>;

  explicit FeaturePointById_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    coordinate(_init),
    link_id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = 0;
      this->project_percent = 0.0f;
    }
  }

  explicit FeaturePointById_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init),
    coordinate(_alloc, _init),
    link_id(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = 0;
      this->project_percent = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>;
  _id_type id;
  using _types_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _types_type types;
  using _direction_type =
    uint8_t;
  _direction_type direction;
  using _coordinate_type =
    deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>;
  _coordinate_type coordinate;
  using _link_id_type =
    deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>;
  _link_id_type link_id;
  using _project_percent_type =
    float;
  _project_percent_type project_percent;
  using _lane_id_s_type =
    std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>>;
  _lane_id_s_type lane_id_s;
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
  Type & set__types(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->types = _arg;
    return *this;
  }
  Type & set__direction(
    const uint8_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__coordinate(
    const deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator> & _arg)
  {
    this->coordinate = _arg;
    return *this;
  }
  Type & set__link_id(
    const deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> & _arg)
  {
    this->link_id = _arg;
    return *this;
  }
  Type & set__project_percent(
    const float & _arg)
  {
    this->project_percent = _arg;
    return *this;
  }
  Type & set__lane_id_s(
    const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>> & _arg)
  {
    this->lane_id_s = _arg;
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
    deva_gaode_routing_msgs::msg::FeaturePointById_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::FeaturePointById_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::FeaturePointById_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::FeaturePointById_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::FeaturePointById_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::FeaturePointById_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::FeaturePointById_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::FeaturePointById_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::FeaturePointById_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::FeaturePointById_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__FeaturePointById
    std::shared_ptr<deva_gaode_routing_msgs::msg::FeaturePointById_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__FeaturePointById
    std::shared_ptr<deva_gaode_routing_msgs::msg::FeaturePointById_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FeaturePointById_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->types != other.types) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->coordinate != other.coordinate) {
      return false;
    }
    if (this->link_id != other.link_id) {
      return false;
    }
    if (this->project_percent != other.project_percent) {
      return false;
    }
    if (this->lane_id_s != other.lane_id_s) {
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
  bool operator!=(const FeaturePointById_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FeaturePointById_

// alias to use template instance with default allocator
using FeaturePointById =
  deva_gaode_routing_msgs::msg::FeaturePointById_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT_BY_ID__STRUCT_HPP_
