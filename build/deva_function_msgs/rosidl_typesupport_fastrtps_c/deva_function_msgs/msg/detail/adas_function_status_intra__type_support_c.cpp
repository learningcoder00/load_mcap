// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_function_msgs:msg/ADASFunctionStatusIntra.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/adas_function_status_intra__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_function_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_function_msgs/msg/detail/adas_function_status_intra__struct.h"
#include "deva_function_msgs/msg/detail/adas_function_status_intra__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "deva_common_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_function_msgs
size_t get_serialized_size_deva_common_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_function_msgs
size_t max_serialized_size_deva_common_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_function_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header)();


using _ADASFunctionStatusIntra__ros_msg_type = deva_function_msgs__msg__ADASFunctionStatusIntra;

static bool _ADASFunctionStatusIntra__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ADASFunctionStatusIntra__ros_msg_type * ros_message = static_cast<const _ADASFunctionStatusIntra__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: acttnasylatctrlmodreq
  {
    cdr << ros_message->acttnasylatctrlmodreq;
  }

  // Field name: acttnasysftyenadecelbydbs
  {
    cdr << ros_message->acttnasysftyenadecelbydbs;
  }

  // Field name: acttnasysftyhwlreq
  {
    cdr << ros_message->acttnasysftyhwlreq;
  }

  // Field name: acttnasysftystandstillreq
  {
    cdr << ros_message->acttnasysftystandstillreq;
  }

  // Field name: acttnasysteerwhlhptcwarnreq
  {
    cdr << ros_message->acttnasysteerwhlhptcwarnreq;
  }

  // Field name: acttnbrkhptcwarnreqforautdrv
  {
    cdr << ros_message->acttnbrkhptcwarnreqforautdrv;
  }

  // Field name: acttnbrkprecactv
  {
    cdr << ros_message->acttnbrkprecactv;
  }

  // Field name: acttncllsnthreat
  {
    cdr << ros_message->acttncllsnthreat;
  }

  // Field name: hmiasyemgylanekeepaid
  {
    cdr << ros_message->hmiasyemgylanekeepaid;
  }

  // Field name: hmiasyemgylanekeepaidsts
  {
    cdr << ros_message->hmiasyemgylanekeepaidsts;
  }

  // Field name: hmiasylanechgwarnmod
  {
    cdr << ros_message->hmiasylanechgwarnmod;
  }

  // Field name: hmiasylanekeepaidsts
  {
    cdr << ros_message->hmiasylanekeepaidsts;
  }

  // Field name: hmiasyobjtype
  {
    cdr << ros_message->hmiasyobjtype;
  }

  // Field name: hmiasysteerapplyrqrd
  {
    cdr << ros_message->hmiasysteerapplyrqrd;
  }

  // Field name: hmiasywarnforsteercncl
  {
    cdr << ros_message->hmiasywarnforsteercncl;
  }

  // Field name: hmicllsnaidpost
  {
    cdr << ros_message->hmicllsnaidpost;
  }

  // Field name: hmicllsnfwdwarn
  {
    cdr << ros_message->hmicllsnfwdwarn;
  }

  // Field name: hmicllsnmtgtnfaultsts
  {
    cdr << ros_message->hmicllsnmtgtnfaultsts;
  }

  // Field name: hmicllsnmtgtnfctsts
  {
    cdr << ros_message->hmicllsnmtgtnfctsts;
  }

  // Field name: hmicllsnmtgtnwarnsts
  {
    cdr << ros_message->hmicllsnmtgtnwarnsts;
  }

  // Field name: hmictryforroadsgninfo
  {
    cdr << ros_message->hmictryforroadsgninfo;
  }

  // Field name: hmiintvandwarnmodinfosts
  {
    cdr << ros_message->hmiintvandwarnmodinfosts;
  }

  // Field name: hmilanechgwarnsts
  {
    cdr << ros_message->hmilanechgwarnsts;
  }

  // Field name: hmilanekeepaidinfosts
  {
    cdr << ros_message->hmilanekeepaidinfosts;
  }

  // Field name: hminontrvrsbleroadedgeonleft
  {
    cdr << ros_message->hminontrvrsbleroadedgeonleft;
  }

  // Field name: hminontrvrsbleroadedgeonright
  {
    cdr << ros_message->hminontrvrsbleroadedgeonright;
  }

  // Field name: hmioffsforspdwarnsetgsts
  {
    cdr << ros_message->hmioffsforspdwarnsetgsts;
  }

  // Field name: hmiroadmiscsgninfosts
  {
    cdr << ros_message->hmiroadmiscsgninfosts;
  }

  // Field name: hmiroadsgninfosts
  {
    cdr << ros_message->hmiroadsgninfosts;
  }

  // Field name: hmispdalrmactvsts
  {
    cdr << ros_message->hmispdalrmactvsts;
  }

  // Field name: hmitrfcinfomiscfirst
  {
    cdr << ros_message->hmitrfcinfomiscfirst;
  }

  // Field name: hmiwarnforasyemgylanekeepaid
  {
    cdr << ros_message->hmiwarnforasyemgylanekeepaid;
  }

  // Field name: hmicllsnmtgtnonoffsts
  {
    cdr << ros_message->hmicllsnmtgtnonoffsts;
  }

  // Field name: hmidooropenwarnon1
  {
    cdr << ros_message->hmidooropenwarnon1;
  }

  // Field name: hmidooropenwarnleindcn
  {
    cdr << ros_message->hmidooropenwarnleindcn;
  }

  // Field name: hmidooropenwarnriindcn
  {
    cdr << ros_message->hmidooropenwarnriindcn;
  }

  // Field name: hmilettclv
  {
    cdr << ros_message->hmilettclv;
  }

  // Field name: hmirittclv
  {
    cdr << ros_message->hmirittclv;
  }

  // Field name: hmifctaindcnle
  {
    cdr << ros_message->hmifctaindcnle;
  }

  // Field name: hmifctaindcnri
  {
    cdr << ros_message->hmifctaindcnri;
  }

  // Field name: hmilcmaindcnle
  {
    cdr << ros_message->hmilcmaindcnle;
  }

  // Field name: hmilcmaindcnri
  {
    cdr << ros_message->hmilcmaindcnri;
  }

  // Field name: hmilcmaon
  {
    cdr << ros_message->hmilcmaon;
  }

  // Field name: hmilcmaaudwarn
  {
    cdr << ros_message->hmilcmaaudwarn;
  }

  // Field name: hmirsdssyssts
  {
    cdr << ros_message->hmirsdssyssts;
  }

  // Field name: hmirctaindcnle
  {
    cdr << ros_message->hmirctaindcnle;
  }

  // Field name: hmirctaindcnri
  {
    cdr << ros_message->hmirctaindcnri;
  }

  // Field name: hmictraon1
  {
    cdr << ros_message->hmictraon1;
  }

  // Field name: hmicllsnwarnreindcn
  {
    cdr << ros_message->hmicllsnwarnreindcn;
  }

  // Field name: hmicllsnwarnreon1
  {
    cdr << ros_message->hmicllsnwarnreon1;
  }

  // Field name: hmircwmlireq
  {
    cdr << ros_message->hmircwmlireq;
  }

  // Field name: acttnrctabrkreq
  {
    cdr << ros_message->acttnrctabrkreq;
  }

  // Field name: acttnrctabrkreqqm
  {
    cdr << ros_message->acttnrctabrkreqqm;
  }

  // Field name: acttnrcwmbrkreq
  {
    cdr << ros_message->acttnrcwmbrkreq;
  }

  // Field name: acttnrcwmbrkreqqm
  {
    cdr << ros_message->acttnrcwmbrkreqqm;
  }

  // Field name: hmiasyemgymanoeuvreaidsts
  {
    cdr << ros_message->hmiasyemgymanoeuvreaidsts;
  }

  // Field name: hmicllsnaidpostema
  {
    cdr << ros_message->hmicllsnaidpostema;
  }

  // Field name: hmitrfcliinfo
  {
    cdr << ros_message->hmitrfcliinfo;
  }

  // Field name: hmitrfclists
  {
    cdr << ros_message->hmitrfclists;
  }

  // Field name: hmitrfcliwarntypsts
  {
    cdr << ros_message->hmitrfcliwarntypsts;
  }

  // Field name: hmiuturnlight
  {
    cdr << ros_message->hmiuturnlight;
  }

  // Field name: hmitrfcliinfoleft
  {
    cdr << ros_message->hmitrfcliinfoleft;
  }

  // Field name: hmitrfcliinforight
  {
    cdr << ros_message->hmitrfcliinforight;
  }

  // Field name: hmiaebtriggerobjectid
  {
    cdr << ros_message->hmiaebtriggerobjectid;
  }

  // Field name: hmielkatriggerobjectid
  {
    cdr << ros_message->hmielkatriggerobjectid;
  }

  // Field name: hmifctarighttriggerobjectid
  {
    cdr << ros_message->hmifctarighttriggerobjectid;
  }

  // Field name: hmifctalefttriggerobjectid
  {
    cdr << ros_message->hmifctalefttriggerobjectid;
  }

  // Field name: hmiematriggerobjectid
  {
    cdr << ros_message->hmiematriggerobjectid;
  }

  // Field name: hmirctarighttriggerobjectid
  {
    cdr << ros_message->hmirctarighttriggerobjectid;
  }

  // Field name: hmirctalefttriggerobjectid
  {
    cdr << ros_message->hmirctalefttriggerobjectid;
  }

  // Field name: hmitrfclichg
  {
    cdr << ros_message->hmitrfclichg;
  }

  // Field name: hmifcwtriggerobjectid
  {
    cdr << ros_message->hmifcwtriggerobjectid;
  }

  // Field name: lanekeepaidlaneinfo
  {
    cdr << ros_message->lanekeepaidlaneinfo;
  }

  // Field name: asyemgylanekeepaidlaneinfo
  {
    cdr << ros_message->asyemgylanekeepaidlaneinfo;
  }

  // Field name: hmireserve1
  {
    cdr << ros_message->hmireserve1;
  }

  // Field name: hmireserve2
  {
    cdr << ros_message->hmireserve2;
  }

  // Field name: hmireserve3
  {
    cdr << ros_message->hmireserve3;
  }

  // Field name: hmireserve4
  {
    cdr << ros_message->hmireserve4;
  }

  // Field name: hmireserve5
  {
    cdr << ros_message->hmireserve5;
  }

  // Field name: hmireserve6
  {
    cdr << ros_message->hmireserve6;
  }

  // Field name: hmireserve7
  {
    cdr << ros_message->hmireserve7;
  }

  // Field name: hmireserve8
  {
    cdr << ros_message->hmireserve8;
  }

  // Field name: asypinionagreq
  {
    cdr << ros_message->asypinionagreq;
  }

  // Field name: latctrlagctrltqlowrlim
  {
    cdr << ros_message->latctrlagctrltqlowrlim;
  }

  // Field name: latctrlagctrltqupprlim
  {
    cdr << ros_message->latctrlagctrltqupprlim;
  }

  return true;
}

static bool _ADASFunctionStatusIntra__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ADASFunctionStatusIntra__ros_msg_type * ros_message = static_cast<_ADASFunctionStatusIntra__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: acttnasylatctrlmodreq
  {
    cdr >> ros_message->acttnasylatctrlmodreq;
  }

  // Field name: acttnasysftyenadecelbydbs
  {
    cdr >> ros_message->acttnasysftyenadecelbydbs;
  }

  // Field name: acttnasysftyhwlreq
  {
    cdr >> ros_message->acttnasysftyhwlreq;
  }

  // Field name: acttnasysftystandstillreq
  {
    cdr >> ros_message->acttnasysftystandstillreq;
  }

  // Field name: acttnasysteerwhlhptcwarnreq
  {
    cdr >> ros_message->acttnasysteerwhlhptcwarnreq;
  }

  // Field name: acttnbrkhptcwarnreqforautdrv
  {
    cdr >> ros_message->acttnbrkhptcwarnreqforautdrv;
  }

  // Field name: acttnbrkprecactv
  {
    cdr >> ros_message->acttnbrkprecactv;
  }

  // Field name: acttncllsnthreat
  {
    cdr >> ros_message->acttncllsnthreat;
  }

  // Field name: hmiasyemgylanekeepaid
  {
    cdr >> ros_message->hmiasyemgylanekeepaid;
  }

  // Field name: hmiasyemgylanekeepaidsts
  {
    cdr >> ros_message->hmiasyemgylanekeepaidsts;
  }

  // Field name: hmiasylanechgwarnmod
  {
    cdr >> ros_message->hmiasylanechgwarnmod;
  }

  // Field name: hmiasylanekeepaidsts
  {
    cdr >> ros_message->hmiasylanekeepaidsts;
  }

  // Field name: hmiasyobjtype
  {
    cdr >> ros_message->hmiasyobjtype;
  }

  // Field name: hmiasysteerapplyrqrd
  {
    cdr >> ros_message->hmiasysteerapplyrqrd;
  }

  // Field name: hmiasywarnforsteercncl
  {
    cdr >> ros_message->hmiasywarnforsteercncl;
  }

  // Field name: hmicllsnaidpost
  {
    cdr >> ros_message->hmicllsnaidpost;
  }

  // Field name: hmicllsnfwdwarn
  {
    cdr >> ros_message->hmicllsnfwdwarn;
  }

  // Field name: hmicllsnmtgtnfaultsts
  {
    cdr >> ros_message->hmicllsnmtgtnfaultsts;
  }

  // Field name: hmicllsnmtgtnfctsts
  {
    cdr >> ros_message->hmicllsnmtgtnfctsts;
  }

  // Field name: hmicllsnmtgtnwarnsts
  {
    cdr >> ros_message->hmicllsnmtgtnwarnsts;
  }

  // Field name: hmictryforroadsgninfo
  {
    cdr >> ros_message->hmictryforroadsgninfo;
  }

  // Field name: hmiintvandwarnmodinfosts
  {
    cdr >> ros_message->hmiintvandwarnmodinfosts;
  }

  // Field name: hmilanechgwarnsts
  {
    cdr >> ros_message->hmilanechgwarnsts;
  }

  // Field name: hmilanekeepaidinfosts
  {
    cdr >> ros_message->hmilanekeepaidinfosts;
  }

  // Field name: hminontrvrsbleroadedgeonleft
  {
    cdr >> ros_message->hminontrvrsbleroadedgeonleft;
  }

  // Field name: hminontrvrsbleroadedgeonright
  {
    cdr >> ros_message->hminontrvrsbleroadedgeonright;
  }

  // Field name: hmioffsforspdwarnsetgsts
  {
    cdr >> ros_message->hmioffsforspdwarnsetgsts;
  }

  // Field name: hmiroadmiscsgninfosts
  {
    cdr >> ros_message->hmiroadmiscsgninfosts;
  }

  // Field name: hmiroadsgninfosts
  {
    cdr >> ros_message->hmiroadsgninfosts;
  }

  // Field name: hmispdalrmactvsts
  {
    cdr >> ros_message->hmispdalrmactvsts;
  }

  // Field name: hmitrfcinfomiscfirst
  {
    cdr >> ros_message->hmitrfcinfomiscfirst;
  }

  // Field name: hmiwarnforasyemgylanekeepaid
  {
    cdr >> ros_message->hmiwarnforasyemgylanekeepaid;
  }

  // Field name: hmicllsnmtgtnonoffsts
  {
    cdr >> ros_message->hmicllsnmtgtnonoffsts;
  }

  // Field name: hmidooropenwarnon1
  {
    cdr >> ros_message->hmidooropenwarnon1;
  }

  // Field name: hmidooropenwarnleindcn
  {
    cdr >> ros_message->hmidooropenwarnleindcn;
  }

  // Field name: hmidooropenwarnriindcn
  {
    cdr >> ros_message->hmidooropenwarnriindcn;
  }

  // Field name: hmilettclv
  {
    cdr >> ros_message->hmilettclv;
  }

  // Field name: hmirittclv
  {
    cdr >> ros_message->hmirittclv;
  }

  // Field name: hmifctaindcnle
  {
    cdr >> ros_message->hmifctaindcnle;
  }

  // Field name: hmifctaindcnri
  {
    cdr >> ros_message->hmifctaindcnri;
  }

  // Field name: hmilcmaindcnle
  {
    cdr >> ros_message->hmilcmaindcnle;
  }

  // Field name: hmilcmaindcnri
  {
    cdr >> ros_message->hmilcmaindcnri;
  }

  // Field name: hmilcmaon
  {
    cdr >> ros_message->hmilcmaon;
  }

  // Field name: hmilcmaaudwarn
  {
    cdr >> ros_message->hmilcmaaudwarn;
  }

  // Field name: hmirsdssyssts
  {
    cdr >> ros_message->hmirsdssyssts;
  }

  // Field name: hmirctaindcnle
  {
    cdr >> ros_message->hmirctaindcnle;
  }

  // Field name: hmirctaindcnri
  {
    cdr >> ros_message->hmirctaindcnri;
  }

  // Field name: hmictraon1
  {
    cdr >> ros_message->hmictraon1;
  }

  // Field name: hmicllsnwarnreindcn
  {
    cdr >> ros_message->hmicllsnwarnreindcn;
  }

  // Field name: hmicllsnwarnreon1
  {
    cdr >> ros_message->hmicllsnwarnreon1;
  }

  // Field name: hmircwmlireq
  {
    cdr >> ros_message->hmircwmlireq;
  }

  // Field name: acttnrctabrkreq
  {
    cdr >> ros_message->acttnrctabrkreq;
  }

  // Field name: acttnrctabrkreqqm
  {
    cdr >> ros_message->acttnrctabrkreqqm;
  }

  // Field name: acttnrcwmbrkreq
  {
    cdr >> ros_message->acttnrcwmbrkreq;
  }

  // Field name: acttnrcwmbrkreqqm
  {
    cdr >> ros_message->acttnrcwmbrkreqqm;
  }

  // Field name: hmiasyemgymanoeuvreaidsts
  {
    cdr >> ros_message->hmiasyemgymanoeuvreaidsts;
  }

  // Field name: hmicllsnaidpostema
  {
    cdr >> ros_message->hmicllsnaidpostema;
  }

  // Field name: hmitrfcliinfo
  {
    cdr >> ros_message->hmitrfcliinfo;
  }

  // Field name: hmitrfclists
  {
    cdr >> ros_message->hmitrfclists;
  }

  // Field name: hmitrfcliwarntypsts
  {
    cdr >> ros_message->hmitrfcliwarntypsts;
  }

  // Field name: hmiuturnlight
  {
    cdr >> ros_message->hmiuturnlight;
  }

  // Field name: hmitrfcliinfoleft
  {
    cdr >> ros_message->hmitrfcliinfoleft;
  }

  // Field name: hmitrfcliinforight
  {
    cdr >> ros_message->hmitrfcliinforight;
  }

  // Field name: hmiaebtriggerobjectid
  {
    cdr >> ros_message->hmiaebtriggerobjectid;
  }

  // Field name: hmielkatriggerobjectid
  {
    cdr >> ros_message->hmielkatriggerobjectid;
  }

  // Field name: hmifctarighttriggerobjectid
  {
    cdr >> ros_message->hmifctarighttriggerobjectid;
  }

  // Field name: hmifctalefttriggerobjectid
  {
    cdr >> ros_message->hmifctalefttriggerobjectid;
  }

  // Field name: hmiematriggerobjectid
  {
    cdr >> ros_message->hmiematriggerobjectid;
  }

  // Field name: hmirctarighttriggerobjectid
  {
    cdr >> ros_message->hmirctarighttriggerobjectid;
  }

  // Field name: hmirctalefttriggerobjectid
  {
    cdr >> ros_message->hmirctalefttriggerobjectid;
  }

  // Field name: hmitrfclichg
  {
    cdr >> ros_message->hmitrfclichg;
  }

  // Field name: hmifcwtriggerobjectid
  {
    cdr >> ros_message->hmifcwtriggerobjectid;
  }

  // Field name: lanekeepaidlaneinfo
  {
    cdr >> ros_message->lanekeepaidlaneinfo;
  }

  // Field name: asyemgylanekeepaidlaneinfo
  {
    cdr >> ros_message->asyemgylanekeepaidlaneinfo;
  }

  // Field name: hmireserve1
  {
    cdr >> ros_message->hmireserve1;
  }

  // Field name: hmireserve2
  {
    cdr >> ros_message->hmireserve2;
  }

  // Field name: hmireserve3
  {
    cdr >> ros_message->hmireserve3;
  }

  // Field name: hmireserve4
  {
    cdr >> ros_message->hmireserve4;
  }

  // Field name: hmireserve5
  {
    cdr >> ros_message->hmireserve5;
  }

  // Field name: hmireserve6
  {
    cdr >> ros_message->hmireserve6;
  }

  // Field name: hmireserve7
  {
    cdr >> ros_message->hmireserve7;
  }

  // Field name: hmireserve8
  {
    cdr >> ros_message->hmireserve8;
  }

  // Field name: asypinionagreq
  {
    cdr >> ros_message->asypinionagreq;
  }

  // Field name: latctrlagctrltqlowrlim
  {
    cdr >> ros_message->latctrlagctrltqlowrlim;
  }

  // Field name: latctrlagctrltqupprlim
  {
    cdr >> ros_message->latctrlagctrltqupprlim;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t get_serialized_size_deva_function_msgs__msg__ADASFunctionStatusIntra(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ADASFunctionStatusIntra__ros_msg_type * ros_message = static_cast<const _ADASFunctionStatusIntra__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_deva_common_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name acttnasylatctrlmodreq
  {
    size_t item_size = sizeof(ros_message->acttnasylatctrlmodreq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acttnasysftyenadecelbydbs
  {
    size_t item_size = sizeof(ros_message->acttnasysftyenadecelbydbs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acttnasysftyhwlreq
  {
    size_t item_size = sizeof(ros_message->acttnasysftyhwlreq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acttnasysftystandstillreq
  {
    size_t item_size = sizeof(ros_message->acttnasysftystandstillreq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acttnasysteerwhlhptcwarnreq
  {
    size_t item_size = sizeof(ros_message->acttnasysteerwhlhptcwarnreq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acttnbrkhptcwarnreqforautdrv
  {
    size_t item_size = sizeof(ros_message->acttnbrkhptcwarnreqforautdrv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acttnbrkprecactv
  {
    size_t item_size = sizeof(ros_message->acttnbrkprecactv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acttncllsnthreat
  {
    size_t item_size = sizeof(ros_message->acttncllsnthreat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmiasyemgylanekeepaid
  {
    size_t item_size = sizeof(ros_message->hmiasyemgylanekeepaid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmiasyemgylanekeepaidsts
  {
    size_t item_size = sizeof(ros_message->hmiasyemgylanekeepaidsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmiasylanechgwarnmod
  {
    size_t item_size = sizeof(ros_message->hmiasylanechgwarnmod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmiasylanekeepaidsts
  {
    size_t item_size = sizeof(ros_message->hmiasylanekeepaidsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmiasyobjtype
  {
    size_t item_size = sizeof(ros_message->hmiasyobjtype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmiasysteerapplyrqrd
  {
    size_t item_size = sizeof(ros_message->hmiasysteerapplyrqrd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmiasywarnforsteercncl
  {
    size_t item_size = sizeof(ros_message->hmiasywarnforsteercncl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmicllsnaidpost
  {
    size_t item_size = sizeof(ros_message->hmicllsnaidpost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmicllsnfwdwarn
  {
    size_t item_size = sizeof(ros_message->hmicllsnfwdwarn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmicllsnmtgtnfaultsts
  {
    size_t item_size = sizeof(ros_message->hmicllsnmtgtnfaultsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmicllsnmtgtnfctsts
  {
    size_t item_size = sizeof(ros_message->hmicllsnmtgtnfctsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmicllsnmtgtnwarnsts
  {
    size_t item_size = sizeof(ros_message->hmicllsnmtgtnwarnsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmictryforroadsgninfo
  {
    size_t item_size = sizeof(ros_message->hmictryforroadsgninfo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmiintvandwarnmodinfosts
  {
    size_t item_size = sizeof(ros_message->hmiintvandwarnmodinfosts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmilanechgwarnsts
  {
    size_t item_size = sizeof(ros_message->hmilanechgwarnsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmilanekeepaidinfosts
  {
    size_t item_size = sizeof(ros_message->hmilanekeepaidinfosts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hminontrvrsbleroadedgeonleft
  {
    size_t item_size = sizeof(ros_message->hminontrvrsbleroadedgeonleft);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hminontrvrsbleroadedgeonright
  {
    size_t item_size = sizeof(ros_message->hminontrvrsbleroadedgeonright);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmioffsforspdwarnsetgsts
  {
    size_t item_size = sizeof(ros_message->hmioffsforspdwarnsetgsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmiroadmiscsgninfosts
  {
    size_t item_size = sizeof(ros_message->hmiroadmiscsgninfosts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmiroadsgninfosts
  {
    size_t item_size = sizeof(ros_message->hmiroadsgninfosts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmispdalrmactvsts
  {
    size_t item_size = sizeof(ros_message->hmispdalrmactvsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmitrfcinfomiscfirst
  {
    size_t item_size = sizeof(ros_message->hmitrfcinfomiscfirst);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmiwarnforasyemgylanekeepaid
  {
    size_t item_size = sizeof(ros_message->hmiwarnforasyemgylanekeepaid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmicllsnmtgtnonoffsts
  {
    size_t item_size = sizeof(ros_message->hmicllsnmtgtnonoffsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmidooropenwarnon1
  {
    size_t item_size = sizeof(ros_message->hmidooropenwarnon1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmidooropenwarnleindcn
  {
    size_t item_size = sizeof(ros_message->hmidooropenwarnleindcn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmidooropenwarnriindcn
  {
    size_t item_size = sizeof(ros_message->hmidooropenwarnriindcn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmilettclv
  {
    size_t item_size = sizeof(ros_message->hmilettclv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmirittclv
  {
    size_t item_size = sizeof(ros_message->hmirittclv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmifctaindcnle
  {
    size_t item_size = sizeof(ros_message->hmifctaindcnle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmifctaindcnri
  {
    size_t item_size = sizeof(ros_message->hmifctaindcnri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmilcmaindcnle
  {
    size_t item_size = sizeof(ros_message->hmilcmaindcnle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmilcmaindcnri
  {
    size_t item_size = sizeof(ros_message->hmilcmaindcnri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmilcmaon
  {
    size_t item_size = sizeof(ros_message->hmilcmaon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmilcmaaudwarn
  {
    size_t item_size = sizeof(ros_message->hmilcmaaudwarn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmirsdssyssts
  {
    size_t item_size = sizeof(ros_message->hmirsdssyssts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmirctaindcnle
  {
    size_t item_size = sizeof(ros_message->hmirctaindcnle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmirctaindcnri
  {
    size_t item_size = sizeof(ros_message->hmirctaindcnri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmictraon1
  {
    size_t item_size = sizeof(ros_message->hmictraon1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmicllsnwarnreindcn
  {
    size_t item_size = sizeof(ros_message->hmicllsnwarnreindcn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmicllsnwarnreon1
  {
    size_t item_size = sizeof(ros_message->hmicllsnwarnreon1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmircwmlireq
  {
    size_t item_size = sizeof(ros_message->hmircwmlireq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acttnrctabrkreq
  {
    size_t item_size = sizeof(ros_message->acttnrctabrkreq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acttnrctabrkreqqm
  {
    size_t item_size = sizeof(ros_message->acttnrctabrkreqqm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acttnrcwmbrkreq
  {
    size_t item_size = sizeof(ros_message->acttnrcwmbrkreq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acttnrcwmbrkreqqm
  {
    size_t item_size = sizeof(ros_message->acttnrcwmbrkreqqm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmiasyemgymanoeuvreaidsts
  {
    size_t item_size = sizeof(ros_message->hmiasyemgymanoeuvreaidsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmicllsnaidpostema
  {
    size_t item_size = sizeof(ros_message->hmicllsnaidpostema);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmitrfcliinfo
  {
    size_t item_size = sizeof(ros_message->hmitrfcliinfo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmitrfclists
  {
    size_t item_size = sizeof(ros_message->hmitrfclists);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmitrfcliwarntypsts
  {
    size_t item_size = sizeof(ros_message->hmitrfcliwarntypsts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmiuturnlight
  {
    size_t item_size = sizeof(ros_message->hmiuturnlight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmitrfcliinfoleft
  {
    size_t item_size = sizeof(ros_message->hmitrfcliinfoleft);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmitrfcliinforight
  {
    size_t item_size = sizeof(ros_message->hmitrfcliinforight);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmiaebtriggerobjectid
  {
    size_t item_size = sizeof(ros_message->hmiaebtriggerobjectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmielkatriggerobjectid
  {
    size_t item_size = sizeof(ros_message->hmielkatriggerobjectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmifctarighttriggerobjectid
  {
    size_t item_size = sizeof(ros_message->hmifctarighttriggerobjectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmifctalefttriggerobjectid
  {
    size_t item_size = sizeof(ros_message->hmifctalefttriggerobjectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmiematriggerobjectid
  {
    size_t item_size = sizeof(ros_message->hmiematriggerobjectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmirctarighttriggerobjectid
  {
    size_t item_size = sizeof(ros_message->hmirctarighttriggerobjectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmirctalefttriggerobjectid
  {
    size_t item_size = sizeof(ros_message->hmirctalefttriggerobjectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmitrfclichg
  {
    size_t item_size = sizeof(ros_message->hmitrfclichg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmifcwtriggerobjectid
  {
    size_t item_size = sizeof(ros_message->hmifcwtriggerobjectid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lanekeepaidlaneinfo
  {
    size_t item_size = sizeof(ros_message->lanekeepaidlaneinfo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asyemgylanekeepaidlaneinfo
  {
    size_t item_size = sizeof(ros_message->asyemgylanekeepaidlaneinfo);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmireserve1
  {
    size_t item_size = sizeof(ros_message->hmireserve1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmireserve2
  {
    size_t item_size = sizeof(ros_message->hmireserve2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmireserve3
  {
    size_t item_size = sizeof(ros_message->hmireserve3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmireserve4
  {
    size_t item_size = sizeof(ros_message->hmireserve4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmireserve5
  {
    size_t item_size = sizeof(ros_message->hmireserve5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmireserve6
  {
    size_t item_size = sizeof(ros_message->hmireserve6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmireserve7
  {
    size_t item_size = sizeof(ros_message->hmireserve7);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmireserve8
  {
    size_t item_size = sizeof(ros_message->hmireserve8);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asypinionagreq
  {
    size_t item_size = sizeof(ros_message->asypinionagreq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name latctrlagctrltqlowrlim
  {
    size_t item_size = sizeof(ros_message->latctrlagctrltqlowrlim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name latctrlagctrltqupprlim
  {
    size_t item_size = sizeof(ros_message->latctrlagctrltqupprlim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ADASFunctionStatusIntra__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_function_msgs__msg__ADASFunctionStatusIntra(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t max_serialized_size_deva_function_msgs__msg__ADASFunctionStatusIntra(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_common_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: acttnasylatctrlmodreq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acttnasysftyenadecelbydbs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acttnasysftyhwlreq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acttnasysftystandstillreq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acttnasysteerwhlhptcwarnreq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acttnbrkhptcwarnreqforautdrv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acttnbrkprecactv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acttncllsnthreat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmiasyemgylanekeepaid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmiasyemgylanekeepaidsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmiasylanechgwarnmod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmiasylanekeepaidsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmiasyobjtype
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmiasysteerapplyrqrd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmiasywarnforsteercncl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmicllsnaidpost
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmicllsnfwdwarn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmicllsnmtgtnfaultsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmicllsnmtgtnfctsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmicllsnmtgtnwarnsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmictryforroadsgninfo
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmiintvandwarnmodinfosts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmilanechgwarnsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmilanekeepaidinfosts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hminontrvrsbleroadedgeonleft
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hminontrvrsbleroadedgeonright
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmioffsforspdwarnsetgsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmiroadmiscsgninfosts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmiroadsgninfosts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmispdalrmactvsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmitrfcinfomiscfirst
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmiwarnforasyemgylanekeepaid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmicllsnmtgtnonoffsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmidooropenwarnon1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmidooropenwarnleindcn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmidooropenwarnriindcn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmilettclv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmirittclv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmifctaindcnle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmifctaindcnri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmilcmaindcnle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmilcmaindcnri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmilcmaon
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmilcmaaudwarn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmirsdssyssts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmirctaindcnle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmirctaindcnri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmictraon1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmicllsnwarnreindcn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmicllsnwarnreon1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmircwmlireq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acttnrctabrkreq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acttnrctabrkreqqm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acttnrcwmbrkreq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: acttnrcwmbrkreqqm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmiasyemgymanoeuvreaidsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmicllsnaidpostema
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmitrfcliinfo
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmitrfclists
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmitrfcliwarntypsts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmiuturnlight
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmitrfcliinfoleft
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmitrfcliinforight
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmiaebtriggerobjectid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmielkatriggerobjectid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmifctarighttriggerobjectid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmifctalefttriggerobjectid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmiematriggerobjectid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmirctarighttriggerobjectid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmirctalefttriggerobjectid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmitrfclichg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmifcwtriggerobjectid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lanekeepaidlaneinfo
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asyemgylanekeepaidlaneinfo
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmireserve1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: hmireserve2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: hmireserve3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: hmireserve4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: hmireserve5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hmireserve6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hmireserve7
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hmireserve8
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: asypinionagreq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: latctrlagctrltqlowrlim
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: latctrlagctrltqupprlim
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
    using DataType = deva_function_msgs__msg__ADASFunctionStatusIntra;
    is_plain =
      (
      offsetof(DataType, latctrlagctrltqupprlim) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ADASFunctionStatusIntra__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_function_msgs__msg__ADASFunctionStatusIntra(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ADASFunctionStatusIntra = {
  "deva_function_msgs::msg",
  "ADASFunctionStatusIntra",
  _ADASFunctionStatusIntra__cdr_serialize,
  _ADASFunctionStatusIntra__cdr_deserialize,
  _ADASFunctionStatusIntra__get_serialized_size,
  _ADASFunctionStatusIntra__max_serialized_size
};

static rosidl_message_type_support_t _ADASFunctionStatusIntra__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ADASFunctionStatusIntra,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, ADASFunctionStatusIntra)() {
  return &_ADASFunctionStatusIntra__type_support;
}

#if defined(__cplusplus)
}
#endif
