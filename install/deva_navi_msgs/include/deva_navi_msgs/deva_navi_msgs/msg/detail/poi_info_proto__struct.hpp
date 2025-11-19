// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/POIInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__POI_INFO_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__POI_INFO_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'real_pos'
// Member 'navi_pos'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__struct.hpp"
// Member 'charge_info'
#include "deva_navi_msgs/msg/detail/charging_arguments_info_proto__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__POIInfoProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__POIInfoProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct POIInfoProto_
{
  using Type = POIInfoProto_<ContainerAllocator>;

  explicit POIInfoProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : real_pos(_init),
    navi_pos(_init),
    charge_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sigshelter = 0.0f;
      this->type = 0l;
      this->road_id = 0ll;
      this->poi_id = "";
      this->name = "";
      this->floor_name = "";
      this->parent_name = "";
      this->parent_simple_name = "";
      this->angel = "";
      this->parent_id = "";
      this->parent_rel = "";
      this->type_code = "";
      this->from_jump = 0l;
      this->overhead = 0l;
      this->point_cnt = 0l;
      this->check_point_link_id = 0ll;
      this->overhead_back_alt_diff = 0.0f;
      this->floor = 0l;
      this->extend_info_flag = "";
      this->src_app = "";
    }
  }

  explicit POIInfoProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : real_pos(_alloc, _init),
    navi_pos(_alloc, _init),
    poi_id(_alloc),
    name(_alloc),
    floor_name(_alloc),
    parent_name(_alloc),
    parent_simple_name(_alloc),
    angel(_alloc),
    parent_id(_alloc),
    parent_rel(_alloc),
    type_code(_alloc),
    extend_info_flag(_alloc),
    src_app(_alloc),
    charge_info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sigshelter = 0.0f;
      this->type = 0l;
      this->road_id = 0ll;
      this->poi_id = "";
      this->name = "";
      this->floor_name = "";
      this->parent_name = "";
      this->parent_simple_name = "";
      this->angel = "";
      this->parent_id = "";
      this->parent_rel = "";
      this->type_code = "";
      this->from_jump = 0l;
      this->overhead = 0l;
      this->point_cnt = 0l;
      this->check_point_link_id = 0ll;
      this->overhead_back_alt_diff = 0.0f;
      this->floor = 0l;
      this->extend_info_flag = "";
      this->src_app = "";
    }
  }

  // field types and members
  using _real_pos_type =
    deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>;
  _real_pos_type real_pos;
  using _navi_pos_type =
    deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>;
  _navi_pos_type navi_pos;
  using _sigshelter_type =
    float;
  _sigshelter_type sigshelter;
  using _type_type =
    int32_t;
  _type_type type;
  using _road_id_type =
    int64_t;
  _road_id_type road_id;
  using _poi_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _poi_id_type poi_id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _floor_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _floor_name_type floor_name;
  using _parent_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _parent_name_type parent_name;
  using _parent_simple_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _parent_simple_name_type parent_simple_name;
  using _angel_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _angel_type angel;
  using _points_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _points_type points;
  using _parent_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _parent_id_type parent_id;
  using _parent_rel_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _parent_rel_type parent_rel;
  using _type_code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_code_type type_code;
  using _from_jump_type =
    int32_t;
  _from_jump_type from_jump;
  using _overhead_type =
    int32_t;
  _overhead_type overhead;
  using _point_cnt_type =
    int32_t;
  _point_cnt_type point_cnt;
  using _check_point_link_id_type =
    int64_t;
  _check_point_link_id_type check_point_link_id;
  using _overhead_back_alt_diff_type =
    float;
  _overhead_back_alt_diff_type overhead_back_alt_diff;
  using _floor_type =
    int32_t;
  _floor_type floor;
  using _extend_info_flag_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _extend_info_flag_type extend_info_flag;
  using _src_app_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _src_app_type src_app;
  using _charge_info_type =
    deva_navi_msgs::msg::ChargingArgumentsInfoProto_<ContainerAllocator>;
  _charge_info_type charge_info;

  // setters for named parameter idiom
  Type & set__real_pos(
    const deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator> & _arg)
  {
    this->real_pos = _arg;
    return *this;
  }
  Type & set__navi_pos(
    const deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator> & _arg)
  {
    this->navi_pos = _arg;
    return *this;
  }
  Type & set__sigshelter(
    const float & _arg)
  {
    this->sigshelter = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__road_id(
    const int64_t & _arg)
  {
    this->road_id = _arg;
    return *this;
  }
  Type & set__poi_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->poi_id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__floor_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->floor_name = _arg;
    return *this;
  }
  Type & set__parent_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->parent_name = _arg;
    return *this;
  }
  Type & set__parent_simple_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->parent_simple_name = _arg;
    return *this;
  }
  Type & set__angel(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->angel = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__parent_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->parent_id = _arg;
    return *this;
  }
  Type & set__parent_rel(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->parent_rel = _arg;
    return *this;
  }
  Type & set__type_code(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type_code = _arg;
    return *this;
  }
  Type & set__from_jump(
    const int32_t & _arg)
  {
    this->from_jump = _arg;
    return *this;
  }
  Type & set__overhead(
    const int32_t & _arg)
  {
    this->overhead = _arg;
    return *this;
  }
  Type & set__point_cnt(
    const int32_t & _arg)
  {
    this->point_cnt = _arg;
    return *this;
  }
  Type & set__check_point_link_id(
    const int64_t & _arg)
  {
    this->check_point_link_id = _arg;
    return *this;
  }
  Type & set__overhead_back_alt_diff(
    const float & _arg)
  {
    this->overhead_back_alt_diff = _arg;
    return *this;
  }
  Type & set__floor(
    const int32_t & _arg)
  {
    this->floor = _arg;
    return *this;
  }
  Type & set__extend_info_flag(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->extend_info_flag = _arg;
    return *this;
  }
  Type & set__src_app(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->src_app = _arg;
    return *this;
  }
  Type & set__charge_info(
    const deva_navi_msgs::msg::ChargingArgumentsInfoProto_<ContainerAllocator> & _arg)
  {
    this->charge_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::POIInfoProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::POIInfoProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::POIInfoProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::POIInfoProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::POIInfoProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::POIInfoProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::POIInfoProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::POIInfoProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::POIInfoProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::POIInfoProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__POIInfoProto
    std::shared_ptr<deva_navi_msgs::msg::POIInfoProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__POIInfoProto
    std::shared_ptr<deva_navi_msgs::msg::POIInfoProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const POIInfoProto_ & other) const
  {
    if (this->real_pos != other.real_pos) {
      return false;
    }
    if (this->navi_pos != other.navi_pos) {
      return false;
    }
    if (this->sigshelter != other.sigshelter) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->road_id != other.road_id) {
      return false;
    }
    if (this->poi_id != other.poi_id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->floor_name != other.floor_name) {
      return false;
    }
    if (this->parent_name != other.parent_name) {
      return false;
    }
    if (this->parent_simple_name != other.parent_simple_name) {
      return false;
    }
    if (this->angel != other.angel) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->parent_id != other.parent_id) {
      return false;
    }
    if (this->parent_rel != other.parent_rel) {
      return false;
    }
    if (this->type_code != other.type_code) {
      return false;
    }
    if (this->from_jump != other.from_jump) {
      return false;
    }
    if (this->overhead != other.overhead) {
      return false;
    }
    if (this->point_cnt != other.point_cnt) {
      return false;
    }
    if (this->check_point_link_id != other.check_point_link_id) {
      return false;
    }
    if (this->overhead_back_alt_diff != other.overhead_back_alt_diff) {
      return false;
    }
    if (this->floor != other.floor) {
      return false;
    }
    if (this->extend_info_flag != other.extend_info_flag) {
      return false;
    }
    if (this->src_app != other.src_app) {
      return false;
    }
    if (this->charge_info != other.charge_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const POIInfoProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct POIInfoProto_

// alias to use template instance with default allocator
using POIInfoProto =
  deva_navi_msgs::msg::POIInfoProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__POI_INFO_PROTO__STRUCT_HPP_
