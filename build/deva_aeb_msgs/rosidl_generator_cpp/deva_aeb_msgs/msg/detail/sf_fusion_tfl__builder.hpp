// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionTFL.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL__BUILDER_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_aeb_msgs/msg/detail/sf_fusion_tfl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_aeb_msgs
{

namespace msg
{

namespace builder
{

class Init_SFFusionTFL_poslat
{
public:
  explicit Init_SFFusionTFL_poslat(::deva_aeb_msgs::msg::SFFusionTFL & msg)
  : msg_(msg)
  {}
  ::deva_aeb_msgs::msg::SFFusionTFL poslat(::deva_aeb_msgs::msg::SFFusionTFL::_poslat_type arg)
  {
    msg_.poslat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTFL msg_;
};

class Init_SFFusionTFL_poslgt
{
public:
  explicit Init_SFFusionTFL_poslgt(::deva_aeb_msgs::msg::SFFusionTFL & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFL_poslat poslgt(::deva_aeb_msgs::msg::SFFusionTFL::_poslgt_type arg)
  {
    msg_.poslgt = std::move(arg);
    return Init_SFFusionTFL_poslat(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTFL msg_;
};

class Init_SFFusionTFL_reserved
{
public:
  explicit Init_SFFusionTFL_reserved(::deva_aeb_msgs::msg::SFFusionTFL & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFL_poslgt reserved(::deva_aeb_msgs::msg::SFFusionTFL::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_SFFusionTFL_poslgt(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTFL msg_;
};

class Init_SFFusionTFL_background
{
public:
  explicit Init_SFFusionTFL_background(::deva_aeb_msgs::msg::SFFusionTFL & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFL_reserved background(::deva_aeb_msgs::msg::SFFusionTFL::_background_type arg)
  {
    msg_.background = std::move(arg);
    return Init_SFFusionTFL_reserved(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTFL msg_;
};

class Init_SFFusionTFL_flashstatus
{
public:
  explicit Init_SFFusionTFL_flashstatus(::deva_aeb_msgs::msg::SFFusionTFL & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFL_background flashstatus(::deva_aeb_msgs::msg::SFFusionTFL::_flashstatus_type arg)
  {
    msg_.flashstatus = std::move(arg);
    return Init_SFFusionTFL_background(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTFL msg_;
};

class Init_SFFusionTFL_confi
{
public:
  explicit Init_SFFusionTFL_confi(::deva_aeb_msgs::msg::SFFusionTFL & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFL_flashstatus confi(::deva_aeb_msgs::msg::SFFusionTFL::_confi_type arg)
  {
    msg_.confi = std::move(arg);
    return Init_SFFusionTFL_flashstatus(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTFL msg_;
};

class Init_SFFusionTFL_number
{
public:
  explicit Init_SFFusionTFL_number(::deva_aeb_msgs::msg::SFFusionTFL & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFL_confi number(::deva_aeb_msgs::msg::SFFusionTFL::_number_type arg)
  {
    msg_.number = std::move(arg);
    return Init_SFFusionTFL_confi(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTFL msg_;
};

class Init_SFFusionTFL_color
{
public:
  explicit Init_SFFusionTFL_color(::deva_aeb_msgs::msg::SFFusionTFL & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFL_number color(::deva_aeb_msgs::msg::SFFusionTFL::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_SFFusionTFL_number(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTFL msg_;
};

class Init_SFFusionTFL_type
{
public:
  explicit Init_SFFusionTFL_type(::deva_aeb_msgs::msg::SFFusionTFL & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFL_color type(::deva_aeb_msgs::msg::SFFusionTFL::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_SFFusionTFL_color(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTFL msg_;
};

class Init_SFFusionTFL_relevancy
{
public:
  explicit Init_SFFusionTFL_relevancy(::deva_aeb_msgs::msg::SFFusionTFL & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFL_type relevancy(::deva_aeb_msgs::msg::SFFusionTFL::_relevancy_type arg)
  {
    msg_.relevancy = std::move(arg);
    return Init_SFFusionTFL_type(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTFL msg_;
};

class Init_SFFusionTFL_height
{
public:
  explicit Init_SFFusionTFL_height(::deva_aeb_msgs::msg::SFFusionTFL & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFL_relevancy height(::deva_aeb_msgs::msg::SFFusionTFL::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_SFFusionTFL_relevancy(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTFL msg_;
};

class Init_SFFusionTFL_lifetime
{
public:
  explicit Init_SFFusionTFL_lifetime(::deva_aeb_msgs::msg::SFFusionTFL & msg)
  : msg_(msg)
  {}
  Init_SFFusionTFL_height lifetime(::deva_aeb_msgs::msg::SFFusionTFL::_lifetime_type arg)
  {
    msg_.lifetime = std::move(arg);
    return Init_SFFusionTFL_height(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTFL msg_;
};

class Init_SFFusionTFL_id
{
public:
  Init_SFFusionTFL_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SFFusionTFL_lifetime id(::deva_aeb_msgs::msg::SFFusionTFL::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_SFFusionTFL_lifetime(msg_);
  }

private:
  ::deva_aeb_msgs::msg::SFFusionTFL msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_aeb_msgs::msg::SFFusionTFL>()
{
  return deva_aeb_msgs::msg::builder::Init_SFFusionTFL_id();
}

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_TFL__BUILDER_HPP_
