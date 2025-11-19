// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_aeb_msgs:msg/SFObjEstimn.idl
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
#include "deva_aeb_msgs/msg/detail/sf_obj_estimn__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_obj_estimn__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_aeb_msgs__msg__sf_obj_estimn__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
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
    assert(strncmp("deva_aeb_msgs.msg._sf_obj_estimn.SFObjEstimn", full_classname_dest, 44) == 0);
  }
  deva_aeb_msgs__msg__SFObjEstimn * ros_message = _ros_message;
  {  // posnlgt
    PyObject * field = PyObject_GetAttrString(_pymsg, "posnlgt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->posnlgt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // posnlat
    PyObject * field = PyObject_GetAttrString(_pymsg, "posnlat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->posnlat = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // spd
    PyObject * field = PyObject_GetAttrString(_pymsg, "spd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->spd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vlgt
    PyObject * field = PyObject_GetAttrString(_pymsg, "vlgt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vlgt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vlat
    PyObject * field = PyObject_GetAttrString(_pymsg, "vlat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vlat = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a
    PyObject * field = PyObject_GetAttrString(_pymsg, "a");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->a = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // algt
    PyObject * field = PyObject_GetAttrString(_pymsg, "algt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->algt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alat
    PyObject * field = PyObject_GetAttrString(_pymsg, "alat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alat = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // agdir
    PyObject * field = PyObject_GetAttrString(_pymsg, "agdir");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->agdir = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // crvt
    PyObject * field = PyObject_GetAttrString(_pymsg, "crvt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->crvt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_aeb_msgs__msg__sf_obj_estimn__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SFObjEstimn */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_aeb_msgs.msg._sf_obj_estimn");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SFObjEstimn");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_aeb_msgs__msg__SFObjEstimn * ros_message = (deva_aeb_msgs__msg__SFObjEstimn *)raw_ros_message;
  {  // posnlgt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->posnlgt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posnlgt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posnlat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->posnlat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posnlat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->spd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vlgt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vlgt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vlgt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vlat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vlat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vlat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->a);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // algt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->algt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "algt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // agdir
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->agdir);
    {
      int rc = PyObject_SetAttrString(_pymessage, "agdir", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crvt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->crvt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "crvt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
