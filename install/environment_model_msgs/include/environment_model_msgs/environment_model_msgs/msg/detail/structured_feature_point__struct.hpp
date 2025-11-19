// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/StructuredFeaturePoint.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_FEATURE_POINT__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_FEATURE_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'id'
// Member 'prev_ids'
// Member 'next_ids'
// Member 'lane_ids'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__struct.hpp"
// Member 'position'
#include "environment_model_msgs/msg/detail/vec3d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__StructuredFeaturePoint __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__StructuredFeaturePoint __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StructuredFeaturePoint_
{
  using Type = StructuredFeaturePoint_<ContainerAllocator>;

  explicit StructuredFeaturePoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_id = 0ull;
      this->direction = 0;
      this->project_percent = 0.0f;
    }
  }

  explicit StructuredFeaturePoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init),
    position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link_id = 0ull;
      this->direction = 0;
      this->project_percent = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>;
  _id_type id;
  using _link_id_type =
    uint64_t;
  _link_id_type link_id;
  using _types_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _types_type types;
  using _direction_type =
    uint8_t;
  _direction_type direction;
  using _position_type =
    environment_model_msgs::msg::Vec3d_<ContainerAllocator>;
  _position_type position;
  using _project_percent_type =
    float;
  _project_percent_type project_percent;
  using _prev_ids_type =
    std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>>;
  _prev_ids_type prev_ids;
  using _next_ids_type =
    std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>>;
  _next_ids_type next_ids;
  using _lane_ids_type =
    std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>>;
  _lane_ids_type lane_ids;

  // setters for named parameter idiom
  Type & set__id(
    const deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__link_id(
    const uint64_t & _arg)
  {
    this->link_id = _arg;
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
  Type & set__position(
    const environment_model_msgs::msg::Vec3d_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__project_percent(
    const float & _arg)
  {
    this->project_percent = _arg;
    return *this;
  }
  Type & set__prev_ids(
    const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>> & _arg)
  {
    this->prev_ids = _arg;
    return *this;
  }
  Type & set__next_ids(
    const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>> & _arg)
  {
    this->next_ids = _arg;
    return *this;
  }
  Type & set__lane_ids(
    const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>> & _arg)
  {
    this->lane_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_model_msgs::msg::StructuredFeaturePoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::StructuredFeaturePoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::StructuredFeaturePoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::StructuredFeaturePoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::StructuredFeaturePoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::StructuredFeaturePoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::StructuredFeaturePoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::StructuredFeaturePoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::StructuredFeaturePoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::StructuredFeaturePoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__StructuredFeaturePoint
    std::shared_ptr<environment_model_msgs::msg::StructuredFeaturePoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__StructuredFeaturePoint
    std::shared_ptr<environment_model_msgs::msg::StructuredFeaturePoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StructuredFeaturePoint_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->link_id != other.link_id) {
      return false;
    }
    if (this->types != other.types) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->project_percent != other.project_percent) {
      return false;
    }
    if (this->prev_ids != other.prev_ids) {
      return false;
    }
    if (this->next_ids != other.next_ids) {
      return false;
    }
    if (this->lane_ids != other.lane_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const StructuredFeaturePoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StructuredFeaturePoint_

// alias to use template instance with default allocator
using StructuredFeaturePoint =
  environment_model_msgs::msg::StructuredFeaturePoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_FEATURE_POINT__STRUCT_HPP_
