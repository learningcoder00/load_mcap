// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs:msg/AvpNavigationPlanningDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_NAVIGATION_PLANNING_DEBUG_INFO__STRUCT_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_NAVIGATION_PLANNING_DEBUG_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
// Member 'planning_header'
// Member 'prediction_header'
// Member 'localization_header'
// Member 'chassis_header'
// Member 'avp_local_map_header'
// Member 'perception_map_header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'avp_debug_info'
#include "deva_planning_msgs/msg/detail/avp_debug_info__struct.hpp"
// Member 'nav_openspace_debug_info'
#include "deva_planning_msgs/msg/detail/nav_openspace_debug_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs__msg__AvpNavigationPlanningDebugInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs__msg__AvpNavigationPlanningDebugInfo __declspec(deprecated)
#endif

namespace deva_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AvpNavigationPlanningDebugInfo_
{
  using Type = AvpNavigationPlanningDebugInfo_<ContainerAllocator>;

  explicit AvpNavigationPlanningDebugInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    planning_header(_init),
    prediction_header(_init),
    localization_header(_init),
    chassis_header(_init),
    avp_local_map_header(_init),
    perception_map_header(_init),
    avp_debug_info(_init),
    nav_openspace_debug_info(_init)
  {
    (void)_init;
  }

  explicit AvpNavigationPlanningDebugInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    planning_header(_alloc, _init),
    prediction_header(_alloc, _init),
    localization_header(_alloc, _init),
    chassis_header(_alloc, _init),
    avp_local_map_header(_alloc, _init),
    perception_map_header(_alloc, _init),
    avp_debug_info(_alloc, _init),
    nav_openspace_debug_info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _planning_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _planning_header_type planning_header;
  using _prediction_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _prediction_header_type prediction_header;
  using _localization_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _localization_header_type localization_header;
  using _chassis_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _chassis_header_type chassis_header;
  using _avp_local_map_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _avp_local_map_header_type avp_local_map_header;
  using _perception_map_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _perception_map_header_type perception_map_header;
  using _avp_debug_info_type =
    deva_planning_msgs::msg::AvpDebugInfo_<ContainerAllocator>;
  _avp_debug_info_type avp_debug_info;
  using _nav_openspace_debug_info_type =
    deva_planning_msgs::msg::NavOpenspaceDebugInfo_<ContainerAllocator>;
  _nav_openspace_debug_info_type nav_openspace_debug_info;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__planning_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->planning_header = _arg;
    return *this;
  }
  Type & set__prediction_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->prediction_header = _arg;
    return *this;
  }
  Type & set__localization_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->localization_header = _arg;
    return *this;
  }
  Type & set__chassis_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->chassis_header = _arg;
    return *this;
  }
  Type & set__avp_local_map_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->avp_local_map_header = _arg;
    return *this;
  }
  Type & set__perception_map_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->perception_map_header = _arg;
    return *this;
  }
  Type & set__avp_debug_info(
    const deva_planning_msgs::msg::AvpDebugInfo_<ContainerAllocator> & _arg)
  {
    this->avp_debug_info = _arg;
    return *this;
  }
  Type & set__nav_openspace_debug_info(
    const deva_planning_msgs::msg::NavOpenspaceDebugInfo_<ContainerAllocator> & _arg)
  {
    this->nav_openspace_debug_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs__msg__AvpNavigationPlanningDebugInfo
    std::shared_ptr<deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs__msg__AvpNavigationPlanningDebugInfo
    std::shared_ptr<deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AvpNavigationPlanningDebugInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->planning_header != other.planning_header) {
      return false;
    }
    if (this->prediction_header != other.prediction_header) {
      return false;
    }
    if (this->localization_header != other.localization_header) {
      return false;
    }
    if (this->chassis_header != other.chassis_header) {
      return false;
    }
    if (this->avp_local_map_header != other.avp_local_map_header) {
      return false;
    }
    if (this->perception_map_header != other.perception_map_header) {
      return false;
    }
    if (this->avp_debug_info != other.avp_debug_info) {
      return false;
    }
    if (this->nav_openspace_debug_info != other.nav_openspace_debug_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const AvpNavigationPlanningDebugInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AvpNavigationPlanningDebugInfo_

// alias to use template instance with default allocator
using AvpNavigationPlanningDebugInfo =
  deva_planning_msgs::msg::AvpNavigationPlanningDebugInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_NAVIGATION_PLANNING_DEBUG_INFO__STRUCT_HPP_
