// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/LaneRestriction.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_RESTRICTION__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_RESTRICTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'id'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__LaneRestriction __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__LaneRestriction __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneRestriction_
{
  using Type = LaneRestriction_<ContainerAllocator>;

  explicit LaneRestriction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->restrict_time_period = "";
      this->lane_direction = 0;
      this->lane_retriction_type = 0;
      this->lane_range_start = 0;
      this->lane_range_end = 0;
    }
  }

  explicit LaneRestriction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init),
    restrict_time_period(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->restrict_time_period = "";
      this->lane_direction = 0;
      this->lane_retriction_type = 0;
      this->lane_range_start = 0;
      this->lane_range_end = 0;
    }
  }

  // field types and members
  using _id_type =
    deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>;
  _id_type id;
  using _limit_vehicle_type_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _limit_vehicle_type_type limit_vehicle_type;
  using _special_time_type_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _special_time_type_type special_time_type;
  using _restrict_time_period_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _restrict_time_period_type restrict_time_period;
  using _lane_direction_type =
    uint8_t;
  _lane_direction_type lane_direction;
  using _lane_retriction_type_type =
    uint8_t;
  _lane_retriction_type_type lane_retriction_type;
  using _lane_range_start_type =
    uint16_t;
  _lane_range_start_type lane_range_start;
  using _lane_range_end_type =
    uint16_t;
  _lane_range_end_type lane_range_end;

  // setters for named parameter idiom
  Type & set__id(
    const deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__limit_vehicle_type(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->limit_vehicle_type = _arg;
    return *this;
  }
  Type & set__special_time_type(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->special_time_type = _arg;
    return *this;
  }
  Type & set__restrict_time_period(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->restrict_time_period = _arg;
    return *this;
  }
  Type & set__lane_direction(
    const uint8_t & _arg)
  {
    this->lane_direction = _arg;
    return *this;
  }
  Type & set__lane_retriction_type(
    const uint8_t & _arg)
  {
    this->lane_retriction_type = _arg;
    return *this;
  }
  Type & set__lane_range_start(
    const uint16_t & _arg)
  {
    this->lane_range_start = _arg;
    return *this;
  }
  Type & set__lane_range_end(
    const uint16_t & _arg)
  {
    this->lane_range_end = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::LaneRestriction_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::LaneRestriction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::LaneRestriction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::LaneRestriction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::LaneRestriction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::LaneRestriction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::LaneRestriction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::LaneRestriction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::LaneRestriction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::LaneRestriction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__LaneRestriction
    std::shared_ptr<deva_gaode_routing_msgs::msg::LaneRestriction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__LaneRestriction
    std::shared_ptr<deva_gaode_routing_msgs::msg::LaneRestriction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneRestriction_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->limit_vehicle_type != other.limit_vehicle_type) {
      return false;
    }
    if (this->special_time_type != other.special_time_type) {
      return false;
    }
    if (this->restrict_time_period != other.restrict_time_period) {
      return false;
    }
    if (this->lane_direction != other.lane_direction) {
      return false;
    }
    if (this->lane_retriction_type != other.lane_retriction_type) {
      return false;
    }
    if (this->lane_range_start != other.lane_range_start) {
      return false;
    }
    if (this->lane_range_end != other.lane_range_end) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneRestriction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneRestriction_

// alias to use template instance with default allocator
using LaneRestriction =
  deva_gaode_routing_msgs::msg::LaneRestriction_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_RESTRICTION__STRUCT_HPP_
