// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from robot_interfaces:msg/Pwm.idl
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
#include "robot_interfaces/msg/detail/pwm__struct.h"
#include "robot_interfaces/msg/detail/pwm__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool robot_interfaces__msg__pwm__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[30];
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
    assert(strncmp("robot_interfaces.msg._pwm.Pwm", full_classname_dest, 29) == 0);
  }
  robot_interfaces__msg__Pwm * ros_message = _ros_message;
  {  // motor1
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor1 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motor2
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor2 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motor3
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor3");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor3 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motor4
    PyObject * field = PyObject_GetAttrString(_pymsg, "motor4");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motor4 = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * robot_interfaces__msg__pwm__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Pwm */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("robot_interfaces.msg._pwm");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Pwm");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  robot_interfaces__msg__Pwm * ros_message = (robot_interfaces__msg__Pwm *)raw_ros_message;
  {  // motor1
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor2
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor3
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motor4
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->motor4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motor4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
