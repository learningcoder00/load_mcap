// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/ADASFunctionStatusIntra.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_STATUS_INTRA__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_STATUS_INTRA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/ADASFunctionStatusIntra in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__ADASFunctionStatusIntra
{
  deva_common_msgs__msg__Header header;
  uint8_t acttnasylatctrlmodreq;
  uint8_t acttnasysftyenadecelbydbs;
  uint8_t acttnasysftyhwlreq;
  uint8_t acttnasysftystandstillreq;
  uint8_t acttnasysteerwhlhptcwarnreq;
  uint8_t acttnbrkhptcwarnreqforautdrv;
  uint8_t acttnbrkprecactv;
  uint8_t acttncllsnthreat;
  uint8_t hmiasyemgylanekeepaid;
  uint8_t hmiasyemgylanekeepaidsts;
  uint8_t hmiasylanechgwarnmod;
  uint8_t hmiasylanekeepaidsts;
  uint8_t hmiasyobjtype;
  uint8_t hmiasysteerapplyrqrd;
  uint8_t hmiasywarnforsteercncl;
  uint8_t hmicllsnaidpost;
  uint8_t hmicllsnfwdwarn;
  uint8_t hmicllsnmtgtnfaultsts;
  uint8_t hmicllsnmtgtnfctsts;
  uint8_t hmicllsnmtgtnwarnsts;
  uint8_t hmictryforroadsgninfo;
  uint8_t hmiintvandwarnmodinfosts;
  uint8_t hmilanechgwarnsts;
  uint8_t hmilanekeepaidinfosts;
  uint8_t hminontrvrsbleroadedgeonleft;
  uint8_t hminontrvrsbleroadedgeonright;
  uint8_t hmioffsforspdwarnsetgsts;
  uint8_t hmiroadmiscsgninfosts;
  uint8_t hmiroadsgninfosts;
  uint8_t hmispdalrmactvsts;
  uint8_t hmitrfcinfomiscfirst;
  uint8_t hmiwarnforasyemgylanekeepaid;
  uint8_t hmicllsnmtgtnonoffsts;
  uint8_t hmidooropenwarnon1;
  uint8_t hmidooropenwarnleindcn;
  uint8_t hmidooropenwarnriindcn;
  uint8_t hmilettclv;
  uint8_t hmirittclv;
  uint8_t hmifctaindcnle;
  uint8_t hmifctaindcnri;
  uint8_t hmilcmaindcnle;
  uint8_t hmilcmaindcnri;
  uint8_t hmilcmaon;
  uint8_t hmilcmaaudwarn;
  uint8_t hmirsdssyssts;
  uint8_t hmirctaindcnle;
  uint8_t hmirctaindcnri;
  uint8_t hmictraon1;
  uint8_t hmicllsnwarnreindcn;
  uint8_t hmicllsnwarnreon1;
  uint8_t hmircwmlireq;
  uint8_t acttnrctabrkreq;
  uint8_t acttnrctabrkreqqm;
  uint8_t acttnrcwmbrkreq;
  uint8_t acttnrcwmbrkreqqm;
  uint8_t hmiasyemgymanoeuvreaidsts;
  uint8_t hmicllsnaidpostema;
  uint8_t hmitrfcliinfo;
  uint8_t hmitrfclists;
  uint8_t hmitrfcliwarntypsts;
  uint8_t hmiuturnlight;
  uint8_t hmitrfcliinfoleft;
  uint8_t hmitrfcliinforight;
  uint8_t hmiaebtriggerobjectid;
  uint8_t hmielkatriggerobjectid;
  uint8_t hmifctarighttriggerobjectid;
  uint8_t hmifctalefttriggerobjectid;
  uint8_t hmiematriggerobjectid;
  uint8_t hmirctarighttriggerobjectid;
  uint8_t hmirctalefttriggerobjectid;
  uint8_t hmitrfclichg;
  uint8_t hmifcwtriggerobjectid;
  uint8_t lanekeepaidlaneinfo;
  uint8_t asyemgylanekeepaidlaneinfo;
  uint16_t hmireserve1;
  uint16_t hmireserve2;
  uint16_t hmireserve3;
  uint16_t hmireserve4;
  float hmireserve5;
  float hmireserve6;
  float hmireserve7;
  float hmireserve8;
  float asypinionagreq;
  float latctrlagctrltqlowrlim;
  float latctrlagctrltqupprlim;
} deva_function_msgs__msg__ADASFunctionStatusIntra;

// Struct for a sequence of deva_function_msgs__msg__ADASFunctionStatusIntra.
typedef struct deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence
{
  deva_function_msgs__msg__ADASFunctionStatusIntra * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_STATUS_INTRA__STRUCT_H_
