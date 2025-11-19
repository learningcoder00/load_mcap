// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/NaviCameraProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_CAMERA_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_CAMERA_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'coord_3d'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__struct.hpp"
// Member 'sub_cameras'
#include "deva_navi_msgs/msg/detail/navi_sub_camera_proto__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__NaviCameraProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__NaviCameraProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NaviCameraProto_
{
  using Type = NaviCameraProto_<ContainerAllocator>;

  explicit NaviCameraProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coord_3d(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
      this->distance = 0l;
      this->road_class = 0l;
      this->segment_index = 0l;
      this->link_index = 0l;
      this->distance_to_end = 0l;
      this->penalty = 0l;
      this->id = 0ll;
      this->is_new = false;
      this->is_hidden = false;
    }
  }

  explicit NaviCameraProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coord_3d(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0l;
      this->distance = 0l;
      this->road_class = 0l;
      this->segment_index = 0l;
      this->link_index = 0l;
      this->distance_to_end = 0l;
      this->penalty = 0l;
      this->id = 0ll;
      this->is_new = false;
      this->is_hidden = false;
    }
  }

  // field types and members
  using _coord_3d_type =
    deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>;
  _coord_3d_type coord_3d;
  using _type_type =
    int32_t;
  _type_type type;
  using _distance_type =
    int32_t;
  _distance_type distance;
  using _speed_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _speed_type speed;
  using _road_class_type =
    int32_t;
  _road_class_type road_class;
  using _segment_index_type =
    int32_t;
  _segment_index_type segment_index;
  using _link_index_type =
    int32_t;
  _link_index_type link_index;
  using _distance_to_end_type =
    int32_t;
  _distance_to_end_type distance_to_end;
  using _sub_cameras_type =
    std::vector<deva_navi_msgs::msg::NaviSubCameraProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::NaviSubCameraProto_<ContainerAllocator>>>;
  _sub_cameras_type sub_cameras;
  using _penalty_type =
    int32_t;
  _penalty_type penalty;
  using _id_type =
    int64_t;
  _id_type id;
  using _is_new_type =
    bool;
  _is_new_type is_new;
  using _is_hidden_type =
    bool;
  _is_hidden_type is_hidden;

  // setters for named parameter idiom
  Type & set__coord_3d(
    const deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator> & _arg)
  {
    this->coord_3d = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__distance(
    const int32_t & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__speed(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__road_class(
    const int32_t & _arg)
  {
    this->road_class = _arg;
    return *this;
  }
  Type & set__segment_index(
    const int32_t & _arg)
  {
    this->segment_index = _arg;
    return *this;
  }
  Type & set__link_index(
    const int32_t & _arg)
  {
    this->link_index = _arg;
    return *this;
  }
  Type & set__distance_to_end(
    const int32_t & _arg)
  {
    this->distance_to_end = _arg;
    return *this;
  }
  Type & set__sub_cameras(
    const std::vector<deva_navi_msgs::msg::NaviSubCameraProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::NaviSubCameraProto_<ContainerAllocator>>> & _arg)
  {
    this->sub_cameras = _arg;
    return *this;
  }
  Type & set__penalty(
    const int32_t & _arg)
  {
    this->penalty = _arg;
    return *this;
  }
  Type & set__id(
    const int64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__is_new(
    const bool & _arg)
  {
    this->is_new = _arg;
    return *this;
  }
  Type & set__is_hidden(
    const bool & _arg)
  {
    this->is_hidden = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::NaviCameraProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::NaviCameraProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::NaviCameraProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::NaviCameraProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::NaviCameraProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::NaviCameraProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::NaviCameraProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::NaviCameraProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::NaviCameraProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::NaviCameraProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__NaviCameraProto
    std::shared_ptr<deva_navi_msgs::msg::NaviCameraProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__NaviCameraProto
    std::shared_ptr<deva_navi_msgs::msg::NaviCameraProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NaviCameraProto_ & other) const
  {
    if (this->coord_3d != other.coord_3d) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->road_class != other.road_class) {
      return false;
    }
    if (this->segment_index != other.segment_index) {
      return false;
    }
    if (this->link_index != other.link_index) {
      return false;
    }
    if (this->distance_to_end != other.distance_to_end) {
      return false;
    }
    if (this->sub_cameras != other.sub_cameras) {
      return false;
    }
    if (this->penalty != other.penalty) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->is_new != other.is_new) {
      return false;
    }
    if (this->is_hidden != other.is_hidden) {
      return false;
    }
    return true;
  }
  bool operator!=(const NaviCameraProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NaviCameraProto_

// alias to use template instance with default allocator
using NaviCameraProto =
  deva_navi_msgs::msg::NaviCameraProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_CAMERA_PROTO__STRUCT_HPP_
