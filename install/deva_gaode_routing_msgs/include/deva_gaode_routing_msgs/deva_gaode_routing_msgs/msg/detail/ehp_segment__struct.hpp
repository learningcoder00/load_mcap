// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/EhpSegment.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_SEGMENT__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_SEGMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__EhpSegment __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__EhpSegment __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EhpSegment_
{
  using Type = EhpSegment_<ContainerAllocator>;

  explicit EhpSegment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seg_offset = 0;
      this->seg_msg_type = 0;
      this->seg_path_idx = 0;
      this->seg_cyc_cnt = 0;
      this->seg_update = 0;
      this->seg_retr = 0;
      this->seg_build_up_area = 0;
      this->seg_bridge = 0;
      this->seg_tunnel = 0;
      this->seg_func_road_class = 0;
      this->seg_rel_probb = 0.0f;
      this->seg_form_of_way = 0;
      this->seg_cmplx_insct = 0;
      this->seg_part_of_calc_route = 0;
      this->seg_eff_spd_lmt_type = 0;
      this->seg_eff_spd_lmt = 0;
      this->seg_num_of_lane_drv_dir = 0;
      this->seg_num_of_lane_opp_dir = 0;
      this->seg_divide_road = 0;
      this->seg_relative_offset = 0l;
    }
  }

  explicit EhpSegment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->seg_offset = 0;
      this->seg_msg_type = 0;
      this->seg_path_idx = 0;
      this->seg_cyc_cnt = 0;
      this->seg_update = 0;
      this->seg_retr = 0;
      this->seg_build_up_area = 0;
      this->seg_bridge = 0;
      this->seg_tunnel = 0;
      this->seg_func_road_class = 0;
      this->seg_rel_probb = 0.0f;
      this->seg_form_of_way = 0;
      this->seg_cmplx_insct = 0;
      this->seg_part_of_calc_route = 0;
      this->seg_eff_spd_lmt_type = 0;
      this->seg_eff_spd_lmt = 0;
      this->seg_num_of_lane_drv_dir = 0;
      this->seg_num_of_lane_opp_dir = 0;
      this->seg_divide_road = 0;
      this->seg_relative_offset = 0l;
    }
  }

  // field types and members
  using _seg_offset_type =
    uint16_t;
  _seg_offset_type seg_offset;
  using _seg_msg_type_type =
    uint8_t;
  _seg_msg_type_type seg_msg_type;
  using _seg_path_idx_type =
    uint8_t;
  _seg_path_idx_type seg_path_idx;
  using _seg_cyc_cnt_type =
    uint8_t;
  _seg_cyc_cnt_type seg_cyc_cnt;
  using _seg_update_type =
    uint8_t;
  _seg_update_type seg_update;
  using _seg_retr_type =
    uint8_t;
  _seg_retr_type seg_retr;
  using _seg_build_up_area_type =
    uint8_t;
  _seg_build_up_area_type seg_build_up_area;
  using _seg_bridge_type =
    uint8_t;
  _seg_bridge_type seg_bridge;
  using _seg_tunnel_type =
    uint8_t;
  _seg_tunnel_type seg_tunnel;
  using _seg_func_road_class_type =
    uint8_t;
  _seg_func_road_class_type seg_func_road_class;
  using _seg_rel_probb_type =
    float;
  _seg_rel_probb_type seg_rel_probb;
  using _seg_form_of_way_type =
    uint8_t;
  _seg_form_of_way_type seg_form_of_way;
  using _seg_cmplx_insct_type =
    uint8_t;
  _seg_cmplx_insct_type seg_cmplx_insct;
  using _seg_part_of_calc_route_type =
    uint8_t;
  _seg_part_of_calc_route_type seg_part_of_calc_route;
  using _seg_eff_spd_lmt_type_type =
    uint8_t;
  _seg_eff_spd_lmt_type_type seg_eff_spd_lmt_type;
  using _seg_eff_spd_lmt_type =
    uint8_t;
  _seg_eff_spd_lmt_type seg_eff_spd_lmt;
  using _seg_num_of_lane_drv_dir_type =
    uint8_t;
  _seg_num_of_lane_drv_dir_type seg_num_of_lane_drv_dir;
  using _seg_num_of_lane_opp_dir_type =
    uint8_t;
  _seg_num_of_lane_opp_dir_type seg_num_of_lane_opp_dir;
  using _seg_divide_road_type =
    uint8_t;
  _seg_divide_road_type seg_divide_road;
  using _seg_relative_offset_type =
    int32_t;
  _seg_relative_offset_type seg_relative_offset;

  // setters for named parameter idiom
  Type & set__seg_offset(
    const uint16_t & _arg)
  {
    this->seg_offset = _arg;
    return *this;
  }
  Type & set__seg_msg_type(
    const uint8_t & _arg)
  {
    this->seg_msg_type = _arg;
    return *this;
  }
  Type & set__seg_path_idx(
    const uint8_t & _arg)
  {
    this->seg_path_idx = _arg;
    return *this;
  }
  Type & set__seg_cyc_cnt(
    const uint8_t & _arg)
  {
    this->seg_cyc_cnt = _arg;
    return *this;
  }
  Type & set__seg_update(
    const uint8_t & _arg)
  {
    this->seg_update = _arg;
    return *this;
  }
  Type & set__seg_retr(
    const uint8_t & _arg)
  {
    this->seg_retr = _arg;
    return *this;
  }
  Type & set__seg_build_up_area(
    const uint8_t & _arg)
  {
    this->seg_build_up_area = _arg;
    return *this;
  }
  Type & set__seg_bridge(
    const uint8_t & _arg)
  {
    this->seg_bridge = _arg;
    return *this;
  }
  Type & set__seg_tunnel(
    const uint8_t & _arg)
  {
    this->seg_tunnel = _arg;
    return *this;
  }
  Type & set__seg_func_road_class(
    const uint8_t & _arg)
  {
    this->seg_func_road_class = _arg;
    return *this;
  }
  Type & set__seg_rel_probb(
    const float & _arg)
  {
    this->seg_rel_probb = _arg;
    return *this;
  }
  Type & set__seg_form_of_way(
    const uint8_t & _arg)
  {
    this->seg_form_of_way = _arg;
    return *this;
  }
  Type & set__seg_cmplx_insct(
    const uint8_t & _arg)
  {
    this->seg_cmplx_insct = _arg;
    return *this;
  }
  Type & set__seg_part_of_calc_route(
    const uint8_t & _arg)
  {
    this->seg_part_of_calc_route = _arg;
    return *this;
  }
  Type & set__seg_eff_spd_lmt_type(
    const uint8_t & _arg)
  {
    this->seg_eff_spd_lmt_type = _arg;
    return *this;
  }
  Type & set__seg_eff_spd_lmt(
    const uint8_t & _arg)
  {
    this->seg_eff_spd_lmt = _arg;
    return *this;
  }
  Type & set__seg_num_of_lane_drv_dir(
    const uint8_t & _arg)
  {
    this->seg_num_of_lane_drv_dir = _arg;
    return *this;
  }
  Type & set__seg_num_of_lane_opp_dir(
    const uint8_t & _arg)
  {
    this->seg_num_of_lane_opp_dir = _arg;
    return *this;
  }
  Type & set__seg_divide_road(
    const uint8_t & _arg)
  {
    this->seg_divide_road = _arg;
    return *this;
  }
  Type & set__seg_relative_offset(
    const int32_t & _arg)
  {
    this->seg_relative_offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::EhpSegment_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::EhpSegment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpSegment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpSegment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::EhpSegment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::EhpSegment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::EhpSegment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::EhpSegment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::EhpSegment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::EhpSegment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__EhpSegment
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpSegment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__EhpSegment
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpSegment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EhpSegment_ & other) const
  {
    if (this->seg_offset != other.seg_offset) {
      return false;
    }
    if (this->seg_msg_type != other.seg_msg_type) {
      return false;
    }
    if (this->seg_path_idx != other.seg_path_idx) {
      return false;
    }
    if (this->seg_cyc_cnt != other.seg_cyc_cnt) {
      return false;
    }
    if (this->seg_update != other.seg_update) {
      return false;
    }
    if (this->seg_retr != other.seg_retr) {
      return false;
    }
    if (this->seg_build_up_area != other.seg_build_up_area) {
      return false;
    }
    if (this->seg_bridge != other.seg_bridge) {
      return false;
    }
    if (this->seg_tunnel != other.seg_tunnel) {
      return false;
    }
    if (this->seg_func_road_class != other.seg_func_road_class) {
      return false;
    }
    if (this->seg_rel_probb != other.seg_rel_probb) {
      return false;
    }
    if (this->seg_form_of_way != other.seg_form_of_way) {
      return false;
    }
    if (this->seg_cmplx_insct != other.seg_cmplx_insct) {
      return false;
    }
    if (this->seg_part_of_calc_route != other.seg_part_of_calc_route) {
      return false;
    }
    if (this->seg_eff_spd_lmt_type != other.seg_eff_spd_lmt_type) {
      return false;
    }
    if (this->seg_eff_spd_lmt != other.seg_eff_spd_lmt) {
      return false;
    }
    if (this->seg_num_of_lane_drv_dir != other.seg_num_of_lane_drv_dir) {
      return false;
    }
    if (this->seg_num_of_lane_opp_dir != other.seg_num_of_lane_opp_dir) {
      return false;
    }
    if (this->seg_divide_road != other.seg_divide_road) {
      return false;
    }
    if (this->seg_relative_offset != other.seg_relative_offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const EhpSegment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EhpSegment_

// alias to use template instance with default allocator
using EhpSegment =
  deva_gaode_routing_msgs::msg::EhpSegment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_SEGMENT__STRUCT_HPP_
