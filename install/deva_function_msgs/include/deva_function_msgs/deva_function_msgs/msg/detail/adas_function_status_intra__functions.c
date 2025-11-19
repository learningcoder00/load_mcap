// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/ADASFunctionStatusIntra.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/adas_function_status_intra__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"

bool
deva_function_msgs__msg__ADASFunctionStatusIntra__init(deva_function_msgs__msg__ADASFunctionStatusIntra * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_function_msgs__msg__ADASFunctionStatusIntra__fini(msg);
    return false;
  }
  // acttnasylatctrlmodreq
  // acttnasysftyenadecelbydbs
  // acttnasysftyhwlreq
  // acttnasysftystandstillreq
  // acttnasysteerwhlhptcwarnreq
  // acttnbrkhptcwarnreqforautdrv
  // acttnbrkprecactv
  // acttncllsnthreat
  // hmiasyemgylanekeepaid
  // hmiasyemgylanekeepaidsts
  // hmiasylanechgwarnmod
  // hmiasylanekeepaidsts
  // hmiasyobjtype
  // hmiasysteerapplyrqrd
  // hmiasywarnforsteercncl
  // hmicllsnaidpost
  // hmicllsnfwdwarn
  // hmicllsnmtgtnfaultsts
  // hmicllsnmtgtnfctsts
  // hmicllsnmtgtnwarnsts
  // hmictryforroadsgninfo
  // hmiintvandwarnmodinfosts
  // hmilanechgwarnsts
  // hmilanekeepaidinfosts
  // hminontrvrsbleroadedgeonleft
  // hminontrvrsbleroadedgeonright
  // hmioffsforspdwarnsetgsts
  // hmiroadmiscsgninfosts
  // hmiroadsgninfosts
  // hmispdalrmactvsts
  // hmitrfcinfomiscfirst
  // hmiwarnforasyemgylanekeepaid
  // hmicllsnmtgtnonoffsts
  // hmidooropenwarnon1
  // hmidooropenwarnleindcn
  // hmidooropenwarnriindcn
  // hmilettclv
  // hmirittclv
  // hmifctaindcnle
  // hmifctaindcnri
  // hmilcmaindcnle
  // hmilcmaindcnri
  // hmilcmaon
  // hmilcmaaudwarn
  // hmirsdssyssts
  // hmirctaindcnle
  // hmirctaindcnri
  // hmictraon1
  // hmicllsnwarnreindcn
  // hmicllsnwarnreon1
  // hmircwmlireq
  // acttnrctabrkreq
  // acttnrctabrkreqqm
  // acttnrcwmbrkreq
  // acttnrcwmbrkreqqm
  // hmiasyemgymanoeuvreaidsts
  // hmicllsnaidpostema
  // hmitrfcliinfo
  // hmitrfclists
  // hmitrfcliwarntypsts
  // hmiuturnlight
  // hmitrfcliinfoleft
  // hmitrfcliinforight
  // hmiaebtriggerobjectid
  // hmielkatriggerobjectid
  // hmifctarighttriggerobjectid
  // hmifctalefttriggerobjectid
  // hmiematriggerobjectid
  // hmirctarighttriggerobjectid
  // hmirctalefttriggerobjectid
  // hmitrfclichg
  // hmifcwtriggerobjectid
  // lanekeepaidlaneinfo
  // asyemgylanekeepaidlaneinfo
  // hmireserve1
  // hmireserve2
  // hmireserve3
  // hmireserve4
  // hmireserve5
  // hmireserve6
  // hmireserve7
  // hmireserve8
  // asypinionagreq
  // latctrlagctrltqlowrlim
  // latctrlagctrltqupprlim
  return true;
}

void
deva_function_msgs__msg__ADASFunctionStatusIntra__fini(deva_function_msgs__msg__ADASFunctionStatusIntra * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // acttnasylatctrlmodreq
  // acttnasysftyenadecelbydbs
  // acttnasysftyhwlreq
  // acttnasysftystandstillreq
  // acttnasysteerwhlhptcwarnreq
  // acttnbrkhptcwarnreqforautdrv
  // acttnbrkprecactv
  // acttncllsnthreat
  // hmiasyemgylanekeepaid
  // hmiasyemgylanekeepaidsts
  // hmiasylanechgwarnmod
  // hmiasylanekeepaidsts
  // hmiasyobjtype
  // hmiasysteerapplyrqrd
  // hmiasywarnforsteercncl
  // hmicllsnaidpost
  // hmicllsnfwdwarn
  // hmicllsnmtgtnfaultsts
  // hmicllsnmtgtnfctsts
  // hmicllsnmtgtnwarnsts
  // hmictryforroadsgninfo
  // hmiintvandwarnmodinfosts
  // hmilanechgwarnsts
  // hmilanekeepaidinfosts
  // hminontrvrsbleroadedgeonleft
  // hminontrvrsbleroadedgeonright
  // hmioffsforspdwarnsetgsts
  // hmiroadmiscsgninfosts
  // hmiroadsgninfosts
  // hmispdalrmactvsts
  // hmitrfcinfomiscfirst
  // hmiwarnforasyemgylanekeepaid
  // hmicllsnmtgtnonoffsts
  // hmidooropenwarnon1
  // hmidooropenwarnleindcn
  // hmidooropenwarnriindcn
  // hmilettclv
  // hmirittclv
  // hmifctaindcnle
  // hmifctaindcnri
  // hmilcmaindcnle
  // hmilcmaindcnri
  // hmilcmaon
  // hmilcmaaudwarn
  // hmirsdssyssts
  // hmirctaindcnle
  // hmirctaindcnri
  // hmictraon1
  // hmicllsnwarnreindcn
  // hmicllsnwarnreon1
  // hmircwmlireq
  // acttnrctabrkreq
  // acttnrctabrkreqqm
  // acttnrcwmbrkreq
  // acttnrcwmbrkreqqm
  // hmiasyemgymanoeuvreaidsts
  // hmicllsnaidpostema
  // hmitrfcliinfo
  // hmitrfclists
  // hmitrfcliwarntypsts
  // hmiuturnlight
  // hmitrfcliinfoleft
  // hmitrfcliinforight
  // hmiaebtriggerobjectid
  // hmielkatriggerobjectid
  // hmifctarighttriggerobjectid
  // hmifctalefttriggerobjectid
  // hmiematriggerobjectid
  // hmirctarighttriggerobjectid
  // hmirctalefttriggerobjectid
  // hmitrfclichg
  // hmifcwtriggerobjectid
  // lanekeepaidlaneinfo
  // asyemgylanekeepaidlaneinfo
  // hmireserve1
  // hmireserve2
  // hmireserve3
  // hmireserve4
  // hmireserve5
  // hmireserve6
  // hmireserve7
  // hmireserve8
  // asypinionagreq
  // latctrlagctrltqlowrlim
  // latctrlagctrltqupprlim
}

bool
deva_function_msgs__msg__ADASFunctionStatusIntra__are_equal(const deva_function_msgs__msg__ADASFunctionStatusIntra * lhs, const deva_function_msgs__msg__ADASFunctionStatusIntra * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // acttnasylatctrlmodreq
  if (lhs->acttnasylatctrlmodreq != rhs->acttnasylatctrlmodreq) {
    return false;
  }
  // acttnasysftyenadecelbydbs
  if (lhs->acttnasysftyenadecelbydbs != rhs->acttnasysftyenadecelbydbs) {
    return false;
  }
  // acttnasysftyhwlreq
  if (lhs->acttnasysftyhwlreq != rhs->acttnasysftyhwlreq) {
    return false;
  }
  // acttnasysftystandstillreq
  if (lhs->acttnasysftystandstillreq != rhs->acttnasysftystandstillreq) {
    return false;
  }
  // acttnasysteerwhlhptcwarnreq
  if (lhs->acttnasysteerwhlhptcwarnreq != rhs->acttnasysteerwhlhptcwarnreq) {
    return false;
  }
  // acttnbrkhptcwarnreqforautdrv
  if (lhs->acttnbrkhptcwarnreqforautdrv != rhs->acttnbrkhptcwarnreqforautdrv) {
    return false;
  }
  // acttnbrkprecactv
  if (lhs->acttnbrkprecactv != rhs->acttnbrkprecactv) {
    return false;
  }
  // acttncllsnthreat
  if (lhs->acttncllsnthreat != rhs->acttncllsnthreat) {
    return false;
  }
  // hmiasyemgylanekeepaid
  if (lhs->hmiasyemgylanekeepaid != rhs->hmiasyemgylanekeepaid) {
    return false;
  }
  // hmiasyemgylanekeepaidsts
  if (lhs->hmiasyemgylanekeepaidsts != rhs->hmiasyemgylanekeepaidsts) {
    return false;
  }
  // hmiasylanechgwarnmod
  if (lhs->hmiasylanechgwarnmod != rhs->hmiasylanechgwarnmod) {
    return false;
  }
  // hmiasylanekeepaidsts
  if (lhs->hmiasylanekeepaidsts != rhs->hmiasylanekeepaidsts) {
    return false;
  }
  // hmiasyobjtype
  if (lhs->hmiasyobjtype != rhs->hmiasyobjtype) {
    return false;
  }
  // hmiasysteerapplyrqrd
  if (lhs->hmiasysteerapplyrqrd != rhs->hmiasysteerapplyrqrd) {
    return false;
  }
  // hmiasywarnforsteercncl
  if (lhs->hmiasywarnforsteercncl != rhs->hmiasywarnforsteercncl) {
    return false;
  }
  // hmicllsnaidpost
  if (lhs->hmicllsnaidpost != rhs->hmicllsnaidpost) {
    return false;
  }
  // hmicllsnfwdwarn
  if (lhs->hmicllsnfwdwarn != rhs->hmicllsnfwdwarn) {
    return false;
  }
  // hmicllsnmtgtnfaultsts
  if (lhs->hmicllsnmtgtnfaultsts != rhs->hmicllsnmtgtnfaultsts) {
    return false;
  }
  // hmicllsnmtgtnfctsts
  if (lhs->hmicllsnmtgtnfctsts != rhs->hmicllsnmtgtnfctsts) {
    return false;
  }
  // hmicllsnmtgtnwarnsts
  if (lhs->hmicllsnmtgtnwarnsts != rhs->hmicllsnmtgtnwarnsts) {
    return false;
  }
  // hmictryforroadsgninfo
  if (lhs->hmictryforroadsgninfo != rhs->hmictryforroadsgninfo) {
    return false;
  }
  // hmiintvandwarnmodinfosts
  if (lhs->hmiintvandwarnmodinfosts != rhs->hmiintvandwarnmodinfosts) {
    return false;
  }
  // hmilanechgwarnsts
  if (lhs->hmilanechgwarnsts != rhs->hmilanechgwarnsts) {
    return false;
  }
  // hmilanekeepaidinfosts
  if (lhs->hmilanekeepaidinfosts != rhs->hmilanekeepaidinfosts) {
    return false;
  }
  // hminontrvrsbleroadedgeonleft
  if (lhs->hminontrvrsbleroadedgeonleft != rhs->hminontrvrsbleroadedgeonleft) {
    return false;
  }
  // hminontrvrsbleroadedgeonright
  if (lhs->hminontrvrsbleroadedgeonright != rhs->hminontrvrsbleroadedgeonright) {
    return false;
  }
  // hmioffsforspdwarnsetgsts
  if (lhs->hmioffsforspdwarnsetgsts != rhs->hmioffsforspdwarnsetgsts) {
    return false;
  }
  // hmiroadmiscsgninfosts
  if (lhs->hmiroadmiscsgninfosts != rhs->hmiroadmiscsgninfosts) {
    return false;
  }
  // hmiroadsgninfosts
  if (lhs->hmiroadsgninfosts != rhs->hmiroadsgninfosts) {
    return false;
  }
  // hmispdalrmactvsts
  if (lhs->hmispdalrmactvsts != rhs->hmispdalrmactvsts) {
    return false;
  }
  // hmitrfcinfomiscfirst
  if (lhs->hmitrfcinfomiscfirst != rhs->hmitrfcinfomiscfirst) {
    return false;
  }
  // hmiwarnforasyemgylanekeepaid
  if (lhs->hmiwarnforasyemgylanekeepaid != rhs->hmiwarnforasyemgylanekeepaid) {
    return false;
  }
  // hmicllsnmtgtnonoffsts
  if (lhs->hmicllsnmtgtnonoffsts != rhs->hmicllsnmtgtnonoffsts) {
    return false;
  }
  // hmidooropenwarnon1
  if (lhs->hmidooropenwarnon1 != rhs->hmidooropenwarnon1) {
    return false;
  }
  // hmidooropenwarnleindcn
  if (lhs->hmidooropenwarnleindcn != rhs->hmidooropenwarnleindcn) {
    return false;
  }
  // hmidooropenwarnriindcn
  if (lhs->hmidooropenwarnriindcn != rhs->hmidooropenwarnriindcn) {
    return false;
  }
  // hmilettclv
  if (lhs->hmilettclv != rhs->hmilettclv) {
    return false;
  }
  // hmirittclv
  if (lhs->hmirittclv != rhs->hmirittclv) {
    return false;
  }
  // hmifctaindcnle
  if (lhs->hmifctaindcnle != rhs->hmifctaindcnle) {
    return false;
  }
  // hmifctaindcnri
  if (lhs->hmifctaindcnri != rhs->hmifctaindcnri) {
    return false;
  }
  // hmilcmaindcnle
  if (lhs->hmilcmaindcnle != rhs->hmilcmaindcnle) {
    return false;
  }
  // hmilcmaindcnri
  if (lhs->hmilcmaindcnri != rhs->hmilcmaindcnri) {
    return false;
  }
  // hmilcmaon
  if (lhs->hmilcmaon != rhs->hmilcmaon) {
    return false;
  }
  // hmilcmaaudwarn
  if (lhs->hmilcmaaudwarn != rhs->hmilcmaaudwarn) {
    return false;
  }
  // hmirsdssyssts
  if (lhs->hmirsdssyssts != rhs->hmirsdssyssts) {
    return false;
  }
  // hmirctaindcnle
  if (lhs->hmirctaindcnle != rhs->hmirctaindcnle) {
    return false;
  }
  // hmirctaindcnri
  if (lhs->hmirctaindcnri != rhs->hmirctaindcnri) {
    return false;
  }
  // hmictraon1
  if (lhs->hmictraon1 != rhs->hmictraon1) {
    return false;
  }
  // hmicllsnwarnreindcn
  if (lhs->hmicllsnwarnreindcn != rhs->hmicllsnwarnreindcn) {
    return false;
  }
  // hmicllsnwarnreon1
  if (lhs->hmicllsnwarnreon1 != rhs->hmicllsnwarnreon1) {
    return false;
  }
  // hmircwmlireq
  if (lhs->hmircwmlireq != rhs->hmircwmlireq) {
    return false;
  }
  // acttnrctabrkreq
  if (lhs->acttnrctabrkreq != rhs->acttnrctabrkreq) {
    return false;
  }
  // acttnrctabrkreqqm
  if (lhs->acttnrctabrkreqqm != rhs->acttnrctabrkreqqm) {
    return false;
  }
  // acttnrcwmbrkreq
  if (lhs->acttnrcwmbrkreq != rhs->acttnrcwmbrkreq) {
    return false;
  }
  // acttnrcwmbrkreqqm
  if (lhs->acttnrcwmbrkreqqm != rhs->acttnrcwmbrkreqqm) {
    return false;
  }
  // hmiasyemgymanoeuvreaidsts
  if (lhs->hmiasyemgymanoeuvreaidsts != rhs->hmiasyemgymanoeuvreaidsts) {
    return false;
  }
  // hmicllsnaidpostema
  if (lhs->hmicllsnaidpostema != rhs->hmicllsnaidpostema) {
    return false;
  }
  // hmitrfcliinfo
  if (lhs->hmitrfcliinfo != rhs->hmitrfcliinfo) {
    return false;
  }
  // hmitrfclists
  if (lhs->hmitrfclists != rhs->hmitrfclists) {
    return false;
  }
  // hmitrfcliwarntypsts
  if (lhs->hmitrfcliwarntypsts != rhs->hmitrfcliwarntypsts) {
    return false;
  }
  // hmiuturnlight
  if (lhs->hmiuturnlight != rhs->hmiuturnlight) {
    return false;
  }
  // hmitrfcliinfoleft
  if (lhs->hmitrfcliinfoleft != rhs->hmitrfcliinfoleft) {
    return false;
  }
  // hmitrfcliinforight
  if (lhs->hmitrfcliinforight != rhs->hmitrfcliinforight) {
    return false;
  }
  // hmiaebtriggerobjectid
  if (lhs->hmiaebtriggerobjectid != rhs->hmiaebtriggerobjectid) {
    return false;
  }
  // hmielkatriggerobjectid
  if (lhs->hmielkatriggerobjectid != rhs->hmielkatriggerobjectid) {
    return false;
  }
  // hmifctarighttriggerobjectid
  if (lhs->hmifctarighttriggerobjectid != rhs->hmifctarighttriggerobjectid) {
    return false;
  }
  // hmifctalefttriggerobjectid
  if (lhs->hmifctalefttriggerobjectid != rhs->hmifctalefttriggerobjectid) {
    return false;
  }
  // hmiematriggerobjectid
  if (lhs->hmiematriggerobjectid != rhs->hmiematriggerobjectid) {
    return false;
  }
  // hmirctarighttriggerobjectid
  if (lhs->hmirctarighttriggerobjectid != rhs->hmirctarighttriggerobjectid) {
    return false;
  }
  // hmirctalefttriggerobjectid
  if (lhs->hmirctalefttriggerobjectid != rhs->hmirctalefttriggerobjectid) {
    return false;
  }
  // hmitrfclichg
  if (lhs->hmitrfclichg != rhs->hmitrfclichg) {
    return false;
  }
  // hmifcwtriggerobjectid
  if (lhs->hmifcwtriggerobjectid != rhs->hmifcwtriggerobjectid) {
    return false;
  }
  // lanekeepaidlaneinfo
  if (lhs->lanekeepaidlaneinfo != rhs->lanekeepaidlaneinfo) {
    return false;
  }
  // asyemgylanekeepaidlaneinfo
  if (lhs->asyemgylanekeepaidlaneinfo != rhs->asyemgylanekeepaidlaneinfo) {
    return false;
  }
  // hmireserve1
  if (lhs->hmireserve1 != rhs->hmireserve1) {
    return false;
  }
  // hmireserve2
  if (lhs->hmireserve2 != rhs->hmireserve2) {
    return false;
  }
  // hmireserve3
  if (lhs->hmireserve3 != rhs->hmireserve3) {
    return false;
  }
  // hmireserve4
  if (lhs->hmireserve4 != rhs->hmireserve4) {
    return false;
  }
  // hmireserve5
  if (lhs->hmireserve5 != rhs->hmireserve5) {
    return false;
  }
  // hmireserve6
  if (lhs->hmireserve6 != rhs->hmireserve6) {
    return false;
  }
  // hmireserve7
  if (lhs->hmireserve7 != rhs->hmireserve7) {
    return false;
  }
  // hmireserve8
  if (lhs->hmireserve8 != rhs->hmireserve8) {
    return false;
  }
  // asypinionagreq
  if (lhs->asypinionagreq != rhs->asypinionagreq) {
    return false;
  }
  // latctrlagctrltqlowrlim
  if (lhs->latctrlagctrltqlowrlim != rhs->latctrlagctrltqlowrlim) {
    return false;
  }
  // latctrlagctrltqupprlim
  if (lhs->latctrlagctrltqupprlim != rhs->latctrlagctrltqupprlim) {
    return false;
  }
  return true;
}

bool
deva_function_msgs__msg__ADASFunctionStatusIntra__copy(
  const deva_function_msgs__msg__ADASFunctionStatusIntra * input,
  deva_function_msgs__msg__ADASFunctionStatusIntra * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // acttnasylatctrlmodreq
  output->acttnasylatctrlmodreq = input->acttnasylatctrlmodreq;
  // acttnasysftyenadecelbydbs
  output->acttnasysftyenadecelbydbs = input->acttnasysftyenadecelbydbs;
  // acttnasysftyhwlreq
  output->acttnasysftyhwlreq = input->acttnasysftyhwlreq;
  // acttnasysftystandstillreq
  output->acttnasysftystandstillreq = input->acttnasysftystandstillreq;
  // acttnasysteerwhlhptcwarnreq
  output->acttnasysteerwhlhptcwarnreq = input->acttnasysteerwhlhptcwarnreq;
  // acttnbrkhptcwarnreqforautdrv
  output->acttnbrkhptcwarnreqforautdrv = input->acttnbrkhptcwarnreqforautdrv;
  // acttnbrkprecactv
  output->acttnbrkprecactv = input->acttnbrkprecactv;
  // acttncllsnthreat
  output->acttncllsnthreat = input->acttncllsnthreat;
  // hmiasyemgylanekeepaid
  output->hmiasyemgylanekeepaid = input->hmiasyemgylanekeepaid;
  // hmiasyemgylanekeepaidsts
  output->hmiasyemgylanekeepaidsts = input->hmiasyemgylanekeepaidsts;
  // hmiasylanechgwarnmod
  output->hmiasylanechgwarnmod = input->hmiasylanechgwarnmod;
  // hmiasylanekeepaidsts
  output->hmiasylanekeepaidsts = input->hmiasylanekeepaidsts;
  // hmiasyobjtype
  output->hmiasyobjtype = input->hmiasyobjtype;
  // hmiasysteerapplyrqrd
  output->hmiasysteerapplyrqrd = input->hmiasysteerapplyrqrd;
  // hmiasywarnforsteercncl
  output->hmiasywarnforsteercncl = input->hmiasywarnforsteercncl;
  // hmicllsnaidpost
  output->hmicllsnaidpost = input->hmicllsnaidpost;
  // hmicllsnfwdwarn
  output->hmicllsnfwdwarn = input->hmicllsnfwdwarn;
  // hmicllsnmtgtnfaultsts
  output->hmicllsnmtgtnfaultsts = input->hmicllsnmtgtnfaultsts;
  // hmicllsnmtgtnfctsts
  output->hmicllsnmtgtnfctsts = input->hmicllsnmtgtnfctsts;
  // hmicllsnmtgtnwarnsts
  output->hmicllsnmtgtnwarnsts = input->hmicllsnmtgtnwarnsts;
  // hmictryforroadsgninfo
  output->hmictryforroadsgninfo = input->hmictryforroadsgninfo;
  // hmiintvandwarnmodinfosts
  output->hmiintvandwarnmodinfosts = input->hmiintvandwarnmodinfosts;
  // hmilanechgwarnsts
  output->hmilanechgwarnsts = input->hmilanechgwarnsts;
  // hmilanekeepaidinfosts
  output->hmilanekeepaidinfosts = input->hmilanekeepaidinfosts;
  // hminontrvrsbleroadedgeonleft
  output->hminontrvrsbleroadedgeonleft = input->hminontrvrsbleroadedgeonleft;
  // hminontrvrsbleroadedgeonright
  output->hminontrvrsbleroadedgeonright = input->hminontrvrsbleroadedgeonright;
  // hmioffsforspdwarnsetgsts
  output->hmioffsforspdwarnsetgsts = input->hmioffsforspdwarnsetgsts;
  // hmiroadmiscsgninfosts
  output->hmiroadmiscsgninfosts = input->hmiroadmiscsgninfosts;
  // hmiroadsgninfosts
  output->hmiroadsgninfosts = input->hmiroadsgninfosts;
  // hmispdalrmactvsts
  output->hmispdalrmactvsts = input->hmispdalrmactvsts;
  // hmitrfcinfomiscfirst
  output->hmitrfcinfomiscfirst = input->hmitrfcinfomiscfirst;
  // hmiwarnforasyemgylanekeepaid
  output->hmiwarnforasyemgylanekeepaid = input->hmiwarnforasyemgylanekeepaid;
  // hmicllsnmtgtnonoffsts
  output->hmicllsnmtgtnonoffsts = input->hmicllsnmtgtnonoffsts;
  // hmidooropenwarnon1
  output->hmidooropenwarnon1 = input->hmidooropenwarnon1;
  // hmidooropenwarnleindcn
  output->hmidooropenwarnleindcn = input->hmidooropenwarnleindcn;
  // hmidooropenwarnriindcn
  output->hmidooropenwarnriindcn = input->hmidooropenwarnriindcn;
  // hmilettclv
  output->hmilettclv = input->hmilettclv;
  // hmirittclv
  output->hmirittclv = input->hmirittclv;
  // hmifctaindcnle
  output->hmifctaindcnle = input->hmifctaindcnle;
  // hmifctaindcnri
  output->hmifctaindcnri = input->hmifctaindcnri;
  // hmilcmaindcnle
  output->hmilcmaindcnle = input->hmilcmaindcnle;
  // hmilcmaindcnri
  output->hmilcmaindcnri = input->hmilcmaindcnri;
  // hmilcmaon
  output->hmilcmaon = input->hmilcmaon;
  // hmilcmaaudwarn
  output->hmilcmaaudwarn = input->hmilcmaaudwarn;
  // hmirsdssyssts
  output->hmirsdssyssts = input->hmirsdssyssts;
  // hmirctaindcnle
  output->hmirctaindcnle = input->hmirctaindcnle;
  // hmirctaindcnri
  output->hmirctaindcnri = input->hmirctaindcnri;
  // hmictraon1
  output->hmictraon1 = input->hmictraon1;
  // hmicllsnwarnreindcn
  output->hmicllsnwarnreindcn = input->hmicllsnwarnreindcn;
  // hmicllsnwarnreon1
  output->hmicllsnwarnreon1 = input->hmicllsnwarnreon1;
  // hmircwmlireq
  output->hmircwmlireq = input->hmircwmlireq;
  // acttnrctabrkreq
  output->acttnrctabrkreq = input->acttnrctabrkreq;
  // acttnrctabrkreqqm
  output->acttnrctabrkreqqm = input->acttnrctabrkreqqm;
  // acttnrcwmbrkreq
  output->acttnrcwmbrkreq = input->acttnrcwmbrkreq;
  // acttnrcwmbrkreqqm
  output->acttnrcwmbrkreqqm = input->acttnrcwmbrkreqqm;
  // hmiasyemgymanoeuvreaidsts
  output->hmiasyemgymanoeuvreaidsts = input->hmiasyemgymanoeuvreaidsts;
  // hmicllsnaidpostema
  output->hmicllsnaidpostema = input->hmicllsnaidpostema;
  // hmitrfcliinfo
  output->hmitrfcliinfo = input->hmitrfcliinfo;
  // hmitrfclists
  output->hmitrfclists = input->hmitrfclists;
  // hmitrfcliwarntypsts
  output->hmitrfcliwarntypsts = input->hmitrfcliwarntypsts;
  // hmiuturnlight
  output->hmiuturnlight = input->hmiuturnlight;
  // hmitrfcliinfoleft
  output->hmitrfcliinfoleft = input->hmitrfcliinfoleft;
  // hmitrfcliinforight
  output->hmitrfcliinforight = input->hmitrfcliinforight;
  // hmiaebtriggerobjectid
  output->hmiaebtriggerobjectid = input->hmiaebtriggerobjectid;
  // hmielkatriggerobjectid
  output->hmielkatriggerobjectid = input->hmielkatriggerobjectid;
  // hmifctarighttriggerobjectid
  output->hmifctarighttriggerobjectid = input->hmifctarighttriggerobjectid;
  // hmifctalefttriggerobjectid
  output->hmifctalefttriggerobjectid = input->hmifctalefttriggerobjectid;
  // hmiematriggerobjectid
  output->hmiematriggerobjectid = input->hmiematriggerobjectid;
  // hmirctarighttriggerobjectid
  output->hmirctarighttriggerobjectid = input->hmirctarighttriggerobjectid;
  // hmirctalefttriggerobjectid
  output->hmirctalefttriggerobjectid = input->hmirctalefttriggerobjectid;
  // hmitrfclichg
  output->hmitrfclichg = input->hmitrfclichg;
  // hmifcwtriggerobjectid
  output->hmifcwtriggerobjectid = input->hmifcwtriggerobjectid;
  // lanekeepaidlaneinfo
  output->lanekeepaidlaneinfo = input->lanekeepaidlaneinfo;
  // asyemgylanekeepaidlaneinfo
  output->asyemgylanekeepaidlaneinfo = input->asyemgylanekeepaidlaneinfo;
  // hmireserve1
  output->hmireserve1 = input->hmireserve1;
  // hmireserve2
  output->hmireserve2 = input->hmireserve2;
  // hmireserve3
  output->hmireserve3 = input->hmireserve3;
  // hmireserve4
  output->hmireserve4 = input->hmireserve4;
  // hmireserve5
  output->hmireserve5 = input->hmireserve5;
  // hmireserve6
  output->hmireserve6 = input->hmireserve6;
  // hmireserve7
  output->hmireserve7 = input->hmireserve7;
  // hmireserve8
  output->hmireserve8 = input->hmireserve8;
  // asypinionagreq
  output->asypinionagreq = input->asypinionagreq;
  // latctrlagctrltqlowrlim
  output->latctrlagctrltqlowrlim = input->latctrlagctrltqlowrlim;
  // latctrlagctrltqupprlim
  output->latctrlagctrltqupprlim = input->latctrlagctrltqupprlim;
  return true;
}

deva_function_msgs__msg__ADASFunctionStatusIntra *
deva_function_msgs__msg__ADASFunctionStatusIntra__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__ADASFunctionStatusIntra * msg = (deva_function_msgs__msg__ADASFunctionStatusIntra *)allocator.allocate(sizeof(deva_function_msgs__msg__ADASFunctionStatusIntra), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__ADASFunctionStatusIntra));
  bool success = deva_function_msgs__msg__ADASFunctionStatusIntra__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__ADASFunctionStatusIntra__destroy(deva_function_msgs__msg__ADASFunctionStatusIntra * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__ADASFunctionStatusIntra__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence__init(deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__ADASFunctionStatusIntra * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__ADASFunctionStatusIntra *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__ADASFunctionStatusIntra), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__ADASFunctionStatusIntra__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__ADASFunctionStatusIntra__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence__fini(deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deva_function_msgs__msg__ADASFunctionStatusIntra__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence *
deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence * array = (deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence__destroy(deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence__are_equal(const deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence * lhs, const deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__ADASFunctionStatusIntra__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence__copy(
  const deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence * input,
  deva_function_msgs__msg__ADASFunctionStatusIntra__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__ADASFunctionStatusIntra);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__ADASFunctionStatusIntra * data =
      (deva_function_msgs__msg__ADASFunctionStatusIntra *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__ADASFunctionStatusIntra__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__ADASFunctionStatusIntra__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__ADASFunctionStatusIntra__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
