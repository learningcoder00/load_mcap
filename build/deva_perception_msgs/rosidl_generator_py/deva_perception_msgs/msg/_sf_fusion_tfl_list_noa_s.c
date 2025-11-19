// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/SFFusionTFLListNOA.idl
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
#include "deva_perception_msgs/msg/detail/sf_fusion_tfl_list_noa__struct.h"
#include "deva_perception_msgs/msg/detail/sf_fusion_tfl_list_noa__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_perception_msgs/msg/detail/e2e_traffic_det_pair__functions.h"
#include "deva_perception_msgs/msg/detail/po_p_fusion_tflnoa__functions.h"
#include "deva_perception_msgs/msg/detail/po_ptflnoa__functions.h"
#include "deva_perception_msgs/msg/detail/sf_fusion_tflnoa__functions.h"
#include "deva_perception_msgs/msg/detail/traffic_e2e_stable_pair__functions.h"
// end nested array functions include
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__sf_fusion_tflnoa__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__sf_fusion_tflnoa__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__sf_fusion_tflnoa__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__sf_fusion_tflnoa__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__po_ptflnoa__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__po_ptflnoa__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__po_p_fusion_tflnoa__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__po_p_fusion_tflnoa__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__e2e_traffic_det_pair__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__e2e_traffic_det_pair__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__traffic_e2e_stable_pair__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__traffic_e2e_stable_pair__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__traffic_rount__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__traffic_rount__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__sf_fusion_tfl_list_noa__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("deva_perception_msgs.msg._sf_fusion_tfl_list_noa.SFFusionTFLListNOA", full_classname_dest, 67) == 0);
  }
  deva_perception_msgs__msg__SFFusionTFLListNOA * ros_message = _ros_message;
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
  {  // tflcount
    PyObject * field = PyObject_GetAttrString(_pymsg, "tflcount");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tflcount = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // tfllist
    PyObject * field = PyObject_GetAttrString(_pymsg, "tfllist");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tfllist'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 8;
    deva_perception_msgs__msg__SFFusionTFLNOA * dest = ros_message->tfllist;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_perception_msgs__msg__sf_fusion_tflnoa__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // validsize
    PyObject * field = PyObject_GetAttrString(_pymsg, "validsize");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->validsize = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tfllist_all
    PyObject * field = PyObject_GetAttrString(_pymsg, "tfllist_all");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tfllist_all'");
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
    if (!deva_perception_msgs__msg__SFFusionTFLNOA__Sequence__init(&(ros_message->tfllist_all), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_perception_msgs__msg__SFFusionTFLNOA__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_perception_msgs__msg__SFFusionTFLNOA * dest = ros_message->tfllist_all.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_perception_msgs__msg__sf_fusion_tflnoa__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // all_validsize
    PyObject * field = PyObject_GetAttrString(_pymsg, "all_validsize");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->all_validsize = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pop_tfllist
    PyObject * field = PyObject_GetAttrString(_pymsg, "pop_tfllist");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'pop_tfllist'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 8;
    deva_perception_msgs__msg__PoPTFLNOA * dest = ros_message->pop_tfllist;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_perception_msgs__msg__po_ptflnoa__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // pop_lightnum
    PyObject * field = PyObject_GetAttrString(_pymsg, "pop_lightnum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pop_lightnum = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pop_fs_tfllist
    PyObject * field = PyObject_GetAttrString(_pymsg, "pop_fs_tfllist");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'pop_fs_tfllist'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 8;
    deva_perception_msgs__msg__PoPFusionTFLNOA * dest = ros_message->pop_fs_tfllist;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_perception_msgs__msg__po_p_fusion_tflnoa__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // pop_fs_lightnum
    PyObject * field = PyObject_GetAttrString(_pymsg, "pop_fs_lightnum");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pop_fs_lightnum = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // e2e_traffic_det_maps
    PyObject * field = PyObject_GetAttrString(_pymsg, "e2e_traffic_det_maps");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'e2e_traffic_det_maps'");
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
    if (!deva_perception_msgs__msg__E2eTrafficDetPair__Sequence__init(&(ros_message->e2e_traffic_det_maps), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_perception_msgs__msg__E2eTrafficDetPair__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_perception_msgs__msg__E2eTrafficDetPair * dest = ros_message->e2e_traffic_det_maps.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_perception_msgs__msg__e2e_traffic_det_pair__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // tracked_traffic_e2e_stable_maps
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracked_traffic_e2e_stable_maps");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tracked_traffic_e2e_stable_maps'");
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
    if (!deva_perception_msgs__msg__TrafficE2eStablePair__Sequence__init(&(ros_message->tracked_traffic_e2e_stable_maps), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_perception_msgs__msg__TrafficE2eStablePair__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_perception_msgs__msg__TrafficE2eStablePair * dest = ros_message->tracked_traffic_e2e_stable_maps.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_perception_msgs__msg__traffic_e2e_stable_pair__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // tracked_traffic_e2ebc
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracked_traffic_e2ebc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tracked_traffic_e2ebc = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tracked_traffic_e2ebc_stable
    PyObject * field = PyObject_GetAttrString(_pymsg, "tracked_traffic_e2ebc_stable");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->tracked_traffic_e2ebc_stable = (Py_True == field);
    Py_DECREF(field);
  }
  {  // rount_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "rount_info");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__traffic_rount__convert_from_py(field, &ros_message->rount_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__sf_fusion_tfl_list_noa__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SFFusionTFLListNOA */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._sf_fusion_tfl_list_noa");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SFFusionTFLListNOA");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__SFFusionTFLListNOA * ros_message = (deva_perception_msgs__msg__SFFusionTFLListNOA *)raw_ros_message;
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
  {  // tflcount
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tflcount);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tflcount", field);
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
  {  // tfllist
    PyObject * field = NULL;
    size_t size = 8;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_perception_msgs__msg__SFFusionTFLNOA * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->tfllist[i]);
      PyObject * pyitem = deva_perception_msgs__msg__sf_fusion_tflnoa__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "tfllist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // validsize
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->validsize);
    {
      int rc = PyObject_SetAttrString(_pymessage, "validsize", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tfllist_all
    PyObject * field = NULL;
    size_t size = ros_message->tfllist_all.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_perception_msgs__msg__SFFusionTFLNOA * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->tfllist_all.data[i]);
      PyObject * pyitem = deva_perception_msgs__msg__sf_fusion_tflnoa__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "tfllist_all", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // all_validsize
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->all_validsize);
    {
      int rc = PyObject_SetAttrString(_pymessage, "all_validsize", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pop_tfllist
    PyObject * field = NULL;
    size_t size = 8;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_perception_msgs__msg__PoPTFLNOA * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->pop_tfllist[i]);
      PyObject * pyitem = deva_perception_msgs__msg__po_ptflnoa__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "pop_tfllist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pop_lightnum
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pop_lightnum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pop_lightnum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pop_fs_tfllist
    PyObject * field = NULL;
    size_t size = 8;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_perception_msgs__msg__PoPFusionTFLNOA * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->pop_fs_tfllist[i]);
      PyObject * pyitem = deva_perception_msgs__msg__po_p_fusion_tflnoa__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "pop_fs_tfllist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pop_fs_lightnum
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pop_fs_lightnum);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pop_fs_lightnum", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // e2e_traffic_det_maps
    PyObject * field = NULL;
    size_t size = ros_message->e2e_traffic_det_maps.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_perception_msgs__msg__E2eTrafficDetPair * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->e2e_traffic_det_maps.data[i]);
      PyObject * pyitem = deva_perception_msgs__msg__e2e_traffic_det_pair__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "e2e_traffic_det_maps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tracked_traffic_e2e_stable_maps
    PyObject * field = NULL;
    size_t size = ros_message->tracked_traffic_e2e_stable_maps.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_perception_msgs__msg__TrafficE2eStablePair * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->tracked_traffic_e2e_stable_maps.data[i]);
      PyObject * pyitem = deva_perception_msgs__msg__traffic_e2e_stable_pair__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "tracked_traffic_e2e_stable_maps", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tracked_traffic_e2ebc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tracked_traffic_e2ebc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tracked_traffic_e2ebc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tracked_traffic_e2ebc_stable
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->tracked_traffic_e2ebc_stable ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tracked_traffic_e2ebc_stable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rount_info
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__traffic_rount__convert_to_py(&ros_message->rount_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rount_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
