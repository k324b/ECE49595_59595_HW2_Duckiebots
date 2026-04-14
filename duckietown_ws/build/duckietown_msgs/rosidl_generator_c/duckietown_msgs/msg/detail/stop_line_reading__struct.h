// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from duckietown_msgs:msg/StopLineReading.idl
// generated code does not contain a copyright notice

#ifndef DUCKIETOWN_MSGS__MSG__DETAIL__STOP_LINE_READING__STRUCT_H_
#define DUCKIETOWN_MSGS__MSG__DETAIL__STOP_LINE_READING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'stop_line_point'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/StopLineReading in the package duckietown_msgs.
typedef struct duckietown_msgs__msg__StopLineReading
{
  std_msgs__msg__Header header;
  bool stop_line_detected;
  bool at_stop_line;
  /// this is in the "lane frame"
  geometry_msgs__msg__Point stop_line_point;
} duckietown_msgs__msg__StopLineReading;

// Struct for a sequence of duckietown_msgs__msg__StopLineReading.
typedef struct duckietown_msgs__msg__StopLineReading__Sequence
{
  duckietown_msgs__msg__StopLineReading * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} duckietown_msgs__msg__StopLineReading__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DUCKIETOWN_MSGS__MSG__DETAIL__STOP_LINE_READING__STRUCT_H_
