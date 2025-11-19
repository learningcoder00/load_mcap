// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/E2eAdb.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/e2e_adb__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_E2eAdb_veh_obj_for_adb_vert_ag
{
public:
  explicit Init_E2eAdb_veh_obj_for_adb_vert_ag(::deva_perception_msgs::msg::E2eAdb & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::E2eAdb veh_obj_for_adb_vert_ag(::deva_perception_msgs::msg::E2eAdb::_veh_obj_for_adb_vert_ag_type arg)
  {
    msg_.veh_obj_for_adb_vert_ag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdb msg_;
};

class Init_E2eAdb_veh_obj_for_adb_trk_info
{
public:
  explicit Init_E2eAdb_veh_obj_for_adb_trk_info(::deva_perception_msgs::msg::E2eAdb & msg)
  : msg_(msg)
  {}
  Init_E2eAdb_veh_obj_for_adb_vert_ag veh_obj_for_adb_trk_info(::deva_perception_msgs::msg::E2eAdb::_veh_obj_for_adb_trk_info_type arg)
  {
    msg_.veh_obj_for_adb_trk_info = std::move(arg);
    return Init_E2eAdb_veh_obj_for_adb_vert_ag(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdb msg_;
};

class Init_E2eAdb_veh_obj_for_adb_obj_hozl_ag_spd_ri
{
public:
  explicit Init_E2eAdb_veh_obj_for_adb_obj_hozl_ag_spd_ri(::deva_perception_msgs::msg::E2eAdb & msg)
  : msg_(msg)
  {}
  Init_E2eAdb_veh_obj_for_adb_trk_info veh_obj_for_adb_obj_hozl_ag_spd_ri(::deva_perception_msgs::msg::E2eAdb::_veh_obj_for_adb_obj_hozl_ag_spd_ri_type arg)
  {
    msg_.veh_obj_for_adb_obj_hozl_ag_spd_ri = std::move(arg);
    return Init_E2eAdb_veh_obj_for_adb_trk_info(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdb msg_;
};

class Init_E2eAdb_veh_obj_for_adb_obj_hozl_ag_spd_le
{
public:
  explicit Init_E2eAdb_veh_obj_for_adb_obj_hozl_ag_spd_le(::deva_perception_msgs::msg::E2eAdb & msg)
  : msg_(msg)
  {}
  Init_E2eAdb_veh_obj_for_adb_obj_hozl_ag_spd_ri veh_obj_for_adb_obj_hozl_ag_spd_le(::deva_perception_msgs::msg::E2eAdb::_veh_obj_for_adb_obj_hozl_ag_spd_le_type arg)
  {
    msg_.veh_obj_for_adb_obj_hozl_ag_spd_le = std::move(arg);
    return Init_E2eAdb_veh_obj_for_adb_obj_hozl_ag_spd_ri(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdb msg_;
};

class Init_E2eAdb_veh_obj_for_adb_obj_dir
{
public:
  explicit Init_E2eAdb_veh_obj_for_adb_obj_dir(::deva_perception_msgs::msg::E2eAdb & msg)
  : msg_(msg)
  {}
  Init_E2eAdb_veh_obj_for_adb_obj_hozl_ag_spd_le veh_obj_for_adb_obj_dir(::deva_perception_msgs::msg::E2eAdb::_veh_obj_for_adb_obj_dir_type arg)
  {
    msg_.veh_obj_for_adb_obj_dir = std::move(arg);
    return Init_E2eAdb_veh_obj_for_adb_obj_hozl_ag_spd_le(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdb msg_;
};

class Init_E2eAdb_veh_obj_for_adb_hozl_ag_ri
{
public:
  explicit Init_E2eAdb_veh_obj_for_adb_hozl_ag_ri(::deva_perception_msgs::msg::E2eAdb & msg)
  : msg_(msg)
  {}
  Init_E2eAdb_veh_obj_for_adb_obj_dir veh_obj_for_adb_hozl_ag_ri(::deva_perception_msgs::msg::E2eAdb::_veh_obj_for_adb_hozl_ag_ri_type arg)
  {
    msg_.veh_obj_for_adb_hozl_ag_ri = std::move(arg);
    return Init_E2eAdb_veh_obj_for_adb_obj_dir(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdb msg_;
};

class Init_E2eAdb_veh_obj_for_adb_hozl_ag_le
{
public:
  explicit Init_E2eAdb_veh_obj_for_adb_hozl_ag_le(::deva_perception_msgs::msg::E2eAdb & msg)
  : msg_(msg)
  {}
  Init_E2eAdb_veh_obj_for_adb_hozl_ag_ri veh_obj_for_adb_hozl_ag_le(::deva_perception_msgs::msg::E2eAdb::_veh_obj_for_adb_hozl_ag_le_type arg)
  {
    msg_.veh_obj_for_adb_hozl_ag_le = std::move(arg);
    return Init_E2eAdb_veh_obj_for_adb_hozl_ag_ri(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdb msg_;
};

class Init_E2eAdb_veh_obj_for_adb_classn
{
public:
  explicit Init_E2eAdb_veh_obj_for_adb_classn(::deva_perception_msgs::msg::E2eAdb & msg)
  : msg_(msg)
  {}
  Init_E2eAdb_veh_obj_for_adb_hozl_ag_le veh_obj_for_adb_classn(::deva_perception_msgs::msg::E2eAdb::_veh_obj_for_adb_classn_type arg)
  {
    msg_.veh_obj_for_adb_classn = std::move(arg);
    return Init_E2eAdb_veh_obj_for_adb_hozl_ag_le(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdb msg_;
};

class Init_E2eAdb_eh_obj_for_adb_abs_dist
{
public:
  explicit Init_E2eAdb_eh_obj_for_adb_abs_dist(::deva_perception_msgs::msg::E2eAdb & msg)
  : msg_(msg)
  {}
  Init_E2eAdb_veh_obj_for_adb_classn eh_obj_for_adb_abs_dist(::deva_perception_msgs::msg::E2eAdb::_eh_obj_for_adb_abs_dist_type arg)
  {
    msg_.eh_obj_for_adb_abs_dist = std::move(arg);
    return Init_E2eAdb_veh_obj_for_adb_classn(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdb msg_;
};

class Init_E2eAdb_header
{
public:
  Init_E2eAdb_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_E2eAdb_eh_obj_for_adb_abs_dist header(::deva_perception_msgs::msg::E2eAdb::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_E2eAdb_eh_obj_for_adb_abs_dist(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eAdb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::E2eAdb>()
{
  return deva_perception_msgs::msg::builder::Init_E2eAdb_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB__BUILDER_HPP_
