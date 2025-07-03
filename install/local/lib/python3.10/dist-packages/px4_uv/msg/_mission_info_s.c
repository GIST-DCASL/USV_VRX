// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from px4_uv:msg/MissionInfo.idl
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
#include "px4_uv/msg/detail/mission_info__struct.h"
#include "px4_uv/msg/detail/mission_info__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "px4_uv/msg/detail/task_info__functions.h"
// end nested array functions include
bool px4_uv__msg__task_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * px4_uv__msg__task_info__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool px4_uv__msg__mission_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[37];
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
    assert(strncmp("px4_uv.msg._mission_info.MissionInfo", full_classname_dest, 36) == 0);
  }
  px4_uv__msg__MissionInfo * ros_message = _ros_message;
  {  // mission_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "mission_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->mission_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // description
    PyObject * field = PyObject_GetAttrString(_pymsg, "description");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->description, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // leftup_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "leftup_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leftup_lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // leftup_lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "leftup_lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->leftup_lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rightdown_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "rightdown_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rightdown_lat = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rightdown_lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "rightdown_lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rightdown_lon = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_height
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_height");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_height = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tasks
    PyObject * field = PyObject_GetAttrString(_pymsg, "tasks");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tasks'");
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
    if (!px4_uv__msg__TaskInfo__Sequence__init(&(ros_message->tasks), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create px4_uv__msg__TaskInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    px4_uv__msg__TaskInfo * dest = ros_message->tasks.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!px4_uv__msg__task_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
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
PyObject * px4_uv__msg__mission_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MissionInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("px4_uv.msg._mission_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MissionInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  px4_uv__msg__MissionInfo * ros_message = (px4_uv__msg__MissionInfo *)raw_ros_message;
  {  // mission_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->mission_id.data,
      strlen(ros_message->mission_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "mission_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // description
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->description.data,
      strlen(ros_message->description.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "description", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leftup_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leftup_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leftup_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // leftup_lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->leftup_lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "leftup_lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rightdown_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rightdown_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rightdown_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rightdown_lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rightdown_lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rightdown_lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_height
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_height);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_height", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tasks
    PyObject * field = NULL;
    size_t size = ros_message->tasks.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    px4_uv__msg__TaskInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->tasks.data[i]);
      PyObject * pyitem = px4_uv__msg__task_info__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "tasks", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
