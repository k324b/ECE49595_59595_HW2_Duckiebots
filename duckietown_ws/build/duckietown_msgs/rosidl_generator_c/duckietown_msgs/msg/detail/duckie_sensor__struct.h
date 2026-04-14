// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/DuckieSensor.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__DUCKIE_SENSOR__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__DUCKIE_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DuckieSensor in the package duckietown_msgs.
/**
  * Sensors send value and type messages
  * For analog sensors value = 0..4095 and fvalue = 0.0..1.0
  * For digital sensors value= 0..1 and fvalue = 0.0
 */
typedef struct duckietown_msgs__msg__DuckieSensor
{
  uint16_t value;
  float fvalue;
  bool is_analog;
  rosidl_runtime_c__String name;
} duckietown_msgs__msg__DuckieSensor;

// Struct for a sequence of duckietown_msgs__msg__DuckieSensor.
typedef struct duckietown_msgs__msg__DuckieSensor__Sequence
{
  duckietown_msgs__msg__DuckieSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__DuckieSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__DUCKIE_SENSOR__STRUCT_H_
