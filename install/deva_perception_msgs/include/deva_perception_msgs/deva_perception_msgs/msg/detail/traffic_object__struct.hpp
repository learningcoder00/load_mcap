// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/TrafficObject.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_OBJECT__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'region'
// Member 'new_h_region'
// Member 'bind_ramp_region'
#include "deva_perception_msgs/msg/detail/traffic_region__struct.hpp"
// Member 'status'
#include "deva_perception_msgs/msg/detail/traffic_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__TrafficObject __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__TrafficObject __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficObject_
{
  using Type = TrafficObject_<ContainerAllocator>;

  explicit TrafficObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : region(_init),
    new_h_region(_init),
    bind_ramp_region(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_idx = 0;
      this->det_is_focus_light = false;
      this->sign_appx_type = 0;
      this->status.fill(deva_perception_msgs::msg::TrafficStatus_<ContainerAllocator>{_init});
      this->f120_ori_color = 0;
      this->f120_ori_color_light_type = 0;
      this->color = 0;
      this->origin_color = 0;
      this->light_type = 0;
      this->origin_light_type = 0;
      this->count_down = 0l;
      this->orig_count_down = 0l;
      this->has_count_down = false;
      this->ori_has_count_down = false;
      this->f120_origin_sign_type = 0l;
      this->origin_sign_type = 0l;
      this->sign_type = 0l;
      this->sign_confidence = 0.0f;
      this->digit_confidence = 0.0f;
      this->digit_type = 0l;
      this->digit_class_idx = 0;
      this->ego_x = 0.0f;
      this->ego_y = 0.0f;
      this->ego_z = 0.0f;
      this->ramp_confidence = 0.0f;
      this->is_ramp = false;
      this->origin_is_ramp = false;
      this->is_ramp_from_41 = false;
      this->is_ramp_double_checked = false;
      this->pole = 0l;
      this->is_rechecked_ramp = false;
      this->rechecked_ramp_score = 0.0f;
      this->ego_x_out = 0.0f;
      this->is_recheck_result = false;
      this->model_depth = 0.0f;
      this->tl_oriention = 0;
    }
  }

  explicit TrafficObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : region(_alloc, _init),
    new_h_region(_alloc, _init),
    status(_alloc),
    bind_ramp_region(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_idx = 0;
      this->det_is_focus_light = false;
      this->sign_appx_type = 0;
      this->status.fill(deva_perception_msgs::msg::TrafficStatus_<ContainerAllocator>{_alloc, _init});
      this->f120_ori_color = 0;
      this->f120_ori_color_light_type = 0;
      this->color = 0;
      this->origin_color = 0;
      this->light_type = 0;
      this->origin_light_type = 0;
      this->count_down = 0l;
      this->orig_count_down = 0l;
      this->has_count_down = false;
      this->ori_has_count_down = false;
      this->f120_origin_sign_type = 0l;
      this->origin_sign_type = 0l;
      this->sign_type = 0l;
      this->sign_confidence = 0.0f;
      this->digit_confidence = 0.0f;
      this->digit_type = 0l;
      this->digit_class_idx = 0;
      this->ego_x = 0.0f;
      this->ego_y = 0.0f;
      this->ego_z = 0.0f;
      this->ramp_confidence = 0.0f;
      this->is_ramp = false;
      this->origin_is_ramp = false;
      this->is_ramp_from_41 = false;
      this->is_ramp_double_checked = false;
      this->pole = 0l;
      this->is_rechecked_ramp = false;
      this->rechecked_ramp_score = 0.0f;
      this->ego_x_out = 0.0f;
      this->is_recheck_result = false;
      this->model_depth = 0.0f;
      this->tl_oriention = 0;
    }
  }

  // field types and members
  using _class_idx_type =
    uint8_t;
  _class_idx_type class_idx;
  using _det_is_focus_light_type =
    bool;
  _det_is_focus_light_type det_is_focus_light;
  using _sign_appx_type_type =
    uint8_t;
  _sign_appx_type_type sign_appx_type;
  using _region_type =
    deva_perception_msgs::msg::TrafficRegion_<ContainerAllocator>;
  _region_type region;
  using _new_h_region_type =
    deva_perception_msgs::msg::TrafficRegion_<ContainerAllocator>;
  _new_h_region_type new_h_region;
  using _status_type =
    std::array<deva_perception_msgs::msg::TrafficStatus_<ContainerAllocator>, 4>;
  _status_type status;
  using _f120_ori_color_type =
    uint8_t;
  _f120_ori_color_type f120_ori_color;
  using _f120_ori_color_light_type_type =
    uint8_t;
  _f120_ori_color_light_type_type f120_ori_color_light_type;
  using _color_type =
    uint8_t;
  _color_type color;
  using _origin_color_type =
    uint8_t;
  _origin_color_type origin_color;
  using _light_type_type =
    uint8_t;
  _light_type_type light_type;
  using _origin_light_type_type =
    uint8_t;
  _origin_light_type_type origin_light_type;
  using _count_down_type =
    int32_t;
  _count_down_type count_down;
  using _orig_count_down_type =
    int32_t;
  _orig_count_down_type orig_count_down;
  using _has_count_down_type =
    bool;
  _has_count_down_type has_count_down;
  using _ori_has_count_down_type =
    bool;
  _ori_has_count_down_type ori_has_count_down;
  using _f120_origin_sign_type_type =
    int32_t;
  _f120_origin_sign_type_type f120_origin_sign_type;
  using _origin_sign_type_type =
    int32_t;
  _origin_sign_type_type origin_sign_type;
  using _sign_type_type =
    int32_t;
  _sign_type_type sign_type;
  using _sign_confidence_type =
    float;
  _sign_confidence_type sign_confidence;
  using _digit_confidence_type =
    float;
  _digit_confidence_type digit_confidence;
  using _digit_type_type =
    int32_t;
  _digit_type_type digit_type;
  using _digit_class_idx_type =
    uint8_t;
  _digit_class_idx_type digit_class_idx;
  using _ego_x_type =
    float;
  _ego_x_type ego_x;
  using _ego_y_type =
    float;
  _ego_y_type ego_y;
  using _ego_z_type =
    float;
  _ego_z_type ego_z;
  using _ramp_confidence_type =
    float;
  _ramp_confidence_type ramp_confidence;
  using _is_ramp_type =
    bool;
  _is_ramp_type is_ramp;
  using _origin_is_ramp_type =
    bool;
  _origin_is_ramp_type origin_is_ramp;
  using _is_ramp_from_41_type =
    bool;
  _is_ramp_from_41_type is_ramp_from_41;
  using _is_ramp_double_checked_type =
    bool;
  _is_ramp_double_checked_type is_ramp_double_checked;
  using _pole_type =
    int32_t;
  _pole_type pole;
  using _is_rechecked_ramp_type =
    bool;
  _is_rechecked_ramp_type is_rechecked_ramp;
  using _rechecked_ramp_score_type =
    float;
  _rechecked_ramp_score_type rechecked_ramp_score;
  using _bind_ramp_region_type =
    deva_perception_msgs::msg::TrafficRegion_<ContainerAllocator>;
  _bind_ramp_region_type bind_ramp_region;
  using _ego_x_out_type =
    float;
  _ego_x_out_type ego_x_out;
  using _is_recheck_result_type =
    bool;
  _is_recheck_result_type is_recheck_result;
  using _model_depth_type =
    float;
  _model_depth_type model_depth;
  using _tl_oriention_type =
    uint8_t;
  _tl_oriention_type tl_oriention;

  // setters for named parameter idiom
  Type & set__class_idx(
    const uint8_t & _arg)
  {
    this->class_idx = _arg;
    return *this;
  }
  Type & set__det_is_focus_light(
    const bool & _arg)
  {
    this->det_is_focus_light = _arg;
    return *this;
  }
  Type & set__sign_appx_type(
    const uint8_t & _arg)
  {
    this->sign_appx_type = _arg;
    return *this;
  }
  Type & set__region(
    const deva_perception_msgs::msg::TrafficRegion_<ContainerAllocator> & _arg)
  {
    this->region = _arg;
    return *this;
  }
  Type & set__new_h_region(
    const deva_perception_msgs::msg::TrafficRegion_<ContainerAllocator> & _arg)
  {
    this->new_h_region = _arg;
    return *this;
  }
  Type & set__status(
    const std::array<deva_perception_msgs::msg::TrafficStatus_<ContainerAllocator>, 4> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__f120_ori_color(
    const uint8_t & _arg)
  {
    this->f120_ori_color = _arg;
    return *this;
  }
  Type & set__f120_ori_color_light_type(
    const uint8_t & _arg)
  {
    this->f120_ori_color_light_type = _arg;
    return *this;
  }
  Type & set__color(
    const uint8_t & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__origin_color(
    const uint8_t & _arg)
  {
    this->origin_color = _arg;
    return *this;
  }
  Type & set__light_type(
    const uint8_t & _arg)
  {
    this->light_type = _arg;
    return *this;
  }
  Type & set__origin_light_type(
    const uint8_t & _arg)
  {
    this->origin_light_type = _arg;
    return *this;
  }
  Type & set__count_down(
    const int32_t & _arg)
  {
    this->count_down = _arg;
    return *this;
  }
  Type & set__orig_count_down(
    const int32_t & _arg)
  {
    this->orig_count_down = _arg;
    return *this;
  }
  Type & set__has_count_down(
    const bool & _arg)
  {
    this->has_count_down = _arg;
    return *this;
  }
  Type & set__ori_has_count_down(
    const bool & _arg)
  {
    this->ori_has_count_down = _arg;
    return *this;
  }
  Type & set__f120_origin_sign_type(
    const int32_t & _arg)
  {
    this->f120_origin_sign_type = _arg;
    return *this;
  }
  Type & set__origin_sign_type(
    const int32_t & _arg)
  {
    this->origin_sign_type = _arg;
    return *this;
  }
  Type & set__sign_type(
    const int32_t & _arg)
  {
    this->sign_type = _arg;
    return *this;
  }
  Type & set__sign_confidence(
    const float & _arg)
  {
    this->sign_confidence = _arg;
    return *this;
  }
  Type & set__digit_confidence(
    const float & _arg)
  {
    this->digit_confidence = _arg;
    return *this;
  }
  Type & set__digit_type(
    const int32_t & _arg)
  {
    this->digit_type = _arg;
    return *this;
  }
  Type & set__digit_class_idx(
    const uint8_t & _arg)
  {
    this->digit_class_idx = _arg;
    return *this;
  }
  Type & set__ego_x(
    const float & _arg)
  {
    this->ego_x = _arg;
    return *this;
  }
  Type & set__ego_y(
    const float & _arg)
  {
    this->ego_y = _arg;
    return *this;
  }
  Type & set__ego_z(
    const float & _arg)
  {
    this->ego_z = _arg;
    return *this;
  }
  Type & set__ramp_confidence(
    const float & _arg)
  {
    this->ramp_confidence = _arg;
    return *this;
  }
  Type & set__is_ramp(
    const bool & _arg)
  {
    this->is_ramp = _arg;
    return *this;
  }
  Type & set__origin_is_ramp(
    const bool & _arg)
  {
    this->origin_is_ramp = _arg;
    return *this;
  }
  Type & set__is_ramp_from_41(
    const bool & _arg)
  {
    this->is_ramp_from_41 = _arg;
    return *this;
  }
  Type & set__is_ramp_double_checked(
    const bool & _arg)
  {
    this->is_ramp_double_checked = _arg;
    return *this;
  }
  Type & set__pole(
    const int32_t & _arg)
  {
    this->pole = _arg;
    return *this;
  }
  Type & set__is_rechecked_ramp(
    const bool & _arg)
  {
    this->is_rechecked_ramp = _arg;
    return *this;
  }
  Type & set__rechecked_ramp_score(
    const float & _arg)
  {
    this->rechecked_ramp_score = _arg;
    return *this;
  }
  Type & set__bind_ramp_region(
    const deva_perception_msgs::msg::TrafficRegion_<ContainerAllocator> & _arg)
  {
    this->bind_ramp_region = _arg;
    return *this;
  }
  Type & set__ego_x_out(
    const float & _arg)
  {
    this->ego_x_out = _arg;
    return *this;
  }
  Type & set__is_recheck_result(
    const bool & _arg)
  {
    this->is_recheck_result = _arg;
    return *this;
  }
  Type & set__model_depth(
    const float & _arg)
  {
    this->model_depth = _arg;
    return *this;
  }
  Type & set__tl_oriention(
    const uint8_t & _arg)
  {
    this->tl_oriention = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::TrafficObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::TrafficObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::TrafficObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::TrafficObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::TrafficObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::TrafficObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::TrafficObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::TrafficObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::TrafficObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::TrafficObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__TrafficObject
    std::shared_ptr<deva_perception_msgs::msg::TrafficObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__TrafficObject
    std::shared_ptr<deva_perception_msgs::msg::TrafficObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficObject_ & other) const
  {
    if (this->class_idx != other.class_idx) {
      return false;
    }
    if (this->det_is_focus_light != other.det_is_focus_light) {
      return false;
    }
    if (this->sign_appx_type != other.sign_appx_type) {
      return false;
    }
    if (this->region != other.region) {
      return false;
    }
    if (this->new_h_region != other.new_h_region) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->f120_ori_color != other.f120_ori_color) {
      return false;
    }
    if (this->f120_ori_color_light_type != other.f120_ori_color_light_type) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->origin_color != other.origin_color) {
      return false;
    }
    if (this->light_type != other.light_type) {
      return false;
    }
    if (this->origin_light_type != other.origin_light_type) {
      return false;
    }
    if (this->count_down != other.count_down) {
      return false;
    }
    if (this->orig_count_down != other.orig_count_down) {
      return false;
    }
    if (this->has_count_down != other.has_count_down) {
      return false;
    }
    if (this->ori_has_count_down != other.ori_has_count_down) {
      return false;
    }
    if (this->f120_origin_sign_type != other.f120_origin_sign_type) {
      return false;
    }
    if (this->origin_sign_type != other.origin_sign_type) {
      return false;
    }
    if (this->sign_type != other.sign_type) {
      return false;
    }
    if (this->sign_confidence != other.sign_confidence) {
      return false;
    }
    if (this->digit_confidence != other.digit_confidence) {
      return false;
    }
    if (this->digit_type != other.digit_type) {
      return false;
    }
    if (this->digit_class_idx != other.digit_class_idx) {
      return false;
    }
    if (this->ego_x != other.ego_x) {
      return false;
    }
    if (this->ego_y != other.ego_y) {
      return false;
    }
    if (this->ego_z != other.ego_z) {
      return false;
    }
    if (this->ramp_confidence != other.ramp_confidence) {
      return false;
    }
    if (this->is_ramp != other.is_ramp) {
      return false;
    }
    if (this->origin_is_ramp != other.origin_is_ramp) {
      return false;
    }
    if (this->is_ramp_from_41 != other.is_ramp_from_41) {
      return false;
    }
    if (this->is_ramp_double_checked != other.is_ramp_double_checked) {
      return false;
    }
    if (this->pole != other.pole) {
      return false;
    }
    if (this->is_rechecked_ramp != other.is_rechecked_ramp) {
      return false;
    }
    if (this->rechecked_ramp_score != other.rechecked_ramp_score) {
      return false;
    }
    if (this->bind_ramp_region != other.bind_ramp_region) {
      return false;
    }
    if (this->ego_x_out != other.ego_x_out) {
      return false;
    }
    if (this->is_recheck_result != other.is_recheck_result) {
      return false;
    }
    if (this->model_depth != other.model_depth) {
      return false;
    }
    if (this->tl_oriention != other.tl_oriention) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficObject_

// alias to use template instance with default allocator
using TrafficObject =
  deva_perception_msgs::msg::TrafficObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_OBJECT__STRUCT_HPP_
