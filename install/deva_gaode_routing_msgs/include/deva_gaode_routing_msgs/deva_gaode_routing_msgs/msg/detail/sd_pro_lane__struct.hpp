// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProLane.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'next_lanes'
// Member 'pre_lanes'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_topo__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__SdProLane __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__SdProLane __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SdProLane_
{
  using Type = SdProLane_<ContainerAllocator>;

  explicit SdProLane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->lane_arrow_type = 0ul;
      this->category_location = 0ul;
      this->category_vehicle = 0ul;
      this->category_special = 0ul;
      this->lane_num = 0l;
      this->length = 0l;
      this->direction = 0l;
      this->transition = 0ul;
    }
  }

  explicit SdProLane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->lane_arrow_type = 0ul;
      this->category_location = 0ul;
      this->category_vehicle = 0ul;
      this->category_special = 0ul;
      this->lane_num = 0l;
      this->length = 0l;
      this->direction = 0l;
      this->transition = 0ul;
    }
  }

  // field types and members
  using _id_type =
    uint64_t;
  _id_type id;
  using _lane_arrow_type_type =
    uint32_t;
  _lane_arrow_type_type lane_arrow_type;
  using _category_location_type =
    uint32_t;
  _category_location_type category_location;
  using _category_vehicle_type =
    uint32_t;
  _category_vehicle_type category_vehicle;
  using _category_special_type =
    uint32_t;
  _category_special_type category_special;
  using _lane_num_type =
    int32_t;
  _lane_num_type lane_num;
  using _length_type =
    int32_t;
  _length_type length;
  using _direction_type =
    int32_t;
  _direction_type direction;
  using _next_lanes_type =
    std::vector<deva_gaode_routing_msgs::msg::SdProLaneTopo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::SdProLaneTopo_<ContainerAllocator>>>;
  _next_lanes_type next_lanes;
  using _pre_lanes_type =
    std::vector<deva_gaode_routing_msgs::msg::SdProLaneTopo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::SdProLaneTopo_<ContainerAllocator>>>;
  _pre_lanes_type pre_lanes;
  using _transition_type =
    uint32_t;
  _transition_type transition;

  // setters for named parameter idiom
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__lane_arrow_type(
    const uint32_t & _arg)
  {
    this->lane_arrow_type = _arg;
    return *this;
  }
  Type & set__category_location(
    const uint32_t & _arg)
  {
    this->category_location = _arg;
    return *this;
  }
  Type & set__category_vehicle(
    const uint32_t & _arg)
  {
    this->category_vehicle = _arg;
    return *this;
  }
  Type & set__category_special(
    const uint32_t & _arg)
  {
    this->category_special = _arg;
    return *this;
  }
  Type & set__lane_num(
    const int32_t & _arg)
  {
    this->lane_num = _arg;
    return *this;
  }
  Type & set__length(
    const int32_t & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__direction(
    const int32_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__next_lanes(
    const std::vector<deva_gaode_routing_msgs::msg::SdProLaneTopo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::SdProLaneTopo_<ContainerAllocator>>> & _arg)
  {
    this->next_lanes = _arg;
    return *this;
  }
  Type & set__pre_lanes(
    const std::vector<deva_gaode_routing_msgs::msg::SdProLaneTopo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::SdProLaneTopo_<ContainerAllocator>>> & _arg)
  {
    this->pre_lanes = _arg;
    return *this;
  }
  Type & set__transition(
    const uint32_t & _arg)
  {
    this->transition = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::SdProLane_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::SdProLane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProLane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProLane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::SdProLane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::SdProLane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::SdProLane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::SdProLane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::SdProLane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::SdProLane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__SdProLane
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProLane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__SdProLane
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProLane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SdProLane_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->lane_arrow_type != other.lane_arrow_type) {
      return false;
    }
    if (this->category_location != other.category_location) {
      return false;
    }
    if (this->category_vehicle != other.category_vehicle) {
      return false;
    }
    if (this->category_special != other.category_special) {
      return false;
    }
    if (this->lane_num != other.lane_num) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->next_lanes != other.next_lanes) {
      return false;
    }
    if (this->pre_lanes != other.pre_lanes) {
      return false;
    }
    if (this->transition != other.transition) {
      return false;
    }
    return true;
  }
  bool operator!=(const SdProLane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SdProLane_

// alias to use template instance with default allocator
using SdProLane =
  deva_gaode_routing_msgs::msg::SdProLane_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE__STRUCT_HPP_
