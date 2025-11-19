// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_aeb_msgs:msg/SFVehSelf.idl
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
#include "deva_aeb_msgs/msg/detail/sf_veh_self__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_veh_self__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_aeb_msgs__msg__sf_veh_self__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_aeb_msgs.msg._sf_veh_self.SFVehSelf", full_classname_dest, 40) == 0);
  }
  deva_aeb_msgs__msg__SFVehSelf * ros_message = _ros_message;
  {  // vlgt
    PyObject * field = PyObject_GetAttrString(_pymsg, "vlgt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vlgt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vlgtcmpfac
    PyObject * field = PyObject_GetAttrString(_pymsg, "vlgtcmpfac");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vlgtcmpfac = (float)PyFloat_AS_DOUBLE(field);
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
  {  // algtraw
    PyObject * field = PyObject_GetAttrString(_pymsg, "algtraw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->algtraw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // alatraw
    PyObject * field = PyObject_GetAttrString(_pymsg, "alatraw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->alatraw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yawrate
    PyObject * field = PyObject_GetAttrString(_pymsg, "yawrate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yawrate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yawrateraw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yawrateraw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yawrateraw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // posnlgtdelta
    PyObject * field = PyObject_GetAttrString(_pymsg, "posnlgtdelta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->posnlgtdelta = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // posnlatdelta
    PyObject * field = PyObject_GetAttrString(_pymsg, "posnlatdelta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->posnlatdelta = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // agdirdelta
    PyObject * field = PyObject_GetAttrString(_pymsg, "agdirdelta");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->agdirdelta = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_aeb_msgs__msg__sf_veh_self__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SFVehSelf */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_aeb_msgs.msg._sf_veh_self");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SFVehSelf");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_aeb_msgs__msg__SFVehSelf * ros_message = (deva_aeb_msgs__msg__SFVehSelf *)raw_ros_message;
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
  {  // vlgtcmpfac
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vlgtcmpfac);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vlgtcmpfac", field);
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
  {  // algtraw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->algtraw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "algtraw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alatraw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->alatraw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "alatraw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yawrate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yawrate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yawrate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yawrateraw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yawrateraw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yawrateraw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posnlgtdelta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->posnlgtdelta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posnlgtdelta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // posnlatdelta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->posnlatdelta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "posnlatdelta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // agdirdelta
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->agdirdelta);
    {
      int rc = PyObject_SetAttrString(_pymessage, "agdirdelta", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
