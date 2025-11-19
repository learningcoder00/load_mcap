// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/MachButtonControl.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_BUTTON_CONTROL__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_BUTTON_CONTROL__STRUCT_HPP_

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
# define DEPRECATED__deva_function_msgs__msg__MachButtonControl __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__MachButtonControl __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MachButtonControl_
{
  using Type = MachButtonControl_<ContainerAllocator>;

  explicit MachButtonControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->asy_a_lgt_sts_asy_a_lgt_sts = 0;
      this->asy_cnoa_crs_lat_offs_anima_sts = 0;
      this->drv_off_req_for_lgt_ctrl = 0;
      this->asy_eyes_off_warn_rqrd = 0;
      this->asy_eyes_off_warn_rqrd_sound = 0;
      this->asy_first_ti_actvn = 0;
      this->asy_noa_actv_suggest_sound = 0;
      this->asy_inform_for_drvr = 0;
      this->asy_lat_deg_sts = 0;
      this->asy_inform_for_drvr_sound = 0;
      this->asy_noa_actv_suggest = 0;
      this->asy_noa_distan_msg = 0;
      this->asy_noa_distan_msg_sound = 0;
      this->asy_noa_sts = 0;
      this->asy_steer_apply_rqrd_sound = 0;
      this->asy_aut_drvg_avl_sound = 0;
      this->asy_lan_chg_color_dsp = 0;
      this->asy_lan_chg_mesg = 0;
      this->asy_lan_chg_sod = 0;
      this->asy_aut_emgy_steer_actv = 0;
      this->brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv = 0;
      this->cllsn_threat = 0;
    }
  }

  explicit MachButtonControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->asy_a_lgt_sts_asy_a_lgt_sts = 0;
      this->asy_cnoa_crs_lat_offs_anima_sts = 0;
      this->drv_off_req_for_lgt_ctrl = 0;
      this->asy_eyes_off_warn_rqrd = 0;
      this->asy_eyes_off_warn_rqrd_sound = 0;
      this->asy_first_ti_actvn = 0;
      this->asy_noa_actv_suggest_sound = 0;
      this->asy_inform_for_drvr = 0;
      this->asy_lat_deg_sts = 0;
      this->asy_inform_for_drvr_sound = 0;
      this->asy_noa_actv_suggest = 0;
      this->asy_noa_distan_msg = 0;
      this->asy_noa_distan_msg_sound = 0;
      this->asy_noa_sts = 0;
      this->asy_steer_apply_rqrd_sound = 0;
      this->asy_aut_drvg_avl_sound = 0;
      this->asy_lan_chg_color_dsp = 0;
      this->asy_lan_chg_mesg = 0;
      this->asy_lan_chg_sod = 0;
      this->asy_aut_emgy_steer_actv = 0;
      this->brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv = 0;
      this->cllsn_threat = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _asy_a_lgt_sts_asy_a_lgt_sts_type =
    uint8_t;
  _asy_a_lgt_sts_asy_a_lgt_sts_type asy_a_lgt_sts_asy_a_lgt_sts;
  using _asy_cnoa_crs_lat_offs_anima_sts_type =
    uint8_t;
  _asy_cnoa_crs_lat_offs_anima_sts_type asy_cnoa_crs_lat_offs_anima_sts;
  using _drv_off_req_for_lgt_ctrl_type =
    uint8_t;
  _drv_off_req_for_lgt_ctrl_type drv_off_req_for_lgt_ctrl;
  using _asy_eyes_off_warn_rqrd_type =
    uint8_t;
  _asy_eyes_off_warn_rqrd_type asy_eyes_off_warn_rqrd;
  using _asy_eyes_off_warn_rqrd_sound_type =
    uint8_t;
  _asy_eyes_off_warn_rqrd_sound_type asy_eyes_off_warn_rqrd_sound;
  using _asy_first_ti_actvn_type =
    uint8_t;
  _asy_first_ti_actvn_type asy_first_ti_actvn;
  using _asy_noa_actv_suggest_sound_type =
    uint8_t;
  _asy_noa_actv_suggest_sound_type asy_noa_actv_suggest_sound;
  using _asy_inform_for_drvr_type =
    uint8_t;
  _asy_inform_for_drvr_type asy_inform_for_drvr;
  using _asy_lat_deg_sts_type =
    uint8_t;
  _asy_lat_deg_sts_type asy_lat_deg_sts;
  using _asy_inform_for_drvr_sound_type =
    uint8_t;
  _asy_inform_for_drvr_sound_type asy_inform_for_drvr_sound;
  using _asy_noa_actv_suggest_type =
    uint8_t;
  _asy_noa_actv_suggest_type asy_noa_actv_suggest;
  using _asy_noa_distan_msg_type =
    uint8_t;
  _asy_noa_distan_msg_type asy_noa_distan_msg;
  using _asy_noa_distan_msg_sound_type =
    uint8_t;
  _asy_noa_distan_msg_sound_type asy_noa_distan_msg_sound;
  using _asy_noa_sts_type =
    uint8_t;
  _asy_noa_sts_type asy_noa_sts;
  using _asy_steer_apply_rqrd_sound_type =
    uint8_t;
  _asy_steer_apply_rqrd_sound_type asy_steer_apply_rqrd_sound;
  using _asy_aut_drvg_avl_sound_type =
    uint8_t;
  _asy_aut_drvg_avl_sound_type asy_aut_drvg_avl_sound;
  using _asy_lan_chg_color_dsp_type =
    uint8_t;
  _asy_lan_chg_color_dsp_type asy_lan_chg_color_dsp;
  using _asy_lan_chg_mesg_type =
    uint8_t;
  _asy_lan_chg_mesg_type asy_lan_chg_mesg;
  using _asy_lan_chg_sod_type =
    uint8_t;
  _asy_lan_chg_sod_type asy_lan_chg_sod;
  using _asy_aut_emgy_steer_actv_type =
    uint8_t;
  _asy_aut_emgy_steer_actv_type asy_aut_emgy_steer_actv;
  using _brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv_type =
    uint8_t;
  _brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv_type brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv;
  using _cllsn_threat_type =
    uint8_t;
  _cllsn_threat_type cllsn_threat;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__asy_a_lgt_sts_asy_a_lgt_sts(
    const uint8_t & _arg)
  {
    this->asy_a_lgt_sts_asy_a_lgt_sts = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_lat_offs_anima_sts(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_lat_offs_anima_sts = _arg;
    return *this;
  }
  Type & set__drv_off_req_for_lgt_ctrl(
    const uint8_t & _arg)
  {
    this->drv_off_req_for_lgt_ctrl = _arg;
    return *this;
  }
  Type & set__asy_eyes_off_warn_rqrd(
    const uint8_t & _arg)
  {
    this->asy_eyes_off_warn_rqrd = _arg;
    return *this;
  }
  Type & set__asy_eyes_off_warn_rqrd_sound(
    const uint8_t & _arg)
  {
    this->asy_eyes_off_warn_rqrd_sound = _arg;
    return *this;
  }
  Type & set__asy_first_ti_actvn(
    const uint8_t & _arg)
  {
    this->asy_first_ti_actvn = _arg;
    return *this;
  }
  Type & set__asy_noa_actv_suggest_sound(
    const uint8_t & _arg)
  {
    this->asy_noa_actv_suggest_sound = _arg;
    return *this;
  }
  Type & set__asy_inform_for_drvr(
    const uint8_t & _arg)
  {
    this->asy_inform_for_drvr = _arg;
    return *this;
  }
  Type & set__asy_lat_deg_sts(
    const uint8_t & _arg)
  {
    this->asy_lat_deg_sts = _arg;
    return *this;
  }
  Type & set__asy_inform_for_drvr_sound(
    const uint8_t & _arg)
  {
    this->asy_inform_for_drvr_sound = _arg;
    return *this;
  }
  Type & set__asy_noa_actv_suggest(
    const uint8_t & _arg)
  {
    this->asy_noa_actv_suggest = _arg;
    return *this;
  }
  Type & set__asy_noa_distan_msg(
    const uint8_t & _arg)
  {
    this->asy_noa_distan_msg = _arg;
    return *this;
  }
  Type & set__asy_noa_distan_msg_sound(
    const uint8_t & _arg)
  {
    this->asy_noa_distan_msg_sound = _arg;
    return *this;
  }
  Type & set__asy_noa_sts(
    const uint8_t & _arg)
  {
    this->asy_noa_sts = _arg;
    return *this;
  }
  Type & set__asy_steer_apply_rqrd_sound(
    const uint8_t & _arg)
  {
    this->asy_steer_apply_rqrd_sound = _arg;
    return *this;
  }
  Type & set__asy_aut_drvg_avl_sound(
    const uint8_t & _arg)
  {
    this->asy_aut_drvg_avl_sound = _arg;
    return *this;
  }
  Type & set__asy_lan_chg_color_dsp(
    const uint8_t & _arg)
  {
    this->asy_lan_chg_color_dsp = _arg;
    return *this;
  }
  Type & set__asy_lan_chg_mesg(
    const uint8_t & _arg)
  {
    this->asy_lan_chg_mesg = _arg;
    return *this;
  }
  Type & set__asy_lan_chg_sod(
    const uint8_t & _arg)
  {
    this->asy_lan_chg_sod = _arg;
    return *this;
  }
  Type & set__asy_aut_emgy_steer_actv(
    const uint8_t & _arg)
  {
    this->asy_aut_emgy_steer_actv = _arg;
    return *this;
  }
  Type & set__brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv(
    const uint8_t & _arg)
  {
    this->brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv = _arg;
    return *this;
  }
  Type & set__cllsn_threat(
    const uint8_t & _arg)
  {
    this->cllsn_threat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::MachButtonControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::MachButtonControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::MachButtonControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::MachButtonControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::MachButtonControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::MachButtonControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::MachButtonControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::MachButtonControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::MachButtonControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::MachButtonControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__MachButtonControl
    std::shared_ptr<deva_function_msgs::msg::MachButtonControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__MachButtonControl
    std::shared_ptr<deva_function_msgs::msg::MachButtonControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MachButtonControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->asy_a_lgt_sts_asy_a_lgt_sts != other.asy_a_lgt_sts_asy_a_lgt_sts) {
      return false;
    }
    if (this->asy_cnoa_crs_lat_offs_anima_sts != other.asy_cnoa_crs_lat_offs_anima_sts) {
      return false;
    }
    if (this->drv_off_req_for_lgt_ctrl != other.drv_off_req_for_lgt_ctrl) {
      return false;
    }
    if (this->asy_eyes_off_warn_rqrd != other.asy_eyes_off_warn_rqrd) {
      return false;
    }
    if (this->asy_eyes_off_warn_rqrd_sound != other.asy_eyes_off_warn_rqrd_sound) {
      return false;
    }
    if (this->asy_first_ti_actvn != other.asy_first_ti_actvn) {
      return false;
    }
    if (this->asy_noa_actv_suggest_sound != other.asy_noa_actv_suggest_sound) {
      return false;
    }
    if (this->asy_inform_for_drvr != other.asy_inform_for_drvr) {
      return false;
    }
    if (this->asy_lat_deg_sts != other.asy_lat_deg_sts) {
      return false;
    }
    if (this->asy_inform_for_drvr_sound != other.asy_inform_for_drvr_sound) {
      return false;
    }
    if (this->asy_noa_actv_suggest != other.asy_noa_actv_suggest) {
      return false;
    }
    if (this->asy_noa_distan_msg != other.asy_noa_distan_msg) {
      return false;
    }
    if (this->asy_noa_distan_msg_sound != other.asy_noa_distan_msg_sound) {
      return false;
    }
    if (this->asy_noa_sts != other.asy_noa_sts) {
      return false;
    }
    if (this->asy_steer_apply_rqrd_sound != other.asy_steer_apply_rqrd_sound) {
      return false;
    }
    if (this->asy_aut_drvg_avl_sound != other.asy_aut_drvg_avl_sound) {
      return false;
    }
    if (this->asy_lan_chg_color_dsp != other.asy_lan_chg_color_dsp) {
      return false;
    }
    if (this->asy_lan_chg_mesg != other.asy_lan_chg_mesg) {
      return false;
    }
    if (this->asy_lan_chg_sod != other.asy_lan_chg_sod) {
      return false;
    }
    if (this->asy_aut_emgy_steer_actv != other.asy_aut_emgy_steer_actv) {
      return false;
    }
    if (this->brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv != other.brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv) {
      return false;
    }
    if (this->cllsn_threat != other.cllsn_threat) {
      return false;
    }
    return true;
  }
  bool operator!=(const MachButtonControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MachButtonControl_

// alias to use template instance with default allocator
using MachButtonControl =
  deva_function_msgs::msg::MachButtonControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_BUTTON_CONTROL__STRUCT_HPP_
