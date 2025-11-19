// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_aeb_msgs:msg/SFVisionInfo.idl
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
#include "deva_aeb_msgs/msg/detail/sf_vision_info__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_vision_info__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_aeb_msgs__msg__sf_vision_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("deva_aeb_msgs.msg._sf_vision_info.SFVisionInfo", full_classname_dest, 46) == 0);
  }
  deva_aeb_msgs__msg__SFVisionInfo * ros_message = _ros_message;
  {  // cornerx
    PyObject * field = PyObject_GetAttrString(_pymsg, "cornerx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cornerx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cornery
    PyObject * field = PyObject_GetAttrString(_pymsg, "cornery");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cornery = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distinlane
    PyObject * field = PyObject_GetAttrString(_pymsg, "distinlane");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distinlane = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // objcutinflag
    PyObject * field = PyObject_GetAttrString(_pymsg, "objcutinflag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->objcutinflag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // objcutinlanetype
    PyObject * field = PyObject_GetAttrString(_pymsg, "objcutinlanetype");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->objcutinlanetype = (uint8_t)PyLong_AsUnsignedLong(field);
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
      Py_ssize_t size = 3;
      uint8_t * dest = ros_message->reserved;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // visionposx
    PyObject * field = PyObject_GetAttrString(_pymsg, "visionposx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->visionposx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // visionposy
    PyObject * field = PyObject_GetAttrString(_pymsg, "visionposy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->visionposy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // laneassignment
    PyObject * field = PyObject_GetAttrString(_pymsg, "laneassignment");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->laneassignment = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // iscipv
    PyObject * field = PyObject_GetAttrString(_pymsg, "iscipv");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->iscipv = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mtncatergory
    PyObject * field = PyObject_GetAttrString(_pymsg, "mtncatergory");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mtncatergory = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mtnstatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "mtnstatus");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mtnstatus = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // distconvergence
    PyObject * field = PyObject_GetAttrString(_pymsg, "distconvergence");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->distconvergence = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // coverdproperty
    PyObject * field = PyObject_GetAttrString(_pymsg, "coverdproperty");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->coverdproperty = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // unstable
    PyObject * field = PyObject_GetAttrString(_pymsg, "unstable");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->unstable = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_aeb_msgs__msg__sf_vision_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SFVisionInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_aeb_msgs.msg._sf_vision_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SFVisionInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_aeb_msgs__msg__SFVisionInfo * ros_message = (deva_aeb_msgs__msg__SFVisionInfo *)raw_ros_message;
  {  // cornerx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cornerx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cornerx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cornery
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cornery);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cornery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distinlane
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distinlane);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distinlane", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // objcutinflag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->objcutinflag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "objcutinflag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // objcutinlanetype
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->objcutinlanetype);
    {
      int rc = PyObject_SetAttrString(_pymessage, "objcutinlanetype", field);
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
    memcpy(dst, src, 3 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // visionposx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->visionposx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "visionposx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // visionposy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->visionposy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "visionposy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // laneassignment
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->laneassignment);
    {
      int rc = PyObject_SetAttrString(_pymessage, "laneassignment", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // iscipv
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->iscipv);
    {
      int rc = PyObject_SetAttrString(_pymessage, "iscipv", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mtncatergory
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mtncatergory);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mtncatergory", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mtnstatus
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mtnstatus);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mtnstatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distconvergence
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->distconvergence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distconvergence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coverdproperty
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->coverdproperty);
    {
      int rc = PyObject_SetAttrString(_pymessage, "coverdproperty", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // unstable
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->unstable);
    {
      int rc = PyObject_SetAttrString(_pymessage, "unstable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
