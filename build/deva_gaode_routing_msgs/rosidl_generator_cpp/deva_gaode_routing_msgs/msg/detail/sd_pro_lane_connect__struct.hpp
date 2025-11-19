// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProLaneConnect.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_CONNECT__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_CONNECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'connect_restriction'
#include "deva_gaode_routing_msgs/msg/detail/restriction_detail__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__SdProLaneConnect __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__SdProLaneConnect __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SdProLaneConnect_
{
  using Type = SdProLaneConnect_<ContainerAllocator>;

  explicit SdProLaneConnect_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->out_road = 0ull;
      this->arrow_info = 0ul;
      this->lane_info = 0l;
      this->bus_lane = 0l;
      this->lane_num = 0l;
      this->lane_left = 0l;
      this->lane_right = 0l;
      this->node_id = 0ull;
      this->limit_lane = 0l;
    }
  }

  explicit SdProLaneConnect_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->out_road = 0ull;
      this->arrow_info = 0ul;
      this->lane_info = 0l;
      this->bus_lane = 0l;
      this->lane_num = 0l;
      this->lane_left = 0l;
      this->lane_right = 0l;
      this->node_id = 0ull;
      this->limit_lane = 0l;
    }
  }

  // field types and members
  using _id_type =
    uint64_t;
  _id_type id;
  using _out_road_type =
    uint64_t;
  _out_road_type out_road;
  using _pass_road_ids_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _pass_road_ids_type pass_road_ids;
  using _arrow_info_type =
    uint32_t;
  _arrow_info_type arrow_info;
  using _lane_info_type =
    int32_t;
  _lane_info_type lane_info;
  using _bus_lane_type =
    int32_t;
  _bus_lane_type bus_lane;
  using _lane_num_type =
    int32_t;
  _lane_num_type lane_num;
  using _lane_left_type =
    int32_t;
  _lane_left_type lane_left;
  using _lane_right_type =
    int32_t;
  _lane_right_type lane_right;
  using _node_id_type =
    uint64_t;
  _node_id_type node_id;
  using _limit_lane_type =
    int32_t;
  _limit_lane_type limit_lane;
  using _connect_restriction_type =
    std::vector<deva_gaode_routing_msgs::msg::RestrictionDetail_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::RestrictionDetail_<ContainerAllocator>>>;
  _connect_restriction_type connect_restriction;

  // setters for named parameter idiom
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__out_road(
    const uint64_t & _arg)
  {
    this->out_road = _arg;
    return *this;
  }
  Type & set__pass_road_ids(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->pass_road_ids = _arg;
    return *this;
  }
  Type & set__arrow_info(
    const uint32_t & _arg)
  {
    this->arrow_info = _arg;
    return *this;
  }
  Type & set__lane_info(
    const int32_t & _arg)
  {
    this->lane_info = _arg;
    return *this;
  }
  Type & set__bus_lane(
    const int32_t & _arg)
  {
    this->bus_lane = _arg;
    return *this;
  }
  Type & set__lane_num(
    const int32_t & _arg)
  {
    this->lane_num = _arg;
    return *this;
  }
  Type & set__lane_left(
    const int32_t & _arg)
  {
    this->lane_left = _arg;
    return *this;
  }
  Type & set__lane_right(
    const int32_t & _arg)
  {
    this->lane_right = _arg;
    return *this;
  }
  Type & set__node_id(
    const uint64_t & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__limit_lane(
    const int32_t & _arg)
  {
    this->limit_lane = _arg;
    return *this;
  }
  Type & set__connect_restriction(
    const std::vector<deva_gaode_routing_msgs::msg::RestrictionDetail_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::RestrictionDetail_<ContainerAllocator>>> & _arg)
  {
    this->connect_restriction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::SdProLaneConnect_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::SdProLaneConnect_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProLaneConnect_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProLaneConnect_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::SdProLaneConnect_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::SdProLaneConnect_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::SdProLaneConnect_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::SdProLaneConnect_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::SdProLaneConnect_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::SdProLaneConnect_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__SdProLaneConnect
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProLaneConnect_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__SdProLaneConnect
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProLaneConnect_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SdProLaneConnect_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->out_road != other.out_road) {
      return false;
    }
    if (this->pass_road_ids != other.pass_road_ids) {
      return false;
    }
    if (this->arrow_info != other.arrow_info) {
      return false;
    }
    if (this->lane_info != other.lane_info) {
      return false;
    }
    if (this->bus_lane != other.bus_lane) {
      return false;
    }
    if (this->lane_num != other.lane_num) {
      return false;
    }
    if (this->lane_left != other.lane_left) {
      return false;
    }
    if (this->lane_right != other.lane_right) {
      return false;
    }
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->limit_lane != other.limit_lane) {
      return false;
    }
    if (this->connect_restriction != other.connect_restriction) {
      return false;
    }
    return true;
  }
  bool operator!=(const SdProLaneConnect_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SdProLaneConnect_

// alias to use template instance with default allocator
using SdProLaneConnect =
  deva_gaode_routing_msgs::msg::SdProLaneConnect_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_LANE_CONNECT__STRUCT_HPP_
