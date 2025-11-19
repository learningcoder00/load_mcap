// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/E2eAdbTrafficSign.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_TRAFFIC_SIGN__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_TRAFFIC_SIGN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/e2e_adb_traffic_sign__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_detd_qly
{
public:
  explicit Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_detd_qly(::deva_perception_msgs::msg::E2eAdbTrafficSign & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::E2eAdbTrafficSign traffic_sign_for_adb_adb_detd_qly(::deva_perception_msgs::msg::E2eAdbTrafficSign::_traffic_sign_for_adb_adb_detd_qly_type arg)
  {
    msg_.traffic_sign_for_adb_adb_detd_qly = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdbTrafficSign msg_;
};

class Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_hozl_ag_ri
{
public:
  explicit Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_hozl_ag_ri(::deva_perception_msgs::msg::E2eAdbTrafficSign & msg)
  : msg_(msg)
  {}
  Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_detd_qly traffic_sign_for_adb_adb_hozl_ag_ri(::deva_perception_msgs::msg::E2eAdbTrafficSign::_traffic_sign_for_adb_adb_hozl_ag_ri_type arg)
  {
    msg_.traffic_sign_for_adb_adb_hozl_ag_ri = std::move(arg);
    return Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_detd_qly(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdbTrafficSign msg_;
};

class Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_hozl_ag_le
{
public:
  explicit Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_hozl_ag_le(::deva_perception_msgs::msg::E2eAdbTrafficSign & msg)
  : msg_(msg)
  {}
  Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_hozl_ag_ri traffic_sign_for_adb_adb_hozl_ag_le(::deva_perception_msgs::msg::E2eAdbTrafficSign::_traffic_sign_for_adb_adb_hozl_ag_le_type arg)
  {
    msg_.traffic_sign_for_adb_adb_hozl_ag_le = std::move(arg);
    return Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_hozl_ag_ri(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdbTrafficSign msg_;
};

class Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_vert_ag_top
{
public:
  explicit Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_vert_ag_top(::deva_perception_msgs::msg::E2eAdbTrafficSign & msg)
  : msg_(msg)
  {}
  Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_hozl_ag_le traffic_sign_for_adb_adb_vert_ag_top(::deva_perception_msgs::msg::E2eAdbTrafficSign::_traffic_sign_for_adb_adb_vert_ag_top_type arg)
  {
    msg_.traffic_sign_for_adb_adb_vert_ag_top = std::move(arg);
    return Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_hozl_ag_le(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdbTrafficSign msg_;
};

class Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_vert_ag_bot
{
public:
  explicit Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_vert_ag_bot(::deva_perception_msgs::msg::E2eAdbTrafficSign & msg)
  : msg_(msg)
  {}
  Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_vert_ag_top traffic_sign_for_adb_adb_vert_ag_bot(::deva_perception_msgs::msg::E2eAdbTrafficSign::_traffic_sign_for_adb_adb_vert_ag_bot_type arg)
  {
    msg_.traffic_sign_for_adb_adb_vert_ag_bot = std::move(arg);
    return Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_vert_ag_top(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdbTrafficSign msg_;
};

class Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_abs_dist
{
public:
  explicit Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_abs_dist(::deva_perception_msgs::msg::E2eAdbTrafficSign & msg)
  : msg_(msg)
  {}
  Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_vert_ag_bot traffic_sign_for_adb_adb_abs_dist(::deva_perception_msgs::msg::E2eAdbTrafficSign::_traffic_sign_for_adb_adb_abs_dist_type arg)
  {
    msg_.traffic_sign_for_adb_adb_abs_dist = std::move(arg);
    return Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_vert_ag_bot(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdbTrafficSign msg_;
};

class Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_trk_info
{
public:
  explicit Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_trk_info(::deva_perception_msgs::msg::E2eAdbTrafficSign & msg)
  : msg_(msg)
  {}
  Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_abs_dist traffic_sign_for_adb_adb_trk_info(::deva_perception_msgs::msg::E2eAdbTrafficSign::_traffic_sign_for_adb_adb_trk_info_type arg)
  {
    msg_.traffic_sign_for_adb_adb_trk_info = std::move(arg);
    return Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_abs_dist(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdbTrafficSign msg_;
};

class Init_E2eAdbTrafficSign_header
{
public:
  Init_E2eAdbTrafficSign_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_trk_info header(::deva_perception_msgs::msg::E2eAdbTrafficSign::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_E2eAdbTrafficSign_traffic_sign_for_adb_adb_trk_info(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdbTrafficSign msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::E2eAdbTrafficSign>()
{
  return deva_perception_msgs::msg::builder::Init_E2eAdbTrafficSign_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_TRAFFIC_SIGN__BUILDER_HPP_
