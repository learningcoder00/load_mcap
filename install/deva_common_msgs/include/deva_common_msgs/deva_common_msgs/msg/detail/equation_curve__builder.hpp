// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_common_msgs:msg/EquationCurve.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__EQUATION_CURVE__BUILDER_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__EQUATION_CURVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_common_msgs/msg/detail/equation_curve__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_common_msgs
{

namespace msg
{

namespace builder
{

class Init_EquationCurve_s_end
{
public:
  explicit Init_EquationCurve_s_end(::deva_common_msgs::msg::EquationCurve & msg)
  : msg_(msg)
  {}
  ::deva_common_msgs::msg::EquationCurve s_end(::deva_common_msgs::msg::EquationCurve::_s_end_type arg)
  {
    msg_.s_end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_common_msgs::msg::EquationCurve msg_;
};

class Init_EquationCurve_s_start
{
public:
  explicit Init_EquationCurve_s_start(::deva_common_msgs::msg::EquationCurve & msg)
  : msg_(msg)
  {}
  Init_EquationCurve_s_end s_start(::deva_common_msgs::msg::EquationCurve::_s_start_type arg)
  {
    msg_.s_start = std::move(arg);
    return Init_EquationCurve_s_end(msg_);
  }

private:
  ::deva_common_msgs::msg::EquationCurve msg_;
};

class Init_EquationCurve_c0
{
public:
  explicit Init_EquationCurve_c0(::deva_common_msgs::msg::EquationCurve & msg)
  : msg_(msg)
  {}
  Init_EquationCurve_s_start c0(::deva_common_msgs::msg::EquationCurve::_c0_type arg)
  {
    msg_.c0 = std::move(arg);
    return Init_EquationCurve_s_start(msg_);
  }

private:
  ::deva_common_msgs::msg::EquationCurve msg_;
};

class Init_EquationCurve_c1
{
public:
  explicit Init_EquationCurve_c1(::deva_common_msgs::msg::EquationCurve & msg)
  : msg_(msg)
  {}
  Init_EquationCurve_c0 c1(::deva_common_msgs::msg::EquationCurve::_c1_type arg)
  {
    msg_.c1 = std::move(arg);
    return Init_EquationCurve_c0(msg_);
  }

private:
  ::deva_common_msgs::msg::EquationCurve msg_;
};

class Init_EquationCurve_c2
{
public:
  explicit Init_EquationCurve_c2(::deva_common_msgs::msg::EquationCurve & msg)
  : msg_(msg)
  {}
  Init_EquationCurve_c1 c2(::deva_common_msgs::msg::EquationCurve::_c2_type arg)
  {
    msg_.c2 = std::move(arg);
    return Init_EquationCurve_c1(msg_);
  }

private:
  ::deva_common_msgs::msg::EquationCurve msg_;
};

class Init_EquationCurve_c3
{
public:
  explicit Init_EquationCurve_c3(::deva_common_msgs::msg::EquationCurve & msg)
  : msg_(msg)
  {}
  Init_EquationCurve_c2 c3(::deva_common_msgs::msg::EquationCurve::_c3_type arg)
  {
    msg_.c3 = std::move(arg);
    return Init_EquationCurve_c2(msg_);
  }

private:
  ::deva_common_msgs::msg::EquationCurve msg_;
};

class Init_EquationCurve_b0
{
public:
  explicit Init_EquationCurve_b0(::deva_common_msgs::msg::EquationCurve & msg)
  : msg_(msg)
  {}
  Init_EquationCurve_c3 b0(::deva_common_msgs::msg::EquationCurve::_b0_type arg)
  {
    msg_.b0 = std::move(arg);
    return Init_EquationCurve_c3(msg_);
  }

private:
  ::deva_common_msgs::msg::EquationCurve msg_;
};

class Init_EquationCurve_b1
{
public:
  explicit Init_EquationCurve_b1(::deva_common_msgs::msg::EquationCurve & msg)
  : msg_(msg)
  {}
  Init_EquationCurve_b0 b1(::deva_common_msgs::msg::EquationCurve::_b1_type arg)
  {
    msg_.b1 = std::move(arg);
    return Init_EquationCurve_b0(msg_);
  }

private:
  ::deva_common_msgs::msg::EquationCurve msg_;
};

class Init_EquationCurve_b2
{
public:
  explicit Init_EquationCurve_b2(::deva_common_msgs::msg::EquationCurve & msg)
  : msg_(msg)
  {}
  Init_EquationCurve_b1 b2(::deva_common_msgs::msg::EquationCurve::_b2_type arg)
  {
    msg_.b2 = std::move(arg);
    return Init_EquationCurve_b1(msg_);
  }

private:
  ::deva_common_msgs::msg::EquationCurve msg_;
};

class Init_EquationCurve_b3
{
public:
  explicit Init_EquationCurve_b3(::deva_common_msgs::msg::EquationCurve & msg)
  : msg_(msg)
  {}
  Init_EquationCurve_b2 b3(::deva_common_msgs::msg::EquationCurve::_b3_type arg)
  {
    msg_.b3 = std::move(arg);
    return Init_EquationCurve_b2(msg_);
  }

private:
  ::deva_common_msgs::msg::EquationCurve msg_;
};

class Init_EquationCurve_a0
{
public:
  explicit Init_EquationCurve_a0(::deva_common_msgs::msg::EquationCurve & msg)
  : msg_(msg)
  {}
  Init_EquationCurve_b3 a0(::deva_common_msgs::msg::EquationCurve::_a0_type arg)
  {
    msg_.a0 = std::move(arg);
    return Init_EquationCurve_b3(msg_);
  }

private:
  ::deva_common_msgs::msg::EquationCurve msg_;
};

class Init_EquationCurve_a1
{
public:
  explicit Init_EquationCurve_a1(::deva_common_msgs::msg::EquationCurve & msg)
  : msg_(msg)
  {}
  Init_EquationCurve_a0 a1(::deva_common_msgs::msg::EquationCurve::_a1_type arg)
  {
    msg_.a1 = std::move(arg);
    return Init_EquationCurve_a0(msg_);
  }

private:
  ::deva_common_msgs::msg::EquationCurve msg_;
};

class Init_EquationCurve_a2
{
public:
  explicit Init_EquationCurve_a2(::deva_common_msgs::msg::EquationCurve & msg)
  : msg_(msg)
  {}
  Init_EquationCurve_a1 a2(::deva_common_msgs::msg::EquationCurve::_a2_type arg)
  {
    msg_.a2 = std::move(arg);
    return Init_EquationCurve_a1(msg_);
  }

private:
  ::deva_common_msgs::msg::EquationCurve msg_;
};

class Init_EquationCurve_a3
{
public:
  explicit Init_EquationCurve_a3(::deva_common_msgs::msg::EquationCurve & msg)
  : msg_(msg)
  {}
  Init_EquationCurve_a2 a3(::deva_common_msgs::msg::EquationCurve::_a3_type arg)
  {
    msg_.a3 = std::move(arg);
    return Init_EquationCurve_a2(msg_);
  }

private:
  ::deva_common_msgs::msg::EquationCurve msg_;
};

class Init_EquationCurve_type
{
public:
  Init_EquationCurve_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EquationCurve_a3 type(::deva_common_msgs::msg::EquationCurve::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_EquationCurve_a3(msg_);
  }

private:
  ::deva_common_msgs::msg::EquationCurve msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_common_msgs::msg::EquationCurve>()
{
  return deva_common_msgs::msg::builder::Init_EquationCurve_type();
}

}  // namespace deva_common_msgs

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__EQUATION_CURVE__BUILDER_HPP_
