// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_uv:msg/Action.idl
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
#include "px4_uv/msg/detail/action__struct.h"
#include "px4_uv/msg/detail/action__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool px4_uv__msg__action__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[26];
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
    assert(strncmp("px4_uv.msg._action.Action", full_classname_dest, 25) == 0);
  }
  px4_uv__msg__Action * ros_message = _ros_message;
  {  // agent_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "agent_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->agent_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // action
    PyObject * field = PyObject_GetAttrString(_pymsg, "action");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->action = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // setpoint
    PyObject * field = PyObject_GetAttrString(_pymsg, "setpoint");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->setpoint)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // param1
    PyObject * field = PyObject_GetAttrString(_pymsg, "param1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->param1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // param2
    PyObject * field = PyObject_GetAttrString(_pymsg, "param2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->param2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // param3
    PyObject * field = PyObject_GetAttrString(_pymsg, "param3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->param3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // param4
    PyObject * field = PyObject_GetAttrString(_pymsg, "param4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->param4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // param5
    PyObject * field = PyObject_GetAttrString(_pymsg, "param5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->param5 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * px4_uv__msg__action__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Action */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_uv.msg._action");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Action");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_uv__msg__Action * ros_message = (px4_uv__msg__Action *)raw_ros_message;
  {  // agent_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->agent_id.data,
      strlen(ros_message->agent_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "agent_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // action
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->action);
    {
      int rc = PyObject_SetAttrString(_pymessage, "action", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // setpoint
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->setpoint);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "setpoint", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->param1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->param2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->param3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->param4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // param5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->param5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "param5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
