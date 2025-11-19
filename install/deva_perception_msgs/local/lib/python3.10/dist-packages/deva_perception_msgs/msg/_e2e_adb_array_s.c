// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/E2eAdbArray.idl
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
#include "deva_perception_msgs/msg/detail/e2e_adb_array__struct.h"
#include "deva_perception_msgs/msg/detail/e2e_adb_array__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_perception_msgs/msg/detail/e2e_adb__functions.h"
#include "deva_perception_msgs/msg/detail/e2e_adb_traffic_sign__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__e2e_adb__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__e2e_adb__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__e2e_adb_traffic_sign__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__e2e_adb_traffic_sign__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__e2e_adb_array__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("deva_perception_msgs.msg._e2e_adb_array.E2eAdbArray", full_classname_dest, 51) == 0);
  }
  deva_perception_msgs__msg__E2eAdbArray * ros_message = _ros_message;
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
  {  // pre_crash_front_data_closing_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "pre_crash_front_data_closing_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pre_crash_front_data_closing_velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pre_crash_front_data_object_class
    PyObject * field = PyObject_GetAttrString(_pymsg, "pre_crash_front_data_object_class");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pre_crash_front_data_object_class = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pre_crash_front_data_overlap
    PyObject * field = PyObject_GetAttrString(_pymsg, "pre_crash_front_data_overlap");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pre_crash_front_data_overlap = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pre_crash_front_data_time_to_impact
    PyObject * field = PyObject_GetAttrString(_pymsg, "pre_crash_front_data_time_to_impact");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pre_crash_front_data_time_to_impact = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lit_area
    PyObject * field = PyObject_GetAttrString(_pymsg, "lit_area");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->lit_area = (Py_True == field);
    Py_DECREF(field);
  }
  {  // camera_sts_for_ahbc
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_sts_for_ahbc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->camera_sts_for_ahbc = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // too_many_cars
    PyObject * field = PyObject_GetAttrString(_pymsg, "too_many_cars");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->too_many_cars = (Py_True == field);
    Py_DECREF(field);
  }
  {  // e2e_adb_veh_obj
    PyObject * field = PyObject_GetAttrString(_pymsg, "e2e_adb_veh_obj");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'e2e_adb_veh_obj'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!deva_perception_msgs__msg__E2eAdb__Sequence__init(&(ros_message->e2e_adb_veh_obj), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_perception_msgs__msg__E2eAdb__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_perception_msgs__msg__E2eAdb * dest = ros_message->e2e_adb_veh_obj.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_perception_msgs__msg__e2e_adb__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // e2e_adb_traffic_sign
    PyObject * field = PyObject_GetAttrString(_pymsg, "e2e_adb_traffic_sign");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'e2e_adb_traffic_sign'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence__init(&(ros_message->e2e_adb_traffic_sign), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_perception_msgs__msg__E2eAdbTrafficSign__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_perception_msgs__msg__E2eAdbTrafficSign * dest = ros_message->e2e_adb_traffic_sign.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_perception_msgs__msg__e2e_adb_traffic_sign__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__e2e_adb_array__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of E2eAdbArray */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._e2e_adb_array");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "E2eAdbArray");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__E2eAdbArray * ros_message = (deva_perception_msgs__msg__E2eAdbArray *)raw_ros_message;
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
  {  // pre_crash_front_data_closing_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pre_crash_front_data_closing_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pre_crash_front_data_closing_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pre_crash_front_data_object_class
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pre_crash_front_data_object_class);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pre_crash_front_data_object_class", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pre_crash_front_data_overlap
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pre_crash_front_data_overlap);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pre_crash_front_data_overlap", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pre_crash_front_data_time_to_impact
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pre_crash_front_data_time_to_impact);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pre_crash_front_data_time_to_impact", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lit_area
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->lit_area ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lit_area", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // camera_sts_for_ahbc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->camera_sts_for_ahbc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera_sts_for_ahbc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // too_many_cars
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->too_many_cars ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "too_many_cars", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // e2e_adb_veh_obj
    PyObject * field = NULL;
    size_t size = ros_message->e2e_adb_veh_obj.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_perception_msgs__msg__E2eAdb * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->e2e_adb_veh_obj.data[i]);
      PyObject * pyitem = deva_perception_msgs__msg__e2e_adb__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "e2e_adb_veh_obj", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // e2e_adb_traffic_sign
    PyObject * field = NULL;
    size_t size = ros_message->e2e_adb_traffic_sign.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_perception_msgs__msg__E2eAdbTrafficSign * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->e2e_adb_traffic_sign.data[i]);
      PyObject * pyitem = deva_perception_msgs__msg__e2e_adb_traffic_sign__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "e2e_adb_traffic_sign", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
