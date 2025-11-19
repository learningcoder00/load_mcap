// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/E2eFailsafeArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_FAILSAFE_ARRAY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_FAILSAFE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/e2e_failsafe_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_E2eFailsafeArray_scenes_wind_shield_occlusion_type
{
public:
  explicit Init_E2eFailsafeArray_scenes_wind_shield_occlusion_type(::deva_perception_msgs::msg::E2eFailsafeArray & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::E2eFailsafeArray scenes_wind_shield_occlusion_type(::deva_perception_msgs::msg::E2eFailsafeArray::_scenes_wind_shield_occlusion_type_type arg)
  {
    msg_.scenes_wind_shield_occlusion_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eFailsafeArray msg_;
};

class Init_E2eFailsafeArray_scenes_road_state_type
{
public:
  explicit Init_E2eFailsafeArray_scenes_road_state_type(::deva_perception_msgs::msg::E2eFailsafeArray & msg)
  : msg_(msg)
  {}
  Init_E2eFailsafeArray_scenes_wind_shield_occlusion_type scenes_road_state_type(::deva_perception_msgs::msg::E2eFailsafeArray::_scenes_road_state_type_type arg)
  {
    msg_.scenes_road_state_type = std::move(arg);
    return Init_E2eFailsafeArray_scenes_wind_shield_occlusion_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eFailsafeArray msg_;
};

class Init_E2eFailsafeArray_scenes_weather_type
{
public:
  explicit Init_E2eFailsafeArray_scenes_weather_type(::deva_perception_msgs::msg::E2eFailsafeArray & msg)
  : msg_(msg)
  {}
  Init_E2eFailsafeArray_scenes_road_state_type scenes_weather_type(::deva_perception_msgs::msg::E2eFailsafeArray::_scenes_weather_type_type arg)
  {
    msg_.scenes_weather_type = std::move(arg);
    return Init_E2eFailsafeArray_scenes_road_state_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eFailsafeArray msg_;
};

class Init_E2eFailsafeArray_scenes_is_tunnel_type
{
public:
  explicit Init_E2eFailsafeArray_scenes_is_tunnel_type(::deva_perception_msgs::msg::E2eFailsafeArray & msg)
  : msg_(msg)
  {}
  Init_E2eFailsafeArray_scenes_weather_type scenes_is_tunnel_type(::deva_perception_msgs::msg::E2eFailsafeArray::_scenes_is_tunnel_type_type arg)
  {
    msg_.scenes_is_tunnel_type = std::move(arg);
    return Init_E2eFailsafeArray_scenes_weather_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eFailsafeArray msg_;
};

class Init_E2eFailsafeArray_scenes_is_glare_occlusion_type
{
public:
  explicit Init_E2eFailsafeArray_scenes_is_glare_occlusion_type(::deva_perception_msgs::msg::E2eFailsafeArray & msg)
  : msg_(msg)
  {}
  Init_E2eFailsafeArray_scenes_is_tunnel_type scenes_is_glare_occlusion_type(::deva_perception_msgs::msg::E2eFailsafeArray::_scenes_is_glare_occlusion_type_type arg)
  {
    msg_.scenes_is_glare_occlusion_type = std::move(arg);
    return Init_E2eFailsafeArray_scenes_is_tunnel_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eFailsafeArray msg_;
};

class Init_E2eFailsafeArray_scenes_is_occlusion_type
{
public:
  explicit Init_E2eFailsafeArray_scenes_is_occlusion_type(::deva_perception_msgs::msg::E2eFailsafeArray & msg)
  : msg_(msg)
  {}
  Init_E2eFailsafeArray_scenes_is_glare_occlusion_type scenes_is_occlusion_type(::deva_perception_msgs::msg::E2eFailsafeArray::_scenes_is_occlusion_type_type arg)
  {
    msg_.scenes_is_occlusion_type = std::move(arg);
    return Init_E2eFailsafeArray_scenes_is_glare_occlusion_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eFailsafeArray msg_;
};

class Init_E2eFailsafeArray_scenes_time_type
{
public:
  explicit Init_E2eFailsafeArray_scenes_time_type(::deva_perception_msgs::msg::E2eFailsafeArray & msg)
  : msg_(msg)
  {}
  Init_E2eFailsafeArray_scenes_is_occlusion_type scenes_time_type(::deva_perception_msgs::msg::E2eFailsafeArray::_scenes_time_type_type arg)
  {
    msg_.scenes_time_type = std::move(arg);
    return Init_E2eFailsafeArray_scenes_is_occlusion_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eFailsafeArray msg_;
};

class Init_E2eFailsafeArray_scenes_driving_type
{
public:
  explicit Init_E2eFailsafeArray_scenes_driving_type(::deva_perception_msgs::msg::E2eFailsafeArray & msg)
  : msg_(msg)
  {}
  Init_E2eFailsafeArray_scenes_time_type scenes_driving_type(::deva_perception_msgs::msg::E2eFailsafeArray::_scenes_driving_type_type arg)
  {
    msg_.scenes_driving_type = std::move(arg);
    return Init_E2eFailsafeArray_scenes_time_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eFailsafeArray msg_;
};

class Init_E2eFailsafeArray_lit_area
{
public:
  explicit Init_E2eFailsafeArray_lit_area(::deva_perception_msgs::msg::E2eFailsafeArray & msg)
  : msg_(msg)
  {}
  Init_E2eFailsafeArray_scenes_driving_type lit_area(::deva_perception_msgs::msg::E2eFailsafeArray::_lit_area_type arg)
  {
    msg_.lit_area = std::move(arg);
    return Init_E2eFailsafeArray_scenes_driving_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eFailsafeArray msg_;
};

class Init_E2eFailsafeArray_sum_result
{
public:
  explicit Init_E2eFailsafeArray_sum_result(::deva_perception_msgs::msg::E2eFailsafeArray & msg)
  : msg_(msg)
  {}
  Init_E2eFailsafeArray_lit_area sum_result(::deva_perception_msgs::msg::E2eFailsafeArray::_sum_result_type arg)
  {
    msg_.sum_result = std::move(arg);
    return Init_E2eFailsafeArray_lit_area(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eFailsafeArray msg_;
};

class Init_E2eFailsafeArray_e2e_failsafe_array
{
public:
  explicit Init_E2eFailsafeArray_e2e_failsafe_array(::deva_perception_msgs::msg::E2eFailsafeArray & msg)
  : msg_(msg)
  {}
  Init_E2eFailsafeArray_sum_result e2e_failsafe_array(::deva_perception_msgs::msg::E2eFailsafeArray::_e2e_failsafe_array_type arg)
  {
    msg_.e2e_failsafe_array = std::move(arg);
    return Init_E2eFailsafeArray_sum_result(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eFailsafeArray msg_;
};

class Init_E2eFailsafeArray_index
{
public:
  explicit Init_E2eFailsafeArray_index(::deva_perception_msgs::msg::E2eFailsafeArray & msg)
  : msg_(msg)
  {}
  Init_E2eFailsafeArray_e2e_failsafe_array index(::deva_perception_msgs::msg::E2eFailsafeArray::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_E2eFailsafeArray_e2e_failsafe_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eFailsafeArray msg_;
};

class Init_E2eFailsafeArray_header
{
public:
  Init_E2eFailsafeArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_E2eFailsafeArray_index header(::deva_perception_msgs::msg::E2eFailsafeArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_E2eFailsafeArray_index(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eFailsafeArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::E2eFailsafeArray>()
{
  return deva_perception_msgs::msg::builder::Init_E2eFailsafeArray_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_FAILSAFE_ARRAY__BUILDER_HPP_
