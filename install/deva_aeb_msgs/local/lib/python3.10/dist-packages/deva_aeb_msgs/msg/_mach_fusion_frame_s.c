// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_aeb_msgs:msg/MachFusionFrame.idl
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
#include "deva_aeb_msgs/msg/detail/mach_fusion_frame__struct.h"
#include "deva_aeb_msgs/msg/detail/mach_fusion_frame__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_aeb_msgs__msg__mach_fusion_frame__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("deva_aeb_msgs.msg._mach_fusion_frame.MachFusionFrame", full_classname_dest, 52) == 0);
  }
  deva_aeb_msgs__msg__MachFusionFrame * ros_message = _ros_message;
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
  {  // frame_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "frame_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->frame_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // rv_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "rv_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rv_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // bev_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "bev_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bev_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // front_radar_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_radar_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->front_radar_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // front_right_radar_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_right_radar_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->front_right_radar_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // front_left_radar_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "front_left_radar_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->front_left_radar_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // back_left_radar_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "back_left_radar_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->back_left_radar_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // back_right_radar_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "back_right_radar_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->back_right_radar_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // lidar_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "lidar_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->lidar_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // ins_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "ins_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ins_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // rfu2camera_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "rfu2camera_pose");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 7;
      double * dest = ros_message->rfu2camera_pose;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // ego2camera_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "ego2camera_pose");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 7;
      double * dest = ros_message->ego2camera_pose;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // rfu_ego_pose_matirx
    PyObject * field = PyObject_GetAttrString(_pymsg, "rfu_ego_pose_matirx");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 16;
      double * dest = ros_message->rfu_ego_pose_matirx;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // rfu_imu_pose_matirx
    PyObject * field = PyObject_GetAttrString(_pymsg, "rfu_imu_pose_matirx");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 16;
      double * dest = ros_message->rfu_imu_pose_matirx;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // ego_world_pose_matirx
    PyObject * field = PyObject_GetAttrString(_pymsg, "ego_world_pose_matirx");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 16;
      double * dest = ros_message->ego_world_pose_matirx;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // camera_k_matrix
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_k_matrix");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 9;
      double * dest = ros_message->camera_k_matrix;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // imu_world_translation
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_world_translation");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 3;
      double * dest = ros_message->imu_world_translation;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // imu_world_rotation
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu_world_rotation");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 4;
      double * dest = ros_message->imu_world_rotation;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // rfu2camera_pose_front
    PyObject * field = PyObject_GetAttrString(_pymsg, "rfu2camera_pose_front");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 7;
      double * dest = ros_message->rfu2camera_pose_front;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // rfu2camera_pose_front_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "rfu2camera_pose_front_left");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 7;
      double * dest = ros_message->rfu2camera_pose_front_left;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // rfu2camera_pose_front_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "rfu2camera_pose_front_right");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 7;
      double * dest = ros_message->rfu2camera_pose_front_right;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // rfu2camera_pose_back
    PyObject * field = PyObject_GetAttrString(_pymsg, "rfu2camera_pose_back");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 7;
      double * dest = ros_message->rfu2camera_pose_back;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // rfu2camera_pose_back_left
    PyObject * field = PyObject_GetAttrString(_pymsg, "rfu2camera_pose_back_left");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 7;
      double * dest = ros_message->rfu2camera_pose_back_left;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // rfu2camera_pose_back_right
    PyObject * field = PyObject_GetAttrString(_pymsg, "rfu2camera_pose_back_right");
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
      assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
      Py_ssize_t size = 7;
      double * dest = ros_message->rfu2camera_pose_back_right;
      for (Py_ssize_t i = 0; i < size; ++i) {
        double tmp = *(npy_float64 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // vehile_report_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehile_report_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vehile_report_time = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // reserve1
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserve1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserve1 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // reserve2
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserve2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserve2 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // reserve3
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserve3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserve3 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // reserve4
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserve4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserve4 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // reserve5
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserve5");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserve5 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // reserve6
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserve6");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserve6 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // reserve7
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserve7");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserve7 = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_aeb_msgs__msg__mach_fusion_frame__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MachFusionFrame */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_aeb_msgs.msg._mach_fusion_frame");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MachFusionFrame");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_aeb_msgs__msg__MachFusionFrame * ros_message = (deva_aeb_msgs__msg__MachFusionFrame *)raw_ros_message;
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
  {  // frame_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->frame_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "frame_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rv_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->rv_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rv_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bev_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->bev_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bev_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_radar_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->front_radar_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_radar_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_right_radar_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->front_right_radar_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_right_radar_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // front_left_radar_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->front_left_radar_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "front_left_radar_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // back_left_radar_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->back_left_radar_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "back_left_radar_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // back_right_radar_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->back_right_radar_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "back_right_radar_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lidar_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->lidar_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "lidar_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ins_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->ins_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ins_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rfu2camera_pose
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "rfu2camera_pose");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->rfu2camera_pose[0]);
    memcpy(dst, src, 7 * sizeof(double));
    Py_DECREF(field);
  }
  {  // ego2camera_pose
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "ego2camera_pose");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->ego2camera_pose[0]);
    memcpy(dst, src, 7 * sizeof(double));
    Py_DECREF(field);
  }
  {  // rfu_ego_pose_matirx
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "rfu_ego_pose_matirx");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->rfu_ego_pose_matirx[0]);
    memcpy(dst, src, 16 * sizeof(double));
    Py_DECREF(field);
  }
  {  // rfu_imu_pose_matirx
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "rfu_imu_pose_matirx");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->rfu_imu_pose_matirx[0]);
    memcpy(dst, src, 16 * sizeof(double));
    Py_DECREF(field);
  }
  {  // ego_world_pose_matirx
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "ego_world_pose_matirx");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->ego_world_pose_matirx[0]);
    memcpy(dst, src, 16 * sizeof(double));
    Py_DECREF(field);
  }
  {  // camera_k_matrix
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "camera_k_matrix");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->camera_k_matrix[0]);
    memcpy(dst, src, 9 * sizeof(double));
    Py_DECREF(field);
  }
  {  // imu_world_translation
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "imu_world_translation");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->imu_world_translation[0]);
    memcpy(dst, src, 3 * sizeof(double));
    Py_DECREF(field);
  }
  {  // imu_world_rotation
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "imu_world_rotation");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->imu_world_rotation[0]);
    memcpy(dst, src, 4 * sizeof(double));
    Py_DECREF(field);
  }
  {  // rfu2camera_pose_front
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "rfu2camera_pose_front");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->rfu2camera_pose_front[0]);
    memcpy(dst, src, 7 * sizeof(double));
    Py_DECREF(field);
  }
  {  // rfu2camera_pose_front_left
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "rfu2camera_pose_front_left");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->rfu2camera_pose_front_left[0]);
    memcpy(dst, src, 7 * sizeof(double));
    Py_DECREF(field);
  }
  {  // rfu2camera_pose_front_right
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "rfu2camera_pose_front_right");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->rfu2camera_pose_front_right[0]);
    memcpy(dst, src, 7 * sizeof(double));
    Py_DECREF(field);
  }
  {  // rfu2camera_pose_back
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "rfu2camera_pose_back");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->rfu2camera_pose_back[0]);
    memcpy(dst, src, 7 * sizeof(double));
    Py_DECREF(field);
  }
  {  // rfu2camera_pose_back_left
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "rfu2camera_pose_back_left");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->rfu2camera_pose_back_left[0]);
    memcpy(dst, src, 7 * sizeof(double));
    Py_DECREF(field);
  }
  {  // rfu2camera_pose_back_right
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "rfu2camera_pose_back_right");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT64);
    assert(sizeof(npy_float64) == sizeof(double));
    npy_float64 * dst = (npy_float64 *)PyArray_GETPTR1(seq_field, 0);
    double * src = &(ros_message->rfu2camera_pose_back_right[0]);
    memcpy(dst, src, 7 * sizeof(double));
    Py_DECREF(field);
  }
  {  // vehile_report_time
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->vehile_report_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehile_report_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserve1
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->reserve1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserve1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserve2
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->reserve2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserve2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserve3
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->reserve3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserve3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserve4
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->reserve4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserve4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserve5
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->reserve5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserve5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserve6
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->reserve6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserve6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserve7
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->reserve7);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserve7", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
