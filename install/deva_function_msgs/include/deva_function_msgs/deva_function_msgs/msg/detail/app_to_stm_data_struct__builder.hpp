// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/APPToStmDataStruct.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_TO_STM_DATA_STRUCT__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_TO_STM_DATA_STRUCT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/app_to_stm_data_struct__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_APPToStmDataStruct_rev
{
public:
  explicit Init_APPToStmDataStruct_rev(::deva_function_msgs::msg::APPToStmDataStruct & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::APPToStmDataStruct rev(::deva_function_msgs::msg::APPToStmDataStruct::_rev_type arg)
  {
    msg_.rev = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::APPToStmDataStruct msg_;
};

class Init_APPToStmDataStruct_twli_bri_raw_twli_bri_raw
{
public:
  explicit Init_APPToStmDataStruct_twli_bri_raw_twli_bri_raw(::deva_function_msgs::msg::APPToStmDataStruct & msg)
  : msg_(msg)
  {}
  Init_APPToStmDataStruct_rev twli_bri_raw_twli_bri_raw(::deva_function_msgs::msg::APPToStmDataStruct::_twli_bri_raw_twli_bri_raw_type arg)
  {
    msg_.twli_bri_raw_twli_bri_raw = std::move(arg);
    return Init_APPToStmDataStruct_rev(msg_);
  }

private:
  ::deva_function_msgs::msg::APPToStmDataStruct msg_;
};

class Init_APPToStmDataStruct_twli_bri_raw_qf
{
public:
  explicit Init_APPToStmDataStruct_twli_bri_raw_qf(::deva_function_msgs::msg::APPToStmDataStruct & msg)
  : msg_(msg)
  {}
  Init_APPToStmDataStruct_twli_bri_raw_twli_bri_raw twli_bri_raw_qf(::deva_function_msgs::msg::APPToStmDataStruct::_twli_bri_raw_qf_type arg)
  {
    msg_.twli_bri_raw_qf = std::move(arg);
    return Init_APPToStmDataStruct_twli_bri_raw_twli_bri_raw(msg_);
  }

private:
  ::deva_function_msgs::msg::APPToStmDataStruct msg_;
};

class Init_APPToStmDataStruct_trsm_park_lockd_trsm_park_lockd
{
public:
  explicit Init_APPToStmDataStruct_trsm_park_lockd_trsm_park_lockd(::deva_function_msgs::msg::APPToStmDataStruct & msg)
  : msg_(msg)
  {}
  Init_APPToStmDataStruct_twli_bri_raw_qf trsm_park_lockd_trsm_park_lockd(::deva_function_msgs::msg::APPToStmDataStruct::_trsm_park_lockd_trsm_park_lockd_type arg)
  {
    msg_.trsm_park_lockd_trsm_park_lockd = std::move(arg);
    return Init_APPToStmDataStruct_twli_bri_raw_qf(msg_);
  }

private:
  ::deva_function_msgs::msg::APPToStmDataStruct msg_;
};

class Init_APPToStmDataStruct_tr_lock_sts
{
public:
  explicit Init_APPToStmDataStruct_tr_lock_sts(::deva_function_msgs::msg::APPToStmDataStruct & msg)
  : msg_(msg)
  {}
  Init_APPToStmDataStruct_trsm_park_lockd_trsm_park_lockd tr_lock_sts(::deva_function_msgs::msg::APPToStmDataStruct::_tr_lock_sts_type arg)
  {
    msg_.tr_lock_sts = std::move(arg);
    return Init_APPToStmDataStruct_trsm_park_lockd_trsm_park_lockd(msg_);
  }

private:
  ::deva_function_msgs::msg::APPToStmDataStruct msg_;
};

class Init_APPToStmDataStruct_telephone_sts
{
public:
  explicit Init_APPToStmDataStruct_telephone_sts(::deva_function_msgs::msg::APPToStmDataStruct & msg)
  : msg_(msg)
  {}
  Init_APPToStmDataStruct_tr_lock_sts telephone_sts(::deva_function_msgs::msg::APPToStmDataStruct::_telephone_sts_type arg)
  {
    msg_.telephone_sts = std::move(arg);
    return Init_APPToStmDataStruct_tr_lock_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::APPToStmDataStruct msg_;
};

class Init_APPToStmDataStruct_alrm_sts_snsr_intr_scanr_failr
{
public:
  explicit Init_APPToStmDataStruct_alrm_sts_snsr_intr_scanr_failr(::deva_function_msgs::msg::APPToStmDataStruct & msg)
  : msg_(msg)
  {}
  Init_APPToStmDataStruct_telephone_sts alrm_sts_snsr_intr_scanr_failr(::deva_function_msgs::msg::APPToStmDataStruct::_alrm_sts_snsr_intr_scanr_failr_type arg)
  {
    msg_.alrm_sts_snsr_intr_scanr_failr = std::move(arg);
    return Init_APPToStmDataStruct_telephone_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::APPToStmDataStruct msg_;
};

class Init_APPToStmDataStruct_alrm_sts_snsr_incln_failr
{
public:
  explicit Init_APPToStmDataStruct_alrm_sts_snsr_incln_failr(::deva_function_msgs::msg::APPToStmDataStruct & msg)
  : msg_(msg)
  {}
  Init_APPToStmDataStruct_alrm_sts_snsr_intr_scanr_failr alrm_sts_snsr_incln_failr(::deva_function_msgs::msg::APPToStmDataStruct::_alrm_sts_snsr_incln_failr_type arg)
  {
    msg_.alrm_sts_snsr_incln_failr = std::move(arg);
    return Init_APPToStmDataStruct_alrm_sts_snsr_intr_scanr_failr(msg_);
  }

private:
  ::deva_function_msgs::msg::APPToStmDataStruct msg_;
};

class Init_APPToStmDataStruct_alrm_sts_alrm_trg_src
{
public:
  explicit Init_APPToStmDataStruct_alrm_sts_alrm_trg_src(::deva_function_msgs::msg::APPToStmDataStruct & msg)
  : msg_(msg)
  {}
  Init_APPToStmDataStruct_alrm_sts_snsr_incln_failr alrm_sts_alrm_trg_src(::deva_function_msgs::msg::APPToStmDataStruct::_alrm_sts_alrm_trg_src_type arg)
  {
    msg_.alrm_sts_alrm_trg_src = std::move(arg);
    return Init_APPToStmDataStruct_alrm_sts_snsr_incln_failr(msg_);
  }

private:
  ::deva_function_msgs::msg::APPToStmDataStruct msg_;
};

class Init_APPToStmDataStruct_alrm_sts_alrm_st
{
public:
  explicit Init_APPToStmDataStruct_alrm_sts_alrm_st(::deva_function_msgs::msg::APPToStmDataStruct & msg)
  : msg_(msg)
  {}
  Init_APPToStmDataStruct_alrm_sts_alrm_trg_src alrm_sts_alrm_st(::deva_function_msgs::msg::APPToStmDataStruct::_alrm_sts_alrm_st_type arg)
  {
    msg_.alrm_sts_alrm_st = std::move(arg);
    return Init_APPToStmDataStruct_alrm_sts_alrm_trg_src(msg_);
  }

private:
  ::deva_function_msgs::msg::APPToStmDataStruct msg_;
};

class Init_APPToStmDataStruct_alrm_sts_alrm_failr
{
public:
  explicit Init_APPToStmDataStruct_alrm_sts_alrm_failr(::deva_function_msgs::msg::APPToStmDataStruct & msg)
  : msg_(msg)
  {}
  Init_APPToStmDataStruct_alrm_sts_alrm_st alrm_sts_alrm_failr(::deva_function_msgs::msg::APPToStmDataStruct::_alrm_sts_alrm_failr_type arg)
  {
    msg_.alrm_sts_alrm_failr = std::move(arg);
    return Init_APPToStmDataStruct_alrm_sts_alrm_st(msg_);
  }

private:
  ::deva_function_msgs::msg::APPToStmDataStruct msg_;
};

class Init_APPToStmDataStruct_occupy_mon_sts_drvr_sts
{
public:
  explicit Init_APPToStmDataStruct_occupy_mon_sts_drvr_sts(::deva_function_msgs::msg::APPToStmDataStruct & msg)
  : msg_(msg)
  {}
  Init_APPToStmDataStruct_alrm_sts_alrm_failr occupy_mon_sts_drvr_sts(::deva_function_msgs::msg::APPToStmDataStruct::_occupy_mon_sts_drvr_sts_type arg)
  {
    msg_.occupy_mon_sts_drvr_sts = std::move(arg);
    return Init_APPToStmDataStruct_alrm_sts_alrm_failr(msg_);
  }

private:
  ::deva_function_msgs::msg::APPToStmDataStruct msg_;
};

class Init_APPToStmDataStruct_dc_chrgn_hndl_sts
{
public:
  explicit Init_APPToStmDataStruct_dc_chrgn_hndl_sts(::deva_function_msgs::msg::APPToStmDataStruct & msg)
  : msg_(msg)
  {}
  Init_APPToStmDataStruct_occupy_mon_sts_drvr_sts dc_chrgn_hndl_sts(::deva_function_msgs::msg::APPToStmDataStruct::_dc_chrgn_hndl_sts_type arg)
  {
    msg_.dc_chrgn_hndl_sts = std::move(arg);
    return Init_APPToStmDataStruct_occupy_mon_sts_drvr_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::APPToStmDataStruct msg_;
};

class Init_APPToStmDataStruct_on_bd_chrgr_hndl_sts1
{
public:
  explicit Init_APPToStmDataStruct_on_bd_chrgr_hndl_sts1(::deva_function_msgs::msg::APPToStmDataStruct & msg)
  : msg_(msg)
  {}
  Init_APPToStmDataStruct_dc_chrgn_hndl_sts on_bd_chrgr_hndl_sts1(::deva_function_msgs::msg::APPToStmDataStruct::_on_bd_chrgr_hndl_sts1_type arg)
  {
    msg_.on_bd_chrgr_hndl_sts1 = std::move(arg);
    return Init_APPToStmDataStruct_dc_chrgn_hndl_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::APPToStmDataStruct msg_;
};

class Init_APPToStmDataStruct_mob_dev_avp_req
{
public:
  explicit Init_APPToStmDataStruct_mob_dev_avp_req(::deva_function_msgs::msg::APPToStmDataStruct & msg)
  : msg_(msg)
  {}
  Init_APPToStmDataStruct_on_bd_chrgr_hndl_sts1 mob_dev_avp_req(::deva_function_msgs::msg::APPToStmDataStruct::_mob_dev_avp_req_type arg)
  {
    msg_.mob_dev_avp_req = std::move(arg);
    return Init_APPToStmDataStruct_on_bd_chrgr_hndl_sts1(msg_);
  }

private:
  ::deva_function_msgs::msg::APPToStmDataStruct msg_;
};

class Init_APPToStmDataStruct_app_to_hpa_ctrl_cmd
{
public:
  Init_APPToStmDataStruct_app_to_hpa_ctrl_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_APPToStmDataStruct_mob_dev_avp_req app_to_hpa_ctrl_cmd(::deva_function_msgs::msg::APPToStmDataStruct::_app_to_hpa_ctrl_cmd_type arg)
  {
    msg_.app_to_hpa_ctrl_cmd = std::move(arg);
    return Init_APPToStmDataStruct_mob_dev_avp_req(msg_);
  }

private:
  ::deva_function_msgs::msg::APPToStmDataStruct msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::APPToStmDataStruct>()
{
  return deva_function_msgs::msg::builder::Init_APPToStmDataStruct_app_to_hpa_ctrl_cmd();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__APP_TO_STM_DATA_STRUCT__BUILDER_HPP_
