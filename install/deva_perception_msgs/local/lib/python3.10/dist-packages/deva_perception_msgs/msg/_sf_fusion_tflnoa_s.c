// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/SFFusionTFLNOA.idl
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
#include "deva_perception_msgs/msg/detail/sf_fusion_tflnoa__struct.h"
#include "deva_perception_msgs/msg/detail/sf_fusion_tflnoa__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool deva_perception_msgs__msg__traffic_region__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__traffic_region__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__quadrangle_vcs__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__quadrangle_vcs__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__quadrangle_img__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__quadrangle_img__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__traffic_region__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__traffic_region__convert_to_py(void * raw_ros_message);
bool deva_perception_msgs__msg__traffic_region__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__traffic_region__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__sf_fusion_tflnoa__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[58];
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
    assert(strncmp("deva_perception_msgs.msg._sf_fusion_tflnoa.SFFusionTFLNOA", full_classname_dest, 57) == 0);
  }
  deva_perception_msgs__msg__SFFusionTFLNOA * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // lifetime
    PyObject * field = PyObject_GetAttrString(_pymsg, "lifetime");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lifetime = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // relevancy
    PyObject * field = PyObject_GetAttrString(_pymsg, "relevancy");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->relevancy = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // color
    PyObject * field = PyObject_GetAttrString(_pymsg, "color");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->color = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cycle_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "cycle_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cycle_time = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // number
    PyObject * field = PyObject_GetAttrString(_pymsg, "number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->number = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // confi
    PyObject * field = PyObject_GetAttrString(_pymsg, "confi");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->confi = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // flashstatus
    PyObject * field = PyObject_GetAttrString(_pymsg, "flashstatus");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->flashstatus = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // background
    PyObject * field = PyObject_GetAttrString(_pymsg, "background");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->background = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserved
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserved");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserved = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // poslgt
    PyObject * field = PyObject_GetAttrString(_pymsg, "poslgt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->poslgt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // poslat
    PyObject * field = PyObject_GetAttrString(_pymsg, "poslat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->poslat = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // height
    PyObject * field = PyObject_GetAttrString(_pymsg, "height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->height = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // region
    PyObject * field = PyObject_GetAttrString(_pymsg, "region");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__traffic_region__convert_from_py(field, &ros_message->region)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // tflquadranglevcs
    PyObject * field = PyObject_GetAttrString(_pymsg, "tflquadranglevcs");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__quadrangle_vcs__convert_from_py(field, &ros_message->tflquadranglevcs)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // tflquadrangleimg
    PyObject * field = PyObject_GetAttrString(_pymsg, "tflquadrangleimg");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__quadrangle_img__convert_from_py(field, &ros_message->tflquadrangleimg)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // utmx
    PyObject * field = PyObject_GetAttrString(_pymsg, "utmx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->utmx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // utmy
    PyObject * field = PyObject_GetAttrString(_pymsg, "utmy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->utmy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // utmz
    PyObject * field = PyObject_GetAttrString(_pymsg, "utmz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->utmz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // type_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "type_list");
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
      Py_ssize_t size = 4;
      uint8_t * dest = ros_message->type_list;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // color_list
    PyObject * field = PyObject_GetAttrString(_pymsg, "color_list");
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
      Py_ssize_t size = 4;
      uint8_t * dest = ros_message->color_list;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // blocked
    PyObject * field = PyObject_GetAttrString(_pymsg, "blocked");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->blocked = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // has_count_down
    PyObject * field = PyObject_GetAttrString(_pymsg, "has_count_down");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->has_count_down = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // light_num
    PyObject * field = PyObject_GetAttrString(_pymsg, "light_num");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->light_num = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // focus
    PyObject * field = PyObject_GetAttrString(_pymsg, "focus");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->focus = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pole
    PyObject * field = PyObject_GetAttrString(_pymsg, "pole");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pole = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // sync_from_track_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "sync_from_track_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sync_from_track_id = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // source
    PyObject * field = PyObject_GetAttrString(_pymsg, "source");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->source = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f120_region
    PyObject * field = PyObject_GetAttrString(_pymsg, "f120_region");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__traffic_region__convert_from_py(field, &ros_message->f120_region)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // f30_region
    PyObject * field = PyObject_GetAttrString(_pymsg, "f30_region");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__traffic_region__convert_from_py(field, &ros_message->f30_region)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // i_back1
    PyObject * field = PyObject_GetAttrString(_pymsg, "i_back1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->i_back1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // i_back2
    PyObject * field = PyObject_GetAttrString(_pymsg, "i_back2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->i_back2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // i_back3
    PyObject * field = PyObject_GetAttrString(_pymsg, "i_back3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->i_back3 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // f_back1
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_back1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_back1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_back2
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_back2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_back2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // f_back3
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_back3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->f_back3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__sf_fusion_tflnoa__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SFFusionTFLNOA */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._sf_fusion_tflnoa");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SFFusionTFLNOA");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__SFFusionTFLNOA * ros_message = (deva_perception_msgs__msg__SFFusionTFLNOA *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lifetime
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->lifetime);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lifetime", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // relevancy
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->relevancy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "relevancy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // color
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->color);
    {
      int rc = PyObject_SetAttrString(_pymessage, "color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cycle_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cycle_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cycle_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // confi
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->confi);
    {
      int rc = PyObject_SetAttrString(_pymessage, "confi", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flashstatus
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->flashstatus);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flashstatus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // background
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->background);
    {
      int rc = PyObject_SetAttrString(_pymessage, "background", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserved
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserved);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserved", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // poslgt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->poslgt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "poslgt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // poslat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->poslat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "poslat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // region
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__traffic_region__convert_to_py(&ros_message->region);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "region", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tflquadranglevcs
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__quadrangle_vcs__convert_to_py(&ros_message->tflquadranglevcs);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tflquadranglevcs", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tflquadrangleimg
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__quadrangle_img__convert_to_py(&ros_message->tflquadrangleimg);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tflquadrangleimg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utmx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->utmx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utmx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utmy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->utmy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utmy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // utmz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->utmz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "utmz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type_list
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "type_list");
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
    uint8_t * src = &(ros_message->type_list[0]);
    memcpy(dst, src, 4 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // color_list
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "color_list");
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
    uint8_t * src = &(ros_message->color_list[0]);
    memcpy(dst, src, 4 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // blocked
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->blocked);
    {
      int rc = PyObject_SetAttrString(_pymessage, "blocked", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // has_count_down
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->has_count_down);
    {
      int rc = PyObject_SetAttrString(_pymessage, "has_count_down", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // light_num
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->light_num);
    {
      int rc = PyObject_SetAttrString(_pymessage, "light_num", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // focus
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->focus);
    {
      int rc = PyObject_SetAttrString(_pymessage, "focus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pole
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pole);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pole", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sync_from_track_id
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->sync_from_track_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sync_from_track_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // source
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->source);
    {
      int rc = PyObject_SetAttrString(_pymessage, "source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f120_region
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__traffic_region__convert_to_py(&ros_message->f120_region);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "f120_region", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f30_region
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__traffic_region__convert_to_py(&ros_message->f30_region);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "f30_region", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // i_back1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->i_back1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i_back1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // i_back2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->i_back2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i_back2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // i_back3
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->i_back3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "i_back3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_back1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_back1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_back1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_back2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_back2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_back2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // f_back3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->f_back3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "f_back3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
