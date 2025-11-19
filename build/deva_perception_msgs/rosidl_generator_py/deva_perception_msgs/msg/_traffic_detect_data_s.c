// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/TrafficDetectData.idl
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
#include "deva_perception_msgs/msg/detail/traffic_detect_data__struct.h"
#include "deva_perception_msgs/msg/detail/traffic_detect_data__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_perception_msgs/msg/detail/traffic_object__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__traffic_object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__traffic_object__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__traffic_object__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__traffic_object__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__e2e_result__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__e2e_result__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__traffic_detect_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("deva_perception_msgs.msg._traffic_detect_data.TrafficDetectData", full_classname_dest, 63) == 0);
  }
  deva_perception_msgs__msg__TrafficDetectData * ros_message = _ros_message;
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
  {  // framenum
    PyObject * field = PyObject_GetAttrString(_pymsg, "framenum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->framenum = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // abs_vel_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "abs_vel_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->abs_vel_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // abs_acc_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "abs_acc_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->abs_acc_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel_motion
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel_motion");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vel_motion = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // acc_motion
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_motion");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->acc_motion = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f120_object_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "f120_object_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->f120_object_num = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f30_object_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "f30_object_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->f30_object_num = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f120trafficobjects
    PyObject * field = PyObject_GetAttrString(_pymsg, "f120trafficobjects");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'f120trafficobjects'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 64;
    deva_perception_msgs__msg__TrafficObject * dest = ros_message->f120trafficobjects;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_perception_msgs__msg__traffic_object__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // f30trafficobjects
    PyObject * field = PyObject_GetAttrString(_pymsg, "f30trafficobjects");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'f30trafficobjects'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 64;
    deva_perception_msgs__msg__TrafficObject * dest = ros_message->f30trafficobjects;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_perception_msgs__msg__traffic_object__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // e2eobjects
    PyObject * field = PyObject_GetAttrString(_pymsg, "e2eobjects");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__e2e_result__convert_from_py(field, &ros_message->e2eobjects)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // time_of_day
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_of_day");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_of_day = (uint8_t)PyLong_AsUnsignedLong(field);
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__traffic_detect_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrafficDetectData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._traffic_detect_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrafficDetectData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__TrafficDetectData * ros_message = (deva_perception_msgs__msg__TrafficDetectData *)raw_ros_message;
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
  {  // framenum
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->framenum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "framenum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // abs_vel_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->abs_vel_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "abs_vel_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // abs_acc_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->abs_acc_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "abs_acc_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel_motion
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vel_motion);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel_motion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_motion
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->acc_motion);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_motion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f120_object_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->f120_object_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f120_object_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f30_object_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->f30_object_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f30_object_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f120trafficobjects
    PyObject * field = NULL;
    size_t size = 64;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_perception_msgs__msg__TrafficObject * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->f120trafficobjects[i]);
      PyObject * pyitem = deva_perception_msgs__msg__traffic_object__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "f120trafficobjects", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f30trafficobjects
    PyObject * field = NULL;
    size_t size = 64;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_perception_msgs__msg__TrafficObject * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->f30trafficobjects[i]);
      PyObject * pyitem = deva_perception_msgs__msg__traffic_object__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "f30trafficobjects", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // e2eobjects
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__e2e_result__convert_to_py(&ros_message->e2eobjects);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "e2eobjects", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_of_day
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->time_of_day);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_of_day", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
