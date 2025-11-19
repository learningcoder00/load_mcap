// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/MachCamSts.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CAM_STS__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CAM_STS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__deva_function_msgs__msg__MachCamSts __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__MachCamSts __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MachCamSts_
{
  using Type = MachCamSts_<ContainerAllocator>;

  explicit MachCamSts_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trip_reset_sync_req_msg_asdm = 0;
      this->cam_sts_cam_cam_heatr_actv = 0;
      this->cam_sts_cam_frnt_blkd1 = 0;
      this->cam_sts_cam_frnt_blkd2 = 0;
      this->cam_sts_cam_frnt_blkd3 = 0;
      this->cam_sts_cam_frnt_blkd4 = 0;
      this->cam_sts_cam_frnt_blkd5 = 0;
      this->cam_sts_cam_frnt_blkd6 = 0;
      this->cam_sts_cam_frnt_blkd7 = 0;
      this->cam_sts_cam_frnt_blkd8 = 0;
      this->cam_sts_cam_frnt_cal_not_strtd = 0;
      this->cam_sts_cam_miss_com = 0;
      this->cam_status0 = 0;
      this->hmi_re_cam_sts0 = 0;
      this->frnt_side_cam_le_sts0 = 0;
      this->frnt_side_cam_ri_sts0 = 0;
      this->re_side_cam_le_sts0 = 0;
      this->re_side_cam_ri_sts0 = 0;
    }
  }

  explicit MachCamSts_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trip_reset_sync_req_msg_asdm = 0;
      this->cam_sts_cam_cam_heatr_actv = 0;
      this->cam_sts_cam_frnt_blkd1 = 0;
      this->cam_sts_cam_frnt_blkd2 = 0;
      this->cam_sts_cam_frnt_blkd3 = 0;
      this->cam_sts_cam_frnt_blkd4 = 0;
      this->cam_sts_cam_frnt_blkd5 = 0;
      this->cam_sts_cam_frnt_blkd6 = 0;
      this->cam_sts_cam_frnt_blkd7 = 0;
      this->cam_sts_cam_frnt_blkd8 = 0;
      this->cam_sts_cam_frnt_cal_not_strtd = 0;
      this->cam_sts_cam_miss_com = 0;
      this->cam_status0 = 0;
      this->hmi_re_cam_sts0 = 0;
      this->frnt_side_cam_le_sts0 = 0;
      this->frnt_side_cam_ri_sts0 = 0;
      this->re_side_cam_le_sts0 = 0;
      this->re_side_cam_ri_sts0 = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _trip_reset_sync_req_msg_asdm_type =
    uint16_t;
  _trip_reset_sync_req_msg_asdm_type trip_reset_sync_req_msg_asdm;
  using _cam_sts_cam_cam_heatr_actv_type =
    uint8_t;
  _cam_sts_cam_cam_heatr_actv_type cam_sts_cam_cam_heatr_actv;
  using _cam_sts_cam_frnt_blkd1_type =
    uint8_t;
  _cam_sts_cam_frnt_blkd1_type cam_sts_cam_frnt_blkd1;
  using _cam_sts_cam_frnt_blkd2_type =
    uint8_t;
  _cam_sts_cam_frnt_blkd2_type cam_sts_cam_frnt_blkd2;
  using _cam_sts_cam_frnt_blkd3_type =
    uint8_t;
  _cam_sts_cam_frnt_blkd3_type cam_sts_cam_frnt_blkd3;
  using _cam_sts_cam_frnt_blkd4_type =
    uint8_t;
  _cam_sts_cam_frnt_blkd4_type cam_sts_cam_frnt_blkd4;
  using _cam_sts_cam_frnt_blkd5_type =
    uint8_t;
  _cam_sts_cam_frnt_blkd5_type cam_sts_cam_frnt_blkd5;
  using _cam_sts_cam_frnt_blkd6_type =
    uint8_t;
  _cam_sts_cam_frnt_blkd6_type cam_sts_cam_frnt_blkd6;
  using _cam_sts_cam_frnt_blkd7_type =
    uint8_t;
  _cam_sts_cam_frnt_blkd7_type cam_sts_cam_frnt_blkd7;
  using _cam_sts_cam_frnt_blkd8_type =
    uint8_t;
  _cam_sts_cam_frnt_blkd8_type cam_sts_cam_frnt_blkd8;
  using _cam_sts_cam_frnt_cal_not_strtd_type =
    uint8_t;
  _cam_sts_cam_frnt_cal_not_strtd_type cam_sts_cam_frnt_cal_not_strtd;
  using _cam_sts_cam_miss_com_type =
    uint8_t;
  _cam_sts_cam_miss_com_type cam_sts_cam_miss_com;
  using _cam_status0_type =
    uint8_t;
  _cam_status0_type cam_status0;
  using _hmi_re_cam_sts0_type =
    uint8_t;
  _hmi_re_cam_sts0_type hmi_re_cam_sts0;
  using _frnt_side_cam_le_sts0_type =
    uint8_t;
  _frnt_side_cam_le_sts0_type frnt_side_cam_le_sts0;
  using _frnt_side_cam_ri_sts0_type =
    uint8_t;
  _frnt_side_cam_ri_sts0_type frnt_side_cam_ri_sts0;
  using _re_side_cam_le_sts0_type =
    uint8_t;
  _re_side_cam_le_sts0_type re_side_cam_le_sts0;
  using _re_side_cam_ri_sts0_type =
    uint8_t;
  _re_side_cam_ri_sts0_type re_side_cam_ri_sts0;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__trip_reset_sync_req_msg_asdm(
    const uint16_t & _arg)
  {
    this->trip_reset_sync_req_msg_asdm = _arg;
    return *this;
  }
  Type & set__cam_sts_cam_cam_heatr_actv(
    const uint8_t & _arg)
  {
    this->cam_sts_cam_cam_heatr_actv = _arg;
    return *this;
  }
  Type & set__cam_sts_cam_frnt_blkd1(
    const uint8_t & _arg)
  {
    this->cam_sts_cam_frnt_blkd1 = _arg;
    return *this;
  }
  Type & set__cam_sts_cam_frnt_blkd2(
    const uint8_t & _arg)
  {
    this->cam_sts_cam_frnt_blkd2 = _arg;
    return *this;
  }
  Type & set__cam_sts_cam_frnt_blkd3(
    const uint8_t & _arg)
  {
    this->cam_sts_cam_frnt_blkd3 = _arg;
    return *this;
  }
  Type & set__cam_sts_cam_frnt_blkd4(
    const uint8_t & _arg)
  {
    this->cam_sts_cam_frnt_blkd4 = _arg;
    return *this;
  }
  Type & set__cam_sts_cam_frnt_blkd5(
    const uint8_t & _arg)
  {
    this->cam_sts_cam_frnt_blkd5 = _arg;
    return *this;
  }
  Type & set__cam_sts_cam_frnt_blkd6(
    const uint8_t & _arg)
  {
    this->cam_sts_cam_frnt_blkd6 = _arg;
    return *this;
  }
  Type & set__cam_sts_cam_frnt_blkd7(
    const uint8_t & _arg)
  {
    this->cam_sts_cam_frnt_blkd7 = _arg;
    return *this;
  }
  Type & set__cam_sts_cam_frnt_blkd8(
    const uint8_t & _arg)
  {
    this->cam_sts_cam_frnt_blkd8 = _arg;
    return *this;
  }
  Type & set__cam_sts_cam_frnt_cal_not_strtd(
    const uint8_t & _arg)
  {
    this->cam_sts_cam_frnt_cal_not_strtd = _arg;
    return *this;
  }
  Type & set__cam_sts_cam_miss_com(
    const uint8_t & _arg)
  {
    this->cam_sts_cam_miss_com = _arg;
    return *this;
  }
  Type & set__cam_status0(
    const uint8_t & _arg)
  {
    this->cam_status0 = _arg;
    return *this;
  }
  Type & set__hmi_re_cam_sts0(
    const uint8_t & _arg)
  {
    this->hmi_re_cam_sts0 = _arg;
    return *this;
  }
  Type & set__frnt_side_cam_le_sts0(
    const uint8_t & _arg)
  {
    this->frnt_side_cam_le_sts0 = _arg;
    return *this;
  }
  Type & set__frnt_side_cam_ri_sts0(
    const uint8_t & _arg)
  {
    this->frnt_side_cam_ri_sts0 = _arg;
    return *this;
  }
  Type & set__re_side_cam_le_sts0(
    const uint8_t & _arg)
  {
    this->re_side_cam_le_sts0 = _arg;
    return *this;
  }
  Type & set__re_side_cam_ri_sts0(
    const uint8_t & _arg)
  {
    this->re_side_cam_ri_sts0 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::MachCamSts_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::MachCamSts_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::MachCamSts_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::MachCamSts_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::MachCamSts_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::MachCamSts_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::MachCamSts_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::MachCamSts_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::MachCamSts_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::MachCamSts_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__MachCamSts
    std::shared_ptr<deva_function_msgs::msg::MachCamSts_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__MachCamSts
    std::shared_ptr<deva_function_msgs::msg::MachCamSts_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MachCamSts_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->trip_reset_sync_req_msg_asdm != other.trip_reset_sync_req_msg_asdm) {
      return false;
    }
    if (this->cam_sts_cam_cam_heatr_actv != other.cam_sts_cam_cam_heatr_actv) {
      return false;
    }
    if (this->cam_sts_cam_frnt_blkd1 != other.cam_sts_cam_frnt_blkd1) {
      return false;
    }
    if (this->cam_sts_cam_frnt_blkd2 != other.cam_sts_cam_frnt_blkd2) {
      return false;
    }
    if (this->cam_sts_cam_frnt_blkd3 != other.cam_sts_cam_frnt_blkd3) {
      return false;
    }
    if (this->cam_sts_cam_frnt_blkd4 != other.cam_sts_cam_frnt_blkd4) {
      return false;
    }
    if (this->cam_sts_cam_frnt_blkd5 != other.cam_sts_cam_frnt_blkd5) {
      return false;
    }
    if (this->cam_sts_cam_frnt_blkd6 != other.cam_sts_cam_frnt_blkd6) {
      return false;
    }
    if (this->cam_sts_cam_frnt_blkd7 != other.cam_sts_cam_frnt_blkd7) {
      return false;
    }
    if (this->cam_sts_cam_frnt_blkd8 != other.cam_sts_cam_frnt_blkd8) {
      return false;
    }
    if (this->cam_sts_cam_frnt_cal_not_strtd != other.cam_sts_cam_frnt_cal_not_strtd) {
      return false;
    }
    if (this->cam_sts_cam_miss_com != other.cam_sts_cam_miss_com) {
      return false;
    }
    if (this->cam_status0 != other.cam_status0) {
      return false;
    }
    if (this->hmi_re_cam_sts0 != other.hmi_re_cam_sts0) {
      return false;
    }
    if (this->frnt_side_cam_le_sts0 != other.frnt_side_cam_le_sts0) {
      return false;
    }
    if (this->frnt_side_cam_ri_sts0 != other.frnt_side_cam_ri_sts0) {
      return false;
    }
    if (this->re_side_cam_le_sts0 != other.re_side_cam_le_sts0) {
      return false;
    }
    if (this->re_side_cam_ri_sts0 != other.re_side_cam_ri_sts0) {
      return false;
    }
    return true;
  }
  bool operator!=(const MachCamSts_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MachCamSts_

// alias to use template instance with default allocator
using MachCamSts =
  deva_function_msgs::msg::MachCamSts_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CAM_STS__STRUCT_HPP_
