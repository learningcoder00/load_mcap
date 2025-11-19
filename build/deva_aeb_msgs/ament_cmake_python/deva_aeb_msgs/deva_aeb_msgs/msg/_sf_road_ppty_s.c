// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_aeb_msgs:msg/SFRoadPpty.idl
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
#include "deva_aeb_msgs/msg/detail/sf_road_ppty__struct.h"
#include "deva_aeb_msgs/msg/detail/sf_road_ppty__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool deva_aeb_msgs__msg__sf_road_ppty__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("deva_aeb_msgs.msg._sf_road_ppty.SFRoadPpty", full_classname_dest, 42) == 0);
  }
  deva_aeb_msgs__msg__SFRoadPpty * ros_message = _ros_message;
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
  {  // lanewidth
    PyObject * field = PyObject_GetAttrString(_pymsg, "lanewidth");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->lanewidth = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // offslat
    PyObject * field = PyObject_GetAttrString(_pymsg, "offslat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->offslat = (float)PyFloat_AS_DOUBLE(field);
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
  {  // crvtrate
    PyObject * field = PyObject_GetAttrString(_pymsg, "crvtrate");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 3;
      float * dest = ros_message->crvtrate;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // crvtratevalidsize
    PyObject * field = PyObject_GetAttrString(_pymsg, "crvtratevalidsize");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->crvtratevalidsize = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seglen
    PyObject * field = PyObject_GetAttrString(_pymsg, "seglen");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 3;
      float * dest = ros_message->seglen;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // seglenvalidsize
    PyObject * field = PyObject_GetAttrString(_pymsg, "seglenvalidsize");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->seglenvalidsize = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // strtd
    PyObject * field = PyObject_GetAttrString(_pymsg, "strtd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->strtd = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vld
    PyObject * field = PyObject_GetAttrString(_pymsg, "vld");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vld = (uint8_t)PyLong_AsUnsignedLong(field);
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
  {  // titohiqly
    PyObject * field = PyObject_GetAttrString(_pymsg, "titohiqly");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
      Py_ssize_t size = 32;
      float * dest = ros_message->titohiqly;
      for (Py_ssize_t i = 0; i < size; ++i) {
        float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // titohiqlyvalidsize
    PyObject * field = PyObject_GetAttrString(_pymsg, "titohiqlyvalidsize");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->titohiqlyvalidsize = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // objidtitohiqly
    PyObject * field = PyObject_GetAttrString(_pymsg, "objidtitohiqly");
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
      Py_ssize_t size = 32;
      uint8_t * dest = ros_message->objidtitohiqly;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // objidtitohiqlyvalidsize
    PyObject * field = PyObject_GetAttrString(_pymsg, "objidtitohiqlyvalidsize");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->objidtitohiqlyvalidsize = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // distancewithlowconfidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "distancewithlowconfidence");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distancewithlowconfidence = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // distancewithhiahconfidence
    PyObject * field = PyObject_GetAttrString(_pymsg, "distancewithhiahconfidence");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->distancewithhiahconfidence = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_aeb_msgs__msg__sf_road_ppty__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SFRoadPpty */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_aeb_msgs.msg._sf_road_ppty");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SFRoadPpty");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_aeb_msgs__msg__SFRoadPpty * ros_message = (deva_aeb_msgs__msg__SFRoadPpty *)raw_ros_message;
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
  {  // lanewidth
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->lanewidth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lanewidth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // offslat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->offslat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "offslat", field);
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
  {  // crvtrate
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "crvtrate");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->crvtrate[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // crvtratevalidsize
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->crvtratevalidsize);
    {
      int rc = PyObject_SetAttrString(_pymessage, "crvtratevalidsize", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seglen
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "seglen");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->seglen[0]);
    memcpy(dst, src, 3 * sizeof(float));
    Py_DECREF(field);
  }
  {  // seglenvalidsize
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->seglenvalidsize);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seglenvalidsize", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // strtd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->strtd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "strtd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vld
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vld);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vld", field);
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
  {  // titohiqly
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "titohiqly");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->titohiqly[0]);
    memcpy(dst, src, 32 * sizeof(float));
    Py_DECREF(field);
  }
  {  // titohiqlyvalidsize
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->titohiqlyvalidsize);
    {
      int rc = PyObject_SetAttrString(_pymessage, "titohiqlyvalidsize", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // objidtitohiqly
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "objidtitohiqly");
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
    uint8_t * src = &(ros_message->objidtitohiqly[0]);
    memcpy(dst, src, 32 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // objidtitohiqlyvalidsize
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->objidtitohiqlyvalidsize);
    {
      int rc = PyObject_SetAttrString(_pymessage, "objidtitohiqlyvalidsize", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distancewithlowconfidence
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distancewithlowconfidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distancewithlowconfidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // distancewithhiahconfidence
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->distancewithhiahconfidence);
    {
      int rc = PyObject_SetAttrString(_pymessage, "distancewithhiahconfidence", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
