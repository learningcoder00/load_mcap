// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_function_msgs:msg/ADASFunctionStatusIntra.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "deva_function_msgs/msg/detail/adas_function_status_intra__struct.h"
#include "deva_function_msgs/msg/detail/adas_function_status_intra__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_function_msgs__msg__adas_function_status_intra__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[75];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("deva_function_msgs.msg._adas_function_status_intra.ADASFunctionStatusIntra", full_classname_dest, 74) == 0);
  }
  deva_function_msgs__msg__ADASFunctionStatusIntra * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // acttnasylatctrlmodreq
    PyObject * field = PyObject_GetAttrString(_pymsg, "acttnasylatctrlmodreq");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acttnasylatctrlmodreq = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // acttnasysftyenadecelbydbs
    PyObject * field = PyObject_GetAttrString(_pymsg, "acttnasysftyenadecelbydbs");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acttnasysftyenadecelbydbs = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // acttnasysftyhwlreq
    PyObject * field = PyObject_GetAttrString(_pymsg, "acttnasysftyhwlreq");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acttnasysftyhwlreq = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // acttnasysftystandstillreq
    PyObject * field = PyObject_GetAttrString(_pymsg, "acttnasysftystandstillreq");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acttnasysftystandstillreq = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // acttnasysteerwhlhptcwarnreq
    PyObject * field = PyObject_GetAttrString(_pymsg, "acttnasysteerwhlhptcwarnreq");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acttnasysteerwhlhptcwarnreq = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // acttnbrkhptcwarnreqforautdrv
    PyObject * field = PyObject_GetAttrString(_pymsg, "acttnbrkhptcwarnreqforautdrv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acttnbrkhptcwarnreqforautdrv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // acttnbrkprecactv
    PyObject * field = PyObject_GetAttrString(_pymsg, "acttnbrkprecactv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acttnbrkprecactv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // acttncllsnthreat
    PyObject * field = PyObject_GetAttrString(_pymsg, "acttncllsnthreat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acttncllsnthreat = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmiasyemgylanekeepaid
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmiasyemgylanekeepaid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmiasyemgylanekeepaid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmiasyemgylanekeepaidsts
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmiasyemgylanekeepaidsts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmiasyemgylanekeepaidsts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmiasylanechgwarnmod
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmiasylanechgwarnmod");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmiasylanechgwarnmod = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmiasylanekeepaidsts
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmiasylanekeepaidsts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmiasylanekeepaidsts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmiasyobjtype
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmiasyobjtype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmiasyobjtype = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmiasysteerapplyrqrd
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmiasysteerapplyrqrd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmiasysteerapplyrqrd = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmiasywarnforsteercncl
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmiasywarnforsteercncl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmiasywarnforsteercncl = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmicllsnaidpost
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmicllsnaidpost");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmicllsnaidpost = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmicllsnfwdwarn
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmicllsnfwdwarn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmicllsnfwdwarn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmicllsnmtgtnfaultsts
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmicllsnmtgtnfaultsts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmicllsnmtgtnfaultsts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmicllsnmtgtnfctsts
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmicllsnmtgtnfctsts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmicllsnmtgtnfctsts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmicllsnmtgtnwarnsts
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmicllsnmtgtnwarnsts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmicllsnmtgtnwarnsts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmictryforroadsgninfo
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmictryforroadsgninfo");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmictryforroadsgninfo = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmiintvandwarnmodinfosts
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmiintvandwarnmodinfosts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmiintvandwarnmodinfosts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmilanechgwarnsts
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmilanechgwarnsts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmilanechgwarnsts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmilanekeepaidinfosts
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmilanekeepaidinfosts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmilanekeepaidinfosts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hminontrvrsbleroadedgeonleft
    PyObject * field = PyObject_GetAttrString(_pymsg, "hminontrvrsbleroadedgeonleft");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hminontrvrsbleroadedgeonleft = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hminontrvrsbleroadedgeonright
    PyObject * field = PyObject_GetAttrString(_pymsg, "hminontrvrsbleroadedgeonright");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hminontrvrsbleroadedgeonright = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmioffsforspdwarnsetgsts
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmioffsforspdwarnsetgsts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmioffsforspdwarnsetgsts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmiroadmiscsgninfosts
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmiroadmiscsgninfosts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmiroadmiscsgninfosts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmiroadsgninfosts
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmiroadsgninfosts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmiroadsgninfosts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmispdalrmactvsts
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmispdalrmactvsts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmispdalrmactvsts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmitrfcinfomiscfirst
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmitrfcinfomiscfirst");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmitrfcinfomiscfirst = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmiwarnforasyemgylanekeepaid
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmiwarnforasyemgylanekeepaid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmiwarnforasyemgylanekeepaid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmicllsnmtgtnonoffsts
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmicllsnmtgtnonoffsts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmicllsnmtgtnonoffsts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmidooropenwarnon1
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmidooropenwarnon1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmidooropenwarnon1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmidooropenwarnleindcn
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmidooropenwarnleindcn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmidooropenwarnleindcn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmidooropenwarnriindcn
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmidooropenwarnriindcn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmidooropenwarnriindcn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmilettclv
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmilettclv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmilettclv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmirittclv
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmirittclv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmirittclv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmifctaindcnle
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmifctaindcnle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmifctaindcnle = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmifctaindcnri
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmifctaindcnri");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmifctaindcnri = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmilcmaindcnle
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmilcmaindcnle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmilcmaindcnle = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmilcmaindcnri
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmilcmaindcnri");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmilcmaindcnri = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmilcmaon
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmilcmaon");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmilcmaon = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmilcmaaudwarn
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmilcmaaudwarn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmilcmaaudwarn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmirsdssyssts
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmirsdssyssts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmirsdssyssts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmirctaindcnle
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmirctaindcnle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmirctaindcnle = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmirctaindcnri
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmirctaindcnri");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmirctaindcnri = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmictraon1
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmictraon1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmictraon1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmicllsnwarnreindcn
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmicllsnwarnreindcn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmicllsnwarnreindcn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmicllsnwarnreon1
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmicllsnwarnreon1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmicllsnwarnreon1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmircwmlireq
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmircwmlireq");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmircwmlireq = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // acttnrctabrkreq
    PyObject * field = PyObject_GetAttrString(_pymsg, "acttnrctabrkreq");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acttnrctabrkreq = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // acttnrctabrkreqqm
    PyObject * field = PyObject_GetAttrString(_pymsg, "acttnrctabrkreqqm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acttnrctabrkreqqm = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // acttnrcwmbrkreq
    PyObject * field = PyObject_GetAttrString(_pymsg, "acttnrcwmbrkreq");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acttnrcwmbrkreq = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // acttnrcwmbrkreqqm
    PyObject * field = PyObject_GetAttrString(_pymsg, "acttnrcwmbrkreqqm");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acttnrcwmbrkreqqm = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmiasyemgymanoeuvreaidsts
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmiasyemgymanoeuvreaidsts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmiasyemgymanoeuvreaidsts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmicllsnaidpostema
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmicllsnaidpostema");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmicllsnaidpostema = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmitrfcliinfo
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmitrfcliinfo");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmitrfcliinfo = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmitrfclists
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmitrfclists");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmitrfclists = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmitrfcliwarntypsts
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmitrfcliwarntypsts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmitrfcliwarntypsts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmiuturnlight
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmiuturnlight");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmiuturnlight = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmitrfcliinfoleft
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmitrfcliinfoleft");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmitrfcliinfoleft = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmitrfcliinforight
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmitrfcliinforight");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmitrfcliinforight = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmiaebtriggerobjectid
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmiaebtriggerobjectid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmiaebtriggerobjectid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmielkatriggerobjectid
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmielkatriggerobjectid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmielkatriggerobjectid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmifctarighttriggerobjectid
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmifctarighttriggerobjectid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmifctarighttriggerobjectid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmifctalefttriggerobjectid
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmifctalefttriggerobjectid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmifctalefttriggerobjectid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmiematriggerobjectid
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmiematriggerobjectid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmiematriggerobjectid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmirctarighttriggerobjectid
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmirctarighttriggerobjectid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmirctarighttriggerobjectid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmirctalefttriggerobjectid
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmirctalefttriggerobjectid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmirctalefttriggerobjectid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmitrfclichg
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmitrfclichg");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmitrfclichg = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmifcwtriggerobjectid
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmifcwtriggerobjectid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmifcwtriggerobjectid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lanekeepaidlaneinfo
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanekeepaidlaneinfo");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lanekeepaidlaneinfo = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asyemgylanekeepaidlaneinfo
    PyObject * field = PyObject_GetAttrString(_pymsg, "asyemgylanekeepaidlaneinfo");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asyemgylanekeepaidlaneinfo = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmireserve1
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmireserve1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmireserve1 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmireserve2
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmireserve2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmireserve2 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmireserve3
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmireserve3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmireserve3 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmireserve4
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmireserve4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hmireserve4 = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // hmireserve5
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmireserve5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hmireserve5 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hmireserve6
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmireserve6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hmireserve6 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hmireserve7
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmireserve7");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hmireserve7 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hmireserve8
    PyObject * field = PyObject_GetAttrString(_pymsg, "hmireserve8");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hmireserve8 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // asypinionagreq
    PyObject * field = PyObject_GetAttrString(_pymsg, "asypinionagreq");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->asypinionagreq = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // latctrlagctrltqlowrlim
    PyObject * field = PyObject_GetAttrString(_pymsg, "latctrlagctrltqlowrlim");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latctrlagctrltqlowrlim = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // latctrlagctrltqupprlim
    PyObject * field = PyObject_GetAttrString(_pymsg, "latctrlagctrltqupprlim");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->latctrlagctrltqupprlim = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_function_msgs__msg__adas_function_status_intra__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ADASFunctionStatusIntra */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_function_msgs.msg._adas_function_status_intra");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ADASFunctionStatusIntra");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_function_msgs__msg__ADASFunctionStatusIntra * ros_message = (deva_function_msgs__msg__ADASFunctionStatusIntra *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = deva_common_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acttnasylatctrlmodreq
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->acttnasylatctrlmodreq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acttnasylatctrlmodreq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acttnasysftyenadecelbydbs
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->acttnasysftyenadecelbydbs);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acttnasysftyenadecelbydbs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acttnasysftyhwlreq
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->acttnasysftyhwlreq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acttnasysftyhwlreq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acttnasysftystandstillreq
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->acttnasysftystandstillreq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acttnasysftystandstillreq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acttnasysteerwhlhptcwarnreq
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->acttnasysteerwhlhptcwarnreq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acttnasysteerwhlhptcwarnreq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acttnbrkhptcwarnreqforautdrv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->acttnbrkhptcwarnreqforautdrv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acttnbrkhptcwarnreqforautdrv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acttnbrkprecactv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->acttnbrkprecactv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acttnbrkprecactv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acttncllsnthreat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->acttncllsnthreat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acttncllsnthreat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmiasyemgylanekeepaid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmiasyemgylanekeepaid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmiasyemgylanekeepaid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmiasyemgylanekeepaidsts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmiasyemgylanekeepaidsts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmiasyemgylanekeepaidsts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmiasylanechgwarnmod
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmiasylanechgwarnmod);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmiasylanechgwarnmod", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmiasylanekeepaidsts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmiasylanekeepaidsts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmiasylanekeepaidsts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmiasyobjtype
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmiasyobjtype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmiasyobjtype", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmiasysteerapplyrqrd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmiasysteerapplyrqrd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmiasysteerapplyrqrd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmiasywarnforsteercncl
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmiasywarnforsteercncl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmiasywarnforsteercncl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmicllsnaidpost
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmicllsnaidpost);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmicllsnaidpost", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmicllsnfwdwarn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmicllsnfwdwarn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmicllsnfwdwarn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmicllsnmtgtnfaultsts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmicllsnmtgtnfaultsts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmicllsnmtgtnfaultsts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmicllsnmtgtnfctsts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmicllsnmtgtnfctsts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmicllsnmtgtnfctsts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmicllsnmtgtnwarnsts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmicllsnmtgtnwarnsts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmicllsnmtgtnwarnsts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmictryforroadsgninfo
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmictryforroadsgninfo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmictryforroadsgninfo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmiintvandwarnmodinfosts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmiintvandwarnmodinfosts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmiintvandwarnmodinfosts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmilanechgwarnsts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmilanechgwarnsts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmilanechgwarnsts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmilanekeepaidinfosts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmilanekeepaidinfosts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmilanekeepaidinfosts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hminontrvrsbleroadedgeonleft
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hminontrvrsbleroadedgeonleft);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hminontrvrsbleroadedgeonleft", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hminontrvrsbleroadedgeonright
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hminontrvrsbleroadedgeonright);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hminontrvrsbleroadedgeonright", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmioffsforspdwarnsetgsts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmioffsforspdwarnsetgsts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmioffsforspdwarnsetgsts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmiroadmiscsgninfosts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmiroadmiscsgninfosts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmiroadmiscsgninfosts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmiroadsgninfosts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmiroadsgninfosts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmiroadsgninfosts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmispdalrmactvsts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmispdalrmactvsts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmispdalrmactvsts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmitrfcinfomiscfirst
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmitrfcinfomiscfirst);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmitrfcinfomiscfirst", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmiwarnforasyemgylanekeepaid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmiwarnforasyemgylanekeepaid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmiwarnforasyemgylanekeepaid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmicllsnmtgtnonoffsts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmicllsnmtgtnonoffsts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmicllsnmtgtnonoffsts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmidooropenwarnon1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmidooropenwarnon1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmidooropenwarnon1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmidooropenwarnleindcn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmidooropenwarnleindcn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmidooropenwarnleindcn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmidooropenwarnriindcn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmidooropenwarnriindcn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmidooropenwarnriindcn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmilettclv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmilettclv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmilettclv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmirittclv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmirittclv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmirittclv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmifctaindcnle
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmifctaindcnle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmifctaindcnle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmifctaindcnri
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmifctaindcnri);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmifctaindcnri", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmilcmaindcnle
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmilcmaindcnle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmilcmaindcnle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmilcmaindcnri
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmilcmaindcnri);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmilcmaindcnri", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmilcmaon
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmilcmaon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmilcmaon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmilcmaaudwarn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmilcmaaudwarn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmilcmaaudwarn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmirsdssyssts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmirsdssyssts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmirsdssyssts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmirctaindcnle
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmirctaindcnle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmirctaindcnle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmirctaindcnri
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmirctaindcnri);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmirctaindcnri", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmictraon1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmictraon1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmictraon1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmicllsnwarnreindcn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmicllsnwarnreindcn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmicllsnwarnreindcn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmicllsnwarnreon1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmicllsnwarnreon1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmicllsnwarnreon1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmircwmlireq
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmircwmlireq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmircwmlireq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acttnrctabrkreq
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->acttnrctabrkreq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acttnrctabrkreq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acttnrctabrkreqqm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->acttnrctabrkreqqm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acttnrctabrkreqqm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acttnrcwmbrkreq
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->acttnrcwmbrkreq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acttnrcwmbrkreq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acttnrcwmbrkreqqm
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->acttnrcwmbrkreqqm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acttnrcwmbrkreqqm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmiasyemgymanoeuvreaidsts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmiasyemgymanoeuvreaidsts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmiasyemgymanoeuvreaidsts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmicllsnaidpostema
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmicllsnaidpostema);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmicllsnaidpostema", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmitrfcliinfo
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmitrfcliinfo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmitrfcliinfo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmitrfclists
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmitrfclists);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmitrfclists", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmitrfcliwarntypsts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmitrfcliwarntypsts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmitrfcliwarntypsts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmiuturnlight
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmiuturnlight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmiuturnlight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmitrfcliinfoleft
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmitrfcliinfoleft);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmitrfcliinfoleft", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmitrfcliinforight
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmitrfcliinforight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmitrfcliinforight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmiaebtriggerobjectid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmiaebtriggerobjectid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmiaebtriggerobjectid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmielkatriggerobjectid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmielkatriggerobjectid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmielkatriggerobjectid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmifctarighttriggerobjectid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmifctarighttriggerobjectid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmifctarighttriggerobjectid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmifctalefttriggerobjectid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmifctalefttriggerobjectid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmifctalefttriggerobjectid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmiematriggerobjectid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmiematriggerobjectid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmiematriggerobjectid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmirctarighttriggerobjectid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmirctarighttriggerobjectid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmirctarighttriggerobjectid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmirctalefttriggerobjectid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmirctalefttriggerobjectid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmirctalefttriggerobjectid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmitrfclichg
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmitrfclichg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmitrfclichg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmifcwtriggerobjectid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmifcwtriggerobjectid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmifcwtriggerobjectid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lanekeepaidlaneinfo
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lanekeepaidlaneinfo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanekeepaidlaneinfo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asyemgylanekeepaidlaneinfo
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asyemgylanekeepaidlaneinfo);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asyemgylanekeepaidlaneinfo", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmireserve1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmireserve1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmireserve1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmireserve2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmireserve2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmireserve2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmireserve3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmireserve3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmireserve3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmireserve4
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hmireserve4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmireserve4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmireserve5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hmireserve5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmireserve5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmireserve6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hmireserve6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmireserve6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmireserve7
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hmireserve7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmireserve7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hmireserve8
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hmireserve8);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hmireserve8", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asypinionagreq
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->asypinionagreq);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asypinionagreq", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latctrlagctrltqlowrlim
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latctrlagctrltqlowrlim);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latctrlagctrltqlowrlim", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // latctrlagctrltqupprlim
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->latctrlagctrltqupprlim);
    {
      int rc = PyObject_SetAttrString(_pymessage, "latctrlagctrltqupprlim", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
