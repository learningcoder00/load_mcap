// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/SFFusionTFLListNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST_NOA__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST_NOA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"
// Member 'tfllist'
// Member 'tfllist_all'
#include "deva_perception_msgs/msg/detail/sf_fusion_tflnoa__struct.hpp"
// Member 'pop_tfllist'
#include "deva_perception_msgs/msg/detail/po_ptflnoa__struct.hpp"
// Member 'pop_fs_tfllist'
#include "deva_perception_msgs/msg/detail/po_p_fusion_tflnoa__struct.hpp"
// Member 'e2e_traffic_det_maps'
#include "deva_perception_msgs/msg/detail/e2e_traffic_det_pair__struct.hpp"
// Member 'tracked_traffic_e2e_stable_maps'
#include "deva_perception_msgs/msg/detail/traffic_e2e_stable_pair__struct.hpp"
// Member 'rount_info'
#include "deva_perception_msgs/msg/detail/traffic_rount__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__SFFusionTFLListNOA __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__SFFusionTFLListNOA __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFFusionTFLListNOA_
{
  using Type = SFFusionTFLListNOA_<ContainerAllocator>;

  explicit SFFusionTFLListNOA_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    rount_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->framenum = 0ul;
      this->tflcount = 0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
      this->tfllist.fill(deva_perception_msgs::msg::SFFusionTFLNOA_<ContainerAllocator>{_init});
      this->validsize = 0;
      this->all_validsize = 0;
      this->pop_tfllist.fill(deva_perception_msgs::msg::PoPTFLNOA_<ContainerAllocator>{_init});
      this->pop_lightnum = 0;
      this->pop_fs_tfllist.fill(deva_perception_msgs::msg::PoPFusionTFLNOA_<ContainerAllocator>{_init});
      this->pop_fs_lightnum = 0;
      this->tracked_traffic_e2ebc = 0;
      this->tracked_traffic_e2ebc_stable = false;
    }
  }

  explicit SFFusionTFLListNOA_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    reserved(_alloc),
    tfllist(_alloc),
    pop_tfllist(_alloc),
    pop_fs_tfllist(_alloc),
    rount_info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->framenum = 0ul;
      this->tflcount = 0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
      this->tfllist.fill(deva_perception_msgs::msg::SFFusionTFLNOA_<ContainerAllocator>{_alloc, _init});
      this->validsize = 0;
      this->all_validsize = 0;
      this->pop_tfllist.fill(deva_perception_msgs::msg::PoPTFLNOA_<ContainerAllocator>{_alloc, _init});
      this->pop_lightnum = 0;
      this->pop_fs_tfllist.fill(deva_perception_msgs::msg::PoPFusionTFLNOA_<ContainerAllocator>{_alloc, _init});
      this->pop_fs_lightnum = 0;
      this->tracked_traffic_e2ebc = 0;
      this->tracked_traffic_e2ebc_stable = false;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _framenum_type =
    uint32_t;
  _framenum_type framenum;
  using _tflcount_type =
    uint8_t;
  _tflcount_type tflcount;
  using _reserved_type =
    std::array<uint8_t, 2>;
  _reserved_type reserved;
  using _tfllist_type =
    std::array<deva_perception_msgs::msg::SFFusionTFLNOA_<ContainerAllocator>, 8>;
  _tfllist_type tfllist;
  using _validsize_type =
    uint8_t;
  _validsize_type validsize;
  using _tfllist_all_type =
    std::vector<deva_perception_msgs::msg::SFFusionTFLNOA_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::SFFusionTFLNOA_<ContainerAllocator>>>;
  _tfllist_all_type tfllist_all;
  using _all_validsize_type =
    uint8_t;
  _all_validsize_type all_validsize;
  using _pop_tfllist_type =
    std::array<deva_perception_msgs::msg::PoPTFLNOA_<ContainerAllocator>, 8>;
  _pop_tfllist_type pop_tfllist;
  using _pop_lightnum_type =
    uint8_t;
  _pop_lightnum_type pop_lightnum;
  using _pop_fs_tfllist_type =
    std::array<deva_perception_msgs::msg::PoPFusionTFLNOA_<ContainerAllocator>, 8>;
  _pop_fs_tfllist_type pop_fs_tfllist;
  using _pop_fs_lightnum_type =
    uint8_t;
  _pop_fs_lightnum_type pop_fs_lightnum;
  using _e2e_traffic_det_maps_type =
    std::vector<deva_perception_msgs::msg::E2eTrafficDetPair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::E2eTrafficDetPair_<ContainerAllocator>>>;
  _e2e_traffic_det_maps_type e2e_traffic_det_maps;
  using _tracked_traffic_e2e_stable_maps_type =
    std::vector<deva_perception_msgs::msg::TrafficE2eStablePair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::TrafficE2eStablePair_<ContainerAllocator>>>;
  _tracked_traffic_e2e_stable_maps_type tracked_traffic_e2e_stable_maps;
  using _tracked_traffic_e2ebc_type =
    uint8_t;
  _tracked_traffic_e2ebc_type tracked_traffic_e2ebc;
  using _tracked_traffic_e2ebc_stable_type =
    bool;
  _tracked_traffic_e2ebc_stable_type tracked_traffic_e2ebc_stable;
  using _rount_info_type =
    deva_perception_msgs::msg::TrafficRount_<ContainerAllocator>;
  _rount_info_type rount_info;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__framenum(
    const uint32_t & _arg)
  {
    this->framenum = _arg;
    return *this;
  }
  Type & set__tflcount(
    const uint8_t & _arg)
  {
    this->tflcount = _arg;
    return *this;
  }
  Type & set__reserved(
    const std::array<uint8_t, 2> & _arg)
  {
    this->reserved = _arg;
    return *this;
  }
  Type & set__tfllist(
    const std::array<deva_perception_msgs::msg::SFFusionTFLNOA_<ContainerAllocator>, 8> & _arg)
  {
    this->tfllist = _arg;
    return *this;
  }
  Type & set__validsize(
    const uint8_t & _arg)
  {
    this->validsize = _arg;
    return *this;
  }
  Type & set__tfllist_all(
    const std::vector<deva_perception_msgs::msg::SFFusionTFLNOA_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::SFFusionTFLNOA_<ContainerAllocator>>> & _arg)
  {
    this->tfllist_all = _arg;
    return *this;
  }
  Type & set__all_validsize(
    const uint8_t & _arg)
  {
    this->all_validsize = _arg;
    return *this;
  }
  Type & set__pop_tfllist(
    const std::array<deva_perception_msgs::msg::PoPTFLNOA_<ContainerAllocator>, 8> & _arg)
  {
    this->pop_tfllist = _arg;
    return *this;
  }
  Type & set__pop_lightnum(
    const uint8_t & _arg)
  {
    this->pop_lightnum = _arg;
    return *this;
  }
  Type & set__pop_fs_tfllist(
    const std::array<deva_perception_msgs::msg::PoPFusionTFLNOA_<ContainerAllocator>, 8> & _arg)
  {
    this->pop_fs_tfllist = _arg;
    return *this;
  }
  Type & set__pop_fs_lightnum(
    const uint8_t & _arg)
  {
    this->pop_fs_lightnum = _arg;
    return *this;
  }
  Type & set__e2e_traffic_det_maps(
    const std::vector<deva_perception_msgs::msg::E2eTrafficDetPair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::E2eTrafficDetPair_<ContainerAllocator>>> & _arg)
  {
    this->e2e_traffic_det_maps = _arg;
    return *this;
  }
  Type & set__tracked_traffic_e2e_stable_maps(
    const std::vector<deva_perception_msgs::msg::TrafficE2eStablePair_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::TrafficE2eStablePair_<ContainerAllocator>>> & _arg)
  {
    this->tracked_traffic_e2e_stable_maps = _arg;
    return *this;
  }
  Type & set__tracked_traffic_e2ebc(
    const uint8_t & _arg)
  {
    this->tracked_traffic_e2ebc = _arg;
    return *this;
  }
  Type & set__tracked_traffic_e2ebc_stable(
    const bool & _arg)
  {
    this->tracked_traffic_e2ebc_stable = _arg;
    return *this;
  }
  Type & set__rount_info(
    const deva_perception_msgs::msg::TrafficRount_<ContainerAllocator> & _arg)
  {
    this->rount_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::SFFusionTFLListNOA_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::SFFusionTFLListNOA_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::SFFusionTFLListNOA_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::SFFusionTFLListNOA_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::SFFusionTFLListNOA_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::SFFusionTFLListNOA_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::SFFusionTFLListNOA_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::SFFusionTFLListNOA_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::SFFusionTFLListNOA_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::SFFusionTFLListNOA_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__SFFusionTFLListNOA
    std::shared_ptr<deva_perception_msgs::msg::SFFusionTFLListNOA_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__SFFusionTFLListNOA
    std::shared_ptr<deva_perception_msgs::msg::SFFusionTFLListNOA_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFFusionTFLListNOA_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->framenum != other.framenum) {
      return false;
    }
    if (this->tflcount != other.tflcount) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    if (this->tfllist != other.tfllist) {
      return false;
    }
    if (this->validsize != other.validsize) {
      return false;
    }
    if (this->tfllist_all != other.tfllist_all) {
      return false;
    }
    if (this->all_validsize != other.all_validsize) {
      return false;
    }
    if (this->pop_tfllist != other.pop_tfllist) {
      return false;
    }
    if (this->pop_lightnum != other.pop_lightnum) {
      return false;
    }
    if (this->pop_fs_tfllist != other.pop_fs_tfllist) {
      return false;
    }
    if (this->pop_fs_lightnum != other.pop_fs_lightnum) {
      return false;
    }
    if (this->e2e_traffic_det_maps != other.e2e_traffic_det_maps) {
      return false;
    }
    if (this->tracked_traffic_e2e_stable_maps != other.tracked_traffic_e2e_stable_maps) {
      return false;
    }
    if (this->tracked_traffic_e2ebc != other.tracked_traffic_e2ebc) {
      return false;
    }
    if (this->tracked_traffic_e2ebc_stable != other.tracked_traffic_e2ebc_stable) {
      return false;
    }
    if (this->rount_info != other.rount_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFFusionTFLListNOA_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFFusionTFLListNOA_

// alias to use template instance with default allocator
using SFFusionTFLListNOA =
  deva_perception_msgs::msg::SFFusionTFLListNOA_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST_NOA__STRUCT_HPP_
