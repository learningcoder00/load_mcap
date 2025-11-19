// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/NearestParkingSlot.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__NEAREST_PARKING_SLOT__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__NEAREST_PARKING_SLOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/nearest_parking_slot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NearestParkingSlot & msg,
  std::ostream & out)
{
  out << "{";
  // member: nearest_parking_slot_id
  {
    out << "nearest_parking_slot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.nearest_parking_slot_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NearestParkingSlot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: nearest_parking_slot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nearest_parking_slot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.nearest_parking_slot_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NearestParkingSlot & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace deva_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_perception_msgs::msg::NearestParkingSlot & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::NearestParkingSlot & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::NearestParkingSlot>()
{
  return "deva_perception_msgs::msg::NearestParkingSlot";
}

template<>
inline const char * name<deva_perception_msgs::msg::NearestParkingSlot>()
{
  return "deva_perception_msgs/msg/NearestParkingSlot";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::NearestParkingSlot>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::NearestParkingSlot>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_perception_msgs::msg::NearestParkingSlot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__NEAREST_PARKING_SLOT__TRAITS_HPP_
