// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/FeaturePoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'feature_point_id_s'
// Member 'feature_point_id_s_by_link_id'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__struct.hpp"
// Member 'feature_point_id_by_id'
#include "deva_gaode_routing_msgs/msg/detail/feature_point_by_id__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__FeaturePoint __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__FeaturePoint __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FeaturePoint_
{
  using Type = FeaturePoint_<ContainerAllocator>;

  explicit FeaturePoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feature_point_id_by_id(_init)
  {
    (void)_init;
  }

  explicit FeaturePoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feature_point_id_by_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _feature_point_id_s_type =
    std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>>;
  _feature_point_id_s_type feature_point_id_s;
  using _feature_point_id_s_by_link_id_type =
    std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>>;
  _feature_point_id_s_by_link_id_type feature_point_id_s_by_link_id;
  using _feature_point_id_by_id_type =
    deva_gaode_routing_msgs::msg::FeaturePointById_<ContainerAllocator>;
  _feature_point_id_by_id_type feature_point_id_by_id;

  // setters for named parameter idiom
  Type & set__feature_point_id_s(
    const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>> & _arg)
  {
    this->feature_point_id_s = _arg;
    return *this;
  }
  Type & set__feature_point_id_s_by_link_id(
    const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>> & _arg)
  {
    this->feature_point_id_s_by_link_id = _arg;
    return *this;
  }
  Type & set__feature_point_id_by_id(
    const deva_gaode_routing_msgs::msg::FeaturePointById_<ContainerAllocator> & _arg)
  {
    this->feature_point_id_by_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::FeaturePoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::FeaturePoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::FeaturePoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::FeaturePoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::FeaturePoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::FeaturePoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::FeaturePoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::FeaturePoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::FeaturePoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::FeaturePoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__FeaturePoint
    std::shared_ptr<deva_gaode_routing_msgs::msg::FeaturePoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__FeaturePoint
    std::shared_ptr<deva_gaode_routing_msgs::msg::FeaturePoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FeaturePoint_ & other) const
  {
    if (this->feature_point_id_s != other.feature_point_id_s) {
      return false;
    }
    if (this->feature_point_id_s_by_link_id != other.feature_point_id_s_by_link_id) {
      return false;
    }
    if (this->feature_point_id_by_id != other.feature_point_id_by_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const FeaturePoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FeaturePoint_

// alias to use template instance with default allocator
using FeaturePoint =
  deva_gaode_routing_msgs::msg::FeaturePoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__FEATURE_POINT__STRUCT_HPP_
