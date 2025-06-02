// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_uv:msg/UvState.idl
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
#include "px4_uv/msg/detail/uv_state__struct.h"
#include "px4_uv/msg/detail/uv_state__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool px4_uv__msg__uv_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[29];
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
    assert(strncmp("px4_uv.msg._uv_state.UvState", full_classname_dest, 28) == 0);
  }
  px4_uv__msg__UvState * ros_message = _ros_message;
  {  // pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "pos");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->pos)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->vel)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // current_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "current_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->current_yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ref_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ref_lat = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ref_lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ref_lon = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ref_alt
    PyObject * field = PyObject_GetAttrString(_pymsg, "ref_alt");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->ref_alt = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // battery
    PyObject * field = PyObject_GetAttrString(_pymsg, "battery");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->battery = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_uv__msg__uv_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of UvState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_uv.msg._uv_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "UvState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_uv__msg__UvState * ros_message = (px4_uv__msg__UvState *)raw_ros_message;
  {  // pos
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->pos);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->vel);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // current_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->current_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "current_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ref_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ref_lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ref_alt
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->ref_alt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ref_alt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // battery
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->battery);
    {
      int rc = PyObject_SetAttrString(_pymessage, "battery", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
