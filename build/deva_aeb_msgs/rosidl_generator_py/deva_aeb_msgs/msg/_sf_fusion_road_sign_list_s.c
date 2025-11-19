// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_aeb_msgs:msg/SFFusionRoadSignList.idl
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
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_sign_list__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_fusion_road_sign_list__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_aeb_msgs/msg/detail/sf_crosswalk__functions.h"
#include "deva_aeb_msgs/msg/detail/sf_road_arrow__functions.h"
#include "deva_aeb_msgs/msg/detail/sf_stopline__functions.h"
// end nested array functions include
bool deva_aeb_msgs__msg__sf_stopline__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_stopline__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__sf_crosswalk__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_crosswalk__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__sf_road_arrow__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_road_arrow__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_aeb_msgs__msg__sf_fusion_road_sign_list__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[65];
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
    assert(strncmp("deva_aeb_msgs.msg._sf_fusion_road_sign_list.SFFusionRoadSignList", full_classname_dest, 64) == 0);
  }
  deva_aeb_msgs__msg__SFFusionRoadSignList * ros_message = _ros_message;
  {  // sllist
    PyObject * field = PyObject_GetAttrString(_pymsg, "sllist");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'sllist'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 8;
    deva_aeb_msgs__msg__SFStopline * dest = ros_message->sllist;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_aeb_msgs__msg__sf_stopline__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // cwlist
    PyObject * field = PyObject_GetAttrString(_pymsg, "cwlist");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'cwlist'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 4;
    deva_aeb_msgs__msg__SFCrosswalk * dest = ros_message->cwlist;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_aeb_msgs__msg__sf_crosswalk__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // ralist
    PyObject * field = PyObject_GetAttrString(_pymsg, "ralist");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ralist'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 8;
    deva_aeb_msgs__msg__SFRoadArrow * dest = ros_message->ralist;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_aeb_msgs__msg__sf_road_arrow__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
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
  {  // framenum
    PyObject * field = PyObject_GetAttrString(_pymsg, "framenum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->framenum = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cwcount
    PyObject * field = PyObject_GetAttrString(_pymsg, "cwcount");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cwcount = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // racount
    PyObject * field = PyObject_GetAttrString(_pymsg, "racount");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->racount = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // slvalidsize
    PyObject * field = PyObject_GetAttrString(_pymsg, "slvalidsize");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->slvalidsize = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cwvalidsize
    PyObject * field = PyObject_GetAttrString(_pymsg, "cwvalidsize");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cwvalidsize = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ravalidsize
    PyObject * field = PyObject_GetAttrString(_pymsg, "ravalidsize");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ravalidsize = (uint8_t)PyLong_AsUnsignedLong(field);
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_aeb_msgs__msg__sf_fusion_road_sign_list__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SFFusionRoadSignList */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_aeb_msgs.msg._sf_fusion_road_sign_list");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SFFusionRoadSignList");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_aeb_msgs__msg__SFFusionRoadSignList * ros_message = (deva_aeb_msgs__msg__SFFusionRoadSignList *)raw_ros_message;
  {  // sllist
    PyObject * field = NULL;
    size_t size = 8;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_aeb_msgs__msg__SFStopline * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->sllist[i]);
      PyObject * pyitem = deva_aeb_msgs__msg__sf_stopline__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "sllist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cwlist
    PyObject * field = NULL;
    size_t size = 4;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_aeb_msgs__msg__SFCrosswalk * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->cwlist[i]);
      PyObject * pyitem = deva_aeb_msgs__msg__sf_crosswalk__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "cwlist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ralist
    PyObject * field = NULL;
    size_t size = 8;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_aeb_msgs__msg__SFRoadArrow * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->ralist[i]);
      PyObject * pyitem = deva_aeb_msgs__msg__sf_road_arrow__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "ralist", field);
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
  {  // framenum
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->framenum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "framenum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cwcount
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cwcount);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cwcount", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // racount
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->racount);
    {
      int rc = PyObject_SetAttrString(_pymessage, "racount", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // slvalidsize
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->slvalidsize);
    {
      int rc = PyObject_SetAttrString(_pymessage, "slvalidsize", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cwvalidsize
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cwvalidsize);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cwvalidsize", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ravalidsize
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ravalidsize);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ravalidsize", field);
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

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
