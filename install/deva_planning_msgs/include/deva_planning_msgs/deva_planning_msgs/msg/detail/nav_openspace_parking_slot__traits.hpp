// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs:msg/NavOpenspaceParkingSlot.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__NAV_OPENSPACE_PARKING_SLOT__TRAITS_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__NAV_OPENSPACE_PARKING_SLOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs/msg/detail/nav_openspace_parking_slot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavOpenspaceParkingSlot & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: xyz_vec
  {
    if (msg.xyz_vec.size() == 0) {
      out << "xyz_vec: []";
    } else {
      out << "xyz_vec: [";
      size_t pending_items = msg.xyz_vec.size();
      for (auto item : msg.xyz_vec) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: is_occupied
  {
    out << "is_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.is_occupied, out);
    out << ", ";
  }

  // member: is_stable_tracked
  {
    out << "is_stable_tracked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_stable_tracked, out);
    out << ", ";
  }

  // member: occupied_confidence
  {
    out << "occupied_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.occupied_confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavOpenspaceParkingSlot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: xyz_vec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.xyz_vec.size() == 0) {
      out << "xyz_vec: []\n";
    } else {
      out << "xyz_vec:\n";
      for (auto item : msg.xyz_vec) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: is_occupied
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_occupied: ";
    rosidl_generator_traits::value_to_yaml(msg.is_occupied, out);
    out << "\n";
  }

  // member: is_stable_tracked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_stable_tracked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_stable_tracked, out);
    out << "\n";
  }

  // member: occupied_confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "occupied_confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.occupied_confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavOpenspaceParkingSlot & msg, bool use_flow_style = false)
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

}  // namespace deva_planning_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_planning_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_planning_msgs::msg::NavOpenspaceParkingSlot & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs::msg::NavOpenspaceParkingSlot & msg)
{
  return deva_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs::msg::NavOpenspaceParkingSlot>()
{
  return "deva_planning_msgs::msg::NavOpenspaceParkingSlot";
}

template<>
inline const char * name<deva_planning_msgs::msg::NavOpenspaceParkingSlot>()
{
  return "deva_planning_msgs/msg/NavOpenspaceParkingSlot";
}

template<>
struct has_fixed_size<deva_planning_msgs::msg::NavOpenspaceParkingSlot>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs::msg::NavOpenspaceParkingSlot>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs::msg::NavOpenspaceParkingSlot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__NAV_OPENSPACE_PARKING_SLOT__TRAITS_HPP_
