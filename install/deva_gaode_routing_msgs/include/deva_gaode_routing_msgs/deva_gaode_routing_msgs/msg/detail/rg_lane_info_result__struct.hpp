// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/RGLaneInfoResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_LANE_INFO_RESULT__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_LANE_INFO_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'additional_lane_info'
#include "deva_gaode_routing_msgs/msg/detail/rg_additional_lane_info__struct.hpp"
// Member 'pos'
#include "deva_gaode_routing_msgs/msg/detail/route_pos__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__RGLaneInfoResult __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__RGLaneInfoResult __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RGLaneInfoResult_
{
  using Type = RGLaneInfoResult_<ContainerAllocator>;

  explicit RGLaneInfoResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->raw_link_id = 0ull;
      this->active_time = "";
    }
  }

  explicit RGLaneInfoResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : active_time(_alloc),
    pos(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->raw_link_id = 0ull;
      this->active_time = "";
    }
  }

  // field types and members
  using _raw_link_id_type =
    uint64_t;
  _raw_link_id_type raw_link_id;
  using _arrow_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _arrow_type arrow;
  using _flag_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _flag_type flag;
  using _rg_lane_result_property_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _rg_lane_result_property_type rg_lane_result_property;
  using _recommend_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _recommend_type recommend;
  using _active_time_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _active_time_type active_time;
  using _additional_lane_info_type =
    std::vector<deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo_<ContainerAllocator>>>;
  _additional_lane_info_type additional_lane_info;
  using _lane_info_raw_link_ids_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _lane_info_raw_link_ids_type lane_info_raw_link_ids;
  using _pos_type =
    deva_gaode_routing_msgs::msg::RoutePos_<ContainerAllocator>;
  _pos_type pos;

  // setters for named parameter idiom
  Type & set__raw_link_id(
    const uint64_t & _arg)
  {
    this->raw_link_id = _arg;
    return *this;
  }
  Type & set__arrow(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->arrow = _arg;
    return *this;
  }
  Type & set__flag(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->flag = _arg;
    return *this;
  }
  Type & set__rg_lane_result_property(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->rg_lane_result_property = _arg;
    return *this;
  }
  Type & set__recommend(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->recommend = _arg;
    return *this;
  }
  Type & set__active_time(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->active_time = _arg;
    return *this;
  }
  Type & set__additional_lane_info(
    const std::vector<deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::RGAdditionalLaneInfo_<ContainerAllocator>>> & _arg)
  {
    this->additional_lane_info = _arg;
    return *this;
  }
  Type & set__lane_info_raw_link_ids(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->lane_info_raw_link_ids = _arg;
    return *this;
  }
  Type & set__pos(
    const deva_gaode_routing_msgs::msg::RoutePos_<ContainerAllocator> & _arg)
  {
    this->pos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::RGLaneInfoResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::RGLaneInfoResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::RGLaneInfoResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::RGLaneInfoResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::RGLaneInfoResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::RGLaneInfoResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::RGLaneInfoResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::RGLaneInfoResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::RGLaneInfoResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::RGLaneInfoResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__RGLaneInfoResult
    std::shared_ptr<deva_gaode_routing_msgs::msg::RGLaneInfoResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__RGLaneInfoResult
    std::shared_ptr<deva_gaode_routing_msgs::msg::RGLaneInfoResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RGLaneInfoResult_ & other) const
  {
    if (this->raw_link_id != other.raw_link_id) {
      return false;
    }
    if (this->arrow != other.arrow) {
      return false;
    }
    if (this->flag != other.flag) {
      return false;
    }
    if (this->rg_lane_result_property != other.rg_lane_result_property) {
      return false;
    }
    if (this->recommend != other.recommend) {
      return false;
    }
    if (this->active_time != other.active_time) {
      return false;
    }
    if (this->additional_lane_info != other.additional_lane_info) {
      return false;
    }
    if (this->lane_info_raw_link_ids != other.lane_info_raw_link_ids) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const RGLaneInfoResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RGLaneInfoResult_

// alias to use template instance with default allocator
using RGLaneInfoResult =
  deva_gaode_routing_msgs::msg::RGLaneInfoResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RG_LANE_INFO_RESULT__STRUCT_HPP_
