// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/ADASFunctionStatusIntra.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_STATUS_INTRA__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_STATUS_INTRA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/adas_function_status_intra__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ADASFunctionStatusIntra & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: acttnasylatctrlmodreq
  {
    out << "acttnasylatctrlmodreq: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnasylatctrlmodreq, out);
    out << ", ";
  }

  // member: acttnasysftyenadecelbydbs
  {
    out << "acttnasysftyenadecelbydbs: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnasysftyenadecelbydbs, out);
    out << ", ";
  }

  // member: acttnasysftyhwlreq
  {
    out << "acttnasysftyhwlreq: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnasysftyhwlreq, out);
    out << ", ";
  }

  // member: acttnasysftystandstillreq
  {
    out << "acttnasysftystandstillreq: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnasysftystandstillreq, out);
    out << ", ";
  }

  // member: acttnasysteerwhlhptcwarnreq
  {
    out << "acttnasysteerwhlhptcwarnreq: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnasysteerwhlhptcwarnreq, out);
    out << ", ";
  }

  // member: acttnbrkhptcwarnreqforautdrv
  {
    out << "acttnbrkhptcwarnreqforautdrv: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnbrkhptcwarnreqforautdrv, out);
    out << ", ";
  }

  // member: acttnbrkprecactv
  {
    out << "acttnbrkprecactv: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnbrkprecactv, out);
    out << ", ";
  }

  // member: acttncllsnthreat
  {
    out << "acttncllsnthreat: ";
    rosidl_generator_traits::value_to_yaml(msg.acttncllsnthreat, out);
    out << ", ";
  }

  // member: hmiasyemgylanekeepaid
  {
    out << "hmiasyemgylanekeepaid: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiasyemgylanekeepaid, out);
    out << ", ";
  }

  // member: hmiasyemgylanekeepaidsts
  {
    out << "hmiasyemgylanekeepaidsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiasyemgylanekeepaidsts, out);
    out << ", ";
  }

  // member: hmiasylanechgwarnmod
  {
    out << "hmiasylanechgwarnmod: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiasylanechgwarnmod, out);
    out << ", ";
  }

  // member: hmiasylanekeepaidsts
  {
    out << "hmiasylanekeepaidsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiasylanekeepaidsts, out);
    out << ", ";
  }

  // member: hmiasyobjtype
  {
    out << "hmiasyobjtype: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiasyobjtype, out);
    out << ", ";
  }

  // member: hmiasysteerapplyrqrd
  {
    out << "hmiasysteerapplyrqrd: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiasysteerapplyrqrd, out);
    out << ", ";
  }

  // member: hmiasywarnforsteercncl
  {
    out << "hmiasywarnforsteercncl: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiasywarnforsteercncl, out);
    out << ", ";
  }

  // member: hmicllsnaidpost
  {
    out << "hmicllsnaidpost: ";
    rosidl_generator_traits::value_to_yaml(msg.hmicllsnaidpost, out);
    out << ", ";
  }

  // member: hmicllsnfwdwarn
  {
    out << "hmicllsnfwdwarn: ";
    rosidl_generator_traits::value_to_yaml(msg.hmicllsnfwdwarn, out);
    out << ", ";
  }

  // member: hmicllsnmtgtnfaultsts
  {
    out << "hmicllsnmtgtnfaultsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmicllsnmtgtnfaultsts, out);
    out << ", ";
  }

  // member: hmicllsnmtgtnfctsts
  {
    out << "hmicllsnmtgtnfctsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmicllsnmtgtnfctsts, out);
    out << ", ";
  }

  // member: hmicllsnmtgtnwarnsts
  {
    out << "hmicllsnmtgtnwarnsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmicllsnmtgtnwarnsts, out);
    out << ", ";
  }

  // member: hmictryforroadsgninfo
  {
    out << "hmictryforroadsgninfo: ";
    rosidl_generator_traits::value_to_yaml(msg.hmictryforroadsgninfo, out);
    out << ", ";
  }

  // member: hmiintvandwarnmodinfosts
  {
    out << "hmiintvandwarnmodinfosts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiintvandwarnmodinfosts, out);
    out << ", ";
  }

  // member: hmilanechgwarnsts
  {
    out << "hmilanechgwarnsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmilanechgwarnsts, out);
    out << ", ";
  }

  // member: hmilanekeepaidinfosts
  {
    out << "hmilanekeepaidinfosts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmilanekeepaidinfosts, out);
    out << ", ";
  }

  // member: hminontrvrsbleroadedgeonleft
  {
    out << "hminontrvrsbleroadedgeonleft: ";
    rosidl_generator_traits::value_to_yaml(msg.hminontrvrsbleroadedgeonleft, out);
    out << ", ";
  }

  // member: hminontrvrsbleroadedgeonright
  {
    out << "hminontrvrsbleroadedgeonright: ";
    rosidl_generator_traits::value_to_yaml(msg.hminontrvrsbleroadedgeonright, out);
    out << ", ";
  }

  // member: hmioffsforspdwarnsetgsts
  {
    out << "hmioffsforspdwarnsetgsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmioffsforspdwarnsetgsts, out);
    out << ", ";
  }

  // member: hmiroadmiscsgninfosts
  {
    out << "hmiroadmiscsgninfosts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiroadmiscsgninfosts, out);
    out << ", ";
  }

  // member: hmiroadsgninfosts
  {
    out << "hmiroadsgninfosts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiroadsgninfosts, out);
    out << ", ";
  }

  // member: hmispdalrmactvsts
  {
    out << "hmispdalrmactvsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmispdalrmactvsts, out);
    out << ", ";
  }

  // member: hmitrfcinfomiscfirst
  {
    out << "hmitrfcinfomiscfirst: ";
    rosidl_generator_traits::value_to_yaml(msg.hmitrfcinfomiscfirst, out);
    out << ", ";
  }

  // member: hmiwarnforasyemgylanekeepaid
  {
    out << "hmiwarnforasyemgylanekeepaid: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiwarnforasyemgylanekeepaid, out);
    out << ", ";
  }

  // member: hmicllsnmtgtnonoffsts
  {
    out << "hmicllsnmtgtnonoffsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmicllsnmtgtnonoffsts, out);
    out << ", ";
  }

  // member: hmidooropenwarnon1
  {
    out << "hmidooropenwarnon1: ";
    rosidl_generator_traits::value_to_yaml(msg.hmidooropenwarnon1, out);
    out << ", ";
  }

  // member: hmidooropenwarnleindcn
  {
    out << "hmidooropenwarnleindcn: ";
    rosidl_generator_traits::value_to_yaml(msg.hmidooropenwarnleindcn, out);
    out << ", ";
  }

  // member: hmidooropenwarnriindcn
  {
    out << "hmidooropenwarnriindcn: ";
    rosidl_generator_traits::value_to_yaml(msg.hmidooropenwarnriindcn, out);
    out << ", ";
  }

  // member: hmilettclv
  {
    out << "hmilettclv: ";
    rosidl_generator_traits::value_to_yaml(msg.hmilettclv, out);
    out << ", ";
  }

  // member: hmirittclv
  {
    out << "hmirittclv: ";
    rosidl_generator_traits::value_to_yaml(msg.hmirittclv, out);
    out << ", ";
  }

  // member: hmifctaindcnle
  {
    out << "hmifctaindcnle: ";
    rosidl_generator_traits::value_to_yaml(msg.hmifctaindcnle, out);
    out << ", ";
  }

  // member: hmifctaindcnri
  {
    out << "hmifctaindcnri: ";
    rosidl_generator_traits::value_to_yaml(msg.hmifctaindcnri, out);
    out << ", ";
  }

  // member: hmilcmaindcnle
  {
    out << "hmilcmaindcnle: ";
    rosidl_generator_traits::value_to_yaml(msg.hmilcmaindcnle, out);
    out << ", ";
  }

  // member: hmilcmaindcnri
  {
    out << "hmilcmaindcnri: ";
    rosidl_generator_traits::value_to_yaml(msg.hmilcmaindcnri, out);
    out << ", ";
  }

  // member: hmilcmaon
  {
    out << "hmilcmaon: ";
    rosidl_generator_traits::value_to_yaml(msg.hmilcmaon, out);
    out << ", ";
  }

  // member: hmilcmaaudwarn
  {
    out << "hmilcmaaudwarn: ";
    rosidl_generator_traits::value_to_yaml(msg.hmilcmaaudwarn, out);
    out << ", ";
  }

  // member: hmirsdssyssts
  {
    out << "hmirsdssyssts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmirsdssyssts, out);
    out << ", ";
  }

  // member: hmirctaindcnle
  {
    out << "hmirctaindcnle: ";
    rosidl_generator_traits::value_to_yaml(msg.hmirctaindcnle, out);
    out << ", ";
  }

  // member: hmirctaindcnri
  {
    out << "hmirctaindcnri: ";
    rosidl_generator_traits::value_to_yaml(msg.hmirctaindcnri, out);
    out << ", ";
  }

  // member: hmictraon1
  {
    out << "hmictraon1: ";
    rosidl_generator_traits::value_to_yaml(msg.hmictraon1, out);
    out << ", ";
  }

  // member: hmicllsnwarnreindcn
  {
    out << "hmicllsnwarnreindcn: ";
    rosidl_generator_traits::value_to_yaml(msg.hmicllsnwarnreindcn, out);
    out << ", ";
  }

  // member: hmicllsnwarnreon1
  {
    out << "hmicllsnwarnreon1: ";
    rosidl_generator_traits::value_to_yaml(msg.hmicllsnwarnreon1, out);
    out << ", ";
  }

  // member: hmircwmlireq
  {
    out << "hmircwmlireq: ";
    rosidl_generator_traits::value_to_yaml(msg.hmircwmlireq, out);
    out << ", ";
  }

  // member: acttnrctabrkreq
  {
    out << "acttnrctabrkreq: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnrctabrkreq, out);
    out << ", ";
  }

  // member: acttnrctabrkreqqm
  {
    out << "acttnrctabrkreqqm: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnrctabrkreqqm, out);
    out << ", ";
  }

  // member: acttnrcwmbrkreq
  {
    out << "acttnrcwmbrkreq: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnrcwmbrkreq, out);
    out << ", ";
  }

  // member: acttnrcwmbrkreqqm
  {
    out << "acttnrcwmbrkreqqm: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnrcwmbrkreqqm, out);
    out << ", ";
  }

  // member: hmiasyemgymanoeuvreaidsts
  {
    out << "hmiasyemgymanoeuvreaidsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiasyemgymanoeuvreaidsts, out);
    out << ", ";
  }

  // member: hmicllsnaidpostema
  {
    out << "hmicllsnaidpostema: ";
    rosidl_generator_traits::value_to_yaml(msg.hmicllsnaidpostema, out);
    out << ", ";
  }

  // member: hmitrfcliinfo
  {
    out << "hmitrfcliinfo: ";
    rosidl_generator_traits::value_to_yaml(msg.hmitrfcliinfo, out);
    out << ", ";
  }

  // member: hmitrfclists
  {
    out << "hmitrfclists: ";
    rosidl_generator_traits::value_to_yaml(msg.hmitrfclists, out);
    out << ", ";
  }

  // member: hmitrfcliwarntypsts
  {
    out << "hmitrfcliwarntypsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmitrfcliwarntypsts, out);
    out << ", ";
  }

  // member: hmiuturnlight
  {
    out << "hmiuturnlight: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiuturnlight, out);
    out << ", ";
  }

  // member: hmitrfcliinfoleft
  {
    out << "hmitrfcliinfoleft: ";
    rosidl_generator_traits::value_to_yaml(msg.hmitrfcliinfoleft, out);
    out << ", ";
  }

  // member: hmitrfcliinforight
  {
    out << "hmitrfcliinforight: ";
    rosidl_generator_traits::value_to_yaml(msg.hmitrfcliinforight, out);
    out << ", ";
  }

  // member: hmiaebtriggerobjectid
  {
    out << "hmiaebtriggerobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiaebtriggerobjectid, out);
    out << ", ";
  }

  // member: hmielkatriggerobjectid
  {
    out << "hmielkatriggerobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.hmielkatriggerobjectid, out);
    out << ", ";
  }

  // member: hmifctarighttriggerobjectid
  {
    out << "hmifctarighttriggerobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.hmifctarighttriggerobjectid, out);
    out << ", ";
  }

  // member: hmifctalefttriggerobjectid
  {
    out << "hmifctalefttriggerobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.hmifctalefttriggerobjectid, out);
    out << ", ";
  }

  // member: hmiematriggerobjectid
  {
    out << "hmiematriggerobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiematriggerobjectid, out);
    out << ", ";
  }

  // member: hmirctarighttriggerobjectid
  {
    out << "hmirctarighttriggerobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.hmirctarighttriggerobjectid, out);
    out << ", ";
  }

  // member: hmirctalefttriggerobjectid
  {
    out << "hmirctalefttriggerobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.hmirctalefttriggerobjectid, out);
    out << ", ";
  }

  // member: hmitrfclichg
  {
    out << "hmitrfclichg: ";
    rosidl_generator_traits::value_to_yaml(msg.hmitrfclichg, out);
    out << ", ";
  }

  // member: hmifcwtriggerobjectid
  {
    out << "hmifcwtriggerobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.hmifcwtriggerobjectid, out);
    out << ", ";
  }

  // member: lanekeepaidlaneinfo
  {
    out << "lanekeepaidlaneinfo: ";
    rosidl_generator_traits::value_to_yaml(msg.lanekeepaidlaneinfo, out);
    out << ", ";
  }

  // member: asyemgylanekeepaidlaneinfo
  {
    out << "asyemgylanekeepaidlaneinfo: ";
    rosidl_generator_traits::value_to_yaml(msg.asyemgylanekeepaidlaneinfo, out);
    out << ", ";
  }

  // member: hmireserve1
  {
    out << "hmireserve1: ";
    rosidl_generator_traits::value_to_yaml(msg.hmireserve1, out);
    out << ", ";
  }

  // member: hmireserve2
  {
    out << "hmireserve2: ";
    rosidl_generator_traits::value_to_yaml(msg.hmireserve2, out);
    out << ", ";
  }

  // member: hmireserve3
  {
    out << "hmireserve3: ";
    rosidl_generator_traits::value_to_yaml(msg.hmireserve3, out);
    out << ", ";
  }

  // member: hmireserve4
  {
    out << "hmireserve4: ";
    rosidl_generator_traits::value_to_yaml(msg.hmireserve4, out);
    out << ", ";
  }

  // member: hmireserve5
  {
    out << "hmireserve5: ";
    rosidl_generator_traits::value_to_yaml(msg.hmireserve5, out);
    out << ", ";
  }

  // member: hmireserve6
  {
    out << "hmireserve6: ";
    rosidl_generator_traits::value_to_yaml(msg.hmireserve6, out);
    out << ", ";
  }

  // member: hmireserve7
  {
    out << "hmireserve7: ";
    rosidl_generator_traits::value_to_yaml(msg.hmireserve7, out);
    out << ", ";
  }

  // member: hmireserve8
  {
    out << "hmireserve8: ";
    rosidl_generator_traits::value_to_yaml(msg.hmireserve8, out);
    out << ", ";
  }

  // member: asypinionagreq
  {
    out << "asypinionagreq: ";
    rosidl_generator_traits::value_to_yaml(msg.asypinionagreq, out);
    out << ", ";
  }

  // member: latctrlagctrltqlowrlim
  {
    out << "latctrlagctrltqlowrlim: ";
    rosidl_generator_traits::value_to_yaml(msg.latctrlagctrltqlowrlim, out);
    out << ", ";
  }

  // member: latctrlagctrltqupprlim
  {
    out << "latctrlagctrltqupprlim: ";
    rosidl_generator_traits::value_to_yaml(msg.latctrlagctrltqupprlim, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ADASFunctionStatusIntra & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: acttnasylatctrlmodreq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acttnasylatctrlmodreq: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnasylatctrlmodreq, out);
    out << "\n";
  }

  // member: acttnasysftyenadecelbydbs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acttnasysftyenadecelbydbs: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnasysftyenadecelbydbs, out);
    out << "\n";
  }

  // member: acttnasysftyhwlreq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acttnasysftyhwlreq: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnasysftyhwlreq, out);
    out << "\n";
  }

  // member: acttnasysftystandstillreq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acttnasysftystandstillreq: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnasysftystandstillreq, out);
    out << "\n";
  }

  // member: acttnasysteerwhlhptcwarnreq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acttnasysteerwhlhptcwarnreq: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnasysteerwhlhptcwarnreq, out);
    out << "\n";
  }

  // member: acttnbrkhptcwarnreqforautdrv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acttnbrkhptcwarnreqforautdrv: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnbrkhptcwarnreqforautdrv, out);
    out << "\n";
  }

  // member: acttnbrkprecactv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acttnbrkprecactv: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnbrkprecactv, out);
    out << "\n";
  }

  // member: acttncllsnthreat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acttncllsnthreat: ";
    rosidl_generator_traits::value_to_yaml(msg.acttncllsnthreat, out);
    out << "\n";
  }

  // member: hmiasyemgylanekeepaid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmiasyemgylanekeepaid: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiasyemgylanekeepaid, out);
    out << "\n";
  }

  // member: hmiasyemgylanekeepaidsts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmiasyemgylanekeepaidsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiasyemgylanekeepaidsts, out);
    out << "\n";
  }

  // member: hmiasylanechgwarnmod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmiasylanechgwarnmod: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiasylanechgwarnmod, out);
    out << "\n";
  }

  // member: hmiasylanekeepaidsts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmiasylanekeepaidsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiasylanekeepaidsts, out);
    out << "\n";
  }

  // member: hmiasyobjtype
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmiasyobjtype: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiasyobjtype, out);
    out << "\n";
  }

  // member: hmiasysteerapplyrqrd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmiasysteerapplyrqrd: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiasysteerapplyrqrd, out);
    out << "\n";
  }

  // member: hmiasywarnforsteercncl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmiasywarnforsteercncl: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiasywarnforsteercncl, out);
    out << "\n";
  }

  // member: hmicllsnaidpost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmicllsnaidpost: ";
    rosidl_generator_traits::value_to_yaml(msg.hmicllsnaidpost, out);
    out << "\n";
  }

  // member: hmicllsnfwdwarn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmicllsnfwdwarn: ";
    rosidl_generator_traits::value_to_yaml(msg.hmicllsnfwdwarn, out);
    out << "\n";
  }

  // member: hmicllsnmtgtnfaultsts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmicllsnmtgtnfaultsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmicllsnmtgtnfaultsts, out);
    out << "\n";
  }

  // member: hmicllsnmtgtnfctsts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmicllsnmtgtnfctsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmicllsnmtgtnfctsts, out);
    out << "\n";
  }

  // member: hmicllsnmtgtnwarnsts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmicllsnmtgtnwarnsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmicllsnmtgtnwarnsts, out);
    out << "\n";
  }

  // member: hmictryforroadsgninfo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmictryforroadsgninfo: ";
    rosidl_generator_traits::value_to_yaml(msg.hmictryforroadsgninfo, out);
    out << "\n";
  }

  // member: hmiintvandwarnmodinfosts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmiintvandwarnmodinfosts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiintvandwarnmodinfosts, out);
    out << "\n";
  }

  // member: hmilanechgwarnsts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmilanechgwarnsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmilanechgwarnsts, out);
    out << "\n";
  }

  // member: hmilanekeepaidinfosts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmilanekeepaidinfosts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmilanekeepaidinfosts, out);
    out << "\n";
  }

  // member: hminontrvrsbleroadedgeonleft
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hminontrvrsbleroadedgeonleft: ";
    rosidl_generator_traits::value_to_yaml(msg.hminontrvrsbleroadedgeonleft, out);
    out << "\n";
  }

  // member: hminontrvrsbleroadedgeonright
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hminontrvrsbleroadedgeonright: ";
    rosidl_generator_traits::value_to_yaml(msg.hminontrvrsbleroadedgeonright, out);
    out << "\n";
  }

  // member: hmioffsforspdwarnsetgsts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmioffsforspdwarnsetgsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmioffsforspdwarnsetgsts, out);
    out << "\n";
  }

  // member: hmiroadmiscsgninfosts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmiroadmiscsgninfosts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiroadmiscsgninfosts, out);
    out << "\n";
  }

  // member: hmiroadsgninfosts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmiroadsgninfosts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiroadsgninfosts, out);
    out << "\n";
  }

  // member: hmispdalrmactvsts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmispdalrmactvsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmispdalrmactvsts, out);
    out << "\n";
  }

  // member: hmitrfcinfomiscfirst
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmitrfcinfomiscfirst: ";
    rosidl_generator_traits::value_to_yaml(msg.hmitrfcinfomiscfirst, out);
    out << "\n";
  }

  // member: hmiwarnforasyemgylanekeepaid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmiwarnforasyemgylanekeepaid: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiwarnforasyemgylanekeepaid, out);
    out << "\n";
  }

  // member: hmicllsnmtgtnonoffsts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmicllsnmtgtnonoffsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmicllsnmtgtnonoffsts, out);
    out << "\n";
  }

  // member: hmidooropenwarnon1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmidooropenwarnon1: ";
    rosidl_generator_traits::value_to_yaml(msg.hmidooropenwarnon1, out);
    out << "\n";
  }

  // member: hmidooropenwarnleindcn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmidooropenwarnleindcn: ";
    rosidl_generator_traits::value_to_yaml(msg.hmidooropenwarnleindcn, out);
    out << "\n";
  }

  // member: hmidooropenwarnriindcn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmidooropenwarnriindcn: ";
    rosidl_generator_traits::value_to_yaml(msg.hmidooropenwarnriindcn, out);
    out << "\n";
  }

  // member: hmilettclv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmilettclv: ";
    rosidl_generator_traits::value_to_yaml(msg.hmilettclv, out);
    out << "\n";
  }

  // member: hmirittclv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmirittclv: ";
    rosidl_generator_traits::value_to_yaml(msg.hmirittclv, out);
    out << "\n";
  }

  // member: hmifctaindcnle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmifctaindcnle: ";
    rosidl_generator_traits::value_to_yaml(msg.hmifctaindcnle, out);
    out << "\n";
  }

  // member: hmifctaindcnri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmifctaindcnri: ";
    rosidl_generator_traits::value_to_yaml(msg.hmifctaindcnri, out);
    out << "\n";
  }

  // member: hmilcmaindcnle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmilcmaindcnle: ";
    rosidl_generator_traits::value_to_yaml(msg.hmilcmaindcnle, out);
    out << "\n";
  }

  // member: hmilcmaindcnri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmilcmaindcnri: ";
    rosidl_generator_traits::value_to_yaml(msg.hmilcmaindcnri, out);
    out << "\n";
  }

  // member: hmilcmaon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmilcmaon: ";
    rosidl_generator_traits::value_to_yaml(msg.hmilcmaon, out);
    out << "\n";
  }

  // member: hmilcmaaudwarn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmilcmaaudwarn: ";
    rosidl_generator_traits::value_to_yaml(msg.hmilcmaaudwarn, out);
    out << "\n";
  }

  // member: hmirsdssyssts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmirsdssyssts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmirsdssyssts, out);
    out << "\n";
  }

  // member: hmirctaindcnle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmirctaindcnle: ";
    rosidl_generator_traits::value_to_yaml(msg.hmirctaindcnle, out);
    out << "\n";
  }

  // member: hmirctaindcnri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmirctaindcnri: ";
    rosidl_generator_traits::value_to_yaml(msg.hmirctaindcnri, out);
    out << "\n";
  }

  // member: hmictraon1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmictraon1: ";
    rosidl_generator_traits::value_to_yaml(msg.hmictraon1, out);
    out << "\n";
  }

  // member: hmicllsnwarnreindcn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmicllsnwarnreindcn: ";
    rosidl_generator_traits::value_to_yaml(msg.hmicllsnwarnreindcn, out);
    out << "\n";
  }

  // member: hmicllsnwarnreon1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmicllsnwarnreon1: ";
    rosidl_generator_traits::value_to_yaml(msg.hmicllsnwarnreon1, out);
    out << "\n";
  }

  // member: hmircwmlireq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmircwmlireq: ";
    rosidl_generator_traits::value_to_yaml(msg.hmircwmlireq, out);
    out << "\n";
  }

  // member: acttnrctabrkreq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acttnrctabrkreq: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnrctabrkreq, out);
    out << "\n";
  }

  // member: acttnrctabrkreqqm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acttnrctabrkreqqm: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnrctabrkreqqm, out);
    out << "\n";
  }

  // member: acttnrcwmbrkreq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acttnrcwmbrkreq: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnrcwmbrkreq, out);
    out << "\n";
  }

  // member: acttnrcwmbrkreqqm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acttnrcwmbrkreqqm: ";
    rosidl_generator_traits::value_to_yaml(msg.acttnrcwmbrkreqqm, out);
    out << "\n";
  }

  // member: hmiasyemgymanoeuvreaidsts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmiasyemgymanoeuvreaidsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiasyemgymanoeuvreaidsts, out);
    out << "\n";
  }

  // member: hmicllsnaidpostema
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmicllsnaidpostema: ";
    rosidl_generator_traits::value_to_yaml(msg.hmicllsnaidpostema, out);
    out << "\n";
  }

  // member: hmitrfcliinfo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmitrfcliinfo: ";
    rosidl_generator_traits::value_to_yaml(msg.hmitrfcliinfo, out);
    out << "\n";
  }

  // member: hmitrfclists
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmitrfclists: ";
    rosidl_generator_traits::value_to_yaml(msg.hmitrfclists, out);
    out << "\n";
  }

  // member: hmitrfcliwarntypsts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmitrfcliwarntypsts: ";
    rosidl_generator_traits::value_to_yaml(msg.hmitrfcliwarntypsts, out);
    out << "\n";
  }

  // member: hmiuturnlight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmiuturnlight: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiuturnlight, out);
    out << "\n";
  }

  // member: hmitrfcliinfoleft
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmitrfcliinfoleft: ";
    rosidl_generator_traits::value_to_yaml(msg.hmitrfcliinfoleft, out);
    out << "\n";
  }

  // member: hmitrfcliinforight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmitrfcliinforight: ";
    rosidl_generator_traits::value_to_yaml(msg.hmitrfcliinforight, out);
    out << "\n";
  }

  // member: hmiaebtriggerobjectid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmiaebtriggerobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiaebtriggerobjectid, out);
    out << "\n";
  }

  // member: hmielkatriggerobjectid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmielkatriggerobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.hmielkatriggerobjectid, out);
    out << "\n";
  }

  // member: hmifctarighttriggerobjectid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmifctarighttriggerobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.hmifctarighttriggerobjectid, out);
    out << "\n";
  }

  // member: hmifctalefttriggerobjectid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmifctalefttriggerobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.hmifctalefttriggerobjectid, out);
    out << "\n";
  }

  // member: hmiematriggerobjectid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmiematriggerobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.hmiematriggerobjectid, out);
    out << "\n";
  }

  // member: hmirctarighttriggerobjectid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmirctarighttriggerobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.hmirctarighttriggerobjectid, out);
    out << "\n";
  }

  // member: hmirctalefttriggerobjectid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmirctalefttriggerobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.hmirctalefttriggerobjectid, out);
    out << "\n";
  }

  // member: hmitrfclichg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmitrfclichg: ";
    rosidl_generator_traits::value_to_yaml(msg.hmitrfclichg, out);
    out << "\n";
  }

  // member: hmifcwtriggerobjectid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmifcwtriggerobjectid: ";
    rosidl_generator_traits::value_to_yaml(msg.hmifcwtriggerobjectid, out);
    out << "\n";
  }

  // member: lanekeepaidlaneinfo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lanekeepaidlaneinfo: ";
    rosidl_generator_traits::value_to_yaml(msg.lanekeepaidlaneinfo, out);
    out << "\n";
  }

  // member: asyemgylanekeepaidlaneinfo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asyemgylanekeepaidlaneinfo: ";
    rosidl_generator_traits::value_to_yaml(msg.asyemgylanekeepaidlaneinfo, out);
    out << "\n";
  }

  // member: hmireserve1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmireserve1: ";
    rosidl_generator_traits::value_to_yaml(msg.hmireserve1, out);
    out << "\n";
  }

  // member: hmireserve2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmireserve2: ";
    rosidl_generator_traits::value_to_yaml(msg.hmireserve2, out);
    out << "\n";
  }

  // member: hmireserve3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmireserve3: ";
    rosidl_generator_traits::value_to_yaml(msg.hmireserve3, out);
    out << "\n";
  }

  // member: hmireserve4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmireserve4: ";
    rosidl_generator_traits::value_to_yaml(msg.hmireserve4, out);
    out << "\n";
  }

  // member: hmireserve5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmireserve5: ";
    rosidl_generator_traits::value_to_yaml(msg.hmireserve5, out);
    out << "\n";
  }

  // member: hmireserve6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmireserve6: ";
    rosidl_generator_traits::value_to_yaml(msg.hmireserve6, out);
    out << "\n";
  }

  // member: hmireserve7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmireserve7: ";
    rosidl_generator_traits::value_to_yaml(msg.hmireserve7, out);
    out << "\n";
  }

  // member: hmireserve8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmireserve8: ";
    rosidl_generator_traits::value_to_yaml(msg.hmireserve8, out);
    out << "\n";
  }

  // member: asypinionagreq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asypinionagreq: ";
    rosidl_generator_traits::value_to_yaml(msg.asypinionagreq, out);
    out << "\n";
  }

  // member: latctrlagctrltqlowrlim
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latctrlagctrltqlowrlim: ";
    rosidl_generator_traits::value_to_yaml(msg.latctrlagctrltqlowrlim, out);
    out << "\n";
  }

  // member: latctrlagctrltqupprlim
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latctrlagctrltqupprlim: ";
    rosidl_generator_traits::value_to_yaml(msg.latctrlagctrltqupprlim, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ADASFunctionStatusIntra & msg, bool use_flow_style = false)
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

}  // namespace deva_function_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_function_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_function_msgs::msg::ADASFunctionStatusIntra & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::ADASFunctionStatusIntra & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::ADASFunctionStatusIntra>()
{
  return "deva_function_msgs::msg::ADASFunctionStatusIntra";
}

template<>
inline const char * name<deva_function_msgs::msg::ADASFunctionStatusIntra>()
{
  return "deva_function_msgs/msg/ADASFunctionStatusIntra";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::ADASFunctionStatusIntra>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::ADASFunctionStatusIntra>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_function_msgs::msg::ADASFunctionStatusIntra>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_STATUS_INTRA__TRAITS_HPP_
