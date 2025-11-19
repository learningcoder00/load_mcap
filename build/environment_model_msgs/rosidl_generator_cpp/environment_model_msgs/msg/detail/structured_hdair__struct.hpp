// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/StructuredHdair.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_HDAIR__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_HDAIR__STRUCT_HPP_

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
// Member 'links'
#include "environment_model_msgs/msg/detail/structured_link__struct.hpp"
// Member 'feature_points'
#include "environment_model_msgs/msg/detail/structured_feature_point__struct.hpp"
// Member 'lanes'
#include "deva_gaode_routing_msgs/msg/detail/lane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__StructuredHdair __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__StructuredHdair __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StructuredHdair_
{
  using Type = StructuredHdair_<ContainerAllocator>;

  explicit StructuredHdair_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_link_id = 0ull;
    }
  }

  explicit StructuredHdair_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_link_id = 0ull;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _current_link_id_type =
    uint64_t;
  _current_link_id_type current_link_id;
  using _links_type =
    std::vector<environment_model_msgs::msg::StructuredLink_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::StructuredLink_<ContainerAllocator>>>;
  _links_type links;
  using _feature_points_type =
    std::vector<environment_model_msgs::msg::StructuredFeaturePoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::StructuredFeaturePoint_<ContainerAllocator>>>;
  _feature_points_type feature_points;
  using _lanes_type =
    std::vector<deva_gaode_routing_msgs::msg::LANE_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LANE_<ContainerAllocator>>>;
  _lanes_type lanes;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__current_link_id(
    const uint64_t & _arg)
  {
    this->current_link_id = _arg;
    return *this;
  }
  Type & set__links(
    const std::vector<environment_model_msgs::msg::StructuredLink_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::StructuredLink_<ContainerAllocator>>> & _arg)
  {
    this->links = _arg;
    return *this;
  }
  Type & set__feature_points(
    const std::vector<environment_model_msgs::msg::StructuredFeaturePoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::StructuredFeaturePoint_<ContainerAllocator>>> & _arg)
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

  // constant declarations

  // pointer types
  using RawPtr =
    environment_model_msgs::msg::StructuredHdair_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::StructuredHdair_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::StructuredHdair_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::StructuredHdair_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::StructuredHdair_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::StructuredHdair_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::StructuredHdair_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::StructuredHdair_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::StructuredHdair_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::StructuredHdair_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__StructuredHdair
    std::shared_ptr<environment_model_msgs::msg::StructuredHdair_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__StructuredHdair
    std::shared_ptr<environment_model_msgs::msg::StructuredHdair_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StructuredHdair_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->current_link_id != other.current_link_id) {
      return false;
    }
    if (this->links != other.links) {
      return false;
    }
    if (this->feature_points != other.feature_points) {
      return false;
    }
    if (this->lanes != other.lanes) {
      return false;
    }
    return true;
  }
  bool operator!=(const StructuredHdair_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StructuredHdair_

// alias to use template instance with default allocator
using StructuredHdair =
  environment_model_msgs::msg::StructuredHdair_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_HDAIR__STRUCT_HPP_
