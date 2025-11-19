// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/QuadrangleVcs.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_VCS__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_VCS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/quadrangle_vcs__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_QuadrangleVcs_leftdownpointz
{
public:
  explicit Init_QuadrangleVcs_leftdownpointz(::deva_perception_msgs::msg::QuadrangleVcs & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::QuadrangleVcs leftdownpointz(::deva_perception_msgs::msg::QuadrangleVcs::_leftdownpointz_type arg)
  {
    msg_.leftdownpointz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::QuadrangleVcs msg_;
};

class Init_QuadrangleVcs_leftdownpointy
{
public:
  explicit Init_QuadrangleVcs_leftdownpointy(::deva_perception_msgs::msg::QuadrangleVcs & msg)
  : msg_(msg)
  {}
  Init_QuadrangleVcs_leftdownpointz leftdownpointy(::deva_perception_msgs::msg::QuadrangleVcs::_leftdownpointy_type arg)
  {
    msg_.leftdownpointy = std::move(arg);
    return Init_QuadrangleVcs_leftdownpointz(msg_);
  }

private:
  ::deva_perception_msgs::msg::QuadrangleVcs msg_;
};

class Init_QuadrangleVcs_leftdownpointx
{
public:
  explicit Init_QuadrangleVcs_leftdownpointx(::deva_perception_msgs::msg::QuadrangleVcs & msg)
  : msg_(msg)
  {}
  Init_QuadrangleVcs_leftdownpointy leftdownpointx(::deva_perception_msgs::msg::QuadrangleVcs::_leftdownpointx_type arg)
  {
    msg_.leftdownpointx = std::move(arg);
    return Init_QuadrangleVcs_leftdownpointy(msg_);
  }

private:
  ::deva_perception_msgs::msg::QuadrangleVcs msg_;
};

class Init_QuadrangleVcs_rightdownpointz
{
public:
  explicit Init_QuadrangleVcs_rightdownpointz(::deva_perception_msgs::msg::QuadrangleVcs & msg)
  : msg_(msg)
  {}
  Init_QuadrangleVcs_leftdownpointx rightdownpointz(::deva_perception_msgs::msg::QuadrangleVcs::_rightdownpointz_type arg)
  {
    msg_.rightdownpointz = std::move(arg);
    return Init_QuadrangleVcs_leftdownpointx(msg_);
  }

private:
  ::deva_perception_msgs::msg::QuadrangleVcs msg_;
};

class Init_QuadrangleVcs_rightdownpointy
{
public:
  explicit Init_QuadrangleVcs_rightdownpointy(::deva_perception_msgs::msg::QuadrangleVcs & msg)
  : msg_(msg)
  {}
  Init_QuadrangleVcs_rightdownpointz rightdownpointy(::deva_perception_msgs::msg::QuadrangleVcs::_rightdownpointy_type arg)
  {
    msg_.rightdownpointy = std::move(arg);
    return Init_QuadrangleVcs_rightdownpointz(msg_);
  }

private:
  ::deva_perception_msgs::msg::QuadrangleVcs msg_;
};

class Init_QuadrangleVcs_rightdownpointx
{
public:
  explicit Init_QuadrangleVcs_rightdownpointx(::deva_perception_msgs::msg::QuadrangleVcs & msg)
  : msg_(msg)
  {}
  Init_QuadrangleVcs_rightdownpointy rightdownpointx(::deva_perception_msgs::msg::QuadrangleVcs::_rightdownpointx_type arg)
  {
    msg_.rightdownpointx = std::move(arg);
    return Init_QuadrangleVcs_rightdownpointy(msg_);
  }

private:
  ::deva_perception_msgs::msg::QuadrangleVcs msg_;
};

class Init_QuadrangleVcs_rightuppointz
{
public:
  explicit Init_QuadrangleVcs_rightuppointz(::deva_perception_msgs::msg::QuadrangleVcs & msg)
  : msg_(msg)
  {}
  Init_QuadrangleVcs_rightdownpointx rightuppointz(::deva_perception_msgs::msg::QuadrangleVcs::_rightuppointz_type arg)
  {
    msg_.rightuppointz = std::move(arg);
    return Init_QuadrangleVcs_rightdownpointx(msg_);
  }

private:
  ::deva_perception_msgs::msg::QuadrangleVcs msg_;
};

class Init_QuadrangleVcs_rightuppointy
{
public:
  explicit Init_QuadrangleVcs_rightuppointy(::deva_perception_msgs::msg::QuadrangleVcs & msg)
  : msg_(msg)
  {}
  Init_QuadrangleVcs_rightuppointz rightuppointy(::deva_perception_msgs::msg::QuadrangleVcs::_rightuppointy_type arg)
  {
    msg_.rightuppointy = std::move(arg);
    return Init_QuadrangleVcs_rightuppointz(msg_);
  }

private:
  ::deva_perception_msgs::msg::QuadrangleVcs msg_;
};

class Init_QuadrangleVcs_rightuppointx
{
public:
  explicit Init_QuadrangleVcs_rightuppointx(::deva_perception_msgs::msg::QuadrangleVcs & msg)
  : msg_(msg)
  {}
  Init_QuadrangleVcs_rightuppointy rightuppointx(::deva_perception_msgs::msg::QuadrangleVcs::_rightuppointx_type arg)
  {
    msg_.rightuppointx = std::move(arg);
    return Init_QuadrangleVcs_rightuppointy(msg_);
  }

private:
  ::deva_perception_msgs::msg::QuadrangleVcs msg_;
};

class Init_QuadrangleVcs_leftuppointz
{
public:
  explicit Init_QuadrangleVcs_leftuppointz(::deva_perception_msgs::msg::QuadrangleVcs & msg)
  : msg_(msg)
  {}
  Init_QuadrangleVcs_rightuppointx leftuppointz(::deva_perception_msgs::msg::QuadrangleVcs::_leftuppointz_type arg)
  {
    msg_.leftuppointz = std::move(arg);
    return Init_QuadrangleVcs_rightuppointx(msg_);
  }

private:
  ::deva_perception_msgs::msg::QuadrangleVcs msg_;
};

class Init_QuadrangleVcs_leftuppointy
{
public:
  explicit Init_QuadrangleVcs_leftuppointy(::deva_perception_msgs::msg::QuadrangleVcs & msg)
  : msg_(msg)
  {}
  Init_QuadrangleVcs_leftuppointz leftuppointy(::deva_perception_msgs::msg::QuadrangleVcs::_leftuppointy_type arg)
  {
    msg_.leftuppointy = std::move(arg);
    return Init_QuadrangleVcs_leftuppointz(msg_);
  }

private:
  ::deva_perception_msgs::msg::QuadrangleVcs msg_;
};

class Init_QuadrangleVcs_leftuppointx
{
public:
  Init_QuadrangleVcs_leftuppointx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_QuadrangleVcs_leftuppointy leftuppointx(::deva_perception_msgs::msg::QuadrangleVcs::_leftuppointx_type arg)
  {
    msg_.leftuppointx = std::move(arg);
    return Init_QuadrangleVcs_leftuppointy(msg_);
  }

private:
  ::deva_perception_msgs::msg::QuadrangleVcs msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::QuadrangleVcs>()
{
  return deva_perception_msgs::msg::builder::Init_QuadrangleVcs_leftuppointx();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_VCS__BUILDER_HPP_
