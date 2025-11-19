// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/TrafficObject.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_OBJECT__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_OBJECT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/traffic_object__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficObject_tl_oriention
{
public:
  explicit Init_TrafficObject_tl_oriention(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::TrafficObject tl_oriention(::deva_perception_msgs::msg::TrafficObject::_tl_oriention_type arg)
  {
    msg_.tl_oriention = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_model_depth
{
public:
  explicit Init_TrafficObject_model_depth(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_tl_oriention model_depth(::deva_perception_msgs::msg::TrafficObject::_model_depth_type arg)
  {
    msg_.model_depth = std::move(arg);
    return Init_TrafficObject_tl_oriention(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_is_recheck_result
{
public:
  explicit Init_TrafficObject_is_recheck_result(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_model_depth is_recheck_result(::deva_perception_msgs::msg::TrafficObject::_is_recheck_result_type arg)
  {
    msg_.is_recheck_result = std::move(arg);
    return Init_TrafficObject_model_depth(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_ego_x_out
{
public:
  explicit Init_TrafficObject_ego_x_out(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_is_recheck_result ego_x_out(::deva_perception_msgs::msg::TrafficObject::_ego_x_out_type arg)
  {
    msg_.ego_x_out = std::move(arg);
    return Init_TrafficObject_is_recheck_result(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_bind_ramp_region
{
public:
  explicit Init_TrafficObject_bind_ramp_region(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_ego_x_out bind_ramp_region(::deva_perception_msgs::msg::TrafficObject::_bind_ramp_region_type arg)
  {
    msg_.bind_ramp_region = std::move(arg);
    return Init_TrafficObject_ego_x_out(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_rechecked_ramp_score
{
public:
  explicit Init_TrafficObject_rechecked_ramp_score(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_bind_ramp_region rechecked_ramp_score(::deva_perception_msgs::msg::TrafficObject::_rechecked_ramp_score_type arg)
  {
    msg_.rechecked_ramp_score = std::move(arg);
    return Init_TrafficObject_bind_ramp_region(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_is_rechecked_ramp
{
public:
  explicit Init_TrafficObject_is_rechecked_ramp(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_rechecked_ramp_score is_rechecked_ramp(::deva_perception_msgs::msg::TrafficObject::_is_rechecked_ramp_type arg)
  {
    msg_.is_rechecked_ramp = std::move(arg);
    return Init_TrafficObject_rechecked_ramp_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_pole
{
public:
  explicit Init_TrafficObject_pole(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_is_rechecked_ramp pole(::deva_perception_msgs::msg::TrafficObject::_pole_type arg)
  {
    msg_.pole = std::move(arg);
    return Init_TrafficObject_is_rechecked_ramp(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_is_ramp_double_checked
{
public:
  explicit Init_TrafficObject_is_ramp_double_checked(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_pole is_ramp_double_checked(::deva_perception_msgs::msg::TrafficObject::_is_ramp_double_checked_type arg)
  {
    msg_.is_ramp_double_checked = std::move(arg);
    return Init_TrafficObject_pole(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_is_ramp_from_41
{
public:
  explicit Init_TrafficObject_is_ramp_from_41(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_is_ramp_double_checked is_ramp_from_41(::deva_perception_msgs::msg::TrafficObject::_is_ramp_from_41_type arg)
  {
    msg_.is_ramp_from_41 = std::move(arg);
    return Init_TrafficObject_is_ramp_double_checked(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_origin_is_ramp
{
public:
  explicit Init_TrafficObject_origin_is_ramp(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_is_ramp_from_41 origin_is_ramp(::deva_perception_msgs::msg::TrafficObject::_origin_is_ramp_type arg)
  {
    msg_.origin_is_ramp = std::move(arg);
    return Init_TrafficObject_is_ramp_from_41(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_is_ramp
{
public:
  explicit Init_TrafficObject_is_ramp(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_origin_is_ramp is_ramp(::deva_perception_msgs::msg::TrafficObject::_is_ramp_type arg)
  {
    msg_.is_ramp = std::move(arg);
    return Init_TrafficObject_origin_is_ramp(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_ramp_confidence
{
public:
  explicit Init_TrafficObject_ramp_confidence(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_is_ramp ramp_confidence(::deva_perception_msgs::msg::TrafficObject::_ramp_confidence_type arg)
  {
    msg_.ramp_confidence = std::move(arg);
    return Init_TrafficObject_is_ramp(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_ego_z
{
public:
  explicit Init_TrafficObject_ego_z(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_ramp_confidence ego_z(::deva_perception_msgs::msg::TrafficObject::_ego_z_type arg)
  {
    msg_.ego_z = std::move(arg);
    return Init_TrafficObject_ramp_confidence(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_ego_y
{
public:
  explicit Init_TrafficObject_ego_y(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_ego_z ego_y(::deva_perception_msgs::msg::TrafficObject::_ego_y_type arg)
  {
    msg_.ego_y = std::move(arg);
    return Init_TrafficObject_ego_z(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_ego_x
{
public:
  explicit Init_TrafficObject_ego_x(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_ego_y ego_x(::deva_perception_msgs::msg::TrafficObject::_ego_x_type arg)
  {
    msg_.ego_x = std::move(arg);
    return Init_TrafficObject_ego_y(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_digit_class_idx
{
public:
  explicit Init_TrafficObject_digit_class_idx(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_ego_x digit_class_idx(::deva_perception_msgs::msg::TrafficObject::_digit_class_idx_type arg)
  {
    msg_.digit_class_idx = std::move(arg);
    return Init_TrafficObject_ego_x(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_digit_type
{
public:
  explicit Init_TrafficObject_digit_type(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_digit_class_idx digit_type(::deva_perception_msgs::msg::TrafficObject::_digit_type_type arg)
  {
    msg_.digit_type = std::move(arg);
    return Init_TrafficObject_digit_class_idx(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_digit_confidence
{
public:
  explicit Init_TrafficObject_digit_confidence(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_digit_type digit_confidence(::deva_perception_msgs::msg::TrafficObject::_digit_confidence_type arg)
  {
    msg_.digit_confidence = std::move(arg);
    return Init_TrafficObject_digit_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_sign_confidence
{
public:
  explicit Init_TrafficObject_sign_confidence(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_digit_confidence sign_confidence(::deva_perception_msgs::msg::TrafficObject::_sign_confidence_type arg)
  {
    msg_.sign_confidence = std::move(arg);
    return Init_TrafficObject_digit_confidence(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_sign_type
{
public:
  explicit Init_TrafficObject_sign_type(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_sign_confidence sign_type(::deva_perception_msgs::msg::TrafficObject::_sign_type_type arg)
  {
    msg_.sign_type = std::move(arg);
    return Init_TrafficObject_sign_confidence(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_origin_sign_type
{
public:
  explicit Init_TrafficObject_origin_sign_type(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_sign_type origin_sign_type(::deva_perception_msgs::msg::TrafficObject::_origin_sign_type_type arg)
  {
    msg_.origin_sign_type = std::move(arg);
    return Init_TrafficObject_sign_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_f120_origin_sign_type
{
public:
  explicit Init_TrafficObject_f120_origin_sign_type(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_origin_sign_type f120_origin_sign_type(::deva_perception_msgs::msg::TrafficObject::_f120_origin_sign_type_type arg)
  {
    msg_.f120_origin_sign_type = std::move(arg);
    return Init_TrafficObject_origin_sign_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_ori_has_count_down
{
public:
  explicit Init_TrafficObject_ori_has_count_down(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_f120_origin_sign_type ori_has_count_down(::deva_perception_msgs::msg::TrafficObject::_ori_has_count_down_type arg)
  {
    msg_.ori_has_count_down = std::move(arg);
    return Init_TrafficObject_f120_origin_sign_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_has_count_down
{
public:
  explicit Init_TrafficObject_has_count_down(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_ori_has_count_down has_count_down(::deva_perception_msgs::msg::TrafficObject::_has_count_down_type arg)
  {
    msg_.has_count_down = std::move(arg);
    return Init_TrafficObject_ori_has_count_down(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_orig_count_down
{
public:
  explicit Init_TrafficObject_orig_count_down(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_has_count_down orig_count_down(::deva_perception_msgs::msg::TrafficObject::_orig_count_down_type arg)
  {
    msg_.orig_count_down = std::move(arg);
    return Init_TrafficObject_has_count_down(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_count_down
{
public:
  explicit Init_TrafficObject_count_down(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_orig_count_down count_down(::deva_perception_msgs::msg::TrafficObject::_count_down_type arg)
  {
    msg_.count_down = std::move(arg);
    return Init_TrafficObject_orig_count_down(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_origin_light_type
{
public:
  explicit Init_TrafficObject_origin_light_type(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_count_down origin_light_type(::deva_perception_msgs::msg::TrafficObject::_origin_light_type_type arg)
  {
    msg_.origin_light_type = std::move(arg);
    return Init_TrafficObject_count_down(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_light_type
{
public:
  explicit Init_TrafficObject_light_type(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_origin_light_type light_type(::deva_perception_msgs::msg::TrafficObject::_light_type_type arg)
  {
    msg_.light_type = std::move(arg);
    return Init_TrafficObject_origin_light_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_origin_color
{
public:
  explicit Init_TrafficObject_origin_color(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_light_type origin_color(::deva_perception_msgs::msg::TrafficObject::_origin_color_type arg)
  {
    msg_.origin_color = std::move(arg);
    return Init_TrafficObject_light_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_color
{
public:
  explicit Init_TrafficObject_color(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_origin_color color(::deva_perception_msgs::msg::TrafficObject::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_TrafficObject_origin_color(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_f120_ori_color_light_type
{
public:
  explicit Init_TrafficObject_f120_ori_color_light_type(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_color f120_ori_color_light_type(::deva_perception_msgs::msg::TrafficObject::_f120_ori_color_light_type_type arg)
  {
    msg_.f120_ori_color_light_type = std::move(arg);
    return Init_TrafficObject_color(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_f120_ori_color
{
public:
  explicit Init_TrafficObject_f120_ori_color(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_f120_ori_color_light_type f120_ori_color(::deva_perception_msgs::msg::TrafficObject::_f120_ori_color_type arg)
  {
    msg_.f120_ori_color = std::move(arg);
    return Init_TrafficObject_f120_ori_color_light_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_status
{
public:
  explicit Init_TrafficObject_status(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_f120_ori_color status(::deva_perception_msgs::msg::TrafficObject::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TrafficObject_f120_ori_color(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_new_h_region
{
public:
  explicit Init_TrafficObject_new_h_region(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_status new_h_region(::deva_perception_msgs::msg::TrafficObject::_new_h_region_type arg)
  {
    msg_.new_h_region = std::move(arg);
    return Init_TrafficObject_status(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_region
{
public:
  explicit Init_TrafficObject_region(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_new_h_region region(::deva_perception_msgs::msg::TrafficObject::_region_type arg)
  {
    msg_.region = std::move(arg);
    return Init_TrafficObject_new_h_region(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_sign_appx_type
{
public:
  explicit Init_TrafficObject_sign_appx_type(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_region sign_appx_type(::deva_perception_msgs::msg::TrafficObject::_sign_appx_type_type arg)
  {
    msg_.sign_appx_type = std::move(arg);
    return Init_TrafficObject_region(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_det_is_focus_light
{
public:
  explicit Init_TrafficObject_det_is_focus_light(::deva_perception_msgs::msg::TrafficObject & msg)
  : msg_(msg)
  {}
  Init_TrafficObject_sign_appx_type det_is_focus_light(::deva_perception_msgs::msg::TrafficObject::_det_is_focus_light_type arg)
  {
    msg_.det_is_focus_light = std::move(arg);
    return Init_TrafficObject_sign_appx_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

class Init_TrafficObject_class_idx
{
public:
  Init_TrafficObject_class_idx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficObject_det_is_focus_light class_idx(::deva_perception_msgs::msg::TrafficObject::_class_idx_type arg)
  {
    msg_.class_idx = std::move(arg);
    return Init_TrafficObject_det_is_focus_light(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficObject msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::TrafficObject>()
{
  return deva_perception_msgs::msg::builder::Init_TrafficObject_class_idx();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_OBJECT__BUILDER_HPP_
