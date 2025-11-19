// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/EhpStub.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_STUB__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_STUB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__EhpStub __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__EhpStub __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EhpStub_
{
  using Type = EhpStub_<ContainerAllocator>;

  explicit EhpStub_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stub_offset = 0;
      this->stub_msg_type = 0;
      this->stub_path_idx = 0;
      this->stub_cyc_cnt = 0;
      this->stub_update = 0;
      this->stub_retr = 0;
      this->stub_stub_path_idx = 0;
      this->stub_func_road_class = 0;
      this->stub_rel_probb = 0.0f;
      this->stub_form_of_way = 0;
      this->stub_cmplx_insct = 0;
      this->stub_part_of_calc_route = 0;
      this->stub_turn_angl = 0.0f;
      this->stub_num_of_lane_drv_dir = 0;
      this->stub_num_of_lane_opp_dir = 0;
      this->stub_rt_of_way = 0;
      this->stub_last_stub = 0;
      this->stub_relative_offset = 0l;
    }
  }

  explicit EhpStub_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stub_offset = 0;
      this->stub_msg_type = 0;
      this->stub_path_idx = 0;
      this->stub_cyc_cnt = 0;
      this->stub_update = 0;
      this->stub_retr = 0;
      this->stub_stub_path_idx = 0;
      this->stub_func_road_class = 0;
      this->stub_rel_probb = 0.0f;
      this->stub_form_of_way = 0;
      this->stub_cmplx_insct = 0;
      this->stub_part_of_calc_route = 0;
      this->stub_turn_angl = 0.0f;
      this->stub_num_of_lane_drv_dir = 0;
      this->stub_num_of_lane_opp_dir = 0;
      this->stub_rt_of_way = 0;
      this->stub_last_stub = 0;
      this->stub_relative_offset = 0l;
    }
  }

  // field types and members
  using _stub_offset_type =
    uint16_t;
  _stub_offset_type stub_offset;
  using _stub_msg_type_type =
    uint8_t;
  _stub_msg_type_type stub_msg_type;
  using _stub_path_idx_type =
    uint8_t;
  _stub_path_idx_type stub_path_idx;
  using _stub_cyc_cnt_type =
    uint8_t;
  _stub_cyc_cnt_type stub_cyc_cnt;
  using _stub_update_type =
    uint8_t;
  _stub_update_type stub_update;
  using _stub_retr_type =
    uint8_t;
  _stub_retr_type stub_retr;
  using _stub_stub_path_idx_type =
    uint8_t;
  _stub_stub_path_idx_type stub_stub_path_idx;
  using _stub_func_road_class_type =
    uint8_t;
  _stub_func_road_class_type stub_func_road_class;
  using _stub_rel_probb_type =
    float;
  _stub_rel_probb_type stub_rel_probb;
  using _stub_form_of_way_type =
    uint8_t;
  _stub_form_of_way_type stub_form_of_way;
  using _stub_cmplx_insct_type =
    uint8_t;
  _stub_cmplx_insct_type stub_cmplx_insct;
  using _stub_part_of_calc_route_type =
    uint8_t;
  _stub_part_of_calc_route_type stub_part_of_calc_route;
  using _stub_turn_angl_type =
    float;
  _stub_turn_angl_type stub_turn_angl;
  using _stub_num_of_lane_drv_dir_type =
    uint8_t;
  _stub_num_of_lane_drv_dir_type stub_num_of_lane_drv_dir;
  using _stub_num_of_lane_opp_dir_type =
    uint8_t;
  _stub_num_of_lane_opp_dir_type stub_num_of_lane_opp_dir;
  using _stub_rt_of_way_type =
    uint8_t;
  _stub_rt_of_way_type stub_rt_of_way;
  using _stub_last_stub_type =
    uint8_t;
  _stub_last_stub_type stub_last_stub;
  using _stub_relative_offset_type =
    int32_t;
  _stub_relative_offset_type stub_relative_offset;

  // setters for named parameter idiom
  Type & set__stub_offset(
    const uint16_t & _arg)
  {
    this->stub_offset = _arg;
    return *this;
  }
  Type & set__stub_msg_type(
    const uint8_t & _arg)
  {
    this->stub_msg_type = _arg;
    return *this;
  }
  Type & set__stub_path_idx(
    const uint8_t & _arg)
  {
    this->stub_path_idx = _arg;
    return *this;
  }
  Type & set__stub_cyc_cnt(
    const uint8_t & _arg)
  {
    this->stub_cyc_cnt = _arg;
    return *this;
  }
  Type & set__stub_update(
    const uint8_t & _arg)
  {
    this->stub_update = _arg;
    return *this;
  }
  Type & set__stub_retr(
    const uint8_t & _arg)
  {
    this->stub_retr = _arg;
    return *this;
  }
  Type & set__stub_stub_path_idx(
    const uint8_t & _arg)
  {
    this->stub_stub_path_idx = _arg;
    return *this;
  }
  Type & set__stub_func_road_class(
    const uint8_t & _arg)
  {
    this->stub_func_road_class = _arg;
    return *this;
  }
  Type & set__stub_rel_probb(
    const float & _arg)
  {
    this->stub_rel_probb = _arg;
    return *this;
  }
  Type & set__stub_form_of_way(
    const uint8_t & _arg)
  {
    this->stub_form_of_way = _arg;
    return *this;
  }
  Type & set__stub_cmplx_insct(
    const uint8_t & _arg)
  {
    this->stub_cmplx_insct = _arg;
    return *this;
  }
  Type & set__stub_part_of_calc_route(
    const uint8_t & _arg)
  {
    this->stub_part_of_calc_route = _arg;
    return *this;
  }
  Type & set__stub_turn_angl(
    const float & _arg)
  {
    this->stub_turn_angl = _arg;
    return *this;
  }
  Type & set__stub_num_of_lane_drv_dir(
    const uint8_t & _arg)
  {
    this->stub_num_of_lane_drv_dir = _arg;
    return *this;
  }
  Type & set__stub_num_of_lane_opp_dir(
    const uint8_t & _arg)
  {
    this->stub_num_of_lane_opp_dir = _arg;
    return *this;
  }
  Type & set__stub_rt_of_way(
    const uint8_t & _arg)
  {
    this->stub_rt_of_way = _arg;
    return *this;
  }
  Type & set__stub_last_stub(
    const uint8_t & _arg)
  {
    this->stub_last_stub = _arg;
    return *this;
  }
  Type & set__stub_relative_offset(
    const int32_t & _arg)
  {
    this->stub_relative_offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::EhpStub_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::EhpStub_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpStub_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpStub_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::EhpStub_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::EhpStub_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::EhpStub_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::EhpStub_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::EhpStub_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::EhpStub_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__EhpStub
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpStub_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__EhpStub
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpStub_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EhpStub_ & other) const
  {
    if (this->stub_offset != other.stub_offset) {
      return false;
    }
    if (this->stub_msg_type != other.stub_msg_type) {
      return false;
    }
    if (this->stub_path_idx != other.stub_path_idx) {
      return false;
    }
    if (this->stub_cyc_cnt != other.stub_cyc_cnt) {
      return false;
    }
    if (this->stub_update != other.stub_update) {
      return false;
    }
    if (this->stub_retr != other.stub_retr) {
      return false;
    }
    if (this->stub_stub_path_idx != other.stub_stub_path_idx) {
      return false;
    }
    if (this->stub_func_road_class != other.stub_func_road_class) {
      return false;
    }
    if (this->stub_rel_probb != other.stub_rel_probb) {
      return false;
    }
    if (this->stub_form_of_way != other.stub_form_of_way) {
      return false;
    }
    if (this->stub_cmplx_insct != other.stub_cmplx_insct) {
      return false;
    }
    if (this->stub_part_of_calc_route != other.stub_part_of_calc_route) {
      return false;
    }
    if (this->stub_turn_angl != other.stub_turn_angl) {
      return false;
    }
    if (this->stub_num_of_lane_drv_dir != other.stub_num_of_lane_drv_dir) {
      return false;
    }
    if (this->stub_num_of_lane_opp_dir != other.stub_num_of_lane_opp_dir) {
      return false;
    }
    if (this->stub_rt_of_way != other.stub_rt_of_way) {
      return false;
    }
    if (this->stub_last_stub != other.stub_last_stub) {
      return false;
    }
    if (this->stub_relative_offset != other.stub_relative_offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const EhpStub_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EhpStub_

// alias to use template instance with default allocator
using EhpStub =
  deva_gaode_routing_msgs::msg::EhpStub_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_STUB__STRUCT_HPP_
