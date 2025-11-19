// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/APPToStmDataStruct.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_TO_STM_DATA_STRUCT__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_TO_STM_DATA_STRUCT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_function_msgs__msg__APPToStmDataStruct __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__APPToStmDataStruct __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct APPToStmDataStruct_
{
  using Type = APPToStmDataStruct_<ContainerAllocator>;

  explicit APPToStmDataStruct_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->app_to_hpa_ctrl_cmd = 0;
      this->mob_dev_avp_req = 0;
      this->on_bd_chrgr_hndl_sts1 = 0;
      this->dc_chrgn_hndl_sts = 0;
      this->occupy_mon_sts_drvr_sts = 0;
      this->alrm_sts_alrm_failr = 0;
      this->alrm_sts_alrm_st = 0;
      this->alrm_sts_alrm_trg_src = 0;
      this->alrm_sts_snsr_incln_failr = 0;
      this->alrm_sts_snsr_intr_scanr_failr = 0;
      this->telephone_sts = 0;
      this->tr_lock_sts = 0;
      this->trsm_park_lockd_trsm_park_lockd = 0;
      this->twli_bri_raw_qf = 0;
      this->twli_bri_raw_twli_bri_raw = 0;
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->rev.begin(), this->rev.end(), 0);
    }
  }

  explicit APPToStmDataStruct_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rev(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->app_to_hpa_ctrl_cmd = 0;
      this->mob_dev_avp_req = 0;
      this->on_bd_chrgr_hndl_sts1 = 0;
      this->dc_chrgn_hndl_sts = 0;
      this->occupy_mon_sts_drvr_sts = 0;
      this->alrm_sts_alrm_failr = 0;
      this->alrm_sts_alrm_st = 0;
      this->alrm_sts_alrm_trg_src = 0;
      this->alrm_sts_snsr_incln_failr = 0;
      this->alrm_sts_snsr_intr_scanr_failr = 0;
      this->telephone_sts = 0;
      this->tr_lock_sts = 0;
      this->trsm_park_lockd_trsm_park_lockd = 0;
      this->twli_bri_raw_qf = 0;
      this->twli_bri_raw_twli_bri_raw = 0;
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->rev.begin(), this->rev.end(), 0);
    }
  }

  // field types and members
  using _app_to_hpa_ctrl_cmd_type =
    uint8_t;
  _app_to_hpa_ctrl_cmd_type app_to_hpa_ctrl_cmd;
  using _mob_dev_avp_req_type =
    uint8_t;
  _mob_dev_avp_req_type mob_dev_avp_req;
  using _on_bd_chrgr_hndl_sts1_type =
    uint8_t;
  _on_bd_chrgr_hndl_sts1_type on_bd_chrgr_hndl_sts1;
  using _dc_chrgn_hndl_sts_type =
    uint8_t;
  _dc_chrgn_hndl_sts_type dc_chrgn_hndl_sts;
  using _occupy_mon_sts_drvr_sts_type =
    uint8_t;
  _occupy_mon_sts_drvr_sts_type occupy_mon_sts_drvr_sts;
  using _alrm_sts_alrm_failr_type =
    uint8_t;
  _alrm_sts_alrm_failr_type alrm_sts_alrm_failr;
  using _alrm_sts_alrm_st_type =
    uint8_t;
  _alrm_sts_alrm_st_type alrm_sts_alrm_st;
  using _alrm_sts_alrm_trg_src_type =
    uint8_t;
  _alrm_sts_alrm_trg_src_type alrm_sts_alrm_trg_src;
  using _alrm_sts_snsr_incln_failr_type =
    uint8_t;
  _alrm_sts_snsr_incln_failr_type alrm_sts_snsr_incln_failr;
  using _alrm_sts_snsr_intr_scanr_failr_type =
    uint8_t;
  _alrm_sts_snsr_intr_scanr_failr_type alrm_sts_snsr_intr_scanr_failr;
  using _telephone_sts_type =
    uint8_t;
  _telephone_sts_type telephone_sts;
  using _tr_lock_sts_type =
    uint8_t;
  _tr_lock_sts_type tr_lock_sts;
  using _trsm_park_lockd_trsm_park_lockd_type =
    uint8_t;
  _trsm_park_lockd_trsm_park_lockd_type trsm_park_lockd_trsm_park_lockd;
  using _twli_bri_raw_qf_type =
    uint8_t;
  _twli_bri_raw_qf_type twli_bri_raw_qf;
  using _twli_bri_raw_twli_bri_raw_type =
    uint16_t;
  _twli_bri_raw_twli_bri_raw_type twli_bri_raw_twli_bri_raw;
  using _rev_type =
    std::array<uint8_t, 8>;
  _rev_type rev;

  // setters for named parameter idiom
  Type & set__app_to_hpa_ctrl_cmd(
    const uint8_t & _arg)
  {
    this->app_to_hpa_ctrl_cmd = _arg;
    return *this;
  }
  Type & set__mob_dev_avp_req(
    const uint8_t & _arg)
  {
    this->mob_dev_avp_req = _arg;
    return *this;
  }
  Type & set__on_bd_chrgr_hndl_sts1(
    const uint8_t & _arg)
  {
    this->on_bd_chrgr_hndl_sts1 = _arg;
    return *this;
  }
  Type & set__dc_chrgn_hndl_sts(
    const uint8_t & _arg)
  {
    this->dc_chrgn_hndl_sts = _arg;
    return *this;
  }
  Type & set__occupy_mon_sts_drvr_sts(
    const uint8_t & _arg)
  {
    this->occupy_mon_sts_drvr_sts = _arg;
    return *this;
  }
  Type & set__alrm_sts_alrm_failr(
    const uint8_t & _arg)
  {
    this->alrm_sts_alrm_failr = _arg;
    return *this;
  }
  Type & set__alrm_sts_alrm_st(
    const uint8_t & _arg)
  {
    this->alrm_sts_alrm_st = _arg;
    return *this;
  }
  Type & set__alrm_sts_alrm_trg_src(
    const uint8_t & _arg)
  {
    this->alrm_sts_alrm_trg_src = _arg;
    return *this;
  }
  Type & set__alrm_sts_snsr_incln_failr(
    const uint8_t & _arg)
  {
    this->alrm_sts_snsr_incln_failr = _arg;
    return *this;
  }
  Type & set__alrm_sts_snsr_intr_scanr_failr(
    const uint8_t & _arg)
  {
    this->alrm_sts_snsr_intr_scanr_failr = _arg;
    return *this;
  }
  Type & set__telephone_sts(
    const uint8_t & _arg)
  {
    this->telephone_sts = _arg;
    return *this;
  }
  Type & set__tr_lock_sts(
    const uint8_t & _arg)
  {
    this->tr_lock_sts = _arg;
    return *this;
  }
  Type & set__trsm_park_lockd_trsm_park_lockd(
    const uint8_t & _arg)
  {
    this->trsm_park_lockd_trsm_park_lockd = _arg;
    return *this;
  }
  Type & set__twli_bri_raw_qf(
    const uint8_t & _arg)
  {
    this->twli_bri_raw_qf = _arg;
    return *this;
  }
  Type & set__twli_bri_raw_twli_bri_raw(
    const uint16_t & _arg)
  {
    this->twli_bri_raw_twli_bri_raw = _arg;
    return *this;
  }
  Type & set__rev(
    const std::array<uint8_t, 8> & _arg)
  {
    this->rev = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::APPToStmDataStruct_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::APPToStmDataStruct_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::APPToStmDataStruct_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::APPToStmDataStruct_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::APPToStmDataStruct_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::APPToStmDataStruct_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::APPToStmDataStruct_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::APPToStmDataStruct_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::APPToStmDataStruct_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::APPToStmDataStruct_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__APPToStmDataStruct
    std::shared_ptr<deva_function_msgs::msg::APPToStmDataStruct_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__APPToStmDataStruct
    std::shared_ptr<deva_function_msgs::msg::APPToStmDataStruct_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const APPToStmDataStruct_ & other) const
  {
    if (this->app_to_hpa_ctrl_cmd != other.app_to_hpa_ctrl_cmd) {
      return false;
    }
    if (this->mob_dev_avp_req != other.mob_dev_avp_req) {
      return false;
    }
    if (this->on_bd_chrgr_hndl_sts1 != other.on_bd_chrgr_hndl_sts1) {
      return false;
    }
    if (this->dc_chrgn_hndl_sts != other.dc_chrgn_hndl_sts) {
      return false;
    }
    if (this->occupy_mon_sts_drvr_sts != other.occupy_mon_sts_drvr_sts) {
      return false;
    }
    if (this->alrm_sts_alrm_failr != other.alrm_sts_alrm_failr) {
      return false;
    }
    if (this->alrm_sts_alrm_st != other.alrm_sts_alrm_st) {
      return false;
    }
    if (this->alrm_sts_alrm_trg_src != other.alrm_sts_alrm_trg_src) {
      return false;
    }
    if (this->alrm_sts_snsr_incln_failr != other.alrm_sts_snsr_incln_failr) {
      return false;
    }
    if (this->alrm_sts_snsr_intr_scanr_failr != other.alrm_sts_snsr_intr_scanr_failr) {
      return false;
    }
    if (this->telephone_sts != other.telephone_sts) {
      return false;
    }
    if (this->tr_lock_sts != other.tr_lock_sts) {
      return false;
    }
    if (this->trsm_park_lockd_trsm_park_lockd != other.trsm_park_lockd_trsm_park_lockd) {
      return false;
    }
    if (this->twli_bri_raw_qf != other.twli_bri_raw_qf) {
      return false;
    }
    if (this->twli_bri_raw_twli_bri_raw != other.twli_bri_raw_twli_bri_raw) {
      return false;
    }
    if (this->rev != other.rev) {
      return false;
    }
    return true;
  }
  bool operator!=(const APPToStmDataStruct_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct APPToStmDataStruct_

// alias to use template instance with default allocator
using APPToStmDataStruct =
  deva_function_msgs::msg::APPToStmDataStruct_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_TO_STM_DATA_STRUCT__STRUCT_HPP_
