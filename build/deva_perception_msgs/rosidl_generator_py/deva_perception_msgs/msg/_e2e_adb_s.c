// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/E2eAdb.idl
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
#include "deva_perception_msgs/msg/detail/e2e_adb__struct.h"
#include "deva_perception_msgs/msg/detail/e2e_adb__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__e2e_adb__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_perception_msgs.msg._e2e_adb.E2eAdb", full_classname_dest, 40) == 0);
  }
  deva_perception_msgs__msg__E2eAdb * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // eh_obj_for_adb_abs_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "eh_obj_for_adb_abs_dist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->eh_obj_for_adb_abs_dist = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // veh_obj_for_adb_classn
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_obj_for_adb_classn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->veh_obj_for_adb_classn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // veh_obj_for_adb_hozl_ag_le
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_obj_for_adb_hozl_ag_le");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->veh_obj_for_adb_hozl_ag_le = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // veh_obj_for_adb_hozl_ag_ri
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_obj_for_adb_hozl_ag_ri");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->veh_obj_for_adb_hozl_ag_ri = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // veh_obj_for_adb_obj_dir
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_obj_for_adb_obj_dir");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->veh_obj_for_adb_obj_dir = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // veh_obj_for_adb_obj_hozl_ag_spd_le
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_obj_for_adb_obj_hozl_ag_spd_le");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->veh_obj_for_adb_obj_hozl_ag_spd_le = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // veh_obj_for_adb_obj_hozl_ag_spd_ri
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_obj_for_adb_obj_hozl_ag_spd_ri");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->veh_obj_for_adb_obj_hozl_ag_spd_ri = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // veh_obj_for_adb_trk_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_obj_for_adb_trk_info");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->veh_obj_for_adb_trk_info = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // veh_obj_for_adb_vert_ag
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_obj_for_adb_vert_ag");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->veh_obj_for_adb_vert_ag = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__e2e_adb__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of E2eAdb */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._e2e_adb");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "E2eAdb");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__E2eAdb * ros_message = (deva_perception_msgs__msg__E2eAdb *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
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
  {  // eh_obj_for_adb_abs_dist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->eh_obj_for_adb_abs_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "eh_obj_for_adb_abs_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_obj_for_adb_classn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->veh_obj_for_adb_classn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_obj_for_adb_classn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_obj_for_adb_hozl_ag_le
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->veh_obj_for_adb_hozl_ag_le);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_obj_for_adb_hozl_ag_le", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_obj_for_adb_hozl_ag_ri
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->veh_obj_for_adb_hozl_ag_ri);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_obj_for_adb_hozl_ag_ri", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_obj_for_adb_obj_dir
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->veh_obj_for_adb_obj_dir);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_obj_for_adb_obj_dir", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_obj_for_adb_obj_hozl_ag_spd_le
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->veh_obj_for_adb_obj_hozl_ag_spd_le);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_obj_for_adb_obj_hozl_ag_spd_le", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_obj_for_adb_obj_hozl_ag_spd_ri
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->veh_obj_for_adb_obj_hozl_ag_spd_ri);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_obj_for_adb_obj_hozl_ag_spd_ri", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_obj_for_adb_trk_info
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->veh_obj_for_adb_trk_info);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_obj_for_adb_trk_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_obj_for_adb_vert_ag
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->veh_obj_for_adb_vert_ag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_obj_for_adb_vert_ag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
