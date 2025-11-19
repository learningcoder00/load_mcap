// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/SFFusionTFLNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFLNOA__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFLNOA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/sf_fusion_tflnoa__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_SFFusionTFLNOA_f_back3
{
public:
  explicit Init_SFFusionTFLNOA_f_back3(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::SFFusionTFLNOA f_back3(::deva_perception_msgs::msg::SFFusionTFLNOA::_f_back3_type arg)
  {
    msg_.f_back3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_f_back2
{
public:
  explicit Init_SFFusionTFLNOA_f_back2(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_f_back3 f_back2(::deva_perception_msgs::msg::SFFusionTFLNOA::_f_back2_type arg)
  {
    msg_.f_back2 = std::move(arg);
    return Init_SFFusionTFLNOA_f_back3(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_f_back1
{
public:
  explicit Init_SFFusionTFLNOA_f_back1(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_f_back2 f_back1(::deva_perception_msgs::msg::SFFusionTFLNOA::_f_back1_type arg)
  {
    msg_.f_back1 = std::move(arg);
    return Init_SFFusionTFLNOA_f_back2(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_i_back3
{
public:
  explicit Init_SFFusionTFLNOA_i_back3(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_f_back1 i_back3(::deva_perception_msgs::msg::SFFusionTFLNOA::_i_back3_type arg)
  {
    msg_.i_back3 = std::move(arg);
    return Init_SFFusionTFLNOA_f_back1(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_i_back2
{
public:
  explicit Init_SFFusionTFLNOA_i_back2(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_i_back3 i_back2(::deva_perception_msgs::msg::SFFusionTFLNOA::_i_back2_type arg)
  {
    msg_.i_back2 = std::move(arg);
    return Init_SFFusionTFLNOA_i_back3(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_i_back1
{
public:
  explicit Init_SFFusionTFLNOA_i_back1(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_i_back2 i_back1(::deva_perception_msgs::msg::SFFusionTFLNOA::_i_back1_type arg)
  {
    msg_.i_back1 = std::move(arg);
    return Init_SFFusionTFLNOA_i_back2(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_f30_region
{
public:
  explicit Init_SFFusionTFLNOA_f30_region(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_i_back1 f30_region(::deva_perception_msgs::msg::SFFusionTFLNOA::_f30_region_type arg)
  {
    msg_.f30_region = std::move(arg);
    return Init_SFFusionTFLNOA_i_back1(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_f120_region
{
public:
  explicit Init_SFFusionTFLNOA_f120_region(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_f30_region f120_region(::deva_perception_msgs::msg::SFFusionTFLNOA::_f120_region_type arg)
  {
    msg_.f120_region = std::move(arg);
    return Init_SFFusionTFLNOA_f30_region(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_source
{
public:
  explicit Init_SFFusionTFLNOA_source(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_f120_region source(::deva_perception_msgs::msg::SFFusionTFLNOA::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_SFFusionTFLNOA_f120_region(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_sync_from_track_id
{
public:
  explicit Init_SFFusionTFLNOA_sync_from_track_id(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_source sync_from_track_id(::deva_perception_msgs::msg::SFFusionTFLNOA::_sync_from_track_id_type arg)
  {
    msg_.sync_from_track_id = std::move(arg);
    return Init_SFFusionTFLNOA_source(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_pole
{
public:
  explicit Init_SFFusionTFLNOA_pole(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_sync_from_track_id pole(::deva_perception_msgs::msg::SFFusionTFLNOA::_pole_type arg)
  {
    msg_.pole = std::move(arg);
    return Init_SFFusionTFLNOA_sync_from_track_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_focus
{
public:
  explicit Init_SFFusionTFLNOA_focus(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_pole focus(::deva_perception_msgs::msg::SFFusionTFLNOA::_focus_type arg)
  {
    msg_.focus = std::move(arg);
    return Init_SFFusionTFLNOA_pole(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_light_num
{
public:
  explicit Init_SFFusionTFLNOA_light_num(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_focus light_num(::deva_perception_msgs::msg::SFFusionTFLNOA::_light_num_type arg)
  {
    msg_.light_num = std::move(arg);
    return Init_SFFusionTFLNOA_focus(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_has_count_down
{
public:
  explicit Init_SFFusionTFLNOA_has_count_down(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_light_num has_count_down(::deva_perception_msgs::msg::SFFusionTFLNOA::_has_count_down_type arg)
  {
    msg_.has_count_down = std::move(arg);
    return Init_SFFusionTFLNOA_light_num(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_blocked
{
public:
  explicit Init_SFFusionTFLNOA_blocked(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_has_count_down blocked(::deva_perception_msgs::msg::SFFusionTFLNOA::_blocked_type arg)
  {
    msg_.blocked = std::move(arg);
    return Init_SFFusionTFLNOA_has_count_down(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_color_list
{
public:
  explicit Init_SFFusionTFLNOA_color_list(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_blocked color_list(::deva_perception_msgs::msg::SFFusionTFLNOA::_color_list_type arg)
  {
    msg_.color_list = std::move(arg);
    return Init_SFFusionTFLNOA_blocked(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_type_list
{
public:
  explicit Init_SFFusionTFLNOA_type_list(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_color_list type_list(::deva_perception_msgs::msg::SFFusionTFLNOA::_type_list_type arg)
  {
    msg_.type_list = std::move(arg);
    return Init_SFFusionTFLNOA_color_list(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_utmz
{
public:
  explicit Init_SFFusionTFLNOA_utmz(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_type_list utmz(::deva_perception_msgs::msg::SFFusionTFLNOA::_utmz_type arg)
  {
    msg_.utmz = std::move(arg);
    return Init_SFFusionTFLNOA_type_list(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_utmy
{
public:
  explicit Init_SFFusionTFLNOA_utmy(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_utmz utmy(::deva_perception_msgs::msg::SFFusionTFLNOA::_utmy_type arg)
  {
    msg_.utmy = std::move(arg);
    return Init_SFFusionTFLNOA_utmz(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_utmx
{
public:
  explicit Init_SFFusionTFLNOA_utmx(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_utmy utmx(::deva_perception_msgs::msg::SFFusionTFLNOA::_utmx_type arg)
  {
    msg_.utmx = std::move(arg);
    return Init_SFFusionTFLNOA_utmy(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_tflquadrangleimg
{
public:
  explicit Init_SFFusionTFLNOA_tflquadrangleimg(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_utmx tflquadrangleimg(::deva_perception_msgs::msg::SFFusionTFLNOA::_tflquadrangleimg_type arg)
  {
    msg_.tflquadrangleimg = std::move(arg);
    return Init_SFFusionTFLNOA_utmx(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_tflquadranglevcs
{
public:
  explicit Init_SFFusionTFLNOA_tflquadranglevcs(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_tflquadrangleimg tflquadranglevcs(::deva_perception_msgs::msg::SFFusionTFLNOA::_tflquadranglevcs_type arg)
  {
    msg_.tflquadranglevcs = std::move(arg);
    return Init_SFFusionTFLNOA_tflquadrangleimg(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_region
{
public:
  explicit Init_SFFusionTFLNOA_region(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_tflquadranglevcs region(::deva_perception_msgs::msg::SFFusionTFLNOA::_region_type arg)
  {
    msg_.region = std::move(arg);
    return Init_SFFusionTFLNOA_tflquadranglevcs(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_height
{
public:
  explicit Init_SFFusionTFLNOA_height(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_region height(::deva_perception_msgs::msg::SFFusionTFLNOA::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_SFFusionTFLNOA_region(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_poslat
{
public:
  explicit Init_SFFusionTFLNOA_poslat(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_height poslat(::deva_perception_msgs::msg::SFFusionTFLNOA::_poslat_type arg)
  {
    msg_.poslat = std::move(arg);
    return Init_SFFusionTFLNOA_height(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_poslgt
{
public:
  explicit Init_SFFusionTFLNOA_poslgt(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_poslat poslgt(::deva_perception_msgs::msg::SFFusionTFLNOA::_poslgt_type arg)
  {
    msg_.poslgt = std::move(arg);
    return Init_SFFusionTFLNOA_poslat(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_reserved
{
public:
  explicit Init_SFFusionTFLNOA_reserved(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_poslgt reserved(::deva_perception_msgs::msg::SFFusionTFLNOA::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_SFFusionTFLNOA_poslgt(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_background
{
public:
  explicit Init_SFFusionTFLNOA_background(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_reserved background(::deva_perception_msgs::msg::SFFusionTFLNOA::_background_type arg)
  {
    msg_.background = std::move(arg);
    return Init_SFFusionTFLNOA_reserved(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_flashstatus
{
public:
  explicit Init_SFFusionTFLNOA_flashstatus(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_background flashstatus(::deva_perception_msgs::msg::SFFusionTFLNOA::_flashstatus_type arg)
  {
    msg_.flashstatus = std::move(arg);
    return Init_SFFusionTFLNOA_background(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_confi
{
public:
  explicit Init_SFFusionTFLNOA_confi(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_flashstatus confi(::deva_perception_msgs::msg::SFFusionTFLNOA::_confi_type arg)
  {
    msg_.confi = std::move(arg);
    return Init_SFFusionTFLNOA_flashstatus(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_number
{
public:
  explicit Init_SFFusionTFLNOA_number(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_confi number(::deva_perception_msgs::msg::SFFusionTFLNOA::_number_type arg)
  {
    msg_.number = std::move(arg);
    return Init_SFFusionTFLNOA_confi(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_cycle_time
{
public:
  explicit Init_SFFusionTFLNOA_cycle_time(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_number cycle_time(::deva_perception_msgs::msg::SFFusionTFLNOA::_cycle_time_type arg)
  {
    msg_.cycle_time = std::move(arg);
    return Init_SFFusionTFLNOA_number(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_color
{
public:
  explicit Init_SFFusionTFLNOA_color(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_cycle_time color(::deva_perception_msgs::msg::SFFusionTFLNOA::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_SFFusionTFLNOA_cycle_time(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_type
{
public:
  explicit Init_SFFusionTFLNOA_type(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_color type(::deva_perception_msgs::msg::SFFusionTFLNOA::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SFFusionTFLNOA_color(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_relevancy
{
public:
  explicit Init_SFFusionTFLNOA_relevancy(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_type relevancy(::deva_perception_msgs::msg::SFFusionTFLNOA::_relevancy_type arg)
  {
    msg_.relevancy = std::move(arg);
    return Init_SFFusionTFLNOA_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_lifetime
{
public:
  explicit Init_SFFusionTFLNOA_lifetime(::deva_perception_msgs::msg::SFFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFLNOA_relevancy lifetime(::deva_perception_msgs::msg::SFFusionTFLNOA::_lifetime_type arg)
  {
    msg_.lifetime = std::move(arg);
    return Init_SFFusionTFLNOA_relevancy(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

class Init_SFFusionTFLNOA_id
{
public:
  Init_SFFusionTFLNOA_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFFusionTFLNOA_lifetime id(::deva_perception_msgs::msg::SFFusionTFLNOA::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SFFusionTFLNOA_lifetime(msg_);
  }

private:
  ::deva_perception_msgs::msg::SFFusionTFLNOA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::SFFusionTFLNOA>()
{
  return deva_perception_msgs::msg::builder::Init_SFFusionTFLNOA_id();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SF_FUSION_TFLNOA__BUILDER_HPP_
