// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_aeb_msgs:msg/SFObjPpty.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_PPTY__TRAITS_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_PPTY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_aeb_msgs/msg/detail/sf_obj_ppty__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_aeb_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SFObjPpty & msg,
  std::ostream & out)
{
  out << "{";
  // member: idn
  {
    out << "idn: ";
    rosidl_generator_traits::value_to_yaml(msg.idn, out);
    out << ", ";
  }

  // member: sts
  {
    out << "sts: ";
    rosidl_generator_traits::value_to_yaml(msg.sts, out);
    out << ", ";
  }

  // member: mdlofmtn
  {
    out << "mdlofmtn: ";
    rosidl_generator_traits::value_to_yaml(msg.mdlofmtn, out);
    out << ", ";
  }

  // member: trfcsceno
  {
    out << "trfcsceno: ";
    rosidl_generator_traits::value_to_yaml(msg.trfcsceno, out);
    out << ", ";
  }

  // member: cllsnmtgtnbybrkgprimqly
  {
    out << "cllsnmtgtnbybrkgprimqly: ";
    rosidl_generator_traits::value_to_yaml(msg.cllsnmtgtnbybrkgprimqly, out);
    out << ", ";
  }

  // member: cllsnmtgtnbybrkgsecqly
  {
    out << "cllsnmtgtnbybrkgsecqly: ";
    rosidl_generator_traits::value_to_yaml(msg.cllsnmtgtnbybrkgsecqly, out);
    out << ", ";
  }

  // member: cllsnwarnfwdqly
  {
    out << "cllsnwarnfwdqly: ";
    rosidl_generator_traits::value_to_yaml(msg.cllsnwarnfwdqly, out);
    out << ", ";
  }

  // member: trfcjamassiqly
  {
    out << "trfcjamassiqly: ";
    rosidl_generator_traits::value_to_yaml(msg.trfcjamassiqly, out);
    out << ", ";
  }

  // member: dstlatfrommidoflaneselfqly
  {
    out << "dstlatfrommidoflaneselfqly: ";
    rosidl_generator_traits::value_to_yaml(msg.dstlatfrommidoflaneselfqly, out);
    out << ", ";
  }

  // member: emgylanekeepaidposnqly
  {
    out << "emgylanekeepaidposnqly: ";
    rosidl_generator_traits::value_to_yaml(msg.emgylanekeepaidposnqly, out);
    out << ", ";
  }

  // member: fusnsrc
  {
    out << "fusnsrc: ";
    rosidl_generator_traits::value_to_yaml(msg.fusnsrc, out);
    out << ", ";
  }

  // member: posnlgtstdde
  {
    out << "posnlgtstdde: ";
    rosidl_generator_traits::value_to_yaml(msg.posnlgtstdde, out);
    out << ", ";
  }

  // member: posnlatstdde
  {
    out << "posnlatstdde: ";
    rosidl_generator_traits::value_to_yaml(msg.posnlatstdde, out);
    out << ", ";
  }

  // member: agdirstdde
  {
    out << "agdirstdde: ";
    rosidl_generator_traits::value_to_yaml(msg.agdirstdde, out);
    out << ", ";
  }

  // member: spdstdde
  {
    out << "spdstdde: ";
    rosidl_generator_traits::value_to_yaml(msg.spdstdde, out);
    out << ", ";
  }

  // member: astdde
  {
    out << "astdde: ";
    rosidl_generator_traits::value_to_yaml(msg.astdde, out);
    out << ", ";
  }

  // member: reserved
  {
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << ", ";
  }

  // member: visnid
  {
    out << "visnid: ";
    rosidl_generator_traits::value_to_yaml(msg.visnid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SFObjPpty & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: idn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "idn: ";
    rosidl_generator_traits::value_to_yaml(msg.idn, out);
    out << "\n";
  }

  // member: sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sts: ";
    rosidl_generator_traits::value_to_yaml(msg.sts, out);
    out << "\n";
  }

  // member: mdlofmtn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mdlofmtn: ";
    rosidl_generator_traits::value_to_yaml(msg.mdlofmtn, out);
    out << "\n";
  }

  // member: trfcsceno
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trfcsceno: ";
    rosidl_generator_traits::value_to_yaml(msg.trfcsceno, out);
    out << "\n";
  }

  // member: cllsnmtgtnbybrkgprimqly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cllsnmtgtnbybrkgprimqly: ";
    rosidl_generator_traits::value_to_yaml(msg.cllsnmtgtnbybrkgprimqly, out);
    out << "\n";
  }

  // member: cllsnmtgtnbybrkgsecqly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cllsnmtgtnbybrkgsecqly: ";
    rosidl_generator_traits::value_to_yaml(msg.cllsnmtgtnbybrkgsecqly, out);
    out << "\n";
  }

  // member: cllsnwarnfwdqly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cllsnwarnfwdqly: ";
    rosidl_generator_traits::value_to_yaml(msg.cllsnwarnfwdqly, out);
    out << "\n";
  }

  // member: trfcjamassiqly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trfcjamassiqly: ";
    rosidl_generator_traits::value_to_yaml(msg.trfcjamassiqly, out);
    out << "\n";
  }

  // member: dstlatfrommidoflaneselfqly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dstlatfrommidoflaneselfqly: ";
    rosidl_generator_traits::value_to_yaml(msg.dstlatfrommidoflaneselfqly, out);
    out << "\n";
  }

  // member: emgylanekeepaidposnqly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emgylanekeepaidposnqly: ";
    rosidl_generator_traits::value_to_yaml(msg.emgylanekeepaidposnqly, out);
    out << "\n";
  }

  // member: fusnsrc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fusnsrc: ";
    rosidl_generator_traits::value_to_yaml(msg.fusnsrc, out);
    out << "\n";
  }

  // member: posnlgtstdde
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posnlgtstdde: ";
    rosidl_generator_traits::value_to_yaml(msg.posnlgtstdde, out);
    out << "\n";
  }

  // member: posnlatstdde
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posnlatstdde: ";
    rosidl_generator_traits::value_to_yaml(msg.posnlatstdde, out);
    out << "\n";
  }

  // member: agdirstdde
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "agdirstdde: ";
    rosidl_generator_traits::value_to_yaml(msg.agdirstdde, out);
    out << "\n";
  }

  // member: spdstdde
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spdstdde: ";
    rosidl_generator_traits::value_to_yaml(msg.spdstdde, out);
    out << "\n";
  }

  // member: astdde
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "astdde: ";
    rosidl_generator_traits::value_to_yaml(msg.astdde, out);
    out << "\n";
  }

  // member: reserved
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reserved: ";
    rosidl_generator_traits::value_to_yaml(msg.reserved, out);
    out << "\n";
  }

  // member: visnid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "visnid: ";
    rosidl_generator_traits::value_to_yaml(msg.visnid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SFObjPpty & msg, bool use_flow_style = false)
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

}  // namespace deva_aeb_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_aeb_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_aeb_msgs::msg::SFObjPpty & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_aeb_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_aeb_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_aeb_msgs::msg::SFObjPpty & msg)
{
  return deva_aeb_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_aeb_msgs::msg::SFObjPpty>()
{
  return "deva_aeb_msgs::msg::SFObjPpty";
}

template<>
inline const char * name<deva_aeb_msgs::msg::SFObjPpty>()
{
  return "deva_aeb_msgs/msg/SFObjPpty";
}

template<>
struct has_fixed_size<deva_aeb_msgs::msg::SFObjPpty>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_aeb_msgs::msg::SFObjPpty>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_aeb_msgs::msg::SFObjPpty>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_PPTY__TRAITS_HPP_
