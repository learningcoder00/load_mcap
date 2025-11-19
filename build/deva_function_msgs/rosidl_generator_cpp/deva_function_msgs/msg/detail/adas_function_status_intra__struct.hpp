// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/ADASFunctionStatusIntra.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_STATUS_INTRA__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_STATUS_INTRA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_function_msgs__msg__ADASFunctionStatusIntra __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__ADASFunctionStatusIntra __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ADASFunctionStatusIntra_
{
  using Type = ADASFunctionStatusIntra_<ContainerAllocator>;

  explicit ADASFunctionStatusIntra_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acttnasylatctrlmodreq = 0;
      this->acttnasysftyenadecelbydbs = 0;
      this->acttnasysftyhwlreq = 0;
      this->acttnasysftystandstillreq = 0;
      this->acttnasysteerwhlhptcwarnreq = 0;
      this->acttnbrkhptcwarnreqforautdrv = 0;
      this->acttnbrkprecactv = 0;
      this->acttncllsnthreat = 0;
      this->hmiasyemgylanekeepaid = 0;
      this->hmiasyemgylanekeepaidsts = 0;
      this->hmiasylanechgwarnmod = 0;
      this->hmiasylanekeepaidsts = 0;
      this->hmiasyobjtype = 0;
      this->hmiasysteerapplyrqrd = 0;
      this->hmiasywarnforsteercncl = 0;
      this->hmicllsnaidpost = 0;
      this->hmicllsnfwdwarn = 0;
      this->hmicllsnmtgtnfaultsts = 0;
      this->hmicllsnmtgtnfctsts = 0;
      this->hmicllsnmtgtnwarnsts = 0;
      this->hmictryforroadsgninfo = 0;
      this->hmiintvandwarnmodinfosts = 0;
      this->hmilanechgwarnsts = 0;
      this->hmilanekeepaidinfosts = 0;
      this->hminontrvrsbleroadedgeonleft = 0;
      this->hminontrvrsbleroadedgeonright = 0;
      this->hmioffsforspdwarnsetgsts = 0;
      this->hmiroadmiscsgninfosts = 0;
      this->hmiroadsgninfosts = 0;
      this->hmispdalrmactvsts = 0;
      this->hmitrfcinfomiscfirst = 0;
      this->hmiwarnforasyemgylanekeepaid = 0;
      this->hmicllsnmtgtnonoffsts = 0;
      this->hmidooropenwarnon1 = 0;
      this->hmidooropenwarnleindcn = 0;
      this->hmidooropenwarnriindcn = 0;
      this->hmilettclv = 0;
      this->hmirittclv = 0;
      this->hmifctaindcnle = 0;
      this->hmifctaindcnri = 0;
      this->hmilcmaindcnle = 0;
      this->hmilcmaindcnri = 0;
      this->hmilcmaon = 0;
      this->hmilcmaaudwarn = 0;
      this->hmirsdssyssts = 0;
      this->hmirctaindcnle = 0;
      this->hmirctaindcnri = 0;
      this->hmictraon1 = 0;
      this->hmicllsnwarnreindcn = 0;
      this->hmicllsnwarnreon1 = 0;
      this->hmircwmlireq = 0;
      this->acttnrctabrkreq = 0;
      this->acttnrctabrkreqqm = 0;
      this->acttnrcwmbrkreq = 0;
      this->acttnrcwmbrkreqqm = 0;
      this->hmiasyemgymanoeuvreaidsts = 0;
      this->hmicllsnaidpostema = 0;
      this->hmitrfcliinfo = 0;
      this->hmitrfclists = 0;
      this->hmitrfcliwarntypsts = 0;
      this->hmiuturnlight = 0;
      this->hmitrfcliinfoleft = 0;
      this->hmitrfcliinforight = 0;
      this->hmiaebtriggerobjectid = 0;
      this->hmielkatriggerobjectid = 0;
      this->hmifctarighttriggerobjectid = 0;
      this->hmifctalefttriggerobjectid = 0;
      this->hmiematriggerobjectid = 0;
      this->hmirctarighttriggerobjectid = 0;
      this->hmirctalefttriggerobjectid = 0;
      this->hmitrfclichg = 0;
      this->hmifcwtriggerobjectid = 0;
      this->lanekeepaidlaneinfo = 0;
      this->asyemgylanekeepaidlaneinfo = 0;
      this->hmireserve1 = 0;
      this->hmireserve2 = 0;
      this->hmireserve3 = 0;
      this->hmireserve4 = 0;
      this->hmireserve5 = 0.0f;
      this->hmireserve6 = 0.0f;
      this->hmireserve7 = 0.0f;
      this->hmireserve8 = 0.0f;
      this->asypinionagreq = 0.0f;
      this->latctrlagctrltqlowrlim = 0.0f;
      this->latctrlagctrltqupprlim = 0.0f;
    }
  }

  explicit ADASFunctionStatusIntra_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acttnasylatctrlmodreq = 0;
      this->acttnasysftyenadecelbydbs = 0;
      this->acttnasysftyhwlreq = 0;
      this->acttnasysftystandstillreq = 0;
      this->acttnasysteerwhlhptcwarnreq = 0;
      this->acttnbrkhptcwarnreqforautdrv = 0;
      this->acttnbrkprecactv = 0;
      this->acttncllsnthreat = 0;
      this->hmiasyemgylanekeepaid = 0;
      this->hmiasyemgylanekeepaidsts = 0;
      this->hmiasylanechgwarnmod = 0;
      this->hmiasylanekeepaidsts = 0;
      this->hmiasyobjtype = 0;
      this->hmiasysteerapplyrqrd = 0;
      this->hmiasywarnforsteercncl = 0;
      this->hmicllsnaidpost = 0;
      this->hmicllsnfwdwarn = 0;
      this->hmicllsnmtgtnfaultsts = 0;
      this->hmicllsnmtgtnfctsts = 0;
      this->hmicllsnmtgtnwarnsts = 0;
      this->hmictryforroadsgninfo = 0;
      this->hmiintvandwarnmodinfosts = 0;
      this->hmilanechgwarnsts = 0;
      this->hmilanekeepaidinfosts = 0;
      this->hminontrvrsbleroadedgeonleft = 0;
      this->hminontrvrsbleroadedgeonright = 0;
      this->hmioffsforspdwarnsetgsts = 0;
      this->hmiroadmiscsgninfosts = 0;
      this->hmiroadsgninfosts = 0;
      this->hmispdalrmactvsts = 0;
      this->hmitrfcinfomiscfirst = 0;
      this->hmiwarnforasyemgylanekeepaid = 0;
      this->hmicllsnmtgtnonoffsts = 0;
      this->hmidooropenwarnon1 = 0;
      this->hmidooropenwarnleindcn = 0;
      this->hmidooropenwarnriindcn = 0;
      this->hmilettclv = 0;
      this->hmirittclv = 0;
      this->hmifctaindcnle = 0;
      this->hmifctaindcnri = 0;
      this->hmilcmaindcnle = 0;
      this->hmilcmaindcnri = 0;
      this->hmilcmaon = 0;
      this->hmilcmaaudwarn = 0;
      this->hmirsdssyssts = 0;
      this->hmirctaindcnle = 0;
      this->hmirctaindcnri = 0;
      this->hmictraon1 = 0;
      this->hmicllsnwarnreindcn = 0;
      this->hmicllsnwarnreon1 = 0;
      this->hmircwmlireq = 0;
      this->acttnrctabrkreq = 0;
      this->acttnrctabrkreqqm = 0;
      this->acttnrcwmbrkreq = 0;
      this->acttnrcwmbrkreqqm = 0;
      this->hmiasyemgymanoeuvreaidsts = 0;
      this->hmicllsnaidpostema = 0;
      this->hmitrfcliinfo = 0;
      this->hmitrfclists = 0;
      this->hmitrfcliwarntypsts = 0;
      this->hmiuturnlight = 0;
      this->hmitrfcliinfoleft = 0;
      this->hmitrfcliinforight = 0;
      this->hmiaebtriggerobjectid = 0;
      this->hmielkatriggerobjectid = 0;
      this->hmifctarighttriggerobjectid = 0;
      this->hmifctalefttriggerobjectid = 0;
      this->hmiematriggerobjectid = 0;
      this->hmirctarighttriggerobjectid = 0;
      this->hmirctalefttriggerobjectid = 0;
      this->hmitrfclichg = 0;
      this->hmifcwtriggerobjectid = 0;
      this->lanekeepaidlaneinfo = 0;
      this->asyemgylanekeepaidlaneinfo = 0;
      this->hmireserve1 = 0;
      this->hmireserve2 = 0;
      this->hmireserve3 = 0;
      this->hmireserve4 = 0;
      this->hmireserve5 = 0.0f;
      this->hmireserve6 = 0.0f;
      this->hmireserve7 = 0.0f;
      this->hmireserve8 = 0.0f;
      this->asypinionagreq = 0.0f;
      this->latctrlagctrltqlowrlim = 0.0f;
      this->latctrlagctrltqupprlim = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _acttnasylatctrlmodreq_type =
    uint8_t;
  _acttnasylatctrlmodreq_type acttnasylatctrlmodreq;
  using _acttnasysftyenadecelbydbs_type =
    uint8_t;
  _acttnasysftyenadecelbydbs_type acttnasysftyenadecelbydbs;
  using _acttnasysftyhwlreq_type =
    uint8_t;
  _acttnasysftyhwlreq_type acttnasysftyhwlreq;
  using _acttnasysftystandstillreq_type =
    uint8_t;
  _acttnasysftystandstillreq_type acttnasysftystandstillreq;
  using _acttnasysteerwhlhptcwarnreq_type =
    uint8_t;
  _acttnasysteerwhlhptcwarnreq_type acttnasysteerwhlhptcwarnreq;
  using _acttnbrkhptcwarnreqforautdrv_type =
    uint8_t;
  _acttnbrkhptcwarnreqforautdrv_type acttnbrkhptcwarnreqforautdrv;
  using _acttnbrkprecactv_type =
    uint8_t;
  _acttnbrkprecactv_type acttnbrkprecactv;
  using _acttncllsnthreat_type =
    uint8_t;
  _acttncllsnthreat_type acttncllsnthreat;
  using _hmiasyemgylanekeepaid_type =
    uint8_t;
  _hmiasyemgylanekeepaid_type hmiasyemgylanekeepaid;
  using _hmiasyemgylanekeepaidsts_type =
    uint8_t;
  _hmiasyemgylanekeepaidsts_type hmiasyemgylanekeepaidsts;
  using _hmiasylanechgwarnmod_type =
    uint8_t;
  _hmiasylanechgwarnmod_type hmiasylanechgwarnmod;
  using _hmiasylanekeepaidsts_type =
    uint8_t;
  _hmiasylanekeepaidsts_type hmiasylanekeepaidsts;
  using _hmiasyobjtype_type =
    uint8_t;
  _hmiasyobjtype_type hmiasyobjtype;
  using _hmiasysteerapplyrqrd_type =
    uint8_t;
  _hmiasysteerapplyrqrd_type hmiasysteerapplyrqrd;
  using _hmiasywarnforsteercncl_type =
    uint8_t;
  _hmiasywarnforsteercncl_type hmiasywarnforsteercncl;
  using _hmicllsnaidpost_type =
    uint8_t;
  _hmicllsnaidpost_type hmicllsnaidpost;
  using _hmicllsnfwdwarn_type =
    uint8_t;
  _hmicllsnfwdwarn_type hmicllsnfwdwarn;
  using _hmicllsnmtgtnfaultsts_type =
    uint8_t;
  _hmicllsnmtgtnfaultsts_type hmicllsnmtgtnfaultsts;
  using _hmicllsnmtgtnfctsts_type =
    uint8_t;
  _hmicllsnmtgtnfctsts_type hmicllsnmtgtnfctsts;
  using _hmicllsnmtgtnwarnsts_type =
    uint8_t;
  _hmicllsnmtgtnwarnsts_type hmicllsnmtgtnwarnsts;
  using _hmictryforroadsgninfo_type =
    uint8_t;
  _hmictryforroadsgninfo_type hmictryforroadsgninfo;
  using _hmiintvandwarnmodinfosts_type =
    uint8_t;
  _hmiintvandwarnmodinfosts_type hmiintvandwarnmodinfosts;
  using _hmilanechgwarnsts_type =
    uint8_t;
  _hmilanechgwarnsts_type hmilanechgwarnsts;
  using _hmilanekeepaidinfosts_type =
    uint8_t;
  _hmilanekeepaidinfosts_type hmilanekeepaidinfosts;
  using _hminontrvrsbleroadedgeonleft_type =
    uint8_t;
  _hminontrvrsbleroadedgeonleft_type hminontrvrsbleroadedgeonleft;
  using _hminontrvrsbleroadedgeonright_type =
    uint8_t;
  _hminontrvrsbleroadedgeonright_type hminontrvrsbleroadedgeonright;
  using _hmioffsforspdwarnsetgsts_type =
    uint8_t;
  _hmioffsforspdwarnsetgsts_type hmioffsforspdwarnsetgsts;
  using _hmiroadmiscsgninfosts_type =
    uint8_t;
  _hmiroadmiscsgninfosts_type hmiroadmiscsgninfosts;
  using _hmiroadsgninfosts_type =
    uint8_t;
  _hmiroadsgninfosts_type hmiroadsgninfosts;
  using _hmispdalrmactvsts_type =
    uint8_t;
  _hmispdalrmactvsts_type hmispdalrmactvsts;
  using _hmitrfcinfomiscfirst_type =
    uint8_t;
  _hmitrfcinfomiscfirst_type hmitrfcinfomiscfirst;
  using _hmiwarnforasyemgylanekeepaid_type =
    uint8_t;
  _hmiwarnforasyemgylanekeepaid_type hmiwarnforasyemgylanekeepaid;
  using _hmicllsnmtgtnonoffsts_type =
    uint8_t;
  _hmicllsnmtgtnonoffsts_type hmicllsnmtgtnonoffsts;
  using _hmidooropenwarnon1_type =
    uint8_t;
  _hmidooropenwarnon1_type hmidooropenwarnon1;
  using _hmidooropenwarnleindcn_type =
    uint8_t;
  _hmidooropenwarnleindcn_type hmidooropenwarnleindcn;
  using _hmidooropenwarnriindcn_type =
    uint8_t;
  _hmidooropenwarnriindcn_type hmidooropenwarnriindcn;
  using _hmilettclv_type =
    uint8_t;
  _hmilettclv_type hmilettclv;
  using _hmirittclv_type =
    uint8_t;
  _hmirittclv_type hmirittclv;
  using _hmifctaindcnle_type =
    uint8_t;
  _hmifctaindcnle_type hmifctaindcnle;
  using _hmifctaindcnri_type =
    uint8_t;
  _hmifctaindcnri_type hmifctaindcnri;
  using _hmilcmaindcnle_type =
    uint8_t;
  _hmilcmaindcnle_type hmilcmaindcnle;
  using _hmilcmaindcnri_type =
    uint8_t;
  _hmilcmaindcnri_type hmilcmaindcnri;
  using _hmilcmaon_type =
    uint8_t;
  _hmilcmaon_type hmilcmaon;
  using _hmilcmaaudwarn_type =
    uint8_t;
  _hmilcmaaudwarn_type hmilcmaaudwarn;
  using _hmirsdssyssts_type =
    uint8_t;
  _hmirsdssyssts_type hmirsdssyssts;
  using _hmirctaindcnle_type =
    uint8_t;
  _hmirctaindcnle_type hmirctaindcnle;
  using _hmirctaindcnri_type =
    uint8_t;
  _hmirctaindcnri_type hmirctaindcnri;
  using _hmictraon1_type =
    uint8_t;
  _hmictraon1_type hmictraon1;
  using _hmicllsnwarnreindcn_type =
    uint8_t;
  _hmicllsnwarnreindcn_type hmicllsnwarnreindcn;
  using _hmicllsnwarnreon1_type =
    uint8_t;
  _hmicllsnwarnreon1_type hmicllsnwarnreon1;
  using _hmircwmlireq_type =
    uint8_t;
  _hmircwmlireq_type hmircwmlireq;
  using _acttnrctabrkreq_type =
    uint8_t;
  _acttnrctabrkreq_type acttnrctabrkreq;
  using _acttnrctabrkreqqm_type =
    uint8_t;
  _acttnrctabrkreqqm_type acttnrctabrkreqqm;
  using _acttnrcwmbrkreq_type =
    uint8_t;
  _acttnrcwmbrkreq_type acttnrcwmbrkreq;
  using _acttnrcwmbrkreqqm_type =
    uint8_t;
  _acttnrcwmbrkreqqm_type acttnrcwmbrkreqqm;
  using _hmiasyemgymanoeuvreaidsts_type =
    uint8_t;
  _hmiasyemgymanoeuvreaidsts_type hmiasyemgymanoeuvreaidsts;
  using _hmicllsnaidpostema_type =
    uint8_t;
  _hmicllsnaidpostema_type hmicllsnaidpostema;
  using _hmitrfcliinfo_type =
    uint8_t;
  _hmitrfcliinfo_type hmitrfcliinfo;
  using _hmitrfclists_type =
    uint8_t;
  _hmitrfclists_type hmitrfclists;
  using _hmitrfcliwarntypsts_type =
    uint8_t;
  _hmitrfcliwarntypsts_type hmitrfcliwarntypsts;
  using _hmiuturnlight_type =
    uint8_t;
  _hmiuturnlight_type hmiuturnlight;
  using _hmitrfcliinfoleft_type =
    uint8_t;
  _hmitrfcliinfoleft_type hmitrfcliinfoleft;
  using _hmitrfcliinforight_type =
    uint8_t;
  _hmitrfcliinforight_type hmitrfcliinforight;
  using _hmiaebtriggerobjectid_type =
    uint8_t;
  _hmiaebtriggerobjectid_type hmiaebtriggerobjectid;
  using _hmielkatriggerobjectid_type =
    uint8_t;
  _hmielkatriggerobjectid_type hmielkatriggerobjectid;
  using _hmifctarighttriggerobjectid_type =
    uint8_t;
  _hmifctarighttriggerobjectid_type hmifctarighttriggerobjectid;
  using _hmifctalefttriggerobjectid_type =
    uint8_t;
  _hmifctalefttriggerobjectid_type hmifctalefttriggerobjectid;
  using _hmiematriggerobjectid_type =
    uint8_t;
  _hmiematriggerobjectid_type hmiematriggerobjectid;
  using _hmirctarighttriggerobjectid_type =
    uint8_t;
  _hmirctarighttriggerobjectid_type hmirctarighttriggerobjectid;
  using _hmirctalefttriggerobjectid_type =
    uint8_t;
  _hmirctalefttriggerobjectid_type hmirctalefttriggerobjectid;
  using _hmitrfclichg_type =
    uint8_t;
  _hmitrfclichg_type hmitrfclichg;
  using _hmifcwtriggerobjectid_type =
    uint8_t;
  _hmifcwtriggerobjectid_type hmifcwtriggerobjectid;
  using _lanekeepaidlaneinfo_type =
    uint8_t;
  _lanekeepaidlaneinfo_type lanekeepaidlaneinfo;
  using _asyemgylanekeepaidlaneinfo_type =
    uint8_t;
  _asyemgylanekeepaidlaneinfo_type asyemgylanekeepaidlaneinfo;
  using _hmireserve1_type =
    uint16_t;
  _hmireserve1_type hmireserve1;
  using _hmireserve2_type =
    uint16_t;
  _hmireserve2_type hmireserve2;
  using _hmireserve3_type =
    uint16_t;
  _hmireserve3_type hmireserve3;
  using _hmireserve4_type =
    uint16_t;
  _hmireserve4_type hmireserve4;
  using _hmireserve5_type =
    float;
  _hmireserve5_type hmireserve5;
  using _hmireserve6_type =
    float;
  _hmireserve6_type hmireserve6;
  using _hmireserve7_type =
    float;
  _hmireserve7_type hmireserve7;
  using _hmireserve8_type =
    float;
  _hmireserve8_type hmireserve8;
  using _asypinionagreq_type =
    float;
  _asypinionagreq_type asypinionagreq;
  using _latctrlagctrltqlowrlim_type =
    float;
  _latctrlagctrltqlowrlim_type latctrlagctrltqlowrlim;
  using _latctrlagctrltqupprlim_type =
    float;
  _latctrlagctrltqupprlim_type latctrlagctrltqupprlim;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__acttnasylatctrlmodreq(
    const uint8_t & _arg)
  {
    this->acttnasylatctrlmodreq = _arg;
    return *this;
  }
  Type & set__acttnasysftyenadecelbydbs(
    const uint8_t & _arg)
  {
    this->acttnasysftyenadecelbydbs = _arg;
    return *this;
  }
  Type & set__acttnasysftyhwlreq(
    const uint8_t & _arg)
  {
    this->acttnasysftyhwlreq = _arg;
    return *this;
  }
  Type & set__acttnasysftystandstillreq(
    const uint8_t & _arg)
  {
    this->acttnasysftystandstillreq = _arg;
    return *this;
  }
  Type & set__acttnasysteerwhlhptcwarnreq(
    const uint8_t & _arg)
  {
    this->acttnasysteerwhlhptcwarnreq = _arg;
    return *this;
  }
  Type & set__acttnbrkhptcwarnreqforautdrv(
    const uint8_t & _arg)
  {
    this->acttnbrkhptcwarnreqforautdrv = _arg;
    return *this;
  }
  Type & set__acttnbrkprecactv(
    const uint8_t & _arg)
  {
    this->acttnbrkprecactv = _arg;
    return *this;
  }
  Type & set__acttncllsnthreat(
    const uint8_t & _arg)
  {
    this->acttncllsnthreat = _arg;
    return *this;
  }
  Type & set__hmiasyemgylanekeepaid(
    const uint8_t & _arg)
  {
    this->hmiasyemgylanekeepaid = _arg;
    return *this;
  }
  Type & set__hmiasyemgylanekeepaidsts(
    const uint8_t & _arg)
  {
    this->hmiasyemgylanekeepaidsts = _arg;
    return *this;
  }
  Type & set__hmiasylanechgwarnmod(
    const uint8_t & _arg)
  {
    this->hmiasylanechgwarnmod = _arg;
    return *this;
  }
  Type & set__hmiasylanekeepaidsts(
    const uint8_t & _arg)
  {
    this->hmiasylanekeepaidsts = _arg;
    return *this;
  }
  Type & set__hmiasyobjtype(
    const uint8_t & _arg)
  {
    this->hmiasyobjtype = _arg;
    return *this;
  }
  Type & set__hmiasysteerapplyrqrd(
    const uint8_t & _arg)
  {
    this->hmiasysteerapplyrqrd = _arg;
    return *this;
  }
  Type & set__hmiasywarnforsteercncl(
    const uint8_t & _arg)
  {
    this->hmiasywarnforsteercncl = _arg;
    return *this;
  }
  Type & set__hmicllsnaidpost(
    const uint8_t & _arg)
  {
    this->hmicllsnaidpost = _arg;
    return *this;
  }
  Type & set__hmicllsnfwdwarn(
    const uint8_t & _arg)
  {
    this->hmicllsnfwdwarn = _arg;
    return *this;
  }
  Type & set__hmicllsnmtgtnfaultsts(
    const uint8_t & _arg)
  {
    this->hmicllsnmtgtnfaultsts = _arg;
    return *this;
  }
  Type & set__hmicllsnmtgtnfctsts(
    const uint8_t & _arg)
  {
    this->hmicllsnmtgtnfctsts = _arg;
    return *this;
  }
  Type & set__hmicllsnmtgtnwarnsts(
    const uint8_t & _arg)
  {
    this->hmicllsnmtgtnwarnsts = _arg;
    return *this;
  }
  Type & set__hmictryforroadsgninfo(
    const uint8_t & _arg)
  {
    this->hmictryforroadsgninfo = _arg;
    return *this;
  }
  Type & set__hmiintvandwarnmodinfosts(
    const uint8_t & _arg)
  {
    this->hmiintvandwarnmodinfosts = _arg;
    return *this;
  }
  Type & set__hmilanechgwarnsts(
    const uint8_t & _arg)
  {
    this->hmilanechgwarnsts = _arg;
    return *this;
  }
  Type & set__hmilanekeepaidinfosts(
    const uint8_t & _arg)
  {
    this->hmilanekeepaidinfosts = _arg;
    return *this;
  }
  Type & set__hminontrvrsbleroadedgeonleft(
    const uint8_t & _arg)
  {
    this->hminontrvrsbleroadedgeonleft = _arg;
    return *this;
  }
  Type & set__hminontrvrsbleroadedgeonright(
    const uint8_t & _arg)
  {
    this->hminontrvrsbleroadedgeonright = _arg;
    return *this;
  }
  Type & set__hmioffsforspdwarnsetgsts(
    const uint8_t & _arg)
  {
    this->hmioffsforspdwarnsetgsts = _arg;
    return *this;
  }
  Type & set__hmiroadmiscsgninfosts(
    const uint8_t & _arg)
  {
    this->hmiroadmiscsgninfosts = _arg;
    return *this;
  }
  Type & set__hmiroadsgninfosts(
    const uint8_t & _arg)
  {
    this->hmiroadsgninfosts = _arg;
    return *this;
  }
  Type & set__hmispdalrmactvsts(
    const uint8_t & _arg)
  {
    this->hmispdalrmactvsts = _arg;
    return *this;
  }
  Type & set__hmitrfcinfomiscfirst(
    const uint8_t & _arg)
  {
    this->hmitrfcinfomiscfirst = _arg;
    return *this;
  }
  Type & set__hmiwarnforasyemgylanekeepaid(
    const uint8_t & _arg)
  {
    this->hmiwarnforasyemgylanekeepaid = _arg;
    return *this;
  }
  Type & set__hmicllsnmtgtnonoffsts(
    const uint8_t & _arg)
  {
    this->hmicllsnmtgtnonoffsts = _arg;
    return *this;
  }
  Type & set__hmidooropenwarnon1(
    const uint8_t & _arg)
  {
    this->hmidooropenwarnon1 = _arg;
    return *this;
  }
  Type & set__hmidooropenwarnleindcn(
    const uint8_t & _arg)
  {
    this->hmidooropenwarnleindcn = _arg;
    return *this;
  }
  Type & set__hmidooropenwarnriindcn(
    const uint8_t & _arg)
  {
    this->hmidooropenwarnriindcn = _arg;
    return *this;
  }
  Type & set__hmilettclv(
    const uint8_t & _arg)
  {
    this->hmilettclv = _arg;
    return *this;
  }
  Type & set__hmirittclv(
    const uint8_t & _arg)
  {
    this->hmirittclv = _arg;
    return *this;
  }
  Type & set__hmifctaindcnle(
    const uint8_t & _arg)
  {
    this->hmifctaindcnle = _arg;
    return *this;
  }
  Type & set__hmifctaindcnri(
    const uint8_t & _arg)
  {
    this->hmifctaindcnri = _arg;
    return *this;
  }
  Type & set__hmilcmaindcnle(
    const uint8_t & _arg)
  {
    this->hmilcmaindcnle = _arg;
    return *this;
  }
  Type & set__hmilcmaindcnri(
    const uint8_t & _arg)
  {
    this->hmilcmaindcnri = _arg;
    return *this;
  }
  Type & set__hmilcmaon(
    const uint8_t & _arg)
  {
    this->hmilcmaon = _arg;
    return *this;
  }
  Type & set__hmilcmaaudwarn(
    const uint8_t & _arg)
  {
    this->hmilcmaaudwarn = _arg;
    return *this;
  }
  Type & set__hmirsdssyssts(
    const uint8_t & _arg)
  {
    this->hmirsdssyssts = _arg;
    return *this;
  }
  Type & set__hmirctaindcnle(
    const uint8_t & _arg)
  {
    this->hmirctaindcnle = _arg;
    return *this;
  }
  Type & set__hmirctaindcnri(
    const uint8_t & _arg)
  {
    this->hmirctaindcnri = _arg;
    return *this;
  }
  Type & set__hmictraon1(
    const uint8_t & _arg)
  {
    this->hmictraon1 = _arg;
    return *this;
  }
  Type & set__hmicllsnwarnreindcn(
    const uint8_t & _arg)
  {
    this->hmicllsnwarnreindcn = _arg;
    return *this;
  }
  Type & set__hmicllsnwarnreon1(
    const uint8_t & _arg)
  {
    this->hmicllsnwarnreon1 = _arg;
    return *this;
  }
  Type & set__hmircwmlireq(
    const uint8_t & _arg)
  {
    this->hmircwmlireq = _arg;
    return *this;
  }
  Type & set__acttnrctabrkreq(
    const uint8_t & _arg)
  {
    this->acttnrctabrkreq = _arg;
    return *this;
  }
  Type & set__acttnrctabrkreqqm(
    const uint8_t & _arg)
  {
    this->acttnrctabrkreqqm = _arg;
    return *this;
  }
  Type & set__acttnrcwmbrkreq(
    const uint8_t & _arg)
  {
    this->acttnrcwmbrkreq = _arg;
    return *this;
  }
  Type & set__acttnrcwmbrkreqqm(
    const uint8_t & _arg)
  {
    this->acttnrcwmbrkreqqm = _arg;
    return *this;
  }
  Type & set__hmiasyemgymanoeuvreaidsts(
    const uint8_t & _arg)
  {
    this->hmiasyemgymanoeuvreaidsts = _arg;
    return *this;
  }
  Type & set__hmicllsnaidpostema(
    const uint8_t & _arg)
  {
    this->hmicllsnaidpostema = _arg;
    return *this;
  }
  Type & set__hmitrfcliinfo(
    const uint8_t & _arg)
  {
    this->hmitrfcliinfo = _arg;
    return *this;
  }
  Type & set__hmitrfclists(
    const uint8_t & _arg)
  {
    this->hmitrfclists = _arg;
    return *this;
  }
  Type & set__hmitrfcliwarntypsts(
    const uint8_t & _arg)
  {
    this->hmitrfcliwarntypsts = _arg;
    return *this;
  }
  Type & set__hmiuturnlight(
    const uint8_t & _arg)
  {
    this->hmiuturnlight = _arg;
    return *this;
  }
  Type & set__hmitrfcliinfoleft(
    const uint8_t & _arg)
  {
    this->hmitrfcliinfoleft = _arg;
    return *this;
  }
  Type & set__hmitrfcliinforight(
    const uint8_t & _arg)
  {
    this->hmitrfcliinforight = _arg;
    return *this;
  }
  Type & set__hmiaebtriggerobjectid(
    const uint8_t & _arg)
  {
    this->hmiaebtriggerobjectid = _arg;
    return *this;
  }
  Type & set__hmielkatriggerobjectid(
    const uint8_t & _arg)
  {
    this->hmielkatriggerobjectid = _arg;
    return *this;
  }
  Type & set__hmifctarighttriggerobjectid(
    const uint8_t & _arg)
  {
    this->hmifctarighttriggerobjectid = _arg;
    return *this;
  }
  Type & set__hmifctalefttriggerobjectid(
    const uint8_t & _arg)
  {
    this->hmifctalefttriggerobjectid = _arg;
    return *this;
  }
  Type & set__hmiematriggerobjectid(
    const uint8_t & _arg)
  {
    this->hmiematriggerobjectid = _arg;
    return *this;
  }
  Type & set__hmirctarighttriggerobjectid(
    const uint8_t & _arg)
  {
    this->hmirctarighttriggerobjectid = _arg;
    return *this;
  }
  Type & set__hmirctalefttriggerobjectid(
    const uint8_t & _arg)
  {
    this->hmirctalefttriggerobjectid = _arg;
    return *this;
  }
  Type & set__hmitrfclichg(
    const uint8_t & _arg)
  {
    this->hmitrfclichg = _arg;
    return *this;
  }
  Type & set__hmifcwtriggerobjectid(
    const uint8_t & _arg)
  {
    this->hmifcwtriggerobjectid = _arg;
    return *this;
  }
  Type & set__lanekeepaidlaneinfo(
    const uint8_t & _arg)
  {
    this->lanekeepaidlaneinfo = _arg;
    return *this;
  }
  Type & set__asyemgylanekeepaidlaneinfo(
    const uint8_t & _arg)
  {
    this->asyemgylanekeepaidlaneinfo = _arg;
    return *this;
  }
  Type & set__hmireserve1(
    const uint16_t & _arg)
  {
    this->hmireserve1 = _arg;
    return *this;
  }
  Type & set__hmireserve2(
    const uint16_t & _arg)
  {
    this->hmireserve2 = _arg;
    return *this;
  }
  Type & set__hmireserve3(
    const uint16_t & _arg)
  {
    this->hmireserve3 = _arg;
    return *this;
  }
  Type & set__hmireserve4(
    const uint16_t & _arg)
  {
    this->hmireserve4 = _arg;
    return *this;
  }
  Type & set__hmireserve5(
    const float & _arg)
  {
    this->hmireserve5 = _arg;
    return *this;
  }
  Type & set__hmireserve6(
    const float & _arg)
  {
    this->hmireserve6 = _arg;
    return *this;
  }
  Type & set__hmireserve7(
    const float & _arg)
  {
    this->hmireserve7 = _arg;
    return *this;
  }
  Type & set__hmireserve8(
    const float & _arg)
  {
    this->hmireserve8 = _arg;
    return *this;
  }
  Type & set__asypinionagreq(
    const float & _arg)
  {
    this->asypinionagreq = _arg;
    return *this;
  }
  Type & set__latctrlagctrltqlowrlim(
    const float & _arg)
  {
    this->latctrlagctrltqlowrlim = _arg;
    return *this;
  }
  Type & set__latctrlagctrltqupprlim(
    const float & _arg)
  {
    this->latctrlagctrltqupprlim = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::ADASFunctionStatusIntra_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::ADASFunctionStatusIntra_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::ADASFunctionStatusIntra_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::ADASFunctionStatusIntra_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::ADASFunctionStatusIntra_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::ADASFunctionStatusIntra_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::ADASFunctionStatusIntra_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::ADASFunctionStatusIntra_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::ADASFunctionStatusIntra_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::ADASFunctionStatusIntra_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__ADASFunctionStatusIntra
    std::shared_ptr<deva_function_msgs::msg::ADASFunctionStatusIntra_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__ADASFunctionStatusIntra
    std::shared_ptr<deva_function_msgs::msg::ADASFunctionStatusIntra_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ADASFunctionStatusIntra_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->acttnasylatctrlmodreq != other.acttnasylatctrlmodreq) {
      return false;
    }
    if (this->acttnasysftyenadecelbydbs != other.acttnasysftyenadecelbydbs) {
      return false;
    }
    if (this->acttnasysftyhwlreq != other.acttnasysftyhwlreq) {
      return false;
    }
    if (this->acttnasysftystandstillreq != other.acttnasysftystandstillreq) {
      return false;
    }
    if (this->acttnasysteerwhlhptcwarnreq != other.acttnasysteerwhlhptcwarnreq) {
      return false;
    }
    if (this->acttnbrkhptcwarnreqforautdrv != other.acttnbrkhptcwarnreqforautdrv) {
      return false;
    }
    if (this->acttnbrkprecactv != other.acttnbrkprecactv) {
      return false;
    }
    if (this->acttncllsnthreat != other.acttncllsnthreat) {
      return false;
    }
    if (this->hmiasyemgylanekeepaid != other.hmiasyemgylanekeepaid) {
      return false;
    }
    if (this->hmiasyemgylanekeepaidsts != other.hmiasyemgylanekeepaidsts) {
      return false;
    }
    if (this->hmiasylanechgwarnmod != other.hmiasylanechgwarnmod) {
      return false;
    }
    if (this->hmiasylanekeepaidsts != other.hmiasylanekeepaidsts) {
      return false;
    }
    if (this->hmiasyobjtype != other.hmiasyobjtype) {
      return false;
    }
    if (this->hmiasysteerapplyrqrd != other.hmiasysteerapplyrqrd) {
      return false;
    }
    if (this->hmiasywarnforsteercncl != other.hmiasywarnforsteercncl) {
      return false;
    }
    if (this->hmicllsnaidpost != other.hmicllsnaidpost) {
      return false;
    }
    if (this->hmicllsnfwdwarn != other.hmicllsnfwdwarn) {
      return false;
    }
    if (this->hmicllsnmtgtnfaultsts != other.hmicllsnmtgtnfaultsts) {
      return false;
    }
    if (this->hmicllsnmtgtnfctsts != other.hmicllsnmtgtnfctsts) {
      return false;
    }
    if (this->hmicllsnmtgtnwarnsts != other.hmicllsnmtgtnwarnsts) {
      return false;
    }
    if (this->hmictryforroadsgninfo != other.hmictryforroadsgninfo) {
      return false;
    }
    if (this->hmiintvandwarnmodinfosts != other.hmiintvandwarnmodinfosts) {
      return false;
    }
    if (this->hmilanechgwarnsts != other.hmilanechgwarnsts) {
      return false;
    }
    if (this->hmilanekeepaidinfosts != other.hmilanekeepaidinfosts) {
      return false;
    }
    if (this->hminontrvrsbleroadedgeonleft != other.hminontrvrsbleroadedgeonleft) {
      return false;
    }
    if (this->hminontrvrsbleroadedgeonright != other.hminontrvrsbleroadedgeonright) {
      return false;
    }
    if (this->hmioffsforspdwarnsetgsts != other.hmioffsforspdwarnsetgsts) {
      return false;
    }
    if (this->hmiroadmiscsgninfosts != other.hmiroadmiscsgninfosts) {
      return false;
    }
    if (this->hmiroadsgninfosts != other.hmiroadsgninfosts) {
      return false;
    }
    if (this->hmispdalrmactvsts != other.hmispdalrmactvsts) {
      return false;
    }
    if (this->hmitrfcinfomiscfirst != other.hmitrfcinfomiscfirst) {
      return false;
    }
    if (this->hmiwarnforasyemgylanekeepaid != other.hmiwarnforasyemgylanekeepaid) {
      return false;
    }
    if (this->hmicllsnmtgtnonoffsts != other.hmicllsnmtgtnonoffsts) {
      return false;
    }
    if (this->hmidooropenwarnon1 != other.hmidooropenwarnon1) {
      return false;
    }
    if (this->hmidooropenwarnleindcn != other.hmidooropenwarnleindcn) {
      return false;
    }
    if (this->hmidooropenwarnriindcn != other.hmidooropenwarnriindcn) {
      return false;
    }
    if (this->hmilettclv != other.hmilettclv) {
      return false;
    }
    if (this->hmirittclv != other.hmirittclv) {
      return false;
    }
    if (this->hmifctaindcnle != other.hmifctaindcnle) {
      return false;
    }
    if (this->hmifctaindcnri != other.hmifctaindcnri) {
      return false;
    }
    if (this->hmilcmaindcnle != other.hmilcmaindcnle) {
      return false;
    }
    if (this->hmilcmaindcnri != other.hmilcmaindcnri) {
      return false;
    }
    if (this->hmilcmaon != other.hmilcmaon) {
      return false;
    }
    if (this->hmilcmaaudwarn != other.hmilcmaaudwarn) {
      return false;
    }
    if (this->hmirsdssyssts != other.hmirsdssyssts) {
      return false;
    }
    if (this->hmirctaindcnle != other.hmirctaindcnle) {
      return false;
    }
    if (this->hmirctaindcnri != other.hmirctaindcnri) {
      return false;
    }
    if (this->hmictraon1 != other.hmictraon1) {
      return false;
    }
    if (this->hmicllsnwarnreindcn != other.hmicllsnwarnreindcn) {
      return false;
    }
    if (this->hmicllsnwarnreon1 != other.hmicllsnwarnreon1) {
      return false;
    }
    if (this->hmircwmlireq != other.hmircwmlireq) {
      return false;
    }
    if (this->acttnrctabrkreq != other.acttnrctabrkreq) {
      return false;
    }
    if (this->acttnrctabrkreqqm != other.acttnrctabrkreqqm) {
      return false;
    }
    if (this->acttnrcwmbrkreq != other.acttnrcwmbrkreq) {
      return false;
    }
    if (this->acttnrcwmbrkreqqm != other.acttnrcwmbrkreqqm) {
      return false;
    }
    if (this->hmiasyemgymanoeuvreaidsts != other.hmiasyemgymanoeuvreaidsts) {
      return false;
    }
    if (this->hmicllsnaidpostema != other.hmicllsnaidpostema) {
      return false;
    }
    if (this->hmitrfcliinfo != other.hmitrfcliinfo) {
      return false;
    }
    if (this->hmitrfclists != other.hmitrfclists) {
      return false;
    }
    if (this->hmitrfcliwarntypsts != other.hmitrfcliwarntypsts) {
      return false;
    }
    if (this->hmiuturnlight != other.hmiuturnlight) {
      return false;
    }
    if (this->hmitrfcliinfoleft != other.hmitrfcliinfoleft) {
      return false;
    }
    if (this->hmitrfcliinforight != other.hmitrfcliinforight) {
      return false;
    }
    if (this->hmiaebtriggerobjectid != other.hmiaebtriggerobjectid) {
      return false;
    }
    if (this->hmielkatriggerobjectid != other.hmielkatriggerobjectid) {
      return false;
    }
    if (this->hmifctarighttriggerobjectid != other.hmifctarighttriggerobjectid) {
      return false;
    }
    if (this->hmifctalefttriggerobjectid != other.hmifctalefttriggerobjectid) {
      return false;
    }
    if (this->hmiematriggerobjectid != other.hmiematriggerobjectid) {
      return false;
    }
    if (this->hmirctarighttriggerobjectid != other.hmirctarighttriggerobjectid) {
      return false;
    }
    if (this->hmirctalefttriggerobjectid != other.hmirctalefttriggerobjectid) {
      return false;
    }
    if (this->hmitrfclichg != other.hmitrfclichg) {
      return false;
    }
    if (this->hmifcwtriggerobjectid != other.hmifcwtriggerobjectid) {
      return false;
    }
    if (this->lanekeepaidlaneinfo != other.lanekeepaidlaneinfo) {
      return false;
    }
    if (this->asyemgylanekeepaidlaneinfo != other.asyemgylanekeepaidlaneinfo) {
      return false;
    }
    if (this->hmireserve1 != other.hmireserve1) {
      return false;
    }
    if (this->hmireserve2 != other.hmireserve2) {
      return false;
    }
    if (this->hmireserve3 != other.hmireserve3) {
      return false;
    }
    if (this->hmireserve4 != other.hmireserve4) {
      return false;
    }
    if (this->hmireserve5 != other.hmireserve5) {
      return false;
    }
    if (this->hmireserve6 != other.hmireserve6) {
      return false;
    }
    if (this->hmireserve7 != other.hmireserve7) {
      return false;
    }
    if (this->hmireserve8 != other.hmireserve8) {
      return false;
    }
    if (this->asypinionagreq != other.asypinionagreq) {
      return false;
    }
    if (this->latctrlagctrltqlowrlim != other.latctrlagctrltqlowrlim) {
      return false;
    }
    if (this->latctrlagctrltqupprlim != other.latctrlagctrltqupprlim) {
      return false;
    }
    return true;
  }
  bool operator!=(const ADASFunctionStatusIntra_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ADASFunctionStatusIntra_

// alias to use template instance with default allocator
using ADASFunctionStatusIntra =
  deva_function_msgs::msg::ADASFunctionStatusIntra_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_STATUS_INTRA__STRUCT_HPP_
