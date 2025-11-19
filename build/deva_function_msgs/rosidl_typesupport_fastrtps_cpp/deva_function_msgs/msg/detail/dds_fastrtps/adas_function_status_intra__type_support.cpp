// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_function_msgs:msg/ADASFunctionStatusIntra.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/adas_function_status_intra__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_function_msgs/msg/detail/adas_function_status_intra__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace deva_common_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_common_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_common_msgs::msg::Header &);
size_t get_serialized_size(
  const deva_common_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_common_msgs


namespace deva_function_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_serialize(
  const deva_function_msgs::msg::ADASFunctionStatusIntra & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: acttnasylatctrlmodreq
  cdr << ros_message.acttnasylatctrlmodreq;
  // Member: acttnasysftyenadecelbydbs
  cdr << ros_message.acttnasysftyenadecelbydbs;
  // Member: acttnasysftyhwlreq
  cdr << ros_message.acttnasysftyhwlreq;
  // Member: acttnasysftystandstillreq
  cdr << ros_message.acttnasysftystandstillreq;
  // Member: acttnasysteerwhlhptcwarnreq
  cdr << ros_message.acttnasysteerwhlhptcwarnreq;
  // Member: acttnbrkhptcwarnreqforautdrv
  cdr << ros_message.acttnbrkhptcwarnreqforautdrv;
  // Member: acttnbrkprecactv
  cdr << ros_message.acttnbrkprecactv;
  // Member: acttncllsnthreat
  cdr << ros_message.acttncllsnthreat;
  // Member: hmiasyemgylanekeepaid
  cdr << ros_message.hmiasyemgylanekeepaid;
  // Member: hmiasyemgylanekeepaidsts
  cdr << ros_message.hmiasyemgylanekeepaidsts;
  // Member: hmiasylanechgwarnmod
  cdr << ros_message.hmiasylanechgwarnmod;
  // Member: hmiasylanekeepaidsts
  cdr << ros_message.hmiasylanekeepaidsts;
  // Member: hmiasyobjtype
  cdr << ros_message.hmiasyobjtype;
  // Member: hmiasysteerapplyrqrd
  cdr << ros_message.hmiasysteerapplyrqrd;
  // Member: hmiasywarnforsteercncl
  cdr << ros_message.hmiasywarnforsteercncl;
  // Member: hmicllsnaidpost
  cdr << ros_message.hmicllsnaidpost;
  // Member: hmicllsnfwdwarn
  cdr << ros_message.hmicllsnfwdwarn;
  // Member: hmicllsnmtgtnfaultsts
  cdr << ros_message.hmicllsnmtgtnfaultsts;
  // Member: hmicllsnmtgtnfctsts
  cdr << ros_message.hmicllsnmtgtnfctsts;
  // Member: hmicllsnmtgtnwarnsts
  cdr << ros_message.hmicllsnmtgtnwarnsts;
  // Member: hmictryforroadsgninfo
  cdr << ros_message.hmictryforroadsgninfo;
  // Member: hmiintvandwarnmodinfosts
  cdr << ros_message.hmiintvandwarnmodinfosts;
  // Member: hmilanechgwarnsts
  cdr << ros_message.hmilanechgwarnsts;
  // Member: hmilanekeepaidinfosts
  cdr << ros_message.hmilanekeepaidinfosts;
  // Member: hminontrvrsbleroadedgeonleft
  cdr << ros_message.hminontrvrsbleroadedgeonleft;
  // Member: hminontrvrsbleroadedgeonright
  cdr << ros_message.hminontrvrsbleroadedgeonright;
  // Member: hmioffsforspdwarnsetgsts
  cdr << ros_message.hmioffsforspdwarnsetgsts;
  // Member: hmiroadmiscsgninfosts
  cdr << ros_message.hmiroadmiscsgninfosts;
  // Member: hmiroadsgninfosts
  cdr << ros_message.hmiroadsgninfosts;
  // Member: hmispdalrmactvsts
  cdr << ros_message.hmispdalrmactvsts;
  // Member: hmitrfcinfomiscfirst
  cdr << ros_message.hmitrfcinfomiscfirst;
  // Member: hmiwarnforasyemgylanekeepaid
  cdr << ros_message.hmiwarnforasyemgylanekeepaid;
  // Member: hmicllsnmtgtnonoffsts
  cdr << ros_message.hmicllsnmtgtnonoffsts;
  // Member: hmidooropenwarnon1
  cdr << ros_message.hmidooropenwarnon1;
  // Member: hmidooropenwarnleindcn
  cdr << ros_message.hmidooropenwarnleindcn;
  // Member: hmidooropenwarnriindcn
  cdr << ros_message.hmidooropenwarnriindcn;
  // Member: hmilettclv
  cdr << ros_message.hmilettclv;
  // Member: hmirittclv
  cdr << ros_message.hmirittclv;
  // Member: hmifctaindcnle
  cdr << ros_message.hmifctaindcnle;
  // Member: hmifctaindcnri
  cdr << ros_message.hmifctaindcnri;
  // Member: hmilcmaindcnle
  cdr << ros_message.hmilcmaindcnle;
  // Member: hmilcmaindcnri
  cdr << ros_message.hmilcmaindcnri;
  // Member: hmilcmaon
  cdr << ros_message.hmilcmaon;
  // Member: hmilcmaaudwarn
  cdr << ros_message.hmilcmaaudwarn;
  // Member: hmirsdssyssts
  cdr << ros_message.hmirsdssyssts;
  // Member: hmirctaindcnle
  cdr << ros_message.hmirctaindcnle;
  // Member: hmirctaindcnri
  cdr << ros_message.hmirctaindcnri;
  // Member: hmictraon1
  cdr << ros_message.hmictraon1;
  // Member: hmicllsnwarnreindcn
  cdr << ros_message.hmicllsnwarnreindcn;
  // Member: hmicllsnwarnreon1
  cdr << ros_message.hmicllsnwarnreon1;
  // Member: hmircwmlireq
  cdr << ros_message.hmircwmlireq;
  // Member: acttnrctabrkreq
  cdr << ros_message.acttnrctabrkreq;
  // Member: acttnrctabrkreqqm
  cdr << ros_message.acttnrctabrkreqqm;
  // Member: acttnrcwmbrkreq
  cdr << ros_message.acttnrcwmbrkreq;
  // Member: acttnrcwmbrkreqqm
  cdr << ros_message.acttnrcwmbrkreqqm;
  // Member: hmiasyemgymanoeuvreaidsts
  cdr << ros_message.hmiasyemgymanoeuvreaidsts;
  // Member: hmicllsnaidpostema
  cdr << ros_message.hmicllsnaidpostema;
  // Member: hmitrfcliinfo
  cdr << ros_message.hmitrfcliinfo;
  // Member: hmitrfclists
  cdr << ros_message.hmitrfclists;
  // Member: hmitrfcliwarntypsts
  cdr << ros_message.hmitrfcliwarntypsts;
  // Member: hmiuturnlight
  cdr << ros_message.hmiuturnlight;
  // Member: hmitrfcliinfoleft
  cdr << ros_message.hmitrfcliinfoleft;
  // Member: hmitrfcliinforight
  cdr << ros_message.hmitrfcliinforight;
  // Member: hmiaebtriggerobjectid
  cdr << ros_message.hmiaebtriggerobjectid;
  // Member: hmielkatriggerobjectid
  cdr << ros_message.hmielkatriggerobjectid;
  // Member: hmifctarighttriggerobjectid
  cdr << ros_message.hmifctarighttriggerobjectid;
  // Member: hmifctalefttriggerobjectid
  cdr << ros_message.hmifctalefttriggerobjectid;
  // Member: hmiematriggerobjectid
  cdr << ros_message.hmiematriggerobjectid;
  // Member: hmirctarighttriggerobjectid
  cdr << ros_message.hmirctarighttriggerobjectid;
  // Member: hmirctalefttriggerobjectid
  cdr << ros_message.hmirctalefttriggerobjectid;
  // Member: hmitrfclichg
  cdr << ros_message.hmitrfclichg;
  // Member: hmifcwtriggerobjectid
  cdr << ros_message.hmifcwtriggerobjectid;
  // Member: lanekeepaidlaneinfo
  cdr << ros_message.lanekeepaidlaneinfo;
  // Member: asyemgylanekeepaidlaneinfo
  cdr << ros_message.asyemgylanekeepaidlaneinfo;
  // Member: hmireserve1
  cdr << ros_message.hmireserve1;
  // Member: hmireserve2
  cdr << ros_message.hmireserve2;
  // Member: hmireserve3
  cdr << ros_message.hmireserve3;
  // Member: hmireserve4
  cdr << ros_message.hmireserve4;
  // Member: hmireserve5
  cdr << ros_message.hmireserve5;
  // Member: hmireserve6
  cdr << ros_message.hmireserve6;
  // Member: hmireserve7
  cdr << ros_message.hmireserve7;
  // Member: hmireserve8
  cdr << ros_message.hmireserve8;
  // Member: asypinionagreq
  cdr << ros_message.asypinionagreq;
  // Member: latctrlagctrltqlowrlim
  cdr << ros_message.latctrlagctrltqlowrlim;
  // Member: latctrlagctrltqupprlim
  cdr << ros_message.latctrlagctrltqupprlim;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_function_msgs::msg::ADASFunctionStatusIntra & ros_message)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: acttnasylatctrlmodreq
  cdr >> ros_message.acttnasylatctrlmodreq;

  // Member: acttnasysftyenadecelbydbs
  cdr >> ros_message.acttnasysftyenadecelbydbs;

  // Member: acttnasysftyhwlreq
  cdr >> ros_message.acttnasysftyhwlreq;

  // Member: acttnasysftystandstillreq
  cdr >> ros_message.acttnasysftystandstillreq;

  // Member: acttnasysteerwhlhptcwarnreq
  cdr >> ros_message.acttnasysteerwhlhptcwarnreq;

  // Member: acttnbrkhptcwarnreqforautdrv
  cdr >> ros_message.acttnbrkhptcwarnreqforautdrv;

  // Member: acttnbrkprecactv
  cdr >> ros_message.acttnbrkprecactv;

  // Member: acttncllsnthreat
  cdr >> ros_message.acttncllsnthreat;

  // Member: hmiasyemgylanekeepaid
  cdr >> ros_message.hmiasyemgylanekeepaid;

  // Member: hmiasyemgylanekeepaidsts
  cdr >> ros_message.hmiasyemgylanekeepaidsts;

  // Member: hmiasylanechgwarnmod
  cdr >> ros_message.hmiasylanechgwarnmod;

  // Member: hmiasylanekeepaidsts
  cdr >> ros_message.hmiasylanekeepaidsts;

  // Member: hmiasyobjtype
  cdr >> ros_message.hmiasyobjtype;

  // Member: hmiasysteerapplyrqrd
  cdr >> ros_message.hmiasysteerapplyrqrd;

  // Member: hmiasywarnforsteercncl
  cdr >> ros_message.hmiasywarnforsteercncl;

  // Member: hmicllsnaidpost
  cdr >> ros_message.hmicllsnaidpost;

  // Member: hmicllsnfwdwarn
  cdr >> ros_message.hmicllsnfwdwarn;

  // Member: hmicllsnmtgtnfaultsts
  cdr >> ros_message.hmicllsnmtgtnfaultsts;

  // Member: hmicllsnmtgtnfctsts
  cdr >> ros_message.hmicllsnmtgtnfctsts;

  // Member: hmicllsnmtgtnwarnsts
  cdr >> ros_message.hmicllsnmtgtnwarnsts;

  // Member: hmictryforroadsgninfo
  cdr >> ros_message.hmictryforroadsgninfo;

  // Member: hmiintvandwarnmodinfosts
  cdr >> ros_message.hmiintvandwarnmodinfosts;

  // Member: hmilanechgwarnsts
  cdr >> ros_message.hmilanechgwarnsts;

  // Member: hmilanekeepaidinfosts
  cdr >> ros_message.hmilanekeepaidinfosts;

  // Member: hminontrvrsbleroadedgeonleft
  cdr >> ros_message.hminontrvrsbleroadedgeonleft;

  // Member: hminontrvrsbleroadedgeonright
  cdr >> ros_message.hminontrvrsbleroadedgeonright;

  // Member: hmioffsforspdwarnsetgsts
  cdr >> ros_message.hmioffsforspdwarnsetgsts;

  // Member: hmiroadmiscsgninfosts
  cdr >> ros_message.hmiroadmiscsgninfosts;

  // Member: hmiroadsgninfosts
  cdr >> ros_message.hmiroadsgninfosts;

  // Member: hmispdalrmactvsts
  cdr >> ros_message.hmispdalrmactvsts;

  // Member: hmitrfcinfomiscfirst
  cdr >> ros_message.hmitrfcinfomiscfirst;

  // Member: hmiwarnforasyemgylanekeepaid
  cdr >> ros_message.hmiwarnforasyemgylanekeepaid;

  // Member: hmicllsnmtgtnonoffsts
  cdr >> ros_message.hmicllsnmtgtnonoffsts;

  // Member: hmidooropenwarnon1
  cdr >> ros_message.hmidooropenwarnon1;

  // Member: hmidooropenwarnleindcn
  cdr >> ros_message.hmidooropenwarnleindcn;

  // Member: hmidooropenwarnriindcn
  cdr >> ros_message.hmidooropenwarnriindcn;

  // Member: hmilettclv
  cdr >> ros_message.hmilettclv;

  // Member: hmirittclv
  cdr >> ros_message.hmirittclv;

  // Member: hmifctaindcnle
  cdr >> ros_message.hmifctaindcnle;

  // Member: hmifctaindcnri
  cdr >> ros_message.hmifctaindcnri;

  // Member: hmilcmaindcnle
  cdr >> ros_message.hmilcmaindcnle;

  // Member: hmilcmaindcnri
  cdr >> ros_message.hmilcmaindcnri;

  // Member: hmilcmaon
  cdr >> ros_message.hmilcmaon;

  // Member: hmilcmaaudwarn
  cdr >> ros_message.hmilcmaaudwarn;

  // Member: hmirsdssyssts
  cdr >> ros_message.hmirsdssyssts;

  // Member: hmirctaindcnle
  cdr >> ros_message.hmirctaindcnle;

  // Member: hmirctaindcnri
  cdr >> ros_message.hmirctaindcnri;

  // Member: hmictraon1
  cdr >> ros_message.hmictraon1;

  // Member: hmicllsnwarnreindcn
  cdr >> ros_message.hmicllsnwarnreindcn;

  // Member: hmicllsnwarnreon1
  cdr >> ros_message.hmicllsnwarnreon1;

  // Member: hmircwmlireq
  cdr >> ros_message.hmircwmlireq;

  // Member: acttnrctabrkreq
  cdr >> ros_message.acttnrctabrkreq;

  // Member: acttnrctabrkreqqm
  cdr >> ros_message.acttnrctabrkreqqm;

  // Member: acttnrcwmbrkreq
  cdr >> ros_message.acttnrcwmbrkreq;

  // Member: acttnrcwmbrkreqqm
  cdr >> ros_message.acttnrcwmbrkreqqm;

  // Member: hmiasyemgymanoeuvreaidsts
  cdr >> ros_message.hmiasyemgymanoeuvreaidsts;

  // Member: hmicllsnaidpostema
  cdr >> ros_message.hmicllsnaidpostema;

  // Member: hmitrfcliinfo
  cdr >> ros_message.hmitrfcliinfo;

  // Member: hmitrfclists
  cdr >> ros_message.hmitrfclists;

  // Member: hmitrfcliwarntypsts
  cdr >> ros_message.hmitrfcliwarntypsts;

  // Member: hmiuturnlight
  cdr >> ros_message.hmiuturnlight;

  // Member: hmitrfcliinfoleft
  cdr >> ros_message.hmitrfcliinfoleft;

  // Member: hmitrfcliinforight
  cdr >> ros_message.hmitrfcliinforight;

  // Member: hmiaebtriggerobjectid
  cdr >> ros_message.hmiaebtriggerobjectid;

  // Member: hmielkatriggerobjectid
  cdr >> ros_message.hmielkatriggerobjectid;

  // Member: hmifctarighttriggerobjectid
  cdr >> ros_message.hmifctarighttriggerobjectid;

  // Member: hmifctalefttriggerobjectid
  cdr >> ros_message.hmifctalefttriggerobjectid;

  // Member: hmiematriggerobjectid
  cdr >> ros_message.hmiematriggerobjectid;

  // Member: hmirctarighttriggerobjectid
  cdr >> ros_message.hmirctarighttriggerobjectid;

  // Member: hmirctalefttriggerobjectid
  cdr >> ros_message.hmirctalefttriggerobjectid;

  // Member: hmitrfclichg
  cdr >> ros_message.hmitrfclichg;

  // Member: hmifcwtriggerobjectid
  cdr >> ros_message.hmifcwtriggerobjectid;

  // Member: lanekeepaidlaneinfo
  cdr >> ros_message.lanekeepaidlaneinfo;

  // Member: asyemgylanekeepaidlaneinfo
  cdr >> ros_message.asyemgylanekeepaidlaneinfo;

  // Member: hmireserve1
  cdr >> ros_message.hmireserve1;

  // Member: hmireserve2
  cdr >> ros_message.hmireserve2;

  // Member: hmireserve3
  cdr >> ros_message.hmireserve3;

  // Member: hmireserve4
  cdr >> ros_message.hmireserve4;

  // Member: hmireserve5
  cdr >> ros_message.hmireserve5;

  // Member: hmireserve6
  cdr >> ros_message.hmireserve6;

  // Member: hmireserve7
  cdr >> ros_message.hmireserve7;

  // Member: hmireserve8
  cdr >> ros_message.hmireserve8;

  // Member: asypinionagreq
  cdr >> ros_message.asypinionagreq;

  // Member: latctrlagctrltqlowrlim
  cdr >> ros_message.latctrlagctrltqlowrlim;

  // Member: latctrlagctrltqupprlim
  cdr >> ros_message.latctrlagctrltqupprlim;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
get_serialized_size(
  const deva_function_msgs::msg::ADASFunctionStatusIntra & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    deva_common_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: acttnasylatctrlmodreq
  {
    size_t item_size = sizeof(ros_message.acttnasylatctrlmodreq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acttnasysftyenadecelbydbs
  {
    size_t item_size = sizeof(ros_message.acttnasysftyenadecelbydbs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acttnasysftyhwlreq
  {
    size_t item_size = sizeof(ros_message.acttnasysftyhwlreq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acttnasysftystandstillreq
  {
    size_t item_size = sizeof(ros_message.acttnasysftystandstillreq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acttnasysteerwhlhptcwarnreq
  {
    size_t item_size = sizeof(ros_message.acttnasysteerwhlhptcwarnreq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acttnbrkhptcwarnreqforautdrv
  {
    size_t item_size = sizeof(ros_message.acttnbrkhptcwarnreqforautdrv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acttnbrkprecactv
  {
    size_t item_size = sizeof(ros_message.acttnbrkprecactv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acttncllsnthreat
  {
    size_t item_size = sizeof(ros_message.acttncllsnthreat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmiasyemgylanekeepaid
  {
    size_t item_size = sizeof(ros_message.hmiasyemgylanekeepaid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmiasyemgylanekeepaidsts
  {
    size_t item_size = sizeof(ros_message.hmiasyemgylanekeepaidsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmiasylanechgwarnmod
  {
    size_t item_size = sizeof(ros_message.hmiasylanechgwarnmod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmiasylanekeepaidsts
  {
    size_t item_size = sizeof(ros_message.hmiasylanekeepaidsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmiasyobjtype
  {
    size_t item_size = sizeof(ros_message.hmiasyobjtype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmiasysteerapplyrqrd
  {
    size_t item_size = sizeof(ros_message.hmiasysteerapplyrqrd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmiasywarnforsteercncl
  {
    size_t item_size = sizeof(ros_message.hmiasywarnforsteercncl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmicllsnaidpost
  {
    size_t item_size = sizeof(ros_message.hmicllsnaidpost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmicllsnfwdwarn
  {
    size_t item_size = sizeof(ros_message.hmicllsnfwdwarn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmicllsnmtgtnfaultsts
  {
    size_t item_size = sizeof(ros_message.hmicllsnmtgtnfaultsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmicllsnmtgtnfctsts
  {
    size_t item_size = sizeof(ros_message.hmicllsnmtgtnfctsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmicllsnmtgtnwarnsts
  {
    size_t item_size = sizeof(ros_message.hmicllsnmtgtnwarnsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmictryforroadsgninfo
  {
    size_t item_size = sizeof(ros_message.hmictryforroadsgninfo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmiintvandwarnmodinfosts
  {
    size_t item_size = sizeof(ros_message.hmiintvandwarnmodinfosts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmilanechgwarnsts
  {
    size_t item_size = sizeof(ros_message.hmilanechgwarnsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmilanekeepaidinfosts
  {
    size_t item_size = sizeof(ros_message.hmilanekeepaidinfosts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hminontrvrsbleroadedgeonleft
  {
    size_t item_size = sizeof(ros_message.hminontrvrsbleroadedgeonleft);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hminontrvrsbleroadedgeonright
  {
    size_t item_size = sizeof(ros_message.hminontrvrsbleroadedgeonright);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmioffsforspdwarnsetgsts
  {
    size_t item_size = sizeof(ros_message.hmioffsforspdwarnsetgsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmiroadmiscsgninfosts
  {
    size_t item_size = sizeof(ros_message.hmiroadmiscsgninfosts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmiroadsgninfosts
  {
    size_t item_size = sizeof(ros_message.hmiroadsgninfosts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmispdalrmactvsts
  {
    size_t item_size = sizeof(ros_message.hmispdalrmactvsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmitrfcinfomiscfirst
  {
    size_t item_size = sizeof(ros_message.hmitrfcinfomiscfirst);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmiwarnforasyemgylanekeepaid
  {
    size_t item_size = sizeof(ros_message.hmiwarnforasyemgylanekeepaid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmicllsnmtgtnonoffsts
  {
    size_t item_size = sizeof(ros_message.hmicllsnmtgtnonoffsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmidooropenwarnon1
  {
    size_t item_size = sizeof(ros_message.hmidooropenwarnon1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmidooropenwarnleindcn
  {
    size_t item_size = sizeof(ros_message.hmidooropenwarnleindcn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmidooropenwarnriindcn
  {
    size_t item_size = sizeof(ros_message.hmidooropenwarnriindcn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmilettclv
  {
    size_t item_size = sizeof(ros_message.hmilettclv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmirittclv
  {
    size_t item_size = sizeof(ros_message.hmirittclv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmifctaindcnle
  {
    size_t item_size = sizeof(ros_message.hmifctaindcnle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmifctaindcnri
  {
    size_t item_size = sizeof(ros_message.hmifctaindcnri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmilcmaindcnle
  {
    size_t item_size = sizeof(ros_message.hmilcmaindcnle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmilcmaindcnri
  {
    size_t item_size = sizeof(ros_message.hmilcmaindcnri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmilcmaon
  {
    size_t item_size = sizeof(ros_message.hmilcmaon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmilcmaaudwarn
  {
    size_t item_size = sizeof(ros_message.hmilcmaaudwarn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmirsdssyssts
  {
    size_t item_size = sizeof(ros_message.hmirsdssyssts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmirctaindcnle
  {
    size_t item_size = sizeof(ros_message.hmirctaindcnle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmirctaindcnri
  {
    size_t item_size = sizeof(ros_message.hmirctaindcnri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmictraon1
  {
    size_t item_size = sizeof(ros_message.hmictraon1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmicllsnwarnreindcn
  {
    size_t item_size = sizeof(ros_message.hmicllsnwarnreindcn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmicllsnwarnreon1
  {
    size_t item_size = sizeof(ros_message.hmicllsnwarnreon1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmircwmlireq
  {
    size_t item_size = sizeof(ros_message.hmircwmlireq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acttnrctabrkreq
  {
    size_t item_size = sizeof(ros_message.acttnrctabrkreq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acttnrctabrkreqqm
  {
    size_t item_size = sizeof(ros_message.acttnrctabrkreqqm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acttnrcwmbrkreq
  {
    size_t item_size = sizeof(ros_message.acttnrcwmbrkreq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acttnrcwmbrkreqqm
  {
    size_t item_size = sizeof(ros_message.acttnrcwmbrkreqqm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmiasyemgymanoeuvreaidsts
  {
    size_t item_size = sizeof(ros_message.hmiasyemgymanoeuvreaidsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmicllsnaidpostema
  {
    size_t item_size = sizeof(ros_message.hmicllsnaidpostema);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmitrfcliinfo
  {
    size_t item_size = sizeof(ros_message.hmitrfcliinfo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmitrfclists
  {
    size_t item_size = sizeof(ros_message.hmitrfclists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmitrfcliwarntypsts
  {
    size_t item_size = sizeof(ros_message.hmitrfcliwarntypsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmiuturnlight
  {
    size_t item_size = sizeof(ros_message.hmiuturnlight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmitrfcliinfoleft
  {
    size_t item_size = sizeof(ros_message.hmitrfcliinfoleft);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmitrfcliinforight
  {
    size_t item_size = sizeof(ros_message.hmitrfcliinforight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmiaebtriggerobjectid
  {
    size_t item_size = sizeof(ros_message.hmiaebtriggerobjectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmielkatriggerobjectid
  {
    size_t item_size = sizeof(ros_message.hmielkatriggerobjectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmifctarighttriggerobjectid
  {
    size_t item_size = sizeof(ros_message.hmifctarighttriggerobjectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmifctalefttriggerobjectid
  {
    size_t item_size = sizeof(ros_message.hmifctalefttriggerobjectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmiematriggerobjectid
  {
    size_t item_size = sizeof(ros_message.hmiematriggerobjectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmirctarighttriggerobjectid
  {
    size_t item_size = sizeof(ros_message.hmirctarighttriggerobjectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmirctalefttriggerobjectid
  {
    size_t item_size = sizeof(ros_message.hmirctalefttriggerobjectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmitrfclichg
  {
    size_t item_size = sizeof(ros_message.hmitrfclichg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmifcwtriggerobjectid
  {
    size_t item_size = sizeof(ros_message.hmifcwtriggerobjectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lanekeepaidlaneinfo
  {
    size_t item_size = sizeof(ros_message.lanekeepaidlaneinfo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asyemgylanekeepaidlaneinfo
  {
    size_t item_size = sizeof(ros_message.asyemgylanekeepaidlaneinfo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmireserve1
  {
    size_t item_size = sizeof(ros_message.hmireserve1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmireserve2
  {
    size_t item_size = sizeof(ros_message.hmireserve2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmireserve3
  {
    size_t item_size = sizeof(ros_message.hmireserve3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmireserve4
  {
    size_t item_size = sizeof(ros_message.hmireserve4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmireserve5
  {
    size_t item_size = sizeof(ros_message.hmireserve5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmireserve6
  {
    size_t item_size = sizeof(ros_message.hmireserve6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmireserve7
  {
    size_t item_size = sizeof(ros_message.hmireserve7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmireserve8
  {
    size_t item_size = sizeof(ros_message.hmireserve8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asypinionagreq
  {
    size_t item_size = sizeof(ros_message.asypinionagreq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: latctrlagctrltqlowrlim
  {
    size_t item_size = sizeof(ros_message.latctrlagctrltqlowrlim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: latctrlagctrltqupprlim
  {
    size_t item_size = sizeof(ros_message.latctrlagctrltqupprlim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
max_serialized_size_ADASFunctionStatusIntra(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_common_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: acttnasylatctrlmodreq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acttnasysftyenadecelbydbs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acttnasysftyhwlreq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acttnasysftystandstillreq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acttnasysteerwhlhptcwarnreq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acttnbrkhptcwarnreqforautdrv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acttnbrkprecactv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acttncllsnthreat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmiasyemgylanekeepaid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmiasyemgylanekeepaidsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmiasylanechgwarnmod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmiasylanekeepaidsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmiasyobjtype
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmiasysteerapplyrqrd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmiasywarnforsteercncl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmicllsnaidpost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmicllsnfwdwarn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmicllsnmtgtnfaultsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmicllsnmtgtnfctsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmicllsnmtgtnwarnsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmictryforroadsgninfo
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmiintvandwarnmodinfosts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmilanechgwarnsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmilanekeepaidinfosts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hminontrvrsbleroadedgeonleft
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hminontrvrsbleroadedgeonright
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmioffsforspdwarnsetgsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmiroadmiscsgninfosts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmiroadsgninfosts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmispdalrmactvsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmitrfcinfomiscfirst
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmiwarnforasyemgylanekeepaid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmicllsnmtgtnonoffsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmidooropenwarnon1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmidooropenwarnleindcn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmidooropenwarnriindcn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmilettclv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmirittclv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmifctaindcnle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmifctaindcnri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmilcmaindcnle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmilcmaindcnri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmilcmaon
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmilcmaaudwarn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmirsdssyssts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmirctaindcnle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmirctaindcnri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmictraon1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmicllsnwarnreindcn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmicllsnwarnreon1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmircwmlireq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acttnrctabrkreq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acttnrctabrkreqqm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acttnrcwmbrkreq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: acttnrcwmbrkreqqm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmiasyemgymanoeuvreaidsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmicllsnaidpostema
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmitrfcliinfo
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmitrfclists
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmitrfcliwarntypsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmiuturnlight
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmitrfcliinfoleft
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmitrfcliinforight
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmiaebtriggerobjectid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmielkatriggerobjectid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmifctarighttriggerobjectid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmifctalefttriggerobjectid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmiematriggerobjectid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmirctarighttriggerobjectid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmirctalefttriggerobjectid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmitrfclichg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmifcwtriggerobjectid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lanekeepaidlaneinfo
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asyemgylanekeepaidlaneinfo
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmireserve1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: hmireserve2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: hmireserve3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: hmireserve4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: hmireserve5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hmireserve6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hmireserve7
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hmireserve8
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: asypinionagreq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: latctrlagctrltqlowrlim
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: latctrlagctrltqupprlim
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_function_msgs::msg::ADASFunctionStatusIntra;
    is_plain =
      (
      offsetof(DataType, latctrlagctrltqupprlim) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ADASFunctionStatusIntra__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::ADASFunctionStatusIntra *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ADASFunctionStatusIntra__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_function_msgs::msg::ADASFunctionStatusIntra *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ADASFunctionStatusIntra__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::ADASFunctionStatusIntra *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ADASFunctionStatusIntra__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ADASFunctionStatusIntra(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ADASFunctionStatusIntra__callbacks = {
  "deva_function_msgs::msg",
  "ADASFunctionStatusIntra",
  _ADASFunctionStatusIntra__cdr_serialize,
  _ADASFunctionStatusIntra__cdr_deserialize,
  _ADASFunctionStatusIntra__get_serialized_size,
  _ADASFunctionStatusIntra__max_serialized_size
};

static rosidl_message_type_support_t _ADASFunctionStatusIntra__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ADASFunctionStatusIntra__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_function_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_function_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_function_msgs::msg::ADASFunctionStatusIntra>()
{
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_ADASFunctionStatusIntra__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_function_msgs, msg, ADASFunctionStatusIntra)() {
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_ADASFunctionStatusIntra__handle;
}

#ifdef __cplusplus
}
#endif
