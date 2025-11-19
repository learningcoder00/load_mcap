// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_aeb_msgs:msg/SFObjPpty.idl
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
#include "deva_aeb_msgs/msg/detail/sf_obj_ppty__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_obj_ppty__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_aeb_msgs__msg__sf_obj_ppty__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
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
    assert(strncmp("deva_aeb_msgs.msg._sf_obj_ppty.SFObjPpty", full_classname_dest, 40) == 0);
  }
  deva_aeb_msgs__msg__SFObjPpty * ros_message = _ros_message;
  {  // idn
    PyObject * field = PyObject_GetAttrString(_pymsg, "idn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->idn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mdlofmtn
    PyObject * field = PyObject_GetAttrString(_pymsg, "mdlofmtn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mdlofmtn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // trfcsceno
    PyObject * field = PyObject_GetAttrString(_pymsg, "trfcsceno");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trfcsceno = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cllsnmtgtnbybrkgprimqly
    PyObject * field = PyObject_GetAttrString(_pymsg, "cllsnmtgtnbybrkgprimqly");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cllsnmtgtnbybrkgprimqly = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cllsnmtgtnbybrkgsecqly
    PyObject * field = PyObject_GetAttrString(_pymsg, "cllsnmtgtnbybrkgsecqly");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cllsnmtgtnbybrkgsecqly = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cllsnwarnfwdqly
    PyObject * field = PyObject_GetAttrString(_pymsg, "cllsnwarnfwdqly");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cllsnwarnfwdqly = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // trfcjamassiqly
    PyObject * field = PyObject_GetAttrString(_pymsg, "trfcjamassiqly");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trfcjamassiqly = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // dstlatfrommidoflaneselfqly
    PyObject * field = PyObject_GetAttrString(_pymsg, "dstlatfrommidoflaneselfqly");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->dstlatfrommidoflaneselfqly = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // emgylanekeepaidposnqly
    PyObject * field = PyObject_GetAttrString(_pymsg, "emgylanekeepaidposnqly");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->emgylanekeepaidposnqly = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fusnsrc
    PyObject * field = PyObject_GetAttrString(_pymsg, "fusnsrc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fusnsrc = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // posnlgtstdde
    PyObject * field = PyObject_GetAttrString(_pymsg, "posnlgtstdde");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->posnlgtstdde = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // posnlatstdde
    PyObject * field = PyObject_GetAttrString(_pymsg, "posnlatstdde");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->posnlatstdde = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // agdirstdde
    PyObject * field = PyObject_GetAttrString(_pymsg, "agdirstdde");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->agdirstdde = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // spdstdde
    PyObject * field = PyObject_GetAttrString(_pymsg, "spdstdde");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->spdstdde = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // astdde
    PyObject * field = PyObject_GetAttrString(_pymsg, "astdde");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->astdde = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // reserved
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // visnid
    PyObject * field = PyObject_GetAttrString(_pymsg, "visnid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->visnid = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_aeb_msgs__msg__sf_obj_ppty__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SFObjPpty */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_aeb_msgs.msg._sf_obj_ppty");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SFObjPpty");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_aeb_msgs__msg__SFObjPpty * ros_message = (deva_aeb_msgs__msg__SFObjPpty *)raw_ros_message;
  {  // idn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->idn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "idn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mdlofmtn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mdlofmtn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mdlofmtn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trfcsceno
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trfcsceno);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trfcsceno", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cllsnmtgtnbybrkgprimqly
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cllsnmtgtnbybrkgprimqly);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cllsnmtgtnbybrkgprimqly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cllsnmtgtnbybrkgsecqly
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cllsnmtgtnbybrkgsecqly);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cllsnmtgtnbybrkgsecqly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cllsnwarnfwdqly
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cllsnwarnfwdqly);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cllsnwarnfwdqly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trfcjamassiqly
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trfcjamassiqly);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trfcjamassiqly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dstlatfrommidoflaneselfqly
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->dstlatfrommidoflaneselfqly);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dstlatfrommidoflaneselfqly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // emgylanekeepaidposnqly
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->emgylanekeepaidposnqly);
    {
      int rc = PyObject_SetAttrString(_pymessage, "emgylanekeepaidposnqly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fusnsrc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fusnsrc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fusnsrc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posnlgtstdde
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->posnlgtstdde);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posnlgtstdde", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posnlatstdde
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->posnlatstdde);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posnlatstdde", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // agdirstdde
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->agdirstdde);
    {
      int rc = PyObject_SetAttrString(_pymessage, "agdirstdde", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spdstdde
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->spdstdde);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spdstdde", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // astdde
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->astdde);
    {
      int rc = PyObject_SetAttrString(_pymessage, "astdde", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // visnid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->visnid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "visnid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
