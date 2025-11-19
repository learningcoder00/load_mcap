// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_aeb_msgs:msg/SFObjInfoNOA.idl
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
#include "deva_aeb_msgs/msg/detail/sf_obj_info_noa__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_obj_info_noa__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_aeb_msgs__msg__sf_obj_info_noa__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("deva_aeb_msgs.msg._sf_obj_info_noa.SFObjInfoNOA", full_classname_dest, 47) == 0);
  }
  deva_aeb_msgs__msg__SFObjInfoNOA * ros_message = _ros_message;
  {  // length
    PyObject * field = PyObject_GetAttrString(_pymsg, "length");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->length = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // width
    PyObject * field = PyObject_GetAttrString(_pymsg, "width");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->width = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // hei
    PyObject * field = PyObject_GetAttrString(_pymsg, "hei");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->hei = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // dstlatfrommidoflaneself
    PyObject * field = PyObject_GetAttrString(_pymsg, "dstlatfrommidoflaneself");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->dstlatfrommidoflaneself = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // typ
    PyObject * field = PyObject_GetAttrString(_pymsg, "typ");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->typ = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sidenear
    PyObject * field = PyObject_GetAttrString(_pymsg, "sidenear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sidenear = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // indcrturn
    PyObject * field = PyObject_GetAttrString(_pymsg, "indcrturn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->indcrturn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // indcrbrkli
    PyObject * field = PyObject_GetAttrString(_pymsg, "indcrbrkli");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->indcrbrkli = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // indcrhzrdli
    PyObject * field = PyObject_GetAttrString(_pymsg, "indcrhzrdli");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->indcrhzrdli = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mtnpat
    PyObject * field = PyObject_GetAttrString(_pymsg, "mtnpat");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mtnpat = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mtnpathist
    PyObject * field = PyObject_GetAttrString(_pymsg, "mtnpathist");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mtnpathist = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fusnsrcraw
    PyObject * field = PyObject_GetAttrString(_pymsg, "fusnsrcraw");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fusnsrcraw = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // clisnsideradarctrlwarnqly
    PyObject * field = PyObject_GetAttrString(_pymsg, "clisnsideradarctrlwarnqly");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->clisnsideradarctrlwarnqly = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // clisnsideradarctrlbrkqly
    PyObject * field = PyObject_GetAttrString(_pymsg, "clisnsideradarctrlbrkqly");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->clisnsideradarctrlbrkqly = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 2;
      uint8_t * dest = ros_message->reserved;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // lan_assignment
    PyObject * field = PyObject_GetAttrString(_pymsg, "lan_assignment");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lan_assignment = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_aeb_msgs__msg__sf_obj_info_noa__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SFObjInfoNOA */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_aeb_msgs.msg._sf_obj_info_noa");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SFObjInfoNOA");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_aeb_msgs__msg__SFObjInfoNOA * ros_message = (deva_aeb_msgs__msg__SFObjInfoNOA *)raw_ros_message;
  {  // length
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->length);
    {
      int rc = PyObject_SetAttrString(_pymessage, "length", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // width
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->width);
    {
      int rc = PyObject_SetAttrString(_pymessage, "width", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // hei
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->hei);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hei", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dstlatfrommidoflaneself
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->dstlatfrommidoflaneself);
    {
      int rc = PyObject_SetAttrString(_pymessage, "dstlatfrommidoflaneself", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // typ
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->typ);
    {
      int rc = PyObject_SetAttrString(_pymessage, "typ", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sidenear
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sidenear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sidenear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // indcrturn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->indcrturn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "indcrturn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // indcrbrkli
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->indcrbrkli);
    {
      int rc = PyObject_SetAttrString(_pymessage, "indcrbrkli", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // indcrhzrdli
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->indcrhzrdli);
    {
      int rc = PyObject_SetAttrString(_pymessage, "indcrhzrdli", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mtnpat
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mtnpat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mtnpat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mtnpathist
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mtnpathist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mtnpathist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fusnsrcraw
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fusnsrcraw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fusnsrcraw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clisnsideradarctrlwarnqly
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->clisnsideradarctrlwarnqly);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clisnsideradarctrlwarnqly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // clisnsideradarctrlbrkqly
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->clisnsideradarctrlbrkqly);
    {
      int rc = PyObject_SetAttrString(_pymessage, "clisnsideradarctrlbrkqly", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "reserved");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->reserved[0]);
    memcpy(dst, src, 2 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // lan_assignment
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lan_assignment);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lan_assignment", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
