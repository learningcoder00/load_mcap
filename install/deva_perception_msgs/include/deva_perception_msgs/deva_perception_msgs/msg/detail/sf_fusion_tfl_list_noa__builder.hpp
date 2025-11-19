// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/SFFusionTFLListNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST_NOA__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST_NOA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/sf_fusion_tfl_list_noa__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_SFFusionTFLListNOA_rount_info
{
public:
  explicit Init_SFFusionTFLListNOA_rount_info(::deva_perception_msgs::msg::SFFusionTFLListNOA & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::SFFusionTFLListNOA rount_info(::deva_perception_msgs::msg::SFFusionTFLListNOA::_rount_info_type arg)
  {
    msg_.rount_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLListNOA msg_;
};

class Init_SFFusionTFLListNOA_tracked_traffic_e2ebc_stable
{
public:
  explicit Init_SFFusionTFLListNOA_tracked_traffic_e2ebc_stable(::deva_perception_msgs::msg::SFFusionTFLListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLListNOA_rount_info tracked_traffic_e2ebc_stable(::deva_perception_msgs::msg::SFFusionTFLListNOA::_tracked_traffic_e2ebc_stable_type arg)
  {
    msg_.tracked_traffic_e2ebc_stable = std::move(arg);
    return Init_SFFusionTFLListNOA_rount_info(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLListNOA msg_;
};

class Init_SFFusionTFLListNOA_tracked_traffic_e2ebc
{
public:
  explicit Init_SFFusionTFLListNOA_tracked_traffic_e2ebc(::deva_perception_msgs::msg::SFFusionTFLListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLListNOA_tracked_traffic_e2ebc_stable tracked_traffic_e2ebc(::deva_perception_msgs::msg::SFFusionTFLListNOA::_tracked_traffic_e2ebc_type arg)
  {
    msg_.tracked_traffic_e2ebc = std::move(arg);
    return Init_SFFusionTFLListNOA_tracked_traffic_e2ebc_stable(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLListNOA msg_;
};

class Init_SFFusionTFLListNOA_tracked_traffic_e2e_stable_maps
{
public:
  explicit Init_SFFusionTFLListNOA_tracked_traffic_e2e_stable_maps(::deva_perception_msgs::msg::SFFusionTFLListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLListNOA_tracked_traffic_e2ebc tracked_traffic_e2e_stable_maps(::deva_perception_msgs::msg::SFFusionTFLListNOA::_tracked_traffic_e2e_stable_maps_type arg)
  {
    msg_.tracked_traffic_e2e_stable_maps = std::move(arg);
    return Init_SFFusionTFLListNOA_tracked_traffic_e2ebc(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLListNOA msg_;
};

class Init_SFFusionTFLListNOA_e2e_traffic_det_maps
{
public:
  explicit Init_SFFusionTFLListNOA_e2e_traffic_det_maps(::deva_perception_msgs::msg::SFFusionTFLListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLListNOA_tracked_traffic_e2e_stable_maps e2e_traffic_det_maps(::deva_perception_msgs::msg::SFFusionTFLListNOA::_e2e_traffic_det_maps_type arg)
  {
    msg_.e2e_traffic_det_maps = std::move(arg);
    return Init_SFFusionTFLListNOA_tracked_traffic_e2e_stable_maps(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLListNOA msg_;
};

class Init_SFFusionTFLListNOA_pop_fs_lightnum
{
public:
  explicit Init_SFFusionTFLListNOA_pop_fs_lightnum(::deva_perception_msgs::msg::SFFusionTFLListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLListNOA_e2e_traffic_det_maps pop_fs_lightnum(::deva_perception_msgs::msg::SFFusionTFLListNOA::_pop_fs_lightnum_type arg)
  {
    msg_.pop_fs_lightnum = std::move(arg);
    return Init_SFFusionTFLListNOA_e2e_traffic_det_maps(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLListNOA msg_;
};

class Init_SFFusionTFLListNOA_pop_fs_tfllist
{
public:
  explicit Init_SFFusionTFLListNOA_pop_fs_tfllist(::deva_perception_msgs::msg::SFFusionTFLListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLListNOA_pop_fs_lightnum pop_fs_tfllist(::deva_perception_msgs::msg::SFFusionTFLListNOA::_pop_fs_tfllist_type arg)
  {
    msg_.pop_fs_tfllist = std::move(arg);
    return Init_SFFusionTFLListNOA_pop_fs_lightnum(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLListNOA msg_;
};

class Init_SFFusionTFLListNOA_pop_lightnum
{
public:
  explicit Init_SFFusionTFLListNOA_pop_lightnum(::deva_perception_msgs::msg::SFFusionTFLListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLListNOA_pop_fs_tfllist pop_lightnum(::deva_perception_msgs::msg::SFFusionTFLListNOA::_pop_lightnum_type arg)
  {
    msg_.pop_lightnum = std::move(arg);
    return Init_SFFusionTFLListNOA_pop_fs_tfllist(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLListNOA msg_;
};

class Init_SFFusionTFLListNOA_pop_tfllist
{
public:
  explicit Init_SFFusionTFLListNOA_pop_tfllist(::deva_perception_msgs::msg::SFFusionTFLListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLListNOA_pop_lightnum pop_tfllist(::deva_perception_msgs::msg::SFFusionTFLListNOA::_pop_tfllist_type arg)
  {
    msg_.pop_tfllist = std::move(arg);
    return Init_SFFusionTFLListNOA_pop_lightnum(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLListNOA msg_;
};

class Init_SFFusionTFLListNOA_all_validsize
{
public:
  explicit Init_SFFusionTFLListNOA_all_validsize(::deva_perception_msgs::msg::SFFusionTFLListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLListNOA_pop_tfllist all_validsize(::deva_perception_msgs::msg::SFFusionTFLListNOA::_all_validsize_type arg)
  {
    msg_.all_validsize = std::move(arg);
    return Init_SFFusionTFLListNOA_pop_tfllist(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLListNOA msg_;
};

class Init_SFFusionTFLListNOA_tfllist_all
{
public:
  explicit Init_SFFusionTFLListNOA_tfllist_all(::deva_perception_msgs::msg::SFFusionTFLListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLListNOA_all_validsize tfllist_all(::deva_perception_msgs::msg::SFFusionTFLListNOA::_tfllist_all_type arg)
  {
    msg_.tfllist_all = std::move(arg);
    return Init_SFFusionTFLListNOA_all_validsize(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLListNOA msg_;
};

class Init_SFFusionTFLListNOA_validsize
{
public:
  explicit Init_SFFusionTFLListNOA_validsize(::deva_perception_msgs::msg::SFFusionTFLListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLListNOA_tfllist_all validsize(::deva_perception_msgs::msg::SFFusionTFLListNOA::_validsize_type arg)
  {
    msg_.validsize = std::move(arg);
    return Init_SFFusionTFLListNOA_tfllist_all(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLListNOA msg_;
};

class Init_SFFusionTFLListNOA_tfllist
{
public:
  explicit Init_SFFusionTFLListNOA_tfllist(::deva_perception_msgs::msg::SFFusionTFLListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLListNOA_validsize tfllist(::deva_perception_msgs::msg::SFFusionTFLListNOA::_tfllist_type arg)
  {
    msg_.tfllist = std::move(arg);
    return Init_SFFusionTFLListNOA_validsize(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLListNOA msg_;
};

class Init_SFFusionTFLListNOA_reserved
{
public:
  explicit Init_SFFusionTFLListNOA_reserved(::deva_perception_msgs::msg::SFFusionTFLListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLListNOA_tfllist reserved(::deva_perception_msgs::msg::SFFusionTFLListNOA::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_SFFusionTFLListNOA_tfllist(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLListNOA msg_;
};

class Init_SFFusionTFLListNOA_tflcount
{
public:
  explicit Init_SFFusionTFLListNOA_tflcount(::deva_perception_msgs::msg::SFFusionTFLListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLListNOA_reserved tflcount(::deva_perception_msgs::msg::SFFusionTFLListNOA::_tflcount_type arg)
  {
    msg_.tflcount = std::move(arg);
    return Init_SFFusionTFLListNOA_reserved(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLListNOA msg_;
};

class Init_SFFusionTFLListNOA_framenum
{
public:
  explicit Init_SFFusionTFLListNOA_framenum(::deva_perception_msgs::msg::SFFusionTFLListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLListNOA_tflcount framenum(::deva_perception_msgs::msg::SFFusionTFLListNOA::_framenum_type arg)
  {
    msg_.framenum = std::move(arg);
    return Init_SFFusionTFLListNOA_tflcount(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLListNOA msg_;
};

class Init_SFFusionTFLListNOA_timestamp
{
public:
  explicit Init_SFFusionTFLListNOA_timestamp(::deva_perception_msgs::msg::SFFusionTFLListNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLListNOA_framenum timestamp(::deva_perception_msgs::msg::SFFusionTFLListNOA::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_SFFusionTFLListNOA_framenum(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLListNOA msg_;
};

class Init_SFFusionTFLListNOA_header
{
public:
  Init_SFFusionTFLListNOA_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFFusionTFLListNOA_timestamp header(::deva_perception_msgs::msg::SFFusionTFLListNOA::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SFFusionTFLListNOA_timestamp(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLListNOA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::SFFusionTFLListNOA>()
{
  return deva_perception_msgs::msg::builder::Init_SFFusionTFLListNOA_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFL_LIST_NOA__BUILDER_HPP_
