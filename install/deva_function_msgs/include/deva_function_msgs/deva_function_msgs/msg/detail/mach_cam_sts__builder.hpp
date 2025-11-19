// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/MachCamSts.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CAM_STS__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CAM_STS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/mach_cam_sts__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_MachCamSts_re_side_cam_ri_sts0
{
public:
  explicit Init_MachCamSts_re_side_cam_ri_sts0(::deva_function_msgs::msg::MachCamSts & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::MachCamSts re_side_cam_ri_sts0(::deva_function_msgs::msg::MachCamSts::_re_side_cam_ri_sts0_type arg)
  {
    msg_.re_side_cam_ri_sts0 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCamSts msg_;
};

class Init_MachCamSts_re_side_cam_le_sts0
{
public:
  explicit Init_MachCamSts_re_side_cam_le_sts0(::deva_function_msgs::msg::MachCamSts & msg)
  : msg_(msg)
  {}
  Init_MachCamSts_re_side_cam_ri_sts0 re_side_cam_le_sts0(::deva_function_msgs::msg::MachCamSts::_re_side_cam_le_sts0_type arg)
  {
    msg_.re_side_cam_le_sts0 = std::move(arg);
    return Init_MachCamSts_re_side_cam_ri_sts0(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCamSts msg_;
};

class Init_MachCamSts_frnt_side_cam_ri_sts0
{
public:
  explicit Init_MachCamSts_frnt_side_cam_ri_sts0(::deva_function_msgs::msg::MachCamSts & msg)
  : msg_(msg)
  {}
  Init_MachCamSts_re_side_cam_le_sts0 frnt_side_cam_ri_sts0(::deva_function_msgs::msg::MachCamSts::_frnt_side_cam_ri_sts0_type arg)
  {
    msg_.frnt_side_cam_ri_sts0 = std::move(arg);
    return Init_MachCamSts_re_side_cam_le_sts0(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCamSts msg_;
};

class Init_MachCamSts_frnt_side_cam_le_sts0
{
public:
  explicit Init_MachCamSts_frnt_side_cam_le_sts0(::deva_function_msgs::msg::MachCamSts & msg)
  : msg_(msg)
  {}
  Init_MachCamSts_frnt_side_cam_ri_sts0 frnt_side_cam_le_sts0(::deva_function_msgs::msg::MachCamSts::_frnt_side_cam_le_sts0_type arg)
  {
    msg_.frnt_side_cam_le_sts0 = std::move(arg);
    return Init_MachCamSts_frnt_side_cam_ri_sts0(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCamSts msg_;
};

class Init_MachCamSts_hmi_re_cam_sts0
{
public:
  explicit Init_MachCamSts_hmi_re_cam_sts0(::deva_function_msgs::msg::MachCamSts & msg)
  : msg_(msg)
  {}
  Init_MachCamSts_frnt_side_cam_le_sts0 hmi_re_cam_sts0(::deva_function_msgs::msg::MachCamSts::_hmi_re_cam_sts0_type arg)
  {
    msg_.hmi_re_cam_sts0 = std::move(arg);
    return Init_MachCamSts_frnt_side_cam_le_sts0(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCamSts msg_;
};

class Init_MachCamSts_cam_status0
{
public:
  explicit Init_MachCamSts_cam_status0(::deva_function_msgs::msg::MachCamSts & msg)
  : msg_(msg)
  {}
  Init_MachCamSts_hmi_re_cam_sts0 cam_status0(::deva_function_msgs::msg::MachCamSts::_cam_status0_type arg)
  {
    msg_.cam_status0 = std::move(arg);
    return Init_MachCamSts_hmi_re_cam_sts0(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCamSts msg_;
};

class Init_MachCamSts_cam_sts_cam_miss_com
{
public:
  explicit Init_MachCamSts_cam_sts_cam_miss_com(::deva_function_msgs::msg::MachCamSts & msg)
  : msg_(msg)
  {}
  Init_MachCamSts_cam_status0 cam_sts_cam_miss_com(::deva_function_msgs::msg::MachCamSts::_cam_sts_cam_miss_com_type arg)
  {
    msg_.cam_sts_cam_miss_com = std::move(arg);
    return Init_MachCamSts_cam_status0(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCamSts msg_;
};

class Init_MachCamSts_cam_sts_cam_frnt_cal_not_strtd
{
public:
  explicit Init_MachCamSts_cam_sts_cam_frnt_cal_not_strtd(::deva_function_msgs::msg::MachCamSts & msg)
  : msg_(msg)
  {}
  Init_MachCamSts_cam_sts_cam_miss_com cam_sts_cam_frnt_cal_not_strtd(::deva_function_msgs::msg::MachCamSts::_cam_sts_cam_frnt_cal_not_strtd_type arg)
  {
    msg_.cam_sts_cam_frnt_cal_not_strtd = std::move(arg);
    return Init_MachCamSts_cam_sts_cam_miss_com(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCamSts msg_;
};

class Init_MachCamSts_cam_sts_cam_frnt_blkd8
{
public:
  explicit Init_MachCamSts_cam_sts_cam_frnt_blkd8(::deva_function_msgs::msg::MachCamSts & msg)
  : msg_(msg)
  {}
  Init_MachCamSts_cam_sts_cam_frnt_cal_not_strtd cam_sts_cam_frnt_blkd8(::deva_function_msgs::msg::MachCamSts::_cam_sts_cam_frnt_blkd8_type arg)
  {
    msg_.cam_sts_cam_frnt_blkd8 = std::move(arg);
    return Init_MachCamSts_cam_sts_cam_frnt_cal_not_strtd(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCamSts msg_;
};

class Init_MachCamSts_cam_sts_cam_frnt_blkd7
{
public:
  explicit Init_MachCamSts_cam_sts_cam_frnt_blkd7(::deva_function_msgs::msg::MachCamSts & msg)
  : msg_(msg)
  {}
  Init_MachCamSts_cam_sts_cam_frnt_blkd8 cam_sts_cam_frnt_blkd7(::deva_function_msgs::msg::MachCamSts::_cam_sts_cam_frnt_blkd7_type arg)
  {
    msg_.cam_sts_cam_frnt_blkd7 = std::move(arg);
    return Init_MachCamSts_cam_sts_cam_frnt_blkd8(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCamSts msg_;
};

class Init_MachCamSts_cam_sts_cam_frnt_blkd6
{
public:
  explicit Init_MachCamSts_cam_sts_cam_frnt_blkd6(::deva_function_msgs::msg::MachCamSts & msg)
  : msg_(msg)
  {}
  Init_MachCamSts_cam_sts_cam_frnt_blkd7 cam_sts_cam_frnt_blkd6(::deva_function_msgs::msg::MachCamSts::_cam_sts_cam_frnt_blkd6_type arg)
  {
    msg_.cam_sts_cam_frnt_blkd6 = std::move(arg);
    return Init_MachCamSts_cam_sts_cam_frnt_blkd7(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCamSts msg_;
};

class Init_MachCamSts_cam_sts_cam_frnt_blkd5
{
public:
  explicit Init_MachCamSts_cam_sts_cam_frnt_blkd5(::deva_function_msgs::msg::MachCamSts & msg)
  : msg_(msg)
  {}
  Init_MachCamSts_cam_sts_cam_frnt_blkd6 cam_sts_cam_frnt_blkd5(::deva_function_msgs::msg::MachCamSts::_cam_sts_cam_frnt_blkd5_type arg)
  {
    msg_.cam_sts_cam_frnt_blkd5 = std::move(arg);
    return Init_MachCamSts_cam_sts_cam_frnt_blkd6(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCamSts msg_;
};

class Init_MachCamSts_cam_sts_cam_frnt_blkd4
{
public:
  explicit Init_MachCamSts_cam_sts_cam_frnt_blkd4(::deva_function_msgs::msg::MachCamSts & msg)
  : msg_(msg)
  {}
  Init_MachCamSts_cam_sts_cam_frnt_blkd5 cam_sts_cam_frnt_blkd4(::deva_function_msgs::msg::MachCamSts::_cam_sts_cam_frnt_blkd4_type arg)
  {
    msg_.cam_sts_cam_frnt_blkd4 = std::move(arg);
    return Init_MachCamSts_cam_sts_cam_frnt_blkd5(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCamSts msg_;
};

class Init_MachCamSts_cam_sts_cam_frnt_blkd3
{
public:
  explicit Init_MachCamSts_cam_sts_cam_frnt_blkd3(::deva_function_msgs::msg::MachCamSts & msg)
  : msg_(msg)
  {}
  Init_MachCamSts_cam_sts_cam_frnt_blkd4 cam_sts_cam_frnt_blkd3(::deva_function_msgs::msg::MachCamSts::_cam_sts_cam_frnt_blkd3_type arg)
  {
    msg_.cam_sts_cam_frnt_blkd3 = std::move(arg);
    return Init_MachCamSts_cam_sts_cam_frnt_blkd4(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCamSts msg_;
};

class Init_MachCamSts_cam_sts_cam_frnt_blkd2
{
public:
  explicit Init_MachCamSts_cam_sts_cam_frnt_blkd2(::deva_function_msgs::msg::MachCamSts & msg)
  : msg_(msg)
  {}
  Init_MachCamSts_cam_sts_cam_frnt_blkd3 cam_sts_cam_frnt_blkd2(::deva_function_msgs::msg::MachCamSts::_cam_sts_cam_frnt_blkd2_type arg)
  {
    msg_.cam_sts_cam_frnt_blkd2 = std::move(arg);
    return Init_MachCamSts_cam_sts_cam_frnt_blkd3(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCamSts msg_;
};

class Init_MachCamSts_cam_sts_cam_frnt_blkd1
{
public:
  explicit Init_MachCamSts_cam_sts_cam_frnt_blkd1(::deva_function_msgs::msg::MachCamSts & msg)
  : msg_(msg)
  {}
  Init_MachCamSts_cam_sts_cam_frnt_blkd2 cam_sts_cam_frnt_blkd1(::deva_function_msgs::msg::MachCamSts::_cam_sts_cam_frnt_blkd1_type arg)
  {
    msg_.cam_sts_cam_frnt_blkd1 = std::move(arg);
    return Init_MachCamSts_cam_sts_cam_frnt_blkd2(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCamSts msg_;
};

class Init_MachCamSts_cam_sts_cam_cam_heatr_actv
{
public:
  explicit Init_MachCamSts_cam_sts_cam_cam_heatr_actv(::deva_function_msgs::msg::MachCamSts & msg)
  : msg_(msg)
  {}
  Init_MachCamSts_cam_sts_cam_frnt_blkd1 cam_sts_cam_cam_heatr_actv(::deva_function_msgs::msg::MachCamSts::_cam_sts_cam_cam_heatr_actv_type arg)
  {
    msg_.cam_sts_cam_cam_heatr_actv = std::move(arg);
    return Init_MachCamSts_cam_sts_cam_frnt_blkd1(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCamSts msg_;
};

class Init_MachCamSts_trip_reset_sync_req_msg_asdm
{
public:
  explicit Init_MachCamSts_trip_reset_sync_req_msg_asdm(::deva_function_msgs::msg::MachCamSts & msg)
  : msg_(msg)
  {}
  Init_MachCamSts_cam_sts_cam_cam_heatr_actv trip_reset_sync_req_msg_asdm(::deva_function_msgs::msg::MachCamSts::_trip_reset_sync_req_msg_asdm_type arg)
  {
    msg_.trip_reset_sync_req_msg_asdm = std::move(arg);
    return Init_MachCamSts_cam_sts_cam_cam_heatr_actv(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCamSts msg_;
};

class Init_MachCamSts_header
{
public:
  Init_MachCamSts_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MachCamSts_trip_reset_sync_req_msg_asdm header(::deva_function_msgs::msg::MachCamSts::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MachCamSts_trip_reset_sync_req_msg_asdm(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCamSts msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::MachCamSts>()
{
  return deva_function_msgs::msg::builder::Init_MachCamSts_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CAM_STS__BUILDER_HPP_
