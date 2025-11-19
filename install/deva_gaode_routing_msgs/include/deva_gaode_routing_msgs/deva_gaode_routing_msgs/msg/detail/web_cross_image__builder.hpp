// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebCrossImage.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_IMAGE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/web_cross_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_WebCrossImage_cross_image_data
{
public:
  explicit Init_WebCrossImage_cross_image_data(::deva_gaode_routing_msgs::msg::WebCrossImage & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::WebCrossImage cross_image_data(::deva_gaode_routing_msgs::msg::WebCrossImage::_cross_image_data_type arg)
  {
    msg_.cross_image_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCrossImage msg_;
};

class Init_WebCrossImage_cross_image_type
{
public:
  explicit Init_WebCrossImage_cross_image_type(::deva_gaode_routing_msgs::msg::WebCrossImage & msg)
  : msg_(msg)
  {}
  Init_WebCrossImage_cross_image_data cross_image_type(::deva_gaode_routing_msgs::msg::WebCrossImage::_cross_image_type_type arg)
  {
    msg_.cross_image_type = std::move(arg);
    return Init_WebCrossImage_cross_image_data(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCrossImage msg_;
};

class Init_WebCrossImage_id
{
public:
  Init_WebCrossImage_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebCrossImage_cross_image_type id(::deva_gaode_routing_msgs::msg::WebCrossImage::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_WebCrossImage_cross_image_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebCrossImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::WebCrossImage>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_WebCrossImage_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CROSS_IMAGE__BUILDER_HPP_
