// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebCrossNaviInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_NAVI_INFO__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_NAVI_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__WebCrossNaviInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__WebCrossNaviInfo __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WebCrossNaviInfo_
{
  using Type = WebCrossNaviInfo_<ContainerAllocator>;

  explicit WebCrossNaviInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->assist_action = 0l;
      this->cross_maneuver_id = 0l;
      this->cur_to_segment_dist = 0l;
      this->cur_to_segment_time = 0l;
      this->dest_direction = 0l;
      this->main_action = 0l;
      this->maneuver_id = 0l;
      this->next_road_name = "";
      this->out_cnt = 0l;
      this->path_id = 0l;
      this->rev = 0l;
      this->reversed = 0l;
      this->seg_idx = 0l;
      this->tunnel_flag = 0l;
      this->via_num = 0l;
    }
  }

  explicit WebCrossNaviInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : next_road_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->assist_action = 0l;
      this->cross_maneuver_id = 0l;
      this->cur_to_segment_dist = 0l;
      this->cur_to_segment_time = 0l;
      this->dest_direction = 0l;
      this->main_action = 0l;
      this->maneuver_id = 0l;
      this->next_road_name = "";
      this->out_cnt = 0l;
      this->path_id = 0l;
      this->rev = 0l;
      this->reversed = 0l;
      this->seg_idx = 0l;
      this->tunnel_flag = 0l;
      this->via_num = 0l;
    }
  }

  // field types and members
  using _assist_action_type =
    int32_t;
  _assist_action_type assist_action;
  using _cross_maneuver_id_type =
    int32_t;
  _cross_maneuver_id_type cross_maneuver_id;
  using _cur_to_segment_dist_type =
    int32_t;
  _cur_to_segment_dist_type cur_to_segment_dist;
  using _cur_to_segment_time_type =
    int32_t;
  _cur_to_segment_time_type cur_to_segment_time;
  using _dest_direction_type =
    int32_t;
  _dest_direction_type dest_direction;
  using _main_action_type =
    int32_t;
  _main_action_type main_action;
  using _maneuver_id_type =
    int32_t;
  _maneuver_id_type maneuver_id;
  using _next_road_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _next_road_name_type next_road_name;
  using _out_cnt_type =
    int32_t;
  _out_cnt_type out_cnt;
  using _path_id_type =
    int32_t;
  _path_id_type path_id;
  using _rev_type =
    int32_t;
  _rev_type rev;
  using _reversed_type =
    int32_t;
  _reversed_type reversed;
  using _seg_idx_type =
    int32_t;
  _seg_idx_type seg_idx;
  using _tunnel_flag_type =
    int32_t;
  _tunnel_flag_type tunnel_flag;
  using _via_num_type =
    int32_t;
  _via_num_type via_num;

  // setters for named parameter idiom
  Type & set__assist_action(
    const int32_t & _arg)
  {
    this->assist_action = _arg;
    return *this;
  }
  Type & set__cross_maneuver_id(
    const int32_t & _arg)
  {
    this->cross_maneuver_id = _arg;
    return *this;
  }
  Type & set__cur_to_segment_dist(
    const int32_t & _arg)
  {
    this->cur_to_segment_dist = _arg;
    return *this;
  }
  Type & set__cur_to_segment_time(
    const int32_t & _arg)
  {
    this->cur_to_segment_time = _arg;
    return *this;
  }
  Type & set__dest_direction(
    const int32_t & _arg)
  {
    this->dest_direction = _arg;
    return *this;
  }
  Type & set__main_action(
    const int32_t & _arg)
  {
    this->main_action = _arg;
    return *this;
  }
  Type & set__maneuver_id(
    const int32_t & _arg)
  {
    this->maneuver_id = _arg;
    return *this;
  }
  Type & set__next_road_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->next_road_name = _arg;
    return *this;
  }
  Type & set__out_cnt(
    const int32_t & _arg)
  {
    this->out_cnt = _arg;
    return *this;
  }
  Type & set__path_id(
    const int32_t & _arg)
  {
    this->path_id = _arg;
    return *this;
  }
  Type & set__rev(
    const int32_t & _arg)
  {
    this->rev = _arg;
    return *this;
  }
  Type & set__reversed(
    const int32_t & _arg)
  {
    this->reversed = _arg;
    return *this;
  }
  Type & set__seg_idx(
    const int32_t & _arg)
  {
    this->seg_idx = _arg;
    return *this;
  }
  Type & set__tunnel_flag(
    const int32_t & _arg)
  {
    this->tunnel_flag = _arg;
    return *this;
  }
  Type & set__via_num(
    const int32_t & _arg)
  {
    this->via_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::WebCrossNaviInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::WebCrossNaviInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebCrossNaviInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebCrossNaviInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::WebCrossNaviInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::WebCrossNaviInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::WebCrossNaviInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::WebCrossNaviInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::WebCrossNaviInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::WebCrossNaviInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__WebCrossNaviInfo
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebCrossNaviInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__WebCrossNaviInfo
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebCrossNaviInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WebCrossNaviInfo_ & other) const
  {
    if (this->assist_action != other.assist_action) {
      return false;
    }
    if (this->cross_maneuver_id != other.cross_maneuver_id) {
      return false;
    }
    if (this->cur_to_segment_dist != other.cur_to_segment_dist) {
      return false;
    }
    if (this->cur_to_segment_time != other.cur_to_segment_time) {
      return false;
    }
    if (this->dest_direction != other.dest_direction) {
      return false;
    }
    if (this->main_action != other.main_action) {
      return false;
    }
    if (this->maneuver_id != other.maneuver_id) {
      return false;
    }
    if (this->next_road_name != other.next_road_name) {
      return false;
    }
    if (this->out_cnt != other.out_cnt) {
      return false;
    }
    if (this->path_id != other.path_id) {
      return false;
    }
    if (this->rev != other.rev) {
      return false;
    }
    if (this->reversed != other.reversed) {
      return false;
    }
    if (this->seg_idx != other.seg_idx) {
      return false;
    }
    if (this->tunnel_flag != other.tunnel_flag) {
      return false;
    }
    if (this->via_num != other.via_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const WebCrossNaviInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WebCrossNaviInfo_

// alias to use template instance with default allocator
using WebCrossNaviInfo =
  deva_gaode_routing_msgs::msg::WebCrossNaviInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_NAVI_INFO__STRUCT_HPP_
