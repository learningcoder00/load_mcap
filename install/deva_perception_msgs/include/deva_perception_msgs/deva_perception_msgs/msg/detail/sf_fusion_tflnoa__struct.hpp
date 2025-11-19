// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/SFFusionTFLNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFLNOA__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFLNOA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'region'
// Member 'f120_region'
// Member 'f30_region'
#include "deva_perception_msgs/msg/detail/traffic_region__struct.hpp"
// Member 'tflquadranglevcs'
#include "deva_perception_msgs/msg/detail/quadrangle_vcs__struct.hpp"
// Member 'tflquadrangleimg'
#include "deva_perception_msgs/msg/detail/quadrangle_img__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__SFFusionTFLNOA __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__SFFusionTFLNOA __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFFusionTFLNOA_
{
  using Type = SFFusionTFLNOA_<ContainerAllocator>;

  explicit SFFusionTFLNOA_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : region(_init),
    tflquadranglevcs(_init),
    tflquadrangleimg(_init),
    f120_region(_init),
    f30_region(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->lifetime = 0ul;
      this->relevancy = 0;
      this->type = 0;
      this->color = 0;
      this->cycle_time = 0;
      this->number = 0;
      this->confi = 0;
      this->flashstatus = 0;
      this->background = 0;
      this->reserved = 0;
      this->poslgt = 0.0f;
      this->poslat = 0.0f;
      this->height = 0.0f;
      this->utmx = 0.0f;
      this->utmy = 0.0f;
      this->utmz = 0.0f;
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->type_list.begin(), this->type_list.end(), 0);
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->color_list.begin(), this->color_list.end(), 0);
      this->blocked = 0;
      this->has_count_down = 0;
      this->light_num = 0;
      this->focus = 0;
      this->pole = 0;
      this->sync_from_track_id = 0ll;
      this->source = 0;
      this->i_back1 = 0;
      this->i_back2 = 0;
      this->i_back3 = 0;
      this->f_back1 = 0.0f;
      this->f_back2 = 0.0f;
      this->f_back3 = 0.0f;
    }
  }

  explicit SFFusionTFLNOA_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : region(_alloc, _init),
    tflquadranglevcs(_alloc, _init),
    tflquadrangleimg(_alloc, _init),
    type_list(_alloc),
    color_list(_alloc),
    f120_region(_alloc, _init),
    f30_region(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->lifetime = 0ul;
      this->relevancy = 0;
      this->type = 0;
      this->color = 0;
      this->cycle_time = 0;
      this->number = 0;
      this->confi = 0;
      this->flashstatus = 0;
      this->background = 0;
      this->reserved = 0;
      this->poslgt = 0.0f;
      this->poslat = 0.0f;
      this->height = 0.0f;
      this->utmx = 0.0f;
      this->utmy = 0.0f;
      this->utmz = 0.0f;
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->type_list.begin(), this->type_list.end(), 0);
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->color_list.begin(), this->color_list.end(), 0);
      this->blocked = 0;
      this->has_count_down = 0;
      this->light_num = 0;
      this->focus = 0;
      this->pole = 0;
      this->sync_from_track_id = 0ll;
      this->source = 0;
      this->i_back1 = 0;
      this->i_back2 = 0;
      this->i_back3 = 0;
      this->f_back1 = 0.0f;
      this->f_back2 = 0.0f;
      this->f_back3 = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _lifetime_type =
    uint32_t;
  _lifetime_type lifetime;
  using _relevancy_type =
    uint8_t;
  _relevancy_type relevancy;
  using _type_type =
    uint8_t;
  _type_type type;
  using _color_type =
    uint8_t;
  _color_type color;
  using _cycle_time_type =
    uint8_t;
  _cycle_time_type cycle_time;
  using _number_type =
    uint8_t;
  _number_type number;
  using _confi_type =
    uint8_t;
  _confi_type confi;
  using _flashstatus_type =
    uint8_t;
  _flashstatus_type flashstatus;
  using _background_type =
    uint8_t;
  _background_type background;
  using _reserved_type =
    uint8_t;
  _reserved_type reserved;
  using _poslgt_type =
    float;
  _poslgt_type poslgt;
  using _poslat_type =
    float;
  _poslat_type poslat;
  using _height_type =
    float;
  _height_type height;
  using _region_type =
    deva_perception_msgs::msg::TrafficRegion_<ContainerAllocator>;
  _region_type region;
  using _tflquadranglevcs_type =
    deva_perception_msgs::msg::QuadrangleVcs_<ContainerAllocator>;
  _tflquadranglevcs_type tflquadranglevcs;
  using _tflquadrangleimg_type =
    deva_perception_msgs::msg::QuadrangleImg_<ContainerAllocator>;
  _tflquadrangleimg_type tflquadrangleimg;
  using _utmx_type =
    float;
  _utmx_type utmx;
  using _utmy_type =
    float;
  _utmy_type utmy;
  using _utmz_type =
    float;
  _utmz_type utmz;
  using _type_list_type =
    std::array<uint8_t, 4>;
  _type_list_type type_list;
  using _color_list_type =
    std::array<uint8_t, 4>;
  _color_list_type color_list;
  using _blocked_type =
    uint8_t;
  _blocked_type blocked;
  using _has_count_down_type =
    uint8_t;
  _has_count_down_type has_count_down;
  using _light_num_type =
    uint8_t;
  _light_num_type light_num;
  using _focus_type =
    uint8_t;
  _focus_type focus;
  using _pole_type =
    int8_t;
  _pole_type pole;
  using _sync_from_track_id_type =
    int64_t;
  _sync_from_track_id_type sync_from_track_id;
  using _source_type =
    uint8_t;
  _source_type source;
  using _f120_region_type =
    deva_perception_msgs::msg::TrafficRegion_<ContainerAllocator>;
  _f120_region_type f120_region;
  using _f30_region_type =
    deva_perception_msgs::msg::TrafficRegion_<ContainerAllocator>;
  _f30_region_type f30_region;
  using _i_back1_type =
    uint8_t;
  _i_back1_type i_back1;
  using _i_back2_type =
    uint8_t;
  _i_back2_type i_back2;
  using _i_back3_type =
    uint8_t;
  _i_back3_type i_back3;
  using _f_back1_type =
    float;
  _f_back1_type f_back1;
  using _f_back2_type =
    float;
  _f_back2_type f_back2;
  using _f_back3_type =
    float;
  _f_back3_type f_back3;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__lifetime(
    const uint32_t & _arg)
  {
    this->lifetime = _arg;
    return *this;
  }
  Type & set__relevancy(
    const uint8_t & _arg)
  {
    this->relevancy = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__color(
    const uint8_t & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__cycle_time(
    const uint8_t & _arg)
  {
    this->cycle_time = _arg;
    return *this;
  }
  Type & set__number(
    const uint8_t & _arg)
  {
    this->number = _arg;
    return *this;
  }
  Type & set__confi(
    const uint8_t & _arg)
  {
    this->confi = _arg;
    return *this;
  }
  Type & set__flashstatus(
    const uint8_t & _arg)
  {
    this->flashstatus = _arg;
    return *this;
  }
  Type & set__background(
    const uint8_t & _arg)
  {
    this->background = _arg;
    return *this;
  }
  Type & set__reserved(
    const uint8_t & _arg)
  {
    this->reserved = _arg;
    return *this;
  }
  Type & set__poslgt(
    const float & _arg)
  {
    this->poslgt = _arg;
    return *this;
  }
  Type & set__poslat(
    const float & _arg)
  {
    this->poslat = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__region(
    const deva_perception_msgs::msg::TrafficRegion_<ContainerAllocator> & _arg)
  {
    this->region = _arg;
    return *this;
  }
  Type & set__tflquadranglevcs(
    const deva_perception_msgs::msg::QuadrangleVcs_<ContainerAllocator> & _arg)
  {
    this->tflquadranglevcs = _arg;
    return *this;
  }
  Type & set__tflquadrangleimg(
    const deva_perception_msgs::msg::QuadrangleImg_<ContainerAllocator> & _arg)
  {
    this->tflquadrangleimg = _arg;
    return *this;
  }
  Type & set__utmx(
    const float & _arg)
  {
    this->utmx = _arg;
    return *this;
  }
  Type & set__utmy(
    const float & _arg)
  {
    this->utmy = _arg;
    return *this;
  }
  Type & set__utmz(
    const float & _arg)
  {
    this->utmz = _arg;
    return *this;
  }
  Type & set__type_list(
    const std::array<uint8_t, 4> & _arg)
  {
    this->type_list = _arg;
    return *this;
  }
  Type & set__color_list(
    const std::array<uint8_t, 4> & _arg)
  {
    this->color_list = _arg;
    return *this;
  }
  Type & set__blocked(
    const uint8_t & _arg)
  {
    this->blocked = _arg;
    return *this;
  }
  Type & set__has_count_down(
    const uint8_t & _arg)
  {
    this->has_count_down = _arg;
    return *this;
  }
  Type & set__light_num(
    const uint8_t & _arg)
  {
    this->light_num = _arg;
    return *this;
  }
  Type & set__focus(
    const uint8_t & _arg)
  {
    this->focus = _arg;
    return *this;
  }
  Type & set__pole(
    const int8_t & _arg)
  {
    this->pole = _arg;
    return *this;
  }
  Type & set__sync_from_track_id(
    const int64_t & _arg)
  {
    this->sync_from_track_id = _arg;
    return *this;
  }
  Type & set__source(
    const uint8_t & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__f120_region(
    const deva_perception_msgs::msg::TrafficRegion_<ContainerAllocator> & _arg)
  {
    this->f120_region = _arg;
    return *this;
  }
  Type & set__f30_region(
    const deva_perception_msgs::msg::TrafficRegion_<ContainerAllocator> & _arg)
  {
    this->f30_region = _arg;
    return *this;
  }
  Type & set__i_back1(
    const uint8_t & _arg)
  {
    this->i_back1 = _arg;
    return *this;
  }
  Type & set__i_back2(
    const uint8_t & _arg)
  {
    this->i_back2 = _arg;
    return *this;
  }
  Type & set__i_back3(
    const uint8_t & _arg)
  {
    this->i_back3 = _arg;
    return *this;
  }
  Type & set__f_back1(
    const float & _arg)
  {
    this->f_back1 = _arg;
    return *this;
  }
  Type & set__f_back2(
    const float & _arg)
  {
    this->f_back2 = _arg;
    return *this;
  }
  Type & set__f_back3(
    const float & _arg)
  {
    this->f_back3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::SFFusionTFLNOA_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::SFFusionTFLNOA_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::SFFusionTFLNOA_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::SFFusionTFLNOA_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::SFFusionTFLNOA_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::SFFusionTFLNOA_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::SFFusionTFLNOA_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::SFFusionTFLNOA_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::SFFusionTFLNOA_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::SFFusionTFLNOA_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__SFFusionTFLNOA
    std::shared_ptr<deva_perception_msgs::msg::SFFusionTFLNOA_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__SFFusionTFLNOA
    std::shared_ptr<deva_perception_msgs::msg::SFFusionTFLNOA_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFFusionTFLNOA_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->lifetime != other.lifetime) {
      return false;
    }
    if (this->relevancy != other.relevancy) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->cycle_time != other.cycle_time) {
      return false;
    }
    if (this->number != other.number) {
      return false;
    }
    if (this->confi != other.confi) {
      return false;
    }
    if (this->flashstatus != other.flashstatus) {
      return false;
    }
    if (this->background != other.background) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    if (this->poslgt != other.poslgt) {
      return false;
    }
    if (this->poslat != other.poslat) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->region != other.region) {
      return false;
    }
    if (this->tflquadranglevcs != other.tflquadranglevcs) {
      return false;
    }
    if (this->tflquadrangleimg != other.tflquadrangleimg) {
      return false;
    }
    if (this->utmx != other.utmx) {
      return false;
    }
    if (this->utmy != other.utmy) {
      return false;
    }
    if (this->utmz != other.utmz) {
      return false;
    }
    if (this->type_list != other.type_list) {
      return false;
    }
    if (this->color_list != other.color_list) {
      return false;
    }
    if (this->blocked != other.blocked) {
      return false;
    }
    if (this->has_count_down != other.has_count_down) {
      return false;
    }
    if (this->light_num != other.light_num) {
      return false;
    }
    if (this->focus != other.focus) {
      return false;
    }
    if (this->pole != other.pole) {
      return false;
    }
    if (this->sync_from_track_id != other.sync_from_track_id) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->f120_region != other.f120_region) {
      return false;
    }
    if (this->f30_region != other.f30_region) {
      return false;
    }
    if (this->i_back1 != other.i_back1) {
      return false;
    }
    if (this->i_back2 != other.i_back2) {
      return false;
    }
    if (this->i_back3 != other.i_back3) {
      return false;
    }
    if (this->f_back1 != other.f_back1) {
      return false;
    }
    if (this->f_back2 != other.f_back2) {
      return false;
    }
    if (this->f_back3 != other.f_back3) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFFusionTFLNOA_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFFusionTFLNOA_

// alias to use template instance with default allocator
using SFFusionTFLNOA =
  deva_perception_msgs::msg::SFFusionTFLNOA_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFLNOA__STRUCT_HPP_
